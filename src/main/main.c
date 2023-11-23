#include "global.h"

s32 D_800C45D0 = 1;

#ifdef IMPORT_DATA_PENDING
u8 gAudioThreadStack[0x1000];    // 800DDAA0
OSThread gGraphicsThread;        // 800DEAA0
u8 gGraphicsThreadStack[0x1000]; // 800DEC50
OSThread gUnkThread3;            // 800DFC50
u8 gUnkThread3Stack[0x1000];     // 800DFE00
OSThread gSerialThread;          // 800E0E00
u8 gSerialThreadStack[0x1000];   // 800E0FB0

SPTask* gCurrentTask;
SPTask* D_800E1FB4[1];
SPTask* D_800E1FB8[2];
SPTask* D_800E1FC0[2];
SPTask* D_800E1FC8[2];
u32 gSegments[16];          // 800E1FD0
OSMesgQueue gPiMgrCmdQueue; // 800E2010
OSMesg sPiMgrCmdBuff[50];   // 800E2028

OSMesgQueue gDmaMsgQueue;
void* sDmaMsgBuff[1];
OSIoMesg gDmaIOMsg;
OSMesgQueue gSerialEventQueue;
void* sSerialEventBuff[1];
OSMesgQueue gMainThreadMsgQueue;
void* sMainThreadMsgBuff[32];
OSMesgQueue gTaskMsgQueue;
void* sTaskMsgBuff[16];
OSMesgQueue g_D_800E2238_Queue;
void* s_D_800E2238_Buff[1];
OSMesgQueue g_D_800E2258_Queue;
void* s_D_800E2258_Buff[1];
OSMesgQueue g_D_800E2278_Queue;
void* s_D_800E2278_Buff[4];
OSMesgQueue g_D_800E22A0_Queue;
void* s_D_800E22A0_Buff[2];
OSMesgQueue gSerialThreadMsgQueue;
void* sSerialThreadMsgBuff[8];
OSMesgQueue g_D_800E22F8_Queue;
void* s_D_800E22F8_Buff[1];
OSMesgQueue g_D_800E2318_Queue;
void* s_D_800E2318_Buff[1];
OSMesgQueue gThread7msgQueue;
void* sThread7msgBuff[16];
OSMesgQueue g_D_800E2390_Queue;
void* s_D_800E2390_Buff[1];

GfxPool gGfxPools[2];

GfxPool* gGfxPool;
SPTask* gGfxTask;
Vp* gViewport;
Mtx* gGfxMtx;
Gfx* gUnkDisp1;
Gfx* gMasterDisp;
Gfx* gUnkDisp2;
Lightsn* gLight;
FrameBuffer* gFrameBuffer;
s32* D_80137E74;

u8 D_80137E78;
u32 gFrameCounter;
u8 D_80137E80;
u8 D_80137E81;
u8 D_80137E84[4];
u16 D_80137E88;
u16 D_80137E8A;

u8 gUnusedStack[0x1000];
OSThread sIdleThread;        // 80138E90
u8 sIdleThreadStack[0x1000]; // 801390A0
OSThread gMainThread;        // 8013A040
u8 sMainThreadStack[0x1000]; // 8013A1F0
OSThread gAudioThread;       // 8013B1F0
#endif

void func_80003A50(void) {
    u8 i;

    D_80137E78 = 0;
    gFrameCounter = 0;
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
    SPTask* task;

    func_8000FFCC();
    func_8001DCE0();
    task = func_8001DF50();
    if (task != NULL) {
        task->msgQueue = &g_D_800E2258_Queue;
        task->msg = (OSMesg) TASK_MESG_1;
        osWritebackDCacheAll();
        osSendMesg(&gTaskMsgQueue, task, OS_MESG_PRI_NORMAL);
    }
    while (1) {
        task = func_8001DF50();
        if (task != NULL) {
            task->msgQueue = &g_D_800E2258_Queue;
            task->msg = (OSMesg) TASK_MESG_1;
            osWritebackDCacheAll();
        }
        osRecvMesg(&g_D_800E2258_Queue, NULL, OS_MESG_NOBLOCK);
        if (task != NULL) {
            osSendMesg(&gTaskMsgQueue, task, OS_MESG_PRI_NORMAL);
        }
        osRecvMesg(&g_D_800E2238_Queue, NULL, OS_MESG_BLOCK);
    }
}

void func_80003C50(void) {
    gGfxTask->msgQueue = &g_D_800E22A0_Queue;
    gGfxTask->msg = (OSMesg) TASK_MESG_2;
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
    osSendMesg(&gTaskMsgQueue, gGfxTask, OS_MESG_PRI_NORMAL);
}

