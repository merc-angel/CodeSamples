#include <assert.h>

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stdlib.h>
#include <string.h>
#include "HexDump.h"



/**
  Directory header at t18 s0
  BAM starts at t18 s0  (pointer to start of directory at bytes 0 & 1)
  BAM takes up 1 sector
  Directory starts at t18 s1
  Directory takes up 18 sectors
*/


using namespace std;
#if 0
#ifdef _MSC_VER
#  define BEGINPACK _Pragma pack(push, 1)
#  define ENDPACK _Pragma pack(pop)
#elif defined(__GNUC__)
#  define BEGINPACK
#  define ENDPACK __attribute__((packed));
#endif
#endif

typedef struct Sector {
    uint8_t nextTrack;
    uint8_t nextSector;
    uint8_t data[254];
}_Sector;

#pragma pack (push, 1)

typedef struct AllocationMap {
    uint8_t freeSectors;
    uint8_t allocMap[3];
}_AllocationMap;

typedef struct Bam {
    uint8_t nextTrack;
    uint8_t nextSector;
    uint8_t formatId;
    uint8_t doubleSide;
    AllocationMap allocationMap[35];
    uint8_t discName[16];
    uint8_t fill1[2];
    char discId[2];
    uint8_t fill2;
    uint8_t dosVersion;
    uint8_t formatIdCopy;
    uint8_t fill3[4];
    uint8_t driveMode1[4];
    uint8_t driveMode2[4];
    uint8_t driveMode3;
    uint8_t unused[76];
}_Bam2;
#pragma pack (pop)

// 30 bytes
typedef struct FileEntry {
    uint8_t fileType;
    uint8_t firstTrack;
    uint8_t firstSector;
    uint8_t fileName[16];
    uint8_t reserved[9];
    uint16_t blockCount;
}_FileEntry;

// 32 bytes
typedef struct DirEntry {
    uint8_t nextTrack;  // only used in first entry!
    uint8_t nextSector; // only used in first entry!
    FileEntry file;
}_DirEntry;

// one sector of Dirs (256 bytes)
typedef struct Dir {
    DirEntry entry[8];
}_Dir;

FILE* imageFile;


const char* getType(uint8_t typeId) {
    switch(typeId) {
        case 0x80 : return "DEL";
        case 0x81 : return "SEQ";
        case 0x82 : return "PRG";
        case 0x83 : return "USR";
        case 0x84 : return "REL";
    }

    return "???";
}

// NOTE: NOT REENTRANT!
const char* getName(uint8_t* name) {
    static uint8_t result[17];
    memcpy(result, name, 16);
    result[16] = 0;
    for (int idx = 0;  idx < 16;  idx++) {
        if (result[idx] == 0xa0) {
            result[idx] = ' ';
        }
    }
    return (char*) result;
}


static inline string rtrim(std::string &s) {
   size_t beg = s.find_first_not_of(" \r\n");
   return (beg == string::npos) ? "" : s.substr(beg, s.find_last_not_of(" \r\n") - beg + 1);
}

string toBinary(uint8_t value) {
    static char result[9];
    uint8_t mask = 0x80;

    for (int idx = 0;  idx < 8;  idx++) {
        if (value & mask) {
            result[idx] = '1';
        } else {
            result[idx] = '0';
        }
        mask = mask >> 1;
    }
    result[8] = 0;
    return result;
}

// Track
// ----------------------------------------------
//  1..17 => 17 tracks * 21 sectors = 357 blocks
// 18..24 =>  7 tracks * 19 sectors = 133 blocks (Track 18 is directory/bam)
// 25..30 =>  6 tracks * 18 sectors = 108 blocks
// 31..25 =>  5 tracks * 17 sectors = 85 blocks
//           ==========           ======
//           35 tracks               683 blocks (-19 = 664 data blocks)
// BAM: 4 bytes per track ; 4 * 35 = 140 bytes

