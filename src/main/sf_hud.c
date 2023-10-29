#include "hud.h"

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80084930.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80084B94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80084E78.s")

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

void func_8008566C(f32 x, f32 y, f32 arg2, f32 arg3) {
    func_8009D994(&D_80137E64, &D_10030D0, 8, 12, x, y, arg2, arg3);
}

void func_800856C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_80084E78(&D_80137E64, &D_1013580, &D_1013700, 48, 12, arg0, arg1, arg2, arg3, 48.0f * arg4, 8.0f);
}

void func_80085740(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (D_801778E8 != 0) {
        func_8009D994(&D_80137E64, &D_3000B20, 32, 5, arg0, arg1, arg2, arg3);
    } else {
        func_8009D994(&D_80137E64, &D_1000E80, 48, 9, arg0, arg1, arg2, arg3);
    }
}

void func_800857DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (D_801778E8 != 0) {
        func_8009D0BC(&D_80137E64, D_300D3C0, D_300D408, 24, 3, arg0, arg1, arg2, arg3);
    } else {
        func_8009D0BC(&D_80137E64, D_10128C0, D_1012988, 40, 5, arg0, arg1, arg2, arg3);
    }
}

void func_80085890(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (D_801778E8 != 0) {
        func_8009D0BC(&D_80137E64, &D_300D350, &D_300D398, 24, 3, arg0, arg1, arg2, arg3);
    } else {
        func_8009D0BC(&D_80137E64, &D_10127D0, &D_1012898, 40, 5, arg0, arg1, arg2, arg3);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80085944.s")

void func_80086110(f32 arg0, f32 arg1, s32 arg2) {
    f32 temp = 0.82f;
    s32 pad;

    func_800B8DD0(&D_80137E64, 0x4B);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);

    if (arg2 != 0) {
        func_800856C0((8.0f * temp) + arg0, arg1 + 2.0f, temp, 1.0f, arg2 / 255.0f);
    }

    if ((arg2 <= 0) && (arg2 != -2) && ((D_80177854 == 100) || (D_80177830 == 1) || (D_80177838 != 0))) {
        func_800B8DD0(&D_80137E64, 0x4C);
        gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 0, 255);
        if ((arg2 == 0) && (D_80178280->unk_1C8 == 7)) {
            func_800A1200(arg0 + (8.0f * temp) + 4.0f, arg1 + 2.0f, 1.0f, 1.0f, " OK ");
        } else {
            func_800A1200(arg0 + (8.0f * temp) + 4.0f, arg1 + 2.0f, 1.0f, 1.0f, "DOWN");
        }
    }

    func_800B8DD0(&D_80137E64, 0x4C);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
    func_80085618(arg0, arg1, temp, 1.0f);
    func_800855C4(arg0 + (7.0f * temp) + (temp * 6.0f) * 8.0f, arg1, 1.0f, 1.0f);
    func_8008566C(arg0 + (7.0f * temp), arg1, temp * 6.0f, 1.0f);
}

