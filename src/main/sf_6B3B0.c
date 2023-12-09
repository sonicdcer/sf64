#include "global.h"

typedef struct {
    /* 0x00 */ Gfx* unk_00;
    /* 0x04 */ f32* unk_04;
    /* 0x08 */ f32 unk_08; 
    /* 0x0C */ f32 unk_0C; 
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ u8  unk_14; 
    /* 0x15 */ u8  unk_15; 
    /* 0x16 */ u8  unk_16; 
    /* 0x17 */ u8  unk_17; 
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ u8  unk_1C; 
} UnkStruct_D003C; // size = 0x20

extern s32 D_800CFF80[4];
extern s32 D_800CFF90;
extern s16 D_800CFF94[16];
extern u8 D_800CFFB4[16];
extern f32 D_800CFFC4[16];
extern Gfx* D_800D0004[3];
extern Vec3f D_800D0010;
extern f32 D_800D001C[5];
extern Vec3f D_800D0030;
extern UnkStruct_D003C D_800D003C[108];
extern u8 D_800D0DBC[][4]; // could be color struct
extern Vec3f D_800D0DD4[56];
extern Vec3f D_800D1074[24];
extern Vec3f D_800D1194[21];
extern Vec3f D_800D1290;
extern UNK_TYPE D_800D129C[0x8C];
extern Vec3f D_800D14CC;

extern u16* D_600631C[];
extern u16* D_6009B34[];
extern u16* D_601B1E4[];
extern u16* D_6020DD0[];
extern u16* D_6027F50[];
extern u16* D_60289FC[];
extern u16* D_602AAC0[];
extern u16* D_602F3AC[];
extern u16* D_60308B8[];
extern u16* D_60320D0[];
extern u16* D_6032E18[];
extern u16* D_60381D8[];
extern u16* D_603D9E8[];
extern u16* D_C037E3C[];

#define GDL(dl) gSPDisplayList(gMasterDisp++, dl)
#define GPC(r,g,b,a) gDPSetPrimColor(gMasterDisp++, 0x00, 0x00, r, g, b, a)
#define GEC(r,g,b,a) gDPSetEnvColor(gMasterDisp++, r, g, b, a)

void func_8007F11C(s32, f32, f32, f32, f32);

void func_8006A7B0(u16 *arg0, s32 arg1) {
    if ((D_8017829C == 0) || (D_80177D68 != arg1)) {
        func_800BA808(arg0, arg1);
    }
}

void func_8006A800(Object_8C *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 361;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_48 = 3;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->unk_48 = -arg0->unk_48;
    }
    arg0->unk_4A = 100;
    arg0->unk_70 = arg4 * 0.25f;
    arg0->unk_6C = 0.3f;
    if (arg4 < 10.0f) {
        arg0->unk_6C = 0.1f;
    }
    arg0->obj.rot.z = Rand_ZeroOne() * 360.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_8006A900(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    for(i  = ARRAY_COUNT(D_80170130) - 1; i >= 0; i--) {
        if (D_80170130[i].obj.status == 0) {
            func_8006A800(&D_80170130[i], arg0, arg1, arg2, arg3);
            break;
        }
    }
}

void func_8006A96C(Object_2F4 *arg0) {

}

void func_8006A978(Object_2F4 *arg0) {

}

void func_8006A984(Object_8C *arg0, f32 arg1, f32 arg2, f32 arg3) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 365;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_44 = 40;
    arg0->unk_70 = 5.0f;
    arg0->unk_6C = 2.0f * (Rand_ZeroOne() - 0.5f);
    arg0->unk_54.y = 10.0f;
    arg0->obj.rot.z = Rand_ZeroOne() * 360.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_8006AA3C(f32 arg0, f32 arg1, f32 arg2) {
    s32 i;

    for(i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            func_8006A984(&D_80170130[i], arg0, arg1, arg2);
            break;
        }
    }
}

void func_8006AA98(Object_80 *arg0) {
    Vec3f sp24;
    Vec3f sp18;

    Texture_Scroll(D_60038F8, 32, 32, 1);
    if ((D_80177DB0 % 4) == 0) {
        Matrix_RotateY(gCalcMatrix, arg0->obj.rot.y * 0.017453292f, 0);
        sp18.x = (Rand_ZeroOne() - 0.5f) * 700.0f;
        sp18.y= Rand_ZeroOne() * 50.0f;
        sp18.z = 700.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix,  &sp18, &sp24);
        func_8006AA3C(arg0->obj.pos.x + sp24.x, arg0->obj.pos.y + sp24.y + 50.0f, arg0->obj.pos.z + sp24.z);
    }
}

s32 func_8006ABA4(Object_2F4 *arg0) {
    if ((fabsf(arg0->obj.pos.x - D_80178280[0].unk_074) < 700.0f) && (fabsf(arg0->obj.pos.y - D_80178280[0].unk_078) < 700.0f)) {
        return 1;
    }
    return 0;
}

void func_8006AC08(Object_2F4 *arg0) {
    f32 sp2C;

    if ((func_8006ABA4(arg0) != 0) && (arg0->unk_0BC == 0)) {
        func_8007F11C(353, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, D_80177828);
        arg0->unk_0BC = 20;
    }
    sp2C = arg0->obj.pos.z + D_80177D20;
    arg0->obj.rot.y = Math_RadToDeg(Math_Atan2F(D_80178280[0].unk_040.x - arg0->obj.pos.x, D_80178280[0].unk_040.z - sp2C));
    arg0->obj.rot.x = -Math_RadToDeg(Math_Atan2F(D_80178280[0].unk_040.y - arg0->obj.pos.y, sqrtf(SQ(D_80178280[0].unk_040.x - arg0->obj.pos.x) + SQ(D_80178280->unk_040.z - sp2C))));
}