Sector* readSector(int track, int sector) {

    // calculate the sector number
    int absoluteSector = 0;

    if (track < 18) {
        // zone 1
        absoluteSector = (track - 1) * 21 + sector;
    } else if (track < 25) {
        // zone 2
        absoluteSector = (17 * 21) + (track - 18) * 19 + sector;
    } else if (track < 31) {
        // zone 3
        absoluteSector = (17 * 21) + (7 * 19) + (track - 25) * 18 + sector;
    } else {
        // zone 4
        absoluteSector = (17 * 21) + (7 * 19) + (6 * 18) + (track - 31) * 17 + sector;
    }
//    printf("Absolute sector: %d\n", absoluteSector);
    int sectorOffset = 256 * absoluteSector;
//    printf("Sector offset  : %d (%x)\n", sectorOffset, sectorOffset);

//    cout << "\rR " << track << "," << sector;
    Sector* result = (Sector*) calloc(1, sizeof(Sector));
    fseek(imageFile, sectorOffset, SEEK_SET);
    fread(result, sizeof(Sector), 1, imageFile);
    return result;
}

void writeSectorEx(Sector* sect, int track, int sector, bool dump) {
    // calculate the sector number
    int absoluteSector = 0;

    if (track < 18) {
        // zone 1
        absoluteSector = (track - 1) * 21 + sector;
    } else if (track < 25) {
        // zone 2
        absoluteSector = (17 * 21) + (track - 18) * 19 + sector;
    } else if (track < 31) {
        // zone 3
        absoluteSector = (17 * 21) + (7 * 19) + (track - 25) * 18 + sector;
    } else {
        // zone 4
        absoluteSector = (17 * 21) + (7 * 19) + (6 * 18) + (track - 31) * 17 + sector;
    }
//    printf("Absolute sector: %d\n", absoluteSector);
    int sectorOffset = 256 * absoluteSector;
//    printf("Sector offset  : %d (%x)\n", sectorOffset, sectorOffset);

    if (dump) {
        cout << "\rW " << track << "," << sector;
    }
    fseek(imageFile, sectorOffset, SEEK_SET);
    fwrite(sect, sizeof(Sector), 1, imageFile);
    fflush(imageFile);
}

void writeSector(Sector* sect, int track, int sector) {
    writeSectorEx(sect, track, sector, false);
}

// see above - writeSector calculates an "absolute" sector anyway ...
uint16_t toBlock(uint8_t track, uint8_t sector) {
    if (track < 18) {
        // zone 1
        return (track - 1) * 21 + sector;
    } else if (track < 25) {
        // zone 2
        return (17 * 21) + (track - 18) * 19 + sector;
    } else if (track < 31) {
        // zone 3
        return (17 * 21) + (7 * 19) + (track - 25) * 18 + sector;
    } else {
        // zone 4
        return (17 * 21) + (7 * 19) + (6 * 18) + (track - 31) * 17 + sector;
    }

    return 0;
}


void toTrackSector(uint16_t block, uint8_t& track, uint8_t& sector) {
    // Track
// ----------------------------------------------
//  1..17 => 17 tracks * 21 sectors = 357 blocks
// 18..24 =>  7 tracks * 19 sectors = 133 blocks (Track 18 is directory/bam)
// 25..30 =>  6 tracks * 18 sectors = 108 blocks
// 31..25 =>  5 tracks * 17 sectors = 85 blocks
    track = 0;
    sector = 0;
    if (block < 357) {
        track = 1 + (block / 21);
        sector = block % 21;
        return;
    }

    block -= 357;
    if (block < 133) {
        track = 18 + block / 19;
        sector = block % 19;
        return;
    }

    block -= 133;
    if (block < 108) {
        track = 25 + block / 18;
        sector = block % 18;
        return;
    }
    
    block -= 108;
    if (block < 85) {
        track = 31 + block / 17;
        sector = block % 17;
    }
}


void dumpSector(Sector* sector) {
    HexDump* dump = new_HexDump((uint8_t*)sector, sizeof(Sector));
    HexDump_dumpAll(dump);
    free(dump);
}

