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

void func_80003A50(void) {
    u8 i;

    D_80137E78 = 0;
    D_80137E7C = 0;
    D_80137E80 = 0;
    D_80137E81 = 0;
    D_80137E88 = 0;
    D_80137E8A = 0;
    gCurrentTask = NULL;

    for (i = 0; i < ARRAY_COUNT(D_800E1FB4); i += 1) {
        D_800E1FB4[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(D_800E1FB8); i += 1) {
        D_800E1FB8[i] = NULL;
    }
    for (i = 0; i < 1; i += 1) {
        D_800E1FC0[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(D_800E1FC8); i += 1) {
        D_800E1FC8[i] = NULL;
    }
}

void Audio_ThreadEntry(void* arg0) {
    SPTask* temp_v0;

    func_8000FFCC();
    func_8001DCE0();
    temp_v0 = func_8001DF50();
    if (temp_v0 != NULL) {
        temp_v0->msgQueue = &D_800E2258;
        temp_v0->msg = (OSMesg) 1;
        osWritebackDCacheAll();
        osSendMesg(&D_800E21E0, temp_v0, 0);
    }
    while (1) {
        temp_v0 = func_8001DF50();
        if (temp_v0 != NULL) {
            temp_v0->msgQueue = &D_800E2258;
            temp_v0->msg = (OSMesg) 1;
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
    gGfxTask->msgQueue = &D_800E22A0;
    gGfxTask->msg = (OSMesg) 2;
    gGfxTask->task.t.type = M_GFXTASK;
    gGfxTask->task.t.flags = 0;
    gGfxTask->task.t.ucode_boot = __rspboot_start;
    gGfxTask->task.t.ucode_boot_size = (uintptr_t) __rspboot_end - (uintptr_t) __rspboot_start;
    gGfxTask->task.t.ucode = __f3dex_start;
    gGfxTask->task.t.ucode_size = 0x1000;
    gGfxTask->task.t.ucode_data = (u64*) &gF3dexData;
    gGfxTask->task.t.ucode_data_size = 0x800;
    gGfxTask->task.t.dram_stack = (u64*) &D_80281000;
    gGfxTask->task.t.dram_stack_size = 0x400;
    gGfxTask->task.t.output_buff = (u64*) &D_802A7800;
    gGfxTask->task.t.output_buff_size = (u64*) &D_802D7800;
    gGfxTask->task.t.data_ptr = (u64*) gGfxPool->masterDL;
    gGfxTask->task.t.data_size = (gMasterDisp - gGfxPool->masterDL) * sizeof(Gfx);
    gGfxTask->task.t.yield_data_ptr = (u64*) &D_80281400;
    gGfxTask->task.t.yield_data_size = OS_YIELD_DATA_SIZE;
    osWritebackDCacheAll();
    osSendMesg(&D_800E21E0, gGfxTask, 0);
}

void func_80003DC0(u32 arg0) {
    gGfxPool = &gGfxPools[arg0 % 2];

    gGfxTask = &gGfxPool->task;
    gViewport = gGfxPool->viewports;
    gGfxMtx = gGfxPool->mtx;
    gUnkDisp1 = gGfxPool->unkDL1;
    gMasterDisp = gGfxPool->masterDL;
    gUnkDisp2 = gGfxPool->unkDL2;
    gLight = gGfxPool->lights;

    gFrameBuffer = &gFrameBuffers[arg0 % 3];
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
        osRecvMesg(&D_800E22C0, (OSMesg) &sp34, 1);
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

void Graphics_ThreadEntry(void* arg0) {
    u8 i;
    u8 var_v1;
    u8 var_v2;

    func_800A18B0();
    osSendMesg(&D_800E22C0, (OSMesg) 10, 0);
    func_80003DC0(D_80137E7C);
    {
        gSPSegment(gUnkDisp1++, 0, 0);
        gSPDisplayList(gMasterDisp++, gGfxPool->unkDL1);
        func_800A26C0();
        gSPEndDisplayList(gUnkDisp1++);
        gSPEndDisplayList(gUnkDisp2++);
        gSPDisplayList(gMasterDisp++, gGfxPool->unkDL2);
        gDPFullSync(gMasterDisp++);
        gSPEndDisplayList(gMasterDisp++);
    }
    func_80003C50();
    while (1) {
        D_80137E7C++;
        func_80003DC0(D_80137E7C);
        osRecvMesg(&D_800E22F8, NULL, 1);
        osSendMesg(&D_800E22C0, (OSMesg) 13, 0);
        func_800029A8();
        osSendMesg(&D_800E22C0, (OSMesg) 10, 0);
        if (D_800DD8AA & 0x800) {
            func_80003EE0();
        }
        {
            gSPSegment(gUnkDisp1++, 0, 0);
            gSPDisplayList(gMasterDisp++, gGfxPool->unkDL1);
            func_800A26C0();
            if (D_80137E80 == 1) {
                func_800BC4B0();
            }
            gSPEndDisplayList(gUnkDisp1++);
            gSPEndDisplayList(gUnkDisp2++);
            gSPDisplayList(gMasterDisp++, gGfxPool->unkDL2);
            gDPFullSync(gMasterDisp++);
            gSPEndDisplayList(gMasterDisp++);
        }
        osRecvMesg(&D_800E22A0, NULL, 1);
        func_80003C50();
        if (D_80137E8A == 0) {
            osViSwapBuffer(&gFrameBuffers[(D_80137E7C - 1) % 3]);
        }
        func_80007FE4(&gFrameBuffers[(D_80137E7C - 1) % 3], 320, 16);

        var_v1 = MIN(D_80137E78, 4);
        var_v2 = MAX(var_v1, D_800E2278.validCount + 1);
        for (i = 0; i < var_v2; i += 1) { // Can't be ++
            osRecvMesg(&D_800E2278, NULL, 1);
        }

        func_8001DECC();
    }
}

void func_80004560(void) {
    osCreateMesgQueue(&D_800E20F0, D_800E2108, ARRAY_COUNT(D_800E2108));
    osCreateMesgQueue(&D_800E21E0, D_800E21F8, ARRAY_COUNT(D_800E21F8));
    osCreateMesgQueue(&D_800E2238, D_800E2250, ARRAY_COUNT(D_800E2250));
    osCreateMesgQueue(&D_800E2258, D_800E2270, ARRAY_COUNT(D_800E2270));
    osCreateMesgQueue(&D_800E2278, D_800E2290, ARRAY_COUNT(D_800E2290));
    osCreateMesgQueue(&D_800E22A0, D_800E22B8, ARRAY_COUNT(D_800E22B8));
    osCreateMesgQueue(&D_800E2128, D_800E2140, ARRAY_COUNT(D_800E2140));
    osSetEventMesg(OS_EVENT_SI, &D_800E2128, (OSMesg) 0);
    osCreateMesgQueue(&D_800E2148, D_800E2160, ARRAY_COUNT(D_800E2160));
    osViSetEvent(&D_800E2148, (OSMesg) 3, 1);
    osSetEventMesg(OS_EVENT_SP, &D_800E2148, (OSMesg) 1);
    osSetEventMesg(OS_EVENT_DP, &D_800E2148, (OSMesg) 2);
    osSetEventMesg(OS_EVENT_PRENMI, &D_800E2148, (OSMesg) 4);
    osCreateMesgQueue(&D_800E2338, D_800E2350, ARRAY_COUNT(D_800E2350));
    osCreateMesgQueue(&D_800E2390, D_800E23A8, ARRAY_COUNT(D_800E23A8));
    osCreateMesgQueue(&D_800E22C0, D_800E22D8, ARRAY_COUNT(D_800E22D8));
    osCreateMesgQueue(&D_800E22F8, D_800E2310, ARRAY_COUNT(D_800E2310));
    osCreateMesgQueue(&D_800E2318, D_800E2330, ARRAY_COUNT(D_800E2330));
}

void func_80004714(void) {
    SPTask** var_v1 = D_800E1FB8;
    u8 i;

    if ((*var_v1)->msgQueue != NULL) {
        osSendMesg((*var_v1)->msgQueue, (*var_v1)->msg, 0);
    }
    (*var_v1)->state = SPTASK_STATE_FINISHED_DP;
    for (i = 0; i < 1; i += 1, var_v1++) {
        *var_v1 = *(var_v1 + 1);
    }
    *var_v1 = NULL;
}

void func_80004798(void) {
    SPTask* task = gCurrentTask;

    gCurrentTask = NULL;
    if (task->state == SPTASK_STATE_INTERRUPTED) {
        if (osSpTaskYielded(&task->task) == 0) {
            task->state = SPTASK_STATE_FINISHED;
        }
    } else {
        task->state = SPTASK_STATE_FINISHED;
        if (task->task.t.type == M_AUDTASK) {
            if (task->msgQueue != NULL) {
                osSendMesg(task->msgQueue, task->msg, 0);
            }
            D_800E1FB4[0] = NULL;
        }
    }
}

void func_80004824(void) {
    u8 i;
    SPTask** var_a0;
    SPTask** var_a1;
    SPTask** var_s0_2;
    SPTask** var_s1_2;
    void* sp40;
    SPTask* sp3C;

    var_s0_2 = D_800E1FC0;
    var_s1_2 = D_800E1FC8;
    for (i = 0; i < 1; i += 1) {
        *(var_s0_2++) = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(D_800E1FC8); i += 1) {
        *(var_s1_2++) = NULL;
    }

    var_s0_2 = D_800E1FC0;
    var_s1_2 = D_800E1FC8;
    while (osRecvMesg(&D_800E21E0, &sp40, 0) != -1) {
        sp3C = (SPTask*) sp40;
        sp3C->state = SPTASK_STATE_NOT_STARTED;

        switch (sp3C->task.t.type) {
            case 2:
                *(var_s0_2++) = sp3C;
                break;
            case 1:
                *(var_s1_2++) = sp3C;
                break;
        }
    }
    var_s0_2 = D_800E1FC0;
    var_s1_2 = D_800E1FC8;
    var_a0 = D_800E1FB4;
    var_a1 = D_800E1FB8;

    for (i = 0; i < 1; i += 1, var_a0++) {
        if (*var_a0 == NULL) {
            break;
        }
    }
    for (i; i < 1; i += 1) {
        *(var_a0++) = *(var_s0_2++);
    }
    for (i = 0; i < 2; i += 1, var_a1++) {
        if (*var_a1 == NULL) {
            break;
        }
    }
    for (i; i < 2; i += 1) {
        *(var_a1++) = *(var_s1_2++);
    }
}

void func_800049D4(void) {
    if (D_800E1FB4[0] != NULL) {
        if (gCurrentTask != NULL) {
            if (gCurrentTask->task.t.type == M_GFXTASK) {
                gCurrentTask->state = SPTASK_STATE_INTERRUPTED;
                osSpTaskYield();
            }
        } else {
            gCurrentTask = D_800E1FB4[0];
            osSpTaskLoad(&gCurrentTask->task);
            osSpTaskStartGo(&gCurrentTask->task);
            gCurrentTask->state = SPTASK_STATE_RUNNING;
        }
    } else if ((gCurrentTask == NULL) && (D_800E1FB8[0] != NULL) && (D_800E1FB8[0]->state != SPTASK_STATE_FINISHED)) {
        gCurrentTask = D_800E1FB8[0];
        osDpSetStatus(DPC_CLR_TMEM_CTR | DPC_CLR_PIPE_CTR | DPC_CLR_CMD_CTR | DPC_CLR_CLOCK_CTR);
        osSpTaskLoad(&gCurrentTask->task);
        osSpTaskStartGo(&gCurrentTask->task);
        gCurrentTask->state = SPTASK_STATE_RUNNING;
    }
}

void Main_ThreadEntry(void* arg0) {
    s32 sp54;

    osCreateThread(&gAudioThread, THREAD_ID_AUDIO, Audio_ThreadEntry, arg0,
                   gAudioThreadStack + sizeof(gAudioThreadStack), 80);
    osStartThread(&gAudioThread);
    osCreateThread(&gGraphicsThread, THREAD_ID_GRAPHICS, Graphics_ThreadEntry, arg0,
                   gGraphicsThreadStack + sizeof(gGraphicsThreadStack), 40);
    osStartThread(&gGraphicsThread);
    osCreateThread(&gUnkThread3, THREAD_ID_7, func_800040D4, arg0, gUnkThread3Stack + sizeof(gUnkThread3Stack), 60);
    osStartThread(&gUnkThread3);
    osCreateThread(&gUnkThread4, THREAD_ID_8, func_80003FEC, arg0, gUnkThread4Stack + sizeof(gUnkThread4Stack), 20);
    osStartThread(&gUnkThread4);

    func_80004560();

    while (true) {
        osRecvMesg(&D_800E2148, (OSMesg) &sp54, 1);
        switch ((u8) sp54) {
            case 3:
                osSendMesg(&D_800E2238, (OSMesg) 3, 0);
                osSendMesg(&D_800E2278, (OSMesg) 3, 0);
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
    osCreateThread(&gMainThread, THREAD_ID_MAIN, &Main_ThreadEntry, arg0, sMainThreadStack + sizeof(sMainThreadStack),
                   100);
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
    osCreateThread(&sIdleThread, THREAD_ID_IDLE, &Idle_ThreadEntry, NULL, sIdleThreadStack + sizeof(sIdleThreadStack),
                   255);
    osStartThread(&sIdleThread);
}
