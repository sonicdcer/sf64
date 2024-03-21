#include "PR/rcp.h"

extern s32 osViClock;

s32 osAiSetFrequency(u32 freq) {
    register u32 a1;
    register s32 a2;
    register float ftmp;
    ftmp = osViClock / (float) freq + .5f;

    a1 = ftmp;

    if (a1 < 0x84) {
        return -1;
    }

    a2 = (a1 / 66) & 0xff;
    if (a2 > 16) {
        a2 = 16;
    }

    IO_WRITE(AI_DACRATE_REG, a1 - 1);
    IO_WRITE(AI_BITRATE_REG, a2 - 1);
    IO_WRITE(AI_CONTROL_REG, AI_CONTROL_DMA_ON); // enable dma
    return osViClock / (s32) a1;
}