void dumpBam(Bam* bam) {
    printf("Next Track/Sector: %d/%d\n", bam->nextTrack, bam->nextSector);
    char discName[17];
    memcpy(discName, bam->discName, 16);
    discName[16] = 0;
    printf("Disk name        : %s\n", discName);
    printf("Format id        : %d\n", bam->formatId);
    printf("Double sided     : %d\n", bam->doubleSide);
    printf("Disc id          : %c%c\n", bam->discId[0], bam->discId[1]);
    printf("DOS version      : %c\n", bam->dosVersion);
    printf("Format id copy   : %d\n", bam->formatIdCopy);
    printf("Drive mode       : %d/%d/%d\n", bam->driveMode1[0], bam->driveMode2[0], bam->driveMode3);

    printf("            [2]      [1]      [0]\n");
    printf("            21111 111111\n");
    printf("Trk Free ---09876 54321098 76543210\n");
    for (int idx = 0;  idx < 35;  idx++) {
        printf("%2d.  %d  %s %s %s\n", idx + 1, bam->allocationMap[idx].freeSectors,
               toBinary(bam->allocationMap[idx].allocMap[2]).c_str(),
               toBinary(bam->allocationMap[idx].allocMap[1]).c_str(),
               toBinary(bam->allocationMap[idx].allocMap[0]).c_str());
    }
}

uint16_t getFreeBlocks(Bam* bam) {
    uint16_t result = 0;
    for (int idx = 0;  idx < 35;  idx++) {
        if (idx != 17) {    // Track 18 is BAM/Directory
            result += bam->allocationMap[idx].freeSectors;
        }
    }
    return result;
}

void dumpDir(Dir* dir) {
    printf("Next Track/Sector: %d/%d\n", dir->entry[0].nextTrack, dir->entry[0].nextSector);

    for (int idx = 0;  idx < 8;  idx++) {
        FileEntry* fileEntry = &dir->entry[idx].file;
        char fileName[17];
        memcpy(fileName, fileEntry->fileName, 16);
        fileName[16] = 0;

        printf("%s  %16s  %d (%d/%d)\n",
               getType(fileEntry->fileType), fileName,
               fileEntry->blockCount, fileEntry->firstTrack, fileEntry->firstSector);
    }
}


void listContents() {
    cerr << endl;
    Bam* bam = (Bam*) readSector(18, 0);

    printf("\"%16s\"\n", getName(bam->discName));
    printf("------------------------------------\n");

    uint8_t nextTrack = bam->nextTrack;
    uint8_t nextSector = bam->nextSector;
    while(nextTrack != 0 && nextSector != 255) {
        cerr << endl;
        Dir* dir = (Dir*) readSector(nextTrack, nextSector);
        for (int idx = 0;  idx < 8;  idx++) {
            FileEntry* fileEntry = &dir->entry[idx].file;

            if (fileEntry->fileType != 0) {
                printf("%s  \"%16s\"  %d\n", getType(fileEntry->fileType), getName(fileEntry->fileName), fileEntry->blockCount);
            }
        }
        nextTrack = dir->entry[0].nextTrack;
        nextSector = dir->entry[0].nextSector;
    }
}


FileEntry* searchFile(const char* fileName) {
    cerr << endl;
    Bam* bam = (Bam*) readSector(18, 0);
    uint8_t nextTrack = bam->nextTrack;
    uint8_t nextSector = bam->nextSector;
    free(bam);

    while(nextTrack != 0 && nextSector != 255) {
        cerr << endl;
        Dir* dir = (Dir*) readSector(nextTrack, nextSector);
        for (int idx = 0;  idx < 8;  idx++) {
            FileEntry* fileEntry = &dir->entry[idx].file;
            if (fileEntry->fileType != 0) {
                string entryName = getName(fileEntry->fileName);
                entryName = rtrim(entryName);
                if (entryName == fileName) {
                    return fileEntry;
                }
            }
        }
        nextTrack = dir->entry[0].nextTrack;
        nextSector = dir->entry[0].nextSector;
    }

    return 0;
}

uint8_t dirTrack = 0;
uint8_t dirSector = 0;

