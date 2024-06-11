#include "data/text_pointers.h"
#include "data/text_data.h"

const u16* const sJapaneseTextPointers_Message[MESSAGE_END] = {
    [MESSAGE_DUMMY] = sJapaneseText_Message_Dummy,
    [MESSAGE_ENERGY_TANK_ACQUIRED] = sJapaneseText_Message_EnergyTankAcquired,
    [MESSAGE_MISSILE_TANK_ACQUIRED] = sJapaneseText_Message_MissileTankAcquired,
    [MESSAGE_FIRST_MISSILE_TANK] = sJapaneseText_Message_FirstMissileTank,
    [MESSAGE_SUPER_MISSILE_TANK_ACQUIRED] = sJapaneseText_Message_SuperMissileTankAcquired,
    [MESSAGE_FIRST_SUPER_MISSILE_TANK] = sJapaneseText_Message_FirstSuperMissileTank,
    [MESSAGE_POWER_BOMB_TANK_ACQUIRED] = sJapaneseText_Message_PowerBombTankAqcuired,
    [MESSAGE_FIRST_POWER_BOMB_TANK] = sJapaneseText_Message_FirstPowerBombTank,
    [MESSAGE_LONG_BEAM] = sJapaneseText_Message_LongBeam,
    [MESSAGE_CHARGE_BEAM] = sJapaneseText_Message_ChargeBeam,
    [MESSAGE_ICE_BEAM] = sJapaneseText_Message_IceBeam,
    [MESSAGE_WAVE_BEAM] = sJapaneseText_Message_WaveBeam,
    [MESSAGE_UKNOWN_ITEM_PLASMA] = sJapaneseText_Message_UnknownItemPlasma,
    [MESSAGE_BOMB] = sJapaneseText_Message_Bomb,
    [MESSAGE_VARIA_SUIT] = sJapaneseText_Message_VariaSuit,
    [MESSAGE_UNKNOWN_ITEM_GRAVITY] = sJapaneseText_Message_UnknownItemGravity,
    [MESSAGE_MORPH_BALL] = sJapaneseText_Message_MorphBall,
    [MESSAGE_SPEED_BOOSTER] = sJapaneseText_Message_SpeedBooster,
    [MESSAGE_HIGH_JUMP] = sJapaneseText_Message_HighJump,
    [MESSAGE_SCREW_ATTACK] = sJapaneseText_Message_ScrewAttack,
    [MESSAGE_UNKNOWN_ITEM_SPACE_JUMP] = sJapaneseText_Message_UnknownItemSpaceJump,
    [MESSAGE_POWER_GRIP] = sJapaneseText_Message_PowerGrip,
    [MESSAGE_PLASMA_BEAM] = sJapaneseText_Message_PlasmaBeam,
    [MESSAGE_GRAVITY_SUIT] = sJapaneseText_Message_GravitySuit,
    [MESSAGE_SPACE_JUMP] = sJapaneseText_Message_SpaceJump,
    [MESSAGE_DYNAMIC_ITEM] = sJapaneseText_Message_Dummy,
    [MESSAGE_DYNAMIC_ITEM_MAJOR] = sJapaneseText_Message_Dummy,
    [MESSAGE_DYNAMIC_ITEM_UNKNOWN] = sJapaneseText_Message_Dummy,
    [MESSAGE_SAVE_PROMPT] = sJapaneseText_Message_SavePrompt,
    [MESSAGE_SAVE_COMPLETE] = sJapaneseText_Message_SaveComplete,
    [MESSAGE_WEAPON_RESUPPLY_COMPLETE] = sJapaneseText_Message_WeaponRessuplyComplete,
    [MESSAGE_ENERGY_TANK_RECHARGE_COMPLETE] = sJapaneseText_Message_EnergyTankRechargeComplete,
    [MESSAGE_WEAPONS_AND_ENERGY_RESTORED] = sJapaneseText_Message_WeaponsAndEnergyRestored,
    [MESSAGE_BRINSTAR_MAP_ACQUIRED] = sJapaneseText_Message_BrinstarMap,
    [MESSAGE_KRAID_MAP_ACQUIRED] = sJapaneseText_Message_KraidMap,
    [MESSAGE_NORFAIR_MAP_ACQUIRED] = sJapaneseText_Message_NorfairMap,
    [MESSAGE_RIDLEY_MAP_ACQUIRED] = sJapaneseText_Message_RidleyMap,
    [MESSAGE_MOTHER_SHIP_MAP_ACQUIRED] = sJapaneseText_Message_MotherShipMap,
    [MESSAGE_FULLY_POWERED_SUIT] = sJapaneseText_Message_FullyPoweredSuit,
    [MESSAGE_ZEBES_ESCAPE] = sJapaneseText_Message_ZebesEscape,
    [MESSAGE_CHOZODIA_ESCAPE] = sJapaneseText_Message_ChozodiaEscape,
    [MESSAGE_ENEMY_LOCATION_ABNORMAL] = sJapaneseText_Message_EnemyLocationAbnormal,
    [MESSAGE_ACTIVATE_EASY_SLEEP] = sJapaneseText_Message_ActivateEasySleep,
    [MESSAGE_PRESS_SELECT_L_AND_R] = sJapaneseText_Message_PressSelectLAndR,
    [MESSAGE_EASY_SLEEP_PROMPT] = sJapaneseText_Message_EasySleepPrompt
};

