
/**************************************************************************
 *
 *  $Revision: 1.8 $
 *  $Date: 1997/02/13 14:54:47 $
 *  $Source: /disk6/Master/cvsmdev2/PR/include/leo.h,v $
 *
 **************************************************************************/

#ifndef _LEO_H_
#define _LEO_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include <ultra64.h>
#include <PR/leoappli.h>

#if defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS)

/**************************************************************************
 *
 * Type definitions
 *
 */
typedef u32     LEOError;

typedef	u8	LEOSpdlMode;

typedef u8	LEOStatus;

typedef struct
{
  u8    drive;			/* version of hw */
  u8    driver;			/* version of sw */
  u8	deviceType;		/* dev type, always 00 */
  u8	ndevices;		/* # of devices, always 01 */
} LEOVersion;

typedef	struct
{
  u32	startLBA;
  u32	endLBA;
  u32	nbytes;
} LEOCapacity;

typedef struct
{
  u8	pad;
  u8	yearhi;
  u8	yearlo;
  u8	month;
  u8	day;
  u8	hour;
  u8	minute;
  u8	second;
} LEODiskTime;

typedef	struct
{
  u64		lineNumber;
  LEODiskTime	time;
} LEOSerialNum;

typedef struct
{
  u8		gameName[4];
  u8		gameVersion;
  u8		diskNumber;
  u16		diskUsage;
  LEOSerialNum	serialNumber;
  u64		reserve;
} LEODiskID;

typedef struct
{
  LEOCmdHeader		header;
  union
  {
    struct
    {
      u32           lba;
      u32           xfer_blks;
      void         *buff_ptr;
      u32           rw_bytes;
    } readwrite;
    struct
    {
      u32           lba;
    } seek;
    struct
    {
      void         *buffer_pointer;
    } readdiskid;
    LEODiskTime	    time;
  } data;

} LEOCmd;

#define	_nbytes		readwrite.rw_bytes
#define	_result		header.status



#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */

/**************************************************************************
 *
 * Global definitions
 *
 */
#define	LEO_SW_VERSION		1	/* This will be returned by */
					/* LeoInquiry command       */

#define	OS_PRIORITY_LEOMGR	OS_PRIORITY_PIMGR

/*
 * Drive Rom offset address
 */
#define	DDROM_FONT_START	0x000a0000
#define	DDROM_WAVEDATA_START	0x00140000

/*
 * Definition for osLeoSpdlMotor()
 */
#define ACTIVE			0
#define	STANDBY			1
#define	SLEEP			2

#define LEO_MOTOR_ACTIVE        0
#define LEO_MOTOR_STANDBY       1
#define LEO_MOTOR_SLEEP         2

#define	NUM_LBAS		4292 	/* total number of LBAs */

#define BLK_SIZE_ZONE0		19720
#define BLK_SIZE_ZONE1		18360
#define BLK_SIZE_ZONE2		17680
#define BLK_SIZE_ZONE3		16320
#define BLK_SIZE_ZONE4		14960
#define BLK_SIZE_ZONE5		13600
#define BLK_SIZE_ZONE6		12240
#define BLK_SIZE_ZONE7		10880
#define BLK_SIZE_ZONE8		9520

#define	MAX_BLK_SIZE		BLK_SIZE_ZONE0
#define	MIN_BLK_SIZE		BLK_SIZE_ZONE8

/*
 * Error codes
 */