Dir* searchFile(const string& fileName, uint8_t& idx) {
    cerr << endl;
    Bam* bam = (Bam*) readSector(18, 0);
    uint8_t nextTrack = bam->nextTrack;
    uint8_t nextSector = bam->nextSector;
    free(bam);

    while(nextTrack != 0 && nextSector != 255) {
        Dir* dir = (Dir*) readSector(nextTrack, nextSector);
        for (idx = 0;  idx < 8;  idx++) {
            FileEntry* fileEntry = &dir->entry[idx].file;
            if (fileEntry->fileType != 0) {
                string entryName = getName(fileEntry->fileName);
                entryName = rtrim(entryName);
                if (entryName == fileName) {
                    dirTrack = nextTrack;
                    dirSector = nextSector;
                    return dir;
                }
            }
        }
        nextTrack = dir->entry[0].nextTrack;
        nextSector = dir->entry[0].nextSector;
        free(dir);
    }

    return 0;
}

FileEntry* createEntry(const string& fileName) {
    cerr << endl;
    Bam* bam = (Bam*) readSector(18, 0);
    uint8_t nextTrack = bam->nextTrack;
    uint8_t nextSector = bam->nextSector;
    while(nextTrack != 0 && nextSector != 255) {
        cerr << endl;
        Dir* dir = (Dir*) readSector(nextTrack, nextSector);
        for (int idx = 0;  idx < 8;  idx++) {
            FileEntry* fileEntry = &dir->entry[idx].file;
            if (fileEntry->fileType == 0) {
                fileEntry->fileType = 0x82;
                strcpy((char*) fileEntry->fileName, fileName.c_str());
                for (int idx = strlen((char*) fileEntry->fileName);  idx < 16;  idx++) {
                    fileEntry->fileName[idx] = 0xA0;
                }
                fileEntry->blockCount = 0;
                fileEntry->firstSector = 0;
                fileEntry->firstTrack = 0;

                //cout << "WRITING ..." << (int) nextTrack  << "," << (int) nextSector << endl;
                //dumpDir(dir);
                cerr << endl;
                writeSector((Sector*) dir, nextTrack, nextSector);
                return fileEntry;
            }
        }
        nextTrack = dir->entry[0].nextTrack;
        nextSector = dir->entry[0].nextSector;
    }

    return 0;
}


void dumpFile(FileEntry* entry) {
    uint8_t nextTrack = entry->firstTrack;
    uint8_t nextSector = entry->firstSector;
    while(nextTrack != 0) {
        cerr << endl;
        Sector* sec = readSector(nextTrack, nextSector);
        nextTrack = sec->nextTrack;
        nextSector = sec->nextSector;
        int count = 254;
        if (nextTrack == 0) {
            count = nextSector - 1;
        }
        printf("%d bytes\n", count);
        HexDump* dump = new_HexDump((uint8_t*)sec + 2, sizeof(Sector) - 2);
        HexDump_dumpAll(dump);
        free(dump);

        nextTrack = sec->nextTrack;
        nextSector = sec->nextSector;
    }
}

std::vector<std::string> split(const std::string &text, char sep) {
  std::vector<std::string> tokens;
  std::size_t start = 0, end = 0;
  while ((end = text.find(sep, start)) != std::string::npos) {
    tokens.push_back(text.substr(start, end - start));
    start = end + 1;
  }
  tokens.push_back(text.substr(start));
  return tokens;
}


static string prompt = "> ";

void mount(const string& fileName) {
    if (imageFile != 0) {
        fclose(imageFile);
    }
    cout << "Mounting " << fileName << endl;
    imageFile = fopen(fileName.c_str(), "r+b");
    if (imageFile == 0) {
        cout << "Could not mount " << fileName << endl;
        exit(0);
    } else {
        size_t pos = fileName.rfind("\\");
        if (pos == string::npos) {
            pos = fileName.rfind("/");
        }
        if (pos != string::npos) {
            prompt = fileName.substr(pos + 1) + "> ";
        } else {
            prompt = fileName + "> ";
        }
    }
}


