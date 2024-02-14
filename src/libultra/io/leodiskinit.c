// This file was removed in 2.0J
#include "PR/os_internal.h"
#include "PR/os_libc.h"
#include "PR/rcp.h"
#include "macros.h"

OSPiHandle LeoDiskHandle ALIGNED(8);
OSPiHandle* __osDiskHandle;

OSPiHandle* osLeoDiskInit() {
    u32 saveMask;

    LeoDiskHandle.type = DEVICE_TYPE_64DD;
    LeoDiskHandle.baseAddress = PHYS_TO_K1(PI_DOM2_ADDR1);
    LeoDiskHandle.latency = 3;
    LeoDiskHandle.pulse = 6;
    LeoDiskHandle.pageSize = 6;
    LeoDiskHandle.relDuration = 2;
    LeoDiskHandle.domain = PI_DOMAIN2;

    IO_WRITE(PI_BSD_DOM2_LAT_REG, LeoDiskHandle.latency);
    IO_WRITE(PI_BSD_DOM2_PWD_REG, LeoDiskHandle.pulse);
    IO_WRITE(PI_BSD_DOM2_PGS_REG, LeoDiskHandle.pageSize);
    IO_WRITE(PI_BSD_DOM2_RLS_REG, LeoDiskHandle.relDuration);
#if BUILD_VERSION >= VERSION_I
    LeoDiskHandle.speed = 0;
#endif

    bzero(&LeoDiskHandle.transferInfo, sizeof(__OSTranxInfo));

    saveMask = __osDisableInt();
    LeoDiskHandle.next = __osPiTable;
    __osPiTable = &LeoDiskHandle;
    __osDiskHandle = &LeoDiskHandle;
    __osRestoreInt(saveMask);

    return &LeoDiskHandle;
}
