#include "global.h"

void func_800BA760(void) {
    func_800B9358();
    if (D_80177D50 == 1.3f) {
        D_801782F8 = func_800C2F30(D_80178308, D_801782D8);
    }
}

s32 func_800BA7BC(u16* arg0, s32 arg1) {
    s32 var_v0 = D_800D4A70;

    if (arg1 == var_v0) {
        return 0;
    }

    if (arg1 < var_v0) {
        return 1;
    }

    if (var_v0 < arg1) {
        D_800D4A70 = arg1;
        return 2;
    }
}

void func_800BA808(u16* arg0, s32 arg1) {
    s32 var_v1;
    s32 temp_v0;
    s32 var_a1;

    switch (*arg0) {
        default:
        case 0x08:
            var_a1 = 0;
            break;
        case 0x09:
            var_a1 = 1;
            break;
        case 0x0a:
            var_a1 = 2;
            break;
        case 0x0b:
            var_a1 = 3;
            break;
    }

    if (D_80177834 == 7) {
        if ((arg1 == 10) || (arg1 == 20) || (arg1 == 30)) {
            if (arg1 == 10) {
                var_v1 = 1;
            }

            if (arg1 == 20) {
                var_v1 = 2;
            }

            if (arg1 == 30) {
                var_v1 = 3;
            }

            if ((D_801778B0[var_v1] <= 0) && (D_801778B0[var_v1] != -2)) {
                return;
            }
        }
    }

    if (D_8017829C != 0) {
        temp_v0 = func_800BA7BC(arg0, var_a1);
        if (temp_v0 == 1) {
            return;
        }
    }

    D_800D4A70 = var_a1;
    D_80177D68 = arg1;

    if ((D_801779F8 != 0) && ((arg1 == 0) || (arg1 == 5))) {
        D_80177D68 = 400;
    }

    if (D_80178234 == 19) {
        switch (arg1) {
            case 200:
                D_80177D68 = 240;
                break;
            case 210:
                D_80177D68 = 250;
                break;
            case 220:
                D_80177D68 = 260;
                break;
            case 230:
                D_80177D68 = 270;
                break;
        }
    }

    D_80178308 = arg0;
    D_8017829C = 100;

    switch (D_80177834) {
        case 2:
        case 8:
            D_8017872C = 176;
            D_80178728 = 85;
            D_80178730 = 80.0f;
            D_80178734 = 174.0f;
            D_80178738 = 4.63f;
            D_8017873C = 32.0f;
            D_80178740 = 174.0f;
            break;
        case 7:
            D_8017872C = 180;
            D_80178728 = 79;
            D_80178730 = 74.0f;
            D_80178734 = 178.0f;
            D_80178738 = 4.53f;
            D_8017873C = 26.0f;
            D_80178740 = 178.0f;
            break;
    }

    D_801782E8 = func_800C2890(arg0);
    func_8001ACDC(D_801782E8);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BAAE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BB388.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BB5D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BC040.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_BB360/func_800BC4B0.s")
