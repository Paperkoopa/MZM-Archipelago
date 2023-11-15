#include "data/rooms/chozodia_rooms_data.h"
#include "macros.h"

const u8 sChozodia_52_Scrolls[SCROLL_DATA_SIZE(1)] = {
	86, // Room
	1, // Number of scrolls
	
	// Scroll 0
	2, 46, // X bounds
	4, 20, // Y bounds
	UCHAR_MAX, UCHAR_MAX, // Breakeable block position
	UCHAR_MAX, // Breakeable block direction
	UCHAR_MAX, // Breakeable block Y bound extension
};

const u8 sChozodia_86_Clipdata[246] = INCBIN_U8("data/rooms/chozodia/Chozodia_86_Clipdata.gfx");

const u8 sChozodia_86_Bg2[188] = INCBIN_U8("data/rooms/chozodia/Chozodia_86_Bg2.gfx");

const u8 sChozodia_86_Bg1[778] = INCBIN_U8("data/rooms/chozodia/Chozodia_86_Bg1.gfx");

const u8 sChozodia_86_Spriteset0[ENEMY_ROOM_DATA_ARRAY_SIZE(1)] = {
	ROOM_SPRITE_DATA_TERMINATOR
};

const u8 sChozodia_86_Bg0[23] = INCBIN_U8("data/rooms/chozodia/Chozodia_86_Bg0.gfx");

