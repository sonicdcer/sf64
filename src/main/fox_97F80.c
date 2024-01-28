#include "global.h"
#include "prevent_bss_reordering.h"

f32 __dx1;
f32 __dx2;
f32 __dy1;
f32 __dy2;
f32 __dz1;
f32 __dz2;
f32 __vtx0_x;
f32 __vtx0_y;
f32 __vtx0_z;
f32 __vtx1_x;
f32 __vtx1_y;
f32 __vtx1_z;
f32 __vtx2_x;
f32 __vtx2_y;
f32 __vtx2_z;
f32 __vtx3_x;
f32 __vtx3_y;
f32 __vtx3_z;
f32 __pos_x;
f32 __pos_z;

#define TRINORM_X(A, B, C) ((B##_y - A##_y) * (C##_z - B##_z) - (B##_z - A##_z) * (C##_y - B##_y))
#define TRINORM_Y(A, B, C) ((B##_z - A##_z) * (C##_x - B##_x) - (B##_x - A##_x) * (C##_z - B##_z))
#define TRINORM_Z(A, B, C) ((B##_x - A##_x) * (C##_y - B##_y) - (B##_y - A##_y) * (C##_x - B##_x))

void func_80097380(Plane* plane, Vec3s** tri) {
    Vec3s a;
    Vec3s b;
    Vec3s c;
    s32 new_var;
    Vec3s* tri2 = *tri;

    a.x = (*tri)->x;
    a.y = tri2->y; // fake
    a.z = (*tri)->z;
    tri++;
    b.x = (*tri)->x;
    b.y = (*tri)->y;
    b.z = (*tri)->z;
    tri++;
    c.x = (*tri)->x;
    c.y = (*tri)->y;
    c.z = (*tri)->z;
    tri++;

    __dx1 = b.x - a.x;
    __dx2 = c.x - b.x;
    __dy1 = b.y - a.y;
    do {
        __dy2 = c.y - b.y;
        __dz1 = b.z - a.z;
        __dz2 = c.z - b.z;
    } while (0); // wut

    plane->normal.x = (__dy1 * __dz2) - (__dz1 * __dy2);
    plane->normal.y = (__dz1 * __dx2) - (__dx1 * __dz2);
    plane->normal.z = (__dx1 * __dy2) - (__dy1 * __dx2);
    plane->dist =
        -a.x * b.y * c.z - b.x * c.y * a.z - c.x * a.y * b.z + a.x * c.y * b.z + b.x * a.y * c.z + c.x * b.y * a.z;
}

void func_80097558(Plane* plane, Vec3s** tri) {
    Vec3s a;
    Vec3s b;
    Vec3s c;
    s32 new_var;
    Vec3s* tri2 = *tri;

    a.x = (*tri)->x;
    a.y = tri2->y; // fake
    a.z = (*tri)->z;
    tri++;
    b.x = (*tri)->x;
    b.y = (*tri)->y;
    b.z = (*tri)->z;
    tri++;
    c.x = (*tri)->x;
    c.y = (*tri)->y;
    c.z = (*tri)->z;
    tri++;

    __dx1 = b.x - a.x;
    __dx2 = c.x - b.x;
    __dy1 = b.y - a.y;
    do {
        __dy2 = c.y - b.y;
        __dz1 = b.z - a.z;
        __dz2 = c.z - b.z;
    } while (0); // wut

    plane->normal.x = (__dy1 * __dz2) - (__dz1 * __dy2);
    plane->normal.y = (__dz1 * __dx2) - (__dx1 * __dz2);
    plane->normal.z = (__dx1 * __dy2) - (__dy1 * __dx2);
    plane->dist =
        -a.x * b.y * c.z - b.x * c.y * a.z - c.x * a.y * b.z + a.x * c.y * b.z + b.x * a.y * c.z + c.x * b.y * a.z;
}

