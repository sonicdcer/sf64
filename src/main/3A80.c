#include "global.h"

s32 func_80002E80(char* dst, char* fmt, va_list args) {
    return vsprintf(dst, fmt, args);
}

void func_80002EA0(s32 arg0, void (**arg1)(s32, s32), s32 arg2, s32 arg3) {
    void (*temp)(s32, s32) = arg1[arg0];

    temp(arg2, arg3);
}

void func_80002EE4(u8* buf1, u8* buf2, s32 len) {
    s32 i;
    u8 temp;

    for (i = 0; i < len; i++) {
        temp = buf2[i];
        buf2[i] = buf1[i];
        buf1[i] = temp;
    }
}

typedef s32 (*CompareFunc)(void*, void*);

void func_80002F88(u8* first, u32 curLen, u32 size, CompareFunc cFunc) {
    u32 splitIdx;
    u8* last;
    u8* right;
    u8* left;

    while (1) {
        last = first + (curLen - 1) * size;

        if (curLen == 2) {
            if (cFunc(first, last) > 0) {
                func_80002EE4(first, last, size);
            }
            return;
        }
        if (size && size && size) {} //! FAKE: must be here with at least 3 && operands.
        left = first;
        right = last - size;

        while (1) {
            while (cFunc(left, last) < 0) {
                left += size;
            }
            while ((cFunc(right, last) >= 0) && (left < right)) {
                right -= size;
            }
            if (left >= right) {
                break;
            }
            func_80002EE4(left, right, size);
            left += size;
            right -= size;
        }
        func_80002EE4(last, left, size);
        splitIdx = (left - first) / size;
        if (curLen / 2 < splitIdx) {
            if ((curLen - splitIdx) > 2) {
                func_80002F88(left + size, curLen - splitIdx - 1, size, cFunc);
            }

            if (splitIdx < 2) {
                return;
            }
            left = first;
            curLen = splitIdx;
        } else {
            if (splitIdx >= 2) {
                func_80002F88(first, splitIdx, size, cFunc);
            }

            if ((curLen - splitIdx) <= 2) {
                return;
            }

            first = left + size;
            curLen -= splitIdx + 1;
        }
    }
}

void func_8000316C(Gfx** dList) {
    u16 norm;

    guPerspective(gGfxMtx, &norm, D_80161A3C, 1.3333334f, D_80161A40, D_80161A44, 1.0f);
    gSPPerspNormalize((*dList)++, norm);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    guLookAt(gGfxMtx, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -12800.0f, 0.0f, 1.0f, 0.0f);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_80005680(D_8013B3C0, &gIdentityMatrix);
}

void func_800032B4(Gfx** dList) {
    guOrtho(gGfxMtx, -160.0f, 160.0f, -120.0f, 120.0f, D_80161A40, D_80161A44, 1.0f);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    guLookAt(gGfxMtx, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -12800.0f, 0.0f, 1.0f, 0.0f);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    func_80005680(D_8013B3C0, &gIdentityMatrix);
}
