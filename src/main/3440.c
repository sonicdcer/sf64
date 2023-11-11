#include "global.h"

#ifdef DATA_IMPORT_PENDING
OSContPad D_800DD880[4];
OSContPad D_800DD898[4];
u8 D_800DD8B0[4];
s32 D_800DD8B4;
u8 D_800DD8B8[4];
OSContPad D_800DD8C0[4];    //
OSContPad D_800DD8D8[4];    //
OSContStatus D_800DD8F0[4]; //
OSPfs D_800DD900[4];        //
#else
extern OSContPad D_800DD8C0[4];    //
extern OSContPad D_800DD8D8[4];    //
extern OSContStatus D_800DD8F0[4]; //
extern OSPfs D_800DD900[4];        //
#endif

void func_80002840(s32 contrNum) {
    s32 temp_v0 = D_800DD880[contrNum].stick_x;
    s32 temp_a2 = D_800DD880[contrNum].stick_y;
    s32 var_a0;
    s32 var_v0;

    if ((temp_v0 >= -16) && (temp_v0 <= 16)) {
        var_a0 = 0;
    } else if (temp_v0 > 16) {
        var_a0 = temp_v0 - 16;
    } else {
        var_a0 = temp_v0 + 16;
    }

    if ((temp_a2 >= -16) && (temp_a2 <= 16)) {
        var_v0 = 0;
    } else if (temp_a2 > 16) {
        var_v0 = temp_a2 - 16;
    } else {
        var_v0 = temp_a2 + 16;
    }

    if (var_a0 > 60) {
        var_a0 = 60;
    }
    if (var_a0 < -60) {
        var_a0 = -60;
    }
    if (var_v0 > 60) {
        var_v0 = 60;
    }
    if (var_v0 < -60) {
        var_v0 = -60;
    }
    D_800DD898[contrNum].stick_x = var_a0;
    D_800DD898[contrNum].stick_y = var_v0;
}

void func_8000291C(void) {
    u8 sp1F;
    s32 i;

    osContInit(&gSerialEventQueue, &sp1F, D_800DD8F0);
    for (i = 0; i < 4; i++) {
        D_800DD8B0[i] = (sp1F >> i) & 1;
        D_800DD8B8[i] = 0;
    }
}

void func_800029A8(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (D_800DD8B0[i] == 1 && D_800DD8C0[i].errno == 0) {
            D_800DD8D8[i] = D_800DD880[i];
            D_800DD880[i] = D_800DD8C0[i];
            D_800DD898[i].button = (D_800DD880[i].button ^ D_800DD8D8[i].button) & D_800DD880[i].button;
            func_80002840(i);
        } else {
            D_800DD880[i].button = D_800DD880[i].stick_x = D_800DD880[i].stick_y = D_800DD880[i].errno =
                D_800DD898[i].button = D_800DD898[i].stick_x = D_800DD898[i].stick_y = D_800DD898[i].errno = 0;
        }
    }
}

#ifdef DATA_IMPORT_PENDING // requires data import on D_800DD8C0
void func_80002AF4(void) {
    s32 i;

    if (D_800DD8B4 != 0) {
        D_800DD8B4--;
        for (i = 0; i < 4; i++) {
            D_800DD8C0[i].button = D_800DD8C0[i].stick_x = D_800DD8C0[i].stick_y = D_800DD8C0[i].errno = 0;
        }
    } else {
        osContStartReadData(&gSerialEventQueue);
        osRecvMesg(&gSerialEventQueue, NULL, OS_MESG_BLOCK);
        osContGetReadData(D_800DD8C0);
    }
    osSendMesg(&D_800E22F8, (OSMesg) SI_MESG_16, OS_MESG_PRI_NORMAL);
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/3440/func_80002AF4.s")
#endif

void func_80002BE8(void) {
    if ((D_80137E80 == 0) && (func_800072E0(&D_80144F60) == 0)) {
        osSendMesg(&D_800E2318, (OSMesg) SI_MESG_15, OS_MESG_PRI_NORMAL);
        return;
    }
    osSendMesg(&D_800E2318, (OSMesg) SI_MESG_14, OS_MESG_PRI_NORMAL);
}

void func_80002C50(void) {
    if ((D_80137E80 == 0) && (func_800071FC(&D_80144F60) == 0)) {
        osSendMesg(&D_800E2318, (OSMesg) SI_MESG_15, OS_MESG_PRI_NORMAL);
        return;
    }
    osSendMesg(&D_800E2318, (OSMesg) SI_MESG_14, OS_MESG_PRI_NORMAL);
}

void func_80002CB8(void) {
    s32 i;

    osContStartQuery(&gSerialEventQueue);
    osRecvMesg(&gSerialEventQueue, NULL, OS_MESG_BLOCK);
    osContGetQuery(D_800DD8F0);

    for (i = 0; i < 4; i++) {
        if ((D_800DD8B0[i] != 0) && (D_800DD8F0[i].errno == 0)) {
            if (D_800DD8F0[i].status & 1) {
                if (D_800DD8B8[i] == 0) {
                    if (osMotorInit(&gSerialEventQueue, &D_800DD900[i], i)) {
                        D_800DD8B8[i] = 0;
                    } else {
                        D_800DD8B8[i] = 1;
                    }
                }
                if (D_800DD8B8[i] == 1) {
                    if (D_80137E84[i] != 0) {
                        if (osMotorStart(&D_800DD900[i])) {
                            D_800DD8B8[i] = 0;
                        }
                    } else {
                        if (osMotorStop(&D_800DD900[i])) {
                            D_800DD8B8[i] = 0;
                        }
                    }
                }
            } else {
                D_800DD8B8[i] = 0;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        D_80137E84[i] = 0;
    }
}
