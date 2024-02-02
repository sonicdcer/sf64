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

extern s32 D_ending_80192E70;

typedef struct {
    AnimationHeader* anim;
    Limb** skeleton;
    s32 setupDL;
    Vec3f pos;
    Vec3f rot;
    Vec3f scale;
    f32 unk_30;
    f32 unk_34;
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
extern s32 D_ending_80198584;
extern s32 D_ending_80198588;
extern s32 D_ending_8019858C;

AnimationHeader *D_ending_80192820[4] = { &D_60246F8, &D_60338DC, &D_6036278, &D_603531C };
Vec3f D_ending_80192830 = { 0.0f, 0.0f, 0.0f };
UnkStruct_196D08 D_ending_8019283C[4] = {
    {
        (AnimationHeader *)0x0602A710,
        (Limb **)0x0602FBAC,
        0x170000,
        { 110.0f, -520.0f, -1390.0f },
        { -20.0f, 0.0f, 0.0f },
        { 1.37f, 1.37f, 1.37f },
        1.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        (AnimationHeader *)0x0601E424,
        (Limb **)0x0603088C,
        0x170000,
        { 380.0f, -670.0f, -1840.0f },
        { -20.0f, 0.0f, 0.0f },
        { 1.37f, 1.37f, 1.37f },
        1.0f,
        4.2e-44f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        (AnimationHeader *)0x06020058,
        (Limb **)0x060313AC,
        0x170000,
        { -100.0f, -590.0f, -1630.0f },
        { -20.0f, 0.0f, 0.0f },
        { 1.37f, 1.37f, 1.37f },
        1.0f,
        2.8e-44f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        (AnimationHeader *)0x06029BE4,
        (Limb **)0x06032084,
        0x170000,
        { -330.0f, -660.0f, -1840.0f },
        { -20.0f, 0.0f, 0.0f },
        { 1.37f, 1.37f, 1.37f },
        1.0f,
        1.4e-44f,
        0,
        { 0, 0, 0, 0 },
    },
};
UnkStruct_196D08 D_ending_8019293C[4] = {
    {
        (AnimationHeader *)0x0602A710,
        (Limb **)0x0602FBAC,
        0x170000,
        { -80.0f, -400.0f, -50.0f },
        { 0.0f, 180.0f, 0.0f },
        { 0.86f, 0.86f, 0.86f },
        1.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        (AnimationHeader *)0x0601E424,
        (Limb **)0x0603088C,
        0x170000,
        { -160.0f, -400.0f, 350.0f },
        { 0.0f, 180.0f, 0.0f },
        { 0.86f, 0.86f, 0.86f },
        1.0f,
        4.2e-44f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        (AnimationHeader *)0x06020058,
        (Limb **)0x060313AC,
        0x170000,
        { 60.0f, -400.0f, 150.0f },
        { 0.0f, 180.0f, 0.0f },
        { 0.86f, 0.86f, 0.86f },
        1.0f,
        2.8e-44f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        (AnimationHeader *)0x06029BE4,
        (Limb **)0x06032084,
        0x170000,
        { 160.0f, -400.0f, 350.0f },
        { 350.0f, 180.0f, 0.0f },
        { 0.86f, 0.86f, 0.86f },
        1.0f,
        1.4e-44f,
        0,
        { 0, 0, 0, 0 },
    },
};
UnkStruct_196D08 D_ending_80192A3C[2] = {
    {
        (AnimationHeader *)0x070143C0,
        NULL,
        0x110000,
        { 0.0f, -3830.0f, -7000.0f },
        { 0.0f, 0.0f, 0.0f },
        { 1.0f, 1.0f, 1.0f },
        1.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        (AnimationHeader *)0x07018708,
        (Limb **)0x070187B4,
        0x170000,
        { 0.0f, -310.0f, -370.0f },
        { 0.0f, 0.0f, 0.0f },
        { 1.0f, 1.0f, 1.0f },
        4.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
};
Vec3f D_ending_80192ABC = { 0.0f, 0.0f, 0.0f };
UnkStruct_196D08 D_ending_80192AC8[5] = {
    {
        (AnimationHeader *)0x070111D0,
        NULL,
        0x110000,
        { 0.0f, -2960.0f, -6600.0f },
        { 0.0f, 0.0f, 0.0f },
        { 1.0f, 1.0f, 1.0f },
        1.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        &D_60338DC,
        (Limb **)0x0603088C,
        0x170000,
        { 230.0f, -370.0f, -620.0f },
        { 350.0f, 0.0f, 0.0f },
        { 1.0f, 1.0f, 1.0f },
        2.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        &D_6036278,
        (Limb **)0x060313AC,
        0x170000,
        { -120.0f, -350.0f, -600.0f },
        { 350.0f, 10.0f, 0.0f },
        { 1.0f, 1.0f, 1.0f },
        2.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        &D_603531C,
        (Limb **)0x06032084,
        0x170000,
        { -260.0f, -350.0f, -710.0f },
        { 350.0f, 10.0f, 0.0f },
        { 1.0f, 1.0f, 1.0f },
        2.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
    {
        &D_60246F8,
        (Limb **)0x0602FBAC,
        0x170000,
        { 30.0f, -330.0f, -320.0f },
        { 350.0f, 0.0f, 0.0f },
        { 1.0f, 1.0f, 1.0f },
        2.0f,
        0.0f,
        0,
        { 0, 0, 0, 0 },
    },
};
f32 D_ending_80192C08[3] = { 0.0f, 0.0f, 0.0f };
f32 D_ending_80192C14[3] = { 0.0f, 0.0f, -100.0f };
s32 D_ending_80192C20[3] = { 0x6E, 0x50, 0x28 };
s32 D_ending_80192C2C[3] = { 0, 0, 0 };
f32 D_ending_80192C38[2] = { -22.0f, 204.0f };
Vec3f D_ending_80192C40[2] = { { 2880.0f, 860.0f, -1440.0f }, { -6000.0f, 3400.0f, 3600.0f } };
Vec3f D_ending_80192C58[2] = { { 0.0f, 90.0f, 0.0f }, { 0.0f, 290.0f, 0.0f } };
Vec3f D_ending_80192C70[3] = {
    { -230.0f, -750.0f, -1300.0f },
    { 230.0f, -240.0f, -1150.0f },
    { 230.0f, -240.0f, -1450.0f },
};
Vec3f D_ending_80192C94[3] = { { 0.0f, 180.0f, 0.0f }, { 180.0f, 0.0f, 0.0f }, { 180.0f, 0.0f, 0.0f } };
Vec3f D_ending_80192CB8 = { -40.0f, -560.0f, 400.0f };
Vec3f D_ending_80192CC4 = { 0.0f, 290.0f, 0.0f };
Vec3f D_ending_80192CD0[6] = {
    { -400.0f, 500.0f, -1200.0f },
    { -160.0f, 500.0f, -1400.0f },
    { 80.0f, 500.0f, -1600.0f },
    { 320.0f, 500.0f, -1800.0f },
    { 560.0f, 500.0f, -2000.0f },
    { 800.0f, 500.0f, -2200.0f },
};
Vec3f D_ending_80192D18[6] = {
    { 0.0f, 90.0f, 0.0f },
    { 0.0f, 90.0f, 0.0f },
    { 0.0f, 90.0f, 0.0f },
    { 0.0f, 90.0f, 0.0f },
    { 0.0f, 90.0f, 0.0f },
    { 0.0f, 90.0f, 0.0f },
};
s32 D_ending_80192D60[6] = { 0x96, 0x9D, 0xA4, 0xAB, 0xB2, 0xB9 };
Vec3f D_ending_80192D78 = { 0.0f, -830.0f, -933.0f };
Vec3f D_ending_80192D84 = { 0.0f, -550.0f, -1280.0f };
s32 D_ending_80192D90[3] = { 0xF0, 0xB4, 0x36 };
s32 D_ending_80192D9C[3] = { 0x20, 0x20, 0x20 };
s32 D_ending_80192DA8[3] = { 5, 5, 8 };
Vec3f D_ending_80192DB4 = { 240.0f, -110.0f, -200.0f };
Vec3f D_ending_80192DC0 = { 0.0f, 0.0f, 100.0f };
s32 D_ending_80192DCC[3] = { 0xF0, 0xFA, 0 };
s32 D_ending_80192DD8[3] = { 0x20, 0x20, 0x20 };
s32 D_ending_80192DE4[3] = { 5, 5, 8 };
Vec3f D_ending_80192E10[3] = {
    { 0.0f, 40.0f, -2530.0f },
    { 335.0f, -92.0f, -1529.0f },
    { -335.0f, -92.0f, -1529.0f },
};
Vec3f D_ending_80192E34[2] = { { 4.0f, 1.0f, 10.0f }, { 4.4f, 1.0f, 11.0f } };
Vec3f D_ending_80192E4C[2] = { { 5.1f, 1.0f, 15.0f }, { 5.6f, 1.0f, 16.5f } };

void func_ending_80187520(s32 arg0) {
    Gfx *temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    RCP_SetupDL(&gMasterDisp, 0x4C);
    temp_v1 = gMasterDisp;
    gMasterDisp = temp_v1 + 8;
    temp_v1->words.w1 = -1U;
    temp_v1->words.w0 = 0xFA000000;
    var_s1 = 0;
    if (arg0 != 0) {
        var_s1_2 = 0;
        if (arg0 != 1) {
            return;
        }
        var_s0 = 0;
        do {
            TextureRect_16bRGBA(&gMasterDisp, D_8000000 + (var_s1_2 * 2), 0x13CU, 4U, 0.0f, (f32) var_s0, 1.0f, 1.0f);
            var_s0 += 4;
            var_s1_2 += 0x4F0;
        } while (var_s0 != 0xF0);
        return;
    }
    var_s0_2 = 0;
    do {
        TextureRect_16bRGBA(&gMasterDisp, D_8000000 + (var_s1 * 2), 0x13CU, 4U, 0.0f, (f32) var_s0_2, 1.0f, 1.0f);
        var_s0_2 += 4;
        var_s1 += 0x4F0;
    } while (var_s0_2 != 0x10C);
    TextureRect_16bRGBA(&gMasterDisp, D_8000000 + (var_s1 * 2), 0x13CU, 3U, 0.0f, (f32) var_s0_2, 1.0f, 1.0f);
}

void func_ending_801876A4(void) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    UnkStruct_196D08 *var_s0;

    var_s0 = D_ending_80196D08;
    do {
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x3E);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w1 = -0x10U;
        temp_v1->words.w0 = 0xFA000000;
        Matrix_Translate(gGfxMatrix, var_s0->pos.x, var_s0->pos.y, var_s0->pos.z, 1U);
        Matrix_Scale(gGfxMatrix, var_s0->scale.x + 4.0f, var_s0->scale.y + 4.0f, var_s0->scale.z + 4.0f, 1U);
        Matrix_RotateY(gGfxMatrix, var_s0->rot.y * 0.017453292f, 1U);
        Matrix_RotateX(gGfxMatrix, (var_s0->rot.x + 5.0f) * 0.017453292f, 1U);
        Matrix_RotateZ(gGfxMatrix, var_s0->rot.z * 0.017453292f, 1U);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (u32) D_6041070;
        temp_v1_2->words.w0 = 0x06000000;
        Matrix_Pop(&gGfxMatrix);
        var_s0 += 0x40;
    } while (var_s0 != (D_ending_80196D08 + 0x100));
}

void func_ending_80187860(s32 arg0, s32 arg1) {
    Vec3f sp88;
    s32 sp84;
    s32 sp80;
    ? sp70;
    s32 (*sp60)(s32, Gfx **, Vec3f *, Vec3f *, void *);
    Gfx *temp_a0;
    UnkStruct_196D08 *temp_v1;
    UnkStruct_196D08 *temp_v1_2;
    UnkStruct_196D08 *temp_v1_3;
    UnkStruct_196D08 *temp_v1_4;
    UnkStruct_196D08 *temp_v1_5;
    s16 var_v0;
    s32 temp_t0;
    s32 var_s3;

    sp70.unk0 = (AnimationHeader *) D_ending_80192820->unk0;
    sp70.unk4 = (s32) D_ending_80192820->unk4;
    sp70.unkC = (s32) D_ending_80192820->unkC;
    sp70.unk8 = (s32) D_ending_80192820->unk8;
    sp84 = arg0;
    if (arg0 < D_ending_80196F88) {
        sp60 = func_ending_80189C64;
        var_s3 = sp80;
        do {
            Matrix_Push(&gGfxMatrix);
            RCP_SetupDL(&gMasterDisp, D_ending_80196D08[sp84].unk8);
            temp_a0 = gMasterDisp;
            gMasterDisp = temp_a0 + 8;
            temp_a0->words.w0 = 0xFA000000;
            temp_v1 = &D_ending_80196D08[sp84];
            temp_a0->words.w1 = temp_v1->prim[3] | (temp_v1->prim[0] << 0x18) | (temp_v1->prim[1] << 0x10) | (temp_v1->prim[2] << 8);
            if ((sp84 == 1) || (sp84 == 2)) {
                temp_v1_2 = &D_ending_80196D08[sp84];
                Matrix_Translate(gGfxMatrix, temp_v1_2->pos.x, temp_v1_2->pos.y - 10.0f, temp_v1_2->pos.z, 1U);
            } else {
                temp_v1_3 = &D_ending_80196D08[sp84];
                Matrix_Translate(gGfxMatrix, temp_v1_3->pos.x, temp_v1_3->pos.y, temp_v1_3->pos.z, 1U);
            }
            temp_v1_4 = &D_ending_80196D08[sp84];
            Matrix_Scale(gGfxMatrix, temp_v1_4->scale.x, temp_v1_4->scale.y, temp_v1_4->scale.z, 1U);
            Matrix_RotateY(gGfxMatrix, D_ending_80196D08[sp84].rot.y * 0.017453292f, 1U);
            Matrix_RotateX(gGfxMatrix, D_ending_80196D08[sp84].rot.x * 0.017453292f, 1U);
            Matrix_RotateZ(gGfxMatrix, D_ending_80196D08[sp84].rot.z * 0.017453292f, 1U);
            Matrix_SetGfxMtx(&gMasterDisp);
            if ((arg1 != 0) && (gCsFrameCount >= 0x18A)) {
                switch (sp84) {                     /* irregular */
                case 0:
                    var_v0 = Animation_GetFrameData(&D_60246F8, 0, &sp88);
block_17:
                    var_s3 = (s32) var_v0;
                    break;
                case 1:
                    var_v0 = Animation_GetFrameData(&D_60338DC, 0, &sp88);
                    goto block_17;
                case 2:
                    var_v0 = Animation_GetFrameData(&D_6036278, 0, &sp88);
                    goto block_17;
                case 3:
                    var_v0 = Animation_GetFrameData(&D_603531C, 0, &sp88);
                    goto block_17;
                }
                Math_SmoothStepToVec3fArray(&sp88, D_ending_80197900[sp84], 1, var_s3, 0.1f, 100.0f, 0.01f);
            } else {
                temp_v1_5 = &D_ending_80196D08[sp84];
                Animation_GetFrameData(temp_v1_5->anim, (s32) ((u32) ((f32) temp_v1_5->unk_34 * temp_v1_5->unk_30) % Animation_GetFrameCount(D_ending_80196D08[sp84].anim)), D_ending_80197900[sp84]);
            }
            Animation_DrawSkeleton(0, D_ending_80196D08[sp84].skeleton, D_ending_80197900[sp84], sp60, NULL, &sp84, &gIdentityMatrix);
            Matrix_Pop(&gGfxMatrix);
            temp_t0 = sp84 + 1;
            sp84 = temp_t0;
        } while (temp_t0 < D_ending_80196F88);
        sp80 = var_s3;
    }
}

void func_ending_80187D3C(s32 arg0) {
    ? sp23C;
    ? sp13C;
    ? sp3C;
    ? *var_a1;
    ? *var_a1_2;
    UnkStruct_196D08 *var_v1;
    UnkStruct_196D08 *var_v1_2;
    Vec3f (*var_a2)[0x32];
    Vec3f (*var_t4)[0x32];
    Vec3f *var_a3;
    Vec3f *var_t0;
    Vec3f *var_t1;
    Vec3f *var_t2;
    Vec3f *var_t5;
    f32 (*var_a0)[0x32];
    f32 (*var_t3)[0x32];
    f32 *var_a1_3;
    s32 temp_at;
    s32 temp_at_2;
    s32 var_v1_3;
    u8 *temp_t6;
    u8 *temp_t8;
    void *temp_a2;
    void *temp_a2_2;

    sp23C.unk0 = (f32) D_ending_80192830.x;
    sp23C.unk4 = (f32) D_ending_80192830.y;
    sp23C.unk8 = (f32) D_ending_80192830.z;
    M2C_MEMCPY_ALIGNED(&sp13C, D_ending_8019283C, 0xFC);
    *(&sp13C + 0xFC) = *(D_ending_8019283C + 0xFC);
    M2C_MEMCPY_ALIGNED(&sp3C, D_ending_8019293C, 0xFC);
    var_t5 = &D_ending_80196FA0[0][1];
    *(&sp3C + 0xFC) = *(D_ending_8019293C + 0xFC);
    D_ending_80196F88 = 4;
    switch (arg0) {                                 /* irregular */
    case 0:
        var_v1 = D_ending_80196D08;
        var_a1 = &sp13C;
        if (D_ending_80196F88 > 0) {
            temp_a2 = (D_ending_80196F88 << 6) + var_a1;
            do {
                M2C_MEMCPY_ALIGNED(var_v1, var_a1, 0x3C);
                temp_t8 = var_v1->prim;
                temp_at = *(var_a1 + 0x3C);
                var_a1 += 0x40;
                var_v1 += 0x40;
                *temp_t8 = temp_at;
            } while ((u32) var_a1 < (u32) temp_a2);
        }
        D_ending_80196F9C = 0.004f;
        break;
    case 1:
        var_v1_2 = D_ending_80196D08;
        var_a1_2 = &sp3C;
        if (D_ending_80196F88 > 0) {
            temp_a2_2 = (D_ending_80196F88 << 6) + var_a1_2;
            do {
                M2C_MEMCPY_ALIGNED(var_v1_2, var_a1_2, 0x3C);
                temp_t6 = var_v1_2->prim;
                temp_at_2 = *(var_a1_2 + 0x3C);
                var_a1_2 += 0x40;
                var_v1_2 += 0x40;
                *temp_t6 = temp_at_2;
            } while ((u32) var_a1_2 < (u32) temp_a2_2);
        }
        D_ending_80196F9C = 0.003f;
        break;
    }
    var_t4 = D_ending_80196FA0;
    var_t3 = D_ending_80198260;
    var_a0 = D_ending_80198260;
    var_a2 = D_ending_80196FA0;
    do {
        var_t4[0][0].x = sp23C.unk0;
        var_t4[0][0].y = sp23C.unk4;
        var_a3 = &var_a2[0][2];
        var_t4[0][0].z = sp23C.unk8;
        var_t0 = var_a3 + 0xC;
        var_t1 = var_a3 + 0x18;
        var_t5->x = sp23C.unk0;
        var_t2 = var_a3 + 0x24;
        var_t3[0][0] = 0.0f;
        var_t3[0][1] = 0.0f;
        var_v1_3 = 2;
        var_a1_3 = &var_a0[0][2];
        var_t5->y = sp23C.unk4;
        var_t5->z = sp23C.unk8;
loop_13:
        var_a3->x = sp23C.unk0;
        var_a3->y = sp23C.unk4;
        var_a3->z = sp23C.unk8;
        var_t0->y = sp23C.unk4;
        var_t0->x = sp23C.unk0;
        var_v1_3 += 4;
        var_a1_3->unk4 = 0;
        var_t0->z = sp23C.unk8;
        var_t1->y = sp23C.unk4;
        var_a1_3->unk8 = 0;
        var_t1->x = sp23C.unk0;
        var_a1_3->unkC = 0;
        var_a1_3 += 0x10;
        var_t1->z = sp23C.unk8;
        var_a3 += 0x30;
        var_t0 += 0x30;
        var_t2->x = sp23C.unk0;
        var_t1 += 0x30;
        var_t2 += 0x30;
        var_a1_3->unk-10 = 0;
        var_t2->unk-2C = (f32) sp23C.unk4;
        var_t2->unk-28 = (f32) sp23C.unk8;
        if (var_v1_3 != 0x32) {
            goto loop_13;
        }
        var_t5 += 0x258;
        var_a0 += 0xC8;
        var_a2 += 0x258;
        var_t3 += 0xC8;
        var_t4 += 0x258;
    } while (var_t5 != &D_ending_80197900[0][1]);
}

void func_ending_80188030(s32 arg0) {
    f32 sp30;
    f32 sp2C;
    UnkStruct_196D08 *var_v0;
    f32 var_fa0;
    f32 var_fa1;

    if (arg0 != 0) {
        if (arg0 != 1) {
            var_fa1 = sp30;
            var_fa0 = sp2C;
        } else {
            var_fa1 = 0.0f;
            var_fa0 = fabsf(1970.0f) * D_ending_80196F9C;
        }
    } else {
        var_fa0 = fabsf(-900.0f) * D_ending_80196F9C * -1.0f;
        var_fa1 = fabsf(-320.0f) * D_ending_80196F9C;
    }
    if ((arg0 == 1) && (gCsFrameCount >= 0x18A)) {
        sp2C = var_fa0;
        sp30 = var_fa1;
        Math_SmoothStepToF(&D_ending_80196F9C, 0.0f, 0.1f, 1.0f, 0.0001f);
    }
    if (D_ending_80196F88 > 0) {
        var_v0 = D_ending_80196D08;
        do {
            var_v0->pos.z -= var_fa0;
            var_v0->pos.y += var_fa1;
            if ((arg0 != 1) || (gCsFrameCount < 0x18A)) {
                var_v0->unk_34 = (bitwise f32) ((bitwise s32) var_v0->unk_34 + 1);
            }
            var_v0 += 0x40;
        } while ((u32) var_v0 < (u32) &D_ending_80196D08[D_ending_80196F88]);
    }
    if (((gCsFrameCount >= 0x96) && (gCsFrameCount < 0xAB)) || ((gCsFrameCount >= 0x118) && (gCsFrameCount < 0x12D)) || ((gCsFrameCount >= 0x154) && (gCsFrameCount < 0x169))) {
        Math_SmoothStepToF(&(D_ending_80196FA0 + 0x4B0)[0][0].x, 40.0f, 0.2f, 1000.0f, 0.1f);
        Math_SmoothStepToF(D_ending_80196FA0 + 0x4B4, 10.0f, 0.2f, 1000.0f, 0.1f);
        Math_SmoothStepToF(D_ending_80196FA0 + 0x4FC, 0.0f, 0.2f, 1000.0f, 0.1f);
        return;
    }
    if ((arg0 == 1) && (gCsFrameCount >= 0xC8) && (gCsFrameCount < 0x105)) {
        Math_SmoothStepToF(&(D_ending_80196FA0 + 0x4B0)[0][0].x, 60.0f, 0.1f, 1000.0f, 0.1f);
        return;
    }
    if (((arg0 == 1) && (gCsFrameCount >= 0xAA) && (gCsFrameCount < 0xBF)) || ((gCsFrameCount >= 0x12C) && (gCsFrameCount < 0x141))) {
        Math_SmoothStepToF(&(D_ending_80196FA0 + 0x4B0)[0][0].x, -40.0f, 0.2f, 1000.0f, 0.1f);
        Math_SmoothStepToF(D_ending_80196FA0 + 0x4B4, 10.0f, 0.2f, 1000.0f, 0.1f);
        Math_SmoothStepToF(D_ending_80196FA0 + 0x4FC, 0.0f, 0.2f, 1000.0f, 0.1f);
        return;
    }
    Math_SmoothStepToF(&(D_ending_80196FA0 + 0x4B0)[0][0].x, 0.0f, 0.2f, 1000.0f, 0.1f);
    Math_SmoothStepToF(D_ending_80196FA0 + 0x4B4, 0.0f, 0.2f, 1000.0f, 0.1f);
    Math_SmoothStepToF(D_ending_80196FA0 + 0x4FC, 0.0f, 0.2f, 1000.0f, 0.1f);
}

UnkStruct_196D08 *func_ending_80188394(void) {
    ? sp14;
    ? *var_a0;
    UnkStruct_196D08 *var_v0;
    s32 temp_at;
    u8 *temp_t8;
    void *temp_a1;
    void *temp_t6;
    void *temp_t7;

    M2C_MEMCPY_ALIGNED(&sp14, D_ending_80192A3C, 0x78);
    temp_t6 = &sp14 + 0x78;
    temp_t7 = D_ending_80192A3C + 0x78;
    temp_t6->unk0 = (s32) temp_t7->unk0;
    temp_t6->unk4 = (s32) temp_t7->unk4;
    D_ending_80196F88 = 2;
    var_v0 = NULL;
    if (2 > 0) {
        var_a0 = &sp14;
        temp_a1 = (2 << 6) + var_a0;
        var_v0 = D_ending_80196D08;
        do {
            M2C_MEMCPY_ALIGNED(var_v0, var_a0, 0x3C);
            temp_t8 = var_v0->prim;
            temp_at = *(var_a0 + 0x3C);
            var_a0 += 0x40;
            var_v0 += 0x40;
            *temp_t8 = temp_at;
        } while ((u32) var_a0 < (u32) temp_a1);
    }
    return var_v0;
}

void func_ending_8018845C(void) {
    s32 sp1C;
    s32 var_a2;
    u32 temp_a3;

    var_a2 = 0;
    do {
        if (var_a2 != D_ending_8019858C) {

        }
        var_a2 += 1;
    } while (var_a2 != 2);
    D_80178300 = 1;
    switch (gCsFrameCount) {                        /* irregular */
    case 0xA:
        sp1C = var_a2;
        Radio_PlayMessage(gMsg_ID_21010, RCID_GEN_PEPPER_TITLE);
block_8:
        var_a2 = sp1C;
        break;
    case 0x6E:
        sp1C = var_a2;
        Radio_PlayMessage(gMsg_ID_21020, RCID_GEN_PEPPER_TITLE);
        goto block_8;
    }
    sp1C = var_a2;
    temp_a3 = (u32) ((f32) D_ending_80196D08->unk74 * D_ending_80196D08[var_a2].unk_30) % Animation_GetFrameCount(D_ending_80196D08->unk40);
    if (((gCsFrameCount >= 0x14) && (gCsFrameCount < 0x1F)) || ((gCsFrameCount >= 0x32) && (gCsFrameCount < 0x47)) || ((gCsFrameCount >= 0x6E) && (gCsFrameCount < 0x8D)) || ((gCsFrameCount >= 0xA0) && (gCsFrameCount < 0xBF))) {
        D_ending_80196D08->unk74 = (s32) (D_ending_80196D08->unk74 + 1);
        return;
    }
    if (temp_a3 != 0) {
        D_ending_80196D08->unk74 = (s32) (D_ending_80196D08->unk74 + 1);
    }
}

s32 func_ending_80188634(void) {
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = D_80161690;
    if (temp_v0 != 0) {
        temp_v1 = D_ending_80196F90;
        if ((temp_v1 % 14) == 0) {
            Audio_PlaySfx(0x49002018U, D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        D_ending_80196F90 = temp_v1 + 1;
        temp_t9 = temp_v0 - 1;
        D_80161690 = temp_t9;
        if (temp_t9 == 0) {
            func_8001A838(0x49002018U);
        }
    } else {
        D_ending_80196F90 = 0;
    }
    return 0;
}

void func_ending_801886F4(void) {
    Gfx *temp_v1;
    s32 temp_t1;

    if (D_80161690 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x4E);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w1 = -1U;
        temp_v1->words.w0 = 0xFA000000;
        temp_t1 = (s32) ((s32) D_ending_80196F90 % 8) / 2;
        if (temp_t1 != 0) {
            if (temp_t1 != 1) {
                if (temp_t1 != 2) {
                    if (temp_t1 == 3) {
                        TextureRect_4bCI(&gMasterDisp, D_70110E0, D_70111B0, 0x10U, 0x1AU, 142.0f + 31.0f, 18.0f, 1.0f, 1.0f);
                        goto block_6;
                    }
                } else {
block_6:
                    TextureRect_4bCI(&gMasterDisp, D_7010FF0, D_70110C0, 0x10U, 0x1AU, 142.0f + 24.0f, 18.0f, 1.0f, 1.0f);
                    goto block_7;
                }
            } else {
block_7:
                TextureRect_4bCI(&gMasterDisp, D_7010F00, D_7010FD0, 0x10U, 0x1AU, 142.0f + 18.0f, 18.0f, 1.0f, 1.0f);
                goto block_8;
            }
        } else {
block_8:
            TextureRect_4bCI(&gMasterDisp, D_7010E10, D_7010EE0, 0x10U, 0x1AU, 142.0f, 18.0f, 1.0f, 1.0f);
        }
    }
}

void func_ending_801888F4(void) {
    s32 sp29C;
    s32 sp294;
    Vec3f sp3C;
    UnkStruct_196D08 *temp_s0;
    UnkStruct_196D08 *temp_s0_2;
    UnkStruct_196D08 *temp_s0_3;
    UnkStruct_196D08 *temp_s0_4;
    UnkStruct_196D08 *var_s0;
    s16 temp_s0_5;
    s32 temp_ft3;
    s32 temp_v0;
    s32 var_a1;

    sp29C = 4;
    Matrix_Push(&gGfxMatrix);
    RCP_SetupDL(&gMasterDisp, *(&D_ending_80196D08->setupDL + (sp29C << 6)));
    temp_s0 = &D_ending_80196D08[sp29C];
    Matrix_Translate(gGfxMatrix, temp_s0->pos.x, temp_s0->pos.y, temp_s0->pos.z, 1U);
    temp_s0_2 = &D_ending_80196D08[sp29C];
    Matrix_Scale(gGfxMatrix, temp_s0_2->scale.x, temp_s0_2->scale.y, temp_s0_2->scale.z, 1U);
    Matrix_RotateY(gGfxMatrix, *(&D_ending_80196D08->rot.y + (sp29C << 6)) * 0.017453292f, 1U);
    Matrix_RotateX(gGfxMatrix, *(&D_ending_80196D08->rot + (sp29C << 6)) * 0.017453292f, 1U);
    Matrix_SetGfxMtx(&gMasterDisp);
    var_s0 = &D_ending_80196D08[sp29C];
    temp_v0 = var_s0->unk_38;
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_s0_3 = &D_ending_80196D08[sp29C];
        Animation_GetFrameData(temp_s0_3->anim, (s32) ((u32) ((f32) temp_s0_3->unk_34 * temp_s0_3->unk_30) % Animation_GetFrameCount(var_s0->anim)), *D_ending_80197900);
        var_s0 = &D_ending_80196D08[sp29C];
        break;
    case 1:
        temp_ft3 = (s32) (var_s0->unk_30 * (f32) var_s0->unk_34);
        sp294 = temp_ft3;
        var_a1 = temp_ft3;
        if (var_a1 >= Animation_GetFrameCount(&D_601F8E0)) {
            var_a1 = Animation_GetFrameCount(&D_601F8E0) - 1;
        }
        Math_SmoothStepToVec3fArray(&sp3C, *D_ending_80197900, 1, Animation_GetFrameData(&D_601F8E0, var_a1, &sp3C), 0.2f, 100.0f, 0.01f);
        var_s0 = &D_ending_80196D08[sp29C];
        break;
    case 2:
        temp_s0_4 = &D_ending_80196D08[sp29C];
        temp_s0_5 = Animation_GetFrameData(&D_60246F8, (s32) ((u32) ((f32) temp_s0_4->unk_34 * temp_s0_4->unk_30) % Animation_GetFrameCount(var_s0->anim)), &sp3C);
        Math_SmoothStepToF(&D_ending_80198580, 1.0f, 0.01f, 1.0f, 0.05f);
        Math_SmoothStepToVec3fArray(&sp3C, *D_ending_80197900, 1, (s32) temp_s0_5, D_ending_80198580, 100.0f, 0.01f);
        var_s0 = &D_ending_80196D08[sp29C];
        break;
    }
    Animation_DrawSkeleton(0, var_s0->skeleton, *D_ending_80197900, func_ending_80189C64, NULL, &sp29C, &gIdentityMatrix);
    Matrix_Pop(&gGfxMatrix);
}

void func_ending_80188DB4(void) {
    ? sp1B4;
    ? sp74;
    ? *var_a2;
    UnkStruct_196D08 *var_a0;
    Vec3f (*var_a1)[0x32];
    Vec3f (*var_s3)[0x32];
    Vec3f (*var_s5)[0x32];
    Vec3f (*var_t1)[0x32];
    Vec3f *var_a2_2;
    Vec3f *var_s0;
    Vec3f *var_s1;
    Vec3f *var_s2;
    Vec3f *var_s6;
    Vec3f *var_s7;
    Vec3f *var_t2;
    Vec3f *var_t3;
    Vec3f *var_t4;
    Vec3f *var_t5;
    f32 (*var_a3)[0x32];
    f32 (*var_s4)[0x32];
    f32 *var_t0;
    s32 temp_at;
    s32 var_a0_2;
    u8 *temp_t9;
    void *temp_a3;
    void *temp_t7;
    void *temp_t8;

    sp1B4.unk0 = (f32) D_ending_80192ABC.x;
    sp1B4.unk4 = (f32) D_ending_80192ABC.y;
    var_s6 = &D_ending_80197900[0][1];
    sp1B4.unk8 = (f32) D_ending_80192ABC.z;
    M2C_MEMCPY_ALIGNED(&sp74, D_ending_80192AC8, 0x138);
    temp_t8 = &sp74 + 0x138;
    temp_t7 = D_ending_80192AC8 + 0x138;
    temp_t8->unk0 = (s32) temp_t7->unk0;
    temp_t8->unk4 = (s32) temp_t7->unk4;
    D_ending_80196F88 = 5;
    if (5 > 0) {
        var_a2 = &sp74;
        temp_a3 = (5 << 6) + var_a2;
        var_a0 = D_ending_80196D08;
        do {
            M2C_MEMCPY_ALIGNED(var_a0, var_a2, 0x3C);
            temp_t9 = var_a0->prim;
            temp_at = *(var_a2 + 0x3C);
            var_a2 += 0x40;
            var_a0 += 0x40;
            *temp_t9 = temp_at;
        } while ((u32) var_a2 < (u32) temp_a3);
    }
    var_s5 = D_ending_80196FA0;
    var_s4 = D_ending_80198260;
    var_s3 = D_ending_80197900;
    var_s7 = &D_ending_80196FA0[0][1];
    var_a1 = D_ending_80197900;
    var_a3 = D_ending_80198260;
    var_t1 = D_ending_80196FA0;
    do {
        var_s3[0][0].x = sp1B4.unk0;
        var_s3[0][0].y = sp1B4.unk4;
        var_s5[0][0].y = sp1B4.unk4;
        var_s3[0][0].z = sp1B4.unk8;
        var_s5[0][0].x = sp1B4.unk0;
        var_a2_2 = &var_a1[0][2];
        var_t2 = &var_t1[0][2];
        var_s5[0][0].z = sp1B4.unk8;
        var_t4 = var_t2 + 0xC;
        var_s0 = var_t2 + 0x18;
        var_s6->x = sp1B4.unk0;
        var_s2 = var_t2 + 0x24;
        var_t3 = var_a2_2 + 0xC;
        var_s6->z = sp1B4.unk8;
        var_t5 = var_a2_2 + 0x18;
        var_s1 = var_a2_2 + 0x24;
        var_s7->x = sp1B4.unk0;
        var_s4[0][0] = 0.0f;
        var_s4[0][1] = 0.0f;
        var_a0_2 = 2;
        var_t0 = &var_a3[0][2];
        var_s7->y = sp1B4.unk4;
        var_s6->y = sp1B4.unk4;
        var_s7->z = sp1B4.unk8;
loop_5:
        var_a2_2->x = sp1B4.unk0;
        var_a2_2->y = sp1B4.unk4;
        var_t2->y = sp1B4.unk4;
        var_a2_2->z = sp1B4.unk8;
        var_t2->x = sp1B4.unk0;
        var_t3->y = sp1B4.unk4;
        var_t2->z = sp1B4.unk8;
        var_t4->y = sp1B4.unk4;
        var_t3->x = sp1B4.unk0;
        var_a0_2 += 4;
        var_t0->unk4 = 0;
        var_t3->z = sp1B4.unk8;
        var_t5->y = sp1B4.unk4;
        var_t4->x = sp1B4.unk0;
        var_t0->unk8 = 0;
        var_t0->unkC = 0;
        var_t4->z = sp1B4.unk8;
        var_s0->y = sp1B4.unk4;
        var_t5->x = sp1B4.unk0;
        var_a2_2 += 0x30;
        var_t0 += 0x10;
        var_t5->z = sp1B4.unk8;
        var_t2 += 0x30;
        var_t3 += 0x30;
        var_s0->x = sp1B4.unk0;
        var_t4 += 0x30;
        var_t5 += 0x30;
        var_s0->z = sp1B4.unk8;
        var_s0 += 0x30;
        var_s1 += 0x30;
        var_s1->unk-30 = (f32) sp1B4.unk0;
        var_s2 += 0x30;
        var_t0->unk-10 = 0;
        var_s1->unk-28 = (f32) sp1B4.unk8;
        var_s1->unk-2C = (f32) sp1B4.unk4;
        var_s2->unk-2C = (f32) sp1B4.unk4;
        var_s2->unk-30 = (f32) sp1B4.unk0;
        var_s2->unk-28 = (f32) sp1B4.unk8;
        if (var_a0_2 != 0x32) {
            goto loop_5;
        }
        var_s7 += 0x258;
        var_a1 += 0x258;
        var_a3 += 0xC8;
        var_t1 += 0x258;
        var_s3 += 0x258;
        var_s4 += 0xC8;
        var_s5 += 0x258;
        var_s6 += 0x258;
    } while (var_s7 != &D_ending_80197900[0][1]);
    D_80161690 = 0;
    D_ending_80196F94 = 0;
    D_ending_80196F98 = 0;
    D_ending_80198580 = 0.0f;
    D_ending_80196F88 = 4;
}

void func_ending_80189108(void) {
    f32 temp_ft0;
    f32 temp_ft2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 temp_a0;
    u32 temp_a0_2;

    temp_v1 = D_ending_80196D08->unk138;
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_80178300 = 1;
        switch (gCsFrameCount) {                    /* switch 1; irregular */
        case 0x1E:                                  /* switch 1 */
            Radio_PlayMessage(gMsg_ID_21030, RCID_FOX);
            break;
        case 0x3C:                                  /* switch 1 */
            D_ending_80196F94 = 0x14;
            break;
        case 0x64:                                  /* switch 1 */
            D_ending_80196F94 = 0x14;
            break;
        case 0x78:                                  /* switch 1 */
            D_ending_80196F98 = 0x1E;
            break;
        case 0x82:                                  /* switch 1 */
            D_ending_80196F94 = 0x14;
            break;
        case 0xAA:                                  /* switch 1 */
            D_ending_80196F94 = 0x14;
            break;
        }
        if ((temp_v1 == 0) && (gCsFrameCount == 0xB4)) {
            D_80161690 = 0x78;
            gRadioState = 0;
        }
        if ((func_ending_80188634() != 0) || (gCsFrameCount == 0xE6)) {
            D_ending_80196D08->unk134 = 0;
            D_ending_80196D08->unk138 = 1;
            gCsFrameCount = 0;
            func_8001A838(0x49002018U);
            D_ending_80196F90 = 0;
            D_80161690 = 0;
        }
        temp_a0 = (u32) ((f32) D_ending_80196D08->unk134 * D_ending_80196D08->unk130) % Animation_GetFrameCount(D_ending_80196D08->unk100);
        if (((gCsFrameCount >= 0x1E) && (gCsFrameCount < 0x29)) || ((gCsFrameCount >= 0x3C) && (gCsFrameCount < 0x6F))) {
            D_ending_80196D08->unk134 = (s32) (D_ending_80196D08->unk134 + 1);
        } else if (temp_a0 != 0) {
            D_ending_80196D08->unk134 = (s32) (D_ending_80196D08->unk134 + 1);
        }
        break;
    case 1:
        temp_v1_2 = gCsFrameCount;
        D_80178300 = 0;
        if (temp_v1_2 == 0x14) {
            Radio_PlayMessage(gMsg_ID_21050, RCID_ROB64_TITLE);
        }
        if (temp_v1_2 == 0x82) {
            D_ending_80196D08->unk134 = 0;
            D_ending_80196D08->unk138 = 2;
            gCsFrameCount = 0;
        }
        D_ending_80196D08->unk134 = (s32) (D_ending_80196D08->unk134 + 1);
        break;
    case 2:
        D_80178300 = 1;
        switch (gCsFrameCount) {                    /* switch 2; irregular */
        case 0x14:                                  /* switch 2 */
            Radio_PlayMessage(gMsg_ID_21060, RCID_FOX);
            break;
        case 0x50:                                  /* switch 2 */
            D_80178358 = 0xFF;
            break;
        }
        temp_a0_2 = (u32) ((f32) D_ending_80196D08->unk134 * D_ending_80196D08->unk130) % Animation_GetFrameCount(D_ending_80196D08->unk100);
        if ((gCsFrameCount >= 0x14) && (gCsFrameCount < 0x33)) {
            D_ending_80196D08->unk134 = (s32) (D_ending_80196D08->unk134 + 1);
        } else if (temp_a0_2 != 0) {
            D_ending_80196D08->unk134 = (s32) (D_ending_80196D08->unk134 + 1);
        }
        break;
    }
    if (D_ending_80196F94 != 0) {
        D_ending_80196F94 -= 1;
    }
    temp_v1_3 = D_ending_80196F98;
    if (temp_v1_3 != 0) {
        D_ending_80196F98 = temp_v1_3 - 1;
    }
    if ((D_80161690 == 0) && (D_ending_80196F94 != 0)) {
        if (D_ending_80198260->unkCC == 0) {
            temp_ft0 = *(D_ending_80196FA0 + 0x264) - 2.4f;
            *(D_ending_80196FA0 + 0x264) = temp_ft0;
            *(D_ending_80196FA0 + 0x26C) = *(D_ending_80196FA0 + 0x26C) - 12.0f;
            if (temp_ft0 <= -6.0f) {
                D_ending_80198260->unkCC = 1;
            }
        } else {
            temp_ft2 = *(D_ending_80196FA0 + 0x264) + 2.4f;
            *(D_ending_80196FA0 + 0x264) = temp_ft2;
            *(D_ending_80196FA0 + 0x26C) = *(D_ending_80196FA0 + 0x26C) + 12.0f;
            if (temp_ft2 >= 0.0f) {
                D_ending_80198260->unkCC = 0;
            }
        }
    }
    if ((D_80161690 == 0) && (temp_v1_3 != 0)) {
        if (D_ending_80198260->unk190 == 0) {
            Math_SmoothStepToF(D_ending_80196FA0 + 0x4B4, -10.0f, 0.4f, 100.0f, 0.1f);
            if (*(D_ending_80196FA0 + 0x4B4) <= -10.0f) {
                D_ending_80198260->unk190 = 1;
            }
        } else {
            Math_SmoothStepToF(D_ending_80196FA0 + 0x4B4, 10.0f, 0.4f, 100.0f, 0.1f);
            if (*(D_ending_80196FA0 + 0x4B4) >= 10.0f) {
                D_ending_80198260->unk190 = 0;
            }
        }
        D_ending_80196D08->unkF4 = (s32) (D_ending_80196D08->unkF4 + 2);
    }
    if ((temp_v1_3 == 0) && (D_ending_80196D08->unk138 != 2) && (((u32) ((f32) D_ending_80196D08->unkF4 * D_ending_80196D08->unkF0) % Animation_GetFrameCount(D_ending_80196D08->unkC0)) != 0)) {
        D_ending_80196D08->unkF4 = (s32) (D_ending_80196D08->unkF4 + 2);
    }
    if (D_ending_80196D08->unk138 != 2) {
        temp_v0 = D_80161690;
        if ((temp_v0 != 0) && (temp_v0 < 0x79)) {
            Math_SmoothStepToF(&(D_ending_80196FA0 + 0x258)[0][0].x, -50.0f, 0.2f, 1000.0f, 0.01f);
            Math_SmoothStepToF(D_ending_80196FA0 + 0x260, 18.0f, 0.2f, 1000.0f, 0.01f);
        }
        if ((temp_v0 != 0) && (temp_v0 < 0x74)) {
            Math_SmoothStepToF(&(D_ending_80196FA0 + 0x708)[0][0].x, 20.0f, 0.2f, 1000.0f, 0.01f);
        }
        if ((temp_v0 != 0) && (temp_v0 < 0x6F)) {
            Math_SmoothStepToF(&(D_ending_80196FA0 + 0x4B0)[0][0].x, 20.0f, 0.2f, 1000.0f, 0.01f);
            Math_SmoothStepToF(D_ending_80196FA0 + 0x4B4, 20.0f, 0.2f, 1000.0f, 0.01f);
        }
        if ((D_ending_80196F94 == 0) && (D_80161690 == 0)) {
            Math_SmoothStepToF(&(D_ending_80196FA0 + 0x258)[0][0].x, 0.0f, 0.2f, 1000.0f, 0.01f);
            Math_SmoothStepToF(D_ending_80196FA0 + 0x260, 0.0f, 0.2f, 1000.0f, 0.01f);
        }
        if ((D_ending_80196F98 == 0) && (D_80161690 == 0)) {
            Math_SmoothStepToF(&(D_ending_80196FA0 + 0x708)[0][0].x, 0.0f, 0.2f, 1000.0f, 0.01f);
            Math_SmoothStepToF(&(D_ending_80196FA0 + 0x4B0)[0][0].x, 0.0f, 0.2f, 1000.0f, 0.01f);
            Math_SmoothStepToF(D_ending_80196FA0 + 0x4B4, 0.0f, 0.2f, 1000.0f, 0.01f);
        }
    }
    *(D_ending_80196FA0 + 0x4D0) = -6.0f;
    *(D_ending_80196FA0 + 0x4B8) = 6.0f;
    if ((D_ending_80196D08->unk138 == 2) && (gCsFrameCount >= 0x3C)) {
        Math_SmoothStepToF(&(D_ending_80196FA0 + 0x258)[0][0].x, -40.0f, 0.2f, 1000.0f, 0.01f);
        Math_SmoothStepToF(D_ending_80196FA0 + 0x260, 18.0f, 0.2f, 1000.0f, 0.01f);
        Math_SmoothStepToF(D_ending_80196FA0 + 0x294, -12.0f, 0.2f, 1000.0f, 0.01f);
        Math_SmoothStepToF(D_ending_80196FA0 + 0x29C, -6.0f, 0.2f, 1000.0f, 0.01f);
        if (gCsFrameCount < 0x5B) {
            D_ending_80196D08->unkF4 = (s32) (D_ending_80196D08->unkF4 + 2);
        } else if (((u32) ((f32) D_ending_80196D08->unkF4 * D_ending_80196D08->unkF0) % Animation_GetFrameCount(D_ending_80196D08->unkC0)) != 0) {
            D_ending_80196D08->unkF4 = (s32) (D_ending_80196D08->unkF4 + 2);
        }
        Math_SmoothStepToF(&(D_ending_80196FA0 + 0x708)[0][0].x, 0.0f, 0.2f, 1000.0f, 0.01f);
    }
}