void func_8006AD18(Object_2F4 *arg0) {
    bool sp34;

    arg0->unk_10C = 1.5f;
    sp34 = false;
    arg0->obj.rot.y = Math_RadToDeg(Math_Atan2F(D_80178280[D_801778A0].unk_074 - arg0->obj.pos.x, D_80178280[D_801778A0].unk_138 - arg0->obj.pos.z));
    if (arg0->obj.pos.y < -500.0f) {
        arg0->obj.pos.y = -500.0f;
        arg0->unk_0E8.y = 0.0f;
        arg0->unk_0E8.x = 0.0f;
        arg0->unk_0E8.z = 0.0f;
        sp34 = true;
        arg0->unk_054 = true;
    }
    if (!(D_80177DB0 & 0x1F)) {
        func_8007F11C(0x161, arg0->obj.pos.x, arg0->obj.pos.y + 180.0f, arg0->obj.pos.z, D_80177828);
    }
    switch (arg0->unk_0B8) {
        case 0:
            arg0->unk_0B6++;
            if (arg0->unk_0B6 >= 30) {
                arg0->unk_0B6 = 0;
            }
            if (arg0->unk_0B6 == 0x15) {
                arg0->unk_0B8 = 1;
                
                arg0->unk_0E8.y = 40.0f;
                arg0->unk_0E8.z = -40.0f;
                arg0->unk_0E8.x = 10.0f;

                arg0->unk_050 = 1 - arg0->unk_050;
                if (arg0->unk_050) {
                    arg0->unk_0E8.x *= -1.0f;
                }
                if (arg0->unk_054) {
                    arg0->unk_0E8.x = 0.0f;
                    arg0->unk_0E8.z = -20.0f;
                }
            }
            break;
        case 1:
            if (arg0->unk_0E8.y > 10.0f) {
                arg0->unk_0B6++;
                if (arg0->unk_0B6 >= 30) {
                    arg0->unk_0B6 = 29;
                }
            } else {
                arg0->unk_0B6--;
                if (arg0->unk_0B6 < 0) {
                    arg0->unk_0B6 = 0;
                }
            }
            if (sp34) {
                arg0->unk_0B8 = 0;
            }
            break;
    }
    if (arg0->unk_0D0 != 0) {
        arg0->unk_0CE -= 10;
        if ((arg0->unk_0CE <= 0) || (arg0->unk_0D0 >= 2)) {
            func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y + 180.0f, arg0->obj.pos.z, 10.0f);
            func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y + 180.0f, arg0->obj.pos.z, arg0->unk_0E8.x, arg0->unk_0E8.y, arg0->unk_0E8.z, 8.0f, 30);
            func_80060FBC(&arg0->obj, &arg0->unk_100);
            func_8007A6F0(&arg0->obj.pos, 0x2903A008);
            D_80161A98 += arg0->unk_01C.unk_20;
            D_80177850 = 15;
        } else {
            arg0->unk_0D0 = 0;
            arg0->unk_0C6 = 20;
            func_80019218(0x2903300E, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            func_8007D1E0(arg0->obj.pos.x, arg0->obj.pos.y + 180.0f, arg0->obj.pos.z, 5.0f);
        }
    }
}

void func_8006B094(Object_2F4 *arg0) {

}

void func_8006B0A0(Object_2F4 *arg0) {
    Vec3f sp34;
    s32 temp_hi;

    arg0->unk_04E++;
    if (arg0->unk_04E >= 100) {
        arg0->unk_04E = 0;
    }
    D_80176558[arg0->unk_046][arg0->unk_04E] = arg0->obj.pos.x;
    D_80176878[arg0->unk_046][arg0->unk_04E] = arg0->obj.pos.y;
    D_80176B98[arg0->unk_046][arg0->unk_04E] = arg0->obj.pos.z;
    D_80176EB8[arg0->unk_046][arg0->unk_04E] = arg0->obj.rot.x;
    D_801771D8[arg0->unk_046][arg0->unk_04E] = arg0->obj.rot.y;
    D_80177500[arg0->unk_046][arg0->unk_04E] = arg0->obj.rot.z;
    arg0->obj.rot.x -= 10.0f;
    arg0->obj.rot.y += 3.0f;
    arg0->obj.rot.z += 5.0f;
    Math_Vec3fFromAngles(&sp34, arg0->obj.rot.x, arg0->obj.rot.y, 40.0f);
    arg0->unk_0E8.x = sp34.x;
    arg0->unk_0E8.y = sp34.y;
    arg0->unk_0E8.z = sp34.z;
    if ((arg0->unk_0BC == 0) && !(D_80177DB0 & 3)) {
        temp_hi = (D_800CFF94[arg0->unk_04A] + arg0->unk_04E) % 100;
        if (arg0->unk_04A == 0) {
            func_8007D2C8(D_80176558[arg0->unk_046][temp_hi], D_80176878[arg0->unk_046][temp_hi], D_80176B98[arg0->unk_046][temp_hi], 7.0f);
        } else {
            func_8007D2C8(D_80176558[arg0->unk_046][temp_hi], D_80176878[arg0->unk_046][temp_hi], D_80176B98[arg0->unk_046][temp_hi], 4.0f);
        }
        func_80019218(0x2903B009U, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        arg0->unk_04A++;
        if (arg0->unk_04A > 15) {
            func_80060FBC(&arg0->obj, &arg0->unk_100);
            D_80176550[arg0->unk_046] = 0;
            D_80161A98 += arg0->unk_01C.unk_20;
            D_80177850 = 15;
        }
    }
}

void func_8006B46C(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, f32 arg8, s32 arg9) {
    Vec3f sp34 = D_800D0010;

    Matrix_Push(&gGfxMatrix);
    Matrix_Translate(gGfxMatrix, arg1, arg2, arg3 + D_80177D20, 1);
    if (arg7 != 1) {
        Matrix_RotateY(gGfxMatrix, 0.017453292f * arg5, 1);
        Matrix_RotateX(gGfxMatrix, 0.017453292f * arg4, 1);
        Matrix_RotateZ(gGfxMatrix, 0.017453292f * arg6, 1);
    }
    Matrix_Scale(gGfxMatrix, arg8, arg8, 1.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (arg7 != 1) {
        RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
        if ((arg7 == 0) && (arg0->unk_0CA[0] != 0)) {
            sp34.y += arg0->unk_01C.unk_1C;
            Matrix_MultVec3f(gGfxMatrix, &sp34, D_80161578);
            if (D_80161578->z > -500.0f) {
                arg0->unk_0CA[0] = 0;
            }
        }
    } else {
        RCP_SetupDL_60(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
    }
    if (arg9 != 0) {
        RCP_SetupDL_64();
        GPC(255, 0, 0, 255);
    }
    GDL(D_800D0004[arg7]);
    Matrix_Pop(&gGfxMatrix);
    RCP_SetupDL_29(D_80178320, D_80178328, D_80178330, D_80178338, D_801783D8, D_801783DC);
}

void func_8006B74C(Object_2F4 *arg0) {
    s16 var_s0;
    s16 temp_hi;

    for(var_s0 = arg0->unk_04A;var_s0 < 16; var_s0++) {
        temp_hi = (D_800CFF94[var_s0] + arg0->unk_04E) % 100;
        func_8006B46C(arg0, D_80176558[arg0->unk_046][temp_hi], D_80176878[arg0->unk_046][temp_hi], D_80176B98[arg0->unk_046][temp_hi], D_80176EB8[arg0->unk_046][temp_hi], D_801771D8[arg0->unk_046][temp_hi], D_80177500[arg0->unk_046][temp_hi], D_800CFFB4[var_s0], D_800CFFC4[var_s0], arg0->unk_0C6 & 1);
        }
}

void func_8006B95C(Object_80 *arg0) {
    arg0->obj.pos.x += arg0->unk_64.x;
    arg0->obj.pos.y += arg0->unk_64.y;
    arg0->obj.pos.z += arg0->unk_64.z;
    switch (arg0->unk_48) {
    case 0:
        arg0->unk_64.y -= 1.0f;
        if (arg0->obj.pos.y < D_80177940 + 40.0f) {
            arg0->obj.pos.y = D_80177940 + 40.0f;
            func_80019218(0x19130003U, &arg0->unk_70, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            arg0->unk_48 = 2;
            arg0->unk_64.y = 0.0f;
        }
        break;
    case 2:
        break;
    case 1:
        arg0->obj.rot.x += 10.0f;
        break;
    }
}

void func_8006BA64(Object_8C *arg0, f32 arg1, f32 arg2, f32 arg3) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 375;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_70 = 0.0f;
    arg0->unk_6C = 0.12f;
    arg0->obj.rot.y = Rand_ZeroOne() * 360.0f;
    arg0->unk_60.y = (Rand_ZeroOne() - 0.5f) * 3.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
}

void func_8006BB1C(f32 arg0, f32 arg1, f32 arg2) {
    s32 i;

    for(i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            func_8006BA64(&D_80170130[i], arg0, arg1, arg2);
            break;
        }
    }
}

void func_8006BB78(Object_2F4 *arg0) {
    Vec3f sp44;

    switch (arg0->unk_0B8) {
        case 0:
            arg0->unk_13C = (Rand_ZeroOne() - 0.5f) * 1000.0f;
            arg0->unk_0B8 = 1;
            break;
        case 1:
            switch (arg0->unk_046) {
                case 0:
                    arg0->unk_114 += 2.0f;
                    if (arg0->unk_114 > 10.0f) {
                        arg0->unk_046 = 1;
                    }
                    break;
                case 1:
                    arg0->unk_114 -= 2.0f;
                    if (arg0->unk_114 < -10.0f) {
                        arg0->unk_046 = 0;
                    }
                    break;
            }
            Math_Vec3fFromAngles(&sp44, arg0->obj.rot.x, arg0->obj.rot.y, 10.0f);
            arg0->unk_0E8.x = sp44.x;
            arg0->unk_0E8.y = sp44.y;
            arg0->unk_0E8.z = sp44.z;
            if (fabsf((arg0->obj.pos.z + arg0->unk_13C) - D_80178280->unk_138) < 3000.0f) {
                arg0->unk_0B8 = 2;
                arg0->unk_0BC = 20;
                arg0->unk_0E8.z = 0.0f;
                arg0->unk_0E8.x = 0.0f;
            }
            break;
        case 2:
            if (arg0->unk_0BC == 0) {
                arg0->unk_0B8 = 3;
                arg0->unk_0B6 = 1;
                arg0->obj.pos.y += 30.0f;
                arg0->unk_0BC = 30;
                arg0->unk_0E8.y = 30.0f;
                arg0->unk_10C = 1.0f;
            }
            break;
        case 3:
            if (arg0->unk_0BC == 1) {
                func_8007F11C(353, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, D_80177828);
            }
            if (arg0->unk_0E8.y < 12.0f) {
                Math_SmoothStepToF(&arg0->obj.rot.x, 180.0f, 0.1f, 7.0f, 0.01f);
            }
            if (arg0->obj.pos.y < (D_80177940 + 10.0f)) {
                arg0->obj.pos.y = D_80177940;
                arg0->unk_0B8 = 4;
                arg0->unk_0B6 = 0;
                arg0->unk_0E8.y = 0.0f;
                arg0->unk_10C = 0.0f;
                arg0->obj.rot.x = 0.0f;
            }
            break;
        case 4:
            if (arg0->unk_0BC == 0) {
                arg0->unk_0B8 = 0;
                arg0->obj.rot.y = Rand_ZeroOne() * 360.0f;
            }
            break;
    }
    if ((arg0->obj.pos.y <= (D_80177940 + 10.0f)) && !(D_80177DB0 & 7)) {
        func_8006BB1C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z);
    }
    if (!(D_80177DB0 & 7)) {
        func_8006A900(((Rand_ZeroOne() - 0.5f) * 50.0f) + arg0->obj.pos.x, arg0->obj.pos.y + 10.0f, ((Rand_ZeroOne() - 0.5f) * 50.0f) + arg0->obj.pos.z, 0.5f);
    }
    if ((arg0->unk_0D0 != 0) && (arg0->unk_0B6 != 0)) {
        func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.0f, arg0->unk_0E8.y, 0.0f, 3.0f, 5);
        func_80060FBC(&arg0->obj, &arg0->unk_100);
        arg0->unk_044 = 1;
        func_80066254(arg0);
    }
    arg0->unk_0D0 = 0;
}