void umount() {
    if (imageFile != 0) {
        fclose(imageFile);
        imageFile = 0;
        prompt = "> ";
    }
}


void allocateBlock(uint8_t& trackResult, uint8_t& sectorResult) {
    cerr << endl;
    Bam* bam = (Bam*) readSector(18, 0);
    // dumpBam(bam);

    int track = -1;
    int sector = -1;
    // simple allocation algorithm - probably the 1541 uses a different one!
    for (int idx = 16;  track == -1 && idx >= 0;  idx--) {
        if (bam->allocationMap[idx].freeSectors > 0) {
            track = idx;

            for (int mapIdx = 0; mapIdx < 3;  mapIdx++) {
                sector = mapIdx * 8;
                if (bam->allocationMap[track].allocMap[mapIdx] > 0) {
                    // this map portion contains at least one non-allocated block
                    uint8_t mask = 0x01;
                    while((bam->allocationMap[track].allocMap[mapIdx] & mask) == 0) {
                       sector++;
                       mask = mask << 1;
                    }

                    bam->allocationMap[track].allocMap[mapIdx] &= ~mask;
                    bam->allocationMap[track].freeSectors -= 1;
                    break;
                }
            }
        }
    }

// TODO!!!
//    for (int idx = 18;  track == -1 && idx < 35;  idx++) {
//        if (bam->allocationMap[idx].freeSectors > 0) {
//            track = idx;
//        }
//    }

    // dumpBam(bam);
    cerr << endl;
    writeSector((Sector*) bam, 18, 0);

    trackResult = track + 1;
    sectorResult = sector;
    cout << "Using Sector " << (int) trackResult << "," << (int) sectorResult << endl;
}



void copyIn(const string& srcFile, const string& dstFile) {
    uint8_t entryIdx = 0;
    Dir* dir = searchFile(dstFile, entryIdx);
    if (dir == 0) {
        cout << "Destination file \"" << dstFile << "\" not found." << endl;
        return;
    }
    FileEntry* entry = &dir->entry[entryIdx].file;

    FILE* src = fopen(srcFile.c_str(), "rb");
    if (src == 0) {
        cout << "Source file \"" << srcFile << "\" not found." << endl;
        return;
    }

    // obtain the file size
    fseek(src, 0L, SEEK_END);
    long fileSize = ftell(src);
    fseek(src, 0L, SEEK_SET);
    long blockCount = 0;
    if (fileSize > 0) {
        blockCount = ((fileSize - 1) / 254) + 1;
    }

    cout << "File Size: " << fileSize << " bytes."  << endl;
    cout << "Block count: " << blockCount << " blocks" << endl;

/******************************************************************************/

    if (entry->firstTrack  == 0) {
        cout << " Allocating new sector ..." << endl;
        allocateBlock(entry->firstTrack, entry->firstSector);
    }
    entry->blockCount = blockCount;
    cerr << endl;
    writeSector((Sector*) dir, dirTrack, dirSector);

    uint8_t track = entry->firstTrack;
    uint8_t sector = entry->firstSector;
    printf("---------------------------%d %d", track, sector);

    // TODO: What if old data is stored in that track (nextTrack/nextSector)?
    // probably that "reusage" approach does not make sense at all ...
    while(blockCount > 0) {
        blockCount--;
        cerr << endl;
        Sector* sect = readSector(track, sector);
        size_t readCount = fread(sect->data, 1, 254, src);

        if (blockCount == 0) {
            // last sector
            sect->nextTrack = 0;                 // last sector indicator
            sect->nextSector = readCount + 1;    // byte count of last sector (index of last byte - including the first two meta data bytes)
        } else {
            if (sect->nextTrack == 0) {
                cout << " Allocating new sector ..." << endl;
                allocateBlock(sect->nextTrack, sect->nextSector);
            }
        }
        cerr << endl;
        writeSector(sect, track, sector);
        track = sect->nextTrack;
        sector = sect->nextSector;
    }

/*****************************************************************************/

    fclose(src);
}



