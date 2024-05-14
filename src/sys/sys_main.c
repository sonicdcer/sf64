#include "sys.h"
#include "sf64audio_external.h"

s32 sGammaMode = 1;

SPTask* gCurrentTask;
SPTask* sAudioTasks[1];
SPTask* sGfxTasks[2];
SPTask* sNewAudioTasks[1];
SPTask* sNewGfxTasks[2];
u32 gSegments[16];          // 800E1FD0
OSMesgQueue gPiMgrCmdQueue; // 800E2010
OSMesg sPiMgrCmdBuff[50];   // 800E2028

OSMesgQueue gDmaMesgQueue;
void* sDmaMsgBuff[1];
OSIoMesg gDmaIOMsg;
OSMesgQueue gSerialEventQueue;
void* sSerialEventBuff[1];
OSMesgQueue gMainThreadMesgQueue;
void* sMainThreadMsgBuff[32];
OSMesgQueue gTaskMesgQueue;
void* sTaskMsgBuff[16];
OSMesgQueue gAudioVImesgQueue;
void* sAudioVImsgBuff[1];
OSMesgQueue gAudioTaskMesgQueue;
void* sAudioTaskMsgBuff[1];
OSMesgQueue gGfxVImesgQueue;
void* sGfxVImsgBuff[4];
OSMesgQueue gGfxTaskMesgQueue;
void* sGfxTaskMsgBuff[2];
OSMesgQueue gSerialThreadMesgQueue;
void* sSerialThreadMsgBuff[8];
OSMesgQueue gControllerMesgQueue;
void* sControllerMsgBuff[1];
OSMesgQueue gSaveMesgQueue;
void* sSaveMsgBuff[1];
OSMesgQueue gTimerTaskMesgQueue;
void* sTimerTaskMsgBuff[16];
OSMesgQueue gTimerWaitMesgQueue;
void* sTimerWaitMsgBuff[1];

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
u16* gTextureRender;

u8 gVIsPerFrame;
u32 gSysFrameCount;
u8 gStartNMI;
u8 gStopTasks;
u8 gControllerRumbleFlags[4];
u16 gFillScreenColor;
u16 gFillScreen;

u8 gUnusedStack[0x1000];
OSThread sIdleThread;            // 80138E90
u8 sIdleThreadStack[0x1000];     // 801390A0
OSThread gMainThread;            // 8013A040
u8 sMainThreadStack[0x1000];     // 8013A1F0
OSThread gAudioThread;           // 8013B1F0
u8 gAudioThreadStack[0x1000];    // 800DDAA0
OSThread gGraphicsThread;        // 800DEAA0
u8 gGraphicsThreadStack[0x1000]; // 800DEC50
OSThread gTimerThread;           // 800DFC50
u8 gTimerThreadStack[0x1000];    // 800DFE00
OSThread gSerialThread;          // 800E0E00
u8 gSerialThreadStack[0x1000];   // 800E0FB0

