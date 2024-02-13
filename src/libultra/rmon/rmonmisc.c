#ifndef _FINALROM

#include "dbgproto.h"
#include "PR/os_internal.h"
#include "PR/sptask.h"
#include "rmonint.h"

#include "macros.h"

// TODO: this comes from a header
#if BUILD_VERSION >= VERSION_J
#ident "$Revision: 1.4 $"
#else
#ident "$Revision: 3.70 $"
#ident "$Revision: 1.5 $"
#ident "$Revision: 1.2 $"
#ident "$Revision: 1.4 $"
#ident "$Revision: 1.3 $"
#endif

int __rmonSetFault(KKHeader* req) {
    KKFaultRequest* request = (KKFaultRequest*) req;
    KKObjectEvent reply;

    STUBBED_PRINTF(("SetFault\n"));

    reply.header.code = request->header.code;
    reply.header.error = TV_ERROR_NO_ERROR;
    reply.object = request->tid;

    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);
    return TV_ERROR_NO_ERROR;
}

OSMesgQueue __rmonMQ ALIGNED(8);
static OSThread rmonIOThread ALIGNED(8);
static OSMesg rmonMsgs[8] ALIGNED(8);
static u64 rmonIOStack[2048] ALIGNED(16);
static OSMesg rmonPiMsgs[8] ALIGNED(8);
static OSMesgQueue rmonPiMQ ALIGNED(8);

void __rmonInit(void) {
    osCreateMesgQueue(&__rmonMQ, rmonMsgs, ARRLEN(rmonMsgs));
    osSetEventMesg(OS_EVENT_CPU_BREAK, &__rmonMQ, (OSMesg) RMON_MESG_CPU_BREAK);
    osSetEventMesg(OS_EVENT_SP_BREAK, &__rmonMQ, (OSMesg) RMON_MESG_SP_BREAK);
    osSetEventMesg(OS_EVENT_FAULT, &__rmonMQ, (OSMesg) RMON_MESG_FAULT);
    osSetEventMesg(OS_EVENT_THREADSTATUS, &__rmonMQ, NULL);
    osCreateThread(&rmonIOThread, 0, (void (*)(void*)) __rmonIOhandler, NULL, rmonIOStack + ARRLEN(rmonIOStack),
                   OS_PRIORITY_MAX);
    osCreatePiManager(OS_PRIORITY_PIMGR, &rmonPiMQ, rmonPiMsgs, ARRLEN(rmonPiMsgs));
    osStartThread(&rmonIOThread);
}

void __rmonPanic(void) {
    STUBBED_PRINTF(("PANIC!!\n"));

    for (;;) {
        ;
    }
}

int __rmonSetComm(KKHeader* req) {
    KKObjectEvent reply;

    STUBBED_PRINTF(("SetComm\n"));

    reply.header.code = req->code;
    reply.object = 0;
    reply.header.error = TV_ERROR_NO_ERROR;

    __rmonSendReply(&reply.header, sizeof(reply), KK_TYPE_REPLY);

    return TV_ERROR_NO_ERROR;
}

#endif
