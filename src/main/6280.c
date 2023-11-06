#include "global.h"

// https://decomp.me/scratch/8H8k4 100%
// #pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80005680.s")

void func_80005680(Matrix* dst, Matrix* src) {
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

void func_80005708(Matrix** mtx) {
    func_80005680(*mtx + 1, *mtx);
    *mtx += 1;
}

void func_80005740(Matrix** mtx) {
    *mtx -= 1;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80005754.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80005B00.s")

// https://decomp.me/scratch/v4KEJ 91%
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80005C34.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80005D44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80005E90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80005FE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_8000612C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80006500.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_8000671C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80006970.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80006A20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80006AB8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80006C7C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80006E3C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/6280/func_80006EB8.s")
