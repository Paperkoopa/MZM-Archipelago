#ifndef SAMUS_CONSTANTS_H
#define SAMUS_CONSTANTS_H

#define BBF_NONE 0x0
#define BBF_LONG_BEAM 0x1
#define BBF_ICE_BEAM 0x2
#define BBF_WAVE_BEAM 0x4
#define BBF_PLASMA_BEAM 0x8
#define BBF_CHARGE_BEAM 0x10
#define BBF_BOMBS 0x80

#define SMF_NONE 0x0
#define SMF_HIGH_JUMP 0x1
#define SMF_SPEEDBOOSTER 0x2
#define SMF_SPACE_JUMP 0x4
#define SMF_SCREW_ATTACK 0x8
#define SMF_VARIA_SUIT 0x10
#define SMF_GRAVITY_SUIT 0x20
#define SMF_MORPH_BALL 0x40
#define SMF_POWER_GRIP 0x80

#define SMF_ALL_SUITS (SMF_VARIA_SUIT | SMF_GRAVITY_SUIT)

#define SUIT_NORMAL 0x0
#define SUIT_FULLY_POWERED 0x1
#define SUIT_SUITLESS 0x2

#define DIAG_AIM_NONE 0x0
#define DIAG_AIM_UP 0x1
#define DIAG_AIM_DOWN 0x2

#define WH_NONE 0x0
#define WH_MISSILE 0x1
#define WH_SUPER_MISSILE 0x2
#define WH_POWER_BOMB 0x4

enum SamusPose {
    SPOSE_RUNNING,
    SPOSE_STANDING,
    SPOSE_TURNING_AROUND,
    SPOSE_SHOOTING,
    SPOSE_CROUCHING,
    SPOSE_TURNING_AROUND_AND_CROUCHING,
    SPOSE_SHOOTING_AND_CROUCHING,
    SPOSE_SKIDDING,
    SPOSE_MIDAIR,
    SPOSE_TURNING_AROUND_MIDAIR,
    SPOSE_LANDING,
    SPOSE_STARTING_SPIN_JUMP,
    SPOSE_SPINNING,
    SPOSE_STARTING_WALL_JUMP,
    SPOSE_SPACE_JUMPING,
    SPOSE_SCREW_ATTACKING,
    SPOSE_MORPHING,
    SPOSE_MORPH_BALL,
    SPOSE_ROLLING,
    SPOSE_UNMORPHING,
    SPOSE_MORPH_BALL_MIDAIR,
    SPOSE_HANGING_ON_LEDGE,
    SPOSE_TURNING_TO_AIM_WHILE_HANGING,
    SPOSE_HIDING_ARM_CANNON_WHILE_HANGING,
    SPOSE_AIMING_WHILE_HANGING,
    SPOSE_SHOOTING_WHILE_HANGING,
    SPOSE_PULLING_YOURSELF_UP_FROM_HANGING,
    SPOSE_PULLING_YOURSELF_FORWARD_FROM_HANGING,
    SPOSE_PULLING_YOURSELF_INTO_A_MORPH_BALL_TUNNEL,
    SPOSE_USING_AN_ELEVATOR,
    SPOSE_FACING_THE_FOREGROUND,
    SPOSE_TURNING_FROM_FACING_THE_FOREGROUND,
    SPOSE_GRABBED_BY_CHOZO_STATUE,
    SPOSE_DELAY_BEFORE_SHINESPARKING,
    SPOSE_SHINESPARKING,
    SPOSE_SHINESPARK_COLLISION,
    SPOSE_DELAY_AFTER_SHINESPARKING,
    SPOSE_DELAY_BEFORE_BALLSPARKING,
    SPOSE_BALLSPARKING,
    SPOSE_BALLSPARK_COLLISION,
    SPOSE_ON_ZIPLINE,
    SPOSE_SHOOTING_ON_ZIPLINE,
    SPOSE_TURNING_ON_ZIPLINE,
    SPOSE_MORPH_BALL_ON_ZIPLINE,
    SPOSE_SAVING_LOADING_GAME,
    SPOSE_DOWNLOADING_MAP_DATA,
    SPOSE_TURNING_AROUND_TO_DOWNLOAD_MAP_DATA,
    SPOSE_GETTING_HURT,
    SPOSE_GETTING_KNOCKED_BACK,
    SPOSE_GETTING_HURT_IN_MORPH_BALL,
    SPOSE_GETTING_KNOCKED_BACK_IN_MORPH_BALL,
    SPOSE_DYING,
    SPOSE_CROUCHING_TO_CRAWL,
    SPOSE_CRAWLING_STOPPED,
    SPOSE_STARTING_TO_CRAWL,
    SPOSE_CRAWLING,
    SPOSE_UNCROUCHING_FROM_CRAWLING,
    SPOSE_TURNING_AROUND_WHILE_CRAWLING,
    SPOSE_SHOOTING_WHILE_CRAWLING,
    SPOSE_UNCROUCHING_SUITLESS,
    SPOSE_CROUCHING_SUITLESS,
    SPOSE_GRABBING_A_LEDGE_SUITLESS,
    SPOSE_FACING_THE_BACKGROUND_SUITLESS,
    SPOSE_TURNING_FROM_FACING_THE_BACKGROUND_SUITLESS,
    SPOSE_ACTIVATING_ZIPLINES,
    SPOSE_IN_ESCAPE_SHIP,
    SPOSE_TURNING_TO_ENTER_ESCAPE_SHIP,