void func_80003DC0(u32 frameCount) {
    gGfxPool = &gGfxPools[frameCount % 2];

    gGfxTask = &gGfxPool->task;
    gViewport = gGfxPool->viewports;
    gGfxMtx = gGfxPool->mtx;
    gUnkDisp1 = gGfxPool->unkDL1;
    gMasterDisp = gGfxPool->masterDL;
    gUnkDisp2 = gGfxPool->unkDL2;
    gLight = gGfxPool->lights;

    gFrameBuffer = &gFrameBuffers[frameCount % 3];
    D_80137E74 = &D_80387800;

    gGfxMatrix = &sGfxMatrixStack[0];
    gCalcMatrix = &sCalcMatrixStack[0];

    D_80178710 = &D_80178580;
}

void func_80003EE0(void) {
    if ((gCurrentInput[0].button & D_JPAD) && (gCurrentInput[1].button & D_JPAD) && (gCurrentInput[2].button & D_JPAD) &&
        (gCurrentInput[3].button & L_TRIG) && (gCurrentInput[3].button & R_TRIG) && (gCurrentInput[3].button & Z_TRIG)) {
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

void SerialInterface_ThreadEntry(void* arg0) {
    OSMesg sp34;

    Controller_Init();
    while (1) {
        osRecvMesg(&gSerialThreadMsgQueue, &sp34, OS_MESG_BLOCK);

        switch ((s32) sp34) {
            case SI_MESG_10:
                Controller_ReadData();
                break;
            case SI_MESG_11:
                Save_Read();
                break;
            case SI_MESG_12:
                Save_Write();
                break;
            case SI_MESG_13:
                Controller_Rumble();
                break;
        }
    }
}

void Thread7_ThreadEntry(void* arg0) {
    void* sp24;

    while (1) {
        osRecvMesg(&gThread7msgQueue, &sp24, OS_MESG_BLOCK);
        func_80007088(sp24);
    }
}

void Graphics_ThreadEntry(void* arg0) {
    u8 i;
    u8 var_v1;
    u8 var_v2;

    func_800A18B0();
    osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_MESG_10, OS_MESG_PRI_NORMAL);
    func_80003DC0(gFrameCounter);
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
        gFrameCounter++;
        func_80003DC0(gFrameCounter);
        osRecvMesg(&g_D_800E22F8_Queue, NULL, OS_MESG_BLOCK);
        osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_MESG_13, OS_MESG_PRI_NORMAL);
        Controller_UpdateInput();
        osSendMesg(&gSerialThreadMsgQueue, (OSMesg) SI_MESG_10, OS_MESG_PRI_NORMAL);
        if (gChangedInput[3].button & 0x800) {
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
        osRecvMesg(&g_D_800E22A0_Queue, NULL, OS_MESG_BLOCK);
        func_80003C50();
        if (D_80137E8A == 0) {
            osViSwapBuffer(&gFrameBuffers[(gFrameCounter - 1) % 3]);
        }
        func_80007FE4(&gFrameBuffers[(gFrameCounter - 1) % 3], 320, 16);

        var_v1 = MIN(D_80137E78, 4);
        var_v2 = MAX(var_v1, g_D_800E2278_Queue.validCount + 1);
        for (i = 0; i < var_v2; i += 1) { // Can't be ++
            osRecvMesg(&g_D_800E2278_Queue, NULL, OS_MESG_BLOCK);
        }

        func_8001DECC();
    }
}

