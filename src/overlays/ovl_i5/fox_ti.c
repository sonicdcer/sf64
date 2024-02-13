#include "global.h"

extern s32 D_i5_801B750C[];
extern u8 D_i5_801BA1E8;

void func_i5_80188F30(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        D_i5_801B750C[i] = 0;
    }
    D_i5_801BA1E8 = 0x63;
}

void func_i5_80188F60(Effect* effect) {
    if (effect->timer_50 == 0) {
        effect->unk_44 -= 16;
        if (effect->unk_44 < 17) {
            Object_Kill(&effect->obj, effect->sfxPos);
        }
    }
}

extern Gfx D_3007E70[];

void func_i5_80188FA8(Effect* effect) {

    Matrix_Scale(gGfxMatrix, effect->scale2 * 0.5f, effect->scale2, effect->scale2, 1);
    Matrix_RotateX(gGfxMatrix, - (M_DTOR * 90), 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GSGM_BACK();
    GPC(255, 255, 255, effect->unk_44);
    GDL(D_3007E70);
}

void func_i5_80189090(Effect* effect, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    Effect_Initialize(effect);
    effect->obj.status = 1;
    effect->obj.id = 0x170;
    effect->obj.pos.x = arg1;
    effect->obj.pos.y = arg2;
    effect->obj.pos.z = arg3;
    effect->obj.rot.y = arg4;
    effect->scale2 = arg5;
    effect->timer_50 = 0x19;
    effect->unk_44 = 0xFF;
    Object_SetInfo(&effect->info, effect->obj.id);
}

void func_i5_80189120(f32 x, f32 y, f32 z, f32 arg3, f32 arg4) {
    s32 i;
    
    for (i = 50; i >= 0; i--) {
        if (gEffects[i].obj.status == 0) {
            func_i5_80189090(&gEffects[i], x, y, z, arg3, arg4);
            break;
        }
    }
}

extern void func_i5_801B49D0(Actor*);

void func_i5_80189194(Actor* actor) {
    func_i5_801B49D0(actor);
}

extern Vec3f D_i5_801B7520;

void func_i5_801891B4(s32 limbIndex, Vec3f* rot, void* data) {
    Actor* actor = (Actor*)data;
    
    if (limbIndex == 2) {
        Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7520, (Vec3f*) &actor->fwork[0]);
    }
}

void func_i5_801891F4(Actor* actor) {
    f32 temp_fs0;
    f32 temp_fs1;
    f32 var_fv1;
    f32 temp;
    f32 temp2;

    temp_fs0 = gPlayer[0].pos.x - actor->obj.pos.x;
    temp_fs1 = (gPlayer[0].unk_138 + gPlayer[0].unk_08C) - actor->obj.pos.z;

    var_fv1 = Math_RadToDeg(Math_Atan2F(temp_fs0, temp_fs1));

    if ((var_fv1 > 45.0f) && (var_fv1 < 180.0f)) {
        var_fv1 = 45.0f;
    }
    if ((var_fv1 < 315.0f) && (var_fv1 > 180.0f)) {
        var_fv1 = 315.0f;
    }
    Math_SmoothStepToAngle(&actor->obj.rot.y, var_fv1, 0.2f, 6.0f, 0.01f);
    temp_fs0 = (actor->obj.pos.x + actor->fwork[0]) - gPlayer[0].pos.x;
    temp2 = (actor->obj.pos.y + actor->fwork[1]) - (gPlayer[0].pos.y + 30.0f);
    temp_fs1 = ((actor->obj.pos.z + actor->fwork[2]) - gPlayer[0].unk_138) + gPlayer[0].unk_08C;
    temp = sqrtf(SQ(temp_fs0) + SQ(temp_fs1));
    Math_SmoothStepToAngle(&actor->fwork[5], Math_RadToDeg(Math_Atan2F(temp2, temp)), 0.2f, 5.0f, 0.01f);
}

void func_i5_80189380(Actor* actor) {
    Vec3f sp8C;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    Vec3f pad;

    sp50.x = actor->fwork[0];
    sp50.y = actor->fwork[1];
    sp50.z = actor->fwork[2];
    sp44.x = gPlayer[0].pos.x - actor->obj.pos.x;
    sp44.y = gPlayer[0].pos.y - actor->obj.pos.y;
    sp44.z = gPlayer[0].pos.z - actor->obj.pos.z;
    Matrix_RotateZ(gCalcMatrix, -actor->obj.rot.z * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, -actor->obj.rot.x * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, -actor->obj.rot.y * M_DTOR, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp44, &sp8C);
    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);
    Matrix_MultVec3f(gCalcMatrix, &sp50, &sp8C);
    sp80.x = actor->obj.pos.x + sp8C.x;
    sp80.y = actor->obj.pos.y + sp8C.y;
    sp80.z = actor->obj.pos.z + sp8C.z;
    sp74.x = actor->fwork[5];
    sp74.y = actor->obj.rot.y;
    sp74.z = 0.0f;
    sp68.x = actor->obj.rot.x;
    sp68.y = actor->obj.rot.y;
    sp68.z = actor->obj.rot.z;
    sp5C.x = 0.0f;
    sp5C.y = 0.0f;
    sp5C.z = 70.0f;
    func_8007EE68(0x161, &sp80, &sp74, &sp68, &sp5C, 1.0f);
    sp80.y += 20.0f;
    func_8007EE68(0x161, &sp80, &sp74, &sp68, &sp5C, 1.0f);
}

void func_i5_801891F4(Actor*);                         /* extern */
void func_i5_80189380(Actor*);                         /* extern */
extern Vec3f D_i5_801B752C;
extern Vec3f D_i5_801B7538;

void func_i5_801895B8(Actor* actor) {
    Vec3f sp54;
    Vec3f sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;

    actor->iwork[2]++;
    switch (actor->state) {
        case 0:
            Audio_PlaySfx(0x31000017, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            if (actor->obj.rot.z > 1.0f) {
                actor->iwork[0] = 1;
            }
            actor->state = 1;
            /* fallthrough */
        case 1:
            actor->fwork[7] = 20.0f;
            if (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 3000.0f) {
                actor->state = 2;
                actor->timer_0BC = 0x1E;
            }
            break;
        case 2:
            if (actor->iwork[0] == 1) {
                actor->fwork[7] = 5.0f;
                if (fabsf(actor->obj.pos.z - gPlayer[0].unk_138) < 200.0f) {
                    actor->fwork[7] = 0.0f;
                }
                func_i5_801891F4(actor);
            }
            if (actor->timer_0BC == 0) {
                actor->timer_0BC = 0x28;
                func_i5_80189380(actor);
                if ((fabsf(actor->obj.pos.z - gPlayer[0].unk_138) > 200.0f) && (actor->iwork[0] == 1)) {
                    actor->fwork[6] = -10.0f;
                }
            }
            break;
    }
    func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp44, &sp3C, &sp40);
    actor->obj.pos.y = sp3C;

    if (actor->obj.rot.x < sp44 * 57.295776f) {
        actor->obj.rot.x += 2.0f;
    }
    if (sp44 * 57.295776f < actor->obj.rot.x) {
        actor->obj.rot.x -= 2.0f;
    }

    if (actor->obj.rot.z < sp40 * 57.295776f) {
        actor->obj.rot.z += 2.0f;
    }
    if (sp40 * 57.295776f < actor->obj.rot.z) {
        actor->obj.rot.z -= 2.0f;
    }
    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
    Matrix_Push(&gCalcMatrix);
    if (!(actor->iwork[2] & 1) && ((actor->obj.pos.z + D_80177D20) > -3800.0f)) {
        Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i5_801B752C, &sp48);
        func_i5_80189120(actor->obj.pos.x + sp48.x, actor->obj.pos.y + sp48.y, actor->obj.pos.z + sp48.z, actor->obj.pos.y, 1.3f);
        Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i5_801B7538, &sp48);
        func_i5_80189120(actor->obj.pos.x + sp48.x, actor->obj.pos.y + sp48.y, actor->obj.pos.z + sp48.z, actor->obj.pos.y, 1.3f);
    }
    Math_SmoothStepToF(&actor->fwork[6], actor->fwork[7], 0.1f, 2.0f, 0.00001f);
    Matrix_Pop(&gCalcMatrix);
    sp54.x = 0.0f;
    sp54.y = 0.0f;
    sp54.z = actor->fwork[6];
    Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);
    actor->vel.x = sp48.x;
    actor->vel.y = sp48.y;
    actor->vel.z = sp48.z;
    if (actor->unk_0D0 > 0) {
        if (Rand_ZeroOne() <= 0.25f) {
            actor->unk_044 = 2;
        } else {
            actor->unk_044 = 0;
        }
        func_80066254(actor);
        actor->info.bonus = 0;
        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, 8.0f);
        func_8007C120(actor->obj.pos.x, actor->obj.pos.y + 30.0f, actor->obj.pos.z, actor->vel.x, actor->vel.y, actor->vel.z, 0.1f, 0x1E);
        func_8007A6F0(&actor->obj.pos, 0x2903A008);
        Object_Kill(&actor->obj, actor->sfxPos);
    }
}

extern AnimationHeader D_700C8D8;
extern Limb* D_700C964[];

void func_i5_80189AFC(Actor* actor) {

    Animation_GetFrameData(&D_700C8D8, 0, actor->vwork);
    actor->vwork[3].z = actor->fwork[5] + 270.0f;
    Animation_DrawSkeleton(1, D_700C964, actor->vwork, NULL, func_i5_801891B4, actor, &gIdentityMatrix);
}

extern Vec3f D_i5_801B7544;

void func_i5_80189B80(Actor* actor) {
    f32 sp2C;

    func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp2C, &actor->obj.pos.y, &sp2C);
    actor->health = 10;
    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_60068F0);
    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
    Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
    Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);
    Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7544, (Vec3f*) &actor->fwork[0]);
    actor->fwork[0] += actor->obj.pos.x;
    actor->fwork[1] += actor->obj.pos.y;
    actor->fwork[2] += actor->obj.pos.z;
}

#ifdef IMPORT_DATA
extern f32 D_6006924[];

void func_i5_80189CC8(Actor* actor) {
    static Vec3f D_i5_801B7550 = { 0.0f, -50.0f, 178.0f };
    static Vec3f D_i5_801B755C = { 0.0f, 0.0f, 90.0f };
    Vec3f sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    Vec3f sp4C;
    Vec3f sp40;
    f32 temp;

    if (actor->health > 0) {
        if (actor->unk_0D0 != 0) {
            actor->unk_0D0 = 0;
            actor->timer_0C6 = 15;
            actor->health -= actor->damage;
            if (actor->health <= 0) {
                actor->health = 0;
                Audio_PlaySfx(0x2903A008, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->timer_0CA[0] = actor->unk_044 = 0;
                actor->info.unk_1C = 0.0f;
                func_80066254(actor);
                actor->info.bonus = 0;
                actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6006924);
                func_8007D0E0(actor->fwork[0], actor->fwork[1], actor->fwork[2], 2.0f);
            }
        }
        if (actor->timer_0BC >= 0xF) {
            sp4C.x = gPlayer[0].pos.x - actor->obj.pos.x;
            sp4C.y = (gPlayer[0].pos.y + 30.0f) - actor->obj.pos.y;
            sp4C.z = gPlayer[0].pos.z - actor->obj.pos.z;
            Matrix_RotateZ(gCalcMatrix, -actor->obj.rot.z * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, -actor->obj.rot.x * M_DTOR, 1);
            Matrix_RotateY(gCalcMatrix, -actor->obj.rot.y * M_DTOR, 1);
            Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp64);
            sp58 = sp64.x - D_i5_801B7550.x;
            sp5C = sp64.y - D_i5_801B7550.y;
            sp60 = sp64.z - D_i5_801B7550.z;
            temp = sqrtf(SQ(sp58) + SQ(sp60));
            actor->fwork[5] = Math_RadToDeg(-Math_Atan2F(sp5C, temp));
            actor->fwork[6] = Math_RadToDeg(Math_Atan2F(sp58, sp60));
            Math_SmoothStepToAngle(&actor->fwork[3], actor->fwork[5], 0.2f, 5.0f, 0.01f);
            Math_SmoothStepToAngle(&actor->fwork[4], actor->fwork[6], 0.2f, 5.0f, 0.01f);

            if ((actor->fwork[4] > 45.0f) && (actor->fwork[4] < 180.0f)) {
                actor->fwork[4] = 45.0f;
            }
            if ((actor->fwork[4] < 315.0f) && (actor->fwork[4] > 180.0f)) {
                actor->fwork[4] = 315.0f;
            }

            if ((actor->fwork[3] > 45.0f) && (actor->fwork[3] < 180.0f)) {
                actor->fwork[3] = 45.0f;
            }
            if ((actor->fwork[3] < 315.0f) && (actor->fwork[3] > 180.0f)) {
                actor->fwork[3] = 315.0f;
            }
        }
        Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);
        Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7550, &sp64);
        sp40.x = actor->fwork[3];
        sp40.y = actor->fwork[4];
        sp40.z = 0.0f;

        if ((actor->timer_0BC < 15) && ((actor->timer_0BC % 7) == 0)) {
            func_8007EE68(0x161, actor->fwork, &sp40, &actor->obj.rot, &D_i5_801B755C, 1.0f);
            if (actor->timer_0BC == 0) {
                actor->timer_0BC = 90;
            }
        }
    } else if (!(gGameFrameCount & 7) && (Rand_ZeroOne() < 0.5f)) {
        Audio_PlaySfx(0x11000027, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_8007C120(actor->fwork[0], actor->fwork[1], actor->fwork[2], 0.0f, 0.0f, 0.0f, 0.1f, 7);
        actor->timer_0C6 = 4;
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80189CC8.s")
#endif

extern Gfx D_700B9C0[];
extern Gfx D_700C4B0[];
extern Gfx D_700C980[];

void func_i5_8018A1C0(Actor* actor) {
    GDL(D_700C4B0);
    Matrix_Translate(gGfxMatrix, 0.0f, -50.0f, 178.0f, 1);
    Matrix_RotateY(gGfxMatrix, actor->fwork[4] * M_DTOR, 1);
    Matrix_RotateX(gGfxMatrix, actor->fwork[3] * M_DTOR, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    if (actor->health != 0) {
        GDL(D_700B9C0);
        RCP_SetupDL(&gMasterDisp, 0x21);
        GDL(D_700C980);
    }
}

extern f32 D_i5_801B7568[];

void func_i5_8018A2E8(Actor* actor, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {

    Actor_Initialize(actor);
    actor->obj.status = 2;
    actor->obj.id = 0xE6;
    actor->timer_0BC = (s32) (Rand_ZeroOne() * 20.0f) + 20;
    actor->timer_0C2 = 8;
    actor->vel.x = arg4;
    actor->vel.y = arg5;
    actor->vel.z = arg6;
    actor->obj.pos.x = arg1;
    actor->obj.pos.y = arg2;
    actor->obj.pos.z = arg3;
    actor->scale = (Rand_ZeroOne() * 0.2f) + 0.3f;
    Object_SetInfo(&actor->info, actor->obj.id);
    actor->info.hitbox = SEGMENTED_TO_VIRTUAL(D_i5_801B7568);
}

void func_i5_8018A3F4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 i;
    
    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].obj.status == 0) {
            func_i5_8018A2E8(&gActors[i], arg0, arg1, arg2, arg3, arg4, arg5);
            gActors[i].info.damage = 0;
            break;
        }
    }
}

