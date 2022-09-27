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

#define SPOSE_RUNNING 0x0
#define SPOSE_STANDING 0x1
#define SPOSE_TURNING_AROUND 0x2
#define SPOSE_SHOOTING 0x3
#define SPOSE_CROUCHING 0x4
#define SPOSE_TURNING_AROUND_AND_CROUCHING 0x5
#define SPOSE_SHOOTING_AND_CROUCHING 0x6
#define SPOSE_SKIDDING 0x7
#define SPOSE_MIDAIR 0x8
#define SPOSE_TURNING_AROUND_MIDAIR 0x9
#define SPOSE_LANDING 0xA
#define SPOSE_STARTING_SPIN_JUMP 0xB
#define SPOSE_SPINNING 0xC
#define SPOSE_STARTING_WALL_JUMP 0xD
#define SPOSE_SPACE_JUMPING 0xE
#define SPOSE_SCREW_ATTACKING 0xF
#define SPOSE_MORPHING 0x10
#define SPOSE_MORPH_BALL 0x11
#define SPOSE_ROLLING 0x12
#define SPOSE_UNMORPHING 0x13
#define SPOSE_MORPH_BALL_MIDAIR 0x14
#define SPOSE_HANGING_ON_LEDGE 0x15
#define SPOSE_TURNING_TO_AIM_WHILE_HANGING 0x16
#define SPOSE_HIDING_ARM_CANNON_WHILE_HANGING 0x17
#define SPOSE_AIMING_WHILE_HANGING 0x18
#define SPOSE_SHOOTING_WHILE_HANGING 0x19
#define SPOSE_PULLING_YOURSELF_UP_FROM_HANGING 0x1A
#define SPOSE_PULLING_YOURSELF_FORWARD_FROM_HANGING 0x1B
#define SPOSE_PULLING_YOURSELF_INTO_A_MORPH_BALL_TUNNEL 0x1C
#define SPOSE_USING_AN_ELEVATOR 0x1D
#define SPOSE_FACING_THE_FOREGROUND 0x1E
#define SPOSE_TURNING_FROM_FACING_THE_FOREGROUND 0x1F
#define SPOSE_GRABBED_BY_CHOZO_STATUE 0x20
#define SPOSE_DELAY_BEFORE_SHINESPARKING 0x21
#define SPOSE_SHINESPARKING 0x22
#define SPOSE_SHINESPARK_COLLISION 0x23
#define SPOSE_DELAY_AFTER_SHINESPARKING 0x24
#define SPOSE_DELAY_BEFORE_BALLSPARKING 0x25
#define SPOSE_BALLSPARKING 0x26
#define SPOSE_BALLSPARK_COLLISION 0x27
#define SPOSE_ON_ZIPLINE 0x28
#define SPOSE_SHOOTING_ON_ZIPLINE 0x29
#define SPOSE_TURNING_ON_ZIPLINE 0x2A
#define SPOSE_MORPH_BALL_ON_ZIPLINE 0x2B
#define SPOSE_SAVING_LOADING_GAME 0x2C
#define SPOSE_DOWNLOADING_MAP_DATA 0x2D
#define SPOSE_TURNING_AROUND_TO_DOWNLOAD_MAP_DATA 0x2E
#define SPOSE_GETTING_HURT 0x2F
#define SPOSE_GETTING_KNOCKED_BACK 0x30
#define SPOSE_GETTING_HURT_IN_MORPH_BALL 0x31
#define SPOSE_GETTING_KNOCKED_BACK_IN_MORPH_BALL 0x32
#define SPOSE_DYING 0x33
#define SPOSE_CROUCHING_TO_CRAWL 0x34
#define SPOSE_CRAWLING_STOPPED 0x35
#define SPOSE_STARTING_TO_CRAWL 0x36
#define SPOSE_CRAWLING 0x37
#define SPOSE_UNCROUCHING_FROM_CRAWLING 0x38
#define SPOSE_TURNING_AROUND_WHILE_CRAWLING 0x39
#define SPOSE_SHOOTING_WHILE_CRAWLING 0x3A
#define SPOSE_UNCROUCHING_SUITLESS 0x3B
#define SPOSE_CROUCHING_SUITLESS 0x3C
#define SPOSE_GRABBING_A_LEDGE_SUITLESS 0x3D
#define SPOSE_FACING_THE_BACKGROUND_SUITLESS 0x3E
#define SPOSE_TURNING_FROM_FACING_THE_BACKGROUND_SUITLESS 0x3F
#define SPOSE_ACTIVATING_ZIPLINES 0x40
#define SPOSE_IN_ESCAPE_SHIP 0x41
#define SPOSE_TURNING_TO_ENTER_ESCAPE_SHIP 0x42
#define SPOSE_KNOCKBACK_REQUEST 0xF9
#define SPOSE_HURT_REQUEST 0xFA
#define SPOSE_LANDING_REQUEST 0xFD
#define SPOSE_UPDATE_JUMP_VELOCITY_REQUEST 0xFE
#define SPOSE_NONE 0xFF