void func_80097730(Vec3f* norm, Vec3f* tri) {
    __vtx0_x = tri->x;
    __vtx0_y = tri->y;
    __vtx0_z = tri->z;
    tri++;

    __vtx1_x = tri->x;
    __vtx1_y = tri->y;
    __vtx1_z = tri->z;
    tri++;

    __vtx2_x = tri->x;
    __vtx2_y = tri->y;
    __vtx2_z = tri->z;

    __dx1 = __vtx1_x - __vtx0_x;
    __dx2 = __vtx2_x - __vtx1_x;
    __dy1 = __vtx1_y - __vtx0_y;
    __dy2 = __vtx2_y - __vtx1_y;
    __dz1 = __vtx1_z - __vtx0_z;
    __dz2 = __vtx2_z - __vtx1_z;
    norm->x = (__dy1 * __dz2) - (__dz1 * __dy2);
    norm->y = (__dz1 * __dx2) - (__dx1 * __dz2);
    norm->z = (__dx1 * __dy2) - (__dy1 * __dx2);
}

void func_800978C4(Vec3f* norm, s32 ax, s32 ay, s32 az, s32 bx, s32 by, s32 bz, s32 cx, s32 cy, s32 cz) {
    __dx1 = bx - ax;
    __dx2 = cx - bx;
    __dy1 = by - ay;
    __dy2 = cy - by;
    __dz1 = bz - az;
    __dz2 = cz - bz;

    norm->x = (__dy1 * __dz2) - (__dz1 * __dy2);
    norm->y = (__dz1 * __dx2) - (__dx1 * __dz2);
    norm->z = (__dx1 * __dy2) - (__dy1 * __dx2);
}

void func_800979E8(Vtx_tn* tri) {
    s32 i;
    Vec3f temp;
    f32 temp_fv0;

    tri++;
    tri--; // fake and weird

    __vtx0_x = tri[0].ob[0];
    __vtx0_y = tri[0].ob[1];
    __vtx0_z = tri[0].ob[2];
    __vtx1_x = tri[1].ob[0];
    __vtx1_y = tri[1].ob[1];
    __vtx1_z = tri[1].ob[2];
    __vtx2_x = tri[2].ob[0];
    __vtx2_y = tri[2].ob[1];
    __vtx2_z = tri[2].ob[2];

    __dx1 = __vtx1_x - __vtx0_x;
    __dx2 = __vtx2_x - __vtx1_x;
    __dy1 = __vtx1_y - __vtx0_y;
    __dy2 = __vtx2_y - __vtx1_y;
    __dz1 = __vtx1_z - __vtx0_z;
    __dz2 = __vtx2_z - __vtx1_z;

    temp.x = (__dy1 * __dz2) - (__dz1 * __dy2);
    temp.y = (__dz1 * __dx2) - (__dx1 * __dz2);
    temp.z = (__dx1 * __dy2) - (__dy1 * __dx2);
    temp_fv0 = sqrtf(VEC3F_SQ(temp));
    if (temp_fv0 != 0.0f) {
        temp.x = temp.x * 127.0f / temp_fv0;
        temp.y = temp.y * 127.0f / temp_fv0;
        temp.z = temp.z * 127.0f / temp_fv0;
        for (i = 0; i < 3; i++) {
            tri->n[0] = temp.x;
            tri->n[1] = temp.y;
            tri->n[2] = temp.z;
            tri++;
        }
    }
}