void func_i5_8018A474(Actor* actor) {
    s32 i;

    for (i = 0; i < 4; i++) {
        func_i5_8018A3F4(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, (Rand_ZeroOne() - 0.5f) * 40.0f, (Rand_ZeroOne() - 0.5f) * 40.0f, Rand_ZeroOne() * -20.0f);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018A544.s")

extern Gfx D_700E3F0[];

void func_i5_8018AABC(Actor* actor) {
    if (actor->scale != 1.0f) {
        Matrix_Scale(gGfxMatrix, actor->scale, actor->scale, actor->scale, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
    }
    GDL(D_700E3F0);
}

void func_i5_8018AB44(Actor* actor) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    switch (actor->state) {
        case 0:
            actor->gravity = 1.0f;
            func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp3C, &sp34, &sp38);
            if (actor->obj.pos.y <= (sp34 + 3.0f)) {
                Audio_PlaySfx(0x19000024, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                actor->obj.pos.y = sp34 + 3.0f;
                actor->obj.rot.x = sp3C * (M_RTOD);
                actor->obj.rot.z = sp38 * (M_RTOD);
                actor->vel.y = 0.0f;
                actor->gravity = 0.0f;
                actor->state++;
            }
            break;
        case 1:
            break;
    }

    switch (actor->unk_0D0) {
        case 1:
            Audio_PlaySfx(0x29022086, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            break;
        case 2:
            actor->unk_044 = 0;
            func_80066254(actor);
            actor->info.bonus = 0;
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y + 10.0f, actor->obj.pos.z, 6.0f);
            func_8007A6F0(&actor->obj.pos, 0x2903B009);
            Object_Kill(&actor->obj, actor->sfxPos);
            break;
        case 3:
            func_8007A6F0(&actor->obj.pos, 0x2903B009);
            func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y + 50.0f, actor->obj.pos.z, (10.0f / 3.0f));
            gPlayer[0].vel.y = 20.0f;
            gPlayer[0].pos.y += 15.0f;
            gPlayer[0].unk_1DC = 1;
            gPlayer[0].timer_1E8 = 15;
            gPlayer[0].unk_1EC = 20;
            if (actor->obj.pos.x < gPlayer[0].pos.x) {
                gPlayer[0].unk_1EC = -20;
            }
            Object_Kill(&actor->obj, actor->sfxPos);
            break;
    }
    actor->unk_0D0 = 0;
}

extern Vec3f D_i5_801B75AC;
extern Vec3f D_i5_801B75B8;

void func_i5_8018ADC4(Actor* actor) {
    Vec3f sp68[2];
    s32 i;
    s32 k;
    Actor* actorPtr;
    f32 sp58;
    f32 sp54;

    actor->fwork[0] = actor->obj.rot.z;
    actor->fwork[1] = actor->obj.rot.x;
    actor->obj.rot.z = 0.0f;
    actor->obj.rot.x = 0.0f;
    func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp54, &sp58, &sp54);
    actor->obj.pos.y = sp58;
    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i5_801B75AC, &sp68[0]);
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i5_801B75B8, &sp68[1]);
    k = 0;
    actorPtr = gActors;
    for (i = 0; i < 60; i++, actorPtr++) {
        if (actorPtr->obj.status == 0) {
            Actor_Initialize(actorPtr);
            actorPtr->obj.status = 1;
            actorPtr->obj.id = 0xE6;
            actorPtr->obj.pos.x = actor->obj.pos.x + sp68[k].x;
            actorPtr->obj.pos.y = actor->obj.pos.y + sp68[k].y;
            actorPtr->obj.pos.z = actor->obj.pos.z + sp68[k].z;
            actorPtr->unk_046 = 2;
            actorPtr->iwork[0] = (uintptr_t) actor;
            actorPtr->iwork[1] = k;
            Object_SetInfo(&actorPtr->info, actorPtr->obj.id);
            actor->iwork[k] = (uintptr_t) actorPtr;
            k++;
            if ((k >= 2)) {
                break;
            }
        }
    }
    actor->health = 40;
    if (k < 2) {
        for (i = 0; i < k; i++) {
                Object_Kill(&gActors[actor->iwork[k]].obj, gActors[actor->iwork[k]].sfxPos);
        }
        Object_Kill(&actor->obj, actor->sfxPos);
    }
}

s32 func_i5_8018AFD4(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    *dList = NULL;
    return false;
}

s32 func_i5_8018AFF0(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    if ((limbIndex == 2) || (limbIndex == 3) || (limbIndex == 4)) {
        Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
        Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
        Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
        Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x21);
        GDL(*dList);
        RCP_SetupDL(&gMasterDisp, 0x1D);
        return true;
    } 
    return false;
}

extern Vec3f D_i5_801B75C4;

void func_i5_8018B144(s32 limbIndex, Vec3f* rot, void* data) {
    Actor* actor = (Actor*)data;

    switch (limbIndex) {
        case 2:
            Matrix_MultVec3f(gCalcMatrix, &D_i5_801B75C4, (Vec3f*) &actor->fwork[3]);
            break;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &D_i5_801B75C4, (Vec3f*) &actor->fwork[6]);
            break;
    }
}

extern s16 D_i5_801B75D0[];
extern PosRot D_i5_801BDA30[];

void func_i5_8018B1B4(s32 limbIndex, Vec3f* rot, void* data) {
    s32 i;
    PosRot* var_a2;

    var_a2 = SEGMENTED_TO_VIRTUAL(D_i5_801BDA30);

    for (i = 0; i < 10; i++, var_a2++) {
        if (limbIndex == D_i5_801B75D0[i]) {
            Matrix_MultVec3f(gCalcMatrix, &D_800C9F2C, &var_a2->pos);
            Matrix_GetYRPAngles(gCalcMatrix, &var_a2->rot);
            break;
        }
    }
}

extern AnimationHeader D_700D534;
extern Limb* D_700D700[];

void func_i5_8018B268(Actor* actor) {
    Vec3f sp4C;
    Vec3f sp40;
    Actor* sp3C;
    Actor* sp38;

    sp3C = actor->iwork[0];
    sp38 = actor->iwork[1];
    
    if (actor->unk_0D0 > 0) {
        actor->unk_0D0 = 0;
        if (actor->health > 0) {
            actor->health -= actor->damage;
            if (actor->health <= 0) {
                actor->health = actor->unk_044 = 0;
                func_80066254(actor);
                actor->info.bonus = 0;
            }
        }
        actor->timer_0C6 = 10;
    }

    switch (actor->state) {
        case 0:
            if ((gPlayer[0].pos.z - actor->obj.pos.z) < actor->fwork[0]) {
                actor->state++;
            }
            break;
        case 1:
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            if ((actor->unk_0B6 >= 0x1A) && (actor->unk_0B6 < 0x36) && (sp3C != NULL)) {
                if (actor->unk_0B6 == 0x1A) {
                    sp3C->unk_046 = 2;
                    sp3C->vel.x = 0.0f;
                    sp3C->vel.y = 0.0f;
                    sp3C->vel.z = 0.0f;
                } else if (actor->unk_0B6 == 0x35) {
                    sp4C.x = 0.0f;
                    sp4C.y = actor->fwork[1];
                    sp4C.z = 20.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp4C, &sp40);
                    sp3C->vel.x = sp40.x;
                    sp3C->vel.y = sp40.y;
                    sp3C->vel.z = sp40.z;
                    sp3C->unk_046 = 0;
                    sp3C->iwork[0] = (uintptr_t)NULL;
                    actor->iwork[0] = (uintptr_t)NULL;
                }
                sp4C.x = actor->fwork[3];
                sp4C.y = actor->fwork[4] + 50.0f;
                sp4C.z = actor->fwork[5];
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp40);
                sp3C->obj.pos.x = actor->obj.pos.x + sp40.x;
                sp3C->obj.pos.y = actor->obj.pos.y + sp40.y;
                sp3C->obj.pos.z = actor->obj.pos.z + sp40.z;
            }
            if ((actor->unk_0B6 >= 0x1A) && (actor->unk_0B6 < 0x3A) && (sp38 != NULL)) {
                if (actor->unk_0B6 == 0x1A) {
                    sp38->unk_046 = 2;
                    sp38->vel.x = 0.0f;
                    sp38->vel.y = 0.0f;
                    sp38->vel.z = 0.0f;
                } else if (actor->unk_0B6 == 0x39) {
                    Audio_PlaySfx(0x29000028, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    sp4C.x = 0.0f;
                    sp4C.y = actor->fwork[1];
                    sp4C.z = 20.0f;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp4C, &sp40);
                    sp38->vel.x = sp40.x;
                    sp38->vel.y = sp40.y;
                    sp38->vel.z = sp40.z;
                    sp38->unk_046 = 0;
                    sp38->iwork[0] = (uintptr_t)NULL;
                    actor->iwork[1] = (uintptr_t)NULL;
                }
                sp4C.x = actor->fwork[6];
                sp4C.y = actor->fwork[7] + 50.0f;
                sp4C.z = actor->fwork[8];
                Matrix_MultVec3f(gCalcMatrix, &sp4C, &sp40);
                sp38->obj.pos.x = actor->obj.pos.x + sp40.x;
                sp38->obj.pos.y = actor->obj.pos.y + sp40.y;
                sp38->obj.pos.z = actor->obj.pos.z + sp40.z;
            }

            if (++actor->unk_0B6 >= Animation_GetFrameCount(&D_700D534)) {
                actor->state++;
            }
            break;
        case 2:
            break;
    }
    if (actor->health == 0) {
        actor->obj.status = 3;
        Animation_GetFrameData(&D_700D534, actor->unk_0B6, actor->vwork);
        Animation_DrawSkeleton(0, D_700D700, actor->vwork, func_i5_8018AFD4, func_i5_8018B1B4, actor, &gIdentityMatrix);
        func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
        actor->timer_0CA[0] = 0;
        actor->info.unk_1C = 0.0f;
    }
}

void func_i5_8018B6AC(Actor* actor) {
    Animation_GetFrameData(&D_700D534, actor->unk_0B6,  actor->vwork);
    Animation_DrawSkeleton(0, D_700D700,  actor->vwork, func_i5_8018AFF0, func_i5_8018B144, actor, &gIdentityMatrix);
}

extern PosRot D_i5_801BDA30[];

void func_i5_8018B720(Actor* actor) {
    PosRot* var_s1;
    Actor* actorPtr;
    s32 i;
    Vec3f sp70;

    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
    var_s1 = SEGMENTED_TO_VIRTUAL(D_i5_801BDA30);
    for (i = 0; i < 10; i++, var_s1++) {
        actorPtr = func_800A3608(0xBD);
        if (actorPtr != NULL) {
            actorPtr->obj.status = 2;
            actorPtr->state = 46;
            actorPtr->unk_048 = i;
            Matrix_MultVec3f(gCalcMatrix, &var_s1->pos, &sp70);
            actorPtr->obj.pos.x = actor->obj.pos.x + sp70.x;
            actorPtr->obj.pos.y = actor->obj.pos.y + sp70.y;
            actorPtr->obj.pos.z = actor->obj.pos.z + sp70.z;
            actorPtr->obj.rot.x = actor->obj.rot.x + var_s1->rot.x;
            actorPtr->obj.rot.y = actor->obj.rot.y + var_s1->rot.y;
            actorPtr->obj.rot.z = actor->obj.rot.z + var_s1->rot.z;
            actorPtr->gravity = 1.0f;
            actorPtr->vel.x = sp70.x * 0.05f;
            actorPtr->vel.y = 20.0f;
            actorPtr->vel.z = sp70.z * 0.05f;
            actorPtr->fwork[0] = (Rand_ZeroOne() * 4.0f) - 6.0f;
            actorPtr->fwork[1] = (Rand_ZeroOne() * 4.0f) - 6.0f;
            actorPtr->fwork[2] = (Rand_ZeroOne() * 4.0f) - 6.0f;
        }
    }
    actorPtr = actor->iwork[0];
    if (actorPtr != NULL) {
        actorPtr->iwork[0] = (uintptr_t)NULL;
        actor->iwork[0] = (uintptr_t)NULL;
        actorPtr->unk_046 = 0;
    }
    actorPtr = actor->iwork[1];
    if (actorPtr != NULL) {
        actorPtr->unk_046 = 0;
        actorPtr->iwork[0] = (uintptr_t)NULL;
        actor->iwork[1] = (uintptr_t)NULL;
    }
    Object_Kill(&actor->obj, actor->sfxPos);
}

void func_i5_8018B96C(Actor* actor) {
    f32 sp24;

    func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp24, &actor->obj.pos.y, &sp24);
    actor->obj.rot.x = actor->obj.rot.y = actor->obj.rot.z = 0.0f;
    actor->obj.pos.y -= 20.0f;
}

