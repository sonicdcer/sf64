#ifndef PR_CONTROLLER_H
#define PR_CONTROLLER_H

#include "global.h"
#include "PR/os.h"

#define UNK(n) 500000 * (u64)(n) / 1000000
#define CONT_CMD_REQUEST_STATUS 0

typedef struct
{
              u32 ramarray[15];
               u32 pifstatus;
} OSPifRam;

extern u32 __osContinitialized;
extern u8 __osMaxControllers;
extern u8 __osContLastCmd;
extern OSPifRam __osContPifRam;
extern OSMesgQueue __osEepromTimerQ;
extern OSMesg __osEepromTimerMsg;

#endif