#define LEO_ERROR_GOOD                             0
#define LEO_ERROR_DRIVE_NOT_READY                  1
#define LEO_ERROR_DIAGNOSTIC_FAILURE               2
#define LEO_ERROR_COMMAND_PHASE_ERROR              3
#define LEO_ERROR_DATA_PHASE_ERROR                 4
#define LEO_ERROR_REAL_TIME_CLOCK_FAILURE          5
#define LEO_ERROR_BUSY				   8
#define LEO_ERROR_INCOMPATIBLE_MEDIUM_INSTALLED    11
#define LEO_ERROR_UNKNOWN_FORMAT                   11
#define LEO_ERROR_NO_SEEK_COMPLETE                 21
#define LEO_ERROR_WRITE_FAULT                      22
#define LEO_ERROR_UNRECOVERED_READ_ERROR           23
#define LEO_ERROR_NO_REFERENCE_POSITION_FOUND      24 
#define LEO_ERROR_TRACK_FOLLOWING_ERROR            25
#define LEO_ERROR_TRACKING_OR_SPDL_SERVO_FAILURE   25
#define LEO_ERROR_INVALID_COMMAND_OPERATION_CODE   31
#define LEO_ERROR_LBA_OUT_OF_RANGE                 32
#define LEO_ERROR_WRITE_PROTECT_ERROR              33
#define LEO_ERROR_COMMAND_CLEARED_BY_HOST          34
#define LEO_ERROR_COMMAND_TERMINATED               34
#define LEO_ERROR_QUEUE_FULL                       35
#define LEO_ERROR_DEVICE_COMMUNICATION_FAILURE     41
#define LEO_ERROR_MEDIUM_NOT_PRESENT               42
#define LEO_ERROR_POWERONRESET_DEVICERESET_OCCURED 43
#define LEO_ERROR_RAMPACK_NOT_CONNECTED		   44
#define LEO_ERROR_NOT_BOOTED_DISK		   45
#define LEO_ERROR_DIDNOT_CHANGED_DISK_AS_EXPECTED  46
#define LEO_ERROR_MEDIUM_MAY_HAVE_CHANGED          47
#define LEO_ERROR_RTC_NOT_SET_CORRECTLY		   48
#define LEO_ERROR_DISK_EJECTED_WHEN_ACCESSED	   49

#if defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS)

/**************************************************************************
 *
 * Macro definitions
 *
 */
#define GET_ERROR(x) ((x).header.sense)

/**************************************************************************
 *
 * Extern variables
 *
 */
extern	LEODiskID	leoBootID;

/**************************************************************************
 *
 * Function prototypes
 *
 */
/* Initialize routine */
extern	s32 LeoCreateLeoManager(OSPri comPri, OSPri intPri,
				OSMesg *cmdBuf, s32 cmdMsgCnt);

/* Synchronous functions */
extern	s32 LeoClearQueue(void);
extern	s32 LeoByteToLBA(s32 startLBA, u32 nbytes, s32 *lbas);
extern	s32 LeoLBAToByte(s32 startLBA, u32 nLBAs, s32 *bytes);
extern	s32 LeoReadCapacity(LEOCapacity *cap, s32 dir);
extern	s32 LeoInquiry(LEOVersion *ver);
extern	s32 LeoTestUnitReady(LEOStatus *status);
extern  s32 LeoModeSelect(u32 standby, u32 sleep);

/* Asynchronous functions */
extern	s32 LeoSpdlMotor(LEOCmd *cmdBlock, LEOSpdlMode mode, OSMesgQueue *mq);
extern	s32 LeoSeek(LEOCmd *cmdBlock, u32 lba, OSMesgQueue *mq);
extern	s32 LeoRezero(LEOCmd *cmdBlock, OSMesgQueue *mq);
extern	s32 LeoReadWrite(LEOCmd *cmdBlock, s32 direction,
			 u32 LBA, void *vAddr, u32 nLBAs, OSMesgQueue *mq);
extern	s32 LeoReadDiskID(LEOCmd *cmdBlock, LEODiskID *vaddr, OSMesgQueue *mq);
extern  s32 LeoSetRTC(LEOCmd *cmdBlock, LEODiskTime *RTCdata, OSMesgQueue *mq);
extern	s32 LeoReadRTC(LEOCmd *cmdBlock, OSMesgQueue *mq);

/* Font routines */
extern	int LeoGetKAdr(int sjis);
extern	int LeoGetAAdr(int code,int *dx,int *dy, int *cy);

#endif  /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */

#ifdef _LANGUAGE_C_PLUS_PLUS
}
#endif

#endif /* !_LEO_H */
