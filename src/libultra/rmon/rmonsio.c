#include "PR/os_version.h"

#if BUILD_VERSION < VERSION_J
#ident "$Revision: 3.70 $"
#ident "$Revision: 1.5 $"
#ident "$Revision: 1.2 $"
#ident "$Revision: 1.4 $"
#ident "$Revision: 1.3 $"
#endif

#ifndef _FINALROM

#include "PR/os_internal.h"
#include "PR/ultraerror.h"
#include "PR/ultralog.h"
#include "PR/sptask.h"
#include "dbgproto.h"
#include "rmonint.h"
#include "PR/ramrom.h"
#include "PR/rdb.h"
#include "PR/rmon.h"

#include "macros.h"

// TODO: this comes from a header
#if BUILD_VERSION >= VERSION_J
#ident "$Revision: 1.4 $"
#endif

static OSMesgQueue IOmq ALIGNED(8);
static OSMesg IOmsgs;

void* __osRdb_DbgRead_Buf;
u8 rmonRdbReadBuf[RMON_DBG_BUF_SIZE] ALIGNED(0x10);

void __rmonSendFault(OSThread* thread) {
    volatile float f UNUSED;
    u8* tPtr;
    u32 sent = 0;

    /* touch fpu to ensure registers are saved to the context structure */
    f = 0.0f;

    tPtr = (u8*) thread;
    while (sent < sizeof(OSThread)) {
        sent += __osRdbSend(tPtr + sent, sizeof(OSThread) - sent, RDB_TYPE_GtoH_FAULT);
    }
}

void __rmonIOflush(void) {
    int sent = 0;
    char tstr[4];

    while (sent <= 0) {
        sent += __osRdbSend(tstr, 1, RDB_TYPE_GtoH_DEBUG_DONE);
    }
}

void __rmonIOputw(u32 word) {
    int sent = 0;
    char* cPtr = (char*) &word;

    while (sent < 4) {
        sent += __osRdbSend(cPtr + sent, sizeof(word) - sent, RDB_TYPE_GtoH_DEBUG);
    }
}

void __rmonIOhandler(void) {
    int sent;
    char tstr[4];

    osCreateMesgQueue(&IOmq, &IOmsgs, 1);
    osSetEventMesg(OS_EVENT_RDB_DBG_DONE, &IOmq, NULL);
    __osRdb_DbgRead_Buf = rmonRdbReadBuf;

    while (TRUE) {
        osRecvMesg(&IOmq, NULL, OS_MESG_BLOCK);

        __rmonExecute((KKHeader*) &rmonRdbReadBuf);
        __osRdb_DbgRead_Buf = rmonRdbReadBuf;

        sent = 0;
        while (sent <= 0) {
            sent += __osRdbSend(tstr, 1, RDB_TYPE_GtoH_DEBUG_READY);
        }
    }
}

#endif