s32 func_ending_80189C64(s32 limbIndex, Gfx **dList, Vec3f *pos, Vec3f *rot, void *data) {
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Vec3f *temp_v1;
    Vec3f *temp_v1_2;
    Vec3f *temp_v1_3;
    Vec3f *temp_v1_4;
    Vec3f *temp_v1_5;
    Vec3f *temp_v1_6;
    Vec3f *temp_v1_7;
    Vec3f *temp_v1_8;
    f32 var_ft5;
    s32 temp_v0;

    temp_v0 = *data;
    if (temp_v0 == 3) {
        temp_a0 = gMasterDisp;
        gMasterDisp = temp_a0 + 8;
        temp_a0->words.w1 = 0x2000;
        temp_a0->words.w0 = 0xB7000000;
    }
    switch (limbIndex) {
    case 1:
        if (temp_v0 == 2) {
            temp_v1 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1->unk18;
            rot->y += temp_v1->unk1C;
            rot->z += temp_v1->unk20;
        }
        break;
    case 2:
        if (temp_v0 == 1) {
            temp_v1_2 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1_2->unkC;
            rot->y += temp_v1_2->unk10;
            var_ft5 = rot->z + temp_v1_2->unk14;
block_26:
            rot->z = var_ft5;
        }
        break;
    case 6:
        if (temp_v0 == 2) {
            temp_v1_3 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1_3->unk24;
            rot->y += temp_v1_3->unk28;
            rot->z += temp_v1_3->unk2C;
        }
        break;
    case 9:
        if (temp_v0 == 2) {
            temp_v1_4 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1_4->unk30;
            rot->y += temp_v1_4->unk34;
            var_ft5 = rot->z + temp_v1_4->unk38;
            goto block_26;
        }
        break;
    case 17:
        if (temp_v0 == 2) {
            temp_v1_5 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1_5->x;
            rot->y += temp_v1_5->y;
            rot->z += temp_v1_5->z;
        }
        break;
    case 19:
        if ((temp_v0 != 1) && (temp_v0 != 3)) {
            if (temp_v0 == 0) {
                goto block_19;
            }
        } else {
block_19:
            temp_v1_6 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1_6->x;
            rot->y += temp_v1_6->y;
            rot->z += temp_v1_6->z;
        }
        if (temp_v0 == 2) {
            temp_v1_7 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1_7->unk48;
            rot->y += temp_v1_7->unk4C;
            rot->z += temp_v1_7->unk50;
        }
        break;
    case 20:
        if (temp_v0 == 3) {
            temp_a0_2 = gMasterDisp;
            gMasterDisp = temp_a0_2 + 8;
            temp_a0_2->words.w1 = 0x2000;
            temp_a0_2->words.w0 = 0xB6000000;
        }
        if (temp_v0 == 1) {
            temp_v1_8 = D_ending_80196FA0[temp_v0];
            rot->x += temp_v1_8->unk3C;
            rot->y += temp_v1_8->unk40;
            var_ft5 = rot->z + temp_v1_8->unk44;
            goto block_26;
        }
        break;
    }
    return 0;
}

