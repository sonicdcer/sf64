#include "global.h"

void func_800033E0(void* var_s2, void* var_s1, ptrdiff_t var_s0) {
    osInvalICache(var_s1, var_s0);
    osInvalDCache(var_s1, var_s0);
    while (var_s0 > 0x100) {
        osPiStartDma(&D_800E2110, 0, 0, (uintptr_t) var_s2, var_s1, 0x100, &D_800E20F0);
        var_s0 -= 0x100;
        var_s2 = (void*) ((uintptr_t) var_s2 + 0x100);
        var_s1 = (void*) ((uintptr_t) var_s1 + 0x100);
        osRecvMesg(&D_800E20F0, NULL, OS_MESG_BLOCK);
    }
    if (var_s0 != 0) {
        osPiStartDma(&D_800E2110, 0, 0, (uintptr_t) var_s2, var_s1, var_s0, &D_800E20F0);
        osRecvMesg(&D_800E20F0, NULL, OS_MESG_BLOCK);
    }
}

void func_800034E8(u8 arg0) {
    s32 i;

    D_80137E88 |= 1;
    if (arg0 == 1) {
        if (D_80137E8A == 0) {
            if (D_80137E88 == 1) {
                osViBlack(1);
            } else {
                for (i = 0; i < 0x3C0; i++) {
                    D_8038F080[i] = D_80137E88;
                }
                osWritebackDCacheAll();
                osViSwapBuffer(&D_8038F300);
                osViRepeatLine(1);
            }
            D_80137E8A = 1;
        }
    } else if (D_80137E8A == 1) {
        osViRepeatLine(0);
        osViBlack(0);
        D_80137E8A = 0;
    }
}
