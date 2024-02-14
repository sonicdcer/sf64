#include "global.h"

u64 gDramStack[SP_DRAM_STACK_SIZE64];
u8 gOSYieldData[OS_YIELD_DATA_SIZE];
FrameBuffer gZBuffer; // z buffer
u8 gTaskOutputBuffer[0x30000];
u8 gTaskOutputBufferEnd;
u8 gAudioDataBuffer[0xB0000];
u16 gTextureRenderBuffer[0x3C40];
u16 gFillBuffer[3 * SCREEN_WIDTH];
u8 D_8038F300[0x500]; // Wrong
FrameBuffer gFrameBuffers[3];