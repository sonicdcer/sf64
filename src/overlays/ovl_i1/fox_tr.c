/*
 * File: fox_tr.c
 * System: Training
 * Description: Level: Training - On Rails
 */

#include "global.h"
#include "assets/ast_training.h"

void Training_801988E0(void) {
    if (D_ctx_80177E80 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        func_hud_800869A0(250.0f, 50.0f, D_ctx_80177E80, 1.0f, 0, 999);
    }
}

void Training_ItemRing_Update(Item* item) {
    f32 var_fv0;

    switch (item->state) {
        case 0:
            item->obj.rot.z += 1.0f;
            Math_SmoothStepToF(&item->scale, 1.0f, 1.0f, 0.05f, 0.0f);
            if ((item->unk_44 == 0) && (gPlayer[0].unk_4DC == 0)) {
                if (item->obj.rot.y == 0.0f) {
                    var_fv0 = 550.0f;
                } else {
                    var_fv0 = 1000.0f;
                }
                if (item->obj.pos.z > (gPlayer[0].unk_138 + var_fv0)) {
                    item->unk_44 = 1;
                    PRINTF("♪:リング未通過音\n"); // Ring not passed sound
                    AUDIO_PLAY_SFX(0x4900402F, gDefaultSfxSource, 4);
                    D_ctx_80177E80 = 0;
                }
            }
            if (item->collected) {
                item->state = 1;
                item->timer_48 = 50;
                item->info.unk_10 = 10000.0f;
                PRINTF("♪:リング通過音\n"); // Ring passing sound
                AUDIO_PLAY_SFX(0x49008025, gDefaultSfxSource, 4);
                D_ctx_80177E80++;
                if ((item->obj.rot.x != 0.0f) && (D_ctx_80177E80 >= 100)) {
                    Radio_PlayMessage(gMsg_ID_20330, RCID_ROB64);
                }
            }
            break;
        case 1:
            item->obj.pos.x += ((gPlayer[item->playerNum].pos.x - item->obj.pos.x) * 0.05f);
            item->obj.pos.y += ((gPlayer[item->playerNum].pos.y - item->obj.pos.y) * 0.05f);
            if (gPlayer[0].unk_238 != 0) {
                item->obj.pos.z += ((gPlayer[item->playerNum].unk_138 - 300.0f) - item->obj.pos.z) * 0.05f;
            } else {
                item->obj.pos.z += ((gPlayer[item->playerNum].unk_138 - item->obj.pos.z) * 0.05f);
            }
            item->obj.rot.z += 22.0f;
            Math_SmoothStepToAngle(&item->obj.rot.y, Math_RadToDeg(-gPlayer[item->playerNum].unk_058), 0.2f, 10.0f,
                                   0.0f);
            if (item->timer_48 == 0) {
                Object_Kill(&item->obj, item->sfxSource);
            }
            break;
    }
}