const u16* const sJapaneseTextPointers_Location[LT_END] = {
    [LT_BRINSTAR] = sJapaneseText_Location_Brinstar,
    [LT_KRAID] = sJapaneseText_Location_Kraid,
    [LT_NORFAIR] = sJapaneseText_Location_Norfair,
    [LT_RIDLEY] = sJapaneseText_Location_Ridley,
    [LT_TOURIAN] = sJapaneseText_Location_Tourian,
    [LT_CRATERIA] = sJapaneseText_Location_Crateria,
    [LT_CHOZODIA] = sJapaneseText_Location_Chozodia,
    [LT_MOTHERSHIP] = sJapaneseText_Location_Mothership,
    [LT_PLANET_ZEBES] = sJapaneseText_Location_PlanetZebes,
    [LT_SAVE_ROOM] = sJapaneseText_Location_SaveRoom,
    [LT_RESEARCH_ROOM] = sJapaneseText_Location_ResearchRoom,
    [LT_MAP_ROOM] = sJapaneseText_Location_MapRoom,
    [LT_CHOZO_RUINS] = sJapaneseText_Location_ChozoRuins,
    [LT_STARSHIP] = sJapaneseText_Location_Starship,
    [LT_UNUSED_7] = sJapaneseText_Location_Unused7,
    [LT_UNUSED_8] = sJapaneseText_Location_Unused8,
    [LT_UNUSED_9] = sJapaneseText_Location_Unused9,
    [LT_UNUSED_10] = sJapaneseText_Location_Unused10,
    [LT_UNUSED_11] = sJapaneseText_Location_Unused11,
    [LT_UNUSED_12] = sJapaneseText_Location_Unused12,
    [LT_UNUSED_13] = sJapaneseText_Location_Unused13,
    [LT_UNUSED_14] = sJapaneseText_Location_Unused14,
    [LT_UNUSED_15] = sJapaneseText_Location_Unused15,
    [LT_UNUSED_16] = sJapaneseText_Location_Unused16,
    [LT_UNUSED_17] = sJapaneseText_Location_Unused17,
    [LT_UNUSED_18] = sJapaneseText_Location_Unused18
};

const u16* const sHiraganaTextPointers_Message[MESSAGE_END] = {
    [MESSAGE_DUMMY] = sHiraganaText_Message_Dummy,
    [MESSAGE_ENERGY_TANK_ACQUIRED] = sHiraganaText_Message_EnergyTankAcquired,
    [MESSAGE_MISSILE_TANK_ACQUIRED] = sHiraganaText_Message_MissileTankAcquired,
    [MESSAGE_FIRST_MISSILE_TANK] = sHiraganaText_Message_FirstMissileTank,
    [MESSAGE_SUPER_MISSILE_TANK_ACQUIRED] = sHiraganaText_Message_SuperMissileTankAcquired,
    [MESSAGE_FIRST_SUPER_MISSILE_TANK] = sHiraganaText_Message_FirstSuperMissileTank,
    [MESSAGE_POWER_BOMB_TANK_ACQUIRED] = sHiraganaText_Message_PowerBombTankAqcuired,
    [MESSAGE_FIRST_POWER_BOMB_TANK] = sHiraganaText_Message_FirstPowerBombTank,
    [MESSAGE_LONG_BEAM] = sHiraganaText_Message_LongBeam,
    [MESSAGE_CHARGE_BEAM] = sHiraganaText_Message_ChargeBeam,
    [MESSAGE_ICE_BEAM] = sHiraganaText_Message_IceBeam,
    [MESSAGE_WAVE_BEAM] = sHiraganaText_Message_WaveBeam,
    [MESSAGE_UKNOWN_ITEM_PLASMA] = sHiraganaText_Message_UnknownItemPlasma,
    [MESSAGE_BOMB] = sHiraganaText_Message_Bomb,
    [MESSAGE_VARIA_SUIT] = sHiraganaText_Message_VariaSuit,
    [MESSAGE_UNKNOWN_ITEM_GRAVITY] = sHiraganaText_Message_UnknownItemGravity,
    [MESSAGE_MORPH_BALL] = sHiraganaText_Message_MorphBall,
    [MESSAGE_SPEED_BOOSTER] = sHiraganaText_Message_SpeedBooster,
    [MESSAGE_HIGH_JUMP] = sHiraganaText_Message_HighJump,
    [MESSAGE_SCREW_ATTACK] = sHiraganaText_Message_ScrewAttack,
    [MESSAGE_UNKNOWN_ITEM_SPACE_JUMP] = sHiraganaText_Message_UnknownItemSpaceJump,
    [MESSAGE_POWER_GRIP] = sHiraganaText_Message_PowerGrip,
    [MESSAGE_PLASMA_BEAM] = sHiraganaText_Message_PlasmaBeam,
    [MESSAGE_GRAVITY_SUIT] = sHiraganaText_Message_GravitySuit,
    [MESSAGE_SPACE_JUMP] = sHiraganaText_Message_SpaceJump,
    [MESSAGE_DYNAMIC_ITEM] = sHiraganaText_Message_Dummy,
    [MESSAGE_DYNAMIC_ITEM_MAJOR] = sHiraganaText_Message_Dummy,
    [MESSAGE_DYNAMIC_ITEM_UNKNOWN] = sHiraganaText_Message_Dummy,
    [MESSAGE_SAVE_PROMPT] = sHiraganaText_Message_SavePrompt,
    [MESSAGE_SAVE_COMPLETE] = sHiraganaText_Message_SaveComplete,
    [MESSAGE_WEAPON_RESUPPLY_COMPLETE] = sHiraganaText_Message_WeaponRessuplyComplete,
    [MESSAGE_ENERGY_TANK_RECHARGE_COMPLETE] = sHiraganaText_Message_EnergyTankRechargeComplete,
    [MESSAGE_WEAPONS_AND_ENERGY_RESTORED] = sHiraganaText_Message_WeaponsAndEnergyRestored,
    [MESSAGE_BRINSTAR_MAP_ACQUIRED] = sHiraganaText_Message_BrinstarMap,
    [MESSAGE_KRAID_MAP_ACQUIRED] = sHiraganaText_Message_KraidMap,
    [MESSAGE_NORFAIR_MAP_ACQUIRED] = sHiraganaText_Message_NorfairMap,
    [MESSAGE_RIDLEY_MAP_ACQUIRED] = sHiraganaText_Message_RidleyMap,
    [MESSAGE_MOTHER_SHIP_MAP_ACQUIRED] = sHiraganaText_Message_MotherShipMap,
    [MESSAGE_FULLY_POWERED_SUIT] = sHiraganaText_Message_FullyPoweredSuit,
    [MESSAGE_ZEBES_ESCAPE] = sHiraganaText_Message_ZebesEscape,
    [MESSAGE_CHOZODIA_ESCAPE] = sHiraganaText_Message_ChozodiaEscape,
    [MESSAGE_ENEMY_LOCATION_ABNORMAL] = sHiraganaText_Message_EnemyLocationAbnormal,
    [MESSAGE_ACTIVATE_EASY_SLEEP] = sHiraganaText_Message_ActivateEasySleep,
    [MESSAGE_PRESS_SELECT_L_AND_R] = sHiraganaText_Message_PressSelectLAndR,
    [MESSAGE_EASY_SLEEP_PROMPT] = sHiraganaText_Message_EasySleepPrompt
};