s32 func_800863C8(void) {
    s32 var_v1 = 0;

    switch (D_80178234) {
        case 10:
            var_v1++;

        case 9:
            var_v1++;

        case 19:
            var_v1++;

        case 6:
            var_v1++;

        case 3:
            var_v1++;

        case 17:
            var_v1++;

        case 18:
            var_v1++;

        case 11:
            var_v1++;

        case 12:
            var_v1++;

        case 8:
            var_v1++;

        case 7:
            var_v1++;

        case 2:
            var_v1++;

        case 13:
            var_v1++;

        case 16:
            var_v1++;

        case 14:
            var_v1++;

        case 5:
            var_v1++;

        case 1:
            var_v1++;
        case 0:
            break;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80086444.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80086664.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800869A0.s")

void func_80086C08(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_800B8DD0(&D_80137E64, 0x4E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 60, 60, 128, 96);
    gDPSetAlphaDither(D_80137E64++, G_AD_DISABLE);
    func_8009D0BC(&D_80137E64, D_1013170, D_1013570, 24, 17, arg0, arg1, arg2, arg3);
}

void func_80086CC8(void) {
    char pad;
    f32 sp18;
    f32 temp;

    if ((D_80177854 != 0x64) && (D_80177838 != 0)) {
        D_80177838 -= 1;
    }

    if (D_80177838 == 1) {
        D_80161718 = 30;
        D_8016171C = 0;
    }

    temp = 108.0f;
    sp18 = 81.0f;

    if (D_80177838 != 0) {
        func_80086C08(temp - 4.5f - 32.0f, sp18 - 24.0f - 4.0f, 7.4f, 3.9f);

        if (D_80178234 != 10) {
            func_80086C08(122.0f, 122.0f, 2.9f, 1.2f);
        }

        func_80086664(temp, sp18 - 24.0f);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80086DCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80087530.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80087788.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80087B5C.s")

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
        var_v1 >>= 8;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80088564.s")

void func_8008865C(void) {
    s32 i;

    for (i = 0; i < 5; i++) {
        if (D_801617E8[i] != 0) {
            D_801617E8[i]--;
        }
    }
    func_80086CC8();
    func_80086DCC();
    func_80087B5C();
}

s32 func_800886B8(void) {
    s32 var_v1 = 0;
    f32 var_fv1 = D_8017797C->unk_3; // related to the vertical height of the arwing

    if ((var_fv1 != 0.0f) && (D_80161810[4] != 0)) {
        return 0;
    }

    D_80161810[4] = 0;

    if (fabsf(var_fv1) < 30.0f) {
        var_fv1 = 0.0f;
    }

    if (var_fv1 != 0.0f) {
        if (D_80161810[2] == 0) {
            if (var_fv1 > 0) {
                var_v1 = 1;
            } else {
                var_v1 = -1;
            }
            D_80161810[2] = 1;
        }
    } else {
        D_80161810[2] = 0;
    }
    return var_v1;
}

#ifdef IMPORT_DATA_PENDING
void func_80088784(s32 arg0) {
    Gfx* D_800D1D4C[] = {
        D_200B630, D_200A5A0, D_2009510, D_2008480, D_20073F0, D_2006360, D_200C6C0, D_20052D0, D_2004240,
        D_20031B0, D_2002120, D_2001090, D_2000000, D_2010A30, D_20101A0, D_200F910, D_200F080, D_200E7F0,
    };
    Gfx* D_800D1D94[] = {
        D_20066C0, D_2005E30, D_20055A0, D_2004D10, D_2004480, D_2003BF0, D_2003360,
        D_2002AD0, D_2002240, D_20019B0, D_2001120, D_2000890, D_2000000,
    };
    s32 D_800D1DC8[] = {
        255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 200, 150, 100, 50,
    };

    if (arg0 != 0) {
        arg0--;
        func_800B8DD0(&D_80137E64, 0x24);
        gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, D_800D1DC8[arg0]);
        func_80005708(&D_8013B3C0);
        func_80005B00(D_8013B3C0, 3.9f, -3.3f, -100.0f, 0);
        func_80005C34(D_8013B3C0, 0.37f, 0.37f, 0.37f, 1);
        func_80006EB8(&D_80137E64);

        if (D_80177C98 == 0) {
            gSPDisplayList(D_80137E64++, D_800D1D4C[arg0]);
        } else {
            gSPDisplayList(D_80137E64++, D_800D1D94[arg0]);
        }

        func_80005740(&D_8013B3C0);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80088784.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80088970.s")

void func_80089670(void) {
    func_800B8DD0(&D_80137E64, 0x3E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
    func_80005C34(D_8013B3C0, 18.64f, 21.04f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_1024AC0);
}

void func_80089710(void) {
    func_800B8DD0(&D_80137E64, 0x3E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
    func_80005C34(D_8013B3C0, 11.0f, 11.0f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_1024AC0);
}

void func_800897B0(void) {
    func_800B8DD0(&D_80137E64, 0x3E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
    func_80005C34(D_8013B3C0, 130.0f, 130.0f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_1024830);
}

void func_80089850(void) {
    func_800B8DD0(&D_80137E64, 0x3E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 0, 0, 0, 255);
    func_80005C34(D_8013B3C0, 125.0f, 125.0f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_102A8A0);
}

void func_800898F0(void) {
    func_800B8DD0(&D_80137E64, 1);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 208, 80, 255);
    func_80005C34(D_8013B3C0, 30.0f, 30.0f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_6004570);
}

#ifdef IMPORT_DATA_PENDING
void func_80089994(s32 arg0) {
    s32 D_800D1E14[][4] = {
        { 177, 242, 12, 255 }, { 89, 121, 6, 128 }, { 90, 90, 255, 255 }, { 45, 45, 128, 128 },
        { 0, 179, 67, 255 },   { 0, 90, 34, 128 },  { 255, 30, 0, 255 },  { 128, 15, 0, 128 },
    };
    f32 var_fv1;
    f32 var_fv2;

    if (D_801778A8 != 1) {
        var_fv1 = 38.0f;
        var_fv2 = 38.0f;
    } else {
        var_fv1 = 54.0f;
        var_fv2 = 54.0f;
    }

    func_800B8DD0(&D_80137E64, 0x3E);
    gDPSetPrimColor(D_80137E64++, 0, 0, D_800D1E14[arg0][0], D_800D1E14[arg0][1], D_800D1E14[arg0][2],
                    D_800D1E14[arg0][3]);
    func_80005C34(D_8013B3C0, var_fv1, var_fv2, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_1015510);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80089994.s")
#endif

void func_80089AF4(void) {
    func_800B8DD0(&D_80137E64, 0x3E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 0, 0, 0, 255);
    func_80005C34(D_8013B3C0, 54.0f, 54.0f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_F014180);
}

void func_80089B94(void) {
    func_800B8DD0(&D_80137E64, 0x3E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 92, 92, 255);
    func_80005C34(D_8013B3C0, 54.0f, 54.0f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_D0098B0);
}

void func_80089C38(void) {
    s32 alpha;

    func_800B8DD0(&D_80137E64, 0xC);

    alpha = D_80177DB0 % 21;

    if (alpha > 10) {
        alpha = 20 - alpha;
    }

    alpha *= 255.0f / 10.0f;
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, alpha);
    func_80005C34(D_8013B3C0, 15.0f, 15.0f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_1024230);
}

void func_80089D28(void) {
    s32 gb;

    func_800B8DD0(&D_80137E64, 1);

    gb = D_80177DB0 % 21;

    if (gb > 10) {
        gb = 20 - gb;
    }

    gb *= 25.5f;

    if ((gb == 10) || (gb == 0)) {
        // clang-format off
        //! FAKE: Probably a MACRO
        if (1) {func_80019218(0x4900001c, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);}
        // clang-format on
    }

    gDPSetPrimColor(D_80137E64++, 0, 0, 255, gb, gb, 255);
    func_80005B00(D_8013B3C0, 0.0f, -185.92001f, 0, 1);
    func_80005C34(D_8013B3C0, 3.55f, 0.13f, 1.0f, 1);
    func_80006EB8(&D_80137E64);
    gSPDisplayList(D_80137E64++, D_1024230);
}

void func_80089E98(s32 arg0) {
    s32 var_a1;
    s32 var_a1_2;

    switch (arg0) {
        case 0:
        case 1:
        case 2:
        case 3:
            var_a1_2 = var_a1 = arg0;
            if (D_801778A8 != 1) {
                if (arg0 == 1) {
                    var_a1 = 3;
                }
                if (arg0 == 3) {
                    var_a1 = 1;
                }

                if (D_80178280[arg0].unk_1C8 == 13) {
                    break;
                }
            }
            if ((var_a1_2 == D_801778A0) && (D_80177DB0 & 2)) {
                var_a1 = (var_a1 * 2) + 1;
            } else {
                var_a1 = var_a1 * 2;
            }
            func_80089994(var_a1);
            break;

        case 4:
        case 5:
        case 6:
        case 7:
            func_80089AF4();
            break;

        case 8:
            func_80089B94();
            break;

        case 100:
            func_800898F0();
            break;

        case 101:
            func_80089850();
            break;

        case 102:
            func_800897B0();
            break;

        case 103:
            if (D_801778E8 == 1) {
                func_80089670();
                break;
            }
            func_80089C38();
            break;

        case 200:
        case 201:
            func_80089670();
            break;

        case 999:
            break;

        default:
            func_80089710();
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008A07C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008A240.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008A4DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008AC54.s")

void func_8008AD94(void) {
    if (D_80177834 == 7) {
        func_800B8DD0(&D_80137E64, 0x4C);
        gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 0, 255);

        switch ((s32) D_80177D68) {
            case 0:
                func_800A1200(73, 173, 1.0f, 1.0f, "FOX");
                break;

            case 10:
                func_800A1200(73, 173, 1.0f, 1.0f, "FALCO");
                break;

            case 20:
                func_800A1200(73, 173, 1.0f, 1.0f, "SLIPPY");
                break;

            case 30:
                func_800A1200(73, 173, 1.0f, 1.0f, "PEPPY");
                break;

            case 200:
            case 240:
                func_800A1200(73, 173, 1.0f, 1.0f, "WOLF");
                break;

            case 220:
            case 260:
                func_800A1200(73, 173, 1.0f, 1.0f, "LEON");
                break;

            case 210:
            case 250:
                func_800A1200(73, 173, 1.0f, 1.0f, "PIGMA");
                break;

            case 230:
            case 270:
                func_800A1200(73, 173, 1.0f, 1.0f, "ANDREW");
                break;

            case 170:
                func_800A1200(73, 173, 1.0f, 1.0f, "BILL");
                break;

            case 40:
                func_800A1200(73, 173, 1.0f, 1.0f, "KATT");
                break;
        }
    }
}

void func_8008B044(void) {
    switch (D_80161798) {
        case 0:
            if (D_80161690 == 0) {
                return;
            }

            func_80019218(0x49002018, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

            if (D_800CFF90 != 0) {
                func_8001AF40(1);
            }
            D_80161794 = 0;
            D_80161798 = 1;

        case 1:
            if (D_80161690 != 0) {
                D_80161790++;
                if (D_80161790 >= 7) {
                    if (D_80161794 & 1) {
                        func_80019218(0x49002018, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    D_80161790 = 0;
                    D_80161794++;
                }
                D_80161690--;
            } else {
                D_800CFF90 = 0;
                D_80161790 = 0;
                D_80161798 = 0;
                func_8001A838(0x49002018);
            }
            break;
    }
}

void func_8008B1B0(void) {
    f32 temp = 142.0f;
    f32 temp2 = 18.0f;

    func_800B8DD0(&D_80137E64, 0x4E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);

    switch (D_80161790 / 2) {
        case 3:
            func_8008556C(temp + 31.0f, temp2);
        case 2:
            func_80085514(temp + 24.0f, temp2);
        case 1:
            func_800854BC(temp + 18.0f, temp2);
        case 0:
            func_80085464(temp, temp2);
            break;
        default:
            break;
    }
}

void func_8008B2A4(void) {
    if (D_80177854 != 100) {
        func_8008B044();
    }
    if (D_80161690 != 0) {
        func_8008B1B0();
    }
}

void func_8008B2F0(void) {
    f32 var_fv0;

    switch (D_80161730) {
        case 0:
            D_801617B0 = 0;
            D_8016179C = 20.0f;
            D_801617A0 = 18.0f;

            if (D_80161A90[0] >= 3) {
                D_801617A4 = D_801617A8 = 1.5f;
            } else {
                D_801617A4 = D_801617A8 = 1.0f;
            }

            var_fv0 = D_80178280->unk_264;
            D_801617AC = var_fv0 / ((256.0f * D_801617A8) - 1.0f);

            if (D_80161A90[0] >= 3) {
                D_80161730 = 2;
            } else {
                D_80161730 = 1;
            }
            break;

        case 1:
            if (D_80161A90[0] >= 3) {
                D_801617B0 = 55;
                D_80161730 = 2;
            }

        case 2:
            D_800D1EB4 = D_800D1EB8 = D_800D1EBC = 255;
            if (D_801617B0 > 0) {
                if (--D_801617B0 == 0) {
                    D_80178280->unk_26C += 128;
                }
            }

            if (((D_801617B0 != 0) || ((D_801617A4 - D_801617A8) > 0.1f)) && (D_80177DB0 & 2)) {
                D_800D1EB4 = 0;
                D_800D1EB8 = 255;
                D_800D1EBC = 0;
            }

            if ((D_801617B0 == 0) && ((s32) D_80161A90[0] >= 3)) {
                D_801617A4 = 1.5f;
            } else {
                D_801617A4 = 1.0f;
            }

            func_8009BC2C(&D_801617A8, D_801617A4, 0.02f, 1000.0f, 0.001f);

            var_fv0 = D_80178280->unk_264;
            if (var_fv0 > (256.0f * D_801617A8) - 1.0f) {
                var_fv0 = (256.0f * D_801617A8) - 1.0f;
            }
            D_801617AC = var_fv0 / ((256.0f * D_801617A8) - 1.0f);
            break;
    }
}

void func_8008B5B0(f32 x, f32 y) {
    func_800B8DD0(&D_80137E64, 0x4B);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
    func_800856C0(x + 8.0f, y + 2.0f, D_801617A8, 1.0f, D_801617AC);
    func_800B8DD0(&D_80137E64, 0x4C);
    gDPSetPrimColor(D_80137E64++, 0, 0, D_800D1EB4, D_800D1EB8, D_800D1EBC, 0xFF);
    func_80085618(x, y, 1.0f, 1.0f);
    func_800855C4(x + 7.0f + (D_801617A8 * 6.0f * 8.0f), y, 1.0f, 1.0f);
    func_8008566C(x + 7.0f, y, D_801617A8 * 6.0f, 1.0f);
}

void func_8008B734(void) {
    func_8008B2F0();
    func_8008B5B0(20.0f, 18.0f);
    func_80085944();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008B774.s")

void func_8008B9E8(void) {
    s32 temp;

    // clang-format off
    if ((D_8016178C != 0) && (D_8016178C != 1)) { D_8016178C--; }
    // clang-format on

    if (D_80161788 != 0) {
        D_80161788--;
    }

    if ((D_80161788 == 0) && (D_8016178C == 0)) {
        if ((D_8017829C >= 4) && (D_801782A4 != 2) && (D_801782A4 != 3)) {
            temp = func_8008B774();
            if (temp == 1) {
                D_80161788 = 20;
            }
            if (temp == 2) {
                D_8016178C = 60;
            }
        } else {
            D_80161788 = 0;
        }
    }

    if ((D_801782A4 == 2) || (D_801782A4 == 3)) {
        D_80161788 = 0;
        D_8016178C = 0;
    }
}

void func_8008BAE4(void) {
    s32 r;
    s32 g;
    s32 b;
    s32 alpha;

    if (D_8016178C != 0) {
        alpha = 192 / D_8016178C;
        r = g = b = 255;
    }

    if (D_80161788 != 0) {
        r = alpha = D_80161788 * 12;
        g = b = 0;
    }

    if ((D_80161788 != 0) || (D_8016178C != 0)) {
        func_800B8DD0(&D_80137E64, 0xC);
        gDPSetPrimColor(D_80137E64++, 0, 0, r, g, b, alpha);
        func_80005708(&D_8013B3C0);
        func_80005B00(D_8013B3C0, -53.9f, -38.5f, -139.4f, 1);
        func_80005C34(D_8013B3C0, 1.0f, 1.0f, 1.0f, 1);
        func_80006EB8(&D_80137E64);
        gSPDisplayList(D_80137E64++, D_800D1A40);
        func_80005740(&D_8013B3C0);
    }
}

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
        arg0 = (s64) -arg0;
    }

    ret = 1;

    while (arg0 >= temp) {
        ret++;
        temp *= 10;
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008BD00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C104.s")

#ifdef IMPORT_DATA_PENDING
void func_8008C390(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    u8* D_800D1EC0[] = {
        D_5000000, D_5000080, D_5000100, D_5000180, D_5000200, D_5000280, D_5000300, D_5000380, D_5000400, D_5000480,
    };
    s32 i;

    for (i = 10; i != 1; i /= 10) {
        if ((arg0 > 0.0f) && (arg1 > 0.0f)) {
            func_8009D994(&D_80137E64, D_800D1EC0[arg3 / i], 16, 8, arg0, arg1, arg2, arg2);
        }
        arg0 += 9.0f * arg2;
        arg3 %= i;
    }

    if ((arg0 > 0.0f) && (arg1 > 0.0f)) {
        func_8009D994(&D_80137E64, D_800D1EC0[arg3 / i], 16, 8, arg0, arg1, arg2, arg2);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C390.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008C5C8(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    u16* D_800D1EE8[] = {
        D_10050E0,
        D_100BAC0,
        D_100D900,
        D_10032A0,
    };
    s32 i;

    for (i = 0; i < 2; i++) {
        func_8009D418(&D_80137E64, D_800D1EE8[arg3] + (880 * i), 44, 20, arg0, (20 * i * arg2) + arg1, arg2, arg2);
    }
    func_8009D418(&D_80137E64, D_800D1EE8[arg3] + 1760, 44, 4, arg0, (40.0f * arg2) + arg1, arg2, arg2);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C5C8.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008C6F4.s")

#ifdef IMPORT_DATA_PENDING
void func_8008CA44(void) {
    s32 D_800D2048[] = {
        0x80, 0x40, 0x20, 0x10, 0x0A, 0x09, 0x06, 0x05, 0x08, 0x04, 0x02, 0x01,
    };
    s32 i;
    s32 j;

    if ((D_80178280[D_801778A0].unk228 != 0) && (D_80178280[D_801778A0].unk210 == 0) && (D_80177854 != 0x64)) {
        j = D_80178280[D_801778A0].unk228;

        for (i = 0; i < 12; i++) {
            if ((j & D_800D2048[i]) != D_800D2048[i]) {
                continue;
            }

            j = (D_800D2048[i] ^ 0xFF) & j;

            if (D_80177DB0 & 4) {
                func_8008C6F4(i, 0);
            }
            if ((D_80177DB0 - 2) & 4) {
                func_8008C6F4(i, 1);
            }
        }
        func_8008BD00(D_1024A58, 8, 8, 2);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008CA44.s")
#endif

s32 func_8008CB8C(void) {
    return 0;
}

void func_8008CB98(f32 arg0, f32 arg1, f32 arg2) {
    func_8009D994(&D_80137E64, &D_30013E0, 8, 8, arg0, arg1, arg2, arg2);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008CBE4.s")

void func_8008CFB8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    for (i = 0; i < 3; i++) {
        func_8009D994(&D_80137E64, D_3000BC0 + ((640 * i) / 2), 80, 8, arg0, (8 * i * arg3) + arg1, arg2, arg3);
    }
    func_8009D994(&D_80137E64, D_3000BC0 + ((640 * i) / 2), 80, 2, arg0, (8 * i * arg3) + arg1, arg2, arg3);
}

void func_8008D0DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    u32 var_t8 = 48.0f * arg4;

    func_80084E78(&D_80137E64, D_300D440, D_300D500, 48, 4, arg0, arg1, arg2, arg3, var_t8, 4);
}

void func_8008D1F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8009C320(&D_80137E64, &D_10116B0, &D_1011730, 16, 16, arg0, arg1, arg2, arg3);
}

#ifdef IMPORT_DATA_PENDING
void func_8008D250(void) {
    f32 D_800D20C8[] = { 113.0f, 273.0f, 113.0f, 273.0f };
    f32 D_800D20D8[] = { 79.0f, 79.0f, 199.0f, 199.0f };

    func_800B8DD0(&D_80137E64, 0x4C);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
    func_8008C5C8(D_800D20C8[D_801778A0], D_800D20D8[D_801778A0], 0.54f, D_801778A0);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D250.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D31C(void) {
    f32 D_800D20E8[] = { 60.0f, 220.0f, 60.0f, 220.0f };
    f32 D_800D20F8[] = { 78.0f, 78.0f, 198.0f, 198.0f };

    func_8009BC2C(&D_800D19E0[D_801778A0], D_80178280[D_801778A0].unk_264 * (1.0f / 255.0f), 0.3f, 10.0f, 0.01f);
    func_800B8DD0(&D_80137E64, 0x4E);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);

    func_8008D0DC(D_800D20E8[D_801778A0] + 3.0f, D_800D20F8[D_801778A0] + 18.0f, 1.0f, 1.0f, D_800D19E0[D_801778A0]);
    func_800B8DD0(&D_80137E64, 0x4C);

    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);

    func_8008CFB8(D_800D20E8[D_801778A0], D_800D20F8[D_801778A0], 1.0f, 1.0f);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D31C.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D4F0(f32 arg0, f32 arg1) {
    f32 D_800D2108[] = {
        110.0f, 270.0f, 110.0f, 270.0f, 0.0f,
    };
    f32 D_800D211C[] = {
        16.0f, 16.0f, 136.0f, 136.0f, 0.0f,
    };
    f32 temp_fv0;
    f32 temp2;
    f32 temp_fs0;
    f32 sp68;
    f32 temp;
    f32 sp60;
    s32 temp_t9;
    s32 var_v1;

    if (D_801778E8 != 0) {
        temp = 2.0f;
        sp60 = 1.0f;
        var_v1 = D_801778A0;
        sp68 = 24.0f;
    } else {
        temp = 2.0f;
        sp60 = 2.0f;
        sp68 = 40.0f;
        var_v1 = 4;
        D_800D2108[var_v1] = arg0;
        D_800D211C[var_v1] = arg1;
    }

    temp_fs0 = D_80178280[D_801778A0].unk_2BC * 0.011111111f;

    temp_fv0 = 1.0f - temp_fs0;
    temp2 = sp68 * temp_fs0;

    if (D_80178280[D_801778A0].unk_2B4 == 0) {
        func_8009BC2C(&D_800D19AC[var_v1], 255.0f, 0.4f, 100.0f, 0.01f);
    } else {
        func_8009BC2C(&D_800D19AC[var_v1], 100.0f, 0.4f, 100.0f, 0.01f);
    }

    temp_t9 = D_800D19AC[var_v1];

    func_800B8DD0(&D_80137E64, 0x4E);

    gDPSetPrimColor(D_80137E64++, 0, 0, temp_t9, temp_t9, temp_t9, 255);

    if (temp_fv0 > 0.01f) {
        func_80085890(D_800D2108[var_v1] + temp + temp2, D_800D211C[var_v1] + sp60, temp_fv0, 1.0f);
    }
    if (temp_fs0 > 0.01f) {
        func_800857DC(D_800D2108[var_v1] + temp + 1.0f, D_800D211C[var_v1] + sp60, temp_fs0, 1.0f);
    }
    func_800B8DD0(&D_80137E64, 0x4C);
    gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
    func_80085740(D_800D2108[var_v1], D_800D211C[var_v1], 1.0f, 1.0f);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D4F0.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D7F4(void) {
    s32 D_800D2130[] = { 146, 165, 146, 165 };
    s32 D_800D2140[] = { 106, 106, 125, 125 };
    s32 D_800D2150[] = { 177, 255, 0, 30 };
    s32 D_800D2160[] = { 242, 30, 179, 30 };
    s32 D_800D2170[] = { 12, 0, 67, 255 };

    func_800B8DD0(&D_80137E64, 0x4E);
    gDPSetPrimColor(D_80137E64++, 0, 0, D_800D2150[D_801778A0], D_800D2160[D_801778A0], D_800D2170[D_801778A0], 255);
    func_8009FC0C(D_800D2130[D_801778A0], D_800D2140[D_801778A0], D_801778A0 + 1);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D7F4.s")
#endif

#ifdef IMPORT_DATA_PENDING
void func_8008D984(void) {
    s32 D_800D21A8[] = { 146, 165, 146, 165 };
    s32 D_800D21B8[] = { 94, 94, 137, 137 };

    if (D_80177DA0[D_801778A0] != D_800D2180[D_801778A0]) {
        D_800D2180[D_801778A0] = D_80177DA0[D_801778A0];
        if (D_80177DA0[D_801778A0] == 0) {
            D_800D2190[D_801778A0] = 0;
        } else {
            D_800D2190[D_801778A0] = 30;
        }
    }

    if (D_800D2190[D_801778A0] != 0) {
        D_800D2190[D_801778A0]--;
    }

    if ((D_800D2190[D_801778A0] & 2) || ((D_800D2190[D_801778A0] == 0) && (D_80177DA0[D_801778A0] != 0))) {
        func_800BA4F0();
        if (D_80177DA0[D_801778A0] >= 2) {
            if (func_8009BC2C(&D_800D21A4, D_800D21A0, 0.4f, 100.0f, 0.1f) == 0.0f) {
                if (D_800D21A0 == 255.0f) {
                    D_800D21A0 = 96.0f;
                } else {
                    D_800D21A0 = 255.0f;
                }
            }
        } else {
            D_800D21A4 = 255.0f;
        }
        gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, D_800D21A4);
        func_8008D1F0(D_800D21A8[D_801778A0], D_800D21B8[D_801778A0], 1.0f, 1.0f);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D984.s")
#endif

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

void func_8008DCB0(f32 arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_800BA4F0();
    gDPSetPrimColor(D_80137E64++, 0, 0, arg2, arg3, arg4, D_80161708);
    func_8009C320(&D_80137E64, D_1011ED0, D_1011F08, 16, 7, arg0, arg1, 1.0f, 1.0f);
}

void func_8008DD78(f32 arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_800BA4F0();
    gDPSetPrimColor(D_80137E64++, 0, 0, arg3, arg4, arg5, D_80161708);

    if (arg2 >= 10) {
        func_8009FC0C((s32) arg0 - (func_8008BCBC(arg2) * 8) + 11, arg1, arg2);
    } else {
        func_8009FC0C(arg0, arg1, arg2);
    }
}

void func_8008DE68(void) {
    f32 sp3C;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 var_fv0;

    if ((D_80161734 == 1) && (D_801778B8 > 0)) {
        if ((D_80177848 >= 0) && (D_801616BC == -1.0f)) {
            func_80019218(0x4900C028, D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_801616BC = 255.0f;
        }

        func_8009BC2C(&D_801616C0, 25.0f, 0.3f, 4.0f, 4.0f);

        sp3C = D_801616C0;
        temp1 = 52.0f;
        temp2 = sp3C + 5.0f;
        temp3 = temp1 + 3.0f;
        temp4 = sp3C + 6.0f;
        temp5 = temp1 + 10.0f;

        func_800B8DD0(&D_80137E64, 0x4E);
        gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
        func_8009C320(&D_80137E64, D_1011A40, D_1011AB0, 32, 7, temp2, temp3, 1.0f, 1.0f);

        func_800B8DD0(&D_80137E64, 0x4C);
        func_8009D994(&D_80137E64, D_1002040, 40, 12, sp3C, temp1, 1.0f, 1.0f);

        if (sp3C >= 25.0f) {
            func_8009BC2C(&D_801616C4, 0.88f, 0.3f, 0.2f, 0.1f);
        }

        if ((D_801616C4 >= 0.1f) && (sp3C >= 25.0f)) {
            func_800B8DD0(&D_80137E64, 0x4E);
            gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
            func_8009D0BC(&D_80137E64, D_10129C0, D_1013090, 16, 109, temp4, temp5, 1.0f, D_801616C4);
        }

        func_800B8DD0(&D_80137E64, 0x4C);
        gDPSetPrimColor(D_80137E64++, 0, 0, 0, 0, 0, 255);

        if (D_801616BC > 0.0f) {
            var_fv0 = (D_801616BC - D_80177848) * (2.76f / D_801616BC);
            if (var_fv0 > 2.76f) {
                var_fv0 = 2.76f;
            }
            if (var_fv0 < 0.00f) {
                var_fv0 = 0.00f;
            }
            func_8009BC2C(&D_801616C8, var_fv0, 0.2f, 1000.0f, 0.01f);
        } else {
            D_801616C8 = 2.76f;
        }

        if (D_801616C4 >= 0.88f) {
            temp6 = sp3C + 8.0f;
            temp7 = 101.0f - (31.884058f * D_801616C8) + temp1;
            if (D_801616C8 > 0.0f) {
                func_8009D418(&D_80137E64, D_800D99F8, 32, 32, temp6, temp7, 0.2f, D_801616C8);
            }
        }
    } else {
        D_801616C0 = 0.0f;
        D_801616C4 = 0.0f;
        D_801616C8 = 0.0f;
        D_801616BC = -1.0f;
    }
}

void func_8008E2C8(f32 arg0, f32 arg1, s32* arg2, f32 arg3) {
    f32 var_fs0 = 0.0f;
    s32 var_s2 = 0;
    s32 i;

    arg0 -= (arg3 - 1.0f) * 34.0f;
    arg1 -= (arg3 - 1.0f) * 4.0f;

    for (i = 0; i != 5; i++) {
        if ((i == 0) || (i == 2)) {
            var_s2 = (s32) arg2[i / 2] % 60;
        }

        if (i == 4) {
            var_s2 = (s32) arg2[i / 2] % 100;
        }

        if (i & 1) {
            func_800BA4F0();
            gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 255, 255);
            func_8009C320(&D_80137E64, &D_1011E80, &D_1011EC0, 0x10, 8, (var_fs0 * arg3) + arg0, arg1, arg3, arg3);
        } else {
            func_800BA490();
            gDPSetPrimColor(D_80137E64++, 0, 0, 255, 255, 0, 255);
            func_8008C390((var_fs0 * arg3) + arg0, arg1, arg3, var_s2);
            var_fs0 += 9.0f;
        }
        var_fs0 += 9.0f;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008E51C.s")

void func_8008E5E8(void) {
    if (D_801778E8 != 0) {
        func_8008DC34();
    }
    func_8008A4DC();
}

void func_8008E620(f32 arg0, f32 arg1) {
    f32 r;
    f32 g;
    f32 b;
    s32 ret;

    switch (D_80178234) {
        case 0:
            ret = func_800A3F50(150);
            break;

        case 1:
            ret = func_800A3F50(200);
            break;

        case 14:
            ret = func_800A3F50(50);
            break;

        case 2:
            ret = func_800A3F50(150);
            break;

        case 12:
            ret = func_800A3F50(150);
            break;

        case 17:
            ret = func_800A3F50(150);
            break;

        case 5:
            ret = func_800A3F50(150);
            break;

        case 16:
            ret = func_800A3F50(150);
            break;

        case 7:
            ret = func_800A3F50(100);
            break;

        case 11:
            ret = func_800A3F50(150);
            break;

        case 13:
            ret = func_800A3F50(150);
            break;

        case 8:
            ret = func_800A3F50(250);
            break;

        case 18:
            ret = func_800A3F50(100);
            break;

        case 3:
            ret = func_800A3F50(300);
            break;

        case 9:
        case 19:
            ret = func_800A3F50(200);
            break;

        default:
            ret = 0;
            break;
    }

    if (D_801617B8) {
        D_801617B8--;
    }

    if (ret != D_801617B4) {
        D_801617B8 = 30;
        D_801617B4 = ret;
    }

    if (D_801617B8 & 1) {
        r = 255;
        g = 255;
        b = 255;
    } else {
        if (ret != 0) {
            r = 200;
            g = 100;
            b = 50;
        } else {
            r = 90;
            g = 160;
            b = 200;
        }
    }
    func_800B8DD0(&D_80137E64, 0x4C);
    gDPSetPrimColor(D_80137E64++, 0, 0, r, g, b, 255);
    func_80094D20(arg0, arg1);
}

void func_8008E9EC(f32 arg0, f32 arg1) {
    func_8008E620(arg0, arg1);
    func_8008B734();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008EA14.s")

void func_8008F94C(void) {
    func_8008E5E8();
}

void func_8008F96C(void) {
    if (D_80177854 != 100) {
        func_8008E5E8();
    }

    func_800B9358();

    if ((D_80177880 != 2) && (D_80161708 != 0)) {
        func_8008D4F0(246.0f, 28.0f);
        func_8008EA14(250.0f, 38.0f);
    }

    func_8008B2A4();

    if (D_80161708 != 0) {
        func_8008E9EC(24.0f, 30.0f);
        if (D_80178234 != 10) {
            func_80087530(248.0f, 11.0f, D_80161AA0[D_801778A0]);
        }
    }

    if (D_80178234 == 10) {
        func_801988E0();
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FA84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FE78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FFF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80090200.s")

void func_800907C4(UnkStruct_D_8016F110* arg0) {
    switch (arg0->unk_04E) {
        case 0:
            if ((arg0->unk_0D8[1] == 255.0f) && (arg0->unk_0D8[2] == 212.0f)) {
                arg0->unk_04E = 1;

            } else {
                func_8009BC2C(&arg0->unk_0D8[1], 255.0f, 0.3f, 6.0f, 6.0f);
                func_8009BC2C(&arg0->unk_0D8[2], 212.0f, 0.3f, 4.98f, 4.98f);
            }
            break;

        case 1:
            if ((arg0->unk_0D8[1] == 28.0f) && (arg0->unk_0D8[2] == 23.0f)) {
                arg0->unk_04E = 0;
            } else {
                func_8009BC2C(&arg0->unk_0D8[1], 28.0f, 0.3f, 6.0f, 6.0f);
                func_8009BC2C(&arg0->unk_0D8[2], 23.0f, 0.3f, 4.98f, 4.98f);
            }
            break;
    }
    func_8008FFF0(arg0, D_8015F928);
}

s32 func_8009092C(UnkStruct_func_80090A00* arg0) {
    s32 var_s5 = 0;
    UnkStruct_D_8016F110* var_s1;
    s32 i;

    if (arg0->unk_0E6 != 0) {
        return 1;
    }

    var_s1 = &D_8016F110[1];

    for (i = 1; i < 4; i++, var_s1++) {
        if (var_s1->unk_000.unk_00 == 2) {
            var_s5 = 1;
            if (arg0->unk_0E6 == 0) {
                arg0->unk_0E6 = i;
            } else if (Rand_ZeroOne() > 0.4f) {
                arg0->unk_0E6 = i;
            }
            arg0->unk_0B8 = 0;
        }
    }

    return var_s5;
}

s32 func_80090A00(UnkStruct_func_80090A00* arg0) {
    switch (arg0->unk_050[5]) {
        case 0:
            arg0->unk_114[8] = 0.0f;
            arg0->unk_114[7] = 360.0f;
            arg0->unk_0BC = 8;
            arg0->unk_0F8 = 100.0f;
            arg0->unk_0F4 = 300.0f;
            arg0->unk_050[4] = 1;
            arg0->unk_050[5] = 1;

        case 1:
            if (arg0->unk_0BC == 0.0f) {
                arg0->unk_114[1] = 20.0f;
                arg0->unk_114[3] = 3.6f;
                arg0->unk_050[2] = 0;
                arg0->unk_050[3] = 36;
                arg0->unk_050[5] = 2;
            } else {
                arg0->unk_000.pos.y -= 8.0f;
                break;
            }

        case 2:
            arg0->unk_114[4] = D_8016F110[0].unk_000.pos.x + 1000.0f;
            arg0->unk_114[5] = 300.0f;
            arg0->unk_114[6] = arg0->unk_000.pos.z - 10000.0f;
            arg0->unk_050[2]++;
            if (arg0->unk_050[2] == arg0->unk_050[3]) {
                arg0->unk_050[5] = 3;
                arg0->unk_050[3] = 40;
                arg0->unk_050[2] = 0;
            } else if (arg0->unk_050[2] == 6) {
                arg0->unk_050[1] = 1;
            }
            break;

        case 3:
            arg0->unk_114[4] = D_8016F110[0].unk_000.pos.x - 1000.0f;
            arg0->unk_114[5] = 400.0f;
            arg0->unk_114[6] = D_8016F110[0].unk_000.pos.z;
            arg0->unk_050[2]++;
            if (arg0->unk_050[2] == arg0->unk_050[3]) {
                arg0->unk_050[5] = 4;
            } else if (arg0->unk_050[2] == 20) {
                arg0->unk_114[1] = 30.0f;
            }
            break;

        case 4:
            arg0->unk_114[6] = D_80178280->unk_138;
            arg0->unk_114[5] = 100.0f;
            arg0->unk_114[4] = D_80178280->unk_074;
            if ((fabsf(arg0->unk_000.pos.x - D_80178280->unk_074) < 300.0f) &&
                (fabsf(arg0->unk_000.pos.z - D_80178280->unk_138) < 300.0f)) {
                arg0->unk_050[5] = 5;
                arg0->unk_050[3] = 20;
                arg0->unk_050[2] = 0;
            }
            break;

        case 5:
            arg0->unk_114[6] = D_80178280->unk_138 + 1000.0f;
            arg0->unk_114[5] = 1000.0f;
            arg0->unk_114[4] = D_80178280->unk_074 - 1000.0f;
            arg0->unk_050[2]++;
            if (arg0->unk_050[2] == arg0->unk_050[3]) {
                func_80060FBC(&arg0->unk_000.unk_00, arg0->unk_100);
            }
            break;
    }
    return false;
}

s32 func_80090CCC(UnkStruct_func_80090A00* arg0) {
    s32 ret = 0;

    if (func_8009092C(arg0) != 0) {
        arg0->unk_114[6] = D_8016F110[arg0->unk_0E6].unk_000.pos.z;
        arg0->unk_114[5] = D_8016F110[arg0->unk_0E6].unk_000.pos.y;
        arg0->unk_114[4] = D_8016F110[arg0->unk_0E6].unk_000.pos.x;
    } else {
        arg0->unk_114[6] = D_8016F110[0].unk_000.pos.z;
        arg0->unk_114[5] = D_8016F110[0].unk_000.pos.y;
        arg0->unk_114[4] = D_8016F110[0].unk_000.pos.x;
    }

    if ((fabsf(arg0->unk_000.pos.x - arg0->unk_114[4]) < 2000.0f) &&
        (fabsf(arg0->unk_000.pos.z - arg0->unk_114[6]) < 2000.0f)) {
        arg0->unk_050[6]++;
        if (arg0->unk_050[6] >= 9) {
            arg0->unk_050[0] = 1;
            arg0->unk_050[6] = 0;
        }
    }

    if ((fabsf(arg0->unk_000.pos.x - arg0->unk_114[4]) < 700.0f) &&
        (fabsf(arg0->unk_000.pos.x - arg0->unk_114[4]) < 700.0f)) {
        arg0->unk_0B8 = 1;
        arg0->unk_050[6] = 0;
        ret = 1;
    }

    if (arg0->unk_0BE == 0) {
        arg0->unk_0BE = (s32) (Rand_ZeroOne() * 200.0f) + 200;
        arg0->unk_114[10] = 30.0f;
    }

    if (D_8016F110[arg0->unk_0E6].unk_000.unk_00 == 0) {
        arg0->unk_0B8 = 1;
        arg0->unk_0E6 = 0;
        arg0->unk_050[6] = 0;
        ret = 1;
    }

    return ret;
}

s32 func_80090E8C(UnkStruct_func_80090A00* arg0) {
    f32 x;
    f32 y;
    f32 z;
    f32 var_fv1_2;

    if (arg0->unk_0BC == 0) {
        if (D_80177C98 == 1) {
            x = (Rand_ZeroOne() - 0.5f) * 20000.0f;
            y = (Rand_ZeroOne() - 0.5f) * 5000.0f;
            z = (Rand_ZeroOne() - 0.5f) * 20000.0f;
        } else {
            x = (Rand_ZeroOne() - 0.5f) * 10000.0f;
            y = Rand_ZeroOne() * 1000.0f;
            z = (Rand_ZeroOne() - 0.5f) * 10000.0f;
        }

        if ((fabsf(arg0->unk_000.pos.x - x) > 2000.0f) && (fabsf(arg0->unk_000.pos.z - z) > 2000.0f)) {
            arg0->unk_114[4] = x;
            arg0->unk_114[5] = y;
            arg0->unk_114[6] = z;
            arg0->unk_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 10;
        }
    }

    if (arg0->unk_0E4 == 1) {
        var_fv1_2 = 3000.0f;
    } else {
        var_fv1_2 = 5000.0f;
    }

    if ((var_fv1_2 < fabsf(arg0->unk_000.pos.x - D_8016F110->unk_000.pos.x)) &&
        (var_fv1_2 < fabsf(arg0->unk_000.pos.z - D_8016F110->unk_000.pos.z))) {
        arg0->unk_0B8 = 0;
    }

    if (arg0->unk_0BE == 0) {
        arg0->unk_0BE = (s32) (Rand_ZeroOne() * 200.0f) + 200;
        arg0->unk_114[10] = 30.0f;
    }
    return false;
}

s32 func_800910C0(UnkStruct_func_80090A00* arg0) {
    f32 var_fv1;

    if (arg0->unk_0BC == 0) {
        arg0->unk_18C[28].x = (Rand_ZeroOne() - 0.5f) * 2000.0f;
        arg0->unk_18C[28].y = (Rand_ZeroOne() * 1000.0f) + 200.0f;
        arg0->unk_18C[28].z = (Rand_ZeroOne() - 0.5f) * 2000.0f;
        arg0->unk_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 10;
    }

    arg0->unk_114[4] = arg0->unk_18C[28].x + D_8016F110->unk_000.pos.x;
    arg0->unk_114[5] = arg0->unk_18C[28].y;
    arg0->unk_114[6] = arg0->unk_18C[28].z + D_8016F110->unk_000.pos.z;

    if (arg0->unk_0E4 == 1) {
        var_fv1 = 1500.0f;
    } else {
        var_fv1 = 3000.0f;
    }

    if ((var_fv1 < fabsf(arg0->unk_000.pos.x - arg0->unk_114[4])) &&
        (var_fv1 < fabsf(arg0->unk_000.pos.z - arg0->unk_114[6]))) {
        arg0->unk_0B8 = 0;
    }

    if (arg0->unk_0BE == 0) {
        arg0->unk_0BE = (s32) (Rand_ZeroOne() * 200.0f) + 200;
        arg0->unk_114[10] = 30.0f;
    }
    return false;
}

void func_80091254(UnkStruct_func_80090A00* arg0) {
    if (D_80177880 == 1) {
        func_80090E8C(arg0);
    } else {
        func_800910C0(arg0);
    }
}

s32 func_80091298(UnkStruct_func_80090A00* arg0) {
    arg0->unk_114[1] = D_80178280->unk_0D0 + 10.0f;
    arg0->unk_114[3] = 3.6f;
    arg0->unk_114[4] = D_80178280->unk_074 + ((f32) (arg0->unk_0E4 - 2) * 700.0f);
    arg0->unk_114[5] = D_80178280->unk_078;
    arg0->unk_114[6] = D_80178280->unk_138;

    if ((fabsf(arg0->unk_000.pos.x - arg0->unk_114[4]) < 700.0f) ||
        (fabsf(arg0->unk_000.pos.z - arg0->unk_114[6]) < 700.0f)) {
        arg0->unk_114[1] = D_80178280->unk_0D0 - 10.0f;
        arg0->unk_114[3] = 1.2f;
    }
    return false;
}

s32 func_80091368(UnkStruct_func_80090A00* arg0) {
    switch (arg0->unk_050[5]) {
        case 0:
            arg0->unk_114[5] = 20000.0f;
            arg0->unk_050[1] = 1;
            arg0->unk_050[5] = 1;
            D_801778B0[arg0->unk_0E4] = 1;

            switch (arg0->unk_0E4) {
                case 1:
                    func_800BA808(D_801839B8, 10);
                    break;

                case 3:
                    func_800BA808(D_80183A08, 30);
                    break;

                case 2:
                    func_800BA808(D_80183A64, 20);
                    break;
            }
            D_801778B0[arg0->unk_0E4] = -1;
            break;

        case 1:
            if (arg0->unk_114[29] < 2.0f) {
                arg0->unk_114[29] = 2.0f;
            }

            if (arg0->unk_0BC == 0) {
                arg0->unk_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 30;
                arg0->unk_114[7] = 360.0f;
                arg0->unk_114[8] = 0.0f;
            }

            if (arg0->unk_000.pos.y > 3000.0f) {
                func_80060FBC(&arg0->unk_000.unk_00, arg0->unk_100);
            }
            break;
    }
    return false;
}

void func_800914FC(UnkStruct_func_80090A00* arg0) {
    switch (arg0->unk_0B8) {
        case 0:
            if (func_80090CCC(arg0) == 0) {
                break;
            }
        case 1:
            func_80091254(arg0);
            break;

        case 2:
            func_80091298(arg0);
            break;

        case 3:
            func_80091368(arg0);
            break;

        case 7:
            func_80090A00(arg0);
            break;
    }

    if ((D_801778B0[arg0->unk_0E4] <= 0) && (arg0->unk_0B8 != 3)) {
        arg0->unk_050[5] = 0;
        arg0->unk_0B8 = 3;
    }

    if (D_80178280->unk_1C8 == 7) {
        if ((arg0->unk_0B8 != 2) && (arg0->unk_0B8 != 3)) {
            arg0->unk_050[4] = 1;
            arg0->unk_0B8 = 2;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800915FC.s")

s32 func_80091864(UnkStruct_func_80090A00* arg0) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 x;
    f32 y;
    f32 z;
    f32 sp2C;
    f32 sp28;

    x = arg0->unk_114[4] - arg0->unk_000.pos.x;
    y = arg0->unk_114[5] - arg0->unk_000.pos.y;
    z = arg0->unk_114[6] - arg0->unk_000.pos.z;

    sp40 = func_8009F768(func_80005100(x, z));
    sp44 = func_8009F768(func_80005100(y, sqrtf(SQ(x) + SQ(z))));

    if ((func_800915FC(arg0) != 0) && (arg0->unk_050[4] == 0)) {
        sp44 += 40.0f;
        if (sp44 >= 360.0f) {
            sp44 -= 360.0f;
        } else if ((arg0->unk_000.pos.y < (D_80177940 + 50.0f)) && (D_80177C98 == 0) && (sp44 > 180.0f)) {
            sp44 = 0.0f;
        }
        arg0->unk_050[0] = 0;
    }

    sp3C = func_8009BD38(&arg0->unk_0F8, sp40, 0.5f, arg0->unk_114[2], 0.001f) * 30.0f;
    func_8009BD38(&arg0->unk_0F4, sp44, 0.5f, arg0->unk_114[2], 0.0001f);
    sp2C = sp28 = 0.0f;

    if (sp3C < 0.0f) {
        sp2C = -sp3C;
    } else {
        sp28 = sp3C;
    }

    func_8009BC2C(&arg0->unk_114[15], sp2C, 0.2f, 30.0f, 0.00f);
    func_8009BC2C(&arg0->unk_114[26], -sp2C, 0.2f, 30.0f, 0.00f);
    func_8009BC2C(&arg0->unk_114[16], sp28, 0.2f, 30.0f, 0.00f);
    func_8009BC2C(&arg0->unk_114[27], -sp28, 0.2f, 30.0f, 0.00f);

    if (sp3C < 0.0f) {
        sp3C *= -1.0f;
    } else {
        sp3C = 360.0f - sp3C;
    }

    func_8009BC2C(&arg0->unk_114[7], arg0->unk_114[8], 0.2f, 30.0f, 0.0001f);

    if ((arg0->unk_114[7] > 0.01f) && (arg0->unk_114[7] < 359.9f)) {
        func_8009BD38(&arg0->unk_000.unk_10.z, arg0->unk_114[7], 0.2f, 100.0f, 0.01f);
    } else {
        func_8009BD38(&arg0->unk_000.unk_10.z, sp3C, 0.1f, 3.0f, 0.01f);
    }

    return false;
}

s32 func_80091B90(UnkStruct_func_80090A00* arg0) {
    Vec3f vec;

    arg0->unk_000.unk_10.x = -arg0->unk_0F4;
    arg0->unk_000.unk_10.y = arg0->unk_0F8;

    func_8009BC2C(arg0->unk_114, arg0->unk_114[1], 0.2f, 1.0f, 0.0f);
    func_8009BC2C(&arg0->unk_114[2], arg0->unk_114[3], 1.0f, 1.0f, 0.0f);

    func_8009F6CC(&vec, arg0->unk_000.unk_10.x, arg0->unk_000.unk_10.y, arg0->unk_114[0] + arg0->unk_114[9]);

    arg0->unk_0EC = arg0->unk_114[14] + vec.y;
    arg0->unk_0E8 = arg0->unk_114[13] + vec.x;
    arg0->unk_0F0 = arg0->unk_114[12] + vec.z;

    arg0->unk_114[13] -= arg0->unk_114[13] * 0.1f;
    arg0->unk_114[14] -= arg0->unk_114[14] * 0.1f;
    arg0->unk_114[12] -= arg0->unk_114[12] * 0.1f;

    if ((arg0->unk_000.pos.y < D_80177940 + 40.0f) && (arg0->unk_0EC < 0.0f) && (D_80177C98 == 0)) {
        arg0->unk_000.pos.y = D_80177940 + 40.0f;
        arg0->unk_0EC = 0.0f;
    }
    arg0->unk_0F0 -= D_80177D08;

    return false;
}

s32 func_80091CF8(UnkStruct_func_80090A00* arg0) {
    if (arg0->unk_050[1] != 0) {
        if (arg0->unk_114[10] < 0.1f) {
            arg0->unk_114[10] = 20.0f;
            func_80019218(0x09000002, arg0->unk_100, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_114[29] = 5.0f;
        }
        arg0->unk_050[1] = 0;
    }

    func_8009BC2C(&arg0->unk_114[10], 0.0f, 0.1f, 0.2f, 0.0f);
    func_8009BC2C(&arg0->unk_114[9], arg0->unk_114[10], 0.1f, 2.0f, 0.0f);

    if (arg0->unk_114[10] < 0.1f) {
        arg0->unk_050[11] = 1;
    }
    return false;
}

s32 func_80091DF4(UnkStruct_func_80090A00* arg0) {
    Vec3f sp44;
    Vec3f sp38;

    if ((arg0->unk_050[0] != 0) && (D_80177848 > 70)) {
        arg0->unk_050[0] = 0;
        sp44.x = 0.0f;
        sp44.y = 0.0f;
        sp44.z = 100.0f;
        func_80006A20(D_8013BBC8, &sp44, &sp38);
        func_8006EEFC(arg0->unk_0E4, arg0->unk_000.pos.x + (sp38.x * 1.5), arg0->unk_000.pos.y + (sp38.y * 1.5),
                      arg0->unk_000.pos.z + (sp38.z * 1.5), sp38.x, sp38.y, sp38.z, arg0->unk_000.unk_10.x,
                      arg0->unk_000.unk_10.y, arg0->unk_000.unk_10.z);
    }
    return false;
}

s32 func_80091F00(UnkStruct_func_80090A00* arg0) {
    u8 temp_v0 = arg0->unk_0D0;
    Vec3f sp40;
    Vec3f sp34;

    arg0->unk_0D0 = 0;

    if ((arg0->unk_0B8 == 3) || (temp_v0 == 2)) {
        return false;
    }

    arg0->unk_0CE -= arg0->unk_0D6;
    if (arg0->unk_0CE <= 0) {
        arg0->unk_0CE = -1;
    }
    arg0->unk_0C6 = 20;

    func_80019218(0x2903300E, arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    func_8007D10C(arg0->unk_000.pos.x, arg0->unk_000.pos.y, arg0->unk_000.pos.z, 1.5f);
    func_80005E90(D_8013BBC8, arg0->unk_0F8 * (M_PI / 180), 0);

    if (Rand_ZeroOne() < 0.5f) {
        sp40.x = -20.0f;
    } else {
        sp40.x = 20.0f;
    }

    sp40.y = (Rand_ZeroOne() - 0.5f) * 20.0f;
    sp40.z = 0.0f;

    func_80006A20(D_8013BBC8, &sp40, &sp34);

    arg0->unk_114[13] = sp34.x;
    arg0->unk_114[14] = sp34.y;
    arg0->unk_114[12] = sp34.z;

    D_801778B0[arg0->unk_0E4] = arg0->unk_0CE;

    if (D_8017829C != 0) {
        return false;
    }

    if ((arg0->unk_0D0 == 3) && (arg0->unk_0D4 == 1)) {
        switch (arg0->unk_0E4) {
            case 1:
                func_800BA808(D_8018398C, 10);
                break;
            case 3:
                func_800BA808(D_80183950, 30);
                break;
            case 2:
                func_800BA808(D_80183900, 20);
                break;
        }
    }

    if ((arg0->unk_0D0 != 3) && (arg0->unk_0D4 == 1)) {
        switch (arg0->unk_0E4) {
            case 1:
                func_800BA808(D_801836B0, 10);
                break;
            case 3:
                func_800BA808(D_801836F8, 30);
                break;
            case 2:
                func_800BA808(D_80183724, 20);
                break;
        }
    }

    if ((arg0->unk_0D4 == 2) || (arg0->unk_0D4 == 100)) {
        switch (arg0->unk_0E4) {
            case 1:
                func_800BA808(D_80183630, 10);
                break;
            case 3:
                func_800BA808(D_8018366C, 30);
                break;
            case 2:
                func_800BA808(D_80183690, 20);
                break;
        }
    }
    arg0->unk_050[8] = 20;

    return false;
}

void func_80092244(UnkStruct_func_80090A00* arg0) {
    D_80175A10[arg0->unk_040].unk_00 = 1;
    D_80175A10[arg0->unk_040].unk_02 = arg0->unk_0E4;
    D_80175A10[arg0->unk_040].pos.x = arg0->unk_000.pos.x;
    D_80175A10[arg0->unk_040].pos.y = arg0->unk_000.pos.y;
    D_80175A10[arg0->unk_040].pos.z = arg0->unk_000.pos.z;
    D_80175A10[arg0->unk_040].unk_10 = arg0->unk_0F8 + 180.0f;
}

void func_800922F4(UnkStruct_func_80090A00* arg0) {
    s32 temp;

    if ((D_801778B0[arg0->unk_0E4] < 64) && (D_80178280->unk_1C8 != 7)) {
        temp = 7;
        if (D_801778B0[arg0->unk_0E4] > 16) {
            temp = 15;
        }
        if (D_801778B0[arg0->unk_0E4] > 32) {
            temp = 31;
        }
        if (D_801778B0[arg0->unk_0E4] > 48) {
            temp = 63;
        }

        if (!(D_80177DB0 & temp)) {
            func_8007D10C(arg0->unk_000.pos.x + ((Rand_ZeroOne() - 0.5f) * 10.0f),
                          arg0->unk_000.pos.y + (Rand_ZeroOne() * 10.0f),
                          arg0->unk_000.pos.z + ((Rand_ZeroOne() - 0.5f) * 10.0f), 2.2f);
        }

        if (!((temp >> 2) & D_80177DB0)) {
            if (Rand_ZeroOne() < 0.5f) {
                func_8007C120(arg0->unk_000.pos.x + ((Rand_ZeroOne() - 0.5f) * 30.0f),
                              arg0->unk_000.pos.y + (Rand_ZeroOne() * 10.0f),
                              arg0->unk_000.pos.z + ((Rand_ZeroOne() - 0.5f) * 30.0f), arg0->unk_0E8, arg0->unk_0EC,
                              arg0->unk_0F0, arg0->unk_110 * 0.07f, 3);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800924E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800927A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80092D48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80092EC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80093164.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80093310.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800933D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800935E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80094954.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80094BBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80094D20.s")

void func_80095350(UnkStruct_func_80090A00* arg0) {
    func_800613C4(arg0);
    arg0->unk_000.unk_00 = 2;
    arg0->unk_000.unk_02 = 195;
    arg0->unk_0B6 = 9999;
    func_800612B8(&arg0->unk_01C, arg0->unk_000.unk_02);
}

#ifdef DATA_IMPORT_PENDING
void func_800953A0(UnkStruct_func_80090A00* arg0, s32 arg1) {
    Vec3f D_800D2510[] = {
        { 1800.0f, 0.0f, -4000.0f },
        { -1000.0f, 0.0f, -4800.0f },
        { 800.0f, 0.0f, -5600.0f },
        { -200.0f, 0.0f, -7000.0f },
    };

    func_800613C4(arg0);
    arg0->unk_000.unk_00 = 2;
    arg0->unk_000.unk_02 = 195;
    arg0->unk_000.pos = D_800D2510[arg1];
    arg0->unk_000.pos.z -= D_80177D20;
    arg0->unk_0B6 = 45;
    func_800612B8(&arg0->unk_01C, arg0->unk_000.unk_02);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800953A0.s")
#endif

#ifdef DATA_IMPORT_PENDING
void func_8009546C(UnkStruct_func_80090A00* arg0, s32 arg1) {
    Vec3f D_800D2540[] = {
        { 1300.0f, 0.0f, -2000.0f },  { -1000.0f, 0.0f, -3000.0f }, { 800.0f, 0.0f, 0.0f },
        { -1200.0f, 0.0f, -1000.0f }, { -1400.0f, 0.0f, 700.0f },
    };

    func_800613C4(arg0);
    arg0->unk_000.unk_00 = 2;
    arg0->unk_000.unk_02 = 195;
    arg0->unk_000.pos = D_800D2540[arg1];
    arg0->unk_000.pos.z -= D_80177D20;
    arg0->unk_0B6 = 46;
    func_800612B8(&arg0->unk_01C, arg0->unk_000.unk_02);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8009546C.s")
#endif

#ifdef DATA_IMPORT_PENDING
void func_80095538(UnkStruct_func_80090A00* arg0, s32 arg1) {
    Vec3f D_800D257C[] = {
        { 0.0f, 0.0f, -200.0f },    { -300.0f, 0.0f, -700.0f },  { 400.0f, 0.0f, -900.0f },
        { 300.0f, 0.0f, -1700.0f }, { -260.0f, 0.0f, -2000.0f }, { -200.0f, 0.0f, -2600.0f },
    };

    func_800613C4(arg0);
    arg0->unk_000.unk_00 = 2;
    arg0->unk_000.unk_02 = 195;
    arg0->unk_000.pos = D_800D257C[arg1];
    arg0->unk_000.pos.z -= D_80177D20;
    arg0->unk_0B6 = 47;
    func_800612B8(&arg0->unk_01C, arg0->unk_000.unk_02);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80095538.s")
#endif

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80095604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80096A74.s")
