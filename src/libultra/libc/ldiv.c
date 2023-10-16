#include "global.h"
#include "libc/stdlib.h"

lldiv_t lldiv(long long numer, long long denom) {
    lldiv_t val;

    val.quot = numer / denom;
    val.rem = numer - denom * val.quot;
    if ((val.quot < 0) && (val.rem > 0)) {
        val.quot++;
        val.rem -= denom;
    }

    return val;
}

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