const u16* const sHiraganaTextPointers_Location[LT_END] = {
    [LT_BRINSTAR] = sHiraganaText_Location_Brinstar,
    [LT_KRAID] = sHiraganaText_Location_Kraid,
    [LT_NORFAIR] = sHiraganaText_Location_Norfair,
    [LT_RIDLEY] = sHiraganaText_Location_Ridley,
    [LT_TOURIAN] = sHiraganaText_Location_Tourian,
    [LT_CRATERIA] = sHiraganaText_Location_Crateria,
    [LT_CHOZODIA] = sHiraganaText_Location_Chozodia,
    [LT_MOTHERSHIP] = sHiraganaText_Location_Mothership,
    [LT_PLANET_ZEBES] = sHiraganaText_Location_PlanetZebes,
    [LT_SAVE_ROOM] = sHiraganaText_Location_SaveRoom,
    [LT_RESEARCH_ROOM] = sHiraganaText_Location_ResearchRoom,
    [LT_MAP_ROOM] = sHiraganaText_Location_MapRoom,
    [LT_CHOZO_RUINS] = sHiraganaText_Location_ChozoRuins,
    [LT_STARSHIP] = sHiraganaText_Location_Starship,
    [LT_UNUSED_7] = sHiraganaText_Location_Unused7,
    [LT_UNUSED_8] = sHiraganaText_Location_Unused8,
    [LT_UNUSED_9] = sHiraganaText_Location_Unused9,
    [LT_UNUSED_10] = sHiraganaText_Location_Unused10,
    [LT_UNUSED_11] = sHiraganaText_Location_Unused11,
    [LT_UNUSED_12] = sHiraganaText_Location_Unused12,
    [LT_UNUSED_13] = sHiraganaText_Location_Unused13,
    [LT_UNUSED_14] = sHiraganaText_Location_Unused14,
    [LT_UNUSED_15] = sHiraganaText_Location_Unused15,
    [LT_UNUSED_16] = sHiraganaText_Location_Unused16,
    [LT_UNUSED_17] = sHiraganaText_Location_Unused17,
    [LT_UNUSED_18] = sHiraganaText_Location_Unused18
};


const u16* const sEnglishTextPointers_Message[MESSAGE_END] = {
    [MESSAGE_DUMMY] = sEnglishText_Message_Dummy,
    [MESSAGE_ENERGY_TANK_ACQUIRED] = sEnglishText_Message_EnergyTankAcquired,
    [MESSAGE_MISSILE_TANK_ACQUIRED] = sEnglishText_Message_MissileTankAcquired,
    [MESSAGE_FIRST_MISSILE_TANK] = sEnglishText_Message_FirstMissileTank,
    [MESSAGE_SUPER_MISSILE_TANK_ACQUIRED] = sEnglishText_Message_SuperMissileTankAcquired,
    [MESSAGE_FIRST_SUPER_MISSILE_TANK] = sEnglishText_Message_FirstSuperMissileTank,
    [MESSAGE_POWER_BOMB_TANK_ACQUIRED] = sEnglishText_Message_PowerBombTankAqcuired,
    [MESSAGE_FIRST_POWER_BOMB_TANK] = sEnglishText_Message_FirstPowerBombTank,
    [MESSAGE_LONG_BEAM] = sEnglishText_Message_LongBeam,
    [MESSAGE_CHARGE_BEAM] = sEnglishText_Message_ChargeBeam,
    [MESSAGE_ICE_BEAM] = sEnglishText_Message_IceBeam,
    [MESSAGE_WAVE_BEAM] = sEnglishText_Message_WaveBeam,
    [MESSAGE_UKNOWN_ITEM_PLASMA] = sEnglishText_Message_UnknownItemPlasma,
    [MESSAGE_BOMB] = sEnglishText_Message_Bomb,
    [MESSAGE_VARIA_SUIT] = sEnglishText_Message_VariaSuit,
    [MESSAGE_UNKNOWN_ITEM_GRAVITY] = sEnglishText_Message_UnknownItemGravity,
    [MESSAGE_MORPH_BALL] = sEnglishText_Message_MorphBall,
    [MESSAGE_SPEED_BOOSTER] = sEnglishText_Message_SpeedBooster,
    [MESSAGE_HIGH_JUMP] = sEnglishText_Message_HighJump,
    [MESSAGE_SCREW_ATTACK] = sEnglishText_Message_ScrewAttack,
    [MESSAGE_UNKNOWN_ITEM_SPACE_JUMP] = sEnglishText_Message_UnknownItemSpaceJump,
    [MESSAGE_POWER_GRIP] = sEnglishText_Message_PowerGrip,
    [MESSAGE_PLASMA_BEAM] = sEnglishText_Message_PlasmaBeam,
    [MESSAGE_GRAVITY_SUIT] = sEnglishText_Message_GravitySuit,
    [MESSAGE_SPACE_JUMP] = sEnglishText_Message_SpaceJump,
    [MESSAGE_DYNAMIC_ITEM] = sEnglishText_Message_Dummy,
    [MESSAGE_DYNAMIC_ITEM_MAJOR] = sEnglishText_Message_Dummy,
    [MESSAGE_DYNAMIC_ITEM_UNKNOWN] = sEnglishText_Message_Dummy,
    [MESSAGE_SAVE_PROMPT] = sEnglishText_Message_SavePrompt,
    [MESSAGE_SAVE_COMPLETE] = sEnglishText_Message_SaveComplete,
    [MESSAGE_WEAPON_RESUPPLY_COMPLETE] = sEnglishText_Message_WeaponRessuplyComplete,
    [MESSAGE_ENERGY_TANK_RECHARGE_COMPLETE] = sEnglishText_Message_EnergyTankRechargeComplete,
    [MESSAGE_WEAPONS_AND_ENERGY_RESTORED] = sEnglishText_Message_WeaponsAndEnergyRestored,
    [MESSAGE_BRINSTAR_MAP_ACQUIRED] = sEnglishText_Message_BrinstarMap,
    [MESSAGE_KRAID_MAP_ACQUIRED] = sEnglishText_Message_KraidMap,
    [MESSAGE_NORFAIR_MAP_ACQUIRED] = sEnglishText_Message_NorfairMap,
    [MESSAGE_RIDLEY_MAP_ACQUIRED] = sEnglishText_Message_RidleyMap,
    [MESSAGE_MOTHER_SHIP_MAP_ACQUIRED] = sEnglishText_Message_MotherShipMap,
    [MESSAGE_FULLY_POWERED_SUIT] = sEnglishText_Message_FullyPoweredSuit,
    [MESSAGE_ZEBES_ESCAPE] = sEnglishText_Message_ZebesEscape,
    [MESSAGE_CHOZODIA_ESCAPE] = sEnglishText_Message_ChozodiaEscape,
    [MESSAGE_ENEMY_LOCATION_ABNORMAL] = sEnglishText_Message_EnemyLocationAbnormal,
    [MESSAGE_ACTIVATE_EASY_SLEEP] = sEnglishText_Message_ActivateEasySleep,
    [MESSAGE_PRESS_SELECT_L_AND_R] = sEnglishText_Message_PressSelectLAndR,
    [MESSAGE_EASY_SLEEP_PROMPT] = sEnglishText_Message_EasySleepPrompt
};

