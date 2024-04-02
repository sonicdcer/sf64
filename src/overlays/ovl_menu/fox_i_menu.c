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
        case 103:
            Title_80187754();
            break;

        case 104:
            Title_801878D8();
            break;

        case 105:
            Map_8019E8D0();
            break;

        case 106:
            Map_801A01A8();
            break;

        case 107:
            Option_Init();
            break;

        case 108:
            Option_DrawEntry();
            break;

        case 109:
            Map_8019E85C();
            break;

        case 110:
            Map_8019E8C8();

        default:
            break;
    }
}
