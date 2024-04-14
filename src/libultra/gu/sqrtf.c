#include "PR/ultratypes.h"
#include "libc/math.h"

#ifdef COMPILER_GCC
#include "src/libultra/gcc_fix/sqrtf.c.inc"
#endif

f32 guSqrtf(f32 value) {
    return sqrtf(value);
}
