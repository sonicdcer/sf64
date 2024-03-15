#ifndef BUFFERS_H
#define BUFFERS_H

#include "gfx.h"

extern u64 gDramStack[];
extern u8 gOSYieldData[];
extern FrameBuffer gZBuffer; // z buffer
extern u8 gTaskOutputBuffer[];
extern u8 gAudioHeap[];
extern u16 gTextureRenderBuffer[];
extern u16 gFillBuffer[];
extern FrameBuffer gFrameBuffers[]; // 8038F800

#endif