const u16* const sEnglishTextPointers_Location[LT_END] = {
    [LT_BRINSTAR] = sEnglishText_Location_Brinstar,
    [LT_KRAID] = sEnglishText_Location_Kraid,
    [LT_NORFAIR] = sEnglishText_Location_Norfair,
    [LT_RIDLEY] = sEnglishText_Location_Ridley,
    [LT_TOURIAN] = sEnglishText_Location_Tourian,
    [LT_CRATERIA] = sEnglishText_Location_Crateria,
    [LT_CHOZODIA] = sEnglishText_Location_Chozodia,
    [LT_MOTHERSHIP] = sEnglishText_Location_Mothership,
    [LT_PLANET_ZEBES] = sEnglishText_Location_PlanetZebes,
    [LT_SAVE_ROOM] = sEnglishText_Location_SaveRoom,
    [LT_RESEARCH_ROOM] = sEnglishText_Location_ResearchRoom,
    [LT_MAP_ROOM] = sEnglishText_Location_MapRoom,
    [LT_CHOZO_RUINS] = sEnglishText_Location_ChozoRuins,
    [LT_STARSHIP] = sEnglishText_Location_Starship,
    [LT_UNUSED_7] = sEnglishText_Location_Unused7,
    [LT_UNUSED_8] = sEnglishText_Location_Unused8,
    [LT_UNUSED_9] = sEnglishText_Location_Unused9,
    [LT_UNUSED_10] = sEnglishText_Location_Unused10,
    [LT_UNUSED_11] = sEnglishText_Location_Unused11,
    [LT_UNUSED_12] = sEnglishText_Location_Unused12,
    [LT_UNUSED_13] = sEnglishText_Location_Unused13,
    [LT_UNUSED_14] = sEnglishText_Location_Unused14,
    [LT_UNUSED_15] = sEnglishText_Location_Unused15,
    [LT_UNUSED_16] = sEnglishText_Location_Unused16,
    [LT_UNUSED_17] = sEnglishText_Location_Unused17,
    [LT_UNUSED_18] = sEnglishText_Location_Unused18
};


const u16* const * const sLocationTextPointers[LANGUAGE_END] = {
    [LANGUAGE_JAPANESE] = sJapaneseTextPointers_Location,
    [LANGUAGE_HIRAGANA] = sHiraganaTextPointers_Location,
    [LANGUAGE_ENGLISH] = sEnglishTextPointers_Location,
    [LANGUAGE_GERMAN] = sEnglishTextPointers_Location,
    [LANGUAGE_FRENCH] = sEnglishTextPointers_Location,
    [LANGUAGE_ITALIAN] = sEnglishTextPointers_Location,
    [LANGUAGE_SPANISH] = sEnglishTextPointers_Location
};

const u16* const * const sMessageTextPointers[LANGUAGE_END] = {
    [LANGUAGE_JAPANESE] = sJapaneseTextPointers_Message,
    [LANGUAGE_HIRAGANA] = sHiraganaTextPointers_Message,
    [LANGUAGE_ENGLISH] = sEnglishTextPointers_Message,
    [LANGUAGE_GERMAN] = sEnglishTextPointers_Message,
    [LANGUAGE_FRENCH] = sEnglishTextPointers_Message,
    [LANGUAGE_ITALIAN] = sEnglishTextPointers_Message,
    [LANGUAGE_SPANISH] = sEnglishTextPointers_Message
};

const u16* const * const sFileScreenTextPointers[LANGUAGE_END] = {
    [LANGUAGE_JAPANESE] = sJapaneseTextPointers_FileScreen,
    [LANGUAGE_HIRAGANA] = sHiraganaTextPointers_FileScreen,
    [LANGUAGE_ENGLISH] = sEnglishTextPointers_FileScreen,
    [LANGUAGE_GERMAN] = sEnglishTextPointers_FileScreen,
    [LANGUAGE_FRENCH] = sEnglishTextPointers_FileScreen,
    [LANGUAGE_ITALIAN] = sEnglishTextPointers_FileScreen,
    [LANGUAGE_SPANISH] = sEnglishTextPointers_FileScreen
};


