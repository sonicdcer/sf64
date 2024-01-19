#include "global.h"
#include "sf_ve1.h"

extern s32 D_i1_8019C0B8;
extern s32 D_i1_8019C0BC;

f32 func_i1_801920F0(f32* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32* arg5) {
    f32 temp_ft4;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_fa1;

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

    var_fa1 = *arg5;

    if (var_fa1 != 0.0f) {
        var_fa1 *= arg2;

        if ((arg4 <= var_fa1) || (temp_ft4 = -arg4, (var_fa1 <= temp_ft4))) {
            if (arg3 < var_fa1) {
                var_fa1 = arg3;
            } else {
                temp_fv1_2 = -arg3;

                if (temp_fv1_2 > var_fa1) {
                    var_fa1 = temp_fv1_2;
                }
            }

            *arg0 += var_fa1;
        } else {
            if (var_fa1 < arg4) {
                var_fa1 = arg4;
                *arg0 += arg4;

                if (arg1 < *arg0) {
                    *arg0 = arg1;
                }
            } else if (temp_ft4 < var_fa1) {
                var_fa1 = temp_ft4;
                *arg0 += temp_ft4;

                if (*arg0 < arg1) {
                    *arg0 = arg1;
                }
            }
        }
    }

    temp_fv1_3 = *arg0;

    if (temp_fv1_3 >= 360.0f) {
        *arg0 = temp_fv1_3 - 360.0f;
    } else if (temp_fv1_3 < 0.0f) {
        *arg0 = temp_fv1_3 + 360.0f;
    }

    return var_fa1;
}

void func_i1_801922DC(Object_4C* this) {
    Boss* boss = gBosses;
    s32 i;

    for (i = 0; i < 4; i++, boss++) {
        if ((boss->obj.status != 0) && (boss->obj.id == OBJ_BOSS_319)) {
            if (boss->obj.pos.z <= this->obj.pos.z) {
                D_i1_8019C0B8 = (s32) this->obj.rot.x + 1;
                this->obj.status = 0;
            }
            break;
        }
    }
}

void func_i1_80192358(Object_4C* this) {
    Boss* boss = gBosses;
    s32 i;

    for (i = 0; i < 4; i++, boss++) {
        if ((boss->obj.status != 0) && (boss->obj.id == 0x13F)) {
            if (boss->obj.pos.z <= this->obj.pos.z) {
                D_i1_8019C0B8 = 0;
                this->obj.status = 0;
            }
            break;
        }
    }
}

void func_i1_801923C0(Object_4C* obj4C) {
    Boss* boss;
    s32 i;

    for (boss = &gBosses[0], i = 0; i < 4; i++, boss++) {
        if (boss->obj.status != 0 && boss->obj.id == OBJ_BOSS_319) {
            if (boss->obj.pos.z <= obj4C->obj.pos.z) {
                D_i1_8019C0BC = (s32)obj4C->obj.rot.x + 1;
                obj4C->obj.status = 0;
            }
            break;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_8019243C.s")

void func_i1_801924A8(Object_80* arg0) {
    switch (arg0->unk_48) {
        case 0:
            if (gPlayer[0].pos.z < arg0->obj.pos.z) {
                D_80177AB0 = 0;
                D_80177A98 = 0;

                arg0->unk_48++;
            }

        case 1:
            return;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_8019250C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192518.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192AA4.s")

void func_i1_80192CB0(Actor* actor) {
    actor->iwork[0] = actor->obj.rot.x;
    actor->obj.rot.x = 0.0f;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192CD4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192E2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192EA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80192EB0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801933B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801933DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801934D0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80193540.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801935CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801937F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80193D64.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80194398.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80198310.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80198414.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_80198594.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801985E4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_8019864C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/func_i1_801988B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/overlays/ovl_i1/sf_ve1/D_i1_8019B2B0.s")
