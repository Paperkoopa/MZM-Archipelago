#include "macros.h"

#include "structs/rando.h"

#include "constants/block.h"
#include "constants/rando.h"
#include "constants/text.h"

const u8 sItemMessages[] = {
    [ITEM_ENERGY_TANK] = MESSAGE_ENERGY_TANK_ACQUIRED,
    [ITEM_MISSILE_TANK] = MESSAGE_MISSILE_TANK_ACQUIRED,
    [ITEM_SUPER_MISSILE_TANK] = MESSAGE_SUPER_MISSILE_TANK_ACQUIRED,
    [ITEM_POWER_BOMB_TANK] = MESSAGE_POWER_BOMB_TANK_ACQUIRED,
    [ITEM_LONG_BEAM] = MESSAGE_LONG_BEAM,
    [ITEM_CHARGE_BEAM] = MESSAGE_CHARGE_BEAM,
    [ITEM_ICE_BEAM] = MESSAGE_ICE_BEAM,
    [ITEM_WAVE_BEAM] = MESSAGE_WAVE_BEAM,
    [ITEM_PLASMA_BEAM] = MESSAGE_PLASMA_BEAM,
    [ITEM_BOMB] = MESSAGE_BOMB,
    [ITEM_VARIA_SUIT] = MESSAGE_VARIA_SUIT,
    [ITEM_GRAVITY_SUIT] = MESSAGE_GRAVITY_SUIT,
    [ITEM_MORPH_BALL] = MESSAGE_MORPH_BALL,
    [ITEM_SPEED_BOOSTER] = MESSAGE_SPEED_BOOSTER,
    [ITEM_HIJUMP_BOOTS] = MESSAGE_HIGH_JUMP,
    [ITEM_SCREW_ATTACK] = MESSAGE_SCREW_ATTACK,
    [ITEM_SPACE_JUMP] = MESSAGE_SPACE_JUMP,
    [ITEM_POWER_GRIP] = MESSAGE_POWER_GRIP,
    [ITEM_NOTHING] = MESSAGE_NOTHING_ACQUIRED,
    [ITEM_AP_FILLER] = MESSAGE_DUMMY,
    [ITEM_AP_PROGRESSION] = MESSAGE_DUMMY,
    [ITEM_AP_USEFUL] = MESSAGE_DUMMY,
    [ITEM_AP_TRAP] = MESSAGE_DUMMY,
};

const u8 sRegionLocationOffsets[][2] = {
    [AREA_BRINSTAR] = {0, RC_BRINSTAR_MAX},
    [AREA_KRAID] = {RC_BRINSTAR_MAX, RC_KRAID_MAX},
    [AREA_NORFAIR] = {RC_KRAID_MAX, RC_NORFAIR_MAX},
    [AREA_RIDLEY] = {RC_NORFAIR_MAX, RC_RIDLEY_MAX},
    [AREA_TOURIAN] = {RC_RIDLEY_MAX, RC_TOURIAN_MAX},
    [AREA_CRATERIA] = {RC_TOURIAN_MAX, RC_CRATERIA_MAX},
    [AREA_CHOZODIA] = {RC_CRATERIA_MAX, RC_CHOZODIA_MAX},
};

