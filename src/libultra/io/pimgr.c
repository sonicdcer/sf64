#include "global.h"
#include "piint.h"
#include "PR/rdb.h"

void ramromMain(void* arg);
extern OSMesg piEventBuf[];
extern OSMesgQueue piEventQueue;
extern OSThread piThread;
extern char piThreadStack[];
extern OSThread ramromThread;
extern char ramromThreadStack[];

#ifdef DATA_IMPORT_PENDING
OSDevMgr __osPiDevMgr = { 0 };

void osCreatePiMgr(OSPri pri, OSMesgQueue* cmdQ, OSMesg* cmdBuf, s32 cmdMsgCnt) {
    u32 savedMask;
    OSPri oldPri;
    OSPri myPri;

    if (__osPiDevMgr.active) {
        return;
    }
    osCreateMesgQueue(cmdQ, cmdBuf, cmdMsgCnt);
    osCreateMesgQueue(&piEventQueue, piEventBuf, 1);

    if (!__osPiAccessQueueEnabled) {
        __osPiCreateAccessQueue();
    }

    osSetEventMesg(OS_EVENT_PI, &piEventQueue, (OSMesg) 0x22222222);
    oldPri = -1;
    myPri = osGetThreadPri(NULL);

    if (myPri < pri) {
        oldPri = myPri;
        osSetThreadPri(NULL, pri);
    }

    savedMask = __osDisableInt();
    __osPiDevMgr.active = 1;
    __osPiDevMgr.thread = &piThread;
    __osPiDevMgr.cmdQueue = cmdQ;
    __osPiDevMgr.evtQueue = &piEventQueue;
    __osPiDevMgr.acsQueue = &__osPiAccessQueue;
    __osPiDevMgr.dma = __osPiRawStartDma;
    __osPiDevMgr.edma = __osEPiRawStartDma;
    osCreateThread(&piThread, 0, __osDevMgrMain, &__osPiDevMgr, &piThreadStack[OS_PIM_STACKSIZE], pri);
    osStartThread(&piThread);
    osCreateThread(&ramromThread, 0, ramromMain, NULL, &ramromThreadStack[1024], (OSPri) pri - 1);
    osStartThread(&ramromThread);

    __osRestoreInt(savedMask);

    if (oldPri != -1) {
        osSetThreadPri(NULL, oldPri);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/io/pimgr/osCreatePiMgr.s")
#endif

extern OSMesg freeRamromBuf[];
extern OSMesgQueue freeRamromQ;
extern OSMesg getRamromBuf[];
extern OSMesgQueue getRamromQ;

void ramromMain(void* arg) {
    u32 sent;
    u8 tmp[3];

    osCreateMesgQueue(&getRamromQ, getRamromBuf, 1);
    osCreateMesgQueue(&freeRamromQ, freeRamromBuf, 1);

    // For some reason the compiler thinks these macros are undefined
    osSetEventMesg(18 /* OS_EVENT_RDB_REQ_RAMROM */, &getRamromQ, NULL);
    osSetEventMesg(19 /*OS_EVENT_RDB_FREE_RAMROM */, &freeRamromQ, NULL);

    while (TRUE) {
        osRecvMesg(&getRamromQ, NULL, OS_MESG_BLOCK);

        __osPiGetAccess();

        sent = 0;

        while (sent < 1) {
            sent += __osRdbSend(tmp, 1, RDB_TYPE_GtoH_RAMROM);
        }

        osRecvMesg(&freeRamromQ, NULL, OS_MESG_BLOCK);

        __osPiRelAccess();
    }
}
