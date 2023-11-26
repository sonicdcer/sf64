#include "global.h"

char* func_80099980(char* buf, s32 fill, s32 len) {
    s32 i;
    char* ptr = buf;

    for (i = len; i > 0; i--) {
        *ptr++ = fill;
    }

    return buf;
}

s32 func_800999D8(const char* fmt, ...) {
    va_list args;

    va_start(args, fmt);
    func_80099980(D_801619A0, 0, 100);
    Lib_vsPrintf(D_801619A0, fmt, args);
    va_end(args);

    return 0;
}

void func_80099A2C(void* texture, s32 width, s32 height, u8 mode) {
    u16* temp_t0 = SEGMENTED_TO_VIRTUAL(texture);
    u16 temp_a3;
    s32 var_a0;
    s32 var_t4;

    switch (mode) {
        case 0:
            for (var_a0 = 0; var_a0 < width; var_a0++) {
                temp_a3 = temp_t0[var_a0];
                for (var_t4 = 1; var_t4 < height; var_t4++) {
                    temp_t0[(var_t4 - 1) * width + var_a0] = temp_t0[(var_t4) *width + var_a0];
                }
                temp_t0[(height - 1) * width + var_a0] = temp_a3;
            }
            break;
        case 1:
            for (var_a0 = 0; var_a0 < width; var_a0++) {
                temp_a3 = temp_t0[(height - 1) * width + var_a0];
                for (var_t4 = height - 2; var_t4 >= 0; var_t4--) {
                    temp_t0[(var_t4 + 1) * width + var_a0] = temp_t0[(var_t4) *width + var_a0];
                }
                temp_t0[var_a0] = temp_a3;
            }
            break;
        case 2:
            for (var_t4 = 0; var_t4 < height; var_t4++) {
                temp_a3 = temp_t0[var_t4 * width + width - 1];
                for (var_a0 = width - 2; var_a0 >= 0; var_a0--) {
                    temp_t0[var_t4 * width + var_a0 + 1] = temp_t0[var_t4 * width + var_a0];
                }
                temp_t0[var_t4 * width] = temp_a3;
            }
            break;
        case 3:
            for (var_t4 = 0; var_t4 < height; var_t4++) {
                temp_a3 = temp_t0[var_t4 * width];
                for (var_a0 = 1; var_a0 < width; var_a0++) {
                    temp_t0[var_t4 * width + var_a0 - 1] = temp_t0[var_t4 * width + var_a0];
                }
                temp_t0[var_t4 * width + width - 1] = temp_a3;
            }
            break;
    }
}

void func_80099E28(void* dst, void* src, u8 mode) {
    s32 var_v1;
    s32 var_s3;
    u8* var_s0_2;
    u8* var_s4_2;
    s32 temp_ft3;

    dst = SEGMENTED_TO_VIRTUAL(dst);
    src = SEGMENTED_TO_VIRTUAL(src);
    switch (mode) {
        case 2:
            for (var_s3 = 0; var_s3 < 0x400; var_s3 += 0x20) {
                temp_ft3 = 3.0f * __sinf((s32) (((var_s3 / 32) + (D_80177DB0 / 4)) % 0x20U) * (M_PI / 16.0f));
                for (var_v1 = 0; var_v1 < 0x20; var_v1++) {
                    ((u16*) dst)[var_s3 + (temp_ft3 + var_v1) % 0x20U] = ((u16*) src)[var_s3 + var_v1];
                }
            }
            break;
        case 3:
            for (var_s3 = 0; var_s3 < 0x580; var_s3 += 0x40) {
                temp_ft3 = __sinf((s32) (((var_s3 / 64) + (D_80177DB0 / 4)) % 0x20U) * (M_PI / 4.0f));
                for (var_v1 = 0; var_v1 < 0x40; var_v1++) {
                    ((u16*) dst)[var_s3 + (temp_ft3 + var_v1) % 0x40U] = ((u16*) src)[var_s3 + var_v1];
                }
            }
            break;
        case 1:
            for (var_s3 = 0; var_s3 < 0x100; var_s3 += 0x10) {
                temp_ft3 = 2.0f * __sinf((s32) (((var_s3 / 16) + (D_80177DB0 / 2)) % 0x10U) * (M_PI / 8.0f));
                for (var_v1 = 0; var_v1 < 0x10; var_v1++) {
                    ((u16*) dst)[var_s3 + (temp_ft3 + var_v1) % 0x10U] = ((u16*) src)[var_s3 + var_v1];
                }
            }
            break;
        case 0:
            for (var_s3 = 0; var_s3 < 0x400; var_s3 += 0x20) {
                temp_ft3 = 2.0f * __sinf((s32) (((var_s3 / 32) + (D_80177DB0 / 2)) % 0x20U) * (M_PI / 16.0f));
                for (var_v1 = 0; var_v1 < 0x20; var_v1++) {
                    ((u16*) dst)[var_s3 + (temp_ft3 + var_v1) % 0x20U] = ((u16*) src)[var_s3 + var_v1];
                }
            }
            break;
        case 5:
            var_s0_2 = (u8*) dst;
            var_s4_2 = (u8*) src;
            for (var_s3 = 0; var_s3 < 0x1000; var_s3 += 0x40) {
                temp_ft3 = 4.0f * __sinf((s32) (((var_s3 / 64) + (D_80177DB0 / 4)) % 0x20U) * (M_PI / 16.0f));
                for (var_v1 = 0; var_v1 < 0x40; var_v1++) {
                    var_s0_2[var_s3 + (temp_ft3 + var_v1) % 0x40U] = var_s4_2[var_s3 + var_v1];
                }
            }
    }
}

s32 func_8009A400(Limb* limb, Limb** skeleton) {
    s32 i = 1;

    for (i = 1; *skeleton != 0; i++, skeleton++) {
        if (*skeleton == limb) {
            return i;
        }
    }
    return 0;
}

