#pragma once
#ifndef __TWILIGHTMENU_PALETTE_EFFECTS__
#define __TWILIGHTMENU_PALETTE_EFFECTS__

#include <nds.h>

// Weirdly starts with 2nd, 3rd, and 1st colors
static constexpr unsigned short startBorderPalettes[16*16]
{
	0x7C1F,0x49CB,0x49EB,0x41A9,0x4E0C,0x524D,0x5A8F,0x62D3,	// 0: gray
	0x62F4,0x6B36,0x6F79,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x00B7,0x00F7,0x00B5,0x0139,0x097A,0x159B,0x25DD,	// 1: brown
	0x363E,0x3A7D,0x4ABD,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x101B,0x103D,0x1419,0x109E,0x24DF,0x313F,0x419F,	// 2: red
	0x49DF,0x563F,0x5E7F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x75BF,0x75FF,0x757F,0x763F,0x767F,0x769F,0x76DF,	// 3: pink
	0x7F3F,0x7F5F,0x7F7F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x01FF,0x023F,0x11DF,0x0A7F,0x169F,0x26BF,0x32FF,	// 4: orange
	0x3F3F,0x4F5F,0x5F9F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x02BE,0x02FD,0x029D,0x031D,0x075E,0x0F7F,0x17BF,	// 5: yellow
	0x2FDF,0x47FF,0x5FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x036F,0x0371,0x032E,0x0392,0x0FB5,0x1BD8,0x27FA,	// 6: yellow-green
	0x33FD,0x43FE,0x5FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0322,0x0363,0x0301,0x0BA2,0x17C8,0x23ED,0x33F3,	// 7: lively green
	0x33F6,0x43F9,0x4FFB,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x1AA0,0x16C0,0x1660,0x1700,0x1F22,0x1F64,0x278A,	// 8: green
	0x3BCF,0x4FF3,0x47F1,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2F21,0x3744,0x32E0,0x3B85,0x3FA6,0x3BE2,0x53ED,	// 9: light green
	0x5FF2,0x6FF6,0x77F8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7A64,0x7AA5,0x7E23,0x7AE6,0x7F09,0x7F2C,0x7F6F,	// 10: sky blue
	0x7F72,0x7F95,0x7FB8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x68E0,0x7120,0x5CA0,0x7960,0x7DC3,0x7E06,0x7E69,	// 11: light blue
	0x7ECC,0x7F2F,0x7F72,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4400,0x5400,0x3800,0x6000,0x7060,0x68E2,0x6142,	// 12: blue
	0x75C5,0x7A27,0x7E8A,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x502D,0x5C0F,0x444B,0x6811,0x6C73,0x70D5,0x7156,	// 13: violet
	0x75B8,0x761A,0x7A9C,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6015,0x6C17,0x5412,0x7018,0x787B,0x78FC,0x797C,	// 14: purple
	0x7DFD,0x7E7E,0x7EFE,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4CBD,0x507F,0x443D,0x5CDF,0x611F,0x655F,0x69BF,	// 15: fuschia
	0x6A1F,0x725F,0x729F,0x0000,0x0000,0x0000,0x0000,0x0000
};