void Main_Initialize(void) {
    u8 i;

    gVIsPerFrame = 0;
    gSysFrameCount = 0;
    gStartNMI = false;
    gStopTasks = false;
    gFillScreenColor = 0;
    gFillScreen = false;
    gCurrentTask = NULL;

    for (i = 0; i < ARRAY_COUNT(sAudioTasks); i += 1) {
        sAudioTasks[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(sGfxTasks); i += 1) {
        sGfxTasks[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(sNewAudioTasks); i += 1) {
        sNewAudioTasks[i] = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(sNewGfxTasks); i += 1) {
        sNewGfxTasks[i] = NULL;
    }
}

void Audio_ThreadEntry(void* arg0) {
    SPTask* task;

    AudioLoad_Init();
    Audio_InitSounds();
    task = AudioThread_CreateTask();
    if (task != NULL) {
        task->mesgQueue = &gAudioTaskMesgQueue;
        task->msg = (OSMesg) TASK_MESG_1;
        osWritebackDCacheAll();
        osSendMesg(&gTaskMesgQueue, task, OS_MESG_NOBLOCK);
    }
    while (true) {
        task = AudioThread_CreateTask();
        if (task != NULL) {
            task->mesgQueue = &gAudioTaskMesgQueue;
            task->msg = (OSMesg) TASK_MESG_1;
            osWritebackDCacheAll();
        }
        MQ_GET_MESG(&gAudioTaskMesgQueue, NULL);
        if (task != NULL) {
            osSendMesg(&gTaskMesgQueue, task, OS_MESG_NOBLOCK);
        }
        MQ_WAIT_FOR_MESG(&gAudioVImesgQueue, NULL);
    }
}

void Graphics_SetTask(void) {
    gGfxTask->mesgQueue = &gGfxTaskMesgQueue;
    gGfxTask->msg = (OSMesg) TASK_MESG_2;
    gGfxTask->task.t.type = M_GFXTASK;
    gGfxTask->task.t.flags = 0;
    gGfxTask->task.t.ucode_boot = rspbootTextStart;
    gGfxTask->task.t.ucode_boot_size = (uintptr_t) rspbootTextEnd - (uintptr_t) rspbootTextStart;
    gGfxTask->task.t.ucode = gspF3DEX_fifoTextStart;
    gGfxTask->task.t.ucode_size = SP_UCODE_SIZE;
    gGfxTask->task.t.ucode_data = (u64*) &gspF3DEX_fifoDataStart;
    gGfxTask->task.t.ucode_data_size = SP_UCODE_DATA_SIZE;
    gGfxTask->task.t.dram_stack = gDramStack;
    gGfxTask->task.t.dram_stack_size = SP_DRAM_STACK_SIZE8;
    gGfxTask->task.t.output_buff = (u64*) gTaskOutputBuffer;
    gGfxTask->task.t.output_buff_size = (u64*) gAudioHeap;
    gGfxTask->task.t.data_ptr = (u64*) gGfxPool->masterDL;
    gGfxTask->task.t.data_size = (gMasterDisp - gGfxPool->masterDL) * sizeof(Gfx);
    gGfxTask->task.t.yield_data_ptr = (u64*) &gOSYieldData;
    gGfxTask->task.t.yield_data_size = OS_YIELD_DATA_SIZE;
    osWritebackDCacheAll();
    osSendMesg(&gTaskMesgQueue, gGfxTask, OS_MESG_NOBLOCK);
}

void Graphics_InitializeTask(u32 frameCount) {
    gGfxPool = &gGfxPools[frameCount % 2];

    gGfxTask = &gGfxPool->task;
    gViewport = gGfxPool->viewports;
    gGfxMtx = gGfxPool->mtx;
    gUnkDisp1 = gGfxPool->unkDL1;
    gMasterDisp = gGfxPool->masterDL;
    gUnkDisp2 = gGfxPool->unkDL2;
    gLight = gGfxPool->lights;

    gFrameBuffer = &gFrameBuffers[frameCount % 3];
    gTextureRender = &gTextureRenderBuffer[0];

    gGfxMatrix = &sGfxMatrixStack[0];
    gCalcMatrix = &sCalcMatrixStack[0];

    D_80178710 = &D_80178580[0];
}

void Main_SetVIMode(void) {
    if ((gControllerHold[0].button & D_JPAD) && (gControllerHold[1].button & D_JPAD) &&
        (gControllerHold[2].button & D_JPAD) && (gControllerHold[3].button & L_TRIG) &&
        (gControllerHold[3].button & R_TRIG) && (gControllerHold[3].button & Z_TRIG)) {
        sGammaMode = 1 - sGammaMode;
    }
    switch (osTvType) {
        case OS_TV_PAL:
            osViSetMode(&osViModePalLan1);
            break;
        case OS_TV_MPAL:
            osViSetMode(&osViModeMpalLan1);
            break;
        default:
        case OS_TV_NTSC:
            osViSetMode(&osViModeNtscLan1);
            break;
    }
    if (sGammaMode != 0) {
        osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON | OS_VI_DIVOT_OFF | OS_VI_GAMMA_ON | OS_VI_GAMMA_DITHER_ON);
    } else {
        osViSetSpecialFeatures(OS_VI_DITHER_FILTER_ON | OS_VI_DIVOT_OFF | OS_VI_GAMMA_OFF | OS_VI_GAMMA_DITHER_OFF);
    }
}

void SerialInterface_ThreadEntry(void* arg0) {
    OSMesg sp34;

    Controller_Init();
    while (true) {
        MQ_WAIT_FOR_MESG(&gSerialThreadMesgQueue, &sp34);

        switch ((s32) sp34) {
            case SI_READ_CONTROLLER:
                Controller_ReadData();
                break;
            case SI_READ_SAVE:
                Save_ReadData();
                break;
            case SI_WRITE_SAVE:
                Save_WriteData();
                break;
            case SI_RUMBLE:
                Controller_Rumble();
                break;
        }
    }
}

void Timer_ThreadEntry(void* arg0) {
    void* sp24;

    while (true) {
        MQ_WAIT_FOR_MESG(&gTimerTaskMesgQueue, &sp24);
        Timer_CompleteTask(sp24);
    }
}

void Graphics_ThreadEntry(void* arg0) {
    u8 i;
    u8 visPerFrame;
    u8 validVIsPerFrame;

    Game_Initialize();
    osSendMesg(&gSerialThreadMesgQueue, (OSMesg) SI_READ_CONTROLLER, OS_MESG_NOBLOCK);
    Graphics_InitializeTask(gSysFrameCount);
    {
        gSPSegment(gUnkDisp1++, 0, 0);
        gSPDisplayList(gMasterDisp++, gGfxPool->unkDL1);
        Game_Update();
        gSPEndDisplayList(gUnkDisp1++);
        gSPEndDisplayList(gUnkDisp2++);
        gSPDisplayList(gMasterDisp++, gGfxPool->unkDL2);
        gDPFullSync(gMasterDisp++);
        gSPEndDisplayList(gMasterDisp++);
    }
    Graphics_SetTask();
    while (true) {
        gSysFrameCount++;
        Graphics_InitializeTask(gSysFrameCount);
        MQ_WAIT_FOR_MESG(&gControllerMesgQueue, NULL);
        osSendMesg(&gSerialThreadMesgQueue, (OSMesg) SI_RUMBLE, OS_MESG_NOBLOCK);
        Controller_UpdateInput();
        osSendMesg(&gSerialThreadMesgQueue, (OSMesg) SI_READ_CONTROLLER, OS_MESG_NOBLOCK);
        if (gControllerPress[3].button & U_JPAD) {
            Main_SetVIMode();
        }
        {
            gSPSegment(gUnkDisp1++, 0, 0);
            gSPDisplayList(gMasterDisp++, gGfxPool->unkDL1);
            Game_Update();
            if (gStartNMI == 1) {
                Graphics_NMIWipe();
            }
            gSPEndDisplayList(gUnkDisp1++);
            gSPEndDisplayList(gUnkDisp2++);
            gSPDisplayList(gMasterDisp++, gGfxPool->unkDL2);
            gDPFullSync(gMasterDisp++);
            gSPEndDisplayList(gMasterDisp++);
        }
        MQ_WAIT_FOR_MESG(&gGfxTaskMesgQueue, NULL);

        Graphics_SetTask();

        if (!gFillScreen) {
            osViSwapBuffer(&gFrameBuffers[(gSysFrameCount - 1) % 3]);
        }

        Fault_SetFrameBuffer(&gFrameBuffers[(gSysFrameCount - 1) % 3], SCREEN_WIDTH, 16);

        visPerFrame = MIN(gVIsPerFrame, 4);
        validVIsPerFrame = MAX(visPerFrame, gGfxVImesgQueue.validCount + 1);
        for (i = 0; i < validVIsPerFrame; i += 1) { // Can't be ++
            MQ_WAIT_FOR_MESG(&gGfxVImesgQueue, NULL);
        }

        Audio_Update();
    }
}

void Main_InitMesgQueues(void) {
    osCreateMesgQueue(&gDmaMesgQueue, sDmaMsgBuff, ARRAY_COUNT(sDmaMsgBuff));
    osCreateMesgQueue(&gTaskMesgQueue, sTaskMsgBuff, ARRAY_COUNT(sTaskMsgBuff));
    osCreateMesgQueue(&gAudioVImesgQueue, sAudioVImsgBuff, ARRAY_COUNT(sAudioVImsgBuff));
    osCreateMesgQueue(&gAudioTaskMesgQueue, sAudioTaskMsgBuff, ARRAY_COUNT(sAudioTaskMsgBuff));
    osCreateMesgQueue(&gGfxVImesgQueue, sGfxVImsgBuff, ARRAY_COUNT(sGfxVImsgBuff));
    osCreateMesgQueue(&gGfxTaskMesgQueue, sGfxTaskMsgBuff, ARRAY_COUNT(sGfxTaskMsgBuff));
    osCreateMesgQueue(&gSerialEventQueue, sSerialEventBuff, ARRAY_COUNT(sSerialEventBuff));
    osSetEventMesg(OS_EVENT_SI, &gSerialEventQueue, NULL);
    osCreateMesgQueue(&gMainThreadMesgQueue, sMainThreadMsgBuff, ARRAY_COUNT(sMainThreadMsgBuff));
    osViSetEvent(&gMainThreadMesgQueue, (OSMesg) EVENT_MESG_VI, 1);
    osSetEventMesg(OS_EVENT_SP, &gMainThreadMesgQueue, (OSMesg) EVENT_MESG_SP);
    osSetEventMesg(OS_EVENT_DP, &gMainThreadMesgQueue, (OSMesg) EVENT_MESG_DP);
    osSetEventMesg(OS_EVENT_PRENMI, &gMainThreadMesgQueue, (OSMesg) EVENT_MESG_PRENMI);
    osCreateMesgQueue(&gTimerTaskMesgQueue, sTimerTaskMsgBuff, ARRAY_COUNT(sTimerTaskMsgBuff));
    osCreateMesgQueue(&gTimerWaitMesgQueue, sTimerWaitMsgBuff, ARRAY_COUNT(sTimerWaitMsgBuff));
    osCreateMesgQueue(&gSerialThreadMesgQueue, sSerialThreadMsgBuff, ARRAY_COUNT(sSerialThreadMsgBuff));
    osCreateMesgQueue(&gControllerMesgQueue, sControllerMsgBuff, ARRAY_COUNT(sControllerMsgBuff));
    osCreateMesgQueue(&gSaveMesgQueue, sSaveMsgBuff, ARRAY_COUNT(sSaveMsgBuff));
}

void Main_HandleRDP(void) {
    SPTask** task = sGfxTasks;
    u8 i;

    if ((*task)->mesgQueue != NULL) {
        osSendMesg((*task)->mesgQueue, (*task)->msg, OS_MESG_NOBLOCK);
    }
    (*task)->state = SPTASK_STATE_FINISHED_DP;

    for (i = 0; i < ARRAY_COUNT(sGfxTasks) - 1; i += 1, task++) {
        *task = *(task + 1);
    }
    *task = NULL;
}

void Main_HandleRSP(void) {
    SPTask* task = gCurrentTask;

    gCurrentTask = NULL;
    if (task->state == SPTASK_STATE_INTERRUPTED) {
        if (osSpTaskYielded(&task->task) == 0) {
            task->state = SPTASK_STATE_FINISHED;
        }
    } else {
        task->state = SPTASK_STATE_FINISHED;
        if (task->task.t.type == M_AUDTASK) {
            if (task->mesgQueue != NULL) {
                osSendMesg(task->mesgQueue, task->msg, OS_MESG_NOBLOCK);
            }
            sAudioTasks[0] = NULL;
        }
    }
}

void Main_GetNewTasks(void) {
    u8 i;
    SPTask** audioTask;
    SPTask** gfxTask;
    SPTask** newAudioTask;
    SPTask** newGfxTask;
    OSMesg spTaskMsg;
    SPTask* newTask;

    newAudioTask = sNewAudioTasks;
    newGfxTask = sNewGfxTasks;
    for (i = 0; i < ARRAY_COUNT(sNewAudioTasks); i += 1) {
        *(newAudioTask++) = NULL;
    }
    for (i = 0; i < ARRAY_COUNT(sNewGfxTasks); i += 1) {
        *(newGfxTask++) = NULL;
    }

    newAudioTask = sNewAudioTasks;
    newGfxTask = sNewGfxTasks;
    while (MQ_GET_MESG(&gTaskMesgQueue, &spTaskMsg)) {
        newTask = (SPTask*) spTaskMsg;
        newTask->state = SPTASK_STATE_NOT_STARTED;

        switch (newTask->task.t.type) {
            case M_AUDTASK:
                *(newAudioTask++) = newTask;
                break;
            case M_GFXTASK:
                *(newGfxTask++) = newTask;
                break;
        }
    }
    newAudioTask = sNewAudioTasks;
    newGfxTask = sNewGfxTasks;
    audioTask = sAudioTasks;
    gfxTask = sGfxTasks;

    for (i = 0; i < ARRAY_COUNT(sAudioTasks); i += 1, audioTask++) {
        if (*audioTask == NULL) {
            break;
        }
    }
    for (i; i < ARRAY_COUNT(sAudioTasks); i += 1) {
        *(audioTask++) = *(newAudioTask++);
    }

    for (i = 0; i < ARRAY_COUNT(sGfxTasks); i += 1, gfxTask++) {
        if (*gfxTask == NULL) {
            break;
        }
    }
    for (i; i < ARRAY_COUNT(sGfxTasks); i += 1) {
        *(gfxTask++) = *(newGfxTask++);
    }
}

void Main_StartNextTask(void) {
    if (sAudioTasks[0] != NULL) {
        if (gCurrentTask != NULL) {
            if (gCurrentTask->task.t.type == M_GFXTASK) {
                gCurrentTask->state = SPTASK_STATE_INTERRUPTED;
                osSpTaskYield();
            }
        } else {
            gCurrentTask = sAudioTasks[0];
            osSpTaskLoad(&gCurrentTask->task);
            osSpTaskStartGo(&gCurrentTask->task);
            gCurrentTask->state = SPTASK_STATE_RUNNING;
        }
    } else if ((gCurrentTask == NULL) && (sGfxTasks[0] != NULL) && (sGfxTasks[0]->state != SPTASK_STATE_FINISHED)) {
        gCurrentTask = sGfxTasks[0];
        osDpSetStatus(DPC_CLR_TMEM_CTR | DPC_CLR_PIPE_CTR | DPC_CLR_CMD_CTR | DPC_CLR_CLOCK_CTR);
        osSpTaskLoad(&gCurrentTask->task);
        osSpTaskStartGo(&gCurrentTask->task);
        gCurrentTask->state = SPTASK_STATE_RUNNING;
    }
}

void Main_ThreadEntry(void* arg0) {
    OSMesg osMesg;
    u8 mesg;

    osCreateThread(&gAudioThread, THREAD_ID_AUDIO, Audio_ThreadEntry, arg0,
                   gAudioThreadStack + sizeof(gAudioThreadStack), 80);
    osStartThread(&gAudioThread);
    osCreateThread(&gGraphicsThread, THREAD_ID_GRAPHICS, Graphics_ThreadEntry, arg0,
                   gGraphicsThreadStack + sizeof(gGraphicsThreadStack), 40);
    osStartThread(&gGraphicsThread);
    osCreateThread(&gTimerThread, THREAD_ID_TIMER, Timer_ThreadEntry, arg0,
                   gTimerThreadStack + sizeof(gTimerThreadStack), 60);
    osStartThread(&gTimerThread);
    osCreateThread(&gSerialThread, THREAD_ID_SERIAL, SerialInterface_ThreadEntry, arg0,
                   gSerialThreadStack + sizeof(gSerialThreadStack), 20);
    osStartThread(&gSerialThread);

    Main_InitMesgQueues();

    while (true) {
        MQ_WAIT_FOR_MESG(&gMainThreadMesgQueue, &osMesg);
        mesg = (u32) osMesg;

        switch (mesg) {
            case EVENT_MESG_VI:
                osSendMesg(&gAudioVImesgQueue, (OSMesg) EVENT_MESG_VI, OS_MESG_NOBLOCK);
                osSendMesg(&gGfxVImesgQueue, (OSMesg) EVENT_MESG_VI, OS_MESG_NOBLOCK);
                Main_GetNewTasks();
                break;
            case EVENT_MESG_SP:
                Main_HandleRSP();
                break;
            case EVENT_MESG_DP:
                Main_HandleRDP();
                break;
            case EVENT_MESG_PRENMI:
                gStartNMI = 1;
                break;
        }
        if (gStopTasks == 0) {
            Main_StartNextTask();
        }
    }
}

void Idle_ThreadEntry(void* arg0) {
    osCreateViManager(OS_PRIORITY_VIMGR);
    Main_SetVIMode();
    Lib_FillScreen(1);
    osCreatePiManager(OS_PRIORITY_PIMGR, &gPiMgrCmdQueue, sPiMgrCmdBuff, ARRAY_COUNT(sPiMgrCmdBuff));
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
    Main_Initialize();
    osCreateThread(&sIdleThread, THREAD_ID_IDLE, &Idle_ThreadEntry, NULL, sIdleThreadStack + sizeof(sIdleThreadStack),
                   255);
    osStartThread(&sIdleThread);
}
