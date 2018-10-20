#include <stdlib.h>
#include "ILI9481.h"
#include "avr/pgmspace.h"

const Bitmap8 g0 PROGMEM = {31, 42,
  {0xc0, 0x11, 0x12, 0x13, 0x14, 0x13, 0x15, 0x16, 0xf0, 0x60, 0x17, 0x14, 0x88, 0x19, 0x15, 0xf0, 
   0x30, 0x15, 0xc8, 0x1a, 0x1b, 0xf0, 0x12, 0xe8, 0x1c, 0x1b, 0xd0, 0x11, 0x58, 0x1a, 0x1d, 0x17, 
   0x10, 0x11, 0x1e, 0x1c, 0x48, 0x19, 0xc0, 0x1b, 0x1c, 0x48, 0x15, 0x60, 0x1b, 0x1a, 0x48, 0x1e, 
   0xb0, 0x1e, 0x48, 0x1e, 0x80, 0x1b, 0x1c, 0x48, 0x1b, 0xa0, 0x48, 0x19, 0xa0, 0x1d, 0x48, 0x1e, 
   0x90, 0x15, 0x48, 0x15, 0xb0, 0x19, 0x38, 0x1c, 0x90, 0x1f, 0x48, 0xc0, 0x12, 0x48, 0x11, 0x80, 
   0x48, 0x1f, 0xc0, 0x17, 0x48, 0x1e, 0x70, 0x16, 0x48, 0x1e, 0xd0, 0x48, 0x1f, 0x70, 0x1d, 0x48, 
   0x11, 0xd0, 0x1f, 0x48, 0x70, 0x1e, 0x48, 0x16, 0xd0, 0x14, 0x48, 0x70, 0x14, 0x48, 0xe0, 0x13, 
   0x48, 0x17, 0x60, 0x1f, 0x48, 0xe0, 0x15, 0x48, 0x11, 0x60, 0x1f, 0x48, 0xe0, 0x1d, 0x48, 0x11, 
   0x60, 0x1f, 0x48, 0xe0, 0x1d, 0x48, 0x11, 0x60, 0x1f, 0x48, 0xe0, 0x1d, 0x48, 0x11, 0x60, 0x1f, 
   0x48, 0xe0, 0x1d, 0x48, 0x11, 0x60, 0x1f, 0x48, 0xe0, 0x1d, 0x48, 0x11, 0x60, 0x1f, 0x48, 0xe0, 
   0x15, 0x48, 0x11, 0x60, 0x14, 0x48, 0xe0, 0x13, 0x48, 0x16, 0x60, 0x1e, 0x48, 0x16, 0xd0, 0x14, 
   0x48, 0x70, 0x1d, 0x48, 0x11, 0xd0, 0x1f, 0x48, 0x70, 0x16, 0x48, 0x1e, 0xd0, 0x48, 0x1f, 0x80, 
   0x48, 0x1f, 0xc0, 0x17, 0x48, 0x1e, 0x80, 0x1f, 0x48, 0xc0, 0x12, 0x48, 0x11, 0x80, 0x15, 0x48, 
   0x15, 0xb0, 0x19, 0x38, 0x1c, 0x90, 0x1b, 0x48, 0x19, 0xa0, 0x11, 0x48, 0x1e, 0xa0, 0x13, 0x48, 
   0x12, 0x80, 0x1b, 0x19, 0x48, 0x1b, 0xa0, 0x1b, 0x58, 0x15, 0x60, 0x1b, 0x1a, 0x48, 0x1e, 0xc0, 
   0x1d, 0x58, 0x1f, 0x11, 0x1b, 0x10, 0x17, 0x12, 0x1c, 0x48, 0x19, 0xe0, 0x1e, 0xe8, 0x1c, 0x17, 
   0xf0, 0x12, 0xc8, 0x19, 0x17, 0xf0, 0x20, 0x17, 0x1f, 0x88, 0x1c, 0x12, 0xf0, 0x60, 0x1b, 0x1d, 
   0x13, 0x24, 0x13, 0x12, 0x16, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0x20}};

const Bitmap8 g1 PROGMEM = {32, 42,
  {0xf0, 0xf0, 0xc0, 0x17, 0x1d, 0x13, 0x1f, 0x58, 0x1d, 0xf0, 0x30, 0x16, 0x1e, 0x1f, 0xa8, 0x1d, 
   0xf0, 0x30, 0x14, 0xc8, 0x1d, 0xf0, 0x30, 0x14, 0xc8, 0x1d, 0xf0, 0x30, 0x14, 0x58, 0x1f, 0x2e, 
   0x48, 0x1d, 0xf0, 0x30, 0x14, 0x1f, 0x1e, 0x1d, 0x17, 0x30, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 
   0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 
   0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 
   0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 
   0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 
   0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 
   0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 
   0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 
   0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0xb0, 0x11, 0x48, 0x1d, 0xf0, 0x40, 0xf8, 0x58, 0xc0, 0xf8, 
   0x58, 0xc0, 0xf8, 0x58, 0xc0, 0xf8, 0x58, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0x20}};

const Bitmap8 g2 PROGMEM = {31, 42,
  {0x90, 0x1b, 0x11, 0x12, 0x13, 0x14, 0x23, 0x1d, 0x16, 0xf0, 0x40, 0x11, 0x13, 0x19, 0x98, 0x1c, 
   0x1e, 0x1b, 0xd0, 0x1b, 0x13, 0x1c, 0xf8, 0x12, 0xc0, 0x11, 0xf8, 0x38, 0x1f, 0xb0, 0x11, 0x68, 
   0x1f, 0x1e, 0x3d, 0x1e, 0x1a, 0x68, 0x14, 0xa0, 0x11, 0x38, 0x14, 0x11, 0x80, 0x17, 0x1a, 0x58, 
   0x11, 0x90, 0x11, 0x18, 0x1e, 0x1b, 0xc0, 0x1f, 0x48, 0x19, 0x90, 0x2b, 0xe0, 0x1b, 0x1c, 0x48, 
   0x17, 0xf0, 0xa0, 0x1e, 0x48, 0x1d, 0xf0, 0xa0, 0x11, 0x48, 0x1e, 0xf0, 0xa0, 0x11, 0x48, 0x13, 
   0xf0, 0xa0, 0x11, 0x48, 0x12, 0xf0, 0xa0, 0x12, 0x48, 0x11, 0xf0, 0xa0, 0x1a, 0x48, 0x1b, 0xf0, 
   0x90, 0x11, 0x48, 0x1f, 0xf0, 0xa0, 0x19, 0x48, 0x16, 0xf0, 0x90, 0x14, 0x48, 0x13, 0xf0, 0x90, 
   0x15, 0x48, 0x19, 0xf0, 0x90, 0x11, 0x58, 0x16, 0xf0, 0x80, 0x16, 0x58, 0x11, 0xf0, 0x80, 0x16, 
   0x58, 0x15, 0xf0, 0x80, 0x17, 0x1c, 0x48, 0x15, 0xf0, 0x80, 0x17, 0x1c, 0x48, 0x12, 0xf0, 0x80, 
   0x17, 0x1c, 0x48, 0x12, 0xf0, 0x80, 0x17, 0x1c, 0x48, 0x1e, 0xf0, 0x80, 0x17, 0x1c, 0x48, 0x1e, 
   0xf0, 0x80, 0x17, 0x1c, 0x48, 0x13, 0xf0, 0x80, 0x17, 0x1c, 0x48, 0x13, 0xf0, 0x80, 0x1b, 0x1c, 
   0x48, 0x14, 0xf0, 0x80, 0x1b, 0x1c, 0x48, 0x14, 0xf0, 0x80, 0x1b, 0x1c, 0x48, 0x14, 0xf0, 0x80, 
   0x1b, 0x1c, 0x48, 0x14, 0xf0, 0x90, 0x15, 0xf8, 0x68, 0x14, 0x80, 0x15, 0xf8, 0x68, 0x14, 0x80, 
   0x15, 0xf8, 0x68, 0x14, 0x80, 0x15, 0xf8, 0x68, 0x14, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xb0}};