void func_8009A440(s32 mode, Limb* limb, Limb** skeleton, Vec3f* jointTable, OverrideLimbDraw overrideLimbDraw,
                   PostLimbDraw postLimbDraw, void* data) {
    s32 override;
    s32 limbIndex;
    Gfx* dList;
    Vec3f trans;
    Vec3f rot;
    Vec3f pos;
    Vec3f origin = { 0.0f, 0.0f, 0.0f };

    Matrix_Push(&gCalcMatrix);

    limbIndex = func_8009A400(limb, skeleton);
    limb = SEGMENTED_TO_VIRTUAL(limb);
    rot = jointTable[limbIndex];
    trans.x = limb->trans.x;
    trans.y = limb->trans.y;
    trans.z = limb->trans.z;
    dList = limb->dList;
    Matrix_Push(&gGfxMatrix);

    if (overrideLimbDraw == NULL) {
        override = false;
    } else {
        override = overrideLimbDraw(limbIndex - 1, &dList, &trans, &rot, data);
    }
    if (!override) {
        Matrix_Translate(gCalcMatrix, trans.x, trans.y, trans.z, 1);
        Matrix_RotateZ(gCalcMatrix, rot.z * 0.017453292f, 1);
        Matrix_RotateY(gCalcMatrix, rot.y * 0.017453292f, 1);
        Matrix_RotateX(gCalcMatrix, rot.x * 0.017453292f, 1);
        if (dList != NULL) {
            if (mode >= 2) {
                Matrix_MultVec3f(gCalcMatrix, &origin, &pos);
                if (mode != 5) {
                    func_8005F670(&pos);
                }
            }
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, dList);
        }
    }

    if (postLimbDraw != NULL) {
        postLimbDraw(limbIndex - 1, &rot, data);
    }
    Matrix_Pop(&gGfxMatrix);
    if (limb->child != NULL) {
        func_8009A440(mode, limb->child, skeleton, jointTable, overrideLimbDraw, postLimbDraw, data);
    }
    Matrix_Pop(&gCalcMatrix);
    if (limb->sibling != NULL) {
        func_8009A440(mode, limb->sibling, skeleton, jointTable, overrideLimbDraw, postLimbDraw, data);
    }
}

void func_8009A72C(s32 mode, Limb** skeletonSegment, Vec3f* jointTable, OverrideLimbDraw overrideLimbDraw,
                   PostLimbDraw postLimbDraw, void* data, Matrix* transform) {
    s32 override;
    Limb** skeleton;
    Limb* rootLimb;
    s32 rootIndex;
    Gfx* dList;
    Vec3f baseTrans;
    Vec3f baseRot;

    Matrix_Push(&gCalcMatrix);
    Matrix_Copy(gCalcMatrix, transform);
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
    Matrix_Push(&gGfxMatrix);
    if (overrideLimbDraw == NULL) {
        override = 0;
    } else {
        override = overrideLimbDraw(rootIndex - 1, &dList, &baseTrans, &baseRot, data);
    }
    if (override == 0) {
        Matrix_Translate(gCalcMatrix, baseTrans.x, baseTrans.y, baseTrans.z, 1);
        Matrix_RotateZ(gCalcMatrix, baseRot.z * 0.017453292f, 1);
        Matrix_RotateY(gCalcMatrix, baseRot.y * 0.017453292f, 1);
        Matrix_RotateX(gCalcMatrix, baseRot.x * 0.017453292f, 1);
        if (dList != NULL) {
            Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
            Matrix_SetGfxMtx(&gMasterDisp);
            gSPDisplayList(gMasterDisp++, dList);
        }
    }
    if (postLimbDraw != NULL) {
        postLimbDraw(rootIndex - 1, &baseRot, data);
    }
    Matrix_Pop(&gGfxMatrix);
    if (rootLimb->child != NULL) {
        func_8009A440(mode, rootLimb->child, skeleton, jointTable, overrideLimbDraw, postLimbDraw, data);
    }
    Matrix_Pop(&gCalcMatrix);
    if (mode >= 2) {
        Matrix_Mult(gGfxMatrix, gCalcMatrix, 1);
    }
}

