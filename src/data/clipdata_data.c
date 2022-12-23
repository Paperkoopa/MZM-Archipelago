#include "data/clipdata_data.h"
#include "macros.h"

#include "constants/clipdata.h"
#include "constants/connection.h"
#include "constants/room.h"

const u16 sMovementClipdataValues[16] = {
    [CLIP_BEHAVIOR_AIR_SOLID] = CLIPDATA_MOVEMENT_NONE,
    [CLIP_BEHAVIOR_ELEVATOR_DOWN] = CLIPDATA_MOVEMENT_ELEVATOR_DOWN_BLOCK,
    [CLIP_BEHAVIOR_ELEVATOR_UP] = CLIPDATA_MOVEMENT_ELEVATOR_UP_BLOCK,
    [CLIP_BEHAVIOR_DOOR_TRANSITION] = CLIPDATA_MOVEMENT_NONE,
    [CLIP_BEHAVIOR_VERTICAL_UP_TRANSITION] = CLIPDATA_MOVEMENT_NONE,
    [CLIP_BEHAVIOR_VERTICAL_DOWN_TRANSITION] = CLIPDATA_MOVEMENT_NONE,
    [CLIP_BEHAVIOR_NON_POWER_GRIP] = CLIPDATA_MOVEMENT_NON_POWER_GRIP,
    [CLIP_BEHAVIOR_STOP_ENEMY_SOLID] = CLIPDATA_MOVEMENT_STOP_ENEMY_BLOCK_SOLID,
    [CLIP_BEHAVIOR_SPACE_PIRATE_ZONELINE] = CLIPDATA_MOVEMENT_SPACE_PIRATE_ZONELINE
};

const u16 sHazardsDefinitions[8][2] = {
    [EFFECT_NONE] = { HAZARD_TYPE_NONE, HAZARD_TYPE_NONE },
    [EFFECT_WATER] = { HAZARD_TYPE_NONE, HAZARD_TYPE_WATER },
    [EFFECT_STRONG_LAVA] = { HAZARD_TYPE_NONE, HAZARD_TYPE_STRONG_LAVA },
    [EFFECT_WEAK_LAVA] = { HAZARD_TYPE_NONE, HAZARD_TYPE_WEAK_LAVA },
    [EFFECT_STRONG_LAVA_HEAT_HAZE] = { HAZARD_TYPE_HEAT, HAZARD_TYPE_STRONG_LAVA },
    [EFFECT_ACID] = { HAZARD_TYPE_NONE, HAZARD_TYPE_ACID },
    [EFFECT_SNOWFLAKES_COLD_KNOCKBACK] = { HAZARD_TYPE_COLD_KNOCKBACK, HAZARD_TYPE_NONE },
    [EFFECT_SNOWFLAKES_COLD] = { HAZARD_TYPE_COLD, HAZARD_TYPE_NONE }
};

const u16 sHazardClipdataValues[4] = {
    [BEHAVIOR_TO_HAZARD(CLIP_BEHAVIOR_WATER)] = HAZARD_TYPE_WATER,
    [BEHAVIOR_TO_HAZARD(CLIP_BEHAVIOR_STRONG_LAVA)] = HAZARD_TYPE_STRONG_LAVA,
    [BEHAVIOR_TO_HAZARD(CLIP_BEHAVIOR_WEAK_LAVA)] = HAZARD_TYPE_WEAK_LAVA,
    [BEHAVIOR_TO_HAZARD(CLIP_BEHAVIOR_ACID)] = HAZARD_TYPE_ACID,
};

const u8 sGroundEffectsClipdataValues[8] = {
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_WET_GROUND)] = GROUND_EFFECT_WET_GROUND,
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_DUSTY_GROUND)] = GROUND_EFFECT_DUSTY_GROUND,
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED)] = GROUND_EFFECT_UNKNOWN,
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_BUBBLY_GROUND)] = GROUND_EFFECT_BUBBLY_GROUND,
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_VERY_DUSTY_GROUND)] = GROUND_EFFECT_VERY_DUSTY_GROUND,
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED1)] = GROUND_EFFECT_NONE,
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED2)] = GROUND_EFFECT_NONE,
    [BEHAVIOR_TO_GROUND_EFFECT(CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED3)] = GROUND_EFFECT_NONE,
};

const struct ElevatorPair sElevatorRoomPairs[9] = {
    [0] = {
        .area1 = 11,
        .room1 = 0,
        .mapX1 = 0,
        .mapY1 = 0,
        .area2 = 11,
        .room2 = 0,
        .mapX2 = 0,
        .mapY2 = 0,
    },
    [1] = {
        .area1 = AREA_CRATERIA,
        .room1 = 3,
        .mapX1 = 14,
        .mapY1 = 10,
        .area2 = AREA_BRINSTAR,
        .room2 = 0,
        .mapX2 = 0,
        .mapY2 = 15
    },
    [2] = {
        .area1 = AREA_BRINSTAR,
        .room1 = 26,
        .mapX1 = 22,
        .mapY1 = 12,
        .area2 = AREA_NORFAIR,
        .room2 = 0,
        .mapX2 = 14,
        .mapY2 = 4
    },
    [3] = {
        .area1 = AREA_BRINSTAR,
        .room1 = 8,
        .mapX1 = 6,
        .mapY1 = 18,
        .area2 = AREA_KRAID,
        .room2 = 0,
        .mapX2 = 9,
        .mapY2 = 5
    },
    [4] = {
        .area1 = AREA_NORFAIR,
        .room1 = 35,
        .mapX1 = 17,
        .mapY1 = 13,
        .area2 = AREA_RIDLEY,
        .room2 = 0,
        .mapX2 = 15,
        .mapY2 = 2
    },
    [5] = {
        .area1 = AREA_BRINSTAR,
        .room1 = 11,
        .mapX1 = 1,
        .mapY1 = 3,
        .area2 = AREA_TOURIAN,
        .room2 = 0,
        .mapX2 = 20,
        .mapY2 = 3
    },
    [6] = {
        .area1 = AREA_CRATERIA,
        .room1 = 4,
        .mapX1 = 3,
        .mapY1 = 12,
        .area2 = AREA_TOURIAN,
        .room2 = 5,
        .mapX2 = 18,
        .mapY2 = 2
    },
    [7] = {
        .area1 = AREA_CRATERIA,
        .room1 = 6,
        .mapX1 = 15,
        .mapY1 = 7,
        .area2 = AREA_NORFAIR,
        .room2 = 2,
        .mapX2 = 5,
        .mapY2 = 4
    },
    [8] = {
        .area1 = AREA_CRATERIA,
        .room1 = 12,
        .mapX1 = 3,
        .mapY1 = 12,
        .area2 = AREA_TOURIAN,
        .room2 = 8,
        .mapX2 = 18,
        .mapY2 = 2
    },
};

const u8 sScroll_Empty[11] = {
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX,
    UCHAR_MAX
};

const struct Unk_3005714 sUnk_8345988[3] = {
    [0] = {
        .unk0 = -8,
        .unk2 = 8,
        .unk4 = -8,
        .unk6 = 8
    },
    [1] = {
        .unk0 = -4,
        .unk2 = 4,
        .unk4 = -4,
        .unk6 = 4
    },
    [2] = {
        .unk0 = -48,
        .unk2 = 48,
        .unk4 = -48,
        .unk6 = 48
    }
};