const u16* const sJapaneseTextPointers_Description[DESCRIPTION_TEXT_END] = {
    [DESCRIPTION_TEXT_LONG_BEAM] = sJapaneseText_Description_LongBeam,
    [DESCRIPTION_TEXT_CHARGE_BEAM] = sJapaneseText_Description_ChargeBeam,
    [DESCRIPTION_TEXT_ICE_BEAM] = sJapaneseText_Description_IceBeam,
    [DESCRIPTION_TEXT_WAVE_BEAM] = sJapaneseText_Description_WaveBeam,
    [DESCRIPTION_TEXT_PLASMA_BEAM] = sJapaneseText_Description_PlasmaBeam,
    [DESCRIPTION_TEXT_MISSILES] = sJapaneseText_Description_Missiles,
    [DESCRIPTION_TEXT_SUPER_MISSILES] = sJapaneseText_Description_SuperMissiles,
    [DESCRIPTION_TEXT_BOMBS] = sJapaneseText_Description_Bombs,
    [DESCRIPTION_TEXT_POWER_BOMBS] = sJapaneseText_Description_PowerBombs,
    [DESCRIPTION_TEXT_VARIA_SUIT] = sJapaneseText_Description_VariaSuit,
    [DESCRIPTION_TEXT_GRAVITY_SUIT] = sJapaneseText_Description_GravitySuit,
    [DESCRIPTION_TEXT_MORPH_BALL] = sJapaneseText_Description_MorphBall,
    [DESCRIPTION_TEXT_POWER_GRIP] = sJapaneseText_Description_PowerGrip,
    [DESCRIPTION_TEXT_SPEEDBOOSTER] = sJapaneseText_Description_Speedbooster,
    [DESCRIPTION_TEXT_HIGH_JUMP] = sJapaneseText_Description_HighJump,
    [DESCRIPTION_TEXT_SCREW_ATTACK] = sJapaneseText_Description_ScrewAttack,
    [DESCRIPTION_TEXT_SPACE_JUMP] = sJapaneseText_Description_SpaceJump,
    [DESCRIPTION_TEXT_UNKNOWN_ITEM] = sJapaneseText_Description_UnknownItem,
    [DESCRIPTION_TEXT_PISTOL] = sJapaneseText_Description_Pistol,
};

const u16* const sJapaneseTextPointers_Story[STORY_TEXT_END] = {
    [STORY_TEXT_PLANET_ZEBES] = sJapaneseText_Story_PlanetZebes,
    [STORY_TEXT_THE_TIMING] = sJapaneseText_Story_TheTiming,
    [STORY_TEXT_COULD_I_SURVIVE] = sJapaneseText_Story_CouldISurvive,
    [STORY_TEXT_EMERGENCY] = sJapaneseText_Story_Emergency,
    [STORY_TEXT_EXTERMINATE] = sJapaneseText_Story_Exterminate,
    [STORY_TEXT_DEFEAT] = sJapaneseText_Story_Defeat,
};

const u16* const sJapaneseTextPointers_FileScreen[FILE_SCREEN_TEXT_END] = {
    [FILE_SCREEN_TEXT_START_GAME] = sJapaneseText_FileScreen_StartGame,
    [FILE_SCREEN_TEXT_COPY_SOURCE_CHOOSE] = sJapaneseText_FileScreen_CopySourceChoose,
    [FILE_SCREEN_TEXT_COPY_DESTINATION_CHOOSE] = sJapaneseText_FileScreen_CopyDestinationChoose,
    [FILE_SCREEN_TEXT_COPY_CONFIRM] = sJapaneseText_FileScreen_CopyConfirm,
    [FILE_SCREEN_TEXT_ERASE_CHOOSE] = sJapaneseText_FileScreen_EraseChoose,
    [FILE_SCREEN_TEXT_ERASE_CONFIRM] = sJapaneseText_FileScreen_EraseConfirm,
    [FILE_SCREEN_TEXT_FILE_A_CORRUPT_REVERT] = sJapaneseText_FileScreen_FileACorruptRevert,
    [FILE_SCREEN_TEXT_FILE_B_CORRUPT_REVERT] = sJapaneseText_FileScreen_FileBCorruptRevert,
    [FILE_SCREEN_TEXT_FILE_C_CORRUPT_REVERT] = sJapaneseText_FileScreen_FileCCorruptRevert,
    [FILE_SCREEN_TEXT_FILE_A_CORRUPT_ERASE] = sJapaneseText_FileScreen_FileACorruptErase,
    [FILE_SCREEN_TEXT_FILE_B_CORRUPT_ERASE] = sJapaneseText_FileScreen_FileBCorruptErase,
    [FILE_SCREEN_TEXT_FILE_C_CORRUPT_ERASE] = sJapaneseText_FileScreen_FileCCorruptErase,
    [FILE_SCREEN_TEXT_ERASE_ALL_REFORMAT] = sJapaneseText_FileScreen_EraseAllReformat,
    [FILE_SCREEN_TEXT_ERASE_ALL] = sJapaneseText_FileScreen_EraseAll,
    [FILE_SCREEN_TEXT_CONTINUE_NEW] = sJapaneseText_FileScreen_ContinueNew,
    [FILE_SCREEN_TEXT_CONTINUE_NEW_TIME_ATTACK] = sJapaneseText_FileScreen_ContinueNewTimeAttack,
    [FILE_SCREEN_TEXT_MESSAGE_OPTION] = sJapaneseText_FileScreen_MessageOption,
    [FILE_SCREEN_TEXT_DIFFICULTY] = sJapaneseText_FileScreen_Difficulty,
    [FILE_SCREEN_TEXT_DIFFICULTY_HARD] = sJapaneseText_FileScreen_DifficultyHard,
    [FILE_SCREEN_TEXT_ERASE_FILE_CONFIRM] = sJapaneseText_FileScreen_EraseFileConfirm,
    [FILE_SCREEN_TEXT_LINKING_PLEASE_WAIT] = sJapaneseText_FileScreen_LinkingPleaseWait,
    [FILE_SCREEN_TEXT_UNABLE_TO_DETECT_FUSION] = sJapaneseText_FileScreen_UnableToDetectFusion,
    [FILE_SCREEN_TEXT_LINKING_ERROR] = sJapaneseText_FileScreen_LinkingError,
    [FILE_SCREEN_TEXT_TURN_OFF_CONFIRM_LINK] = sJapaneseText_FileScreen_TurnOffConfirmLink,
    [FILE_SCREEN_TEXT_DO_NOT_TURN_POWER_OFF] = sJapaneseText_FileScreen_DoNotTurnPowerOff,
    [FILE_SCREEN_TEXT_DATA_UPLOAD_COMPLETE] = sJapaneseText_FileScreen_DataUploadComplete,
    [FILE_SCREEN_TEXT_LINK_COMPLETE] = sJapaneseText_FileScreen_LinkComplete,
    [FILE_SCREEN_TEXT_BEST_TIME] = sJapaneseText_FileScreen_BestTime,
    [FILE_SCREEN_TEXT_BEST_TIME_100] = sJapaneseText_FileScreen_BestTime100,
    [FILE_SCREEN_TEXT_ID_PASSWORD] = sJapaneseText_FileScreen_IdPassword,
    [FILE_SCREEN_TEXT_CANT_COPY_TIME_ATTACK] = sJapaneseText_FileScreen_CantCopyTimeAttack,
    [FILE_SCREEN_TEXT_LINKING_ERROR_TRY_AGAIN] = sJapaneseText_FileScreen_LinkingErrorTryAgain,
    [FILE_SCREEN_TEXT_LINKING_ERROR_CHECK_CONNECTION] = sJapaneseText_FileScreen_LinkingErrorCheckConnection,
    [FILE_SCREEN_TEXT_GALLERY_UNLOCK] = sJapaneseText_FileScreen_GalleryUnlock,
    [FILE_SCREEN_TEXT_TIME_ATTACK_RECORD_UNLOCK] = sJapaneseText_FileScreen_TimeAttackRecordUnlock,
    [FILE_SCREEN_TEXT_SOUND_TEST_UNLOCK] = sJapaneseText_FileScreen_SoundTestUnlock,
    [FILE_SCREEN_TEXT_NES_METROID_UNLOCK] = sJapaneseText_FileScreen_NesMetroidUnlock,
};