s16 func_8009AA20(AnimationHeader* animationSegmemt, s32 frame, Vec3f* frameTable) {
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

s16 func_8009ACDC(AnimationHeader* animationSegment) {
    AnimationHeader* animation = SEGMENTED_TO_VIRTUAL(animationSegment);

    return animation->frameCount;
}

void func_8009AD18(Gfx* dList, s32 len, Vec3f* min, Vec3f* max, s32* vtxFound, s32* vtxCount, Vtx** vtxList) {
    s64* sp44 = SEGMENTED_TO_VIRTUAL(dList);
    s64* var_s0;
    u32 temp_v1;

    for (var_s0 = sp44; (s32) (*var_s0 >> 0x38) != G_ENDDL && var_s0 - sp44 < len; var_s0++) {
        temp_v1 = (*var_s0 >> 0x38);
        if (temp_v1 != G_TRI1) {
            if (temp_v1 != G_VTX) {
                if (temp_v1 == G_DL) {
                    func_8009AD18(*var_s0 & 0xFFFFFFFF, (*var_s0 >> 0x20) & 0xFFFF, min, max, vtxFound, vtxCount,
                                  vtxList);
                }
            } else {
                *vtxList = SEGMENTED_TO_VIRTUAL(*var_s0 & 0xFFFFFFFF);
                *vtxCount = (*var_s0 >> 0x30) & 0xF;
            }
        } else {
            if (!*vtxFound) {
                *vtxFound = 1;
                max->x = min->x = (*vtxList)[*var_s0 & 0xFF].v.ob[0];
                max->y = min->y = (*vtxList)[*var_s0 & 0xFF].v.ob[1];
                max->z = min->z = (*vtxList)[*var_s0 & 0xFF].v.ob[2];
            } else {
                min->x = MIN(min->x, (*vtxList)[*var_s0 & 0xFF].v.ob[0]);
                min->y = MIN(min->y, (*vtxList)[*var_s0 & 0xFF].v.ob[1]);
                min->z = MIN(min->z, (*vtxList)[*var_s0 & 0xFF].v.ob[2]);
                max->x = MAX(max->x, (*vtxList)[*var_s0 & 0xFF].v.ob[0]);
                max->y = MAX(max->y, (*vtxList)[*var_s0 & 0xFF].v.ob[1]);
                max->z = MAX(max->z, (*vtxList)[*var_s0 & 0xFF].v.ob[2]);
            }
            min->x = MIN(min->x, (*vtxList)[(*var_s0 >> 8) & 0xFF].v.ob[0]);
            min->y = MIN(min->y, (*vtxList)[(*var_s0 >> 8) & 0xFF].v.ob[1]);
            min->z = MIN(min->z, (*vtxList)[(*var_s0 >> 8) & 0xFF].v.ob[2]);
            max->x = MAX(max->x, (*vtxList)[(*var_s0 >> 8) & 0xFF].v.ob[0]);
            max->y = MAX(max->y, (*vtxList)[(*var_s0 >> 8) & 0xFF].v.ob[1]);
            max->z = MAX(max->z, (*vtxList)[(*var_s0 >> 8) & 0xFF].v.ob[2]);
            min->x = MIN(min->x, (*vtxList)[(*var_s0 >> 0x10) & 0xFF].v.ob[0]);
            min->y = MIN(min->y, (*vtxList)[(*var_s0 >> 0x10) & 0xFF].v.ob[1]);
            min->z = MIN(min->z, (*vtxList)[(*var_s0 >> 0x10) & 0xFF].v.ob[2]);
            max->x = MAX(max->x, (*vtxList)[(*var_s0 >> 0x10) & 0xFF].v.ob[0]);
            max->y = MAX(max->y, (*vtxList)[(*var_s0 >> 0x10) & 0xFF].v.ob[1]);
            max->z = MAX(max->z, (*vtxList)[(*var_s0 >> 0x10) & 0xFF].v.ob[2]);
        }
    }
}

void func_8009B74C(Gfx* dList, s32 len, Vec3f* min, Vec3f* max) {
    s32 vtxFound = false;
    s32 vtxCount;
    Vtx* vtxList;

    func_8009AD18(dList, len, min, max, &vtxFound, &vtxCount, &vtxList);
}

void func_8009B784(Limb** skeletonSegment, AnimationHeader* animationSegment, s32 frame, Vec3f* min, Vec3f* max) {
    JointKey* key;
    u16* frameData;
    AnimationHeader* animation;
    Limb* limb;
    u16 var_t6;
    s32 vtxFound;
    s32 vtxCount;
    Vtx* vtxList;
    Vec3f boundBox[8];
    Vec3f boundBoxRot[8];
    s32 i;
    Limb** skeleton = (Limb**) SEGMENTED_TO_VIRTUAL(skeletonSegment);

    limb = (Limb*) SEGMENTED_TO_VIRTUAL(skeleton[0]);
    animation = (AnimationHeader*) SEGMENTED_TO_VIRTUAL(animationSegment);
    key = (JointKey*) SEGMENTED_TO_VIRTUAL(animation->jointKey);
    frameData = (u16*) SEGMENTED_TO_VIRTUAL(animation->frameData);

    if (frame < (s16) key[1].zLen) {
        var_t6 = frameData[(s16) key[1].z + frame];
    } else {
        var_t6 = frameData[(s16) key[1].z];
    }
    Matrix_RotateZ(gGfxMatrix, (((s32) var_t6 * 360.0f) / 65536.0f) * 0.017453292f, 0);
    if (frame < (s16) key[1].yLen) {
        var_t6 = frameData[(s16) key[1].y + frame];
    } else {
        var_t6 = frameData[(s16) key[1].y];
    }
    Matrix_RotateY(gGfxMatrix, (((s32) var_t6 * 360.0f) / 65536.0f) * 0.017453292f, 1);
    if (frame < (s16) key[1].xLen) {
        var_t6 = frameData[(s16) key[1].x + frame];
    } else {
        var_t6 = frameData[(s16) key[1].x];
    }
    Matrix_RotateX(gGfxMatrix, (((s32) var_t6 * 360.0f) / 65536.0f) * 0.017453292f, 1);
    vtxFound = false;
    if (limb->dList != NULL) {
        func_8009AD18(limb->dList, 0x2000, min, max, &vtxFound, &vtxCount, &vtxList);
        if (vtxFound) {
            boundBox[0].x = boundBox[3].x = boundBox[4].x = boundBox[7].x = min->x;
            boundBox[0].y = boundBox[1].y = boundBox[4].y = boundBox[5].y = max->y;
            boundBox[0].z = boundBox[1].z = boundBox[2].z = boundBox[3].z = max->z;
            boundBox[1].x = boundBox[2].x = boundBox[5].x = boundBox[6].x = max->x;
            boundBox[2].y = boundBox[3].y = boundBox[6].y = boundBox[7].y = min->y;
            boundBox[4].z = boundBox[5].z = boundBox[6].z = boundBox[7].z = min->z;
            for (i = 0; i < 8; i++) {
                // Matrix_MultVec3f(gGfxMatrix, spC0[i], sp60[i]); should logically go here
            }
            *min = *max = boundBoxRot[0];
            for (i = 1; i < 8; i++) {
                min->x = MIN(min->x, boundBoxRot[i].x);
                max->x = MAX(max->x, boundBoxRot[i].x);
                min->y = MIN(min->y, boundBoxRot[i].y);
                max->y = MAX(max->y, boundBoxRot[i].y);
                min->z = MIN(min->z, boundBoxRot[i].z);
                max->z = MAX(max->z, boundBoxRot[i].z);
            }
        }
    }
}

f32 func_8009BC2C(f32* value, f32 target, f32 scale, f32 maxStep, f32 minStep) {
    f32 step = target - *value;

    if (step != 0.0f) {
        step *= scale;
        if ((step >= minStep) || (-minStep >= step)) {
            if (step > maxStep) {
                step = maxStep;
            } else if (step < -maxStep) {
                step = -maxStep;
            }
            *value += step;
        } else if (step < minStep) { // bug? should check sign, not size.
            step = minStep;
            *value += step;
            if (*value > target) {
                *value = target;
            }
        } else if (step > -minStep) {
            step = -minStep;
            *value += step;
            if (*value < target) {
                *value = target;
            }
        }
    }
    return step;
}

f32 func_8009BD38(f32* angle, f32 target, f32 scale, f32 maxStep, f32 minStep) {
    f32 var_fv1 = target - *angle;

    if (var_fv1 != 0.0f) {
        if (var_fv1 > 180.0f) {
            var_fv1 -= 360.0f;
        } else if (var_fv1 < -180.0f) {
            var_fv1 += 360.0f;
        }
        var_fv1 *= scale;
        if ((var_fv1 >= minStep) || (-minStep >= var_fv1)) {
            if (var_fv1 > maxStep) {
                var_fv1 = maxStep;
            } else if (var_fv1 < -maxStep) {
                var_fv1 = -maxStep;
            }
            *angle += var_fv1;
        } else if (var_fv1 < minStep) { // bug? should check sign, not size.
            var_fv1 = minStep;
            *angle += minStep;
            if (*angle > target) {
                *angle = target;
            }
        } else if (var_fv1 > -minStep) {
            var_fv1 = -minStep;
            *angle += var_fv1;
            if (*angle < target) {
                *angle = target;
            }
        }
    }
    if (*angle >= 360.0f) {
        *angle -= 360.0f;
    } else if (*angle < 0.0f) {
        *angle += 360.0f;
    }
    return var_fv1;
}

#ifdef NON_MATCHING
void func_8009BEEC(Vec3f* src, Vec3f* dst, s32 mode, s32 count, f32 scale, f32 maxStep, f32 minStep) {
    s32 i;

    switch (mode) {
        case 0:
            for (i = 0; i < count; i++) {
                dst[i].x = src[i].x;
                dst[i].y = src[i].y;
                dst[i].z = src[i].z;
            }
            break;
        case 1:
            func_8009BC2C(&dst->x, src->x, scale, maxStep, minStep);
            func_8009BC2C(&dst->y, src->y, scale, maxStep, minStep);
            func_8009BC2C(&dst->z, src->z, scale, maxStep, minStep);

            for (i = 1, src++, dst++; i < count; i++, src++, dst++) {
                func_8009BD38(&dst->x, src->x, scale, maxStep, minStep);
                func_8009BD38(&dst->y, src->y, scale, maxStep, minStep);
                func_8009BD38(&dst->z, src->z, scale, maxStep, minStep);
            }
            break;
    }
}
#else
void func_8009BEEC(Vec3f* src, Vec3f* dst, s32 mode, s32 count, f32 scale, f32 maxStep, f32 minStep);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_8009BEEC.s")
#endif

s32 func_8009C124(Vec3f* pos, Vec3f* target, Vec3f* rot, f32 stepSize, f32 scaleTurn, f32 maxTurn, f32 dist) {
    Vec3f diff;
    f32 targetRotX;
    f32 targetRotY;
    Vec3f localStep = { 0.0f, 0.0f, 0.0f };
    Vec3f worldStep;
    Matrix worldTransform;

    diff.x = target->x - pos->x;
    diff.y = target->y - pos->y;
    diff.z = target->z - pos->z;

    targetRotY = func_8009F768(Math_Atan2F(diff.x, diff.z));
    targetRotX = func_8009F768(-Math_Atan2F(diff.y, sqrtf(SQ(diff.x) + SQ(diff.z))));
    func_8009BD38(&rot->y, targetRotY, scaleTurn, maxTurn, 0.0f);
    func_8009BD38(&rot->x, targetRotX, scaleTurn, maxTurn, 0.0f);
    Matrix_RotateY(&worldTransform, rot->y * 0.017453292f, 0);
    Matrix_RotateX(&worldTransform, rot->x * 0.017453292f, 1);
    localStep.z = stepSize;
    Matrix_MultVec3fNoTranslate(&worldTransform, &localStep, &worldStep);

    pos->x += worldStep.x;
    pos->y += worldStep.y;
    pos->z += worldStep.z;

    diff.x = target->x - pos->x;
    diff.y = target->y - pos->y;
    diff.z = target->z - pos->z;

    return sqrtf(VEC3F_SQ(diff)) < dist;
}

void func_8009C320(Gfx** gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale,
                   f32 yScale) {
    gDPLoadTLUT_pal16((*gfxPtr)++, 0, palette);
    gDPLoadTextureBlock_4b((*gfxPtr)++, texture, G_IM_FMT_CI, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, 0, (s32) (1.0f / xScale * 1024.0f),
                        (s32) (1.0f / yScale * 1024.0f));
}

void func_8009C674(Gfx** gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale,
                   f32 yScale) {
    gDPLoadTLUT_pal16((*gfxPtr)++, 0, palette);
    gDPLoadTextureBlock_4b((*gfxPtr)++, texture, G_IM_FMT_CI, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                           G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangleFlip((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f),
                            (s32) ((xPos + width * xScale) * 4.0f), (s32) ((yPos + height * yScale) * 4.0f), 0, 0, 0,
                            (s32) (1.0f / xScale * 1024.0f), (s32) (1.0f / yScale * 1024.0f));
}

void func_8009C9C8(Gfx** gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale,
                   f32 yScale) {
    gDPLoadTLUT_pal16((*gfxPtr)++, 0, palette);
    gDPLoadTextureBlock_4b((*gfxPtr)++, texture, G_IM_FMT_CI, width, height, 0, G_TX_MIRROR | G_TX_WRAP,
                           G_TX_MIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, (width - 1) * 32, 0,
                        (u16) (s32) (-1.0f / xScale * 1024.0f), (s32) (1.0f / yScale * 1024.0f));
}

void func_8009CD3C(Gfx** gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale,
                   f32 yScale) {
    gDPLoadTLUT_pal16((*gfxPtr)++, 0, palette);
    gDPLoadTextureBlock_4b((*gfxPtr)++, texture, G_IM_FMT_CI, width, height, 0, G_TX_MIRROR | G_TX_WRAP,
                           G_TX_MIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, (height - 1) * 32,
                        (s32) (1.0f / xScale * 1024.0f), (u16) (s32) (-1.0f / yScale * 1024.0f));
}

void func_8009D0BC(Gfx** gfxPtr, void* texture, void* palette, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale,
                   f32 yScale) {
    gDPLoadTLUT_pal256((*gfxPtr)++, palette);
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_CI, G_IM_SIZ_8b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, 0, (s32) (1.0f / xScale * 1024.0f),
                        (s32) (1.0f / yScale * 1024.0f));
}

void func_8009D418(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, 0, (s32) (1.0f / xScale * 1024.0f),
                        (s32) (1.0f / yScale * 1024.0f));
}

