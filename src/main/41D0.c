#include "global.h"

void func_800035D0(Gfx** dList) {
    gSPNumLights((*dList)++, 7);
    gSPLight((*dList)++, &D_80137E6C->l[0], 1);
    gSPLight((*dList)++, &D_80137E6C->l[1], 2);
    gSPLight((*dList)++, &D_80137E6C->l[2], 3);
    gSPLight((*dList)++, &D_80137E6C->l[3], 4);
    gSPLight((*dList)++, &D_80137E6C->l[4], 5);
    gSPLight((*dList)++, &D_80137E6C->l[5], 6);
    gSPLight((*dList)++, &D_80137E6C->l[6], 7);
    gSPLight((*dList)++, &D_80137E6C->a, 8);
    D_80137E6C++;
}

void func_8000372C(Gfx** dList, s32 dirX, s32 dirY, s32 dirZ, s32 colR, s32 colG, s32 colB, s32 ambR, s32 ambG,
                   s32 ambB) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_80137E6C->l[i].l.dir[0] = dirX;
        D_80137E6C->l[i].l.dir[1] = dirY;
        D_80137E6C->l[i].l.dir[2] = dirZ;
        D_80137E6C->l[i].l.col[0] = colR;
        D_80137E6C->l[i].l.col[1] = colG;
        D_80137E6C->l[i].l.col[2] = colB;
        D_80137E6C->l[i].l.colc[0] = colR;
        D_80137E6C->l[i].l.colc[1] = colG;
        D_80137E6C->l[i].l.colc[2] = colB;
    }
    for (i = 4; i < 7; i++) {
        D_80137E6C->l[i].l.dir[0] = dirX;
        D_80137E6C->l[i].l.dir[1] = dirY;
        D_80137E6C->l[i].l.dir[2] = dirZ;
        D_80137E6C->l[i].l.col[0] = 0;
        D_80137E6C->l[i].l.col[1] = 0;
        D_80137E6C->l[i].l.col[2] = 0;
        D_80137E6C->l[i].l.colc[0] = 0;
        D_80137E6C->l[i].l.colc[1] = 0;
        D_80137E6C->l[i].l.colc[2] = 0;
    }
    D_80137E6C->a.l.col[0] = ambR;
    D_80137E6C->a.l.col[1] = ambG;
    D_80137E6C->a.l.col[2] = ambB;
    D_80137E6C->a.l.colc[0] = ambR;
    D_80137E6C->a.l.colc[1] = ambG;
    D_80137E6C->a.l.colc[2] = ambB;
    func_800035D0(dList);
}

void func_800038AC(Gfx** dList, s32 dir1x, s32 dir1y, s32 dir1z, s32 dir2x, s32 dir2y, s32 dir2z, s32 col1r, s32 col1g,
                   s32 col1b, s32 col2r, s32 col2g, s32 col2b, s32 ambR, s32 ambG, s32 ambB) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_80137E6C->l[i].l.dir[0] = dir1x;
        D_80137E6C->l[i].l.dir[1] = dir1y;
        D_80137E6C->l[i].l.dir[2] = dir1z;
        D_80137E6C->l[i].l.col[0] = col1r;
        D_80137E6C->l[i].l.col[1] = col1g;
        D_80137E6C->l[i].l.col[2] = col1b;
        D_80137E6C->l[i].l.colc[0] = col1r;
        D_80137E6C->l[i].l.colc[1] = col1g;
        D_80137E6C->l[i].l.colc[2] = col1b;
    }
    for (i = 4; i < 7; i++) {
        D_80137E6C->l[i].l.dir[0] = dir2x;
        D_80137E6C->l[i].l.dir[1] = dir2y;
        D_80137E6C->l[i].l.dir[2] = dir2z;
        D_80137E6C->l[i].l.col[0] = col2r;
        D_80137E6C->l[i].l.col[1] = col2g;
        D_80137E6C->l[i].l.col[2] = col2b;
        D_80137E6C->l[i].l.colc[0] = col2r;
        D_80137E6C->l[i].l.colc[1] = col2g;
        D_80137E6C->l[i].l.colc[2] = col2b;
    }
    D_80137E6C->a.l.col[0] = ambR;
    D_80137E6C->a.l.col[1] = ambG;
    D_80137E6C->a.l.col[2] = ambB;
    D_80137E6C->a.l.colc[0] = ambR;
    D_80137E6C->a.l.colc[1] = ambG;
    D_80137E6C->a.l.colc[2] = ambB;
    func_800035D0(dList);
}
