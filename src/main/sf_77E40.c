#include "global.h"

void func_80077240(f32 posX, f32 posY, f32 posZ, s32 arg3) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_80176438); i++) {
        if (D_80176438[i].unk_00 == 0) {
            D_80176438[i].unk_00 = arg3;
            D_80176438[i].pos.x = posX;
            D_80176438[i].pos.y = posY;
            D_80176438[i].pos.z = posZ;
            D_80176438[i].unk_10 = 0.0f;
            D_80176438[i].unk_18 = 65;
            break;
        }
    }
}

void func_8007729C(void) {
    UnkStruct_D_80176438* var_s0;
    s32 i;

    for (i = 0, var_s0 = D_80176438; i < ARRAY_COUNT(D_80176438); i++, var_s0++) {
        if (var_s0->unk_00 != 0) {
            if (var_s0->unk_18 != 0) {
                var_s0->unk_18 -= 1;
            }
            if (var_s0->unk_18 == 0) {
                var_s0->unk_00 = 0;
            }
            if (D_80177880 == 0) {
                var_s0->pos.z -= D_80177D08;
            } else if (D_80178280->unk_1C8 == 3) {
                var_s0->pos.x += D_80178280->unk_0C0;
                var_s0->pos.z += D_80178280->unk_0C8;
            }
            if (var_s0->unk_18 < 45) {
                func_8009BC2C(&var_s0->unk_10, 300.0f, 0.1f, 20.0f, 0.0f);
            }
        }
    }
}

