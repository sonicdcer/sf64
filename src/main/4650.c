#include "global.h"

void func_800034E8(s32);
void Audio_ThreadEntry(void* /*arg0*/);
void func_80003EE0(void);
void func_80003FEC(void* /*arg0*/);
void func_800040D4(void* /*arg0*/);
void Graphics_ThreadEntry(void* /*arg0*/);

void func_80004560(void);
void func_80004714(void);
void func_80004798(void);
void func_80004824(void);
void func_800049D4(void);
void func_80007088(void*);

s32 D_800C45D0 = 1;

#ifdef NON_MATCHING
void func_80003A50(void) {
    u8 i;

    D_80137E78 = 0;
    D_80137E7C = 0;
    D_80137E80 = 0;
    D_80137E81 = 0;
    D_80137E88 = 0;
    D_80137E8A = 0;
    D_800E1FB0 = NULL;

    for (i = 0; i < ARRAY_COUNT(D_800E1FB4); i++) {
        D_800E1FB4[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(D_800E1FB8); i++) {
        D_800E1FB8[i] = NULL;
    }
    for (i = 0; i < 1; i++) {
        D_800E1FC0[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(D_800E1FC8); i++) {
        D_800E1FC8[i] = NULL;
    }
}
#else
void func_80003A50(void);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80003A50.s")
#endif

void Audio_ThreadEntry(void* arg0) {
    GfxPoolStruct0* temp_v0;

    func_8000FFCC();
    func_8001DCE0();
    temp_v0 = func_8001DF50();
    if (temp_v0 != NULL) {
        temp_v0->unk40 = &D_800E2258;
        temp_v0->unk44 = 1;
        osWritebackDCacheAll();
        osSendMesg(&D_800E21E0, temp_v0, 0);
    }
    while (1) {
        temp_v0 = func_8001DF50();
        if (temp_v0 != NULL) {
            temp_v0->unk40 = &D_800E2258;
            temp_v0->unk44 = 1;
            osWritebackDCacheAll();
        }
        osRecvMesg(&D_800E2258, NULL, 0);
        if (temp_v0 != NULL) {
            osSendMesg(&D_800E21E0, temp_v0, 0);
        }
        osRecvMesg(&D_800E2238, NULL, 1);
    }
}

void func_80003C50(void) {
    D_80137E54->unk40 = &D_800E22A0;
    D_80137E54->unk44 = 2;
    D_80137E54->task.t.type = M_GFXTASK;
    D_80137E54->task.t.flags = 0;
    D_80137E54->task.t.ucode_boot = __rspboot_start;
    D_80137E54->task.t.ucode_boot_size = (uintptr_t) __rspboot_end - (uintptr_t) __rspboot_start;
    D_80137E54->task.t.ucode = __f3dex_start;
    D_80137E54->task.t.ucode_size = 0x1000;
    D_80137E54->task.t.ucode_data = &gF3dexData;
    D_80137E54->task.t.ucode_data_size = 0x800;
    D_80137E54->task.t.dram_stack = &D_80281000;
    D_80137E54->task.t.dram_stack_size = 0x400;
    D_80137E54->task.t.output_buff = &D_802A7800;
    D_80137E54->task.t.output_buff_size = &D_802D7800;
    D_80137E54->task.t.data_ptr = D_80137E50->unk12D50;
    D_80137E54->task.t.data_size = (D_80137E64 - D_80137E50->unk12D50) * sizeof(Gfx);
    D_80137E54->task.t.yield_data_ptr = &D_80281400;
    D_80137E54->task.t.yield_data_size = OS_YIELD_DATA_SIZE;
    osWritebackDCacheAll();
    osSendMesg(&D_800E21E0, D_80137E54, 0);
}

void func_80003DC0(u32 arg0) {
    D_80137E50 = &gGfxPools[arg0 % 2];

    D_80137E54 = &D_80137E50->unk0;
    D_80137E58 = D_80137E50->unk50;
    D_80137E5C = D_80137E50->unk150;
    D_80137E60 = D_80137E50->unk12150;
    D_80137E64 = D_80137E50->unk12D50;
    D_80137E68 = D_80137E50->unk1C950;
    D_80137E6C = D_80137E50->unk23550;

    D_80137E70 = &gFrameBuffers[arg0 % 3];
    D_80137E74 = &D_80387800;

    D_8013B3C0 = D_8013B3C8;
    D_8013BBC8 = D_8013BBD0;

    D_80178710 = &D_80178580;
}

void func_80003EE0(void) {
    if ((D_800DD880[0].button & D_JPAD) && (D_800DD880[1].button & D_JPAD) && (D_800DD880[2].button & D_JPAD) &&
        (D_800DD880[3].button & L_TRIG) && (D_800DD880[3].button & R_TRIG) && (D_800DD880[3].button & Z_TRIG)) {
        D_800C45D0 = 1 - D_800C45D0;
    }
    switch (osTvType) {
        case 0:
            osViSetMode(&osViModePalLan1);
            break;
        case 2:
            osViSetMode(&osViModeMpalLan1);
            break;
        default:
        case 1:
            osViSetMode(&osViModeNtscLan1);
            break;
    }
    if (D_800C45D0 != 0) {
        osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON | OS_VI_DIVOT_OFF | OS_VI_GAMMA_ON | OS_VI_GAMMA_DITHER_ON);
    } else {
        osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON | OS_VI_DIVOT_OFF | OS_VI_GAMMA_OFF | OS_VI_GAMMA_DITHER_OFF);
    }
}

