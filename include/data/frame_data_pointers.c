#include "oam.h"

#include "sprites/chozo_statue.c"
#include "sprites/crocomire.c"
#include "sprites/unknown_item_chozo_statue.c"
#include "sprites/kraid.c"
#include "sprites/ridley.c"
#include "sprites/tangle_vine.c"
#include "sprites/imago_larva.c"
#include "sprites/imago.c"
#include "sprites/imago_cocoon.c"
#include "sprites/mother_brain.c"

static const struct FrameData* sChozoStatueFrameDataPointers[16] = {
    sChozoStatuePartOAM_LegStanding,
    sChozoStatuePartOAM_LegSitting,
    sChozoStatuePartOAM_LegSeated,
    sChozoStatueOAM_Idle,
    sChozoStatuePartOAM_EyeOpened,
    sChozoStatuePartOAM_EyeClosing,
    sChozoStatuePartOAM_EyeOpening,
    sChozoStatuePartOAM_EyeClosed,
    sChozoStatuePartOAM_ArmIdle,
    sChozoStatuePartOAM_ArmGlow,
    sChozoStatuePartOAM_ArmSamusGrabbed,
    sChozoBallOAM_NormalClosed,
    sChozoBallOAM_NormalRevealing,
    sChozoBallOAM_NormalRevealed,
    sChozoStatueRefillOAM,
    sChozoStatuePartOAM_GlowIdle,
};

static const struct FrameData* sUnknownItemChozoStatueFrameDataPointers[16] = {
    sUnknownItemChozoStatuePartOAM_LegStanding,
    sUnknownItemChozoStatuePartOAM_LegSitting,
    sUnknownItemChozoStatuePartOAM_LegSeated,
    sUnknownItemChozoStatueOAM_Idle,
    sUnknownItemChozoStatuePartOAM_EyeOpened,
    sUnknownItemChozoStatuePartOAM_EyeClosing,
    sUnknownItemChozoStatuePartOAM_EyeOpening,
    sUnknownItemChozoStatuePartOAM_EyeClosed,
    sUnknownItemChozoStatuePartOAM_ArmIdle,
    sUnknownItemChozoStatuePartOAM_ArmGlow,
    sUnknownItemChozoStatuePartOAM_ArmSamusGrabbed,
    sChozoBallOAM_UnknownClosed,
    sChozoBallOAM_UnknownRevealed,
    sUnknownItemChozoStatueRefillOAM,
    sUnknownItemChozoStatuePartOAM_GlowIdle
};

static const struct FrameData* sKraidFrameDataPointers[38] = {
    sKraidOAM_MouthClosed,
    sKraidOAM_MouthClosedBlink,
    sKraidOAM_OpeningMouth,
    sKraidOAM_MouthOpened,
    sKraidOAM_Rising,
    sKraidOAM_ClosingMouth,
    sKraidPartOAM_2cac5c,
    sKraidPartOAM_LeftArmIdle,
    sKraidPartOAM_LeftArmDying,
    sKraidPartOAM_LeftArmThrowingNails,
    sKraidPartOAM_2cadc4,
    sKraidPartOAM_RightArmIdle,
    sKraidPartOAM_RightArmAttacking,
    sKraidPartOAM_RightArmDying,
    sKraidPartOAM_LeftFeetRising,
    sKraidPartOAM_LeftFeetIdle1,
    sKraidPartOAM_LeftFeetMovingRight,
    sKraidPartOAM_LeftFeetIdle2,
    sKraidPartOAM_LeftFeetMovedRight,
    sKraidPartOAM_LeftFeetMovingLeft,
    sKraidPartOAM_LeftFeetMovedLeft,
    sKraidPartOAM_RightFeetRising,
    sKraidPartOAM_RightFeetIdle1,
    sKraidPartOAM_RightFeetMovedRight,
    sKraidPartOAM_RightFeetIdle2,
    sKraidPartOAM_RightFeetMovingRight,
    sKraidPartOAM_RightFeetMovedLeft,
    sKraidPartOAM_RightFeetMovingLeft,
    sKraidPartOAM_TopHoleLeft,
    sKraidPartOAM_TopHoleRight,
    sKraidPartOAM_MiddleHoleLeft,
    sKraidPartOAM_MiddleHoleRight,
    sKraidPartOAM_BottomHoleLeft,
    sKraidPartOAM_BottomHoleRight,
    sKraidNailOAM,
    sKraidOAM_2cb29c,
    sKraidOAM_2cb2ac,
    sKraidSpikeOAM
};

