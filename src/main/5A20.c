#include "global.h"

extern s32 D_8013B3A0;
extern s32 D_8013B3A4;
extern s32 D_8013B3A8;
extern s32 D_8013B3AC;
extern s32 D_8013B3B0;
extern s32 D_8013B3B4;

//Math_ModF
f32 func_80004E20(f32 arg0, f32 arg1) {
    return arg0 - ((s32) (arg0 / arg1) * arg1);
}

//Rand_Init
void func_80004E4C(void) {
    D_8013B3A4 = (s32) osGetTime() % 30000;
    D_8013B3A8 = (s32) osGetTime() % 30000;
    D_8013B3AC = (s32) osGetTime() % 30000;
}

//Rand_ZeroOne
f32 func_80004EB0(void) {
    D_8013B3A4 = (D_8013B3A4 * 171) % 30269;
    D_8013B3A8 = (D_8013B3A8 * 172) % 30307;
    D_8013B3AC = (D_8013B3AC * 170) % 30323;

    return fabsf(func_80004E20((D_8013B3A4 / 30269.0f) + (D_8013B3A8 / 30307.0f) + (D_8013B3AC / 30323.0f), 1.0f));
}

//Rand_SetSeed
void func_80004FC8(s32 arg0, s32 arg1, s32 arg2) {
    D_8013B3B0 = arg0;
    D_8013B3B4 = arg1;
    D_8013B3A0 = arg2;
}

//Rand_ZeroOneSeeded
f32 func_80004FE8(void) {
    D_8013B3B0 = (D_8013B3B0 * 171) % 30269;
    D_8013B3B4 = (D_8013B3B4 * 172) % 30307;
    D_8013B3A0 = (D_8013B3A0 * 170) % 30323;

    return fabsf(func_80004E20((D_8013B3B0 / 30269.0f) + (D_8013B3B4 / 30307.0f) + (D_8013B3A0 / 30323.0f), 1.0f));
}

//Math_ArcTan2
f32 func_80005100(f32 arg0, f32 arg1) {
    if ((arg0 == 0.0f) && (arg1 == 0.0f)) {
        return 0.0f;
    }

    if (arg1 == 0.0f) {
        if (arg0 < 0.0f) {
            return -M_PI / 2.0f;
        } else {
            return M_PI / 2.0f;
        }
    }

    if (arg1 < 0.0f) {
        if (arg0 < 0.0f) {
            return -(M_PI - func_8001FBE8(fabs(arg0 / arg1)));
        } else {
            return M_PI - func_8001FBE8(fabs(arg0 / arg1));
        }
    } else {
        return func_8001FBE8(arg0 / arg1);
    }
}

//Math_ArcCot2
f32 func_800051F8(f32 arg0, f32 arg1) {
    if ((arg0 == 0.0f) && (arg1 == 0.0f)) {
        return 0.0f;
    }

    if (arg0 == 0.0f) {
        if (arg1 < 0.0f) {
            return -M_PI / 2.0f;
        } else {
            return M_PI / 2.0f;
        }
    }

    if (arg1 == 0.0f) {
        if (arg0 > 0.0f) {
            return 0.0f;
        } else {
            return M_PI;
        }
    }

    if (arg0 < 0.0f) {
        if (arg1 < 0.0f) {
            return -(M_PI - func_8001FBE8(fabs(arg0 / arg1)));
        } else {
            return M_PI - func_8001FBE8(fabs(arg0 / arg1));
        }
    } else {
        return func_8001FBE8(arg0 / arg1);
    }
}

// Math_ArcCot2_Alt ? 
f32 func_80005320(f32 arg0, f32 arg1) {
    if ((arg0 == 0.0f) && (arg1 == 0.0f)) {
        return 0.0f;
    }

    if (arg0 == 0.0f) {
        if (arg1 < 0.0f) {
            return -M_PI / 2.0f;
        }
        return M_PI / 2.0f;
    }

    if (arg1 == 0.0f) {
        return 0.0f;
    }
    return -func_8001FBE8(arg0 / arg1);
}

//Math_FactorialF
f32 func_800053C8(f32 arg0) {
    f32 out = 1.0f;
    s32 i;

    for(i = (s32) arg0; i > 1  ; i--) {
        out *= i;
    }

    return out;
}

extern f32 D_800C45E0[];

//Math_Factorial
f32 func_800054C8(s32 arg0) {
    f32 out;
    s32 i;

    if(arg0 > 12) {
        out = 1.0f;

        for(i = arg0; i > 1  ; i--) {
            out *= i;
        }
    } else {
        out = D_800C45E0[arg0];
    }
    return out;
}

//Math_PowerF
f32 func_800055DC(f32 arg0, s32 arg1) {
    f32 var_fv1 = 1.0f;

    while (arg1 > 0) {
        arg1--;
        var_fv1 *= arg0;
    }
    return var_fv1;
}

//Math_MinMax
void func_80005604(s32* arg0, s32* arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg2 < arg3) {
        if (arg3 < arg4) {
            *arg0 = arg2;
            *arg1 = arg4;
            return;
        }
        *arg1 = arg3;

        if (arg2 < arg4) {
            *arg0 = arg2;
            return;
        }
        *arg0 = arg4;
        return;
    }

    if (arg2 < arg4) {
        *arg0 = arg3;
        *arg1 = arg4;
        return;
    }
    *arg1 = arg2;

    if (arg3 < arg4) {
        *arg0 = arg3;
        return;
    }
    *arg0 = arg4;
}
