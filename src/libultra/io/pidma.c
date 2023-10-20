#include "global.h"

extern s32 __osPiDevMgr;

extern OSMesgQueue* osPiGetCmdQueue(void);

s32 osPiStartDma(OSIoMesg* mb, s32 pri, s32 arg2, u32 devAddr, void* dramAddr, u32 size, OSMesgQueue* piHandle) {
    register s32 result;

    if (__osPiDevMgr == 0) {
        return -1;
    }

    if (arg2 == 0) {
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

    if (pri == 1) {
        result = osJamMesg(osPiGetCmdQueue(), mb, 0);
    } else {
        result = osSendMesg(osPiGetCmdQueue(), mb, 0);
    }
    return result;
}