    SPOSE_END,

    // Sub frame poses
    SPOSE_KNOCKBACK_REQUEST = 0xF9,
    SPOSE_HURT_REQUEST,
    SPOSE_FB,
    SPOSE_FC,
    SPOSE_LANDING_REQUEST,
    SPOSE_MID_AIR_REQUEST,

    SPOSE_NONE = UCHAR_MAX
};

enum StandingStatus {
    STANDING_GROUND,
    STANDING_ENEMY,
    STANDING_MIDAIR,
    STANDING_NOT_IN_CONTROL,
    STANDING_FORCED_POSE,
    STANDING_HANGING,

    STANDING_INVALID = UCHAR_MAX
};

enum ArmCannonDirection {
    ACD_FORWARD,
    ACD_DIAGONALLY_UP,
    ACD_DIAGONALLY_DOWN,
    ACD_UP,
    ACD_DOWN,
    ACD_NONE,

    ACD_END
};

#define SLOPE_NONE 0x0
#define SLOPE_STEEP 0x1
#define SLOPE_SLIGHT 0x2

#define HDMOVING_NONE 0x0
#define HDMOVING_LEFT 0x1
#define HDMOVING_RIGHT 0x2

#define VDMOVING_NONE 0x0
#define VDMOVING_UP 0x1
#define VDMOVING_DOWN 0x2

enum EnvEffect {
    ENV_EFFECT_NONE,
    ENV_EFFECT_RUNNING_ON_WET_GROUND,
    ENV_EFFECT_RUNNING_ON_DUSTY_GROUND,
    ENV_EFFECT_RUNNING_ON_VERY_DUSTY_GROUND,
    ENV_EFFECT_GOING_OUT_OF_WATER,
    ENV_EFFECT_RUNNING_INTO_WATER,
    ENV_EFFECT_GOING_OUT_OF_LAVA,
    ENV_EFFECT_RUNNING_INTO_LAVA,
    ENV_EFFECT_GOING_OUT_OF_ACID,
    ENV_EFFECT_RUNNING_INTO_ACID,
    ENV_EFFECT_TAKING_DAMAGE_IN_LAVA,
    ENV_EFFECT_TAKING_DAMAGE_IN_ACID,
    ENV_EFFECT_LANDING_ON_WET_GROUND,
    ENV_EFFECT_LANDING_ON_BUBBLY_GROUND,
    ENV_EFFECT_LANDING_ON_DUSTY_GROUND,
    ENV_EFFECT_LANDING_ON_VERY_DUSTY_GROUND,
    ENV_EFFECT_SKIDDING_ON_WET_GROUND,
    ENV_EFFECT_SKIDDING_ON_DUSTY_GROUND,
    ENV_EFFECT_BREATHING_BUBBLES,