void func_ending_8018A024(void) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    Vec3f sp18;

    sp28 = 0.0f;
    sp24 = 0.0f;
    sp2C = -100.0f;
    Matrix_RotateX(gCalcMatrix, D_801784D0 * 0.017453292f, 0U);
    Matrix_RotateY(gCalcMatrix, D_801784D4 * 0.017453292f, 1U);
    Matrix_RotateZ(gCalcMatrix, D_801784D8 * 0.017453292f, 1U);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp24, &sp18);
    gLight1x = (s32) (bitwise f32) sp18;
    gLight1y = (s32) sp18.y;
    gLight1z = (s32) sp18.z;
}

void func_ending_8018A124(s32 arg0) {
    ? sp2C;
    ? sp20;
    ? sp14;
    ? sp8;
    s32 temp_v0;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_t0;
    void *temp_v1;

    sp2C.unk0 = (f32) D_ending_80192C08->unk0;
    sp2C.unk4 = (s32) D_ending_80192C08->unk4;
    sp2C.unk8 = (s32) D_ending_80192C08->unk8;
    temp_v0 = arg0 * 0xC;
    temp_v1 = &sp2C + temp_v0;
    sp20.unk0 = (f32) D_ending_80192C14->unk0;
    temp_a1 = &sp20 + temp_v0;
    sp20.unk4 = (s32) D_ending_80192C14->unk4;
    sp20.unk8 = (s32) D_ending_80192C14->unk8;
    temp_a2 = &sp14 + temp_v0;
    temp_a3 = &sp8 + temp_v0;
    sp14.unk0 = (s32) D_ending_80192C20->unk0;
    sp14.unk4 = (s32) D_ending_80192C20->unk4;
    sp14.unk8 = (s32) D_ending_80192C20->unk8;
    sp8.unk0 = (s32) D_ending_80192C2C->unk0;
    sp8.unk4 = (s32) D_ending_80192C2C->unk4;
    sp8.unk8 = (s32) D_ending_80192C2C->unk8;
    sp->unk0 = (f32) D_ending_80192C38->unk0;
    sp->unk4 = (s32) D_ending_80192C38->unk4;
    D_80177978 = temp_v1->unk0;
    D_80177980 = temp_v1->unk4;
    D_80177988 = temp_v1->unk8;
    D_801779A0 = temp_a1->unk0;
    D_801779B8 = temp_a1->unk4;
    D_801779C0 = temp_a1->unk8;
    gLight1R = temp_a2->unk0;
    gLight1G = temp_a2->unk4;
    gLight1B = temp_a2->unk8;
    gAmbientR = temp_a3->unk0;
    temp_t0 = sp + (arg0 * 8);
    gAmbientG = temp_a3->unk4;
    gAmbientB = temp_a3->unk8;
    D_801784D0 = temp_t0->unk0;
    D_801784D4 = temp_t0->unk4;
}

