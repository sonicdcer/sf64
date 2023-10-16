#ifndef PR_CONTROLLER_H
#define PR_CONTROLLER_H

#include "global.h"
#include "PR/os.h"

typedef struct {
    /* 0x00 */ u8 align;
    /* 0x01 */ u8 txsize;
    /* 0x02 */ u8 rxsize;
    /* 0x03 */ u8 poll;
    /* 0x04 */ u8 typeh;
    /* 0x05 */ u8 typel;
    /* 0x06 */ u8 status;
    /* 0x07 */ u8 align1;
} __OSContRequestHeader; // size = 0x8

// Joybus commands
#define CONT_CMD_REQUEST_STATUS 0
#define CONT_CMD_READ_BUTTON    1
#define CONT_CMD_READ_PAK       2
#define CONT_CMD_WRITE_PAK      3
#define CONT_CMD_READ_EEPROM    4
#define CONT_CMD_WRITE_EEPROM   5
#define CONT_CMD_READ36_VOICE   9
#define CONT_CMD_WRITE20_VOICE  10
#define CONT_CMD_READ2_VOICE    11
#define CONT_CMD_WRITE4_VOICE   12
#define CONT_CMD_SWRITE_VOICE   13
#define CONT_CMD_CHANNEL_RESET  0xFD
#define CONT_CMD_RESET          0xFF

#define UNK(n) 500000 * (u64)(n) / 1000000

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

void __osPackRequestData(u8 poll);

#endif
