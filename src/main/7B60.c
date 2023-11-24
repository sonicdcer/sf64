#include "global.h"

extern Thread7Task sThread7Tasks[0x10];

Thread7Task* Thread7_AllocateTask(void) {
    s32 i;

    for (i = 0; i < 0x10; i++) {
        if (!sThread7Tasks[i].active) {
            return &sThread7Tasks[i];
        }
    }
    return NULL;
}

s32 Thread7_CreateTask(u64 time, Thread7Action* action, s32* address, s32 value) {
    Thread7Task* task = Thread7_AllocateTask();

    if (task == NULL) {
        return -1;
    }
    task->active = true;
    task->action = action;
    task->address = address;
    task->value = value;
    return osSetTimer(&task->timer, time, 0, &gThread7TaskMsgQueue, task);
}

void Thread7_Increment(s32* address, s32 value) {
    *address += value;
}

void Thread7_SetValue(s32* address, s32 value) {
    *address = value;
}

void Thread7_CompleteTask(Thread7Task* task) {
    if (task->action != NULL) {
        task->action(task->address, task->value);
    }
    task->active = false;
}

void Thread7_Wait(u64 time) {
    OSTimer timer;
    OSMesg dummy;

    osSetTimer(&timer, time, 0, &gThread7WaitMsgQueue, NULL);
    osRecvMesg(&gThread7WaitMsgQueue, &dummy, OS_MESG_BLOCK);
}
