#include "global.h"

// OPTFLAGS := -O1 -g0

extern s32 __osPiDevMgr;

extern OSMesgQueue* osPiGetCmdQueue(void);

s32 osPiStartDma(OSIoMesg* arg0, s32 arg1, s32 arg2, u32 arg3, void* arg4, u32 arg5, OSMesgQueue* arg6) {
    register s32 result;

    if (__osPiDevMgr == 0) {
        return -1;
    }

    if (arg2 == 0) {
        arg0->hdr.type = 0xB;
    } else {
        arg0->hdr.type = 0xC;
    }

    arg0->hdr.pri = arg1;
    arg0->hdr.retQueue = arg6;
    arg0->dramAddr = arg4;
    arg0->devAddr = arg3;
    arg0->size = arg5;
    arg0->piHandle = NULL;

    if (arg1 == 1) {
        result = osJamMesg(osPiGetCmdQueue(), arg0, 0);
    } else {
        result = osSendMesg(osPiGetCmdQueue(), arg0, 0);
    }
    return result;
}
