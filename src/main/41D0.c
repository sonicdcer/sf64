#include "global.h"

void func_800035D0(Gfx** dList) {
    gSPNumLights((*dList)++, 7);
    gSPLight((*dList)++, &gLight->l[0], 1);
    gSPLight((*dList)++, &gLight->l[1], 2);
    gSPLight((*dList)++, &gLight->l[2], 3);
    gSPLight((*dList)++, &gLight->l[3], 4);
    gSPLight((*dList)++, &gLight->l[4], 5);
    gSPLight((*dList)++, &gLight->l[5], 6);
    gSPLight((*dList)++, &gLight->l[6], 7);
    gSPLight((*dList)++, &gLight->a, 8);
    gLight++;
}

void Lights_SetOneLight(Gfx** dList, s32 dirX, s32 dirY, s32 dirZ, s32 colR, s32 colG, s32 colB, s32 ambR, s32 ambG,
                   s32 ambB) {
    s32 i;

    for (i = 0; i < 4; i++) {
        gLight->l[i].l.dir[0] = dirX;
        gLight->l[i].l.dir[1] = dirY;
        gLight->l[i].l.dir[2] = dirZ;
        gLight->l[i].l.col[0] = colR;
        gLight->l[i].l.col[1] = colG;
        gLight->l[i].l.col[2] = colB;
        gLight->l[i].l.colc[0] = colR;
        gLight->l[i].l.colc[1] = colG;
        gLight->l[i].l.colc[2] = colB;
    }
    for (i = 4; i < 7; i++) {
        gLight->l[i].l.dir[0] = dirX;
        gLight->l[i].l.dir[1] = dirY;
        gLight->l[i].l.dir[2] = dirZ;
        gLight->l[i].l.col[0] = 0;
        gLight->l[i].l.col[1] = 0;
        gLight->l[i].l.col[2] = 0;
        gLight->l[i].l.colc[0] = 0;
        gLight->l[i].l.colc[1] = 0;
        gLight->l[i].l.colc[2] = 0;
    }
    gLight->a.l.col[0] = ambR;
    gLight->a.l.col[1] = ambG;
    gLight->a.l.col[2] = ambB;
    gLight->a.l.colc[0] = ambR;
    gLight->a.l.colc[1] = ambG;
    gLight->a.l.colc[2] = ambB;
    func_800035D0(dList);
}

void func_800038AC(Gfx** dList, s32 dir1x, s32 dir1y, s32 dir1z, s32 dir2x, s32 dir2y, s32 dir2z, s32 col1r, s32 col1g,
                   s32 col1b, s32 col2r, s32 col2g, s32 col2b, s32 ambR, s32 ambG, s32 ambB) {
    s32 i;

    for (i = 0; i < 4; i++) {
        gLight->l[i].l.dir[0] = dir1x;
        gLight->l[i].l.dir[1] = dir1y;
        gLight->l[i].l.dir[2] = dir1z;
        gLight->l[i].l.col[0] = col1r;
        gLight->l[i].l.col[1] = col1g;
        gLight->l[i].l.col[2] = col1b;
        gLight->l[i].l.colc[0] = col1r;
        gLight->l[i].l.colc[1] = col1g;
        gLight->l[i].l.colc[2] = col1b;
    }
    for (i = 4; i < 7; i++) {
        gLight->l[i].l.dir[0] = dir2x;
        gLight->l[i].l.dir[1] = dir2y;
        gLight->l[i].l.dir[2] = dir2z;
        gLight->l[i].l.col[0] = col2r;
        gLight->l[i].l.col[1] = col2g;
        gLight->l[i].l.col[2] = col2b;
        gLight->l[i].l.colc[0] = col2r;
        gLight->l[i].l.colc[1] = col2g;
        gLight->l[i].l.colc[2] = col2b;
    }
    gLight->a.l.col[0] = ambR;
    gLight->a.l.col[1] = ambG;
    gLight->a.l.col[2] = ambB;
    gLight->a.l.colc[0] = ambR;
    gLight->a.l.colc[1] = ambG;
    gLight->a.l.colc[2] = ambB;
    func_800035D0(dList);
}
