/**************************************************************************
 *									  *
 *		 Copyright (C) 1994, Silicon Graphics, Inc.		  *
 *									  *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright law.  They  may  not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *									  *
 **************************************************************************/

#include "PR/ultratypes.h"
#include "PR/guint.h"

void guMtxF2L(float mf[4][4], Mtx* m) {
    int i, j;
    int e1, e2;
    int *ai, *af;

    ai = (int*) &m->m[0][0];
    af = (int*) &m->m[2][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            e1 = FTOFIX32(mf[i][j * 2]);
            e2 = FTOFIX32(mf[i][j * 2 + 1]);
            *(ai++) = (e1 & 0xffff0000) | ((e2 >> 16) & 0xffff);
            *(af++) = ((e1 << 16) & 0xffff0000) | (e2 & 0xffff);
        }
    }
}

// This function seems to use the SM64 version of the guMtxF2L function
void guMtxL2F(float mf[4][4], Mtx* m) {
    int r, c;
    u32 tmp1;
    u32 tmp2;
    u32* m1;
    u32* m2;
    s32 stmp1, stmp2;
    m1 = (u32*) &m->m[0][0];
    m2 = (u32*) &m->m[2][0];
    for (r = 0; r < 4; r++) {
        for (c = 0; c < 2; c++) {
            tmp1 = (*m1 & 0xffff0000) | ((*m2 >> 0x10) & 0xffff);
            tmp2 = ((*m1++ << 0x10) & 0xffff0000) | (*m2++ & 0xffff);
            stmp1 = *(s32*) &tmp1;
            stmp2 = *(s32*) &tmp2;
            mf[r][c * 2 + 0] = stmp1 / 65536.0f;
            mf[r][c * 2 + 1] = stmp2 / 65536.0f;
        }
    }
}

void guMtxIdentF(float mf[4][4]) {
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                mf[i][j] = 1.0;
            } else {
                mf[i][j] = 0.0;
            }
        }
    }
}

void guMtxIdent(Mtx* m) {
    float mf[4][4];

    guMtxIdentF(mf);

    guMtxF2L(mf, m);
}
