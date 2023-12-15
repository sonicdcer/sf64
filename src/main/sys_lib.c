#include "global.h"

s32 Lib_vsPrintf(char* dst, const char* fmt, va_list args) {
    return vsprintf(dst, fmt, args);
}

void Lib_vTable(s32 arg0, void (**arg1)(s32, s32), s32 arg2, s32 arg3) {
    void (*temp)(s32, s32) = arg1[arg0];

    temp(arg2, arg3);
}

void Lib_SwapBuffers(u8* buf1, u8* buf2, s32 len) {
    s32 i;
    u8 temp;

    for (i = 0; i < len; i++) {
        temp = buf2[i];
        buf2[i] = buf1[i];
        buf1[i] = temp;
    }
}

typedef s32 (*CompareFunc)(void*, void*);

void Lib_QuickSort(u8* first, u32 curLen, u32 size, CompareFunc cFunc) {
    u32 splitIdx;
    u8* last;
    u8* right;
    u8* left;

    while (1) {
        last = first + (curLen - 1) * size;

        if (curLen == 2) {
            if (cFunc(first, last) > 0) {
                Lib_SwapBuffers(first, last, size);
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
            Lib_SwapBuffers(left, right, size);
            left += size;
            right -= size;
        }
        Lib_SwapBuffers(last, left, size);
        splitIdx = (left - first) / size;
        if (curLen / 2 < splitIdx) {
            if ((curLen - splitIdx) > 2) {
                Lib_QuickSort(left + size, curLen - splitIdx - 1, size, cFunc);
            }

            if (splitIdx < 2) {
                return;
            }
            left = first;
            curLen = splitIdx;
        } else {
            if (splitIdx >= 2) {
                Lib_QuickSort(first, splitIdx, size, cFunc);
            }

            if ((curLen - splitIdx) <= 2) {
                return;
            }

            first = left + size;
            curLen -= splitIdx + 1;
        }
    }
}

void Lib_Perspective(Gfx** dList) {
    u16 norm;

    guPerspective(gGfxMtx, &norm, D_80161A3C, (f32) SCREEN_WIDTH / SCREEN_HEIGHT, D_80161A40, D_80161A44, 1.0f);
    gSPPerspNormalize((*dList)++, norm);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    guLookAt(gGfxMtx, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -12800.0f, 0.0f, 1.0f, 0.0f);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    Matrix_Copy(gGfxMatrix, &gIdentityMatrix);
}

void Lib_Ortho(Gfx** dList) {
    guOrtho(gGfxMtx, -160.0f, 160.0f, -120.0f, 120.0f, D_80161A40, D_80161A44, 1.0f);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    guLookAt(gGfxMtx, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -12800.0f, 0.0f, 1.0f, 0.0f);
    gSPMatrix((*dList)++, gGfxMtx++, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    Matrix_Copy(gGfxMatrix, &gIdentityMatrix);
}

void Lib_DmaRead(void* src, void* dst, ptrdiff_t size) {
    osInvalICache(dst, size);
    osInvalDCache(dst, size);
    while (size > 0x100) {
        osPiStartDma(&gDmaIOMsg, 0, 0, (uintptr_t) src, dst, 0x100, &gDmaMsgQueue);
        size -= 0x100;
        src = (void*) ((uintptr_t) src + 0x100);
        dst = (void*) ((uintptr_t) dst + 0x100);
        osRecvMesg(&gDmaMsgQueue, NULL, OS_MESG_BLOCK);
    }
    if (size != 0) {
        osPiStartDma(&gDmaIOMsg, 0, 0, (uintptr_t) src, dst, size, &gDmaMsgQueue);
        osRecvMesg(&gDmaMsgQueue, NULL, OS_MESG_BLOCK);
    }
}

void Lib_FillScreen(u8 setFill) {
    s32 i;

    gFillScreenColor |= 1;
    if (setFill == true) {
        if (gFillScreen == false) {
            if (gFillScreenColor == 1) {
                osViBlack(1);
            } else {
                for (i = 0; i < 3 * SCREEN_WIDTH; i++) {
                    gFillBuffer[i] = gFillScreenColor;
                }
                osWritebackDCacheAll();
                osViSwapBuffer(&gFillBuffer[SCREEN_WIDTH]);
                osViRepeatLine(1);
            }
            gFillScreen = true;
        }
    } else if (gFillScreen == true) {
        osViRepeatLine(0);
        osViBlack(0);
        gFillScreen = false;
    }
}
