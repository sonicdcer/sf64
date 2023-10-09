#include "common.h"

s32 func_80023FC0(s32, s32, s32);
s32 func_800246D0(void*, s8*, s32, s32);
s32 func_8001F9E0(s32 arg0, s32 arg1, s32 arg2);

// matches with IDO 5.3/7.1 -O2 -g0
#ifdef NON_MATCHING
s32 func_8001F9E0(s32 arg0, s32 arg1, s32 arg2) {
    return func_80023FC0(arg0, arg1, arg2) + arg2;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/205E0/func_8001F9E0.s")
#endif

// matches with IDO 5.3/7.1 -O2 -g0
#ifdef NON_MATCHING
s32 func_8001FA04(s8* arg0, s32 arg1, s32 arg2) {
    s32 ret = func_800246D0(func_8001F9E0, arg0, arg1, arg2);

    if (ret >= 0) {
        arg0[ret] = 0;
    }
    return ret;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/205E0/func_8001FA04.s")
#endif

// https://decomp.me/scratch/Gt8dW close
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/205E0/func_8001FA54.s")
