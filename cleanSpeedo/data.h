/* 
 * This file contains all the static arrays to draw things in the display.
 */


// GPS Logo
prog_uchar logo [] PROGMEM = {
0x00, 0xC0, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x40,
0x40, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x40, 0x00, 0x00, 0x00,
0x00, 0xC0, 0xC0, 0x40, 0x48, 0x4E, 0x5C, 0x5C, 0x7C, 0x74, 0x78, 0x78, 0x70, 0x70, 0xE0, 0xE0,
0xC0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0xE0, 0xF0,
0x70, 0x70, 0x68, 0x78, 0xF8, 0xFC, 0x7C, 0x5C, 0x50, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0xFC, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x60, 0xFC, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
0x00, 0x40, 0x40, 0x41, 0xC7, 0xC6, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xB7, 0x00, 0x00, 0x00, 0x00,
0x00, 0xFF, 0xBF, 0xE0, 0x60, 0x20, 0x00, 0x10, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x80,
0x80, 0xE0, 0xF9, 0xE7, 0xE3, 0xE3, 0xF7, 0xDF, 0xFD, 0xFE, 0x7E, 0x3E, 0x3C, 0x3C, 0x3C, 0xFF,
0xFF, 0x7F, 0x7F, 0xFE, 0xFF, 0xE5, 0xE7, 0xC3, 0x83, 0x83, 0xFF, 0xFD, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xE0, 0x1B, 0x08, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0x67, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x30, 0x18, 0x0F, 0x03, 0x00, 0x00,
0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x30, 0x20, 0x60, 0x40, 0x40,
0x40, 0x20, 0x20, 0x10, 0x18, 0x37, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x60, 0x00, 0x00, 0x00,
0x00, 0x7F, 0x7F, 0x70, 0x40, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x1F, 0x3B, 0x4F, 0xC7, 0x67, 0x7B,
0x0F, 0xC7, 0x21, 0x11, 0x09, 0x01, 0x81, 0xC3, 0xC1, 0x81, 0xC1, 0x02, 0x00, 0x00, 0x02, 0xC7,
0xFC, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xC3, 0xFF, 0xFF, 0x3F, 0xFF, 0x7F, 0x03, 0x01, 0x00, 0x00,
0xFE, 0xFC, 0xFC, 0x3C, 0x03, 0x03, 0x00, 0xC0, 0xFB, 0xFF, 0x7F, 0x02, 0x02, 0x00, 0x0C, 0x84,
0xC4, 0xC0, 0xC0, 0xF0, 0xF4, 0xE0, 0x03, 0x00, 0x00, 0x00, 0xE0, 0xE3, 0xE3, 0xF0, 0x78, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x21, 0x23, 0x3E, 0x1C, 0x00, 0x00, 0x80, 0xC0, 0xFF, 0xFF,
0xC7, 0x80, 0x00, 0x00, 0x00, 0x3F, 0x3E, 0x3F, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0xFC, 0xFF,
0xFF, 0x87, 0x00, 0x00, 0x00, 0x3C, 0x3F, 0x3F, 0x3F, 0x1E, 0x0F, 0x00, 0x00, 0x00, 0xA0, 0xFF,
0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x13, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x7F,
0x0F, 0x03, 0x01, 0x01, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0xFF, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x02, 0x06, 0x0E, 0x0A, 0x0E, 0x0E, 0x0E, 0x0E, 0x0F, 0x07, 0x03, 0x03, 0x01,
0x00, 0x01, 0x02, 0x02, 0x06, 0x0E, 0x06, 0x1E, 0x1D, 0x80, 0x80, 0x80, 0xF0, 0xFF, 0x5F, 0x07,
0x01, 0x01, 0x02, 0x02, 0x06, 0x06, 0x0E, 0x0E, 0x0F, 0x07, 0x06, 0x06, 0x06, 0x0E, 0x07, 0x07,
0x03, 0x00, 0x00, 0x00, 0x04, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x04, 0x06, 0x0F, 0x07, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x06, 0x06, 0x0E, 0x07, 0x02, 0x00, 0x00, 0x00,
0x80, 0x40, 0xC0, 0x00, 0x80, 0x40, 0xE0, 0x00, 0x80, 0x60, 0x00, 0x00, 0x80, 0x60, 0x20, 0x00,
0x80, 0x60, 0x40, 0x00, 0x80, 0x60, 0x60, 0x00, 0x80, 0x60, 0x80, 0x00, 0x80, 0x60, 0xA0, 0x00
};

