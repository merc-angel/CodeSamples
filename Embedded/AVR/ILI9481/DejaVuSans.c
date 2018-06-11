#include <ILI9481.h>
#include <avr/pgmspace.h>

const Bitmap16 g001 PROGMEM = {46, 84,
  {0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0xf37b, 0x3663, 0xf65a, 0xd75a, 0xd75a, 0xf65a, 0x3563, 0x3284, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x718c, 0x34a5, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0900, 0x1400, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1b00, 0x1200, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0a00, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1800, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0200, 0x1600, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0300, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1700, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0300, 0x1c00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1700, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0e00, 0x0900, 0x0800, 0x0800, 0x0a00, 0x1000, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1300, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1c00, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0c00, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0500, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0200, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0500, 0x1c00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1c00, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1700, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1c00, 0x0200, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0500, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1300, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0d00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1400, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1400, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1d00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0500, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0a00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1500, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0400, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0300, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0a00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1500, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0400, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1200, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1200, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1600, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1500, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0b00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1300, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0900, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0d00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1400, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0500, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0a00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1500, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1800, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0500, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0200, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0200, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0400, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1600, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0700, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1400, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1700, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1000, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1300, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1400, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1400, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0b00, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0900, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0700, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1b00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1300, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1300, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1900, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0400, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0d00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1200, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1c00, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0300, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0700, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1600, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1000, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0100, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0b00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1100, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0700, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0900, 0x1a00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1d00, 0x0200, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1d00, 0x1500, 0x1400, 0x1400, 0x1500, 0x1e00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1200, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1e00, 0x0900, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0e00, 0x1b00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1f00, 0x1900, 0x0a00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600, 0x0f00, 0x1500, 0x1c00, 0x1e00, 0x1f00, 0x1f00, 0x1e00, 0x1a00, 0x1400, 0x0d00, 0x0400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8631, 
   0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xdfff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
   0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff}};