void func_i5_8018B9D0(Actor* actor) {
    s32 var_v1;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 temp_fa1;
    f32 var_fa0;

    // FAKE
    var_v1 = actor->state;
    actor->unk_0C9 = 1;
    switch (var_v1) {
        case 0:
            sp44 = gPlayer[0].pos.x - actor->obj.pos.x;
            sp40 = gPlayer[0].pos.y - actor->obj.pos.y;
            sp3C = gPlayer[0].pos.z - actor->obj.pos.z;
            if (actor->timer_0BE == 7) {
                actor->iwork[0] = 2;
                Audio_PlaySfx(0x19000032, actor->sfxPos, 0, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            }
            if (actor->timer_0BE == 0) {
                temp_fa1 = SQ(sp44) + SQ(sp40) + SQ(sp3C);
                if (temp_fa1 < 27639.062f) {
                    actor->timer_0BE = 8;
                } else {
                    if (temp_fa1 < 360000.0f) {
                        actor->timer_0BE = 0;
                        if (actor->timer_0BC == 0) {
                            Audio_PlaySfx(0x19000029, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                            actor->iwork[0] = 1 - actor->iwork[0];
                            actor->timer_0BC = 5;
                        }
                    } else {
                        actor->iwork[0] = 0;
                    }
                }
            }
            if (actor->timer_0BE == 1) {
                func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
                Object_Kill(&actor->obj, actor->sfxPos);
                Player_ApplyDamage(gPlayer, 0, 0x3C);
                gPlayer[0].vel.y = 20.0f;
                gPlayer[0].pos.y += 15.0f;
                gPlayer[0].unk_1DC = 1;
                gPlayer[0].timer_1E8 = 15;
                gPlayer[0].unk_1EC = 20;
                if (actor->obj.pos.x < gPlayer[0].pos.x) {
                    gPlayer[0].unk_1EC = -20;
                }
            }
            break;
        case 1:
            func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp4C, &sp50, &sp48);
            actor->fwork[0] = sp50;
            actor->fwork[1] = sp4C;
            actor->fwork[2] = sp48;
            if (actor->vel.y <= 0.0f) {
                actor->unk_044 = 0;
                func_80066254(actor);
                func_8007A6F0(&actor->obj.pos, 0x2903B009);
                func_8007D2C8(actor->obj.pos.x, actor->obj.pos.y, actor->obj.pos.z, 10.0f);
                Object_Kill(&actor->obj, actor->sfxPos);
            }
            break;
    }

    if (fabsf(actor->vel.x) > 130.0f) {
        var_v1 = (actor->vel.x > 0.0f) ? 1 : (actor->vel.x == 0.0f) ? 0 : -1;
        var_fa0 = var_v1 * 130.0f;
    } else {
        var_fa0 = actor->vel.x;
    }

    actor->obj.rot.z = (-var_fa0 / 130.0f) * 90.0f;
    if (fabsf(actor->vel.z) > 130.0f) {
        var_v1 = (actor->vel.z > 0.0f) ? 1 : (actor->vel.z == 0.0f) ? 0 : -1;
        var_fa0 = var_v1 * 130.0f;
    } else {
        var_fa0 = actor->vel.z;
    }
    actor->obj.rot.x = (var_fa0 / 130.0f) * 90.0f;
    if (actor->unk_0D0 == 1) {
        Audio_PlaySfx(0x19020008, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        sp44 = actor->obj.pos.x - actor->unk_0D8.x;
        sp40 = fabsf(sp44);
        actor->unk_0D0 = 0;
        actor->state = 1;
        actor->timer_0BC = 0;
        actor->timer_0BE = 0;
        actor->iwork[0] = 0;
        actor->vel.x += sp44 * 0.5f * 0.8f;
        actor->vel.z -= (80.0f - sp40) * 0.8f;
        actor->vel.y += 34.0f;
        actor->gravity = 2.0f;
    }
}

extern Gfx D_7009D60[];
extern Gfx D_700A990[];
extern s32 D_i5_801B75E4[3][3];

void func_i5_8018BE84(Actor* actor) {
    s32 index;

    RCP_SetupDL(&gMasterDisp, 0x1E);
    GPC(255, 255, 255, 255);
    Matrix_Scale(gGfxMatrix, 1.5f, 1.5f, 1.5f, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    GDL(D_7009D60);
    RCP_SetupDL(&gMasterDisp, 0x22);
    index = actor->iwork[0];
    GPC(D_i5_801B75E4[0][index], D_i5_801B75E4[1][index], D_i5_801B75E4[2][index], 255);
    GDL(D_700A990);
}

typedef struct {
    PosRot unk_00;
    u16 unk_18;
} UnkStruct_i5_801BD738;
extern s32 D_i5_801B750C[];
extern UnkStruct_i5_801BD738 D_i5_801BD738[][9];
extern f32 D_i5_801BDB20[][151];

void func_i5_8018BFB0(Actor* actor) {
    UnkStruct_i5_801BD738* temp_a1;
    s32 temp_a2;
    s32 i;


    for (i = 0; i < 3; i++) {
        if (D_i5_801B750C[i] == 0) {
            D_i5_801B750C[i] = 1;
            actor->iwork[0] = i;
            break;
        }
    }
    if (i == 3) {
        Object_Kill(&actor->obj, actor->sfxPos);
        return;
    }
    
    temp_a2 = actor->iwork[0];
    actor->info.hitbox = D_i5_801BDB20[temp_a2];
    actor->health = 80;
    actor->iwork[8] = 1;
    temp_a1 = D_i5_801BD738[temp_a2];

    for (i = 0; i < 9; i++) {
        temp_a1[i].unk_00.pos.x = temp_a1[i].unk_00.pos.y = temp_a1[i].unk_00.pos.z = temp_a1[i].unk_00.rot.x = temp_a1[i].unk_00.rot.y = temp_a1[i].unk_00.rot.z = 0.0f;
        temp_a1[i].unk_18 = 0;
    }
}

s32 func_i5_8018C118(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    *dList = NULL;
    return false;
}

typedef struct {
    u16 unk_00;
    char pad02[0x1A];
} UnkStruct_i5_801BD750;

extern s16 D_i5_801B7630[];
extern UnkStruct_i5_801BD750 D_i5_801BD750[][9];

s32 func_i5_8018C134(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    Actor* actor = (Actor*)data;
    s32 sp58;
    s32 i;
    s32 sp50;

    sp50 = actor->iwork[0];
    sp58 = false;
    for (i = 0; i < 9; i++) {
        if (limbIndex == D_i5_801B7630[i * 2]) {
            if (!(D_i5_801BD750[sp50][i].unk_00 & 1)) {
                Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
                sp58 = true;
                Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
                Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
                Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
                Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
                if ((limbIndex == 0xD) && (actor->iwork[5] & 2) && (actor->iwork[6] == 0)) {
                    RCP_SetupDL(&gMasterDisp, 0x1E);
                    GPC(255, 0, 0, 255);
                    GDL(*dList);
                    RCP_SetupDL(&gMasterDisp, 0x1D);
                } else {
                    GDL(*dList);
                }
            } else {
                *dList = NULL;
            }
        }
    }
    
    return sp58;
}

extern Gfx D_7002490[];
extern UnkStruct_i5_801BD750 D_i5_801BD830[][9];

void func_i5_8018C370(s32 limbIndex, Vec3f* rot, void* data) {
    Actor* actor = (Actor*)data;

    if ((limbIndex == 13) && !(D_i5_801BD830[actor->iwork[0]][0].unk_00 & 1)) {
        GDL(D_7002490);
    }
}

extern UnkStruct_i5_801BD738 D_i5_801BD738[][9];

extern f32 D_i5_801B7360[][4];
extern u8 D_i5_801B74F0[][3];
extern s16 D_i5_801B7630[];
extern Vec3f D_i5_801B7654;
extern Vec3f D_i5_801B7660;
extern UnkStruct_i5_801BD738 D_i5_801BD738[][9];
extern UnkStruct_i5_801BD738 D_i5_801BD81C[][9];

void func_i5_8018C3D8(s32 limbIndex, Vec3f* rot, void* data) {
    s32 i;
    s32 j;
    Vec3f sp54;
    Vec3f sp48;
    UnkStruct_i5_801BD738* var_s0;
    s32 var_t0;
    f32* var_v0_2;
    f32* var_s0_2;
    s32 temp;
    Actor* actor = (Actor*)data;

    var_s0 = D_i5_801BD738[actor->iwork[0]];
    var_s0[8].unk_18 |= 2;

    for (i = 0; i < 9U; i++, var_s0++) {
        if ((limbIndex == D_i5_801B7630[i * 2]) && (var_s0->unk_18 & 2)) {
            Matrix_MultVec3f(gCalcMatrix, &D_800C9F2C, &var_s0->unk_00.pos);
            Matrix_GetYRPAngles(gCalcMatrix, &var_s0->unk_00.rot);
            var_s0->unk_18 &= ~2;
            break;
        }
    }

    actor->fwork[27] = D_i5_801BD81C[actor->iwork[0]][0].unk_00.pos.x;
    switch (actor->iwork[2]) {
        case 0:
            switch (limbIndex) {
                case 1:
                    Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7660, (Vec3f*) &actor->fwork[12]);
                    break;
                case 3:
                    Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7660, (Vec3f*) &actor->fwork[9]);
                    break;
                case 5:
                    Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7654, (Vec3f*) &actor->fwork[3]);
                    break;
                case 7:
                    Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7654, (Vec3f*) &actor->fwork[6]);
                    break;
            }
            break;
        case 1:
            switch (limbIndex) {
                case 1:
                    Matrix_MultVec3f(gCalcMatrix, &D_800C9F2C, (Vec3f*) &actor->fwork[12]);
                    break;
                case 3:
                    Matrix_MultVec3f(gCalcMatrix, &D_800C9F2C, (Vec3f*) &actor->fwork[9]);
                    break;
                case 5:
                    Matrix_MultVec3f(gCalcMatrix, &D_800C9F2C, (Vec3f*) &actor->fwork[3]);
                    break;
                case 7:
                    Matrix_MultVec3f(gCalcMatrix, &D_800C9F2C, (Vec3f*) &actor->fwork[6]);
                    break;
            }
            break;
    }
    var_v0_2 = actor->info.hitbox;
    if (actor->iwork[8] != 0) {
        var_v0_2[0] = 25.0f;
        var_v0_2++;

        for (i = 0; i < 9U; i++) {
            var_t0 = D_i5_801B74F0[i][2];
            if (limbIndex == D_i5_801B74F0[i][0]) {
                temp = D_i5_801B74F0[i][1];
                for (j = 0; j < var_t0; j++) {
                    var_s0_2 = D_i5_801B7360[temp + j];
                    sp54.x = var_s0_2[0];
                    sp54.y = var_s0_2[1];
                    sp54.z = var_s0_2[2];
                    Matrix_MultVec3f(gCalcMatrix, &sp54, &sp48);
                    var_v0_2[0] = sp48.z;
                    var_v0_2[1] = var_s0_2[3];
                    var_v0_2[2] = sp48.y;
                    var_v0_2[3] = var_s0_2[3];
                    var_v0_2[4] = sp48.x;
                    var_v0_2[5] = var_s0_2[3];
                    var_v0_2 += 6;
                }
                break;
            }
            var_v0_2 += var_t0 * 6;

        }
    } else {
        var_v0_2[0] = 0.0f;
    }
}



extern Limb* D_7006990[];

void func_i5_8018C72C(Actor* actor) {
    s32 i;
    f32 sp30;

    actor->state = 8;
    Audio_PlaySfx(0x29030098, actor->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);

    for (i = 0; i < 9; i++) {
        D_i5_801BD738[actor->iwork[0]][i].unk_18 |= 2;
    }
    
    sp30 = actor->vwork[0].y;
    actor->vwork[0].y += actor->fwork[26];
    Animation_DrawSkeleton(0, D_7006990, actor->vwork, func_i5_8018C118, func_i5_8018C3D8, actor, &gIdentityMatrix);
    actor->vwork[0].y = sp30;
    actor->iwork[7] = 0;
    actor->iwork[8] = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018C8A8.s")

extern Limb* D_7006990[];

void func_i5_8018E2D8(Actor* actor) {
    f32 sp34;

    if (actor->iwork[6] & 1) {
        RCP_SetupDL(&gMasterDisp, 0x1F);
        GPC(127, 0, 0, 255);
        GEC(255, 255, 255, 255);
    }
    sp34 = actor->vwork[0].y;
    actor->vwork[0].y += actor->fwork[26];
    Animation_DrawSkeleton(0, D_7006990, actor->vwork, func_i5_8018C134, func_i5_8018C370, actor, &gIdentityMatrix);
    actor->vwork[0].y = sp34;
}


extern s32 D_i5_801B750C[];

void func_i5_8018E3B0(Actor* actor) {
    D_i5_801B750C[actor->iwork[0]] = 0;
}

extern f32 D_i5_801B7518[];
extern Vec3f D_i5_801B7678;

void func_i5_8018E3CC(Actor* actor) {
    Actor* var_s0;
    f32 sp40;
    Vec3f sp34;
    s32 i;

    func_i5_801B6E20(actor->obj.pos.x, actor->obj.pos.z + D_80177D20, &sp40, &actor->obj.pos.y, &sp40);
    actor->obj.pos.y -= 20.0f;
    var_s0 = gActors;
    for (i = 0; i < 60; i++, var_s0++) {
        if (var_s0->obj.status == 0) {
            Actor_Initialize(var_s0);
            var_s0->obj.status = 1;
            var_s0->obj.id = 0xE4;
            Object_SetInfo(&var_s0->info, var_s0->obj.id);
            var_s0->iwork[4] = (uintptr_t) actor;
            actor->iwork[0] = (uintptr_t) var_s0;
            var_s0->fwork[6] = D_i5_801B7518[0];
            var_s0->obj.rot.x = (D_i5_801B7518[0] + D_i5_801B7518[1]) * 0.5f;
            Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
            Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7678, &sp34);
            var_s0->obj.pos.x = actor->fwork[0] = actor->obj.pos.x + sp34.x;
            var_s0->obj.pos.y = actor->fwork[1] = actor->obj.pos.y + sp34.y;
            var_s0->obj.pos.z = actor->fwork[2] = actor->obj.pos.z + sp34.z;
            var_s0->obj.rot.y = actor->obj.rot.y;
            break;
        }
    }
    if (i == 60) {
        Object_Kill(&actor->obj, actor->sfxPos);
    }
}

void func_i5_8018E54C(Actor* actor) {
    
    actor->iwork[1]++;
    if ((actor->iwork[0] == (uintptr_t)NULL) && !(actor->iwork[1] & 3)) {
        func_8007C120(actor->fwork[0], actor->fwork[1], actor->fwork[2], 0.0f, 0.0f, 0.0f, 0.0625f, 10);
    }
}


extern Gfx D_70098E0[];

void func_i5_8018E5B4(Actor* actor) {
    GDL(D_70098E0);
}