void func_8009D6CC(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, (width - 1) * 32, 0,
                        (u16) (s32) (-1.0f / xScale * 1024.0f), (s32) (1.0f / yScale * 1024.0f));
}

void func_8009D994(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_8b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, 0, (s32) (1.0f / xScale * 1024.0f),
                        (s32) (1.0f / yScale * 1024.0f));
}

void func_8009DC4C(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_8b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangleFlip((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f),
                            (s32) ((xPos + height * xScale) * 4.0f), (s32) ((yPos + width * yScale) * 4.0f), 0,
                            (width - 1) * 32, 0, (u16) (s32) (-1.0f / yScale * 1024.0f),
                            (s32) (1.0f / xScale * 1024.0f));
}

void func_8009DF14(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_8b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangleFlip((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f),
                            (s32) ((xPos + height * xScale) * 4.0f), (s32) ((yPos + width * yScale) * 4.0f), 0, 0,
                            (height - 1) * 32, (s32) (1.0f / yScale * 1024.0f), (u16) (s32) (-1.0f / xScale * 1024.0f));
}

void func_8009E1E8(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_8b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, (width - 1) * 32, 0,
                        (u16) (s32) (-1.0f / xScale * 1024.0f), (s32) (1.0f / yScale * 1024.0f));
}

void func_8009E4B0(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_8b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, (height - 1) * 32,
                        (s32) (1.0f / xScale * 1024.0f), (u16) (s32) (-1.0f / yScale * 1024.0f));
}

