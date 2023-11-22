#include "global.h"

char *func_80099980(char *buf, s32 fill, s32 len) {
    s32 i;
    s8* ptr = buf;

    for(i = len; i > 0 ; i--) {
        *ptr++ = fill;
    }

    return buf;
}

s32 func_800999D8(char *fmt, ...) {
    va_list args;

    va_start(args, fmt);
    func_80099980(D_801619A0, 0, 100);
    func_80002E80(D_801619A0, fmt, args);
    va_end(args);

    return 0;
}

void func_80099A2C(void* arg0, s32 arg1, s32 arg2, u8 arg3);

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_80099A2C.s")

void func_80099E28(u16 *arg0, u16 *arg1, u8 arg2) {    
    s32 var_v1;
    s32 var_s3;
    u8* var_s0_2;
    u8 *var_s4_2;
    s32 temp_ft3;
    s32 temp;
    s32 temp2;

    arg0 = SEGMENTED_TO_VIRTUAL(arg0);
    arg1 = SEGMENTED_TO_VIRTUAL(arg1);
    switch (arg2) {
        case 2:
            for(var_s3 = 0; var_s3 < 0x400; var_s3 += 0x20) {
                temp_ft3 = 3.0f * __sinf((s32)(((var_s3 / 32) + (D_80177DB0 / 4)) % 0x20U) * (M_PI / 16.0f));
                for(var_v1 = 0; var_v1 < 0x20; var_v1++) {
                    arg0[var_s3 + (temp_ft3 + var_v1) % 0x20U] = arg1[var_s3 + var_v1];
                }
            }
            break;
        case 3:
            for(var_s3 = 0; var_s3 < 0x580; var_s3 += 0x40) {
                temp_ft3 = __sinf((s32)(((var_s3 / 64) + (D_80177DB0 / 4)) % 0x20U) * (M_PI / 4.0f));
                for(var_v1 = 0; var_v1 < 0x40; var_v1++) {
                    arg0[var_s3 + (temp_ft3 + var_v1) % 0x40U] = arg1[var_s3 + var_v1];
                }
            }
            break;
        case 1:
            for(var_s3 = 0; var_s3 < 0x100; var_s3 += 0x10) {
                temp_ft3 = 2.0f * __sinf((s32)(((var_s3 / 16) + (D_80177DB0 / 2)) % 0x10U)* (M_PI / 8.0f));
                for(var_v1 = 0; var_v1 < 0x10; var_v1++) {
                    arg0[var_s3 + (temp_ft3 + var_v1) % 0x10U] = arg1[var_s3 + var_v1];
                }
            }
            break;
        case 0:
            for(var_s3 = 0; var_s3 < 0x400; var_s3 += 0x20) {
                temp_ft3 = 2.0f * __sinf((s32)(((var_s3 / 32) + (D_80177DB0 / 2)) % 0x20U) * (M_PI / 16.0f));
                for(var_v1 = 0; var_v1 < 0x20; var_v1++) {
                    arg0[var_s3 + (temp_ft3 + var_v1) % 0x20U] = arg1[var_s3 + var_v1];
                }
            }
            break;
        case 5:
            var_s0_2 = arg0;
            var_s4_2 = arg1;
            for(var_s3 = 0; var_s3 < 0x1000; var_s3 += 0x40) {
                temp_ft3 = 4.0f * __sinf((s32)(((var_s3 / 64) + (D_80177DB0 / 4)) % 0x20U) * (M_PI / 16.0f));
                for(var_v1 = 0; var_v1 < 0x40; var_v1++) {
                    var_s0_2[var_s3 + (temp_ft3 + var_v1) % 0x40U] = var_s4_2[var_s3 + var_v1];
                }
            }
    }
}

s32 func_8009A400(void* arg0, void** arg1) {
    s32 i = 1;
    
    for(i = 1; *arg1 != 0; i++, arg1++) {
        if(*arg1 == arg0){
            return i;
        }
    }
    return 0;
}

void func_8009A440(s32 mode, Limb * limb, Limb* *skeleton, Vec3f* jointTable, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* data) {
    s32 override;
    s32 limbIndex;
    Gfx *dList;
    Vec3f trans;
    Vec3f rot;
    Vec3f pos;
    Vec3f origin = D_800D25D0;
    
    Matrix_Push(&D_8013BBC8);
    
    limbIndex = func_8009A400(limb, skeleton);
    limb = SEGMENTED_TO_VIRTUAL(limb);
    rot = jointTable[limbIndex];
    trans.x = limb->trans.x;
    trans.y = limb->trans.y;
    trans.z = limb->trans.z;
    dList = limb->dList;
    Matrix_Push(&D_8013B3C0);

    if (overrideLimbDraw == NULL) {
        override = false;
    } else {
        override = overrideLimbDraw(limbIndex - 1, &dList, &trans, &rot, data);
    }
    if (!override) {
        Matrix_Translate(D_8013BBC8, trans.x, trans.y, trans.z, 1);
        Matrix_RotateZ(D_8013BBC8, rot.z * 0.017453292f, 1);
        Matrix_RotateY(D_8013BBC8, rot.y * 0.017453292f, 1);
        Matrix_RotateX(D_8013BBC8, rot.x * 0.017453292f, 1);
        if (dList != NULL) {
            if (mode >= 2) {
                Matrix_MultVec3f(D_8013BBC8, &origin, &pos);
                if (mode != 5) {
                    func_8005F670(&pos);
                }
            }
            Matrix_Mult(D_8013B3C0, D_8013BBC8, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, dList);

        }
    }

    if (postLimbDraw != NULL) {
        postLimbDraw(limbIndex - 1, &rot, data);
    }
    Matrix_Pop(&D_8013B3C0);
    if (limb->child != NULL) {
        func_8009A440(mode, limb->child, skeleton, jointTable, overrideLimbDraw, postLimbDraw, data);
    }
    Matrix_Pop(&D_8013BBC8);
    if (limb->sibling != NULL) {
        func_8009A440(mode, limb->sibling, skeleton, jointTable, overrideLimbDraw, postLimbDraw, data);
    }
}

