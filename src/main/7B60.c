#include "global.h"

extern UnkStruct_func_80007088 D_80144BE0[0x10];

UnkStruct_func_80007088* func_80006F60(void) {
    s32 i;

    for (i = 0; i < 0x10; i++) {
        if (D_80144BE0[i].unk0 == 0) {
            return &D_80144BE0[i];
        }
    }
    return NULL;
}

s32 func_80006FD8(u64 arg0, void* arg2, s32* arg3, s32 arg4) {
    UnkStruct_func_80007088* temp_v0;

    temp_v0 = func_80006F60();
    if (temp_v0 == NULL) {
        return -1;
    }
    temp_v0->unk0 = 1;
    temp_v0->unk28 = arg2;
    temp_v0->unk2C = arg3;
    temp_v0->unk30 = arg4;
    return osSetTimer(&temp_v0->unk8, arg0, 0, &gThread7msgQueue, temp_v0);
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
    OSMesg sp2C;

    osSetTimer(&sp30, arg0, 0, &D_800E2390, NULL);
    osRecvMesg(&D_800E2390, &sp2C, OS_MESG_BLOCK);
}