void func_8009E784(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_16b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, 0, (s32) (1.0f / xScale * 1024.0f),
                        (s32) (1.0f / yScale * 1024.0f));
}

void func_8009EA38(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_16b, width, height, 0, G_TX_MIRROR | G_TX_WRAP,
                        G_TX_MIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, (width - 1) * 32, 0,
                        (u16) (s32) (-1.0f / xScale * 1024.0f), (s32) (1.0f / yScale * 1024.0f));
}

void func_8009ED04(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_16b, width, height, 0, G_TX_MIRROR | G_TX_WRAP,
                        G_TX_MIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, (height - 1) * 32,
                        (s32) (1.0f / xScale * 1024.0f), (u16) (s32) (-1.0f / yScale * 1024.0f));
}

void func_8009EFDC(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_IA, G_IM_SIZ_16b, width, height, 0, G_TX_MIRROR | G_TX_WRAP,
                        G_TX_MIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, (width - 1) * 32, (height - 1) * 32,
                        (u16) (s32) (-1.0f / xScale * 1024.0f), (u16) (s32) (-1.0f / yScale * 1024.0f));
}

void func_8009F2C0(Gfx** gfxPtr, void* texture, u32 width, u32 height, f32 xPos, f32 yPos, f32 xScale, f32 yScale) {
    gDPLoadTextureBlock((*gfxPtr)++, texture, G_IM_FMT_RGBA, G_IM_SIZ_32b, width, height, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle((*gfxPtr)++, (s32) (xPos * 4.0f), (s32) (yPos * 4.0f), (s32) ((xPos + width * xScale) * 4.0f),
                        (s32) ((yPos + height * yScale) * 4.0f), 0, 0, 0, (s32) (1.0f / xScale * 1024.0f),
                        (s32) (1.0f / yScale * 1024.0f));
}

void func_8009F574(Gfx** gfxPtr, s32 ulx, s32 uly, s32 lrx, s32 lry, u8 r, u8 g, u8 b, u8 a) {
    if (a != 0) {
        gDPPipeSync((*gfxPtr)++);
        gDPSetPrimColor((*gfxPtr)++, 0x00, 0x00, r, g, b, a);
        gDPSetColorDither((*gfxPtr)++, G_CD_NOISE);
        gDPSetAlphaDither((*gfxPtr)++, G_AD_NOISE);
        gDPSetCycleType((*gfxPtr)++, G_CYC_1CYCLE);
        gDPSetCombineMode((*gfxPtr)++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
        gDPSetRenderMode((*gfxPtr)++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
        gDPFillRectangle((*gfxPtr)++, ulx, uly, lrx, lry);
    }
}

void func_8009F6CC(Vec3f* step, f32 xRot, f32 yRot, f32 stepsize) {
    Vec3f sp1C;

    Matrix_RotateY(gCalcMatrix, yRot * 0.017453292f, 0);
    Matrix_RotateX(gCalcMatrix, xRot * 0.017453292f, 1);
    sp1C.x = sp1C.y = 0.0f;
    sp1C.z = stepsize;
    Matrix_MultVec3fNoTranslate(gCalcMatrix, &sp1C, step);
}

f32 func_8009F768(f32 rAngle) {
    rAngle *= 57.295776f;

    while (rAngle < 0.0f) {
        rAngle += 360.0f;
    }
    return rAngle;
}

s32* func_8009F7B4(Gfx** gfxPtr, u8 width, u8 height) {
    u16* spB4;
    u16 norm;

    width += 0xF;
    width &= 0x70;
    spB4 = D_80137E74;
    D_80137E74 = D_80137E74 + width * height;
    gDPPipeSync((*gfxPtr)++);
    gDPSetCycleType((*gfxPtr)++, G_CYC_FILL);
    gDPSetRenderMode((*gfxPtr)++, G_RM_NOOP, G_RM_NOOP2);
    gViewport->vp.vscale[0] = width * 2;
    gViewport->vp.vscale[1] = height * 2;
    gViewport->vp.vscale[2] = G_MAXZ / 2;
    gViewport->vp.vscale[3] = 0;
    gViewport->vp.vtrans[0] = width * 2;
    gViewport->vp.vtrans[1] = height * 2;
    gViewport->vp.vtrans[2] = G_MAXZ / 2;
    gViewport->vp.vtrans[3] = 0;
    gSPViewport((*gfxPtr)++, gViewport++);
    gDPSetScissorFrac((*gfxPtr)++, G_SC_NON_INTERLACE, 0, 0, width * 4.0f, height * 4.0f);
    gDPSetDepthImage((*gfxPtr)++, &gZBuffer);
    gDPSetColorImage((*gfxPtr)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, &gZBuffer);
    gDPSetFillColor((*gfxPtr)++, 0xFFFCFFFC);
    gDPFillRectangle((*gfxPtr)++, 0, 0, width - 1, height - 1);
    gDPPipeSync((*gfxPtr)++);
    gDPSetDepthSource((*gfxPtr)++, G_ZS_PIXEL);
    gDPSetColorImage((*gfxPtr)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, width, spB4);
    gDPSetColorDither((*gfxPtr)++, G_CD_DISABLE);
    gDPSetFillColor((*gfxPtr)++, 0);
    gDPSetFillColor((*gfxPtr)++, ((D_80161A36 | 1) << 0x10) | (D_80161A36 | 1));
    gDPFillRectangle((*gfxPtr)++, 0, 0, width - 1, height - 1);
    gDPPipeSync((*gfxPtr)++);
    guPerspective(gGfxMtx, &norm, D_80161A3C, (f32) width / height, 10.0f, 12800.0f, 1.0f);
    gSPPerspNormalize((*gfxPtr)++, norm);
    gSPMatrix((*gfxPtr)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    guLookAt(gGfxMtx, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -12800.0f, 0.0f, 1.0f, 0.0f);
    gSPMatrix((*gfxPtr)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    Matrix_Copy(gGfxMatrix, &gIdentityMatrix);

    return spB4;
}

void func_8009FC0C(s32 xPos, s32 yPos, s32 number) {
    void* spA0[] = {
        0x01010660, 0x010106B0, 0x01010700, 0x01010750, 0x010107A0,
        0x010107F0, 0x01010840, 0x01010890, 0x010108E0, 0x01010930,
    };
    void* sp78[] = {
        0x010106A0, 0x010106F0, 0x01010740, 0x01010790, 0x010107E0,
        0x01010830, 0x01010880, 0x010108D0, 0x01010920, 0x01010970,
    };
    s32 var_s0;
    s32 var_s3;

    var_s3 = 0;
    number %= 10000000;
    var_s0 = 1000000;
    for (var_s0 = 1000000; var_s0 != 1; var_s0 /= 10) {
        if ((number / var_s0 != 0) || (var_s3 == 1)) {
            func_8009C320(&gMasterDisp, spA0[number / var_s0], sp78[number / var_s0], 16, 8, xPos, yPos, 1.0f, 1.0f);
            var_s3 = 1;
            xPos += 9;
            number %= var_s0;
        }
    }
    func_8009C320(&gMasterDisp, spA0[number / var_s0], sp78[number / var_s0], 16, 8, xPos, yPos, 1.0f, 1.0f);
}

void* D_800D2638[] = {
    0x05000000, 0x05000080, 0x05000100, 0x05000180, D_5000200,
    0x05000280, D_5000300,  0x05000380, 0x05000400, 0x05000480,
};

void func_8009FEA0(s32 xPos, s32 yPos, s32 number) {
    s32 var_s0;
    s32 var_s3;

    var_s3 = 0;
    number %= 10000000;
    var_s0 = 1000000;
    for (var_s0 = 1000000; var_s0 != 1; var_s0 /= 10) {
        if ((number / var_s0 != 0) || (var_s3 == 1)) {
            func_8009D994(&gMasterDisp, D_800D2638[number / var_s0], 16, 8, xPos, yPos, 1.0f, 1.0f);
            var_s3 = 1;
            xPos += 9;
            number %= var_s0;
        }
    }
    func_8009D994(&gMasterDisp, D_800D2638[number / var_s0], 16, 8, xPos, yPos, 1.0f, 1.0f);
}

char D_800D2660[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ!:-.0123456789";
char D_800D268C[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ. 0123456789st-";
u8 D_800D26B8[] = { 15, 14, 14, 13, 13, 13, 14, 14, 5,  12, 14, 12, 16, 14, 15, 13, 16, 14, 13, 13, 13,
                    16, 17, 17, 16, 13, 5,  16, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 10, 9,  14, 0 };
void* D_800D26E4[] = {
    0x05008020, 0x05008110, 0x05008200, 0x050082F0, 0x050083E0, 0x050084D0, 0x050085C0, 0x050086B0, 0x050087A0,
    0x05008890, 0x05008980, 0x05008A70, 0x05008B60, 0x05008C50, 0x05008D40, 0x05008E30, 0x05008F20, 0x05009010,
    0x05009100, 0x050091F0, 0x050092E0, 0x050093D0, 0x050094C0, 0x050096A0, 0x05009880, 0x05009A60, 0x05009DB0,
    NULL,       D_5009F60,  D_500A050,  D_500A140,  D_500A230,  D_500A320,  D_500A410,  D_500A500,  0x0500A5F0,
    0x0500A6E0, 0x0500A7D0, 0x05009B50, 0x05009C40, 0x05009970,
};
void* D_800D2788[] = {
    D_5009F60, D_500A050, D_500A140, D_500A230, D_500A320, D_500A410, D_500A500, 0x0500A5F0, 0x0500A6E0, 0x0500A7D0,
};
void* D_800D27B0[] = {
    NULL,       0x050070C0, 0x05007100, 0x05007180, 0x050071C0, 0x05007200, 0x05007510, 0x05007550, 0x05007590,
    0x050075D0, 0x05007610, 0x05007650, 0x05007F60, 0x05007FA0, 0x05007FE0, 0x05009D30, 0x05009D70, 0x05009EA0,
    0x05009EE0, 0x05009F20, 0x0500B380, 0x0500B440, 0x0500B480, 0x0500B4C0, 0x0500B500, 0x0500B540, 0x0500B5C0,
    0x05007140, 0x0500B400, 0x0500B580, 0x0500B3C0, 0x05000000, 0x05000080, 0x05000100, 0x05000180, D_5000200,
    0x05000280, D_5000300,  0x05000380, 0x05000400, 0x05000480,
};

void func_800A0094(s32 xPos, s32 yPos, f32 xScale, f32 yScale, char* text) {
    u32 var_t0;
    f32 xPosCurrent = (f32) xPos;
    s32 pad4C;
    s32 width;
    s32 var_t1 = 0;

    while (text[0] != 0) {
        var_t0 = 0;
        while ((var_t0 < ARRAY_COUNT(D_800D268C)) && D_800D268C[var_t0] != text[0]) {
            var_t0++;
        }
        if (D_800D268C[var_t0] == text[0]) {
            if ((var_t1 == 1) && (text[-1] == 'Y') && (text[0] == 'A')) {
                xPosCurrent -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'A')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'O')) {
                xPosCurrent -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'T') && (text[0] == 'A')) {
                xPosCurrent -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'Y')) {
                xPosCurrent -= 4.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'I')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'O')) {
                xPosCurrent -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'J')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'W') && (text[0] == 'A')) {
                xPosCurrent -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'Y') && (text[0] == 'O')) {
                xPosCurrent -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'T')) {
                xPosCurrent -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'W')) {
                xPosCurrent -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'O') && (text[0] == 'T')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'G')) {
                xPosCurrent -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'O') && (text[0] == 'Y')) {
                xPosCurrent -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'J')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'T') && (text[0] == 'O')) {
                xPosCurrent -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'U')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'S')) {
                xPosCurrent -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'R') && (text[0] == 'O')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'Y')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'N') && (text[0] == 'J')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'E')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'S') && (text[0] == 't')) {
                xPosCurrent -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'X') && (text[0] == 'X')) {
                xPosCurrent -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'O') && (text[0] == 'X')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'W') && (text[0] == 'W')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'X') && (text[0] == 'W')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'W') && (text[0] == 'X')) {
                xPosCurrent -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'H') && (text[0] == 'O')) {
                xPosCurrent += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'J') && (text[0] == 'I')) {
                xPosCurrent += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'I') && (text[0] == 'N')) {
                xPosCurrent += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'I') && (text[0] == 'M')) {
                xPosCurrent += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'I') && (text[0] == 'D')) {
                xPosCurrent += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'U') && (text[0] == 'K')) {
                xPosCurrent += 1.0f;
            }
            if (D_800D26E4[var_t0] != NULL) {
                width = 16;
                if ((text[0] == 'W') || (text[0] == 'X')) {
                    width = 32;
                }
                func_8009D994(&gMasterDisp, D_800D26E4[var_t0], width, 15, xPosCurrent, yPos, xScale, yScale);
            }
            var_t1 = 1;
            xPosCurrent += (D_800D26B8[var_t0] * xScale) + 2.0f;
        }
        text++;
    }
}