void func_8006BF7C(f32 arg0, f32 arg1, f32 arg2) {
    s32 i;

    for(i = 0; i < ARRAY_COUNT(D_800D001C); i++) {
        func_8006A900(arg0 + D_800D001C[i], arg1, arg2, 6.0f);
    }
}

void func_8006C008(Object_2F4 *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;
    
    switch (arg0->unk_0B8) {
        case 0x28:
            if (arg0->unk_04A & 4) {
                arg0->obj.pos.x = arg0->unk_120 + D_80178280->unk_074;
                arg0->obj.pos.z = arg0->unk_124.x + D_80178280->unk_138;
            }
            arg0->obj.rot.x += arg0->unk_114;
            arg0->obj.rot.y += arg0->unk_118;
            arg0->obj.rot.z += arg0->unk_11C;
            if (((arg0->unk_04A & 1) == 1) && !(arg0->unk_0BC & 3)) {
                func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, arg0->unk_110);
            }
            if ((arg0->unk_124.y + arg0->obj.pos.y) < 0.0f) {
                if (arg0->unk_050 >= 2) {
                    arg0->unk_11C = 0.0f;
                    arg0->unk_118 = 0.0f;
                    arg0->unk_114 = 0.0f;
                    arg0->unk_0E8.x = 0.0f;
                    arg0->unk_0E8.y = 0.0f;
                    arg0->unk_0E8.z = 0.0f;
                    arg0->unk_10C = 0.0f;
                } else {
                    if (arg0->unk_04A & 4) {
                        switch (arg0->unk_046) {
                            case 2:
                                func_80019218(0x19000024U, &arg0->unk_100, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                break;
                            case 25:
                                func_80019218(0x29003031U, &arg0->unk_100, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                                break;
                        }
                    }
                    Math_SmoothStepToF(&arg0->unk_114, 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&arg0->unk_118, 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&arg0->unk_11C, 0.0f, 0.8f, 1.0f, 0.01f);
                    Math_SmoothStepToF(&arg0->unk_0E8.x, 0.0f, 0.5f, 1.0f, 0.01f);
                    arg0->obj.pos.y = 0.0f;
                    arg0->unk_050 += 1;
                    if (arg0->unk_0E8.y < 0.0f) {
                        if (arg0->unk_04A & 2) {
                            arg0->unk_0E8.y = arg0->unk_0E8.y * -0.05f;
                        } else {
                            arg0->unk_0E8.y = arg0->unk_0E8.y * -0.3f;
                        }
                    }
                }
                arg0->unk_04A &= ~4;
            }
            break;
        case 0x2D:
            arg0->obj.rot.y += arg0->unk_114;
            arg0->obj.rot.z += arg0->unk_118;
            break;
        case 0x2E:
            arg0->obj.rot.x += arg0->unk_114;
            arg0->obj.rot.y += arg0->unk_118;
            arg0->obj.rot.z += arg0->unk_11C;
            func_E6A810_801B6E20(arg0->obj.pos.x, arg0->obj.pos.z + D_80177D20, &sp4C, &sp48, &sp4C);
            if (arg0->obj.pos.y < sp48) {
                arg0->obj.pos.y = sp48;
                arg0->unk_058++;
                if ( arg0->unk_058 >= 2) {
                    arg0->unk_0E8.x = 0.0f;
                    arg0->unk_0E8.y = 0.0f;
                    arg0->unk_0E8.z = 0.0f;
                    arg0->unk_114 = 0.0f;
                    arg0->unk_118 = 0.0f;
                    arg0->unk_11C = 0.0f;
                    arg0->unk_10C = 0.0f;
                } else {
                    arg0->unk_0E8.y = -arg0->unk_0E8.y * 0.3f;
                }
            }
            break;
        case 0x2F:
            func_E6A810_801B6E20(arg0->obj.pos.x, arg0->obj.pos.z + D_80177D20, &sp4C, &sp48, &sp4C);
            if (arg0->obj.pos.y < arg0->unk_120 + (-100.0f + sp48)) {
                arg0->obj.pos.y = arg0->unk_120 + sp48;
                arg0->unk_050 = 0;
                arg0->unk_058 = 1;
                arg0->unk_0E8.x = 0.0f;
                arg0->unk_0E8.y = 0.0f;
                arg0->unk_0E8.z = 0.0f;
                arg0->unk_10C = 0.0f;
                arg0->unk_114 = 0.0f;
                arg0->unk_118 = 0.0f;
                arg0->unk_11C = 0.0f;
            }
            arg0->obj.rot.x += arg0->unk_114;
            arg0->obj.rot.y += arg0->unk_118;
            arg0->obj.rot.z += arg0->unk_11C;
            if ((arg0->unk_050 == 1) && !(D_80177DB0 & 7)) {
                func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 2.0f);
            }
            if (arg0->unk_058 == 1) {
                if ((arg0->unk_054 == 1) && ((arg0->unk_048 == 8) || (arg0->unk_048 == 9))) {
                    func_8007D2C8(arg0->obj.pos.x, sp48 + 20.0f, arg0->obj.pos.z, 8.0f);
                }
                func_80060FBC(&arg0->obj, &arg0->unk_100);
            }
            break;
        case 0x30:
        case 0x31:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x37:
            if (((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) && (arg0->unk_0BE == 0)) {
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 50.0f, arg0->unk_110 * 10.0f);
                func_80060FBC(&arg0->obj, &arg0->unk_100);
                func_8007A6F0(&arg0->obj.pos, 0x2903A008);
            }
            break;
        case 0x38:
            Math_SmoothStepToF(&arg0->unk_110, 0.0f, 0.1f, 2.0f, 0.0001f);
            if (((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) && (arg0->unk_0BE == 0)) {
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 50.0f, arg0->unk_110 * 10.0f);
                func_80060FBC(&arg0->obj, &arg0->unk_100);
                func_8007A6F0(&arg0->obj.pos, 0x2903A008);
            }
            break;
        case 0x3A:
            if (arg0->unk_046 == 0) {
                arg0->unk_046++;
                arg0->unk_114 = (Rand_ZeroOne() - 0.5f) * 30.0f;
                arg0->unk_118 = (Rand_ZeroOne() - 0.5f) * 30.0f;
                arg0->unk_11C = (Rand_ZeroOne() - 0.5f) * 30.0f;
            }
            arg0->obj.rot.x += arg0->unk_114;
            arg0->obj.rot.y += arg0->unk_118;
            arg0->obj.rot.z += arg0->unk_11C;
            if (((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) && (arg0->unk_0BE == 0)) {
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 50.0f, arg0->unk_110 * 10.0f);
                func_80060FBC(&arg0->obj, &arg0->unk_100);
                func_8007A6F0(&arg0->obj.pos, 0x2903A008U);
            }
            break;
        case 0x36:
            if (((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) && (arg0->unk_0BE == 0)) {
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 70.0f, arg0->unk_110 * 20.0f);
                func_8007B8F8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z + 70.0f, arg0->unk_110 * 20.0f);
                func_80060FBC(&arg0->obj, &arg0->unk_100);
                func_8007A6F0(&arg0->obj.pos, 0x2903A008U);
            }
            break;
        case 0x32:
            if ((arg0->unk_050 == 2) && (arg0->unk_0BC == 0)) {
                func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 5.0f);
                arg0->unk_0BC = 4;
            }
            arg0->obj.rot.x += arg0->unk_114;
            arg0->obj.rot.y += arg0->unk_118;
            arg0->obj.rot.z += arg0->unk_11C;
            if (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800C9F2C, 1) != 0) {
                arg0->unk_0E8.x *= -0.7f;
            }
            if (arg0->obj.pos.y < D_80177940) {
                func_80060FBC(&arg0->obj, &arg0->unk_100);
            }
            break;
        case 0x39:
            arg0->obj.rot.x += arg0->unk_114;
            arg0->obj.rot.y += arg0->unk_118;
            arg0->obj.rot.z += arg0->unk_11C;
            if (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800C9F2C, 1) != 0) {
                arg0->unk_0E8.x *= -0.7f;
            }
            if (arg0->obj.pos.y < D_80177940) {
                if (arg0->unk_050 >= 3) {
                    arg0->unk_0E8.y = 0.0f;
                    arg0->unk_10C = 0.0f;
                    arg0->unk_11C = 0.0f;
                    arg0->unk_118 = 0.0f;
                    arg0->unk_114 = 0.0f;
                } else {
                    arg0->unk_050++;
                    arg0->unk_0E8.y = -arg0->unk_0E8.y * 0.7f;
                    arg0->obj.pos.y = D_80177940;
                    arg0->unk_114 *= 0.5f;
                    arg0->unk_118 *= 0.5f;
                    arg0->unk_11C *= 0.5f;
                    
                }
            }
            break;
        default:
            if (arg0->unk_046 == 0) {
                arg0->unk_046++;
                arg0->unk_13C = (Rand_ZeroOne() - 0.5f) * 30.0f;
                arg0->unk_140 = (Rand_ZeroOne() - 0.5f) * 30.0f;
                arg0->unk_144 = (Rand_ZeroOne() - 0.5f) * 30.0f;
            }
            arg0->obj.rot.x += arg0->unk_13C;
            arg0->obj.rot.y += arg0->unk_140;
            arg0->obj.rot.z += arg0->unk_144;
            if (arg0->unk_0B8 == 0x46) {
                if ((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) {
                    func_80060FBC(&arg0->obj, &arg0->unk_100);
                }
            } else if (arg0->unk_0B8 == 0x27) {
                if (((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) && (arg0->unk_0BE == 0)) {
                    func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 10.0f);
                    func_80060FBC(&arg0->obj, &arg0->unk_100);
                    func_8007A6F0(&arg0->obj.pos, 0x2903A008U);
                }
            } else if (((arg0->unk_0B8 >= 0x29) && (arg0->unk_0B8 < 0x2D)) || (arg0->unk_0B8 == 0x3B)) {
                if (((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0)) && (arg0->unk_0BE == 0)) {
                    func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 2.0f * arg0->unk_110);
                    func_80060FBC(&arg0->obj, &arg0->unk_100);
                    func_8007A6F0(&arg0->obj.pos, 0x2903A008U);
                }
                if (func_800A73E4(&sp44, &sp40, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0) {
                    func_8007B228(arg0->obj.pos.x, sp44, arg0->obj.pos.z, 2.0f);
                    func_80060FBC(&arg0->obj, &arg0->unk_100);
                }
            } else if (arg0->unk_0B8 >= 0xA) {
                if (!(arg0->unk_0BC & 3)) {
                    func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, arg0->unk_110);
                }
                if (((arg0->unk_0BC == 0) || (func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) && (arg0->unk_0BE == 0)) {
                    func_8007BFFC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, arg0->unk_0E8.x, arg0->unk_0E8.y, arg0->unk_0E8.z, arg0->unk_110 * 1.5f, 4);
                    func_80060FBC(&arg0->obj, &arg0->unk_100);
                    func_8007A6F0(&arg0->obj.pos, 0x2903A008U);
                }
            } else {
                if ((arg0->unk_0B8 == 3) && !(arg0->unk_0BC & 7)) {
                    func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.5f);
                }
                if ((func_8006351C(arg0->unk_040, &arg0->obj.pos, &D_800D0030, 1) != 0) || (arg0->obj.pos.y < (D_80177940 + 10.0f))) {
                    if (D_80177C98 == 1) {
                        func_8007D0E0(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 2.0f);
                        func_80060FBC(&arg0->obj, &arg0->unk_100);
                        return;
                    }
                    
                    arg0->unk_0E8.y *= -0.2f;
                    arg0->obj.pos.y += arg0->unk_0E8.y * 5.0f;
                    arg0->unk_050++;
                    if (arg0->unk_050 >= 2) {
                        func_80060FBC(&arg0->obj, &arg0->unk_100);
                    }
                    if ((arg0->unk_0B8 != 2) && (arg0->unk_0B8 != 4)) {
                        func_8006BF7C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z);
                    } else if (D_80178234 == 14) {
                        func_8007BC7C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
                        func_8007BC7C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
                        func_8007BC7C(((Rand_ZeroOne() - 0.5f) * 10.0f) + arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
                    }
                }
                if (arg0->unk_0B8 == 4) {
                    if ((D_80178234 == 16) && (arg0->unk_0BC == 0)) {
                        func_80060FBC(&arg0->obj, &arg0->unk_100);
                    }
                } else {
                    if (arg0->unk_0BC & 1) {
                        func_8007D24C(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 1.0f);
                    }
                    if ((D_80177C98 == 1) && (arg0->unk_0BC == 0)) {
                        func_80060FBC(&arg0->obj, &arg0->unk_100);
                    }
                }
            }
            break;
    }
}

