#include "imago.h"
#include "../../data/data.h"
#include "../data/pointers.c"
#include "../globals.h"

const i16 sImagoMultiSpriteData_Idle_Frame0[21] = {
    3, 0, 0,
    3, -16, 36,
    0, 8, 0,
    6, 0, 0,
    6, -28, 28,
    9, 0, 0,
    10, 0, 0
};

const i16 sImagoMultiSpriteData_Growling_Unused_Frame0[21] = {
    3, 0, 0,
    3, -16, 36,
    1, 0, 0,
    6, 0, 0,
    6, -28, 28,
    9, 0, 0,
    10, 0, 0
};

const i16 sImagoMultiSpriteData_ShootingNeedles_Frame0[21] = {
    3, 0, 0,
    3, -16, 36,
    0, 8, 0,
    6, 0, 0,
    6, -28, 28,
    9, 0, 0,
    11, 0, 0
};

const i16 sImagoMultiSpriteData_ShootingNeedles_Frame1[21] = {
    4, 0, 0,
    4, -16, 36,
    0, 7, 0,
    6, 0, 0,
    7, -28, 28,
    9, 0, 0,
    11, 0, 0
};

const i16 sImagoMultiSpriteData_RechargingNeedles_Frame0[21] = {
    3, 0, 0,
    3, -16, 36,
    0, 6, 0,
    6, 0, 0,
    7, -28, 28,
    9, 0, 0,
    12, 0, 0
};

const i16 sImagoMultiSpriteData_Dying_Frame0[21] = {
    5, 0, 0,
    4, -8, 36,
    0, 0, 0,
    8, -16, 12,
    8, -36, 48,
    9, 0, 0,
    2, 0, 0
};

const struct FrameData sImagoMultiSpriteData_Idle[2] = {
    sImagoMultiSpriteData_Idle_Frame0,
    0x4,
    NULL,
    0x0
};

const struct FrameData sImagoMultiSpriteData_Growling_Unused[2] = {
    sImagoMultiSpriteData_Growling_Unused_Frame0,
    0x4,
    NULL,
    0x0
};

const struct FrameData sImagoMultiSpriteData_ShootingNeedles[3] = {
    sImagoMultiSpriteData_ShootingNeedles_Frame0,
    0x14,
    sImagoMultiSpriteData_ShootingNeedles_Frame1,
    0x11,
    NULL,
    0x0
};

const struct FrameData sImagoMultiSpriteData_RechargingNeedles[2] = {
    sImagoMultiSpriteData_RechargingNeedles_Frame0,
    0x4,
    NULL,
    0x0
};

const struct FrameData sImagoMultiSpriteData_Dying[2] = {
    sImagoMultiSpriteData_Dying_Frame0,
    0x4,
    NULL,
    0x0
};

const i16 sImagoDamagedStingerFallingYVelocity[10] = {
    0, 1, 2, 4, 8, 12, 16, 20, 24, SHORT_MAX
};

const i16 sImagoAttackingXVelocity[49] = {
    -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -4, -5,
    -6, -5, -4, -3, -2, -2, -2, -2, -1, -1, -1, -1,
    1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 6, 5, 4, 3,
    2, 2, 2, 2, 1, 1, 1, 1, SHORT_MAX
};

const u8 sImagoDynamicPaletteData[9][2] = {
    { 2, 12 },
    { 1, 6 },
    { 0, 8 },
    { 1, 4 },
    { 2, 22 },
    { 1, 6 },
    { 0, 8 },
    { 1, 4 },
    { 128, 128 }
};

const u32 sImagoGFX[1503];
const u16 sImagoPAL[96];

