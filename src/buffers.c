#include "sys.h"
#include "sf64object.h"
#include "sf64player.h"

u64 gDramStack[SP_DRAM_STACK_SIZE64];
u8 gOSYieldData[OS_YIELD_DATA_SIZE];
FrameBuffer gZBuffer; // z buffer
u8 gTaskOutputBuffer[0x30000];
u8 gAudioHeap[0xB0000];
u16 gTextureRenderBuffer[0x3C40];
u16 gFillBuffer[3 * SCREEN_WIDTH];
FrameBuffer gFrameBuffers[3];
Actor gActors[700]; // Actors limit
Boss gBosses[4];
Effect gEffects[100];
Item gItems[20];
PlayerShot gPlayerShots[16];
TexturedLine gTexturedLines[100];
RadarMark gRadarMarks[65];
BonusText gBonusText[10];
