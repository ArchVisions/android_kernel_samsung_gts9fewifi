/* SPDX-License-Identifier: GPL-2.0-only
 *
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Jaehoe Yang <jaehoe.yang@samsung.com>
 *
 * DSI PHY control values
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DSI_PHY_CON_VAL_H
#define _DSI_PHY_CON_VAL_H

static const u32 DSIM_PHY_BIAS_CON_VAL[] = {
	0x00000010,
	0x00000110,
	0x00003223,
	0x00000000,
	0x00000000,
};

static const u32 DSIM_PHY_PLL_CON_VAL[] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000500,
//	0x0000008E, /* Need to check default value of PLL_CON6 */
	0x00000000,
	0x00001450,
	0x00000A28,
	0x00001104,
};

static const u32 DSIM_PHY_MC_GNR_CON_VAL[] = {
	0x00000000,
	0x00001450,
};

static const u32 DSIM_PHY_MC_ANA_CON_VAL[] = {
	/* EDGE_CON[14:12] DPHY=3'b111, CPHY=3'b001 */
//	0x00007033, /* Need to check default value of MC_ANA_CON0 */
	0x00000122,
//	0x00000004, /* BIAS SLEEP ENABLE */
	0x00000000,
//	0x00000002,
	0x00000000,
};

/* same value in all master data lane */
static const u32 DSIM_PHY_MD_GNR_CON_VAL[] = {
	0x00000000,
	0x00001450,
};
/* Need to check reg_cnt */
static const u32 DSIM_PHY_MD_ANA_CON_VAL[] = {
//	0x00007033,
	0x00000122,
//	0x00000004, /* BIAS SLEEP ENABLE */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* DPHY timing table */
/* below table have to be changed to meet MK DPHY spec*/
static const u32 dphy_timing[][10] = {
	/* bps, clk_prepare, clk_zero, clk_post, clk_trail,
	 * hs_prepare, hs_zero, hs_trail, lpx, hs_exit
	 */
	{2500, 12, 43, 11, 11, 11, 20, 10, 9, 17},
	{2490, 12, 43, 11, 11, 11, 20, 10, 9, 17},
	{2480, 12, 42, 11, 11, 11, 20, 10, 9, 17},
	{2470, 11, 43, 11, 11, 11, 20, 10, 9, 16},
	{2460, 11, 43, 11, 11, 11, 20, 10, 9, 16},
	{2450, 11, 43, 11, 11, 11, 20, 10, 9, 16},
	{2440, 11, 42, 11, 11, 11, 19, 10, 9, 16},
	{2430, 11, 42, 11, 11, 11, 19, 10, 9, 16},
	{2420, 11, 42, 11, 10, 11, 19, 10, 9, 16},
	{2410, 11, 42, 11, 10, 11, 19, 10, 9, 16},
	{2400, 11, 41, 10, 10, 11, 19, 10, 8, 16},
	{2390, 11, 41, 10, 10, 11, 19, 10, 8, 16},
	{2380, 11, 41, 10, 10, 11, 19, 9, 8, 16},
	{2370, 11, 41, 10, 10, 11, 18, 9, 8, 16},
	{2360, 11, 41, 10, 10, 11, 18, 9, 8, 16},
	{2350, 11, 40, 10, 10, 11, 18, 9, 8, 16},
	{2340, 11, 40, 10, 10, 11, 18, 9, 8, 16},
	{2330, 11, 40, 10, 10, 10, 19, 9, 8, 16},
	{2320, 11, 40, 10, 10, 10, 19, 9, 8, 15},
	{2310, 11, 39, 10, 10, 10, 19, 9, 8, 15},
	{2300, 11, 39, 10, 10, 10, 18, 9, 8, 15},
	{2290, 11, 39, 10, 10, 10, 18, 9, 8, 15},
	{2280, 11, 39, 10, 10, 10, 18, 9, 8, 15},
	{2270, 10, 39, 10, 10, 10, 18, 9, 8, 15},
	{2260, 10, 39, 10, 10, 10, 18, 9, 8, 15},
	{2250, 10, 39, 10, 10, 10, 18, 9, 8, 15},
	{2240, 10, 39, 10, 10, 10, 18, 9, 8, 15},
	{2230, 10, 38, 10, 10, 10, 18, 9, 8, 15},
	{2220, 10, 38, 10, 10, 10, 17, 9, 8, 15},
	{2210, 10, 38, 10, 10, 10, 17, 9, 8, 15},
	{2200, 10, 38, 9, 10, 10, 17, 9, 8, 15},
	{2190, 10, 38, 9, 9, 10, 17, 9, 8, 15},
	{2180, 10, 37, 9, 9, 10, 17, 9, 8, 14},
	{2170, 10, 37, 9, 9, 10, 17, 9, 8, 14},
	{2160, 10, 37, 9, 9, 10, 17, 9, 8, 14},
	{2150, 10, 37, 9, 9, 10, 16, 8, 8, 14},
	{2140, 10, 36, 9, 9, 10, 16, 8, 8, 14},
	{2130, 10, 36, 9, 9, 10, 16, 8, 7, 14},
	{2120, 10, 36, 9, 9, 9, 17, 8, 7, 14},
	{2110, 10, 36, 9, 9, 9, 17, 8, 7, 14},
	{2100, 10, 35, 9, 9, 9, 17, 8, 7, 14},
	{2090, 10, 35, 9, 9, 9, 17, 8, 7, 14},
	{2080, 9, 36, 9, 9, 9, 16, 8, 7, 14},
	{2070, 9, 36, 9, 9, 9, 16, 8, 7, 14},
	{2060, 9, 35, 9, 9, 9, 16, 8, 7, 14},
	{2050, 9, 35, 9, 9, 9, 16, 8, 7, 14},
	{2040, 9, 35, 9, 9, 9, 16, 8, 7, 14},
	{2030, 9, 35, 9, 9, 9, 16, 8, 7, 13},
	{2020, 9, 35, 9, 9, 9, 16, 8, 7, 13},
	{2010, 9, 34, 9, 9, 9, 15, 8, 7, 13},
	{2000, 9, 34, 8, 9, 9, 15, 8, 7, 13},
	{1990, 9, 34, 8, 9, 9, 15, 8, 7, 13},
	{1980, 9, 34, 8, 9, 9, 15, 8, 7, 13},
	{1970, 9, 33, 8, 9, 9, 15, 8, 7, 13},
	{1960, 9, 33, 8, 9, 9, 15, 8, 7, 13},
	{1950, 9, 33, 8, 8, 9, 15, 8, 7, 13},
	{1940, 9, 33, 8, 8, 9, 15, 8, 7, 13},
	{1930, 9, 32, 8, 8, 9, 14, 8, 7, 13},
	{1920, 9, 32, 8, 8, 9, 14, 8, 7, 13},
	{1910, 9, 32, 8, 8, 8, 15, 7, 7, 13},
	{1900, 9, 32, 8, 8, 8, 15, 7, 7, 13},
	{1890, 9, 31, 8, 8, 8, 15, 7, 7, 12},
	{1880, 8, 32, 8, 8, 8, 15, 7, 7, 12},
	{1870, 8, 32, 8, 8, 8, 15, 7, 7, 12},
	{1860, 8, 32, 8, 8, 8, 14, 7, 6, 12},
	{1850, 8, 32, 8, 8, 8, 14, 7, 6, 12},
	{1840, 8, 31, 8, 8, 8, 14, 7, 6, 12},
	{1830, 8, 31, 8, 8, 8, 14, 7, 6, 12},
	{1820, 8, 31, 8, 8, 8, 14, 7, 6, 12},
	{1810, 8, 31, 8, 8, 8, 14, 7, 6, 12},
	{1800, 8, 30, 7, 8, 8, 14, 7, 6, 12},
	{1790, 8, 30, 7, 8, 8, 13, 7, 6, 12},
	{1780, 8, 30, 7, 8, 8, 13, 7, 6, 12},
	{1770, 8, 30, 7, 8, 8, 13, 7, 6, 12},
	{1760, 8, 29, 7, 8, 8, 13, 7, 6, 12},
	{1750, 8, 29, 7, 8, 8, 13, 7, 6, 12},
	{1740, 8, 29, 7, 8, 8, 13, 7, 6, 11},
	{1730, 8, 29, 7, 8, 8, 13, 7, 6, 11},
	{1720, 8, 29, 7, 7, 8, 13, 7, 6, 11},
	{1710, 8, 28, 7, 7, 8, 12, 7, 6, 11},
	{1700, 8, 28, 7, 7, 7, 13, 7, 6, 11},
	{1690, 8, 28, 7, 7, 7, 13, 7, 6, 11},
	{1680, 7, 29, 7, 7, 7, 13, 6, 6, 11},
	{1670, 7, 28, 7, 7, 7, 13, 6, 6, 11},
	{1660, 7, 28, 7, 7, 7, 13, 6, 6, 11},
	{1650, 7, 28, 7, 7, 7, 13, 6, 6, 11},
	{1640, 7, 28, 7, 7, 7, 12, 6, 6, 11},
	{1630, 7, 27, 7, 7, 7, 12, 6, 6, 11},
	{1620, 7, 27, 7, 7, 7, 12, 6, 6, 11},
	{1610, 7, 27, 7, 7, 7, 12, 6, 6, 11},
	{1600, 7, 27, 6, 7, 7, 12, 6, 5, 10},
	{1590, 7, 26, 6, 7, 7, 12, 6, 5, 10},
	{1580, 7, 26, 6, 7, 7, 12, 6, 5, 10},
	{1570, 7, 26, 6, 7, 7, 11, 6, 5, 10},
	{1560, 7, 26, 6, 7, 7, 11, 6, 5, 10},
	{1550, 7, 26, 6, 7, 7, 11, 6, 5, 10},
	{1540, 7, 25, 6, 7, 7, 11, 6, 5, 10},
	{1530, 7, 25, 6, 7, 7, 11, 6, 5, 10},
	{1520, 7, 25, 6, 7, 7, 11, 6, 5, 10},
	{1510, 7, 25, 6, 7, 7, 11, 6, 5, 10},
	{1500, 7, 24, 6, 7, 7, 10, 6, 5, 10},
	{1490, 59, 25, 6, 77, 59, 10, 70, 44, 9},
	{1480, 59, 24, 6, 76, 58, 10, 70, 44, 9},
	{1470, 58, 24, 6, 76, 58, 10, 69, 44, 9},
	{1460, 58, 24, 6, 76, 58, 10, 69, 43, 9},
	{1450, 58, 24, 6, 75, 57, 10, 68, 43, 9},
	{1440, 57, 24, 6, 75, 57, 10, 68, 43, 9},
	{1430, 57, 23, 6, 75, 56, 10, 68, 42, 8},
	{1420, 56, 23, 6, 74, 56, 9, 67, 42, 8},
	{1410, 56, 23, 6, 74, 56, 9, 67, 42, 8},
	{1400, 56, 23, 5, 74, 55, 9, 67, 41, 8},
	{1390, 55, 23, 5, 73, 55, 9, 66, 41, 8},
	{1380, 55, 23, 5, 73, 54, 9, 66, 41, 8},
	{1370, 54, 22, 5, 72, 54, 9, 66, 41, 8},
	{1360, 54, 22, 5, 72, 54, 9, 65, 40, 8},
	{1350, 54, 22, 5, 72, 53, 9, 65, 40, 8},
	{1340, 53, 22, 5, 71, 53, 9, 65, 40, 8},
	{1330, 53, 22, 5, 71, 53, 9, 64, 39, 8},
	{1320, 52, 22, 5, 71, 52, 8, 64, 39, 8},
	{1310, 52, 21, 5, 70, 52, 8, 64, 39, 8},
	{1300, 51, 21, 5, 70, 51, 8, 63, 38, 8},
	{1290, 51, 21, 5, 70, 51, 8, 63, 38, 7},
	{1280, 51, 21, 5, 69, 51, 8, 63, 38, 7},
	{1270, 50, 21, 5, 69, 50, 8, 62, 38, 7},
	{1260, 50, 20, 5, 69, 50, 8, 62, 37, 7},
	{1250, 49, 20, 5, 68, 49, 8, 62, 37, 7},
	{1240, 49, 20, 5, 68, 49, 8, 61, 37, 7},
	{1230, 49, 20, 5, 68, 49, 8, 61, 36, 7},
	{1220, 48, 20, 5, 67, 48, 8, 61, 36, 7},
	{1210, 48, 19, 5, 67, 48, 7, 60, 36, 7},
	{1200, 47, 19, 4, 67, 48, 7, 60, 35, 7},
	{1190, 47, 19, 4, 66, 47, 7, 60, 35, 7},
	{1180, 47, 19, 4, 66, 47, 7, 59, 35, 7},
	{1170, 46, 19, 4, 66, 46, 7, 59, 35, 7},
	{1160, 46, 18, 4, 65, 46, 7, 59, 34, 7},
	{1150, 45, 18, 4, 65, 46, 7, 58, 34, 7},
	{1140, 45, 18, 4, 65, 45, 7, 58, 34, 6},
	{1130, 45, 18, 4, 64, 45, 7, 58, 33, 6},
	{1120, 44, 18, 4, 64, 44, 7, 57, 33, 6},
	{1110, 44, 18, 4, 64, 44, 7, 57, 33, 6},
	{1100, 43, 17, 4, 63, 44, 6, 57, 32, 6},
	{1090, 43, 17, 4, 63, 43, 6, 56, 32, 6},
	{1080, 43, 17, 4, 63, 43, 6, 56, 32, 6},
	{1070, 42, 17, 4, 62, 43, 6, 56, 32, 6},
	{1060, 42, 17, 4, 62, 42, 6, 55, 31, 6},
	{1050, 41, 17, 4, 62, 42, 6, 55, 31, 6},
	{1040, 41, 16, 4, 61, 41, 6, 54, 31, 6},
	{1030, 41, 16, 4, 61, 41, 6, 54, 30, 6},
	{1020, 40, 16, 4, 61, 41, 6, 54, 30, 6},
	{1010, 40, 16, 4, 60, 40, 6, 53, 30, 6},
	{1000, 39, 16, 3, 60, 40, 6, 53, 29, 5},
	{990, 39, 15, 3, 60, 39, 6, 53, 29, 5},
	{980, 39, 15, 3, 59, 39, 5, 52, 29, 5},
	{970, 38, 15, 3, 59, 39, 5, 52, 29, 5},
	{960, 38, 15, 3, 59, 38, 5, 52, 28, 5},
	{950, 37, 15, 3, 58, 38, 5, 51, 28, 5},
	{940, 37, 14, 3, 58, 38, 5, 51, 28, 5},
	{930, 37, 14, 3, 57, 37, 5, 51, 27, 5},
	{920, 36, 14, 3, 57, 37, 5, 50, 27, 5},
	{910, 36, 14, 3, 57, 36, 5, 50, 27, 5},
	{900, 35, 14, 3, 56, 36, 5, 50, 26, 5},
	{890, 35, 14, 3, 56, 36, 5, 49, 26, 5},
	{880, 35, 13, 3, 56, 35, 5, 49, 26, 5},
	{870, 34, 13, 3, 55, 35, 4, 49, 26, 5},
	{860, 34, 13, 3, 55, 35, 4, 48, 25, 5},
	{850, 33, 13, 3, 55, 34, 4, 48, 25, 4},
	{840, 33, 13, 3, 54, 34, 4, 48, 25, 4},
	{830, 33, 12, 3, 54, 33, 4, 47, 24, 4},
	{820, 32, 12, 3, 54, 33, 4, 47, 24, 4},
	{810, 32, 12, 3, 53, 33, 4, 47, 24, 4},
	{800, 31, 12, 2, 53, 32, 4, 46, 23, 4},
	{790, 31, 12, 2, 53, 32, 4, 46, 23, 4},
	{780, 30, 12, 2, 52, 31, 4, 46, 23, 4},
	{770, 30, 11, 2, 52, 31, 4, 45, 23, 4},
	{760, 30, 11, 2, 52, 31, 3, 45, 22, 4},
	{750, 29, 11, 2, 51, 30, 3, 45, 22, 4},
	{740, 29, 11, 2, 51, 30, 3, 44, 22, 4},
	{730, 28, 11, 2, 51, 30, 3, 44, 21, 4},
	{720, 28, 10, 2, 50, 29, 3, 44, 21, 4},
	{710, 28, 10, 2, 50, 29, 3, 43, 21, 4},
	{700, 27, 10, 2, 50, 28, 3, 43, 20, 3},
	{690, 27, 10, 2, 49, 28, 3, 43, 20, 3},
	{680, 26, 10, 2, 49, 28, 3, 42, 20, 3},
	{670, 26, 10, 2, 49, 27, 3, 42, 20, 3},
	{660, 26, 9, 2, 48, 27, 3, 42, 19, 3},
	{650, 25, 9, 2, 48, 26, 3, 41, 19, 3},
	{640, 25, 9, 2, 48, 26, 2, 41, 19, 3},
	{630, 24, 9, 2, 47, 26, 2, 40, 18, 3},
	{620, 24, 9, 2, 47, 25, 2, 40, 18, 3},
	{610, 24, 8, 2, 47, 25, 2, 40, 18, 3},
	{600, 23, 8, 1, 46, 25, 2, 39, 17, 3},
	{590, 23, 8, 1, 46, 24, 2, 39, 17, 3},
	{580, 22, 8, 1, 46, 24, 2, 39, 17, 3},
	{570, 22, 8, 1, 45, 23, 2, 38, 17, 3},
	{560, 22, 7, 1, 45, 23, 2, 38, 16, 2},
	{550, 21, 7, 1, 45, 23, 2, 38, 16, 2},
	{540, 21, 7, 1, 44, 22, 2, 37, 16, 2},
	{530, 20, 7, 1, 44, 22, 1, 37, 15, 2},
	{520, 20, 7, 1, 43, 21, 1, 37, 15, 2},
	{510, 20, 6, 1, 43, 21, 1, 36, 15, 2},
	{500, 19, 6, 1, 43, 21, 1, 36, 14, 2},
	{490, 19, 6, 1, 42, 20, 1, 36, 14, 2},
	{480, 18, 6, 1, 42, 20, 1, 35, 14, 2},
	{470, 18, 6, 1, 42, 20, 1, 35, 14, 2},
	{460, 18, 6, 1, 41, 19, 1, 35, 13, 2},
	{450, 17, 5, 1, 41, 19, 1, 34, 13, 2},
	{440, 17, 5, 1, 41, 18, 1, 34, 13, 2},
	{430, 16, 5, 1, 40, 18, 0, 34, 12, 2},
	{420, 16, 5, 1, 40, 18, 0, 33, 12, 2},
	{410, 16, 5, 1, 40, 17, 0, 33, 12, 1},
	{400, 15, 5, 0, 39, 17, 0, 33, 11, 1}
};

static const u32 b_dphyctl[14] = {
	0x0af, 0x0c8, 0x0e1, 0x0fa,		/* esc 7 ~ 10 */
	0x113, 0x12c, 0x145, 0x15e, 0x177,	/* esc 11 ~ 15 */
	0x190, 0x1a9, 0x1c2, 0x1db, 0x1f4	/* esc 16 ~ 20 */
};

#endif /* _DSI_PHY_CON_VAL_H */