static constexpr unsigned short phat_startBorderPalettes[16*16]
{
	0x7C1F,0x4146,0x4166,0x3924,0x45A6,0x4DE7,0x5629,0x5E6E,	// 0: gray (color-corrected)
	0x5EB0,0x66F2,0x6B56,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0077,0x00B7,0x0075,0x00D9,0x011C,0x091D,0x195F,	// 1: brown (color-corrected)
	0x2DDF,0x321E,0x427E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x181B,0x141E,0x1C19,0x105F,0x28BF,0x351F,0x457F,	// 2: red (color-corrected)
	0x4DBF,0x5A1F,0x5E5F,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6CFE,0x6D3E,0x6CBE,0x6D7E,0x6DBE,0x6DDE,0x6E3E,	// 3: pink (color-corrected)
	0x7ABE,0x7ADE,0x7B1E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x013E,0x017E,0x051E,0x01BE,0x05DE,0x0DFE,0x1A5E,	// 4: orange (color-corrected)
	0x26BE,0x36DE,0x4B3E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x027E,0x02BD,0x025D,0x02DD,0x071E,0x0F3F,0x177F,	// 5: yellow (color-corrected)
	0x2F9F,0x47DF,0x5FDF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x036B,0x036D,0x032A,0x038E,0x0FB1,0x1BD4,0x27F7,	// 6: yellow-green (color-corrected)
	0x33FA,0x43FC,0x5FFD,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0F20,0x0B60,0x0F00,0x1FA2,0x1FC5,0x23E8,0x33EF,	// 7: lively green (color-corrected)
	0x33F2,0x43F6,0x4FF8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x22A0,0x1EC0,0x1E60,0x2300,0x2B22,0x2B64,0x2B89,	// 8: green (color-corrected)
	0x3FCE,0x4BF1,0x53F3,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3B21,0x3F44,0x3EE0,0x4785,0x4BA6,0x47E2,0x5BED,	// 9: light green (color-corrected)
	0x63F2,0x73F6,0x77F8,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7602,0x7642,0x79A1,0x7683,0x7AA5,0x7AE8,0x7B2B,	// 10: sky blue (color-corrected)
	0x7B2E,0x7B52,0x7B95,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6080,0x68A0,0x5040,0x74E0,0x7941,0x7983,0x7A05,	// 11: light blue (color-corrected)
	0x7A68,0x7AEB,0x7B2E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3400,0x4800,0x2800,0x5400,0x6820,0x6080,0x54C0,	// 12: blue (color-corrected)
	0x7142,0x75A4,0x7A26,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x502D,0x5C0F,0x444B,0x6811,0x6C73,0x70D5,0x7156,	// 13: violet
	0x75B8,0x761A,0x7A9C,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6011,0x6C13,0x540F,0x7014,0x7877,0x78F8,0x7979,	// 14: purple (color-corrected)
	0x7DFA,0x7E7C,0x7EFC,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x58BD,0x5C7F,0x503D,0x68DF,0x6D1F,0x6D5F,0x71BF,	// 15: fuschia (color-corrected)
	0x721F,0x765F,0x769F,0x0000,0x0000,0x0000,0x0000,0x0000
};

static constexpr unsigned short startTextPalettes[16*16]
{
	0x7C1F,0x62D4,0x737A,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 0: gray
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x29FA,0x5F1E,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 1: brown
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x357E,0x5ABF,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 2: red
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7ADF,0x7F7F,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 3: pink
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x371F,0x5B9F,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 4: orange
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2B7E,0x57BF,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 5: yellow
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2BF9,0x57FC,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 6: yellow-green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3BCF,0x5FF7,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 7: lively green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3F4C,0x5FB5,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 8: green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x5BD0,0x6FF8,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 9: light green
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7F70,0x7FB8,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 10: sky blue
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7AAD,0x7F56,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 11: light blue
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6D4A,0x76B5,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 12: blue
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7597,0x7ADB,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 13: violet
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7D9D,0x7EDE,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 14: purple
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x69FF,0x76FF,0x7FFF,0x0000,0x0000,0x0000,0x0000,	// 15: fuschia
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
};

const unsigned short arrowButtonPalettes[16*16]
{
	0x7C1F,0x49CB,0x49EB,0x4E0C,0x524D,0x5A8F,0x62D3,0x62F4,	// 0: gray
	0x6B36,0x6F79,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x00B7,0x00F7,0x0139,0x097A,0x159B,0x25DD,0x363E,	// 1: brown
	0x3A7D,0x4ABD,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x101B,0x103D,0x109E,0x24DF,0x313F,0x419F,0x49DF,	// 2: red
	0x563F,0x5E7F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x75BF,0x75FF,0x763F,0x767F,0x769F,0x76DF,0x7F3F,	// 3: pink
	0x7F5F,0x7F7F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x01FF,0x023F,0x0A7F,0x169F,0x26BF,0x32FF,0x3F3F,	// 4: orange
	0x4F5F,0x5F9F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x02BE,0x02FD,0x031D,0x075E,0x0F7F,0x17BF,0x2FDF,	// 5: yellow
	0x47FF,0x5FFF,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x036F,0x0371,0x0392,0x0FB5,0x1BD8,0x27FA,0x33FD,	// 6: yellow-green
	0x43FE,0x5FFF,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0322,0x0363,0x0BA2,0x17C8,0x23ED,0x33F3,0x33F6,	// 7: lively green
	0x43F9,0x4FFB,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x1AA0,0x16C0,0x1700,0x1F22,0x1F64,0x278A,0x3BCF,	// 8: green
	0x4FF3,0x47F1,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x2F21,0x3744,0x3B85,0x3FA6,0x3BE2,0x53ED,0x5FF2,	// 9: light green
	0x6FF6,0x77F8,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7A64,0x7AA5,0x7AE6,0x7F09,0x7F2C,0x7F6F,0x7F72,	// 10: sky blue
	0x7F95,0x7FB8,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x68E0,0x7120,0x7960,0x7DC3,0x7E06,0x7E69,0x7ECC,	// 11: light blue
	0x7F2F,0x7F72,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4400,0x5400,0x6000,0x7060,0x68E2,0x6142,0x75C5,	// 12: blue
	0x7A27,0x7E8A,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x502D,0x5C0F,0x6811,0x6C73,0x70D5,0x7156,0x75B8,	// 13: violet
	0x761A,0x7A9C,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6015,0x6C17,0x7018,0x787B,0x78FC,0x797C,0x7DFD,	// 14: purple
	0x7E7E,0x7EFE,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x4CBD,0x507F,0x5CDF,0x611F,0x655F,0x69BF,0x6A1F,	// 15: fuschia
	0x725F,0x729F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000
};

