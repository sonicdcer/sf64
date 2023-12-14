#ifndef SF64_THREAD
#define SF64_THREAD

#include "libultra/ultra64.h"
#include "gfx.h"

typedef enum {
    GSTATE_NONE,
    GSTATE_INIT,
    GSTATE_TITLE,
    GSTATE_MENU,
    GSTATE_MAP,
    GSTATE_STATE_5,
    GSTATE_VS_INIT,
    GSTATE_PLAY,
    GSTATE_CREDITS,
    GSTATE_BOOT = 100,
    GSTATE_BOOT_WAIT,
    GSTATE_SHOW_LOGO,
    GSTATE_CHECK_SAVE,
    GSTATE_LOGO_WAIT,
    GSTATE_START,
} GameStates;

typedef void (*TimerAction)(s32*, s32);

typedef struct {
    /* 0x00 */ u8 active;
    /* 0x08 */ OSTimer timer;
    /* 0x28 */ TimerAction action;
    /* 0x2C */ s32* address;
    /* 0x30 */ s32 value;
} TimerTask; // size = 0x38, 0x8 aligned

typedef struct {
    /* 0x000 */ OSThread thread;
    /* 0x1B0 */ char stack[0x800];
    /* 0x9B0 */ OSMesgQueue msgQueue;
    /* 0x9C8 */ OSMesg msg;
    /* 0x9CC */ FrameBuffer* fb;
    /* 0x9D0 */ u16 width;
    /* 0x9D2 */ u16 height;
} FaultMgr; // size = 0x9D8, 0x8 aligned

typedef enum {
    SPTASK_STATE_NOT_STARTED,
    SPTASK_STATE_RUNNING,
    SPTASK_STATE_INTERRUPTED,
    SPTASK_STATE_FINISHED,
    SPTASK_STATE_FINISHED_DP
} SpTaskState;

typedef struct {
    /* 0x00 */ OSTask task;
    /* 0x40 */ OSMesgQueue* msgQueue;
    /* 0x44 */ OSMesg msg;
    /* 0x48 */ SpTaskState state;
} SPTask; // size = 0x50, 0x8 aligned

typedef struct {
    /* 0x00000 */ SPTask task;
    /* 0x00050 */ Vp viewports[0x10];
    /* 0x00150 */ Mtx mtx[0x480];
    /* 0x12150 */ Gfx unkDL1[0x180];
    /* 0x12D50 */ Gfx masterDL[0x1380];
    /* 0x1C950 */ Gfx unkDL2[0xD80];
    /* 0x23550 */ Lightsn lights[0x100];
} GfxPool; // size = 0x2AD50, 0x8 aligned

void Controller_Init(void);
void Controller_UpdateInput(void);
void Controller_ReadData(void);
void Save_ReadData(void);
void Save_WriteData(void);
void Controller_Rumble(void);

s32 Timer_CreateTask(u64, TimerAction, s32*, s32);
void Timer_Increment(s32* address, s32 value);
void Timer_SetValue(s32* address, s32 value);
void Timer_CompleteTask(TimerTask*);
void Timer_Wait(u64);

s32 Save_WriteEeprom(SaveFile*);
s32 Save_ReadEeprom(SaveFile*);

void Fault_ThreadEntry(void*);
void func_80007FE4(FrameBuffer*, u16, u16);
void Fault_Init(void);

typedef enum {
    SI_READ_CONTROLLER = 10,
    SI_READ_SAVE,
    SI_WRITE_SAVE,
    SI_RUMBLE,
    SI_SAVE_FAILED,
    SI_SAVE_SUCCESS,
    SI_CONT_READ_DONE,
} SerialMesg;

#define MSG_QUEUE_EMPTY -1

#define FAULT_MESG_BREAK 1
#define FAULT_MESG_FAULT 2

#define TASK_MESG_1 1
#define TASK_MESG_2 2

#define EVENT_MESG_SP 1
#define EVENT_MESG_DP 2
#define EVENT_MESG_VI 3
#define EVENT_MESG_PRENMI 4

typedef enum {
    THREAD_ID_SYSTEM,
    THREAD_ID_IDLE,
    THREAD_ID_FAULT,
    THREAD_ID_MAIN,
    THREAD_ID_4,
    THREAD_ID_AUDIO,
    THREAD_ID_GRAPHICS,
    THREAD_ID_7,
    THREAD_ID_SERIAL,
} ThreadID;

#endif
