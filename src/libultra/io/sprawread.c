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

s32 __osSpRawReadIo(u32 devAddr, u32* data) {
    assert((devAddr & 0x3) == 0);
    assert(data != NULL);

    if (__osSpDeviceBusy()) {
        return -1;
    }

    *data = IO_READ(devAddr);
    return 0;
}