s32 func_800A06F8(char* text) {
    s32 var_t1 = 0;
    s32 var_fv0 = 0;
    u32 var_t0;

    while (text[0] != 0) {
        var_t0 = 0;
        while ((var_t0 < ARRAY_COUNT(D_800D268C)) && D_800D268C[var_t0] != text[0]) {
            var_t0++;
        }
        if (D_800D268C[var_t0] == text[0]) {
            if ((var_t1 == 1) && (text[-1] == 'Y') && (text[0] == 'A')) {
                var_fv0 -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'A')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'O')) {
                var_fv0 -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'T') && (text[0] == 'A')) {
                var_fv0 -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'Y')) {
                var_fv0 -= 4.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'I')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'O')) {
                var_fv0 -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'J')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'W') && (text[0] == 'A')) {
                var_fv0 -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'Y') && (text[0] == 'O')) {
                var_fv0 -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'T')) {
                var_fv0 -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'W')) {
                var_fv0 -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'O') && (text[0] == 'T')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'G')) {
                var_fv0 -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'O') && (text[0] == 'Y')) {
                var_fv0 -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'J')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'T') && (text[0] == 'O')) {
                var_fv0 -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'U')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'A') && (text[0] == 'S')) {
                var_fv0 -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'R') && (text[0] == 'O')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'Y')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'N') && (text[0] == 'J')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'K') && (text[0] == 'E')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'S') && (text[0] == 't')) {
                var_fv0 -= 2.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'X') && (text[0] == 'X')) {
                var_fv0 -= 3.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'O') && (text[0] == 'X')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'W') && (text[0] == 'W')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'X') && (text[0] == 'W')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'W') && (text[0] == 'X')) {
                var_fv0 -= 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'H') && (text[0] == 'O')) {
                var_fv0 += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'J') && (text[0] == 'I')) {
                var_fv0 += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'I') && (text[0] == 'N')) {
                var_fv0 += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'I') && (text[0] == 'M')) {
                var_fv0 += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'I') && (text[0] == 'D')) {
                var_fv0 += 1.0f;
            }
            if ((var_t1 == 1) && (text[-1] == 'U') && (text[0] == 'K')) {
                var_fv0 += 1.0f;
            }
            var_t1 = 1;
            var_fv0 += D_800D26B8[var_t0] + 2.0f;
        }
        text++;
    }
    return var_fv0;
}

