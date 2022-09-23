#ifndef GAME_STATE_STRUCT_H
#define GAME_STATE_STRUCT_H

#include "types.h"

extern u8 gDebugFlag;
extern u8 gDisablePause;
extern u8 gShipLandingFlag;
extern u16 gButtonInput;
extern u16 gPreviousButtonInput;
extern u16 gChangedInput;
extern i8 gIsLoadingFile;
extern i8 gPauseScreenFlag;
extern i8 gClearedEveryFrame;
extern u8 gFrameCounter8Bit;
extern u16 gFrameCounter16Bit;
extern u8 gDifficulty;
extern i8 gLanguage;
extern u8 gResetGame;

extern i16 gMainGameMode;
extern i16 gGameModeSub1;
extern i8 gGameModeSub2;
extern i8 gGameModeSub3;

#endif