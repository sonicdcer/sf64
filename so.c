#include "global.h"

typedef struct {
    /* 0x000 */ Object obj;
    /* 0x01C */ ObjectInfo info;
    /* 0x040 */ s32 index;
    /* 0x044 */ char pad44[4];
    /* 0x048 */ s16 unk48;                          /* inferred */
    /* 0x04A */ char pad4A[2];
    /* 0x04C */ s16 unk4C;                          /* inferred */
    /* 0x04E */ s16 unk_04E;
    /* 0x050 */ s16 timer_050;
    /* 0x052 */ s16 timer_052;
    /* 0x054 */ s16 timer_054;
    /* 0x056 */ s16 timer_056;
    /* 0x058 */ s16 timer_058;
    /* 0x05A */ s16 timer_05A;
    /* 0x05C */ s16 timer_05C;
    /* 0x05E */ u8 unk_05E;
    /* 0x05F */ char pad5F[1];
    /* 0x060 */ s16 unk_060;
    /* 0x062 */ s8 unk_062;
    /* 0x063 */ char pad63[1];
    /* 0x064 */ s16 unk_064;
    /* 0x066 */ s16 unk_066;
    /* 0x068 */ f32 unk_068;
    /* 0x06C */ Vec3f vel;
    /* 0x078 */ f32 unk_078;
    /* 0x07C */ f32 unk_07C;
    /* 0x080 */ char pad80[4];
    /* 0x084 */ f32 gravity;
    /* 0x088 */ s16 swork[0x28];
    /* 0x0D8 */ f32 fwork[0x32];
    /* 0x1A0 */ Vec3f vwork[0x32];
    /* 0x3F8 */ f32 unk_3F8;
    /* 0x3FC */ Vec3f sfxPos;
} Boss;                                             /* size = 0x408 */

void func_i3_801A239C(Boss *arg0);              /* static */
void func_i3_801A2C3C(Boss *arg0);              /* static */
void func_i3_801A3468(Boss *arg0);              /* static */
void func_i3_801A48B8(Boss *arg0);              /* static */
void func_i3_801A4EC0(Boss *arg0);              /* static */
void func_i3_801A8DB8(Vec3f *arg0, u32 arg1, f32 arg2); /* static */
extern AnimationHeader D_6009D30;
extern AnimationHeader D_600B1B4;
extern AnimationHeader D_600C15C;
extern AnimationHeader D_600D3DC;
extern AnimationHeader D_600E2C4;
extern Limb *D_600E470;
extern AnimationHeader D_600F744;
extern AnimationHeader D_601388C;
extern ? D_6016CF0;
extern ? D_6017090;
extern ? D_6017370;
extern ? D_601C820;
extern ? D_60231A4;
extern u8 D_801778A3;
static f32 D_i3_801C171C[2] = { 0.1f, 0.1f };   /* const */
static f32 D_i3_801C1728[2] = { M_DTOR, 0.1f }; /* const */
static f32 D_i3_801C1730[2] = { M_DTOR, 0.1f }; /* const */
static f32 D_i3_801C1758[4] = { 0.05f, 0.1f, 0.1f, 0.1f }; /* const */

void func_i3_8019E7F0(Effect *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Effect_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x188;
    arg0->unk_4E = 3;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.rot.z = 180.0f;
    arg0->obj.pos.z = arg3;
    if (Rand_ZeroOne() < 0.5f) {
        arg0->obj.rot.y = 180.0f;
    }
    arg0->unk_44 = 0x70;
    arg0->scale2 = arg4;
    arg0->vel.y = 5.0f;
    Object_SetInfo(&arg0->info, (u32) arg0->obj.id);
    arg0->info.unk_14 = 0;
}

void func_i3_8019E8B8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    Effect *var_a0;

    var_a0 = gEffects;
loop_1:
    if (var_a0->obj.status == 0) {
        func_i3_8019E7F0(var_a0, arg0, arg1, arg2, arg3);
        return;
    }
    var_a0 += 0x8C;
    if (var_a0 == gItems) {
        return;
    }
    goto loop_1;
}

void func_i3_8019E920(Effect *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 temp_ft1;

    Effect_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x188;
    arg0->unk_4E = (s16) arg8;
    if (arg8 == 2) {
        arg0->timer_50 = 0x1E;
        arg0->unk_4C = 3;
    }
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->vel.x = arg4;
    arg0->vel.y = arg5;
    arg0->vel.z = arg6;
    temp_ft1 = Rand_ZeroOne() * 360.0f;
    arg0->unk_44 = 0xB0;
    arg0->obj.rot.z = temp_ft1;
    arg0->scale2 = arg7;
    Object_SetInfo(&arg0->info, (u32) arg0->obj.id);
}

void func_i3_8019E9F4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    Effect *var_a0;

    var_a0 = gEffects + 0x3624;
loop_1:
    if (var_a0->obj.status == 0) {
        func_i3_8019E920(var_a0, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        return;
    }
    var_a0 -= 0x8C;
    if (var_a0 == (gEffects + 0x120C)) {
        return;
    }
    goto loop_1;
}

