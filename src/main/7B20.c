#include "common.h"

typedef struct {
    s8 unk0;
    char pad_0[0x27];
    void* unk28;
    s32 unk2C;
    s32 unk30;
} UnkStruct_func_80007088;

extern s32 D_8013C3D0;
extern s32 D_80144BD0;

void func_80006F20(void) {
    D_80144BD0 = &D_8013C3D0;
}

s32 func_80006F38(s32 arg0) {
    s32 tmp = D_80144BD0;

    D_80144BD0 = ((arg0 + 0xF) & ~0xF) + D_80144BD0;
    return tmp;
}

// https://decomp.me/scratch/uf9Ap 98.50%
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80006F60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_80006FD8.s")

void func_80007068(s32* arg0, s32 arg1) {
    *arg0 += arg1;
}

void func_8000707C(s32* arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_80007088(UnkStruct_func_80007088* arg0) {
    void (*temp_v0)(s32, s32);

    temp_v0 = arg0->unk28;
    if (temp_v0 != NULL) {
        temp_v0(arg0->unk2C, arg0->unk30);
    }
    arg0->unk0 = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/7B20/func_800070C8.s")