const Bitmap8 g3 PROGMEM = {32, 42,
  {0xa0, 0x16, 0x1d, 0x15, 0x13, 0x24, 0x13, 0x12, 0x1d, 0x1b, 0xf0, 0x30, 0x11, 0x13, 0x1a, 0xb8, 
   0x19, 0x12, 0xf0, 0x11, 0xf8, 0x18, 0x1c, 0x11, 0xd0, 0x11, 0xf8, 0x38, 0x12, 0xc0, 0x11, 0x48, 
   0x1a, 0x14, 0x12, 0x3d, 0x15, 0x14, 0x19, 0x68, 0x1d, 0xb0, 0x11, 0x19, 0x1e, 0x11, 0xa0, 0x11, 
   0x1c, 0x48, 0x1c, 0xf0, 0xb0, 0x1b, 0x1c, 0x48, 0x15, 0xf0, 0xb0, 0x1d, 0x48, 0x14, 0xf0, 0xc0, 
   0x48, 0x19, 0xf0, 0xc0, 0x1c, 0x38, 0x1c, 0xf0, 0xc0, 0x1c, 0x38, 0x1a, 0xf0, 0xc0, 0x48, 0x14, 
   0xf0, 0xb0, 0x15, 0x48, 0x11, 0xf0, 0xa0, 0x16, 0x48, 0x1a, 0xf0, 0x90, 0x1b, 0x1e, 0x48, 0x1c, 
   0x1b, 0xf0, 0x10, 0x17, 0x54, 0x1f, 0x1c, 0x58, 0x19, 0x17, 0xf0, 0x20, 0x11, 0xa8, 0x1a, 0x15, 
   0xf0, 0x40, 0x11, 0x98, 0x1c, 0x13, 0x16, 0xf0, 0x40, 0x11, 0xc8, 0x1f, 0x1b, 0xf0, 0x20, 0x1b, 
   0x61, 0x12, 0x1f, 0x58, 0x1c, 0x16, 0xf0, 0xa0, 0x17, 0x1f, 0x48, 0x1c, 0x1b, 0xf0, 0xb0, 0x13, 
   0x48, 0x14, 0xf0, 0xc0, 0x19, 0x48, 0x1b, 0xf0, 0xb0, 0x15, 0x48, 0x15, 0xf0, 0xb0, 0x1b, 0x48, 
   0x13, 0xf0, 0xc0, 0x48, 0x14, 0xf0, 0xc0, 0x48, 0x14, 0xf0, 0xb0, 0x17, 0x48, 0x13, 0xf0, 0xb0, 
   0x12, 0x48, 0x15, 0xf0, 0xa0, 0x1b, 0x1c, 0x48, 0x17, 0x80, 0x27, 0xe0, 0x1b, 0x1a, 0x48, 0x1a, 
   0x90, 0x11, 0x18, 0x1f, 0x1d, 0xb0, 0x15, 0x1c, 0x58, 0x16, 0x90, 0x11, 0x48, 0x1a, 0x13, 0x15, 
   0x1d, 0x21, 0x1d, 0x12, 0x14, 0x78, 0x12, 0xa0, 0x11, 0xf8, 0x48, 0x12, 0xb0, 0x11, 0xf8, 0x28, 
   0x19, 0x11, 0xd0, 0x16, 0x1e, 0x1a, 0xc8, 0x1f, 0x15, 0xf0, 0x40, 0x16, 0x1d, 0x1e, 0x13, 0x34, 
   0x13, 0x15, 0x11, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x80}};

const Bitmap8 g4 PROGMEM = {31, 42,
  {0xf0, 0xf0, 0xf0, 0x20, 0x15, 0x58, 0x1c, 0xf0, 0x80, 0x1b, 0x68, 0x1c, 0xf0, 0x80, 0x1f, 0x68, 
   0x1c, 0xf0, 0x70, 0x1d, 0x78, 0x1c, 0xf0, 0x60, 0x1b, 0x1c, 0x28, 0x19, 0x48, 0x1c, 0xf0, 0x60, 
   0x14, 0x38, 0x16, 0x1c, 0x38, 0x1c, 0xf0, 0x50, 0x1d, 0x38, 0x13, 0x10, 0x1c, 0x38, 0x1c, 0xf0, 
   0x40, 0x1b, 0x1c, 0x28, 0x1c, 0x20, 0x1c, 0x38, 0x1c, 0xf0, 0x40, 0x14, 0x38, 0x11, 0x20, 0x1c, 
   0x38, 0x1c, 0xf0, 0x30, 0x11, 0x38, 0x14, 0x30, 0x1c, 0x38, 0x1c, 0xf0, 0x20, 0x1b, 0x1c, 0x38, 
   0x1b, 0x30, 0x1c, 0x38, 0x1c, 0xf0, 0x20, 0x14, 0x38, 0x15, 0x40, 0x1c, 0x38, 0x1c, 0xf0, 0x10, 
   0x11, 0x38, 0x1a, 0x50, 0x1c, 0x38, 0x1c, 0xf0, 0x10, 0x1c, 0x38, 0x17, 0x50, 0x1c, 0x38, 0x1c, 
   0xf0, 0x13, 0x38, 0x12, 0x60, 0x1c, 0x38, 0x1c, 0xe0, 0x11, 0x38, 0x19, 0x70, 0x1c, 0x38, 0x1c, 
   0xe0, 0x19, 0x38, 0x16, 0x70, 0x1c, 0x38, 0x1c, 0xd0, 0x1e, 0x38, 0x1e, 0x80, 0x1c, 0x38, 0x1c, 
   0xc0, 0x16, 0x38, 0x19, 0x90, 0x1c, 0x38, 0x1c, 0xc0, 0x19, 0x38, 0x11, 0x90, 0x1c, 0x38, 0x1c, 
   0xb0, 0x1e, 0x38, 0x14, 0xa0, 0x1c, 0x38, 0x1c, 0xa0, 0x17, 0x38, 0x1c, 0x1b, 0xa0, 0x1c, 0x38, 
   0x1c, 0xa0, 0x14, 0x38, 0x13, 0xb6, 0x58, 0x56, 0x50, 0x14, 0xf8, 0x98, 0x1c, 0x50, 0x14, 0xf8, 
   0x98, 0x1c, 0x50, 0x14, 0xf8, 0x98, 0x1c, 0x50, 0x12, 0xff, 0x58, 0x4f, 0x14, 0xf0, 0x60, 0x1c, 
   0x38, 0x1c, 0xf0, 0xb0, 0x1c, 0x38, 0x1c, 0xf0, 0xb0, 0x1c, 0x38, 0x1c, 0xf0, 0xb0, 0x1c, 0x38, 
   0x1c, 0xf0, 0xb0, 0x1c, 0x38, 0x1c, 0xf0, 0xb0, 0x1c, 0x38, 0x1c, 0xf0, 0xb0, 0x1c, 0x38, 0x1c, 
   0xf0, 0xb0, 0x1c, 0x38, 0x1c, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xe0}};

