#include "global.h"

void func_EBFBE0_80187754(void);
void func_EBFBE0_801878D8(void);
void func_EBFBE0_801920C4(void);
void func_EBFBE0_80192340(void);
void func_EBFBE0_8019E85C(void);
void func_EBFBE0_8019E8C8(void);
void func_EBFBE0_8019E8D0(void);
void func_EBFBE0_801A01A8(void);

void func_EBFBE0_80187520(s32 arg0, s32 arg1) {
    switch (arg0) {
        case 0x67:
            func_EBFBE0_80187754();
            break;

        case 0x68:
            func_EBFBE0_801878D8();
            break;

        case 0x69:
            func_EBFBE0_8019E8D0();
            break;

        case 0x6A:
            func_EBFBE0_801A01A8();
            break;

        case 0x6B:
            func_EBFBE0_801920C4();
            break;

        case 0x6C:
            func_EBFBE0_80192340();
            break;

        case 0x6D:
            func_EBFBE0_8019E85C();
            break;

        case 0x6E:
            func_EBFBE0_8019E8C8();

        default:
            break;
    }
}
