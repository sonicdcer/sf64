#ifndef GLOBAL_H
#define GLOBAL_H

#include "sys.h"

#include "functions.h"
#include "variables.h"
#include "context.h"
#include "structs.h"
#include "sf64mesg.h"
#include "sf64object.h"
#include "sf64level.h"
#include "sf64player.h"
#include "i1.h"
#include "i2.h"
#include "i3.h"
#include "i4.h"
#include "i5.h"
#include "i6.h"
#include "assets.h"

#define AUDIO_PLAY_SFX(sfxId, srcPos, token) (Audio_PlaySfx((sfxId),(srcPos),(token),&gDefaultMod,&gDefaultMod,&gDefaultReverb))
#define AUDIO_PLAY_BGM(seqId, param) Audio_PlaySequence(SEQ_PLAYER_0, (seqId), 0, (param))

#endif // GLOBAL_H