const Bitmap8 g5 PROGMEM = {32, 42,
  {0xf0, 0xf0, 0x80, 0x1f, 0xf8, 0x28, 0x1f, 0xd0, 0x1f, 0xf8, 0x28, 0x1f, 0xd0, 0x1f, 0xf8, 0x28, 
   0x1f, 0xd0, 0x1f, 0xf8, 0x28, 0x1f, 0xd0, 0x1f, 0x38, 0x13, 0xf0, 0xc0, 0x1f, 0x38, 0x13, 0xf0, 
   0xc0, 0x1f, 0x38, 0x13, 0xf0, 0xc0, 0x1f, 0x38, 0x13, 0xf0, 0xc0, 0x1f, 0x38, 0x13, 0xf0, 0xc0, 
   0x1f, 0x38, 0x13, 0xf0, 0xc0, 0x1f, 0x38, 0x13, 0xf0, 0xc0, 0x1f, 0x38, 0x13, 0xf0, 0xc0, 0x1f, 
   0x38, 0x1a, 0x1f, 0x68, 0x1f, 0x12, 0x1b, 0xf0, 0x20, 0x1f, 0xe8, 0x13, 0x1b, 0xf0, 0x1f, 0xf8, 
   0x1c, 0x11, 0xe0, 0x1f, 0x68, 0x2c, 0x98, 0x1d, 0xd0, 0x1f, 0x18, 0x14, 0x15, 0x17, 0x50, 0x1b, 
   0x15, 0x1a, 0x68, 0x17, 0xc0, 0x11, 0xc0, 0x1d, 0x58, 0x19, 0xf0, 0xb0, 0x16, 0x58, 0x11, 0xf0, 
   0xb0, 0x12, 0x48, 0x1f, 0xf0, 0xc0, 0x58, 0xf0, 0xc0, 0x14, 0x48, 0x17, 0xf0, 0xb0, 0x15, 0x48, 
   0x11, 0xf0, 0xb0, 0x1d, 0x48, 0x11, 0xf0, 0xb0, 0x1d, 0x48, 0x11, 0xf0, 0xb0, 0x1e, 0x48, 0x11, 
   0xf0, 0xb0, 0x1a, 0x48, 0x1b, 0xf0, 0xa0, 0x17, 0x48, 0x19, 0xf0, 0xb0, 0x1a, 0x48, 0x1e, 0x90, 
   0x27, 0xe0, 0x14, 0x58, 0x17, 0x90, 0x11, 0x18, 0x1f, 0x1d, 0xa0, 0x16, 0x19, 0x58, 0x1e, 0xa0, 
   0x11, 0x48, 0x1f, 0x13, 0x15, 0x1d, 0x21, 0x1d, 0x13, 0x19, 0x68, 0x1a, 0xb0, 0x11, 0xf8, 0x38, 
   0x1a, 0x1b, 0xb0, 0x11, 0xf8, 0x28, 0x1e, 0xd0, 0x1b, 0x15, 0x14, 0x1c, 0xb8, 0x1c, 0x1e, 0x1b, 
   0xf0, 0x30, 0x1b, 0x11, 0x1d, 0x13, 0x34, 0x13, 0x1e, 0x1d, 0x17, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x80}};

const Bitmap8 g6 PROGMEM = {31, 42,
  {0xe0, 0x11, 0x15, 0x13, 0x14, 0x23, 0x1d, 0x11, 0xf0, 0x50, 0x17, 0x13, 0xa8, 0x1a, 0x12, 0x1b, 
   0xf0, 0x13, 0xe8, 0x11, 0xd0, 0x1b, 0x19, 0xf8, 0x11, 0xc0, 0x1b, 0x1c, 0x58, 0x1c, 0x14, 0x15, 
   0x3d, 0x13, 0x1f, 0x38, 0x11, 0xc0, 0x1a, 0x48, 0x1c, 0x1d, 0x90, 0x1d, 0x1a, 0x11, 0xb0, 0x1e, 
   0x48, 0x1a, 0x1b, 0xf0, 0x80, 0x17, 0x48, 0x19, 0xf0, 0xa0, 0x14, 0x48, 0x16, 0xf0, 0x90, 0x1b, 
   0x48, 0x1f, 0xf0, 0xa0, 0x12, 0x48, 0x11, 0xf0, 0xa0, 0x1f, 0x48, 0xf0, 0xb0, 0x48, 0x14, 0xf0, 
   0xa0, 0x16, 0x48, 0x12, 0x30, 0x12, 0x1a, 0x58, 0x1f, 0x12, 0x1b, 0xc0, 0x1d, 0x48, 0x11, 0x10, 
   0x15, 0x1c, 0xa8, 0x12, 0xb0, 0x12, 0x48, 0x16, 0x1e, 0xd8, 0x1a, 0x1b, 0x90, 0x13, 0x48, 0x1e, 
   0x58, 0x34, 0x1a, 0x68, 0x1a, 0x90, 0x14, 0x78, 0x1c, 0x15, 0x50, 0x1b, 0x1e, 0x58, 0x13, 0x80, 
   0x14, 0x68, 0x1c, 0x17, 0x80, 0x1d, 0x58, 0x17, 0x70, 0x14, 0x68, 0x11, 0xa0, 0x1e, 0x48, 0x13, 
   0x70, 0x13, 0x58, 0x1f, 0xc0, 0x58, 0x70, 0x13, 0x58, 0x1d, 0xc0, 0x14, 0x48, 0x16, 0x60, 0x15, 
   0x58, 0x1b, 0xc0, 0x15, 0x48, 0x1d, 0x60, 0x11, 0x58, 0xd0, 0x11, 0x48, 0x15, 0x60, 0x16, 0x58, 
   0xd0, 0x11, 0x48, 0x13, 0x70, 0x58, 0xd0, 0x11, 0x48, 0x12, 0x70, 0x1a, 0x48, 0xd0, 0x1d, 0x48, 
   0x1d, 0x70, 0x12, 0x48, 0x16, 0xc0, 0x1e, 0x48, 0x11, 0x70, 0x17, 0x48, 0x1e, 0xc0, 0x19, 0x48, 
   0x90, 0x1a, 0x38, 0x1c, 0xb0, 0x16, 0x48, 0x1f, 0x90, 0x11, 0x48, 0x13, 0xa0, 0x19, 0x48, 0x1d, 
   0xa0, 0x1f, 0x48, 0x1e, 0x70, 0x1b, 0x1a, 0x48, 0x1a, 0xb0, 0x1b, 0x1c, 0x48, 0x19, 0x15, 0x16, 
   0x20, 0x11, 0x1e, 0x68, 0x17, 0xc0, 0x16, 0xf8, 0x18, 0x11, 0xe0, 0x16, 0x19, 0xc8, 0x19, 0x17, 
   0xf0, 0x20, 0x12, 0x1c, 0x88, 0x1c, 0x12, 0xf0, 0x60, 0x11, 0x12, 0x13, 0x24, 0x13, 0x15, 0x16, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x10}};