void func_80097C88(Vec3f* norms, Vtx_tn* quad) {
    f32 temp_fv0;

    __vtx0_x = quad[3].ob[0];
    __vtx0_y = quad[3].ob[1];
    __vtx0_z = quad[3].ob[2];
    __vtx1_x = quad->ob[0];
    __vtx1_y = quad->ob[1];
    __vtx1_z = quad->ob[2];
    quad++;
    __vtx2_x = quad->ob[0];
    __vtx2_y = quad->ob[1];
    __vtx2_z = quad->ob[2];

    __dx1 = __vtx1_x - __vtx0_x;
    __dx2 = __vtx2_x - __vtx1_x;
    __dy1 = __vtx1_y - __vtx0_y;
    __dy2 = __vtx2_y - __vtx1_y;
    __dz1 = __vtx1_z - __vtx0_z;
    __dz2 = __vtx2_z - __vtx1_z;
    norms->x = (__dy1 * __dz2) - (__dz1 * __dy2);
    norms->y = (__dz1 * __dx2) - (__dx1 * __dz2);
    norms->z = (__dx1 * __dy2) - (__dy1 * __dx2);
    temp_fv0 = sqrtf(SQ(norms->x) + SQ(norms->y) + SQ(norms->z));
    if (temp_fv0 != 0.0f) {
        norms->x = (norms->x / temp_fv0) * 127.0f;
        norms->y = (norms->y / temp_fv0) * 127.0f;
        norms->z = (norms->z / temp_fv0) * 127.0f;
    }
    norms++;
    quad++;
    __vtx1_x = __vtx2_x;
    __vtx1_y = __vtx2_y;
    __vtx1_z = __vtx2_z;

    __vtx2_x = quad->ob[0];
    __vtx2_y = quad->ob[1];
    __vtx2_z = quad->ob[2];
    __dx1 = __vtx1_x - __vtx0_x;
    __dx2 = __vtx2_x - __vtx1_x;
    __dy1 = __vtx1_y - __vtx0_y;
    __dy2 = __vtx2_y - __vtx1_y;
    __dz1 = __vtx1_z - __vtx0_z;
    __dz2 = __vtx2_z - __vtx1_z;
    norms->x = (__dy1 * __dz2) - (__dz1 * __dy2);
    norms->y = (__dz1 * __dx2) - (__dx1 * __dz2);
    norms->z = (__dx1 * __dy2) - (__dy1 * __dx2);
    temp_fv0 = sqrtf(SQ(norms->x) + SQ(norms->y) + SQ(norms->z));
    if (temp_fv0 != 0.0f) {
        norms->x = (norms->x / temp_fv0) * 127.0f;
        norms->y = (norms->y / temp_fv0) * 127.0f;
        norms->z = (norms->z / temp_fv0) * 127.0f;
    }
}

s32 func_8009808C(Vec3f* pos, Vtx_tn* quad, Vec3f* norm) {
    f32 temp_fv0;
    s32 var_v1 = 0;
    f32 test1;
    f32 test2;

    __vtx0_x = quad[0].ob[0];
    __vtx0_y = quad[0].ob[1];
    __vtx0_z = quad[0].ob[2];
    __vtx1_x = quad[1].ob[0];
    __vtx1_y = quad[1].ob[1];
    __vtx1_z = quad[1].ob[2];
    __vtx2_x = quad[2].ob[0];
    __vtx2_y = quad[2].ob[1];
    __vtx2_z = quad[2].ob[2];
    __vtx3_x = quad[3].ob[0];
    __vtx3_y = quad[3].ob[1];
    __vtx3_z = quad[3].ob[2];
    __pos_x = pos->x;
    __pos_z = pos->z;
    test1 = TRINORM_Y(__vtx0, __vtx1, __pos);
    if (test1 >= 0.0f) {
        test1 = TRINORM_Y(__vtx1, __vtx2, __pos);
        if (test1 >= 0.0f) {
            test1 = TRINORM_Y(__vtx2, __vtx0, __pos);
            if (test1 >= 0.0f) {
                norm->x = TRINORM_X(__vtx0, __vtx1, __vtx2);
                norm->y = TRINORM_Y(__vtx0, __vtx1, __vtx2);
                norm->z = TRINORM_Z(__vtx0, __vtx1, __vtx2);
                if ((norm->x != 0.0f) || (norm->y != 0.0f) || (norm->z != 0.0f)) {
                    var_v1 = 1;
                }
            }
        }
    }
    if (var_v1 == 0) {
        test1 = TRINORM_Y(__vtx0, __vtx2, __pos);
        if ((test1 >= 0.0f)) {
            test1 = TRINORM_Y(__vtx2, __vtx3, __pos);
            if (test1 >= 0.0f) {
                test1 = TRINORM_Y(__vtx3, __vtx0, __pos);
                if (test1 >= 0.0f) {
                    norm->x = TRINORM_X(__vtx0, __vtx2, __vtx3);
                    norm->y = TRINORM_Y(__vtx0, __vtx2, __vtx3);
                    norm->z = TRINORM_Z(__vtx0, __vtx2, __vtx3);
                    if ((norm->x != 0.0f) || (norm->y != 0.0f) || (norm->z != 0.0f)) {
                        var_v1 = 2;
                    }
                }
            }
        }
    }

    if (var_v1 != 0) {
        temp_fv0 = sqrtf(SQ(norm->x) + SQ(norm->y) + SQ(norm->z));
        if (temp_fv0 == 0) {
            return 0;
        }
        norm->x = (norm->x / temp_fv0) * 127.0f;
        norm->y = (norm->y / temp_fv0) * 127.0f;
        norm->z = (norm->z / temp_fv0) * 127.0f;
    }
    return var_v1;
}