void func_ending_8018A2A8(void) {
    Vec3f sp6C;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    UnkStruct_196D08 *var_s0;
    s32 var_s3;

    var_s0 = D_ending_80196D08;
    var_s3 = 0;
    if (D_ending_80196F88 > 0) {
        do {
            Matrix_Push(&gGfxMatrix);
            RCP_SetupDL(&gMasterDisp, var_s0->unk8);
            temp_v1 = gMasterDisp;
            gMasterDisp = temp_v1 + 8;
            temp_v1->words.w0 = 0xFA000000;
            temp_v1->words.w1 = var_s0->prim[3] | (var_s0->prim[0] << 0x18) | (var_s0->prim[1] << 0x10) | (var_s0->prim[2] << 8);
            Matrix_Translate(gGfxMatrix, var_s0->pos.x, var_s0->pos.y, var_s0->pos.z, 1U);
            Matrix_Scale(gGfxMatrix, var_s0->scale.x, var_s0->scale.y, var_s0->scale.z, 1U);
            Matrix_RotateY(gGfxMatrix, var_s0->rot.y * 0.017453292f, 1U);
            Matrix_RotateX(gGfxMatrix, var_s0->rot.x * 0.017453292f, 1U);
            Matrix_RotateZ(gGfxMatrix, var_s0->rot.z * 0.017453292f, 1U);
            Matrix_SetGfxMtx(&gMasterDisp);
            if (var_s0->skeleton == NULL) {
                temp_v1_2 = gMasterDisp;
                gMasterDisp = temp_v1_2 + 8;
                temp_v1_2->words.w0 = 0x06000000;
                temp_v1_2->words.w1 = (u32) var_s0->anim;
            } else {
                Animation_GetFrameData(var_s0->anim, (s32) ((u32) ((f32) var_s0->unk_34 * var_s0->unk_30) % Animation_GetFrameCount(var_s0->anim)), &sp6C);
                Animation_DrawSkeleton(0, var_s0->skeleton, &sp6C, NULL, NULL, NULL, &gIdentityMatrix);
            }
            Matrix_Pop(&gGfxMatrix);
            var_s3 += 1;
            var_s0 += 0x40;
        } while (var_s3 < D_ending_80196F88);
    }
}