const Bitmap8 g7 PROGMEM = {32, 42,
  {0xf0, 0xf0, 0x70, 0xf8, 0x78, 0x1d, 0x90, 0xf8, 0x78, 0x1d, 0x90, 0xf8, 0x78, 0x16, 0x90, 0xf8, 
   0x68, 0x19, 0xf0, 0xb0, 0x15, 0x48, 0x12, 0xf0, 0xb0, 0x19, 0x48, 0x1b, 0xf0, 0xa0, 0x17, 0x48, 
   0x1f, 0xf0, 0xb0, 0x13, 0x48, 0x11, 0xf0, 0xb0, 0x48, 0x1c, 0xf0, 0xb0, 0x1d, 0x48, 0x1e, 0xf0, 
   0xb0, 0x1f, 0x48, 0x17, 0xf0, 0xa0, 0x17, 0x48, 0x1a, 0xf0, 0xb0, 0x1e, 0x48, 0x15, 0xf0, 0xb0, 
   0x1c, 0x48, 0xf0, 0xb0, 0x11, 0x48, 0x13, 0xf0, 0xb0, 0x14, 0x48, 0x16, 0xf0, 0xa0, 0x1b, 0x48, 
   0x19, 0xf0, 0xb0, 0x15, 0x48, 0x12, 0xf0, 0xb0, 0x19, 0x48, 0x1b, 0xf0, 0xa0, 0x16, 0x48, 0x1f, 
   0xf0, 0xb0, 0x13, 0x48, 0x11, 0xf0, 0xb0, 0x48, 0x1c, 0xf0, 0xb0, 0x1d, 0x48, 0x1e, 0xf0, 0xb0, 
   0x1a, 0x48, 0x17, 0xf0, 0xa0, 0x17, 0x48, 0x1a, 0xf0, 0xb0, 0x1e, 0x48, 0x15, 0xf0, 0xb0, 0x1c, 
   0x48, 0xf0, 0xb0, 0x11, 0x48, 0x13, 0xf0, 0xb0, 0x1f, 0x48, 0x16, 0xf0, 0xa0, 0x1b, 0x48, 0x19, 
   0xf0, 0xb0, 0x12, 0x48, 0x12, 0xf0, 0xb0, 0x19, 0x48, 0x1b, 0xf0, 0xa0, 0x16, 0x48, 0x1f, 0xf0, 
   0xb0, 0x13, 0x48, 0x11, 0xf0, 0xb0, 0x48, 0x1c, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0}};

const Bitmap8 g8 PROGMEM = {31, 42,
  {0xb0, 0x16, 0x1d, 0x23, 0x14, 0x13, 0x12, 0x11, 0x1b, 0xf0, 0x40, 0x17, 0x13, 0xa8, 0x1a, 0x15, 
   0xf0, 0x10, 0x12, 0xe8, 0x19, 0x17, 0xd0, 0x14, 0xf8, 0x28, 0x16, 0xb0, 0x12, 0x58, 0x1c, 0x12, 
   0x11, 0x1b, 0x10, 0x16, 0x1d, 0x1f, 0x58, 0x1c, 0x1b, 0x90, 0x1b, 0x58, 0x14, 0x80, 0x16, 0x1c, 
   0x48, 0x1e, 0x90, 0x12, 0x48, 0x1f, 0xa0, 0x16, 0x58, 0x90, 0x1f, 0x48, 0x16, 0xb0, 0x14, 0x48, 
   0x11, 0x80, 0x1c, 0x48, 0xc0, 0x1d, 0x48, 0x1d, 0x80, 0x48, 0x1f, 0xc0, 0x11, 0x48, 0x1d, 0x80, 
   0x19, 0x38, 0x1a, 0xc0, 0x11, 0x48, 0x1d, 0x80, 0x14, 0x48, 0xc0, 0x15, 0x48, 0x16, 0x80, 0x1d, 
   0x48, 0x11, 0xb0, 0x1a, 0x38, 0x1c, 0xa0, 0x19, 0x38, 0x19, 0x1b, 0x90, 0x1d, 0x48, 0x15, 0xa0, 
   0x16, 0x48, 0x1a, 0x17, 0x70, 0x12, 0x48, 0x1f, 0xc0, 0x11, 0x1c, 0x48, 0x1f, 0x12, 0x3d, 0x13, 
   0x1c, 0x48, 0x1f, 0xe0, 0x1b, 0x13, 0xc8, 0x19, 0x1d, 0xf0, 0x20, 0x1d, 0xa8, 0x1f, 0x17, 0xf0, 
   0x10, 0x12, 0x1c, 0xd8, 0x1a, 0x17, 0xc0, 0x1b, 0x1a, 0x58, 0x1f, 0x1e, 0x2d, 0x15, 0x13, 0x1c, 
   0x58, 0x15, 0xb0, 0x1a, 0x48, 0x1f, 0x17, 0x70, 0x1d, 0x1c, 0x48, 0x1d, 0x90, 0x12, 0x48, 0x14, 
   0xa0, 0x17, 0x1c, 0x48, 0x1b, 0x80, 0x48, 0x19, 0xc0, 0x1d, 0x48, 0x1e, 0x70, 0x1d, 0x48, 0x15, 
   0xd0, 0x1c, 0x38, 0x1c, 0x70, 0x13, 0x48, 0x17, 0xd0, 0x14, 0x48, 0x1b, 0x60, 0x14, 0x48, 0xe0, 
   0x12, 0x48, 0x11, 0x60, 0x14, 0x48, 0xe0, 0x15, 0x48, 0x11, 0x60, 0x14, 0x48, 0x1b, 0xd0, 0x13, 
   0x48, 0x16, 0x60, 0x1e, 0x48, 0x1d, 0xd0, 0x1a, 0x48, 0x70, 0x1d, 0x48, 0x1f, 0xc0, 0x17, 0x48, 
   0x19, 0x80, 0x58, 0x1d, 0xb0, 0x1a, 0x48, 0x1e, 0x80, 0x1e, 0x58, 0x15, 0x80, 0x1b, 0x1a, 0x58, 
   0x1b, 0x90, 0x1c, 0x58, 0x19, 0x12, 0x16, 0x20, 0x1b, 0x11, 0x13, 0x68, 0x12, 0xa0, 0x17, 0x1c, 
   0xf8, 0x28, 0x13, 0xc0, 0x1b, 0x1a, 0xf8, 0x12, 0xf0, 0x1d, 0x1a, 0xb8, 0x13, 0x1b, 0xf0, 0x30, 
   0x1b, 0x11, 0x12, 0x13, 0x34, 0x13, 0x1d, 0x16, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0x10}};