const u16* const sHiraganaTextPointers_Description[DESCRIPTION_TEXT_END] = {
    [DESCRIPTION_TEXT_LONG_BEAM] = sHiraganaText_Description_LongBeam,
    [DESCRIPTION_TEXT_CHARGE_BEAM] = sHiraganaText_Description_ChargeBeam,
    [DESCRIPTION_TEXT_ICE_BEAM] = sHiraganaText_Description_IceBeam,
    [DESCRIPTION_TEXT_WAVE_BEAM] = sHiraganaText_Description_WaveBeam,
    [DESCRIPTION_TEXT_PLASMA_BEAM] = sHiraganaText_Description_PlasmaBeam,
    [DESCRIPTION_TEXT_MISSILES] = sHiraganaText_Description_Missiles,
    [DESCRIPTION_TEXT_SUPER_MISSILES] = sHiraganaText_Description_SuperMissiles,
    [DESCRIPTION_TEXT_BOMBS] = sHiraganaText_Description_Bombs,
    [DESCRIPTION_TEXT_POWER_BOMBS] = sHiraganaText_Description_PowerBombs,
    [DESCRIPTION_TEXT_VARIA_SUIT] = sHiraganaText_Description_VariaSuit,
    [DESCRIPTION_TEXT_GRAVITY_SUIT] = sHiraganaText_Description_GravitySuit,
    [DESCRIPTION_TEXT_MORPH_BALL] = sHiraganaText_Description_MorphBall,
    [DESCRIPTION_TEXT_POWER_GRIP] = sHiraganaText_Description_PowerGrip,
    [DESCRIPTION_TEXT_SPEEDBOOSTER] = sHiraganaText_Description_Speedbooster,
    [DESCRIPTION_TEXT_HIGH_JUMP] = sHiraganaText_Description_HighJump,
    [DESCRIPTION_TEXT_SCREW_ATTACK] = sHiraganaText_Description_ScrewAttack,
    [DESCRIPTION_TEXT_SPACE_JUMP] = sHiraganaText_Description_SpaceJump,
    [DESCRIPTION_TEXT_UNKNOWN_ITEM] = sHiraganaText_Description_UnknownItem,
    [DESCRIPTION_TEXT_PISTOL] = sHiraganaText_Description_Pistol,
};

const u16* const sHiraganaTextPointers_Story[STORY_TEXT_END] = {
    [STORY_TEXT_PLANET_ZEBES] = sHiraganaText_Story_PlanetZebes,
    [STORY_TEXT_THE_TIMING] = sHiraganaText_Story_TheTiming,
    [STORY_TEXT_COULD_I_SURVIVE] = sHiraganaText_Story_CouldISurvive,
    [STORY_TEXT_EMERGENCY] = sHiraganaText_Story_Emergency,
    [STORY_TEXT_EXTERMINATE] = sHiraganaText_Story_Exterminate,
    [STORY_TEXT_DEFEAT] = sHiraganaText_Story_Defeat,
};

