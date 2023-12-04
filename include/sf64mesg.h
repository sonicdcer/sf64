#ifndef SF64_MESG
#define SF64_MESG

#include "libultra/ultra64.h"
#include "libc/stdbool.h"

typedef struct {
    s32 msgId;
    u16* msgPtr;
} MsgLookup;

extern u8 gTextCharTextures[24][16 * 13 / 2];
extern MsgLookup gMsgLookup[];

u16* Message_PtrFromId(u16 msgId);
u16 Message_IdFromPtr(u16*);
s32 Message_GetWidth(u16* msgPtr);
s32 Message_GetCharCount(u16* msgPtr);
void Message_DisplayChar(Gfx** gfxPtr, u16 msgChar, s32 xpos, s32 ypos);
bool Message_DisplayText(Gfx** gfxPtr, u16* msgPtr, s32 xPos, s32 yPos, s32 len);
void Message_DisplayScrollingText(Gfx** gfxPtr, u16* msgPtr, s32 xPos, s32 yPos, s32 yRangeHi, s32 yRangeLo, s32 len);
bool Message_IsPrintingChar(u16* msgPtr, s32 charPos);
 
typedef enum {
    MSGCHAR_END,
    MSGCHAR_NWL,
    MSGCHAR_NP2,
    MSGCHAR_NP3,
    MSGCHAR_NP4,
    MSGCHAR_NP5,
    MSGCHAR_NP6,
    MSGCHAR_NP7,
    MSGCHAR_NP8,
    MSGCHAR_NP9,
    MSGCHAR_NPA,
    MSGCHAR_NPB,
    MSGCHAR_SPC,
    MSGCHAR_QSP,
    MSGCHAR_HSP,
    MSGCHAR_NPF,
    MSGCHAR_CLF,
    MSGCHAR_CUP,
    MSGCHAR_CRT,
    MSGCHAR_CDN,
    MSGCHAR_AUP,
    MSGCHAR_ALF,
    MSGCHAR_ADN,
    MSGCHAR_ART,
    MSGCHAR_A,
    MSGCHAR_B,
    MSGCHAR_C,
    MSGCHAR_D,
    MSGCHAR_E,
    MSGCHAR_F,
    MSGCHAR_G,
    MSGCHAR_H,
    MSGCHAR_I,
    MSGCHAR_J,
    MSGCHAR_K,
    MSGCHAR_L,
    MSGCHAR_M,
    MSGCHAR_N,
    MSGCHAR_O,
    MSGCHAR_P,
    MSGCHAR_Q,
    MSGCHAR_R,
    MSGCHAR_S,
    MSGCHAR_T,
    MSGCHAR_U,
    MSGCHAR_V,
    MSGCHAR_W,
    MSGCHAR_X,
    MSGCHAR_Y,
    MSGCHAR_Z,
    MSGCHAR_a,
    MSGCHAR_b,
    MSGCHAR_c,
    MSGCHAR_d,
    MSGCHAR_e,
    MSGCHAR_f,
    MSGCHAR_g,
    MSGCHAR_h,
    MSGCHAR_i,
    MSGCHAR_j,
    MSGCHAR_k,
    MSGCHAR_l,
    MSGCHAR_m,
    MSGCHAR_n,
    MSGCHAR_o,
    MSGCHAR_p,
    MSGCHAR_q,
    MSGCHAR_r,
    MSGCHAR_s,
    MSGCHAR_t,
    MSGCHAR_u,
    MSGCHAR_v,
    MSGCHAR_w,
    MSGCHAR_x,
    MSGCHAR_y,
    MSGCHAR_z,
    MSGCHAR_EXM,
    MSGCHAR_QST,
    MSGCHAR_DSH,
    MSGCHAR_CMA,
    MSGCHAR_PRD,
    MSGCHAR_0,
    MSGCHAR_1,
    MSGCHAR_2,
    MSGCHAR_3,
    MSGCHAR_4,
    MSGCHAR_5,
    MSGCHAR_6,
    MSGCHAR_7,
    MSGCHAR_8,
    MSGCHAR_9,
    MSGCHAR_APS,
    MSGCHAR_LPR,
    MSGCHAR_RPR,
    MSGCHAR_CLN,
    MSGCHAR_PIP,
} MsgCharCode;

