#include "global.h"
#include "siint.h"

extern OSPifRam _MotorStopData[MAXCONTROLLERS];
extern OSPifRam _MotorStartData[MAXCONTROLLERS];
extern u8 _motorstopbuf[0x20];
extern u8 _motorstartbuf[0x20];

s32 osMotorStop(OSPfs* pfs) {
    s32 i;
    s32 ret;
    u8* ptr = (u8*) &__osPfsPifRam;
    __OSContRamReadFormat ramreadformat;

    __osSiGetAccess();
    __osContLastCmd = CONT_CMD_WRITE_PAK;
    __osSiRawStartDma(OS_WRITE, &_MotorStopData[pfs->channel]);
    osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
    ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
    osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
    ptr = (u8*) &__osPfsPifRam;
    if (pfs->channel != 0) {
        for (i = 0; i < pfs->channel; i++) {
            ptr++;
        }
    }
    ramreadformat = *((__OSContRamReadFormat*) ptr);

    ret = CHNL_ERR(ramreadformat);
    if ((ret == 0) && (ramreadformat.datacrc != 0)) {
        ret = PFS_ERR_CONTRFAIL;
    }
    __osSiRelAccess();
    return ret;
}

s32 osMotorStart(OSPfs* pfs) {
    s32 i;
    s32 ret;
    u8* ptr = (u8*) &__osPfsPifRam;
    __OSContRamReadFormat ramreadformat;

    __osSiGetAccess();
    __osContLastCmd = CONT_CMD_WRITE_PAK;
    __osSiRawStartDma(OS_WRITE, &_MotorStartData[pfs->channel]);
    osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
    ret = __osSiRawStartDma(OS_READ, &__osPfsPifRam);
    osRecvMesg(pfs->queue, NULL, OS_MESG_BLOCK);
    ptr = (u8*) &__osPfsPifRam;
    if (pfs->channel != 0) {
        for (i = 0; i < pfs->channel; i++) {
            ptr++;
        }
    }
    ramreadformat = *((__OSContRamReadFormat*) ptr);

    ret = CHNL_ERR(ramreadformat);
    if ((ret == 0) && (ramreadformat.datacrc != 0xEB)) {
        ret = PFS_ERR_CONTRFAIL;
    }
    __osSiRelAccess();
    return ret;
}

void _MakeMotorData(s32 channel, u16 address, u8* buffer, OSPifRam* mdata) {
    u8* ptr = (u8*) mdata->ramarray;
    __OSContRamReadFormat ramreadformat;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(mdata->ramarray); i++) {
        mdata->ramarray[i] = 0;
    }

    mdata->pifstatus = CONT_CMD_EXE;
    ramreadformat.dummy = CONT_CMD_NOP;
    ramreadformat.txsize = CONT_CMD_WRITE_PAK_TX;
    ramreadformat.rxsize = CONT_CMD_WRITE_PAK_RX;
    ramreadformat.cmd = CONT_CMD_WRITE_PAK;
    ramreadformat.address = __osContAddressCrc(address) | (address << 5);
    ramreadformat.datacrc = CONT_CMD_NOP;

    for (i = 0; i < ARRAY_COUNT(ramreadformat.data); i++) {
        ramreadformat.data[i] = *(buffer++);
    }

    if (channel != 0) {
        for (i = 0; i < channel; i++) {
            *(ptr++) = 0;
        }
    }
    *((__OSContRamReadFormat*) ptr) = ramreadformat;
    ptr += sizeof(__OSContRamReadFormat);
    *ptr = CONT_CMD_END;
}

s32 osMotorInit(OSMesgQueue* mq, OSPfs* pfs, int channel) {
    s32 i;
    s32 ret;
    u8 buffer[0x20];

    pfs->queue = mq;
    pfs->channel = channel;
    pfs->status = 0;
    pfs->activebank = 0x80;
    for (i = 0; i < ARRAY_COUNT(buffer); i++) {
        buffer[i] = 0x80;
    }

    ret = __osContRamWrite(mq, channel, CONT_BLOCK_DETECT, buffer, 0);
    if (ret == PFS_ERR_NEW_PACK) {
        ret = __osContRamWrite(mq, channel, CONT_BLOCK_DETECT, buffer, 0);
    }
    if (ret != 0) {
        return ret;
    }
    ret = __osContRamRead(mq, channel, CONT_BLOCK_DETECT, buffer);
    if (ret == PFS_ERR_NEW_PACK) {
        ret = PFS_ERR_CONTRFAIL;
    }
    if (ret != 0) {
        return ret;
    }
    if (buffer[0x1F] != 0x80) {
        return 0xB;
    }
    for (i = 0; i < ARRAY_COUNT(_motorstartbuf); i++) {
        _motorstartbuf[i] = 1;
        _motorstopbuf[i] = 0;
    }

    _MakeMotorData(channel, CONT_BLOCK_RUMBLE, _motorstartbuf, &_MotorStartData[channel]);
    _MakeMotorData(channel, CONT_BLOCK_RUMBLE, _motorstopbuf, &_MotorStopData[channel]);
    return 0;
}