void func_ending_8018A570(void) {
    u32 var_v1;

    func_ending_8018A024();
    Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR, gAmbientG, gAmbientB);
    var_v1 = D_ending_80196F8C;
    switch (var_v1) {                               /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        if (gCsFrameCount == 0xC8) {
            var_v1 = 3;
block_14:
            D_ending_80196F8C = var_v1;
        }
        break;
    case 4:                                         /* switch 1 */
        if (gCsFrameCount == 0x1B3) {
            var_v1 = 5;
            goto block_14;
        }
        break;
    case 6:                                         /* switch 1 */
        if (gCsFrameCount == 0xB4) {
            var_v1 = 7;
            goto block_14;
        }
        break;
    case 8:                                         /* switch 1 */
        if ((*(D_ending_80196D08 + 0x138) == 2) && (gCsFrameCount >= 0x6C)) {
            var_v1 = 9;
            goto block_14;
        }
        break;
    }
    switch (var_v1) {
    case 0:
        func_ending_8018A124(0, &D_ending_80196F8C);
        /* fallthrough */
    case 1:
        func_ending_80187D3C(0);
        D_80178358 = 0;
        D_ending_8019858C = 0;
        D_ending_80196F8C = 2;
        gCsFrameCount = 0;
        /* fallthrough */
    case 2:
        func_ending_80188030(0, &D_ending_80196F8C);
        return;
    case 3:
        func_ending_80187D3C(1, &D_ending_80196F8C);
        D_80178358 = 0;
        D_ending_8019858C = 0;
        D_ending_80196F8C = 4;
        gCsFrameCount = 0;
        gOverlayStage = 1;
        return;
    case 4:
        func_ending_80188030(1, &D_ending_80196F8C);
        return;
    case 5:
        func_ending_80188394();
        D_80178358 = 0;
        D_ending_8019858C = 0;
        D_ending_80196F8C = 6;
        gCsFrameCount = 0;
        gOverlayStage = 4;
        return;
    case 6:
        func_ending_8018845C();
        return;
    case 7:
        func_ending_80188DB4();
        D_80178358 = 0;
        D_ending_8019858C = 0;
        D_ending_80196F8C = 8;
        gCsFrameCount = 0;
        /* fallthrough */
    case 8:
        func_ending_80189108();
        return;
    case 9:
        D_80178358 = 0;
        gCsFrameCount = 0;
        D_ending_80196D00 = 7;
        /* fallthrough */
    default:
        return;
    }
}

void func_ending_8018A828(void) {
    switch (D_ending_80196F8C) {
    case 2:
        func_ending_80187520(0);
        func_ending_801876A4();
        func_ending_80187860(0, 0);
        return;
    case 4:
        func_ending_80187520(1);
        func_ending_801876A4();
        func_ending_80187860(0, 1);
        return;
    case 6:
        func_ending_8018A2A8();
        return;
    case 7:
    case 8:
        D_ending_80196F88 = 1;
        func_ending_8018A2A8();
        D_ending_80196F88 = 4;
        func_ending_80187860(1, 0);
        func_ending_801888F4();
        func_ending_801886F4();
        /* fallthrough */
    default:
        return;
    }
}

void func_ending_8018A8FC(void) {
    s32 temp_t0;
    s32 temp_t7;

    if (D_80178358 != D_80178340) {
        if (D_80178340 < D_80178358) {
            temp_t7 = D_80178340 + D_8017835C;
            D_80178340 = temp_t7;
            if (temp_t7 >= D_80178358) {
                goto block_5;
            }
        } else {
            temp_t0 = D_80178340 - D_8017835C;
            D_80178340 = temp_t0;
            if (D_80178358 >= temp_t0) {
block_5:
                D_80178340 = D_80178358;
            }
        }
    }
    D_8017835C = 0x10;
}

void func_ending_8018A96C(void) {
    gCsFrameCount += 1;
    gGameFrameCount += 1;
    switch (D_ending_80196D00) {
    case 0:
        gRadioState = 0;
        gGameFrameCount = 0;
        gOverlayStage = 0;
        D_80177988 = 0.0f;
        D_80177980 = D_80177988;
        D_80177978 = D_80177980;
        D_801779B8 = 0.0f;
        D_801779A0 = D_801779B8;
        D_801779C0 = -100.0f;
        D_ending_80196D00 = 1;
        break;
    case 1:
        if ((u32) D_ending_80192E70 >= 0xAF0U) {
        case 2:
            D_ending_80196D00 = 3;
            gCsFrameCount = 0;
        case 3:
            if (func_ending_8018BCB0() != 0) {
            case 4:
                gOverlayStage = 2;
                D_ending_80196D00 = 5;
            }
        }
        break;
    case 5:
        D_ending_80196F8C = 0;
        D_ending_80196D00 = 6;
        /* fallthrough */
    case 6:
        func_ending_8018A570(&D_ending_80196D00);
        break;
    }
    func_ending_8018A8FC();
    func_ending_8018B3D8();
    func_ending_8018ABE8();
}