    ENV_EFFECT_END
};

#define ARM_CANNON_OAM_ORDER_NONE 0
#define ARM_CANNON_OAM_ORDER_IN_FRONT (1 << 12)
#define ARM_CANNON_OAM_ORDER_BEHIND (1 << 13)


#define WANTING_RUNNING_EFFECT 0x0
#define WANTING_RUNNING_EFFECT_ 0x1
#define WANTING_LANDING_EFFECT 0x2
#define WANTING_GOING_OUT_OF_LIQUID_EFFECT 0x3
#define WANTING_RUNNING_OUT_OF_LIQUID_EFFECT 0x4
#define WANTING_BREATHING_BUBBLES 0x5
#define WANTING_SKIDDING_EFFECT 0x6
#define WANTING_RUNNING_ON_WET_GROUND 0x7

#define DESTRUCTING_ACTION_NONE 0x0
#define DESTRUCTING_ACTION_SPEED 0x1
#define DESTRUCTING_ACTION_SCREW 0x2
#define DESTRUCTING_ACTION_SPEED_SCREW 0x3
#define DESTRUCTING_ACTION_SPEED_ON_GROUND 0x4

#define SAMUS_ANIM_STATE_NONE 0x0
#define SAMUS_ANIM_STATE_SUB_ENDED 0x1
#define SAMUS_ANIM_STATE_ENDED 0x2

// Probably not 100% true
#define SAMUS_COLLISION_DETECTION_NONE 0x0
#define SAMUS_COLLISION_DETECTION_LEFT_MOST 0x1
#define SAMUS_COLLISION_DETECTION_MIDDLE_LEFT 0x2
#define SAMUS_COLLISION_DETECTION_MIDDLE_RIGHT 0x4
#define SAMUS_COLLISION_DETECTION_RIGHT_MOST 0x8
#define SAMUS_COLLISION_DETECTION_SLOPE 0x80

#define SAMUS_COLLISION_DETECTION_MIDDILE (SAMUS_COLLISION_DETECTION_MIDDLE_LEFT | SAMUS_COLLISION_DETECTION_MIDDLE_RIGHT)
#define SAMUS_COLLISION_DETECTION_LEFT (SAMUS_COLLISION_DETECTION_LEFT_MOST | SAMUS_COLLISION_DETECTION_MIDDLE_LEFT)
#define SAMUS_COLLISION_DETECTION_RIGHT (SAMUS_COLLISION_DETECTION_RIGHT_MOST | SAMUS_COLLISION_DETECTION_MIDDLE_RIGHT)


#define FORCED_MOVEMENT_UPWARDS_SHINESPARK 0x0
#define FORCED_MOVEMENT_SIDEWARDS_SHINESPARK 0x1
#define FORCED_MOVEMENT_DIAGONAL_SHINESPARK 0x2
#define FORCED_MOVEMENT_LAUNCHED_BY_CANNON 0xF0

#define FORCED_MOVEMENT_CROUCHING_ARM_CANNON_UP 0x1

#define FORCED_MOVEMENT_BOMB_JUMP 0x0
#define FORCED_MOVEMENT_BOMB_JUMP_RIGHT 0xA
#define FORCED_MOVEMENT_BOMB_JUMP_UP 0xB
#define FORCED_MOVEMENT_BOMB_JUMP_LEFT 0xC
#define FORCED_MOVEMENT_BOMB_JUMP_ABOVE 0x80

#define FORCED_MOVEMENT_SHOOTING_WHILE_SPINNING 0x0

#define FORCED_MOVEMENT_MORPH_BALL_BOUNCE_BEFORE_JUMP 0x14

#define FORCED_MOVEMENT_MID_AIR_FALL 0
#define FORCED_MOVEMENT_MID_AIR_JUMP 1
#define FORCED_MOVEMENT_MID_AIR_CARRY 2

#define FORCED_MOVEMENT_MORPH_BALL_BOUNCE_AFTER_FALL 1

