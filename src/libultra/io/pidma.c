#include "global.h"

typedef struct {
    s16 unk0;
    s8 unk2;
    s8 pad;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} test;

extern s32 __osPiDevMgr;

s32 osPiStartDma(test* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    register s32 result;

    if (__osPiDevMgr == 0) {
        return -1;
    }
    
    if (arg2 == 0) {
        arg0->unk0 = 0xB;
    } else {
        arg0->unk0 = 0xC;
    }
    
    arg0->unk2 = (s8) arg1;
    arg0->unk4 = arg6;
    arg0->unk8 = arg4;
    arg0->unkC = arg3;
    arg0->unk10 = arg5;
    arg0->unk14 = 0;
    
    if (arg1 == 1) {
        result = osJamMesg(osPiGetCmdQueue(), arg0, 0);
    } else {
        result = osSendMesg(osPiGetCmdQueue(), arg0, 0);
    }
    return result;
}
