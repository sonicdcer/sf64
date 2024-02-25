#include "sys.h"
#include "sf64audio_provisional.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001DF50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E444.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E720.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E778.s")

void func_8001E7C8(void) {
    gThreadCmdWritePos = 0;
    gThreadCmdReadPos = 0;
    osCreateMesgQueue(gAudioTaskStartQueue, sAudioTaskStartMsg, 1);
    osCreateMesgQueue(gThreadCmdProcQueue, sThreadCmdProcMsg, 4);
    osCreateMesgQueue(gAudioUnkQueue, sAudioUnkMsg, 1);
    osCreateMesgQueue(gAudioResetQueue, sAudioResetMsg, 1);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E850.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E8A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E8CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E8F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E920.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E998.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001E9AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001ECAC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001ED14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001ED34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001ED8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001EE00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/func_8001EE3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/D_800C90F0.s")
