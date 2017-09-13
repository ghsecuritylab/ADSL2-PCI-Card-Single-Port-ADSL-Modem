#ifndef __AAI_LPBK_DYN_RATE_H__2005_08_10__12_00__
#define __AAI_LPBK_DYN_RATE_H__2005_08_10__12_00__

/******************************************************************************
**
** FILE NAME    : aai_lpbk_dyn_rate.h
** PROJECT      : Danube
** MODULES      : Data Front End (DFE)
**
** DATE         : 10 AUG 2005
** AUTHOR       : Chen Tai Cheng
** DESCRIPTION  : ADSL Data Front End Loopback Firmware
** COPYRIGHT    :       Copyright (c) 2006
**                      Infineon Technologies AG
**                      Am Campeon 1-12, 85579 Neubiberg, Germany
**
**    This program is free software; you can redistribute it and/or modify
**    it under the terms of the GNU General Public License as published by
**    the Free Software Foundation; either version 2 of the License, or
**    (at your option) any later version.
**
** HISTORY
** $Date        $Author         $Comment
** 10 AUG 2005  Chen Tai Cheng  Initiate Version
** 25 OCT 2006  Xu Liang        Add GPL header.
*******************************************************************************/

UINT32 code_array[] = {0xf802020, 0x800000, 0xf802020, 0x34c0000, 0xf802020, 0x34c0000, 0xf802020, 0x1400000,
0xf802020, 0x1400000, 0xf802020, 0x1400000, 0x7402020, 0x7000264a, 0x7402020, 0x7000264a,
0xf802020, 0x1400000, 0xf802020, 0x1400000, 0xf802020, 0x1400000, 0xf802020, 0x1400000,
0x7402020, 0x7000264a, 0x7402020, 0x7000264a, 0x7402020, 0x7000264a, 0x7402020, 0x7000264a,
0x204a, 0x214a, 0x224a, 0x234a, 0x244a, 0x254a, 0x264a, 0x274a,
0x1000204a, 0x1000214a, 0x1000224a, 0x1000234a, 0x1000244a, 0x1000254a, 0x1000264a, 0x1000274a,
0x2000204a, 0x2000214a, 0x2000224a, 0x2000234a, 0x2000244a, 0x2000254a, 0x2000264a, 0x2000274a,
0x3000204a, 0x3000214a, 0xf80200a, 0x80000001, 0x74220ab, 0xf80200a, 0xa0000001, 0x78220ab,
0x204a, 0x3f80240a, 0xd8000001, 0x341c2442, 0x3f80220a, 0xa0000000, 0x1802069, 0x600d3a,
0x3000234a, 0x5, 0x402069, 0x7000264a, 0x7000264a, 0x7000264a, 0xffcf07f1, 0x7000264a,
0x3e022482, 0x30001c10, 0x30401c14, 0x30801c18, 0x30c01c1c, 0x31001c20, 0x31401c24, 0x31801c28,
0x31c01c2c, 0x32001c30, 0x32401c34, 0x32801c38, 0x32c01c3c, 0x33001c40, 0x36c01c44, 0x37c01c48,
0x37401c4c, 0x3f001c50, 0x104424aa, 0x1f80230a, 0xa0240000, 0x13001b00, 0x700c1600, 0xa0280000,
0x1f80230a, 0xa02c0000, 0x13001b00, 0x3b9b2455, 0x1080246a, 0x33001c54, 0x10c0246a, 0x33001c58,
0x3e001c6c, 0x3e401c70, 0x100224aa, 0x33001c74, 0x104224aa, 0x33001c80, 0x110224aa, 0x33001c8c,
0x114224aa, 0x33001c98, 0x120224aa, 0x33001c78, 0x124224aa, 0x33001c7c, 0x128224aa, 0x33001c84,
0x12c224aa, 0x33001c88, 0x140224aa, 0x33001c90, 0x144224aa, 0x33001c94, 0x148224aa, 0x33001c9c,
0x14c224aa, 0x33001ca0, 0x110124aa, 0x33001ca4, 0x114124aa, 0x33001ca8, 0x118124aa, 0x33001cac,
0x160224aa, 0x33001cb4, 0x104124aa, 0x33001cb0, 0x70c0266b, 0x0, 0x400bd6, 0x3038146c,
0x30391470, 0x300c1474, 0x100224ab, 0x300c1480, 0x104224ab, 0x300c148c, 0x110224ab, 0x300c1498,
0x114224ab, 0x300c1478, 0x120224ab, 0x300c147c, 0x124224ab, 0x300c1484, 0x128224ab, 0x300c1488,
0x12c224ab, 0x300c1490, 0x140224ab, 0x300c1494, 0x144224ab, 0x300c149c, 0x148224ab, 0x300c14a0,
0x14c224ab, 0x300c14a4, 0x110124ab, 0x300c14a8, 0x114124ab, 0x300c14ac, 0x118124ab, 0x300c14b4,
0x160224ab, 0x300c14b0, 0x104124ab, 0x300c1454, 0x1080246b, 0x300c1458, 0x10c0246b, 0x300c1450,
0x7300240a, 0x30001410, 0x30011414, 0x30021418, 0x3003141c, 0x30041420, 0x30051424, 0x30061428,
0x3007142c, 0x30081430, 0x30091434, 0x300a1438, 0x300b143c, 0x301b1444, 0x301f1448, 0x301d144c,
0x300c1440, 0x3e022480, 0x87402020, 0x3e022482, 0x30001c10, 0x30401c14, 0x30801c18, 0x30c01c1c,
0x31001c20, 0x31401c24, 0x31801c28, 0x31c01c2c, 0x32001c30, 0x32401c34, 0x32801c38, 0x32c01c3c,
0x33001c40, 0x36c01c44, 0x37c01c48, 0x37401c4c, 0x3f001c50, 0x3b9b2455, 0x1080246a, 0x33001c54,
0x10c0246a, 0x33001c58, 0x3e001c6c, 0x3e401c70, 0x100224aa, 0x33001c74, 0x104224aa, 0x33001c80,
0x110224aa, 0x33001c8c, 0x114224aa, 0x33001c98, 0x120224aa, 0x33001c78, 0x124224aa, 0x33001c7c,
0x128224aa, 0x33001c84, 0x12c224aa, 0x33001c88, 0x140224aa, 0x33001c90, 0x144224aa, 0x33001c94,
0x148224aa, 0x33001c9c, 0x14c224aa, 0x33001ca0, 0x110124aa, 0x33001ca4, 0x114124aa, 0x33001ca8,
0x118124aa, 0x33001cac, 0x160224aa, 0x33001cb4, 0x104124aa, 0x33001cb0, 0x70c0266b, 0x0,
0x400a12, 0x3038146c, 0x30391470, 0x300c1474, 0x100224ab, 0x300c1480, 0x104224ab, 0x300c148c,
0x110224ab, 0x300c1498, 0x114224ab, 0x300c1478, 0x120224ab, 0x300c147c, 0x124224ab, 0x300c1484,
0x128224ab, 0x300c1488, 0x12c224ab, 0x300c1490, 0x140224ab, 0x300c1494, 0x144224ab, 0x300c149c,
0x148224ab, 0x300c14a0, 0x14c224ab, 0x300c14a4, 0x110124ab, 0x300c14a8, 0x114124ab, 0x300c14ac,
0x118124ab, 0x300c14b4, 0x160224ab, 0x300c14b0, 0x104124ab, 0x300c1454, 0x1080246b, 0x300c1458,
0x10c0246b, 0x300c1450, 0x7300240a, 0x30001410, 0x30011414, 0x30021418, 0x3003141c, 0x30041420,
0x30051424, 0x30061428, 0x3007142c, 0x30081430, 0x30091434, 0x300a1438, 0x300b143c, 0x301b1444,
0x301f1448, 0x301d144c, 0x300c1440, 0x3e022480, 0x87802020, 0x704126ab, 0x30000, 0x704126ab,
0x80000, 0x720226ab, 0x20000, 0x740226ab, 0x20000, 0x728226ab, 0x20000, 0x748226ab,
0x20000, 0x74224aa, 0x1002002, 0x802843, 0x220ab, 0x402040, 0x4220ab, 0x78224aa,
0x1012102, 0x812943, 0x10221ab, 0x412140, 0x14221ab, 0x70002e4c, 0x0, 0x422a43,
0x7080240a, 0x7000264a, 0x807e2344, 0xf8120e0, 0x5c00000, 0x424aa, 0x442445, 0x424ab,
0xf80210a, 0xa0280000, 0x40224a, 0x801900, 0x18020a8, 0x4a002810, 0x4a802a10, 0xf80210a,
0xa0280000, 0x224a, 0x801900, 0x18120aa, 0x7c02020, 0x7000264a, 0x7000264a, 0x7000264a,
0x7000264a, 0x7000264a, 0x1cfcc0f1, 0x1cfcb208, 0x1cfcb248, 0x1cfcb288, 0x1cfcb2c8, 0xc5e1b308,
0xc7e1c6e1, 0x341c2442, 0x40244a, 0x1040224a, 0x104a2a00, 0x872b40, 0x70492e00, 0x40000,
0x2472702, 0x872700, 0x1080200a, 0x200a, 0x823e2702, 0xf8420e0, 0x9140000, 0x1000234a,
0x12cd2000, 0x128b2300, 0x12ce2000, 0x128b2300, 0x12cf2000, 0x128b2300, 0x12c12000, 0x128b2300,
0x907e2247, 0xf8120e0, 0x8300000, 0x90be2247, 0xf8120e0, 0x7540000, 0x813e2047, 0xf8120e0,
0x6cc0000, 0x13401d00, 0x13801e00, 0x13c01f00, 0x401900, 0x100d1500, 0x100e1600, 0x100f1700,
0x11100, 0xf802020, 0x6ec0000, 0x13401d00, 0x100d1500, 0x13801e00, 0x100e1600, 0x13c01f00,
0x100f1700, 0x401900, 0x11100, 0x1200240a, 0x933e2507, 0x1340210a, 0xf8220e0, 0x8fc0000,
0x12882000, 0x1200240a, 0x933e2607, 0x1380210a, 0xf8220e0, 0x8fc0000, 0x12882000, 0x1200240a,
0x933e2707, 0x13c0210a, 0xf8220e0, 0x8fc0000, 0x12882000, 0x1200240a, 0x833e2107, 0x1040210a,
0xf8220e0, 0x8fc0000, 0x12882000, 0xf802020, 0x6500000, 0x813e2047, 0xf8120e0, 0x7880000,
0x13441d00, 0x13841e00, 0x13c41f00, 0x441900, 0x110d1500, 0x110e1600, 0x110f1700, 0x1011100,
0xf802020, 0x7a80000, 0x13441d00, 0x110d1500, 0x13841e00, 0x110e1600, 0x13c41f00, 0x110f1700,
0x441900, 0x1011100, 0x1200240a, 0x1f8c2404, 0xffff0000, 0x933e2507, 0x1340210a, 0xf8220e0,
0x8fc0000, 0x12882000, 0x1200240a, 0x1f8c2404, 0xffff0000, 0x933e2607, 0x1380210a, 0xf8220e0,
0x8fc0000, 0x12882000, 0x1200240a, 0x1f8c2404, 0xffff0000, 0x933e2707, 0x13c0210a, 0xf8220e0,
0x8fc0000, 0x12882000, 0x1200240a, 0x1f8c2404, 0xffff0000, 0x833e2107, 0x1040210a, 0xf8220e0,
0x8fc0000, 0x12882000, 0xf802020, 0x6500000, 0x813e2047, 0xf8120e0, 0x8640000, 0x13421d00,
0x13821e00, 0x13c21f00, 0x421900, 0x108d1500, 0x108e1600, 0x108f1700, 0x811100, 0xf802020,
0x8840000, 0x13421d00, 0x108d1500, 0x13821e00, 0x108e1600, 0x13c21f00, 0x108f1700, 0x421900,
0x811100, 0x1200240a, 0x1fc32484, 0x933e2507, 0x1340210a, 0xf8220e0, 0x8fc0000, 0x12882000,
0x1200240a, 0x1fc32484, 0x933e2607, 0x1380210a, 0xf8220e0, 0x8fc0000, 0x12882000, 0x1200240a,
0x1fc32484, 0x933e2707, 0x13c0210a, 0xf8220e0, 0x8fc0000, 0x12882000, 0x1200240a, 0x1fc32484,
0x833e2107, 0x1040210a, 0xf8220e0, 0x8fc0000, 0x12882000, 0xf802020, 0x6500000, 0x244a,
0x200250a, 0x300260a, 0x240230a, 0xf802020, 0x9140000, 0x100200a, 0x341c2440, 0xc6c1c7c1,
0x1404c5c1, 0x1404320c, 0x1404320b, 0x1404320a, 0x14043209, 0xc0d13208, 0x7c02020, 0x1cfcc0f1,
0x2442b208, 0x240a341c, 0x20400000, 0x20400105, 0x20400206, 0x200a0307, 0x14001040, 0x15000000,
0x16000001, 0x17000002, 0x240a0003, 0x20400200, 0x20401105, 0x20401206, 0x1c001307, 0x1d000000,
0x1e000040, 0x1f000080, 0x244000c0, 0x1404341c, 0xc0d13208, 0x7c02020, 0x1cfcc0f1, 0x1cfcb208,
0x2442b248, 0x240a341c, 0x200a0000, 0x210a1040, 0x10001080, 0x10041000, 0x10041201, 0x10041202,
0x24401203, 0x24400105, 0x24400206, 0x1c000307, 0x14000000, 0x1d000000, 0x15000040, 0x1e000001,
0x16000080, 0x1f000002, 0x170000c0, 0x19000003, 0x19041000, 0x19041048, 0x19041088, 0x244010c8,
0x1404341c, 0x14043209, 0xc0d13208, 0x7c02020, 0x212b7fe0, 0x78e00000, 0x202a, 0xa1007fe0,
0xdfac0f1, 0x73280020, 0xde007508, 0x66b8f006, 0x38122f0, 0xe601fff7, 0x90c20ef7, 0x649,
0xddac0f1, 0x73280020, 0xde007508, 0x66b8f006, 0x3812215, 0xe601fff1, 0x90c20ef7, 0x629,
0x222a, 0x7fe07945, 0x212b, 0x222a, 0x7fe07a26, 0x222b, 0xa0207fe0, 0x7fe08000,
0x78e0a100, 0xa8207fe0, 0x7fe08800, 0x78e0a900, 0xb0207fe0, 0x7fe09800, 0x78e0b100, 0x79458040,
0xa0207fe0, 0xd6ec0f1, 0x76080000, 0x721a7728, 0xf012d900, 0xe8a7835, 0x71c9ffef, 0x71a9e610,
0x69a4f00a, 0x93630ff1, 0x20f0700a, 0xe1010040, 0x10101e04, 0x83c209ef, 0x59d, 0xd36c0f1,
0x76080000, 0x721a7728, 0xf013da00, 0x20812015, 0xffef0e4e, 0xe61070c9, 0xf00b72a9, 0xff16aa4,
0x16049343, 0x20151401, 0xe201208c, 0xaf1a420, 0x56583c2, 0x78e00000, 0xcf2c0f1, 0x705a0000,
0x77287508, 0x733a721a, 0xf019db00, 0x20c12015, 0x20c22115, 0xffef0e66, 0xe51070a9, 0xf00f73c9,
0xfed6bc4, 0x20f09383, 0x211520c1, 0x1a0020cc, 0x15042040, 0xe3011401, 0xbe9a420, 0x50983c2,
0x78e00000, 0x402069, 0x7000264a, 0x7000264a, 0x7000264a, 0x78e07ee0, 0xc9ec0f1, 0xc1a40000,
0x370cf, 0xefa1d98, 0x718bffef, 0x370cf, 0xeee1d9c, 0xc181ffef, 0x76cfc000, 0xa780000,
0x5e0819, 0xb8e1c001, 0xf8220ca, 0xdf800000, 0x38220e3, 0x6221ca, 0x370cf, 0x7e60204c,
0x70cfd904, 0x204c0003, 0x7e60df00, 0x70cf71e9, 0x20500003, 0x218a7e60, 0x70cf0a0f, 0x204c0003,
0xd9027e60, 0x75cf, 0x8508a000, 0x70cfe8a2, 0x1da00003, 0xffef0e8a, 0x70cfc182, 0x1da40003,
0xffef0e7e, 0xc002c183, 0x15208c7, 0x8c3c003, 0xd8010152, 0xa5e0a508, 0xa524d9fe, 0xa501d8ff,
0xa5e2a505, 0xa503a526, 0xd97fa507, 0xf027b909, 0x51089f, 0x370cf, 0xe461da0, 0xc182ffef,
0x370cf, 0xe3a1da4, 0xc183ffef, 0x883c002, 0xc0030152, 0x52087b, 0xa508d802, 0xa5e4a5e0,
0xa501d801, 0xa505d8ff, 0xa5e6a5e2, 0x4208a, 0x208aa503, 0xa5070f87, 0x70cf71e9, 0x1c880003,
0x85057e40, 0xb8088521, 0x70cf7905, 0x1c8c0003, 0x70cf7e40, 0x1d880003, 0x85227e60, 0x370cf,
0x7e601d90, 0x70cf8526, 0x1d8c0003, 0x85237e60, 0x370cf, 0x7e601d94, 0x70cf8527, 0x1da00003,
0xd9007e60, 0x370cf, 0x7e601da4, 0x3b1d900, 0xc0a40020, 0xb42c0f1, 0x24820000, 0xde003110,
0x8021f015, 0x80a580e3, 0xe5017d22, 0xb80bd85d, 0x71a97835, 0xffef0dea, 0xd817728b, 0x78f5b80d,
0xda671a9, 0x728bffef, 0xe17e601, 0x70cf1093, 0xa0000000, 0x8020eee7, 0x80a480e2, 0x70cff1e6,
0x1d980003, 0xffef0d56, 0x70cfd902, 0x1d9c0003, 0xffef0d4a, 0x758bd902, 0x1f1f2580, 0x70cf71a9,
0x1c200003, 0xffef0d3a, 0xf0f2182, 0x96001501, 0x2480748b, 0xb8851010, 0x70cfa400, 0x1c200003,
0xffef0d1a, 0x96011501, 0x200315, 0x31102480, 0xc1a1c0f1, 0x370cf, 0xd061c08, 0x718bffef,
0x70cfc100, 0x1c080003, 0xcf2b985, 0xc140ffef, 0xc0d1c0a1, 0x78e07ee0, 0xc5e1c0f1, 0x208ac1a4,
0xc7202c4, 0xd908ffef, 0x370cf, 0x75cf1f20, 0xa7c0000, 0x718b7d60, 0x370cf, 0x7d601f2c,
0x70cfc182, 0x1f240003, 0xc1817d60, 0x370cf, 0x7d601f30, 0xc200c183, 0x7a04c002, 0xc101c240,
0x7824c003, 0xa15c041, 0x70cf029e, 0x1f200003, 0xffef0c8a, 0xff617148, 0x2184c101, 0xf2088004,
0x370cf, 0xc761f24, 0xffb3ffcf, 0x2044c001, 0xf20b8801, 0x370cf, 0xc621f24, 0xffd5ffcf,
0x20026d, 0x269c0a4, 0xc0a40020, 0xc1a1c0f1, 0xbea718b, 0x208affef, 0xc00002c4, 0xde080d,
0xc0a1ffd6, 0x7ee0c0d1, 0xc0d1c0a1, 0x78e07ee0, 0x78e07ee0, 0x9c2c0f1, 0xd9010020, 0x30102482,
0x75cfdf00, 0xa0000000, 0xa5e1a5e0, 0xa5e3a5e2, 0xa5e5a5e4, 0xa5e7a5e6, 0x370cf, 0x76cf1f08,
0xa780000, 0xa5e87e60, 0x370cf, 0x71cf1f0c, 0x15550000, 0x70cf7e40, 0x1f000003, 0xd91a7e60,
0x370cf, 0x71cf1f04, 0x1aaa0000, 0x70cf7e40, 0x1c380003, 0xd90f7e60, 0x370cf, 0x71cf1c04,
0x3c440000, 0x70cf7e40, 0x1c800003, 0xd9047e60, 0x370cf, 0x7e601c84, 0x70cfd904, 0x1d800003,
0xd9047e60, 0x370cf, 0x7e601d84, 0x70cfd904, 0x1c080003, 0xd9157e60, 0x370cf, 0x7e601c20,
0xa5e0d915, 0xa504d87f, 0xa501d880, 0xa505d8ff, 0x370cf, 0xd97f1c88, 0xb9087e60, 0x85218505,
0x7905b808, 0x370cf, 0x7e401c8c, 0xd87fa5e2, 0x208aa506, 0xa5030004, 0xfc5208a, 0x70cfa507,
0x1d880003, 0x71e97e60, 0x370cf, 0x7e601d90, 0x70cf8526, 0x1d8c0003, 0x85237e60, 0x370cf,
0x7e601d94, 0x70cf8527, 0x1f140003, 0x218a7e60, 0x70cf0010, 0x1f2c0003, 0x218a7e60, 0x70cf0010,
0x1f180003, 0x218a7e60, 0x70cf0804, 0x1f300003, 0x218a7e60, 0x70cf0804, 0x1f1c0003, 0xd9027e60,
0x284208a, 0xffef0a6e, 0x70cfd908, 0xdf800000, 0x71e97e60, 0xf00671e9, 0x30402415, 0xe101a0e0,
0x8004218c, 0x728bf6ba, 0xb80bd85d, 0xffef0ada, 0x4218a, 0x370cf, 0xac61c08, 0xd920ffef,
0x78e0f000, 0x7ee0, 0xb6881cfc, 0xb6481cfc, 0xb6081cfc, 0xb5c81cfc, 0xb5881cfc, 0xb5481cfc,
0xb5081cfc, 0xb4c81cfc, 0xb4881cfc, 0xb4481cfc, 0xb4081cfc, 0xb3c81cfc, 0xb3881cfc, 0x1cfc7fe0,
0x78e0b348, 0xdd38dc04, 0x78e0f035, 0xdd34dc04, 0x78e0f033, 0xdd30dc04, 0x78e0f031, 0xdd2cdc04,
0x78e0f02f, 0xdd28dc04, 0x78e0f02d, 0xdd24dc04, 0x78e0f02b, 0xdd20dc04, 0x78e0f029, 0xdd1cdc04,
0x78e0f027, 0xdd18dc04, 0x78e0f025, 0xdd14dc04, 0x78e0f023, 0xdd10dc04, 0x78e0f021, 0xdd0cdc04,
0x78e0f01f, 0xdd08dc04, 0x78e0f01c, 0xdd04dc04, 0x1434f019, 0x1430301a, 0x142c3019, 0x14283018,
0x14243017, 0x14203016, 0x141c3015, 0x14183014, 0x14143013, 0x14103012, 0x140c3011, 0xc7023010,
0x24b0c601, 0x24b0334d, 0x7ee0331f, 0x0, 0x0};


#endif  //  __AAI_LPBK_DYN_RATE_H__2005_08_10__12_00__