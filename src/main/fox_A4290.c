#include "global.h"

#include "fox_A4290_colheaders.c"

bool func_800A36FC(Vec3f* arg0, Vec3f* arg1, CollisionHeader2* arg2, Vec3f* arg3);
bool func_800A3A74(Vec3f*, Vec3f** arg1, Vec3f*);

bool func_800A3690(Vec3f* arg0, Vec3f* arg1, s32 arg2, Vec3f* arg3) {
    return func_800A36FC(arg0, arg1, SEGMENTED_TO_VIRTUAL(&D_800D2CA0[arg2]), arg3);
}

bool func_800A36FC(Vec3f* arg0, Vec3f* arg1, CollisionHeader2* arg2, Vec3f* arg3) {
    Vec3f pos;
    Plane triPlane;
    bool above;
    s32 i;
    s32 j;
    Vec3f* tri[3];
    Vec3f norm;
    Vec3f vtx;
    s32 sp38 = false;
    s32 count;
    Triangle* polys;
    Vec3f* mesh;

    pos.x = arg0->x - arg1->x;
    pos.y = arg0->y - arg1->y;
    pos.z = arg0->z - arg1->z;
    if ((pos.x < arg2->min.x) || (pos.y < arg2->min.y) || (pos.z < arg2->min.z) || (arg2->max.x < pos.x) ||
        (arg2->max.y < pos.y) || (arg2->max.z < pos.z)) {
        return false;
    }
    above = false;
    count = arg2->polyCount;
    polys = SEGMENTED_TO_VIRTUAL(arg2->polys);
    mesh = SEGMENTED_TO_VIRTUAL(arg2->mesh);
    for (i = 0; i < count; i++, polys++) {
        for (j = 0; j < 3; j++) {
            tri[j] = &mesh[polys->vtx[j]];
        }
        above = func_800A3A74(&pos, tri, &norm);
        if (above) {
            break;
        }
    }
    if (above) {
        vtx.x = tri[0]->x;
        vtx.y = tri[0]->y;
        vtx.z = tri[0]->z;
        func_80098860(&triPlane, &vtx, &norm);
        arg3->y = func_800988B4(&pos, &triPlane);
        if (triPlane.normal.x != 0.0f) {
            norm.x = -triPlane.dist / triPlane.normal.x;
        } else {
            norm.x = 0.0f;
        }
        if (triPlane.normal.y != 0.0f) {
            norm.y = -triPlane.dist / triPlane.normal.y;
        } else {
            norm.y = 0.0f;
        }
        if (triPlane.normal.z != 0.0f) {
            norm.z = -triPlane.dist / triPlane.normal.z;
        } else {
            norm.z = 0.0f;
        }
        arg3->x = Math_Atan2F_XY(norm.y, norm.z);
        if (norm.z != 0.0f) {
            arg3->z = -Math_Atan2F_XY(__sinf(Math_Atan2F_XY(norm.y, norm.z)) * norm.z, norm.x);
        } else if (arg3->x >= M_PI) {
            arg3->z = Math_Atan2F_XY(norm.y, norm.x);
        } else {
            arg3->z = -Math_Atan2F_XY(norm.y, norm.x);
        }
        if ((arg0->y <= arg3->y) || (gCurrentLevel == LEVEL_MACBETH)) {
            sp38 = true;
        }
    }
    return sp38;
}

// Checks if point is above the triangle tri. If so, returns the triangle normal in arg2.
s32 func_800A3A74(Vec3f* point, Vec3f** tri, Vec3f* norm) {
    s32 pad;
    f32 temp1;
    bool ret = false;
    f32 temp_fv0;
    Vec3f vtx1;
    Vec3f vtx2;
    Vec3f vtx3;
    f32 ptx;
    f32 ptz;

    vtx1.x = (*tri)->x;
    vtx1.y = (*tri)->y;
    vtx1.z = (*tri)->z;
    tri++;
    vtx2.x = (*tri)->x;
    vtx2.y = (*tri)->y;
    vtx2.z = (*tri)->z;
    tri++;
    vtx3.x = (*tri)->x;
    vtx3.y = (*tri)->y;
    vtx3.z = (*tri)->z;
    tri++;

    ptx = point->x;
    ptz = point->z;
    temp1 = ((vtx2.z - vtx1.z) * (ptx - vtx2.x)) - ((vtx2.x - vtx1.x) * (ptz - vtx2.z));
    if (temp1 >= 0.0f) {
        if (((vtx3.x - vtx2.x) * (ptz - vtx3.z)) <= ((vtx3.z - vtx2.z) * (ptx - vtx3.x))) {
            if (((vtx1.x - vtx3.x) * (ptz - vtx1.z)) <= ((vtx1.z - vtx3.z) * (ptx - vtx1.x))) {
                ret = true;
                norm->x = ((vtx2.y - vtx1.y) * (vtx3.z - vtx2.z)) - ((vtx2.z - vtx1.z) * (vtx3.y - vtx2.y));
                norm->y = ((vtx2.z - vtx1.z) * (vtx3.x - vtx2.x)) - ((vtx2.x - vtx1.x) * (vtx3.z - vtx2.z));
                norm->z = ((vtx2.x - vtx1.x) * (vtx3.y - vtx2.y)) - ((vtx2.y - vtx1.y) * (vtx3.x - vtx2.x));
                if ((norm->x != 0.0f) || (norm->y != 0.0f) || (norm->z != 0.0f)) {
                    temp_fv0 = sqrtf(SQ(norm->x) + SQ(norm->y) + SQ(norm->z));
                    if (temp_fv0 != 0) {
                        norm->x = (norm->x / temp_fv0) * 127.0f;
                        norm->y = (norm->y / temp_fv0) * 127.0f;
                        norm->z = (norm->z / temp_fv0) * 127.0f;
                    }
                }
            }
        }
    }
    return ret;
}