const u16 sImagoPartOAM_BodyIdle_Frame0[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdd, OBJ_SIZE_32x16 | 0x1d9, OBJ_SPRITE_OAM | 0x20c,
    0xdd, OBJ_SIZE_16x16 | 0x1f9, OBJ_SPRITE_OAM | 0x210,
    0xed, OBJ_SIZE_16x16 | 0x1f1, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xed, 0x1, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfd, 0x1f1, OBJ_SPRITE_OAM | 0x28f,
    0xfd, 0x1, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x16 | 0x1ce, OBJ_SPRITE_OAM | 0x206,
    0xe3, OBJ_SIZE_16x16 | 0x1ee, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x8 | 0x1ce, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1ee, OBJ_SPRITE_OAM | 0x24a,
    0xfb, OBJ_SIZE_16x16 | 0x1ee, OBJ_SPRITE_OAM | 0x26a,
    0xf2, OBJ_SIZE_32x32 | 0x1c8, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_SIZE_16x32 | 0x1e8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x12, OBJ_SIZE_32x8 | 0x1c8, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x12, 0x1e8, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_SIZE_32x16 | 0x1d1, OBJ_SPRITE_OAM | 0x2a0,
    0xd9, OBJ_SIZE_32x32 | 0x1f2, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xf9, OBJ_SIZE_32x8 | 0x1f2, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoPartOAM_BodyIdle_Frame1[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdc, OBJ_SIZE_32x16 | 0x1d9, OBJ_SPRITE_OAM | 0x20c,
    0xdc, OBJ_SIZE_16x16 | 0x1f9, OBJ_SPRITE_OAM | 0x210,
    0xec, OBJ_SIZE_16x16 | 0x1f1, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfc, 0x1f1, OBJ_SPRITE_OAM | 0x28f,
    0xfc, 0x1, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1cd, OBJ_SPRITE_OAM | 0x206,
    0xe2, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x8 | 0x1cd, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf2, 0x1ed, OBJ_SPRITE_OAM | 0x24a,
    0xfa, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x26a,
    0xf0, OBJ_SIZE_32x32 | 0x1c7, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_16x32 | 0x1e7, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x10, OBJ_SIZE_32x8 | 0x1c7, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x10, 0x1e7, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0x7, OBJ_SIZE_32x16 | 0x1d0, OBJ_SPRITE_OAM | 0x2a0,
    0xda, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoPartOAM_BodyIdle_Frame2[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdd, OBJ_SIZE_32x16 | 0x1d8, OBJ_SPRITE_OAM | 0x20c,
    0xdd, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    0xed, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xed, 0x0, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfd, 0x1f0, OBJ_SPRITE_OAM | 0x28f,
    0xfd, 0x0, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x16 | 0x1cd, OBJ_SPRITE_OAM | 0x206,
    0xe3, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x8 | 0x1cd, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1ed, OBJ_SPRITE_OAM | 0x24a,
    0xfb, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x26a,
    0xf2, OBJ_SIZE_32x32 | 0x1c7, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_SIZE_16x32 | 0x1e7, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x12, OBJ_SIZE_32x8 | 0x1c7, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x12, 0x1e7, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_SIZE_32x16 | 0x1d0, OBJ_SPRITE_OAM | 0x2a0,
    0xda, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoPartOAM_BodyIdle_Frame4[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdd, OBJ_SIZE_32x16 | 0x1d8, OBJ_SPRITE_OAM | 0x20c,
    0xdd, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    0xed, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xed, 0x0, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfd, 0x1f0, OBJ_SPRITE_OAM | 0x28f,
    0xfd, 0x0, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x16 | 0x1cd, OBJ_SPRITE_OAM | 0x206,
    0xe3, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x8 | 0x1cd, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1ed, OBJ_SPRITE_OAM | 0x24a,
    0xfb, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x26a,
    0xf2, OBJ_SIZE_32x32 | 0x1c7, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_SIZE_16x32 | 0x1e7, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x12, OBJ_SIZE_32x8 | 0x1c7, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x12, 0x1e7, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0x7, OBJ_SIZE_32x16 | 0x1cf, OBJ_SPRITE_OAM | 0x2a0,
    0xdb, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoOAM_BrokenStinger_Frame0[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x16 | 0x1f9, OBJ_SPRITE_OAM | 0x2330,
    OBJ_SHAPE_HORIZONTAL | 0x3, OBJ_SIZE_32x8 | 0x1f9, OBJ_SPRITE_OAM | 0x2370,
    0x0, 0x10, OBJ_SPRITE_OAM | 0x2288,
    0x8, 0x8, OBJ_SPRITE_OAM | 0x2268
};

const u16 sImagoOAM_BrokenStinger_Frame1[16] = {
    0x5,
    0xfa, OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2354,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x10, OBJ_SPRITE_OAM | 0x2356,
    0x8, 0x10, OBJ_SPRITE_OAM | 0x2268,
    0x8, 0x10, OBJ_SPRITE_OAM | 0x2288,
    0xb, 0xb, OBJ_SPRITE_OAM | 0x2268
};

const u16 sImagoPartOAM_BodyIdle_Frame3[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdd, OBJ_SIZE_32x16 | 0x1d8, OBJ_SPRITE_OAM | 0x20c,
    0xdd, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    0xed, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xed, 0x0, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfd, 0x1f0, OBJ_SPRITE_OAM | 0x28f,
    0xfd, 0x0, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x16 | 0x1cd, OBJ_SPRITE_OAM | 0x206,
    0xe3, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x8 | 0x1cd, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1ed, OBJ_SPRITE_OAM | 0x24a,
    0xfb, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x26a,
    0xf2, OBJ_SIZE_32x32 | 0x1c7, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_SIZE_16x32 | 0x1e7, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x12, OBJ_SIZE_32x8 | 0x1c7, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x12, 0x1e7, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_SIZE_32x16 | 0x1d0, OBJ_SPRITE_OAM | 0x2a0,
    0xda, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoPartOAM_BodyGrowling_Frame2[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdc, OBJ_SIZE_32x16 | 0x1d9, OBJ_SPRITE_OAM | 0x20c,
    0xdc, OBJ_SIZE_16x16 | 0x1f9, OBJ_SPRITE_OAM | 0x210,
    0xec, OBJ_SIZE_16x16 | 0x1f1, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfc, 0x1f1, OBJ_SPRITE_OAM | 0x28f,
    0xfc, 0x1, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1cd, OBJ_SPRITE_OAM | 0x206,
    0xe2, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x8 | 0x1cd, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf2, 0x1ed, OBJ_SPRITE_OAM | 0x24a,
    0xfa, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x26a,
    0xf0, OBJ_SIZE_32x32 | 0x1c7, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_16x32 | 0x1e7, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x10, OBJ_SIZE_32x8 | 0x1c7, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x10, 0x1e7, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_SIZE_32x16 | 0x1d0, OBJ_SPRITE_OAM | 0x2a0,
    0xda, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoPartOAM_BodyGrowling_Frame3[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdd, OBJ_SIZE_32x16 | 0x1d8, OBJ_SPRITE_OAM | 0x20c,
    0xdd, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    0xed, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xed, 0x0, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfd, 0x1f0, OBJ_SPRITE_OAM | 0x28f,
    0xfd, 0x0, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe3, OBJ_SIZE_32x16 | 0x1cd, OBJ_SPRITE_OAM | 0x206,
    0xe3, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x8 | 0x1cd, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf3, 0x1ed, OBJ_SPRITE_OAM | 0x24a,
    0xfb, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x26a,
    0xf2, OBJ_SIZE_32x32 | 0x1c7, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_SIZE_16x32 | 0x1e7, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x12, OBJ_SIZE_32x8 | 0x1c7, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x12, 0x1e7, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x16 | 0x1d0, OBJ_SPRITE_OAM | 0x2a0,
    0xda, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoPartOAM_BodyGrowling_Frame4[55] = {
    0x12,
    OBJ_SHAPE_HORIZONTAL | 0xdd, OBJ_SIZE_32x16 | 0x1d8, OBJ_SPRITE_OAM | 0x20c,
    0xdd, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    0xed, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x24f,
    OBJ_SHAPE_VERTICAL | 0xed, 0x0, OBJ_SPRITE_OAM | 0x251,
    OBJ_SHAPE_HORIZONTAL | 0xfd, 0x1f0, OBJ_SPRITE_OAM | 0x28f,
    0xfd, 0x0, OBJ_SPRITE_OAM | 0x291,
    OBJ_SHAPE_HORIZONTAL | 0xe2, OBJ_SIZE_32x16 | 0x1cd, OBJ_SPRITE_OAM | 0x206,
    0xe2, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x8 | 0x1cd, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf2, 0x1ed, OBJ_SPRITE_OAM | 0x24a,
    0xfa, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x26a,
    0xf0, OBJ_SIZE_32x32 | 0x1c7, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_16x32 | 0x1e7, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0x10, OBJ_SIZE_32x8 | 0x1c7, OBJ_SPRITE_OAM | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x10, 0x1e7, OBJ_SPRITE_OAM | 0x284,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x16 | 0x1cf, OBJ_SPRITE_OAM | 0x2a0,
    0xdb, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x292
};

const u16 sImagoPartOAM_LeftWingIdle_Frame0[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf5, OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1f7, OBJ_SPRITE_OAM | 0x2d7,
    0xf5, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x17, OBJ_SPRITE_OAM | 0x2db
};

const u16 sImagoPartOAM_LeftWingIdle_Frame1[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x8 | 0x1f6, OBJ_SPRITE_OAM | 0x317,
    OBJ_SHAPE_HORIZONTAL | 0xf2, 0x16, OBJ_SPRITE_OAM | 0x31b
};

const u16 sImagoPartOAM_LeftWingIdle_Frame2[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xe9, OBJ_SIZE_32x16 | 0x1f5, OBJ_SPRITE_OAM | 0x2d7,
    0xe9, OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x2db
};

const u16 sImagoPartOAM_LeftWingIdle_Frame4[10] = {
    0x3,
    0xd9, OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x24d,
    0xe1, OBJ_SIZE_16x16 | 0x1ff, OBJ_SPRITE_OAM | 0x26c,
    0xe9, OBJ_SIZE_16x16 | 0x1f7, OBJ_SPRITE_OAM | 0x266
};

const u16 sImagoPartOAM_LeftWingIdle_Frame3[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xc9, OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x2dd,
    0xe9, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x35d
};

const u16 sImagoPartOAM_RightWingIdle_Frame0[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_32x16 | 0x1cc, OBJ_SPRITE_OAM | 0x2d7,
    0xf1, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1bc, OBJ_SPRITE_OAM | 0x2db
};

const u16 sImagoPartOAM_RightWingIdle_Frame1[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x1ce, OBJ_SPRITE_OAM | 0x317,
    OBJ_SHAPE_HORIZONTAL | 0xee, OBJ_X_FLIP | 0x1be, OBJ_SPRITE_OAM | 0x31b
};

const u16 sImagoPartOAM_RightWingIdle_Frame2[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xe6, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ce, OBJ_SPRITE_OAM | 0x2d7,
    0xe6, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1be, OBJ_SPRITE_OAM | 0x2db
};

const u16 sImagoPartOAM_RightWingIdle_Frame4[10] = {
    0x3,
    0xd7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1c9, OBJ_SPRITE_OAM | 0x24d,
    0xdf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1d1, OBJ_SPRITE_OAM | 0x26c,
    0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1d9, OBJ_SPRITE_OAM | 0x266
};

const u16 sImagoPartOAM_RightWingIdle_Frame3[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xc9, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x1d9, OBJ_SPRITE_OAM | 0x2dd,
    0xe9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1d9, OBJ_SPRITE_OAM | 0x35d
};

const u16 sImagoPartOAM_Core_Frame0[4] = {
    0x1,
    0xeb, OBJ_SIZE_32x32 | 0x1e6, OBJ_SPRITE_OAM | 0x12e0
};

const u16 sImagoPartOAM_Core_Frame1[25] = {
    0x8,
    0xfb, OBJ_SIZE_16x16 | 0x1e6, OBJ_SPRITE_OAM | 0x1320,
    0xea, OBJ_SIZE_16x16 | 0x1e6, OBJ_SPRITE_OAM | 0x12e0,
    0xfb, OBJ_SIZE_16x16 | 0x1f7, OBJ_SPRITE_OAM | 0x1322,
    0xe9, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x12e2,
    0xfb, OBJ_SIZE_16x16 | 0x1ee, OBJ_SPRITE_OAM | 0x1321,
    0xf2, OBJ_SIZE_16x16 | 0x1e6, OBJ_SPRITE_OAM | 0x1300,
    0xf0, OBJ_SIZE_16x16 | 0x1f7, OBJ_SPRITE_OAM | 0x1302,
    0xf0, OBJ_SIZE_16x16 | 0x1f1, OBJ_SPRITE_OAM | 0x1301
};

const u16 sImagoPartOAM_Core_Frame2[25] = {
    0x8,
    0xf9, OBJ_SIZE_16x16 | 0x1e4, OBJ_SPRITE_OAM | 0x1320,
    0xe8, OBJ_SIZE_16x16 | 0x1e4, OBJ_SPRITE_OAM | 0x12e0,
    0xf9, OBJ_SIZE_16x16 | 0x1f7, OBJ_SPRITE_OAM | 0x1322,
    0xe6, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x12e2,
    0xf9, OBJ_SIZE_16x16 | 0x1ed, OBJ_SPRITE_OAM | 0x1321,
    0xef, OBJ_SIZE_16x16 | 0x1e5, OBJ_SPRITE_OAM | 0x1300,
    0xee, OBJ_SIZE_16x16 | 0x1f6, OBJ_SPRITE_OAM | 0x1302,
    0xee, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x1301
};

const u16 sImagoOAM_Flying_Frame0[22] = {
    0x7,
    0x12, OBJ_SIZE_16x16 | 0x1f4, OBJ_SPRITE_OAM | 0x1337,
    0xe4, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x136c,
    0x1, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_Flying_Frame1[22] = {
    0x7,
    0x13, OBJ_SIZE_16x16 | 0x1f6, OBJ_SPRITE_OAM | 0x1337,
    0xe3, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x3, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f2, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f2, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f2, OBJ_SPRITE_OAM | 0x136c,
    0x1, OBJ_SIZE_32x32 | 0x1f3, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_Flying_Frame2[22] = {
    0x7,
    0x14, OBJ_SIZE_16x16 | 0x1f7, OBJ_SPRITE_OAM | 0x1337,
    0xe2, OBJ_SIZE_32x32 | 0x1f2, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x2, OBJ_SIZE_32x8 | 0x1f2, OBJ_SPRITE_OAM | 0x1328,
    0xeb, OBJ_SIZE_32x32 | 0x1f3, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f4, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f4, OBJ_SPRITE_OAM | 0x136c,
    0x2, OBJ_SIZE_32x32 | 0x1f4, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_Flying_Frame4[22] = {
    0x7,
    0x12, OBJ_SIZE_16x16 | 0x1f6, OBJ_SPRITE_OAM | 0x1337,
    0xe2, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x2, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xea, OBJ_SIZE_32x32 | 0x1f2, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_SIZE_32x16 | 0x1f3, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xb, OBJ_SIZE_32x8 | 0x1f3, OBJ_SPRITE_OAM | 0x136c,
    0x0, OBJ_SIZE_32x32 | 0x1f3, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_Flying_Frame3[22] = {
    0x7,
    0x13, OBJ_SIZE_16x16 | 0x1f4, OBJ_SPRITE_OAM | 0x1337,
    0xe5, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x5, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f2, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x136c,
    0x2, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_ShootingNeedles_Frame2[22] = {
    0x7,
    0x15, OBJ_SIZE_16x16 | 0x1f6, OBJ_SPRITE_OAM | 0x1337,
    0xe5, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x5, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f3, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f3, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f3, OBJ_SPRITE_OAM | 0x136c,
    0x3, OBJ_SIZE_32x32 | 0x1f3, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_ShootingNeedles_Frame3[22] = {
    0x7,
    0x13, OBJ_SIZE_16x16 | 0x1fb, OBJ_SPRITE_OAM | 0x1339,
    0xe4, OBJ_SIZE_32x32 | 0x1f2, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f2, OBJ_SPRITE_OAM | 0x1328,
    0xeb, OBJ_SIZE_32x32 | 0x1f5, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f7, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f7, OBJ_SPRITE_OAM | 0x136c,
    0x2, OBJ_SIZE_32x32 | 0x1f7, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_ShootingNeedles_Frame4[22] = {
    0x7,
    0x11, OBJ_SIZE_16x16 | 0x1fc, OBJ_SPRITE_OAM | 0x133b,
    0xe3, OBJ_SIZE_32x32 | 0x1f4, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x3, OBJ_SIZE_32x8 | 0x1f4, OBJ_SPRITE_OAM | 0x1328,
    0xe8, OBJ_SIZE_32x32 | 0x1f6, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xf9, OBJ_SIZE_32x16 | 0x1f8, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x136c,
    0xfe, OBJ_SIZE_32x32 | 0x1f9, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoOAM_ShootingNeedles_Frame9[22] = {
    0x6,
    0xe4, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x136c,
    0x1, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x1304
};

const u16 sImagoNeedleOAM_Frame0[4] = {
    0x1,
    0xf8, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x12d5
};

const u16 sImagoOAM_RechargingNeedles_Frame0[25] = {
    0x8,
    0xe4, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x136c,
    OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x12c4,
    0xe, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x1337,
    OBJ_SHAPE_HORIZONTAL | 0x11, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x1344
};

const u16 sImagoOAM_RechargingNeedles_Frame1[25] = {
    0x8,
    0xe4, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x136c,
    OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x12c4,
    0x10, OBJ_SIZE_16x16 | 0x1f5, OBJ_SPRITE_OAM | 0x1337,
    OBJ_SHAPE_HORIZONTAL | 0x11, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x1344
};

const u16 sImagoOAM_RechargingNeedles_Frame2[25] = {
    0x8,
    0xe4, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x136c,
    OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x12c4,
    0x13, OBJ_SIZE_16x16 | 0x1f3, OBJ_SPRITE_OAM | 0x1337,
    OBJ_SHAPE_HORIZONTAL | 0x11, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x1344
};

const u16 sImagoDamagedStingerOAM_Frame0[28] = {
    0x9,
    0xe2, OBJ_SIZE_32x32 | 0x1e8, OBJ_SPRITE_OAM | 0x12b0,
    0xe4, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12a8,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x1328,
    0xec, OBJ_SIZE_32x32 | 0x1f1, OBJ_SPRITE_OAM | 0x12ac,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x132c,
    OBJ_SHAPE_HORIZONTAL | 0xc, OBJ_SIZE_32x8 | 0x1f1, OBJ_SPRITE_OAM | 0x136c,
    OBJ_SHAPE_HORIZONTAL | 0x9, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x12c4,
    0x13, OBJ_SIZE_16x16 | 0x1f3, OBJ_SPRITE_OAM | 0x1337,
    OBJ_SHAPE_HORIZONTAL | 0x11, OBJ_SIZE_32x16 | 0x1f1, OBJ_SPRITE_OAM | 0x1344
};

const u16 sImagoEggOAM_Standing_Frame0[7] = {
    0x2,
    0xe8, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x1277,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x12b7
};

const u16 sImagoEggOAM_Breaking_Frame1[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x12b7,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x1217,
    0xe8, OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x1218
};

const u16 sImagoEggOAM_Breaking_Frame2[10] = {
    0x3,
    0xec, OBJ_SIZE_16x16 | 0x1f3, OBJ_SPRITE_OAM | 0x123e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x12b7,
    0xea, OBJ_SIZE_16x16 | 0x1ff, OBJ_SPRITE_OAM | 0x1218
};

const u16 sImagoEggOAM_Breaking_Frame3[10] = {
    0x3,
    0xef, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x127e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x12b7,
    0xeb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fe, OBJ_SPRITE_OAM | 0x123e
};

const u16 sImagoEggOAM_Breaking_Frame4[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x123a,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, OBJ_SPRITE_OAM | 0x121b,
    OBJ_SHAPE_HORIZONTAL | 0xf7, 0x1ea, OBJ_SPRITE_OAM | 0x121e
};

const u16 sImagoEggOAM_Breaking_Frame5[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x125a,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, OBJ_SPRITE_OAM | 0x121b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1e9, OBJ_SPRITE_OAM | 0x121e
};

const u16 sImagoEggOAM_Breaking_Frame6[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, OBJ_SPRITE_OAM | 0x121b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x127a,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1e9, OBJ_SPRITE_OAM | 0x121e
};

const u16 sImagoEggOAM_Breaking_Frame7[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, OBJ_SPRITE_OAM | 0x121b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x129a,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1e9, OBJ_SPRITE_OAM | 0x121e
};

const u16 sImagoEggOAM_Breaking_Frame8[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, OBJ_SPRITE_OAM | 0x121b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x12ba,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1e9, OBJ_SPRITE_OAM | 0x121e
};

const struct FrameData sImagoPartOAM_BodyIdle[8] = {
    sImagoPartOAM_BodyIdle_Frame0,
    0x1,
    sImagoPartOAM_BodyIdle_Frame1,
    0x2,
    sImagoPartOAM_BodyIdle_Frame2,
    0x2,
    sImagoPartOAM_BodyIdle_Frame3,
    0x1,
    sImagoPartOAM_BodyIdle_Frame4,
    0x1,
    sImagoPartOAM_BodyIdle_Frame2,
    0x2,
    sImagoPartOAM_BodyIdle_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_BodyGrowling[16] = {
    sImagoPartOAM_BodyIdle_Frame0,
    0xC,
    sImagoPartOAM_BodyIdle_Frame3,
    0x8,
    sImagoPartOAM_BodyGrowling_Frame2,
    0x4,
    sImagoPartOAM_BodyGrowling_Frame3,
    0x4,
    sImagoPartOAM_BodyGrowling_Frame4,
    0x4,
    sImagoPartOAM_BodyGrowling_Frame3,
    0x4,
    sImagoPartOAM_BodyGrowling_Frame4,
    0x4,
    sImagoPartOAM_BodyGrowling_Frame3,
    0x4,
    sImagoPartOAM_BodyGrowling_Frame4,
    0x3,
    sImagoPartOAM_BodyGrowling_Frame3,
    0x3,
    sImagoPartOAM_BodyGrowling_Frame4,
    0x3,
    sImagoPartOAM_BodyGrowling_Frame3,
    0x3,
    sImagoPartOAM_BodyGrowling_Frame2,
    0x4,
    sImagoPartOAM_BodyIdle_Frame3,
    0x8,
    sImagoPartOAM_BodyIdle_Frame0,
    0xC,
    NULL,
    0x0
};

const struct FrameData sImagoOAM_BrokenStinger[3] = {
    sImagoOAM_BrokenStinger_Frame0,
    0xC,
    sImagoOAM_BrokenStinger_Frame1,
    0x8,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_LeftWingIdle[8] = {
    sImagoPartOAM_LeftWingIdle_Frame0,
    0x2,
    sImagoPartOAM_LeftWingIdle_Frame1,
    0x3,
    sImagoPartOAM_LeftWingIdle_Frame2,
    0x3,
    sImagoPartOAM_LeftWingIdle_Frame3,
    0x2,
    sImagoPartOAM_LeftWingIdle_Frame4,
    0x2,
    sImagoPartOAM_LeftWingIdle_Frame2,
    0x3,
    sImagoPartOAM_LeftWingIdle_Frame1,
    0x3,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_LeftWingShootingNeedles[6] = {
    sImagoPartOAM_LeftWingIdle_Frame0,
    0x1,
    sImagoPartOAM_LeftWingIdle_Frame2,
    0x1,
    sImagoPartOAM_LeftWingIdle_Frame3,
    0x1,
    sImagoPartOAM_LeftWingIdle_Frame4,
    0x1,
    sImagoPartOAM_LeftWingIdle_Frame1,
    0x1,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_LeftWingDying[7] = {
    sImagoPartOAM_LeftWingIdle_Frame0,
    0x6,
    sImagoPartOAM_LeftWingIdle_Frame1,
    0xC,
    sImagoPartOAM_LeftWingIdle_Frame2,
    0x10,
    sImagoPartOAM_LeftWingIdle_Frame0,
    0x8,
    sImagoPartOAM_LeftWingIdle_Frame1,
    0x4,
    sImagoPartOAM_LeftWingIdle_Frame1,
    0x6,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_RightWingIdle[8] = {
    sImagoPartOAM_RightWingIdle_Frame0,
    0x2,
    sImagoPartOAM_RightWingIdle_Frame1,
    0x2,
    sImagoPartOAM_RightWingIdle_Frame2,
    0x3,
    sImagoPartOAM_RightWingIdle_Frame3,
    0x3,
    sImagoPartOAM_RightWingIdle_Frame4,
    0x2,
    sImagoPartOAM_RightWingIdle_Frame2,
    0x3,
    sImagoPartOAM_RightWingIdle_Frame1,
    0x3,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_RightWingShootingNeedles[6] = {
    sImagoPartOAM_RightWingIdle_Frame0,
    0x1,
    sImagoPartOAM_RightWingIdle_Frame2,
    0x1,
    sImagoPartOAM_RightWingIdle_Frame3,
    0x1,
    sImagoPartOAM_RightWingIdle_Frame4,
    0x1,
    sImagoPartOAM_RightWingIdle_Frame1,
    0x1,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_RIghtWingDying[5] = {
    sImagoPartOAM_RightWingIdle_Frame0,
    0x8,
    sImagoPartOAM_RightWingIdle_Frame1,
    0x10,
    sImagoPartOAM_RightWingIdle_Frame2,
    0xA,
    sImagoPartOAM_RightWingIdle_Frame1,
    0x6,
    NULL,
    0x0
};

const struct FrameData sImagoPartOAM_Core[9] = {
    sImagoPartOAM_Core_Frame0,
    0xC,
    sImagoPartOAM_Core_Frame1,
    0x6,
    sImagoPartOAM_Core_Frame2,
    0x8,
    sImagoPartOAM_Core_Frame1,
    0x4,
    sImagoPartOAM_Core_Frame0,
    0x16,
    sImagoPartOAM_Core_Frame1,
    0x6,
    sImagoPartOAM_Core_Frame2,
    0x8,
    sImagoPartOAM_Core_Frame1,
    0x4,
    NULL,
    0x0
};

const struct FrameData simagoOAM_Flying[9] = {
    sImagoOAM_Flying_Frame0,
    0x1,
    sImagoOAM_Flying_Frame1,
    0x1,
    sImagoOAM_Flying_Frame2,
    0x2,
    sImagoOAM_Flying_Frame3,
    0x2,
    sImagoOAM_Flying_Frame4,
    0x1,
    sImagoOAM_Flying_Frame0,
    0x1,
    sImagoOAM_Flying_Frame1,
    0x2,
    sImagoOAM_Flying_Frame2,
    0x2,
    NULL,
    0x0
};

const struct FrameData sImagoOAM_ShootingNeedles[11] = {
    sImagoOAM_Flying_Frame0,
    0x2,
    sImagoOAM_Flying_Frame3,
    0x4,
    sImagoOAM_ShootingNeedles_Frame2,
    0x6,
    sImagoOAM_ShootingNeedles_Frame3,
    0x8,
    sImagoOAM_ShootingNeedles_Frame4,
    0xA,
    sImagoOAM_ShootingNeedles_Frame3,
    0x2,
    sImagoOAM_ShootingNeedles_Frame2,
    0x1,
    sImagoOAM_Flying_Frame3,
    0x1,
    sImagoOAM_Flying_Frame0,
    0x1,
    sImagoOAM_ShootingNeedles_Frame9,
    0x2,
    NULL,
    0x0
};

const struct FrameData sImagoOAM_RechargingNeedles[4] = {
    sImagoOAM_RechargingNeedles_Frame0,
    0xA,
    sImagoOAM_RechargingNeedles_Frame1,
    0x8,
    sImagoOAM_RechargingNeedles_Frame2,
    0x6,
    NULL,
    0x0
};

const struct FrameData sImagoDamagedStingerOAM[2] = {
    sImagoDamagedStingerOAM_Frame0,
    0xFF,
    NULL,
    0x0
};

const struct FrameData sImagoNeedleOAM[2] = {
    sImagoNeedleOAM_Frame0,
    0xFF,
    NULL,
    0x0
};

const struct FrameData sImagoDamagedStingerOAM_Unused[9] = {
    sImagoOAM_Flying_Frame0,
    0xC,
    sImagoOAM_Flying_Frame1,
    0x6,
    sImagoOAM_Flying_Frame2,
    0x8,
    sImagoOAM_Flying_Frame1,
    0x4,
    sImagoOAM_Flying_Frame0,
    0x16,
    sImagoOAM_Flying_Frame1,
    0x6,
    sImagoOAM_Flying_Frame2,
    0x8,
    sImagoOAM_Flying_Frame1,
    0x4,
    NULL,
    0x0
};

const struct FrameData sImagoEggOAM_Breaking[10] = {
    sImagoEggOAM_Standing_Frame0,
    0x2,
    sImagoEggOAM_Breaking_Frame1,
    0x2,
    sImagoEggOAM_Breaking_Frame2,
    0x2,
    sImagoEggOAM_Breaking_Frame3,
    0x4,
    sImagoEggOAM_Breaking_Frame4,
    0x6,
    sImagoEggOAM_Breaking_Frame5,
    0x8,
    sImagoEggOAM_Breaking_Frame6,
    0xA,
    sImagoEggOAM_Breaking_Frame7,
    0xE,
    sImagoEggOAM_Breaking_Frame8,
    0xFF,
    NULL,
    0x0
};

const struct FrameData sImagoEggOAM_Standing[2] = {
    sImagoEggOAM_Standing_Frame0,
    0xFF,
    NULL,
    0x0
};


void ImagoSyncSubSprites(void)
{
    u16 (*pData)[3];
    u32 offset;

    pData = (u16(*)[3])gSubSpriteData1.pMultiOam[gSubSpriteData1.currentAnimationFrame].pFrame;
    offset = pData[gCurrentSprite.roomSlot][0];
    
    if (gCurrentSprite.pOam != sImagoFrameDataPointers[offset])
    {
        gCurrentSprite.pOam = sImagoFrameDataPointers[offset];
        gCurrentSprite.animationDurationCounter = 0x0;
        gCurrentSprite.currentAnimationFrame = 0x0;
    }

    gCurrentSprite.yPosition = gSubSpriteData1.yPosition + pData[gCurrentSprite.roomSlot][1];

    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        gCurrentSprite.xPosition = gSubSpriteData1.xPosition - pData[gCurrentSprite.roomSlot][2];
    else
        gCurrentSprite.xPosition = gSubSpriteData1.xPosition + pData[gCurrentSprite.roomSlot][2];
}

/**
 * @brief 41ed4 | 17c | Handles Imago shooting the needles
 * 
 */
void ImagoShootNeedles(void)
{
    u32 health;
    u8 inRange;

    health = gCurrentSprite.health;
    if (health == 0x0)
        return;

    inRange = FALSE;
    if (gSubSpriteData1.pMultiOam == sImagoMultiSpriteData_Idle)
    {
        // Check samus in range for the needles
        if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        {
            if (gSubSpriteData1.xPosition < gSamusData.xPosition)
                inRange = TRUE;
        }
        else
            if (gSubSpriteData1.xPosition > gSamusData.xPosition)
                inRange = TRUE;

        // Check should shoot needles (health < 2/3) or no ammo, and in range
        if ((gCurrentSprite.health < gSubSpriteData1.health * 2 / 3 ||
            gEquipment.currentMissiles + gEquipment.currentSuperMissiles == 0x0) && inRange)
        {
            // Set shooting
            gSubSpriteData1.pMultiOam = sImagoMultiSpriteData_ShootingNeedles;
            gSubSpriteData1.animationDurationCounter = 0x0;
            gSubSpriteData1.currentAnimationFrame = 0x0;
        }
    }
    else if (gSubSpriteData1.pMultiOam == sImagoMultiSpriteData_ShootingNeedles)
    {
        if (gCurrentSprite.currentAnimationFrame == 0x9 && gCurrentSprite.animationDurationCounter == 0x1)
        {
            // Spawn needle
            if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
            {
                SpriteSpawnSecondary(SSPRITE_IMAGO_NEEDLE, gCurrentSprite.roomSlot,
                    gCurrentSprite.spritesetGFXSlot, gCurrentSprite.primarySpriteRAMSlot,
                    gCurrentSprite.yPosition + 0x6C, gCurrentSprite.xPosition + 0x1C, SPRITE_STATUS_XFLIP);
            }
            else
            {
                SpriteSpawnSecondary(SSPRITE_IMAGO_NEEDLE, gCurrentSprite.roomSlot,
                    gCurrentSprite.spritesetGFXSlot, gCurrentSprite.primarySpriteRAMSlot,
                    gCurrentSprite.yPosition + 0x6C, gCurrentSprite.xPosition - 0x20, SPRITE_STATUS_NONE);
            }
        }
        
        // Check speed up animation
        if (gCurrentSprite.health < gSubSpriteData1.health / 3)
            gCurrentSprite.animationDurationCounter += 0x2;

        if (SpriteUtilCheckEndCurrentSpriteAnim())
        {
            // Set recharging needles
            gSubSpriteData1.pMultiOam = sImagoMultiSpriteData_RechargingNeedles;
            gSubSpriteData1.animationDurationCounter = 0x0;
            gSubSpriteData1.currentAnimationFrame = 0x0;
        }
    }
    else if (gSubSpriteData1.pMultiOam == sImagoMultiSpriteData_RechargingNeedles)
    {
        // Check speed up animation
        if (health < gSubSpriteData1.health / 3)
            gCurrentSprite.animationDurationCounter += 0x2;

        if (SpriteUtilCheckEndCurrentSpriteAnim())
        {
            // Set idle
            gSubSpriteData1.pMultiOam = sImagoMultiSpriteData_Idle;
            gSubSpriteData1.animationDurationCounter = 0x0;
            gSubSpriteData1.currentAnimationFrame = 0x0;
        }
    }
}

/**
 * @brief 42050 | 68 | Updates the dynamic palette of the Imago core
 * 
 */
void ImagoCoreFlashingAnim(void)
{
    u8 offset;
    u8 palette;
    u8 delay;

    if (!(gCurrentSprite.invicibilityStunFlashTimer & 0x7F))
    {
        // Update delay
        if (gCurrentSprite.oamScaling != 0x0)
            gCurrentSprite.oamScaling--;
        else
        {
            // Update offset
            offset = gCurrentSprite.oamRotation++;

            // Get palette row
            palette = sImagoDynamicPaletteData[offset][0];

            if (palette == 0x80)
            {
                // Reset offset
                gCurrentSprite.oamRotation = 0x1;
                offset = 0x0;
                palette = sImagoDynamicPaletteData[offset][0];
            }

            // Get new delay
            delay = sImagoDynamicPaletteData[offset][1];

            // Update palette and delay
            gCurrentSprite.absolutePaletteRow = palette;
            gCurrentSprite.paletteRow = palette;
            gCurrentSprite.oamScaling = delay;
        }
    }
}

/**
 * @brief 420b8 | 34 | Updates the sde hitbox of Imago
 * 
 */
void ImagoSetSidesHitbox(void)
{
    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
    {
        gCurrentSprite.hitboxLeftOffset = -0x40;
        gCurrentSprite.hitboxRightOffset = 0x18;
    }
    else
    {
        gCurrentSprite.hitboxLeftOffset = -0x18;
        gCurrentSprite.hitboxRightOffset = 0x40;
    }
}

/**
 * @brief 420ec | 23c | Initializes an Imago sprite
 * 
 */
void ImagoInit(void)
{
    u16 yPosition;
    u16 xPosition;
    u8 gfxSlot;
    u8 ramSlot;
    u16 status;
    u16 health;

    if (EventFunction(EVENT_ACTION_CHECKING, EVENT_IMAGO_KILLED))
        gCurrentSprite.status = 0x0;
    else
    {
        // Lock door, store initial max supers
        gDoorUnlockTimer = 0x1;
        gSubSpriteData1.workVariable4 = gEquipment.maxSuperMissiles;

        // Set in ceiling
        gCurrentSprite.yPosition -= BLOCK_SIZE * 6;
        gSubSpriteData1.yPosition = gCurrentSprite.yPosition;
        gSubSpriteData1.xPosition = gCurrentSprite.xPosition;

        yPosition = gSubSpriteData1.yPosition;
        xPosition = gSubSpriteData1.xPosition;

        gCurrentSprite.yPositionSpawn = yPosition;
        gCurrentSprite.xPositionSpawn = xPosition;


        gCurrentSprite.status |= (SPRITE_STATUS_XFLIP | SPRITE_STATUS_IGNORE_PROJECTILES);

        gCurrentSprite.drawDistanceTopOffset = 0x20;
        gCurrentSprite.drawDistanceBottomOffset = 0x28;
        gCurrentSprite.drawDistanceHorizontalOffset = 0x1A;

        gCurrentSprite.hitboxTopOffset = -0x4;
        gCurrentSprite.hitboxBottomOffset = 0x80;
        ImagoSetSidesHitbox();

        gCurrentSprite.frozenPaletteRowOffset = 0x1;
        gCurrentSprite.oamScaling = 0x0;
        gCurrentSprite.oamRotation = 0x0;

        gCurrentSprite.samusCollision = SSC_IMAGO_STINGER;
        gCurrentSprite.timer = 0x50;
        health = sPrimarySpriteStats[gCurrentSprite.spriteID][0];
        gCurrentSprite.health = health;
        gSubSpriteData1.health = health;

        gSubSpriteData1.pMultiOam = sImagoMultiSpriteData_Idle;
        gSubSpriteData1.animationDurationCounter = 0x0;
        gSubSpriteData1.currentAnimationFrame = 0x0;

        // Last egg destroyed flag
        gSubSpriteData1.workVariable3 = FALSE;
        gSubSpriteData1.workVariable2 = 0x0;
        gCurrentSprite.pose = IMAGO_POSE_WAIT_FOR_LAST_EGG;
        gCurrentSprite.drawOrder = 0x5;
        gCurrentSprite.roomSlot = IMAGO_PART_IMAGO;

        gfxSlot = gCurrentSprite.spritesetGFXSlot;
        ramSlot = gCurrentSprite.primarySpriteRAMSlot;
        status = gCurrentSprite.status & SPRITE_STATUS_XFLIP;

        // Spawn parts
        SpriteSpawnSecondary(SSPRITE_IMAGO_PART, IMAGO_PART_LEFT_WING_INTERNAL, gfxSlot, ramSlot, yPosition, xPosition, status);
        SpriteSpawnSecondary(SSPRITE_IMAGO_PART, IMAGO_PART_LEFT_WING_EXTERNAL, gfxSlot, ramSlot, yPosition, xPosition, status);
        SpriteSpawnSecondary(SSPRITE_IMAGO_PART, IMAGO_PART_BODY, gfxSlot, ramSlot, yPosition, xPosition, status);
        SpriteSpawnSecondary(SSPRITE_IMAGO_PART, IMAGO_PART_RIGHT_WING_INTERNAL, gfxSlot, ramSlot, yPosition, xPosition, status);
        SpriteSpawnSecondary(SSPRITE_IMAGO_PART, IMAGO_PART_RIGHT_WING_EXTERNAL, gfxSlot, ramSlot, yPosition, xPosition, status);
        SpriteSpawnSecondary(SSPRITE_IMAGO_PART, IMAGO_PART_CORE, gfxSlot, ramSlot, yPosition, xPosition, status);

        // Spawn eggs
        SpriteSpawnSecondary(SSPRITE_IMAGO_EGG, IMAGO_EGG_PART_LAST, gfxSlot, ramSlot,
            yPosition + BLOCK_SIZE * 14, xPosition + BLOCK_SIZE * 3, 0x0);
        SpriteSpawnSecondary(SSPRITE_IMAGO_EGG, IMAGO_EGG_PART_NORMAL, gfxSlot, ramSlot,
            yPosition + BLOCK_SIZE * 15, xPosition + BLOCK_SIZE * 7, 0x0);
        SpriteSpawnSecondary(SSPRITE_IMAGO_EGG, IMAGO_EGG_PART_NORMAL, gfxSlot, ramSlot,
            yPosition + BLOCK_SIZE * 16, xPosition + BLOCK_SIZE * 12, 0x0);
        SpriteSpawnSecondary(SSPRITE_IMAGO_EGG, IMAGO_EGG_PART_NORMAL, gfxSlot, ramSlot,
            yPosition + BLOCK_SIZE * 18, xPosition + BLOCK_SIZE * 22, 0x0);
        SpriteSpawnSecondary(SSPRITE_IMAGO_EGG, IMAGO_EGG_PART_NORMAL, gfxSlot, ramSlot,
            yPosition + BLOCK_SIZE * 22, xPosition + BLOCK_SIZE * 42, 0x0);
    }
}

/**
 * @brief 42328 | 24 | Checks if the last egg has been destroyed
 * 
 */
void ImagoWaitForLastEgg(void)
{
    // Last egg destroyed flag
    if (gSubSpriteData1.workVariable3)
    {
        gCurrentSprite.pose = IMAGO_POSE_SPAWN;
        MusicFade(0x24);
    }
}

/**
 * @brief 4234c | 38 | Handles Imago spawning
 * 
 */
void ImagoSpawn(void)
{
    gCurrentSprite.timer--;
    if (gCurrentSprite.timer == 0x0)
    {
        gCurrentSprite.status &= ~SPRITE_STATUS_IGNORE_PROJECTILES;
        gCurrentSprite.pose = IMAGO_POSE_COMING_DOWN_INIT;
        MusicPlay(MUSIC_IMAGO_BATTLE, 0x0);
    }
}

/**
 * @brief 42384 | b0 | Initializes Imago coming down
 * 
 */
void ImagoComingDownInit(void)
{
    i32 health;

    if (gCurrentSprite.health == 0x0)
    {
        if (!(gCurrentSprite.status & SPRITE_STATUS_XFLIP))
        {
            gCurrentSprite.pose = IMAGO_POSE_CHECK_SAMUS_AT_SUPER_MISSILE;
            return;
        }
    }
    else
    {
        gSubSpriteData1.pMultiOam = sImagoMultiSpriteData_Idle;
        gSubSpriteData1.animationDurationCounter = 0x0;
        gSubSpriteData1.currentAnimationFrame = 0x0;
    }

    gCurrentSprite.timer = 0x0;
    gCurrentSprite.workVariable = 0x0;

    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        gCurrentSprite.workVariable2 = 0x0;
    else
    {
        // Set base X velocity
        health = gSubSpriteData1.health;
        if (gCurrentSprite.health < gSubSpriteData1.health / 3)
            gCurrentSprite.workVariable2 = 0x8;
        else if (gCurrentSprite.health < health * 2 / 3)
            gCurrentSprite.workVariable2 = 0x8;
        else
            gCurrentSprite.workVariable2 = 0x0;
    }

    gCurrentSprite.arrayOffset = 0x0;
    gCurrentSprite.pose = IMAGO_POSE_COMING_DOWN;
    ImagoSetSidesHitbox();
}

/**
 * @brief 42434 | c4 | Handles Imago coming down
 * 
 */
void ImagoComingDown(void)
{
    u32 blockTop;
    u8 checkGround;

    checkGround = FALSE;

    // Move X
    if (!(gCurrentSprite.timer++ & 0xF) && gCurrentSprite.workVariable2 < 0xC)
        gCurrentSprite.workVariable2++;

    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        gSubSpriteData1.xPosition += gCurrentSprite.workVariable2;

    // Check should check ground
    if (gSubSpriteData1.yPosition + IMAGO_SIZE > gCurrentSprite.yPositionSpawn + BLOCK_SIZE * 14)
        checkGround++;
    
    if (checkGround)
    {
        // Check for ground
        blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gSubSpriteData1.yPosition + IMAGO_SIZE, gSubSpriteData1.xPosition);
        if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
        {
            // Set moving horizontally
            gSubSpriteData1.yPosition = blockTop - IMAGO_SIZE;
            gCurrentSprite.pose = IMAGO_POSE_MOVE_HORIZONTALLY;
            return;
        }
    }
    
    // Move Y
    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        gSubSpriteData1.yPosition += 0xC;
    else
        gSubSpriteData1.yPosition += 0x14;
}

/**
 * @brief 424f8 | 2b8 | Handles Imago moving horizontally through the room
 * 
 */
void ImagoMoveHorizontally(void)
{
    u8 ySpeedMask;
    u8 movementStage;
    u16 xPosition;
    u16 yPosition;
    u32 blockTop;

    ImagoShootNeedles();

    movementStage = IMAGO_MOVEMENT_STAGE_MOVING_HORIZONTALLY;

    // Move X
    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
    {
        if (!(gCurrentSprite.timer++ & 0xF) && gCurrentSprite.workVariable2 < 0x18)
            gCurrentSprite.workVariable2++;

        ySpeedMask = 0x1;

        if (gSubSpriteData1.xPosition > gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 46)
            movementStage = IMAGO_MOVEMENT_STAGE_GO_UP;
        else
        {
            if (gSubSpriteData1.xPosition > gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 36)
                movementStage = 0x1;

            gSubSpriteData1.xPosition += gCurrentSprite.workVariable2;
        }
    }
    else
    {
        if (gCurrentSprite.health < gSubSpriteData1.health / 3)
        {
            if (!(gCurrentSprite.timer++ & 0x7) && gCurrentSprite.workVariable2 < 0x18)
                gCurrentSprite.workVariable2++;

            ySpeedMask = 0x3;

            if (gSubSpriteData1.xPosition < gCurrentSprite.xPositionSpawn)
                movementStage = IMAGO_MOVEMENT_STAGE_GO_UP;
            else
            {
                if (gSubSpriteData1.xPosition < gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 22)
                    movementStage = 0x1;

                gSubSpriteData1.xPosition -= gCurrentSprite.workVariable2;
            }
        }
        else if (gCurrentSprite.health < gSubSpriteData1.health * 2 / 3)
        {
            if (!(gCurrentSprite.timer++ & 0xF) && gCurrentSprite.workVariable2 < 0x18)
                gCurrentSprite.workVariable2++;

            ySpeedMask = 0x3;

            if (gSubSpriteData1.xPosition < gCurrentSprite.xPositionSpawn)
                movementStage = IMAGO_MOVEMENT_STAGE_GO_UP;
            else
            {
                if (gSubSpriteData1.xPosition < gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 16)
                    movementStage = 0x1;

                gSubSpriteData1.xPosition -= gCurrentSprite.workVariable2;
            }
        }
        else
        {
            if (!(gCurrentSprite.timer++ & 0xF) && gCurrentSprite.workVariable2 < 0x10)
                gCurrentSprite.workVariable2++;

            ySpeedMask = 0x3;

            if (gSubSpriteData1.xPosition < gCurrentSprite.xPositionSpawn)
                movementStage = IMAGO_MOVEMENT_STAGE_GO_UP;
            else
            {
                if (gSubSpriteData1.xPosition < gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 11)
                    movementStage = 0x1;

                gSubSpriteData1.xPosition -= gCurrentSprite.workVariable2;
            }
        }
    }

    if (movementStage != 0x0)
    {
        if (!(ySpeedMask & gCurrentSprite.workVariable++) && gCurrentSprite.arrayOffset < 0xC)
            gCurrentSprite.arrayOffset++;

        gSubSpriteData1.yPosition -= gCurrentSprite.arrayOffset;
        if (movementStage == IMAGO_MOVEMENT_STAGE_GO_UP)
        {
            gCurrentSprite.pose = IMAGO_POSE_GOING_UP;
            return;
        }
    }

    yPosition = gSubSpriteData1.yPosition + IMAGO_SIZE;
    xPosition = gSubSpriteData1.xPosition;

    // "Hover" over the ground
    blockTop = SpriteUtilCheckVerticalCollisionAtPosition(yPosition - 0x4, xPosition);
    if ((gPreviousVerticalCollisionCheck & 0xF) > 0x1)
    {
        gSubSpriteData1.yPosition = blockTop - IMAGO_SIZE;
        return;
    }
    
    blockTop = SpriteUtilCheckVerticalCollisionAtPosition(yPosition, xPosition);
    if ((gPreviousVerticalCollisionCheck & 0xF) >= COLLISION_LEFT_SLIGHT_FLOOR_SLOPE)
    {
        gSubSpriteData1.yPosition = blockTop - IMAGO_SIZE;
        return;
    }

    blockTop = SpriteUtilCheckVerticalCollisionAtPosition(yPosition + 0x4, xPosition);
    if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
    {
        gSubSpriteData1.yPosition = blockTop - IMAGO_SIZE;
        return;
    }

    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
    {
        SpriteUtilCheckVerticalCollisionAtPosition(yPosition, xPosition - QUARTER_BLOCK_SIZE);
        if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_LEFT_SLIGHT_FLOOR_SLOPE)
        {
            blockTop = SpriteUtilCheckVerticalCollisionAtPosition(yPosition + BLOCK_SIZE, xPosition);
            gSubSpriteData1.yPosition = blockTop - IMAGO_SIZE;
        }
    }
    else
    {
        SpriteUtilCheckVerticalCollisionAtPosition(yPosition, xPosition + QUARTER_BLOCK_SIZE);
        if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE)
        {
            blockTop = SpriteUtilCheckVerticalCollisionAtPosition(yPosition + BLOCK_SIZE, xPosition);
            gSubSpriteData1.yPosition = blockTop - IMAGO_SIZE;
        }
    }
}

/**
 * @brief 427b0 | c4 | Handles Imago going up
 * 
 */
void ImagoGoingUp(void)
{
    // Check increase Y velocity
    if (!(gCurrentSprite.workVariable++ & 0x3) && gCurrentSprite.arrayOffset < 0xC)
        gCurrentSprite.arrayOffset++;

    if (gSubSpriteData1.yPosition < gCurrentSprite.yPositionSpawn)
    {
        // Arrived at ceiling
        gSubSpriteData1.yPosition = gCurrentSprite.yPositionSpawn;
        if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        {
            // Set X destination
            gSubSpriteData1.xPosition = gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 48;
            // Check if Samus in range for the attack
            if (gSubSpriteData1.xPosition < gSamusData.xPosition && gCurrentSprite.health != 0x0)
            {
                // Set attacking
                gSubSpriteData1.xPosition = gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 46;
                gCurrentSprite.workVariable2 = 0x0;
                gCurrentSprite.pose = IMAGO_POSE_ATTACKING_INIT;
            }
            else
            {
                // Set coming down
                gCurrentSprite.status ^= SPRITE_STATUS_XFLIP;
                gCurrentSprite.pose = IMAGO_POSE_COMING_DOWN_INIT;
            }
        }
        else
        {
            // Set X destination
            gSubSpriteData1.xPosition = gCurrentSprite.xPositionSpawn;
            // Check if Samus in range for the attack
            if (gSubSpriteData1.xPosition + BLOCK_SIZE * 2 > gSamusData.xPosition && gCurrentSprite.health != 0x0)
            {
                // Set attacking
                gCurrentSprite.workVariable2 = 0x18;
                gCurrentSprite.pose = IMAGO_POSE_ATTACKING_INIT;
            }
            else
            {
                // Set coming down
                gCurrentSprite.status ^= SPRITE_STATUS_XFLIP;
                gCurrentSprite.pose = IMAGO_POSE_COMING_DOWN_INIT;
            }
        }
    }
    else
        gSubSpriteData1.yPosition -= gCurrentSprite.arrayOffset; // Move
}

/**
 * @brief 42874 | 24 | Initializes Imago to be attacking
 * 
 */
void ImagoAttackingInit(void)
{
    gSubSpriteData1.pMultiOam = sImagoMultiSpriteData_Idle;
    gSubSpriteData1.animationDurationCounter = 0x0;
    gSubSpriteData1.currentAnimationFrame = 0x0;
    gCurrentSprite.pose = IMAGO_POSE_ATTACKING_GOING_DOWN;
}

/**
 * @brief 42898 | a8 | Handles Imago going down when attacking
 * 
 */
void ImagoAttackingGoingDown(void)
{
    u8 offset;
    i32 movement;
    u8 checkGround;
    u32 blockTop;

    checkGround = FALSE;

    // Move X
    offset = gCurrentSprite.workVariable2;
    movement = sImagoAttackingXVelocity[offset];
    if (movement == SHORT_MAX)
    {
        movement = sImagoAttackingXVelocity[0]; // -1
        offset = 0x0;
    }

    gCurrentSprite.workVariable2 = offset + 0x1;
    gSubSpriteData1.xPosition += movement * 2;

    // Check should check for ground
    if (gSubSpriteData1.yPosition + IMAGO_SIZE > gCurrentSprite.yPositionSpawn + BLOCK_SIZE * 14)
        checkGround = TRUE;

    if (checkGround)
    {
        // Check for ground
        if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
            movement = BLOCK_SIZE * 2 + HALF_BLOCK_SIZE;
        else
            movement = IMAGO_SIZE;

        blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gSubSpriteData1.yPosition + movement, gSubSpriteData1.xPosition);
        if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
        {
            // Touched ground, set going up
            gSubSpriteData1.yPosition = blockTop - movement;
            gCurrentSprite.pose = IMAGO_POSE_ATTACKING_GOING_UP;
            gCurrentSprite.arrayOffset = 0xC;
            return;
        }
    }

    // Move Y
    gSubSpriteData1.yPosition += 0x14;
}

/**
 * @brief 42940 | bc | Handles Imago going up when attacking
 * 
 */
void ImagoAttackingGoingUp(void)
{
    i32 movement;
    u8 offset;
    u32 blockTop;

    // Move X
    offset = gCurrentSprite.workVariable2;
    movement = sImagoAttackingXVelocity[offset];
    if (movement == SHORT_MAX)
    {
        movement = sImagoAttackingXVelocity[0]; // -1
        offset = 0x0;
    }
    gCurrentSprite.workVariable2 = offset + 0x1;
    gSubSpriteData1.xPosition += movement * 2;

    if (gSubSpriteData1.yPosition < gCurrentSprite.yPositionSpawn)
    {
        // Arrived at ceiling
        gSubSpriteData1.yPosition = gCurrentSprite.yPositionSpawn;
        if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        {
            // Check should attack again
            if (gSubSpriteData1.xPosition < gSamusData.xPosition && gCurrentSprite.health != 0x0)
            {
                // In range, set attacking
                gCurrentSprite.pose = IMAGO_POSE_ATTACKING_GOING_DOWN;
            }
            else
            {
                // Out of range or dying, set coming down
                gSubSpriteData1.xPosition = gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 48;
                gCurrentSprite.status ^= SPRITE_STATUS_XFLIP;
                gCurrentSprite.pose = IMAGO_POSE_COMING_DOWN_INIT;
            }
        }
        else
        {
            // Check should attack again
            if (gSubSpriteData1.xPosition + BLOCK_SIZE * 2 > gSamusData.xPosition && gCurrentSprite.health != 0x0)
            {
                // In range, set attacking
                gCurrentSprite.pose = IMAGO_POSE_ATTACKING_GOING_DOWN;
            }
            else
            {
                // Out of range or dying, set coming down
                gSubSpriteData1.xPosition = gCurrentSprite.xPositionSpawn;
                gCurrentSprite.status ^= SPRITE_STATUS_XFLIP;
                gCurrentSprite.pose = IMAGO_POSE_COMING_DOWN_INIT;
            }
        }
    }
    else
        gSubSpriteData1.yPosition -= 0x14; // Move Y
}

/**
 * @brief 429fc | 94 | Initializes Imago to be dying
 * 
 */
void ImagoDyingInit(void)
{
    // Spawn damaged stinger
    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
    {
        SpriteSpawnSecondary(SSPRITE_IMAGO_DAMAGED_STINGER, gCurrentSprite.roomSlot,
            gCurrentSprite.spritesetGFXSlot, gCurrentSprite.primarySpriteRAMSlot,
            gCurrentSprite.yPosition + HALF_BLOCK_SIZE, gCurrentSprite.xPosition + 0x1C, SPRITE_STATUS_XFLIP);
    }
    else
    {
        SpriteSpawnSecondary(SSPRITE_IMAGO_DAMAGED_STINGER, gCurrentSprite.roomSlot,
            gCurrentSprite.spritesetGFXSlot, gCurrentSprite.primarySpriteRAMSlot,
            gCurrentSprite.yPosition + HALF_BLOCK_SIZE, gCurrentSprite.xPosition - 0x20, SPRITE_STATUS_NONE);
    }

    // Set dying
    gSubSpriteData1.pMultiOam = sImagoMultiSpriteData_Dying;
    gSubSpriteData1.animationDurationCounter = 0x0;
    gSubSpriteData1.currentAnimationFrame = 0x0;

    gCurrentSprite.hitboxBottomOffset = 0x0;
    gCurrentSprite.samusCollision = SSC_NONE;
    // Retrieve previous pose
    gCurrentSprite.pose = gSubSpriteData1.workVariable2;
}

/**
 * @brief 42a90 | 68 | Checks if Samus is at the super missile when Imago is dying
 * 
 */
void ImagoCheckSamusAtSuperMissile(void)
{
    u8 atLocation;

    // Check at location
    atLocation = FALSE;
    if (gSamusData.xPosition > gCurrentSprite.xPositionSpawn)
    {
        if (gSamusData.xPosition - gCurrentSprite.xPositionSpawn < BLOCK_SIZE * 3)
            atLocation = TRUE;
    }
    else
    {
        if (gCurrentSprite.xPositionSpawn - gSamusData.xPosition < BLOCK_SIZE * 3)
            atLocation = TRUE;
    }

    if (atLocation)
    {
        // Set going through wall
        gCurrentSprite.pose = IMAGO_POSE_CHARGING_THROUGH_WALL;
        gCurrentSprite.drawOrder = 0xC;

        // Set position
        gSubSpriteData1.yPosition = gCurrentSprite.yPositionSpawn + BLOCK_SIZE * 11 + HALF_BLOCK_SIZE;
        gSubSpriteData1.xPosition = gCurrentSprite.xPositionSpawn + BLOCK_SIZE * 16;
    }
}

/**
 * @brief 42af8 | 100 | Handles Imago charging through the wall
 * 
 */
void ImagoChargeThroughWall(void)
{
    u8 caa;
    u16 yPosition;
    u16 xPosition;

    caa = CAA_REMOVE_SOLID;
    yPosition = gCurrentSprite.yPositionSpawn + BLOCK_SIZE * 5 + HALF_BLOCK_SIZE;
    xPosition = gCurrentSprite.xPositionSpawn;

    if (SpriteUtilGetCollisionAtPosition(gSubSpriteData1.yPosition, gSubSpriteData1.xPosition - BLOCK_SIZE * 3) != COLLISION_AIR)
    {
        ScreenShakeStartHorizontal(0x1E, 0x81);
        gCurrentSprite.pose = IMAGO_POSE_DESTROY_WALL;
        gCurrentSprite.timer = 0x0;

        // Right part
        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition + BLOCK_SIZE * 2);

        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition + BLOCK_SIZE * 2);

        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition + BLOCK_SIZE * 8, xPosition + BLOCK_SIZE * 2);

        ParticleSet(yPosition + BLOCK_SIZE * 8, xPosition + BLOCK_SIZE * 2, PE_SPRITE_EXPLOSION_HUGE);
        
        // Left part
        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition + BLOCK_SIZE * 1);
        
        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition + BLOCK_SIZE * 1);

        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition + BLOCK_SIZE * 1);

        gCurrentClipdataAffectingAction = caa;
        ClipdataProcess(yPosition + BLOCK_SIZE * 8, xPosition + BLOCK_SIZE * 1);

        ParticleSet(yPosition + BLOCK_SIZE * 7, xPosition + BLOCK_SIZE * 1, PE_SPRITE_EXPLOSION_HUGE);
        SoundPlay(0xC4);
    }
    else
        gSubSpriteData1.xPosition -= 0x10; // Move
}

/**
 * @brief 42bf8 | 378 | Handles Imago destryoing the wall
 * 
 */
void ImagoDestroyWall(void)
{
    u8 caa;
    u16 yPosition;
    u16 xPosition;
    
    caa = CAA_REMOVE_SOLID;
    yPosition = gCurrentSprite.yPositionSpawn + BLOCK_SIZE * 5 + HALF_BLOCK_SIZE;
    xPosition = gCurrentSprite.xPositionSpawn;

    switch (gCurrentSprite.timer++)
    {
        case 0x0:
            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition);
            
            ParticleSet(yPosition + BLOCK_SIZE * 7, xPosition, PE_SPRITE_EXPLOSION_HUGE);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 4, xPosition - BLOCK_SIZE);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition - BLOCK_SIZE);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition - BLOCK_SIZE);
            
            ParticleSet(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE, PE_SPRITE_EXPLOSION_HUGE);
            ParticleSet(yPosition + BLOCK_SIZE * 4 + QUARTER_BLOCK_SIZE, xPosition - (BLOCK_SIZE + 8), PE_SPRITE_EXPLOSION_HUGE);
            break;

        case 0x8:
            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 4, xPosition - BLOCK_SIZE * 2);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition - BLOCK_SIZE * 2);
            
            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 2);
            
            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition - BLOCK_SIZE * 2);
            
            ParticleSet(yPosition + BLOCK_SIZE * 7, xPosition - BLOCK_SIZE * 2, PE_SPRITE_EXPLOSION_HUGE);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 4, xPosition - BLOCK_SIZE * 3);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition - BLOCK_SIZE * 3);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 3);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition - BLOCK_SIZE * 3);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 8, xPosition - BLOCK_SIZE * 3);
            
            ParticleSet(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 3, PE_SPRITE_EXPLOSION_HUGE);
            break;

        case 0x10:
            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition - BLOCK_SIZE * 4);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 4);
            
            ParticleSet(yPosition + BLOCK_SIZE * 8, xPosition - BLOCK_SIZE * 4, PE_SPRITE_EXPLOSION_HUGE);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition - BLOCK_SIZE * 5);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 5);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition - BLOCK_SIZE * 5);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 8, xPosition - BLOCK_SIZE * 5);
            
            ParticleSet(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 5, PE_SPRITE_EXPLOSION_HUGE);
            break;

        case 0x18:
            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 5, xPosition - BLOCK_SIZE * 6);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 6);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition - BLOCK_SIZE * 6);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 8, xPosition - BLOCK_SIZE * 6);
            
            ParticleSet(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 6, PE_SPRITE_EXPLOSION_HUGE);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 6, xPosition - BLOCK_SIZE * 7);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 7, xPosition - BLOCK_SIZE * 7);

            gCurrentClipdataAffectingAction = caa;
            ClipdataProcess(yPosition + BLOCK_SIZE * 8, xPosition - BLOCK_SIZE * 7);
            
            ParticleSet(yPosition + BLOCK_SIZE * 8, xPosition - BLOCK_SIZE * 8, PE_SPRITE_EXPLOSION_HUGE);
            break;

        case 0x1C:
            // Reached indestructible wall
            gCurrentSprite.pose = IMAGO_POSE_DYING;
            gCurrentSprite.timer = 0x0;
            ScreenShakeStartVertical(0x1E, 0x81);
            ScreenShakeStartVertical(0x3C, 0x81);
            MusicFade(0x38);
            break;
    }

    // Move
    gSubSpriteData1.xPosition -= 0x10;
    gSubSpriteData1.yPosition += 0x2;
}

