#include "global.h"

extern s32 D_8013B3A0;
extern s32 D_8013B3A4;
extern s32 D_8013B3A8;
extern s32 D_8013B3AC;
extern s32 D_8013B3B0;
extern s32 D_8013B3B4;

f32 Math_ModF(f32 value, f32 mod) {
    return value - ((s32) (value / mod) * mod);
}

void Rand_Init(void) {
    D_8013B3A4 = (s32) osGetTime() % 30000;
    D_8013B3A8 = (s32) osGetTime() % 30000;
    D_8013B3AC = (s32) osGetTime() % 30000;
}

f32 Rand_ZeroOne(void) {
    D_8013B3A4 = (D_8013B3A4 * 171) % 30269;
    D_8013B3A8 = (D_8013B3A8 * 172) % 30307;
    D_8013B3AC = (D_8013B3AC * 170) % 30323;

    return fabsf(Math_ModF((D_8013B3A4 / 30269.0f) + (D_8013B3A8 / 30307.0f) + (D_8013B3AC / 30323.0f), 1.0f));
}

void Rand_SetSeed(s32 seed1, s32 seed2, s32 seed3) {
    D_8013B3B0 = seed1;
    D_8013B3B4 = seed2;
    D_8013B3A0 = seed3;
}

f32 Rand_ZeroOneSeeded(void) {
    D_8013B3B0 = (D_8013B3B0 * 171) % 30269;
    D_8013B3B4 = (D_8013B3B4 * 172) % 30307;
    D_8013B3A0 = (D_8013B3A0 * 170) % 30323;

    return fabsf(Math_ModF((D_8013B3B0 / 30269.0f) + (D_8013B3B4 / 30307.0f) + (D_8013B3A0 / 30323.0f), 1.0f));
}

f32 Math_Atan2F(f32 y, f32 x) {
    if ((y == 0.0f) && (x == 0.0f)) {
        return 0.0f;
    }

    if (x == 0.0f) {
        if (y < 0.0f) {
            return -M_PI / 2.0f;
        } else {
            return M_PI / 2.0f;
        }
    }

    if (x < 0.0f) {
        if (y < 0.0f) {
            return -(M_PI - Math_FAtanF(fabs(y / x)));
        } else {
            return M_PI - Math_FAtanF(fabs(y / x));
        }
    } else {
        return Math_FAtanF(y / x);
    }
}

f32 Math_Atan2F_XY(f32 x, f32 y) {
    if ((x == 0.0f) && (y == 0.0f)) {
        return 0.0f;
    }

    if (x == 0.0f) {
        if (y < 0.0f) {
            return -M_PI / 2.0f;
        } else {
            return M_PI / 2.0f;
        }
    }

    if (y == 0.0f) {
        if (x > 0.0f) {
            return 0.0f;
        } else {
            return M_PI;
        }
    }

    if (x < 0.0f) {
        if (y < 0.0f) {
            return -(M_PI - Math_FAtanF(fabs(x / y)));
        } else {
            return M_PI - Math_FAtanF(fabs(x / y));
        }
    } else {
        return Math_FAtanF(x / y);
    }
}

f32 Math_Atan2F_XYAlt(f32 x, f32 y) {
    if ((x == 0.0f) && (y == 0.0f)) {
        return 0.0f;
    }

    if (x == 0.0f) {
        if (y < 0.0f) {
            return -M_PI / 2.0f;
        }
        return M_PI / 2.0f;
    }

    if (y == 0.0f) {
        return 0.0f;
    }
    return -Math_FAtanF(x / y);
}

f32 Math_FactorialF(f32 n) {
    f32 out = 1.0f;
    s32 i;

    for (i = (s32) n; i > 1; i--) {
        out *= i;
    }

    return out;
}

extern f32 D_800C45E0[];

f32 Math_Factorial(s32 n) {
    f32 out;
    s32 i;

    if (n > 12) {
        out = 1.0f;

        for (i = n; i > 1; i--) {
            out *= i;
        }
    } else {
        out = D_800C45E0[n];
    }
    return out;
}

f32 Math_PowF(f32 base, s32 exp) {
    f32 out = 1.0f;

    while (exp > 0) {
        exp--;
        out *= base;
    }
    return out;
}

void Math_MinMax(s32* min, s32* max, s32 val1, s32 val2, s32 val3) {
    if (val1 < val2) {
        if (val2 < val3) {
            *min = val1;
            *max = val3;
            return;
        }
        *max = val2;

        if (val1 < val3) {
            *min = val1;
            return;
        }
        *min = val3;
        return;
    }

    if (val1 < val3) {
        *min = val2;
        *max = val3;
        return;
    }
    *max = val1;

    if (val2 < val3) {
        *min = val2;
        return;
    }
    *min = val3;
}
