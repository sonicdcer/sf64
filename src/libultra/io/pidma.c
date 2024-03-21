#include "piint.h"

s32 osPiStartDma(OSIoMesg* mb, s32 pri, s32 rw, u32 devAddr, void* dramAddr, u32 size, OSMesgQueue* piHandle) {
    register s32 result;

    if (!__osPiDevMgr.active) {
        return -1;
    }

    if (rw == OS_READ) {
        mb->hdr.type = OS_MESG_TYPE_DMAREAD;
    } else {
        mb->hdr.type = OS_MESG_TYPE_DMAWRITE;
    }

    mb->hdr.pri = pri;
    mb->hdr.retQueue = piHandle;
    mb->dramAddr = dramAddr;
    mb->devAddr = devAddr;
    mb->size = size;
    mb->piHandle = NULL;

    if (pri == OS_MESG_PRI_HIGH) {
        result = osJamMesg(osPiGetCmdQueue(), mb, OS_MESG_NOBLOCK);
    } else {
        result = osSendMesg(osPiGetCmdQueue(), mb, OS_MESG_NOBLOCK);
    }
    return result;
}
