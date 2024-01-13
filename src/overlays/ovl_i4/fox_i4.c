#include "global.h"

void func_i4_8018927C(u32);
void func_i4_8018D394(u32);
void func_i4_8018D454(u32);
void func_i4_8018D7F0(u32);
void func_i4_8018D960(u32);
void func_i4_8018E710(u32);
void func_i4_8018E870(u32);
void func_i4_80191BAC(u32);
void func_i4_80191DB0(u32);

UNK_TYPE D_E51970_801A03C0;
s32 D_i4_8019EDD0 = 0;

void func_i4_80187520(u32 arg0, void *arg1) {
    switch (arg0) {
    case 0x5A:
        func_i4_8018927C(arg1);
        break;
    case 0x5B:
        func_i4_8018E710(arg1);
        break;
    case 0x5C:
        func_i4_8018E870(arg1);
        break;
    case 0x5D:
        func_i4_80191BAC(arg1);
        break;
    case 0x5E:
        func_i4_80191DB0(arg1);
        break;
    case 0x5F:
        func_i4_8018D7F0(arg1);
        break;
    case 0x60:
        func_i4_8018D960(arg1);
        break;
    case 0x61:
        func_i4_8018D394(arg1);
        break;
    case 0x62:
        func_i4_8018D454(arg1);
    default:
        PRINTF("i4 指定外！\n"); // Not specified!
        break;
    }
}
