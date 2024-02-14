#include "global.h"

typedef struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ char pad_18[0x6];
    /* 0x1E */ s16 unk_1E;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ char pad24[0x6];
    /* 0x2A */ s16 unk_2A;
} UnkStruct_func_8000BFA8;

extern s32 D_800C7C30;
extern s32 D_8014C1C0;
extern s32 D_8014C1D0;

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BC70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BD38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BE24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BE94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BF14.s")

void func_8000BF6C(s32* arg0, s32 arg1, s32 arg2) {
    arg0[0] = (arg1 + 0xF) & ~0xF;
    arg0[1] = (arg1 + 0xF) & ~0xF;
    arg0[2] = arg2 - (arg1 & 0xF);
    arg0[3] = 0;
}

void func_8000BF94(s32* arg0) {
    arg0[4] = 0;
    arg0[0] = 0;
    arg0[2] = arg0[1];
}

void func_8000BFA8(UnkStruct_func_8000BFA8* arg0) {
    arg0->unk_10 = 0;
    arg0->unk_00 = 0;
    arg0->unk_20 = arg0->unk_04 + arg0->unk_0C;
    arg0->unk_1E = -1;
    arg0->unk_2A = -1;
    arg0->unk_14 = arg0->unk_08 = arg0->unk_04;
}

void func_8000BFD8(s32* arg0) {
    arg0[3] = 0;
    arg0[1] = arg0[0];
}

void func_8000BFE8(s32 arg0) {
    func_8000BF6C(&D_8014C1D0, gAudioDataBuffer, arg0);
    func_8000BF6C(&D_8014C1C0, &gAudioDataBuffer[arg0], D_800C7C30 - arg0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C044.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C0C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C13C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C1F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C2B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C990.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000C9E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000CAF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000CEC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D08C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D104.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000D4A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DB0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DB64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DBE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DC34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DC84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DCD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DD68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000DFFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000E1C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000E208.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000E290.s")
