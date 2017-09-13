#ifndef __DANUBE_ETH2_FW_WITH_DPLUS_H__2006_08_16__12_00__
#define __DANUBE_ETH2_FW_WITH_DPLUS_H__2006_08_16__12_00__


/******************************************************************************
**
** FILE NAME    : danube_eth2_fw_with_dplus.h
** PROJECT      : Danube
** MODULES     	: Second ETH Interface (MII1)
**
** DATE         : 4 AUG 2005
** AUTHOR       : Xu Liang
** DESCRIPTION  : Second ETH Interface (MII1) Driver Firmware (D1)
** COPYRIGHT    : 	Copyright (c) 2006
**			Infineon Technologies AG
**			Am Campeon 1-12, 85579 Neubiberg, Germany
**
**    This program is free software; you can redistribute it and/or modify
**    it under the terms of the GNU General Public License as published by
**    the Free Software Foundation; either version 2 of the License, or
**    (at your option) any later version.
**
** HISTORY
** $Date        $Author         $Comment
**  4 AUG 2005  Xu Liang        Initiate Version
** 23 OCT 2006  Xu Liang        Add GPL header.
*******************************************************************************/



static u32 firmware_binary_code[] = {
    0x80000930, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x8000FFC8, 0x00000000, 0x00000000, 0x00000000,
    0xC1000002, 0xD90C0000, 0xC2000002, 0xDA080001, 0x80001A80, 0xC2000000, 0xDA080001, 0x80001A18,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xC2000002, 0xC0002578, 0xCE000000, 0xC000257A, 0xCE000000, 0xC1020002, 0xD90C0000, 0x80001998,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x80001E68, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xC10E0002, 0xD90C0000, 0xC0002208, 0xC8400000, 0x800016F0, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x94000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xC1200002, 0xD90C0000, 0xC2000002, 0xDA280001, 0xC2000000, 0xC000257E, 0xCE000000, 0x904C2611,
    0xC000257C, 0xCB800000, 0x00000000, 0xC2000000, 0xDA280001, 0x800011E8, 0x00000000, 0x00000000,
    0x00000000, 0xC3E1FFFE, 0x597DFFFE, 0xC3E1FFFC, 0x593DFEF0, 0x90000969, 0x00000000, 0x00000000,
    0x00000000, 0x90CC0909, 0x00000000, 0x00000000, 0x00000000, 0xC3C00000, 0xDBC80001, 0xC3C00014,
    0xC000140C, 0xCFC00000, 0xC30001FE, 0xC000140A, 0xCF000000, 0xC3000000, 0x7F018000, 0xC000042E,
    0xCF000000, 0xC000040E, 0xCF000000, 0xC3C1FFFE, 0xC0002572, 0xCFC00020, 0xC00025C0, 0xCFC00020,
    0xC00025C4, 0xCFC00020, 0xC00025C6, 0xCFC00020, 0xC0002574, 0xCFC00020, 0xC3C00000, 0xC2800008,
    0x6FF86000, 0x47F9C000, 0x5BB82260, 0xC3400000, 0x58380004, 0xCB420080, 0x00000000, 0x58380008,
    0xCF400080, 0x5BFC0002, 0xB7E8FF90, 0x00000000, 0x00000000, 0xC3C00000, 0xC000257C, 0x00000000,
    0xCFC00001, 0xCFC00001, 0xCFC00001, 0xCFC00000, 0xC3E04224, 0x5BFC0022, 0xC0004002, 0xCFC00000,
    0xC121FFFC, 0x5911FEF0, 0x15000000, 0xC000221E, 0xCBC00000, 0xC0002220, 0xCB800000, 0x5FFC0002,
    0x8400000A, 0xDB840080, 0xC1000006, 0xD9040001, 0xC000257E, 0xCBC00000, 0x00000000, 0x00000000,
    0x5FFC0002, 0x8400002A, 0x00000000, 0x00000000, 0x00000000, 0x90442611, 0xC000257C, 0xCB800000,
    0x00000000, 0x80000000, 0x00000000, 0x8000FF70, 0xC000221E, 0xCA000000, 0xC000257A, 0xCA800000,
    0x5E200002, 0x84000218, 0xC2000000, 0xDF600040, 0x5E200080, 0x840001DA, 0x00000000, 0xC161FFFE,
    0x5955FFFE, 0x15400000, 0xC000221C, 0xCA000000, 0xC000256E, 0xCA400000, 0xC0002572, 0xCA800000,
    0xC0002574, 0xCAC00000, 0xC121FFFC, 0x5911FEF0, 0x15000000, 0x76610000, 0x76A10000, 0x762D6000,
    0x84000142, 0xC00025AC, 0x99002268, 0xC9400000, 0xC6D80000, 0x00000000, 0xC5680000, 0xC161FFFE,
    0x5955FFFE, 0x15400000, 0xC0002574, 0xCA400000, 0xC2000002, 0x6A290000, 0x7E010000, 0x76252000,
    0xCE400000, 0xC121FFFC, 0x5911FEF0, 0x15000000, 0x6EB46000, 0x46B5A000, 0x5B7422A0, 0x58340000,
    0xC3C00000, 0xCBC000E0, 0x58340006, 0xC2000000, 0xCA000180, 0xC2400000, 0x5834000A, 0xCA420180,
    0x43E1E000, 0x6EB06000, 0x43258000, 0x5B3017C0, 0xC39A8024, 0xC7380068, 0xC6B81C20, 0x990021D8,
    0xDB980000, 0xDBD80001, 0x00000000, 0xC2800000, 0xC000257A, 0xCE800000, 0x80000070, 0xC0002224,
    0xCA000000, 0xC00025B6, 0xCA400000, 0x5EA80000, 0x84000042, 0x46610000, 0x84000018, 0xC2000000,
    0x7E010000, 0xC000256E, 0xCE000000, 0x8000FD60, 0x5A640002, 0xC00025B6, 0xCE400000, 0xC00025BA,
    0xCAC00000, 0xC2400000, 0xDF260040, 0x5E2C0004, 0x88000798, 0x426D2000, 0x5E640020, 0x84000BBA,
    0xC00025A2, 0xCB800000, 0xC00025A4, 0xCA400000, 0xC0002530, 0xCF800000, 0xC0002532, 0xCE400000,
    0xC000259E, 0xCAC00000, 0xC00025C2, 0xCA000000, 0x5EEC0000, 0x840002D0, 0x62010008, 0x84000702,
    0xC000259C, 0xCE000000, 0xC000259C, 0xCBC00000, 0xC2800000, 0x00000000, 0x6FF46000, 0x47F5A000,
    0x5B7422A0, 0x5834000A, 0xCA800080, 0xC00057C0, 0x6FE46000, 0x40240000, 0x40280000, 0xCA000000,
    0x58000002, 0xCA400000, 0xC0002530, 0xCE000000, 0xC0002532, 0xCE400000, 0xC000140A, 0xC2000000,
    0xCE000040, 0x5AA80004, 0xC2420008, 0x46A50000, 0x00000000, 0xC6280002, 0x5834000C, 0xC2000000,
    0xCA000080, 0x5834000A, 0xC6900080, 0xCD000080, 0x5E200002, 0x5834000C, 0xC6100080, 0xCD000080,
    0xC0002572, 0xCA000000, 0xC2400002, 0x6A7D2000, 0x72610000, 0xCE000000, 0x5834000C, 0xC2C00000,
    0xCAC00080, 0xC00025C2, 0xCA800000, 0x7E410000, 0x00000000, 0x72694000, 0x5EEC0000, 0x00000000,
    0x76294002, 0xCE800000, 0xC000140A, 0xC2000000, 0x7E010000, 0xCE000040, 0xC0002530, 0xCB800000,
    0xC2000000, 0xC00025A8, 0xCE000000, 0xC7A00080, 0xC2800000, 0xC7AAE010, 0x42A14000, 0x6EA4E010,
    0xC2000000, 0xC6A00038, 0x5AE40002, 0x5E200000, 0x00000000, 0xC66C0002, 0xC000259E, 0xCEC00000,
    0x990022C0, 0xC0002368, 0xC9400000, 0xC1800002, 0xC2400000, 0xC7A40080, 0x990022C0, 0xC000236A,
    0xC9400000, 0xC6580000, 0xC0002530, 0xCB800000, 0xC00025A8, 0xCA000000, 0xC3400000, 0xC7B6E010,
    0xC2400000, 0xC7A40080, 0x42752000, 0x46258000, 0xC000259E, 0xCAC00000, 0xC3C00000, 0xC2400100,
    0x5E2C0002, 0xC00025B2, 0xC6FC0002, 0xCFC00000, 0x5FFC0000, 0xC7280000, 0xC6680002, 0x6EA04010,
    0x5AE00002, 0xC2400006, 0x76A52000, 0xC000253A, 0xC62C0002, 0xCEC00000, 0xC00025A8, 0xCA400000,
    0xC2000002, 0xC2C00000, 0x5E640000, 0xC2400000, 0xC62C0002, 0x47690000, 0x5EEC0000, 0xC00025AE,
    0xC6A00002, 0xCE000000, 0x5F740000, 0xC2000002, 0xC6600002, 0x76E10000, 0x77E10000, 0xC00025B0,
    0xCE000000, 0x00000000, 0xC0002530, 0xCB400000, 0xC0002532, 0xCB000000, 0xC00025A8, 0xCA000000,
    0xC3C00000, 0xC73C00E0, 0x6E204010, 0x43E1E000, 0xC2000000, 0xC762E028, 0x6E204010, 0x43E1E000,
    0xC000253A, 0xCAC00000, 0xC00025AA, 0xCA000000, 0xC39A8008, 0xC6F81050, 0x6E20A000, 0x5A202C00,
    0xC6380068, 0xC000259C, 0xCA400000, 0xC00025AE, 0xCA800000, 0xC00025B2, 0xCAC00000, 0xC2000000,
    0xC6A00140, 0xC6E00008, 0xC6600910, 0xC00025AA, 0xCA400000, 0xC000258C, 0xCAC00000, 0xC0003000,
    0x58004000, 0x40240000, 0xCE000000, 0x5A640002, 0x5EA40020, 0xC2000000, 0xC6240002, 0xC00025AA,
    0xCE400000, 0xC0002590, 0xCF6C0000, 0xC0002594, 0xCF2C0000, 0xC00025B0, 0xCA800000, 0xC00025A8,
    0xCA000000, 0xC0002598, 0xCEAC0000, 0x5A200100, 0xC00025A8, 0xCE000000, 0xC00025A2, 0xCF400000,
    0xC00025A4, 0xCF000000, 0xC00025BA, 0xCA000000, 0xC000259E, 0xCA800000, 0x5A200002, 0xC00025BA,
    0xCE000000, 0x5EA80002, 0xC000259E, 0xCE800000, 0xC2400002, 0x7A6D6000, 0xC000258C, 0xCEC00000,
    0xC2000000, 0xDF600040, 0x5E600080, 0x8400FFD2, 0x00000000, 0x990021D8, 0xDB980000, 0xDBD80001,
    0x00000000, 0x00000000, 0x00000000, 0xC000258A, 0xCA000000, 0xC00025A0, 0xCB800000, 0x5E200000,
    0x840003F2, 0xC0002598, 0xCA380000, 0xC0002590, 0xCB380000, 0xC0002594, 0xCAF80000, 0xC0002530,
    0xCF000000, 0xC0002532, 0xCEC00000, 0xC00025B0, 0xCE000000, 0x5E200000, 0x840000BA, 0xC0002530,
    0xCAC00000, 0xC000258E, 0xCA800000, 0xC3402C00, 0xC200FFFE, 0xC6341078, 0xC3002C00, 0xC6301078,
    0xC3B0003A, 0x6EA0E000, 0xC6380078, 0xC3F00012, 0xC7BC4268, 0xC6FEE010, 0xC0003000, 0x58004000,
    0x40280000, 0xCBC03040, 0xC000100C, 0x00000000, 0xCF000001, 0xCF400001, 0xCF800001, 0xCFC00000,
    0xC000258E, 0xCB400000, 0xC0003000, 0x58004000, 0x40340000, 0xC3C00000, 0xCBC00008, 0x00000000,
    0x00000000, 0x5E3C0002, 0x840000D8, 0xC2000000, 0xDF610050, 0xC000259C, 0xCA800000, 0x5E6001FE,
    0x8800FFC0, 0x6EA06000, 0x46A10000, 0x5A2022A0, 0x990022E0, 0xDA980000, 0xDA180001, 0xC6000000,
    0x99002150, 0xC000251C, 0xC1400000, 0xC9420050, 0xC2000000, 0xDF600040, 0x5E600080, 0x8400FFD2,
    0xC000251C, 0xCA000000, 0xC000251E, 0xCA400000, 0x990021D8, 0xDA180000, 0xDA580001, 0x00000000,
    0xC00025BA, 0xCA000000, 0x5B740002, 0x5E740020, 0xC000258E, 0xC6740002, 0xCF400000, 0x5E200002,
    0xC00025BA, 0xCE000000, 0xC000140A, 0xC2000000, 0xCE000040, 0xC00025A0, 0xCB800000, 0xC000258A,
    0xCA400000, 0xC2000000, 0x7E010000, 0x5E640002, 0xCE400000, 0xC000140A, 0xCE000040, 0xC00025B0,
    0xCA400000, 0xC2000002, 0x7A39C000, 0xC00025A0, 0xCF800000, 0x5E640000, 0x84000022, 0x00000000,
    0x00000000, 0xA8E2FFC0, 0x00000000, 0xC1220002, 0xD90C0000, 0xC0000CE6, 0xCA000000, 0xC2400002,
    0x00000000, 0xC6600808, 0xC6600940, 0xCE000000, 0x5E3C0002, 0x84000008, 0xC0000CE8, 0xC2100002,
    0xCE000808, 0x8000F080, 0x00000000, 0x00000000, 0x00000000, 0xC3E1FFFE, 0x597DFFFE, 0xC3E1FFFC,
    0x593DFEF0, 0x94000001, 0x00000000, 0x00000000, 0x00000000, 0xC0800000, 0xDF4B0040, 0xC00025CC,
    0xCBC00000, 0xC1000000, 0xD9000001, 0xC1000002, 0xD90C0000, 0x6FF46000, 0x47F5A000, 0x5B7422A0,
    0xC2800000, 0x58340004, 0xCA800080, 0xC2000000, 0xC0002500, 0xCE000108, 0x5EA80002, 0x58340004,
    0xC6900080, 0xCD000080, 0x5A7C0020, 0xC2000002, 0x6A250000, 0xC0000408, 0xCE000000, 0xDCA80001,
    0x5EA80000, 0x8400E488, 0x00000000, 0xA48402B8, 0x00000000, 0xC3C00000, 0xC000140E, 0xCBC10020,
    0xC3000000, 0xC3400000, 0x6FF86000, 0x47F9C000, 0x5BB822A0, 0xC2800000, 0x5838000A, 0xCA820180,
    0xC00057C0, 0x6FE06000, 0x40200000, 0x40280000, 0xCA800000, 0xC0002226, 0xCAC00000, 0xC2000000,
    0xC6A3E008, 0x46E10000, 0x84000192, 0x6FF86000, 0x47F9C000, 0x5BB822A0, 0x58380006, 0xCB420080,
    0xC2400000, 0x58380006, 0xCA400080, 0x5F740002, 0x58380006, 0xC7501080, 0xCD001080, 0xC2000000,
    0x58380004, 0xCA020080, 0x5838000C, 0xCB000080, 0x5A640002, 0x46250000, 0xC2000000, 0xC6240002,
    0x58380006, 0xC6500080, 0xCD000080, 0x5838000A, 0xCA020080, 0x5B300002, 0x5838000C, 0xC7100080,
    0xCD000080, 0x5A200002, 0x5E600008, 0x00000000, 0xC6600002, 0x5838000A, 0xC6101080, 0xCD001080,
    0xC00025C2, 0xCA000000, 0xC2C00002, 0x6AFD6000, 0x72E10000, 0xCE000000, 0x5E340000, 0x84000028,
    0xC000256E, 0xCA000000, 0xC2C00002, 0x6AFD6000, 0x7EC16000, 0x76E10000, 0xCE000000, 0x5F300008,
    0x84000028, 0xC0002572, 0xCA000000, 0xC2C00002, 0x6AFD6000, 0x7EC16000, 0x76E10000, 0xCE000000,
    0xC0002574, 0xCA400000, 0xC2000002, 0x6A3D0000, 0x72252000, 0xCE400000, 0xA4880018, 0xC000258A,
    0xCA000000, 0x00000000, 0x00000000, 0x5A200002, 0xCE000000, 0xA4860050, 0xC2400000, 0xC000140E,
    0xCA418020, 0xC2020002, 0xC0002500, 0xCE000108, 0xC00025CC, 0xCE400000, 0xC1000000, 0xD9000001,
    0xD8400080, 0xC1000004, 0xD9000001, 0xA48E0020, 0xC0000CAA, 0xCA000000, 0xC2400002, 0x00000000,
    0xC6600940, 0xC6600808, 0xCE000000, 0xC0001408, 0xCC800000, 0xC10E0002, 0xD90C0000, 0x8000FAD8,
    0xDFBC0001, 0xC000042A, 0xCFC00000, 0xC1040002, 0xD90C0000, 0x6FEA0010, 0xC241FFFE, 0x76694000,
    0x62816008, 0x5E6C0040, 0x840000D2, 0x6EF46000, 0x46F5A000, 0x5B7422A0, 0x58340006, 0xC2400000,
    0xCA420080, 0x00000000, 0xC2000000, 0x5A640002, 0xC6501080, 0xCD001080, 0x58340004, 0xCA000080,
    0x00000000, 0x00000000, 0x5A200002, 0xCE000080, 0xC000256E, 0xCA400000, 0xC2000002, 0x6A2D0000,
    0x72252000, 0xCE400000, 0xC2000002, 0x7E010000, 0x6A2D0000, 0x76294000, 0x8000FEF8, 0x00000000,
    0x8000F990, 0x00000000, 0xC0002462, 0xC9800000, 0x00000000, 0xC1C00200, 0x4194C000, 0x45D8E000,
    0x8800FFFA, 0xC5D80000, 0xC0002462, 0xCD800000, 0xC0001406, 0xC9800000, 0xC1C00002, 0x9D000000,
    0xC5D80A08, 0xC5581050, 0xCD800000, 0xC0002460, 0xC9400000, 0xC1800100, 0xC1D00002, 0x58146B00,
    0xD5800000, 0x58000002, 0xD5800001, 0x59540004, 0xB558FFF8, 0xC0002460, 0xC1400000, 0xCD400000,
    0xDD980001, 0x9D000000, 0xDD940000, 0xC0001404, 0xCDC00808, 0x59540002, 0x6994E018, 0x61C0C008,
    0x4194A000, 0x5D940040, 0x8800FFFA, 0xC5940000, 0x9D000000, 0xCD400000, 0x00000000, 0x00000000,
    0x9D000000, 0x4158A000, 0xCD400000, 0x00000000, 0xC0002530, 0xC9400000, 0xC0002226, 0xC9C00000,
    0xC0002532, 0xC9800000, 0xC5D41F08, 0xC1C00002, 0xC5D81E08, 0xC0002462, 0xC9C00000, 0x00000000,
    0x00000000, 0x581C7200, 0x5DC07400, 0x8800FFFA, 0x5C000200, 0xCD400000, 0x58000002, 0x5DC07400,
    0x8800FFFA, 0x5C000200, 0xCD800000, 0xC0002462, 0xC9C00000, 0xC1800000, 0xC15004C0, 0xC5D40068,
    0xDD9C0000, 0xC5D41C20, 0xC1C00000, 0xDD800001, 0x58000008, 0xC9C00080, 0xDD800001, 0x58000000,
    0xC98000E0, 0x6DDC2000, 0xC000251C, 0x41D8E000, 0xCD400001, 0xCDC00000, 0xDD940001, 0xC1C00000,
    0x58140008, 0xC9C00080, 0xC1800000, 0x58140004, 0xC9820080, 0x00000000, 0x59DC0002, 0x459CC000,
    0x8400FFF8, 0xC1C00000, 0x9D000000, 0x58140008, 0xC5D80080, 0xCD800080, 0x00000000, 0xD9580000,
    0x6D586000, 0x4558C000, 0x59982260, 0xD9980001, 0x5818000A, 0xC1800000, 0xC9800080, 0xC0005780,
    0x6D5C6000, 0x401C0000, 0x40180000, 0xC9400000, 0x58000002, 0x00000000, 0xC9C00000, 0xC0002530,
    0xCD400000, 0xC0002532, 0xCDC00000, 0x59980004, 0xC1C20008, 0xB59CFFF8, 0x00000000, 0xC1800000,
    0xDD9C0001, 0x581C000A, 0xCD800080, 0x581C000C, 0xC1800000, 0xC9800028, 0xC1C00002, 0xDD940000,
    0x69D4E000, 0x5D980002, 0xCD800028, 0xC00025C0, 0xC9800000, 0x00000000, 0x9D000000, 0x00000000,
    0x71D8C000, 0xCD800000, 0xC2000000, 0xDEE10040, 0xC2400000, 0xAD380001, 0xDEE70040, 0x5E200000,
    0x840000A0, 0x5E640000, 0x840000C0, 0x00000000, 0x80000010, 0x5E640000, 0x840000A0, 0x5E200000,
    0x84000060, 0xDEA00001, 0x5E200000, 0x8400002A, 0x00000000, 0x00000000, 0x00000000, 0x90CC0000,
    0x00000000, 0x00000000, 0x00000000, 0x90000000, 0x00000000, 0x00000000, 0x00000000, 0xC3800000,
    0xC0002580, 0xCB000000, 0xC3C065C0, 0xC3400C20, 0x80000018, 0xC3800002, 0xC0002582, 0xCB000000,
    0xC3C055C0, 0xC3400CA0, 0xC000257C, 0xCF800000, 0xC2000002, 0xC000257E, 0xCE000000, 0x43F00000,
    0xCAC00000, 0x00000000, 0xC2800000, 0xC6EB0038, 0xC2000000, 0xC6E12010, 0x6E242010, 0x5E380000,
    0x8400FFFA, 0x5A640004, 0xC66C0910, 0x5834000C, 0xC2100002, 0xCE000808, 0xC0000E24, 0xC11E0000,
    0xCD000F08, 0xC0000E26, 0xC7101340, 0xCD001340, 0xC6900040, 0xCD000040, 0x5E380002, 0x840000AA,
    0xC0000E20, 0xC1001800, 0xCD000068, 0xC0000E22, 0xC10025C0, 0xCD000068, 0xC0000C2A, 0xC1220000,
    0xCD001110, 0xC0000CAA, 0xC1220002, 0xCD001110, 0xC0000C28, 0xC2000000, 0xCA000040, 0x43298000,
    0x00000000, 0x47212000, 0x00000000, 0x46318006, 0xC0002580, 0xCF000000, 0x800000A0, 0xC0000E20,
    0xC1000800, 0xCD000068, 0xC0000E22, 0xC10015C0, 0xCD000068, 0xC0000CAA, 0xC1220000, 0xCD001110,
    0xC0000C2A, 0xC1220002, 0xCD001110, 0xC0000CA8, 0xC2000000, 0xCA000040, 0x43298000, 0x00000000,
    0x47212000, 0x00000000, 0x46318006, 0xC0002582, 0xCF000000, 0x5E200002, 0x5F300002, 0x00000000,
    0xC6300004, 0x43F00000, 0xCEC00910, 0x5EA80002, 0x8400FFB8, 0xC0000E24, 0xC11E0002, 0xCD000F08,
    0x8000FC70, 0x00000000, 0x00000000, 0x00000000,
};

static u32 firmware_binary_data[] = {
};



#endif  //  __DANUBE_ETH2_FW_WITH_DPLUS_H__2006_08_16__12_00__