void Main_InitMesgQueues(void) {
    osCreateMesgQueue(&gDmaMsgQueue, sDmaMsgBuff, ARRAY_COUNT(sDmaMsgBuff));
    osCreateMesgQueue(&gTaskMsgQueue, sTaskMsgBuff, ARRAY_COUNT(sTaskMsgBuff));
    osCreateMesgQueue(&g_D_800E2238_Queue, s_D_800E2238_Buff, ARRAY_COUNT(s_D_800E2238_Buff));
    osCreateMesgQueue(&g_D_800E2258_Queue, s_D_800E2258_Buff, ARRAY_COUNT(s_D_800E2258_Buff));
    osCreateMesgQueue(&g_D_800E2278_Queue, s_D_800E2278_Buff, ARRAY_COUNT(s_D_800E2278_Buff));
    osCreateMesgQueue(&g_D_800E22A0_Queue, s_D_800E22A0_Buff, ARRAY_COUNT(s_D_800E22A0_Buff));
    osCreateMesgQueue(&gSerialEventQueue, sSerialEventBuff, ARRAY_COUNT(sSerialEventBuff));
    osSetEventMesg(OS_EVENT_SI, &gSerialEventQueue, NULL);
    osCreateMesgQueue(&gMainThreadMsgQueue, sMainThreadMsgBuff, ARRAY_COUNT(sMainThreadMsgBuff));
    osViSetEvent(&gMainThreadMsgQueue, (OSMesg) EVENT_MESG_VI, 1);
    osSetEventMesg(OS_EVENT_SP, &gMainThreadMsgQueue, (OSMesg) EVENT_MESG_SP);
    osSetEventMesg(OS_EVENT_DP, &gMainThreadMsgQueue, (OSMesg) EVENT_MESG_DP);
    osSetEventMesg(OS_EVENT_PRENMI, &gMainThreadMsgQueue, (OSMesg) EVENT_MESG_PRENMI);
    osCreateMesgQueue(&gThread7msgQueue, sThread7msgBuff, ARRAY_COUNT(sThread7msgBuff));
    osCreateMesgQueue(&g_D_800E2390_Queue, s_D_800E2390_Buff, ARRAY_COUNT(s_D_800E2390_Buff));
    osCreateMesgQueue(&gSerialThreadMsgQueue, sSerialThreadMsgBuff, ARRAY_COUNT(sSerialThreadMsgBuff));
    osCreateMesgQueue(&g_D_800E22F8_Queue, s_D_800E22F8_Buff, ARRAY_COUNT(s_D_800E22F8_Buff));
    osCreateMesgQueue(&g_D_800E2318_Queue, s_D_800E2318_Buff, ARRAY_COUNT(s_D_800E2318_Buff));
}

void func_80004714(void) {
    SPTask** var_v1 = D_800E1FB8;
    u8 i;

    if ((*var_v1)->msgQueue != NULL) {
        osSendMesg((*var_v1)->msgQueue, (*var_v1)->msg, OS_MESG_PRI_NORMAL);
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
                osSendMesg(task->msgQueue, task->msg, OS_MESG_PRI_NORMAL);
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
    OSMesg sp40;
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
    while (osRecvMesg(&gTaskMsgQueue, &sp40, OS_MESG_NOBLOCK) != MSG_QUEUE_EMPTY) {
        sp3C = (SPTask*) sp40;
        sp3C->state = SPTASK_STATE_NOT_STARTED;

        switch (sp3C->task.t.type) {
            case M_AUDTASK:
                *(var_s0_2++) = sp3C;
                break;
            case M_GFXTASK:
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
    OSMesg sp54;
    u8 mesg;

    osCreateThread(&gAudioThread, THREAD_ID_AUDIO, Audio_ThreadEntry, arg0,
                   gAudioThreadStack + sizeof(gAudioThreadStack), 80);
    osStartThread(&gAudioThread);
    osCreateThread(&gGraphicsThread, THREAD_ID_GRAPHICS, Graphics_ThreadEntry, arg0,
                   gGraphicsThreadStack + sizeof(gGraphicsThreadStack), 40);
    osStartThread(&gGraphicsThread);
    osCreateThread(&gUnkThread3, THREAD_ID_7, Thread7_ThreadEntry, arg0, gUnkThread3Stack + sizeof(gUnkThread3Stack),
                   60);
    osStartThread(&gUnkThread3);
    osCreateThread(&gSerialThread, THREAD_ID_SERIAL, SerialInterface_ThreadEntry, arg0,
                   gSerialThreadStack + sizeof(gSerialThreadStack), 20);
    osStartThread(&gSerialThread);

    Main_InitMesgQueues();

    while (true) {
        osRecvMesg(&gMainThreadMsgQueue, &sp54, OS_MESG_BLOCK);
        mesg = (u32) sp54;

        switch (mesg) {
            case EVENT_MESG_VI:
                osSendMesg(&g_D_800E2238_Queue, (OSMesg) EVENT_MESG_VI, OS_MESG_PRI_NORMAL);
                osSendMesg(&g_D_800E2278_Queue, (OSMesg) EVENT_MESG_VI, OS_MESG_PRI_NORMAL);
                func_80004824();
                break;
            case EVENT_MESG_SP:
                func_80004798();
                break;
            case EVENT_MESG_DP:
                func_80004714();
                break;
            case EVENT_MESG_PRENMI:
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
    Lib_FillScreen(1);
    osCreatePiMgr(OS_PRIORITY_PIMGR, &gPiMgrCmdQueue, sPiMgrCmdBuff, ARRAY_COUNT(sPiMgrCmdBuff));
    osCreateThread(&gMainThread, THREAD_ID_MAIN, &Main_ThreadEntry, arg0, sMainThreadStack + sizeof(sMainThreadStack),
                   100);
    osStartThread(&gMainThread);
    Fault_Init();
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