static const struct FrameData* sImagoLarvaFrameDataPointers[23] = {
    sImagoLarvaPartOAM_ShellAttacking,
    sImagoLarvaPartOAM_ShellIdle,
    sImagoLarvaPartOAM_ShellRetreating,
    sImagoLarvaPartOAM_ShellDying,
    sImagoLarvaPartOAM_ClawsAttacking,
    sImagoLarvaPartOAM_ClawsIdle,
    sImagoLarvaPartOAM_ClawsRetreating,
    sImagoLarvaPartOAM_ClawsTakingDamage,
    sImagoLarvaPartOAM_LeftDotAppearing,
    sImagoLarvaPartOAM_MiddleDotAppearing,
    sImagoLarvaPartOAM_RightDotAppearing,
    sImagoLarvaPartOAM_LeftDotVisible,
    sImagoLarvaPartOAM_MiddleDotVisible,
    sImagoLarvaPartOAM_RightDotVisible,
    sImagoLarvaPartOAM_LeftDotDisappearing,
    sImagoLarvaPartOAM_MiddleDotDisappearing,
    sImagoLarvaPartOAM_RightDotDisappearing,
    sImagoLarvaPartOAM_ShellWarning,
    sImagoLarvaOAM_Idle,
    sImagoLarvaPartOAM_ClawsWarningFirstPart,
    sImagoLarvaPartOAM_ClawsWarningSecondPart,
    sImagoLarvaOAM_Warning,
    sImagoLarvaPartOAM_ShellTakingDamage
};

static const struct FrameData* sImagoCocoonFrameDataPointers[21] = {
    sImagoCocoonOAM_CeilingVineMotionless,
    sImagoCocoonOAM_CeilingVineMoving,
    sImagoCocoonOAM_CeilingVineBroken,
    sImagoCocoonOAM_DecorativeVinesLeft,
    sImagoCocoonOAM_DecorativeVinesRight,
    sImagoCocoonVineOAM_LeftMiddle,
    sImagoCocoonVineOAM_RightMiddle,
    sImagoCocoonVineOAM_LeftRight,
    sImagoCocoonVineOAM_RightRight,
    sImagoCocoonVineOAM_LeftLeft,
    sImagoCocoonVineOAM_RightLeft,
    sImagoCocoonOAM_Idle,
    sImagoCocoonOAM_2e0bb0,
    sImagoCocoonOAM_Static,
    sImagoCocoonSporeOAM_Spawning,
    sImagoCocoonSpore_Nest,
    sImagoCocoonSpore_Moving,
    sImagoCocoonSpore_Exploding,
    sWingedRipperOAM_Moving,
    sWingedRipperOAM_TurningAround,
    sDefeatedImagoCocoonOAM
};

static const struct FrameData* sRidleyFrameDataPointers[33] = {
    sRidleyOAM_Idle,
    sRidleyOAM_SpittingFireballs,
    sRidleyOAM_TurningAroundFirstPart,
    sRidleyOAM_TurningAroundSecondPart,
    sRidleyPartOAM_HeadIdle,
    sRidleyPartOAM_OpeningMouth,
    sRidleyPartOAM_MouthOpened,
    sRidleyPartOAM_HeadDying,
    sRidleyPartOAM_HeadTurningAround,
    sRidleyPartOAM_ClawIdle,
    sRidleyPartOAM_ClawSpittingFireballs,
    sRidleyPartOAM_ClawTurningAroundFirstPart,
    sRidleyPartOAM_ClawTurningAroundSecondPart,
    sRidleyPartOAM_ClawCarryingSamus,
    sRidleyPartOAM_ClawLiftingSamus,
    sRidleyPartOAM_ClawSamusLifted,
    sRidleyPartOAM_ClawReleasingSamus,
    sRidleyPartOAM_LeftWingIdle,
    sRidleyPartOAM_RightWingIdle,
    sRidleyPartOAM_LeftWing_Unused,
    sRidleyPartOAM_RightWing_Unused,
    sRidleyPartOAM_LeftWingSpittingFireballs,
    sRidleyPartOAM_RightWingSpittingFireballs,
    sRidleyTailOAM_Part,
    sRidleyTailOAM_TipPointingDown,
    sRidleyTailOAM_TipPointingUp,
    sRidleyTailOAM_TipPointingDiagonallyDownRight,
    sRidleyTailOAM_TipPointingDiagonallyUpRight,
    sRidleyTailOAM_TipPointingDiagonallyDownLeft,
    sRidleyTailOAM_TipPointingDiagonallyUpLeft,
    sRidleyOAM_Square,
    sRidleyFireballOAM_Small,
    sRidleyFireballOAM_Big
};