const u16* const sHiraganaTextPointers_FileScreen[FILE_SCREEN_TEXT_END] = {
    [FILE_SCREEN_TEXT_START_GAME] = sHiraganaText_FileScreen_StartGame,
    [FILE_SCREEN_TEXT_COPY_SOURCE_CHOOSE] = sHiraganaText_FileScreen_CopySourceChoose,
    [FILE_SCREEN_TEXT_COPY_DESTINATION_CHOOSE] = sHiraganaText_FileScreen_CopyDestinationChoose,
    [FILE_SCREEN_TEXT_COPY_CONFIRM] = sHiraganaText_FileScreen_CopyConfirm,
    [FILE_SCREEN_TEXT_ERASE_CHOOSE] = sHiraganaText_FileScreen_EraseChoose,
    [FILE_SCREEN_TEXT_ERASE_CONFIRM] = sHiraganaText_FileScreen_EraseConfirm,
    [FILE_SCREEN_TEXT_FILE_A_CORRUPT_REVERT] = sHiraganaText_FileScreen_FileACorruptRevert,
    [FILE_SCREEN_TEXT_FILE_B_CORRUPT_REVERT] = sHiraganaText_FileScreen_FileBCorruptRevert,
    [FILE_SCREEN_TEXT_FILE_C_CORRUPT_REVERT] = sHiraganaText_FileScreen_FileCCorruptRevert,
    [FILE_SCREEN_TEXT_FILE_A_CORRUPT_ERASE] = sHiraganaText_FileScreen_FileACorruptErase,
    [FILE_SCREEN_TEXT_FILE_B_CORRUPT_ERASE] = sHiraganaText_FileScreen_FileBCorruptErase,
    [FILE_SCREEN_TEXT_FILE_C_CORRUPT_ERASE] = sHiraganaText_FileScreen_FileCCorruptErase,
    [FILE_SCREEN_TEXT_ERASE_ALL_REFORMAT] = sHiraganaText_FileScreen_EraseAllReformat,
    [FILE_SCREEN_TEXT_ERASE_ALL] = sHiraganaText_FileScreen_EraseAll,
    [FILE_SCREEN_TEXT_CONTINUE_NEW] = sHiraganaText_FileScreen_ContinueNew,
    [FILE_SCREEN_TEXT_CONTINUE_NEW_TIME_ATTACK] = sHiraganaText_FileScreen_ContinueNewTimeAttack,
    [FILE_SCREEN_TEXT_MESSAGE_OPTION] = sHiraganaText_FileScreen_MessageOption,
    [FILE_SCREEN_TEXT_DIFFICULTY] = sHiraganaText_FileScreen_Difficulty,
    [FILE_SCREEN_TEXT_DIFFICULTY_HARD] = sHiraganaText_FileScreen_DifficultyHard,
    [FILE_SCREEN_TEXT_ERASE_FILE_CONFIRM] = sHiraganaText_FileScreen_EraseFileConfirm,
    [FILE_SCREEN_TEXT_LINKING_PLEASE_WAIT] = sHiraganaText_FileScreen_LinkingPleaseWait,
    [FILE_SCREEN_TEXT_UNABLE_TO_DETECT_FUSION] = sHiraganaText_FileScreen_UnableToDetectFusion,
    [FILE_SCREEN_TEXT_LINKING_ERROR] = sHiraganaText_FileScreen_LinkingError,
    [FILE_SCREEN_TEXT_TURN_OFF_CONFIRM_LINK] = sHiraganaText_FileScreen_TurnOffConfirmLink,
    [FILE_SCREEN_TEXT_DO_NOT_TURN_POWER_OFF] = sHiraganaText_FileScreen_DoNotTurnPowerOff,
    [FILE_SCREEN_TEXT_DATA_UPLOAD_COMPLETE] = sHiraganaText_FileScreen_DataUploadComplete,
    [FILE_SCREEN_TEXT_LINK_COMPLETE] = sHiraganaText_FileScreen_LinkComplete,
    [FILE_SCREEN_TEXT_BEST_TIME] = sHiraganaText_FileScreen_BestTime,
    [FILE_SCREEN_TEXT_BEST_TIME_100] = sHiraganaText_FileScreen_BestTime100,
    [FILE_SCREEN_TEXT_ID_PASSWORD] = sHiraganaText_FileScreen_IdPassword,
    [FILE_SCREEN_TEXT_CANT_COPY_TIME_ATTACK] = sHiraganaText_FileScreen_CantCopyTimeAttack,
    [FILE_SCREEN_TEXT_LINKING_ERROR_TRY_AGAIN] = sHiraganaText_FileScreen_LinkingErrorTryAgain,
    [FILE_SCREEN_TEXT_LINKING_ERROR_CHECK_CONNECTION] = sHiraganaText_FileScreen_LinkingErrorCheckConnection,
    [FILE_SCREEN_TEXT_GALLERY_UNLOCK] = sHiraganaText_FileScreen_GalleryUnlock,
    [FILE_SCREEN_TEXT_TIME_ATTACK_RECORD_UNLOCK] = sHiraganaText_FileScreen_TimeAttackRecordUnlock,
    [FILE_SCREEN_TEXT_SOUND_TEST_UNLOCK] = sHiraganaText_FileScreen_SoundTestUnlock,
    [FILE_SCREEN_TEXT_NES_METROID_UNLOCK] = sHiraganaText_FileScreen_NesMetroidUnlock,
};


const u16* const sEnglishTextPointers_Description[DESCRIPTION_TEXT_END] = {
    [DESCRIPTION_TEXT_LONG_BEAM] = sEnglishText_Description_LongBeam,
    [DESCRIPTION_TEXT_CHARGE_BEAM] = sEnglishText_Description_ChargeBeam,
    [DESCRIPTION_TEXT_ICE_BEAM] = sEnglishText_Description_IceBeam,
    [DESCRIPTION_TEXT_WAVE_BEAM] = sEnglishText_Description_WaveBeam,
    [DESCRIPTION_TEXT_PLASMA_BEAM] = sEnglishText_Description_PlasmaBeam,
    [DESCRIPTION_TEXT_MISSILES] = sEnglishText_Description_Missiles,
    [DESCRIPTION_TEXT_SUPER_MISSILES] = sEnglishText_Description_SuperMissiles,
    [DESCRIPTION_TEXT_BOMBS] = sEnglishText_Description_Bombs,
    [DESCRIPTION_TEXT_POWER_BOMBS] = sEnglishText_Description_PowerBombs,
    [DESCRIPTION_TEXT_VARIA_SUIT] = sEnglishText_Description_VariaSuit,
    [DESCRIPTION_TEXT_GRAVITY_SUIT] = sEnglishText_Description_GravitySuit,
    [DESCRIPTION_TEXT_MORPH_BALL] = sEnglishText_Description_MorphBall,
    [DESCRIPTION_TEXT_POWER_GRIP] = sEnglishText_Description_PowerGrip,
    [DESCRIPTION_TEXT_SPEEDBOOSTER] = sEnglishText_Description_Speedbooster,
    [DESCRIPTION_TEXT_HIGH_JUMP] = sEnglishText_Description_HighJump,
    [DESCRIPTION_TEXT_SCREW_ATTACK] = sEnglishText_Description_ScrewAttack,
    [DESCRIPTION_TEXT_SPACE_JUMP] = sEnglishText_Description_SpaceJump,
    [DESCRIPTION_TEXT_UNKNOWN_ITEM] = sEnglishText_Description_UnknownItem,
    [DESCRIPTION_TEXT_PISTOL] = sEnglishText_Description_Pistol,
};

