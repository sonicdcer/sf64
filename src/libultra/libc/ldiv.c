#include "global.h"
#include "libc/stdlib.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/libc/ldiv/lldiv.s")

ldiv_t ldiv(long numer, long denom) {
    ldiv_t val;

    val.quot = numer / denom;
    val.rem = numer - denom * val.quot;
    if ((val.quot < 0) && (val.rem > 0)) {
        val.quot++;
        val.rem -= denom;
    }

    return val;
}