const unsigned short phat_arrowButtonPalettes[16*16]
{
	0x7C1F,0x4146,0x4166,0x45A6,0x4DE7,0x5629,0x5E6E,0x5EB0,	// 0: gray (color-corrected)
	0x66F2,0x6B56,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0077,0x00B7,0x00D9,0x011C,0x091D,0x195F,0x2DDF,	// 1: brown (color-corrected)
	0x321E,0x427E,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x181B,0x141E,0x105F,0x28BF,0x351F,0x457F,0x4DBF,	// 2: red (color-corrected)
	0x5A1F,0x5E5F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6CFE,0x6D3E,0x6D7E,0x6DBE,0x6DDE,0x6E3E,0x7ABE,	// 3: pink (color-corrected)
	0x7ADE,0x7B1E,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x013E,0x017E,0x01BE,0x05DE,0x0DFE,0x1A5E,0x26BE,	// 4: orange (color-corrected)
	0x36DE,0x4B3E,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x027E,0x02BD,0x02DD,0x071E,0x0F3F,0x177F,0x2F9F,	// 5: yellow (color-corrected)
	0x47DF,0x5FDF,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x036B,0x036D,0x038E,0x0FB1,0x1BD4,0x27F7,0x33FA,	// 6: yellow-green (color-corrected)
	0x43FC,0x5FFD,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x0F20,0x0B60,0x1FA2,0x1FC5,0x23E8,0x33EF,0x33F2,	// 7: lively green (color-corrected)
	0x43F6,0x4FF8,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x22A0,0x1EC0,0x2300,0x2B22,0x2B64,0x2B89,0x3FCE,	// 8: green (color-corrected)
	0x4BF1,0x53F3,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3B21,0x3F44,0x4785,0x4BA6,0x47E2,0x5BED,0x63F2,	// 9: light green (color-corrected)
	0x73F6,0x77F8,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x7602,0x7642,0x7683,0x7AA5,0x7AE8,0x7B2B,0x7B2E,	// 10: sky blue (color-corrected)
	0x7B52,0x7B95,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6080,0x68A0,0x74E0,0x7941,0x7983,0x7A05,0x7A68,	// 11: light blue (color-corrected)
	0x7AEB,0x7B2E,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x3400,0x4800,0x5400,0x6820,0x6080,0x54C0,0x7142,	// 12: blue (color-corrected)
	0x75A4,0x7A26,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x502D,0x5C0F,0x6811,0x6C73,0x70D5,0x7156,0x75B8,	// 13: violet
	0x761A,0x7A9C,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x6011,0x6C13,0x7014,0x7877,0x78F8,0x7979,0x7DFA,	// 14: purple (color-corrected)
	0x7E7C,0x7EFC,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x58BD,0x5C7F,0x68DF,0x6D1F,0x6D5F,0x71BF,0x721F,	// 15: fuschia (color-corrected)
	0x765F,0x769F,0x7FFF,0x0000,0x0000,0x0000,0x0000,0x0000
};



void effectDSiArrowButtonPalettes(u16* palette, u8 paletteLength);
void effectDSiStartBorderPalettes(u16* palette, u8 paletteLength);
void effectDSiStartTextPalettes(u16* palette, u8 paletteLength);
void effectGrayscalePalette(u16* palette, u8 paletteLength);
#endif