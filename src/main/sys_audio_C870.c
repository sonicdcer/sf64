#include "global.h"

extern s32 D_800C7C30;
extern s32 D_8014C1C0;
extern s32 D_8014C1D0;

void func_8000BF6C(s32* arg0, u8*, s32 arg2);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BC70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BD38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BE24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BE94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BF14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BF6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BF94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BFA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sys_audio_C870/func_8000BFD8.s")

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
