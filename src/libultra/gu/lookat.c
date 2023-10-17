#include "global.h"
#include "PR/gbi.h"

typedef float Matrix[4][4];

#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/gu/lookat/guLookAtF.s")

#if 0
void guLookAt(Mtx* m, float xEye, float yEye, float zEye, float xAt, float yAt, float zAt, float xUp, float yUp,
              float zUp) {
    Matrix mf;

    guLookAtF(mf, xEye, yEye, zEye, xAt, yAt, zAt, xUp, yUp, zUp);

    guMtxF2L(mf, m);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/libultra/gu/lookat/guLookAt.s")
#endif