void func_ending_8018AAC4(void) {
    Matrix_Push(&gGfxMatrix);
    Matrix_LookAt(gGfxMatrix, D_80177978, D_80177980, D_80177988, D_801779A0, D_801779B8, D_801779C0, 0.0f, 100.0f, 0.0f, 0U);
    switch (D_ending_80196D00) {                    /* irregular */
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
    D_ending_80196D04 += 1;
    func_800BB5D0();
    Matrix_Pop(&gGfxMatrix);
}

void func_ending_8018ABE8(void) {
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t1_4;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t3_3;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t5_3;
    s32 temp_t5_4;
    s32 temp_t5_5;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_t7_4;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_t9_3;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;

    temp_v0 = (gControllerPress + 0x12)->button;
    if (temp_v0 & 0x2000) {
        D_ending_80198584 ^= 1;
    }
    if (D_ending_80198584 != 0) {
        if (temp_v0 & 0x10) {
            temp_t2 = D_ending_80198588 + 1;
            D_ending_80198588 = temp_t2;
            if (temp_t2 >= 5) {
                D_ending_80198588 = 0;
            }
        }
        switch (D_ending_80198588) {
        case 0:
            temp_v0_2 = (gControllerHold + 0x12)->button;
            if (temp_v0_2 & 0x4000) {
                temp_t7 = gFogRed + 1;
                gFogRed = temp_t7;
                if (temp_t7 >= 0x100) {
                    gFogRed = 0xFF;
                }
            }
            if (temp_v0_2 & 0x8000) {
                temp_t1 = gFogRed - 1;
                gFogRed = temp_t1;
                if (temp_t1 < 0) {
                    gFogRed = 0;
                }
            }
            if (temp_v0_2 & 2) {
                temp_t5 = gFogGreen + 1;
                gFogGreen = temp_t5;
                if (temp_t5 >= 0x100) {
                    gFogGreen = 0xFF;
                }
            }
            if (temp_v0_2 & 4) {
                temp_t9 = gFogGreen - 1;
                gFogGreen = temp_t9;
                if (temp_t9 < 0) {
                    gFogGreen = 0;
                }
            }
            if (temp_v0_2 & 8) {
                temp_t3 = gFogBlue + 1;
                gFogBlue = temp_t3;
                if (temp_t3 >= 0x100) {
                    gFogBlue = 0xFF;
                }
            }
            if (temp_v0_2 & 1) {
                temp_t7_2 = gFogBlue - 1;
                gFogBlue = temp_t7_2;
                if (temp_t7_2 < 0) {
                    gFogBlue = 0;
                    return;
                }
            }
            break;
        case 1:
            temp_v0_3 = (gControllerHold + 0x12)->button;
            if (temp_v0_3 & 0x4000) {
                temp_t1_2 = gLight1R + 1;
                gLight1R = temp_t1_2;
                if (temp_t1_2 >= 0x100) {
                    gLight1R = 0xFF;
                }
            }
            if (temp_v0_3 & 0x8000) {
                temp_t5_2 = gLight1R - 1;
                gLight1R = temp_t5_2;
                if (temp_t5_2 < 0) {
                    gLight1R = 0;
                }
            }
            if (temp_v0_3 & 2) {
                temp_t9_2 = gLight1G + 1;
                gLight1G = temp_t9_2;
                if (temp_t9_2 >= 0x100) {
                    gLight1G = 0xFF;
                }
            }
            if (temp_v0_3 & 4) {
                temp_t3_2 = gLight1G - 1;
                gLight1G = temp_t3_2;
                if (temp_t3_2 < 0) {
                    gLight1G = 0;
                }
            }
            if (temp_v0_3 & 8) {
                temp_t7_3 = gLight1B + 1;
                gLight1B = temp_t7_3;
                if (temp_t7_3 >= 0x100) {
                    gLight1B = 0xFF;
                }
            }
            if (temp_v0_3 & 1) {
                temp_t1_3 = gLight1B - 1;
                gLight1B = temp_t1_3;
                if (temp_t1_3 < 0) {
                    gLight1B = 0;
                    return;
                }
            }
            break;
        case 2:
            temp_v0_4 = (gControllerHold + 0x12)->button;
            if (temp_v0_4 & 0x4000) {
                temp_t5_3 = gAmbientR + 1;
                gAmbientR = temp_t5_3;
                if (temp_t5_3 >= 0x100) {
                    gAmbientR = 0xFF;
                }
            }
            if (temp_v0_4 & 0x8000) {
                temp_t9_3 = gAmbientR - 1;
                gAmbientR = temp_t9_3;
                if (temp_t9_3 < 0) {
                    gAmbientR = 0;
                }
            }
            if (temp_v0_4 & 2) {
                temp_t3_3 = gAmbientG + 1;
                gAmbientG = temp_t3_3;
                if (temp_t3_3 >= 0x100) {
                    gAmbientG = 0xFF;
                }
            }
            if (temp_v0_4 & 4) {
                temp_t7_4 = gAmbientG - 1;
                gAmbientG = temp_t7_4;
                if (temp_t7_4 < 0) {
                    gAmbientG = 0;
                }
            }
            if (temp_v0_4 & 8) {
                temp_t1_4 = gAmbientB + 1;
                gAmbientB = temp_t1_4;
                if (temp_t1_4 >= 0x100) {
                    gAmbientB = 0xFF;
                }
            }
            if (temp_v0_4 & 1) {
                temp_t5_4 = gAmbientB - 1;
                gAmbientB = temp_t5_4;
                if (temp_t5_4 < 0) {
                    gAmbientB = 0;
                    return;
                }
            }
            break;
        case 3:
            temp_v0_5 = (gControllerHold + 0x12)->button;
            if (temp_v0_5 & 0x4000) {
                D_801784D0 += 1.0f;
                if (D_801784D0 > 360.0f) {
                    D_801784D0 = 0.0f;
                }
            }
            if (temp_v0_5 & 0x8000) {
                D_801784D0 -= 1.0f;
                if (D_801784D0 < -360.0f) {
                    D_801784D0 = 0.0f;
                }
            }
            if (temp_v0_5 & 2) {
                D_801784D4 += 1.0f;
                if (D_801784D4 > 360.0f) {
                    D_801784D4 = 0.0f;
                }
            }
            if (temp_v0_5 & 4) {
                D_801784D4 -= 1.0f;
                if (D_801784D4 < -360.0f) {
                    D_801784D4 = 0.0f;
                }
            }
            if (temp_v0_5 & 8) {
                D_801784D8 += 1.0f;
                if (D_801784D8 > 360.0f) {
                    D_801784D8 = 0.0f;
                }
            }
            if (temp_v0_5 & 1) {
                D_801784D8 -= 1.0f;
                if (D_801784D8 < -360.0f) {
                    D_801784D8 = 0.0f;
                    return;
                }
            }
            break;
        case 4:
            if (temp_v0 & 0x4000) {
                temp_t5_5 = gFogNear + 1;
                gFogNear = temp_t5_5;
                if (temp_t5_5 >= gFogFar) {
                    gFogNear = gFogFar - 1;
                }
            }
            if (temp_v0 & 0x8000) {
                gFogNear -= 1;
            }
            if (temp_v0 & 2) {
                gFogFar += 1;
            }
            if (temp_v0 & 4) {
                gFogFar -= 1;
            }
            break;
        }
    } else {
    default:
    }
}

void func_ending_8018B174(Vec3f *arg0, Vec3f *arg1, f32 *arg2) {
    f32 sp4C;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 temp_ft3;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_ft4;
    f32 var_ft5;
    f32 var_fv0;
    f32 var_fv1;
    s32 temp_v1;
    u16 temp_v0;

    var_fv0 = 0.0f;
    sp28.unk0 = arg0->x;
    var_fv1 = 0.0f;
    var_fa0 = 0.0f;
    sp28.unk4 = (s32) arg0->y;
    var_fa1 = 0.0f;
    var_ft4 = 0.0f;
    sp28.unk8 = (s32) arg0->z;
    var_ft5 = 0.0f;
    sp1C.unk0 = arg1->x;
    sp1C.unk4 = (s32) arg1->y;
    sp1C.unk8 = (s32) arg1->z;
    temp_v0 = (gControllerHold + 0xC)->button;
    temp_v1 = temp_v0 & 0x2000;
    sp4C = *arg2;
    if (temp_v1 != 0) {
        if (temp_v0 & 1) {
            var_fa1 = 0.0f + 100.0f;
        }
        if (temp_v0 & 2) {
            var_fa1 -= 100.0f;
        }
    } else {
        if (temp_v0 & 1) {
            var_fa1 = 0.0f + 10.0f;
        }
        if (temp_v0 & 2) {
            var_fa1 -= 10.0f;
        }
    }
    if (temp_v1 != 0) {
        if (temp_v0 & 8) {
            var_fa0 = 0.0f + 100.0f;
        }
        if (temp_v0 & 4) {
            var_fa0 -= 100.0f;
        }
    } else {
        if (temp_v0 & 8) {
            var_fa0 = 0.0f + 10.0f;
        }
        if (temp_v0 & 4) {
            var_fa0 -= 10.0f;
        }
    }
    if (temp_v1 != 0) {
        var_fv1 = (f32) gControllerPress->unkF;
    } else {
        var_ft5 = (f32) gControllerPress->unkF / 10.0f;
        var_ft4 = (f32) gControllerPress->unkE / 10.0f;
    }
    if (temp_v0 & 0x4000) {
        var_fv0 = 0.0f + 0.01f;
    }
    if (temp_v0 & 0x8000) {
        var_fv0 -= 0.01f;
    }
    temp_ft3 = sp4C + var_fv0;
    sp4C = temp_ft3;
    if (temp_ft3 < 0.01f) {
        sp4C = 0.01f;
    }
    sp28 += var_fa1;
    sp2C += var_fa0;
    sp30 -= var_fv1;
    sp1C += var_ft5;
    sp20 += var_ft4;
    arg0->x = sp28.unk0;
    arg0->y = sp28.unk4;
    arg0->z = sp28.unk8;
    arg1->x = sp1C.unk0;
    arg1->y = sp1C.unk4;
    arg1->z = sp1C.unk8;
    *arg2 = sp4C;
}

void func_ending_8018B3D8(void) {

}

void func_ending_8018B3E8(Actor *arg0, s32 arg1) {
    ? sp38;
    ? sp20;
    s32 temp_v1;
    void *temp_t7;
    void *temp_v0;

    sp38.unk0 = (f32) D_ending_80192C40->x;
    sp38.unk4 = (f32) D_ending_80192C40->y;
    sp38.unkC = (s32) D_ending_80192C40->unkC;
    sp38.unk8 = (f32) D_ending_80192C40->z;
    sp38.unk10 = (s32) D_ending_80192C40->unk10;
    sp38.unk14 = (s32) D_ending_80192C40->unk14;
    sp20.unk4 = (f32) D_ending_80192C58->y;
    sp20.unk0 = (f32) D_ending_80192C58->x;
    sp20.unk8 = (f32) D_ending_80192C58->z;
    sp20.unkC = (s32) D_ending_80192C58->unkC;
    sp20.unk14 = (s32) D_ending_80192C58->unk14;
    sp20.unk10 = (s32) D_ending_80192C58->unk10;
    Actor_Initialize(arg0);
    temp_v1 = arg1 * 0xC;
    temp_v0 = temp_v1 + &sp20;
    arg0->obj.status = 2;
    arg0->obj.id = 0;
    arg0->state = (s16) arg1;
    temp_t7 = temp_v1 + &sp38;
    arg0->unk_0F4.x = temp_v0->unk0;
    arg0->unk_0F4.y = temp_v0->unk4;
    arg0->unk_0F4.z = temp_v0->unk8;
    arg0->obj.pos.x = temp_t7->unk0;
    arg0->obj.pos.y = temp_t7->unk4;
    arg0->obj.pos.z = temp_t7->unk8;
    if (arg1 == 0) {
        arg0->obj.pos.x -= 600.0f;
        arg0->fwork[0] = 6.0f;
        arg0->obj.pos.y += 150.0f;
    }
    arg0->scale = 1.0f;
}

void func_ending_8018B52C(Actor *arg0, s32 arg1) {
    ? sp44;
    ? sp20;
    s32 temp_t0;
    void *temp_t6;
    void *temp_v0;

    M2C_MEMCPY_ALIGNED(&sp44, D_ending_80192C70, 0x24);
    M2C_MEMCPY_ALIGNED(&sp20, D_ending_80192C94, 0x24);
    Actor_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 1;
    temp_t0 = arg1 * 0xC;
    temp_t6 = temp_t0 + &sp44;
    temp_v0 = temp_t0 + &sp20;
    arg0->obj.pos.x = temp_t6->unk0;
    arg0->obj.pos.y = temp_t6->unk4;
    arg0->obj.pos.z = temp_t6->unk8;
    arg0->unk_0F4.x = temp_v0->unk0;
    arg0->unk_0F4.y = temp_v0->unk4;
    arg0->scale = 1.0f;
    arg0->unk_0F4.z = temp_v0->unk8;
}

void func_ending_8018B624(Actor *arg0) {
    ? sp24;
    f32 sp18;

    sp24.unk0 = (f32) D_ending_80192CB8.x;
    sp24.unk4 = (f32) D_ending_80192CB8.y;
    sp24.unk8 = (f32) D_ending_80192CB8.z;
    sp18.unk0 = D_ending_80192CC4.x;
    sp18.unk4 = (f32) D_ending_80192CC4.y;
    sp18.unk8 = (f32) D_ending_80192CC4.z;
    Actor_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 2;
    arg0->obj.pos.x = sp24.unk0;
    arg0->obj.pos.y = sp24.unk4;
    arg0->obj.pos.z = sp24.unk8;
    arg0->unk_0F4.x = sp18;
    arg0->unk_0F4.y = sp1C;
    arg0->scale = 1.0f;
    arg0->unk_0F4.z = sp20;
}

void func_ending_8018B6D8(Actor *arg0, s32 arg1) {
    ? sp80;
    ? sp38;
    ? sp20;
    s32 temp_v1;
    void *temp_t2;
    void *temp_v0;

    M2C_MEMCPY_ALIGNED(&sp80, D_ending_80192CD0, 0x48);
    M2C_MEMCPY_ALIGNED(&sp38, D_ending_80192D18, 0x48);
    sp20.unk0 = (s32) D_ending_80192D60->unk0;
    sp20.unk4 = (s32) D_ending_80192D60->unk4;
    sp20.unkC = (s32) D_ending_80192D60->unkC;
    sp20.unk8 = (s32) D_ending_80192D60->unk8;
    sp20.unk10 = (s32) D_ending_80192D60->unk10;
    sp20.unk14 = (s32) D_ending_80192D60->unk14;
    Actor_Initialize(arg0);
    temp_v1 = arg1 * 0xC;
    temp_t2 = temp_v1 + &sp80;
    arg0->obj.status = 2;
    arg0->obj.id = 3;
    temp_v0 = temp_v1 + &sp38;
    arg0->obj.pos.x = temp_t2->unk0;
    arg0->obj.pos.y = temp_t2->unk4;
    arg0->obj.pos.z = temp_t2->unk8;
    arg0->unk_0F4.x = temp_v0->unk0;
    arg0->unk_0F4.y = temp_v0->unk4;
    arg0->unk_0F4.z = temp_v0->unk8;
    arg0->obj.pos.x += 3200.0f;
    arg0->iwork[1] = 0x64;
    arg0->obj.pos.z -= 200.0f;
    arg0->scale = 1.0f;
    arg0->fwork[1] = 1.0f;
    arg0->fwork[0] = 30.0f;
    arg0->unk_046 = (s16) arg1;
    arg0->iwork[0] = (sp + (arg1 * 4))->unk20;
}

void func_ending_8018B860(void) {
    f32 sp4C;
    f32 sp40;
    s32 sp34;
    s32 sp28;
    s32 sp1C;

    sp4C.unk0 = D_ending_80192D78.x;
    sp4C.unk4 = (f32) D_ending_80192D78.y;
    sp4C.unk8 = (f32) D_ending_80192D78.z;
    sp40.unk0 = D_ending_80192D84.x;
    sp40.unk4 = (f32) D_ending_80192D84.y;
    sp40.unk8 = (f32) D_ending_80192D84.z;
    sp34.unk0 = D_ending_80192D90->unk0;
    sp34.unk4 = (s32) D_ending_80192D90->unk4;
    sp34.unk8 = (s32) D_ending_80192D90->unk8;
    sp28.unk0 = D_ending_80192D9C->unk0;
    sp28.unk4 = (s32) D_ending_80192D9C->unk4;
    sp28.unk8 = (s32) D_ending_80192D9C->unk8;
    sp1C.unk0 = D_ending_80192DA8->unk0;
    sp1C.unk4 = (s32) D_ending_80192DA8->unk4;
    sp1C.unk8 = (s32) D_ending_80192DA8->unk8;
    D_80177978 = sp4C;
    D_80177980 = sp50;
    D_80177988 = sp54;
    D_801779A0 = sp40;
    D_801779B8 = sp44;
    D_801779C0 = sp48;
    gLight1R = sp28;
    gLight1G = sp2C;
    gLight1B = sp30;
    D_801784D0 = (f32) sp34;
    D_801784D4 = (f32) sp38;
    D_801784D8 = (f32) sp3C;
    gAmbientR = sp1C;
    gAmbientG = sp20;
    gAmbientB = sp24;
    func_800A6148();
    func_ending_8018B3E8(gActors, 0);
    func_ending_8018B52C(gActors + 0x2F4, 0);
    func_ending_8018B52C(gActors + 0x5E8, 1);
    func_ending_8018B52C(gActors + 0x8DC, 2);
    func_ending_8018B6D8(gActors + 0xBD0, 0);
    func_ending_8018B6D8(gActors + 0xEC4, 1);
    func_ending_8018B6D8(gActors + 0x11B8, 2);
    func_ending_8018B6D8(gActors + 0x14AC, 3);
    func_ending_8018B6D8(gActors + 0x17A0, 4);
    func_ending_8018B6D8(gActors + 0x1A94, 5);
    *D_80177A48 = D_801779A0;
    *D_80177A10 = 0;
    D_ending_8019858C = 0;
    gBgColor = 0x4AE5;
    D_80178410 = 0;
}

void func_ending_8018BAD0(void) {
    f32 sp4C;
    f32 sp40;
    s32 sp34;
    s32 sp28;
    s32 sp1C;

    sp4C.unk0 = D_ending_80192DB4.x;
    sp4C.unk4 = (f32) D_ending_80192DB4.y;
    sp4C.unk8 = (f32) D_ending_80192DB4.z;
    sp40.unk0 = D_ending_80192DC0.x;
    sp40.unk4 = (f32) D_ending_80192DC0.y;
    sp40.unk8 = (f32) D_ending_80192DC0.z;
    sp34.unk0 = D_ending_80192DCC->unk0;
    sp34.unk4 = (s32) D_ending_80192DCC->unk4;
    sp34.unk8 = (s32) D_ending_80192DCC->unk8;
    sp28.unk0 = D_ending_80192DD8->unk0;
    sp28.unk4 = (s32) D_ending_80192DD8->unk4;
    sp28.unk8 = (s32) D_ending_80192DD8->unk8;
    sp1C.unk0 = D_ending_80192DE4->unk0;
    sp1C.unk4 = (s32) D_ending_80192DE4->unk4;
    sp1C.unk8 = (s32) D_ending_80192DE4->unk8;
    D_80177978 = sp4C;
    D_80177980 = sp50;
    D_80177988 = sp54;
    D_801779A0 = sp40;
    D_801779B8 = sp44;
    D_801779C0 = sp48;
    gLight1R = sp28;
    gLight1G = sp2C;
    gLight1B = sp30;
    D_801784D0 = (f32) sp34;
    D_801784D4 = (f32) sp38;
    D_801784D8 = (f32) sp3C;
    gAmbientR = sp1C;
    gAmbientG = sp20;
    gAmbientB = sp24;
    func_800A6148();
    func_ending_8018B3E8(gActors, 1);
    func_ending_8018B624(gActors + 0x2F4);
    *D_80177A10 = 1;
    D_ending_8019858C = 0;
    gBgColor = 0x4AE5;
    D_80178410 = 0;
}

s32 func_ending_8018BCB0(void) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    Vec3f sp6C;
    s32 sp5C;
    Actor *var_s0;
    f32 temp_ft5;
    s16 temp_v0_2;
    s32 temp_t0;
    s32 temp_v0_3;
    s32 var_s1;
    u16 temp_v0;

    sp5C = 0;
    switch (gCsFrameCount) {                        /* irregular */
    case 0x0:
        D_80178358 = 0;
        func_ending_8018B860();
        break;
    case 0x30C:
        func_ending_8018BAD0();
        break;
    case 0x3F2:
        sp5C = 1;
        func_800A6148();
        break;
    }
    func_ending_8018A024();
    Lights_SetOneLight(&gMasterDisp, gLight1x, gLight1y, gLight1z, gLight1R, gLight1G, gLight1B, gAmbientR, gAmbientG, gAmbientB);
    var_s0 = gActors + 0xAE3C;
    var_s1 = 0x3B;
    do {
        if (var_s0->obj.status != 0) {
            temp_v0 = var_s0->obj.id;
            switch (temp_v0) {                      /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                temp_v0_2 = var_s0->state;
                switch (temp_v0_2) {                /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    if (var_s0->obj.pos.x < -4000.0f) {
                        var_s0->obj.status = 0;
                    }
                    break;
                case 1:                             /* switch 2 */
                    if (gCsFrameCount >= 0x30C) {
                        var_s0->obj.pos.x += 8.7f;
                        var_s0->obj.pos.y += -6.3f;
                        var_s0->obj.pos.z += -3.3f;
                    }
                    break;
                }
                if (var_s1 == D_ending_8019858C) {
                    func_ending_8018B174(&var_s0->obj.pos, &var_s0->obj.rot, &var_s0->scale);
                }
                break;
            case 1:                                 /* switch 1 */
                if (var_s1 == D_ending_8019858C) {
                    func_ending_8018B174(&var_s0->obj.pos, &var_s0->obj.rot, &var_s0->scale);
                }
                break;
            case 2:                                 /* switch 1 */
                if (var_s1 == D_ending_8019858C) {
                    func_ending_8018B174(&var_s0->obj.pos, &var_s0->obj.rot, &var_s0->scale);
                }
                break;
            case 3:                                 /* switch 1 */
                temp_v0_3 = var_s0->iwork[0];
                if (temp_v0_3 > 0) {
                    var_s0->iwork[0] = temp_v0_3 - 1;
                } else {
                    temp_t0 = var_s0->iwork[1] - 1;
                    var_s0->iwork[1] = temp_t0;
                    if (temp_t0 <= 0) {
                        var_s0->iwork[1] = 0;
                        var_s0->obj.status = 0;
                    }
                    Math_SmoothStepToF(var_s0->fwork, 1.0f, 0.05f, 1000.0f, 0.001f);
                }
                if (var_s1 == D_ending_8019858C) {
                    func_ending_8018B174(&var_s0->obj.pos, &var_s0->obj.rot, &var_s0->scale);
                }
                break;
            }
            Matrix_RotateY(gCalcMatrix, (var_s0->unk_0F4.y + 180.0f) * 0.017453292f, 0U);
            Matrix_RotateX(gCalcMatrix, -(var_s0->unk_0F4.x * 0.017453292f), 1U);
            sp78 = 0.0f;
            sp7C = 0.0f;
            sp80 = var_s0->fwork[0];
            Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp78, &sp6C);
            var_s0->vel.y = sp6C.y;
            temp_ft5 = var_s0->vel.y;
            var_s0->vel.x = (bitwise f32) sp6C;
            var_s0->vel.z = sp6C.z;
            var_s0->obj.rot.y = var_s0->unk_0F4.y + 180.0f;
            var_s0->obj.pos.x += var_s0->vel.x;
            var_s0->obj.pos.y += temp_ft5;
            var_s0->obj.rot.x = -var_s0->unk_0F4.x;
            var_s0->vel.y = temp_ft5 - var_s0->gravity;
            var_s0->obj.pos.z += var_s0->vel.z;
            var_s0->obj.rot.z = -var_s0->unk_0F4.z;
        }
        var_s1 -= 1;
        var_s0 -= 0x2F4;
    } while (var_s1 >= 0);
    if (*D_80177A10 == 0) {
        if ((gActors->obj.pos.x <= D_801779A0) && (gActors->obj.pos.x > -400.0f)) {
            *D_80177A48 = gActors->obj.pos.x;
        }
        if (gCsFrameCount >= 0x1E) {
            Math_SmoothStepToF(&D_801779A0, *D_80177A48, 0.004f, 1000.0f, 0.0001f);
            Math_SmoothStepToF(&D_801779B8, 156.0f, 0.002f, 1000.0f, 0.0001f);
        }
    } else {
        D_801779A0 = gActors->obj.pos.x;
        D_801779B8 = gActors->obj.pos.y;
        D_801779C0 = gActors->obj.pos.z;
    }
    if ((gCsFrameCount < 0x224) && (gCsFrameCount >= 0xF0)) {
        D_801784D0 -= 0.2f;
        if (D_801784D0 < 180.0f) {
            D_801784D0 = 180.0f;
        }
    }
    if (gCsFrameCount >= 0x225) {
        D_801784D0 += 0.2f;
        if (D_801784D0 > 240.0f) {
            D_801784D0 = 240.0f;
        }
    }
    if ((gCsFrameCount == 0x2F8) || (gCsFrameCount == 0x3E2)) {
        D_80178358 = 0xFF;
    }
    if (gCsFrameCount == 0x30C) {
        D_80178358 = 0;
    }
    return sp5C;
}

