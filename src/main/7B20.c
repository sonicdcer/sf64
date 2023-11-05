#include "global.h"

typedef void (*unkFunc_80007088)(s32, s32);

typedef struct {
    u8 unk0;
    OSTimer unk8;
    unkFunc_80007088 unk28;
    s32 unk2C;
    s32 unk30;
} UnkStruct_func_80007088;

extern s32 D_8013C3D0;
extern s32 D_80144BD0;
extern UnkStruct_func_80007088 D_80144BE0[];

void func_80006F20(void) {
    D_80144BD0 = (s32) &D_8013C3D0;
}

s32 func_80006F38(s32 arg0) {
    s32 tmp = D_80144BD0;

    D_80144BD0 = ((arg0 + 0xF) & ~0xF) + D_80144BD0;
    return tmp;
}

UnkStruct_func_80007088* func_80006F60(void) {
    s32 i;

    for(i = 0; i < 0x10; i++) {
        if(D_80144BE0[i].unk0 == 0) {
            return &D_80144BE0[i];
        }
    }
    return NULL;
}

s32 func_80006FD8(u64 arg0, void *arg2, s32 arg3, s32 arg4) {
    UnkStruct_func_80007088 *temp_v0;

    temp_v0 = func_80006F60();
    if (temp_v0 == NULL) {
        return -1;
    }
    temp_v0->unk0 = 1;
    temp_v0->unk28 = arg2;
    temp_v0->unk2C = arg3;
    temp_v0->unk30 = arg4;
    return osSetTimer(&temp_v0->unk8, arg0, 0, &D_800E2338, temp_v0);
}

void func_80007068(s32* arg0, s32 arg1) {
    *arg0 += arg1;
}

void func_8000707C(s32* arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_80007088(UnkStruct_func_80007088* arg0) {
    if (arg0->unk28 != NULL) {
        arg0->unk28(arg0->unk2C, arg0->unk30);
    }
    arg0->unk0 = 0;
}

void func_800070C8(u64 arg0) {
    OSTimer sp30;
    void *sp2C;

    osSetTimer(&sp30, arg0, 0, &D_800E2390, NULL);
    osRecvMesg(&D_800E2390, &sp2C, 1);
}
