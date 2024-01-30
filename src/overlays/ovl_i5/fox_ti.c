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
        Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7520, actor->fwork);
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
    Matrix_MultVec3f(gCalcMatrix, &D_i5_801B7544, actor->fwork);
    actor->fwork[0] += actor->obj.pos.x;
    actor->fwork[1] += actor->obj.pos.y;
    actor->fwork[2] += actor->obj.pos.z;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80189CC8.s")

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
            Matrix_MultVec3f(gCalcMatrix, &D_i5_801B75C4, &actor->fwork[3]);
            break;
        case 4:
            Matrix_MultVec3f(gCalcMatrix, &D_i5_801B75C4, &actor->fwork[6]);
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018BE84.s")

typedef struct {
    PosRot unk_00;
    u16 unk_18;
} UnkStruct_i5_801BD738;
extern s32 D_i5_801B750C[];
extern UnkStruct_i5_801BD738 D_i5_801BD738[][9];
extern f32 D_i5_801BDB20[][151];

void func_i5_8018BFB0(Actor* arg0) {
    UnkStruct_i5_801BD738* temp_a1;
    s32 temp_a2;
    s32 i;


    for (i = 0; i < 3; i++) {
        if (D_i5_801B750C[i] == 0) {
            D_i5_801B750C[i] = 1;
            arg0->iwork[0] = i;
            break;
        }
    }
    if (i == 3) {
        Object_Kill(&arg0->obj, arg0->sfxPos);
        return;
    }
    
    temp_a2 = arg0->iwork[0];
    arg0->info.hitbox = D_i5_801BDB20[temp_a2];
    arg0->health = 80;
    arg0->iwork[8] = 1;
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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018C3D8.s")
void func_i5_8018C3D8(s32, Vec3f*, void*);

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

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E2D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E3B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E3CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E54C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E5B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E5E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018E5F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018EF14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018EFF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018F038.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018F0D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018F134.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018F4D8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018F8B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018FA48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8018FC70.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8019002C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_801903A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_8019081C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80190A08.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80191AE8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80192118.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80193B30.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80193DF0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_80197A94.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_801982A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/func_i5_801990DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAA50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAA54.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAA78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAABC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i5/fox_ti/D_i5_801BAB0C.s")
