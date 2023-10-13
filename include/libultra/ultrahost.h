/**************************************************************************
 *                                                                        *
 *               Copyright (C) 1995, Silicon Graphics, Inc.               *
 *                                                                        *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright  law.  They  may not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *                                                                        *
 *************************************************************************/

/**************************************************************************
 *
 *  $Revision: 1.7 $
 *  $Date: 1997/02/11 08:38:37 $
 *  $Source: /disk6/Master/cvsmdev2/PR/include/ultrahost.h,v $
 *
 **************************************************************************/

#ifndef _ULTRAHOST_H_
#define _ULTRAHOST_H_

#ifdef WIN32 /* { */

int __stdcall uhOpenGame(char *);
int __stdcall uhCloseGame(int);
int __stdcall uhReadGame(int hfd,void *buf,int count);
int __stdcall uhWriteGame(int hfd,void *buf,int count);
int __stdcall uhReadRamrom(int hfd,void *ramrom_adr,void *buf,int count);
int __stdcall uhWriteRamrom(int hfd,void *ramrom_adr,void *buf,int count);
int __stdcall uhPartnerInit(int hfd);
int __stdcall uhPartnerCmd(int hfd,char *ptcmd);
int __stdcall uhGload(int hfd,char *loadfile);

#else /* }{ */
#ifdef PTN64 /* { */

#define	execl		execl_pt

#define uhOpenGame	uhOpenGame_pt
#define uhCloseGame	uhCloseGame_pt
#define uhReadGame	uhReadGame_pt
#define uhWriteGame	uhWriteGame_pt
#define uhReadRamrom	uhReadRamrom_pt
#define uhWriteRamrom	uhWriteRamrom_pt

#endif /* } */

#ifdef __cplusplus
extern "C" {
#endif
int	uhOpenGame(const char *);
int	uhCloseGame(int);

int	uhReadGame(int, void *, int);
int	uhWriteGame(int, void *, int);
int	uhWriteRamrom(int, void *, void*, int);
int	uhReadRamrom(int, void *, void*, int);

#ifdef __cplusplus
}
#endif
#endif /* } */

#endif /* ULTRAHOST */