// Big numbers font, from 0 to 9. 96 byte each.
prog_uchar bigNumbers [][96] PROGMEM = {
{0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0,
0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xC1, 0xC0, 0xC0, 0xC0,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
0x03, 0x03, 0x83, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xC1, 0xC0, 0xC0, 0xC0,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x81, 0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC1, 0x81, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x81, 0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC1, 0x81, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x87, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x87,
0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1,
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00},

{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3C, 0x7E, 0x7E, 0x7E, 0x7E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

// Big numbers minus simbol.
prog_uchar minus [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0C, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
0x1E, 0x1E, 0x1E, 0x1E, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Km/h in big font. This avoids to create an entirely new big font and saves flash space.
prog_uchar kmh [] PROGMEM = {
0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x80,
0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF0, 0xF8, 0xFC,
0x9E, 0x0E, 0x06, 0xE0, 0xF0, 0xF0, 0xF0, 0x70, 0xF0, 0xE0, 0xF0, 0xF0, 0x70, 0xF0, 0xE0, 0xC0,
0x00, 0x00, 0xE0, 0xFE, 0x1F, 0x01, 0x00, 0xFF, 0xFF, 0xFF, 0x18, 0x18, 0xF8, 0xF0, 0xF0, 0x00,
0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x01, 0x03, 0x07, 0x07, 0x06, 0x07, 0x07, 0x07, 0x00, 0x00,
0x07, 0x07, 0x07, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x1E, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x07,
0x07, 0x07, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00
};

// degrees, outside the ascii table myFont
prog_uchar myDregree [8] PROGMEM = {
0x00,0x00,0x0C,0x12,0x12,0x0C,0x00,0x00
};


// Small 8x8 font
prog_uchar myFont[][8] PROGMEM = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x5F,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x07,0x00,0x07,0x00,0x00,0x00},
{0x00,0x14,0x7F,0x14,0x7F,0x14,0x00,0x00},
{0x00,0x24,0x2A,0x7F,0x2A,0x12,0x00,0x00},
{0x00,0x23,0x13,0x08,0x64,0x62,0x00,0x00},
{0x00,0x36,0x49,0x55,0x22,0x50,0x00,0x00},
{0x00,0x00,0x05,0x03,0x00,0x00,0x00,0x00},
{0x00,0x1C,0x22,0x41,0x00,0x00,0x00,0x00},
{0x00,0x41,0x22,0x1C,0x00,0x00,0x00,0x00},
{0x00,0x08,0x2A,0x1C,0x2A,0x08,0x00,0x00},
{0x00,0x08,0x08,0x3E,0x08,0x08,0x00,0x00},
{0x00,0xA0,0x60,0x00,0x00,0x00,0x00,0x00},
{0x00,0x08,0x08,0x08,0x08,0x08,0x00,0x00},
{0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00},
{0x00,0x20,0x10,0x08,0x04,0x02,0x00,0x00},
{0x00,0x3E,0x51,0x49,0x45,0x3E,0x00,0x00},
{0x00,0x00,0x42,0x7F,0x40,0x00,0x00,0x00},
{0x00,0x62,0x51,0x49,0x49,0x46,0x00,0x00},
{0x00,0x22,0x41,0x49,0x49,0x36,0x00,0x00},
{0x00,0x18,0x14,0x12,0x7F,0x10,0x00,0x00},
{0x00,0x27,0x45,0x45,0x45,0x39,0x00,0x00},
{0x00,0x3C,0x4A,0x49,0x49,0x30,0x00,0x00},
{0x00,0x01,0x71,0x09,0x05,0x03,0x00,0x00},
{0x00,0x36,0x49,0x49,0x49,0x36,0x00,0x00},
{0x00,0x06,0x49,0x49,0x29,0x1E,0x00,0x00},
{0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00},
{0x00,0x00,0xAC,0x6C,0x00,0x00,0x00,0x00},
{0x00,0x08,0x14,0x22,0x41,0x00,0x00,0x00},
{0x00,0x14,0x14,0x14,0x14,0x14,0x00,0x00},
{0x00,0x41,0x22,0x14,0x08,0x00,0x00,0x00},
{0x00,0x02,0x01,0x51,0x09,0x06,0x00,0x00},
{0x00,0x32,0x49,0x79,0x41,0x3E,0x00,0x00},
{0x00,0x7E,0x09,0x09,0x09,0x7E,0x00,0x00},
{0x00,0x7F,0x49,0x49,0x49,0x36,0x00,0x00},
{0x00,0x3E,0x41,0x41,0x41,0x22,0x00,0x00},
{0x00,0x7F,0x41,0x41,0x22,0x1C,0x00,0x00},
{0x00,0x7F,0x49,0x49,0x49,0x41,0x00,0x00},
{0x00,0x7F,0x09,0x09,0x09,0x01,0x00,0x00},
{0x00,0x3E,0x41,0x41,0x51,0x72,0x00,0x00},
{0x00,0x7F,0x08,0x08,0x08,0x7F,0x00,0x00},
{0x00,0x41,0x7F,0x41,0x00,0x00,0x00,0x00},
{0x00,0x20,0x40,0x41,0x3F,0x01,0x00,0x00},
{0x00,0x7F,0x08,0x14,0x22,0x41,0x00,0x00},
{0x00,0x7F,0x40,0x40,0x40,0x40,0x00,0x00},
{0x00,0x7F,0x02,0x0C,0x02,0x7F,0x00,0x00},
{0x00,0x7F,0x04,0x08,0x10,0x7F,0x00,0x00},
{0x00,0x3E,0x41,0x41,0x41,0x3E,0x00,0x00},
{0x00,0x7F,0x09,0x09,0x09,0x06,0x00,0x00},
{0x00,0x3E,0x41,0x51,0x21,0x5E,0x00,0x00},
{0x00,0x7F,0x09,0x19,0x29,0x46,0x00,0x00},
{0x00,0x26,0x49,0x49,0x49,0x32,0x00,0x00},
{0x00,0x01,0x01,0x7F,0x01,0x01,0x00,0x00},
{0x00,0x3F,0x40,0x40,0x40,0x3F,0x00,0x00},
{0x00,0x1F,0x20,0x40,0x20,0x1F,0x00,0x00},
{0x00,0x3F,0x40,0x38,0x40,0x3F,0x00,0x00},
{0x00,0x63,0x14,0x08,0x14,0x63,0x00,0x00},
{0x00,0x03,0x04,0x78,0x04,0x03,0x00,0x00},
{0x00,0x61,0x51,0x49,0x45,0x43,0x00,0x00},
{0x00,0x7F,0x41,0x41,0x00,0x00,0x00,0x00},
{0x00,0x02,0x04,0x08,0x10,0x20,0x00,0x00},
{0x00,0x41,0x41,0x7F,0x00,0x00,0x00,0x00},
{0x00,0x04,0x02,0x01,0x02,0x04,0x00,0x00},
{0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00},
{0x00,0x01,0x02,0x04,0x00,0x00,0x00,0x00},
{0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00},
{0x00,0x7F,0x48,0x44,0x44,0x38,0x00,0x00},
{0x00,0x38,0x44,0x44,0x28,0x00,0x00,0x00},
{0x00,0x38,0x44,0x44,0x48,0x7F,0x00,0x00},
{0x00,0x38,0x54,0x54,0x54,0x18,0x00,0x00},
{0x00,0x08,0x7E,0x09,0x02,0x00,0x00,0x00},
{0x00,0x18,0xA4,0xA4,0xA4,0x7C,0x00,0x00},
{0x00,0x7F,0x08,0x04,0x04,0x78,0x00,0x00},
{0x00,0x00,0x7D,0x00,0x00,0x00,0x00,0x00},
{0x00,0x80,0x84,0x7D,0x00,0x00,0x00,0x00},
{0x00,0x7F,0x10,0x28,0x44,0x00,0x00,0x00},
{0x00,0x41,0x7F,0x40,0x00,0x00,0x00,0x00},
{0x00,0x7C,0x04,0x18,0x04,0x78,0x00,0x00},
{0x00,0x7C,0x08,0x04,0x7C,0x00,0x00,0x00},
{0x00,0x38,0x44,0x44,0x38,0x00,0x00,0x00},
{0x00,0xFC,0x24,0x24,0x18,0x00,0x00,0x00},
{0x00,0x18,0x24,0x24,0xFC,0x00,0x00,0x00},
{0x00,0x00,0x7C,0x08,0x04,0x00,0x00,0x00},
{0x00,0x48,0x54,0x54,0x24,0x00,0x00,0x00},
{0x00,0x04,0x7F,0x44,0x00,0x00,0x00,0x00},
{0x00,0x3C,0x40,0x40,0x7C,0x00,0x00,0x00},
{0x00,0x1C,0x20,0x40,0x20,0x1C,0x00,0x00},
{0x00,0x3C,0x40,0x30,0x40,0x3C,0x00,0x00},
{0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00},
{0x00,0x1C,0xA0,0xA0,0x7C,0x00,0x00,0x00},
{0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00},
{0x00,0x08,0x36,0x41,0x00,0x00,0x00,0x00},
{0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00},
{0x00,0x41,0x36,0x08,0x00,0x00,0x00,0x00},
{0x00,0x02,0x01,0x01,0x02,0x01,0x00,0x00},
{0x00,0x02,0x05,0x05,0x02,0x00,0x00,0x00} 
};