const Bitmap8 g9 PROGMEM = {32, 42,
  {0xc0, 0x11, 0x15, 0x13, 0x14, 0x13, 0x12, 0x1d, 0x1b, 0xf0, 0x60, 0x17, 0x13, 0x98, 0x1f, 0x17, 
   0xf0, 0x30, 0x12, 0xd8, 0x1e, 0xf0, 0x10, 0x13, 0xf8, 0x14, 0xe0, 0x1e, 0x58, 0x19, 0x15, 0x16, 
   0x10, 0x17, 0x1d, 0x14, 0x58, 0x1e, 0xc0, 0x16, 0x58, 0x12, 0x70, 0x17, 0x1c, 0x48, 0x16, 0xb0, 
   0x1a, 0x48, 0x12, 0x90, 0x17, 0x48, 0x19, 0xa0, 0x17, 0x48, 0x19, 0xb0, 0x15, 0x48, 0x11, 0x90, 
   0x12, 0x48, 0x15, 0xc0, 0x48, 0x1f, 0x90, 0x14, 0x48, 0x1b, 0xc0, 0x14, 0x48, 0x90, 0x1c, 0x48, 
   0xd0, 0x12, 0x48, 0x11, 0x80, 0x48, 0x1a, 0xd0, 0x1d, 0x48, 0x1e, 0x80, 0x48, 0x1f, 0xd0, 0x1d, 
   0x48, 0x14, 0x80, 0x48, 0x19, 0xd0, 0x15, 0x48, 0x1c, 0x80, 0x1a, 0x48, 0xd0, 0x13, 0x58, 0x80, 
   0x14, 0x48, 0x16, 0xc0, 0x1a, 0x58, 0x80, 0x15, 0x48, 0x1e, 0xb0, 0x17, 0x68, 0x80, 0x1b, 0x58, 
   0x1b, 0xa0, 0x1f, 0x68, 0x1b, 0x80, 0x13, 0x48, 0x1a, 0x1b, 0x80, 0x12, 0x78, 0x16, 0x80, 0x1b, 
   0x1c, 0x48, 0x19, 0x11, 0x50, 0x1b, 0x13, 0x88, 0x1b, 0x90, 0x11, 0x68, 0x19, 0x14, 0x23, 0x1f, 
   0x48, 0x1c, 0x1f, 0x48, 0xb0, 0x1d, 0xd8, 0x1c, 0x16, 0x14, 0x48, 0xc0, 0x17, 0x1a, 0xa8, 0x1a, 
   0x17, 0x10, 0x1f, 0x48, 0xe0, 0x16, 0x13, 0x19, 0x58, 0x14, 0x11, 0x30, 0x48, 0x1f, 0xf0, 0xb0, 
   0x1b, 0x48, 0x1e, 0xf0, 0xb0, 0x15, 0x48, 0x11, 0xf0, 0xb0, 0x1f, 0x48, 0xf0, 0xb0, 0x1b, 0x48, 
   0x14, 0xf0, 0xb0, 0x14, 0x48, 0x16, 0xf0, 0xa0, 0x11, 0x48, 0x1f, 0xf0, 0xa0, 0x11, 0x58, 0x17, 
   0xc0, 0x13, 0x1e, 0x17, 0x80, 0x1b, 0x1e, 0x58, 0x15, 0xd0, 0x14, 0x28, 0x19, 0x14, 0x15, 0x1d, 
   0x11, 0x1d, 0x12, 0x1f, 0x68, 0x1e, 0xe0, 0x14, 0xf8, 0x1e, 0xf0, 0x14, 0xd8, 0x1c, 0x1d, 0xf0, 
   0x10, 0x16, 0x14, 0xa8, 0x1c, 0x12, 0xf0, 0x60, 0x17, 0x1d, 0x1e, 0x34, 0x13, 0x15, 0x16, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x90}};

const Bitmap8 g10 PROGMEM = {16, 42,
  {0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0x50, 0x1d, 0x48, 0x13, 0xa0, 0x1d, 0x48, 0x13, 0xa0, 0x1d, 0x48, 0x13, 0xa0, 0x1d, 0x48, 0x13, 
   0xa0, 0x12, 0x48, 0x1d, 0xa0, 0x1f, 0x38, 0x19, 0xb0, 0x48, 0x11, 0xa0, 0x16, 0x38, 0x1a, 0xb0, 
   0x12, 0x38, 0x11, 0xb0, 0x1f, 0x28, 0x1a, 0xc0, 0x38, 0x11, 0xb0, 0x17, 0x23, 0x1e, 0x90}};

const Bitmap8 g11 PROGMEM = {34, 42,
  {0xf0, 0xf0, 0xf0, 0x30, 0x15, 0x58, 0x11, 0xf0, 0xc0, 0x19, 0x58, 0x14, 0xf0, 0xb0, 0x16, 0x78, 
   0x1b, 0xf0, 0xa0, 0x13, 0x78, 0x15, 0xf0, 0xa0, 0x88, 0x1a, 0xf0, 0x90, 0x1d, 0x48, 0x1d, 0x48, 
   0x17, 0xf0, 0x80, 0x1f, 0x38, 0x1f, 0x10, 0x1c, 0x38, 0x1e, 0xf0, 0x70, 0x1b, 0x48, 0x1d, 0x10, 
   0x1e, 0x38, 0x1c, 0xf0, 0x70, 0x12, 0x48, 0x20, 0x17, 0x48, 0x1d, 0xf0, 0x60, 0x19, 0x38, 0x13, 
   0x30, 0x1a, 0x38, 0x1f, 0xf0, 0x50, 0x11, 0x48, 0x16, 0x30, 0x15, 0x48, 0x1b, 0xf0, 0x40, 0x14, 
   0x38, 0x19, 0x40, 0x1b, 0x48, 0x12, 0xf0, 0x40, 0x48, 0x12, 0x50, 0x1f, 0x38, 0x19, 0xf0, 0x30, 
   0x15, 0x48, 0x17, 0x50, 0x11, 0x48, 0x16, 0xf0, 0x20, 0x1a, 0x38, 0x1a, 0x70, 0x1c, 0x38, 0x13, 
   0xf0, 0x10, 0x17, 0x48, 0x15, 0x70, 0x1e, 0x48, 0xf0, 0x10, 0x1e, 0x48, 0x80, 0x17, 0x48, 0x15, 
   0xf0, 0x1c, 0x38, 0x14, 0x90, 0x19, 0x38, 0x1f, 0xe0, 0x11, 0x48, 0x11, 0x90, 0x12, 0x48, 0x17, 
   0xd0, 0x1f, 0x38, 0x1c, 0xa0, 0x1b, 0x48, 0x1e, 0xc0, 0x1b, 0x48, 0x1e, 0xb0, 0x1f, 0x38, 0x1c, 
   0xc0, 0x12, 0x48, 0x17, 0xb0, 0x1d, 0x48, 0x11, 0xb0, 0x19, 0xf8, 0x68, 0x14, 0xa0, 0x16, 0xf8, 
   0x88, 0x1b, 0x90, 0x13, 0xf8, 0x88, 0x15, 0x90, 0xf8, 0x98, 0x1a, 0x80, 0x1d, 0x48, 0x15, 0xf0, 
   0x12, 0x48, 0x17, 0x70, 0x1f, 0x48, 0xf0, 0x10, 0x17, 0x48, 0x1e, 0x60, 0x17, 0x48, 0x14, 0xf0, 
   0x20, 0x1a, 0x38, 0x1c, 0x60, 0x1e, 0x48, 0x11, 0xf0, 0x20, 0x15, 0x48, 0x1d, 0x50, 0x1c, 0x48, 
   0xf0, 0x30, 0x1b, 0x48, 0x1f, 0x40, 0x11, 0x48, 0x13, 0xf0, 0x40, 0x1f, 0x48, 0x1b, 0x30, 0x14, 
   0x48, 0x16, 0xf0, 0x40, 0x1d, 0x48, 0x12, 0x30, 0x48, 0x1c, 0xf0, 0x60, 0x48, 0x19, 0x20, 0x15, 
   0x48, 0x1e, 0xf0, 0x60, 0x14, 0x48, 0x16, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0x90}};

