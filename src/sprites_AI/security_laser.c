#include "security_laser.h"
#include "../../data/data.h"
#include "../globals.h"

const u32 sSecurityLaserGFX[104];
const u16 sSecurityLaserPAL[16];

const u16 sSecurityLaserOAM_VerticalSmall_Frame0[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xe5, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalSmall_Frame1[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalSmall_Frame2[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xe7, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalSmall_Frame3[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalSmall_Frame4[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xe9, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalSmall_Frame5[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalMedium_Frame0[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xdd, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalMedium_Frame1[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xde, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalMedium_Frame2[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xdf, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalMedium_Frame3[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalMedium_Frame4[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xe1, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalMedium_Frame5[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xe2, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalLarge_Frame0[19] = {
    0x6,
    OBJ_SHAPE_VERTICAL | 0xe5, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc5, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalLarge_Frame1[19] = {
    0x6,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc6, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalLarge_Frame2[19] = {
    0x6,
    OBJ_SHAPE_VERTICAL | 0xe7, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xc7, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalLarge_Frame3[19] = {
    0x6,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc8, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalLarge_Frame4[19] = {
    0x6,
    OBJ_SHAPE_VERTICAL | 0xe9, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xc9, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalLarge_Frame5[19] = {
    0x6,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xca, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalVeryLarge_Frame0[22] = {
    0x7,
    OBJ_SHAPE_VERTICAL | 0xe5, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xbd, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalVeryLarge_Frame1[22] = {
    0x7,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xbe, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalVeryLarge_Frame2[22] = {
    0x7,
    OBJ_SHAPE_VERTICAL | 0xe7, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalVeryLarge_Frame3[22] = {
    0x7,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalVeryLarge_Frame4[22] = {
    0x7,
    OBJ_SHAPE_VERTICAL | 0xe9, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc1, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_VerticalVeryLarge_Frame5[22] = {
    0x7,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc2, 0x1fc, OBJ_SPRITE_OAM | 0x201,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x200
};

const u16 sSecurityLaserOAM_HorizontalSmall_Frame0[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x3, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalSmall_Frame1[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x2, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalSmall_Frame2[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalSmall_Frame3[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x0, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalSmall_Frame4[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1ff, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalSmall_Frame5[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1fe, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalMedium_Frame0[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0xb, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalMedium_Frame1[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0xa, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalMedium_Frame2[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x9, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalMedium_Frame3[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalMedium_Frame4[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x7, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalMedium_Frame5[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x6, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalLarge_Frame0[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x3, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x23, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalLarge_Frame1[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x2, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x22, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalLarge_Frame2[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x21, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalLarge_Frame3[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x0, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x20, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalLarge_Frame4[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1ff, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalLarge_Frame5[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1fe, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1e, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202
};

const u16 sSecurityLaserOAM_HorizontalVeryLarge_Frame0[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x3, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x2b, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalVeryLarge_Frame1[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x2, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x2a, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalVeryLarge_Frame2[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x29, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalVeryLarge_Frame3[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x0, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalVeryLarge_Frame4[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1ff, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x27, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_HorizontalVeryLarge_Frame5[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1fe, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x26, OBJ_SPRITE_OAM | 0x222,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x202,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x204
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Frame0[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x206
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Frame1[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x207
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Frame2[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x208
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Frame3[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x209
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Frame4[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1fc, OBJ_SPRITE_OAM | 0x20a,
    0xe4, 0x1fc, OBJ_SPRITE_OAM | 0x20a
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Frame5[7] = {
    0x2,
    0xea, 0x1fc, OBJ_SPRITE_OAM | 0x20b,
    0xee, 0x1fc, OBJ_SPRITE_OAM | 0x20b
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Frame0[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x206
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Frame1[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x207
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Frame2[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x208
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Frame3[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x209
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Frame4[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1fc, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1fc, OBJ_SPRITE_OAM | 0x20a
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Frame5[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xde, 0x1fc, OBJ_SPRITE_OAM | 0x20b,
    0xea, 0x1fc, OBJ_SPRITE_OAM | 0x20b
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Frame0[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x206
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Frame1[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x207
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Frame2[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x208
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Frame3[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x209
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Frame4[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1fc, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_VERTICAL | 0xe4, 0x1fc, OBJ_SPRITE_OAM | 0x20a,
    0xdc, 0x1fc, OBJ_SPRITE_OAM | 0x20a
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Frame5[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xd2, 0x1fc, OBJ_SPRITE_OAM | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xde, 0x1fc, OBJ_SPRITE_OAM | 0x20b
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame0[16] = {
    0x5,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x206
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame1[16] = {
    0x5,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x207,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x207
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame2[16] = {
    0x5,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x208
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame3[16] = {
    0x5,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x209
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame4[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xe4, 0x1fc, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1fc, OBJ_SPRITE_OAM | 0x20a,
    OBJ_SHAPE_VERTICAL | 0xbc, 0x1fc, OBJ_SPRITE_OAM | 0x20a,
    0xdc, 0x1fc, OBJ_SPRITE_OAM | 0x20a
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame5[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xde, 0x1fc, OBJ_SPRITE_OAM | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xc2, 0x1fc, OBJ_SPRITE_OAM | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x20b
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Frame0[4] = {
    0x1,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x20c
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Frame1[4] = {
    0x1,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x22c
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Frame2[4] = {
    0x1,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x210
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Frame3[4] = {
    0x1,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x230
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Frame4[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1fc, OBJ_SPRITE_OAM | 0x214,
    0xf4, 0xc, OBJ_SPRITE_OAM | 0x216
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Frame5[7] = {
    0x2,
    0xf4, 0x2, OBJ_SPRITE_OAM | 0x234,
    0xf4, 0x6, OBJ_SPRITE_OAM | 0x234
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Frame0[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x20c
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Frame1[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x22c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x22c
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Frame2[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x210
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Frame3[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x230,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x230
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Frame4[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x0, OBJ_SPRITE_OAM | 0x215,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x10, OBJ_SPRITE_OAM | 0x215
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Frame5[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x6, OBJ_SPRITE_OAM | 0x234,
    0xf4, 0x12, OBJ_SPRITE_OAM | 0x236
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Frame0[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x20c
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Frame1[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x22c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x22c
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Frame2[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x210
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Frame3[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x230,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x18, OBJ_SPRITE_OAM | 0x230
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Frame4[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x4, OBJ_SPRITE_OAM | 0x214,
    0xf4, 0x14, OBJ_SPRITE_OAM | 0x216,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1c, OBJ_SPRITE_OAM | 0x214
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Frame5[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0xa, OBJ_SPRITE_OAM | 0x234,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x16, OBJ_SPRITE_OAM | 0x234
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame0[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x20c
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame1[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x22c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x22c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x22c
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame2[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x210
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame3[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x1f8, OBJ_SPRITE_OAM | 0x230,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x230,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x8 | 0x28, OBJ_SPRITE_OAM | 0x230
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame4[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x4, OBJ_SPRITE_OAM | 0x215,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x14, OBJ_SPRITE_OAM | 0x215,
    0xf4, 0x24, OBJ_SPRITE_OAM | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x2c, OBJ_SPRITE_OAM | 0x215
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame5[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0xa, OBJ_SPRITE_OAM | 0x234,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x234,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x26, OBJ_SPRITE_OAM | 0x234
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame0[7] = {
    0x2,
    0xf8, 0x1fc, OBJ_SPRITE_OAM | 0x21b,
    0xe0, OBJ_Y_FLIP | 0x1fc, OBJ_SPRITE_OAM | 0x21b
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame1[7] = {
    0x2,
    0xf8, 0x1fc, OBJ_SPRITE_OAM | 0x238,
    0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x238
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame2[13] = {
    0x4,
    0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x21b,
    0xf8, 0x1fc, OBJ_SPRITE_OAM | 0x238,
    0xe8, OBJ_Y_FLIP | 0x1fc, OBJ_SPRITE_OAM | 0x21b,
    0xe0, OBJ_Y_FLIP | 0x1fc, OBJ_SPRITE_OAM | 0x238
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame3[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame4[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x219
};

const u16 sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame5[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x21a
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame0[7] = {
    0x2,
    0xf8, 0x1fc, OBJ_SPRITE_OAM | 0x21b,
    0xd0, OBJ_Y_FLIP | 0x1fc, OBJ_SPRITE_OAM | 0x21b
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame1[13] = {
    0x4,
    0xf8, 0x1fc, OBJ_SPRITE_OAM | 0x238,
    0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x238,
    0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x21b,
    0xd8, OBJ_Y_FLIP | 0x1fc, OBJ_SPRITE_OAM | 0x21b
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame2[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    0xe8, 0x1fc, OBJ_SPRITE_OAM | 0x21b,
    0xe0, OBJ_Y_FLIP | 0x1fc, OBJ_SPRITE_OAM | 0x21b
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame3[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame4[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x219
};

const u16 sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame5[10] = {
    0x3,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x21a
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame0[7] = {
    0x2,
    0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    0xf8, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame1[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame2[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    0xe8, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame3[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame4[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x219
};

const u16 sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame5[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x21a
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame0[7] = {
    0x2,
    0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    0xf8, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame1[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame2[13] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame3[16] = {
    0x5,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x218
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame4[16] = {
    0x5,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x219,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x219
};

const u16 sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame5[16] = {
    0x5,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1fc, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_VERTICAL | 0xb0, 0x1fc, OBJ_SPRITE_OAM | 0x21a
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame0[7] = {
    0x2,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x23b,
    0xf4, OBJ_X_FLIP | 0x10, OBJ_SPRITE_OAM | 0x23b
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame1[7] = {
    0x2,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x10, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame2[13] = {
    0x4,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x10, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x0, OBJ_SPRITE_OAM | 0x23b,
    0xf4, OBJ_X_FLIP | 0x8, OBJ_SPRITE_OAM | 0x23b
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame3[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame4[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x23c
};

const u16 sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame5[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21e
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame0[7] = {
    0x2,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x23b,
    0xf4, OBJ_X_FLIP | 0x20, OBJ_SPRITE_OAM | 0x23b
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame1[13] = {
    0x4,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x20, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x0, OBJ_SPRITE_OAM | 0x23b,
    0xf4, OBJ_X_FLIP | 0x18, OBJ_SPRITE_OAM | 0x23b
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame2[13] = {
    0x4,
    0xf4, 0x8, OBJ_SPRITE_OAM | 0x23b,
    0xf4, OBJ_X_FLIP | 0x10, OBJ_SPRITE_OAM | 0x23b,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame3[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame4[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x23c
};

const u16 sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame5[10] = {
    0x3,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x21e
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame0[7] = {
    0x2,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x30, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame1[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame2[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x8, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x20, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame3[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame4[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x23c
};

const u16 sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame5[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x21e
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame0[7] = {
    0x2,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    0xf4, 0x40, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame1[7] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame2[13] = {
    0x4,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame3[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x21c
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame4[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x23c,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x23c
};

const u16 sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame5[16] = {
    0x5,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x18, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x28, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x38, OBJ_SPRITE_OAM | 0x21e
};

const struct FrameData sSecurityLaserOAM_VerticalSmall[11] = {
    sSecurityLaserOAM_VerticalSmall_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame5,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalSmall_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalMedium[11] = {
    sSecurityLaserOAM_VerticalMedium_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame5,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalMedium_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalLarge[11] = {
    sSecurityLaserOAM_VerticalLarge_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame5,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalLarge_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalVeryLarge[11] = {
    sSecurityLaserOAM_VerticalVeryLarge_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame5,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalVeryLarge_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalSmall[11] = {
    sSecurityLaserOAM_HorizontalSmall_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame5,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalSmall_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalMedium[11] = {
    sSecurityLaserOAM_HorizontalMedium_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame5,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalMedium_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalLarge[11] = {
    sSecurityLaserOAM_HorizontalLarge_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame5,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalLarge_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalVeryLarge[11] = {
    sSecurityLaserOAM_HorizontalVeryLarge_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame5,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLarge_Frame1,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalSmallDisappearing[7] = {
    sSecurityLaserOAM_VerticalSmallDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_VerticalSmallDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_VerticalSmallDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_VerticalSmallDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_VerticalSmallDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_VerticalSmallDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalMediumDisappearing[7] = {
    sSecurityLaserOAM_VerticalMediumDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_VerticalMediumDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_VerticalMediumDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_VerticalMediumDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_VerticalMediumDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_VerticalMediumDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalLargeDisappearing[7] = {
    sSecurityLaserOAM_VerticalLargeDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_VerticalLargeDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_VerticalLargeDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_VerticalLargeDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_VerticalLargeDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_VerticalLargeDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalVeryLargeDisappearing[7] = {
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalSmallDisappearing[7] = {
    sSecurityLaserOAM_HorizontalSmallDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalMediumDisappearing[7] = {
    sSecurityLaserOAM_HorizontalMediumDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalLargeDisappearing[7] = {
    sSecurityLaserOAM_HorizontalLargeDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalVeryLargeDisappearing[7] = {
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame0,
    0x1,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame1,
    0x1,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame2,
    0x1,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame3,
    0x1,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame4,
    0x1,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Frame5,
    0x1,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalSmallDisappearing_Unused[7] = {
    sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalSmallDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalMediumDisappearing_Unused[7] = {
    sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalMediumDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalLargeDisappearing_Unused[7] = {
    sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalLargeDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused[7] = {
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_VerticalVeryLargeDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalSmallDisappearing_Unused[7] = {
    sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalSmallDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalMediumDisappearing_Unused[7] = {
    sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalMediumDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalLargeDisappearing_Unused[7] = {
    sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalLargeDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};

const struct FrameData sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused[7] = {
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame0,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame1,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame2,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame3,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame4,
    0x2,
    sSecurityLaserOAM_HorizontalVeryLargeDisappearing_Unused_Frame5,
    0x2,
    NULL,
    0x0
};


/**
 * @brief 37cbc | 21c | Initializes a security laser sprite
 * 
 */
void SecurityLaserInit(void)
{
    u16 yPosition;
    u16 xPosition;

    yPosition = gCurrentSprite.yPosition;
    xPosition = gCurrentSprite.xPosition;

    if (gCurrentSprite.spriteID == PSPRITE_SECURITY_LASER_VERTICAL || gCurrentSprite.spriteID == PSPRITE_SECURITY_LASER_VERTICAL2)
    {
        // Initialize vertical laser
        gCurrentSprite.status |= SPRITE_STATUS_UNKNOWN2;

        // Get size
        if (SpriteUtilGetCollisionAtPosition(yPosition - (BLOCK_SIZE * 2 + HALF_BLOCK_SIZE), xPosition) != COLLISION_AIR)
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalSmall;
            gCurrentSprite.drawDistanceTopOffset = 0x20;
            gCurrentSprite.hitboxTopOffset = -0x64;
            gCurrentSprite.workVariable = SECURITY_LASER_VERTICAL | SECURITY_LASER_SMALL;
        }
        else if (SpriteUtilGetCollisionAtPosition(yPosition - (BLOCK_SIZE * 3 + HALF_BLOCK_SIZE), xPosition) != COLLISION_AIR)
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalMedium;
            gCurrentSprite.drawDistanceTopOffset = 0x30;
            gCurrentSprite.hitboxTopOffset = -0xA4;
            gCurrentSprite.workVariable = SECURITY_LASER_VERTICAL | SECURITY_LASER_MEDIUM;
        }
        else if (SpriteUtilGetCollisionAtPosition(yPosition - (BLOCK_SIZE * 4 + HALF_BLOCK_SIZE), xPosition) != COLLISION_AIR)
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalLarge;
            gCurrentSprite.drawDistanceTopOffset = 0x40;
            gCurrentSprite.hitboxTopOffset = -0xE4;
            gCurrentSprite.workVariable = SECURITY_LASER_VERTICAL | SECURITY_LASER_LARGE;
        }
        else
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalVeryLarge;
            gCurrentSprite.drawDistanceTopOffset = 0x50;
            gCurrentSprite.hitboxTopOffset = -0x124;
            gCurrentSprite.workVariable = SECURITY_LASER_VERTICAL | SECURITY_LASER_VERY_LARGE;
        }

        gCurrentSprite.drawDistanceBottomOffset = 0x0;
        gCurrentSprite.drawDistanceHorizontalOffset = 0x8;

        gCurrentSprite.hitboxBottomOffset = 0x0;
        gCurrentSprite.hitboxLeftOffset = -0x8;
        gCurrentSprite.hitboxRightOffset = 0x8;
    }
    else
    {
        // Initialize horizontal laser
        // Get size
        if (SpriteUtilGetCollisionAtPosition(yPosition - HALF_BLOCK_SIZE, xPosition + BLOCK_SIZE * 2) != COLLISION_AIR)
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalSmall;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x18;
            gCurrentSprite.hitboxRightOffset = 0x44;
            gCurrentSprite.workVariable = SECURITY_LASER_SMALL;
        }
        else if (SpriteUtilGetCollisionAtPosition(yPosition - HALF_BLOCK_SIZE, xPosition + BLOCK_SIZE * 3) != COLLISION_AIR)
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalMedium;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x28;
            gCurrentSprite.hitboxRightOffset = 0x84;
            gCurrentSprite.workVariable = SECURITY_LASER_MEDIUM;
        }
        else if (SpriteUtilGetCollisionAtPosition(yPosition - HALF_BLOCK_SIZE, xPosition + BLOCK_SIZE * 4) != COLLISION_AIR)
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalLarge;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x38;
            gCurrentSprite.hitboxRightOffset = 0xC4;
            gCurrentSprite.workVariable = SECURITY_LASER_LARGE;
        }
        else
        {
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalVeryLarge;
            gCurrentSprite.drawDistanceHorizontalOffset = 0x48;
            gCurrentSprite.hitboxRightOffset = 0x104;
            gCurrentSprite.workVariable = SECURITY_LASER_VERY_LARGE;
        }

        gCurrentSprite.drawDistanceTopOffset = 0x10;
        gCurrentSprite.drawDistanceBottomOffset = 0x0;

        gCurrentSprite.hitboxTopOffset = -0x28;
        gCurrentSprite.hitboxBottomOffset = -0x18;
        gCurrentSprite.hitboxLeftOffset = -0x4;
    }

    gCurrentSprite.samusCollision = SSC_ABILITY_LASER_SEARCHLIGHT;
    gCurrentSprite.drawOrder = 0x2;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.animationDurationCounter = 0x0;

    
    TransparencyUpdateBLDCNT(0x1, BLDCNT_BG0_FIRST_TARGET_PIXEL | BLDCNT_ALPHA_BLENDING_EFFECT |
        BLDCNT_BG2_SECOND_TARGET_PIXEL | BLDCNT_BG3_SECOND_TARGET_PIXEL);

    if (gAlarmTimer != 0x0)
    {
        // Set aware
        gCurrentSprite.pose = SECURITY_LASER_POSE_SET_ALARM;
        gCurrentSprite.status |= SPRITE_STATUS_NOT_DRAWN;
        gCurrentSprite.workVariable2 = FALSE;
        gCurrentSprite.arrayOffset = 0x10;
    }
    else
    {
        // Set idle
        gCurrentSprite.pose = SECURITY_LASER_POSE_IDLE;
        gCurrentSprite.workVariable2 = TRUE;
        gCurrentSprite.arrayOffset = 0x8;
    }
}

/**
 * @brief 37ed8 | 13c | Handles a security laser being idle
 * 
 */
void SecurityLaserIdle(void)
{
    struct SpriteData* pSprite;

    if (gCurrentSprite.status & SPRITE_STATUS_SAMUS_COLLIDING)
    {
        gAlarmTimer = 0x1E0;

        for (pSprite = gSpriteData; pSprite < gSpriteData + MAX_AMOUNT_OF_SPRITES; pSprite++)
        {
            if (pSprite->status & SPRITE_STATUS_EXISTS && pSprite->samusCollision == SSC_SPACE_PIRATE)
                pSprite->status |= SPRITE_STATUS_MOSAIC;
        }
    }
    else if (gAlarmTimer == 0x0)
        return;

    gCurrentSprite.pose = SECURITY_LASER_POSE_DISAPPEARING;
    gCurrentSprite.status &= ~SPRITE_STATUS_SAMUS_COLLIDING;

    gCurrentSprite.ignoreSamusCollisionTimer = 0x1;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.animationDurationCounter = 0x0;

    // Set disappearing OAM
    switch (gCurrentSprite.workVariable)
    {
        case SECURITY_LASER_SMALL:
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalSmallDisappearing;
            break;

        case SECURITY_LASER_MEDIUM:
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalMediumDisappearing;
            break;

        case SECURITY_LASER_LARGE:
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalLargeDisappearing;
            break;

        case SECURITY_LASER_VERY_LARGE:
            gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalVeryLargeDisappearing;
            break;

        case SECURITY_LASER_VERTICAL | SECURITY_LASER_SMALL:
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalSmallDisappearing;
            break;

        case SECURITY_LASER_VERTICAL | SECURITY_LASER_MEDIUM:
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalMediumDisappearing;
            break;

        case SECURITY_LASER_VERTICAL | SECURITY_LASER_LARGE:
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalLargeDisappearing;
            break;

        case SECURITY_LASER_VERTICAL | SECURITY_LASER_VERY_LARGE:
            gCurrentSprite.pOam = sSecurityLaserOAM_VerticalVeryLargeDisappearing;
            break;

        default:
            gCurrentSprite.status = 0x0;
            return;
    }

    SoundPlay(0x10A);
}

/**
 * @brief 38014 | d4 | Checks if the despawning animation has ended
 * 
 */
void SecurityLaserCheckDespawnAnimEnded(void)
{
    gCurrentSprite.ignoreSamusCollisionTimer = 0x1;

    if (SpriteUtilCheckEndCurrentSpriteAnim())
    {
        gCurrentSprite.pose = SECURITY_LASER_POSE_SET_ALARM;
        gCurrentSprite.currentAnimationFrame = 0x0;
        gCurrentSprite.animationDurationCounter = 0x0;
        gCurrentSprite.status |= SPRITE_STATUS_NOT_DRAWN;

        switch (gCurrentSprite.workVariable)
        {
            case SECURITY_LASER_SMALL:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalSmall;
                break;

            case SECURITY_LASER_MEDIUM:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalMedium;
                break;

            case SECURITY_LASER_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalLarge;
                break;

            case SECURITY_LASER_VERY_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalVeryLarge;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_SMALL:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalSmall;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_MEDIUM:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalMedium;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalLarge;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_VERY_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalVeryLarge;
                break;

            default:
                gCurrentSprite.status = 0x0;
        }
    }
}

/**
 * @brief 380e8 | 1c | Continuously sets the alarm
 * 
 */
void SecurityLaserSetAlarm(void)
{
    gCurrentSprite.ignoreSamusCollisionTimer = 0x1;
    gAlarmTimer = 0x1E0;
}

/**
 * @brief 38104 | cc | Unused code
 * 
 */
void SecurityLaser_Unused(void)
{
    gCurrentSprite.ignoreSamusCollisionTimer = 0x1;

    if (SpriteUtilCheckEndCurrentSpriteAnim())
    {
        gCurrentSprite.pose = SECURITY_LASER_POSE_IDLE;
        gCurrentSprite.currentAnimationFrame = 0x0;
        gCurrentSprite.animationDurationCounter = 0x0;

        switch (gCurrentSprite.workVariable)
        {
            case SECURITY_LASER_SMALL:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalSmall;
                break;

            case SECURITY_LASER_MEDIUM:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalMedium;
                break;

            case SECURITY_LASER_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalLarge;
                break;

            case SECURITY_LASER_VERY_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_HorizontalVeryLarge;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_SMALL:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalSmall;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_MEDIUM:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalMedium;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalLarge;
                break;

            case SECURITY_LASER_VERTICAL | SECURITY_LASER_VERY_LARGE:
                gCurrentSprite.pOam = sSecurityLaserOAM_VerticalVeryLarge;
                break;

            default:
                gCurrentSprite.status = 0x0;
        }
    }
}

/**
 * @brief 381d0 | 138 | Security laser AI
 * 
 */
void SecurityLaser(void)
{
    switch (gCurrentSprite.pose)
    {
        case 0x0:
            SecurityLaserInit();
            break;

        case SECURITY_LASER_POSE_IDLE:
            SecurityLaserIdle();
            break;

        case SECURITY_LASER_POSE_DISAPPEARING:
            SecurityLaserCheckDespawnAnimEnded();
            break;

        case SECURITY_LASER_POSE_SET_ALARM:
            SecurityLaserSetAlarm();
            break;

        case SECURITY_LASER_POSE_UNUSED:
            SecurityLaser_Unused();
    }

    if ((u8)(gCurrentSprite.spriteID + 0x68) < 0x2)
    {
        if (gAlarmTimer != 0x0)
        {
            if (gCurrentSprite.workVariable2)
            {
                gCurrentSprite.workVariable2--;
                if (gCurrentSprite.workVariable2 == 0x0 && gCurrentSprite.arrayOffset < 0x10)
                {
                    gCurrentSprite.arrayOffset++;
                    gCurrentSprite.workVariable2 = TRUE;
                }
            }
        }
        else if (gCurrentSprite.arrayOffset != 0x8)            
        {
            gCurrentSprite.arrayOffset = 0x8;
            gCurrentSprite.workVariable2 = TRUE;
        }

        TransparencySpriteUpdateBLDALPHA(0x0, gCurrentSprite.arrayOffset, 0x0, 0x10);
    }
}