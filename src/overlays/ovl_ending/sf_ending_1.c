#include "global.h"

void func_ending_8018CE20(s32);
void func_ending_801926D4(void);

bool func_ending_80189C64(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, void *data);
void func_ending_8018ABE8(void);
void func_ending_8018B3D8(void);
bool func_ending_8018BCB0(void);
void func_ending_8018C21C(void); 

extern AnimationHeader D_601F8E0;
extern AnimationHeader D_60246F8;
extern AnimationHeader D_60338DC;
extern AnimationHeader D_603531C;
extern AnimationHeader D_6036278;
extern Gfx D_700C620[];
extern Gfx D_700C8B0[];
extern Gfx D_700F240[];
extern Gfx D_700F320[];
extern Gfx D_7010970[];
extern u8 D_7010E10[];
extern u16 D_7010EE0[];
extern u8 D_7010F00[];
extern u16 D_7010FD0[];
extern u8 D_7010FF0[];
extern u16 D_70110C0[];
extern u8 D_70110E0[];
extern u16 D_70111B0[];
extern u16 D_8000000_RGBA[];
extern Gfx D_E000000[];
extern Gfx D_E003AB0[];

extern u32 D_ending_80192E70;

typedef struct {
    AnimationHeader* anim;
    Limb** skeleton;
    s16 setupDL;
    Vec3f pos;
    Vec3f rot;
    Vec3f scale;
    f32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 prim[4];
} UnkStruct_196D08;

extern s32 D_ending_80196D00;
extern s32 D_ending_80196D04;
extern UnkStruct_196D08 D_ending_80196D08[10];
extern s32 D_ending_80196F88;
extern u32 D_ending_80196F8C;
extern s32 D_ending_80196F90;
extern s32 D_ending_80196F94;
extern s32 D_ending_80196F98;
extern f32 D_ending_80196F9C;
extern Vec3f D_ending_80196FA0[4][50];
extern Vec3f D_ending_80197900[4][50];
extern f32 D_ending_80198260[4][50];
extern f32 D_ending_80198580;
extern bool D_ending_80198584;
extern s32 D_ending_80198588;
extern s32 D_ending_8019858C;

typedef struct {
    f32 arr[3];
}f32_arr_3;
typedef struct {
    s32 arr[3];
}s32_arr_3;
typedef struct {
    f32 arr[2];
}f32_arr_2;

extern AnimationHeader* D_ending_80192820[4];
extern Vec3f D_ending_80192830;
extern UnkStruct_196D08 D_ending_8019283C[4];
extern UnkStruct_196D08 D_ending_8019293C[4];
extern UnkStruct_196D08 D_ending_80192A3C[2];
extern Vec3f D_ending_80192ABC;
extern UnkStruct_196D08 D_ending_80192AC8[5];
extern f32_arr_3 D_ending_80192C08;
extern f32_arr_3 D_ending_80192C14;
extern s32_arr_3 D_ending_80192C20;
extern s32_arr_3 D_ending_80192C2C;
extern f32_arr_2 D_ending_80192C38;
extern Vec3f D_ending_80192C40[2];
extern Vec3f D_ending_80192C58[2];
extern Vec3f D_ending_80192C70[3];
extern Vec3f D_ending_80192C94[3];
extern Vec3f D_ending_80192CB8;
extern Vec3f D_ending_80192CC4;
extern Vec3f D_ending_80192CD0[6];
extern Vec3f D_ending_80192D18[6];
extern s32 D_ending_80192D60[6];
extern Vec3f D_ending_80192D78;
extern Vec3f D_ending_80192D84;
extern s32 D_ending_80192D90[3];
extern s32 D_ending_80192D9C[3];
extern s32 D_ending_80192DA8[3];
extern Vec3f D_ending_80192DB4;
extern Vec3f D_ending_80192DC0;
extern s32 D_ending_80192DCC[3];
extern s32 D_ending_80192DD8[3];
extern s32 D_ending_80192DE4[3];
extern f32 D_ending_80192DF0[8];
extern Vec3f D_ending_80192E10[3];
extern Vec3f D_ending_80192E34[2];
extern Vec3f D_ending_80192E4C[2];

