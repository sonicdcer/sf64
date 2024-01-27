#include "global.h"
#include "sf_ve1.h"

//! TODO: IMPORT BSS

extern s32 D_i1_8019C0B8;
extern s32 D_i1_8019C0BC;
extern s32 D_i1_8019C0C0;
extern Vec3f D_i1_80199FFC;
extern Limb* D_900D164;
extern Limb* D_901C0F4;

const char D_i1_8019B2B0[] = "--アタックオフ!!\n";
const char D_i1_8019B2C4[] = "--レベルアップ!!\n";
const char D_i1_8019B2D8[] = "wk_f00=<%10.3f>\n";

f32 func_i1_801920F0(f32* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32* arg5) {
    f32 temp;

    *arg5 = arg1 - *arg0;

    if (*arg5 > 180.0f) {
        do {
            *arg5 -= 360.0f;
        } while (*arg5 > 180.0f);
    } else if (*arg5 < -180.0f) {
        do {
            *arg5 += 360.0f;
        } while (*arg5 < -180.0f);
    }

    temp = *arg5;

    if (temp != 0.0f) {
        temp *= arg2;

        if ((arg4 <= temp) || ((temp <= -arg4))) {
            if (arg3 < temp) {
                temp = arg3;
            } else {

                if (-arg3 > temp) {
                    temp = -arg3;
                }
            }
            *arg0 += temp;
        } else {
            if (temp < arg4) {
                temp = arg4;
                *arg0 += arg4;

                if (arg1 < *arg0) {
                    *arg0 = arg1;
                }
            } else if (-arg4 < temp) {
                temp = -arg4;
                *arg0 += -arg4;

                if (*arg0 < arg1) {
                    *arg0 = arg1;
                }
            }
        }
    }

    if (*arg0 >= 360.0f) {
        *arg0 = *arg0 - 360.0f;
    } else if (*arg0 < 0.0f) {
        *arg0 = *arg0 + 360.0f;
    }

    return temp;
}

void func_i1_801922DC(Object_4C* this) {
    Boss* boss = &gBosses[0];
    s32 i;

    for (i = 0; i < 4; i++, boss++) {
        if ((boss->obj.status != OBJ_FREE) && (boss->obj.id == OBJ_BOSS_319)) {
            if (boss->obj.pos.z <= this->obj.pos.z) {
                D_i1_8019C0B8 = (s32) this->obj.rot.x + 1;
                this->obj.status = OBJ_FREE;
            }
            break;
        }
    }
}

void func_i1_80192358(Object_4C* this) {
    Boss* boss = &gBosses[0];
    s32 i;

    for (i = 0; i < 4; i++, boss++) {
        if ((boss->obj.status != OBJ_FREE) && (boss->obj.id == 0x13F)) {
            if (boss->obj.pos.z <= this->obj.pos.z) {
                D_i1_8019C0B8 = 0;
                this->obj.status = OBJ_FREE;
            }
            break;
        }
    }
}

void func_i1_801923C0(Object_4C* obj4C) {
    Boss* boss;
    s32 i;

    for (boss = &gBosses[0], i = 0; i < 4; i++, boss++) {
        if (boss->obj.status != OBJ_FREE && boss->obj.id == OBJ_BOSS_319) {
            if (boss->obj.pos.z <= obj4C->obj.pos.z) {
                D_i1_8019C0BC = (s32) obj4C->obj.rot.x + 1;
                obj4C->obj.status = OBJ_FREE;
            }
            break;
        }
    }
}

void func_i1_8019243C(Object_4C* obj4C) {
    Boss* boss;
    s32 i;

    for (boss = &gBosses[0], i = 0; i < 4; i++, boss++) {
        if (boss->obj.status != OBJ_FREE && boss->obj.id == OBJ_BOSS_319) {
            if (boss->obj.pos.z <= obj4C->obj.pos.z) {
                D_i1_8019C0C0 = 1;
                obj4C->obj.status = OBJ_FREE;
            }
            break;
        }
    }
}

void func_i1_801924A8(Object_80* obj80) {
    switch (obj80->state) {
        case 0:
            if (gPlayer[0].pos.z < obj80->obj.pos.z) {
                D_80177AB0 = 0;
                D_80177A98 = 0;

                obj80->state++;
            }

        case 1:
            return;
    }
}

