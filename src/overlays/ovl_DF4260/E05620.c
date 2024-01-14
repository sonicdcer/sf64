#include "global.h"

void func_DF4260_801988E0(void) {
    if (D_80177E80 != 0) {
        RCP_SetupDL(&gMasterDisp, 0x53);
        gDPSetPrimColor(gMasterDisp++, 0, 0, 255, 255, 255, 255);
        func_800869A0(250.0f, 50.0f, D_80177E80, 1.0f, 0, 999);
    }
}

void func_DF4260_80198968(Item* item) {
    f32 var_fv0;

    switch (item->unk_46) {
        case 0:
            item->obj.rot.z += 1.0f;
            Math_SmoothStepToF(&item->scale, 1.0f, 1.0f, 0.05f, 0.0f);
            if ((item->unk_44 == 0) && (gPlayer->unk_4DC == 0)) {
                if (item->obj.rot.y == 0.0f) {
                    var_fv0 = 550.0f;
                } else {
                    var_fv0 = 1000.0f;
                }
                if (item->obj.pos.z > (gPlayer->unk_138 + var_fv0)) {
                    item->unk_44 = 1;
                    PRINTF("♪:リング未通過音\n"); // Ring not passed sound
                    Audio_PlaySfx(0x4900402F, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                    D_80177E80 = 0;
                }
            }
            if (item->unk_4C != 0) {
                item->unk_46 = 1;
                item->timer_48 = 50;
                item->info.unk_10 = 10000.0f;
                PRINTF("♪:リング通過音\n"); // Ring passing sound
                Audio_PlaySfx(0x49008025, &D_800C5D28, 4, &D_800C5D34, &D_800C5D34, &D_800C5D3C);
                D_80177E80++;
                if ((item->obj.rot.x != 0.0f) && (D_80177E80 >= 100)) {
                    func_800BA808(gMsg_ID_20330, RCID_ROB64);
                    return;
                }
            }
            return;
        case 1:
            item->obj.pos.x += ((gPlayer[item->unk_4E].pos.x - item->obj.pos.x) * 0.05f);
            item->obj.pos.y += ((gPlayer[item->unk_4E].pos.y - item->obj.pos.y) * 0.05f);
            if (gPlayer->unk_238 != 0) {
                item->obj.pos.z += (((gPlayer[item->unk_4E].unk_138 - 300.0f) - item->obj.pos.z) * 0.05f);
            } else {
                item->obj.pos.z += ((gPlayer[item->unk_4E].unk_138 - item->obj.pos.z) * 0.05f);
            }
            item->obj.rot.z += 22.0f;
            Math_SmoothStepToAngle(&item->obj.rot.y, Math_RadToDeg(-gPlayer[item->unk_4E].unk_058), 0.2f, 10.0f, 0.0f);
            if (item->timer_48 == 0) {
                Object_Kill(&item->obj, &item->sfxPos);
            }
            break;
    }
}