void dir() {
    if (imageFile == 0) {
        cout << "No image mounted." << endl;
        return;
    }
    cerr << endl;
    Bam* bam = (Bam*) readSector(18, 0);

    printf("\n0 \"%16s\" %c%c %c%c\n", getName(bam->discName), bam->discId[0], bam->discId[1], bam->dosVersion, bam->formatIdCopy);
    printf("--------------------------\n");

    uint8_t nextTrack = bam->nextTrack;
    uint8_t nextSector = bam->nextSector;
    while(nextTrack != 0 && nextSector != 255) {
        Dir* dir = (Dir*) readSector(nextTrack, nextSector);
        for (int idx = 0;  idx < 8;  idx++) {
            FileEntry* fileEntry = &dir->entry[idx].file;

            if (fileEntry->fileType != 0) {
                string entryName = getName(fileEntry->fileName);
                entryName = "\"" + rtrim(entryName) + "\"";
                printf("%-3d  %-18s %s\n",
                       fileEntry->blockCount,
                       entryName.c_str(),
                       getType(fileEntry->fileType));
            }
        }
        nextTrack = dir->entry[0].nextTrack;
        nextSector = dir->entry[0].nextSector;

        free(dir);
    }
    uint16_t freeBlocks = getFreeBlocks(bam);
    cout << freeBlocks << " Blocks free." << endl << endl;
    free(bam);
}


void dump(const string& name) {

    FileEntry* fileEntry = searchFile(name.c_str());
    if (fileEntry == 0) {
        cout << "File not found." << endl;
        return;
    }

    dumpFile(fileEntry);
}


void dumpSector(uint8_t track, uint8_t sector) {
    cerr << endl;
    Sector* sect = readSector(track, sector);

    HexDump* dump = new_HexDump((uint8_t*) sect, sizeof(Sector));
    HexDump_dumpAll(dump);
    free(dump);
    free(sect);
}



uint8_t nextTrack = 0;
uint8_t nextSector = 0;
uint16_t offset = 0;
Sector* sec = 0;

uint16_t readWord() {

    if (offset > 0xfd) {    // 254 data bytes per sector
        if (sec == 0) {
            free(sec);
        }
        cerr << endl;
        sec = readSector(nextTrack, nextSector);
        nextTrack = sec->nextTrack;
        nextSector = sec->nextSector;
        offset = 0;
    }

    uint16_t result = sec->data[offset] + sec->data[offset+1] * 256;
    offset += 2;
    return result;
}

uint8_t readChar() {

    if (offset > 0xfd) {    // 254 data bytes per sector
        if (sec == 0) {
            free(sec);
        }
        cerr << endl;
        sec = readSector(nextTrack, nextSector);
        nextTrack = sec->nextTrack;
        nextSector = sec->nextSector;
        offset = 0;
    }

    uint8_t result = sec->data[offset];
    offset += 1;
    return result;
}

void dumpBasic(const string& name) {
    FileEntry* fileEntry = searchFile(name.c_str());
    if (fileEntry == 0) {
        cout << "File not found." << endl;
        return;
    }

    nextTrack = fileEntry->firstTrack;
    nextSector = fileEntry->firstSector;
    offset = 0x100;

    uint16_t loadAddr = readWord();
    uint16_t nextAddr = readWord();  // TODO: does not work yet when the word is on a block border!
    uint16_t nextLine = readWord();
    string basLine = "";
    while(nextAddr != 0) {
        uint8_t data = readChar();
        if (data == 0) {
            cout << hex << setw(4) << loadAddr << ": " << dec << nextLine << " " << basLine << endl;
            loadAddr = nextAddr;
            nextAddr = readWord();
            nextLine = readWord();
            basLine = "";
        } else {
            if (data == 0x99) {
                basLine += "PRINT";
            } else if (data == 0x9e) {
                basLine += "SYS";
            } else {
                basLine += data;
            }
        }
    }
}

void createFile(const string& name) {
    FileEntry* fileEntry = searchFile(name.c_str());
    if (fileEntry != 0) {
        cout << "File already exists." << endl;
        return;
    }

    createEntry(name.c_str());
}


