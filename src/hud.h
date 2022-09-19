#ifndef HUD_H
#define HUD_H

#include "types.h"

// Globals

extern u8 gHideHud;
extern u8 gMissileHighlightStatus;
extern u8 gPowerBombHighlightStatus;
extern u8 gSuperMissileHighlightStatus;
extern struct HudDigits gEnergyDigits;
extern struct HudDigits gMaxEnergyDigits;
extern struct HudDigits gMissileDigits;
extern struct HudDigits gPowerBombDigits;
extern struct HudDigits gSuperMissileDigits;

// Structs

struct HudDigits {
    u8 ones;
    u8 tens;
    u8 hundreds;
    u8 thousands;
};

// Functions

void HUDUpdateOAM(void);
void HUDUpdateEnergyTanks(u8* pDst, u8* pSrcNormal, u8* pSrcRefill, u8 nbrTanks, u8 refillStage);
void HUDDrawEnergy(u8 file_number);
void HUDDrawMissileDigits(u16 hundredsPlace, u16 tensPlace, u16 onesPlace, u16 highlightStatus);
void HUDDrawSuperMissileDigits(u16 tensPlace, u16 onesPlace, u16 highlightStatus);
void HUDDrawPowerBombDigits(u16 tensPlace, u16 onesPlace, u16 highlightStatus);
void HUDDrawMissiles(u8 updateHighlight);
void HUDDrawPowerBomb(u8 updateHighlight);
void HUDDrawSuperMissiles(u8 updateHighlight);
void HUDDrawHighlight(void);
void HUDDrawSuitless(void);
void HUDDraw(void);

#endif /* HUD_H */