void func_ending_80187520(s32 arg0) {
    s32 i;
    s32 j;

    RCP_SetupDL(&gMasterDisp, 0x4C);
    GPC(255, 255, 255, 255);
    switch(arg0) {
        case 0:
            for(j = 0, i = 0; i < 67; j+=316*4, i++) {
                TextureRect_16bRGBA(&gMasterDisp, D_8000000_RGBA + j, 316, 4, 0.0f, 4 * i, 1.0f, 1.0f);
            }
            TextureRect_16bRGBA(&gMasterDisp, D_8000000_RGBA + j, 316, 3, 0.0f, 4*i, 1.0f, 1.0f);
            break;
        case 1:
            for(j = 0, i = 0; i < 60; j+=316*4, i++) {
                TextureRect_16bRGBA(&gMasterDisp, D_8000000_RGBA + j, 316, 4, 0.0f, 4 * i, 1.0f, 1.0f);
            }
            break;
    }
    if (!D_8000000_RGBA){} // fake?
}

void func_ending_801876A4(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_801876A4.s")

void func_ending_80187860(s32, s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_80187860.s")

void func_ending_80187D3C(s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_80187D3C.s")

void func_ending_80188030(s32);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_80188030.s")

void func_ending_80188394(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_80188394.s")

void func_ending_8018845C(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018845C.s")

s32 func_ending_80188634(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_80188634.s")

void func_ending_801886F4(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_801886F4.s")

void func_ending_801888F4(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_801888F4.s")

void func_ending_80188DB4(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_80188DB4.s")

void func_ending_80189108(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_80189108.s")

s32 func_ending_80189C64(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, void *data) {
    s32 temp_v0 = *(s32*)data;

    if (temp_v0 == 3) {
        GSGM_BACK();
    }
    switch (limbIndex) {
        case 1:
            if (temp_v0 == 2) {
                rot->x += D_ending_80196FA0[temp_v0][2].x;
                rot->y += D_ending_80196FA0[temp_v0][2].y;
                rot->z += D_ending_80196FA0[temp_v0][2].z;
            }
            break;
        case 2:
            if (temp_v0 == 1) {
                rot->x += D_ending_80196FA0[temp_v0][1].x;
                rot->y += D_ending_80196FA0[temp_v0][1].y;
                rot->z += D_ending_80196FA0[temp_v0][1].z;
            }
            break;
        case 6:
            if (temp_v0 == 2) {
                rot->x += D_ending_80196FA0[temp_v0][3].x;
                rot->y += D_ending_80196FA0[temp_v0][3].y;
                rot->z += D_ending_80196FA0[temp_v0][3].z;
            }
            break;
        case 9:
            if (temp_v0 == 2) {
                rot->x += D_ending_80196FA0[temp_v0][4].x;
                rot->y += D_ending_80196FA0[temp_v0][4].y;
                rot->z += D_ending_80196FA0[temp_v0][4].z;
            }
            break;
        case 17:
            if (temp_v0 == 2) {
                rot->x += D_ending_80196FA0[temp_v0][0].x;
                rot->y += D_ending_80196FA0[temp_v0][0].y;
                rot->z += D_ending_80196FA0[temp_v0][0].z;
            }
            break;
        case 19:
            if ((temp_v0 == 1) || (temp_v0 == 3) || (temp_v0 == 0)) {
                rot->x += D_ending_80196FA0[temp_v0][0].x;
                rot->y += D_ending_80196FA0[temp_v0][0].y;
                rot->z += D_ending_80196FA0[temp_v0][0].z;
            }
            if (temp_v0 == 2) {
                rot->x += D_ending_80196FA0[temp_v0][6].x;
                rot->y += D_ending_80196FA0[temp_v0][6].y;
                rot->z += D_ending_80196FA0[temp_v0][6].z;
            }
            break;
        case 20:
            if (temp_v0 == 3) {
                GCGM_BACK();
            }
            if (temp_v0 == 1) {
                rot->x += D_ending_80196FA0[temp_v0][5].x;
                rot->y += D_ending_80196FA0[temp_v0][5].y;
                rot->z += D_ending_80196FA0[temp_v0][5].z;
            }
            break;
    }
    return false;
}

void func_ending_8018A024(void) {
    Vec3f sp24;
    Vec3f sp18;

    sp24.x = sp24.y = 0.0f;
    sp24.z = -100.0f;
    Matrix_RotateX(gCalcMatrix, D_801784D0 * 0.017453292f, 0U);
    Matrix_RotateY(gCalcMatrix, D_801784D4 * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, D_801784D8 * 0.017453292f, 1U);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp24, &sp18);
    gLight1x = sp18.x;
    gLight1y = sp18.y;
    gLight1z = sp18.z;
}

void func_ending_8018A124(s32 arg0) {
    f32_arr_3 sp2C = D_ending_80192C08;
    f32_arr_3 sp20 = D_ending_80192C14;
    s32_arr_3 sp14 = D_ending_80192C20;
    s32_arr_3  sp8 = D_ending_80192C2C;
    f32_arr_2  sp0 = D_ending_80192C38;
    
    // not fake, but weird. there must be a better way to write this.
    D_80177978 = (&sp2C + arg0)->arr[0];
    D_80177980 = (&sp2C + arg0)->arr[1];
    D_80177988 = (&sp2C + arg0)->arr[2];
    D_801779A0 = (&sp20 + arg0)->arr[0];
    D_801779B8 = (&sp20 + arg0)->arr[1];
    D_801779C0 = (&sp20 + arg0)->arr[2];
    gLight1R = (&sp14 + arg0)->arr[0];
    gLight1G = (&sp14 + arg0)->arr[1];
    gLight1B = (&sp14 + arg0)->arr[2];
    gAmbientR = (&sp8 + arg0)->arr[0];
    gAmbientG = (&sp8 + arg0)->arr[1];
    gAmbientB = (&sp8 + arg0)->arr[2];
    D_801784D0 = (&sp0 + arg0)->arr[0];
    D_801784D4 = (&sp0 + arg0)->arr[1];
}

void func_ending_8018A2A8(void) {
    s32 i;
    Vec3f sp6C[50];

    for(i = 0; i < D_ending_80196F88; i++) {
            Matrix_Push(&gGfxMatrix);
            RCP_SetupDL(&gMasterDisp, D_ending_80196D08[i].setupDL);
            GPC(D_ending_80196D08[i].prim[0], D_ending_80196D08[i].prim[1], D_ending_80196D08[i].prim[2], D_ending_80196D08[i].prim[3])
            Matrix_Translate(gGfxMatrix, D_ending_80196D08[i].pos.x, D_ending_80196D08[i].pos.y, D_ending_80196D08[i].pos.z, 1U);
            Matrix_Scale(gGfxMatrix, D_ending_80196D08[i].scale.x, D_ending_80196D08[i].scale.y, D_ending_80196D08[i].scale.z, 1U);
            Matrix_RotateY(gGfxMatrix, D_ending_80196D08[i].rot.y * 0.017453292f, 1U);
            Matrix_RotateX(gGfxMatrix, D_ending_80196D08[i].rot.x * 0.017453292f, 1U);
            Matrix_RotateZ(gGfxMatrix, D_ending_80196D08[i].rot.z * 0.017453292f, 1U);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (D_ending_80196D08[i].skeleton == NULL) {
                GDL(D_ending_80196D08[i].anim);
            } else {
                Animation_GetFrameData(D_ending_80196D08[i].anim, (u32)(D_ending_80196D08[i].unk_34 * D_ending_80196D08[i].unk_30) % Animation_GetFrameCount(D_ending_80196D08[i].anim), sp6C);
                Animation_DrawSkeleton(0, D_ending_80196D08[i].skeleton, sp6C, NULL, NULL, NULL, &gIdentityMatrix);
            }
            Matrix_Pop(&gGfxMatrix);
        }
    
}

void func_ending_8018A570(void) {
    func_ending_8018A024();
    Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR, gAmbientG, gAmbientB);
    switch (D_ending_80196F8C) {
        case 2:
            if (gCsFrameCount == 0xC8) {
                D_ending_80196F8C = 3;
            }
            break;
        case 4:
            if (gCsFrameCount == 0x1B3) {
                D_ending_80196F8C = 5;
            }
            break;
        case 6:
            if (gCsFrameCount == 0xB4) {
                D_ending_80196F8C = 7;
            }
            break;
        case 8:
            if ((D_ending_80196D08[4].unk_38 == 2) && (gCsFrameCount >= 0x6C)) {
                D_ending_80196F8C = 9;
            }
            break;
    }
    switch (D_ending_80196F8C) {
        case 0:
            func_ending_8018A124(0);
            /* fallthrough */
        case 1:
            func_ending_80187D3C(0);
            D_80178358 = 0;
            D_ending_8019858C = 0;
            D_ending_80196F8C = 2;
            gCsFrameCount = 0;
            /* fallthrough */
        case 2:
            func_ending_80188030(0);
            break;
        case 3:
            func_ending_80187D3C(1);
            D_80178358 = 0;
            D_ending_8019858C = 0;
            D_ending_80196F8C = 4;
            gCsFrameCount = 0;
            gOverlayStage = 1;
            break;
        case 4:
            func_ending_80188030(1);
            break;
        case 5:
            func_ending_80188394();
            D_80178358 = 0;
            D_ending_8019858C = 0;
            D_ending_80196F8C = 6;
            gCsFrameCount = 0;
            gOverlayStage = 4;
            break;
        case 6:
            func_ending_8018845C();
            break;
        case 7:
            func_ending_80188DB4();
            D_80178358 = 0;
            D_ending_8019858C = 0;
            D_ending_80196F8C = 8;
            gCsFrameCount = 0;
            /* fallthrough */
        case 8:
            func_ending_80189108();
            break;
        case 9:
            D_80178358 = 0;
            gCsFrameCount = 0;
            D_ending_80196D00 = 7;
            break;
        }
}

void func_ending_8018A828(void) {
    switch (D_ending_80196F8C) {
    case 2:
        func_ending_80187520(0);
        func_ending_801876A4();
        func_ending_80187860(0, 0);
        break;
    case 4:
        func_ending_80187520(1);
        func_ending_801876A4();
        func_ending_80187860(0, 1);
        break;
    case 6:
        func_ending_8018A2A8();
        break;
    case 7:
    case 8:
        D_ending_80196F88 = 1;
        func_ending_8018A2A8();
        D_ending_80196F88 = 4;
        func_ending_80187860(1, 0);
        func_ending_801888F4();
        func_ending_801886F4();
        break;
    }
}

void func_ending_8018A8FC(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018A8FC.s")

void func_ending_8018A96C(void) {
    gCsFrameCount++;
    gGameFrameCount++;
    switch (D_ending_80196D00) {
    case 0:
        gRadioState = 0;
        gGameFrameCount = 0;
        gOverlayStage = 0;
        D_80177978 = D_80177980 = D_80177988 = 0.0f;
        D_801779A0 = D_801779B8 = 0.0f;
        D_801779C0 = -100.0f;
        D_ending_80196D00 = 1;
        break;
    case 1:
        if (D_ending_80192E70 < 2800) {
            break;
        }
    case 2:
        D_ending_80196D00 = 3;
        gCsFrameCount = 0;
    case 3:
        if (func_ending_8018BCB0() == 0) {
            break;
        }
    case 4:
        gOverlayStage = 2;
        D_ending_80196D00 = 5;
        break;
    case 5:
        D_ending_80196F8C = 0;
        D_ending_80196D00 = 6;
    case 6:
        func_ending_8018A570();
        break;
    case 7:
        break;
    }
    func_ending_8018A8FC();
    func_ending_8018B3D8();
    func_ending_8018ABE8();
}

void func_ending_8018AAC4(void) {
    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0, 0.0f, 100.0f, 0.0f, 0U);
    switch (D_ending_80196D00) {
        case 1:
            func_ending_801926D4();
            break;
        case 3:
            func_ending_8018C21C();
            break;
        case 6:
            func_ending_8018A828();
            break;
        case 7:
            func_ending_801926D4();
            break;
    }
    func_ending_8018CE20(D_ending_80196D04);
    D_ending_80196D04++;
    func_800BB5D0();
    Matrix_Pop(&gGfxMatrix);
}

void func_ending_8018ABE8(void) {
    if (gControllerPress[3].button & Z_TRIG) {
        D_ending_80198584 ^= 1;
    }
    if (!D_ending_80198584) {
        return;
    }
    if (gControllerPress[3].button & R_TRIG) {
        D_ending_80198588++;
        if (D_ending_80198588 > 4) {
            D_ending_80198588 = 0;
        }
    }
    switch (D_ending_80198588) {
        case 0:
            if (gControllerHold[3].button & B_BUTTON) {
                gFogRed++;
                if (gFogRed > 255) {
                    gFogRed = 255;
                }
            }
            if (gControllerHold[3].button & A_BUTTON) {
                gFogRed--;
                if (gFogRed < 0) {
                    gFogRed = 0;
                }
            }
            if (gControllerHold[3].button & L_CBUTTONS) {
                gFogGreen++;
                if (gFogGreen > 255) {
                    gFogGreen = 255;
                }
            }
            if (gControllerHold[3].button & D_CBUTTONS) {
                gFogGreen--;
                if (gFogGreen < 0) {
                    gFogGreen = 0;
                }
            }
            if (gControllerHold[3].button & U_CBUTTONS) {
                gFogBlue++;
                if (gFogBlue > 255) {
                    gFogBlue = 255;
                }
            }
            if (gControllerHold[3].button & R_CBUTTONS) {
                gFogBlue--;
                if (gFogBlue < 0) {
                    gFogBlue = 0;
                }
            }
            break;
        case 1:
            if (gControllerHold[3].button & B_BUTTON) {
                gLight1R++;
                if (gLight1R > 255) {
                    gLight1R = 255;
                }
            }
            if (gControllerHold[3].button & A_BUTTON) {
                gLight1R--;
                if (gLight1R < 0) {
                    gLight1R = 0;
                }
            }
            if (gControllerHold[3].button & L_CBUTTONS) {
                gLight1G++;
                if (gLight1G > 255) {
                    gLight1G = 255;
                }
            }
            if (gControllerHold[3].button & D_CBUTTONS) {
                gLight1G--;
                if (gLight1G < 0) {
                    gLight1G = 0;
                }
            }
            if (gControllerHold[3].button & U_CBUTTONS) {
                gLight1B++;
                if (gLight1B > 255) {
                    gLight1B = 255;
                }
            }
            if (gControllerHold[3].button & R_CBUTTONS) {
                gLight1B--;
                if (gLight1B < 0) {
                    gLight1B = 0;
                }
            }
            break;
        case 2:
            if (gControllerHold[3].button & B_BUTTON) {
                gAmbientR++;
                if (gAmbientR > 255) {
                    gAmbientR = 255;
                }
            }
            if (gControllerHold[3].button & A_BUTTON) {
                gAmbientR--;
                if (gAmbientR < 0) {
                    gAmbientR = 0;
                }
            }
            if (gControllerHold[3].button & L_CBUTTONS) {
                gAmbientG++;
                if (gAmbientG > 255) {
                    gAmbientG = 255;
                }
            }
            if (gControllerHold[3].button & D_CBUTTONS) {
                gAmbientG--;
                if (gAmbientG < 0) {
                    gAmbientG = 0;
                }
            }
            if (gControllerHold[3].button & U_CBUTTONS) {
                gAmbientB++;
                if (gAmbientB > 255) {
                    gAmbientB = 255;
                }
            }
            if (gControllerHold[3].button & R_CBUTTONS) {
                gAmbientB--;
                if (gAmbientB < 0) {
                    gAmbientB = 0;
                }
            }
            break;
        case 3:
            if (gControllerHold[3].button & B_BUTTON) {
                D_801784D0 += 1.0f;
                if (D_801784D0 > 360.0f) {
                    D_801784D0 = 0.0f;
                }
            }
            if (gControllerHold[3].button & A_BUTTON) {
                D_801784D0 -= 1.0f;
                if (D_801784D0 < -360.0f) {
                    D_801784D0 = 0.0f;
                }
            }
            if (gControllerHold[3].button & L_CBUTTONS) {
                D_801784D4 += 1.0f;
                if (D_801784D4 > 360.0f) {
                    D_801784D4 = 0.0f;
                }
            }
            if (gControllerHold[3].button & D_CBUTTONS) {
                D_801784D4 -= 1.0f;
                if (D_801784D4 < -360.0f) {
                    D_801784D4 = 0.0f;
                }
            }
            if (gControllerHold[3].button & U_CBUTTONS) {
                D_801784D8 += 1.0f;
                if (D_801784D8 > 360.0f) {
                    D_801784D8 = 0.0f;
                }
            }
            if (gControllerHold[3].button & R_CBUTTONS) {
                D_801784D8 -= 1.0f;
                if (D_801784D8 < -360.0f) {
                    D_801784D8 = 0.0f;
                }
            }
            break;
        case 4:
            if (gControllerPress[3].button & B_BUTTON) {
                gFogNear++;
                if (gFogNear >= gFogFar) {
                    gFogNear = gFogFar - 1;
                }
            }
            if (gControllerPress[3].button & A_BUTTON) {
                gFogNear--;
            }
            if (gControllerPress[3].button & L_CBUTTONS) {
                gFogFar++;
            }
            if (gControllerPress[3].button & D_CBUTTONS) {
                gFogFar--;
            }
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018B174.s")

void func_ending_8018B3D8(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018B3D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018B3E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018B52C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018B624.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018B6D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018B860.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018BAD0.s")

bool func_ending_8018BCB0(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018BCB0.s")

void func_ending_8018C21C(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/func_ending_8018C21C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_ending/sf_ending_1/D_ending_80196240.s")