/**
 * @brief 42f70 | 204 | Handles Imago dying
 * 
 */
void ImagoDying(void)
{
    if (!(gCurrentSprite.timer & 0xF))
    {
        if (gCurrentSprite.timer & 0x10)
            ParticleSet(gSubSpriteData1.yPosition + 0x60, gSubSpriteData1.xPosition - 0x46, PE_TWO_MEDIUM_DUST);
        else
            ParticleSet(gSubSpriteData1.yPosition + 0x48, gSubSpriteData1.xPosition - 0x32, PE_MEDIUM_DUST);
    }

    switch (gCurrentSprite.timer++)
    {
        case 0x0:
            ParticleSet(gSubSpriteData1.yPosition, gSubSpriteData1.xPosition, PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
            break;

        case 0x9:
            ParticleSet(gSubSpriteData1.yPosition + HALF_BLOCK_SIZE, gSubSpriteData1.xPosition - BLOCK_SIZE * 2, PE_SPRITE_EXPLOSION_HUGE);
            break;
        
        case 0x12:
            ParticleSet(gSubSpriteData1.yPosition - HALF_BLOCK_SIZE, gSubSpriteData1.xPosition + HALF_BLOCK_SIZE, PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
            break;
        
        case 0x1B:
            ParticleSet(gSubSpriteData1.yPosition - 0x48, gSubSpriteData1.xPosition - BLOCK_SIZE, PE_SPRITE_EXPLOSION_BIG);
            break;

        case 0x24:
            ParticleSet(gSubSpriteData1.yPosition - HALF_BLOCK_SIZE, gSubSpriteData1.xPosition - (BLOCK_SIZE * 2 + HALF_BLOCK_SIZE), PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
            break;

        case 0x2D:
            ParticleSet(gSubSpriteData1.yPosition - 0x30, gSubSpriteData1.xPosition - 0x48, PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
            break;

        case 0x36:
            ParticleSet(gSubSpriteData1.yPosition + QUARTER_BLOCK_SIZE, gSubSpriteData1.xPosition - 0xAC, PE_SPRITE_EXPLOSION_HUGE);
            gCurrentSprite.pose = IMAGO_POSE_SET_EVENT;
            gCurrentSprite.status |= (SPRITE_STATUS_NOT_DRAWN | SPRITE_STATUS_IGNORE_PROJECTILES);
            SoundPlay(0xC5);
            MusicPlay(MUSIC_BOSS_KILLED, 0x0);
    }
}

/**
 * @brief 43174 | 44 | Checks if the Imago event should be set
 * 
 */
void ImagoSetEvent(void)
{
    gCurrentSprite.ignoreSamusCollisionTimer = 0x1;
    if (gEquipment.maxSuperMissiles > gSubSpriteData1.workVariable4)
    {
        // More supers than at the beginning of the fight
        // Unlock doors
        gDoorUnlockTimer = -0x3C;
        gCurrentSprite.status = 0x0;
        // Set event
        EventFunction(EVENT_ACTION_SETTING, EVENT_IMAGO_KILLED);
    }
}

/**
 * @brief 431b8 | 30 | Sets the sides hitboxes of body Imago part
 * 
 */
void ImagoPartSetBodySidesHitbox(void)
{
    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
    {
        gCurrentSprite.hitboxLeftOffset = -0x28;
        gCurrentSprite.hitboxRightOffset = 0xC0;
    }
    else
    {
        gCurrentSprite.hitboxLeftOffset = -0xC0;
        gCurrentSprite.hitboxRightOffset = 0x28;
    }
}

/**
 * @brief 431e8 | 13c | Initializes an Imago part sprite
 * 
 */
void ImagoPartInit(void)
{
    gCurrentSprite.status &= ~SPRITE_STATUS_NOT_DRAWN;
    gCurrentSprite.pose = IMAGO_PART_POSE_IDLE;
    gCurrentSprite.status |= SPRITE_STATUS_IGNORE_PROJECTILES;

    switch (gCurrentSprite.roomSlot)
    {
        case IMAGO_PART_LEFT_WING_INTERNAL:
        case IMAGO_PART_LEFT_WING_EXTERNAL:
            gCurrentSprite.drawDistanceTopOffset = 0x38;
            gCurrentSprite.drawDistanceBottomOffset = 0x8;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x28;
            
            gCurrentSprite.hitboxTopOffset = 0x0;
            gCurrentSprite.hitboxBottomOffset = 0x0;
            gCurrentSprite.hitboxLeftOffset = 0x0;
            gCurrentSprite.hitboxRightOffset = 0x0;

            gCurrentSprite.drawOrder = 0x2;
            gCurrentSprite.samusCollision = SSC_NONE;
            break;

        case IMAGO_PART_BODY:
            gCurrentSprite.drawDistanceTopOffset = 0x28;
            gCurrentSprite.drawDistanceBottomOffset = 0x20;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x3C;

            gCurrentSprite.hitboxTopOffset = -0x80;
            gCurrentSprite.hitboxBottomOffset = 0x0;
            ImagoPartSetBodySidesHitbox();

            gCurrentSprite.drawOrder = 0x3;
            gCurrentSprite.properties |= SP_IMMUNE_TO_PROJECTILES;
            gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
            gCurrentSprite.health = 0x1;
            gCurrentSprite.pose = IMAGO_PART_POSE_BODY_SPAWN;
            break;

        case IMAGO_PART_RIGHT_WING_INTERNAL:
        case IMAGO_PART_RIGHT_WING_EXTERNAL:
            gCurrentSprite.drawDistanceTopOffset = 0x38;
            gCurrentSprite.drawDistanceBottomOffset = 0x0;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x48;
            
            gCurrentSprite.hitboxTopOffset = 0x0;
            gCurrentSprite.hitboxBottomOffset = 0x0;
            gCurrentSprite.hitboxLeftOffset = 0x0;
            gCurrentSprite.hitboxRightOffset = 0x0;

            gCurrentSprite.samusCollision = SSC_NONE;
            break;

        case IMAGO_PART_CORE:
            gCurrentSprite.drawDistanceTopOffset = 0x20;
            gCurrentSprite.drawDistanceBottomOffset = 0x10;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x20;
            
            gCurrentSprite.hitboxTopOffset = 0x0;
            gCurrentSprite.hitboxBottomOffset = 0x0;
            gCurrentSprite.hitboxLeftOffset = 0x0;
            gCurrentSprite.hitboxRightOffset = 0x0;

            gCurrentSprite.samusCollision = SSC_NONE;
            gCurrentSprite.frozenPaletteRowOffset = 0x1;
            gCurrentSprite.pose = IMAGO_PART_POSE_CORE_SYNC_PALETTE;
            break;

        default:
            gCurrentSprite.status = 0x0;
    }
}

/**
 * @brief 43324 | 3c | Handles the spawn of the Imago body
 * 
 */
void ImagoPartBodySpawn(void)
{
    u8 ramSlot;

    ramSlot = gCurrentSprite.primarySpriteRAMSlot;
    if (gSpriteData[ramSlot].pose >= IMAGO_POSE_COMING_DOWN_INIT)
    {
        // Fight started, set vulnerable
        gCurrentSprite.status &= ~SPRITE_STATUS_IGNORE_PROJECTILES;
        gCurrentSprite.pose = IMAGO_PART_POSE_BODY_UPDATE_PALETTE;
    }
}

/**
 * @brief 43360 | 64 | Handles updating the palette row of the body based on health
 * 
 */
void ImagoPartUpdateBodyPalette(void)
{
    u8 ramSlot;

    ramSlot = gCurrentSprite.primarySpriteRAMSlot;

    if (gSpriteData[ramSlot].health < gSubSpriteData1.health / 3)
    {
        // 1/3 of health left
        gCurrentSprite.absolutePaletteRow = 0x5;
        gCurrentSprite.paletteRow = gCurrentSprite.absolutePaletteRow;
    }
    else if (gSpriteData[ramSlot].health < gSubSpriteData1.health * 2 / 3)
    {
        // 2/3 of health left
        gCurrentSprite.absolutePaletteRow = 0x4;
        gCurrentSprite.paletteRow = gCurrentSprite.absolutePaletteRow;
    }

    ImagoPartSetBodySidesHitbox();
}

/**
 * @brief 433c4 | 34 | Synchronizes the palette of the part with the palette of Imago
 * 
 */
void ImagoPartSyncPalette(void)
{
    u8 ramSlot;

    ramSlot = gCurrentSprite.primarySpriteRAMSlot;
    gCurrentSprite.paletteRow = gSpriteData[ramSlot].paletteRow;
    gCurrentSprite.absolutePaletteRow = gSpriteData[ramSlot].absolutePaletteRow;
}

/**
 * @brief 433f8 | 420 | Imago AI
 * 
 */
void Imago(void)
{
    // https://decomp.me/scratch/H8S1t

    u16 xDistance;
    u16 yDistance;
    u16 health;
    u8 pose;

    if (gCurrentSprite.pose < IMAGO_POSE_DYING_INIT && gCurrentSprite.properties & SP_DAMAGED)
    {
        gCurrentSprite.properties &= ~SP_DAMAGED;
        if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
            SoundPlayNotAlreadyPlaying(0xC3);
    }

    if (!(gFrameCounter8Bit & 0xF))
    {
        health = gCurrentSprite.health;
        pose = gCurrentSprite.pose - 0x8;
        if (pose < IMAGO_POSE_DESTROY_WALL - 0x8)
        {
            yDistance = gSubSpriteData1.yPosition > gSamusData.yPosition ?
                    gSubSpriteData1.yPosition - gSamusData.yPosition :
                    gSamusData.yPosition - gSubSpriteData1.yPosition;
    
            if (gSubSpriteData1.xPosition > gSamusData.xPosition)
            {
                xDistance = gSubSpriteData1.xPosition - gSamusData.xPosition;
                if (!(gCurrentSprite.status & SPRITE_STATUS_ONSCREEN) || yDistance > 0x1F4)
                {
                    SoundPlay(0xB5);
                    if (health == 0x0)
                        SoundPlay(0xBB);
                }
                else if (xDistance< 0xFA)
                {
                    SoundPlay(0xB9);
                    if (health == 0x0)
                        SoundPlay(0xBF);
                }
                else
                {
                    SoundPlay(0xB7);
                    if (health == 0x0)
                        SoundPlay(0xBD);
                }
            }
            else
            {
                xDistance = gSamusData.xPosition - gSubSpriteData1.xPosition;
                if (!(gCurrentSprite.status & SPRITE_STATUS_ONSCREEN) || yDistance > 0x1F4)
                {
                    SoundPlay(0xB4);
                    if (health == 0x0)
                        SoundPlay(0xBA);
                }
                else if (xDistance < 0xFA)
                {
                    SoundPlay(0xB8);
                    if (health == 0x0)
                        SoundPlay(0xBE);
                }
                else
                {
                    SoundPlay(0xB6);
                    if (health == 0x0)
                        SoundPlay(0xBC);
                }
            }
        }
    }
    asm("":::"r6", "r4");
    switch (gCurrentSprite.pose)
    {
        case 0x0:
            ImagoInit();
            break;

        case IMAGO_POSE_WAIT_FOR_LAST_EGG:
            ImagoWaitForLastEgg();
            break;

        case IMAGO_POSE_SPAWN:
            ImagoSpawn();
            break;

        case IMAGO_POSE_COMING_DOWN_INIT:
            ImagoComingDownInit();
            break;

        case IMAGO_POSE_COMING_DOWN:
            ImagoComingDown();
            break;

        case IMAGO_POSE_MOVE_HORIZONTALLY:
            ImagoMoveHorizontally();
            break;

        case IMAGO_POSE_GOING_UP:
            ImagoGoingUp();
            break;

        case IMAGO_POSE_ATTACKING_INIT:
            ImagoAttackingInit();
        
        case IMAGO_POSE_ATTACKING_GOING_DOWN:
            ImagoAttackingGoingDown();
            break;

        case IMAGO_POSE_ATTACKING_GOING_UP:
            ImagoAttackingGoingUp();
            break;

        case IMAGO_POSE_DYING_INIT:
            ImagoDyingInit();
            break;

        case IMAGO_POSE_CHECK_SAMUS_AT_SUPER_MISSILE:
            ImagoCheckSamusAtSuperMissile();
            break;

        case IMAGO_POSE_CHARGING_THROUGH_WALL:
            ImagoChargeThroughWall();
            break;

        case IMAGO_POSE_DESTROY_WALL:
            ImagoDestroyWall();
            break;

        case IMAGO_POSE_DYING:
            ImagoDying();
            break;

        case IMAGO_POSE_SET_EVENT:
            ImagoSetEvent();
            break;
    }

    if (gCurrentSprite.pose <= IMAGO_POSE_DYING && gCurrentSprite.status)
    {
        gSubSpriteData1.workVariable2 = gCurrentSprite.pose;
        if (gCurrentSprite.health == 0x0 && gCurrentSprite.pose <= IMAGO_POSE_CHARGING_THROUGH_WALL)
        {
            if (!(gFrameCounter8Bit & 0x3))
            {
                if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
                    ParticleSet(gSubSpriteData1.yPosition, gSubSpriteData1.xPosition - BLOCK_SIZE, PE_SPRITE_EXPLOSION_MEDIUM);
                else
                    ParticleSet(gSubSpriteData1.yPosition, gSubSpriteData1.xPosition + BLOCK_SIZE, PE_SPRITE_EXPLOSION_MEDIUM);

                if (gCurrentSprite.pose <= IMAGO_POSE_CHECK_SAMUS_AT_SUPER_MISSILE)
                {
                    if (gFrameCounter8Bit & 0x4)
                        gCurrentSprite.paletteRow = 0xE - (gCurrentSprite.spritesetGFXSlot + gCurrentSprite.frozenPaletteRowOffset);
                    else
                        gCurrentSprite.paletteRow = 0x0;
                }
                else
                    gCurrentSprite.paletteRow = 0x0;
            }
        }
        else
            ImagoCoreFlashingAnim();

        SpriteUtilUpdateSubSprite1Anim();
        ImagoSyncSubSprites();
    }
}

/**
 * @brief 43818 | 1b0 | Imago part AI
 * 
 */
void ImagoPart(void)
{
    u8 ramSlot;

    ramSlot = gCurrentSprite.primarySpriteRAMSlot;

    // Sync flip
    if (gSpriteData[ramSlot].status & SPRITE_STATUS_XFLIP)
        gCurrentSprite.status |= SPRITE_STATUS_XFLIP;
    else
        gCurrentSprite.status &= ~SPRITE_STATUS_XFLIP;

    if (gSpriteData[ramSlot].health == 0x0)
    {
        // Imago dying
        gCurrentSprite.ignoreSamusCollisionTimer = 0x1;
        gCurrentSprite.status |= SPRITE_STATUS_IGNORE_PROJECTILES;
        
        if (gSpriteData[ramSlot].pose >= IMAGO_POSE_CHARGING_THROUGH_WALL)
        {
            // Set draw order
            switch (gCurrentSprite.roomSlot)
            {
                case IMAGO_PART_LEFT_WING_INTERNAL:
                case IMAGO_PART_LEFT_WING_EXTERNAL:
                    gCurrentSprite.drawOrder = 0x9;
                    break;

                case IMAGO_PART_BODY:
                    gCurrentSprite.drawOrder = 0xA;
                    break;

                case IMAGO_PART_RIGHT_WING_INTERNAL:
                case IMAGO_PART_RIGHT_WING_EXTERNAL:
                case IMAGO_PART_CORE:
                    gCurrentSprite.drawOrder = 0xB;
            }
        }
    }

    if (gSpriteData[ramSlot].pose > IMAGO_POSE_DYING)
    {
        // Imago dead, kill part
        switch (gCurrentSprite.roomSlot)
        {
            case IMAGO_PART_LEFT_WING_INTERNAL:
                SpriteUtilSpriteDeath(DEATH_NORMAL, gSubSpriteData1.yPosition - 0x10, gSubSpriteData1.xPosition + 0x48,
                    FALSE, PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
                break;

            case IMAGO_PART_LEFT_WING_EXTERNAL:
                SpriteUtilSpriteDeath(DEATH_NORMAL, gSubSpriteData1.yPosition - 0x64, gSubSpriteData1.xPosition,
                    FALSE, PE_SPRITE_EXPLOSION_MEDIUM);
                break;

            case IMAGO_PART_BODY:
                SpriteUtilSpriteDeath(DEATH_NORMAL, gSubSpriteData1.yPosition + 0x30, gSubSpriteData1.xPosition - 0x1C,
                    FALSE, PE_SPRITE_EXPLOSION_BIG);
                break;

            case IMAGO_PART_RIGHT_WING_INTERNAL:
                SpriteUtilSpriteDeath(DEATH_NORMAL, gSubSpriteData1.yPosition - 0x30, gSubSpriteData1.xPosition - 0x50,
                    FALSE, PE_SPRITE_EXPLOSION_MEDIUM);
                break;

            case IMAGO_PART_RIGHT_WING_EXTERNAL:
                SpriteUtilSpriteDeath(DEATH_NORMAL, gSubSpriteData1.yPosition + 0x20, gSubSpriteData1.xPosition - 0x74,
                    FALSE, PE_SPRITE_EXPLOSION_MEDIUM);
                break;

            case IMAGO_PART_CORE:
                SpriteUtilSpriteDeath(DEATH_NORMAL, gSubSpriteData1.yPosition - 0x40, gSubSpriteData1.xPosition - 0x96,
                    FALSE, PE_SPRITE_EXPLOSION_MEDIUM);
                break;

            default:
                gCurrentSprite.status = 0x0;
        }
    }
    else
    {
        switch (gCurrentSprite.pose)
        {
            case 0x0:
                ImagoPartInit();
                break;

            case IMAGO_PART_POSE_BODY_SPAWN:
                ImagoPartBodySpawn();
                break;

            case IMAGO_PART_POSE_BODY_UPDATE_PALETTE:
                ImagoPartUpdateBodyPalette();
                break;

            case IMAGO_PART_POSE_CORE_SYNC_PALETTE:
                ImagoPartSyncPalette();
        }

        ImagoSyncSubSprites();
    }
}

/**
 * @brief 439c8 | ec | Imago needle AI
 * 
 */
void ImagoNeedle(void)
{
    switch (gCurrentSprite.pose)
    {
        case 0x0:
            gCurrentSprite.status &= ~SPRITE_STATUS_NOT_DRAWN;
            gCurrentSprite.drawDistanceTopOffset = 0x8;
            gCurrentSprite.drawDistanceBottomOffset = 0x8;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x8;

            gCurrentSprite.hitboxTopOffset = -0xC;
            gCurrentSprite.hitboxBottomOffset = 0xC;
            gCurrentSprite.hitboxLeftOffset = -0xC;
            gCurrentSprite.hitboxRightOffset = 0xC;

            gCurrentSprite.health = sSecondarySpriteStats[gCurrentSprite.spriteID][0];
            gCurrentSprite.pOam = sImagoNeedleOAM;
            gCurrentSprite.animationDurationCounter = 0x0;
            gCurrentSprite.currentAnimationFrame = 0x0;

            gCurrentSprite.samusCollision = SSC_HURTS_SAMUS_STOP_DIES_WHEN_HIT;
            gCurrentSprite.pose = IMAGO_NEEDLE_POSE_MOVING;
            SoundPlay(0xC0);
            break;

        case IMAGO_NEEDLE_POSE_MOVING:
            if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
                gCurrentSprite.xPosition += 0x18;
            else
                gCurrentSprite.xPosition -= 0x18;

            gCurrentSprite.yPosition += 0xC;

            if (SpriteUtilGetCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition) != COLLISION_AIR)
                gCurrentSprite.pose = IMAGO_NEEDLE_POSE_EXPLODING;
            break;

        case IMAGO_NEEDLE_POSE_EXPLODING:
            ParticleSet(gCurrentSprite.yPosition, gCurrentSprite.xPosition, PE_SPRITE_EXPLOSION_SMALL);
            SoundPlay(0x12C); // Sprite explosion small
            gCurrentSprite.status = 0x0;
            break;

        default:
            SpriteUtilSpriteDeath(DEATH_NORMAL, gCurrentSprite.yPosition, gCurrentSprite.xPosition, TRUE, PE_SPRITE_EXPLOSION_SMALL);
    }
}

/**
 * @brief 43ab4 | 1a4 | Imago damaged stinger AI
 * 
 */
void ImagoDamagedStinger(void)
{
    i32 movement;
    u8 offset;

    gCurrentSprite.ignoreSamusCollisionTimer = 0x1;

    switch (gCurrentSprite.pose)
    {
        case 0x0:
            gCurrentSprite.status &= ~SPRITE_STATUS_NOT_DRAWN;

            gCurrentSprite.drawDistanceTopOffset = 0x20;
            gCurrentSprite.drawDistanceBottomOffset = 0x20;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x18;

            gCurrentSprite.hitboxTopOffset = -0x60;
            gCurrentSprite.hitboxBottomOffset = 0x60;
            gCurrentSprite.hitboxLeftOffset = -0x20;
            gCurrentSprite.hitboxRightOffset = 0x20;

            gCurrentSprite.pOam = sImagoDamagedStingerOAM;
            gCurrentSprite.animationDurationCounter = 0x0;
            gCurrentSprite.currentAnimationFrame = 0x0;

            gCurrentSprite.samusCollision = SSC_NONE;
            gCurrentSprite.frozenPaletteRowOffset = 0x1;
            gCurrentSprite.drawOrder = 0xC;
            gCurrentSprite.pose = IMAGO_DAMAGED_STINGER_POSE_FALLING;
            gCurrentSprite.timer = 0x0;
            gCurrentSprite.workVariable2 = 0xA;
            gCurrentSprite.arrayOffset = 0x0;
            SoundPlay(0xC1);

        case IMAGO_DAMAGED_STINGER_POSE_FALLING:
            if (!(gCurrentSprite.timer & 0x7))
                ParticleSet(gCurrentSprite.yPosition - BLOCK_SIZE, gCurrentSprite.xPosition, PE_SPRITE_EXPLOSION_BIG);

            // Move Y
            offset = gCurrentSprite.arrayOffset;
            movement = sImagoDamagedStingerFallingYVelocity[offset];
            if (movement == SHORT_MAX)
            {
                movement = sImagoDamagedStingerFallingYVelocity[offset - 1];
                gCurrentSprite.yPosition += movement;
            }
            else
            {
                gCurrentSprite.arrayOffset++;
                gCurrentSprite.yPosition += movement;
            }

            gCurrentSprite.timer++;
            if (gCurrentSprite.workVariable2 != 0x0)
                gCurrentSprite.workVariable2--;
            else if (SpriteUtilGetCollisionAtPosition(gCurrentSprite.yPosition + BLOCK_SIZE, gCurrentSprite.xPosition) != COLLISION_AIR)
            {
                // Touched ground
                gCurrentSprite.timer = 0x3C;
                gCurrentSprite.pose = IMAGO_DAMAGED_STINGER_POSE_DISAPPEARING;
                ScreenShakeStartVertical(0xA, 0x81);
            }
            break;

        case IMAGO_DAMAGED_STINGER_POSE_DISAPPEARING:
            if (--gCurrentSprite.timer == 0x0)
            {
                ParticleSet(gCurrentSprite.yPosition - HALF_BLOCK_SIZE, gCurrentSprite.xPosition, PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
                gCurrentSprite.status = 0x0;
                SoundPlay(0xC2);
            }
            else if (gCurrentSprite.timer < 0x29 && !(gCurrentSprite.timer & 0x3))
            {
                // Make blink
                if (gCurrentSprite.timer & 0x4)
                    gCurrentSprite.paletteRow = 0xE - (gCurrentSprite.spritesetGFXSlot + gCurrentSprite.frozenPaletteRowOffset);
                else
                    gCurrentSprite.paletteRow = gCurrentSprite.absolutePaletteRow;
            }
            break;
    }
}

/**
 * @brief 43c58 | 130 | Imago egg AI
 * 
 */
void ImagoEgg(void)
{
    switch (gCurrentSprite.pose)
    {
        case 0x0:
            gCurrentSprite.status &= ~SPRITE_STATUS_NOT_DRAWN;
            
            gCurrentSprite.drawDistanceTopOffset = 0x18;
            gCurrentSprite.drawDistanceBottomOffset = 0x0;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x18;

            gCurrentSprite.hitboxTopOffset = -0x44;
            gCurrentSprite.hitboxBottomOffset = 0x0;
            gCurrentSprite.hitboxLeftOffset = -0x1C;
            gCurrentSprite.hitboxRightOffset = 0x1C;

            gCurrentSprite.health = 0x1;
            gCurrentSprite.pOam = sImagoEggOAM_Standing;
            gCurrentSprite.animationDurationCounter = 0x0;
            gCurrentSprite.currentAnimationFrame = 0x0;

            gCurrentSprite.samusCollision = SSC_IMAGO_EGG;
            gCurrentSprite.pose = IMAGO_EGG_POSE_IDLE;
            break;

        case IMAGO_EGG_POSE_IDLE:
            if (gCurrentSprite.status & SPRITE_STATUS_SAMUS_COLLIDING)
            {
                gCurrentSprite.pOam = sImagoEggOAM_Breaking;
                gCurrentSprite.animationDurationCounter = 0x0;
                gCurrentSprite.currentAnimationFrame = 0x0;

                gCurrentSprite.pose = IMAGO_EGG_POSE_BREAKING;
                gCurrentSprite.status |= SPRITE_STATUS_IGNORE_PROJECTILES;
                gCurrentSprite.health = 0x0;

                SoundPlay(0xB3);
                // Set last egg broken flag
                if (gCurrentSprite.roomSlot == IMAGO_EGG_PART_LAST)
                    gSubSpriteData1.workVariable3 = TRUE;
            }
            break;

        case IMAGO_EGG_POSE_BREAKING:
            if (gCurrentSprite.currentAnimationFrame > 0x2)
            {
                gCurrentSprite.ignoreSamusCollisionTimer = 0x1;
                gCurrentSprite.samusCollision = SSC_NONE;
                gCurrentSprite.pose = IMAGO_EGG_POSE_DISAPPEARING;
                gCurrentSprite.timer = 0xB4;
            }
            break;

        case IMAGO_EGG_POSE_DISAPPEARING:
            if (gCurrentSprite.timer < 0x3C)
                gCurrentSprite.status ^= SPRITE_STATUS_NOT_DRAWN;

            gCurrentSprite.timer--;
            if (gCurrentSprite.timer == 0x0)
                gCurrentSprite.status = 0x0;
            break;

        default:
            // Set last egg broken flag
            if (gCurrentSprite.roomSlot == IMAGO_EGG_PART_LAST)
                gSubSpriteData1.workVariable3 = TRUE;
            
            SpriteUtilSpriteDeath(DEATH_NO_DEATH_OR_RESPAWNING_ALREADY_HAS_DROP, gCurrentSprite.yPosition - 0x18, gCurrentSprite.xPosition, TRUE, PE_SPRITE_EXPLOSION_SMALL);
            gCurrentSprite.status = 0x0;
    }
}