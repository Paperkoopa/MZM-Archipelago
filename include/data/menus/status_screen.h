#ifndef STATUS_SCREEN_MENU_DATA_H
#define STATUS_SCREEN_MENU_DATA_H

#include "types.h"
#include "structs/menus/status_screen.h"

extern const u8 sStatusScreenGroupsData[13][5];
extern const u8 sStatusScreenUnknownItemsData[10][5];
extern const struct StatusScreenItemData sStatusScreenItemsData[18];
extern const struct StatusScreenItemAcquisitionData sStatusScreenItemsAcquisitionData[22];

// ...

extern const u8 sStatusScreenRowsData[6][3];

// ...

extern const u8* const sStatusScreenBeamFlagsOrderPointer;
extern const u16* const sMinimapDataPointers[11];

#endif /* STATUS_SCREEN_MENU_DATA_H */