void func_8009A72C(s32 mode, Limb** skeletonSegment, Vec3f* jointTable, OverrideLimbDraw overrideLimbDraw, PostLimbDraw postLimbDraw, void* data, Matrix* transform) {
    s32 override;
    Limb **skeleton;
    Limb *rootLimb;
    s32 rootIndex;
    Gfx *dList;
    Vec3f baseTrans;
    Vec3f baseRot;

    Matrix_Push(&D_8013BBC8);
    Matrix_Copy(D_8013BBC8, transform);
    skeleton = SEGMENTED_TO_VIRTUAL(skeletonSegment);
    rootLimb = SEGMENTED_TO_VIRTUAL(skeleton[0]);
    rootIndex = func_8009A400(skeleton[0], skeleton);
    baseRot = jointTable[rootIndex];
    if (mode & 1) {
        baseTrans.x = rootLimb->trans.x;
        baseTrans.y = rootLimb->trans.y;
        baseTrans.z = rootLimb->trans.z;
    } else {
        baseTrans.x = jointTable[0].x;
        baseTrans.y = jointTable[0].y;
        baseTrans.z = jointTable[0].z;
    }
    dList = rootLimb->dList;
    Matrix_Push(&D_8013B3C0);
    if (overrideLimbDraw == NULL) {
        override = 0;
    } else {
        override = overrideLimbDraw(rootIndex - 1, &dList, &baseTrans, &baseRot, data);
    }
    if (override == 0) {
        Matrix_Translate(D_8013BBC8, baseTrans.x, baseTrans.y, baseTrans.z, 1);
        Matrix_RotateZ(D_8013BBC8, baseRot.z * 0.017453292f, 1);
        Matrix_RotateY(D_8013BBC8, baseRot.y * 0.017453292f, 1);
        Matrix_RotateX(D_8013BBC8, baseRot.x * 0.017453292f, 1);
        if (dList != NULL) {
            Matrix_Mult(D_8013B3C0, D_8013BBC8, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, dList);
        }
    }
    if (postLimbDraw != NULL) {
        postLimbDraw(rootIndex - 1, &baseRot, data);
    }
    Matrix_Pop(&D_8013B3C0);
    if (rootLimb->child != NULL) {
        func_8009A440(mode, rootLimb->child, skeleton, jointTable, overrideLimbDraw, postLimbDraw, data);
    }
    Matrix_Pop(&D_8013BBC8);
    if (mode >= 2) {
        Matrix_Mult(D_8013B3C0, D_8013BBC8, 1);
    }
}

s16 func_8009AA20(AnimationHeader *animationSegmemt, s32 frame, Vec3f *frameTable) {
    AnimationHeader* animation = SEGMENTED_TO_VIRTUAL(animationSegmemt);
    u16 var4 = animation->limbCount;
    JointKey* key = SEGMENTED_TO_VIRTUAL(animation->jointKey);
    u16* frameData = SEGMENTED_TO_VIRTUAL(animation->frameData);
    s32 i;
    s32 temp;

    temp = (frame < key->xLen) ? frameData[key->x + frame] : frameData[key->x];
    frameTable->x = (s16) temp;
    temp = (frame < key->yLen) ? frameData[key->y + frame] : frameData[key->y];
    frameTable->y = (s16) temp;
    temp = (frame < key->zLen) ? frameData[key->z + frame] : frameData[key->z];
    frameTable->z = (s16) temp;

    frameTable++, key++;
    for (i = 1; i <= var4; i++, key++, frameTable++) {
        temp = (frame < key->xLen) ? frameData[key->x + frame] : frameData[key->x];
        frameTable->x = temp * 360.0f / 65536.0f;
        temp = (frame < key->yLen) ? frameData[key->y + frame] : frameData[key->y];
        frameTable->y = temp * 360.0f / 65536.0f;
        temp = (frame < key->zLen) ? frameData[key->z + frame] : frameData[key->z];
        frameTable->z = temp * 360.0f / 65536.0f;
    }
    return var4 + 1;
}

s16 func_8009ACDC(s16 *arg0) {
    s16* temp = SEGMENTED_TO_VIRTUAL(arg0);

    return *temp;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009AD18.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009B74C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009B784.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009BC2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009BD38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009BEEC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009C124.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009C320.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009C674.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009C9C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009CD3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009D0BC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009D418.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009D6CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009D994.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009DC4C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009DF14.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009E1E8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009E4B0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009E784.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009EA38.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009ED04.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009EFDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009F2C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009F574.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009F6CC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009F768.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009F7B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009FC0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009FEA0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A0094.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A06F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A100C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A1200.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A13EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A1540.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A1558.s")
