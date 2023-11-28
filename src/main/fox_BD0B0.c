#include "global.h"

void func_800BC4B0(void) {
    static s16 D_800D4A80 = 0;
    s32 i;

    gViewport->vp.vscale[0] = SCREEN_WIDTH * 2;
    gViewport->vp.vscale[1] = SCREEN_HEIGHT * 2;
    gViewport->vp.vscale[2] = G_MAXZ / 2;
    gViewport->vp.vscale[3] = 0;
    gViewport->vp.vtrans[0] = SCREEN_WIDTH * 2;
    gViewport->vp.vtrans[1] = SCREEN_HEIGHT * 2;
    gViewport->vp.vtrans[2] = G_MAXZ / 2;
    gViewport->vp.vtrans[3] = 0;
    gSPViewport(gMasterDisp++, gViewport);
    gDPPipeSync(gMasterDisp++);
    gDPSetScissor(gMasterDisp++, G_SC_NON_INTERLACE, 8, 8, 312, 232);

    func_8009F574(&gMasterDisp, 8, 8, MIN(304, D_800D4A80) + 8, 64, 0, 0, 0, 255);
    func_8009F574(&gMasterDisp, 312 - MIN(304, D_800D4A80), 64, 312, 120, 0, 0, 0, 255);
    func_8009F574(&gMasterDisp, 8, 120, MIN(304, D_800D4A80) + 8, 176, 0, 0, 0, 255);
    func_8009F574(&gMasterDisp, 312 - MIN(304, D_800D4A80), 176, 312, 232, 0, 0, 0, 255);
    if (D_800D4A80 == 0) {
        func_8001EE00();
    }
    D_800D4A80 += 45;
    if (D_800D4A80 >= 485) {
        osViBlack(1);
        gStopTasks = 1;
    }
    for (i = 0; i < MAXCONTROLLERS; i++) {
        gRumbleStatus[i] = 0;
        D_80137E84[i] = 0;
    }
}