const Bitmap8 g12 PROGMEM = {34, 42,
  {0xf0, 0x16, 0x1d, 0x1e, 0x13, 0x14, 0x23, 0x15, 0x11, 0x1b, 0xf0, 0x60, 0x11, 0x14, 0xb8, 0x19, 
   0x1e, 0x17, 0xf0, 0x10, 0x1d, 0x19, 0xf8, 0x18, 0x1f, 0x17, 0xd0, 0x14, 0xf8, 0x58, 0x1e, 0xa0, 
   0x1b, 0x19, 0x68, 0x1c, 0x14, 0x15, 0x1d, 0x21, 0x1d, 0x15, 0x14, 0x1c, 0x68, 0x90, 0x1b, 0x19, 
   0x58, 0x1a, 0x11, 0xa0, 0x16, 0x14, 0x48, 0x90, 0x1f, 0x58, 0x15, 0xe0, 0x17, 0x1a, 0x28, 0x80, 
   0x12, 0x58, 0x11, 0xf0, 0x20, 0x12, 0x18, 0x70, 0x1b, 0x58, 0x15, 0xf0, 0x40, 0x11, 0x70, 0x1e, 
   0x48, 0x1f, 0xf0, 0xd0, 0x1c, 0x48, 0x16, 0xf0, 0xc0, 0x11, 0x48, 0x1a, 0xf0, 0xd0, 0x13, 0x48, 
   0x12, 0xf0, 0xd0, 0x1a, 0x48, 0x16, 0xf0, 0xd0, 0x58, 0xf0, 0xd0, 0x1b, 0x48, 0x19, 0xf0, 0xd0, 
   0x11, 0x48, 0x1f, 0xf0, 0xd0, 0x11, 0x48, 0x14, 0xf0, 0xd0, 0x11, 0x48, 0x14, 0xf0, 0xd0, 0x11, 
   0x48, 0x14, 0xf0, 0xd0, 0x11, 0x48, 0x1f, 0xf0, 0xd0, 0x1b, 0x48, 0x19, 0xf0, 0xe0, 0x58, 0xf0, 
   0xe0, 0x19, 0x48, 0x17, 0xf0, 0xd0, 0x13, 0x48, 0x15, 0xf0, 0xd0, 0x11, 0x48, 0x1a, 0xf0, 0xe0, 
   0x58, 0x17, 0xf0, 0xd0, 0x1e, 0x48, 0x1f, 0xf0, 0xd0, 0x1b, 0x58, 0x1d, 0xf0, 0x40, 0x16, 0x80, 
   0x12, 0x58, 0x16, 0xf0, 0x20, 0x15, 0x18, 0x90, 0x1a, 0x58, 0x1d, 0xe0, 0x17, 0x1f, 0x28, 0x90, 
   0x1b, 0x1c, 0x58, 0x1f, 0x16, 0xa0, 0x17, 0x13, 0x48, 0xa0, 0x1b, 0x19, 0x68, 0x19, 0x13, 0x1d, 
   0x41, 0x1d, 0x13, 0x19, 0x68, 0xb0, 0x1b, 0x1f, 0xf8, 0x58, 0x1e, 0xd0, 0x15, 0x1c, 0xf8, 0x18, 
   0x1f, 0x17, 0x40, 0x16, 0xb0, 0x15, 0x1f, 0xb8, 0x19, 0x1e, 0x17, 0xf0, 0x60, 0x11, 0x15, 0x13, 
   0x34, 0x13, 0x12, 0x1d, 0x1b, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xe0}};

const Bitmap8 g13 PROGMEM = {31, 42,
  {0xf0, 0xf0, 0x20, 0xf8, 0xe8, 0x15, 0x10, 0xf8, 0xe8, 0x15, 0x10, 0xf8, 0xe8, 0x15, 0x10, 0xf8, 
   0xe8, 0x15, 0xd0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 
   0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 
   0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 
   0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 
   0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 
   0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 
   0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 
   0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xb0, 0x14, 0x48, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x40}};

const Bitmap8 g14 PROGMEM = {36, 42,
  {0xf0, 0xf0, 0x60, 0x15, 0x40, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x40, 0x15, 0x40, 0x1f, 0x48, 
   0xf0, 0x20, 0x1f, 0x48, 0x40, 0x15, 0x40, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x40, 0x15, 0x40, 
   0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 
   0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 
   0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 
   0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 
   0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 
   0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 
   0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 
   0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 
   0xf0, 0x20, 0x1f, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 0x1a, 0x48, 0x90, 0x1f, 0x48, 0xf0, 0x20, 
   0x1c, 0x48, 0x90, 0x14, 0x48, 0x1b, 0xf0, 0x10, 0x48, 0x1a, 0x90, 0x1e, 0x48, 0x11, 0xf0, 0x17, 
   0x48, 0x14, 0x90, 0x1d, 0x48, 0x1e, 0xf0, 0x15, 0x48, 0x12, 0x90, 0x1b, 0x48, 0x1c, 0xf0, 0x1a, 
   0x48, 0x16, 0xa0, 0x1f, 0x48, 0x15, 0xd0, 0x16, 0x48, 0x19, 0xb0, 0x11, 0x48, 0x1c, 0x17, 0xb0, 
   0x1b, 0x19, 0x48, 0x15, 0xc0, 0x1f, 0x48, 0x1c, 0x1d, 0x90, 0x16, 0x1c, 0x48, 0x19, 0xd0, 0x1b, 
   0x1c, 0x58, 0x19, 0x1e, 0x21, 0x16, 0x21, 0x12, 0x1a, 0x68, 0x17, 0xe0, 0x17, 0x1c, 0xf8, 0x38, 
   0x11, 0xf0, 0x10, 0x1b, 0x1f, 0xf8, 0x1a, 0x17, 0xf0, 0x40, 0x16, 0x1f, 0xb8, 0x1f, 0x1d, 0xf0, 
   0x90, 0x11, 0x15, 0x13, 0x34, 0x13, 0x12, 0x11, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xd0}};