void func_i5_8018E5E8(Actor* actor) {
    actor->health = 100;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E5F8.s")

extern Gfx D_7008930[];
extern Gfx D_7009510[];

void func_i5_8018EF14(Actor* actor) {

    GDL(D_7008930);
    if (!(actor->timer_0C6 & 1)) {
        RCP_SetupDL(&gMasterDisp, 0x22);
        GPC(220, 220, 220, 255);
    } else {
        RCP_SetupDL(&gMasterDisp, 0x16);
        GPC(0, 0, 0, 255);
    }
    GDL(D_7009510);
}

void func_i5_8018EFF0(Object_4C* obj4C) {
    f32 sp24;
    f32 sp20;

    func_i5_801B6E20(obj4C->obj.pos.x, obj4C->obj.pos.z + D_80177D20, &sp20, &sp24, &sp20);
    obj4C->obj.pos.y = sp24;
}

void func_i5_8018F038(Object_4C* obj4C) {
    obj4C->obj.rot.y = Math_Atan2F(gPlayer[0].camEye.x - obj4C->obj.pos.x, gPlayer[0].camEye.z - (obj4C->obj.pos.z + D_80177D20)) * M_RTOD;
    if (obj4C->unk_46 != 0) {
        func_8007D074(obj4C->obj.pos.x, obj4C->obj.pos.y + 96.0f, obj4C->obj.pos.z, 4.0f);
        obj4C->obj.status = 0;
        func_8007A6F0(&obj4C->obj.pos, 0x1903400F);
    }
}

void func_i5_8018F0D8(Object_80* obj80) {

    if (obj80->obj.rot.x != 0.0f) {
        if (obj80->obj.rot.x >= 10000.0f) {
            obj80->unk_44 = 1;
            obj80->obj.rot.x -= 10000.0f;
        }
        obj80->vel.y = obj80->obj.rot.x;
        obj80->obj.rot.x = 0.0f;
    }
    obj80->vel.z = obj80->obj.pos.x;
}

extern Vec3f D_i5_801B7690;

void func_i5_8018F134(Object_80* obj80) {
    Vec3f sp7C;
    Vec3f sp70;
    f32 i;
    f32* j = &D_i5_801B7690.x;

    switch (obj80->unk_44) {
        case 0:
            Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);
            Matrix_RotateX(gCalcMatrix, obj80->obj.rot.x * M_DTOR, 1);
            if ((obj80->obj.rot.y <= 30.0f) || (obj80->obj.rot.y >= 330.0f)) {
                for (*j = -80.0f; *j <= 80.0f; *j += 40.0f) {
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i5_801B7690, &sp70);
                    func_8007A900(obj80->obj.pos.x + sp70.x, obj80->obj.pos.y + sp70.y, obj80->obj.pos.z + sp70.z, 10.0f, 0xFF, 15, 0);
                }
            } else {
                sp7C.z = 0.0f;
                sp7C.x = -80.0f;
                if (obj80->obj.rot.y > 90.0f) {
                    sp7C.x = 80.0f;
                }

                for (i = 0.0f; i <= 450.0f; i += 50.0f) {
                    Matrix_RotateY(gCalcMatrix, obj80->obj.rot.y * M_DTOR, 0);
                    Matrix_RotateX(gCalcMatrix, obj80->obj.rot.x * M_DTOR, 1);
                    sp7C.y = i;
                    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp7C, &sp70);
                    func_8007A900(obj80->obj.pos.x + sp70.x, obj80->obj.pos.y + sp70.y, obj80->obj.pos.z + sp70.z, 10.0f, 0xFF, 15, 0);
                }
            }
            break;
        case 1:
            Matrix_RotateZ(gCalcMatrix, obj80->obj.rot.z * M_DTOR, 0);
            sp7C.z = 0.0f;
            sp7C.x = 0.0f;
            for (i = 0.0f; i <= 450.0f; i += 50.0f) {
                sp7C.y = i;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp7C, &sp70);
                func_8007A900(obj80->obj.pos.x + sp70.x, obj80->obj.pos.y + sp70.y, obj80->obj.pos.z + sp70.z, 10.0f, 0xFF, 15, 0);
            }
            break;
    }
}

extern f32 D_6006C0C[];
extern f32 D_6006C28[];

