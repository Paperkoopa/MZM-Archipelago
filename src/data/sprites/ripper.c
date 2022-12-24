#include "data/sprites/ripper.h"
#include "macros.h"

const u32 sRipperBrownGFX[141] = INCBIN_U32("data/sprites/RipperBrown.gfx.lz");
const u16 sRipperBrownPAL[16] = INCBIN_U16("data/sprites/RipperBrown.pal");
const u32 sRipperPurpleGFX[141] = INCBIN_U32("data/sprites/RipperPurple.gfx.lz");
const u16 sRipperPurplePAL[16] = INCBIN_U16("data/sprites/RipperPurple.pal");

const u16 sRipperOAM_Moving_Frame0[4] = {
    0x1,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x16 | 0x1f0, OBJ_SPRITE_OAM | 0x200
};

const u16 sRipperOAM_Moving_Frame1[7] = {
    0x2,
    0xf3, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x204,
    0xf3, OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x202
};

const u16 sRipperOAM_Moving_Frame2[7] = {
    0x2,
    0xf3, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x206,
    0xf3, OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x202
};

const u16 sRipperOAM_TurningAround_Frame0[4] = {
    0x1,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_SIZE_32x16 | 0x1f0, OBJ_SPRITE_OAM | 0x208
};

const u16 sRipperOAM_TurningAround_Frame1[4] = {
    0x1,
    0xf3, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x20c
};

const struct FrameData sRipperOAM_Moving[5] = {
    sRipperOAM_Moving_Frame0,
    0x10,
    sRipperOAM_Moving_Frame1,
    0x10,
    sRipperOAM_Moving_Frame2,
    0x10,
    sRipperOAM_Moving_Frame1,
    0x10,
    NULL,
    0x0
};

const struct FrameData sRipperOAM_TurningAround[3] = {
    sRipperOAM_TurningAround_Frame0,
    0x3,
    sRipperOAM_TurningAround_Frame1,
    0x3,
    NULL,
    0x0
};

const struct FrameData sRipperOAM_TurningAroundPart2[3] = {
    sRipperOAM_TurningAround_Frame1,
    0x3,
    sRipperOAM_TurningAround_Frame0,
    0x3,
    NULL,
    0x0
};
