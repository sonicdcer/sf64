#include "global.h"

Mtx gIdentityMtx = { {
    { 0x00010000, 0, 1, 0 },
    { 0, 0x00010000, 0, 1 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
} };

Matrix gIdentityMatrix = { {
    { 1.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 1.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 1.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 1.0f },
} };

Matrix* gGfxMatrix;
Matrix sGfxMatrixStack[0x20];
Matrix* gCalcMatrix;
Matrix sCalcMatrixStack[0x20];

void Matrix_Copy(Matrix* dst, Matrix* src) {
    dst->m[0][0] = src->m[0][0];
    dst->m[0][1] = src->m[0][1];
    dst->m[0][2] = src->m[0][2];
    dst->m[0][3] = src->m[0][3];
    dst->m[1][0] = src->m[1][0];
    dst->m[1][1] = src->m[1][1];
    dst->m[1][2] = src->m[1][2];
    dst->m[1][3] = src->m[1][3];
    dst->m[2][0] = src->m[2][0];
    dst->m[2][1] = src->m[2][1];
    dst->m[2][2] = src->m[2][2];
    dst->m[2][3] = src->m[2][3];
    dst->m[3][0] = src->m[3][0];
    dst->m[3][1] = src->m[3][1];
    dst->m[3][2] = src->m[3][2];
    dst->m[3][3] = src->m[3][3];
    // dst->xx = src->xx;
    // dst->yx = src->yx;
    // dst->zx = src->zx;
    // dst->wx = src->wx;
    // dst->xy = src->xy;
    // dst->yy = src->yy;
    // dst->zy = src->zy;
    // dst->wy = src->wy;
    // dst->xz = src->xz;
    // dst->yz = src->yz;
    // dst->zz = src->zz;
    // dst->wz = src->wz;
    // dst->xw = src->xw;
    // dst->yw = src->yw;
    // dst->zw = src->zw;
    // dst->ww = src->ww;
}

void Matrix_Push(Matrix** mtxStack) {
    Matrix_Copy(*mtxStack + 1, *mtxStack);
    *mtxStack += 1;
}

void Matrix_Pop(Matrix** mtxStack) {
    *mtxStack -= 1;
}

void Matrix_Mult(Matrix* mtx, Matrix* tf, u8 mode) {
    f32 rx;
    f32 ry;
    f32 rz;
    f32 rw;

    if (mode == 1) {
        rx = mtx->m[0][0];
        ry = mtx->m[1][0];
        rz = mtx->m[2][0];
        rw = mtx->m[3][0];

        mtx->m[0][0] = (rx * tf->m[0][0]) + (ry * tf->m[0][1]) + (rz * tf->m[0][2]) + (rw * tf->m[0][3]);
        mtx->m[1][0] = (rx * tf->m[1][0]) + (ry * tf->m[1][1]) + (rz * tf->m[1][2]) + (rw * tf->m[1][3]);
        mtx->m[2][0] = (rx * tf->m[2][0]) + (ry * tf->m[2][1]) + (rz * tf->m[2][2]) + (rw * tf->m[2][3]);
        mtx->m[3][0] = (rx * tf->m[3][0]) + (ry * tf->m[3][1]) + (rz * tf->m[3][2]) + (rw * tf->m[3][3]);

        rx = mtx->m[0][1];
        ry = mtx->m[1][1];
        rz = mtx->m[2][1];
        rw = mtx->m[3][1];

        mtx->m[0][1] = (rx * tf->m[0][0]) + (ry * tf->m[0][1]) + (rz * tf->m[0][2]) + (rw * tf->m[0][3]);
        mtx->m[1][1] = (rx * tf->m[1][0]) + (ry * tf->m[1][1]) + (rz * tf->m[1][2]) + (rw * tf->m[1][3]);
        mtx->m[2][1] = (rx * tf->m[2][0]) + (ry * tf->m[2][1]) + (rz * tf->m[2][2]) + (rw * tf->m[2][3]);
        mtx->m[3][1] = (rx * tf->m[3][0]) + (ry * tf->m[3][1]) + (rz * tf->m[3][2]) + (rw * tf->m[3][3]);

        rx = mtx->m[0][2];
        ry = mtx->m[1][2];
        rz = mtx->m[2][2];
        rw = mtx->m[3][2];

        mtx->m[0][2] = (rx * tf->m[0][0]) + (ry * tf->m[0][1]) + (rz * tf->m[0][2]) + (rw * tf->m[0][3]);
        mtx->m[1][2] = (rx * tf->m[1][0]) + (ry * tf->m[1][1]) + (rz * tf->m[1][2]) + (rw * tf->m[1][3]);
        mtx->m[2][2] = (rx * tf->m[2][0]) + (ry * tf->m[2][1]) + (rz * tf->m[2][2]) + (rw * tf->m[2][3]);
        mtx->m[3][2] = (rx * tf->m[3][0]) + (ry * tf->m[3][1]) + (rz * tf->m[3][2]) + (rw * tf->m[3][3]);

        rx = mtx->m[0][3];
        ry = mtx->m[1][3];
        rz = mtx->m[2][3];
        rw = mtx->m[3][3];

        mtx->m[0][3] = (rx * tf->m[0][0]) + (ry * tf->m[0][1]) + (rz * tf->m[0][2]) + (rw * tf->m[0][3]);
        mtx->m[1][3] = (rx * tf->m[1][0]) + (ry * tf->m[1][1]) + (rz * tf->m[1][2]) + (rw * tf->m[1][3]);
        mtx->m[2][3] = (rx * tf->m[2][0]) + (ry * tf->m[2][1]) + (rz * tf->m[2][2]) + (rw * tf->m[2][3]);
        mtx->m[3][3] = (rx * tf->m[3][0]) + (ry * tf->m[3][1]) + (rz * tf->m[3][2]) + (rw * tf->m[3][3]);
    } else {
        Matrix_Copy(mtx, tf);
    }
}

void Matrix_Translate(Matrix* mtx, f32 x, f32 y, f32 z, u8 mode) {
    f32 rx;
    f32 ry;

    if (mode == 1) {
        rx = mtx->m[0][0];
        ry = mtx->m[1][0];

        mtx->m[3][0] += (rx * x) + (ry * y) + (mtx->m[2][0] * z);

        rx = mtx->m[0][1];
        ry = mtx->m[1][1];

        mtx->m[3][1] += (rx * x) + (ry * y) + (mtx->m[2][1] * z);

        rx = mtx->m[0][2];
        ry = mtx->m[1][2];

        mtx->m[3][2] += (rx * x) + (ry * y) + (mtx->m[2][2] * z);

        rx = mtx->m[0][3];
        ry = mtx->m[1][3];

        mtx->m[3][3] += (rx * x) + (ry * y) + (mtx->m[2][3] * z);
    } else {
        mtx->m[3][0] = x;
        mtx->m[3][1] = y;
        mtx->m[3][2] = z;
        mtx->m[0][1] = mtx->m[0][2] = mtx->m[0][3] = mtx->m[1][0] = mtx->m[1][2] = mtx->m[1][3] = mtx->m[2][0] =
            mtx->m[2][1] = mtx->m[2][3] = 0.0f;
        mtx->m[0][0] = mtx->m[1][1] = mtx->m[2][2] = mtx->m[3][3] = 1.0f;
    }
}

// Matrix_Scale
#ifdef NON_MATCHING
void Matrix_Scale(Matrix* mtx, f32 xScale, f32 yScale, f32 zScale, u8 mode) {
    if (mode == 1) {
        mtx->m[0][0] *= xScale;
        mtx->m[1][0] *= yScale;
        mtx->m[2][0] *= zScale;
        mtx->m[0][1] *= xScale;
        mtx->m[1][1] *= yScale;
        mtx->m[2][1] *= zScale;
        mtx->m[0][2] *= xScale;
        mtx->m[1][2] *= yScale;
        mtx->m[2][2] *= zScale;
        mtx->m[0][3] *= xScale;
        mtx->m[1][3] *= yScale;
        mtx->m[2][3] *= zScale;
    } else {
        mtx->m[0][0] = xScale;
        mtx->m[1][1] = yScale;
        mtx->m[2][2] = zScale;
        mtx->m[0][1] = mtx->m[0][2] = mtx->m[0][3] = mtx->m[1][0] = mtx->m[1][2] = mtx->m[1][3] = mtx->m[2][0] =
            mtx->m[2][1] = mtx->m[2][3] = mtx->m[3][0] = mtx->m[3][1] = mtx->m[3][2] = 0.0f;
        mtx->m[3][3] = 1.0f;
    }
}
#else
// https://decomp.me/scratch/v4KEJ 91%
void Matrix_Scale(Matrix* mtx, f32 xScale, f32 yScale, f32 zScale, u8 mode);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/matrix/Matrix_Scale.s")
#endif

void Matrix_RotateX(Matrix* mtx, f32 angle, u8 mode) {
    f32 cs;
    f32 sn;
    f32 ry;
    f32 rz;

    sn = __sinf(angle);
    cs = __cosf(angle);
    if (mode == 1) {
        ry = mtx->m[1][0];
        rz = mtx->m[2][0];
        mtx->m[1][0] = (ry * cs) + (rz * sn);
        mtx->m[2][0] = (rz * cs) - (ry * sn);

        ry = mtx->m[1][1];
        rz = mtx->m[2][1];
        mtx->m[1][1] = (ry * cs) + (rz * sn);
        mtx->m[2][1] = (rz * cs) - (ry * sn);

        ry = mtx->m[1][2];
        rz = mtx->m[2][2];
        mtx->m[1][2] = (ry * cs) + (rz * sn);
        mtx->m[2][2] = (rz * cs) - (ry * sn);

        ry = mtx->m[1][3];
        rz = mtx->m[2][3];
        mtx->m[1][3] = (ry * cs) + (rz * sn);
        mtx->m[2][3] = (rz * cs) - (ry * sn);
    } else {
        mtx->m[1][1] = mtx->m[2][2] = cs;
        mtx->m[1][2] = sn;
        mtx->m[2][1] = -sn;
        mtx->m[0][0] = mtx->m[3][3] = 1.0f;
        mtx->m[0][1] = mtx->m[0][2] = mtx->m[0][3] = mtx->m[1][0] = mtx->m[1][3] = mtx->m[2][0] = mtx->m[2][3] =
            mtx->m[3][0] = mtx->m[3][1] = mtx->m[3][2] = 0.0f;
    }
}

void Matrix_RotateY(Matrix* mtx, f32 angle, u8 mode) {
    f32 cs;
    f32 sn;
    f32 rx;
    f32 rz;

    sn = __sinf(angle);
    cs = __cosf(angle);
    if (mode == 1) {
        rx = mtx->m[0][0];
        rz = mtx->m[2][0];
        mtx->m[0][0] = (rx * cs) - (rz * sn);
        mtx->m[2][0] = (rx * sn) + (rz * cs);

        rx = mtx->m[0][1];
        rz = mtx->m[2][1];
        mtx->m[0][1] = (rx * cs) - (rz * sn);
        mtx->m[2][1] = (rx * sn) + (rz * cs);

        rx = mtx->m[0][2];
        rz = mtx->m[2][2];
        mtx->m[0][2] = (rx * cs) - (rz * sn);
        mtx->m[2][2] = (rx * sn) + (rz * cs);

        rx = mtx->m[0][3];
        rz = mtx->m[2][3];
        mtx->m[0][3] = (rx * cs) - (rz * sn);
        mtx->m[2][3] = (rx * sn) + (rz * cs);
    } else {
        mtx->m[0][0] = mtx->m[2][2] = cs;
        mtx->m[0][2] = -sn;
        mtx->m[2][0] = sn;
        mtx->m[1][1] = mtx->m[3][3] = 1.0f;
        mtx->m[0][1] = mtx->m[0][3] = mtx->m[1][0] = mtx->m[1][2] = mtx->m[1][3] = mtx->m[2][1] = mtx->m[2][3] =
            mtx->m[3][0] = mtx->m[3][1] = mtx->m[3][2] = 0.0f;
    }
}

void Matrix_RotateZ(Matrix* mtx, f32 angle, u8 mode) {
    f32 cs;
    f32 sn;
    f32 rx;
    f32 ry;

    sn = __sinf(angle);
    cs = __cosf(angle);
    if (mode == 1) {
        rx = mtx->m[0][0];
        ry = mtx->m[1][0];
        mtx->m[0][0] = (rx * cs) + (ry * sn);
        mtx->m[1][0] = (ry * cs) - (rx * sn);

        rx = mtx->m[0][1];
        ry = mtx->m[1][1];
        mtx->m[0][1] = (rx * cs) + (ry * sn);
        mtx->m[1][1] = (ry * cs) - (rx * sn);

        rx = mtx->m[0][2];
        ry = mtx->m[1][2];
        mtx->m[0][2] = (rx * cs) + (ry * sn);
        mtx->m[1][2] = (ry * cs) - (rx * sn);

        rx = mtx->m[0][3];
        ry = mtx->m[1][3];
        mtx->m[0][3] = (rx * cs) + (ry * sn);
        mtx->m[1][3] = (ry * cs) - (rx * sn);
    } else {
        mtx->m[0][0] = mtx->m[1][1] = cs;
        mtx->m[0][1] = sn;
        mtx->m[1][0] = -sn;
        mtx->m[2][2] = mtx->m[3][3] = 1.0f;
        mtx->m[0][2] = mtx->m[0][3] = mtx->m[1][2] = mtx->m[1][3] = mtx->m[2][0] = mtx->m[2][1] = mtx->m[2][3] =
            mtx->m[3][0] = mtx->m[3][1] = mtx->m[3][2] = 0.0f;
    }
}

void Matrix_RotateAxis(Matrix* mtx, f32 angle, f32 axisX, f32 axisY, f32 axisZ, u8 mode) {
    f32 rx;
    f32 ry;
    f32 rz;
    f32 norm;
    f32 cxx;
    f32 cyx;
    f32 czx;
    f32 cxy;
    f32 cyy;
    f32 czy;
    f32 cxz;
    f32 cyz;
    f32 czz;
    f32 xx;
    f32 yy;
    f32 zz;
    f32 xy;
    f32 yz;
    f32 xz;
    f32 sinA;
    f32 cosA;

    norm = sqrtf((axisX * axisX) + (axisY * axisY) + (axisZ * axisZ));
    if (norm != 0.0) {
        axisX /= norm;
        axisY /= norm;
        axisZ /= norm;
        sinA = __sinf(angle);
        cosA = __cosf(angle);
        xx = axisX * axisX;
        yy = axisY * axisY;
        zz = axisZ * axisZ;
        xy = axisX * axisY;
        yz = axisY * axisZ;
        xz = axisX * axisZ;

        if (mode == 1) {
            cxx = (1.0f - xx) * cosA + xx;
            cyx = (1.0f - cosA) * xy + axisZ * sinA;
            czx = (1.0f - cosA) * xz - axisY * sinA;

            cxy = (1.0f - cosA) * xy - axisZ * sinA;
            cyy = (1.0f - yy) * cosA + yy;
            czy = (1.0f - cosA) * yz + axisX * sinA;

            cxz = (1.0f - cosA) * xz + axisY * sinA;
            cyz = (1.0f - cosA) * yz - axisX * sinA;
            czz = (1.0f - zz) * cosA + zz;

            rx = mtx->m[0][0];
            ry = mtx->m[0][1];
            rz = mtx->m[0][2];
            mtx->m[0][0] = (rx * cxx) + (ry * cxy) + (rz * cxz);
            mtx->m[0][1] = (rx * cyx) + (ry * cyy) + (rz * cyz);
            mtx->m[0][2] = (rx * czx) + (ry * czy) + (rz * czz);

            rx = mtx->m[1][0];
            ry = mtx->m[1][1];
            rz = mtx->m[1][2];
            mtx->m[1][0] = (rx * cxx) + (ry * cxy) + (rz * cxz);
            mtx->m[1][1] = (rx * cyx) + (ry * cyy) + (rz * cyz);
            mtx->m[1][2] = (rx * czx) + (ry * czy) + (rz * czz);

            rx = mtx->m[2][0];
            ry = mtx->m[2][1];
            rz = mtx->m[2][2];
            mtx->m[2][0] = (rx * cxx) + (ry * cxy) + (rz * cxz);
            mtx->m[2][1] = (rx * cyx) + (ry * cyy) + (rz * cyz);
            mtx->m[2][2] = (rx * czx) + (ry * czy) + (rz * czz);
        } else {
            mtx->m[0][0] = (1.0f - xx) * cosA + xx;
            mtx->m[0][1] = (1.0f - cosA) * xy + axisZ * sinA;
            mtx->m[0][2] = (1.0f - cosA) * xz - axisY * sinA;
            mtx->m[0][3] = 0.0f;

            mtx->m[1][0] = (1.0f - cosA) * xy - axisZ * sinA;
            mtx->m[1][1] = (1.0f - yy) * cosA + yy;
            mtx->m[1][2] = (1.0f - cosA) * yz + axisX * sinA;
            mtx->m[1][3] = 0.0f;

            mtx->m[2][0] = (1.0f - cosA) * xz + axisY * sinA;
            mtx->m[2][1] = (1.0f - cosA) * yz - axisX * sinA;
            mtx->m[2][2] = (1.0f - zz) * cosA + zz;
            mtx->m[2][3] = 0.0f;

            mtx->m[3][0] = mtx->m[3][1] = mtx->m[3][2] = 0.0f;
            mtx->m[3][3] = 1.0f;
        }
    }
}

void Matrix_ToMtx(Mtx* dest) {
    s32 temp;
    u16* m1 = (u16*) &dest->m[0][0];
    u16* m2 = (u16*) &dest->m[2][0];
    Matrix* src = gGfxMatrix;

    temp = src->xx * 0x10000;
    m1[0] = (temp >> 0x10);
    m2[0] = temp & 0xFFFF;

    temp = src->yx * 0x10000;
    m1[1] = (temp >> 0x10);
    m2[1] = temp & 0xFFFF;

    temp = src->zx * 0x10000;
    m1[2] = (temp >> 0x10);
    m2[2] = temp & 0xFFFF;

    temp = src->wx * 0x10000;
    m1[3] = (temp >> 0x10);
    m2[3] = temp & 0xFFFF;

    temp = src->xy * 0x10000;
    m1[4] = (temp >> 0x10);
    m2[4] = temp & 0xFFFF;

    temp = src->yy * 0x10000;
    m1[5] = (temp >> 0x10);
    m2[5] = temp & 0xFFFF;

    temp = src->zy * 0x10000;
    m1[6] = (temp >> 0x10);
    m2[6] = temp & 0xFFFF;

    temp = src->wy * 0x10000;
    m1[7] = (temp >> 0x10);
    m2[7] = temp & 0xFFFF;

    temp = src->xz * 0x10000;
    m1[8] = (temp >> 0x10);
    m2[8] = temp & 0xFFFF;

    temp = src->yz * 0x10000;
    m1[9] = (temp >> 0x10);
    m2[9] = temp & 0xFFFF;

    temp = src->zz * 0x10000;
    m1[10] = (temp >> 0x10);
    m2[10] = temp & 0xFFFF;

    temp = src->wz * 0x10000;
    m1[11] = (temp >> 0x10);
    m2[11] = temp & 0xFFFF;

    temp = src->xw * 0x10000;
    m1[12] = (temp >> 0x10);
    m2[12] = temp & 0xFFFF;

    temp = src->yw * 0x10000;
    m1[13] = (temp >> 0x10);
    m2[13] = temp & 0xFFFF;

    temp = src->zw * 0x10000;
    m1[14] = (temp >> 0x10);
    m2[14] = temp & 0xFFFF;

    temp = src->ww * 0x10000;
    m1[15] = (temp >> 0x10);
    m2[15] = temp & 0xFFFF;
}

void Matrix_FromMtx(Mtx* src, Matrix* dest) {
    u16* m1 = (u16*) &src->m[0][0];
    u16* m2 = (u16*) &src->m[2][0];

    dest->xx = ((m1[0] << 0x10) | m2[0]) * (1 / 65536.0f);
    dest->yx = ((m1[1] << 0x10) | m2[1]) * (1 / 65536.0f);
    dest->zx = ((m1[2] << 0x10) | m2[2]) * (1 / 65536.0f);
    dest->wx = ((m1[3] << 0x10) | m2[3]) * (1 / 65536.0f);
    dest->xy = ((m1[4] << 0x10) | m2[4]) * (1 / 65536.0f);
    dest->yy = ((m1[5] << 0x10) | m2[5]) * (1 / 65536.0f);
    dest->zy = ((m1[6] << 0x10) | m2[6]) * (1 / 65536.0f);
    dest->wy = ((m1[7] << 0x10) | m2[7]) * (1 / 65536.0f);
    dest->xz = ((m1[8] << 0x10) | m2[8]) * (1 / 65536.0f);
    dest->yz = ((m1[9] << 0x10) | m2[9]) * (1 / 65536.0f);
    dest->zz = ((m1[10] << 0x10) | m2[10]) * (1 / 65536.0f);
    dest->wz = ((m1[11] << 0x10) | m2[11]) * (1 / 65536.0f);
    dest->xw = ((m1[12] << 0x10) | m2[12]) * (1 / 65536.0f);
    dest->yw = ((m1[13] << 0x10) | m2[13]) * (1 / 65536.0f);
    dest->zw = ((m1[14] << 0x10) | m2[14]) * (1 / 65536.0f);
    dest->ww = ((m1[15] << 0x10) | m2[15]) * (1 / 65536.0f);
}

void Matrix_MultVec3f(Matrix* mtx, Vec3f* src, Vec3f* dest) {
    dest->x = (mtx->m[0][0] * src->x) + (mtx->m[1][0] * src->y) + (mtx->m[2][0] * src->z) + mtx->m[3][0];
    dest->y = (mtx->m[0][1] * src->x) + (mtx->m[1][1] * src->y) + (mtx->m[2][1] * src->z) + mtx->m[3][1];
    dest->z = (mtx->m[0][2] * src->x) + (mtx->m[1][2] * src->y) + (mtx->m[2][2] * src->z) + mtx->m[3][2];
}

void Matrix_MultVec3fNoTranslate(Matrix* mtx, Vec3f* src, Vec3f* dest) {
    dest->x = (mtx->m[0][0] * src->x) + (mtx->m[1][0] * src->y) + (mtx->m[2][0] * src->z);
    dest->y = (mtx->m[0][1] * src->x) + (mtx->m[1][1] * src->y) + (mtx->m[2][1] * src->z);
    dest->z = (mtx->m[0][2] * src->x) + (mtx->m[1][2] * src->y) + (mtx->m[2][2] * src->z);
}

void Matrix_GetYRPAngles(Matrix* mtx, Vec3f* rot) {
    Matrix invYP;
    Vec3f origin = { 0.0f, 0.0f, 0.0f };
    Vec3f originP;
    Vec3f zHat = { 0.0f, 0.0f, 1.0f };
    Vec3f zHatP;
    Vec3f xHat = { 1.0f, 0.0f, 0.0f };
    Vec3f xHatP;

    Matrix_MultVec3fNoTranslate(mtx, &origin, &originP);
    Matrix_MultVec3fNoTranslate(mtx, &zHat, &zHatP);
    Matrix_MultVec3fNoTranslate(mtx, &xHat, &xHatP);
    zHatP.x -= originP.x;
    zHatP.y -= originP.y;
    zHatP.z -= originP.z;
    xHatP.x -= originP.x;
    xHatP.y -= originP.y;
    xHatP.z -= originP.z;
    rot->y = Math_Atan2F(zHatP.x, zHatP.z);
    rot->x = -Math_Atan2F(zHatP.y, sqrtf(SQ(zHatP.x) + SQ(zHatP.z)));
    Matrix_RotateX(&invYP, -rot->x, 0);
    Matrix_RotateY(&invYP, -rot->y, 1);
    Matrix_MultVec3fNoTranslate(&invYP, &xHatP, &xHat);
    rot->x *= M_RTOD;
    rot->y *= M_RTOD;
    rot->z = Math_Atan2F(xHat.y, xHat.x) * M_RTOD;
}

void Matrix_GetXYZAngles(Matrix* mtx, Vec3f* rot) {
    Matrix invYZ;
    Vec3f origin = { 0.0f, 0.0f, 0.0f };
    Vec3f originP;
    Vec3f xHat = { 1.0f, 0.0f, 0.0f };
    Vec3f xHatP;
    Vec3f yHat = { 0.0f, 1.0f, 0.0f };
    Vec3f yHatP;

    Matrix_MultVec3fNoTranslate(mtx, &origin, &originP);
    Matrix_MultVec3fNoTranslate(mtx, &xHat, &xHatP);
    Matrix_MultVec3fNoTranslate(mtx, &yHat, &yHatP);
    xHatP.x -= originP.x;
    xHatP.y -= originP.y;
    xHatP.z -= originP.z;
    yHatP.x -= originP.x;
    yHatP.y -= originP.y;
    yHatP.z -= originP.z;
    rot->z = Math_Atan2F(xHatP.y, xHatP.x);
    rot->y = -Math_Atan2F(xHatP.z, sqrtf(SQ(xHatP.x) + SQ(xHatP.y)));
    Matrix_RotateY(&invYZ, -rot->y, 0);
    Matrix_RotateZ(&invYZ, -rot->z, 1);
    Matrix_MultVec3fNoTranslate(&invYZ, &yHatP, &yHat);
    rot->x = Math_Atan2F(yHat.z, yHat.y) * M_RTOD;
    rot->y *= M_RTOD;
    rot->z *= M_RTOD;
}

void Matrix_LookAt(Matrix* mtx, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp,
                   u8 mode) {
    Matrix lookAt;

    guLookAtF(lookAt.m, xEye, yEye, zEye, xAt, yAt, zAt, xUp, yUp, zUp);
    Matrix_Mult(mtx, &lookAt, mode);
}

void Matrix_SetGfxMtx(Gfx** gfx) {
    Matrix_ToMtx(gGfxMtx);
    gSPMatrix((*gfx)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
}
