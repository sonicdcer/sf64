#include "common.h"

extern f32 D_800C80FC;
extern f32 D_800C80D8;
extern f32 D_800C80DC;
extern f32 D_800C80E0;
extern f32 D_800C80E4;
extern f32 D_800C8100;
extern s32 D_8013B3A0;
extern s32 D_8013B3A4;
extern s32 D_8013B3A8;
extern s32 D_8013B3AC;
extern s32 D_8013B3B0;
extern s32 D_8013B3B4;

extern void func_80005680(s32, s32);
extern f32 func_8001FBE8(f32);
extern u64 func_80023000(void);

f32 func_80004E20(f32 arg0, f32 arg1) {
    return arg0 - ((s32)(arg0 / arg1) * arg1);
}

void func_80004E4C(void) {
    D_8013B3A4 = (s32)func_80023000() % 30000;
    D_8013B3A8 = (s32)func_80023000() % 30000;
    D_8013B3AC = (s32)func_80023000() % 30000;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80004EB0.s")

void func_80004FC8(s32 arg0, s32 arg1, s32 arg2) {
    D_8013B3B0 = arg0;
    D_8013B3B4 = arg1;
    D_8013B3A0 = arg2;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80004FE8.s")

f32 func_80005100(f32 arg0, f32 arg1) {
    if ((arg0 == 0.0f) && (arg1 == 0.0f)) {
        return 0.0f;
    }

    if (arg1 == 0.0f) {
        if (arg0 < 0.0f) {
            return D_800C80D8;
        } else {
            return D_800C80DC;
        }
    }

    if (arg1 < 0.0f) {
        if (arg0 < 0.0f) {
            return -(D_800C80E0 - func_8001FBE8(fabsf(arg0 / arg1)));
        } else {
            return D_800C80E4 - func_8001FBE8(fabsf(arg0 / arg1));
        }
    } else {
        return func_8001FBE8(arg0 / arg1);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_800051F8.s")

f32 func_80005320(f32 arg0, f32 arg1) {
    if ((arg0 == 0.0f) && (arg1 == 0.0f)) {
        return 0.0f;
    }

    if (arg0 == 0.0f) {
        if (arg1 < 0.0f) {
            return D_800C80FC;
        }
        return D_800C8100;
    }

    if (arg1 == 0.0f) {
        return 0.0f;
    }
    return -func_8001FBE8(arg0 / arg1);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_800053C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_800054C8.s")

f32 func_800055DC(f32 arg0, s32 arg1) {
    f32 var_fv1 = 1.0f;

    while (arg1 > 0) {
        arg1--;
        var_fv1 *= arg0;
    }
    return var_fv1;
}

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

// https://decomp.me/scratch/8H8k4 100%
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005680.s")

void func_80005708(s32* arg0) {
    func_80005680(*arg0 + 64, *arg0);
    *arg0 += 0x40;
}

void func_80005740(s32* arg0) {
    *arg0 -= 64;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005754.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005B00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005C34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005D44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005E90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80005FE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_8000612C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006500.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_8000671C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006970.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006A20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006AB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006C7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006E3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/5A20/func_80006EB8.s")