bool func_800985CC(Vec3f* vec, Vtx_tn* tri) {
    f32 sp24;
    f32 sp20;

    __pos_x = __vtx0_x = tri->ob[0];
    __pos_z = __vtx0_z = tri->ob[2];
    tri++;
    __vtx1_x = tri->ob[0];
    __vtx1_z = tri->ob[2];
    __vtx2_x = vec->x;
    __vtx2_z = vec->z;
    tri++;

    sp24 = TRINORM_Y(__vtx0, __vtx1, __vtx2);

    __vtx0_x = tri->ob[0];
    __vtx0_z = tri->ob[2];
    sp20 = TRINORM_Y(__vtx1, __vtx0, __vtx2);

    if (SIGN_OF(sp24) != SIGN_OF(sp20)) {
        return false;
    }
    sp24 = TRINORM_Y(__vtx0, __pos, __vtx2);

    if (SIGN_OF(sp24) != SIGN_OF(sp20)) {
        return false;
    }
    return true;
}

// Plane from normal and point
void func_80098860(Plane* plane, Vec3f* point, Vec3f* normal) {
    plane->normal.x = normal->x;
    plane->normal.y = normal->y;
    plane->normal.z = normal->z;
    plane->dist = -normal->x * point->x - normal->y * point->y - normal->z * point->z;
}

// y dist to plane
s32 func_800988B4(Vec3f* vec, Plane* plane) {
    return (-plane->normal.x * vec->x - plane->normal.z * vec->z - plane->dist) / plane->normal.y;
}

// z dist to plane
s32 func_800988F8(Vec3f* vec, Plane* plane) {
    return (-plane->normal.x * vec->x - plane->normal.y * vec->y - plane->dist) / plane->normal.z;
}

// x dist to plane
s32 func_8009893C(Vec3f* vec, Plane* plane) {
    return (-plane->normal.y * vec->y - plane->normal.z * vec->z - plane->dist) / plane->normal.x;
}

#define INTSIGN_OF(x) ((((x) >= 1.0f) || ((x) <= -1.0f)) ? (f32) SIGN_OF(x) : 0.0f)