void func_8006D0F4(Object_2F4 *arg0) {
    s32 i;
    s32 j;
    f32 *var_s0;
    Vec3f spA8;
    Vec3f sp9C;
    s32 temp_fs0;
    s32 temp_fs1;
    s32 temp_fs2;
    s32 temp_ft4;

    D_80161A7C = 0x6E;
    D_80161A80 = 0x6E;
    D_80161A84 = 0x6E;
    D_80178544 = 0x28;

    for(i = 0; i < ARRAY_COUNT(D_80161B00); i++) {
        if ((D_80161B00[i].obj.status == 2) && ((D_80178280->unk_138 - 3000.0f) < D_80161B00[i].obj.pos.z)) {
            var_s0 = D_800CF964[D_80161B00[i].obj.id];
            temp_ft4 = *var_s0;
            if (temp_ft4 != 0) {
                Matrix_RotateY(gCalcMatrix, -D_80161B00[i].obj.rot.y * 0.017453292f, 0U);
                spA8.x = arg0->obj.pos.x - D_80161B00[i].obj.pos.x;
                spA8.y = arg0->obj.pos.y - D_80161B00[i].obj.pos.y;
                spA8.z = arg0->obj.pos.z - D_80161B00[i].obj.pos.z;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &spA8, &sp9C);
                var_s0++;
                temp_fs0 = D_80161B00[i].obj.pos.x + sp9C.x;
                temp_fs1 = D_80161B00[i].obj.pos.y + sp9C.y;
                temp_fs2 = D_80161B00[i].obj.pos.z + sp9C.z;
                for(j = 0; j < temp_ft4; j++, var_s0 += 6) {
                    if (func_800A78C4(var_s0, D_80161B00[i].obj.pos.x, D_80161B00[i].obj.pos.y, D_80161B00[i].obj.pos.z, temp_fs0, temp_fs1, temp_fs2)) {
                        D_80161A7C = 0xA;
                        D_80161A80 = 0xA;
                        D_80161A84 = 0xA;
                        arg0->unk_0C8 = 5;
                    }
                }
            }
        }
    }
}