const Bitmap8 g15 PROGMEM = {34, 42,
  {0xf0, 0xf0, 0x50, 0x15, 0x48, 0x12, 0xf0, 0x60, 0x14, 0x48, 0x16, 0x20, 0x48, 0x19, 0xf0, 0x60, 
   0x48, 0x19, 0x30, 0x14, 0x48, 0x16, 0xf0, 0x40, 0x15, 0x48, 0x12, 0x30, 0x11, 0x48, 0x13, 0xf0, 
   0x40, 0x1a, 0x48, 0x1b, 0x40, 0x1c, 0x48, 0xf0, 0x30, 0x17, 0x48, 0x1f, 0x50, 0x1e, 0x48, 0x15, 
   0xf0, 0x20, 0x1e, 0x48, 0x1d, 0x50, 0x1b, 0x48, 0x1f, 0xf0, 0x20, 0x1c, 0x38, 0x1c, 0x70, 0x1f, 
   0x48, 0x17, 0xf0, 0x11, 0x48, 0x1e, 0x70, 0x1d, 0x48, 0x12, 0xf0, 0x1f, 0x48, 0x17, 0x80, 0x48, 
   0x19, 0xe0, 0x1b, 0x48, 0x1a, 0x90, 0x13, 0x48, 0x16, 0xd0, 0x15, 0x48, 0x15, 0x90, 0x16, 0x48, 
   0x13, 0xd0, 0x19, 0x48, 0xb0, 0x19, 0x48, 0xc0, 0x17, 0x48, 0x14, 0xb0, 0x12, 0x48, 0x15, 0xb0, 
   0x1e, 0x48, 0x11, 0xb0, 0x1b, 0x48, 0x1a, 0xb0, 0x1c, 0x38, 0x1c, 0xd0, 0x1f, 0x48, 0x17, 0x90, 
   0x11, 0x48, 0x1e, 0xd0, 0x11, 0x48, 0x1e, 0x90, 0x1f, 0x48, 0x17, 0xe0, 0x1c, 0x38, 0x1c, 0x80, 
   0x1b, 0x48, 0x1a, 0xf0, 0x1e, 0x48, 0x11, 0x70, 0x15, 0x48, 0x15, 0xf0, 0x17, 0x48, 0x14, 0x70, 
   0x19, 0x48, 0xf0, 0x20, 0x1a, 0x48, 0x60, 0x17, 0x48, 0x13, 0xf0, 0x20, 0x15, 0x48, 0x15, 0x50, 
   0x1e, 0x48, 0x16, 0xf0, 0x30, 0x48, 0x1a, 0x50, 0x1c, 0x38, 0x19, 0xf0, 0x40, 0x14, 0x48, 0x17, 
   0x30, 0x1d, 0x48, 0x12, 0xf0, 0x40, 0x11, 0x48, 0x1e, 0x30, 0x1f, 0x48, 0x1b, 0xf0, 0x50, 0x19, 
   0x38, 0x1c, 0x20, 0x1b, 0x48, 0x1f, 0xf0, 0x60, 0x12, 0x48, 0x11, 0x10, 0x12, 0x48, 0x1d, 0xf0, 
   0x60, 0x1b, 0x48, 0x14, 0x10, 0x19, 0x38, 0x1c, 0xf0, 0x80, 0x1f, 0x48, 0x11, 0x48, 0x1e, 0xf0, 
   0x80, 0x1d, 0x48, 0x1c, 0x48, 0x17, 0xf0, 0x90, 0x88, 0x1a, 0xf0, 0xa0, 0x13, 0x78, 0x15, 0xf0, 
   0xa0, 0x16, 0x78, 0xf0, 0xc0, 0x19, 0x58, 0x14, 0xf0, 0xc0, 0x15, 0x58, 0x11, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x70}};

const Bitmap8 g16 PROGMEM = {15, 42,
  {0xf0, 0x16, 0x40, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 
   0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0x90, 0x11, 0x48, 0x15, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0x40}};

const Bitmap8 g17 PROGMEM = {17, 42,
  {0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xd0, 0x16, 0x4f, 0x12, 
   0xb0, 0x1d, 0x48, 0x13, 0xb0, 0x1d, 0x48, 0x13, 0xb0, 0x1d, 0x48, 0x13, 0xb0, 0x1d, 0x48, 0x13, 
   0xb0, 0x1d, 0x48, 0x13, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0x70, 0x1d, 0x48, 0x13, 0xb0, 0x1d, 0x48, 0x13, 0xb0, 0x1d, 0x48, 0x13, 0xb0, 
   0x1d, 0x48, 0x13, 0xb0, 0x1d, 0x48, 0x13, 0xb0, 0x1d, 0x48, 0x13, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0x20}};

const Bitmap8 g18 PROGMEM = {25, 42,
  {0xa0, 0x16, 0x12, 0x23, 0x15, 0x17, 0xf0, 0x20, 0x17, 0x1f, 0x68, 0x1f, 0x17, 0xe0, 0x16, 0x98, 
   0x1c, 0x16, 0xc0, 0x1b, 0x1c, 0x38, 0x14, 0x2d, 0x14, 0x38, 0x1c, 0x1b, 0xb0, 0x14, 0x28, 0x1c, 
   0x17, 0x40, 0x17, 0x1c, 0x28, 0x14, 0xb0, 0x38, 0x16, 0x60, 0x16, 0x38, 0x1b, 0x90, 0x11, 0x28, 
   0x1f, 0x80, 0x1f, 0x28, 0x11, 0x90, 0x1d, 0x28, 0x13, 0x80, 0x13, 0x28, 0x1d, 0x90, 0x1d, 0x28, 
   0x13, 0x80, 0x13, 0x28, 0x1d, 0x90, 0x11, 0x28, 0x19, 0x80, 0x19, 0x28, 0x11, 0xa0, 0x38, 0x15, 
   0x60, 0x15, 0x28, 0x1c, 0xb0, 0x1e, 0x38, 0x12, 0x40, 0x12, 0x38, 0x12, 0xc0, 0x1a, 0x48, 0x2f, 
   0x48, 0x1a, 0xd0, 0x1b, 0x1a, 0x88, 0x1f, 0xf0, 0x10, 0x12, 0x19, 0x48, 0x19, 0x15, 0xf0, 0x40, 
   0x1b, 0x21, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x10}};

const uint16_t palette[] PROGMEM =
{0x0000, 0x4800, 0x7800, 0x9800, 0xa000, 0x6800, 0x3800, 0x2800, 0xf000, 0xd000, 0xc000, 0x1800, 0xe000, 0x5800, 0x8800, 0xb000};

