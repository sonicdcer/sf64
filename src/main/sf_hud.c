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
        func_8009D994(&D_80137E64, &D_3000B20, 0x20, 5, arg0, arg1, arg2, arg3);
    } else {
        func_8009D994(&D_80137E64, &D_1000E80, 0x30, 9, arg0, arg1, arg2, arg3);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800857DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80085890.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80085944.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80086110.s")

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800886B8.s")

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

                if (D_80178280[arg0].unk1C8 == 13) {
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

            var_fv0 = D_80178280->unk264;
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
                    D_80178280->unk26C += 128;
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

            var_fv0 = D_80178280->unk264;
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008D0DC.s")

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

    func_8009BC2C(&D_800D19E0[D_801778A0], D_80178280[D_801778A0].unk264 * (1.0f / 255.0f), 0.3f, 10.0f, 0.01f);
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

    temp_fs0 = D_80178280[D_801778A0].unk2BC * 0.011111111f;

    temp_fv0 = 1.0f - temp_fs0;
    temp2 = sp68 * temp_fs0;

    if (D_80178280[D_801778A0].unk2B4 == 0) {
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
            func_80019218(0x4900C028, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008E2C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008E51C.s")

void func_8008E5E8(void) {
    if (D_801778E8 != 0) {
        func_8008DC34();
    }
    func_8008A4DC();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008E620.s")

void func_8008E9EC(void) {
    func_8008E620();
    func_8008B734();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008EA14.s")

void func_8008F94C(void) {
    func_8008E5E8();
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008F96C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FA84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FE78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8008FFF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80090200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800907C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8009092C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80090A00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80090CCC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80090E8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800910C0.s")

void func_80091254(void) {
    if (D_80177880 == 1) {
        func_80090E8C();
    } else {
        func_800910C0();
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80091298.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80091368.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800914FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800915FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80091864.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80091B90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80091CF8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80091DF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80091F00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80092244.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800922F4.s")

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

void func_80095350(UnkStruct_func_80095350* arg0) {
    func_800613C4(arg0);
    arg0->unk0 = 2;
    arg0->unk2 = 0xC3;
    arg0->unkB6 = 0x270F;
    func_800612B8((s32*) arg0 + 7, arg0->unk2, arg0);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_800953A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_8009546C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80095538.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80095604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_hud/func_80096A74.s")
