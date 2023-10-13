#include "hud.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80084930.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80084B94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80084E78.s")

void func_800853A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8009D0BC(&D_80137E64, &D_1013170, &D_1013570, 24, 17, arg0, arg1, arg2, arg3);
}

void func_80085404(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8009C320(&D_80137E64, &D_1011280, &D_10116A0, 48, 44, arg0, arg1, arg2, arg3);
}

void func_80085464(f32 arg0, f32 arg1) {
    func_8009C320(&D_80137E64, &D_1011AC0, &D_1011B90, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_800854BC(f32 arg0, f32 arg1) {
    func_8009C320(&D_80137E64, &D_1011BB0, &D_1011C80, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_80085514(f32 arg0, f32 arg1) {
    func_8009C320(&D_80137E64, &D_1011CA0, &D_1011D70, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_8008556C(f32 arg0, f32 arg1) {
    func_8009C320(&D_80137E64, &D_1011D90, &D_1011E60, 16, 26, arg0, arg1, 1.0f, 1.0f);
}

void func_800855C4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8009E1E8(&D_80137E64, &D_1002280, 8, 12, arg0, arg1, arg2, arg3);
}

void func_80085618(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8009D994(&D_80137E64, &D_1002280, 8, 12, arg0, arg1, arg2, arg3);
}

void func_8008566C(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8009D994(&D_80137E64, &D_10030D0, 8, 12, arg0, arg1, arg2, arg3);
}

void func_800856C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_80084E78(&D_80137E64, &D_1013580, &D_1013700, 0x30, 0xC, arg0, arg1, arg2, arg3, 48.0f * arg4, 8.0f);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80085740.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800857DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80085890.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80085944.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80086110.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800863C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80086444.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80086664.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800869A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80086C08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80086CC8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80086DCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80087530.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80087788.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80087B5C.s")

void func_800884E4(void) {
    s32 var_v1;
    s32 i;

    D_80177B70[D_80177B48] = D_80161A98;
    var_v1 = 0xFF0000;

    for (i = 0; i < 3; i++) {
        if (D_801778B0[3 - i] <= 0) {
            D_80177B50[D_80177B48] ^= var_v1;
        } else {
            D_80177B50[D_80177B48] |= var_v1;
        }
        var_v1 = var_v1 >> 8;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80088564.s")

// https://decomp.me/scratch/Ly5cU 98.70%
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008865C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800886B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80088784.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80088970.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089670.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089710.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800897B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089850.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800898F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089994.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089AF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089B94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089C38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089D28.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80089E98.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008A07C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008A240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008A4DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008AC54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008AD94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008B044.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008B1B0.s")

void func_8008B2A4(void) {
    if (D_80177854 != 100) {
        func_8008B044();
    }
    if (D_80161690 != 0) {
        func_8008B1B0();
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008B2F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008B5B0.s")

void func_8008B734(void) {
    func_8008B2F0();
    func_8008B5B0(20.0f, 18.0f);
    func_80085944();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008B774.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008B9E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008BAE4.s")

void func_8008BC80(void) {
    if (D_80177854 != 100) {
        func_8008B9E8();
        func_8008BAE4();
    }
}

s32 func_8008BCBC(s32 arg0) {
    s32 temp = 10;
    s32 ret;

    if (arg0 < 0) {
        arg0 = (s64)-arg0;
    }

    ret = 1;

    while (arg0 >= temp) {
        ret++;
        temp *= 10;
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008BD00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008C104.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008C390.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008C5C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008C6F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008CA44.s")

s32 func_8008CB8C(void) {
    return 0;
}

void func_8008CB98(f32 arg0, f32 arg1, f32 arg2) {
    func_8009D994(&D_80137E64, &D_30013E0, 8, 8, arg0, arg1, arg2, arg2);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008CBE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008CFB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008D0DC.s")

void func_8008D1F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8009C320(&D_80137E64, &D_10116B0, &D_1011730, 16, 16, arg0, arg1, arg2, arg3);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008D250.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008D31C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008D4F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008D7F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008D984.s")

void func_8008DC34(void) {
    if ((D_80177E7C != 0) && (D_80178750 == 0)) {
        func_8008D250();
        func_8008D7F4();
        func_8008D4F0(0, 0);
        func_8008D31C();
        func_8008D984();
    }

    if (D_80178750 == 0) {
        func_8008CBE4();
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008DCB0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008DD78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008DE68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008E2C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008E51C.s")

void func_8008E5E8(void) {
    if (D_801778E8 != 0) {
        func_8008DC34();
    }
    func_8008A4DC();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008E620.s")

void func_8008E9EC(void) {
    func_8008E620();
    func_8008B734();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008EA14.s")

void func_8008F94C(void) {
    func_8008E5E8();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008F96C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008FA84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008FE78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8008FFF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80090200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800907C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8009092C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80090A00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80090CCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80090E8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800910C0.s")

void func_80091254(void) {
    if (D_80177880 == 1) {
        func_80090E8C();
    } else {
        func_800910C0();
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80091298.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80091368.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800914FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800915FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80091864.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80091B90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80091CF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80091DF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80091F00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80092244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800922F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800924E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800927A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80092D48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80092EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80093164.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80093310.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800933D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800935E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80094954.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80094BBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80094D20.s")

void func_80095350(UnkStruct_func_80095350* arg0) {
    func_800613C4(arg0);
    arg0->unk0 = 2;
    arg0->unk2 = 0xC3;
    arg0->unkB6 = 0x270F;
    func_800612B8((s32*)arg0 + 7, arg0->unk2, arg0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_800953A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_8009546C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80095538.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80095604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/hud/func_80096A74.s")