void createImage(const string& fileName) {
    Sector* nix = (Sector*) calloc(sizeof(Sector), 1);
    imageFile = fopen(fileName.c_str(), "wb");
    for (uint16_t block = 0;  block < 683;  block++) {
        uint8_t track = 0;
        uint8_t sector = 0;
        toTrackSector(block, track, sector);
        writeSectorEx(nix, track, sector, true);
    }

    Bam* bam = (Bam*) nix;
    
    strcpy((char*) bam->discName, "TEST");
    for (int idx = strlen((char*) bam->discName);  idx < 16;  idx++) {
        bam->discName[idx] = 0xA0;
    }

    bam->nextTrack = 18;
    bam->nextSector = 1;
    bam->formatId = 'A';
    bam->fill1[0] = 0xA0;
    bam->fill1[1] = 0xA0;
    bam->discId[0] = '1';
    bam->discId[1] = 'A';
    bam->fill2 = 0xA0;
    bam->dosVersion = '2';
    bam->formatIdCopy = 'A';
    bam->fill3[0] = 0xA0;
    bam->fill3[1] = 0xA0;
    bam->fill3[2] = 0xA0;
    bam->fill3[3] = 0xA0;

    //  1..17 => 17 tracks * 21 sectors = 357 blocks
    // 18..24 =>  7 tracks * 19 sectors = 133 blocks (Track 18 is directory/bam)
    // 25..30 =>  6 tracks * 18 sectors = 108 blocks
    // 31..35 =>  5 tracks * 17 sectors = 85 blocks
    for (uint8_t track = 0;  track < 17;  track++) {
        bam->allocationMap[track].freeSectors = 21;
        bam->allocationMap[track].allocMap [0] = 0xff;
        bam->allocationMap[track].allocMap [1] = 0xff;
        bam->allocationMap[track].allocMap [2] = 0x1f;
    }
    for (uint8_t track = 17;  track < 24;  track++) {
        bam->allocationMap[track].freeSectors = 19;
        bam->allocationMap[track].allocMap [0] = 0xff;
        bam->allocationMap[track].allocMap [1] = 0xff;
        bam->allocationMap[track].allocMap [2] = 0x07;
    }
    for (uint8_t track = 24;  track < 30;  track++) {
        bam->allocationMap[track].freeSectors = 18;
        bam->allocationMap[track].allocMap [0] = 0xff;
        bam->allocationMap[track].allocMap [1] = 0xff;
        bam->allocationMap[track].allocMap [2] = 0x03;
    }
    for (uint8_t track = 30;  track < 35;  track++) {
        bam->allocationMap[track].freeSectors = 17;
        bam->allocationMap[track].allocMap [0] = 0xff;
        bam->allocationMap[track].allocMap [1] = 0xff;
        bam->allocationMap[track].allocMap [2] = 0x01;
    }
    // two sectors on track 18 already allocated!
    bam->allocationMap[18 - 1].allocMap[0] = 0xfc;
    cerr << endl;
    writeSector((Sector*) bam, 18, 0);
    fclose(imageFile);
}