const struct ItemInfo sItemLocations[RC_MAX] = {
    [RC_BRINSTAR_MORPH_BALL] = {0, ITEM_TYPE_ABILITY, 12, 27},
    [RC_BRINSTAR_MORPH_BALL_CANNON] = {1, ITEM_TYPE_MISSILE, 13, 7},
    [RC_BRINSTAR_LONG_BEAM] = {5, ITEM_TYPE_ABILITY, 8, 7},
    [RC_BRINSTAR_CEILING_ETANK] = {2, ITEM_TYPE_ENERGY, 28, 2},
    [RC_BRINSTAR_MISSILE_ABOVE_SUPER] = {41, ITEM_TYPE_MISSILE, 5, 18},
    [RC_BRINSTAR_SUPER_MISSILE] = {41, ITEM_TYPE_SUPER_MISSILE, 5, 25},
    [RC_BRINSTAR_TOP_MISSILE] = {29, ITEM_TYPE_MISSILE, 4, 10},
    [RC_BRINSTAR_SPEED_BOOSTER_SHORTCUT_MISSILE] = {40, ITEM_TYPE_MISSILE, 7, 4},
    [RC_BRINSTAR_VARIA_SUIT] = {27, ITEM_TYPE_ABILITY, 8, 7},
    [RC_BRINSTAR_WORM_DROP] = {12, ITEM_TYPE_ABILITY, 19, 7},
    [RC_BRINSTAR_VARIA_ETANK] = {23, ITEM_TYPE_ENERGY, 18, 16},
    [RC_BRINSTAR_FIRST_MISSILE] = {12, ITEM_TYPE_MISSILE, 54, 6},
    [RC_BRINSTAR_HIVE_MISSILE] = {15, ITEM_TYPE_MISSILE, 4, 6},
    [RC_BRINSTAR_UNDER_BRIDGE] = {14, ITEM_TYPE_MISSILE, 14, 23},
    [RC_BRINSTAR_POST_HIVE_MISSILE] = {19, ITEM_TYPE_MISSILE, 11, 10},
    [RC_BRINSTAR_UPPER_PILLAR_MISSILE] = {21, ITEM_TYPE_MISSILE, 39, 5},
    [RC_BRINSTAR_MISSILE_BEHIND_BOMB] = {25, ITEM_TYPE_MISSILE, 11, 5},
    [RC_BRINSTAR_BOMB] = {25, ITEM_TYPE_ABILITY, 23, 6},
    [RC_BRINSTAR_POST_HIVE_ETANK] = {19, ITEM_TYPE_ENERGY, 39, 6},

    [RC_KRAID_GIANT_HOPPERS_ROOM_MISSILE] = {26, ITEM_TYPE_MISSILE, 7, 10},
    [RC_KRAID_SAVE_ROOM_MISSILE] = {7, ITEM_TYPE_MISSILE, 38, 14},
    [RC_KRAID_CRUMBLE_BLOCK_MISSILE] = {10, ITEM_TYPE_MISSILE, 9, 9},
    [RC_KRAID_BORING_ROOM] = {21, ITEM_TYPE_MISSILE, 20, 3},
    [RC_KRAID_SPACE_JUMP] = {33, ITEM_TYPE_ABILITY, 12, 7},
    [RC_KRAID_LAVA_MISSILE] = {8, ITEM_TYPE_MISSILE, 74, 20},
    [RC_KRAID_SPEED_BOOSTER] = {34, ITEM_TYPE_ABILITY, 7, 6},
    [RC_KRAID_WORM_MISSILE] = {38, ITEM_TYPE_MISSILE, 5, 4},
    [RC_KRAID_PILLAR_MISSILE] = {1, ITEM_TYPE_MISSILE, 24, 4},
    [RC_KRAID_LAVA_FALL] = {17, ITEM_TYPE_MISSILE, 2, 4},
    [RC_KRAID_WORM_ETANK] = {4, ITEM_TYPE_ENERGY, 22, 6},
    [RC_KRAID_SPEED_JUMP] = {9, ITEM_TYPE_ENERGY, 60, 9},
    [RC_KRAID_BALL_CANNON] = {2, ITEM_TYPE_MISSILE, 9, 33},

    [RC_NORFAIR_POWER_BOMB] = {55, ITEM_TYPE_POWER_BOMB, 8, 14},
    [RC_NORFAIR_LAVA_MISSILE] = {55, ITEM_TYPE_MISSILE, 30, 23},
    [RC_NORFAIR_SCREW_ATTACK] = {18, ITEM_TYPE_ABILITY, 8, 6},
    [RC_NORFAIR_SCREW_ATTACK_MISSILE] = {17, ITEM_TYPE_MISSILE, 17, 4},
    [RC_NORFAIR_POWER_GRIP_MISSILE] = {1, ITEM_TYPE_MISSILE, 65, 4},
    [RC_NORFAIR_UNDER_ELEVATOR] = {3, ITEM_TYPE_MISSILE, 72, 4},
    [RC_NORFAIR_WAVE_BEAM] = {27, ITEM_TYPE_ABILITY, 8, 7},
    [RC_NORFAIR_BOMB_SUPER_MISSILE] = {38, ITEM_TYPE_SUPER_MISSILE, 5, 6},
    [RC_NORFAIR_BOTTOM_HEATED_FIRST] = {28, ITEM_TYPE_MISSILE, 28, 3},
    [RC_NORFAIR_BOTTOM_HEATED_SECOND] = {28, ITEM_TYPE_MISSILE, 54, 4},
    [RC_NORFAIR_HEATED_ROOM_HIDDEN_MISSILE] = {37, ITEM_TYPE_MISSILE, 21, 3},
    [RC_NORFAIR_SPACE_BOOST_MISSILE] = {32, ITEM_TYPE_MISSILE, 4, 5},
    [RC_NORFAIR_SPACE_BOOST_SUPER_MISSILE] = {32, ITEM_TYPE_SUPER_MISSILE, 45, 3},
    [RC_NORFAIR_ICE_BEAM] = {8, ITEM_TYPE_ABILITY, 22, 7},
    [RC_NORFAIR_HEATED_ROOM_UNDER_ICE_BEAM] = {10, ITEM_TYPE_MISSILE, 11, 4},
    [RC_NORFAIR_HIJUMP] = {13, ITEM_TYPE_ABILITY, 9, 7},
    [RC_NORFAIR_BIG_ROOM] = {4, ITEM_TYPE_MISSILE, 74, 9},
    [RC_NORFAIR_BEHIND_TOP_CHOZO_STATUE] = {47, ITEM_TYPE_MISSILE, 24, 3},
    [RC_NORFAIR_LARVA_ETANK] = {42, ITEM_TYPE_ENERGY, 33, 5},
    [RC_NORFAIR_MAIN_SHAFT_BALL_CANNON] = {5, ITEM_TYPE_MISSILE, 14, 79},
    [RC_NORFAIR_MAIN_SHAFT_BOTTOM] = {5, ITEM_TYPE_MISSILE, 8, 111},

    [RC_RIDLEY_SW_PUZZLE_TOP] = {29, ITEM_TYPE_MISSILE, 24, 3},
    [RC_RIDLEY_SW_PUZZLE_BOTTOM] = {29, ITEM_TYPE_MISSILE, 20, 15},
    [RC_RIDLEY_WEST_PILLAR] = {6, ITEM_TYPE_MISSILE, 8, 33},
    [RC_RIDLEY_ETANK_BEHIND_GRAVITY] = {13, ITEM_TYPE_ENERGY, 8, 7},
    [RC_RIDLEY_GRAVITY_SUIT] = {13, ITEM_TYPE_ABILITY, 22, 9},
    [RC_RIDLEY_FAKE_FLOOR_ETANK] = {4, ITEM_TYPE_ENERGY, 6, 8},
    [RC_RIDLEY_UPPER_BALL_CANNON] = {23, ITEM_TYPE_MISSILE, 8, 4},
    [RC_RIDLEY_LOWER_BALL_CANNON] = {23, ITEM_TYPE_MISSILE, 13, 13},
    [RC_RIDLEY_IMAGO_SUPER_MISSILE] = {19, ITEM_TYPE_SUPER_MISSILE, 7, 21},
    [RC_RIDLEY_MISSILE_ABOVE_SIDEHOPPERS] = {22, ITEM_TYPE_MISSILE, 11, 6},
    [RC_RIDLEY_SIDEHOPPER_SUPER] = {22, ITEM_TYPE_SUPER_MISSILE, 8, 16},
    [RC_RIDLEY_LONG_HALL] = {18, ITEM_TYPE_MISSILE, 72, 6},
    [RC_RIDLEY_PILLAR_MISSILE] = {9, ITEM_TYPE_MISSILE, 9, 4},
    [RC_RIDLEY_BALL_MISSILE] = {10, ITEM_TYPE_MISSILE, 15, 15},
    [RC_RIDLEY_BALL_SUPER] = {10, ITEM_TYPE_SUPER_MISSILE, 27, 6},
    [RC_RIDLEY_SIDEHOPPER_MISSILE] = {17, ITEM_TYPE_MISSILE, 28, 20},
    [RC_RIDLEY_OWL_ETANK] = {14, ITEM_TYPE_ENERGY, 27, 9},
    [RC_RIDLEY_UPPER_RIGHT_CORNER_MISSILE] = {16, ITEM_TYPE_MISSILE, 54, 6},
    [RC_RIDLEY_BOMB_PUZZLE] = {30, ITEM_TYPE_MISSILE, 4, 13},
    [RC_RIDLEY_SPEED_JUMP] = {31, ITEM_TYPE_MISSILE, 42, 7},

    [RC_TOURIAN_LEFT_OF_MOTHER_BRAIN] = {8, ITEM_TYPE_MISSILE, 11, 109},
    [RC_TOURIAN_UNDER_MOTHER_BRAIN] = {7, ITEM_TYPE_POWER_BOMB, 14, 8},

    [RC_CRATERIA_POWER_BOMB] = {5, ITEM_TYPE_POWER_BOMB, 20, 37},
    [RC_CRATERIA_POWER_GRIP] = {12, ITEM_TYPE_ABILITY, 7, 9},
    [RC_CRATERIA_MOAT] = {7, ITEM_TYPE_MISSILE, 3, 27},
    [RC_CRATERIA_STATUE_WATER] = {14, ITEM_TYPE_MISSILE, 8, 10},
    [RC_CRATERIA_PLASMA_BEAM] = {14, ITEM_TYPE_ABILITY, 26, 9},
    [RC_CRATERIA_BALL_SPARK] = {9, ITEM_TYPE_MISSILE, 64, 34},
    [RC_CRATERIA_UPPER_RIGHT_CORNER] = {9, ITEM_TYPE_SUPER_MISSILE, 90, 9},

    [RC_CHOZODIA_CRATERIA_POWER_BOMB] = {34, ITEM_TYPE_POWER_BOMB, 34, 14},
    [RC_CHOZODIA_BOMB_MAZE] = {66, ITEM_TYPE_SUPER_MISSILE, 16, 13},
    [RC_CHOZODIA_ZOOMER_MAZE] = {65, ITEM_TYPE_SUPER_MISSILE, 9, 3},
    [RC_CHOZODIA_FIRST_RUIN_SUPER] = {89, ITEM_TYPE_SUPER_MISSILE, 6, 27},
    [RC_CHOZODIA_CHARLIE_SPARK_MISSILE] = {90, ITEM_TYPE_MISSILE, 56, 24},
    [RC_CHOZODIA_CHARLIE_SPARK_SUPER] = {90, ITEM_TYPE_SUPER_MISSILE, 56, 40},
    [RC_CHOZODIA_OUT_OF_THE_WAY] = {26, ITEM_TYPE_POWER_BOMB, 44, 8},
    [RC_CHOZODIA_GLASS_TUBE_ETANK] = {24, ITEM_TYPE_ENERGY, 10, 13},
    [RC_CHOZODIA_LAVA_SUPER] = {54, ITEM_TYPE_SUPER_MISSILE, 59, 20},
    [RC_CHOZODIA_ORIGINAL_POWER_BOMB] = {47, ITEM_TYPE_POWER_BOMB, 9, 17},
    [RC_CHOZODIA_SECOND_POWER_BOMB] = {49, ITEM_TYPE_POWER_BOMB, 10, 7},
    [RC_CHOZODIA_GLASS_TUBE_POWER_BOMB] = {95, ITEM_TYPE_POWER_BOMB, 24, 6},
    [RC_CHOZODIA_CHARLIE_SPARK] = {78, ITEM_TYPE_ENERGY, 44, 8},
    [RC_CHOZODIA_SHORTCUT_SUPER] = {73, ITEM_TYPE_SUPER_MISSILE, 9, 6},
    [RC_CHOZODIA_WORKBOT_SUPER] = {14, ITEM_TYPE_SUPER_MISSILE, 13, 5},
    [RC_CHOZODIA_SHIP_HULL_SUPER] = {10, ITEM_TYPE_SUPER_MISSILE, 19, 4},
    [RC_CHOZODIA_SPACE_JUMP_ETANK] = {71, ITEM_TYPE_ENERGY, 59, 19},
    [RC_CHOZODIA_HULL_POWER_BOMB] = {87, ITEM_TYPE_POWER_BOMB, 18, 18},
};

const struct Seed sRandoSeed = {
    .playerNumber = 0,
    .playerName = {},
    .seedName = {},

    .options = {
        .unknownItemsAlwaysUsable = FALSE,
    }
};

const struct StartingInventory sRandoStartingInventory = {
    .energyTanks = 0,
    .missileTanks = 0,
    .superMissileTanks = 0,
    .powerBombTanks = 0,
    .beamBombs = 0,
    .suitMisc = 0,
};

const struct PlacedItem sPlacedItems[100] = {};