void func_i3_8019EA7C(Object_2F4 *arg0) {
    f32 sp34;
    s32 sp30;
    Vec3f *sp28;
    Vec3f *temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s8 temp_v0_3;

    temp_v0 = arg0->unk_0B8;
    if (temp_v0 == 0) {
        arg0->unk_114 = 12.0f;
        arg0->vel.z = 20.0f - D_80177D08;
    } else {
        arg0->vel.z = arg0->unk_118 - D_80177D08;
        if (temp_v0 == 2) {
            Math_SmoothStepToF(&arg0->obj.pos.x, gPlayer->pos.x, 1.0f, 100.0f, 10.0f);
        } else {
            arg0->unk_114 = 14.0f;
        }
    }
    temp_v0_2 = arg0->unk_046;
    temp_a0 = &arg0->sfxPos;
    if ((temp_v0_2 == 0) || (temp_v0_2 == 1)) {
        arg0->unk_046 = 3;
        sp28 = temp_a0;
        func_8005F0E8(temp_a0, &arg0->obj.pos);
        Audio_PlaySfx(0x11002052U, sp28, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if (func_800A73E4(&sp34, &sp30, arg0->obj.pos.x, -100.0f, arg0->obj.pos.z) != 0) {
        D_801782EC[sp30] = arg0->unk_114;
        D_801782EC[sp30].unk4 = (f32) (arg0->unk_114 * 0.95f);
        D_801782EC[sp30].unk-4 = (f32) (arg0->unk_114 * 0.95f);
        D_801782EC[sp30].unk8 = (f32) (arg0->unk_114 * 0.9f);
        D_801782EC[sp30].unk-8 = (f32) (arg0->unk_114 * 0.9f);
        D_801782EC[sp30].unkC = (f32) (arg0->unk_114 * 0.8f);
        D_801782EC[sp30].unk-C = (f32) (arg0->unk_114 * 0.8f);
        if (arg0->unk_0B8 != 2) {
            D_801782EC[sp30].unk10 = (f32) (arg0->unk_114 * 0.65f);
            D_801782EC[sp30].unk-10 = (f32) (arg0->unk_114 * 0.65f);
            D_801782EC[sp30].unk14 = (f32) (arg0->unk_114 * 0.45f);
            D_801782EC[sp30].unk-14 = (f32) (arg0->unk_114 * 0.45f);
            D_801782EC[sp30].unk18 = (f32) (arg0->unk_114 * 0.2f);
            D_801782EC[sp30].unk-18 = (f32) (arg0->unk_114 * 0.2f);
            D_801782EC[sp30].unk1C = (f32) (arg0->unk_114 * 0.1f);
            D_801782EC[sp30].unk-1C = (f32) (arg0->unk_114 * 0.1f);
        } else {
            D_801782EC[sp30].unk10 = (f32) (arg0->unk_114 * 0.75f);
            D_801782EC[sp30].unk-10 = (f32) (arg0->unk_114 * 0.75f);
            D_801782EC[sp30].unk14 = (f32) (arg0->unk_114 * 0.7f);
            D_801782EC[sp30].unk-14 = (f32) (arg0->unk_114 * 0.7f);
            D_801782EC[sp30].unk18 = (f32) (arg0->unk_114 * 0.65f);
            D_801782EC[sp30].unk-18 = (f32) (arg0->unk_114 * 0.65f);
            D_801782EC[sp30].unk1C = (f32) (arg0->unk_114 * 0.6f);
            D_801782EC[sp30].unk-1C = (f32) (arg0->unk_114 * 0.6f);
            D_801782EC[sp30].unk20 = (f32) (arg0->unk_114 * 0.55f);
            D_801782EC[sp30].unk-20 = (f32) (arg0->unk_114 * 0.55f);
            D_801782EC[sp30].unk24 = (f32) (arg0->unk_114 * 0.4f);
            D_801782EC[sp30].unk-24 = (f32) (arg0->unk_114 * 0.4f);
            D_801782EC[sp30].unk28 = (f32) (arg0->unk_114 * 0.3f);
            D_801782EC[sp30].unk-28 = (f32) (arg0->unk_114 * 0.3f);
            D_801782EC[sp30].unk2C = (f32) (arg0->unk_114 * 0.2f);
            D_801782EC[sp30].unk-2C = (f32) (arg0->unk_114 * 0.2f);
            D_801782EC[sp30].unk30 = (f32) (arg0->unk_114 * 0.1f);
            D_801782EC[sp30].unk-30 = (f32) (arg0->unk_114 * 0.1f);
        }
    }
    temp_v0_3 = arg0->unk_0D0;
    if (temp_v0_3 != 2) {
        if (temp_v0_3 == 3) {
            func_i3_801A8DB8(&arg0->obj.pos, 0x11002052U, arg0->vel.z);
            goto block_15;
        }
    } else {
block_15:
        Object_Kill(&arg0->obj, &arg0->sfxPos);
    }
}

void func_i3_8019EF30(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x113;
    if (Rand_ZeroOne() < 0.1f) {
        arg0->obj.id = 0x114;
    }
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_0F4.x = Rand_ZeroOne() * 360.0f;
    arg0->vel.x = arg4;
    arg0->vel.y = arg5;
    arg0->unk_0B8 = 2;
    arg0->timer_0C2 = 8;
    arg0->vel.z = arg6;
    Object_SetInfo(&arg0->info, (u32) arg0->obj.id);
    if (D_80178284 != 0) {
        arg0->info.bonus = 0;
    }
    Audio_PlaySfx(0x29000071U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i3_8019F038(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    Object_2F4 *var_a0;

    var_a0 = gObjects2F4 + 0xBD0;
loop_1:
    if (var_a0->obj.status == 0) {
        func_i3_8019EF30(var_a0, arg0, arg1, arg2, arg3, arg4, arg5);
        return;
    }
    var_a0 += 0x2F4;
    if (var_a0 == gBosses) {
        return;
    }
    goto loop_1;
}

void func_i3_8019F0B0(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x115;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->unk_0F4.x = Rand_ZeroOne() * 360.0f;
    arg0->vel.x = arg4;
    arg0->vel.y = arg5;
    arg0->unk_0B8 = 2;
    arg0->timer_0C2 = 8;
    arg0->vel.z = arg6;
    Object_SetInfo(&arg0->info, (u32) arg0->obj.id);
    if (D_80178284 != 0) {
        arg0->info.bonus = 0;
    }
    Audio_PlaySfx(0x29000071U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i3_8019F194(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    Object_2F4 *var_a0;

    var_a0 = gObjects2F4 + 0xBD0;
loop_1:
    if (var_a0->obj.status == 0) {
        func_i3_8019F0B0(var_a0, arg0, arg1, arg2, arg3, arg4, arg5);
        return;
    }
    var_a0 += 0x2F4;
    if (var_a0 == gBosses) {
        return;
    }
    goto loop_1;
}

void func_i3_8019F20C(Object_2F4 *arg0) {
    f32 sp8C;
    s32 sp88;
    Vec3f *sp6C;
    Vec3f *var_s0_3;
    f32 *var_s0;
    f32 *var_s0_2;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_ft3;
    f32 var_ft0;
    s16 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    u16 temp_v0_2;

    sp8C = 0.0f;
    if (arg0->obj.id == 0x115) {
        arg0->scale = 2.0f;
    }
    if (arg0->obj.id == 0x114) {
        var_ft0 = arg0->unk_0F4.y - 4.0f;
        arg0->unk_0F4.x -= 6.6f;
    } else {
        var_ft0 = arg0->unk_0F4.y + 2.0f;
        arg0->unk_0F4.x += 3.3f;
    }
    arg0->unk_0F4.y = var_ft0;
    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_ft3 = arg0->obj.pos.y * 0.05f;
        arg0->obj.pos.y = -100.0f;
        arg0->unk_114 = temp_ft3;
        /* fallthrough */
    case 1:
        arg0->unk_0B8 = 2;
        arg0->vel.y = arg0->unk_114;
        func_800A73E4(&sp8C, &sp88, arg0->obj.pos.x, arg0->obj.pos.y - 100.0f, arg0->obj.pos.z);
        var_s0 = D_i3_801BF8E0;
        arg0->obj.pos.y = sp8C;
        do {
            func_i3_8019E9F4(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, *var_s0, (Rand_ZeroOne() * 10.0f) + 10.0f, 0.0f, arg0->scale * 5.0f, 1);
            var_s0 += 4;
        } while (var_s0 != D_i3_801BF8F0);
        arg0->timer_0C2 = 5;
        Audio_PlaySfx(0x29000071U, &arg0->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        break;
    case 2:
        arg0->gravity = 0.5f;
        if (func_800A73E4(&sp8C, &sp88, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            func_8007A6F0(&arg0->obj.pos, 0x29000072);
            var_s0_2 = D_i3_801BF8E0;
            do {
                func_i3_8019E9F4(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, *var_s0_2, (Rand_ZeroOne() * 10.0f) + 10.0f, 0.0f, arg0->scale * 5.0f, 1);
                var_s0_2 += 4;
            } while (var_s0_2 != D_i3_801BF8F0);
        }
        if (arg0->timer_0BC == 0) {
            arg0->timer_0BC = 5;
            func_i3_8019E9F4(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, arg0->scale * 6.5f, 2);
        }
        if ((arg0->unk_0D0 != 0) || ((arg0->obj.id == 0x115) && (arg0->vel.y < 0.0f))) {
            sp6C = &arg0->obj.pos;
            func_8007D2C8(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, arg0->scale * 4.0f);
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            temp_v0_2 = arg0->obj.id;
            var_s0_3 = D_i3_801BF8F0;
            if (temp_v0_2 == 0x115) {
                do {
                    temp_fs1 = Rand_ZeroOne();
                    temp_fs0 = Rand_ZeroOne();
                    func_i3_8019F038(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, ((temp_fs1 - 0.5f) * 3.0f) + var_s0_3->x, ((temp_fs0 - 0.5f) * 3.0f) + var_s0_3->y, (Rand_ZeroOne() * -10.0f) - 10.0f);
                    var_s0_3 += 0xC;
                } while (var_s0_3 != &D_i3_801BF920);
            } else if (temp_v0_2 == 0x113) {
                arg0->unk_044 = 1;
            } else if (temp_v0_2 == 0x114) {
                if (*gGoldRingCount != 4) {
                    arg0->unk_044 = 0xE;
                } else {
                    arg0->unk_044 = 0x19;
                }
            }
            func_80066254(arg0);
            var_s1 = 0;
            do {
                func_800794CC(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.3f);
                var_s1 += 1;
            } while (var_s1 < 3);
            var_s1_2 = 0;
            do {
                temp_fs1_2 = Rand_ZeroOne();
                temp_fs0_2 = Rand_ZeroOne();
                func_i3_8019E9F4(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, (temp_fs1_2 - 0.5f) * 30.0f, (temp_fs0_2 - 0.5f) * 30.0f, 0.0f, ((2.0f * Rand_ZeroOne()) + 2.0f) * arg0->scale, 1);
                var_s1_2 += 1;
            } while (var_s1_2 != 7);
            func_8007A6F0(sp6C, 0x2903A008);
        }
        break;
    }
    arg0->obj.rot.y = (-gPlayer->unk_058 * 180.0f) / M_PI;
    arg0->obj.rot.x = (gPlayer->unk_05C * 180.0f) / M_PI;
    if (!(gFrameCount & 1)) {
        arg0->unk_0B6 += 1;
        if (arg0->unk_0B6 >= 3) {
            arg0->unk_0B6 = 0;
        }
    }
}

void func_i3_8019F7AC(Object_2F4 *arg0) {
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    u16 temp_v0;

    if (arg0->unk_0B8 != 0) {
        Matrix_Push(&gGfxMatrix);
        Matrix_RotateY(gGfxMatrix, arg0->unk_0F4.y * M_DTOR, 1U);
        Matrix_RotateX(gGfxMatrix, arg0->unk_0F4.x * M_DTOR, 1U);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v0 = arg0->obj.id;
        switch (temp_v0) {                          /* irregular */
        case 0x113:
            temp_v0_2 = gMasterDisp;
            gMasterDisp = temp_v0_2 + 8;
            temp_v0_2->words.w1 = (u32) &D_6017370;
            temp_v0_2->words.w0 = 0x06000000;
            break;
        case 0x114:
            if (!(gFrameCount & 1)) {
                RCP_SetupDL(&gMasterDisp, 0x29);
                temp_v0_3 = gMasterDisp;
                gMasterDisp = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xFA000000;
                temp_v0_3->words.w1 = 0xFFFF00FF;
            }
            temp_v0_4 = gMasterDisp;
            gMasterDisp = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0x06000000;
            temp_v0_4->words.w1 = (u32) &D_6017090;
            break;
        case 0x115:
            temp_v0_5 = gMasterDisp;
            gMasterDisp = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) &D_6016CF0;
            temp_v0_5->words.w0 = 0x06000000;
            break;
        }
        Matrix_Pop(&gGfxMatrix);
        Graphics_SetScaleMtx(arg0->scale * 3.5f);
        RCP_SetupDL(&gMasterDisp, 0x40);
        temp_v0_6 = gMasterDisp;
        gMasterDisp = temp_v0_6 + 8;
        temp_v0_6->words.w0 = 0xFA000000;
        temp_v0_6->words.w1 = 0xFF8080A0;
        temp_v0_7 = gMasterDisp;
        gMasterDisp = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0x06000000;
        temp_v0_7->words.w1 = D_i3_801BF92C[arg0->unk_0B6];
    }
}

void func_i3_8019F99C(Object_2F4 *arg0, Effect *arg1, f32 arg2) {
    f32 temp_fv0;
    f32 temp_fv0_2;

    Effect_Initialize(arg1);
    arg1->obj.status = 2;
    arg1->obj.id = 0x188;
    temp_fv0 = arg0->obj.pos.x;
    arg1->vel.x = temp_fv0;
    arg1->obj.pos.x = temp_fv0;
    arg1->obj.pos.y = -2000.0f;
    arg1->vel.y = arg0->obj.pos.y;
    temp_fv0_2 = arg0->obj.pos.z;
    arg1->vel.z = temp_fv0_2;
    arg1->obj.pos.z = temp_fv0_2;
    arg1->scale1 = arg2;
    arg1->unk_60.y = arg0->obj.rot.y;
    arg1->obj.rot.z = Rand_ZeroOne() * 360.0f;
    arg1->unk_44 = 0xFF - (arg0->unk_04E * 8);
    if (arg1->unk_44 < 0) {
        arg1->unk_44 = 0;
    }
    arg1->unk_48 = 1;
    arg1->scale2 = 20.0f - ((f32) arg0->unk_04E * 0.5f);
    Object_SetInfo(&arg1->info, (u32) arg1->obj.id);
}

void func_i3_8019FAA4(Boss *arg0, Effect *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Vec3f sp38;
    ? sp2C;
    f32 temp_ft0;

    sp2C.unk0 = (f32) D_i3_801BF920.x;
    sp2C.unk4 = (f32) D_i3_801BF920.y;
    sp2C.unk8 = (f32) D_i3_801BF920.z;
    Effect_Initialize(arg1);
    arg1->obj.status = 2;
    arg1->obj.id = 0x188;
    arg1->obj.pos.x = arg2;
    arg1->obj.pos.y = arg3;
    arg1->obj.pos.z = arg4;
    arg1->vel.x = 0.0f;
    arg1->scale2 = 10.0f;
    arg1->vel.y = arg5;
    if (gBossHealthBar != 0) {
        if (gBosses->fwork[0x1F] > 0.0f) {
            if (gBosses->swork[0] != 7) {
                Matrix_RotateY(gCalcMatrix, gBosses->obj.rot.y * M_DTOR, 0U);
                sp48 = 0.0f;
                sp4C = 0.0f;
                sp44 = gBosses->fwork[0x1F] * 5.0f;
                Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp44, &sp38);
                arg1->vel.x = (bitwise f32) sp38 * arg6;
                arg1->vel.z = gPlayer->vel.z + (sp38.z * arg6);
            } else {
                Matrix_RotateZ(gCalcMatrix, arg0->obj.rot.z * M_DTOR, 0U);
                Matrix_RotateX(gCalcMatrix, gBosses->obj.rot.x * M_DTOR, 1U);
                Matrix_RotateY(gCalcMatrix, gBosses->unk_07C * M_DTOR, 1U);
                sp44 = arg1->obj.pos.x - arg0->obj.pos.x;
                sp48 = arg1->obj.pos.y - arg0->obj.pos.y;
                sp4C = arg1->obj.pos.z - arg0->obj.pos.z;
                Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp44, &sp38);
                arg1->obj.pos.x = arg0->obj.pos.x + (bitwise f32) sp38;
                arg1->obj.pos.y = arg0->obj.pos.y + sp38.y;
                arg1->obj.pos.z = arg0->obj.pos.z + sp38.z;
                arg1->vel.z = gPlayer->vel.z;
                arg1->vel.y = arg5;
                if (gBosses->unk_04E >= 2) {
                    arg1->scale2 = 15.0f;
                }
            }
        } else {
            arg1->vel.z = gPlayer->vel.z;
        }
    } else {
        arg1->vel.x = (Rand_ZeroOne() - 0.5f) * 30.0f;
        arg1->vel.z = (Rand_ZeroOne() - 0.5f) * 30.0f;
    }
    arg1->unk_60.y = arg0->obj.rot.y;
    arg1->unk_60.x = 90.0f;
    temp_ft0 = Rand_ZeroOne() * 360.0f;
    arg1->unk_44 = 0xFF;
    arg1->unk_48 = 1;
    arg1->unk_4E = 4;
    arg1->unk_4C = 5;
    arg1->obj.rot.z = temp_ft0;
    Object_SetInfo(&arg1->info, (u32) arg1->obj.id);
}

void func_i3_8019FDE0(Boss *arg0, Effect *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    f32 temp_ft1;

    Effect_Initialize(arg1);
    arg1->obj.status = 2;
    arg1->obj.id = 0x188;
    arg1->obj.pos.x = arg2;
    arg1->obj.pos.y = arg3;
    arg1->obj.pos.z = arg4;
    if (arg6 != 0) {
        arg1->vel.z = gPlayer->vel.z + 80.0f;
    } else {
        arg1->vel.z = gPlayer->vel.z + 15.0f;
    }
    arg1->scale2 = arg5;
    arg1->unk_60.x = 0.0f;
    arg1->unk_60.y = arg0->obj.rot.y;
    temp_ft1 = Rand_ZeroOne() * 360.0f;
    arg1->unk_44 = 0xFF;
    arg1->unk_48 = 1;
    arg1->obj.rot.z = temp_ft1;
    arg1->unk_4E = arg6 + 5;
    Object_SetInfo(&arg1->info, (u32) arg1->obj.id);
    arg1->info.damage = 0x28;
}

void func_i3_8019FEE8(Object_2F4 *arg1) {
    Effect *var_a1;

    var_a1 = gEffects + 0x2648;
loop_1:
    if (var_a1->obj.status == 0) {
        func_i3_8019F99C(arg1, var_a1, (bitwise f32) arg1);
        return;
    }
    var_a1 -= 0x8C;
    if ((u32) var_a1 < (u32) gEffects) {
        return;
    }
    goto loop_1;
}

void func_i3_8019FF44(Boss *arg1, Effect *arg2, f32 arg3, f32 arg4, f32 arg5) {
    Effect *var_a1;

    var_a1 = gEffects + 0x2648;
loop_1:
    if (var_a1->obj.status == 0) {
        func_i3_8019FAA4(arg1, arg2, (bitwise f32) var_a1, (bitwise f32) arg1, (bitwise f32) arg2, arg3, arg4, arg5);
        return;
    }
    var_a1 -= 0x8C;
    if ((u32) var_a1 < (u32) gEffects) {
        return;
    }
    goto loop_1;
}

void func_i3_8019FFC0(Boss *arg1, Effect *arg2, f32 arg3, s32 arg4, f32 arg5) {
    Effect *var_a1;

    var_a1 = gEffects + 0x2648;
loop_1:
    if (var_a1->obj.status == 0) {
        func_i3_8019FDE0(arg1, arg2, (bitwise f32) var_a1, (bitwise f32) arg1, (bitwise f32) arg2, arg3, arg4, arg5);
        return;
    }
    var_a1 -= 0x8C;
    if ((u32) var_a1 < (u32) gEffects) {
        return;
    }
    goto loop_1;
}

void func_i3_801A003C(Object_2F4 *arg0) {
    Vec3f *sp20;
    Vec3f *temp_a0;
    s16 temp_v0;

    temp_v0 = arg0->unk_0B8;
    switch (temp_v0) {                              /* irregular */
    case 0:
        if (arg0->timer_0BE == 0) {
            arg0->unk_0B8 = 1;
            arg0->timer_0BE = 0x32;
            return;
        }
        if (arg0->timer_0BC == 0) {
            arg0->timer_0BC = 2;
            func_i3_8019FEE8(arg0, 0x447A0000, arg0);
            arg0->unk_04E += 1;
            return;
        }
        return;
    case 1:
        temp_a0 = &arg0->sfxPos;
        if (arg0->timer_0BE == 0) {
            arg0->unk_0B8 = 0;
            arg0->timer_0BE = 0x32;
            arg0->unk_04E = 0;
            sp20 = temp_a0;
            func_8005F0E8(temp_a0, &arg0->obj.pos);
            Audio_PlaySfx(0x19035053U, sp20, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        break;
    }
}

void func_i3_801A0120(Effect *arg0) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s32 sp4C;
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fa1;
    f32 var_ft4;
    f32 var_ft4_2;
    f32 var_ft5;
    s16 temp_v0;
    s16 temp_v0_2;
    u16 temp_t6;
    u8 temp_t0;
    u8 temp_t3;
    u8 temp_t4;
    u8 temp_t7;

    temp_t6 = (u16) arg0->unk_4E;
    var_fa1 = 1.0f;
    switch (temp_t6) {
    case 0:
        Matrix_Translate(gCalcMatrix, arg0->vel.x, arg0->vel.y, arg0->vel.z, (u8) 0);
        Matrix_RotateY(gCalcMatrix, arg0->unk_60.y * M_DTOR, 1U);
        Matrix_RotateX(gCalcMatrix, arg0->unk_60.x * M_DTOR, 1U);
        sp3C = 0.0f;
        sp40 = 0.0f;
        sp44 = -arg0->scale1;
        Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp3C, &arg0->obj.pos);
        arg0->unk_60.x += 5.0f;
        if (!(gFrameCount & 1)) {
            temp_t0 = arg0->unk_4C + 1;
            arg0->unk_4C = temp_t0;
            if ((temp_t0 & 0xFF) >= 3) {
                arg0->unk_4C = 0;
            }
        }
        if (gPlayer->state_1C8 != PLAYERSTATE_1C8_7) {
            func_8007A774(gPlayer, arg0, arg0->scale2 * 12.0f);
        }
        if (arg0->unk_60.x > 190.0f) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        sp48 = (s32) arg0->unk_48;
        if (func_800A73E4(&sp5C, &sp4C, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0) {
            arg0->unk_48 = 1;
            if (arg0->scale2 == 20.0f) {
                Audio_PlaySfx(0x19035054U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        } else {
            arg0->unk_48 = 0;
        }
        temp_v0 = arg0->unk_48;
        if (sp48 != temp_v0) {
            if (temp_v0 != 0) {
                var_ft5 = 50.0f;
            } else {
                var_ft5 = -50.0f;
            }
            if (arg0->index & 1) {
                var_ft4 = 100.0f;
            } else {
                var_ft4 = -100.0f;
            }
            sp58 = var_ft4;
            sp54 = var_ft5;
            temp_fv1 = var_ft4 * 0.25f;
            func_i3_8019E9F4(arg0->obj.pos.x + var_ft4, arg0->obj.pos.y + var_ft5, arg0->obj.pos.z, temp_fv1, (Rand_ZeroOne() * 10.0f) + 20.0f, temp_fv1, 20.0f, 1);
            return;
        }
    default:
        return;
    case 1:
        if (arg0->timer_50 == 0) {
            arg0->timer_50 = 4;
            temp_t3 = arg0->unk_4C + 1;
            arg0->unk_4C = temp_t3;
            if ((temp_t3 & 0xFF) >= 6) {
                arg0->unk_4C = 0;
                Object_Kill(&arg0->obj, &arg0->sfxPos);
            }
        }
        temp_fv0 = arg0->scale2;
        if (temp_fv0 > 10.0f) {
            arg0->vel.y -= 2.5f;
            return;
        }
        if (temp_fv0 > 4.0f) {
            arg0->vel.y -= 1.0f;
            return;
        }
        break;
    case 2:
        if (arg0->timer_50 == 0) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        Math_SmoothStepToF(&arg0->scale2, 0.0f, 0.1f, 0.2f, 0.0f);
        arg0->obj.rot.z += 3.0f;
        arg0->vel.y -= 0.3f;
        return;
    case 3:
        Math_SmoothStepToF(&arg0->obj.rot.z, -190.0f, 1.0f, 10.0f, 0.0f);
        arg0->vel.y -= 0.3f;
        if (arg0->obj.rot.z <= -180.0f) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
            return;
        }
        break;
    case 4:
        if (gBosses->swork[0] != 7) {
            Math_SmoothStepToF(&arg0->vel.y, -40.0f, 1.0f, 1.0f, 1.0f);
        } else {
            arg0->vel.z = gPlayer->vel.z;
            Math_SmoothStepToF(&arg0->vel.y, -65.0f, 2.0f, 1.0f, 0.5f);
        }
        if (gPlayer->state_1C8 != PLAYERSTATE_1C8_7) {
            func_8007A774(gPlayer, arg0, arg0->scale2 * 12.0f);
        }
        if (arg0->obj.pos.y < -20.0f) {
            Object_Kill(&arg0->obj, &arg0->sfxPos);
        }
        arg0->obj.rot.z += 6.0f;
        if (arg0->obj.rot.z >= 360.0f) {
            arg0->obj.rot.z = 0.0f;
        }
        sp48 = (s32) arg0->unk_48;
        if (func_800A73E4(&sp5C, &sp4C, arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z) != 0) {
            arg0->unk_48 = 1;
            if (arg0->scale2 == 20.0f) {
                Audio_PlaySfx(0x19035054U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
        } else {
            arg0->unk_48 = 0;
        }
        temp_v0_2 = arg0->unk_48;
        if ((sp48 != temp_v0_2) && (temp_v0_2 != 0)) {
            if (arg0->index & 1) {
                var_ft4_2 = 100.0f;
            } else {
                var_ft4_2 = -100.0f;
            }
            sp58 = var_ft4_2;
            temp_fv1_2 = var_ft4_2 * 0.25f;
            func_i3_8019E9F4(arg0->obj.pos.x + var_ft4_2, arg0->obj.pos.y + -50.0f, arg0->obj.pos.z, temp_fv1_2, (Rand_ZeroOne() * 10.0f) + 20.0f, temp_fv1_2, 20.0f, 1);
            return;
        }
        break;
    case 5:
        temp_t7 = arg0->unk_4C + 1;
        arg0->unk_4C = temp_t7;
        if ((temp_t7 & 0xFF) >= 3) {
            arg0->unk_4C = 0;
        }
        temp_fv0_2 = arg0->unk_60.x;
        if (temp_fv0_2 < 7.5f) {
            arg0->unk_60.x = temp_fv0_2 + 0.25f;
        }
        arg0->unk_60.z += 10.0f;
        arg0->vel.x = __sinf(arg0->unk_60.z * M_DTOR) * (arg0->unk_60.x * 10.0f);
        arg0->vel.y = __cosf(arg0->unk_60.z * M_DTOR) * (arg0->unk_60.x * 10.0f);
        arg0->vel.z = gPlayer->vel.z + 15.0f;
        if (gPlayer->state_1C8 != PLAYERSTATE_1C8_7) {
            func_8007A774(gPlayer, arg0, arg0->scale2 * 18.0f);
            if ((arg0->unk_4C == 0) && ((temp_fv0_3 = arg0->scale2, (temp_fv0_3 >= 9.8f)) || (temp_fv0_3 <= 4.4f))) {
                Audio_PlaySfx(0x31033078U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                return;
            }
        } else {
            arg0->vel.z += 65.0f;
            if (fabsf(gBosses->obj.pos.z - arg0->obj.pos.z) >= 2000.0f) {
                func_8001A55C(&arg0->sfxPos, 0x31033078U);
                return;
            }
        }
        break;
    case 6:
        var_fa1 = -1.0f;
        /* fallthrough */
    case 7:
        temp_t4 = arg0->unk_4C + 1;
        arg0->unk_4C = temp_t4;
        if ((temp_t4 & 0xFF) >= 3) {
            arg0->unk_4C = 0;
        }
        arg0->unk_60.z += 20.0f;
        sp50 = var_fa1;
        arg0->vel.x = __sinf(arg0->unk_60.z * M_DTOR) * var_fa1 * 50.0f;
        arg0->vel.y = __cosf(arg0->unk_60.z * M_DTOR) * var_fa1 * 50.0f;
        arg0->vel.z = gPlayer->vel.z + 80.0f;
        if (gPlayer->state_1C8 != PLAYERSTATE_1C8_7) {
            func_8007A774(gPlayer, arg0, arg0->scale2 * 18.0f);
            if ((arg0->unk_4C == 0) && ((temp_fv0_4 = arg0->scale2, (temp_fv0_4 >= 9.8f)) || (temp_fv0_4 <= 4.4f))) {
                Audio_PlaySfx(0x31033078U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                return;
            }
        } else if (fabsf(gBosses->obj.pos.z - arg0->obj.pos.z) >= 2000.0f) {
            func_8001A55C(&arg0->sfxPos, 0x31033078U);
        }
        break;
    }
}

void func_i3_801A0AF0(Effect *arg0) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    u16 temp_t6;

    Graphics_SetScaleMtx(arg0->scale2);
    temp_t6 = (u16) arg0->unk_4E;
    switch (temp_t6) {
    case 0:
        temp_v0 = gMasterDisp;
        gMasterDisp = temp_v0 + 8;
        temp_v0->words.w0 = 0xFA000000;
        temp_v0->words.w1 = (arg0->unk_44 & 0xFF) | 0xFF808000;
        temp_v0_2 = gMasterDisp;
        gMasterDisp = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0x06000000;
        temp_v0_2->words.w1 = D_i3_801BF92C[arg0->unk_4C];
        return;
    case 1:
    case 2:
        temp_v0_3 = gMasterDisp;
        gMasterDisp = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = (arg0->unk_44 & 0xFF) | 0xFF808000;
        temp_v0_4 = gMasterDisp;
        gMasterDisp = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0x06000000;
        temp_v0_4->words.w1 = D_i3_801BF944[arg0->unk_4C];
        return;
    case 3:
        temp_v0_5 = gMasterDisp;
        gMasterDisp = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFA000000;
        temp_v0_5->words.w1 = (arg0->unk_44 & 0xFF) | 0xFF808000;
        temp_v0_6 = gMasterDisp;
        gMasterDisp = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_601C820;
        temp_v0_6->words.w0 = 0x06000000;
        return;
    case 4:
    case 5:
    case 6:
    case 7:
        RCP_SetupDL(&gMasterDisp, 0x35);
        temp_v0_7 = gMasterDisp;
        gMasterDisp = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xFA000000;
        temp_v0_7->words.w1 = (arg0->unk_44 & 0xFF) | 0xFF808000;
        temp_v0_8 = gMasterDisp;
        gMasterDisp = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0x06000000;
        temp_v0_8->words.w1 = D_i3_801BF92C[arg0->unk_4C];
        RCP_SetupDL(&gMasterDisp, 0x40);
        /* fallthrough */
    default:
        return;
    }
}

void func_i3_801A0CEC(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4) {
    Object_2F4_Initialize(arg0);
    arg0->obj.status = 2;
    arg0->obj.id = 0x116;
    arg0->obj.pos.x = arg1;
    arg0->unk_046 = 1;
    arg0->unk_0B8 = (s16) arg4;
    arg0->vel.z = arg3;
    arg0->unk_118 = arg3;
    arg0->obj.pos.z = arg2;
    if (arg4 == 2) {
        arg0->unk_114 = 18.0f;
    }
    Object_SetInfo(&arg0->info, (u32) arg0->obj.id);
    arg0->info.bonus = 0;
}

void func_i3_801A0D90(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    Object_2F4 *var_a0;

    var_a0 = gObjects2F4 + 0xBD0;
loop_1:
    if (var_a0->obj.status == 0) {
        func_i3_801A0CEC(var_a0, arg0, arg1, arg2, arg3);
        return;
    }
    var_a0 += 0x2F4;
    if (var_a0 == gBosses) {
        return;
    }
    goto loop_1;
}

void func_i3_801A0DF8(f32 arg0, f32 arg1, f32 arg2, u32 arg3, f32 arg4) {
    s32 sp2C;
    u32 sp28;                                       /* compiler-managed */
    Object_2F4 *sp24;
    Object_2F4 *temp_a2;
    Vec3f *temp_a0;

    sp28 = arg3;
    switch (arg3) {
    case 0:
        if (*D_80177A10 != 0) {
            sp2C = 5;
            *(D_80177A10 + 4) = (s32) (Rand_ZeroOne() * 10.0f) + 0x80;
        } else {
            sp2C = 4;
            *D_80177A10 = (s32) (Rand_ZeroOne() * 10.0f) + 0x80;
        }
        break;
    case 1:
    case 4:
        sp2C = 6;
        break;
    case 2:
        sp2C = 4;
        break;
    case 3:
        sp2C = 5;
        break;
    }
    temp_a2 = &gObjects2F4[sp2C];
    sp24 = temp_a2;
    Object_2F4_Initialize(temp_a2);
    temp_a2->obj.status = 2;
    temp_a2->obj.id = 0x117;
    Object_SetInfo(&temp_a2->info, 0x117U & 0xFFFF);
    temp_a2->unk_0B8 = 0;
    temp_a2->obj.pos.x = arg0;
    temp_a2->obj.pos.z = arg1;
    temp_a2->obj.rot.y = arg2;
    if (sp28 != 4) {
        temp_a2->obj.pos.y = -80.0f * arg4;
        return;
    }
    temp_a0 = &temp_a2->sfxPos;
    temp_a2->timer_0BC = 0;
    temp_a2->timer_0BE = 0x32;
    temp_a2->unk_04E = 0;
    sp28 = temp_a0;
    temp_a2->obj.pos.y = -1.0f * arg4;
    func_8005F0E8(temp_a0, &temp_a2->obj.pos);
    Audio_PlaySfx(0x19035053U, sp28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
}

void func_i3_801A0FD4(Object_2F4 *arg0, s32 arg1) {
    Vec3f *temp_v0;

    if (*(gTeamShields + 0xC + -(arg1 * 4)) > 0) {
        Object_2F4_Initialize(arg0);
        arg0->obj.status = 2;
        arg0->obj.id = 0xC3;
        temp_v0 = &D_i3_801BF95C[arg1];
        arg0->obj.pos.x = gPlayer->pos.x + temp_v0->x;
        arg0->obj.pos.y = gPlayer->pos.y + temp_v0->y;
        arg0->unk_0B8 = 0;
        arg0->unk_07C = 1;
        arg0->vel.z = 0.0f;
        arg0->vel.y = 0.0f;
        arg0->obj.rot.x = 0.0f;
        arg0->obj.pos.z = gPlayer->pos.z + temp_v0->z;
        arg0->obj.rot.y = 180.0f;
        Object_SetInfo(&arg0->info, 0xC3U & 0xFFFF);
        Audio_PlaySfx(0x3100000CU, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
}

void func_i3_801A10F4(Player *player) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Vec3f sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Object *sp30;
    Vec3f *sp2C;
    Effect *var_a0;
    Vec3f *var_a1;
    f32 temp_fv0;
    f32 temp_fv1;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;

    if (D_80177A10->unk0 != 0) {
        D_80177A10->unk0 -= 1;
    }
    if (D_80177A10->unk4 != 0) {
        D_80177A10->unk4 = (s32) (D_80177A10->unk4 - 1);
    }
    temp_t8 = player->unk_1D0;
    switch (temp_t8) {
    case 0:
        D_80177A80 = 0;
        Rand_SetSeed(1, 0x71AC, 0x263A);
        player->unk_1D0 = 1;
        player->camEye.x = -2000.0f;
        D_80177978 = -2800.0f;
        D_80177980 = 120.0f;
        player->camEye.y = 120.0f;
        player->camEye.z = -1800.0f;
        D_80177988 = -2800.0f;
        D_801779A0 = -1000.0f;
        player->camAt.x = -1000.0f;
        player->camAt.y = 1400.0f;
        D_801779B8 = 400.0f;
        D_801779C0 = -2300.0f;
        player->camAt.z = -2300.0f;
        *D_80177A48 = 0.0045f;
        player->unk_034 = 0.0f;
        player->unk_0D0 = 0.0f;
        D_80178340 = 0xFF;
        D_80178358 = 0;
        func_i3_801A0DF8(-750.0f, -2600.0f, 300.0f, 2U, 1.0f);
        Audio_PlaySfx(0x3140807EU, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        break;
    case 1:
        D_80177CE8 += 30.0f;
        temp_v0 = D_80177A80;
        if (temp_v0 == 0x8C) {
            func_i3_801A0DF8(-400.0f, -2000.0f, 45.0f, 3U, 1.0f);
        }
        if (temp_v0 == 0x118) {
            func_i3_801A0DF8(-1730.0f, -2300.0f, 250.0f, 1U, 1.0f);
        }
        if (temp_v0 == 0x64) {
            Object_Kill(&(gObjects2F4 + 0xBD0)->obj, gObjects2F4 + 0xCD0);
        }
        if (temp_v0 == 0xF0) {
            Object_Kill(&(gObjects2F4 + 0xEC4)->obj, gObjects2F4 + 0xFC4);
        }
        if (temp_v0 == 0x17C) {
            Object_Kill(&(gObjects2F4 + 0x11B8)->obj, gObjects2F4 + 0x12B8);
        }
        if (temp_v0 < 3) {
            D_80178340 = 0xFF;
        }
        if (temp_v0 == 0x172) {
            D_80178358 = 0xFF;
            D_80178348 = 0xFF;
            D_80178350 = 0xFF;
            D_80178354 = 0xFF;
            D_8017835C = 8;
        }
        if (!(gFrameCount & 7)) {
            sp34 = Rand_ZeroOne();
            sp38 = Rand_ZeroOne();
            sp3C = Rand_ZeroOne();
            func_i3_8019E8B8((sp34 - 0.5f) * 6000.0f, ((sp38 - 0.5f) * 5.0f) - 90.0f, ((sp3C * 2000.0f) - 6000.0f) + D_80177D20, (Rand_ZeroOne() * 20.0f) + 20.0f);
        }
        if (temp_v0 == 0x17C) {
            var_a1 = &gEffects->sfxPos;
            var_a0 = gEffects;
            do {
                sp30 = &var_a0->obj;
                sp2C = var_a1;
                Object_Kill(&var_a0->obj, var_a1);
                var_a1 += 0x8C;
                var_a0 = (Effect *) (&var_a0->obj + 0x8C);
            } while (var_a1 != (gItems + 0x80));
            func_i3_801A0DF8(400.0f, -2800.0f, (bitwise f32) var_a0, (u32) var_a1, 340.0f, 1, 1.0f);
        }
        if (temp_v0 == 0x19A) {
            player->unk_1D0 += 1;
            player->camEye.x = 200.0f;
            D_80177978 = 800.0f;
            player->camEye.y = 140.0f;
            D_80177980 = player->pos.y + 200.0f;
            D_80177988 = 400.0f;
            player->camEye.z = 400.0f;
            player->camAt.x = 400.0f;
            D_801779A0 = 200.0f;
            player->camAt.y = 140.0f;
            D_801779B8 = 1200.0f;
            player->pos.y = 1200.0f;
            player->camAt.z = -500.0f;
            player->pos.z = -2500.0f;
            func_i3_801A0FD4((bitwise Object_2F4 *) 1200.0f, (s32) gObjects2F4, 0);
            func_i3_801A0FD4(gObjects2F4 + 0x2F4, 1);
            func_i3_801A0FD4(gObjects2F4 + 0x5E8, 2);
            D_801779C0 = -3000.0f;
            D_80177988 = -3400.0f;
            func_8001A55C(&player->unk_460, 0x3140807EU);
            func_8001D444(0U, 0x33U, 0U, 0xFFU);
            func_80057814(player);
            func_8001C8B8(D_801778A3);
            *D_80177A48 = 0.01f;
        }
        break;
    case 2:
        D_80177CE8 += 60.0f;
        D_80178358 = 0;
        D_8017835C = 8;
        Math_SmoothStepToF(D_80177A48, 0.02f, 1.0f, 0.0000003f, 0.0f);
        temp_v0_2 = D_80177A80;
        if (temp_v0_2 == 0x20D) {
            func_800BA808(gMsg_ID_10010, RCID_FOX);
        }
        if (temp_v0_2 == 0x226) {
            Object_Kill(&(gObjects2F4 + 0xEC4)->obj, gObjects2F4 + 0xFC4);
            func_i3_801A0DF8(30.0f, -1500.0f, 160.0f, 3U, 2.0f);
        }
        if (player->camEye.z <= -2465.0f) {
            player->unk_1D0 += 1;
            D_80177980 = player->pos.y + 180.0f;
            D_801779A0 = 0.0f;
            D_80177978 = 0.0f;
            D_801779C0 = -2800.0f;
            *D_80177A48 = 0.06f;
        }
        break;
    case 3:
        D_80177CE8 += 60.0f;
        if (!(gFrameCount & 3)) {
            sp38 = Rand_ZeroOne();
            sp3C = Rand_ZeroOne();
            func_i3_8019E8B8((sp38 - 0.5f) * 6000.0f, -400.0f - ((player->camEye.y - 1380.0f) * 0.3f), ((sp3C - 0.5f) * 2000.0f) + 500.0f + D_80177D20, (Rand_ZeroOne() * 20.0f) + 20.0f);
        }
        if (D_80177A80 == 0x267) {
            func_800A6028(&player->unk_460, 0x09000002U);
            gObjects2F4->unk770 = 5.0f;
            gObjects2F4->unk_0B8 = 3;
            gObjects2F4->unk3AC = 2;
            gObjects2F4->unk6A0 = 1;
            gObjects2F4->unk47C = (f32) gObjects2F4->unk770;
            gObjects2F4->unk_188 = gObjects2F4->unk770;
            player->timer_1F8 = (s32) 3;
            player->unk_190 = 5.0f;
            player->unk_1D0 += 1;
            player->unk_194 = 5.0f;
        }
        break;
    case 4:
        D_80177978 = player->pos.x;
        D_80177980 = player->pos.y;
        D_80177988 = player->unk_138 + 1000.0f;
        D_801779A0 = player->pos.x;
        D_801779B8 = player->pos.y;
        D_801779C0 = player->unk_138 + 1100.0f;
        *D_80177A48 = 0.03f;
        D_801779A8[gMainController] = 60.0f;
        player->unk_190 = 2.0f;
        if (player->timer_1F8 == 0) {
            D_80178358 = 0xFF;
            D_8017835C = 0x18;
            D_80178350 = 0xFF;
            D_80178354 = 0xFF;
            D_80178348 = 0xFF;
        }
        if (D_80178340 == 0xFF) {
            func_8001D444(0U, 0x800BU, 0U, 0xFFU);
            player->pos.z = 0.0f;
            player->unk_0D0 = D_80161A54;
            func_800A6148();
            D_80177838 = 0x32;
            temp_fv1 = 350.0f * player->unk_148;
            temp_fv0 = player->pos.x;
            player->state_1C8 = PLAYERSTATE_1C8_3;
            player->unk_1D0 = 0;
            player->camEye.y = temp_fv1 + 50.0f;
            player->camAt.y = temp_fv1 + 20.0f;
            player->pos.y = 350.0f;
            player->camEye.x = temp_fv0;
            player->camAt.x = temp_fv0;
            player->camEye.z = 30.0f;
            player->camAt.z = player->unk_138;
            D_80177950 = 1.0f;
            func_8001D1C8(0xFFU, 3);
            Audio_PlaySfx(0x4100C023U, &D_800C5D28, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            D_80178488 = 1;
            D_80178358 = 0;
            player->timer_1F8 = 0xF;
            gPlayer->shields = 0xFF;
        }
        break;
    case 10:
        D_80177CE8 += 60.0f;
        break;
    }
    Math_SmoothStepToF(&player->camEye.x, D_80177978, *D_80177A48, 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.y, D_80177980, *D_80177A48, 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camEye.z, D_80177988, *D_80177A48, 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, *D_80177A48, 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, *D_80177A48, 20000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, *D_80177A48, 20000.0f, 0.0f);
    Matrix_RotateY(gCalcMatrix, (player->unk_0E8 + 180.0f) * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0E4 * M_DTOR), 1U);
    sp50 = 0.0f;
    sp54 = 0.0f;
    sp58 = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp50, &sp44);
    player->vel.x = (bitwise f32) sp44;
    player->vel.z = sp44.z;
    player->vel.y = sp44.y;
    player->pos.x += player->vel.x;
    player->pos.y += player->vel.y;
    player->pos.z += player->vel.z;
    player->unk_138 = player->pos.z + player->unk_08C;
}

void func_i3_801A1CD8(Object_2F4 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, s32 argA) {
    f32 temp_ft2;

    Object_2F4_Initialize(arg0);
    arg0->obj.status = 1;
    arg0->obj.id = 0xBD;
    arg0->unk_0B8 = 0x28;
    arg0->unk_04A = 3;
    arg0->unk_046 = (s16) argA;
    arg0->obj.pos.x = arg1;
    arg0->obj.pos.y = arg2;
    arg0->obj.pos.z = arg3;
    arg0->obj.rot.x = arg4;
    arg0->obj.rot.y = arg5;
    arg0->obj.rot.z = arg6;
    arg0->vel.x = arg7;
    arg0->vel.y = arg8;
    arg0->unk_050 = (s32) 3;
    arg0->vel.z = arg9;
    arg0->unk_114 = (Rand_ZeroOne() - 0.5f) * 25.0f;
    arg0->unk_118 = (Rand_ZeroOne() - 0.5f) * 25.0f;
    temp_ft2 = (Rand_ZeroOne() - 0.5f) * 25.0f;
    arg0->unk_124.y = 2000.0f;
    arg0->unk_11C = temp_ft2;
    arg0->gravity = 3.5f;
    arg0->scale = 5.5f;
    Object_SetInfo(&arg0->info, (u32) arg0->obj.id);
}

void func_i3_801A1E14(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s32 arg9) {
    Object_2F4 *var_a0;

    var_a0 = gObjects2F4 + 0xAE3C;
loop_1:
    if (var_a0->obj.status == 0) {
        func_i3_801A1CD8(var_a0, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        return;
    }
    var_a0 -= 0x2F4;
    if ((u32) var_a0 < (u32) gObjects2F4) {
        return;
    }
    goto loop_1;
}

void func_i3_801A1EB0(Boss *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_i3_8019E9F4(arg1 + arg2, arg3, arg4, 20.0f, (Rand_ZeroOne() * 10.0f) + 20.0f, 0.0f, 20.0f, 1);
    func_i3_8019E9F4(arg1 - arg2, arg3, arg4, -20.0f, (Rand_ZeroOne() * 10.0f) + 20.0f, 0.0f, 20.0f, 1);
}

void func_i3_801A1F80(Boss *bossSO) {
    f32 *temp_t2;
    f32 *temp_v1;
    f32 *temp_v1_2;
    f32 *temp_v1_3;
    f32 *temp_v1_4;
    f32 temp_fv0;
    s32 temp_v0;
    s32 temp_v0_2;

    if (D_80178284 != 0) {
        bossSO->unk_3F8 = 5.5f;
    }
    if (bossSO->unk_060 == 0) {
        func_800182F4(0x101400FF);
        func_800182F4(0x111400FF);
        D_80178284 = 1;
        gBossFrameCount = 0;
        bossSO->unk_060 = 0x258;
        bossSO->swork[3] = 0x190;
        bossSO->unk_3F8 = 0.1f;
        bossSO->fwork[0] = 1.0f;
        bossSO->swork[2] = bossSO->swork[3];
        bossSO->obj.pos.y = -3000.0f;
        func_i3_801A0CEC(gObjects2F4 + 0x1D88, bossSO->obj.pos.x, bossSO->obj.pos.z + 2000.0f, 20.0f, 1);
        D_801779A8[gMainController] = 10.0f;
        D_80178480 = 0x78;
        bossSO->fwork[3] = 2400.0f;
        temp_t2 = gSegments[(u32) ((s32) &D_60231A4 * 0x10) >> 0x1C] + ((s32) &D_60231A4 & 0xFFFFFF) + 0x80000000;
        bossSO->info.hitbox = temp_t2;
        bossSO->unk4C = 0;
        bossSO->swork[1] = 0;
        temp_t2->unkA8 = 220.0f;
        temp_v1 = bossSO->info.hitbox;
        temp_fv0 = temp_v1->unkA8;
        temp_v1->unk98 = temp_fv0;
        bossSO->info.hitbox->unk90 = temp_fv0;
        bossSO->info.hitbox->unk80 = temp_fv0;
        bossSO->info.hitbox->unk78 = temp_fv0;
        bossSO->info.hitbox->unk68 = temp_fv0;
        bossSO->info.hitbox->unk60 = temp_fv0;
        bossSO->info.hitbox->unk50 = temp_fv0;
        bossSO->info.hitbox->unk48 = temp_fv0;
        bossSO->info.hitbox->unk38 = temp_fv0;
        bossSO->info.hitbox->unk30 = temp_fv0;
        bossSO->info.hitbox->unk20 = temp_fv0;
        bossSO->info.hitbox->unk70 = 467.5f;
        temp_v1_2 = bossSO->info.hitbox;
        temp_v1_2->unk28 = (f32) temp_v1_2->unk70;
        bossSO->info.hitbox->unk88 = 247.5f;
        temp_v1_3 = bossSO->info.hitbox;
        temp_v1_3->unk40 = (f32) temp_v1_3->unk88;
        bossSO->info.hitbox->unkA0 = 715.0f;
        temp_v1_4 = bossSO->info.hitbox;
        temp_v1_4->unk58 = (f32) temp_v1_4->unkA0;
        D_i3_801C2768->unk34 = 0.0f;
        D_i3_801C2740->unk0 = 0xFF;
        D_i3_801C2740->unk4 = 0xFF;
        D_i3_801C2768->unk30 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk2C = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk28 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk24 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk20 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk1C = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk18 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk14 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk10 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unk8 = (f32) D_i3_801C2768->unk34;
        D_i3_801C2768->unkC = (f32) D_i3_801C2768->unk34;
    }
    *(gObjects2F4 + 0x1D94) = bossSO->obj.pos.z + 2000.0f;
    Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 30.0f, 0.1f);
    if (gFogRed >= 0x61) {
        gFogRed -= 1;
    }
    if (gFogGreen >= 0x61) {
        gFogGreen -= 1;
    }
    if (gFogBlue >= 0x41) {
        gFogBlue -= 1;
    }
    temp_v0 = gBossFrameCount;
    if (temp_v0 == 0x1E) {
        func_8001D444(0U, 0x801BU, 0U, 0xFFU);
    }
    if (temp_v0 < 0x3D) {
        Math_SmoothStepToF(&D_801779A8[gMainController], 120.0f, 1.0f, 3.5f, 0.0f);
    }
    if (temp_v0 == 0x3C) {
        *(gObjects2F4 + 0x1E58) = 3;
        Audio_PlaySfx(0x19036053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    }
    if (bossSO->timer_050 == 0x64) {
        bossSO->unk4C = 0;
        bossSO->swork[1] = 1;
    }
    temp_v0_2 = gBossFrameCount;
    if (temp_v0_2 == 0x96) {
        func_i3_801A239C(bossSO);
        bossSO->fwork[0] = 0.01f;
    }
    if ((temp_v0_2 == 0x64) && (*(gTeamShields + 0xC) != 0)) {
        func_800BA808(gMsg_ID_10300, RCID_PEPPY);
    }
}

void func_i3_801A239C(Boss *arg0) {
    arg0->swork[0] = 1;
    if ((arg0->swork[2] != 0) || (arg0->swork[3] != 0)) {
        if (arg0->swork[3] != 0) {
            arg0->swork[1] = 3;
        } else {
            arg0->swork[1] = 4;
        }
    } else {
        arg0->swork[1] = 7;
    }
    arg0->unk4C = 0;
}

void func_i3_801A23F4(Boss *bossSO) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    Vec3f sp34;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *var_s0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    s16 temp_t6;

    temp_t6 = bossSO->swork[1];
    switch (temp_t6) {
    case 3:
        if ((bossSO->unk4C == 0x77) || (bossSO->swork[3] == 0)) {
            bossSO->unk4C = 0;
            if (bossSO->swork[2] != 0) {
                if (Rand_ZeroOne() >= 0.5f) {
                    bossSO->swork[1] = 4;
                } else {
                    bossSO->swork[1] = 2;
                    bossSO->unk_04E = 0;
                    bossSO->unk_07C = 0.0f;
                }
            } else if (bossSO->swork[3] == 0) {
                bossSO->swork[1] = 7;
            } else {
                bossSO->swork[1] = 5;
            }
        }
        temp_s0 = &bossSO->sfxPos;
        if (bossSO->unk4C >= 0x1C) {
            bossSO->info.hitbox->unk98 = 715.0f;
            bossSO->info.hitbox->unkA0 = 440.0f;
            bossSO->info.hitbox->unkA8 = 110.0f;
        }
        if (bossSO->unk4C == 0x1D) {
            func_8005F0E8(temp_s0, &bossSO->obj.pos);
            Audio_PlaySfx(0x19035053U, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 0x50) {
            Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C >= 0x5E) {
            bossSO->info.hitbox->unk98 = 220.0f;
            bossSO->info.hitbox->unkA0 = 715.0f;
            bossSO->info.hitbox->unkA8 = 220.0f;
            return;
        }
    default:
        return;
    case 4:
        temp_s0_2 = &bossSO->sfxPos;
        if ((bossSO->unk4C == 0x63) || (bossSO->swork[2] == 0)) {
            bossSO->unk4C = 0;
            if ((bossSO->swork[3] != 0) || (bossSO->swork[2] != 0)) {
                bossSO->swork[1] = 5;
            } else {
                bossSO->swork[1] = 7;
            }
        }
        if (bossSO->unk4C >= 0x15) {
            bossSO->info.hitbox->unk50 = 715.0f;
            bossSO->info.hitbox->unk58 = 110.0f;
            bossSO->info.hitbox->unk60 = 275.0f;
        }
        if (bossSO->unk4C == 0xA) {
            func_8005F0E8(temp_s0_2, &bossSO->obj.pos);
            Audio_PlaySfx(0x19035053U, temp_s0_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 0x32) {
            Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C >= 0x55) {
            bossSO->info.hitbox->unk50 = 220.0f;
            bossSO->info.hitbox->unk58 = 715.0f;
            bossSO->info.hitbox->unk60 = 220.0f;
            return;
        }
        break;
    case 5:
        bossSO->fwork[3] = 2600.0f;
        Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 1.5f, 1.0f);
        if (bossSO->unk4C == 0x41) {
            Matrix_RotateX(gCalcMatrix, D_i3_801C2768->unk0 * M_DTOR, 0U);
            Matrix_RotateY(gCalcMatrix, D_i3_801C2768->unk4 * M_DTOR, 1U);
            sp44 = -200.0f;
            sp40 = 0.0f;
            sp48 = 1100.0f;
            Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp40, &sp34);
            var_s0 = D_i3_801BF8F0;
            do {
                sp58 = (2.0f * (Rand_ZeroOne() - 0.5f)) + var_s0->x;
                sp5C = 2.0f * (Rand_ZeroOne() - 0.5f);
                sp60 = (Rand_ZeroOne() * 10.0f) + 2.5f;
                Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp58, &sp4C);
                func_i3_8019F038(bossSO->fwork[4] + (bitwise f32) sp34, bossSO->fwork[5] + sp34.y, bossSO->fwork[6] + sp34.z, (bitwise f32) sp4C, sp4C.y, sp4C.z);
                var_s0 += 0xC;
            } while (var_s0 != &D_i3_801BF920);
        }
        if (bossSO->unk4C == 0x63) {
            if ((bossSO->swork[2] != 0) || (bossSO->swork[3] != 0)) {
                func_i3_801A2C3C(bossSO);
                return;
            }
            func_i3_801A4EC0(bossSO);
            return;
        }
        break;
    case 7:
        if (bossSO->unk4C < 0x32) {
            temp_fv0 = bossSO->fwork[0x1F];
            if (temp_fv0 < 22.0f) {
                bossSO->fwork[0x1F] = temp_fv0 + 0.5f;
            }
            bossSO->obj.rot.y += bossSO->fwork[0x1F];
        }
        if ((bossSO->unk4C >= 0x32) && (bossSO->unk4C < 0x65)) {
            temp_fv0_2 = bossSO->fwork[0x1F];
            if (temp_fv0_2 > 0.0f) {
                bossSO->fwork[0x1F] = temp_fv0_2 - 0.5f;
            }
            bossSO->obj.rot.y += bossSO->fwork[0x1F];
        }
        temp_fv0_3 = bossSO->obj.rot.y;
        if (temp_fv0_3 >= 360.0f) {
            bossSO->obj.rot.y = temp_fv0_3 - 360.0f;
            Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 1) {
            Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C >= 0x64) {
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 2.0f, 1.0f);
            bossSO->fwork[0x1F] = 0.0f;
        }
        if (bossSO->unk4C == 0x78) {
            bossSO->swork[1] = 5;
            bossSO->unk4C = 0;
            bossSO->fwork[0] = 0.1f;
            return;
        }
        break;
    case 2:
        if (((bossSO->unk4C == 0x59) && (bossSO->unk_04E == 2)) || (bossSO->swork[2] == 0)) {
            bossSO->unk4C = 0;
            if ((bossSO->swork[3] != 0) || (bossSO->swork[2] != 0)) {
                bossSO->swork[1] = 5;
            } else {
                bossSO->swork[1] = 7;
            }
        }
        if (bossSO->unk4C == 0x50) {
            bossSO->unk_07C += 15.0f;
            bossSO->unk_04E += 1;
            if (bossSO->unk_07C >= 30.0f) {
                bossSO->unk_07C = 0.0f;
            }
        }
        Math_SmoothStepToAngle(&bossSO->obj.rot.y, bossSO->unk_07C, 1.0f, 1.5f, 1.0f);
        temp_s0_3 = &bossSO->sfxPos;
        if (bossSO->unk4C >= 0x13) {
            bossSO->info.hitbox->unk50 = 715.0f;
            bossSO->info.hitbox->unk58 = 440.0f;
            bossSO->info.hitbox->unk60 = 110.0f;
        }
        if (bossSO->unk4C == 5) {
            func_8005F0E8(temp_s0_3, &bossSO->obj.pos);
            Audio_PlaySfx(0x19035053U, temp_s0_3, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 0x14) {
            Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C >= 0x25) {
            bossSO->info.hitbox->unk50 = 220.0f;
            bossSO->info.hitbox->unk58 = 715.0f;
            bossSO->info.hitbox->unk60 = 220.0f;
        }
        break;
    }
}

void func_i3_801A2C3C(Boss *arg0) {
    arg0->swork[0] = 2;
    arg0->swork[1] = 0;
    arg0->fwork[0] = 0.05f;
    arg0->unk4C = Animation_GetFrameCount(&D_601388C) - 2;
    arg0->unk_04E = 0;
    arg0->swork[0xB] = 0xF;
}

void func_i3_801A2C98(Boss *bossSO) {
    Vec3f *var_s0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    s16 temp_v0;

    temp_v0 = bossSO->swork[0xB];
    if (temp_v0 != 0) {
        bossSO->swork[0xB] = temp_v0 - 1;
    }
    if (bossSO->unk_04E == 0) {
        if (bossSO->swork[0xB] == 0) {
            bossSO->unk4C -= 2;
            Math_SmoothStepToF(&bossSO->obj.pos.y, -1000.0f, 0.1f, 10.0f, 0.1f);
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, 181.0f, 1.0f, 3.0f, 1.0f);
            if (bossSO->unk4C == 0x32) {
                func_i3_801A0CEC(gObjects2F4 + 0x1D88, bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
                D_80137E84[gMainController] = 1;
                D_Timer_80177BD0[gMainController] = 0x46;
            }
            if (bossSO->unk4C == 0x3C) {
                var_s0 = D_i3_801BF8F0;
                do {
                    temp_fs1 = Rand_ZeroOne();
                    temp_fs0 = Rand_ZeroOne();
                    func_i3_8019F038(bossSO->obj.pos.x + 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f, (2.0f * (temp_fs1 - 0.5f)) + var_s0->x, (2.0f * (temp_fs0 - 0.5f)) + (var_s0->y + 10.0f), (Rand_ZeroOne() * -10.0f) - 10.0f);
                    temp_fs1_2 = Rand_ZeroOne();
                    temp_fs0_2 = Rand_ZeroOne();
                    func_i3_8019F038(bossSO->obj.pos.x - 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f, (2.0f * (temp_fs1_2 - 0.5f)) + var_s0->x, (2.0f * (temp_fs0_2 - 0.5f)) + (var_s0->y + 10.0f), (Rand_ZeroOne() * -10.0f) - 10.0f);
                    var_s0 += 0xC;
                } while (var_s0 != &D_i3_801BF920);
            }
            if (bossSO->unk4C == 0x14) {
                *(gObjects2F4 + 0x1E58) = 3;
                Audio_PlaySfx(0x19036054U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk4C == 0) {
                bossSO->unk_04E += 1;
                bossSO->swork[0xB] = 0x64;
                bossSO->fwork[3] = 4800.0f;
                bossSO->obj.pos.y = -500.0f;
                bossSO->obj.rot.y = -bossSO->obj.rot.y;
                bossSO->obj.pos.z = gPlayer->unk_138 - 4800.0f;
            }
        } else {
            bossSO->unk4C = Animation_GetFrameCount(&D_601388C) - 2;
        }
    } else {
        Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 1.5f, 1.0f);
        if (bossSO->swork[0xB] == 0x50) {
            func_i3_801A0CEC(gObjects2F4 + 0x1A94, bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
        }
        if (bossSO->swork[0xB] == 0) {
            bossSO->swork[0xB] = 0xDC;
        }
        if (bossSO->swork[0xB] == 0xD2) {
            bossSO->unk4C = 0;
            bossSO->swork[1] = 1;
            bossSO->fwork[0] = 0.05f;
        }
        if (bossSO->swork[0xB] >= 0x64) {
            Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
        }
        if (bossSO->swork[0xB] == 0x96) {
            func_i3_801A3468(bossSO);
        }
        if (bossSO->swork[0xB] == 0x32) {
            *(gObjects2F4 + 0x1B64) = 3;
            Audio_PlaySfx(0x19036053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i3_801A30CC(Boss *arg0) {
    arg0->swork[0] = 3;
    arg0->swork[1] = 0;
    arg0->fwork[0] = 0.1f;
    arg0->unk4C = Animation_GetFrameCount(&D_601388C) - 2;
    arg0->unk_04E = 0;
    arg0->swork[0xB] = 0xF;
}

void func_i3_801A3128(Boss *bossSO) {
    s16 temp_v0;
    s32 temp_t3;

    temp_v0 = bossSO->swork[0xB];
    if (temp_v0 != 0) {
        bossSO->swork[0xB] = temp_v0 - 1;
    }
    if (bossSO->unk_04E == 0) {
        if (bossSO->swork[0xB] == 0) {
            bossSO->unk4C -= 2;
            Math_SmoothStepToF(&bossSO->obj.pos.y, -1000.0f, 0.1f, 10.0f, 0.1f);
            if (bossSO->unk4C == 0x32) {
                func_i3_801A0CEC(gObjects2F4 + 0x1D88, bossSO->obj.pos.x, bossSO->obj.pos.z + 2000.0f, 10.0f, 1);
            }
            if (bossSO->unk4C == 0x28) {
                *(gObjects2F4 + 0x1E58) = 3;
                Audio_PlaySfx(0x19036054U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (bossSO->unk4C == 0) {
                bossSO->unk_04E += 1;
                bossSO->swork[0xB] = 0x64;
                bossSO->obj.pos.y = -500.0f;
                bossSO->fwork[3] = 2400.0f;
                bossSO->obj.pos.z = gPlayer->unk_138 - 2100.0f;
            }
        } else {
            bossSO->unk4C = Animation_GetFrameCount(&D_601388C) - 2;
        }
    } else {
        if (bossSO->swork[0xB] == 0x50) {
            func_i3_801A0CEC(gObjects2F4 + 0x1A94, bossSO->obj.pos.x, bossSO->obj.pos.z + 850.0f, 20.0f, 1);
            D_80137E84[gMainController] = 1;
            D_Timer_80177BD0[gMainController] = 0x46;
            temp_t3 = D_i3_801C2740->unk8 + 1;
            D_i3_801C2740->unk8 = temp_t3;
            if (temp_t3 & 1) {
                if (temp_t3 & 2) {
                    if (*(gTeamShields + 0xC) > 0) {
                        func_800BA808(gMsg_ID_20317, RCID_PEPPY);
                    }
                } else if (*(gTeamShields + 4) > 0) {
                    func_800BA808(gMsg_ID_20271, RCID_FALCO);
                }
            }
        }
        if (bossSO->swork[0xB] == 0) {
            bossSO->swork[0xB] = 0xDC;
        }
        if (bossSO->swork[0xB] == 0xD2) {
            bossSO->unk4C = 0;
            bossSO->swork[1] = 1;
        }
        if (bossSO->swork[0xB] >= 0x64) {
            Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 20.0f, 0.1f);
        }
        if (bossSO->swork[0xB] == 0x96) {
            func_i3_801A239C(bossSO);
            bossSO->fwork[0] = 0.01f;
            if ((Rand_ZeroOne() >= 0.4f) && (*(gTeamShields + 0xC) > 0) && (bossSO->swork[2] != 0) && (bossSO->swork[3] != 0)) {
                func_800BA808(gMsg_ID_10320, RCID_PEPPY);
            }
        }
        if (bossSO->swork[0xB] == 0x32) {
            *(gObjects2F4 + 0x1B64) = 3;
            Audio_PlaySfx(0x19036053U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
}

void func_i3_801A3468(Boss *arg0) {
    arg0->swork[0] = 4;
    arg0->unk48 = 0;
    if ((arg0->swork[2] != 0) || (arg0->swork[3] != 0)) {
        if (arg0->swork[3] != 0) {
            arg0->swork[1] = 3;
        } else {
            arg0->swork[1] = 4;
        }
    } else if (Rand_ZeroOne() >= 0.5f) {
        arg0->unk48 = 1;
        arg0->swork[1] = 5;
    } else {
        arg0->timer_050 = 0;
        arg0->swork[1] = 8;
    }
    arg0->unk4C = 0;
    arg0->fwork[0] = 0.01f;
}

void func_i3_801A3510(Boss *bossSO) {
    f32 sp2C;
    f32 sp28;
    Vec3f *temp_s0;
    Vec3f *temp_s0_2;
    Vec3f *var_s0;
    s16 temp_t6;

    temp_t6 = bossSO->swork[1];
    switch (temp_t6) {
    case 3:
        temp_s0 = &bossSO->sfxPos;
        if ((bossSO->unk4C == 0x77) || (bossSO->swork[3] == 0)) {
            bossSO->unk4C = 0;
            if (bossSO->swork[2] != 0) {
                bossSO->swork[1] = 4;
            } else {
                bossSO->swork[1] = 5;
            }
        }
        if (bossSO->unk4C == 0x1D) {
            func_8005F0E8(temp_s0, &bossSO->obj.pos);
            Audio_PlaySfx(0x19035053U, temp_s0, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 0x50) {
            Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 0x5E) {
            func_i3_801A0DF8(bossSO->fwork[0xD], bossSO->fwork[0xF], (Rand_ZeroOne() - 0.5f) * 60.0f, 4U, 2.0f);
            bossSO->timer_050 = 0x5A;
        }
        break;
    case 4:
        if ((bossSO->unk4C == 0x63) || (bossSO->swork[2] == 0)) {
            bossSO->unk4C = 0;
            bossSO->swork[1] = 5;
        }
        Math_SmoothStepToAngle(&bossSO->obj.rot.x, 20.0f, 0.1f, 10.0f, 0.1f);
        temp_s0_2 = &bossSO->sfxPos;
        if (bossSO->unk4C == 0xA) {
            func_8005F0E8(temp_s0_2, &bossSO->obj.pos);
            Audio_PlaySfx(0x19035053U, temp_s0_2, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 0x32) {
            Audio_PlaySfx(0x29432077U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C == 0x3C) {
            func_i3_801A0D90(bossSO->obj.pos.x, bossSO->obj.pos.z + 1600.0f, 80.0f, 2);
            D_80137E84[gMainController] = 1;
            D_Timer_80177BD0[gMainController] = 0x64;
        }
        break;
    case 5:
        Math_SmoothStepToAngle(&bossSO->obj.rot.x, 0.0f, 0.1f, 10.0f, 0.1f);
        if (bossSO->unk4C == 0x41) {
            var_s0 = D_i3_801BF8F0;
            do {
                sp28 = Rand_ZeroOne();
                sp2C = Rand_ZeroOne();
                func_i3_8019F194(bossSO->obj.pos.x, bossSO->obj.pos.y + 300.0f, bossSO->obj.pos.z + 1000.0f, ((sp28 - 0.5f) * 0.25f) + var_s0->x, ((sp2C - 0.5f) * 0.25f) + var_s0->y, (Rand_ZeroOne() * 10.0f) + 100.0f);
                var_s0 += 0xC;
            } while (var_s0 != &D_i3_801BF920);
        }
        if ((bossSO->unk48 != 0) && (bossSO->unk4C == 0x44)) {
            bossSO->swork[1] = 9;
            bossSO->unk4C = 0x14;
            bossSO->fwork[0] = 0.01f;
        }
        if (bossSO->unk4C == 0x63) {
            func_i3_801A30CC(bossSO);
        }
        break;
    case 8:
        if (bossSO->unk4C == 0x41) {
            Audio_PlaySfx(0x31033078U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            bossSO->timer_050 = 0x1E;
        }
        if (bossSO->timer_050 != 0) {
            bossSO->unk4C = 0x41;
        }
        if ((bossSO->unk4C == 0x41) && !(gFrameCount & 1)) {
            func_i3_8019FFC0(bossSO, (bitwise Effect *) bossSO->fwork[4], bossSO->fwork[5] - 100.0f, (bitwise s32) (bossSO->fwork[6] + 600.0f), ((f32) bossSO->timer_050 * 0.2f) + 4.0f, 0);
            func_i3_801A1EB0(bossSO, bossSO->fwork[4], 25.0f, bossSO->fwork[5] - 100.0f, bossSO->fwork[6] + 300.0f);
        }
        if (bossSO->unk4C == 0x4B) {
            func_8001A55C(&bossSO->sfxPos, 0x31033078U);
        }
        if (bossSO->unk4C == 0x63) {
            bossSO->swork[1] = 5;
            bossSO->unk4C = 0;
        }
        break;
    case 9:
        bossSO->unk4C += 1;
        if (bossSO->unk4C == 0x42) {
            Audio_PlaySfx(0x31033078U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            bossSO->timer_050 = 0x1E;
        }
        if (bossSO->timer_050 != 0) {
            bossSO->unk4C = 0x42;
        }
        if ((bossSO->unk4C == 0x42) && !(gFrameCount & 1)) {
            func_i3_8019FFC0(bossSO, (bitwise Effect *) (bossSO->fwork[4] + 125.0f), bossSO->fwork[5] - 100.0f, (bitwise s32) (bossSO->fwork[6] + 600.0f), ((f32) bossSO->timer_050 * 0.2f) + 4.0f, 1);
            func_i3_8019FFC0(bossSO, (bitwise Effect *) (bossSO->fwork[4] - 125.0f), bossSO->fwork[5] - 100.0f, (bitwise s32) (bossSO->fwork[6] + 600.0f), ((f32) bossSO->timer_050 * 0.2f) + 4.0f, 2);
            func_i3_801A1EB0(bossSO, bossSO->fwork[4], 25.0f, bossSO->fwork[5] - 100.0f, bossSO->fwork[6] + 300.0f);
        }
        if (bossSO->unk4C == 0x4C) {
            func_8001A55C(&bossSO->sfxPos, 0x31033078U);
        }
        if (bossSO->unk4C >= 0x63) {
            func_i3_801A30CC(bossSO);
        }
        break;
    }
    if (bossSO->timer_050 == 0) {
        Object_Kill(&(gObjects2F4 + 0x11B8)->obj, gObjects2F4 + 0x12B8);
        return;
    }
    Math_SmoothStepToF(gObjects2F4 + 0x11BC, gPlayer->pos.x, 0.1f, 10.0f, 0.1f);
}

void func_i3_801A3C4C(Boss *arg0) {
    Vec3f *sp2C;
    f32 *temp_v0_3;
    f32 *temp_v0_4;
    f32 *temp_v0_6;
    f32 *temp_v0_7;
    f32 *temp_v1_5;
    f32 *temp_v1_6;
    f32 *temp_v1_7;
    f32 *temp_v1_8;
    f32 temp_fv0;
    f32 temp_fv0_10;
    f32 temp_fv0_11;
    f32 temp_fv0_12;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0_9;
    f32 var_fv0;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    if ((arg0->swork[2] == 0) && (arg0->swork[3] == 0) && ((temp_v0 = arg0->unk_066, (temp_v0 == 8)) || (temp_v0 == -1))) {
        arg0->unk_060 -= arg0->unk_064;
        if (arg0->unk_060 < 0) {
            arg0->unk_060 = 0;
        }
        arg0->swork[0xA] = 0x14;
        if ((f32) arg0->unk_060 > 0.0f) {
            Audio_PlaySfx(0x29433074U, arg0 + 0x3FC, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
    }
    temp_v0_2 = arg0->unk_066;
    arg0->timer_058 = 0x14;
    if ((temp_v0_2 > 0) && (temp_v0_2 < 4) && (arg0->swork[2] != 0)) {
        Audio_PlaySfx(0x29433074U, arg0 + 0x3FC, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        arg0->swork[2] -= arg0->unk_064;
        if (arg0->swork[2] < 0) {
            arg0->swork[2] = 0;
        }
        if (arg0->swork[2] == 0) {
            arg0->info.hitbox->unk4C = 0.0f;
            temp_v0_3 = arg0->info.hitbox;
            temp_fv0 = temp_v0_3->unk4C;
            temp_v0_3->unk34 = temp_fv0;
            arg0->info.hitbox->unk1C = temp_fv0;
            arg0->info.hitbox->unk50 = 0.0f;
            temp_v0_4 = arg0->info.hitbox;
            temp_fv0_2 = temp_v0_4->unk50;
            temp_v0_4->unk38 = temp_fv0_2;
            temp_v0_5 = 2 * 4;
            arg0->info.hitbox->unk20 = temp_fv0_2;
            (arg0->info.hitbox + temp_v0_5)->unk4C = 0.0f;
            temp_v1 = arg0->info.hitbox + temp_v0_5;
            temp_fv0_3 = temp_v1->unk4C;
            temp_v1->unk34 = temp_fv0_3;
            (arg0->info.hitbox + temp_v0_5)->unk1C = temp_fv0_3;
            (arg0->info.hitbox + temp_v0_5)->unk50 = 0.0f;
            temp_v1_2 = arg0->info.hitbox + temp_v0_5;
            temp_fv0_4 = temp_v1_2->unk50;
            temp_v1_2->unk38 = temp_fv0_4;
            (arg0->info.hitbox + temp_v0_5)->unk20 = temp_fv0_4;
            (arg0->info.hitbox + temp_v0_5)->unk54 = 0.0f;
            temp_v1_3 = arg0->info.hitbox + temp_v0_5;
            temp_fv0_5 = temp_v1_3->unk54;
            temp_v1_3->unk3C = temp_fv0_5;
            (arg0->info.hitbox + temp_v0_5)->unk24 = temp_fv0_5;
            (arg0->info.hitbox + temp_v0_5)->unk58 = 0.0f;
            temp_v1_4 = arg0->info.hitbox + temp_v0_5;
            temp_fv0_6 = temp_v1_4->unk58;
            temp_v1_4->unk40 = temp_fv0_6;
            (arg0->info.hitbox + temp_v0_5)->unk28 = temp_fv0_6;
            arg0->swork[2] = -1;
            func_i3_801A48B8(arg0);
        } else {
            arg0->swork[8] = 0x14;
        }
    }
    if ((arg0->unk_066 >= 4) && (arg0->unk_066 < 7) && (arg0->swork[3] != 0)) {
        Audio_PlaySfx(0x29433074U, &arg0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        arg0->swork[3] -= arg0->unk_064;
        if (arg0->swork[3] < 0) {
            arg0->swork[3] = 0;
        }
        if (arg0->swork[3] == 0) {
            arg0->info.hitbox->unk94 = 0.0f;
            temp_v0_6 = arg0->info.hitbox;
            temp_fv0_7 = temp_v0_6->unk94;
            temp_v0_6->unk7C = temp_fv0_7;
            arg0->info.hitbox->unk64 = temp_fv0_7;
            arg0->info.hitbox->unk98 = 0.0f;
            temp_v0_7 = arg0->info.hitbox;
            temp_fv0_8 = temp_v0_7->unk98;
            temp_v0_7->unk80 = temp_fv0_8;
            arg0->info.hitbox->unk68 = temp_fv0_8;
            arg0->info.hitbox[2].unk94 = 0.0f;
            temp_v1_5 = &arg0->info.hitbox[2];
            temp_fv0_9 = temp_v1_5->unk94;
            temp_v1_5->unk7C = temp_fv0_9;
            arg0->info.hitbox[2].unk64 = temp_fv0_9;
            arg0->info.hitbox[2].unk98 = 0.0f;
            temp_v1_6 = &arg0->info.hitbox[2];
            temp_fv0_10 = temp_v1_6->unk98;
            temp_v1_6->unk80 = temp_fv0_10;
            arg0->info.hitbox[2].unk68 = temp_fv0_10;
            arg0->info.hitbox[2].unk9C = 0.0f;
            temp_v1_7 = &arg0->info.hitbox[2];
            temp_fv0_11 = temp_v1_7->unk9C;
            temp_v1_7->unk84 = temp_fv0_11;
            arg0->info.hitbox[2].unk6C = temp_fv0_11;
            arg0->info.hitbox[2].unkA0 = 0.0f;
            temp_v1_8 = &arg0->info.hitbox[2];
            temp_fv0_12 = temp_v1_8->unkA0;
            temp_v1_8->unk88 = temp_fv0_12;
            arg0->info.hitbox[2].unk70 = temp_fv0_12;
            arg0->swork[3] = -1;
            func_i3_801A48B8(arg0);
        } else {
            arg0->swork[9] = 0x14;
        }
    }
    if (arg0->unk_060 <= 0) {
        arg0->unk4C = 0x15;
        arg0->unk_04E = 0;
        arg0->swork[1] = 1;
        arg0->fwork[0] = 0.01f;
        arg0->info.hitbox = gSegments[(u32) ((s32) D_800CBF34 * 0x10) >> 0x1C] + ((s32) D_800CBF34 & 0xFFFFFF) + 0x80000000;
        arg0->timer_058 = 0x4E20;
        D_8017796C = -1;
        D_80178354 = 0xFF;
        D_80178350 = 0xFF;
        D_80178340 = 0xFF;
        D_80178348 = 0xFF;
        D_80178358 = 0;
        D_8017835C = 0xFF;
        D_80177A80 = 0;
        D_80137E84[gMainController] = 1;
        D_Timer_80177BD0[gMainController] = 0xA;
        sp2C = &arg0->sfxPos;
        func_800182F4(0x100100FF);
        func_800182F4(0x110100FF);
        func_8001A838(0x4100C023U);
        Audio_PlaySfx(0x2940D09AU, sp2C, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        if (gPlayer->state_1C8 == PLAYERSTATE_1C8_3) {
            gPlayer->state_1C8 = PLAYERSTATE_1C8_7;
            gPlayer->timer_1F8 = 0;
            gPlayer->unk_1D0 = gPlayer->timer_1F8;
            gPlayer->unk_0E8 += gPlayer->unk_114;
            var_fv0 = gPlayer->unk_0E8;
            if (var_fv0 > 360.0f) {
                gPlayer->unk_0E8 = var_fv0 - 360.0f;
                var_fv0 = gPlayer->unk_0E8;
            }
            if (var_fv0 < 0.0f) {
                gPlayer->unk_0E8 = var_fv0 + 360.0f;
            }
            gPlayer->unk_114 = 0.0f;
        }
        arg0->fwork[0x1F] = 0.0f;
        arg0->fwork[3] = 2400.0f;
        func_800BA808(gMsg_ID_15252, RCID_SLIPPY);
    }
}

void func_i3_801A4214(Boss *bossSO) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    Vec3f sp44;
    Object *sp3C;
    Effect *var_a0;
    s32 temp_v0;

    if (bossSO->unk_060 <= 0) {
        Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 0.1f, 3.0f, 0.0f);
        Math_SmoothStepToAngle(&bossSO->obj.rot.x, 0.0f, *D_i3_801C171C, 3.0f, 0.0f);
        if ((bossSO->unk4C == 0x34) && (bossSO->swork[1] == 5)) {
            bossSO->unk4C = 0x26;
            bossSO->fwork[0] = 0.05f;
        }
        Matrix_RotateX(gCalcMatrix, bossSO->fwork[1] * *D_i3_801C1728, 0U);
        Matrix_RotateY(gCalcMatrix, -bossSO->fwork[2] * *D_i3_801C1730, 1U);
        sp54 = 200.0f;
        sp50 = 0.0f;
        sp58 = 1100.0f;
        Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp50, &sp44);
        if (bossSO->unk_04E >= 2) {
            Math_SmoothStepToF(&D_801779A8[gMainController], 30.0f, 1.0f, 2.5f, 0.0f);
        }
        switch ((u32) bossSO->unk_04E) {
        case 0:
            if (D_i3_801C2740->unk0 >= 0x21) {
                D_i3_801C2740->unk0 -= 3;
            }
            if (bossSO->timer_058 == 0x4DC6) {
                bossSO->swork[1] = 5;
                bossSO->unk4C = 0;
                bossSO->unk_04E += 1;
                bossSO->fwork[0] = *D_i3_801C1758;
            }
            Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
            return;
        case 1:
            if (bossSO->unk4C == 0x33) {
                bossSO->unk4C = 0x32;
                bossSO->unk_04E = (u32) bossSO->unk_04E + 1;
                gShowBossHealth = 0;
                Audio_PlaySfx(0x39439076U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                func_i3_801A1E14(bossSO->fwork[4], bossSO->fwork[5] + 300.0f, bossSO->fwork[6], bossSO->fwork[1], bossSO->fwork[2], 73.0f, (Rand_ZeroOne() - 0.5f) * 50.0f, 80.0f, 40.0f, 8);
                D_i3_801C2768->unkC = 6.0f;
                D_i3_801C2768->unk8 = 100.0f;
                D_80178340 = 0xFF;
                D_80178348 = 0xFF;
                D_80178350 = 0xFF;
                D_80178354 = 0xFF;
                D_80178358 = 0;
                D_8017835C = 4;
                func_80042EC0(bossSO);
                bossSO->swork[4] += 1;
                Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
                return;
            }
            break;
        case 2:
            if (D_i3_801C2740->unk0 >= 0x21) {
                D_i3_801C2740->unk0 -= 3;
            }
            if (D_i3_801C2740->unk4 >= 0x21) {
                Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
                D_i3_801C2740->unk4 = (s32) (D_i3_801C2740->unk4 - 4);
                return;
            }
            bossSO->unk_04E += 1;
            return;
        case 3:
            temp_v0 = D_80177A80;
            if ((temp_v0 >= 0xCD) && (D_i3_801C2768->unk14 < 1.0f)) {
                D_i3_801C2768->unk14 = (f32) (D_i3_801C2768->unk14 + 0.1f);
            }
            if ((temp_v0 >= 0xCF) && (D_i3_801C2768->unk24 < 1.0f)) {
                D_i3_801C2768->unk24 = (f32) (D_i3_801C2768->unk24 + 0.1f);
            }
            if ((temp_v0 >= 0xD1) && (D_i3_801C2768->unk28 < 1.0f)) {
                D_i3_801C2768->unk28 = (f32) (D_i3_801C2768->unk28 + 0.1f);
            }
            if ((temp_v0 >= 0xD3) && (D_i3_801C2768->unk1C < 1.0f)) {
                D_i3_801C2768->unk1C = (f32) (D_i3_801C2768->unk1C + 0.1f);
            }
            if ((temp_v0 >= 0xD5) && (D_i3_801C2768->unk20 < 1.0f)) {
                D_i3_801C2768->unk20 = (f32) (D_i3_801C2768->unk20 + 0.1f);
            }
            if ((temp_v0 >= 0xD7) && (D_i3_801C2768->unk2C < 1.0f)) {
                D_i3_801C2768->unk2C = (f32) (D_i3_801C2768->unk2C + 0.1f);
            }
            if ((temp_v0 >= 0xD9) && (D_i3_801C2768->unk30 < 1.0f)) {
                D_i3_801C2768->unk30 = (f32) (D_i3_801C2768->unk30 + 0.1f);
            }
            if ((temp_v0 >= 0xDB) && (D_i3_801C2768->unk10 < 1.0f)) {
                D_i3_801C2768->unk10 = (f32) (D_i3_801C2768->unk10 + 0.1f);
            }
            if ((temp_v0 >= 0xDD) && (D_i3_801C2768->unk18 < 1.0f)) {
                D_i3_801C2768->unk18 = (f32) (D_i3_801C2768->unk18 + 0.2f);
            }
            if ((temp_v0 >= 0xE2) && (D_i3_801C2768->unk34 < 380.0f)) {
                D_i3_801C2768->unk34 = (f32) (D_i3_801C2768->unk34 + 30.0f);
            }
            if (temp_v0 >= 0xEE) {
                D_i3_801C2768->unk34 = 0.0f;
            }
            if (temp_v0 == 0xE6) {
                Audio_PlaySfx(0x2940F026U, gObjects2F4 + 0xFC4, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_801779A8[gMainController] = 120.0f;
            }
            if (temp_v0 == 0xFA) {
                bossSO->unk_04E += 1;
                var_a0 = gEffects;
                bossSO->obj.pos.y = -1600.0f;
                do {
                    if (var_a0->obj.status != 0) {
                        sp3C = &var_a0->obj;
                        Object_Kill(&var_a0->obj, &var_a0->sfxPos);
                        var_a0 = (Effect *) &var_a0->obj;
                    }
                    var_a0 += 0x8C;
                } while (var_a0 != (gEffects + 0x118));
                bossSO->timer_058 = 0x64;
                return;
            }
            break;
        case 4:
            if (bossSO->timer_058 == 1) {
                func_800182F4(0x105000FF);
                func_800182F4(0x115000FF);
                Object_Kill(&bossSO->obj, &bossSO->sfxPos);
            }
            break;
        }
    } else {
    default:
    }
}

void func_i3_801A48B8(Boss *arg0) {
    Object_2F4 *var_v0;
    s16 temp_v0;
    s16 temp_v1;

    Audio_PlaySfx(0x29434075U, arg0 + 0x3FC, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
    D_80137E84[gMainController] = 1;
    D_Timer_80177BD0[gMainController] = 0xA;
    temp_v1 = arg0->swork[0];
    if (temp_v1 != 6) {
        arg0->swork[5] = temp_v1;
        arg0->swork[6] = arg0->swork[1];
        arg0->swork[7] = arg0->unk4C;
    }
    if (temp_v1 == 4) {
        temp_v0 = arg0->unk4C;
        if ((temp_v0 >= 0x3C) && (temp_v0 < 0x43)) {
            var_v0 = gObjects2F4 + 0xBD0;
loop_6:
            if (var_v0->obj.id == 0x116) {
                var_v0->unk_0D0 = 2;
            } else {
                var_v0 += 0x2F4;
                if (var_v0 != gBosses) {
                    goto loop_6;
                }
            }
        }
    }
    D_80178340 = 0xFF;
    D_80178354 = 0xFF;
    D_80178350 = 0xFF;
    D_80178348 = 0xFF;
    D_80178358 = 0;
    D_8017835C = 0x40;
    arg0->swork[0] = 6;
    arg0->swork[1] = 6;
    arg0->unk4C = 0;
    arg0->fwork[0] = 0.01f;
    if (((arg0->swork[2] > 0) || (arg0->swork[3] > 0)) && (*(gTeamShields + 8) > 0)) {
        func_800BA808(gMsg_ID_7086, RCID_SLIPPY);
    }
}

void func_i3_801A4A34(Boss *bossSO) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_fs1_6;
    s16 temp_v0;
    s16 temp_v1;

    if (bossSO->swork[2] < 0) {
        bossSO->swork[2] = 0;
        temp_fs1 = Rand_ZeroOne();
        temp_fs0 = Rand_ZeroOne();
        func_i3_801A1E14(bossSO->fwork[0x1C], bossSO->fwork[0x1D], bossSO->fwork[0x1E], bossSO->fwork[0x29], bossSO->fwork[0x2A], bossSO->fwork[0x2B], (temp_fs1 * -25.0f) - 10.0f, (temp_fs0 * 25.0f) + 30.0f, ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 0);
        temp_fs1_2 = Rand_ZeroOne();
        temp_fs0_2 = Rand_ZeroOne();
        func_i3_801A1E14(bossSO->fwork[0x16], bossSO->fwork[0x17], bossSO->fwork[0x18], bossSO->fwork[0x2F], bossSO->fwork[0x30], bossSO->fwork[0x31], (temp_fs1_2 * -25.0f) - 10.0f, (temp_fs0_2 * 25.0f) + 30.0f, ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 1);
        temp_fs1_3 = Rand_ZeroOne();
        temp_fs0_3 = Rand_ZeroOne();
        func_i3_801A1E14(bossSO->fwork[0xA], bossSO->fwork[0xB], bossSO->fwork[0xC], bossSO->fwork[0x23], bossSO->fwork[0x24], bossSO->fwork[0x25], (temp_fs1_3 * -25.0f) - 10.0f, (temp_fs0_3 * 25.0f) + 30.0f, ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 2);
    }
    if (bossSO->swork[3] < 0) {
        bossSO->swork[3] = 0;
        temp_fs1_4 = Rand_ZeroOne();
        temp_fs0_4 = Rand_ZeroOne();
        func_i3_801A1E14(bossSO->fwork[0x19], bossSO->fwork[0x1A], bossSO->fwork[0x1B], bossSO->fwork[0x26], bossSO->fwork[0x27], bossSO->fwork[0x28], (temp_fs1_4 * 25.0f) + 10.0f, (temp_fs0_4 * 25.0f) + 30.0f, ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 5);
        temp_fs1_5 = Rand_ZeroOne();
        temp_fs0_5 = Rand_ZeroOne();
        func_i3_801A1E14(bossSO->fwork[0x13], bossSO->fwork[0x14], bossSO->fwork[0x15], bossSO->fwork[0x2C], bossSO->fwork[0x2D], bossSO->fwork[0x2E], (temp_fs1_5 * 25.0f) + 10.0f, (temp_fs0_5 * 25.0f) + 30.0f, ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 4);
        temp_fs1_6 = Rand_ZeroOne();
        temp_fs0_6 = Rand_ZeroOne();
        func_i3_801A1E14(bossSO->fwork[7], bossSO->fwork[8], bossSO->fwork[9], bossSO->fwork[0x20], bossSO->fwork[0x21], bossSO->fwork[0x22], (temp_fs1_6 * 25.0f) + 10.0f, (temp_fs0_6 * 25.0f) + 30.0f, ((Rand_ZeroOne() - 0.5f) * 25.0f) - 50.0f, 3);
    }
    temp_v1 = bossSO->unk4C;
    switch (temp_v1) {                              /* irregular */
    case 0x1E:
        Audio_PlaySfx(0x29433074U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        /* fallthrough */
    case 0x23:
    case 0x61:
        Audio_PlaySfx(0x29434075U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        break;
    }
    if (bossSO->unk4C == 0x77) {
        temp_v0 = bossSO->swork[5];
        bossSO->swork[0] = temp_v0;
        bossSO->swork[1] = bossSO->swork[6];
        if ((temp_v0 == 2) || (temp_v0 == 3)) {
            bossSO->unk4C = bossSO->swork[7];
        } else {
            bossSO->unk4C = 0;
        }
        bossSO->fwork[0] = 0.01f;
    }
}

void func_i3_801A4EC0(Boss *arg0) {
    arg0->swork[0] = 7;
    arg0->swork[1] = 5;
    arg0->unk4C = 0;
    arg0->unk_04E = 0;
    arg0->fwork[0x1F] = 0.0f;
    arg0->obj.rot.y = 0.0f;
    arg0->fwork[0] = 0.01f;
}

void func_i3_801A4EF8(Boss *bossSO) {
    Vec3f *var_s0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fv0;
    s16 temp_v0;
    s16 temp_v1;

    temp_v1 = bossSO->swork[0xB];
    if (temp_v1 != 0) {
        bossSO->swork[0xB] = temp_v1 - 1;
    }
    temp_v0 = bossSO->unk_04E;
    switch (temp_v0) {                              /* irregular */
    case 0:
        bossSO->unk4C = 0;
        if (bossSO->fwork[0x1F] > 20.0f) {
            bossSO->swork[0xB] = 0x6C;
            bossSO->unk_04E += 1;
            bossSO->unk4C = 0x38;
            bossSO->fwork[0] = 0.01f;
        }
        if (bossSO->obj.rot.y == 0.0f) {
            Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        bossSO->fwork[0x1F] += 0.5f;
        bossSO->obj.rot.y += bossSO->fwork[0x1F];
        temp_fs0 = bossSO->obj.rot.y;
        if (temp_fs0 >= 360.0f) {
            bossSO->obj.rot.y = temp_fs0 - 360.0f;
            Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        bossSO->unk_07C = bossSO->obj.rot.y;
        return;
    case 1:
        bossSO->obj.rot.y += bossSO->fwork[0x1F];
        temp_fs0_2 = bossSO->obj.rot.y;
        bossSO->unk4C = 0x38;
        if (temp_fs0_2 >= 360.0f) {
            bossSO->obj.rot.y = temp_fs0_2 - 360.0f;
            Audio_PlaySfx(0x39033079U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->swork[0xB] < 0x2E) {
            Math_SmoothStepToF(&bossSO->obj.pos.y, -1000.0f, 0.1f, 20.0f, 0.1f);
        }
        if (bossSO->swork[0xB] == 0x1E) {
            func_i3_801A0CEC(gObjects2F4 + 0x1D88, bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
            D_80137E84[gMainController] = 1;
            D_Timer_80177BD0[gMainController] = 0x46;
            var_s0 = D_i3_801BF8F0;
            do {
                temp_fs1 = Rand_ZeroOne();
                temp_fs0_3 = Rand_ZeroOne();
                func_i3_8019F038(bossSO->obj.pos.x + 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f, (2.0f * (temp_fs1 - 0.5f)) + var_s0->x, (2.0f * (temp_fs0_3 - 0.5f)) + (var_s0->y + 10.0f), (Rand_ZeroOne() * -10.0f) - 10.0f);
                temp_fs1_2 = Rand_ZeroOne();
                temp_fs0_4 = Rand_ZeroOne();
                func_i3_8019F038(bossSO->obj.pos.x - 100.0f, 100.0f, bossSO->obj.pos.z + 1100.0f, (2.0f * (temp_fs1_2 - 0.5f)) + var_s0->x, (2.0f * (temp_fs0_4 - 0.5f)) + (var_s0->y + 10.0f), (Rand_ZeroOne() * -10.0f) - 10.0f);
                var_s0 += 0xC;
            } while (var_s0 != &D_i3_801BF920);
        }
        if (bossSO->swork[0xB] == 0x10) {
            *(gObjects2F4 + 0x1E58) = 2;
        }
        if (bossSO->obj.pos.y <= -900.0f) {
            bossSO->swork[0xB] = 0x1F4;
            bossSO->unk_04E += 1;
            bossSO->fwork[3] = 4800.0f;
            bossSO->obj.pos.y = -1500.0f;
            bossSO->swork[1] = 0;
            bossSO->unk_07C = 0.0f;
            bossSO->obj.rot.y = 0.0f;
            bossSO->vel.y = 0.0f;
            bossSO->obj.rot.x = 0.0f;
            bossSO->obj.pos.z = gPlayer->unk_138 - 4800.0f;
        }
        bossSO->unk_07C = bossSO->obj.rot.y;
        return;
    case 2:
        bossSO->unk4C = 0;
        if (bossSO->swork[0xB] == 0x12C) {
            D_80137E84[gMainController] = 1;
            D_Timer_80177BD0[gMainController] = 0xAA;
            D_80178480 = 0x82;
        }
        if (bossSO->swork[0xB] == 0xC8) {
            func_i3_801A0CEC(gObjects2F4 + 0x1A94, bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
        }
        if (bossSO->swork[0xB] < 0xC8) {
            bossSO->unk4C = 0x62;
            bossSO->unk_07C += bossSO->fwork[0x1F];
            if (bossSO->swork[0xB] == 0xAA) {
                Audio_PlaySfx(0x29432073U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                bossSO->obj.pos.y = -500.0f;
                *(gObjects2F4 + 0x1B64) = 2;
            }
            if (bossSO->swork[0xB] < 0xAB) {
                bossSO->vel.y = __cosf(bossSO->obj.rot.x * M_DTOR) * 80.0f;
                bossSO->vel.z = gPlayer->vel.z + (__sinf(bossSO->obj.rot.x * M_DTOR) * 30.0f);
            }
            temp_fv0 = bossSO->obj.rot.x;
            if (temp_fv0 < 190.0f) {
                bossSO->obj.rot.x = temp_fv0 + 1.0f;
            }
            if (bossSO->swork[0xB] == 0x32) {
                func_i3_801A0CEC(gObjects2F4 + 0x1D88, bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 80.0f, 2);
                D_80137E84[gMainController] = 1;
                D_Timer_80177BD0[gMainController] = 0x64;
                D_80178480 = 0xA;
            }
            if (bossSO->obj.pos.y < -1500.0f) {
                bossSO->unk_04E += 1;
                bossSO->swork[0xB] = 0x64;
                bossSO->fwork[3] = 4800.0f;
                bossSO->obj.pos.y = -500.0f;
                bossSO->unk4C = 0;
                bossSO->obj.rot.x = 0.0f;
                bossSO->fwork[0x1F] = 0.0f;
                bossSO->vel.y = 0.0f;
                bossSO->obj.pos.z = gPlayer->unk_138 - 4800.0f;
                bossSO->vel.z = 0.0f;
                bossSO->obj.rot.y = 330.0f;
                return;
            }
        } else {
            return;
        }
        break;
    case 3:
        Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 1.5f, 1.0f);
        if (bossSO->swork[0xB] == 0x41) {
            func_i3_801A0CEC(gObjects2F4 + 0x1A94, bossSO->obj.pos.x, bossSO->obj.pos.z + 1000.0f, 20.0f, 1);
        }
        if (bossSO->swork[0xB] == 0) {
            bossSO->swork[0xB] = 0xDC;
        }
        if (bossSO->swork[0xB] == 0xD2) {
            bossSO->unk4C = 0;
            bossSO->swork[1] = (s16) 1;
        }
        if (bossSO->swork[0xB] >= 0x64) {
            Math_SmoothStepToF(&bossSO->obj.pos.y, 180.0f, 0.1f, 10.0f, 0.1f);
        }
        if (bossSO->swork[0xB] == 0x96) {
            func_i3_801A3468(bossSO);
            bossSO->fwork[0] = 0.01f;
        }
        if (bossSO->swork[0xB] == 0x32) {
            *(gObjects2F4 + 0x1B64) = 2;
        }
        break;
    }
}

void func_i3_801A56B8(Boss *bossSO) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s16 temp_v0;

    temp_v0 = bossSO->swork[1];
    switch (temp_v0) {                              /* irregular */
    case 2:
        if (((bossSO->unk4C == 0x59) && (bossSO->unk_04E == 2)) || (bossSO->swork[2] == 0)) {
            bossSO->unk4C = 0;
            bossSO->unk_04E = 0;
            bossSO->unk_07C = 0.0f;
        }
        if (bossSO->unk4C == 0x59) {
            bossSO->unk_04E += 1;
            bossSO->unk_07C += 15.0f;
        }
        Math_SmoothStepToAngle(&bossSO->obj.rot.y, bossSO->unk_07C, 1.0f, 3.0f, 1.0f);
        if (bossSO->unk4C >= 0x13) {
            bossSO->info.hitbox->unk50 = 715.0f;
            bossSO->info.hitbox->unk58 = 440.0f;
            bossSO->info.hitbox->unk60 = 110.0f;
        }
        if (bossSO->unk4C >= 0x25) {
            bossSO->info.hitbox->unk50 = 220.0f;
            bossSO->info.hitbox->unk58 = 715.0f;
            bossSO->info.hitbox->unk60 = 220.0f;
            return;
        }
        return;
    case 4:
        if ((bossSO->unk4C == 0x63) || (bossSO->swork[2] == 0)) {
            bossSO->unk4C = 0;
            if ((bossSO->swork[3] != 0) || (bossSO->swork[2] != 0)) {
                bossSO->swork[1] = 5;
            } else {
                bossSO->swork[1] = 7;
            }
        }
        if (bossSO->unk4C >= 0x15) {
            bossSO->info.hitbox->unk50 = 715.0f;
            bossSO->info.hitbox->unk58 = 110.0f;
            bossSO->info.hitbox->unk60 = 275.0f;
        }
        if (bossSO->unk4C >= 0x55) {
            bossSO->info.hitbox->unk50 = 220.0f;
            bossSO->info.hitbox->unk58 = 715.0f;
            bossSO->info.hitbox->unk60 = 220.0f;
            return;
        }
        break;
    case 5:
        bossSO->fwork[3] = 4800.0f;
        if (bossSO->unk4C == 0x41) {
            bossSO->timer_050 = 0x1E;
        }
        if (bossSO->timer_050 != 0) {
            bossSO->unk4C = 0x41;
        }
        if ((bossSO->unk4C == 0x41) && !(gFrameCount & 3)) {
            func_i3_8019FFC0(bossSO, (bitwise Effect *) (bossSO->fwork[4] + 125.0f), bossSO->fwork[5] - 100.0f, (bitwise s32) (bossSO->fwork[6] + 600.0f), ((f32) bossSO->timer_050 * 0.2f) + 4.0f, 1);
            func_i3_8019FFC0(bossSO, (bitwise Effect *) (bossSO->fwork[4] - 125.0f), bossSO->fwork[5] - 100.0f, (bitwise s32) (bossSO->fwork[6] + 600.0f), ((f32) bossSO->timer_050 * 0.2f) + 4.0f, 2);
            func_i3_801A1EB0(bossSO, bossSO->fwork[4], 25.0f, bossSO->fwork[5] - 100.0f, bossSO->fwork[6] + 300.0f);
            return;
        }
        break;
    case 7:
        if (bossSO->unk4C < 0x32) {
            temp_fv0 = bossSO->fwork[0x1F];
            if (temp_fv0 < 22.0f) {
                bossSO->fwork[0x1F] = temp_fv0 + 0.5f;
            }
            bossSO->obj.rot.y += bossSO->fwork[0x1F];
        }
        if ((bossSO->unk4C >= 0x32) && (bossSO->unk4C < 0x65)) {
            temp_fv0_2 = bossSO->fwork[0x1F];
            if (temp_fv0_2 > 0.0f) {
                bossSO->fwork[0x1F] = temp_fv0_2 - 0.5f;
            }
            bossSO->obj.rot.y += bossSO->fwork[0x1F];
        }
        if (bossSO->unk4C >= 0x64) {
            Math_SmoothStepToAngle(&bossSO->obj.rot.y, 0.0f, 1.0f, 2.0f, 1.0f);
            bossSO->fwork[0x1F] = 0.0f;
        }
        if (bossSO->unk4C == 0x78) {
            bossSO->swork[1] = 5;
            bossSO->unk4C = 0;
            bossSO->fwork[0] = 0.1f;
        }
        break;
    }
}

void func_i3_801A5B3C(Boss *bossSO) {
    f32 sp1C8;
    f32 sp1C4;
    f32 sp1C0;
    s32 sp1BC;
    s32 sp1B8;
    Vec3f sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Vec3f sp38;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fa0;
    f32 var_fv1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 var_v0;
    s32 temp_v0_4;
    u16 temp_t4;

    gBossFrameCount += 1;
    temp_v0 = bossSO->swork[9];
    if (temp_v0 != 0) {
        bossSO->swork[9] = temp_v0 - 1;
    }
    temp_v0_2 = bossSO->swork[8];
    if (temp_v0_2 != 0) {
        bossSO->swork[8] = temp_v0_2 - 1;
    }
    temp_v0_3 = bossSO->swork[0xA];
    if (temp_v0_3 != 0) {
        bossSO->swork[0xA] = temp_v0_3 - 1;
    }
    temp_v0_4 = gBossFrameCount;
    if ((temp_v0_4 == 0xC8) && (*(gTeamShields + 4) != 0)) {
        func_800BA808(gMsg_ID_10310, RCID_FALCO);
    }
    if ((temp_v0_4 == 0x12C) && (*(gTeamShields + 8) != 0)) {
        func_800BA808(gMsg_ID_4092, RCID_SLIPPY);
    }
    if ((temp_v0_4 == 0x1C2) && (*(gTeamShields + 0xC) != 0)) {
        func_800BA808(gMsg_ID_10320, RCID_PEPPY);
    }
    if (bossSO->unk_060 != 0) {
        Math_SmoothStepToF(&bossSO->obj.pos.z, gPlayer->unk_138 - bossSO->fwork[3], 1.0f, 60.0f, 1.0f);
    } else {
        Math_SmoothStepToF(&bossSO->obj.pos.z, -(D_80177D20 + 2600.0f), 1.0f, 40.0f, 1.0f);
    }
    if (bossSO->swork[2] != 0) {
        bossSO->info.hitbox->unk1C = (f32) (bossSO->fwork[0xC] - bossSO->obj.pos.z);
        bossSO->info.hitbox->unk24 = (f32) (bossSO->fwork[0xB] - bossSO->obj.pos.y);
        bossSO->info.hitbox->unk2C = (f32) (bossSO->fwork[0xA] - bossSO->obj.pos.x);
        bossSO->info.hitbox->unk34 = (f32) (bossSO->fwork[0x18] - bossSO->obj.pos.z);
        bossSO->info.hitbox->unk3C = (f32) (bossSO->fwork[0x17] - bossSO->obj.pos.y);
        bossSO->info.hitbox->unk44 = (f32) (bossSO->fwork[0x16] - bossSO->obj.pos.x);
        Matrix_RotateY(gCalcMatrix, -bossSO->obj.rot.y * M_DTOR, 0U);
        sp44 = bossSO->fwork[0x1C] - bossSO->obj.pos.x;
        sp48 = bossSO->fwork[0x1D] - bossSO->obj.pos.y;
        sp4C = bossSO->fwork[0x1E] - bossSO->obj.pos.z;
        Matrix_MultVec3f(gCalcMatrix, (Vec3f *) &sp44, &sp38);
        bossSO->info.hitbox->unk4C = sp38.z;
        bossSO->info.hitbox->unk54 = sp38.y;
        bossSO->info.hitbox->unk5C = (f32) sp38;
    }
    if (bossSO->swork[3] != 0) {
        bossSO->info.hitbox->unk64 = (f32) (bossSO->fwork[9] - bossSO->obj.pos.z);
        bossSO->info.hitbox->unk6C = (f32) (bossSO->fwork[8] - bossSO->obj.pos.y);
        bossSO->info.hitbox->unk74 = (f32) (bossSO->fwork[7] - bossSO->obj.pos.x);
        bossSO->info.hitbox->unk7C = (f32) (bossSO->fwork[0x15] - bossSO->obj.pos.z);
        bossSO->info.hitbox->unk84 = (f32) (bossSO->fwork[0x14] - bossSO->obj.pos.y);
        bossSO->info.hitbox->unk8C = (f32) (bossSO->fwork[0x13] - bossSO->obj.pos.x);
        bossSO->info.hitbox->unk94 = (f32) (bossSO->fwork[0x1B] - bossSO->obj.pos.z);
        bossSO->info.hitbox->unk9C = (f32) (bossSO->fwork[0x1A] - bossSO->obj.pos.y);
        bossSO->info.hitbox->unkA4 = (f32) (bossSO->fwork[0x19] - bossSO->obj.pos.x);
    }
    if (!(gFrameCount & 7) && (bossSO->fwork[3] < 4800.0f)) {
        if (func_800A73E4(&sp1C0, &sp1B8, bossSO->obj.pos.x, bossSO->obj.pos.y - 160.0f, bossSO->obj.pos.z) != 0) {
            func_i3_801A1EB0(bossSO, bossSO->obj.pos.x, 50.0f, sp1C0 - 170.0f, bossSO->obj.pos.z + 100.0f);
        }
        if ((bossSO->swork[2] != 0) && (func_800A73E4(&sp1C0, &sp1B8, bossSO->fwork[0x10], bossSO->fwork[0x11], bossSO->fwork[0x12]) != 0)) {
            func_i3_801A1EB0(bossSO, bossSO->fwork[0x10], 50.0f, sp1C0 - 150.0f, bossSO->fwork[0x12] + 150.0f);
        }
        if ((bossSO->swork[3] != 0) && (func_800A73E4(&sp1C0, &sp1B8, bossSO->fwork[0xD], bossSO->fwork[0xE], bossSO->fwork[0xF]) != 0)) {
            func_i3_801A1EB0(bossSO, bossSO->fwork[0xD], 50.0f, sp1C0 - 150.0f, bossSO->fwork[0xF] + 150.0f);
        }
    }
    if ((!(gFrameCount & 3) || (bossSO->fwork[0x1F] != 0.0f)) && ((bossSO->swork[0] != 7) || !(gFrameCount & 1))) {
        if ((bossSO->swork[2] == 0) && ((bossSO->unk_060 > 0) || (bossSO->unk_04E < 2))) {
            func_i3_8019FF44(bossSO, (bitwise Effect *) bossSO->fwork[0xA], bossSO->fwork[0xB], bossSO->fwork[0xC], bossSO->fwork[0x1F] - 20.0f, -1.0f);
        }
        if ((bossSO->swork[3] == 0) && ((bossSO->unk_060 > 0) || (bossSO->unk_04E < 2))) {
            func_i3_8019FF44(bossSO, (bitwise Effect *) bossSO->fwork[7], bossSO->fwork[8], bossSO->fwork[9], bossSO->fwork[0x1F] - 20.0f, 1.0f);
        }
    }
    Math_SmoothStepToF(bossSO->fwork, 1.0f, 0.01f, 0.01f, 0.0f);
    if ((bossSO->unk_060 > 0) || (bossSO->swork[0] == 0)) {
        D_i3_801BF980[bossSO->swork[0]](bossSO);
    }
    if (bossSO->timer_058 != 0) {
        func_i3_801A4214(bossSO);
    }
    temp_t4 = (u16) bossSO->swork[1];
    switch (temp_t4) {
    case 0:
        bossSO->unk4C += 1;
        if (bossSO->unk4C == 0x4B) {
            Audio_PlaySfx(0x29432073U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C >= Animation_GetFrameCount(&D_601388C)) {
            if (bossSO->unk_060 != 0) {
                bossSO->unk4C = 0;
                bossSO->swork[1] += 1;
                bossSO->fwork[0] = 0.01f;
            } else {
                bossSO->unk4C = Animation_GetFrameCount(&D_601388C) - 1;
            }
        }
        var_v0 = Animation_GetFrameData(&D_601388C, (s32) bossSO->unk4C, &sp50);
block_82:
        sp1BC = (s32) var_v0;
        break;
    case 1:
        bossSO->unk4C += 1;
        if (bossSO->unk4C >= Animation_GetFrameCount(&D_600D3DC)) {
            bossSO->unk4C = 0;
        }
        var_v0 = Animation_GetFrameData(&D_600D3DC, (s32) bossSO->unk4C, &sp50);
        goto block_82;
    case 2:
        bossSO->unk4C += 1;
        if (bossSO->unk4C >= Animation_GetFrameCount(&D_600E2C4)) {
            bossSO->unk4C = 0;
        }
        var_v0 = Animation_GetFrameData(&D_600E2C4, (s32) bossSO->unk4C, &sp50);
        goto block_82;
    case 3:
        bossSO->unk4C += 1;
        if (bossSO->unk4C >= Animation_GetFrameCount(&D_600F744)) {
            bossSO->unk4C = 0;
        }
        var_v0 = Animation_GetFrameData(&D_600F744, (s32) bossSO->unk4C, &sp50);
        goto block_82;
    case 4:
        bossSO->unk4C += 1;
        if (bossSO->unk4C >= Animation_GetFrameCount(&D_600C15C)) {
            bossSO->unk4C = 0;
        }
        var_v0 = Animation_GetFrameData(&D_600C15C, (s32) bossSO->unk4C, &sp50);
        goto block_82;
    case 5:
    case 8:
    case 9:
        bossSO->unk4C += 1;
        if ((bossSO->unk4C == 0x2D) && (bossSO->unk_060 != 0)) {
            Audio_PlaySfx(0x29432073U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        if (bossSO->unk4C >= Animation_GetFrameCount((AnimationHeader *) D_6012C00)) {
            bossSO->unk4C = 0;
        }
        var_v0 = Animation_GetFrameData((AnimationHeader *) D_6012C00, (s32) bossSO->unk4C, &sp50);
        goto block_82;
    case 6:
        bossSO->unk4C += 1;
        if (bossSO->unk4C >= Animation_GetFrameCount(&D_600B1B4)) {
            bossSO->unk4C = 0;
        }
        var_v0 = Animation_GetFrameData(&D_600B1B4, (s32) bossSO->unk4C, &sp50);
        goto block_82;
    case 7:
        bossSO->unk4C += 1;
        if (bossSO->unk4C >= Animation_GetFrameCount(&D_6009D30)) {
            bossSO->unk4C = 0;
        }
        var_v0 = Animation_GetFrameData(&D_6009D30, (s32) bossSO->unk4C, &sp50);
        goto block_82;
    }
    Matrix_RotateZ(gCalcMatrix, -bossSO->vwork[0x1D].z * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -bossSO->vwork[0x1D].x * M_DTOR, 1U);
    Matrix_RotateY(gCalcMatrix, -bossSO->vwork[0x1D].y * M_DTOR, 1U);
    Matrix_RotateZ(gCalcMatrix, -bossSO->obj.rot.z * M_DTOR, 1U);
    Matrix_RotateX(gCalcMatrix, -bossSO->obj.rot.x * M_DTOR, 1U);
    Matrix_RotateY(gCalcMatrix, -bossSO->obj.rot.y * M_DTOR, 1U);
    if ((bossSO->unk_060 > 0) && (bossSO->swork[0] == 1)) {
        sp44 = gPlayer->pos.x - bossSO->obj.pos.x;
        sp48 = gPlayer->pos.y - bossSO->obj.pos.y;
        sp4C = gPlayer->pos.z - bossSO->obj.pos.z;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp44, &sp38);
        temp_fv0 = Math_RadToDeg(Math_Atan2F((bitwise f32) sp38, sp38.z));
        sp1C4 = temp_fv0;
        temp_fv0_2 = Math_RadToDeg(-Math_Atan2F(sp38.y, sqrtf(((bitwise f32) sp38 * (bitwise f32) sp38) + (sp38.z * sp38.z))));
        var_fv1 = temp_fv0;
        var_fa0 = temp_fv0_2;
        if ((temp_fv0_2 > 30.0f) && (temp_fv0_2 <= 180.0f)) {
            var_fa0 = 30.0f;
        }
        if ((var_fa0 < 330.0f) && (var_fa0 > 180.0f)) {
            var_fa0 = 330.0f;
        }
        if ((var_fv1 > 40.0f) && (var_fv1 <= 180.0f)) {
            var_fv1 = 40.0f;
        }
        if ((var_fv1 < 320.0f) && (var_fv1 > 180.0f)) {
            var_fv1 = 320.0f;
        }
        sp1C8 = var_fa0;
        Math_SmoothStepToAngle(D_i3_801C2768 + 4, var_fv1, 0.2f, 4.0f, 0.1f);
        Math_SmoothStepToAngle(D_i3_801C2768, var_fa0, 0.2f, 4.0f, 0.1f);
    } else {
        Math_SmoothStepToAngle(D_i3_801C2768 + 4, 0.0f, 0.2f, 4.0f, 0.1f);
        Math_SmoothStepToAngle(D_i3_801C2768, 0.0f, 0.2f, 4.0f, 0.1f);
    }
    Math_SmoothStepToVec3fArray(&sp50, bossSO->vwork, 1, sp1BC, bossSO->fwork[0], 100.0f, 0.0f);
    if ((bossSO->unk_062 != 0) && (bossSO->unk_060 > 0)) {
        bossSO->unk_062 = 0;
        Audio_PlaySfx(0x29121007U, &bossSO->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        temp_v0_5 = bossSO->swork[0];
        if ((temp_v0_5 != 0) && (temp_v0_5 != 2) && (temp_v0_5 != 3) && (temp_v0_5 != 6) && ((temp_v0_5 != 7) || (bossSO->unk_04E != 2))) {
            func_i3_801A3C4C(bossSO);
        }
    }
    if (gBossFrameCount == 0x190) {
        gShowBossHealth = 1;
    }
    if (gBossFrameCount >= 0x190) {
        gBossHealthBar = (s32) ((f32) (bossSO->swork[3] + bossSO->unk_060 + bossSO->swork[2]) * 0.18214285f);
    }
}

s32 func_i3_801A68A8(s32 arg0, Gfx **arg1, Vec3f *arg2, Vec3f *arg3, void *arg4) {
    ? sp58;
    ? sp4C;
    ? sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    f32 var_ft1;
    s16 temp_v0_2;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t9;

    sp58.unk0 = (f32) D_i3_801BF9A4.x;
    sp58.unk4 = (f32) D_i3_801BF9A4.y;
    sp58.unk8 = (f32) D_i3_801BF9A4.z;
    sp4C.unk0 = (f32) D_i3_801BF9B0.x;
    sp4C.unk4 = (f32) D_i3_801BF9B0.y;
    sp4C.unk8 = (f32) D_i3_801BF9B0.z;
    sp40.unk0 = (f32) D_i3_801BF9BC.x;
    sp40.unk4 = (f32) D_i3_801BF9BC.y;
    sp40.unk8 = (f32) D_i3_801BF9BC.z;
    temp_v0 = gMasterDisp;
    gMasterDisp = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA000000;
    temp_t6 = D_i3_801C2740->unk0 & 0xFF;
    temp_v0->words.w1 = (temp_t6 << 8) | (D_i3_801C2740->unk4 << 0x18) | (temp_t6 << 0x10) | 0xFF;
    if (arg4->unkE4 < 4800.0f) {
        RCP_SetupDL_30(0x40, 0x20, 0x20, gFogAlpha, gFogNear, gFogFar);
    } else {
        RCP_SetupDL_30(0x10, 0x10, 0x10, gFogAlpha, gFogNear, gFogFar);
    }
    switch (arg0) {
    case 11:
        arg3->y -= D_i3_801C2768->unk4;
        arg3->z += D_i3_801C2768->unk0;
        /* fallthrough */
    case 1:
        if (arg4->unk90 != 0) {
            *arg1 = NULL;
        } else {
            temp_v0_2 = arg4->unk9C;
            if (temp_v0_2 != 0) {
                if (temp_v0_2 & 1) {
                    temp_v0_3 = gMasterDisp;
                    gMasterDisp = temp_v0_3 + 8;
                    temp_v0_3->words.w1 = 0x202080FF;
                    temp_v0_3->words.w0 = 0xFA000000;
                    arg3->z += 3.0f;
                } else {
                    arg3->z -= 3.0f;
                }
            }
        }
        break;
    case 2:
    case 3:
    case 4:
        if (arg4->unk8C == 0) {
            *arg1 = NULL;
        }
        temp_t5 = arg4->unk98 & 1;
        if (temp_t5 != 0) {
            if (temp_t5 != 0) {
                temp_v0_4 = gMasterDisp;
                gMasterDisp = temp_v0_4 + 8;
                temp_v0_4->words.w1 = 0x202080FF;
                temp_v0_4->words.w0 = 0xFA000000;
                arg3->y += 3.0f;
            } else {
                var_ft1 = arg3->y - 3.0f;
block_24:
                arg3->y = var_ft1;
            }
        }
        break;
    case 5:
    case 6:
    case 7:
        if (arg4->unk8E == 0) {
            *arg1 = NULL;
        }
        temp_t9 = arg4->unk9A & 1;
        if (temp_t9 != 0) {
            if (temp_t9 != 0) {
                temp_v0_5 = gMasterDisp;
                gMasterDisp = temp_v0_5 + 8;
                temp_v0_5->words.w1 = 0x202080FF;
                temp_v0_5->words.w0 = 0xFA000000;
                arg3->y += 3.0f;
            } else {
                var_ft1 = arg3->y - 3.0f;
                goto block_24;
            }
        }
        break;
    }
    return 0;
}

void func_i3_801A6BDC(s32 arg0, Vec3f *arg1, void *arg2) {
    Vec3f spA0;
    ? sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f sp70;
    Vec3f sp64;
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;
    Vec3f sp28;

    spA0.x = D_i3_801BF9C8.x;
    spA0.y = D_i3_801BF9C8.y;
    spA0.z = D_i3_801BF9C8.z;
    sp94.unk0 = (f32) D_i3_801BF9D4.x;
    sp94.unk4 = (f32) D_i3_801BF9D4.y;
    sp94.unk8 = (f32) D_i3_801BF9D4.z;
    sp88.x = D_i3_801BF9E0.x;
    sp88.y = D_i3_801BF9E0.y;
    sp88.z = D_i3_801BF9E0.z;
    sp7C.x = D_i3_801BF9EC.x;
    sp7C.y = D_i3_801BF9EC.y;
    sp7C.z = D_i3_801BF9EC.z;
    sp70.x = D_i3_801BF9F8.x;
    sp70.y = D_i3_801BF9F8.y;
    sp70.z = D_i3_801BF9F8.z;
    sp64.x = D_i3_801BFA04.x;
    sp64.y = D_i3_801BFA04.y;
    sp64.z = D_i3_801BFA04.z;
    sp58.x = D_i3_801BFA10.x;
    sp58.y = D_i3_801BFA10.y;
    sp58.z = D_i3_801BFA10.z;
    sp4C.x = D_i3_801BFA1C.x;
    sp4C.y = D_i3_801BFA1C.y;
    sp4C.z = D_i3_801BFA1C.z;
    sp40.x = D_i3_801BFA28.x;
    sp40.y = D_i3_801BFA28.y;
    sp40.z = D_i3_801BFA28.z;
    sp34.x = D_i3_801BFA34.x;
    sp34.y = D_i3_801BFA34.y;
    sp34.z = D_i3_801BFA34.z;
    switch (arg0) {
    case 11:
        Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
        arg2->unkE8 = (f32) sp28;
        arg2->unkEC = sp28.y;
        arg2->unkF0 = sp28.z;
        Matrix_GetYRPAngles(gCalcMatrix, &sp28);
        arg2->unkDC = (f32) sp28;
        arg2->unkE0 = sp28.y;
        return;
    case 2:
        if (arg2->unk8C > 0) {
            Matrix_Push(&gCalcMatrix);
            Matrix_MultVec3f(gCalcMatrix, &sp88, &sp28);
            arg2->unk148 = (f32) sp28;
            arg2->unk14C = sp28.y;
            arg2->unk150 = sp28.z;
            Matrix_Pop(&gCalcMatrix);
            Matrix_MultVec3f(gCalcMatrix, &spA0, &sp28);
            arg2->unk118 = (f32) sp28;
            arg2->unk11C = sp28.y;
            arg2->unk120 = sp28.z;
        }
        if (arg2->unk8C < 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            arg2->unk148 = (f32) sp28;
            arg2->unk14C = sp28.y;
            arg2->unk150 = sp28.z;
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x17C);
            return;
        }
    default:
        return;
    case 3:
        if (arg2->unk8C > 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp7C, &sp28);
            arg2->unk130 = (f32) sp28;
            arg2->unk134 = sp28.y;
            arg2->unk138 = sp28.z;
        }
        if (arg2->unk8C < 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            arg2->unk130 = (f32) sp28;
            arg2->unk134 = sp28.y;
            arg2->unk138 = sp28.z;
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x194);
            return;
        }
        break;
    case 4:
        if (arg2->unk8C > 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp70, &sp28);
            arg2->unk100 = (f32) sp28;
            arg2->unk104 = sp28.y;
            arg2->unk108 = sp28.z;
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x164);
            return;
        }
        if (gBosses->swork[0] != 7) {
            Matrix_MultVec3f(gCalcMatrix, &sp64, &sp28);
        } else {
            Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp28);
        }
        arg2->unk100 = (f32) sp28;
        arg2->unk104 = sp28.y;
        arg2->unk108 = sp28.z;
        return;
    case 5:
        if (arg2->unk8E > 0) {
            Matrix_Push(&gCalcMatrix);
            Matrix_MultVec3f(gCalcMatrix, &sp88, &sp28);
            arg2->unk13C = (f32) sp28;
            arg2->unk140 = sp28.y;
            arg2->unk144 = sp28.z;
            Matrix_Pop(&gCalcMatrix);
            Matrix_MultVec3f(gCalcMatrix, &spA0, &sp28);
            arg2->unk10C = (f32) sp28;
            arg2->unk110 = sp28.y;
            arg2->unk114 = sp28.z;
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x170);
        }
        if (arg2->unk8E < 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            arg2->unk13C = (f32) sp28;
            arg2->unk140 = sp28.y;
            arg2->unk144 = sp28.z;
            return;
        }
        break;
    case 6:
        if (arg2->unk8E > 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp7C, &sp28);
            arg2->unk124 = (f32) sp28;
            arg2->unk128 = sp28.y;
            arg2->unk12C = sp28.z;
        }
        if (arg2->unk8E < 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp34, &sp28);
            arg2->unk124 = (f32) sp28;
            arg2->unk128 = sp28.y;
            arg2->unk12C = sp28.z;
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x188);
            return;
        }
        break;
    case 7:
        if (arg2->unk8E > 0) {
            Matrix_MultVec3f(gCalcMatrix, &sp70, &sp28);
            arg2->unkF4 = (f32) sp28;
            arg2->unkF8 = sp28.y;
            arg2->unkFC = sp28.z;
            Matrix_GetYRPAngles(gCalcMatrix, arg2 + 0x158);
            return;
        }
        if (gBosses->swork[0] != 7) {
            Matrix_MultVec3f(gCalcMatrix, &sp58, &sp28);
        } else {
            Matrix_MultVec3f(gCalcMatrix, &sp40, &sp28);
        }
        arg2->unkF4 = (f32) sp28;
        arg2->unkF8 = sp28.y;
        arg2->unkFC = sp28.z;
        break;
    }
}

void func_i3_801A71B8(Boss *bossSO) {
    ? spE8;
    f32 spC4;
    f32 spA0;
    ? *var_s0;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    f32 *var_s1;
    f32 *var_s2;
    f32 *var_s3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;

    M2C_MEMCPY_ALIGNED(&spE8, D_i3_801BFA40, 0x6C);
    M2C_MEMCPY_ALIGNED(&spC4, D_i3_801BFAAC, 0x24);
    M2C_MEMCPY_ALIGNED(&spA0, D_i3_801BFAD0, 0x24);
    temp_fv0 = bossSO->unk_3F8;
    Matrix_Scale(gCalcMatrix, temp_fv0, temp_fv0, temp_fv0, (u8) 1);
    if (D_80178284 != 0) {
        Animation_DrawSkeleton(2, &D_600E470, bossSO->vwork, func_i3_801A68A8, func_i3_801A6BDC, bossSO, gCalcMatrix);
    }
    if (bossSO->unk_060 <= 0) {
        RCP_SetupDL_49();
        temp_v1 = gMasterDisp;
        gMasterDisp = temp_v1 + 8;
        temp_v1->words.w1 = -1U;
        temp_v1->words.w0 = 0xFA000000;
        temp_v1_2 = gMasterDisp;
        gMasterDisp = temp_v1_2 + 8;
        temp_v1_2->words.w0 = 0xFB000000;
        temp_v1_2->words.w1 = 0xFFC000FF;
        Matrix_Pop(&gGfxMatrix);
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, bossSO->obj.pos.x, bossSO->obj.pos.y, (bossSO->obj.pos.z - 500.0f) + D_80177D20, (u8) 1);
        Matrix_Scale(gGfxMatrix, D_i3_801C2768->unkC, D_i3_801C2768->unk8, 1.0f, (u8) 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        temp_v1_3 = gMasterDisp;
        gMasterDisp = temp_v1_3 + 8;
        temp_v1_3->words.w1 = (u32) D_1024AC0;
        temp_v1_3->words.w0 = 0x06000000;
        var_s1 = D_i3_801C2768;
        var_s0 = &spE8;
        var_s2 = &spC4;
        var_s3 = &spA0;
        do {
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, var_s0->unk0 + bossSO->obj.pos.x, var_s0->unk4 + bossSO->obj.pos.y, var_s0->unk8 + (bossSO->obj.pos.z + D_80177D20), (u8) 1);
            Matrix_RotateY(gGfxMatrix, *var_s2 * M_DTOR, 1U);
            Matrix_RotateX(gGfxMatrix, *var_s3 * M_DTOR, 1U);
            Matrix_Scale(gGfxMatrix, var_s1->unk10, 100.0f, 1.0f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_4 = gMasterDisp;
            var_s0 += 0xC;
            var_s2 += 4;
            gMasterDisp = temp_v1_4 + 8;
            temp_v1_4->words.w1 = (u32) D_1024AC0;
            temp_v1_4->words.w0 = 0x06000000;
            var_s1 += 4;
            var_s3 += 4;
        } while (var_s1 != (D_i3_801C2768 + 0x24));
        if (*(D_i3_801C2768 + 0x34) > 0.0f) {
            temp_v1_5 = gMasterDisp;
            gMasterDisp = temp_v1_5 + 8;
            temp_v1_5->words.w1 = 0xFFC040FF;
            temp_v1_5->words.w0 = 0xFA000000;
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, bossSO->obj.pos.x, bossSO->obj.pos.y + 230.0f, (bossSO->obj.pos.z - 300.0f) + D_80177D20, (u8) 1);
            Matrix_RotateX(gGfxMatrix, 0.08726646f, 1U);
            temp_fv0_2 = *(D_i3_801C2768 + 0x34);
            Matrix_Scale(gGfxMatrix, temp_fv0_2, 1.0f, temp_fv0_2, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_6 = gMasterDisp;
            gMasterDisp = temp_v1_6 + 8;
            temp_v1_6->words.w1 = (u32) D_20112C0;
            temp_v1_6->words.w0 = 0x06000000;
            Matrix_Scale(gGfxMatrix, 0.6f, 1.0f, 0.6f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_7 = gMasterDisp;
            gMasterDisp = temp_v1_7 + 8;
            temp_v1_7->words.w1 = (u32) D_20112C0;
            temp_v1_7->words.w0 = 0x06000000;
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            Matrix_Translate(gGfxMatrix, bossSO->obj.pos.x, bossSO->obj.pos.y + 270.0f, (bossSO->obj.pos.z - 300.0f) + D_80177D20, (u8) 1);
            Matrix_RotateX(gGfxMatrix, -0.05235988f, 1U);
            temp_fv0_3 = *(D_i3_801C2768 + 0x34);
            Matrix_Scale(gGfxMatrix, temp_fv0_3, 1.0f, temp_fv0_3, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_8 = gMasterDisp;
            gMasterDisp = temp_v1_8 + 8;
            temp_v1_8->words.w1 = (u32) D_20112C0;
            temp_v1_8->words.w0 = 0x06000000;
            Matrix_Scale(gGfxMatrix, 0.6f, 1.0f, 0.6f, (u8) 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            temp_v1_9 = gMasterDisp;
            gMasterDisp = temp_v1_9 + 8;
            temp_v1_9->words.w1 = (u32) D_20112C0;
            temp_v1_9->words.w0 = 0x06000000;
        }
    }
}

void func_i3_801A7750(void) {
    Object_2F4 *var_s0;
    Vec3f *temp_s1;
    s16 var_s2;

    var_s0 = gObjects2F4;
    Rand_SetSeed(1, 0x71AC, 0x263A);
    var_s2 = 0;
    do {
        if (((var_s2 != 0) || !((f32) gTeamShields->unkC <= 0.0f)) && ((var_s2 != 1) || !((f32) gTeamShields->unk8 <= 0.0f)) && ((var_s2 != 2) || !((f32) gTeamShields->unk4 <= 0.0f))) {
            temp_s1 = &D_i3_801BFB30[var_s2];
            Object_2F4_Initialize(var_s0);
            var_s0->obj.status = 1;
            var_s0->obj.id = 0xC3;
            var_s0->obj.pos.x = gPlayer->pos.x + (temp_s1->x * 0.5f);
            var_s0->obj.pos.y = gPlayer->pos.y + temp_s1->y;
            var_s0->unk_0B8 = 1;
            var_s0->obj.pos.z = gPlayer->pos.z + temp_s1->z;
            Object_SetInfo(&var_s0->info, 0xC3U & 0xFFFF);
            var_s0->unk_07C = (s32) 1;
            Audio_PlaySfx(0x3100000CU, &var_s0->sfxPos, 4U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        }
        var_s2 += 1;
        var_s0 += 0x2F4;
    } while (var_s2 != 3);
}

void func_i3_801A7930(Player *player) {
    f32 sp78;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    Vec3f sp54;
    Object *sp34;                                   /* compiler-managed */
    f32 *sp30;
    f32 *sp2C;
    Object_2F4 *temp_a0;
    Object_2F4 *var_a0;
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv1;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_t6 = player->unk_1D0;
    switch (temp_t6) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        D_80177A80 = 0;
        player->unk_4D8 = 0.0f;
        player->unk_034 = 0.0f;
        player->unk_0D0 = 40.0f;
        player->unk_110 = 0.0f;
        player->unk_12C = 0.0f;
        player->unk_234 = 1;
        player->wings.unk_04 = 0.0f;
        player->wings.unk_0C = 0.0f;
        player->wings.unk_08 = 0.0f;
        player->wings.unk_10 = 0.0f;
        player->unk_130 = 0.0f;
        D_80177978 = player->camEye.x;
        D_80177980 = player->camEye.y;
        var_a0 = gObjects2F4 + 0x1D88;
        D_80177988 = player->camEye.z;
        D_801779A0 = player->camAt.x;
        D_801779B8 = player->camAt.y;
        D_801779C0 = player->camAt.z;
        do {
            if (var_a0->unk_0B6 == 0) {
                sp34 = &var_a0->obj;
                Object_Kill(&var_a0->obj, &var_a0->sfxPos);
                var_a0 = (Object_2F4 *) &var_a0->obj;
            }
            var_a0 += 0x2F4;
        } while (var_a0 != gBosses);
        Object_Kill(&(gObjects2F4 + 0x5E8)->obj, gObjects2F4 + 0x6E8);
        Object_Kill(&(gObjects2F4 + 0x8DC)->obj, gObjects2F4 + 0x9DC);
        Object_Kill(&(gObjects2F4 + 0xBD0)->obj, gObjects2F4 + 0xCD0);
        player->unk_1D0 = 1;
        D_80177A48->unk0 = 0.1f;
        if (Rand_ZeroOne() > 0.5f) {
            *(D_80177A48 + 0x24) = -1.0f;
        } else {
            *(D_80177A48 + 0x24) = 1.0f;
        }
        break;
    case 1:                                         /* switch 1 */
        D_80177CE8 += 30.0f;
        Math_SmoothStepToF(&player->unk_0E4, 0.0f, 0.1f, 5.0f, 0.0f);
        Math_SmoothStepToF(&player->pos.y, 200.0f, 0.05f, 10.0f, 0.0f);
        sp78 = Math_RadToDeg(-Math_Atan2F(player->pos.x - gBosses->obj.pos.x, (player->pos.z - gBosses->obj.pos.z) * 0.05f));
        Math_SmoothStepToF(&D_80177980, 300.0f, 1.0f, 20.0f, 0.0f);
        Math_SmoothStepToF(&D_801779B8, 290.0f, 1.0f, 20.0f, 0.0f);
        temp_fv1 = Math_SmoothStepToAngle(&player->unk_0E8, sp78, 0.5f, 2.0f, 0.0001f) * 30.0f;
        temp_fa0 = temp_fv1;
        if (D_80177A80 >= 0xE) {
            Math_SmoothStepToAngle(&player->unk_0EC, temp_fa0, 0.1f, 5.0f, 0.0001f);
            D_801779A0 = 0.0f;
            D_80177978 = 0.0f;
        } else if (temp_fv1 < 0.0f) {
            player->unk_0EC -= 30.0f;
        } else {
            player->unk_0EC += 30.0f;
        }
        temp_v1 = D_80177A80;
        if (temp_v1 >= 0xC8) {
            player->unk_0E4 += 1.0f;
            player->unk_0E8 += 1.0f;
            player->unk_0EC += 1.0f;
        }
        if (temp_v1 >= 0xE6) {
            D_80178358 = 0xFF;
            D_80178350 = 0xFF;
            D_80178354 = 0xFF;
            D_80178348 = 0xFF;
        }
        if (temp_v1 == 0xE6) {
            func_800182F4(0x103200FF);
            func_800182F4(0x113200FF);
        }
        if (temp_v1 == 0x190) {
            player->unk_1D0 += 1;
            func_800A6148();
            func_8001CA24(0U);
            Audio_KillSfx(&player->unk_460);
            D_80178340 = 0xFA;
            player->timer_1F8 = 0x14;
            player->unk_0D0 = 0.0f;
            player->unk_0E4 = 0.0f;
            player->unk_0E8 = 0.0f;
            player->unk_0EC = 0.0f;
        }
        break;
    case 2:                                         /* switch 1 */
        D_80177CE8 += 60.0f;
        if (player->timer_1F8 == 0) {
            player->pos.x = 0.0f;
            player->pos.y = 200.0f;
            player->wings.unk_2C = 1;
            player->unk_1D0 += 1;
            player->pos.z = -(D_80177D20 - 500.0f);
            func_8001C8B8(0U);
            func_8001D444(0U, 0x26U, 0U, 0xFFU);
            D_80177A98 = 1;
            func_800A6148();
            *(D_80177A48 + 4) = 0.0f;
            *(D_80177A48 + 8) = 0.0f;
            player->camEye.x = 0.0f;
            temp_fv0 = player->pos.z;
            player->camEye.y = player->pos.y + 80.0f;
            player->camEye.z = (temp_fv0 + D_80177D20) - 4000.0f;
            D_80177988 = (temp_fv0 + D_80177D20) - 4900.0f;
            D_801779A0 = 0.0f;
            player->camAt.x = D_801779A0;
            D_801779B8 = 200.0f;
            player->camAt.y = 200.0f;
            D_801779C0 = player->pos.z + D_80177D20;
            player->camAt.z = D_801779C0;
            D_80177A48->unk0 = 0.0f;
            Object_Kill(&(gObjects2F4 + 0xBD0)->obj, gObjects2F4 + 0xCD0);
            Object_Kill(&(gObjects2F4 + 0xEC4)->obj, gObjects2F4 + 0xFC4);
        }
        break;
    case 3:                                         /* switch 1 */
        D_80177CE8 += 60.0f;
        D_80178358 = 0;
        D_8017835C = 4;
        if (D_801782F8 != 0) {
            player->wings.unk_30 = (f32) (gFrameCount & 1) * 5.0f;
        }
        temp_v1_2 = D_80177A80;
        switch (temp_v1_2) {                        /* switch 3; irregular */
        default:                                    /* switch 3 */
            temp_a0 = gObjects2F4 + 0xEC4;
            switch (temp_v1_2) {                    /* switch 4; irregular */
            case 0x285:                             /* switch 4 */
                Object_Kill(&temp_a0->obj, gObjects2F4 + 0xFC4);
                break;
            case 0x2BC:                             /* switch 4 */
                player->unk_1D0 += 1;
                func_i3_801A7750(temp_a0);
                *(D_i3_801C2768 + 0xC) = 1000.0f;
                break;
            }
            break;
        case 0x1C2:                                 /* switch 3 */
            func_i3_801A0DF8(-1200.0f, -(D_80177D20 + 2500.0f), 90.0f, 2U, 1.0f);
            break;
        case 0x221:                                 /* switch 3 */
            func_i3_801A0DF8(1400.0f, -(D_80177D20 + 3250.0f), -90.0f, 3U, 1.0f);
            break;
        case 0x226:                                 /* switch 3 */
            Object_Kill(&(gObjects2F4 + 0xBD0)->obj, gObjects2F4 + 0xCD0);
            break;
        }
        if ((temp_v1_2 >= 0x208) && (temp_v1_2 < 0x25D)) {
            Math_SmoothStepToF(&player->pos.x, 400.0f, 0.1f, 10.0f, 0.1f);
        }
        if ((temp_v1_2 >= 0x208) && (temp_v1_2 < 0x23A)) {
            Math_SmoothStepToAngle(&player->unk_0EC, -30.0f, 0.1f, 5.0f, 0.1f);
        }
        if ((temp_v1_2 >= 0x23A) && (temp_v1_2 < 0x25D)) {
            Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.1f, 5.0f, 0.1f);
        }
        if ((temp_v1_2 >= 0x25D) && (temp_v1_2 < 0x26C)) {
            player->unk_0EC += 30.0f;
        }
        if ((temp_v1_2 >= 0x26C) && (temp_v1_2 < 0x280)) {
            Math_SmoothStepToAngle(&player->unk_0EC, 45.0f, 0.1f, 5.0f, 0.0f);
        }
        if (temp_v1_2 >= 0x280) {
            Math_SmoothStepToAngle(&player->unk_0EC, 0.0f, 0.3f, 7.0f, 0.0f);
        }
        if (temp_v1_2 >= 0x249) {
            Math_SmoothStepToF(&player->pos.x, 0.0f, 0.2f, 9.0f, 0.0f);
        }
        if (temp_v1_2 >= 0x258) {
            Math_SmoothStepToF(&player->pos.y, 950.0f, 0.1f, 10.0f, 0.0001f);
        }
        Math_SmoothStepToF(&player->pos.z, -(D_80177D20 + 4350.0f), 1.0f, 20.0f, 0.0001f);
        if (D_80177A80 >= 0x26C) {
            Math_SmoothStepToF(&player->camEye.x, 0.0f, 1.0f, 10.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.y, player->pos.y + 52.0f, 1.0f, 16.0f, 0.0f);
            Math_SmoothStepToF(&player->camEye.z, (player->pos.z + D_80177D20) - 50.0f, 1.0f, 21.5f, 0.0f);
        }
        D_801779A0 = player->pos.x;
        player->camAt.x = D_801779A0;
        D_801779B8 = player->pos.y;
        player->camAt.y = D_801779B8;
        D_801779C0 = player->pos.z + D_80177D20;
        player->camAt.z = D_801779C0;
        break;
    case 4:                                         /* switch 1 */
        D_80177CE8 += 60.0f;
        D_80178358 = 0;
        D_8017835C = 4;
        D_80177A48->unk4 = (f32) (D_80177A48->unk4 + (D_80177A48->unk8 * 0.8f));
        Matrix_RotateY(gCalcMatrix, D_80177A48->unk4 * M_DTOR, 0U);
        sp60 = 0.0f;
        sp64 = 0.0f;
        sp68 = -700.0f;
        Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp60, &sp54);
        if (D_80177A80 < 0x5A0) {
            D_80177978 = (bitwise f32) sp54;
            D_80177980 = *(D_i3_801C2768 + 0xC) + sp54.y;
            D_80177988 = player->pos.z + D_80177D20 + sp54.z;
            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y + 75.0f;
            Math_SmoothStepToF(D_i3_801C2768 + 0xC, 500.0f, 0.1f, 1.0f, 0.0001f);
            D_801779C0 = player->pos.z + D_80177D20 + 200.0f;
            if (D_80177A80 >= 0x578) {
                D_801779C0 -= (f32) ((D_80177A80 * 8) - 0x2BC0);
            }
        } else {
            Math_SmoothStepToF(&D_80177978, 0.0f, 0.1f, 1.0f, 0.0001f);
            D_801779A0 = 0.0f;
            D_801779B8 = player->pos.y + 75.0f;
            D_801779C0 = (player->pos.z + D_80177D20 + 200.0f) - (f32) ((D_80177A80 * 8) - 0x2BC0);
        }
        if (D_80177A80 >= 0x5B5) {
            player->unk_0D0 += 2.0f;
            player->unk_0E4 += 0.2f;
            Math_SmoothStepToF(D_80177A48 + 8, 0.0f, 1.0f, 0.001f, 0.0f);
            player->unk_190 = 2.0f;
        } else {
            Math_SmoothStepToF(D_80177A48 + 8, 0.23f, 1.0f, 0.001f, 0.0f);
            Math_SmoothStepToF(D_80177A48, 0.5f, 0.1f, 0.0005f, 0.0f);
        }
        temp_v1_3 = D_80177A80;
        if (temp_v1_3 == 0x618) {
            func_800A6148();
        }
        if (temp_v1_3 >= 0x5FB) {
            D_80178358 = 0xFF;
            D_80178354 = 0;
            D_80178350 = 0;
            D_80178348 = 0;
            D_8017835C = 8;
            if (D_80178340 == 0xFF) {
                func_8001CA24(0U);
                func_8001DBD0(0xA);
                player->state_1C8 = PLAYERSTATE_1C8_6;
                player->timer_1F8 = 0;
                D_8017837C = 4;
                D_800D3180[7] = Play_CheckMedalStatus(0x64U) + 1;
            }
        }
        break;
    }
    sp2C = &player->camEye.z;
    sp30 = &player->camEye.y;
    sp34 = &player->camEye;
    switch (D_80177A80) {                           /* switch 5; irregular */
    case 0x1B8:                                     /* switch 5 */
        D_80177840 = 0x64;
        break;
    case 0x280:                                     /* switch 5 */
        func_800BA808(gMsg_ID_20010, RCID_FOX);
        break;
    case 0x2D8:                                     /* switch 5 */
        temp_v0 = *(gTeamShields + 8);
        if (temp_v0 != -1) {
            if (temp_v0 == 0) {
                func_800BA808(gMsg_ID_20345, RCID_ROB64);
            } else {
                func_80048AC0(2);
            }
        } else {
            func_800BA808(gMsg_ID_20339, RCID_ROB64);
        }
        break;
    case 0x36B:                                     /* switch 5 */
        temp_v0_2 = *(gTeamShields + 0xC);
        if (temp_v0_2 != -1) {
            if (temp_v0_2 == 0) {
                func_800BA808(gMsg_ID_20344, RCID_ROB64);
            } else {
                func_80048AC0(3);
            }
        } else {
            func_800BA808(gMsg_ID_20338, RCID_ROB64);
        }
        break;
    case 0x3FD:                                     /* switch 5 */
        temp_v0_3 = *(gTeamShields + 4);
        if (temp_v0_3 != -1) {
            if (temp_v0_3 == 0) {
                func_800BA808(gMsg_ID_20343, RCID_ROB64);
            } else {
                func_80048AC0(1);
            }
        } else {
            func_800BA808(gMsg_ID_20337, RCID_ROB64);
        }
        break;
    case 0x4A2:                                     /* switch 5 */
        D_80177830 = 1;
        break;
    case 0x56A:                                     /* switch 5 */
        D_80177830 = 0;
        break;
    case 0x5B4:                                     /* switch 5 */
        Audio_PlaySfx(0x09000002U, &player->unk_460, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        player->unk_194 = 5.0f;
        player->unk_190 = 5.0f;
        break;
    case 0x578:                                     /* switch 5 */
        if (*(gTeamShields + 0xC) > 0) {
            gObjects2F4->unk_0B8 = 2;
        }
        break;
    case 0x5DC:                                     /* switch 5 */
        func_800182F4(0x103200FF);
        func_800182F4(0x113200FF);
        break;
    case 0x58C:                                     /* switch 5 */
        if (*(gTeamShields + 8) > 0) {
            *(gObjects2F4 + 0x3AC) = 2;
        }
        break;
    case 0x5A0:                                     /* switch 5 */
        if (*(gTeamShields + 4) > 0) {
            *(gObjects2F4 + 0x6A0) = 2;
        }
        break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_114 + player->unk_0E8 + 180.0f) * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -((player->unk_120 + player->unk_0E4) * M_DTOR), 1U);
    sp60 = 0.0f;
    sp64 = 0.0f;
    sp68 = player->unk_0D0;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp60, &sp54);
    player->vel.x = (bitwise f32) sp54;
    player->vel.z = sp54.z;
    player->vel.y = sp54.y;
    player->pos.x += player->vel.x;
    player->pos.z += player->vel.z;
    player->pos.y += player->vel.y;
    player->unk_138 = player->pos.z;
    player->unk_0F8 = player->unk_0EC;
    Math_SmoothStepToF(&sp34->x, D_80177978, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(sp30, D_80177980, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(sp2C, D_80177988, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.x, D_801779A0, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.y, D_801779B8, D_80177A48->unk0, 50000.0f, 0.0f);
    Math_SmoothStepToF(&player->camAt.z, D_801779C0, D_80177A48->unk0, 50000.0f, 0.0f);
    player->unk_088 += 10.0f;
    temp_ft0 = -__sinf(player->unk_088 * M_DTOR) * 0.3f;
    player->unk_0F4 += 8.0f;
    player->unk_080 = temp_ft0;
    player->unk_0F0 = __sinf(player->unk_0F4 * M_DTOR);
}

void func_i3_801A8BE8(Player *player) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    Vec3f sp30;
    s16 temp_v0;

    temp_v0 = player->unkB8;
    switch (temp_v0) {                              /* irregular */
    case 4:
        break;
    case 1:
        if ((player->unkB6 != 0) && (((((bitwise s32) player->camEye.x & 7) * 0xA) + 0x406) < D_80177A80)) {
            player->unkB8 = 4;
        }
        break;
    case 2:
        player->unkB8 = 3;
        Audio_PlaySfx(0x09000002U, (Vec3f *) &player->unk_100, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        player->unk_188 = 5.0f;
        /* fallthrough */
    case 3:
        player->pos.z = 3e-45f;
        player->unk_114 += 2.0f;
        player->unk_0F4 += 0.2f;
        break;
    }
    Matrix_RotateY(gCalcMatrix, (player->unk_0F8 + 180.0f) * M_DTOR, 0U);
    Matrix_RotateX(gCalcMatrix, -(player->unk_0F4 * M_DTOR), 1U);
    sp3C = 0.0f;
    sp40 = 0.0f;
    sp44 = player->unk_114;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, (Vec3f *) &sp3C, &sp30);
    player->unk_0E8 = (bitwise f32) sp30;
    player->unk_0EC = sp30.y;
    player->unk_0F0 = sp30.z;
    player->unk_014 = player->unk_0F8 + 180.0f;
    player->unk_010 = -player->unk_0F4;
    player->unk_018 = -player->unk_0FC;
}

void func_i3_801A8DB8(Vec3f *arg0, u32 arg1, f32 arg2) {
    Effect *sp18;
    Effect *var_a3;

    var_a3 = gEffects;
loop_1:
    if (var_a3->obj.status == 0) {
        sp18 = var_a3;
        func_8007A5F8(var_a3, arg0, arg1);
        var_a3->vel.z = arg2;
        return;
    }
    var_a3 += 0x8C;
    if (var_a3 == gItems) {
        return;
    }
    goto loop_1;
}
