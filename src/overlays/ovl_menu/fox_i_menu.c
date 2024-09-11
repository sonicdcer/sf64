#include "global.h"

void Title_Main(void);
void Title_Draw(void);
void Option_Main(void);
void Option_Entry_Draw(void);
void Map_GameOver(void);
void Map_8019E8C8(void);
void Map_Main(void);
void Map_Draw(void);

s32 D_menu_801B7BA0;
s32 D_menu_801AD9F0 = 0;

void OvlMenu_CallFunction(u32 mode, void* ptr) {
    switch (mode) {
        case OVLCALL_TITLE_UPDATE:
            Title_Main();
            break;

        case OVLCALL_TITLE_DRAW:
            Title_Draw();
            break;

        case OVLCALL_MAP_UPDATE:
            Map_Main();
            break;

        case OVLCALL_MAP_DRAW:
            Map_Draw();
            break;

        case OVLCALL_OPTION_UPDATE:
            Option_Main();
            break;

        case OVLCALL_OPTION_DRAW:
            Option_Entry_Draw();
            break;

        case OVLCALL_GAME_OVER_UPDATE:
            Map_GameOver();
            break;

        case OVLCALL_UNKMAP_DRAW:
            Map_8019E8C8();

        default:
            break;
    }
}
