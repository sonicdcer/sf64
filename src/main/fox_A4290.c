#include "global.h"

#include "fox_A4290_colheaders.c"

bool func_800A36FC(Vec3f* arg0, Vec3f* arg1, CollisionHeader2* arg2, Vec3f* arg3);
bool func_800A3A74(Vec3f*, Vec3f** arg1, Vec3f*);

bool func_800A3690(Vec3f* arg0, Vec3f* arg1, s32 arg2, Vec3f* arg3) {
    return func_800A36FC(arg0, arg1, SEGMENTED_TO_VIRTUAL(&D_800D2CA0[arg2]), arg3);
}

bool func_800A36FC(Vec3f* arg0, Vec3f* arg1, CollisionHeader2* arg2, Vec3f* arg3) {
    Vec3f sp7C;
    Plane sp6C;
    s32 var_v1;
    s32 i;
    s32 j;
    Vec3f* sp54[3];
    Vec3f sp48;
    Vec3f sp3C;
    s32 sp38 = false;
    s32 sp34;
    s16(*sp30)[3];
    Vec3f* sp2C;

    sp7C.x = arg0->x - arg1->x;
    sp7C.y = arg0->y - arg1->y;
    sp7C.z = arg0->z - arg1->z;
    if ((sp7C.x < arg2->min.x) || (sp7C.y < arg2->min.y) || (sp7C.z < arg2->min.z) || (arg2->max.x < sp7C.x) ||
        (arg2->max.y < sp7C.y) || (arg2->max.z < sp7C.z)) {
        return false;
    }
    var_v1 = false;
    sp34 = arg2->polyCount;
    sp30 = SEGMENTED_TO_VIRTUAL(arg2->polys);
    sp2C = SEGMENTED_TO_VIRTUAL(arg2->mesh);
    for (i = 0; i < sp34; i++, sp30++) {
        for (j = 0; j < 3; j++) {
            sp54[j] = &sp2C[(*sp30)[j]];
        }
        var_v1 = func_800A3A74(&sp7C, sp54, &sp48);
        if (var_v1) {
            break;
        }
    }
    if (var_v1) {
        sp3C.x = sp54[0]->x;
        sp3C.y = sp54[0]->y;
        sp3C.z = sp54[0]->z;
        func_80098860(&sp6C, &sp3C, &sp48);
        arg3->y = func_800988B4(&sp7C, &sp6C);
        if (sp6C.normal.x != 0.0f) {
            sp48.x = -sp6C.dist / sp6C.normal.x;
        } else {
            sp48.x = 0.0f;
        }
        if (sp6C.normal.y != 0.0f) {
            sp48.y = -sp6C.dist / sp6C.normal.y;
        } else {
            sp48.y = 0.0f;
        }
        if (sp6C.normal.z != 0.0f) {
            sp48.z = -sp6C.dist / sp6C.normal.z;
        } else {
            sp48.z = 0.0f;
        }
        arg3->x = Math_Atan2F_XY(sp48.y, sp48.z);
        if (sp48.z != 0.0f) {
            arg3->z = -Math_Atan2F_XY(__sinf(Math_Atan2F_XY(sp48.y, sp48.z)) * sp48.z, sp48.x);
        } else if (arg3->x >= M_PI) {
            arg3->z = Math_Atan2F_XY(sp48.y, sp48.x);
        } else {
            arg3->z = -Math_Atan2F_XY(sp48.y, sp48.x);
        }
        if ((arg0->y <= arg3->y) || (gCurrentLevel == LEVEL_MACBETH)) {
            sp38 = true;
        }
    }
    return sp38;
}

// Checks if arg0 is above the triangle arg1. If so, returns the triangle normal in arg2.
s32 func_800A3A74(Vec3f* arg0, Vec3f** arg1, Vec3f* arg2) {
    s32 pad;
    f32 temp1;
    s32 var_v1;
    f32 temp_fv0;
    Vec3f v1;
    Vec3f v2;
    Vec3f v3;
    f32 a0x;
    f32 a0y;

    var_v1 = false;
    v1.x = (*arg1)->x;
    v1.y = (*arg1)->y;
    v1.z = (*arg1)->z;
    arg1++;
    v2.x = (*arg1)->x;
    v2.y = (*arg1)->y;
    v2.z = (*arg1)->z;
    arg1++;
    v3.x = (*arg1)->x;
    v3.y = (*arg1)->y;
    v3.z = (*arg1)->z;
    arg1++;

    a0x = arg0->x;
    a0y = arg0->z;
    temp1 = ((v2.z - v1.z) * (a0x - v2.x)) - ((v2.x - v1.x) * (a0y - v2.z));
    if (temp1 >= 0.0f) {
        if (((v3.x - v2.x) * (a0y - v3.z)) <= ((v3.z - v2.z) * (a0x - v3.x))) {
            if (((v1.x - v3.x) * (a0y - v1.z)) <= ((v1.z - v3.z) * (a0x - v1.x))) {
                var_v1 = true;
                arg2->x = ((v2.y - v1.y) * (v3.z - v2.z)) - ((v2.z - v1.z) * (v3.y - v2.y));
                arg2->y = ((v2.z - v1.z) * (v3.x - v2.x)) - ((v2.x - v1.x) * (v3.z - v2.z));
                arg2->z = ((v2.x - v1.x) * (v3.y - v2.y)) - ((v2.y - v1.y) * (v3.x - v2.x));
                if ((arg2->x != 0.0f) || (arg2->y != 0.0f) || (arg2->z != 0.0f)) {
                    temp_fv0 = sqrtf(SQ(arg2->x) + SQ(arg2->y) + SQ(arg2->z));
                    if (temp_fv0 != 0) {
                        arg2->x = (arg2->x / temp_fv0) * 127.0f;
                        arg2->y = (arg2->y / temp_fv0) * 127.0f;
                        arg2->z = (arg2->z / temp_fv0) * 127.0f;
                    }
                }
            }
        }
    }
    return var_v1;
}
