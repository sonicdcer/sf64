#include "global.h"

extern s32 D_8013C3D0[0x2200];
extern s32* D_80144BD0;

void func_80006F20(void) {
    D_80144BD0 = D_8013C3D0;
}

void* func_80006F38(s32 arg0) {
    void* tmp = D_80144BD0;

    D_80144BD0 = (void*) (((arg0 + 0xF) & ~0xF) + (uintptr_t) D_80144BD0);
    return tmp;
}