const u16* const sEnglishTextPointers_Story[STORY_TEXT_END] = {
    [STORY_TEXT_PLANET_ZEBES] = sEnglishText_Story_PlanetZebes,
    [STORY_TEXT_THE_TIMING] = sEnglishText_Story_TheTiming,
    [STORY_TEXT_COULD_I_SURVIVE] = sEnglishText_Story_CouldISurvive,
    [STORY_TEXT_EMERGENCY] = sEnglishText_Story_Emergency,
    [STORY_TEXT_EXTERMINATE] = sEnglishText_Story_Exterminate,
    [STORY_TEXT_DEFEAT] = sEnglishText_Story_Defeat,
};

const u16* const sEnglishTextPointers_FileScreen[FILE_SCREEN_TEXT_END] = {
    [FILE_SCREEN_TEXT_START_GAME] = sEnglishText_FileScreen_StartGame,
    [FILE_SCREEN_TEXT_COPY_SOURCE_CHOOSE] = sEnglishText_FileScreen_CopySourceChoose,
    [FILE_SCREEN_TEXT_COPY_DESTINATION_CHOOSE] = sEnglishText_FileScreen_CopyDestinationChoose,
    [FILE_SCREEN_TEXT_COPY_CONFIRM] = sEnglishText_FileScreen_CopyConfirm,
    [FILE_SCREEN_TEXT_ERASE_CHOOSE] = sEnglishText_FileScreen_EraseChoose,
    [FILE_SCREEN_TEXT_ERASE_CONFIRM] = sEnglishText_FileScreen_EraseConfirm,
    [FILE_SCREEN_TEXT_FILE_A_CORRUPT_REVERT] = sEnglishText_FileScreen_FileACorruptRevert,
    [FILE_SCREEN_TEXT_FILE_B_CORRUPT_REVERT] = sEnglishText_FileScreen_FileBCorruptRevert,
    [FILE_SCREEN_TEXT_FILE_C_CORRUPT_REVERT] = sEnglishText_FileScreen_FileCCorruptRevert,
    [FILE_SCREEN_TEXT_FILE_A_CORRUPT_ERASE] = sEnglishText_FileScreen_FileACorruptErase,
    [FILE_SCREEN_TEXT_FILE_B_CORRUPT_ERASE] = sEnglishText_FileScreen_FileBCorruptErase,
    [FILE_SCREEN_TEXT_FILE_C_CORRUPT_ERASE] = sEnglishText_FileScreen_FileCCorruptErase,
    [FILE_SCREEN_TEXT_ERASE_ALL_REFORMAT] = sEnglishText_FileScreen_EraseAllReformat,
    [FILE_SCREEN_TEXT_ERASE_ALL] = sEnglishText_FileScreen_EraseAll,
    [FILE_SCREEN_TEXT_CONTINUE_NEW] = sEnglishText_FileScreen_ContinueNew,
    [FILE_SCREEN_TEXT_CONTINUE_NEW_TIME_ATTACK] = sEnglishText_FileScreen_ContinueNewTimeAttack,
    [FILE_SCREEN_TEXT_MESSAGE_OPTION] = sEnglishText_FileScreen_MessageOption,
    [FILE_SCREEN_TEXT_DIFFICULTY] = sEnglishText_FileScreen_Difficulty,
    [FILE_SCREEN_TEXT_DIFFICULTY_HARD] = sEnglishText_FileScreen_DifficultyHard,
    [FILE_SCREEN_TEXT_ERASE_FILE_CONFIRM] = sEnglishText_FileScreen_EraseFileConfirm,
    [FILE_SCREEN_TEXT_LINKING_PLEASE_WAIT] = sEnglishText_FileScreen_LinkingPleaseWait,
    [FILE_SCREEN_TEXT_UNABLE_TO_DETECT_FUSION] = sEnglishText_FileScreen_UnableToDetectFusion,
    [FILE_SCREEN_TEXT_LINKING_ERROR] = sEnglishText_FileScreen_LinkingError,
    [FILE_SCREEN_TEXT_TURN_OFF_CONFIRM_LINK] = sEnglishText_FileScreen_TurnOffConfirmLink,
    [FILE_SCREEN_TEXT_DO_NOT_TURN_POWER_OFF] = sEnglishText_FileScreen_DoNotTurnPowerOff,
    [FILE_SCREEN_TEXT_DATA_UPLOAD_COMPLETE] = sEnglishText_FileScreen_DataUploadComplete,
    [FILE_SCREEN_TEXT_LINK_COMPLETE] = sEnglishText_FileScreen_LinkComplete,
    [FILE_SCREEN_TEXT_BEST_TIME] = sEnglishText_FileScreen_BestTime,
    [FILE_SCREEN_TEXT_BEST_TIME_100] = sEnglishText_FileScreen_BestTime100,
    [FILE_SCREEN_TEXT_ID_PASSWORD] = sEnglishText_FileScreen_IdPassword,
    [FILE_SCREEN_TEXT_CANT_COPY_TIME_ATTACK] = sEnglishText_FileScreen_CantCopyTimeAttack,
    [FILE_SCREEN_TEXT_LINKING_ERROR_TRY_AGAIN] = sEnglishText_FileScreen_LinkingErrorTryAgain,
    [FILE_SCREEN_TEXT_LINKING_ERROR_CHECK_CONNECTION] = sEnglishText_FileScreen_LinkingErrorCheckConnection,
    [FILE_SCREEN_TEXT_GALLERY_UNLOCK] = sEnglishText_FileScreen_GalleryUnlock,
    [FILE_SCREEN_TEXT_TIME_ATTACK_RECORD_UNLOCK] = sEnglishText_FileScreen_TimeAttackRecordUnlock,
    [FILE_SCREEN_TEXT_SOUND_TEST_UNLOCK] = sEnglishText_FileScreen_SoundTestUnlock,
    [FILE_SCREEN_TEXT_NES_METROID_UNLOCK] = sEnglishText_FileScreen_NesMetroidUnlock,
};