static const u8 sAtomicDynamicPaletteData[33][2] = {
    { 0, 4 },
    { 2, 4 },
    { 0, 4 },
    { 2, 4 },
    { 0, 4 },
    { 2, 4 },
    { 0, 4 },
    { 2, 4 },
    { 3, 4 },
    { 2, 4 },
    { 3, 4 },
    { 2, 4 },
    { 3, 4 },
    { 2, 4 },
    { 3, 4 },
    { 2, 4 },
    { 3, 2 },
    { 2, 2 },
    { 3, 2 },
    { 2, 2 },
    { 3, 2 },
    { 2, 2 },
    { 3, 2 },
    { 2, 2 },
    { 3, 2 },
    { 2, 2 },
    { 3, 2 },
    { 2, 2 },
    { 3, 2 },
    { 2, 2 },
    { 3, 2 },
    { 2, 2 },
    { 0, 0 }
};

static const struct FrameData* sMotheBrainFrameDataPointers[10] = {
    sMotherBrainOAM_Idle,
    sMotherBrainOAM_ChargingBeam,
    sMotherBrainPartOAM_EyeClosed,
    sMotherBrainPartOAM_2fa934,
    sMotherBrainPartOAM_EyeOpening,
    sMotherBrainPartOAM_2fa984,
    sMotherBrainPartOAM_EyeDying,
    sMotherBrainPartOAM_Bottom,
    sMotherBrainPartOAM_BeamSpawning,
    sMotherBrainBeamOAM_Moving
};

static const struct FrameData* sTangleVineFrameDataPointers[13] = {
    sTangleVineTallOAM_OnGround,
    sTangleVineMediumOAM_OnGround,
    sTangleVineShortOAM_OnGround,
    sTangleVineCurvedOAM_OnGround,
    sTangleVineTallOAM_OnCeiling,
    sTangleVineMediumOAM_OnCeiling,
    sTangleVineShortOAM_OnCeiling,
    sTangleVineCurvedOAM_OnCeiling,
    sTangleVineGerutaPartOAM_Grip,
    sTangleVineGerutaOAM_Root,
    sTangleVineGerutaOAM_Full,
    sTangleVineRedGerutaOAM,
    sTangleVineGerutaPartOAM_Geruta
};

static const struct FrameData* sImagoFrameDataPointers[17] = {
    sImagoPartOAM_BodyIdle,
    sImagoPartOAM_BodyGrowling,
    sImagoOAM_BrokenStinger,
    sImagoPartOAM_LeftWingIdle,
    sImagoPartOAM_LeftWingShootingNeedles,
    sImagoPartOAM_LeftWingDying,
    sImagoPartOAM_RightWingIdle,
    sImagoPartOAM_RightWingShootingNeedles,
    sImagoPartOAM_RIghtWingDying,
    sImagoPartOAM_Core,
    simagoOAM_Flying,
    sImagoOAM_ShootingNeedles,
    sImagoOAM_RechargingNeedles,
    sImagoDamagedStingerOAM,
    sImagoNeedleOAM,
    sImagoDamagedStingerOAM_Unused,
    sImagoEggOAM_Breaking
};

static const struct FrameData* sCrocomireFrameDataPointers[25] = {
    sCrocomirePartOAM_BodyIdle,
    sCrocomirePartOAM_BodyAngry,
    sCrocomireOAM_Idle,
    sCrocomireOAM_Screaming,
    sCrocomireOAM_Dying,
    sCrocomirePartOAM_RightArmIdle,
    sCrocomirePartOAM_LeftArmIdle,
    sCrocomirePartOAM_LeftArmScreaming,
    sCrocomirePartOAM_RightArmWalkingForward,
    sCrocomirePartOAM_LeftArmWalkingForward,
    sCrocomirePartOAM_RightArmWalkingBackwards,
    sCrocomirePartOAM_LeftArmWalkingBackwards,
    sCrocomirePartOAM_RightArmDying,
    sCrocomirePartOAM_LeftArmDying,
    sCrocomirePartOAM_LegsIdle,
    sCrocomirePartOAM_LegsWalkingForward,
    sCrocomirePartOAM_LegsWalkingBackwards,
    sCrocomirePartOAM_LegsDying,
    sCrocomirePartOAM_Tongue,
    sCrocomirePartOAM_TongueDying,
    sCrocomireProjectileOAM,
    sCrocomirePartOAM_307028,
    sCrocomirePartOAM_307058,
    sCrocomirePartOAM_307088,
    sCrocomirePartOAM_3070b8,
};