void func_i1_8019250C(Actor* actor) {
}

void func_i1_80192518(Actor* actor) {
    Object_80* obj80;
    f32 temp_fv0;
    f32 var_ft5;
    s32 i;
    Vec3f src;
    Vec3f dest;
    f32 temp_fv1_2;
    Effect* effect;
    f32 var_ft4;

    if (actor->unk_0D0 == 1) {
        actor->unk_0D0 = 0;
        func_8007A6F0(&actor->obj.pos, 0x29121007);
    }

    if ((actor->state == 1) || (actor->state == 2) || (actor->state == 3)) {
        Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * M_DTOR, 0);
        Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * M_DTOR, 1);
        Matrix_RotateZ(gCalcMatrix, actor->obj.rot.z * M_DTOR, 1);
    }

    switch (actor->state) {
        case 0:
        case 4:
            break;

        case 1:
            var_ft5 = 450.0f;
            var_ft4 = 0.0f;

            obj80 = &gObjects80[0];

            for (i = 0; i < 50; i++, obj80++) {
                if ((obj80->obj.id == 128) || (obj80->obj.id == 129) || (obj80->obj.id == 130)) {
                    temp_fv0 = actor->obj.pos.z + 1100.0f;
                    if ((temp_fv0 - obj80->obj.pos.z) < 2200.0f) {
                        if (obj80->obj.pos.z < temp_fv0) {
                            switch (obj80->obj.id) {
                                case 128:
                                case 130:
                                    break;

                                case 129:
                                    var_ft5 = 600.0f;
                                    break;
                            }

                            var_ft4 = obj80->obj.pos.x;
                            break;
                        }
                    }
                }
            }

            temp_fv1_2 = actor->obj.pos.x;
            actor->fwork[0] = 0.0f;

            if ((temp_fv1_2 + var_ft4) < 0.0f) {
                actor->obj.pos.x = var_ft4 - var_ft5;
                actor->fwork[1] = 896.0f - (actor->obj.pos.x - temp_fv1_2);
            } else {
                actor->obj.pos.x = var_ft4 + var_ft5;
                actor->fwork[1] = actor->obj.pos.x - temp_fv1_2 + 896.0f;
            }

            actor->timer_0BC = actor->iwork[2];
            Audio_PlaySfx(0x1903205BU, actor->sfxPos, 0U, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
            actor->state = 2;

        case 2:
            if (actor->timer_0BC == 0) {
                src.x = temp_fv1_2 = Math_SmoothStepToF(actor->fwork, actor->fwork[1], 0.7f, 80.0f, 0.01f);
                src.y = 0.0f;
                src.z = 0.0f;

                Matrix_MultVec3f(gCalcMatrix, &src, &dest);

                actor->obj.pos.x += dest.x;
                actor->obj.pos.y += dest.y;
                actor->obj.pos.z += dest.z;

                effect = func_8007783C(OBJ_EFFECT_394);

                if (effect != NULL) {
                    effect->unk_7A = 11;
                    effect->unk_78 = effect->unk_7A;
                    effect->obj.status = 2;

                    effect->obj.pos.x = RAND_CENTEREDFLOAT(3.0f) + actor->obj.pos.x;
                    effect->obj.pos.y = RAND_CENTEREDFLOAT(3.0f) + actor->obj.pos.y;
                    effect->obj.pos.z = RAND_CENTEREDFLOAT(3.0f) + actor->obj.pos.z + 80.0f;

                    effect->scale2 = 8.0f;

                    effect->obj.rot.z = Rand_ZeroOne() * 360.0f;

                    effect->vel.x = RAND_CENTEREDFLOAT(5.0f);
                    effect->vel.y = RAND_CENTEREDFLOAT(3.0f) + 10.0f;

                    effect->unk_44 = 100;
                    effect->unk_46 = -5;
                    effect->unk_60.z = 3;

                    if (Rand_ZeroOne() < 0.5f) {
                        effect->unk_60.z = -effect->unk_60.z;
                    }

                    if (actor->iwork[0] & 1) {
                        effect->vel.y = -effect->vel.y;
                    }
                }

                if (fabs(temp_fv1_2) <= 5.0) {
                    actor->timer_0BE = 30;
                    actor->state++;
                    actor->fwork[2] = actor->obj.pos.x;
                    actor->fwork[3] = actor->obj.pos.y;
                    actor->fwork[4] = actor->obj.pos.z;
                }
            }
            break;

        case 3:
            src.x = __sinf(((((30 - actor->timer_0BE) % 10) / 10.0f) * M_PI) * 2) * 5.0f;
            src.y = 0.0f;
            src.z = 0.0f;

            Matrix_MultVec3f(gCalcMatrix, &src, &dest);

            actor->obj.pos.x = actor->fwork[2] + dest.x;
            actor->obj.pos.y = actor->fwork[3] + dest.y;
            actor->obj.pos.z = actor->fwork[4] + dest.z;

            if (actor->timer_0BE == 0) {
                actor->state++;
            }
            break;
    }

    actor->iwork[0]++;
}