void func_800A100C(s32 xPos, s32 yPos, s32 number) {
    s32 var_s0;
    s32 var_s3 = 0;

    number %= 10000000;
    var_s0 = 1000000;
    for (var_s0 = 1000000; var_s0 != 1; var_s0 /= 10) {
        if ((number / var_s0 != 0) || (var_s3 == 1)) {
            func_8009D994(&gMasterDisp, D_800D2788[number / var_s0], 16, 15, xPos, yPos, 1.0f, 1.0f);
            var_s3 = 1;
            xPos += 13;
            number %= var_s0;
        }
    }
    func_8009D994(&gMasterDisp, D_800D2788[number / var_s0], 16, 15, xPos, yPos, 1.0f, 1.0f);
}

void func_800A1200(s32 xPos, s32 yPos, f32 xScale, f32 yScale, char* text) {
    u32 var_t0;
    f32 xPosCurrent = (f32) xPos;
    s32 pad4C;
    s32 width;
    s32 var_t1 = 0;

    while (text[0] != 0) {
        var_t0 = 0;
        while ((var_t0 < ARRAY_COUNT(D_800D2660)) && D_800D2660[var_t0] != text[0]) {
            var_t0++;
        }
        if (D_800D2660[var_t0] == text[0]) {
            if (D_800D27B0[var_t0] != NULL) {
                width = 8;
                if (var_t0 > 30) {
                    width = 16;
                }
                func_8009D994(&gMasterDisp, D_800D27B0[var_t0], width, 8, xPosCurrent, yPos, xScale, yScale);
                if (1) {}
            }
            switch (text[0]) {
                case '!':
                case ':':
                case 'I':
                    xPosCurrent += 4.0f * xScale;
                    break;
                case '-':
                    xPosCurrent += 6.0f * xScale;
                    break;
                default:
                    if (var_t0 > 29) {
                        xPosCurrent += 9.0f * xScale;
                    } else {
                        xPosCurrent += 8.0f * xScale;
                    }
            }
        }
        text++;
    }
}

