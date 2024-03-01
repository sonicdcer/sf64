#include "sys.h"
#include "sf64audio_provisional.h"

OSMesgQueue sAudioTaskStartQueue;
OSMesgQueue sThreadCmdProcQueue;
OSMesgQueue sAudioUnkQueue;
OSMesgQueue sAudioResetQueue;
AudioCmd gThreadCmdBuffer[256];
OSMesg sAudioTaskStartMsg[1];
OSMesg sThreadCmdProcMsg[4];
OSMesg sAudioUnkMsg[1];
OSMesg sAudioResetMsg[1];

s8 gThreadCmdWritePos = 0;
s8 gThreadCmdReadPos = 0;
OSMesgQueue* gAudioTaskStartQueue = &sAudioTaskStartQueue;
OSMesgQueue* gThreadCmdProcQueue = &sThreadCmdProcQueue;
OSMesgQueue* gAudioUnkQueue = &sAudioUnkQueue;
OSMesgQueue* gAudioResetQueue = &sAudioResetQueue;
s32 gMaxAbiCmdCnt = 128;
AudioTask* gWaitingAudioTask = NULL;
s32 D_800C7C70 = 0;
u8 gCurCmdReadPos = 0;
u8 gThreadCmdQueueFinished = 0;

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/AudioThread_QueueCmd.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/AudioThread_QueueCmdF32.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/AudioThread_QueueCmdS32.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_thread/AudioThread_QueueCmdS8.s")

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