void func_80077404(UnkStruct_D_80176438* arg0) {
    s32 var_a2;
    Vec3f sp60;
    Vec3f sp54;
    f32 sp50;

    sp60 = D_800D1528;
    if (arg0->unk_18 <= 45) {
        Matrix_Translate(gGfxMatrix, arg0->pos.x, arg0->pos.y, arg0->pos.z + D_80177D20, 1);
        Matrix_MultVec3f(gGfxMatrix, &sp60, &sp54);
        if ((fabsf(sp54.x) < 20000.0f) && (fabsf(sp54.y) < 20000.0f)) {
            if ((sp54.z < 0.0f) && (sp54.z > -20000.0f)) {
                sp50 = sqrtf(VEC3F_SQ(sp54)) * 0.0015f * 0.2f;
                Matrix_RotateY(gGfxMatrix, -D_80178280[D_801778A0].unk_058, 1);
                Matrix_RotateX(gGfxMatrix, D_80178280[D_801778A0].unk_05C, 1);
                Matrix_Scale(gGfxMatrix, sp50, sp50, 1.0f, 1);
                Matrix_Translate(gGfxMatrix, 0.0f, arg0->unk_10, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if (arg0->unk_00 < 11) {
                    gSPDisplayList(gMasterDisp++, D_1015980);
                    gSPDisplayList(gMasterDisp++, D_800D14FC[arg0->unk_00]);
                } else if (arg0->unk_00 == 101) {
                    gSPDisplayList(gMasterDisp++, D_1011F20);
                } else if (arg0->unk_00 == 100) {
                    gSPDisplayList(gMasterDisp++, D_1016580);
                } else {
                    gSPDisplayList(gMasterDisp++, D_1015980);
                    switch (arg0->unk_00) {
                        case 20:
                            var_a2 = 0;
                            break;
                        case 30:
                            var_a2 = 1;
                            break;
                        case 40:
                            var_a2 = 2;
                            break;
                        case 50:
                        default:
                            var_a2 = 3;
                            break;
                    }
                    gSPDisplayList(gMasterDisp++, D_800D14E0[var_a2][0]);
                    gSPDisplayList(gMasterDisp++, D_800D14E0[var_a2][1]);
                }
            } else {
                arg0->unk_00 = 0;
            }
        }
    }
}

void func_80077790(void) {
    UnkStruct_D_80176438* var_s0;
    s32 i;

    func_800B8DD0(&gMasterDisp, 0x3E);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
    for (i = 0, var_s0 = D_80176438; i < ARRAY_COUNT(D_80176438); i++, var_s0++) {
        if (var_s0->unk_00 != 0) {
            Matrix_Push(&gGfxMatrix);
            func_80077404(var_s0);
            Matrix_Pop(&gGfxMatrix);
        }
    }
}

Object_8C* func_8007783C(s32 objId) {
    Object_8C* var_a2;
    s32 i;

    for (i = 0, var_a2 = D_80170130; i < ARRAY_COUNT(D_80170130); i++, var_a2++) {
        if (var_a2->obj.status == 0) {
            func_80061474(var_a2);
            var_a2->obj.status = 2;
            var_a2->obj.id = objId;
            func_800612B8(&var_a2->unk_1C, var_a2->obj.id);
            break;
        }
    }
    if (i == ARRAY_COUNT(D_80170130)) {
        var_a2 = NULL;
    }
    return var_a2;
}

void func_800778C4(Object_8C* arg0, f32 posX, f32 posY, f32 posZ, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    func_80061474(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 0x153;
    arg0->obj.pos.x = posX;
    arg0->obj.pos.y = posY;
    arg0->obj.pos.z = posZ;
    arg0->unk_54 = arg4;
    arg0->unk_58 = arg5;
    arg0->unk_5C = arg6;
    arg0->unk_70 = arg7;
    arg0->unk_4C = 0;
    arg0->unk_6C = 0.5f;
    arg0->obj.rot.z = Rand_ZeroOne() * 360.0f;
    func_800612B8(&arg0->unk_1C, arg0->obj.id);
    arg0->unk_44 = 0xFF;
}

void func_8007797C(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    s32 i;

    for (i = ARRAY_COUNT(D_80170130) - 1; i >= 0; i--) {
        if (D_80170130[i].obj.status == 0) {
            func_800778C4(&D_80170130[i], posX, posY, posZ, arg3, arg4, arg5, arg6);
            break;
        }
    }
}

void func_80077A00(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    gSPDisplayList(gMasterDisp++, D_3016B30);
}

void func_80077A7C(Object_8C* arg0) {
    func_800BA5B0();
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    gDPSetEnvColor(gMasterDisp++, 255, 255, 255, arg0->unk_44);
    Matrix_Scale(gGfxMatrix, arg0->unk_6C, arg0->unk_70, 1.0f, 1);
    Matrix_Translate(gGfxMatrix, 0.0f, 20.0f, 0.0f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    gSPDisplayList(gMasterDisp++, D_6024220);
    func_800B8DD0(&gMasterDisp, 0x40);
}

void func_80077B78(void* arg0) {
}

void func_80077B84(Object_8C* arg0) {
    func_8005980C(arg0->unk_70);
    if ((arg0->unk_6C == 71.0f) || ((D_80178280->unk_1C8 == 7) && (D_80178234 == 0))) {
        func_800B8DD0(&gMasterDisp, 0x26);
    } else {
        func_800B8DD0(&gMasterDisp, 0x43);
    }
    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, arg0->unk_44);
    switch (arg0->unk_4C) {
        case 0:
            gDPSetEnvColor(gMasterDisp++, 0, 128, 255, arg0->unk_44);
            break;
        case 1:
            gDPSetEnvColor(gMasterDisp++, 255, 64, 255, arg0->unk_44);
            break;
        case 2:
            gDPSetEnvColor(gMasterDisp++, 255, 128, 0, arg0->unk_44);
            break;
        case 3:
            gDPSetEnvColor(gMasterDisp++, 255, 48, 48, arg0->unk_44);
            break;
        case 4:
            gDPSetEnvColor(gMasterDisp++, 255, 255, 48, arg0->unk_44);
            break;
        case 5:
            gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, arg0->unk_44);
            gDPSetEnvColor(gMasterDisp++, 255, 32, 32, arg0->unk_44);
            break;
        case 6:
            if (D_80178234 == 0x11) {
                func_800B8DD0(&gMasterDisp, 0x26);
            }
            switch ((arg0->unk_40 + D_80177DB0) & 3) {
                case 0:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 0, 0, arg0->unk_44);
                    break;
                case 1:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 255, 0, arg0->unk_44);
                    break;
                case 2:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 0, 0, 255, arg0->unk_44);
                    break;
                case 3:
                    gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, arg0->unk_44);
                    break;
            }
            gDPSetEnvColor(gMasterDisp++, 0, 0, 0, arg0->unk_44);
            break;
        case 7:
            gDPSetEnvColor(gMasterDisp++, 48, 48, 255, arg0->unk_44);
            break;
        case 10:
            gDPSetEnvColor(gMasterDisp++, 255, 255, 32, arg0->unk_44);
            break;
        case 11:
            gDPSetEnvColor(gMasterDisp++, 255, 32, 32, arg0->unk_44);
            break;
        case 12:
            gDPSetEnvColor(gMasterDisp++, 32, 255, 32, arg0->unk_44);
            break;
        case 13:
            gDPSetEnvColor(gMasterDisp++, 32, 32, 255, arg0->unk_44);
            break;
    }

    gSPDisplayList(gMasterDisp++, D_1024AC0);
    func_800B8DD0(&gMasterDisp, 0x40);
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078038.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800780F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800783C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800784B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078604.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007868C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007879C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800788B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078A64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078AE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078AEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078B8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078BE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078C84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078CE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078D60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078E50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078EBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80078F78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007905C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800794CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007953C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800795AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80079618.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007968C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800798C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800798F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A28C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A3C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A4B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A568.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A5F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A6F0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A748.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A774.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A818.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A900.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007A994.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AA60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AB50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AC0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ACE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AD58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ADF4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007AFD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B040.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B0F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B180.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B228.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B2BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B344.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B3B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B494.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B550.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B5C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B62C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B670.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B67C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B758.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B7E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B8F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B960.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007B9DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BB14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BC7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BCE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BDE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BE54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BEE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BF64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007BFFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C088.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C120.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C1AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C250.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C3B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C484.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C50C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C608.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C688.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C6FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C85C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C8C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007C9E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CAF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CC00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CCBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CD7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CEBC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CF30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007CF9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D008.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D074.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D0E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D10C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D138.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D1E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D24C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D2C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D2F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D55C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D748.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D8A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D94C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007D9DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DA58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DAE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DB70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007DED4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E014.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E258.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E298.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E330.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E3E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E45C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E5CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E648.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E6B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007E93C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007EBB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ECB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007ED54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007EE68.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F04C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F11C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F20C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F2FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F438.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F5AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F6B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007F958.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FBE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FD84.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8007FE88.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800802F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080360.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008040C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008092C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080ACC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80080D04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800815DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008165C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081A8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081B24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081BEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80081C5C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80082F78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800836C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_8008377C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_800837EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083B8C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083C70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083D2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80083FA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/func_80084194.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_77E40/D_800D7230.s")