const Bitmap8* const charSet[224] PROGMEM = {
NULL /*032' '*/, NULL /*033'!'*/, NULL /*034'"'*/, NULL /*035'#'*/, NULL /*036'$'*/, NULL /*037'%'*/, NULL /*038'&'*/, NULL /*039'''*/, 
NULL /*040'('*/, NULL /*041')'*/, NULL /*042'*'*/, NULL /*043'+'*/, &g10 /*044','*/, NULL /*045'-'*/, NULL /*046'.'*/, NULL /*047'/'*/, 
&g0  /*048'0'*/, &g1  /*049'1'*/, &g2  /*050'2'*/, &g3  /*051'3'*/, &g4  /*052'4'*/, &g5  /*053'5'*/, &g6  /*054'6'*/, &g7  /*055'7'*/, 
&g8  /*056'8'*/, &g9  /*057'9'*/, &g17 /*058':'*/, NULL /*059';'*/, NULL /*060'<'*/, NULL /*061'='*/, NULL /*062'>'*/, NULL /*063'?'*/, 
NULL /*064'@'*/, &g11 /*065'A'*/, NULL /*066'B'*/, &g12 /*067'C'*/, NULL /*068'D'*/, NULL /*069'E'*/, NULL /*070'F'*/, NULL /*071'G'*/, 
NULL /*072'H'*/, &g16 /*073'I'*/, NULL /*074'J'*/, NULL /*075'K'*/, NULL /*076'L'*/, NULL /*077'M'*/, NULL /*078'N'*/, NULL /*079'O'*/, 
NULL /*080'P'*/, NULL /*081'Q'*/, NULL /*082'R'*/, NULL /*083'S'*/, &g13 /*084'T'*/, &g14 /*085'U'*/, &g15 /*086'V'*/, NULL /*087'W'*/, 
NULL /*088'X'*/, NULL /*089'Y'*/, NULL /*090'Z'*/, NULL /*091'['*/, NULL /*092'\'*/, NULL /*093']'*/, NULL /*094'^'*/, NULL /*095'_'*/, 
NULL /*096'`'*/, NULL /*097'a'*/, NULL /*098'b'*/, NULL /*099'c'*/, NULL /*100'd'*/, NULL /*101'e'*/, NULL /*102'f'*/, NULL /*103'g'*/, 
NULL /*104'h'*/, NULL /*105'i'*/, NULL /*106'j'*/, NULL /*107'k'*/, NULL /*108'l'*/, NULL /*109'm'*/, NULL /*110'n'*/, NULL /*111'o'*/, 
NULL /*112'p'*/, NULL /*113'q'*/, NULL /*114'r'*/, NULL /*115's'*/, NULL /*116't'*/, NULL /*117'u'*/, NULL /*118'v'*/, NULL /*119'w'*/, 
NULL /*120'x'*/, NULL /*121'y'*/, NULL /*122'z'*/, NULL /*123'{'*/, NULL /*124'|'*/, NULL /*125'}'*/, NULL /*126'~'*/, NULL /*127''*/, 
NULL /*128''*/, NULL /*129''*/, NULL /*130''*/, NULL /*131''*/, NULL /*132''*/, NULL /*133''*/, NULL /*134''*/, NULL /*135''*/, 
NULL /*136''*/, NULL /*137''*/, NULL /*138''*/, NULL /*139''*/, NULL /*140''*/, NULL /*141''*/, NULL /*142''*/, NULL /*143''*/, 
NULL /*144''*/, NULL /*145''*/, NULL /*146''*/, NULL /*147''*/, NULL /*148''*/, NULL /*149''*/, NULL /*150''*/, NULL /*151''*/, 
NULL /*152''*/, NULL /*153''*/, NULL /*154''*/, NULL /*155''*/, NULL /*156''*/, NULL /*157''*/, NULL /*158''*/, NULL /*159''*/, 
NULL /*160' '*/, NULL /*161'¡'*/, NULL /*162'¢'*/, NULL /*163'£'*/, NULL /*164'¤'*/, NULL /*165'¥'*/, NULL /*166'¦'*/, NULL /*167'§'*/, 
NULL /*168'¨'*/, NULL /*169'©'*/, NULL /*170'ª'*/, NULL /*171'«'*/, NULL /*172'¬'*/, NULL /*173'­'*/, NULL /*174'®'*/, NULL /*175'¯'*/, 
&g18 /*176'°'*/, NULL /*177'±'*/, NULL /*178'²'*/, NULL /*179'³'*/, NULL /*180'´'*/, NULL /*181'µ'*/, NULL /*182'¶'*/, NULL /*183'·'*/, 
NULL /*184'¸'*/, NULL /*185'¹'*/, NULL /*186'º'*/, NULL /*187'»'*/, NULL /*188'¼'*/, NULL /*189'½'*/, NULL /*190'¾'*/, NULL /*191'¿'*/, 
NULL /*192'À'*/, NULL /*193'Á'*/, NULL /*194'Â'*/, NULL /*195'Ã'*/, NULL /*196'Ä'*/, NULL /*197'Å'*/, NULL /*198'Æ'*/, NULL /*199'Ç'*/, 
NULL /*200'È'*/, NULL /*201'É'*/, NULL /*202'Ê'*/, NULL /*203'Ë'*/, NULL /*204'Ì'*/, NULL /*205'Í'*/, NULL /*206'Î'*/, NULL /*207'Ï'*/, 
NULL /*208'Ð'*/, NULL /*209'Ñ'*/, NULL /*210'Ò'*/, NULL /*211'Ó'*/, NULL /*212'Ô'*/, NULL /*213'Õ'*/, NULL /*214'Ö'*/, NULL /*215'×'*/, 
NULL /*216'Ø'*/, NULL /*217'Ù'*/, NULL /*218'Ú'*/, NULL /*219'Û'*/, NULL /*220'Ü'*/, NULL /*221'Ý'*/, NULL /*222'Þ'*/, NULL /*223'ß'*/, 
NULL /*224'à'*/, NULL /*225'á'*/, NULL /*226'â'*/, NULL /*227'ã'*/, NULL /*228'ä'*/, NULL /*229'å'*/, NULL /*230'æ'*/, NULL /*231'ç'*/, 
NULL /*232'è'*/, NULL /*233'é'*/, NULL /*234'ê'*/, NULL /*235'ë'*/, NULL /*236'ì'*/, NULL /*237'í'*/, NULL /*238'î'*/, NULL /*239'ï'*/, 
NULL /*240'ð'*/, NULL /*241'ñ'*/, NULL /*242'ò'*/, NULL /*243'ó'*/, NULL /*244'ô'*/, NULL /*245'õ'*/, NULL /*246'ö'*/, NULL /*247'÷'*/, 
NULL /*248'ø'*/, NULL /*249'ù'*/, NULL /*250'ú'*/, NULL /*251'û'*/, NULL /*252'ü'*/, NULL /*253'ý'*/, NULL /*254'þ'*/, NULL /*255'ÿ'*/};
