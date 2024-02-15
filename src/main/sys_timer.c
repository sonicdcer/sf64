#include "sys.h"

TimerTask sTimerTasks[0x10];

TimerTask* Timer_AllocateTask(void) {
    s32 i;

    for (i = 0; i < 0x10; i++) {
        if (!sTimerTasks[i].active) {
            return &sTimerTasks[i];
        }
    }
    return NULL;
}

s32 Timer_CreateTask(u64 time, TimerAction action, s32* address, s32 value) {
    TimerTask* task = Timer_AllocateTask();

    if (task == NULL) {
        return -1;
    }
    task->active = true;
    task->action = action;
    task->address = address;
    task->value = value;
    return osSetTimer(&task->timer, time, 0, &gTimerTaskMsgQueue, task);
}

void Timer_Increment(s32* address, s32 value) {
    *address += value;
}

void Timer_SetValue(s32* address, s32 value) {
    *address = value;
}

void Timer_CompleteTask(TimerTask* task) {
    if (task->action != NULL) {
        task->action(task->address, task->value);
    }
    task->active = false;
}

void Timer_Wait(u64 time) {
    OSTimer timer;
    OSMesg dummy;

    osSetTimer(&timer, time, 0, &gTimerWaitMsgQueue, NULL);
    osRecvMesg(&gTimerWaitMsgQueue, &dummy, OS_MESG_BLOCK);
}
