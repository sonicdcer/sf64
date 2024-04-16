#include "global.h"

// SDK states that 1 cycle takes about 21.33 nanoseconds
#define SECONDS_PER_CYCLE 0.00000002133f

#define FPS_COUNTER_X_POS 24
#define FPS_COUNTER_Y_POS 190

static OSTime gLastOSTime = 0;
static float gFrameTime = 0.0f;
static u16 gFrames = 0;
static u16 gFPS = 0;
static u8 gRenderFPS = false;

static void CalculateFrameTimeFromOSTime(OSTime diff) {
    gFrameTime += diff * SECONDS_PER_CYCLE;
    gFrames++;
}

static void Hud_RenderFps(void) {
    // Toggle rendering framerate with the L button.
    if (gControllerPress[0].button & L_TRIG) {
        gRenderFPS ^= 1;
    }
    if (gRenderFPS) {
        OSTime newTime = osGetTime();
        CalculateFrameTimeFromOSTime(newTime - gLastOSTime);
        // If frame time is longer or equal to a second, update FPS counter.
        if (gFrameTime >= 1.0f) {
            gFPS = gFrames;
            gFrames = 0;
            gFrameTime -= 1.0f;
        }
        // print_text_fmt_int(FPS_COUNTER_X_POS, FPS_COUNTER_Y_POS, "FPS %d", gFPS);

        /* Draw */
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 0, 255);
        Graphics_DisplaySmallText(160, 20, 1.0f, 1.0f, gFPS);
        gLastOSTime = newTime;
    }
}