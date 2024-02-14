#include "PR/os_internal.h"
#include "PR/rcp.h"
#include "PR/assert.h"
#include "osint.h"

// Adjust line numbers to match assert
#if BUILD_VERSION < VERSION_J
#line 45
#endif

// TODO: this comes from a header
#ident "$Revision: 1.17 $"

s32 __osSpRawWriteIo(u32 devAddr, u32 data) {
    assert((devAddr & 0x3) == 0);

    if (__osSpDeviceBusy()) {
        return -1;
    }

    IO_WRITE(devAddr, data);
    return 0;
}