extern u16 gMsg_ID_1[914];
extern u16 gMsg_ID_60[46];
extern u16 gMsg_ID_10[32];
extern u16 gMsg_ID_20[30];
extern u16 gMsg_ID_30[34];
extern u16 gMsg_ID_40[40];
extern u16 gMsg_ID_50[52];
extern u16 gMsg_ID_1200[];
extern u16 gMsg_ID_1210[];
extern u16 gMsg_ID_1220[];
extern u16 gMsg_ID_1230[];
extern u16 gMsg_ID_1240[];
extern u16 gMsg_ID_1250[];
extern u16 gMsg_ID_1260[];
extern u16 gMsg_ID_1270[];
extern u16 gMsg_ID_1280[];
extern u16 gMsg_ID_1290[];
extern u16 gMsg_ID_1300[];
extern u16 gMsg_ID_1310[];
extern u16 gMsg_ID_1320[];
extern u16 gMsg_ID_1330[];
extern u16 gMsg_ID_1340[];
extern u16 gMsg_ID_1350[];
extern u16 gMsg_ID_1360[];
extern u16 gMsg_ID_1370[];
extern u16 gMsg_ID_1380[];
extern u16 gMsg_ID_1390[];
extern u16 gMsg_ID_1400[];
extern u16 gMsg_ID_1410[];
extern u16 gMsg_ID_1420[];
extern u16 gMsg_ID_1430[];
extern u16 gMsg_ID_1440[];
extern u16 gMsg_ID_1450[];
extern u16 gMsg_ID_1460[];
extern u16 gMsg_ID_1470[];
extern u16 gMsg_ID_2005[];
extern u16 gMsg_ID_2010[];
extern u16 gMsg_ID_2020[];
extern u16 gMsg_ID_2030[];
extern u16 gMsg_ID_2040[];
extern u16 gMsg_ID_2050[];
extern u16 gMsg_ID_2055[];
extern u16 gMsg_ID_2058[];
extern u16 gMsg_ID_2061[];
extern u16 gMsg_ID_2062[];
extern u16 gMsg_ID_2080[];
extern u16 gMsg_ID_2090[];
extern u16 gMsg_ID_2095[];
extern u16 gMsg_ID_2110[];
extern u16 gMsg_ID_2115[];
extern u16 gMsg_ID_2118[];
extern u16 gMsg_ID_2140[];
extern u16 gMsg_ID_2165[];
extern u16 gMsg_ID_2166[];
extern u16 gMsg_ID_2167[];
extern u16 gMsg_ID_2180[];
extern u16 gMsg_ID_2181[];
extern u16 gMsg_ID_2185[];
extern u16 gMsg_ID_2188[];
extern u16 gMsg_ID_2200[];
extern u16 gMsg_ID_2210[];
extern u16 gMsg_ID_2220[];
extern u16 gMsg_ID_2225[];
extern u16 gMsg_ID_2230[];
extern u16 gMsg_ID_2233[];
extern u16 gMsg_ID_2282[];
extern u16 gMsg_ID_2240[];
extern u16 gMsg_ID_2250[];
extern u16 gMsg_ID_2260[];
extern u16 gMsg_ID_2263[];
extern u16 gMsg_ID_2265[];
extern u16 gMsg_ID_2270[];
extern u16 gMsg_ID_2275[];
extern u16 gMsg_ID_2280[];
extern u16 gMsg_ID_2290[];
extern u16 gMsg_ID_2291[];
extern u16 gMsg_ID_2292[];
extern u16 gMsg_ID_2293[];
extern u16 gMsg_ID_2294[];
extern u16 gMsg_ID_2295[];
extern u16 gMsg_ID_2296[];
extern u16 gMsg_ID_2298[];
extern u16 gMsg_ID_2299[];
extern u16 gMsg_ID_2300[];
extern u16 gMsg_ID_2305[];
extern u16 gMsg_ID_2310[];
extern u16 gMsg_ID_2320[];
extern u16 gMsg_ID_2335[];
extern u16 gMsg_ID_2336[];
extern u16 gMsg_ID_2337[];
extern u16 gMsg_ID_3005[];
extern u16 gMsg_ID_3010[];
extern u16 gMsg_ID_3015[];
extern u16 gMsg_ID_3020[];
extern u16 gMsg_ID_3025[];
extern u16 gMsg_ID_3026[];
extern u16 gMsg_ID_3040[];
extern u16 gMsg_ID_3041[];
extern u16 gMsg_ID_3042[];
extern u16 gMsg_ID_3050[];
extern u16 gMsg_ID_3100[];
extern u16 gMsg_ID_3110[];
extern u16 gMsg_ID_3120[];
extern u16 gMsg_ID_3300[];
extern u16 gMsg_ID_3310[];
extern u16 gMsg_ID_3315[];
extern u16 gMsg_ID_3320[];
extern u16 gMsg_ID_3321[];
extern u16 gMsg_ID_3322[];
extern u16 gMsg_ID_3330[];
extern u16 gMsg_ID_3340[];
extern u16 gMsg_ID_3345[];
extern u16 gMsg_ID_3350[];
extern u16 gMsg_ID_3360[];
extern u16 gMsg_ID_3370[];
extern u16 gMsg_ID_3371[];
extern u16 gMsg_ID_4010[];
extern u16 gMsg_ID_4011[];
extern u16 gMsg_ID_4012[];
extern u16 gMsg_ID_4013[];
extern u16 gMsg_ID_4020[];
extern u16 gMsg_ID_4021[];
extern u16 gMsg_ID_4022[];
extern u16 gMsg_ID_4023[];
extern u16 gMsg_ID_4024[];
extern u16 gMsg_ID_4030[];
extern u16 gMsg_ID_4031[];
extern u16 gMsg_ID_4040[];
extern u16 gMsg_ID_4050[];
extern u16 gMsg_ID_4075[];
extern u16 gMsg_ID_4080[];
extern u16 gMsg_ID_4082[];
extern u16 gMsg_ID_4083[];
extern u16 gMsg_ID_4091[];
extern u16 gMsg_ID_4092[];
extern u16 gMsg_ID_4093[];
extern u16 gMsg_ID_4094[];
extern u16 gMsg_ID_4095[];
extern u16 gMsg_ID_4096[];
extern u16 gMsg_ID_4097[];
extern u16 gMsg_ID_4098[];
extern u16 gMsg_ID_4099[];
extern u16 gMsg_ID_4100[];
extern u16 gMsg_ID_4101[];
extern u16 gMsg_ID_4102[];
extern u16 gMsg_ID_4103[];
extern u16 gMsg_ID_4110[];
extern u16 gMsg_ID_4111[];
extern u16 gMsg_ID_4112[];
extern u16 gMsg_ID_4113[];
extern u16 gMsg_ID_5000[];
extern u16 gMsg_ID_5010[];
extern u16 gMsg_ID_5060[];
extern u16 gMsg_ID_5080[];
extern u16 gMsg_ID_5100[];
extern u16 gMsg_ID_5110[];
extern u16 gMsg_ID_5130[];
extern u16 gMsg_ID_5220[];
extern u16 gMsg_ID_5230[];
extern u16 gMsg_ID_5300[];
extern u16 gMsg_ID_5310[];
extern u16 gMsg_ID_5311[];
extern u16 gMsg_ID_5312[];
extern u16 gMsg_ID_5313[];
extern u16 gMsg_ID_5314[];
extern u16 gMsg_ID_5350[];
extern u16 gMsg_ID_5360[];
extern u16 gMsg_ID_5380[];
extern u16 gMsg_ID_5400[];
extern u16 gMsg_ID_5410[];
extern u16 gMsg_ID_5420[];
extern u16 gMsg_ID_5430[];
extern u16 gMsg_ID_5460[];
extern u16 gMsg_ID_5470[];
extern u16 gMsg_ID_5473[];
extern u16 gMsg_ID_5474[];
extern u16 gMsg_ID_5475[];
extern u16 gMsg_ID_5492[];
extern u16 gMsg_ID_5493[];
extern u16 gMsg_ID_5494[];
extern u16 gMsg_ID_5495[];
extern u16 gMsg_ID_5496[];
extern u16 gMsg_ID_5497[];
extern u16 gMsg_ID_5498[];
extern u16 gMsg_ID_5499[];
extern u16 gMsg_ID_5500[];
extern u16 gMsg_ID_5501[];
extern u16 gMsg_ID_5502[];
extern u16 gMsg_ID_5503[];
extern u16 gMsg_ID_5504[];
extern u16 gMsg_ID_5505[];
extern u16 gMsg_ID_5506[];
extern u16 gMsg_ID_6010[];
extern u16 gMsg_ID_6011[];
extern u16 gMsg_ID_6012[];
extern u16 gMsg_ID_6013[];
extern u16 gMsg_ID_6014[];
extern u16 gMsg_ID_6020[];
extern u16 gMsg_ID_6021[];
extern u16 gMsg_ID_6024[];
extern u16 gMsg_ID_6025[];
extern u16 gMsg_ID_6026[];
extern u16 gMsg_ID_6027[];
extern u16 gMsg_ID_6028[];
extern u16 gMsg_ID_6029[];
extern u16 gMsg_ID_6036[];
extern u16 gMsg_ID_6038[];
extern u16 gMsg_ID_6041[];
extern u16 gMsg_ID_6042[];
extern u16 gMsg_ID_6045[];
extern u16 gMsg_ID_6050[];
extern u16 gMsg_ID_6051[];
extern u16 gMsg_ID_6055[];
extern u16 gMsg_ID_6066[];
extern u16 gMsg_ID_6067[];
extern u16 gMsg_ID_6068[];
extern u16 gMsg_ID_6069[];
extern u16 gMsg_ID_6071[];
extern u16 gMsg_ID_6072[];
extern u16 gMsg_ID_6073[];
extern u16 gMsg_ID_6074[];
extern u16 gMsg_ID_6075[];
extern u16 gMsg_ID_6076[];
extern u16 gMsg_ID_6077[];
extern u16 gMsg_ID_6078[];
extern u16 gMsg_ID_6079[];
extern u16 gMsg_ID_6080[];
extern u16 gMsg_ID_6081[];
extern u16 gMsg_ID_6082[];
extern u16 gMsg_ID_6090[];
extern u16 gMsg_ID_6100[];
extern u16 gMsg_ID_6101[];
extern u16 gMsg_ID_7005[];
extern u16 gMsg_ID_7006[];
extern u16 gMsg_ID_7011[];
extern u16 gMsg_ID_7012[];
extern u16 gMsg_ID_7013[];
extern u16 gMsg_ID_7014[];
extern u16 gMsg_ID_7020[];
extern u16 gMsg_ID_7043[];
extern u16 gMsg_ID_7050[];
extern u16 gMsg_ID_7051[];
extern u16 gMsg_ID_7052[];
extern u16 gMsg_ID_7053[];
extern u16 gMsg_ID_7054[];
extern u16 gMsg_ID_7061[];
extern u16 gMsg_ID_7064[];
extern u16 gMsg_ID_7065[];
extern u16 gMsg_ID_7066[];
extern u16 gMsg_ID_7070[];
extern u16 gMsg_ID_7083[];
extern u16 gMsg_ID_7084[];
extern u16 gMsg_ID_7085[];
extern u16 gMsg_ID_7086[];
extern u16 gMsg_ID_7087[];
extern u16 gMsg_ID_7093[];
extern u16 gMsg_ID_7094[];
extern u16 gMsg_ID_7095[];
extern u16 gMsg_ID_7096[];
extern u16 gMsg_ID_7097[];
extern u16 gMsg_ID_7098[];
extern u16 gMsg_ID_7099[];
extern u16 gMsg_ID_7100[];
extern u16 gMsg_ID_8010[];
extern u16 gMsg_ID_8020[];
extern u16 gMsg_ID_8030[];
extern u16 gMsg_ID_8040[];
extern u16 gMsg_ID_8045[];
extern u16 gMsg_ID_8050[];
extern u16 gMsg_ID_8060[];
extern u16 gMsg_ID_8070[];
extern u16 gMsg_ID_8080[];
extern u16 gMsg_ID_8100[];
extern u16 gMsg_ID_8110[];
extern u16 gMsg_ID_8120[];
extern u16 gMsg_ID_8130[];
extern u16 gMsg_ID_8140[];
extern u16 gMsg_ID_8205[];
extern u16 gMsg_ID_8210[];
extern u16 gMsg_ID_8215[];
extern u16 gMsg_ID_8220[];
extern u16 gMsg_ID_8230[];
extern u16 gMsg_ID_8240[];
extern u16 gMsg_ID_8250[];
extern u16 gMsg_ID_8255[];
extern u16 gMsg_ID_8260[];
extern u16 gMsg_ID_8265[];
extern u16 gMsg_ID_8300[];
extern u16 gMsg_ID_8310[];
extern u16 gMsg_ID_8320[];
extern u16 gMsg_ID_9000[];
extern u16 gMsg_ID_9010[];
extern u16 gMsg_ID_9100[];
extern u16 gMsg_ID_9110[];
extern u16 gMsg_ID_9120[];
extern u16 gMsg_ID_9130[];
extern u16 gMsg_ID_9140[];
extern u16 gMsg_ID_9150[];
extern u16 gMsg_ID_9151[];
extern u16 gMsg_ID_9152[];
extern u16 gMsg_ID_9153[];
extern u16 gMsg_ID_9160[];
extern u16 gMsg_ID_9170[];
extern u16 gMsg_ID_9180[];
extern u16 gMsg_ID_9190[];
extern u16 gMsg_ID_9200[];
extern u16 gMsg_ID_9210[];
extern u16 gMsg_ID_9211[];
extern u16 gMsg_ID_9212[];
extern u16 gMsg_ID_9213[];
extern u16 gMsg_ID_9220[];
extern u16 gMsg_ID_9230[];
extern u16 gMsg_ID_9240[];
extern u16 gMsg_ID_9250[];
extern u16 gMsg_ID_9260[];
extern u16 gMsg_ID_9270[];
extern u16 gMsg_ID_9275[];
extern u16 gMsg_ID_9280[];
extern u16 gMsg_ID_9285[];
extern u16 gMsg_ID_9289[];
extern u16 gMsg_ID_9290[];
extern u16 gMsg_ID_9300[];
extern u16 gMsg_ID_9310[];
extern u16 gMsg_ID_9320[];
extern u16 gMsg_ID_9322[];
extern u16 gMsg_ID_9323[];
extern u16 gMsg_ID_9324[];
extern u16 gMsg_ID_9325[];
extern u16 gMsg_ID_9330[];
extern u16 gMsg_ID_9340[];
extern u16 gMsg_ID_9350[];
extern u16 gMsg_ID_9360[];
extern u16 gMsg_ID_9365[];
extern u16 gMsg_ID_9366[];
extern u16 gMsg_ID_9367[];
extern u16 gMsg_ID_9368[];
extern u16 gMsg_ID_9369[];
extern u16 gMsg_ID_9375[];
extern u16 gMsg_ID_9380[];
extern u16 gMsg_ID_9385[];
extern u16 gMsg_ID_9390[];
extern u16 gMsg_ID_9395[];
extern u16 gMsg_ID_9400[];
extern u16 gMsg_ID_9405[];
extern u16 gMsg_ID_9411[];
extern u16 gMsg_ID_9420[];
extern u16 gMsg_ID_9425[];
extern u16 gMsg_ID_9426[];
extern u16 gMsg_ID_9427[];
extern u16 gMsg_ID_9428[];
extern u16 gMsg_ID_9429[];
extern u16 gMsg_ID_9430[];
extern u16 gMsg_ID_9431[];
extern u16 gMsg_ID_9432[];
extern u16 gMsg_ID_9433[];
extern u16 gMsg_ID_9434[];
extern u16 gMsg_ID_9436[];
extern u16 gMsg_ID_9437[];
extern u16 gMsg_ID_9438[];
extern u16 gMsg_ID_10010[];
extern u16 gMsg_ID_10020[];
extern u16 gMsg_ID_10040[];
extern u16 gMsg_ID_10050[];
extern u16 gMsg_ID_10060[];
extern u16 gMsg_ID_10070[];
extern u16 gMsg_ID_10080[];
extern u16 gMsg_ID_10200[];
extern u16 gMsg_ID_10210[];
extern u16 gMsg_ID_10220[];
extern u16 gMsg_ID_10230[];
extern u16 gMsg_ID_10255[];
extern u16 gMsg_ID_10300[];
extern u16 gMsg_ID_10310[];
extern u16 gMsg_ID_10320[];
extern u16 gMsg_ID_10321[];
extern u16 gMsg_ID_10322[];
extern u16 gMsg_ID_10323[];
extern u16 gMsg_ID_10324[];
extern u16 gMsg_ID_11010[];
extern u16 gMsg_ID_11020[];
extern u16 gMsg_ID_11030[];
extern u16 gMsg_ID_11040[];
extern u16 gMsg_ID_11050[];
extern u16 gMsg_ID_11060[];
extern u16 gMsg_ID_11100[];
extern u16 gMsg_ID_11110[];
extern u16 gMsg_ID_11120[];
extern u16 gMsg_ID_11130[];
extern u16 gMsg_ID_11150[];
extern u16 gMsg_ID_11160[];
extern u16 gMsg_ID_11200[];
extern u16 gMsg_ID_11210[];
extern u16 gMsg_ID_11220[];
extern u16 gMsg_ID_11230[];
extern u16 gMsg_ID_11240[];
extern u16 gMsg_ID_11241[];
extern u16 gMsg_ID_14020[];
extern u16 gMsg_ID_14030[];
extern u16 gMsg_ID_14040[];
extern u16 gMsg_ID_14045[];
extern u16 gMsg_ID_14050[];
extern u16 gMsg_ID_14060[];
extern u16 gMsg_ID_14070[];
extern u16 gMsg_ID_14080[];
extern u16 gMsg_ID_14100[];
extern u16 gMsg_ID_14110[];
extern u16 gMsg_ID_14120[];
extern u16 gMsg_ID_14130[];
extern u16 gMsg_ID_14140[];
extern u16 gMsg_ID_14150[];
extern u16 gMsg_ID_14160[];
extern u16 gMsg_ID_14170[];
extern u16 gMsg_ID_14180[];
extern u16 gMsg_ID_14190[];
extern u16 gMsg_ID_14200[];
extern u16 gMsg_ID_14210[];
extern u16 gMsg_ID_14220[];
extern u16 gMsg_ID_14230[];
extern u16 gMsg_ID_14300[];
extern u16 gMsg_ID_14310[];
extern u16 gMsg_ID_14320[];
extern u16 gMsg_ID_14330[];
extern u16 gMsg_ID_14340[];
extern u16 gMsg_ID_14350[];
extern u16 gMsg_ID_14360[];
extern u16 gMsg_ID_14370[];
extern u16 gMsg_ID_15010[];
extern u16 gMsg_ID_15030[];
extern u16 gMsg_ID_15040[];
extern u16 gMsg_ID_15045[];
extern u16 gMsg_ID_15050[];
extern u16 gMsg_ID_15051[];
extern u16 gMsg_ID_15052[];
extern u16 gMsg_ID_15053[];
extern u16 gMsg_ID_15054[];
extern u16 gMsg_ID_15060[];
extern u16 gMsg_ID_15100[];
extern u16 gMsg_ID_15110[];
extern u16 gMsg_ID_15120[];
extern u16 gMsg_ID_15130[];
extern u16 gMsg_ID_15140[];
extern u16 gMsg_ID_15200[];
extern u16 gMsg_ID_15210[];
extern u16 gMsg_ID_15220[];
extern u16 gMsg_ID_15230[];
extern u16 gMsg_ID_15240[];
extern u16 gMsg_ID_15250[];
extern u16 gMsg_ID_15251[];
extern u16 gMsg_ID_15252[];
extern u16 gMsg_ID_15253[];
extern u16 gMsg_ID_15254[];
extern u16 gMsg_ID_16010[];
extern u16 gMsg_ID_16020[];
extern u16 gMsg_ID_16030[];
extern u16 gMsg_ID_16040[];
extern u16 gMsg_ID_16046[];
extern u16 gMsg_ID_16047[];
extern u16 gMsg_ID_16050[];
extern u16 gMsg_ID_16055[];
extern u16 gMsg_ID_16060[];
extern u16 gMsg_ID_16080[];
extern u16 gMsg_ID_16085[];
extern u16 gMsg_ID_16090[];
extern u16 gMsg_ID_16100[];
extern u16 gMsg_ID_16110[];
extern u16 gMsg_ID_16120[];
extern u16 gMsg_ID_16125[];
extern u16 gMsg_ID_16130[];
extern u16 gMsg_ID_16135[];
extern u16 gMsg_ID_16140[];
extern u16 gMsg_ID_16150[];
extern u16 gMsg_ID_16160[];
extern u16 gMsg_ID_16165[];
extern u16 gMsg_ID_16170[];
extern u16 gMsg_ID_16175[];
extern u16 gMsg_ID_16180[];
extern u16 gMsg_ID_16185[];
extern u16 gMsg_ID_16200[];
extern u16 gMsg_ID_16210[];
extern u16 gMsg_ID_16220[];
extern u16 gMsg_ID_16230[];
extern u16 gMsg_ID_16240[];
extern u16 gMsg_ID_16250[];
extern u16 gMsg_ID_16260[];
extern u16 gMsg_ID_16270[];
extern u16 gMsg_ID_16280[];
extern u16 gMsg_ID_17010[];
extern u16 gMsg_ID_17020[];
extern u16 gMsg_ID_17030[];
extern u16 gMsg_ID_17100[];
extern u16 gMsg_ID_17110[];
extern u16 gMsg_ID_17120[];
extern u16 gMsg_ID_17130[];
extern u16 gMsg_ID_17131[];
extern u16 gMsg_ID_17140[];
extern u16 gMsg_ID_17150[];
extern u16 gMsg_ID_17160[];
extern u16 gMsg_ID_17170[];
extern u16 gMsg_ID_17300[];
extern u16 gMsg_ID_17310[];
extern u16 gMsg_ID_17320[];
extern u16 gMsg_ID_17330[];
extern u16 gMsg_ID_17350[];
extern u16 gMsg_ID_17360[];
extern u16 gMsg_ID_17370[];
extern u16 gMsg_ID_17380[];
extern u16 gMsg_ID_17390[];
extern u16 gMsg_ID_17400[];
extern u16 gMsg_ID_17410[];
extern u16 gMsg_ID_17420[];
extern u16 gMsg_ID_17430[];
extern u16 gMsg_ID_17440[];
extern u16 gMsg_ID_17450[];
extern u16 gMsg_ID_17460[];
extern u16 gMsg_ID_17470[];
extern u16 gMsg_ID_17471[];
extern u16 gMsg_ID_17472[];
extern u16 gMsg_ID_17473[];
extern u16 gMsg_ID_17474[];
extern u16 gMsg_ID_17475[];
extern u16 gMsg_ID_17476[];
extern u16 gMsg_ID_18000[];
extern u16 gMsg_ID_18005[];
extern u16 gMsg_ID_18006[];
extern u16 gMsg_ID_18007[];
extern u16 gMsg_ID_18010[];
extern u16 gMsg_ID_18015[];
extern u16 gMsg_ID_18018[];
extern u16 gMsg_ID_18020[];
extern u16 gMsg_ID_18021[];
extern u16 gMsg_ID_18022[];
extern u16 gMsg_ID_18025[];
extern u16 gMsg_ID_18030[];
extern u16 gMsg_ID_18031[];
extern u16 gMsg_ID_18035[];
extern u16 gMsg_ID_18040[];
extern u16 gMsg_ID_18045[];
extern u16 gMsg_ID_18050[];
extern u16 gMsg_ID_18055[];
extern u16 gMsg_ID_18060[];
extern u16 gMsg_ID_18065[];
extern u16 gMsg_ID_18066[];
extern u16 gMsg_ID_18070[];
extern u16 gMsg_ID_18075[];
extern u16 gMsg_ID_18080[];
extern u16 gMsg_ID_18085[];
extern u16 gMsg_ID_18090[];
extern u16 gMsg_ID_18095[];
extern u16 gMsg_ID_18100[];
extern u16 gMsg_ID_18105[];
extern u16 gMsg_ID_18120[];
extern u16 gMsg_ID_18130[];
extern u16 gMsg_ID_18140[];
extern u16 gMsg_ID_18150[];
extern u16 gMsg_ID_19010[];
extern u16 gMsg_ID_19205[];
extern u16 gMsg_ID_19200[];
extern u16 gMsg_ID_19210[];
extern u16 gMsg_ID_19220[];
extern u16 gMsg_ID_19230[];
extern u16 gMsg_ID_19240[];
extern u16 gMsg_ID_19250[];
extern u16 gMsg_ID_19325[];
extern u16 gMsg_ID_19330[];
extern u16 gMsg_ID_19335[];
extern u16 gMsg_ID_19340[];
extern u16 gMsg_ID_19350[];
extern u16 gMsg_ID_19355[];
extern u16 gMsg_ID_19360[];
extern u16 gMsg_ID_19370[];
extern u16 gMsg_ID_19400[];
extern u16 gMsg_ID_19410[];
extern u16 gMsg_ID_19420[];
extern u16 gMsg_ID_19430[];
extern u16 gMsg_ID_19440[];
extern u16 gMsg_ID_19450[];
extern u16 gMsg_ID_19451[];
extern u16 gMsg_ID_19452[];
extern u16 gMsg_ID_19453[];
extern u16 gMsg_ID_19454[];
extern u16 gMsg_ID_19455[];
extern u16 gMsg_ID_19456[];
extern u16 gMsg_ID_19457[];
extern u16 gMsg_ID_19458[];
extern u16 gMsg_ID_19459[];
extern u16 gMsg_ID_19460[];
extern u16 gMsg_ID_19461[];
extern u16 gMsg_ID_19462[];
extern u16 gMsg_ID_19463[];
extern u16 gMsg_ID_19464[];
extern u16 gMsg_ID_19465[];
extern u16 gMsg_ID_19466[];
extern u16 gMsg_ID_19467[];
extern u16 gMsg_ID_19468[];
extern u16 gMsg_ID_20010[];
extern u16 gMsg_ID_20011[];
extern u16 gMsg_ID_20012[];
extern u16 gMsg_ID_20013[];
extern u16 gMsg_ID_20014[];
extern u16 gMsg_ID_20015[];
extern u16 gMsg_ID_20016[];
extern u16 gMsg_ID_20017[];
extern u16 gMsg_ID_20018[];
extern u16 gMsg_ID_20019[];
extern u16 gMsg_ID_20020[];
extern u16 gMsg_ID_20030[];
extern u16 gMsg_ID_20040[];
extern u16 gMsg_ID_20050[];
extern u16 gMsg_ID_20060[];
extern u16 gMsg_ID_20070[];
extern u16 gMsg_ID_20080[];
extern u16 gMsg_ID_20084[];
extern u16 gMsg_ID_20085[];
extern u16 gMsg_ID_20090[];
extern u16 gMsg_ID_20091[];
extern u16 gMsg_ID_20092[];
extern u16 gMsg_ID_20150[];
extern u16 gMsg_ID_20160[];
extern u16 gMsg_ID_20170[];
extern u16 gMsg_ID_20180[];
extern u16 gMsg_ID_20190[];
extern u16 gMsg_ID_20200[];
extern u16 gMsg_ID_20210[];
extern u16 gMsg_ID_20220[];
extern u16 gMsg_ID_20221[];
extern u16 gMsg_ID_20222[];
extern u16 gMsg_ID_20230[];
extern u16 gMsg_ID_20235[];
extern u16 gMsg_ID_20236[];
extern u16 gMsg_ID_20237[];
extern u16 gMsg_ID_20238[];
extern u16 gMsg_ID_20239[];
extern u16 gMsg_ID_20250[];
extern u16 gMsg_ID_20260[];
extern u16 gMsg_ID_20261[];
extern u16 gMsg_ID_20262[];
extern u16 gMsg_ID_20263[];
extern u16 gMsg_ID_20264[];
extern u16 gMsg_ID_20265[];
extern u16 gMsg_ID_20266[];
extern u16 gMsg_ID_20267[];
extern u16 gMsg_ID_20268[];
extern u16 gMsg_ID_20269[];
extern u16 gMsg_ID_20270[];
extern u16 gMsg_ID_20271[];
extern u16 gMsg_ID_20272[];
extern u16 gMsg_ID_20273[];
extern u16 gMsg_ID_20274[];
extern u16 gMsg_ID_20275[];
extern u16 gMsg_ID_20276[];
extern u16 gMsg_ID_20277[];
extern u16 gMsg_ID_20278[];
extern u16 gMsg_ID_20279[];
extern u16 gMsg_ID_20280[];
extern u16 gMsg_ID_20281[];
extern u16 gMsg_ID_20282[];
extern u16 gMsg_ID_20283[];
extern u16 gMsg_ID_20284[];
extern u16 gMsg_ID_20285[];
extern u16 gMsg_ID_20286[];
extern u16 gMsg_ID_20287[];
extern u16 gMsg_ID_20288[];
extern u16 gMsg_ID_20289[];
extern u16 gMsg_ID_20290[];
extern u16 gMsg_ID_20291[];
extern u16 gMsg_ID_20292[];
extern u16 gMsg_ID_20294[];
extern u16 gMsg_ID_20296[];
extern u16 gMsg_ID_20297[];
extern u16 gMsg_ID_20298[];
extern u16 gMsg_ID_20299[];
extern u16 gMsg_ID_20300[];
extern u16 gMsg_ID_20301[];
extern u16 gMsg_ID_20302[];
extern u16 gMsg_ID_20303[];
extern u16 gMsg_ID_20304[];
extern u16 gMsg_ID_20305[];
extern u16 gMsg_ID_20306[];
extern u16 gMsg_ID_20307[];
extern u16 gMsg_ID_20308[];
extern u16 gMsg_ID_20309[];
extern u16 gMsg_ID_20310[];
extern u16 gMsg_ID_20311[];
extern u16 gMsg_ID_20312[];
extern u16 gMsg_ID_20313[];
extern u16 gMsg_ID_20314[];
extern u16 gMsg_ID_20315[];
extern u16 gMsg_ID_20316[];
extern u16 gMsg_ID_20317[];
extern u16 gMsg_ID_20318[];
extern u16 gMsg_ID_20319[];
extern u16 gMsg_ID_20320[];
extern u16 gMsg_ID_20321[];
extern u16 gMsg_ID_20326[];
extern u16 gMsg_ID_20327[];
extern u16 gMsg_ID_20328[];
extern u16 gMsg_ID_20329[];
extern u16 gMsg_ID_20330[];
extern u16 gMsg_ID_20331[];
extern u16 gMsg_ID_20332[];
extern u16 gMsg_ID_20333[];
extern u16 gMsg_ID_20337[];
extern u16 gMsg_ID_20338[];
extern u16 gMsg_ID_20339[];
extern u16 gMsg_ID_20340[];
extern u16 gMsg_ID_20343[];
extern u16 gMsg_ID_20344[];
extern u16 gMsg_ID_20345[];
extern u16 gMsg_ID_21010[];
extern u16 gMsg_ID_21020[];
extern u16 gMsg_ID_21030[];
extern u16 gMsg_ID_21050[];
extern u16 gMsg_ID_21060[];
extern u16 gMsg_ID_21070[];
extern u16 gMsg_ID_21071[];
extern u16 gMsg_ID_21072[];
extern u16 gMsg_ID_21073[];
extern u16 gMsg_ID_21080[];
extern u16 gMsg_ID_21081[];
extern u16 gMsg_ID_21082[];
extern u16 gMsg_ID_21083[];
extern u16 gMsg_ID_21090[];
extern u16 gMsg_ID_21091[];
extern u16 gMsg_ID_21092[];
extern u16 gMsg_ID_21093[];
extern u16 gMsg_ID_22000[];
extern u16 gMsg_ID_22001[];
extern u16 gMsg_ID_22002[];
extern u16 gMsg_ID_22003[];
extern u16 gMsg_ID_22004[];
extern u16 gMsg_ID_22005[];
extern u16 gMsg_ID_22006[];
extern u16 gMsg_ID_22007[];
extern u16 gMsg_ID_22008[];
extern u16 gMsg_ID_22009[];
extern u16 gMsg_ID_22010[];
extern u16 gMsg_ID_22011[];
extern u16 gMsg_ID_22012[];
extern u16 gMsg_ID_22013[];
extern u16 gMsg_ID_22014[];
extern u16 gMsg_ID_22015[];
extern u16 gMsg_ID_22016[];
extern u16 gMsg_ID_22017[];
extern u16 gMsg_ID_22018[];
extern u16 gMsg_ID_22019[];
extern u16 gMsg_ID_22020[];
extern u16 gMsg_ID_23000[];
extern u16 gMsg_ID_23001[];
extern u16 gMsg_ID_23002[];
extern u16 gMsg_ID_23003[];
extern u16 gMsg_ID_23004[];
extern u16 gMsg_ID_23005[];
extern u16 gMsg_ID_23006[];
extern u16 gMsg_ID_23007[];
extern u16 gMsg_ID_23008[];
extern u16 gMsg_ID_23009[];
extern u16 gMsg_ID_23010[];
extern u16 gMsg_ID_23011[];
extern u16 gMsg_ID_23012[];
extern u16 gMsg_ID_23013[];
extern u16 gMsg_ID_23014[];
extern u16 gMsg_ID_23015[];
extern u16 gMsg_ID_23016[];
extern u16 gMsg_ID_23017[];
extern u16 gMsg_ID_23018[];
extern u16 gMsg_ID_23019[];
extern u16 gMsg_ID_23020[];
extern u16 gMsg_ID_23021[];
extern u16 gMsg_ID_23022[];
extern u16 gMsg_ID_23023[];
extern u16 gMsg_ID_23024[];
extern u16 gMsg_ID_23025[];
extern u16 gMsg_ID_23026[];
extern u16 gMsg_ID_23027[];
extern u16 gMsg_ID_23028[];
extern u16 gMsg_ID_23029[];
extern u16 gMsg_ID_23030[];
extern u16 gMsg_ID_23031[];
extern u16 gMsg_ID_23032[];

#endif
