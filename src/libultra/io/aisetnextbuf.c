#include "global.h"

#ifdef DATA_IMPORT_PENDING
s32 osAiSetNextBuffer(void* bufPtr, u32 size) {
    static u8 hdwrBugFlag = FALSE;
    char* bptr;

#if BUILD_VERSION >= VERSION_J
    if (__osAiDeviceBusy()) {
        return -1;
    }
#endif

#ifdef _DEBUG
    if ((u32) bufPtr & (8 - 1)) {
        __osError(ERR_OSAISETNEXTBUFFER_ADDR, 1, bufPtr);
        return -1;
    }

    if ((u32) size & (8 - 1)) {
        __osError(ERR_OSAISETNEXTBUFFER_SIZE, 1, size);
        return -1;
    }
#endif

    bptr = bufPtr;

    if (hdwrBugFlag) {
        bptr = (u8*) bufPtr - 0x2000;
    }

    if ((((u32) bufPtr + size) & 0x3fff) == 0x2000) {
        hdwrBugFlag = TRUE;
    } else {
        hdwrBugFlag = FALSE;
    }

#if BUILD_VERSION < VERSION_J
    if (__osAiDeviceBusy()) {
        return -1;
    }
#endif

    IO_WRITE(AI_DRAM_ADDR_REG, osVirtualToPhysical(bptr));
    IO_WRITE(AI_LEN_REG, size);
    return 0;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/io/aisetnextbuf/osAiSetNextBuffer.s")
#endif