s32 func_800A13EC(char* text) {
    u32 var_t0;
    s32 var_fv0 = 0;
    s32 pad4C;
    s32 var_a2;
    s32 var_t1 = 0;

    while (text[0] != 0) {
        var_t0 = 0;
        while ((var_t0 < ARRAY_COUNT(D_800D2660)) && D_800D2660[var_t0] != text[0]) {
            var_t0++;
        }
        if (D_800D2660[var_t0] == text[0]) {
            switch (text[0]) {
                case '!':
                case ':':
                case 'I':
                    var_fv0 += 4.0f;
                    break;
                case '-':
                    var_fv0 += 6.0f;
                    break;
                default:
                    if (var_t0 > 29) {
                        var_fv0 += 9.0f;
                    } else {
                        var_fv0 += 8.0f;
                    }
            }
        }
        text++;
    }
    return var_fv0;
}

void func_800A1540(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
}

#ifdef NON_MATCHING
// It's something like this.
// void func_800A1558(f32 weight, u16 size, u16 *src1, u16 *src2, u16 *dst) {
//     f32 r1;
//     f32 g1;
//     f32 b1;
//     s32 a1;
//     f32 r2;
//     f32 g2;
//     f32 b2;
//     s32 a2;
//     s32 i;

//     src1 = SEGMENTED_TO_VIRTUAL(src1);
//     src2 = SEGMENTED_TO_VIRTUAL(src2);
//     dst = SEGMENTED_TO_VIRTUAL(dst);
//     for(i = 0; i < size; i++) {
//         r1 = RGBA16_RED(src1[i]);
//         g1 = RGBA16_GRN(src1[i]);
//         b1 = RGBA16_BLU(src1[i]);
//         a1 = src1[i] & 1;
//         r2 = RGBA16_RED(src2[i]);
//         g2 = RGBA16_GRN(src2[i]);
//         b2 = RGBA16_BLU(src2[i]);
//         a2 = src2[i] & 1;
//         dst[i] = RGBA16_PACK((r1 - r2) * weight / 100.0f + r2, (g1 - g2) * weight / 100.0f + g2, (b1 - b2) * weight /
//         100.0f + b2, a1 | a2);
//     }
// }
#else
void func_800A1558(f32 weight, u16 size, void* src1, void* src2, void* dst);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/sf_9A580/func_800A1558.s")
#endif