void func_80003FEC(void* arg0) {
    s32 sp34;

    func_8000291C();
    while (1) {
        osRecvMesg(&D_800E22C0, &sp34, 1);
        switch (sp34) {
            case 0xA:
                func_80002AF4();
                break;
            case 0xB:
                func_80002BE8();
                break;
            case 0xC:
                func_80002C50();
                break;
            case 0xD:
                func_80002CB8();
                break;
        }
    }
}

void func_800040D4(void* arg0) {
    void* sp24;

    while (1) {
        osRecvMesg(&D_800E2338, &sp24, 1);
        func_80007088(sp24);
    }
}

#ifdef NON_MATCHING
void Graphics_ThreadEntry(void* arg0) {
    u8 var_s0;
    u8 var_v1;
    u8 var_v2;

    func_800A18B0();
    osSendMesg(&D_800E22C0, 0xA, 0);
    func_80003DC0(D_80137E7C);
    {
        gSPSegment(D_80137E60++, 0, 0);
        gSPDisplayList(D_80137E64++, D_80137E50->unk12150);
        func_800A26C0();
        gSPEndDisplayList(D_80137E60++);
        gSPEndDisplayList(D_80137E68++);
        gSPDisplayList(D_80137E64++, D_80137E50->unk1C950);
        gDPFullSync(D_80137E64++);
        gSPEndDisplayList(D_80137E64++);
    }
    func_80003C50();
    while (1) {
        D_80137E7C++;
        func_80003DC0(D_80137E7C);
        osRecvMesg(&D_800E22F8, NULL, 1);
        osSendMesg(&D_800E22C0, 0xD, 0);
        func_800029A8();
        osSendMesg(&D_800E22C0, 0xA, 0);
        if (D_800DD8AA & 0x800) {
            func_80003EE0();
        }
        {
            gSPSegment(D_80137E60++, 0, 0);
            gSPDisplayList(D_80137E64++, D_80137E50->unk12150);
            func_800A26C0();
            if (D_80137E80 == 1) {
                func_800BC4B0();
            }
            gSPEndDisplayList(D_80137E60++);
            gSPEndDisplayList(D_80137E68++);
            gSPDisplayList(D_80137E64++, D_80137E50->unk1C950);
            gDPFullSync(D_80137E64++);
            gSPEndDisplayList(D_80137E64++);
        }
        osRecvMesg(&D_800E22A0, NULL, 1);
        func_80003C50();
        if (D_80137E8A == 0) {
            osViSwapBuffer(&gFrameBuffers[(D_80137E7C - 1) % 3]);
        }
        func_80007FE4(&gFrameBuffers[(D_80137E7C - 1) % 3], 320, 16);

        var_v1 = MIN(D_80137E78, 4);
        var_v2 = MAX(var_v1, D_800E2278.validCount + 1);
        for (var_s0 = 0; var_s0 < var_v2; var_s0++) {
            osRecvMesg(&D_800E2278, NULL, 1);
        }

        func_8001DECC();
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/Graphics_ThreadEntry.s")
#endif

void func_80004560(void) {
    osCreateMesgQueue(&D_800E20F0, D_800E2108, ARRAY_COUNT(D_800E2108));
    osCreateMesgQueue(&D_800E21E0, D_800E21F8, ARRAY_COUNT(D_800E21F8));
    osCreateMesgQueue(&D_800E2238, D_800E2250, ARRAY_COUNT(D_800E2250));
    osCreateMesgQueue(&D_800E2258, D_800E2270, ARRAY_COUNT(D_800E2270));
    osCreateMesgQueue(&D_800E2278, D_800E2290, ARRAY_COUNT(D_800E2290));
    osCreateMesgQueue(&D_800E22A0, D_800E22B8, ARRAY_COUNT(D_800E22B8));
    osCreateMesgQueue(&D_800E2128, D_800E2140, ARRAY_COUNT(D_800E2140));
    osSetEventMesg(OS_EVENT_SI, &D_800E2128, 0);
    osCreateMesgQueue(&D_800E2148, D_800E2160, ARRAY_COUNT(D_800E2160));
    osViSetEvent(&D_800E2148, 3, 1);
    osSetEventMesg(OS_EVENT_SP, &D_800E2148, 1);
    osSetEventMesg(OS_EVENT_DP, &D_800E2148, 2);
    osSetEventMesg(OS_EVENT_PRENMI, &D_800E2148, 4);
    osCreateMesgQueue(&D_800E2338, D_800E2350, ARRAY_COUNT(D_800E2350));
    osCreateMesgQueue(&D_800E2390, D_800E23A8, ARRAY_COUNT(D_800E23A8));
    osCreateMesgQueue(&D_800E22C0, D_800E22D8, ARRAY_COUNT(D_800E22D8));
    osCreateMesgQueue(&D_800E22F8, D_800E2310, ARRAY_COUNT(D_800E2310));
    osCreateMesgQueue(&D_800E2318, D_800E2330, ARRAY_COUNT(D_800E2330));
}

#ifdef NON_MATCHING
void func_80004714(void) {
    GfxPoolStruct0** var_v1 = D_800E1FB8;
    u8 i;

    if ((*var_v1)->unk40 != NULL) {
        osSendMesg((*var_v1)->unk40, (*var_v1)->unk44, 0);
    }
    (*var_v1)->unk48 = 4;
    for (i = 0; i < 1; i++, var_v1++) {
        *var_v1 = *(var_v1 + 1);
    }
    *var_v1 = NULL;
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004714.s")
#endif

void func_80004798(void) {
    GfxPoolStruct0* temp_a3;

    temp_a3 = D_800E1FB0;
    D_800E1FB0 = NULL;
    if (temp_a3->unk48 == 2) {
        if (osSpTaskYielded(&temp_a3->task) == 0) {
            temp_a3->unk48 = 3;
        }
    } else {
        temp_a3->unk48 = 3;
        if (temp_a3->task.t.type == 2) {
            if (temp_a3->unk40 != NULL) {
                osSendMesg(temp_a3->unk40, temp_a3->unk44, 0);
            }
            D_800E1FB4[0] = NULL;
        }
    }
}

#ifdef NON_MATCHING
void func_80004824(void) {
    u8 i;
    GfxPoolStruct0** var_a0;
    GfxPoolStruct0** var_a1;
    GfxPoolStruct0** var_s0_2;
    GfxPoolStruct0** var_s1_2;
    GfxPoolStruct0* sp40;
    s32 pad;

    var_s0_2 = D_800E1FC0;
    var_s1_2 = D_800E1FC8;
    for (i = 0; i < 1; i++) {
        *(var_s0_2++) = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(D_800E1FC8); i++) {
        *(var_s1_2++) = NULL;
    }

    var_s0_2 = D_800E1FC0;
    var_s1_2 = D_800E1FC8;
    while (osRecvMesg(&D_800E21E0, &sp40, 0) != -1) {
        pad = sp40->task.t.type;
        sp40->unk48 = 0;

        switch (pad) {
            case 2:
                *(var_s0_2++) = sp40;
                break;
            case 1:
                *(var_s1_2++) = sp40;
                break;
        }
    }
    var_s0_2 = D_800E1FC0;
    var_s1_2 = D_800E1FC8;
    var_a0 = D_800E1FB4;
    var_a1 = D_800E1FB8;

    for (i = 0; i < 1; i++) {
        if (*var_a0 != NULL) {
            var_a0++;
        }
    }
    for (i; i < 1; i++) {
        *(var_a0++) = *(var_s0_2++);
    }
    for (i = 0; i < 2; i++) {
        if (*var_a1 != NULL) {
            var_a1++;
        }
    }
    for (i; i < 2; i++) {
        *(var_a1++) = *(var_s1_2++);
    }
}
#else
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/4650/func_80004824.s")
#endif

void func_800049D4(void) {
    if (D_800E1FB4[0] != NULL) {
        if (D_800E1FB0 != NULL) {
            if (D_800E1FB0->task.t.type == M_GFXTASK) {
                D_800E1FB0->unk48 = 2;
                osSpTaskYield();
            }
        } else {
            D_800E1FB0 = D_800E1FB4[0];
            osSpTaskLoad(&D_800E1FB0->task);
            osSpTaskStartGo(&D_800E1FB0->task);
            D_800E1FB0->unk48 = 1;
        }
    } else if ((D_800E1FB0 == NULL) && (D_800E1FB8[0] != NULL) && (D_800E1FB8[0]->unk48 != 3)) {
        D_800E1FB0 = D_800E1FB8[0];
        osDpSetStatus(0x3C0);
        osSpTaskLoad(&D_800E1FB0->task);
        osSpTaskStartGo(&D_800E1FB0->task);
        D_800E1FB0->unk48 = 1;
    }
}

void Main_ThreadEntry(void* arg0) {
    s32 sp54;

    osCreateThread(&gAudioThread, 5, Audio_ThreadEntry, arg0, gAudioThreadStack + sizeof(gAudioThreadStack), 80);
    osStartThread(&gAudioThread);
    osCreateThread(&gGraphicsThread, 6, Graphics_ThreadEntry, arg0, gGraphicsThreadStack + sizeof(gGraphicsThreadStack),
                   40);
    osStartThread(&gGraphicsThread);
    osCreateThread(&gUnkThread3, 7, func_800040D4, arg0, gUnkThread3Stack + sizeof(gUnkThread3Stack), 60);
    osStartThread(&gUnkThread3);
    osCreateThread(&gUnkThread4, 8, func_80003FEC, arg0, gUnkThread4Stack + sizeof(gUnkThread4Stack), 20);
    osStartThread(&gUnkThread4);

    func_80004560();

    while (true) {
        osRecvMesg(&D_800E2148, &sp54, 1);
        switch ((u8) sp54) {
            case 3:
                osSendMesg(&D_800E2238, 3, 0);
                osSendMesg(&D_800E2278, 3, 0);
                func_80004824();
                break;
            case 1:
                func_80004798();
                break;
            case 2:
                func_80004714();
                break;
            case 4:
                D_80137E80 = 1;
                break;
        }
        if (D_80137E81 == 0) {
            func_800049D4();
        }
    }
}

void Idle_ThreadEntry(void* arg0) {
    osCreateViManager(OS_PRIORITY_VIMGR);
    func_80003EE0();
    func_800034E8(1);
    osCreatePiMgr(OS_PRIORITY_PIMGR, &gPiMgrCmdQueue, sPiMgrCmdBuff, ARRAY_COUNT(sPiMgrCmdBuff));
    osCreateThread(&gMainThread, 3, &Main_ThreadEntry, arg0, sMainThreadStack + sizeof(sMainThreadStack), 100);
    osStartThread(&gMainThread);
    func_80008018();
    osSetThreadPri(NULL, OS_PRIORITY_IDLE);
loop_1:
    goto loop_1;
}

void bootproc(void) {
    RdRam_CheckIPL3();
    osInitialize();
    func_80003A50();
    osCreateThread(&sIdleThread, 1, &Idle_ThreadEntry, NULL, sIdleThreadStack + sizeof(sIdleThreadStack), 255);
    osStartThread(&sIdleThread);
}