void func_ending_8018C21C(void) {
    ? sp124;
    ? sp10C;
    ? spF4;
    f32 spE4;
    ? *var_s1;
    Actor *var_s6;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    s32 var_s2;
    u16 temp_t2;
    u16 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    M2C_MEMCPY_ALIGNED(&sp124, D_ending_80192E10, 0x24);
    sp10C.unk0 = (f32) D_ending_80192E34->x;
    sp10C.unk4 = (f32) D_ending_80192E34->y;
    sp10C.unkC = (s32) D_ending_80192E34->unkC;
    sp10C.unk8 = (f32) D_ending_80192E34->z;
    sp10C.unk10 = (s32) D_ending_80192E34->unk10;
    sp10C.unk14 = (s32) D_ending_80192E34->unk14;
    spF4.unk4 = (f32) D_ending_80192E4C->y;
    spF4.unk0 = (f32) D_ending_80192E4C->x;
    spF4.unk8 = (f32) D_ending_80192E4C->z;
    spF4.unkC = (s32) D_ending_80192E4C->unkC;
    spF4.unk14 = (s32) D_ending_80192E4C->unk14;
    spF4.unk10 = (s32) D_ending_80192E4C->unk10;
    if (gCsFrameCount < 0x30C) {
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x11);
        Matrix_Translate(gGfxMatrix, 0.0f, -1200.0f, -6000.0f, 1U);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w1 = (u32) D_700C8B0;
        temp_v1->words.w0 = 0x06000000;
        Matrix_Pop(&gGfxMatrix);
    } else {
        Matrix_Push(&gGfxMatrix);
        RCP_SetupDL(&gMasterDisp, 0x11);
        Matrix_Translate(gGfxMatrix, -2000.0f, -3000.0f, 3000.0f, 1U);
        Matrix_RotateY(gGfxMatrix, 1.9198622f, 1U);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w1 = (u32) D_700C8B0;
        temp_v1_2->words.w0 = 0x06000000;
        Matrix_Pop(&gGfxMatrix);
    }
    Matrix_Push(&gGfxMatrix);
    var_s6 = gActors + 0xAE3C;
    do {
        if (var_s6->obj.status != 0) {
            Matrix_Push(&gGfxMatrix);
            temp_v0 = var_s6->obj.id;
            switch (temp_v0) {                      /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                if (var_s6->state == 0) {
                    RCP_SetupDL(&gMasterDisp, 0x17);
                    Matrix_Translate(gGfxMatrix, var_s6->obj.pos.x, var_s6->obj.pos.y, var_s6->obj.pos.z, 1U);
                    temp_fv0 = var_s6->scale;
                    Matrix_Scale(gGfxMatrix, temp_fv0, temp_fv0, temp_fv0, 1U);
                    Matrix_RotateY(gGfxMatrix, var_s6->obj.rot.y * 0.017453292f, 1U);
                    Matrix_RotateX(gGfxMatrix, var_s6->obj.rot.x * 0.017453292f, 1U);
                    Matrix_RotateZ(gGfxMatrix, var_s6->obj.rot.z * 0.017453292f, 1U);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    if (D_80177B8C != 0) {
                        temp_v1_3 = gMasterDisp;
                        gMasterDisp = temp_v1_3 + 8;
                        temp_v1_3->words.w1 = (u32) D_E000000;
                        temp_v1_3->words.w0 = 0x06000000;
                    }
                    if (D_80177B8C == 0) {
                        temp_v1_4 = gMasterDisp;
                        gMasterDisp = temp_v1_4 + 8;
                        temp_v1_4->words.w1 = (u32) D_E003AB0;
                        temp_v1_4->words.w0 = 0x06000000;
                    }
                    RCP_SetupDL(&gMasterDisp, 0x31);
                    temp_v1_5 = gMasterDisp;
                    gMasterDisp = temp_v1_5 + 8;
                    temp_v1_5->words.w1 = -0xC0U;
                    temp_v1_5->words.w0 = 0xFA000000;
                    temp_v1_6 = gMasterDisp;
                    gMasterDisp = temp_v1_6 + 8;
                    temp_v1_6->words.w0 = 0xFB000000;
                    temp_v1_6->words.w1 = 0xFFFF0040;
                    var_s2 = 0;
                    var_s1 = &sp124;
                    do {
                        Matrix_Push(&gGfxMatrix);
                        temp_s0 = (((s32) gGameFrameCount % 2) * 0xC) + &sp10C;
                        Matrix_Push(&gGfxMatrix);
                        Matrix_Translate(gGfxMatrix, var_s1->unk0, var_s1->unk4, var_s1->unk8, 1U);
                        Matrix_Scale(gGfxMatrix, temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, 1U);
                        Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_7 = gMasterDisp;
                        gMasterDisp = temp_v1_7 + 8;
                        temp_v1_7->words.w1 = (u32) D_7010970;
                        temp_v1_7->words.w0 = 0x06000000;
                        Matrix_Pop(&gGfxMatrix);
                        Matrix_Push(&gGfxMatrix);
                        temp_s0_2 = (((s32) gGameFrameCount % 2) * 0xC) + &spF4;
                        Matrix_Translate(gGfxMatrix, var_s1->unk0, var_s1->unk4, var_s1->unk8 - 60.0f, 1U);
                        Matrix_Scale(gGfxMatrix, temp_s0_2->unk0, temp_s0_2->unk4, temp_s0_2->unk8, 1U);
                        Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        temp_v1_8 = gMasterDisp;
                        gMasterDisp = temp_v1_8 + 8;
                        temp_v1_8->words.w1 = (u32) D_7010970;
                        temp_v1_8->words.w0 = 0x06000000;
                        Matrix_Pop(&gGfxMatrix);
                        var_s2 += 1;
                        var_s1 += 0xC;
                    } while (var_s2 != 3);
                } else {
                    RCP_SetupDL(&gMasterDisp, 0x17);
                    Matrix_Translate(gGfxMatrix, var_s6->obj.pos.x, var_s6->obj.pos.y, var_s6->obj.pos.z, 1U);
                    temp_fv0_2 = var_s6->scale;
                    Matrix_Scale(gGfxMatrix, temp_fv0_2, temp_fv0_2, temp_fv0_2, 1U);
                    Matrix_RotateY(gGfxMatrix, var_s6->obj.rot.y * 0.017453292f, 1U);
                    Matrix_RotateX(gGfxMatrix, var_s6->obj.rot.x * 0.017453292f, 1U);
                    Matrix_RotateZ(gGfxMatrix, var_s6->obj.rot.z * 0.017453292f, 1U);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    func_800515C4();
                }
                break;
            case 1:                                 /* switch 1 */
                RCP_SetupDL(&gMasterDisp, 0x17);
                Matrix_Translate(gGfxMatrix, var_s6->obj.pos.x, var_s6->obj.pos.y, var_s6->obj.pos.z, 1U);
                temp_fv0_3 = var_s6->scale;
                Matrix_Scale(gGfxMatrix, temp_fv0_3, temp_fv0_3, temp_fv0_3, 1U);
                Matrix_RotateY(gGfxMatrix, var_s6->obj.rot.y * 0.017453292f, 1U);
                Matrix_RotateX(gGfxMatrix, var_s6->obj.rot.x * 0.017453292f, 1U);
                Matrix_RotateZ(gGfxMatrix, var_s6->obj.rot.z * 0.017453292f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_9 = gMasterDisp;
                gMasterDisp = temp_v1_9 + 8;
                temp_v1_9->words.w1 = (u32) D_700F240;
                temp_v1_9->words.w0 = 0x06000000;
                break;
            case 2:                                 /* switch 1 */
                RCP_SetupDL(&gMasterDisp, 0x17);
                Matrix_Translate(gGfxMatrix, var_s6->obj.pos.x, var_s6->obj.pos.y, var_s6->obj.pos.z, 1U);
                temp_fv0_4 = var_s6->scale;
                Matrix_Scale(gGfxMatrix, temp_fv0_4, temp_fv0_4, temp_fv0_4, 1U);
                Matrix_RotateY(gGfxMatrix, var_s6->obj.rot.y * 0.017453292f, 1U);
                Matrix_RotateX(gGfxMatrix, var_s6->obj.rot.x * 0.017453292f, 1U);
                Matrix_RotateZ(gGfxMatrix, var_s6->obj.rot.z * 0.017453292f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_10 = gMasterDisp;
                gMasterDisp = temp_v1_10 + 8;
                temp_v1_10->words.w1 = (u32) D_700F320;
                temp_v1_10->words.w0 = 0x06000000;
                break;
            case 3:                                 /* switch 1 */
                RCP_SetupDL(&gMasterDisp, 0x17);
                Matrix_Translate(gGfxMatrix, var_s6->obj.pos.x, var_s6->obj.pos.y, var_s6->obj.pos.z, 1U);
                temp_fv0_5 = var_s6->scale;
                Matrix_Scale(gGfxMatrix, temp_fv0_5, temp_fv0_5, temp_fv0_5, 1U);
                Matrix_RotateY(gGfxMatrix, var_s6->obj.rot.y * 0.017453292f, 1U);
                Matrix_RotateX(gGfxMatrix, var_s6->obj.rot.x * 0.017453292f, 1U);
                Matrix_RotateZ(gGfxMatrix, var_s6->obj.rot.z * 0.017453292f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_11 = gMasterDisp;
                gMasterDisp = temp_v1_11 + 8;
                temp_v1_11->words.w1 = (u32) D_D00B880;
                temp_v1_11->words.w0 = 0x06000000;
                Matrix_Push(&gGfxMatrix);
                RCP_SetupDL(&gMasterDisp, 0x31);
                temp_v1_12 = gMasterDisp;
                gMasterDisp = temp_v1_12 + 8;
                temp_v1_12->words.w1 = -0xC0U;
                temp_v1_12->words.w0 = 0xFA000000;
                temp_v1_13 = gMasterDisp;
                gMasterDisp = temp_v1_13 + 8;
                temp_v1_13->words.w0 = 0xFB000000;
                temp_v1_13->words.w1 = 0xFF0040;
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -66.0f, 1U);
                Matrix_Scale(gGfxMatrix, 1.0f, 1.0f, 1.0f, 1U);
                Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_14 = gMasterDisp;
                gMasterDisp = temp_v1_14 + 8;
                temp_v1_14->words.w1 = (u32) D_7010970;
                temp_v1_14->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
                spE4 = var_s6->fwork[1];
                RCP_SetupDL(&gMasterDisp, 0x29);
                temp_t2 = (u16) var_s6->unk_046;
                switch (temp_t2) {
                case 0:
                    temp_v1_15 = gMasterDisp;
                    gMasterDisp = temp_v1_15 + 8;
                    temp_v1_15->words.w0 = 0xFA000000;
                    temp_v1_15->words.w1 = (var_s6->iwork[1] & 0xFF) | 0xC8000000;
                    break;
                case 1:
                    temp_v1_16 = gMasterDisp;
                    gMasterDisp = temp_v1_16 + 8;
                    temp_v1_16->words.w0 = 0xFA000000;
                    temp_v1_16->words.w1 = (var_s6->iwork[1] & 0xFF) | 0xC80000;
                    break;
                case 2:
                    temp_v1_17 = gMasterDisp;
                    gMasterDisp = temp_v1_17 + 8;
                    temp_v1_17->words.w0 = 0xFA000000;
                    temp_v1_17->words.w1 = (var_s6->iwork[1] & 0xFF) | 0xC800;
                    break;
                case 3:
                    temp_v1_18 = gMasterDisp;
                    gMasterDisp = temp_v1_18 + 8;
                    temp_v1_18->words.w0 = 0xFA000000;
                    temp_v1_18->words.w1 = (var_s6->iwork[1] & 0xFF) | 0xC8C80000;
                    break;
                case 4:
                    temp_v1_19 = gMasterDisp;
                    gMasterDisp = temp_v1_19 + 8;
                    temp_v1_19->words.w0 = 0xFA000000;
                    temp_v1_19->words.w1 = (var_s6->iwork[1] & 0xFF) | 0xC800C800;
                    break;
                case 5:
                    temp_v1_20 = gMasterDisp;
                    gMasterDisp = temp_v1_20 + 8;
                    temp_v1_20->words.w0 = 0xFA000000;
                    temp_v1_20->words.w1 = (var_s6->iwork[1] & 0xFF) | 0xC8C8C800;
                    break;
                }
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, 70.0f, 0.0f, -100.0f, 1U);
                Matrix_Scale(gGfxMatrix, spE4, 1.0f, 200.0f, 1U);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -17.5f, 1U);
                Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_21 = gMasterDisp;
                gMasterDisp = temp_v1_21 + 8;
                temp_v1_21->words.w1 = (u32) D_700C620;
                temp_v1_21->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, -70.0f, 0.0f, -100.0f, 1U);
                Matrix_Scale(gGfxMatrix, spE4, 1.0f, 200.0f, 1U);
                Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -17.5f, 1U);
                Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                temp_v1_22 = gMasterDisp;
                gMasterDisp = temp_v1_22 + 8;
                temp_v1_22->words.w1 = (u32) D_700C620;
                temp_v1_22->words.w0 = 0x06000000;
                Matrix_Pop(&gGfxMatrix);
                break;
            }
            Matrix_Pop(&gGfxMatrix);
        }
        var_s6 -= 0x2F4;
    } while ((u32) var_s6 >= (u32) gActors);
}