#define STANDING_GROUND 0x0
#define STANDING_ENEMY 0x1
#define STANDING_MIDAIR 0x2
#define STANDING_NOT_IN_CONTROL 0x3
#define STANDING_FORCED_POSE 0x4
#define STANDING_HANGING 0x5
#define STANDING_INVALID 0xFF

#define ACD_FORWARD 0x0
#define ACD_DIAGONALLY_UP 0x1
#define ACD_DIAGONALLY_DOWN 0x2
#define ACD_UP 0x3
#define ACD_DOWN 0x4
#define ACD_NONE 0x5

#define SLOPE_NONE 0x0
#define SLOPE_STEEP 0x1
#define SLOPE_SLIGHT 0x2
#define SLOPE_LEFT 0x10
#define SLOPE_RIGHT 0x20

#define HDMOVING_NONE 0x0
#define HDMOVING_LEFT 0x1
#define HDMOVING_RIGHT 0x2

#define VDMOVING_NONE 0x0
#define VDMOVING_UP 0x1
#define VDMOVING_DOWN 0x2

#define ENV_EFFECT_NONE 0x0
#define ENV_EFFECT_RUNNING_ON_WET_GROUND 0x1
#define ENV_EFFECT_RUNNING_ON_DUSTY_GROUND 0x2
#define ENV_EFFECT_RUNNING_ON_VERY_DUSTY_GROUND 0x3
#define ENV_EFFECT_GOING_OUT_OF_WATER 0x4
#define ENV_EFFECT_RUNNING_INTO_WATER 0x5
#define ENV_EFFECT_GOING_OUT_OF_LAVA 0x6
#define ENV_EFFECT_RUNNING_INTO_LAVA 0x7
#define ENV_EFFECT_GOING_OUT_OF_ACID 0x8
#define ENV_EFFECT_RUNNING_INTO_ACID 0x9
#define ENV_EFFECT_TAKING_DAMAGE_IN_LAVA 0xA
#define ENV_EFFECT_TAKING_DAMAGE_IN_ACID 0xB
#define ENV_EFFECT_LANDING_ON_WET_GROUND 0xC
#define ENV_EFFECT_LANDING_ON_BUBBLY_GROUND 0xD
#define ENV_EFFECT_LANDING_ON_DUSTY_GROUND 0xE
#define ENV_EFFECT_LANDING_ON_VERY_DUSTY_GROUND 0xF
#define ENV_EFFECT_SKIDDING_ON_WET_GROUND 0x10
#define ENV_EFFECT_SKIDDING_ON_DUSTY_GROUND 0x11
#define ENV_EFFECT_BREATHING_BUBBLES 0x12

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


#define FORCED_MOVEMENT_UPWARDS_SHINESPARK 0x0
#define FORCED_MOVEMENT_SIDEWARDS_SHINESPARK 0x1
#define FORCED_MOVEMENT_CROUCHING_ARM_CANNON_UP 0x1
#define FORCED_MOVEMENT_DIAGONAL_SHINESPARK 0x2
#define FORCED_MOVEMENT_LAUNCHED_BY_CANNON 0xF0

#define FORCED_MOVEMENT_BOMB_JUMP 0x0
#define FORCED_MOVEMENT_BOMB_JUMP_RIGHT 0xA
#define FORCED_MOVEMENT_BOMB_JUMP_UP 0xB
#define FORCED_MOVEMENT_BOMB_JUMP_LEFT 0xC
#define FORCED_MOVEMENT_BOMB_JUMP_ABOVE 0x80

#define FORCED_MOVEMENT_SHOOTING_WHILE_SPINNING 0x0
#define FORCED_MOVEMENT_SPIN_BREAK 0x2
#define FORCED_MOVEMENT_STARTING_SPIN_RUNNING 0x1


#define SCREW_SPEED_FLAG_NONE 0x0
#define SCREW_SPEED_FLAG_SHINESPARKING 0x1
#define SCREW_SPEED_FLAG_SPEEDBOOSTING 0x1
#define SCREW_SPEED_FLAG_SCREW_ATTACKING 0x1
#define SCREW_SPEED_FLAG_STORING_SHINESPARK 0x8