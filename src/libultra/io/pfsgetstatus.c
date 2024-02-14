#include "PR/os_internal.h"
#include "PR/controller.h"
#include "siint.h"

s32 __osPfsGetStatus(OSMesgQueue* queue, int channel) {
    s32 ret = 0;
    OSMesg dummy;
    u8 pattern;
    OSContStatus status[4];

    __osPfsRequestData(0);
    ret = __osSiRawStartDma(1, &__osPfsPifRam);
    osRecvMesg(queue, &dummy, 1);
    ret = __osSiRawStartDma(0, &__osPfsPifRam);
    osRecvMesg(queue, &dummy, 1);
    __osPfsGetInitData(&pattern, status);

    if (status[channel].status & CONT_CARD_ON && status[channel].status & CONT_CARD_PULL) {
        return 2;
    }
    if (status[channel].errno || !(status[channel].status & CONT_CARD_ON)) {
        return 1;
    }
    if (status[channel].status & CONT_ADDR_CRC_ER) {
        return 4;
    }
    return ret;
}
