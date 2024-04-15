#include "global.h"

void Title_80187754(void);
void Title_801878D8(void);
void Option_Init(void);
void Option_DrawEntry(void);
void Map_8019E85C(void);
void Map_8019E8C8(void);
void Map_8019E8D0(void);
void Map_801A01A8(void);

s32 D_menu_801B7BA0;
s32 D_menu_801AD9F0 = 0;

void OvlMenu_CallFunction(u32 mode, void* ptr) {
    switch (mode) {
        case OVLCALL_TITLE_UPDATE:
            Title_80187754();
            break;

        case OVLCALL_TITLE_DRAW:
            Title_801878D8();
            break;

        case OVLCALL_MAP_UPDATE:
            Map_8019E8D0();
            break;

        case OVLCALL_MAP_DRAW:
            Map_801A01A8();
            break;

        case OVLCALL_OPTION_UPDATE:
            Option_Init();
            break;

        case OVLCALL_OPTION_DRAW:
            Option_DrawEntry();
            break;

        case OVLCALL_GAME_OVER_UPDATE:
            Map_8019E85C();
            break;

        case OVLCALL_UNKMAP_DRAW:
            Map_8019E8C8();

        default:
            break;
    }
}
