/*---------------------------------------------------------------------
  File   : libnos.h	version 1.3

  Coded     by Yoshitaka Yasumoto. Apr 13, 1996.
  
  Copyright by Nintendo, Co., Ltd. 1996.
  ---------------------------------------------------------------------*/
#ifndef	__libnos_h__
#define	__libnos_h__

#define	FONTSIZE_E	2112
#define	FONTSIZE_J	4768

extern	void	nosLoadFont(u16 *);
extern	int	nosPakMenu(OSMesgQueue *, OSMesgQueue *);

#endif