void func_i5_8018F4D8(Object_80* obj80) {
    f32 temp;

    switch (obj80->state) {
        case 0:
            temp = gPlayer[0].pos.z - obj80->obj.pos.z;
            if ((obj80->vel.y != 0.0f) && (temp < obj80->vel.y)) {
                if ((obj80->unk_44 == 1) && (obj80->obj.pos.x < gPlayer[0].pos.x)) {
                    obj80->unk_44 = 2;
                }
                obj80->state++;
            }
            break;
        case 1:
            obj80->state++;
            /* fallthrough */
        case 2:
            obj80->vel.x += 0.05f;
            switch (obj80->unk_44) {
                case 0:
                    obj80->obj.rot.x += obj80->vel.x;
                    if (obj80->obj.rot.x >= 90.0f) {
                        obj80->obj.rot.x = 90.0f;
                        obj80->state++;
                        D_Timer_80177BD0[0] = 7;
                        D_80178480 = 12;
                        func_i5_8018F134(obj80);
                        Audio_PlaySfx(0x19130003, obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    }
                    break;
                case 1:
                    obj80->obj.rot.z += obj80->vel.x;
                    if (obj80->obj.rot.z >= 90.0f) {
                        obj80->obj.rot.z = 90.0f;
                        D_Timer_80177BD0[0] = 7;
                        D_80178480 = 12;
                        func_i5_8018F134(obj80);
                        Audio_PlaySfx(0x19130003, obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        obj80->state++;
                    }
                    break;
                case 2:
                    obj80->obj.rot.z -= obj80->vel.x;
                    if (obj80->obj.rot.z <= -90.0f) {
                        obj80->obj.rot.z = -90.0f;
                        D_Timer_80177BD0[0] = 7;
                        D_80178480 = 12;
                        func_i5_8018F134(obj80);
                        Audio_PlaySfx(0x19130003, obj80->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        obj80->state++;
                    }
                    break;
            }
            break;
        case 3:
            break;
    }
    if (obj80->unk_44 != 0) {
        if (obj80->obj.rot.z == 0.0f) {
            obj80->obj.pos.x = obj80->vel.z;
            obj80->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6006BF0);
        } else if (obj80->obj.rot.z > 0.0f) {
            obj80->obj.pos.x = obj80->vel.z - 75.0f;
            obj80->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6006C28);
        } else {
            obj80->obj.pos.x = obj80->vel.z + 75.0f;
            obj80->info.hitbox = SEGMENTED_TO_VIRTUAL(D_6006C0C);
        }
    }
}

extern Gfx D_7000A80[];
extern Gfx D_7002270[];

void func_i5_8018F8B8(Object_80* obj80) {

    switch (obj80->unk_44) {
    case 0:
        if (obj80->unk_44 == 0) {
            GDL(D_7002270);
        } else{
            GDL(D_7000A80);
        }
        break;
    case 1:
    case 2:
        if (obj80->obj.rot.z != 0.0f) {
            if (obj80->obj.rot.z > 0.0f) {
                Matrix_Translate(gGfxMatrix, 75.0f, 0.0f, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
            } else {
                Matrix_Translate(gGfxMatrix, -75.0f, 0.0f, 0.0f, 1);
                Matrix_SetGfxMtx(&gMasterDisp);
            }
        }
        if (obj80->unk_44 == 0) {
            GDL(D_7002270);
        } else {
            GDL(D_7000A80);
        }
        break;
    }
}

typedef struct {
    PosRot unk_00;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    s16 unk_24;
    u16 unk_26;
} UnkStruct_i5_801BBF00; // size = 0x28

extern s32 D_8000FC0[];
extern s32* D_i5_801BBEF0;
extern f32* D_i5_801BBEF4;
extern s32* D_i5_801BBEF8;
extern UnkStruct_i5_801BBF00 D_i5_801BBF00[0x43];
extern Vec3f D_i5_801BC978[];
extern Vec3f D_i5_801BCDC8[];
extern Vec3f D_i5_801BD218[];
extern s16 D_i5_801BD668[];
extern f32 D_i5_801BD6B0[];

void func_i5_8018FA48(Boss* arg0) {
    s32 pad[2];
    f32* sp1C;
    s32 i;
    s32* var_a1_2;
    UnkStruct_i5_801BBF00* var_v1;

    if (arg0->swork[0] < 4) {
        arg0->swork[0]++;
        gOverlayStage = arg0->swork[0];
        arg0->timer_050 = 1;
    }
    
    if (arg0->timer_050 != 0) {
        arg0->obj.status = 1;
        return;
    }
    
    gBossActive = 1;
    arg0->fwork[2] = 1.0f;
    arg0->fwork[4] = 730.0f;
    for (i = 0; i < 0x22; i++) {
        D_i5_801BD668[i] = 0;
        D_i5_801BD6B0[i] = 0.0f;
    }
    arg0->fwork[0x31] = arg0->obj.rot.y;
    arg0->obj.rot.y = 0.0f;
    var_v1 = D_i5_801BBF00;
    for (i = 0; i < ARRAY_COUNTU(D_i5_801BBF00); i++, var_v1++) {
        var_v1->unk_26 = 0;
        var_v1->unk_00.pos.x = var_v1->unk_00.pos.y = var_v1->unk_00.pos.z = var_v1->unk_00.rot.x = var_v1->unk_00.rot.y = var_v1->unk_00.rot.z = var_v1->unk_18 = var_v1->unk_1C = var_v1->unk_20 = 0.0f;
    }

    for (i = 0; i < 0x5C; i++) {
        D_i5_801BD218[i].x = D_i5_801BD218[i].y = D_i5_801BD218[i].z = 0.0f;
        D_i5_801BCDC8[i].x = D_i5_801BCDC8[i].y = D_i5_801BCDC8[i].z = 0.0f;
        D_i5_801BC978[i].x = D_i5_801BC978[i].y = D_i5_801BC978[i].z = 0.0f;
    }
    arg0->swork[9] = 50;
    arg0->swork[10] = 50;
    arg0->swork[11] = 50;
    arg0->swork[12] = 50;
    arg0->swork[21] = 100;
    sp1C = D_i5_801BBEF4 = Memory_Allocate(0x130);
    var_a1_2 = D_i5_801BBEF0 = Memory_Allocate(0xC8);
    for (i = 0; i < 50; i++, var_a1_2++) {
        *var_a1_2 = 0;
    }

    for (i = 0; i < 0x4C; i++, sp1C++) {
        *sp1C = 0.0f;
    }
    
    D_i5_801BBEF8 = SEGMENTED_TO_VIRTUAL(D_8000FC0);
}

s32 func_i5_8018FC70(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    f32 sp24;

    if (D_i5_801BBEF0[30] != 0) {
        sp24 = (D_i5_801BBEF0[30] / 15.0f) *  D_i5_801BBEF0[32];
        rot->z += __sinf((D_i5_801BBEF0[30] / (f32) D_i5_801BBEF0[31]) * 360.0f * M_DTOR) * sp24;
    }
    switch (limbIndex) {
        case 0:
            Matrix_Translate(gCalcMatrix, D_i5_801BBEF4[36], D_i5_801BBEF4[37], D_i5_801BBEF4[38], 1);
            Matrix_RotateY(gCalcMatrix, D_i5_801BBEF4[64] * M_DTOR, 1);
            break;
        case 1:
        case 2:
        case 3:
            rot->z += D_i5_801BBEF4[66];
            break;
    }
    Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
    Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
    Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
    Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    switch (limbIndex) {
        case 1:
        case 2:
        case 3:
        case 7:
            RCP_SetupDL(&gMasterDisp, 0x1E);
            if (D_i5_801BBEF0[30] & 1) {
                GPC(255, 0, 0, 255);
            } else {
                GPC(255, 255, 255, 255);
            }
            if (*dList != NULL) {
                GDL(*dList);
            }
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            RCP_SetupDL(&gMasterDisp, 0x3D);
            if (D_i5_801BBEF0[30] & 1) {
                GPC(255, 0, 0, 255);
            } else {
                GPC(255, 255, 255, 255);
            }
            GCGM_BACK();
            if (*dList != NULL) {
                GDL(*dList);
            }
            RCP_SetupDL(&gMasterDisp, 0x1D);
            break;
    }
    return true;
}

extern f32 D_i5_801B8BBC[][4];
extern s32 D_i5_801B8C24[][4];
extern s32 D_i5_801B8CF4[];
extern Vec3f D_i5_801B8D3C;
extern s32* D_i5_801BBEF0;
extern f32* D_i5_801BBEF4;

void func_i5_8019002C(s32 limbIndex, Vec3f* rot, void* data) {
    Boss* boss = (Boss*)data;
    s32 i;
    s32 j;
    s32* var_s6;
    f32* var_s0;
    Vec3f sp80;
    Vec3f sp74;
    s32 temp_s3;
    Vec3f sp64;
    s32 temp;

    for (i = 0; i < 4; i++) {
        var_s6 = D_i5_801B8C24[i];
        temp_s3 = var_s6[2];
        if (limbIndex == var_s6[0]) {
            var_s0 = &D_i5_801B83A8[D_i5_801B8CF4[D_i5_801BBEF0[25]] * 6 + var_s6[3] * 6 + 1];
            temp = var_s6[1];
            
            for (j = 0; j < temp_s3; j++) {
                sp80.x = D_i5_801B8BBC[temp + j][0];
                sp80.y = D_i5_801B8BBC[temp + j][1];
                sp80.z = D_i5_801B8BBC[temp + j][2];
                Matrix_MultVec3f(gCalcMatrix, &sp80, &sp74);
                var_s0[0] = sp74.z;
                var_s0[1] = D_i5_801B8BBC[temp + j][3];
                var_s0[2] = sp74.y;
                var_s0[3] = D_i5_801B8BBC[temp + j][3];
                var_s0[4] = sp74.x;
                var_s0[5] = D_i5_801B8BBC[temp + j][3];
                var_s0 += 6;
            }
        }
    }
    if (limbIndex == 7) {
        Matrix_Push(&gGfxMatrix);
        Matrix_Translate(gGfxMatrix, 180.0f, 36.0f, 0.0f, 1);
        Matrix_RotateX(gGfxMatrix, -(M_DTOR * 90.0f), 1);
        Matrix_RotateZ(gGfxMatrix, -(M_DTOR * 90.0f), 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        GDL(D_40018A0);
        Matrix_Translate(gGfxMatrix, 0.0f, 0.0f, -47.0f, 1);
        Matrix_GetYRPAngles(gGfxMatrix, &sp64);
        Matrix_RotateZ(gGfxMatrix, -sp64.z * M_DTOR, 1);
        Matrix_RotateX(gGfxMatrix, -sp64.x * M_DTOR, 1);
        Matrix_RotateY(gGfxMatrix, -sp64.y * M_DTOR, 1);
        Matrix_Scale(gGfxMatrix, D_i5_801BBEF4[74], D_i5_801BBEF4[74], 1.0f, 1);
        Matrix_SetGfxMtx(&gMasterDisp);
        RCP_SetupDL(&gMasterDisp, 0x48);
        GPC(255, 255, 255, 255);
        GEC(255, 0, 0, 255);
        GDL(D_1024AC0);
        RCP_SetupDL(&gMasterDisp, 0x1E);
        Matrix_Pop(&gGfxMatrix);
        Matrix_MultVec3f(gCalcMatrix, &D_i5_801B8D3C, (Vec3f*) &boss->fwork[29]);
    }
}

extern s32* D_i5_801BBEF0;
extern f32* D_i5_801BBEF4;

s32 func_i5_801903A0(s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3f* rot, void* data) {
    f32 sp24;
    s32 sp20;

    if (limbIndex == 0) {
        if (D_i5_801BBEF0[25] == 1) {
            Matrix_Translate(gCalcMatrix, D_i5_801BBEF4[39], D_i5_801BBEF4[40], D_i5_801BBEF4[41], 1);
            Matrix_RotateY(gCalcMatrix, D_i5_801BBEF4[54] * M_DTOR, 1);
        } else {
            Matrix_Translate(gCalcMatrix, D_i5_801BBEF4[42], D_i5_801BBEF4[43], D_i5_801BBEF4[44], 1);
            Matrix_RotateY(gCalcMatrix, D_i5_801BBEF4[56] * M_DTOR, 1);
        }
    }
    if (D_i5_801BBEF0[25] == 1) {
        sp20 = D_i5_801BBEF0[33] & 1;
        if (D_i5_801BBEF0[33] != 0) {
            sp24 = (D_i5_801BBEF0[33] / 15.0f) * D_i5_801BBEF0[37];
            rot->z += __sinf((D_i5_801BBEF0[33] / (f32) D_i5_801BBEF0[35]) * 360.0f * M_DTOR) * sp24;
        }
    } else {
        sp20 = D_i5_801BBEF0[34] & 1;
        if (D_i5_801BBEF0[34] != 0) {
            sp24 = (D_i5_801BBEF0[34] / 15.0f) * D_i5_801BBEF0[38];
            rot->z += __sinf((D_i5_801BBEF0[34] / (f32) D_i5_801BBEF0[36]) * 360.0f * M_DTOR) * sp24;
        }
    }
    Matrix_Translate(gCalcMatrix, pos->x, pos->y, pos->z, 1);
    Matrix_RotateZ(gCalcMatrix, rot->z * M_DTOR, 1);
    Matrix_RotateY(gCalcMatrix, rot->y * M_DTOR, 1);
    Matrix_RotateX(gCalcMatrix, rot->x * M_DTOR, 1);
    Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
    Matrix_SetGfxMtx(&gMasterDisp);
    switch (limbIndex) {
        case 1:
        case 2:
            RCP_SetupDL(&gMasterDisp, 0x1E);
            if (sp20 & 1) {
                GPC(255, 0, 0, 255);
            } else {
                GPC(255, 255, 255, 255);
            }
            if (*dList != NULL) {
                GDL(*dList);
            }
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            RCP_SetupDL(&gMasterDisp, 0x3D);
            if (sp20 & 1) {
                GPC(255, 0, 0, 255);
            } else {
                GPC(255, 255, 255, 255);
            }
            GCGM_BACK();
            if (*dList != NULL) {
                GDL(*dList);
            }
            RCP_SetupDL(&gMasterDisp, 0x1D);
            break;
    }
    return true;
}

extern f32 D_i5_801B8C64[][4];
extern s32 D_i5_801B8CD4[][4];
extern s32 D_i5_801B8CF4[];
extern Vec3f D_i5_801B8D00;
extern s32* D_i5_801BBEF0;
extern f32* D_i5_801BBEF4;

void func_i5_8019081C(s32 limbIndex, Vec3f* rot, void* data) {
    s32 i;
    s32 j;
    f32* var_s0;
    s32 temp_s3;
    Vec3f sp5C;
    Vec3f sp50;
    s32 temp;

    for (i = 0; i < 2; i++) {
        temp_s3 = D_i5_801B8CD4[i][2];
        if (limbIndex == D_i5_801B8CD4[i][0]) {
            var_s0 = &D_i5_801B83A8[D_i5_801B8CF4[D_i5_801BBEF0[25]] * 6 + D_i5_801B8CD4[i][3] * 6 + 1];
            temp = D_i5_801B8CD4[i][1];
            for (j = 0; j < temp_s3; j++) {
                sp5C.x = D_i5_801B8C64[temp + j][0];
                sp5C.y = D_i5_801B8C64[temp + j][1];
                sp5C.z = D_i5_801B8C64[temp + j][2];
                Matrix_MultVec3f(gCalcMatrix, &sp5C, &sp50);
                var_s0[0] = sp50.z;
                var_s0[1] = D_i5_801B8C64[temp + j][3];
                var_s0[2] = sp50.y;
                var_s0[3] = D_i5_801B8C64[temp + j][3];
                var_s0[4] = sp50.x;
                var_s0[5] = D_i5_801B8C64[temp + j][3];
                var_s0 += 6;
            }
        }
    }
    if (limbIndex == 1) {
        // FAKE
        if (1) {}
        switch ((s32) D_i5_801BBEF0[25]) {
            case 0:
                Matrix_MultVec3f(gCalcMatrix, &D_i5_801B8D00, (Vec3f*) &D_i5_801BBEF4[0x44]);
                return;
            case 1:
                Matrix_MultVec3f(gCalcMatrix, &D_i5_801B8D00, (Vec3f*) &D_i5_801BBEF4[0x47]);
                break;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80190A08.s")
s32 func_i5_80190A08(s32, Gfx**, Vec3f*, Vec3f*, void*);

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80191AE8.s")
void func_i5_80191AE8(s32, Vec3f*, void*);

extern AnimationHeader D_8000708;
extern AnimationHeader D_8000D80;
extern AnimationHeader D_A0002BC;
extern AnimationHeader D_A00047C;
extern AnimationHeader D_A000858;
extern AnimationHeader D_A000934;
extern AnimationHeader D_A000D50;
extern u8 D_i5_801B8C0C[];
extern s32* D_i5_801BBEF0;
extern f32* D_i5_801BBEF4;
extern Vec3f D_i5_801BC978[];
extern Vec3f D_i5_801BC9D8[];
extern Vec3f D_i5_801BCA38[];
extern Vec3f D_i5_801BCDC8[];
extern Vec3f D_i5_801BCE28[];
extern Vec3f D_i5_801BCE88[];
extern s32 D_i5_801C0058;
extern s32 D_i5_801C006C;
extern s32 D_i5_801C009C;

void func_i5_80192118(Boss* boss) {
    Vec3f sp54;
    Effect* effect;
    f32 temp_ft2;
    f32 temp_ft4;
    f32 temp_fa1;
    f32 temp_fv1;


    // s32 var_t7;



    if (D_i5_801BBEF0[30] > 0) {
        D_i5_801BBEF0[30]--;
    }

    if (D_i5_801BBEF0[33] > 0) {
        D_i5_801BBEF0[33]--;
    }

    if (D_i5_801BBEF0[34] > 0) {
        D_i5_801BBEF0[34]--;
    }

    if (D_i5_801BBEF0[29] > 0) {
        D_i5_801BBEF0[29]--;
    }

    if ((boss->state == 3) || (boss->state == 4)) {
        Math_SmoothStepToF(&D_i5_801BBEF4[36], D_i5_801BBEF4[51], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[37], D_i5_801BBEF4[52], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[38], D_i5_801BBEF4[53], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[39], D_i5_801BBEF4[45], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[40], D_i5_801BBEF4[46], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[41], D_i5_801BBEF4[47], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[42], D_i5_801BBEF4[48], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[43], D_i5_801BBEF4[49], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToF(&D_i5_801BBEF4[44], D_i5_801BBEF4[50], 0.5f, 10.0f, 0.01f);
        Math_SmoothStepToAngle(&D_i5_801BBEF4[64], D_i5_801BBEF4[65], 0.5f, 3.0f, 0.01f);
        Math_SmoothStepToAngle(&D_i5_801BBEF4[54], D_i5_801BBEF4[55], 0.5f, 3.0f, 0.01f);
        Math_SmoothStepToAngle(&D_i5_801BBEF4[56], D_i5_801BBEF4[63], 0.5f, 3.0f, 0.01f);
    }
    switch (boss->state) {
        case 0:
            D_i5_801BBEF4[36] = D_i5_801BBEF4[51] = 120.0f;
            D_i5_801BBEF4[37] = D_i5_801BBEF4[52] = -250.0f;
            D_i5_801BBEF4[38] = D_i5_801BBEF4[53] = -300.0f;
            D_i5_801BBEF4[39] = D_i5_801BBEF4[45] = -200.0f;
            D_i5_801BBEF4[40] = D_i5_801BBEF4[46] = -290.0f;
            D_i5_801BBEF4[41] = D_i5_801BBEF4[47] = 0.0f;
            D_i5_801BBEF4[42] = D_i5_801BBEF4[48] = -40.0f;
            D_i5_801BBEF4[43] = D_i5_801BBEF4[49] = -80.0f;
            D_i5_801BBEF4[44] = D_i5_801BBEF4[50] = -40.0f;
            D_i5_801BBEF4[57] = D_i5_801BBEF4[36] + boss->obj.pos.x;
            D_i5_801BBEF4[58] = D_i5_801BBEF4[38] + boss->obj.pos.z;
            D_i5_801BBEF4[59] = D_i5_801BBEF4[39] + boss->obj.pos.x;
            D_i5_801BBEF4[60] = D_i5_801BBEF4[41] + boss->obj.pos.z;
            D_i5_801BBEF4[61] = D_i5_801BBEF4[42] + boss->obj.pos.x;
            D_i5_801BBEF4[62] = D_i5_801BBEF4[44] + boss->obj.pos.z;
            D_i5_801BBEF4[54] = D_i5_801BBEF4[55] = 70.0f;
            D_i5_801BBEF4[56] = D_i5_801BBEF4[63] = -80.0f;
            D_i5_801BBEF4[64] = D_i5_801BBEF4[65] = 0.0f;
            D_i5_801BBEF4[66] = 48.0f;
            D_i5_801BBEF4[67] = 48.0f;
            D_i5_801BBEF0[22] = 0;
            D_i5_801BBEF0[23] = 0;
            D_i5_801BBEF0[24] = 0;
            boss->swork[1] = 1;
            break;
        case 1:
            Animation_GetFrameData(&D_A0002BC, 0, D_i5_801BC978);
            Animation_GetFrameData(&D_A0002BC, 0, D_i5_801BCDC8);
            Animation_GetFrameData(&D_A0002BC, 0, D_i5_801BC9D8);
            Animation_GetFrameData(&D_A0002BC, 0, D_i5_801BCE28);
            Animation_GetFrameData(&D_A000934, 0, D_i5_801BCA38);
            Animation_GetFrameData(&D_A000934, 0, D_i5_801BCE88);
            if ((gPlayer[0].unk_138 - boss->obj.pos.z) <= 450.0f) {
                gPlayer[0].unk_19C = -1;
                gPlayer[0].unk_000 = 0.0f;
                boss->swork[1] = 2;
                boss->swork[0x1F] = 0;
                boss->swork[0x1E]++;
            }
            break;
        case 2:
            
            if (boss->dmgType == 1) {
                switch (D_i5_801B8C0C[boss->dmgPart]) {
                    case 0:
                        D_i5_801BBEF0[30] = 15;
                        Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 1:
                        D_i5_801BBEF0[33] = 15;
                        Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 2:
                        D_i5_801BBEF0[34] = 15;
                        Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                }
            }
            if (boss->dmgType == -1) {

                if ((boss->dmgPart == 5) || (boss->dmgPart == 7) || (boss->dmgPart == 0xE)) {
                    switch (D_i5_801B8C0C[boss->dmgPart]) {
                        case 0:
                            D_i5_801BBEF0[30] = 15;
                            break;
                        case 1:
                            D_i5_801BBEF0[33] = 15;
                            break;
                        case 2:
                            D_i5_801BBEF0[34] = 15;
                            break;
                    }
                }
            }
            if (boss->dmgType != 0) {
                D_i5_801BBEF0[48]++;
            }
            if ((D_i5_801BBEF0[48] >= 3) || (boss->swork[0x1F] >= 0x5A)) {
                D_i5_801BBEF4[45] = -240.0f;
                D_i5_801BBEF4[46] = -40.0f;
                D_i5_801BBEF4[47] = -200.0f;
                D_i5_801BBEF4[48] = 240.0f;
                D_i5_801BBEF4[49] = -40.0f;
                D_i5_801BBEF4[50] = -200.0f;
                D_i5_801BBEF4[51] = 0.0f;
                D_i5_801BBEF4[52] = -200.0f;
                D_i5_801BBEF4[53] = -450.0f;
                D_i5_801BBEF4[55] = 0.0f;
                D_i5_801BBEF4[63] = 0.0f;
                boss->vel.z = gPlayer[0].vel.z;
                D_i5_801BBEF0[27] = 0x64;
                D_i5_801BBEF0[29] = 0x1E;
                D_i5_801BBEF0[31] = 5;
                D_i5_801BBEF0[32] = 2;
                D_i5_801BBEF0[35] = 5;
                D_i5_801BBEF0[37] = 2;
                D_i5_801BBEF0[36] = 5;
                D_i5_801BBEF0[38] = 2;
                gPlayer[0].unk_19C = 0;
                boss->swork[1] = 3;
                func_8001D444(0, 0x8014, 0, 0xFF);
            }
            break;
        case 3:
            
            if (D_i5_801BBEF0[22] == 0x25) {
                sp54.x = (boss->obj.pos.x + D_i5_801BBEF4[39]) + D_i5_801BBEF4[68];
                sp54.y = 0.0f;
                sp54.z = (boss->obj.pos.z + D_i5_801BBEF4[41]) + D_i5_801BBEF4[70];
                func_8007A6F0(&sp54, 0x29403031);
                boss->swork[0x27] = 5;
                D_80178480 = 5;
            }
            if (D_i5_801BBEF0[23] == 0x25) {
                sp54.x = (boss->obj.pos.x + D_i5_801BBEF4[42]) + D_i5_801BBEF4[71];
                sp54.y = 0.0f;
                sp54.z = (boss->obj.pos.z + D_i5_801BBEF4[44]) + D_i5_801BBEF4[73];
                func_8007A6F0(&sp54, 0x29403031);
                boss->swork[0x27] = 5;
                D_80178480 = 5;
            }
            if (boss->dmgType == 1) {
                switch (D_i5_801B8C0C[boss->dmgPart]) {
                    case 0:
                        D_i5_801BBEF0[30] = 0xF;
                        
                        D_i5_801BBEF0[27] -= boss->damage;
                        Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 1:
                        D_i5_801BBEF0[33] = 0xF;
                        
                        D_i5_801BBEF0[27] -= boss->damage;
                        Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                    case 2:
                        D_i5_801BBEF0[34] = 0xF;
                        
                        D_i5_801BBEF0[27] -= boss->damage;
                        Audio_PlaySfx(0x2903300E, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                        break;
                }
                boss->dmgType = 0;
            }
            if ((boss->dmgType == -1) && ((boss->dmgPart == 5) || (boss->dmgPart == 7) || (boss->dmgPart == 0xE))) {
                boss->dmgType = 0;
                switch (D_i5_801B8C0C[boss->dmgPart]) {
                    case 0:
                        D_i5_801BBEF0[30] = 0xF;
                        
                        D_i5_801BBEF0[27] -= boss->damage;
                        break;
                    case 1:
                        D_i5_801BBEF0[33] = 0xF;
                        
                        D_i5_801BBEF0[27] -= boss->damage;
                        break;
                    case 2:
                        D_i5_801BBEF0[34] = 0xF;
                        
                        D_i5_801BBEF0[27] -= boss->damage;
                        break;
                }
            }
            Math_SmoothStepToF(&boss->vel.z, gPlayer[0].vel.z, 0.7f, 1.0f, 0.01f);
            Math_SmoothStepToF(&boss->obj.pos.x, gPlayer[0].pos.x, 0.1f, 6.0f, 0.01f);
            Math_SmoothStepToF(&boss->obj.pos.z, gPlayer[0].unk_138 - 450.0f, 0.1f, 1.0f, 0.01f);
            Animation_GetFrameData(&D_A000D50, D_i5_801BBEF0[24] >> 1, D_i5_801BCA38);
            
            switch (D_i5_801BBEF0[39]) {
                case 0:
                    Animation_GetFrameData(&D_A000858, D_i5_801BBEF0[22] >> 1, D_i5_801BC978);
                    break;
                case 1:
                    Animation_GetFrameData(&D_A00047C, D_i5_801BBEF0[22] >> 1, D_i5_801BC978);
                    break;
            }

            switch (D_i5_801BBEF0[40]) {
                case 0:
                    Animation_GetFrameData(&D_A000858, D_i5_801BBEF0[23] >> 1, D_i5_801BC9D8);
                    break;
                case 1:
                    Animation_GetFrameData(&D_A00047C, D_i5_801BBEF0[23] >> 1, D_i5_801BC9D8);
                    break;
            }
            Math_SmoothStepToVec3fArray(D_i5_801BC978, D_i5_801BCDC8, 1, 8, 0.5f, 360.0f, 0.01f);
            Math_SmoothStepToVec3fArray(D_i5_801BC9D8, D_i5_801BCE28, 1, 8, 0.5f, 360.0f, 0.01f);
            Math_SmoothStepToVec3fArray(D_i5_801BCA38, D_i5_801BCE88, 1, 0xD, 0.5f, 5.0f, 0.01f);
            D_i5_801BBEF0[24]++;
            D_i5_801BBEF0[22]++;
            D_i5_801BBEF0[23]++;
            
            if (D_i5_801BBEF0[24] >= (Animation_GetFrameCount(&D_A000D50) * 2)) {
                D_i5_801BBEF0[24] = 0;
                
            }
            
            switch (D_i5_801BBEF0[39]) {
                case 0:
                    
                    if (D_i5_801BBEF0[22] >= (Animation_GetFrameCount(&D_A000858) * 2)) {
                        D_i5_801BBEF0[22] = 0;
                    }
                    break;
                case 1:
                    
                    if (D_i5_801BBEF0[22] >= (Animation_GetFrameCount(&D_A00047C) * 2)) {
                        D_i5_801BBEF0[22] = 0;
                    }
                    break;
            }

            switch (D_i5_801BBEF0[40]) {
                case 0:
                    if (D_i5_801BBEF0[23] >= (Animation_GetFrameCount(&D_A000858) * 2)) {
                        D_i5_801BBEF0[23] = 0;
                    }
                    break;
                case 1:
                    if (D_i5_801BBEF0[23] >= (Animation_GetFrameCount(&D_A00047C) * 2)) {
                        D_i5_801BBEF0[23] = 0;
                    }
                    break;
            }
            D_i5_801BBEF4[51] = (f32) (__sinf((((f32) (boss->swork[0x26] & 0x7F) * 360.0f) / 128) * M_DTOR) * 40.0f);
            
            switch (D_i5_801BBEF0[28]) {
                case 0:
                    if (D_i5_801BBEF0[29] == 0) {
                        D_i5_801BBEF0[28] = 1;
                    }
                    break;
                case 1:
                    if (D_i5_801BBEF0[22] == 0) {
                        D_i5_801BBEF0[39] = 1;
                        D_i5_801BBEF4[45] = 0.0f;
                        D_i5_801BBEF4[47] = 0.0f;
                        D_i5_801BBEF4[55] = (2.0f * Rand_ZeroOne()) - 1.0f;
                        D_i5_801BBEF0[28] = 2;
                    }
                    break;
                case 2:
                    if (D_i5_801BBEF0[22] == 0) {
                        D_i5_801BBEF0[39] = 0;
                        D_i5_801BBEF4[45] = ((Rand_ZeroOne() * 30.0f) + -240.0f) - 15.0f;
                        D_i5_801BBEF4[47] = (Rand_ZeroOne() * 20.0f) + -200.0f;
                        D_i5_801BBEF4[55] = Rand_ZeroOne() * 20.0f;
                        D_i5_801BBEF0[28] = 3;
                    }
                    break;
                case 3:
                    if (D_i5_801BBEF0[23] == 0) {
                        D_i5_801BBEF0[40] = 1;
                        D_i5_801BBEF4[48] = 0.0f;
                        D_i5_801BBEF4[50] = 0.0f;
                        D_i5_801BBEF4[63] = (2.0f * Rand_ZeroOne()) - 1.0f;
                        D_i5_801BBEF0[28] = 4;
                    }
                    break;
                case 4:
                    if (D_i5_801BBEF0[23] == 0) {
                        D_i5_801BBEF0[40] = 0;
                        D_i5_801BBEF4[48] = ((Rand_ZeroOne() * 30.0f) + 240.0f) - 15.0f;
                        D_i5_801BBEF4[50] = (Rand_ZeroOne() * 20.0f) + -200.0f;
                        D_i5_801BBEF4[63] = -Rand_ZeroOne() * 20.0f;
                        D_i5_801BBEF0[28] = 1;
                    }
                    break;
                default:
                    break;
            }
            if (D_i5_801BBEF0[27] <= 0) {
                D_i5_801BBEF4[45] = -90.0f;
                D_i5_801BBEF4[46] = -70.0f;
                D_i5_801BBEF4[47] = -250.0f;
                D_i5_801BBEF4[48] = 90.0f;
                D_i5_801BBEF4[49] = -70.0f;
                D_i5_801BBEF4[50] = -250.0f;
                D_i5_801BBEF4[51] = 0.0f;
                D_i5_801BBEF4[52] = -100.0f;
                D_i5_801BBEF4[53] = -350.0f;
                D_i5_801BBEF4[63] = 0.0f;
                D_i5_801BBEF4[55] = D_i5_801BBEF4[63];
                Audio_PlaySfx(0x2900502A, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                Audio_PlaySfx(0x2940802C, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                boss->swork[1] = 4;
                boss->timer_050 = 0x78;
                D_i5_801BBEF0[22] = 0;
                D_i5_801BBEF0[23] = 0;
                D_i5_801BBEF0[24] = 0;
                boss->swork[0x1F] = 0;
                boss->fwork[0] = 0.0f;
                boss->swork[0x1E]++;
            }
            break;
        case 4:
            boss->vel.z = gPlayer[0].vel.z;
            Animation_GetFrameData(&D_8000D80, D_i5_801BBEF0[22] >> 1, D_i5_801BC978);
            Animation_GetFrameData(&D_8000D80, D_i5_801BBEF0[23] >> 1, D_i5_801BC9D8);
            Animation_GetFrameData(&D_8000708, D_i5_801BBEF0[24] >> 1, D_i5_801BCA38);
            Math_SmoothStepToF(boss->fwork, 0.5f, 0.05f, 0.05f, 0.01f);
            Math_SmoothStepToVec3fArray(D_i5_801BC978, D_i5_801BCDC8, 1, 8, boss->fwork[0], 360.0f, 0.01f);
            Math_SmoothStepToVec3fArray(D_i5_801BC9D8, D_i5_801BCE28, 1, 8, boss->fwork[0], 360.0f, 0.01f);
            Math_SmoothStepToVec3fArray(D_i5_801BCA38, D_i5_801BCE88, 1, 0xD, boss->fwork[0], 360.0f, 0.01f);
            if (boss->timer_050 < 0x79) {
                if (D_i5_801BBEF0[22] < ((Animation_GetFrameCount(&D_8000D80) * 2) - 1)) {
                    D_i5_801BBEF0[22]++;
                }
            }
            if (boss->timer_050 < 0x6C) {
                if (D_i5_801BBEF0[23] < ((Animation_GetFrameCount(&D_8000D80) * 2) - 1)) {
                    D_i5_801BBEF0[23]++;
                }
            }
            if (boss->timer_050 < 0x79) {
                if (D_i5_801BBEF0[24] < ((Animation_GetFrameCount(&D_8000708) * 2) - 1)) {
                    D_i5_801BBEF0[24]++;
                }
            }
            if (boss->timer_050 == 0) {
                boss->swork[1] = 5;
                boss->timer_050 = 0x5A;
            }
            break;
    }
    if ((boss->state >= 3) && (boss->state < 5)) {
        if ((boss->state != 4) || (boss->swork[0x1F] < 0x64)) {
            temp_ft2 = boss->obj.pos.x + D_i5_801BBEF4[36];
            temp_ft4 = boss->obj.pos.z + D_i5_801BBEF4[38];
            
            temp_fa1 = D_i5_801BBEF4[57] - temp_ft2;
            temp_fv1 = D_i5_801BBEF4[58] - temp_ft4;

            if ((s32) sqrtf(SQ(temp_fa1) + SQ(temp_fv1)) > 50.0f) {
                
                
                
                
                effect = func_8007783C(OBJ_EFFECT_394);
                if (effect != NULL) {
                    effect->obj.status = 2;
                    effect->unk_7A = 0xA;
                    effect->unk_78 = effect->unk_7A;
                    effect->obj.pos.x = temp_ft2;
                    effect->obj.pos.y = boss->obj.pos.y;
                    effect->obj.pos.z = temp_ft4;
                    
                    effect->obj.rot.y = (Math_Atan2F(-temp_fv1, temp_fa1) * M_RTOD) - 90.0f;
                    effect->info.unk_14 = -1;
                    effect->unk_46 = 0x46;
                    // Fake, should be sqrtf value
                    effect->scale2 = sqrtf(SQ(temp_fa1) + SQ(temp_fv1)) / 26.0f;
                }
                D_i5_801BBEF4[57] = temp_ft2;
                D_i5_801BBEF4[58] = temp_ft4;
            }
            if (!(boss->swork[0x26] & 3)) {
                func_8007A900(temp_ft2, boss->obj.pos.y, temp_ft4, 10.0f, 0xC0, 0x10, 0);
            }
        }
        if ((boss->state != 4) || (boss->swork[0x1F] < 0x5A)) {
            temp_ft2 = boss->obj.pos.x + D_i5_801BBEF4[39];
            temp_ft4 = boss->obj.pos.z + D_i5_801BBEF4[41];
            
            temp_fa1 = D_i5_801BBEF4[59] - temp_ft2;
            temp_fv1 = D_i5_801BBEF4[60] - temp_ft4;

            if ((s32) sqrtf(SQ(temp_fa1) + SQ(temp_fv1)) > 50.0f) {
                
                
                
                
                effect = func_8007783C(OBJ_EFFECT_394);

                if (effect != NULL) {
                    effect->obj.status = 2;
                    effect->unk_7A = 0xA;
                    effect->unk_78 = effect->unk_7A;
                    effect->obj.pos.x = temp_ft2;
                    effect->obj.pos.y = boss->obj.pos.y;
                    effect->obj.pos.z = temp_ft4;
                    
                    effect->obj.rot.y = (Math_Atan2F(-temp_fv1, temp_fa1) * M_RTOD) - 90.0f;
                    effect->info.unk_14 = -1;
                    effect->unk_46 = 0x32;
                    // Fake, should be sqrtf value
                    effect->scale2 = sqrtf(SQ(temp_fa1) + SQ(temp_fv1)) / 26.0f;
                }
                D_i5_801BBEF4[59] = temp_ft2;
                D_i5_801BBEF4[60] = temp_ft4;
            }
            if (!(boss->swork[0x26] & 3)) {
                func_8007A900(temp_ft2, boss->obj.pos.y, temp_ft4, 10.0f, 0xC0, 0x10, 0);
            }
        }
        if ((boss->state != 4) || (boss->swork[0x1F] < 0x66)) {
            temp_ft2 = boss->obj.pos.x + D_i5_801BBEF4[42];
            temp_ft4 = boss->obj.pos.z + D_i5_801BBEF4[44];
            
            temp_fa1 = D_i5_801BBEF4[61] - temp_ft2;
            temp_fv1 = D_i5_801BBEF4[62] - temp_ft4;

            if ((s32) sqrtf(SQ(temp_fa1) + SQ(temp_fv1)) > 50.0f) {
                
                effect = func_8007783C(OBJ_EFFECT_394);

                if (effect != NULL) {
                    effect->state = 0xA;
                    effect->unk_7A = 0xA;
                    effect->unk_78 = effect->unk_7A;
                    effect->obj.pos.x = temp_ft2;
                    effect->obj.pos.y = boss->obj.pos.y;
                    effect->obj.pos.z = temp_ft4;
                    
                    effect->obj.rot.y = (Math_Atan2F(-temp_fv1, temp_fa1) * M_RTOD) - 90.0f;
                    effect->info.unk_14 = -1;
                    effect->unk_46 = 0x32;
                    // Fake, should be sqrtf value
                    effect->scale2 = sqrtf(SQ(temp_fa1) + SQ(temp_fv1)) / 26.0f;
                }
                D_i5_801BBEF4[61] = temp_ft2;
                D_i5_801BBEF4[62] = temp_ft4;
            }
            if (!(boss->swork[0x26] & 3)) {
                func_8007A900(temp_ft2, boss->obj.pos.y, temp_ft4, 10.0f, 0xC0, 0x10, 0);
            }
        }
    }
    boss->dmgType = 0;
}


extern f32 D_i5_801B7738[];
extern s32* D_i5_801BBEF0;
extern f32* D_i5_801BBEF4;

void func_i5_80193B30(Boss* boss) {

    if (boss->state == boss->swork[1]) {
        if (boss->swork[1] != 11) {
            boss->swork[1] = 11;
        } else {
            boss->swork[1] = 9;
        }
    }
    switch (boss->swork[1]) {
        case 8: 
            if ((boss->swork[11] <= 0) && (boss->swork[12] <= 0)) {
                if (boss->swork[35] == 0) {
                    boss->swork[1] = 12;
                } else {
                    boss->swork[1] = 11;
                }
            }
            break;
        case 10:
            if (D_i5_801BBEF0[8] != 0) {
                boss->swork[1] = 12;
            }
            break;
        case 11:
            if (boss->swork[35] == 0) {
                boss->swork[1] = 8;
            }
            break;
    }
    if (boss->swork[1] != 7) {
        boss->swork[36]++;
    } else {
        boss->swork[36] = 0;
    }
    if (boss->swork[36] >= 2) {
        boss->swork[1] = 7;
        boss->swork[36] = 0;
    }
    if (boss->swork[1] == 8) {
        boss->swork[3] = 2;
    } else {
        boss->swork[3] = 1;
    }
    D_i5_801BBEF4[11] = D_i5_801B7738[boss->swork[1]];

    switch (boss->swork[1]) {
        case 7:
        case 8:
        case 9:
        case 10:
            if (boss->fwork[35] != 1.0f) {
                D_i5_801BBEF0[13] = 1;
                boss->fwork[35] = 1.0f;
                D_i5_801BBEF4[32] = 10.0f;
                D_i5_801BBEF4[33] = 10.0f;
            }
            break;
        case 11:
            boss->fwork[0x23] = 0.0f;
            break;
        case 12:
            boss->fwork[0x23] = 0.0f;
            break;
    }
    switch (boss->swork[1]) {
        case 7:
            if (boss->swork[9] > 0) {
                boss->fwork[36] = 1.0f;
                D_i5_801BBEF0[14] = 1;
                D_i5_801BBEF4[34] = 1.0f;
            }
            if ((boss->swork[10] > 0) && (D_i5_801BBEF0[8] != 0)) {
                boss->fwork[37] = 1.0f;
                D_i5_801BBEF0[15] = 1;
                D_i5_801BBEF4[35] = 1.0f;
            }
            boss->swork[0x22] = 1;
            break;
        case 8:
            boss->swork[0x22] = 1;
            break;
        case 9:
            boss->swork[0x22] = 1;
            break;
        case 10:
            boss->swork[0x22] = 1;
            break;
        case 11:
            boss->swork[0x22] = 1;
            boss->swork[0x18] = 1;
            boss->fwork[0x2D] = 230.0f;
            break;
        case 12:
            boss->swork[0x22] = 2;
            boss->fwork[0x30] = 0.0f;
            break;
        default:
            break;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80193DF0.s")

void func_i5_80192118(Boss*);                          /* extern */
void func_i5_80193DF0(Boss*);                          /* extern */
extern s16 D_i5_801B8D54[];
extern s32* D_i5_801BBEF0;
extern f32* D_i5_801BBEF4;

void func_i5_80197A94(Boss* arg0) {
    Vec3f sp3C;

    arg0->swork[0x26]++;
    if ((arg0->dmgType != 0) && (((arg0->state >= 0) && (arg0->state <= 1)) || ((arg0->state >= 4) && (arg0->state <= 6)))) {
        Audio_PlaySfx(0x29121007, arg0->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        arg0->dmgType = 0;
    }
    if ((gPlayer->unk_1D4 != 0) && (arg0->swork[0x27] > 0)) {
        D_80137E84[0] = 1;
        arg0->swork[0x27]--;
    }
    if (arg0->swork[0x1C] == 2) {
        if (gTeamShields[3] > 0) {
            Radio_PlayMessage(gMsg_ID_4091, RCID_PEPPY);
        }
        D_i5_801BBEF0[42] = 1;
    }

    if (D_i5_801BBEF0[45] >= 2) {
        D_i5_801BBEF0[45]--;
    }
    if (arg0->swork[0x1E] == 4) {
        if ((arg0->swork[0x25] & 8) && (D_i5_801BBEF0[44] == 0)) {
            Radio_PlayMessage(gMsg_ID_4110, RCID_SLIPPY);
            arg0->swork[0x25] &= ~8;
        }
        if ((arg0->swork[0x25] & 0x10) && (D_i5_801BBEF0[44] >= 2) && (gRadioState == 0)) {
            Radio_PlayMessage(gMsg_ID_4092, RCID_SLIPPY);
            arg0->swork[0x25] &= ~0x10;
            D_i5_801BBEF0[45] = 0x65;
        }
        if (D_i5_801BBEF0[45] == 1) {
            gBossHealthBar = ((arg0->swork[0x15] * 255.0f) / 100.0f);
            gShowBossHealth = 1;
            D_i5_801BBEF0[45] = 0;
        }
    }

    if ((arg0->state >= 3) && (arg0->state <= 13)) {
        gBossFrameCount++;
    }
    switch (arg0->state) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            func_i5_80192118(arg0);
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            func_i5_80193DF0(arg0);
            break;
    }

    switch (arg0->swork[0x1E]) {
        case 0:
            switch (arg0->swork[0x1F]) {
                case 1:
                    Radio_PlayMessage(gMsg_ID_20266, RCID_FOX);
                    break;
                case 0x50:
                    gTeamShields[2] = 1;
                    Radio_PlayMessage(gMsg_ID_4112, RCID_SLIPPY);
                    gTeamShields[2] = -2;
                    break;
                case 0xF0:
                    gTeamShields[2] = 1;
                    Radio_PlayMessage(gMsg_ID_4093, RCID_SLIPPY);
                    gTeamShields[2] = -2;
                    break;
            }

            break;
        case 1:
            if (arg0->swork[0x1F] == 1) {
                func_800182F4(0x105A00FF);
                func_800182F4(0x115A00FF);
            }
            break;
        case 2:
            if (arg0->swork[0x1F] == 0xB) {
                gTeamShields[2] = 1;
                Radio_PlayMessage(gMsg_ID_4111, RCID_SLIPPY);
                gTeamShields[2] = -2;
            }
            break;
        case 3:
            switch (arg0->swork[0x1F]) {
                case 1:
                    break;
                case 50:
                    if (gTeamShields[1] > 0) {
                        Radio_PlayMessage(gMsg_ID_4094, RCID_FALCO);
                    }
                default:
                    break;
            }
            break;
        case 4:
            if (arg0->swork[0x23] == 0) {
                if (D_i5_801BBEF0[42] == 0) {
                    switch (arg0->swork[4]) {
                        case 1:
                            if (gTeamShields[3] > 0) {
                            Radio_PlayMessage(gMsg_ID_4095, RCID_PEPPY);
                            }
                            D_i5_801BBEF0[42] = 1;
                            break;
                        case 3:
                            if ((D_i5_801BBEF0[8] == 0) && (gTeamShields[1] > 0)) {
                                Radio_PlayMessage(gMsg_ID_4097, RCID_FALCO);
                            }
                            D_i5_801BBEF0[42] = 1;
                            break;
                        default:
                            break;
                        
                    }

                    if (arg0->swork[4] >= 4) {
                        if (!(D_i5_801BBEF0[46] & 1)) {
                            if ((gTeamShields[1] > 0) && (D_i5_801BBEF0[8] == 0) && (gRadioState == 0) && (arg0->swork[0xA] >= 2)) {
                                gTeamShields[2] = 1;
                                Radio_PlayMessage(gMsg_ID_4098, RCID_SLIPPY);
                                gTeamShields[2] = -2;
                                D_i5_801BBEF0[46] = (s32) (D_i5_801BBEF0[46] | 1);
                            }
                            D_i5_801BBEF0[42] = 1;
                        }
                    }
                }
            }
            if (arg0->swork[0x25] & 4) {
                D_i5_801BBEF0[43]++;
                switch (D_i5_801BBEF0[43]) {
                    case 1:
                        gTeamShields[2] = 1;
                        Radio_PlayMessage(gMsg_ID_20190, RCID_SLIPPY);
                        gTeamShields[2] = -2;
                        break;
                    case 0x50:
                        if (gTeamShields[1] > 0) {
                            Radio_PlayMessage(gMsg_ID_4096, RCID_FALCO);
                        }
                        arg0->swork[0x25] &= ~4;
                        break;
                    default:
                        break;
                }
            }
            break;
    }
    
    if ((arg0->state != 5) && ((arg0->state != 4) || (arg0->swork[0x1F] < 0x65)) && (D_i5_801BBEF0[8] == 0)) {
        Math_SmoothStepToF(&D_i5_801BBEF4[74], D_i5_801BBEF4[75], 0.5f, 0.04f, 0.01f);
        if (D_i5_801BBEF4[74] == D_i5_801BBEF4[74]) {
            if (arg0->swork[0x26] & 1) {
                D_i5_801BBEF4[75] = 0.7f;
                D_i5_801BBEF4[74] = D_i5_801BBEF4[75];
            } else {
                D_i5_801BBEF4[75] = 0.6f;
                D_i5_801BBEF4[74] = D_i5_801BBEF4[75];
            }
        }

        if ((D_i5_801BBEF0[49] >= 0x19) && !((D_i5_801BBEF0[49] - 0x19) & 1)) {
            D_i5_801BBEF4[74] = (Rand_ZeroOne() * 0.4f) + 0.9f;
            D_i5_801BBEF4[75] = 0.6f;

        }
        if (D_i5_801BBEF0[49] == 0) {
            sp3C.x = arg0->fwork[0x1D] + arg0->obj.pos.x;
            sp3C.y = arg0->fwork[0x1E] + arg0->obj.pos.y;
            sp3C.z = arg0->fwork[0x1F] + arg0->obj.pos.z;
            func_8007A6F0(&sp3C, 0x09004002);
            D_i5_801BBEF0[49] = D_i5_801B8D54[(s32) (Rand_ZeroOne() * 4.0f)];
            D_i5_801BBEF4[74] = (Rand_ZeroOne() * 0.4f) + 0.9f;
            D_i5_801BBEF4[75] = 0.6f;
        }
        if (D_i5_801BBEF0[49] > 0) {
            D_i5_801BBEF0[49]--;
        }
    }
    arg0->swork[0x1F]++;
}

extern Gfx D_7005300[];
extern Gfx D_8000D90[];
extern Limb* D_A000568[];
extern Limb* D_A000EDC[];
extern Limb* D_A001A70[];
extern Gfx D_Gfx_800D94D0[];
extern f32 D_i5_801B8D5C[];
extern f32 D_i5_801B8E24[][2];
extern s32* D_i5_801BBEF0;
extern Vec3f D_i5_801BCDC8[];
extern Vec3f D_i5_801BCE28[];
extern Vec3f D_i5_801BCE88[];

void func_i5_801982A8(Boss* arg0) {
    UnkEntity30* temp_v0_6;
    f32 sp120;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fv0;
    s32 pad;
    f32 stack;
    s32 i;
    s32 j;
    Vec3f spF4;
    Vec3f spE8;
    s32 temp_v1_28;
    f32 half = 0.5f;
    s32 temp;

    Matrix_Push(&gGfxMatrix);
    RCP_SetupDL(&gMasterDisp, 0x1E);
    GPC(255, 255, 255, 255);
    switch (arg0->state) {
        case 1:
        case 2:
        case 3:
        case 4:
            Matrix_Push(&gGfxMatrix);
            D_i5_801BBEF0[25] = 0;
            Animation_DrawSkeleton(0, D_A000EDC, D_i5_801BCE88, func_i5_8018FC70, func_i5_8019002C, arg0, &gIdentityMatrix);
            Matrix_Pop(&gGfxMatrix);
            D_i5_801B83A8[0] = 22.0f;
            Matrix_Push(&gGfxMatrix);
            D_i5_801BBEF0[25] = 1;
            Animation_DrawSkeleton(0, D_A000568, D_i5_801BCDC8, func_i5_801903A0, func_i5_8019081C, arg0, &gIdentityMatrix);
            Matrix_Pop(&gGfxMatrix);
            Matrix_Push(&gGfxMatrix);
            D_i5_801BBEF0[25] = 2;
            Animation_DrawSkeleton(0, D_A000568, D_i5_801BCE28, func_i5_801903A0, func_i5_8019081C, arg0, &gIdentityMatrix);
            Matrix_Pop(&gGfxMatrix);
            break;
        case 6:
            Animation_DrawSkeleton(0, D_A001A70, D_i5_801BCDC8, func_i5_80190A08, func_i5_80191AE8, arg0, &gIdentityMatrix);
            break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            Animation_DrawSkeleton(0, D_A001A70, D_i5_801BCDC8, func_i5_80190A08, func_i5_80191AE8, arg0, &gIdentityMatrix);
            break;
        case 0:
            break;
    }
    Matrix_Pop(&gGfxMatrix);
    if (arg0->obj.status != 3) {
        switch (arg0->state) {
            case 6:
                Matrix_Push(&gGfxMatrix);
                RCP_SetupDL(&gMasterDisp, 0x45);
                GPC(0, 0, 0, 255);
                GEC(0, 0, 0, 0);
                Matrix_RotateX(gGfxMatrix, -1.5707964f, 1U);
                Matrix_Scale(gGfxMatrix, arg0->fwork[0x2F] * 10.0f, arg0->fwork[0x2F] * 10.0f, 1.0f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(D_1024AC0);
                Matrix_Pop(&gGfxMatrix);
                break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
                Matrix_Push(&gGfxMatrix);
                RCP_SetupDL(&gMasterDisp, 0x45);
                GPC(0, 0, 0, 255);
                GEC(0, 0, 0, 0);
                Matrix_RotateX(gGfxMatrix, -1.5707964f, 1U);
                Matrix_Scale(gGfxMatrix, 10.0f, 10.0f, 1.0f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                GDL(D_1024AC0);
                Matrix_Pop(&gGfxMatrix);
                break;
        }
        if (arg0->state == 0xB) {
            if (arg0->swork[0x18] != 0) {
                Matrix_Push(&gGfxMatrix);
                Matrix_Translate(gGfxMatrix, arg0->fwork[0x11], arg0->fwork[0x12], arg0->fwork[0x13] + 50.0f, 1U);
                RCP_SetupDL_14();
                for (i = 0; i < 3; i++) {
                    sp120 = (arg0->fwork[0x2B] + (f32) i) / 3.0f;
                    temp_fs2 = arg0->fwork[0x2D] * sp120;
                    temp_fv0 = 1.0f - sp120;
                    GPC((s32) (temp_fv0 * 255.0f), (s32) ((temp_fv0 * 128.0f) + 127.0f), (s32) ((temp_fv0 * 60.0f) + 195.0f), (s32) ((temp_fv0 * 155.0f) + 100.0f));
                    for (j = 0; j < 0x168; j += 0x2D) {
                        Matrix_Push(&gGfxMatrix);
                        Matrix_RotateZ(gGfxMatrix, (j + arg0->fwork[0x2B] * 360.0f) * M_DTOR, 1U);
                        Matrix_Translate(gGfxMatrix, temp_fs2, 0.0f, 0.0f, 1U);
                        Matrix_SetGfxMtx(&gMasterDisp);
                        GDL(D_Gfx_800D94D0);
                        Matrix_Pop(&gGfxMatrix);
                    }
                }
                Matrix_Pop(&gGfxMatrix);
            }
            Matrix_Translate(gGfxMatrix, arg0->fwork[0x11], arg0->fwork[0x12], arg0->fwork[0x13], 1U);

            if (D_i5_801BBEF0[7] != 0) {
                Matrix_Push(&gGfxMatrix);
                sp120 = (f32) D_i5_801BBEF0[7] * 16.0f;
                RCP_SetupDL(&gMasterDisp, 0x40);
                Matrix_RotateX(gGfxMatrix, 1.5707964f, 1U);
                Matrix_Push(&gGfxMatrix);
                Matrix_Scale(gGfxMatrix, sp120, 1.0f, sp120, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                GPC(120, 255, 220, D_i5_801BBEF0[7] * 50);
                GDL(D_20112C0);
                Matrix_Pop(&gGfxMatrix);
                if (D_i5_801BBEF0[7] > 0) {
                    sp120 = (f32) (D_i5_801BBEF0[7] - 1) * 24.0f;
                    Matrix_Scale(gGfxMatrix, sp120, 1.0f, sp120, 1U);
                    Matrix_SetGfxMtx(&gMasterDisp);
                    GPC(120, 255, 220, D_i5_801BBEF0[7] * 50);
                    GDL(D_20112C0);
                }
                Matrix_Pop(&gGfxMatrix);
            }
            
            if (D_i5_801BBEF0[16] > 0) {
                temp = D_i5_801BBEF0[16] - 1;
                Matrix_Push(&gGfxMatrix);
                Matrix_RotateY(gGfxMatrix, (arg0->fwork[0x15] - 90.0f) * M_DTOR, 1U);
                Matrix_RotateX(gGfxMatrix, (arg0->fwork[0x16] - 180.0f) * M_DTOR, 1U);
                Matrix_RotateZ(gGfxMatrix, (arg0->fwork[0x14] + ((arg0->unk_04C - 15) * 15.6f)) * M_DTOR, 1U);
                Matrix_Scale(gGfxMatrix, D_i5_801B8D5C[temp], D_i5_801B8D5C[temp], D_i5_801B8D5C[temp + 25], 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                RCP_SetupDL(&gMasterDisp, 0x31);
                GPC(255, 255, 255, 178);
                GEC(0, 128, 60, 0);
                GDL(D_7005300);
                Matrix_Pop(&gGfxMatrix);
            }
            if (D_i5_801BBEF0[17] > 0) {
                Matrix_Push(&gGfxMatrix);
                Matrix_RotateY(gGfxMatrix, (arg0->fwork[0x15] - 90.0f) * M_DTOR, 1U);
                Matrix_RotateX(gGfxMatrix, (arg0->fwork[0x16] - 180.0f) * M_DTOR, 1U);
                Matrix_RotateZ(gGfxMatrix, (arg0->fwork[0x14] + ((arg0->unk_04C - 15) * 15.6f)) * M_DTOR * 3.0f, 1U);
                Matrix_Scale(gGfxMatrix, 4.0f, 4.0f, 4.0f, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                RCP_SetupDL(&gMasterDisp, 0x31);
                GPC(255, 255, 255, (s32)((f32) (D_i5_801BBEF0[17] * 89.0f) / 3.0f));
                GEC(0, 128, 60, 0);
                GDL(D_7005300);
                Matrix_Pop(&gGfxMatrix);
            }
            
            if (arg0->swork[0x19] != 0) {
                sp120 = arg0->fwork[0x29] / 40.0f;
                temp_fs2 = arg0->fwork[0x2A] / 700.0f;
                Matrix_RotateY(gGfxMatrix, (arg0->fwork[0x15] - 90.0f) * M_DTOR, 1U);
                Matrix_RotateX(gGfxMatrix, (arg0->fwork[0x16] - 180.0f) * M_DTOR, 1U);
                Matrix_RotateZ(gGfxMatrix, (arg0->fwork[0x14] - ((arg0->swork[0x26] & 7) * 43.0f)) * M_DTOR, 1U);
                Matrix_Push(&gGfxMatrix);
                Matrix_Scale(gGfxMatrix, half * sp120, half * sp120, temp_fs2, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                RCP_SetupDL(&gMasterDisp, 0x48);
                GPC(255, 255, 255, 178);
                GEC(0, 128, 60, 0);
                GDL(D_8000D90);
                Matrix_Pop(&gGfxMatrix);
                Matrix_Scale(gGfxMatrix, sp120, sp120, temp_fs2, 1U);
                Matrix_SetGfxMtx(&gMasterDisp);
                gDPPipeSync(gMasterDisp++);
                GPC(255, 255, 255, 64);
                GEC(0, 128, 110, 0);
                GDL(D_8000D90);
                Matrix_RotateY(gCalcMatrix, (arg0->fwork[0x15] - 90.0f) * M_DTOR, 0U);
                Matrix_RotateX(gCalcMatrix, (arg0->fwork[0x16] - 180.0f) * M_DTOR, 1U);
                Matrix_RotateZ(gCalcMatrix, (arg0->fwork[0x14] + arg0->fwork[0x2A]) * M_DTOR, 1U);
                temp_fs0 = arg0->obj.pos.x + arg0->fwork[17];
                temp_fs1 = arg0->obj.pos.y + arg0->fwork[18];
                temp_fs2 = arg0->obj.pos.z + arg0->fwork[19];
                for (i = 0; i < 4; i++) {
                    if (D_i5_801BBEF0[i + 9] != 0) {
                        temp_v1_28 = D_i5_801BBEF0[i + 9] - 1;
                        spF4.x = D_i5_801B8E24[i][0] * arg0->fwork[0x29];
                        spF4.y = D_i5_801B8E24[i][1] * arg0->fwork[0x29];
                        spF4.z = arg0->fwork[0x2A];
                        Matrix_MultVec3f(gCalcMatrix, &spF4, &spE8);
                        gUnkEntities30[temp_v1_28].unk_04.x = temp_fs0;
                        gUnkEntities30[temp_v1_28].unk_04.y = temp_fs1;
                        gUnkEntities30[temp_v1_28].unk_04.z = temp_fs2;
                        gUnkEntities30[temp_v1_28].unk_10.x = temp_fs0 + spE8.x;
                        gUnkEntities30[temp_v1_28].unk_10.y = temp_fs1 + spE8.y;
                        gUnkEntities30[temp_v1_28].unk_10.z = temp_fs2 + spE8.z;
                        if (arg0->swork[0x20] == 0) {
                            gUnkEntities30[temp_v1_28].mode = 0;
                        } else {
                            gUnkEntities30[temp_v1_28].mode = 1;
                        }
                        gUnkEntities30[temp_v1_28].unk_2C = 0;
                        gUnkEntities30[temp_v1_28].unk_2E = 0;
                        gUnkEntities30[temp_v1_28].unk_2D = 0;
                        gUnkEntities30[temp_v1_28].unk_2F = 0;
                        gUnkEntities30[temp_v1_28].unk_28 = 1;
                    }
                }
            }
        }
        arg0->state = arg0->swork[1];
    }
}

extern u8 D_i5_801B7770[][6];
extern Vec3f D_i5_801B8E44;

void func_i5_801990DC(Boss* boss) {
    s32 i;
    Vec3f sp60;
    Actor* actor;
    s32 var_s1;

    if (boss->unk_044 == 0) {
        Audio_PlaySfx(0x2940902D, boss->sfxPos, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
        func_800182F4(0x103200FF);
        func_800182F4(0x113200FF);
        func_8007A568(boss->obj.pos.x, boss->obj.pos.y + 250.0f, boss->obj.pos.z, 40.0f);
        func_80042EC0(boss);
        gShowBossHealth = 0;
        actor = gActors;
        for (i = 0; i < ARRAY_COUNT(gActors); i++, actor++) {
            if ((actor->obj.status == 2) && (actor->obj.id == 0xBD) && (actor->state == 0x28)) {
                actor->gravity = 0.2f;
            }
        }

        for (i = 0; i < 0x43; i++) {
            if (!(D_i5_801BBF00[i].unk_26 & 4)) {
                actor = func_800A3608(0xBD);
                if (actor != NULL) {
                    actor->state = 0x28;
                    actor->unk_046 = D_i5_801B7770[i][5];
                    actor->unk_048 = D_i5_801B7770[i][1];
                    Matrix_RotateY(gCalcMatrix, boss->obj.rot.y * 0.017453292f, 0);
                    Matrix_MultVec3f(gCalcMatrix, &D_i5_801BBF00[i].unk_00.pos, &sp60);
                    actor->obj.pos.x = boss->obj.pos.x + sp60.x;
                    actor->obj.pos.y = boss->obj.pos.y + sp60.y;
                    actor->obj.pos.z = boss->obj.pos.z + sp60.z;
                    actor->obj.rot.x = D_i5_801BBF00[i].unk_00.rot.x + boss->obj.rot.x;
                    actor->obj.rot.y = D_i5_801BBF00[i].unk_00.rot.y + boss->obj.rot.y;
                    actor->obj.rot.z = D_i5_801BBF00[i].unk_00.rot.z + boss->obj.rot.z;
                    if (i == 0x33) {
                        actor->vel.x = (Rand_ZeroOne() * 10.0f) - 5.0f;
                        actor->vel.y = 30.0f;
                        actor->vel.z = -30.0f;
                        actor->gravity = 0.1f;
                    } else {
                        if (Rand_ZeroOne() < 0.5f) {
                            var_s1 = -1;
                        } else {
                            var_s1 = 1;
                        }
                        actor->fwork[0] = ((Rand_ZeroOne() * 5.0f) + 5.0f) * (f32) var_s1;
                        
                        if (Rand_ZeroOne() < 0.5f) {
                            var_s1 = -1;
                        } else {
                            var_s1 = 1;
                        }
                        actor->fwork[1] = ((Rand_ZeroOne() * 5.0f) + 5.0f) * (f32) var_s1;
                        Matrix_Push(&gCalcMatrix);
                        Matrix_RotateY(gCalcMatrix, Rand_ZeroOne() * 360.0f * 0.017453292f, 0);
                        Matrix_MultVec3f(gCalcMatrix, &D_i5_801B8E44, &sp60);
                        Matrix_Pop(&gCalcMatrix);
                        actor->vel.x = sp60.x;
                        var_s1 = (D_i5_801BBF00[i].unk_00.pos.y > 250.0f) ? 1 : (D_i5_801BBF00[i].unk_00.pos.y == 250.0f) ? 0 : -1;
                        actor->vel.y = ((f32) var_s1 - (Rand_ZeroOne() * 0.5f)) + 0.5f;
                        actor->vel.z = (boss->vel.z * 0.5f) + sp60.z;
                        actor->gravity = 0.1f;
                    }
                }
                D_i5_801BBF00[i].unk_26 = 4;
            }
        }
        boss->unk_044 = 1;
    } else {
        boss->obj.pos.z = gPlayer[0].pos.z;
    }
    // FAKE
    var_s1 = boss->timer_050;
    switch (var_s1) {
        case 0x64:
            actor = func_800A3608(0xBD);
            if (actor != NULL) {
                if (Rand_ZeroOne() < 0.5f) {
                    var_s1 = -1;
                } else {
                    var_s1 = 1;
                }
                actor->fwork[0] = (Rand_ZeroOne() + 1.0f) * (f32) var_s1;
                if (Rand_ZeroOne() < 0.5f) {
                    var_s1 = -1;
                } else {
                    var_s1 = 1;
                }

                actor->fwork[1] = (Rand_ZeroOne() + 1.0f) * (f32) var_s1;
                actor->state = 0x28;
                actor->unk_046 = 0x19;
                actor->unk_048 = 0;
                actor->unk_04A = 6;
                actor->fwork[3] = 0.0f;
                actor->fwork[4] = -200.0f;
                actor->obj.pos.x = gPlayer[0].pos.x;
                actor->obj.pos.y = 500.0f;
                actor->obj.pos.z = gPlayer[0].unk_138 + actor->fwork[4];
                actor->obj.rot.y = ((Rand_ZeroOne() * 5.0f) + 90.0f) - 2.5f;
                actor->obj.rot.z = ((Rand_ZeroOne() * 5.0f) + 180.0f) - 2.5f;
                actor->vel.y = -10.0f;
                actor->gravity = 0.8f;
            }
            break;
        case 0x78:
            actor = func_800A3608(0xBD);
            if (actor != NULL) {
                if (Rand_ZeroOne() < 0.5f) {
                    var_s1 = -1;
                } else {
                    var_s1 = 1;
                }
                actor->fwork[0] = ((Rand_ZeroOne() * 5.0f) + 5.0f) * (f32) var_s1;
                if (Rand_ZeroOne() < 0.5f) {
                    var_s1 = -1;
                } else {
                    var_s1 = 1;
                }
                
                actor->fwork[1] = ((Rand_ZeroOne() * 5.0f) + 5.0f) * (f32) var_s1;
                actor->state = 0x28;
                actor->unk_046 = 2;
                actor->unk_048 = 1;
                actor->unk_04A = 6;
                actor->iwork[1] = (s32) 1;
                actor->fwork[3] = -150.0f;
                actor->fwork[4] = -200.0f;
                actor->fwork[5] = 200.0f;
                actor->obj.pos.x = gPlayer[0].pos.x +  actor->fwork[3];
                actor->obj.pos.y = 500.0f;
                actor->obj.pos.z = gPlayer[0].unk_138 + actor->fwork[4];
                actor->obj.rot.z = 90.0f;
                actor->vel.y = -10.0f;
                actor->gravity = 0.8f;
            }
            break;
        case 0x8C:
            actor = func_800A3608(0xBD);
            if (actor != NULL) {
                if (Rand_ZeroOne() < 0.5f) {
                    var_s1 = -1;
                } else {
                    var_s1 = 1;
                }
                actor->fwork[0] = (Rand_ZeroOne() + 1.0f) * (f32) var_s1;
                if (Rand_ZeroOne() < 0.5f) {
                    var_s1 = -1;
                } else {
                    var_s1 = 1;
                }
                
                actor->fwork[1] = (Rand_ZeroOne() + 1.0f) * (f32) var_s1;
                actor->state = 0x28;
                actor->unk_046 = 2;
                actor->unk_048 = 1;
                actor->unk_04A = 6;
                actor->iwork[1] = 2;
                actor->fwork[3] = 100.0f;
                actor->fwork[4] = -100.0f;
                actor->fwork[5] = 200.0f;
                actor->obj.pos.x = gPlayer[0].pos.x +  actor->fwork[3];
                actor->obj.pos.y = 500.0f;
                actor->obj.pos.z = gPlayer[0].unk_138 + actor->fwork[4];
                actor->obj.rot.z = 90.0f;
                actor->vel.y = -10.0f;
                actor->gravity = 0.8f;
            }
            break;
    }
    if ((boss->timer_050 == 0) && (gPlayer[0].state_1C8 == PLAYERSTATE_1C8_3)) {
        Object_Kill(&boss->obj, boss->sfxPos);
        gPlayer[0].state_1C8 = PLAYERSTATE_1C8_7;
        gPlayer[0].unk_1D0 = 0;
    }
}


#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAA50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAA54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAA78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAABC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAB0C.s")