#define FORCED_MOVEMENT_DAMAGED_BY_RUINS_TEST UCHAR_MAX

#define SAMUS_HITBOX_TYPE_STANDING 0
#define SAMUS_HITBOX_TYPE_CROUCHED 1
#define SAMUS_HITBOX_TYPE_MORPHED 2
#define SAMUS_HITBOX_TYPE_ZIPLINE 3

#define SAMUS_HITBOX_LEFT 0
#define SAMUS_HITBOX_RIGHT 1
#define SAMUS_HITBOX_TOP 2

#define SCREW_SPEED_FLAG_NONE 0
#define SCREW_SPEED_FLAG_SHINESPARKING 1
#define SCREW_SPEED_FLAG_SPEEDBOOSTING 1
#define SCREW_SPEED_FLAG_SCREW_ATTACKING 1
#define SCREW_SPEED_FLAG_STORING_SHINESPARK 8

#define SAMUS_X_ACCELERATION 8
#define SAMUS_X_VELOCITY_CAP 96
#define SAMUS_X_MID_AIR_VELOCITY_CAP 64
#define SAMUS_X_MID_AIR_ACCELERATION 8
#define SAMUS_X_MID_AIR_MORPHED_VELOCITY_CAP 48
#define SAMUS_X_SPEEDBOOST_VELOCITY_CAP (SUB_PIXEL_TO_VELOCITY(QUARTER_BLOCK_SIZE + PIXEL_SIZE))

#define SAMUS_Y_ACCELERATION 10
#define SAMUS_Y_POSITIVE_VELOCITY_CAP 192
#define SAMUS_Y_NEGATIVE_VELOCITY_CAP 128
#define SAMUS_Y_SLOWED_VELOCITY_CAP 40

#define SAMUS_DIAGONAL_SHINESPARK_X_VELOCITY 160
#define SAMUS_DIAGONAL_SHINESPARK_Y_VELOCITY 96

#define SAMUS_SIDEWARD_SHINESPARK_X_VELOCITY 192

#define SAMUS_ELEVATOR_SPEED (PIXEL_SIZE * 6)

#define SAMUS_HIGH_JUMP_VELOCITY (SUB_PIXEL_TO_VELOCITY(QUARTER_BLOCK_SIZE + PIXEL_SIZE * 3 + ONE_SUB_PIXEL))
#define SAMUS_LOW_JUMP_VELOCITY (SUB_PIXEL_TO_VELOCITY(QUARTER_BLOCK_SIZE + EIGHTH_BLOCK_SIZE))
#define SAMUS_SUITLESS_JUMP_VELOCITY (SUB_PIXEL_TO_VELOCITY(QUARTER_BLOCK_SIZE + PIXEL_SIZE * 2 + PIXEL_SIZE / 2 + ONE_SUB_PIXEL / 2.f))
#define SAMUS_MORPH_BALL_JUMP_VELOCITY (SUB_PIXEL_TO_VELOCITY(QUARTER_BLOCK_SIZE + PIXEL_SIZE * 2 + PIXEL_SIZE / 2 + ONE_SUB_PIXEL / 2.f))

#define SAMUS_BOMB_BOUNCE_X_VELOCITY (SUB_PIXEL_TO_VELOCITY(PIXEL_SIZE + PIXEL_SIZE / 2))
#define SAMUS_BOMB_BOUNCE_Y_VELOCITY (SUB_PIXEL_TO_VELOCITY(QUARTER_BLOCK_SIZE + PIXEL_SIZE + ONE_SUB_PIXEL / 2.f))

#define SAMUS_ITEM_PMT (60 * 16 + 60 / 3 * 2)

#define SHINESPARK_TIMER_MAX (60 * 3)

#define SAMUS_HAZARD_DAMAGE_TYPE_NONE 0
#define SAMUS_HAZARD_DAMAGE_TYPE_LIQUID 1
#define SAMUS_HAZARD_DAMAGE_TYPE_ROOM 15

#endif /* SAMUS_CONSTANTS_H */