void repl() {
    //printf("sizeof(Sector): %d\n", sizeof(Sector));
    assert(sizeof(Sector) == 256);
    //printf("sizeof(Bam): %d\n", sizeof(Bam));
    assert(sizeof(Bam) == 256);

//    mount("C:\\Users\\afester\\Documents\\Andreas\\test.d64");

    string line;
    while(1) {
        cout << prompt;
        std::getline(cin, line);
        if (line != "") {

            vector<string> tokens = split(line, ' ');
    //        vector<string>::const_iterator t = tokens.begin();
    //        while(t != tokens.end()) {
    //            cout << "|  " << *t << endl;
    //            t++;
    //        }

            string command = tokens[0];
            if (command == "exit") {
                return;
            }
            else if (command == "mount") {
                if (tokens.size() != 2) {
                    cout << "Usage: mount pathToDiskImage" << endl;
                } else {
                    mount(tokens[1]);
                }
            }
            else if (command == "umount") {
                if (imageFile != 0) {
                    umount();
                }
            } else if (command == "format") {
                if (tokens.size() != 2) {
                    cout << "Usage: format imgFile" << endl;
                } else {
                    createImage(tokens[1]);
                }
            } else if (command == "dir") {
                dir();
            }
            else if (command == "dumpSector") {
                if (tokens.size() != 3) {
                    cout << "Usage: dumpSector track sector" << endl;
                } else {
                    dumpSector(atoi(tokens[1].c_str()), atoi(tokens[2].c_str()));
                }
            } else if (command == "dumpBam") {
                cerr << endl;
                Bam* bam = (Bam*) readSector(18, 0);
                dumpBam(bam);
            } else if (command == "dump") {
                if (tokens.size() != 2) {
                    cout << "Usage: dump fileName" << endl;
                } else {
                    dump(tokens[1]);
                }
            }
            else if (command == "dumpBasic") {
                if (tokens.size() != 2) {
                    cout << "Usage: dumpBasic fileName" << endl;
                } else {
                    dumpBasic(tokens[1]);
                }
            }
            else if (command == "create") {
                if (tokens.size() != 2) {
                    cout << "Usage: create filename" << endl;
                } else {
                    createFile(tokens[1]);
                }
            }
            else if (command == "copy") {
                if (tokens.size() != 3) {
                    cout << "Usage: copy src desc" << endl;
                } else {
                    string src = tokens[1];
                    string dest = tokens[2];
                    cout << "Copy " << src << " to " << dest << endl;
                }
            }
            else if (command == "copyin") {
                if (tokens.size() != 3) {
                    cout << "Usage: copyin src desc" << endl;
                } else {
                    string src = tokens[1];
                    string dest = tokens[2];
                    copyIn(src, dest);
                }
            }
            else if (command == "help") {
                cout << "exit" << endl;
                cout << "format imageFile" << endl;
                cout << "mount imageFile" << endl;
                cout << "umount imageFile" << endl;
                cout << "create" << endl;
                cout << "dump fileName" << endl;
                cout << "dumpSector track sector" << endl;
                cout << "dumpBasic fileName" << endl;
            } else {
                cout << "Unknown command: " << command << endl;
            }
        }
    }
}


void usage() {
    cout << "Usage: c64disc command parameters" << endl;
    cout << "   createImage imageName" << endl;
    cout << "   copyin imageName srcFile destFile" << endl;
    cout << "   dir" << endl;
}


void copyInBatch(vector<string>& args) {
//    for (vector<string>::const_iterator iter = args.begin(); iter != args.end();  iter++) {
//        cout << *iter << endl;
//    }

    if (args.size() != 3) {
        usage();
        return;
    }
    
    const string image = args[0];
    const string src = args[1];
    const string dest = args[2];
    
    mount(image);

    //Bam* bam = (Bam*) readSector(18, 0);
    //dumpBam(bam);

    // dir();
    
    copyIn(src, dest);

    umount();
}


void dirBatch(vector<string>& args) {
    if (args.size() != 1) {
        usage();
        return;
    }
    
    const string image = args[0];
    
    mount(image);
    dir();
    umount();
}


void batch(vector<string>& args) {
//    for (vector<string>::const_iterator iter = args.begin(); iter != args.end();  iter++) {
//        cout << "|" << *iter << "|" << endl;
//    }

    if (args[0] == "copyin") {
        copyInBatch(vector<string>(args.begin() + 1, args.end()));
    } else if (args[0] == "dir") {
        dirBatch(vector<string>(args.begin() + 1, args.end()));
    } else if (args[0] == "createImage") {
        createImage(args[1]);        
    } else {
        usage();
    }
}


int main(int argc, char* argv[]) {

    if (argc < 2) {
        repl();
    } else {
        vector<string> args = vector<string>();
        for (int i = 1;  i < argc;  i++) {
            args.push_back(argv[i]);
        }
        batch(args);
    }

    return 0;
}
