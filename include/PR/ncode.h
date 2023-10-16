/*---------------------------------------------------------------------
  File : ncode.h

  Coded     by Yoshitaka Yasumoto.  Feb 14, 1996.
  Copyright by Nintendo, Co., Ltd.          1996.
  ---------------------------------------------------------------------*/
#ifndef	__ncode_h__
#define	__ncode_h__

//------------------------------------------------------
//	Nintendo code for letter(upper case) & digit
//------------------------------------------------------
#define	__NUL		0x00
#define	__SPC		0x0f
#define	__0		0x10
#define	__1		0x11
#define	__2		0x12
#define	__3		0x13
#define	__4		0x14
#define	__5		0x15
#define	__6		0x16
#define	__7		0x17
#define	__8		0x18
#define	__9		0x19
#define	__A		0x1a
#define	__B		0x1b
#define	__C		0x1c
#define	__D		0x1d
#define	__E		0x1e
#define	__F		0x1f
#define	__G		0x20
#define	__H		0x21
#define	__I		0x22
#define	__J		0x23
#define	__K		0x24
#define	__L		0x25
#define	__M		0x26
#define	__N		0x27
#define	__O		0x28
#define	__P		0x29
#define	__Q		0x2a
#define	__R		0x2b
#define	__S		0x2c
#define	__T		0x2d
#define	__U		0x2e
#define	__V		0x2f
#define	__W		0x30
#define	__X		0x31
#define	__Y		0x32
#define	__Z		0x33
#define	__EXCLAM	0x34	// !
#define	__2QUOTE	0x35	// "
#define	__NUMBR		0x36	// #
#define	__1QUOTE	0x37	// '
#define	__ASTER		0x38	// *
#define	__PLUS		0x39	// +
#define	__COMMA		0x3a	// ,
#define	__MINUS		0x3b	// -
#define	__PERIOD	0x3c	// .
#define	__SLASH		0x3d	// /
#define	__COLON		0x3e	// :
#define	__EQUAL		0x3f	// =
#define	__QUEST		0x40	// ?
#define	__AT		0x41	// @

//-----------------------------------------------
//	Nintendo code for JAPANESE letter
//-----------------------------------------------
#ifdef	LANG_JAPANESE
# define j_MARU		0x42
# define j_DAKU		0x43
# define j_HANDAKU	0x44
# define j_XA		0x45
# define j_XI    	0x46
# define j_XU		0x47
# define j_XE		0x48
# define j_XO		0x49
# define j_XTSU		0x4a
# define j_XYA		0x4b
# define j_XYU		0x4c
# define j_XYO		0x4d
# define j_WO		0x4e
# define j_N		0x4f
# define j_A		0x50
# define j_I		0x51
# define j_U		0x52
# define j_E		0x53
# define j_O		0x54
# define j_KA		0x55
# define j_KI	    	0x56
# define j_KU		0x57
# define j_KE		0x58
# define j_KO		0x59
# define j_SA		0x5a
# define j_SHI		0x5b
# define j_SU	   	0x5c
# define j_SE		0x5d
# define j_SO		0x5e
# define j_TA		0x5f
# define j_CHI		0x60
# define j_TSU		0x61
# define j_TE		0x62
# define j_TO		0x63
# define j_NA		0x64
# define j_NI		0x65
# define j_NU		0x66
# define j_NE		0x67
# define j_NO		0x68
# define j_HA		0x69
# define j_HI		0x6a
# define j_FU		0x6b
# define j_HE		0x6c
# define j_HO		0x6d
# define j_MA		0x6e
# define j_MI		0x6f
# define j_MU		0x70
# define j_ME		0x71
# define j_MO		0x72
# define j_YA		0x73
# define j_YU		0x74
# define j_YO		0x75
# define j_RA		0x76
# define j_RI		0x77
# define j_RU		0x78
# define j_RE		0x79
# define j_RO		0x7a
# define j_WA		0x7b
# define j_GA		0x7c
# define j_GI		0x7d
# define j_GU		0x7e
# define j_GE		0x7f
# define j_GO		0x80
# define j_ZA		0x81
# define j_JI		0x82
# define j_ZU		0x83
# define j_ZE		0x84
# define j_ZO		0x85
# define j_DA		0x86
# define j_DI		0x87
# define j_DU		0x88
# define j_DE		0x89
# define j_DO		0x8a
# define j_BA		0x8b
# define j_BI		0x8c
# define j_BU		0x8d
# define j_BE		0x8e
# define j_BO		0x8f
# define j_PA		0x90
# define j_PI		0x91
# define j_PU		0x92
# define j_PE		0x93
# define j_PO		0x94
#endif

#endif