void func_8006D350(Object_80 *arg0) {
    arg0->obj.rot.z += 1.0f;
}

void func_8007240C(f32, f32, f32, f32);
void func_8006D36C(Object_2F4 *);
void func_8006EA50(Object_2F4 *);
void func_8006F40C(Object_2F4 *);
void func_8006FE28(Object_2F4 *);
void func_8006FEEC(Object_2F4 *);
void func_800701E0(Object_2F4 *);
void func_80070BA8(Object_2F4 *);
void func_80070CEC(Object_2F4 *);
void func_80070D44(Object_2F4 *);
void func_80071DC0(Object_2F4 *);
void func_800720E8(Object_2F4 *);
void func_80072474(Object_2F4 *); 

#ifdef NON_MATCHING
void func_8006D36C(Object_2F4 *arg0) {
    u16** var_v1;
    u16* temp_s1;
    u16 *temp_v0_4;
    u16* test;
    s32 i;
    s32 j;
    volatile unsigned int new_var;

    while(true) {
        new_var = (uintptr_t) D_602F3AC;
        switch (D_80178234) {
            case 9:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_C037E3C);
                break;
            case 0:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_603D9E8);
                break;
            case 1:
                var_v1 = SEGMENTED_TO_VIRTUAL(new_var);
                break;
            case 13:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_60308B8);
                break;
            case 12:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_600631C);
                break;
            case 2:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_60320D0);
                break;
            case 4:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_60289FC);
                break;
            case 3:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_6027F50);
                break;
            case 5:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_6032E18);
                break;
            case 7:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_6020DD0);
                break;
            case 8:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_602AAC0);
                break;
            case 6:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_601B1E4);
                break;
            case 11:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_60381D8);
                break;
            case 10:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_6009B34);
                break;
            default:
                var_v1 = SEGMENTED_TO_VIRTUAL(D_603D9E8);
                break;
        }
        temp_s1 = SEGMENTED_TO_VIRTUAL(var_v1[arg0->unk_0E4]);

        switch (temp_s1[arg0->unk_0E6] & 0xFE00) {
            case 0xFE00:
                arg0->unk_0B8 = 0xC8;
                if (arg0->unk_01C.unk_10 > 10000.0f) {
                    arg0->unk_01C.unk_10 = 100.0f;
                }
                return;
            case 0xD000:
                func_8001A500(&arg0->unk_100);
                arg0->unk_0B4 = temp_s1[arg0->unk_0E6 + 1];
                if (arg0->unk_0B4 == 0x28) {
                    arg0->unk_0C2 = 0x2710;
                } else {
                    arg0->unk_0C2 = 0;
                }
                arg0->unk_140 = 0.0f;
                arg0->unk_144 = 0.0f;
                if ((arg0->unk_0B4 == 0x40) || (arg0->unk_0B4 == 0x51)) {
                    arg0->unk_150 = 0.0f;
                } else if (arg0->unk_0B4 == 0x4F) {
                    arg0->unk_01C.drawType = 2;
                }
                arg0->unk_0E6 += 2;
                arg0->unk_0CE = temp_s1[arg0->unk_0E6] & 0x1FF;
                if ((arg0->unk_0B4 >= 0xC8) && (arg0->unk_0B4 < 0x12C)) {
                    arg0->unk_046 = 0x64;
                    arg0->unk_01C.unk_0C = D_800CBEC4;
                    arg0->unk_01C.unk_1C = 1.0f;
                    for(i = 0; i < 2; i++) {
                        if(D_80176550[i] == 0) {
                            D_80176550[i] = 1;
                            arg0->unk_046 = i;
                            for(j = 0; j < 100; j++) {
                                D_80176878[i][j] = arg0->obj.pos.y;
                                D_80176B98[i][j] = arg0->obj.pos.z;
                            }
                            if (arg0->unk_0B4 == 0xC8) {
                                func_80019218(0x11032049U, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            }
                            break;
                        }
                    }

                    if (arg0->unk_046 == 100) {
                        func_80060FBC(&arg0->obj, &arg0->unk_100);
                    }
                }
                if ((arg0->unk_0B4 == 2) || (arg0->unk_0B4 == 0x2B)) {
                    arg0->unk_0C9 = 1;
                    arg0->unk_07C = 1;
                }
                if (arg0->unk_0B4 == 0x51) {
                    arg0->unk_0C9 = 1;
                }
                if (D_80178280->unk_1C8 == 3) {
                    if (arg0->unk_0B4 == 0x56) {
                        func_8001D4AC(0x36U, 0x14U, 0xAU, 0xAU);
                    }
                    if (arg0->unk_0B4 == 0x55) {
                        func_8001D4AC(0x37U, 0x14U, 0xAU, 0xAU);
                    }
                }
                if (arg0->unk_0B4 == 0x67) {
                    arg0->unk_0B6 = 0;
                }
                if (arg0->unk_0B4 == 0x68) {
                    arg0->unk_0B6 = Animation_GetFrameCount(&D_6014658) - 1;
                }
                if (arg0->unk_0B4 < 0xC8) {
                    arg0->unk_01C.unk_0C = SEGMENTED_TO_VIRTUAL(D_800D003C[arg0->unk_0B4].unk_04);
                    arg0->unk_110 = D_800D003C[arg0->unk_0B4].unk_08;
                    arg0->unk_01C.unk_16 = D_800D003C[arg0->unk_0B4].unk_14;
                    arg0->unk_01C.unk_14 = D_800D003C[arg0->unk_0B4].unk_15;
                    arg0->unk_01C.unk_19 = D_800D003C[arg0->unk_0B4].unk_17;
                    arg0->unk_01C.unk_1C = D_800D003C[arg0->unk_0B4].unk_18;
                    arg0->unk_01C.unk_20 = D_800D003C[arg0->unk_0B4].unk_1C;
                    if (arg0->unk_0B4 == 0x4E) {
                        arg0->unk_01C.unk_18 = 0;
                    }
                    arg0->unk_01C.unk_10 = D_800D003C[arg0->unk_0B4].unk_0C;
                    arg0->unk_178 = D_800D003C[arg0->unk_0B4].unk_10;
                    switch (D_800D003C[arg0->unk_0B4].unk_16) {
                        case 1:
                            if ((D_80178234 != 7) && (arg0->unk_0B4 != 6) && ((D_80178234 != 0) || (arg0->unk_0B4 != 8))) {
                                func_80019218(0x31000011U, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            }
                            break;
                        case 2:
                            func_80019218(0x3100000CU, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            break;
                        case 3:
                            func_80019218(0x11030010U, &arg0->unk_100, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            break;
                        case 4:
                            func_80019218(0x31012039U, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            break;
                        case 5:
                            func_80019218(0x1900302BU, &arg0->unk_100, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            break;
                        case 6:
                            func_80019218(0x31000014U, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            break;
                        case 7:
                            func_80019218(0x31000015U, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            break;
                    }
                    if (D_80178280->unk_138 < arg0->obj.pos.z) {
                        arg0->unk_01C.unk_10 = 3000.0f;
                    }
                    if (arg0->unk_01C.unk_16 == 0) {
                        arg0->obj.rot.z = arg0->unk_170 = arg0->unk_0F4.z;
                        if (arg0->unk_0B4 != 0x1F) {
                            arg0->unk_0F4.z = 0.0f;
                        }
                    }
                }
                continue;
            case 0xD200:
                arg0->unk_080 = temp_s1[arg0->unk_0E6 + 1];
                if (arg0->unk_080 < 4) {
                    D_800CFF80[arg0->unk_080] = arg0->unk_040;
                }
                arg0->unk_0E6 += 2;
                continue;
            case 0xE200:
                arg0->unk_08C = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                arg0->unk_090 = temp_s1[arg0->unk_0E6] & 0x1FF;
                continue;
            case 0x600: 
                D_80177E78 = arg0->unk_040;
                D_80177F10.x = arg0->obj.pos.x;
                D_80177F10.y = arg0->obj.pos.y;
                D_80177F10.z = arg0->obj.pos.z;
                D_80177E88.x = arg0->obj.rot.x;
                D_80177E88.y = arg0->obj.rot.y;
                D_80177E88.z = arg0->obj.rot.z;
                arg0->unk_0E6 += 2;
                continue;
            case 0xE000:
                if (temp_s1[arg0->unk_0E6 + 1] == 0xE) {
                    arg0->unk_0B8 = 0xA;
                    arg0->unk_140 = 0.0f;
                    arg0->unk_0E6 += 2;
                    return;
                }
                if (temp_s1[arg0->unk_0E6 + 1] == 0xF) {
                    arg0->unk_01C.unk_0C = SEGMENTED_TO_VIRTUAL(D_800CBEC4);
                    arg0->unk_0B8 = 0xB;
                    arg0->unk_0E6 += 2;
                    return;
                }
                arg0->unk_048 = temp_s1[arg0->unk_0E6 + 1];
                if (arg0->unk_048 == 3) {
                    arg0->unk_04C = 4;
                }
                if (arg0->unk_048 == 0xD) {
                    arg0->unk_0BE = 0x32;
                }
                arg0->unk_0E6 += 2;
                continue;
            case 0xE800:
                arg0->unk_044 = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                continue;
            case 0xEC00:
                func_8001D400(temp_s1[arg0->unk_0E6 + 1]);
                arg0->unk_0E6 += 2;
                continue;
            case 0xF000:
                temp_v0_4 = Message_PtrFromId(temp_s1[arg0->unk_0E6 + 1]);
                if ((temp_v0_4 != NULL) && (D_80178280->unk_1C8 == 3)) {
                    func_800BA808(temp_v0_4, temp_s1[arg0->unk_0E6] & 0x1FF);
                }
                arg0->unk_0E6 += 2;
                continue;
            case 0xEE00:
                if ((D_80161A88 == 2) && (temp_s1[arg0->unk_0E6 + 1] !=  2)) {
                    func_8001A55C(&D_80178280->unk_460[0].x, 0x1100000BU);
                }
                D_80161A88 = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                func_8006D36C(arg0);
                arg0->obj.status = 0;
                return;
            case 0x7000:
                D_800CFF90 = temp_s1[arg0->unk_0E6] & 0x1FF;
                D_80161690 = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                continue;
            case 0x7200:
                D_801778B0[temp_s1[arg0->unk_0E6 + 1]] = 0xFF;
                arg0->unk_0E6 += 2;
                continue;
            case 0x7400:
                func_8001D2FC(&arg0->unk_100, temp_s1[arg0->unk_0E6 + 1]);
                arg0->unk_0E6 += 2;
                continue;
            case 0x7600:
                func_8001D3A0(&arg0->unk_100, temp_s1[arg0->unk_0E6 + 1]);
                arg0->unk_0E6 += 2;
                continue;
            case 0xF400:
                func_800182F4(0x103200FF);
                func_800182F4(0x113200FF);
                arg0->unk_0E6 += 2;
                continue;
            case 0xF200:
                if (arg0->unk_080 == temp_s1[arg0->unk_0E6 + 1]) {
                    arg0->unk_0D0 =  1;
                    arg0->unk_0D4 = 0x64;
                    arg0->unk_0D6 = temp_s1[arg0->unk_0E6] & 0x1FF;
                } else {
                    D_80177910[temp_s1[arg0->unk_0E6 + 1]] = temp_s1[arg0->unk_0E6] & 0x1FF;
                }
                arg0->unk_0E6 += 2;
                continue;
            case 0xF800:
                arg0->unk_06C = 1;
                for(i = 0; i < 100; i++) {
                    if (D_80174750[i].unk_00 == 0) {
                        D_80174750[i].unk_00 = 1;
                        D_80174750[i].unk_28 = 3.0f;
                        D_80174750[i].unk_04 = arg0->obj.pos.x - arg0->unk_0E8.x;
                        D_80174750[i].unk_08 = arg0->obj.pos.y - arg0->unk_0E8.y;
                        D_80174750[i].unk_0C = arg0->obj.pos.z - arg0->unk_0E8.z;
                        D_80174750[i].unk_2C = D_800D0DBC[temp_s1[arg0->unk_0E6 + 1]][0];
                        D_80174750[i].unk_2D = D_800D0DBC[temp_s1[arg0->unk_0E6 + 1]][1];
                        D_80174750[i].unk_2E = D_800D0DBC[temp_s1[arg0->unk_0E6 + 1]][2];
                        D_80174750[i].unk_2F = D_800D0DBC[temp_s1[arg0->unk_0E6 + 1]][3];
                        arg0->unk_070 = 0;
                        break;
                    }
                }
                arg0->unk_0E6 += 2;
                continue;
            case 0xFA00:
                arg0->unk_06C = 0;
                arg0->unk_0E6 += 2;
                continue;
            case 0x5000:
                arg0->unk_0B8 = 6;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_174 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                return;
            case 0x5200:
                arg0->unk_0B8 = 7;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_174 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                return;
            case 0x5400:
                arg0->unk_0B8 = 8;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_174 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                return;
            case 0x5600:
                arg0->unk_0B8 = 9;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_174 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                return;
            case 0x5A00:
                arg0->unk_0B8 = 1;
                arg0->unk_054 = D_800CFF80[temp_s1[arg0->unk_0E6] & 0x1FF];
                arg0->unk_158 = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0BC = 0;
                arg0->unk_0E6 += 2;
                return;
            case 0x5800:
                arg0->unk_0B8 = 0xD;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_174 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                return;
            case 0x5C00:
                arg0->unk_0B8 = 0xE;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_174 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                return;
            case 0x5E00:
                arg0->unk_0B8 = 0xF;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_174 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                return;
            case 0xC000:
                arg0->unk_058 = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_05C = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_0E6 += 2;
                continue;
            case 0xFC00:
                if (temp_s1[arg0->unk_0E6 + 1] < arg0->unk_050) {
                    arg0->unk_0E6 += 2;
                    arg0->unk_050 = 0;
                } else if ((temp_s1[arg0->unk_0E6] & 0x1FF) < 0xC8) {
                    arg0->unk_0E6 = (temp_s1[arg0->unk_0E6] & 0x1FF) * 2;
                    arg0->unk_050++;
                } else {
                    arg0->unk_0E4 = (temp_s1[arg0->unk_0E6] & 0x1FF) - 0xC8;
                    arg0->unk_0E6 = 0;
                }
                continue;
            case 0x6000:
                arg0->unk_0B8 = 1;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                return;
            case 0x0:   
                arg0->unk_118 = arg0->unk_114 = temp_s1[arg0->unk_0E6] & 0x7F;
                arg0->unk_064 = temp_s1[arg0->unk_0E6] & 0x180;
                arg0->unk_0B8 = 1;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                return;
            case 0x400: 
                arg0->unk_16C = temp_s1[arg0->unk_0E6 + 1] & 0xFF;
                arg0->unk_0E6 += 2;
                continue;
            case 0x200: 
                arg0->unk_118 = temp_s1[arg0->unk_0E6] & 0x7F;
                arg0->unk_064 = temp_s1[arg0->unk_0E6] & 0x180;
                arg0->unk_0B8 = 1;
                arg0->unk_0BC = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                return;
            case 0x800: 
                arg0->unk_084 = 1;
                arg0->unk_0C0 = temp_s1[arg0->unk_0E6 + 1];
                arg0->unk_0E6 += 2;
                continue;
            case 0x1000:
                arg0->unk_084 = 0;
                arg0->unk_0E6 += 2;
                continue;
            case 0x1200:
                arg0->unk_0B8 = 2;
                arg0->unk_11C = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_120 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_0E6 += 2;
                return;
            case 0x1400:
                arg0->unk_0B8 = 3;
                arg0->unk_11C = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_120 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_0E6 += 2;
                return;
            case 0x1600:
                arg0->unk_0B8 = 4;
                arg0->unk_11C = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_120 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_0E6 += 2;
                return;
            case 0x1800:
                arg0->unk_0B8 = 5;
                arg0->unk_11C = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_120 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_0E6 += 2;
                return;
            case 0x2000:
                arg0->unk_124.x = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_124.y = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_124.z = 1.0f;
                arg0->unk_0E6 += 2;
                continue;
            case 0x2200:
                arg0->unk_124.x = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_124.y = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_124.z = -1.0f;                
                arg0->unk_0E6 += 2;
                continue;
            case 0x2400:
                arg0->unk_130 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_134 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_138 = 1.0f;
                arg0->unk_0E6 += 2;
                continue;
            case 0x2600:
                arg0->unk_130 = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_134 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_138 = -1.0f;
                arg0->unk_0E6 += 2;
                continue;
            case 0x2800:
                arg0->unk_13C = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_140 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_144 = 1.0f;
                arg0->unk_0E6 += 2;
                continue;
            case 0x2A00:
                arg0->unk_13C = temp_s1[arg0->unk_0E6] & 0x1FF;
                arg0->unk_140 = temp_s1[arg0->unk_0E6 + 1] * 0.1f;
                arg0->unk_144 = -1.0f;
                arg0->unk_0E6 += 2;
                continue;
            case 0x3000:
                arg0->unk_068 = 1;
                arg0->unk_0E6 += 2;
                continue;
            case 0x3200:
                arg0->unk_068 = 0;
                arg0->unk_0E6 += 2;
                break;
        }
    }
}
#else
void func_8006D36C(Object_2F4 *arg0);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_8006D36C.s")
#endif

void func_8006EA50(Object_2F4 *arg0) {
    if ((arg0->unk_06C != 0) && (D_80174750[arg0->unk_070].unk_00 != 0)) {
        D_80174750[arg0->unk_070].unk_10 = arg0->obj.pos.x;
        D_80174750[arg0->unk_070].unk_14 = arg0->obj.pos.y;
        D_80174750[arg0->unk_070].unk_18 = arg0->obj.pos.z;
    }
}

void func_8006EAC4(Object_8C *arg0, f32 arg1, f32 arg2, f32 arg3) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 374;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_50 = 20;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
    func_80019218(0x2900201DU, &arg0->unk_80, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8006EB64(f32 arg0, f32 arg1, f32 arg2) {
    s32 i;

    for(i = 50; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            func_8006EAC4(&D_80170130[i], arg0, arg1, arg2);
            break;
        }
    }
}

void func_8006EBC0(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 225;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    func_800612B8(&arg0->unk_01C, arg0->obj.id);
    arg0->unk_01C.unk_16 = 2;
    func_80019218(0x2900201D, &arg0->unk_100, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_8006EC60(f32 arg0, f32 arg1, f32 arg2) {
    s32 i;

    for(i = 0; i < ARRAY_COUNT(D_80163FE0); i++) {
        if (D_80163FE0[i].obj.status == 0) {
            func_8006EBC0(&D_80163FE0[i], arg0, arg1, arg2);
            break;
        }
    }
}

void func_8006ECBC(s32 arg0, Object_70 *arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB) {
    func_80035E48(arg1);
    arg1->obj.status = 1;
    arg1->unk_20.z = arg8;
    arg1->unk_20.x = arg6;
    arg1->unk_20.y = arg7;
    arg1->obj.pos.x = arg3;
    arg1->obj.pos.y = arg4;
    arg1->obj.pos.z = arg5;
    arg1->obj.rot.x = arg9 + 180.0f;
    arg1->obj.rot.y = argA;
    arg1->obj.rot.z = -argB;
    arg1->obj.id = arg0;
    arg1->unk_58 = 1;
    arg1->unk_60 = 0;
    if(arg0 == 9)  {
        arg1->unk_64 = 120;
    } else {
        arg1->unk_64 = 30;
    }
    arg1->unk_68 = arg2 + 100;
    
    if (D_80177880 == 1) {
        if (arg2 + 100 < 104) {
            func_80019218(0x2900000D, &arg1->unk_38, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        } else {
            func_80019218(0x29002002, &arg1->unk_38, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    } else if ((arg2 < 60) && (D_80163FE0[arg2].obj.id == 200) && (D_80163FE0[arg2].unk_080 > 0)) {
        func_80019218(0x2900000D, &arg1->unk_38, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else if (arg2 + 100 == 200) {
        arg1->unk_68 = 100;
        func_80019218(0x19030037, &arg1->unk_38, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    } else {
        func_80019218(0x29002002, &arg1->unk_38, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }

}

void func_8006EEFC(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    s32 i;

    for(i = 0; i < 10; i++) {
        if (D_80174050[i].obj.status == 0) {
            func_8006ECBC(1, &D_80174050[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
            break;
        }
    }
}

void func_8006EFA0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    s32 i;

    for(i = 0; i < 10; i++) {
        if (D_80174050[i].obj.status == 0) {
            func_8006ECBC(9, &D_80174050[i], arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
            break;
        }
    }
}

void func_8006F044(Object_8C *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 347;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_6C = arg4;
    arg0->unk_44 = 100;
    func_800612B8(&arg0->unk_1C,arg0->obj.id);
    func_8007A6F0(&arg0->obj.pos, 0x2903B009);
}

void func_8006F0D8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    for(i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            func_8006F044(&D_80170130[i], arg0, arg1, arg2, arg3);
            break;
        }
    }
}

void func_8006F140(Object_8C *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Object_8C_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 394;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_6C = arg4;
    arg0->unk_44 = 100;
    arg0->unk_78 = 102;
    arg0->unk_7A = 18;
    func_800612B8(&arg0->unk_1C,arg0->obj.id);
    arg0->unk_1C.unk_18 = 40;
    func_8007A6F0(&arg0->obj.pos, 0x2903B009);
}

void func_8006F1EC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 i;

    for(i = 0; i < ARRAY_COUNT(D_80170130); i++) {
        if (D_80170130[i].obj.status == 0) {
            func_8006F140(&D_80170130[i], arg0, arg1, arg2, arg3);
            break;
        }
    }
}

void func_8006F254(Object_2F4 *arg0) {
    Vec3f sp54;
    Vec3f sp48;

    Matrix_RotateY(gCalcMatrix, arg0->unk_2E8.y * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, arg0->unk_2E8.x * 0.017453292f, 1);
    Matrix_RotateZ(gCalcMatrix, (arg0->unk_2E8.z + arg0->unk_0F4.z) * 0.017453292f, 1);
    Matrix_RotateY(gCalcMatrix, arg0->unk_0F4.y * 0.017453292f, 1);
    Matrix_RotateX(gCalcMatrix, arg0->unk_0F4.x * 0.017453292f, 1);
    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = D_80177828;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp54, &sp48);
    func_8007F04C(353, arg0->obj.pos.x + sp48.x, arg0->obj.pos.y + sp48.y, arg0->obj.pos.z + sp48.z, arg0->obj.rot.x, arg0->obj.rot.y, arg0->obj.rot.z, arg0->unk_2E8.x, arg0->unk_2E8.y, arg0->unk_2E8.z + arg0->unk_0F4.z, sp48.x, sp48.y, sp48.z, 1.0f);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_8006F40C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_8006FE28.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_8006FEEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_800700A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_800701E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80070BA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80070CEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80070D44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80071DC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_800720E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_800722EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_8007240C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80072474.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80072594.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80074BFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80074C44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80074E3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80074F04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80074F90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80074FF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_800763A4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_8007717C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_800771CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/func_80077218.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_6B3B0/D_800D6A50.s")
