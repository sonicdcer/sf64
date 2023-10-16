#include "global.h"
#include "PR/controller.h"

s32 osContInit(OSMesgQueue* mq, u8* bitpattern, OSContStatus* data) {
    OSMesg dummy;
    s32 ret = 0;
    OSTime t;
    OSTimer mytimer;
    OSMesgQueue timerMesgQueue;

    if (__osContinitialized != 0) {
        return 0;
    }

    __osContinitialized = 1;
    t = osGetTime();

    if (t < UNK(osClockRate)) {
        osCreateMesgQueue(&timerMesgQueue, &dummy, 1);
        osSetTimer(&mytimer, UNK(osClockRate) - t, 0, &timerMesgQueue, &dummy);
        osRecvMesg(&timerMesgQueue, &dummy, OS_MESG_BLOCK);
    }
    __osMaxControllers = 4;

    __osPackRequestData(CONT_CMD_REQUEST_STATUS);

    ret = __osSiRawStartDma(OS_WRITE, __osContPifRam.ramarray);
    osRecvMesg(mq, &dummy, OS_MESG_BLOCK);

    ret = __osSiRawStartDma(OS_READ, __osContPifRam.ramarray);
    osRecvMesg(mq, &dummy, OS_MESG_BLOCK);

    __osContGetInitData(bitpattern, data);
    __osContLastCmd = CONT_CMD_REQUEST_STATUS;
    __osSiCreateAccessQueue();
    osCreateMesgQueue(&__osEepromTimerQ, &__osEepromTimerMsg, 1);

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/io/controller/__osContGetInitData.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/io/controller/__osPackRequestData.s")
