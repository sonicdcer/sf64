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

void __osContGetInitData(u8* pattern, OSContStatus* data) {
    u8* ptr;
    __OSContRequestHeader requestHeader;
    s32 i;
    u8 bits;

    bits = 0;
    ptr = (u8*)__osContPifRam.ramarray;
    for (i = 0; i < __osMaxControllers; i++, ptr += sizeof(requestHeader), data++) {
        requestHeader = *(__OSContRequestHeader*)ptr;
        data->errno = (requestHeader.rxsize & 0xC0) >> 4;
        if (data->errno == 0) {
            data->type = requestHeader.typel << 8 | requestHeader.typeh;
            data->status = requestHeader.status;

            bits |= 1 << i;
        }
    }
    *pattern = bits;
}

void __osPackRequestData(u8 poll) {
    u8* ptr;
    __OSContRequestHeader requestHeader;
    s32 i;

    for (i = 0; i < 16; i++) {
        __osContPifRam.ramarray[i] = 0;
    }

    __osContPifRam.pifstatus = CONT_CMD_READ_BUTTON;
    ptr = (u8*)__osContPifRam.ramarray;
    requestHeader.align = 255;
    requestHeader.txsize = 1;
    requestHeader.rxsize = 3;
    requestHeader.poll = poll;
    requestHeader.typeh = 255;
    requestHeader.typel = 255;
    requestHeader.status = 255;
    requestHeader.align1 = 255;

    for (i = 0; i < __osMaxControllers; i++) {
        *(__OSContRequestHeader*)ptr = requestHeader;
        ptr += sizeof(requestHeader);
    }
    *ptr = 254;
}