s32 func_80098980(Vec3f* out, Vec3s** tri, Vec3f* vec) {
    s32 signa2y;
    s32 signa2z;
    s32 signCross;
    s32 signa2x;
    f32 cross;
    s32 var_v1;
    Vec3s* pad;
    f32 t0x;
    f32 t0y;
    f32 t0z;
    f32 t1x;
    f32 t1y;
    f32 t1z;
    f32 t2x;
    f32 t2y;
    f32 t2z;
    f32 a0x;
    f32 a0y;
    f32 a0z;
    f32 d01x;
    f32 d12x;
    f32 d20x;
    f32 d01y;
    f32 d12y;
    f32 d20y;
    f32 d01z;
    f32 d12z;
    f32 d20z;

    var_v1 = 0;

    pad = *tri++;
    if (1) { // some sort of macro?
        t0x = pad->x;
        t0y = pad->y;
        t0z = pad->z;

        pad = *tri++;

        t1x = pad->x;
        t1y = pad->y;
        t1z = pad->z;

        pad = *tri++;

        t2x = pad->x;
        t2y = pad->y;
        t2z = pad->z;

        a0x = out->x;
        a0y = out->y;
        a0z = out->z;

        d01x = t1x - t0x;
        d12x = t2x - t1x;
        d20x = t0x - t2x;
        d01y = t1y - t0y;
        d12y = t2y - t1y;
        d20y = t0y - t2y;
        d01z = t1z - t0z;
        d12z = t2z - t1z;
        d20z = t0z - t2z;

        signa2x = SIGN_OF(vec->x);
        signa2y = SIGN_OF(vec->y);
        signa2z = SIGN_OF(vec->z);
    }

    cross = ((a0z - t1z) * d01y) - (d01z * (a0y - t1y));
    signCross = INTSIGN_OF(cross);
    if ((signa2x == 0) || (signCross == signa2x) || (signCross == 0)) {
        cross = ((a0z - t2z) * d12y) - (d12z * (a0y - t2y));
        signCross = INTSIGN_OF(cross);
        if ((signa2x == 0) || (signCross == signa2x) || (signCross == 0)) {
            cross = ((a0z - t0z) * d20y) - (d20z * (a0y - t0y));
            signCross = INTSIGN_OF(cross);
            if ((signa2x == 0) || (signCross == signa2x) || (signCross == 0)) {
                cross = ((a0x - t1x) * d01z) - (d01x * (a0z - t1z));
                signCross = INTSIGN_OF(cross);
                if ((signa2y == 0) || (signCross == signa2y) || (signCross == 0)) {
                    cross = ((a0x - t2x) * d12z) - (d12x * (a0z - t2z));
                    signCross = INTSIGN_OF(cross);
                    if ((signa2y == 0) || (signCross == signa2y) || (signCross == 0)) {
                        cross = ((a0x - t0x) * d20z) - (d20x * (a0z - t0z));
                        signCross = INTSIGN_OF(cross);
                        if ((signa2y == 0) || (signCross == signa2y) || (signCross == 0)) {
                            cross = ((a0y - t1y) * d01x) - (d01y * (a0x - t1x));
                            signCross = INTSIGN_OF(cross);
                            if ((signa2z == 0) || (signCross == signa2z) || (signCross == 0)) {
                                cross = ((a0y - t2y) * d12x) - (d12y * (a0x - t2x));
                                signCross = INTSIGN_OF(cross);
                                if ((signa2z == 0) || (signCross == signa2z) || (signCross == 0)) {
                                    cross = ((a0y - t0y) * d20x) - (d20y * (a0x - t0x));
                                    signCross = INTSIGN_OF(cross);
                                    if ((signa2z == 0) || (signCross == 0) || (signCross == signa2z)) {
                                        var_v1 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return var_v1;
}

bool func_80099254(Vec3f* arg0, Vec3f* arg1, Vec3f* arg2, CollisionHeader* arg3, Vec3f* arg4, f32* arg5) {
    Vec3s* sp12C[3];
    Vec3f temp_V3f1;
    s32 pad11C;
    s32 pad118;
    Plane sp108;
    f32 temp_fs0;
    s32 sp100 = false;
    s32 temp_v0;
    CollisionPoly* var_s0;
    Vec3s* temp_s2;
    s32 spF0;
    f32 spEC;
    s32 i;
    Vec3f spDC;
    f32* padD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    Vec3f min;
    Vec3f max;

    arg4->x = arg4->y = arg4->z = arg5[0] = arg5[1] = 0.0f;
    temp_V3f1.x = arg0->x - arg1->x;
    temp_V3f1.y = arg0->y - arg1->y;
    temp_V3f1.z = arg0->z - arg1->z;
    min.x = arg3->min.x;
    min.y = arg3->min.y;
    min.z = arg3->min.z;
    max.x = arg3->max.x;
    max.y = arg3->max.y;
    max.z = arg3->max.z;

    if ((temp_V3f1.x < min.x) || (temp_V3f1.y < min.y) || (temp_V3f1.z < min.z) || (max.x < temp_V3f1.x) ||
        (max.y < temp_V3f1.y) || ((max.z < temp_V3f1.z))) {
        return false;
    }
    if ((arg2->x == 0.0f) && (arg2->y == 0.0f) && (arg2->z == 0.0f)) {
        arg2->y = -5.0f;
    }
    spBC = temp_V3f1.x;
    spB4 = temp_V3f1.y;
    spAC = temp_V3f1.z;
    spB8 = temp_V3f1.x - arg2->x;
    spB0 = temp_V3f1.y - arg2->y;
    spA8 = temp_V3f1.z - arg2->z;

    if (spB8 < spBC) {
        temp_v0 = spB8;
        spB8 = spBC;
        spBC = temp_v0;
    }
    if (spB0 < spB4) {
        temp_v0 = spB0;
        spB0 = spB4;
        spB4 = temp_v0;
    }

    if (spA8 < spAC) {
        temp_v0 = spA8;
        spA8 = spAC;
        spAC = temp_v0;
    }

    var_s0 = SEGMENTED_TO_VIRTUAL(arg3->polys);
    temp_s2 = SEGMENTED_TO_VIRTUAL(arg3->mesh);
    spF0 = arg3->polyCount;
    spEC = sqrtf(SQ(arg2->x) + SQ(arg2->y) + SQ(arg2->z));

    for (i = 0; i < spF0; i++, var_s0++) {
        sp12C[0] = &temp_s2[var_s0->vtx[0]];
        sp12C[1] = &temp_s2[var_s0->vtx[1]];
        sp12C[2] = &temp_s2[var_s0->vtx[2]];
        Math_MinMax(&spD4, &spD0, sp12C[0]->x, sp12C[1]->x, sp12C[2]->x);
        Math_MinMax(&spCC, &spC8, sp12C[0]->y, sp12C[1]->y, sp12C[2]->y);
        Math_MinMax(&spC4, &spC0, sp12C[0]->z, sp12C[1]->z, sp12C[2]->z);
        if ((spBC < spD0) && (spD4 < spB8) && (spB4 < spC8) && (spCC < spB0) && (spAC < spC0) && (spC4 < spA8)) {
            sp108.normal.x = var_s0->normal.x;
            sp108.normal.y = var_s0->normal.y;
            sp108.normal.z = var_s0->normal.z;
            sp108.dist = var_s0->dist;
            if ((DOT_XYZ(sp108.normal, temp_V3f1) + sp108.dist) <= 0.0f) {
                temp_fs0 = sp108.normal.x * arg2->x + sp108.normal.y * arg2->y + sp108.normal.z * arg2->z;
                if (Math_FAcosF(temp_fs0 / (sqrtf(VEC3F_SQ(sp108.normal)) * spEC)) > M_PI / 2) {
                    temp_fs0 = (DOT_XYZ(sp108.normal, temp_V3f1) + sp108.dist) / temp_fs0;
                    spDC.x = temp_V3f1.x - (arg2->x * temp_fs0);
                    spDC.y = temp_V3f1.y - (arg2->y * temp_fs0);
                    spDC.z = temp_V3f1.z - (arg2->z * temp_fs0);
                    if (func_80098980(&spDC, sp12C, &sp108.normal) == 1) {
                        arg4->x = arg1->x + spDC.x;
                        arg4->y = arg1->y + spDC.y;
                        arg4->z = arg1->z + spDC.z;
                        if (sp108.normal.x != 0.0) {
                            sp108.normal.x = -sp108.dist / sp108.normal.x;
                        }
                        if (sp108.normal.y != 0.0f) {
                            sp108.normal.y = -sp108.dist / sp108.normal.y;
                        }
                        if (sp108.normal.z != 0.0f) {
                            sp108.normal.z = -sp108.dist / sp108.normal.z;
                        }
                        arg5[0] = Math_Atan2F_XY(sp108.normal.y, sp108.normal.z);
                        if (sp108.normal.z != 0.0f) {
                            arg5[1] =
                                -Math_Atan2F_XY(__sinf(Math_Atan2F_XY(sp108.normal.y, sp108.normal.z)) * sp108.normal.z,
                                                sp108.normal.x);
                        } else if (arg5[0] >= M_PI) {
                            arg5[1] = Math_Atan2F_XY(sp108.normal.y, sp108.normal.x);
                        } else {
                            arg5[1] = -Math_Atan2F_XY(sp108.normal.y, sp108.normal.x);
                        }

                        sp100 = true;
                        break;
                    }
                }
            }
        }
    }
    return sp100;
}

bool func_800998FC(Vec3f* arg0, Vec3f* arg1, Vec3f* arg2, s32 arg3, Vec3f* arg4, f32* arg5) {
    return func_80099254(arg0, arg1, arg2, SEGMENTED_TO_VIRTUAL(&D_800D2B38[arg3]), arg4, arg5);
}