#if defined(IMPORT_BSS)
void func_i1_80192AA4(Actor* actor) {
    static Vec3f temp;
    Vec3f src;
    Vec3f dest;
    f32 var_fs0;

    Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * 0.017453292f, 0U);
    Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * 0.017453292f, 1U);

    if ((actor->obj.rot.y <= 30.0f) || (actor->obj.rot.y >= 330.0f)) {
        temp.x = D_i1_80199FFC.x;
        for (temp.x = -80.0f; temp.x <= 80.0f; temp.x += 40.0f) {
            Matrix_MultVec3fNoTranslate(gCalcMatrix, &D_i1_80199FFC, &dest);
        }
    } else {
        src.z = 0.0f;
        src.x = -80.0f;
        if (actor->obj.rot.y > 90.0f) {
            src.x = 80.0f;
        }
        if (0.0f <= 450.0f) {
            for (var_fs0 = 0.0f; var_fs0 <= 450.0f; var_fs0 += 50.0f) {
                Matrix_RotateY(gCalcMatrix, actor->obj.rot.y * 0.017453292f, 0U);
                Matrix_RotateX(gCalcMatrix, actor->obj.rot.x * 0.017453292f, 1U);
                src.y = var_fs0;
                Matrix_MultVec3fNoTranslate(gCalcMatrix, &src, &dest);
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192AA4.s")
#endif

void func_i1_80192CB0(Actor* actor) {
    actor->iwork[0] = actor->obj.rot.x;
    actor->obj.rot.x = 0.0f;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192CD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192E2C.s")

void func_i1_80192EA4(Actor* actor) {
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192EB0.s")

void func_i1_801933B4(Actor* arg0) {
    arg0->scale = -1.0f;
    arg0->obj.pos.y += 488.0f;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801933DC.s")

void func_i1_801934D0(Actor* actor) {
    Matrix_Translate(gGfxMatrix, 0.0f, -488.0f, 0.0f, 1U);
    Animation_DrawSkeleton(0, &D_900D164, actor->vwork, NULL, NULL, actor, &gIdentityMatrix);
}

void func_i1_80193540(Object_80* arg0) {

    arg0->obj.pos.z;
    if (((gPlayer->unk_138 - arg0->obj.pos.z) <= 3500.0f) && !(gGameFrameCount & 3)) {
        func_8007C120(arg0->obj.pos.x, arg0->obj.pos.y, arg0->obj.pos.z, 0.0f, 0.0f, 0.0f, 0.2f, 0xA);
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801935CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801937F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80193D64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80194398.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80198310.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80198414.s")

void func_i1_80198594(Boss* boss) {
    boss->obj.pos.z = gPlayer->pos.z;
    if ((boss->timer_052 <= 0) && (gPlayer->state_1C8 == PLAYERSTATE_1C8_3)) {
        func_i1_80198414();
    }
}

void func_i1_801985E4(Boss* boss) {
    if (boss->swork[26] == 0) {
        Animation_DrawSkeleton(0, &D_901C0F4, boss->vwork, func_i1_801937F4, func_i1_80193D64, boss, &gIdentityMatrix);
    }
    boss->state = boss->swork[9];
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_8019864C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801988B8.s")
