#ifndef _FINALROM
#include "PR/rdb.h"
#include "PR/os_internal.h"

rdbPacket* __osRdb_IP6_Data;
u32 __osRdb_IP6_Size;
u32 __osRdb_IP6_Ct;
u32 __osRdb_IP6_CurWrite;
u32 __osRdb_IP6_CurSend;

void osInitRdb(u8* sendBuf, u32 sendSize) {
    u32 mask;

    sendSize /= 4;

    if (((u32) sendBuf & 3) != 0) {
        sendBuf = ((u32) sendBuf & 3) + 4;
        sendSize--;
    }
    mask = __osDisableInt();

    __osRdb_IP6_Data = (rdbPacket*) sendBuf;
    __osRdb_IP6_Size = sendSize;
    __osRdb_IP6_Ct = 0;
    __osRdb_IP6_CurWrite = 0;
    __osRdb_IP6_CurSend = 0;

    __osRestoreInt(mask);
}

#endif
