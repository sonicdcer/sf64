#include "global.h"

void func_menu_80187754(void);
void func_menu_801878D8(void);
void Option_Init(void);
void Option_DrawEntry(void);
void func_menu_8019E85C(void);
void func_menu_8019E8C8(void);
void func_menu_8019E8D0(void);
void func_menu_801A01A8(void);

s32 D_menu_801B7BA0;
s32 D_menu_801AD9F0 = 0;

void func_menu_80187520(u32 mode, void* ptr) {
    switch (mode) {
        case 103:
            func_menu_80187754();
            break;

        case 104:
            func_menu_801878D8();
            break;

        case 105:
            func_menu_8019E8D0();
            break;

        case 106:
            func_menu_801A01A8();
            break;

        case 107:
            Option_Init();
            break;

        case 108:
            Option_DrawEntry();
            break;

        case 109:
            func_menu_8019E85C();
            break;

        case 110:
            func_menu_8019E8C8();

        default:
            break;
    }
}
