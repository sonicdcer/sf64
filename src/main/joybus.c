#include "global.h"

OSContPad gCurrentInput[4];
OSContPad gChangedInput[4];
u8 gControllerStatus[4];
s32 gStopInputTimer;
u8 gRumbleStatus[4];
OSContPad sNextInput[4];    //
OSContPad sPrevInput[4];    //
OSContStatus D_800DD8F0[4]; //
OSPfs D_800DD900[4];        //

void Controller_AddDeadZone(s32 contrNum) {
    s32 temp_v0 = gCurrentInput[contrNum].stick_x;
    s32 temp_a2 = gCurrentInput[contrNum].stick_y;
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
    gChangedInput[contrNum].stick_x = var_a0;
    gChangedInput[contrNum].stick_y = var_v0;
}

void Controller_Init(void) {
    u8 sp1F;
    s32 i;

    osContInit(&gSerialEventQueue, &sp1F, D_800DD8F0);
    for (i = 0; i < 4; i++) {
        gControllerStatus[i] = (sp1F >> i) & 1;
        gRumbleStatus[i] = 0;
    }
}

void Controller_UpdateInput(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (gControllerStatus[i] == 1 && sNextInput[i].errno == 0) {
            sPrevInput[i] = gCurrentInput[i];
            gCurrentInput[i] = sNextInput[i];
            gChangedInput[i].button = (gCurrentInput[i].button ^ sPrevInput[i].button) & gCurrentInput[i].button;
            Controller_AddDeadZone(i);
        } else {
            gCurrentInput[i].button = gCurrentInput[i].stick_x = gCurrentInput[i].stick_y = gCurrentInput[i].errno =
                gChangedInput[i].button = gChangedInput[i].stick_x = gChangedInput[i].stick_y = gChangedInput[i].errno =
                    0;
        }
    }
}

void Controller_ReadData(void) {
    s32 i;

    if (gStopInputTimer != 0) {
        gStopInputTimer--;
        for (i = 0; i < 4; i++) {
            sNextInput[i].button = sNextInput[i].stick_x = sNextInput[i].stick_y = sNextInput[i].errno = 0;
        }
    } else {
        osContStartReadData(&gSerialEventQueue);
        osRecvMesg(&gSerialEventQueue, NULL, OS_MESG_BLOCK);
        osContGetReadData(sNextInput);
    }
    osSendMesg(&gControllerMsgQueue, (OSMesg) SI_CONT_READ_DONE, OS_MESG_PRI_NORMAL);
}

void Save_ReadData(void) {
    if ((gStartNMI == 0) && (Save_ReadEeprom(&gSaveIOBuffer) == 0)) {
        osSendMesg(&gSaveMsgQueue, (OSMesg) SI_SAVE_SUCCESS, OS_MESG_PRI_NORMAL);
        return;
    }
    osSendMesg(&gSaveMsgQueue, (OSMesg) SI_SAVE_FAILED, OS_MESG_PRI_NORMAL);
}

void Save_WriteData(void) {
    if ((gStartNMI == 0) && (Save_WriteEeprom(&gSaveIOBuffer) == 0)) {
        osSendMesg(&gSaveMsgQueue, (OSMesg) SI_SAVE_SUCCESS, OS_MESG_PRI_NORMAL);
        return;
    }
    osSendMesg(&gSaveMsgQueue, (OSMesg) SI_SAVE_FAILED, OS_MESG_PRI_NORMAL);
}

void Controller_Rumble(void) {
    s32 i;

    osContStartQuery(&gSerialEventQueue);
    osRecvMesg(&gSerialEventQueue, NULL, OS_MESG_BLOCK);
    osContGetQuery(D_800DD8F0);

    for (i = 0; i < 4; i++) {
        if ((gControllerStatus[i] != 0) && (D_800DD8F0[i].errno == 0)) {
            if (D_800DD8F0[i].status & 1) {
                if (gRumbleStatus[i] == 0) {
                    if (osMotorInit(&gSerialEventQueue, &D_800DD900[i], i)) {
                        gRumbleStatus[i] = 0;
                    } else {
                        gRumbleStatus[i] = 1;
                    }
                }
                if (gRumbleStatus[i] == 1) {
                    if (D_80137E84[i] != 0) {
                        if (osMotorStart(&D_800DD900[i])) {
                            gRumbleStatus[i] = 0;
                        }
                    } else {
                        if (osMotorStop(&D_800DD900[i])) {
                            gRumbleStatus[i] = 0;
                        }
                    }
                }
            } else {
                gRumbleStatus[i] = 0;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        D_80137E84[i] = 0;
    }
}
