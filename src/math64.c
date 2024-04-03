#include "sys.h"

f32 Math_TanF(f32 x) {
    return __sinf(x) / __cosf(x);
}

f32 Math_FloorF(f32 x) {
    return __floorf(x);
}

f32 Math_CeilF(f32 x) {
    return __ceilf(x);
}

f64 Math_Fabs(f64 x) {
    return (x < 0.0) ? -x : x;
}

f32 Math_FabsF(f32 x) {
    return (x < 0.0f) ? -x : x;
}

f32 Math_NearbyIntF(f32 x) {
    return __nearbyintf(x);
}

f32 Math_TruncF(f32 x) {
    return __truncf(x);
}

f32 Math_RoundF(f32 x) {
    return __roundf(x);
}

f32 Math_FAtanF(f32 x) {
    s32 sector;
    s32 i;
    f32 sq;
    f32 conv = 0.0f;
    f32 z;

    if (x > 1.0f) {
        sector = 1;
        x = 1.0f / x;
    } else if (x < -1.0f) {
        sector = -1;
        x = 1.0f / x;
    } else {
        sector = 0;
    }

    sq = SQ(x);

    for (z = i = 24; i != 0; i--) {
        conv = SQ(z) * sq / (2.0f * z + 1.0f + conv);
        z -= 1.0f;
    }

    if (sector > 0) {
        return M_PI / 2.0f - (x / (1.0f + conv));
    } else if (sector < 0) {
        return -M_PI / 2.0f - (x / (1.0f + conv));
    } else {
        return x / (1.0f + conv);
    }
}

f32 Math_FAtan2F(f32 y, f32 x) {
    if ((y == 0.0f) && (x == 0.0f)) {
        return 0.0f;
    }
    if (x == 0.0f) {
        if (y < 0.0f) {
            return -M_PI / 2.0f;
        }
        return M_PI / 2.0f;
    }
    if (x < 0.0f) {
        if (y < 0.0f) {
            return -(M_PI - Math_FAtanF(fabs(y / x)));
        }
        return M_PI - Math_FAtanF(fabs(y / x));
    }
    return Math_FAtanF(y / x);
}

f32 Math_FAsinF(f32 x) {
    return Math_FAtan2F(x, sqrtf(1 - SQ(x)));
}

f32 Math_FAcosF(f32 x) {
    return M_PI / 2.0f - Math_FAsinF(x);
}
