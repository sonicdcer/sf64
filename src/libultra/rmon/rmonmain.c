#include "PR/os_version.h"

#if BUILD_VERSION < VERSION_J
#ident "$Revision: 3.70 $"
#ident "$Revision: 1.5 $"
#ident "$Revision: 1.2 $"
#ident "$Revision: 1.4 $"
#ident "$Revision: 1.3 $"
#endif

#ifndef _FINALROM

#include "dbgproto.h"
#include "PR/os_internal.h"
#include "rmonint.h"
#include "PR/rcp.h"
#include "PR/sptask.h"
#include "PR/rdb.h"

#include "macros.h"

// TODO: this comes from a header
#if BUILD_VERSION >= VERSION_J
#ident "$Revision: 1.4 $"
#endif

int __rmonActive = FALSE;

static vu32 somethingToDo;
static u32 inbuffer[280] ALIGNED(0x10);
static u8 cmdinptr;
static u8 cmdoutptr;
static int state;
static char* inPointer;

void __rmonSendHeader(KKHeader* const block, u32 blockSize, u32 type) {
    int sent;
    char* cPtr = (char*) block;

    block->rev = KK_REV;
    block->type = type;

    sent = 0;
    while (sent < blockSize) {
        sent += __osRdbSend(cPtr + sent, blockSize - sent, RDB_TYPE_GtoH_DEBUG);
    }
}

void __rmonSendReply(KKHeader* const block, u32 blockSize, u32 replyType) {
    char* cPtr;
    int sent = 0;

    block->length = blockSize;
    cPtr = (char*) &blockSize;

    /* send size */
    while (sent < (signed) sizeof(blockSize)) {
        sent += __osRdbSend(cPtr + sent, sizeof(blockSize) - sent, RDB_TYPE_GtoH_DEBUG);
    }

    /* send data */
    __rmonSendHeader(block, blockSize, replyType);
    __rmonIOflush();
}

void __rmonSendData(char* const block, unsigned int blockSize) {
    int* blockPointer = (int*) block;
    unsigned int wordCount = (u32) (blockSize + 3) / 4;
    u32 data;
    union {
        char bufBytes[4];
        u32 bufWord;
    } buffer;

    if (((u32) block & 3) == 0) {
        while (wordCount--) {
            if ((u32) blockPointer >= SP_DMEM_START && (u32) blockPointer < 0x05000000) {
                __osSpRawReadIo((u32) blockPointer++, &data);
                __rmonIOputw(data);
            } else {
                __rmonIOputw(*(blockPointer++));
            }
        }
    } else {
        while (wordCount--) {
            __rmonMemcpy((u8*) buffer.bufBytes, (u8*) blockPointer, sizeof(buffer));
            __rmonIOputw(buffer.bufWord);
            blockPointer++;
        }
    }
    __rmonIOflush();
}

void rmonMain(void) {
    register int newChars UNUSED;

    STUBBED_PRINTF(("rmon: Thread %d created\n"));
    STUBBED_PRINTF(("rmon: Thread %d destroyed\n"));

    somethingToDo = 0;
    cmdoutptr = 0;
    cmdinptr = 0;

    __rmonInit();
    __rmonActive = TRUE;

    state = 0, newChars = 0, inPointer = (void*) &inbuffer;
    for (;;) {
        OSMesg work;

        osRecvMesg(&__rmonMQ, &work, OS_MESG_BLOCK);

        somethingToDo |= (u32) work;

        if (somethingToDo & RMON_MESG_CPU_BREAK) {
            somethingToDo &= ~RMON_MESG_CPU_BREAK;
            __rmonHitBreak();
        }
        if (somethingToDo & RMON_MESG_SP_BREAK) {
            somethingToDo &= ~RMON_MESG_SP_BREAK;
            __rmonHitSpBreak();
        }
        if (somethingToDo & RMON_MESG_FAULT) {
            somethingToDo &= ~RMON_MESG_FAULT;
            __rmonHitCpuFault();
        }
        if (somethingToDo & 0x10) {
            somethingToDo;
            somethingToDo &= (u8) ~0x10;
        }
        if (somethingToDo & 0x20) {
            somethingToDo;
            somethingToDo &= (u8) ~0x20;
        }
    }
}

#endif
