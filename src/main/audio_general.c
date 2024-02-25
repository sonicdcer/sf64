#include "sys.h"
#include "sf64audio_provisional.h"
#include "context.h"

static const char devstr1[] = "preload start (%d): ";
static const char devstr2[] = "%d ";
static const char devstr3[] = "\n";
static const char devstr4[] = "***** START SEQ : %d *****\n";
static const char devstr5[] = "spec change finished !!!\n";
static const char devstr6[] = "interface wait spec change finished !!!\n";
static const char devstr7[] = "********** SE Interface Buffer SE Stop %08X **********\n";
static const char devstr8[] = "MedlayStart : \n";
static const char devstr9[] = "MedlayStart : \n";
static const char devstr10[] = "MedlayStart(TuneUp) : \n";
static const char devstr11[] = "MedlayStart(cross) : \n";
static const char devstr12[] = "MedlayEnd : \n";
static const char devstr13[] = "MedlayWait : %d\n";
static const char devstr14[] = "ControlSePicth : %f %f %f \n";
static const char devstr15[] = "ChangeWarningSePara : %d %d\n";
static const char devstr16[] = "set Grp 0 port %02x \n";
static const char devstr17[] = "main BGM start %08X\n";
static const char devstr18[] = "<<<<< PlayCrossMixBgm pass !!! >>>>>\n";
static const char devstr19[] = "SetVolumeBallnce %d %d\n";
static const char devstr20[] = "START HANDLE : %d (old:%d)\n";
static const char devstr21[] = "All Sound Fade Out time:%d\n";


void func_80016A50(void) {
}

f32 func_80016A58(u8 bankId, u8 bankIndex) {
    f32 cutoff;
    f32 midDist;
    f32 distance;
    f32 falloff;
    f32 midrange;
    f32 range;

    if (gSfxBanks[bankId][bankIndex].sfxId & 0x400000) {
        return 1.0f;
    }
    distance = gSfxBanks[bankId][bankIndex].distance;
    if (distance > 33000.0f) {
        falloff = 0.0f;
    } else {
        switch (gSfxBanks[bankId][bankIndex].sfxId & 0x30000) { 
            default:
                range = 1650.0f;
                break;
            case 0x10000:
                range = 2200.0f;
                break;
            case 0x20000:
                range = 3142.8572f;
                break;
            case 0x30000:
                range = 6346.1543f;
                break;
            }
        cutoff = range / 5.0f;
        if (distance < range / 5.0f) {
            falloff = 1.0f;
        } else if (distance < range) {
            midDist = range - cutoff;
            midrange = distance - cutoff;
            falloff = (((midDist - midrange) / midDist) * 0.19f) + 0.81f;
        } else {
            falloff = (1.0f - ((distance - range) / (33000.0f - range))) * 0.81f;
        }
        falloff = SQ(falloff);
    }
    return falloff;
}

s8 func_80016BC0(u8 bankId, u8 bankIndex, u8 channelId) {
    SequenceChannel *temp_a0;
    f32 temp_fv0;
    s32 var_a0;
    s8 var_v0;
    s8 var_v1;
    void *temp_a3;

    var_v0 = 0;
    var_v1 = 0;
    if (!(gSfxBanks[bankId][bankIndex].sfxId & 0x200000)) {
        if (gSfxBanks[bankId][bankIndex].distance < 8250.0f) {
            var_v0 = (gSfxBanks[bankId][bankIndex].distance / 8250.0f) * 40.0f;
        }else {
            var_v0 = 40;
        }
    }
    if (gSeqPlayers[2].channels[channelId] != &gSeqChannelNone) {
        var_v1 = gSeqPlayers[2].channels[channelId]->seqScriptIO[6];
    }
    if (var_v1 == -1) {
        var_v1 = 0;
    }
    var_a0 = *gSfxBanks[bankId][bankIndex].reverbAdd + var_v0 + var_v1 + D_800C5D60 + D_800C5D64;
    var_a0 = MIN(0x7F, var_a0);
    return var_a0;
}

s8 func_80016CDC(f32 x, f32 z, u8 mode) {
    f32 pan;
    f32 absz;
    f32 absx;

    if (gSfxChannelLayout != 3) {
        absx = ABSF(x);
        absz = ABSF(z);
        if ((absx < 1.0f) && (absz < 1.0f)) {
            return 64;
        }
        absx = MIN(1200.0f, absx);
        absz = MIN(1200.0f, absz);

        if ((x == 0) && (z == 0)) {
            pan = 0.5f;
        } else if ((x >= 0.f) && (absz <= absx)) {
            pan = 1.0f - ((2400.0f - absx) / (10.0f * (2400.0f - absz)));
        } else if ((x < 0.0f) && (absz <= absx)) {
            pan = (2400.0f - absx) / (10.0f * (2400.0f - absz));
        } else {
            pan = (x / (2.5f * absz)) + 0.5f;
        }
        return ROUND(pan * 127.0f);
    } else if (mode != 4) {
        return ((mode & 1) * 127);
    }
    return 64;
}

f32 func_80016EE4(u8 bankId, u8 bankIndex) {
    f32 distance;
    f32 freqScale = 1.0f;
    
    if (gSfxBanks[bankId][bankIndex].sfxId & 0x800000) {
        freqScale -= ((gAudioRandom % 16) / 192.0f);
    }
    distance = gSfxBanks[bankId][bankIndex].distance;
    if (!(gSfxBanks[bankId][bankIndex].sfxId & 0x400000)) {
        if (distance >= 33000.0f) {
            freqScale += 0.2f;
        } else {
            freqScale += 0.2f * (distance / 33000.0f);
        }
    }
    if ((gSfxChannelLayout != 0) && (gSfxBanks[bankId][bankIndex].token & 2)) {
        freqScale *= 1.1f;
    }
    return freqScale;
}

void func_80016FF0(u8 bankId, u8 bankIndex, u8 arg2) {
    f32 sp3C;
    s8 sp3B;
    f32 sp34;
    s8 sp33;
    SfxBankEntry *temp_v1;
    f32 temp;

    sp3B = 0;
    sp33 = 0x40;
    sp3C = 1.0f;
    sp34 = 1.0f;
    temp_v1 = &gSfxBanks[bankId][bankIndex];
    switch (bankId) {
    case 0:
    case 1:
    case 2:
    case 3:
        if (temp_v1->state == 2) {
            func_8001E8F0(((arg2 & 0xFF) << 8) | 0x06020000 | 1,  gLevelType);
        }
        if ((temp_v1->sfxId & 0x40000) && (*temp_v1->zPos > 0.0f)) {
            temp = *temp_v1->yPos / 2.5f;
            temp_v1->distance = SQ(*temp_v1->xPos) + SQ(temp);
        }
        temp_v1->distance = sqrtf(temp_v1->distance);
        sp3C = (func_80016A58(bankId, bankIndex) * *temp_v1->volScale) * gSfxVolumeLerp[bankId].volume;
        sp3B = func_80016BC0(bankId, bankIndex, arg2);
        sp34 = func_80016EE4(bankId, bankIndex) * *temp_v1->freqScale;
        if ((bankId != 0) || !(*temp_v1->zPos > -200.0f) || !(*temp_v1->zPos < 200.0f) || (gSfxChannelLayout == 3)) {
            sp33 = func_80016CDC(*temp_v1->xPos, *temp_v1->zPos, temp_v1->token);
        }
        break;
    case 4:
        if (gSfxChannelLayout == 3) {
            if (temp_v1->token != 4) {
                sp33 = (temp_v1->token & 1) * 0x7F;
            }
        }
        break;
    }
    if (sp3C != gSfxChannelState[arg2].vol) {
        func_8001E8A8(((arg2 & 0xFF) << 8) | 0x01020000, sp3C);
        gSfxChannelState[arg2].vol = sp3C;
    }
    if (sp3B != gSfxChannelState[arg2].reverb) {
        func_8001E8F0(((arg2 & 0xFF) << 8) | 0x05020000, sp3B);
        gSfxChannelState[arg2].reverb = sp3B;
    }
    if (sp34 != gSfxChannelState[arg2].freqScale) {
        func_8001E8A8(((arg2 & 0xFF) << 8) | 0x04020000, sp34);
        gSfxChannelState[arg2].freqScale = sp34;
    }
    if (sp33 != gSfxChannelState[arg2].pan) {
        func_8001E8F0(((arg2 & 0xFF) << 8) | 0x03020000, sp33);
        gSfxChannelState[arg2].pan = sp33;
    }
}

f32 func_80017360(f32 *sfxPos, f32 *sfxVel, f32 soundSpeed, f32 *freqMod) {
    f32 vx;
    f32 vz;
    f32 px;
    f32 pz;
    f32 dp;
    f32 npx;
    f32 npz;
    f32 dnp;
    f32 temp_fs0;
    f32 sp40;
    f32 var_fa1;
    f32 relSpeed;
    f32 dopplerMod;

    px = sfxPos[0];
    pz = sfxPos[2];
    vx = sfxVel[0];
    vz = sfxVel[2]; 
    dp = sqrtf(SQ(px) + SQ(pz));
    npx = px + vx;
    npz = pz + vz;
    dnp = sqrtf(SQ(npx) + SQ(npz));
    relSpeed = (dp - dnp) / soundSpeed;
    dopplerMod = 1.0f / (1.0f - relSpeed);
    
    temp_fs0 = dopplerMod - *freqMod;
    var_fa1 = *freqMod;
    if (temp_fs0 != 0.0f) {
        if (temp_fs0 > 0.2f) {
            var_fa1 += 0.2f;
        } else if (temp_fs0 < -0.2f) {
            var_fa1 -= 0.2f;
        } else {
            var_fa1 += temp_fs0;
        }
    }
    *freqMod = var_fa1;

    if(var_fa1 > 4.0f) {
        var_fa1 = 4.0f;
    } else if (var_fa1 < 0.1f) {
        var_fa1 = 0.1f;
    }

    return var_fa1;
}

void func_80017494(void) {
    u8 i;

    for(i = 0; D_800C5D6C[D_800C5D54][i] != 0xFF; i++) {
        func_8001E8F0(((D_800C5D6C[D_800C5D54][i] & 0xFF) << 8) | 0xF3000000, 0);
    }
}

void func_80017550(void) {
    if (D_800C5D54 == 0xC) {
        func_8001E8CC(0x81000E00U, 0);
    }
}

void func_80017588(void) {
    u8 i;

    D_800C5D60 = 0;
    D_800C5D64 = D_800C5E38[D_800C5D54];
    for(i = 0; i < 16; i++) {
        gSfxChannelState[i].vol = 1.0f;
        gSfxChannelState[i].freqScale = 1.0f;
        gSfxChannelState[i].reverb = 0;
        gSfxChannelState[i].pan = 64;
    }
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80017600.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80017760.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800177C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800182F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001831C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001839C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80018410.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80018470.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800184D4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800184EC.s")

void func_800185A0(u8,u8,u8,u8);
#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800185A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800185F8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80018E9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80018EE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80018FA4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80019068.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800190E4.s")

void func_80019158(u16 muteFlags) {
    u8 i;

    for(i = 0; i < 5; i++) {
        gSfxBankMuted[i] = (muteFlags & 1) ? true : false;
        muteFlags = muteFlags >> 1;
    }
    
}

void func_800191BC(u8 channelIndex) {
    D_800C5D24 &= (1 << channelIndex) ^ 0xFFFF;
    if (D_800C5D24 == 0) {
        func_800185A0(0, 2, 0x7F, 0xF);
    }
}

void Audio_PlaySfx(u32 sfxId, f32 *sfxPos, u8 token, f32 *fresScale, f32 *volScale, s8 *reverbAdd) {
    SfxRequest *request;

    if (gSfxBankMuted[SFX_BANK_SHIFT(sfxId)] == 0) {
        request = &gSfxRequests[gSfxRequestWriteIndex];
        request->sfxId = sfxId;
        request->pos = sfxPos;
        request->token = token;
        request->freqScale = fresScale;
        request->vol = volScale;
        request->reverbAdd = reverbAdd;
        gSfxRequestWriteIndex++;
    }
}

void func_80019290(u8 aspect, SfxBankEntry *data) {
    u8 i = gSfxRequestReadIndex;

    for(i; i != gSfxRequestWriteIndex; i++) {
        s32 found = false;
        SfxRequest* request = &gSfxRequests[i];

        switch (aspect) {
            case 0:
                if (SFX_BANK_MASK(request->sfxId) == SFX_BANK_MASK(data->sfxId)) {
                    found = 1;
                }
                break;
            case 1:
                if ((SFX_BANK_MASK(request->sfxId) == SFX_BANK_MASK(data->sfxId)) && (&request->pos[0] == data->xPos)) {
                    found = true;
                }
                break;
            case 2:
                if (&request->pos[0] == data->xPos) {
                    found = true;
                }
                break;
            case 3:
                if ((&request->pos[0] == data->xPos) && (request->sfxId == data->sfxId)) {
                    found = true;
                }
                break;
            case 4:
                if ((request->token == data->token) && (request->sfxId == data->sfxId)) {
                    found = true;
                }
                break;
            case 5:
                if (request->sfxId == data->sfxId) {
                    found = true;
                }
                break;
        }
        if (found) {
            request->sfxId = 0;
        }
    }
}

void func_80019434(void) {
    SfxRequest *request = &gSfxRequests[gSfxRequestReadIndex];
    u8 next;
    s32 bankId;
    u8 evict;
    u32 sfxId;
    u8 count;
    SfxBankEntry *entry;

    if (request->sfxId == 0) {
        return;
    }
    bankId = SFX_BANK(request->sfxId);
    next = gSfxBanks[bankId][0].next;
    count = 0;
    while((next != 0xFF) && (next != 0)) {
        if (request->pos == gSfxBanks[bankId][next].xPos) {
            if (request->sfxId == gSfxBanks[bankId][next].sfxId) {
                count = gUsedChannelsPerBank[gSfxChannelLayout][bankId];
            } else {
                if (count == 0) {
                    evict = next;
                    sfxId = gSfxBanks[bankId][next].sfxId;
                } else if (SFX_BYTE3_MASK(gSfxBanks[bankId][next].sfxId) < SFX_BYTE3_MASK(sfxId)) {
                    evict = next;
                    sfxId = gSfxBanks[bankId][next].sfxId;
                }
                count++;
                if (count == gUsedChannelsPerBank[gSfxChannelLayout][bankId]) {
                    if (SFX_BYTE3_MASK(request->sfxId) >= SFX_BYTE3_MASK(sfxId)) {
                        next = evict;
                    } else {
                        next = 0;
                    }
                }
            }
            if (count == gUsedChannelsPerBank[gSfxChannelLayout][bankId]) {
                if (( 0x08000000 & request->sfxId) || (request->sfxId & 0x40000) || (next == evict)) {
                    if ((gSfxBanks[bankId][next].sfxId & 0x80000) && (gSfxBanks[bankId][next].state != 1)) {
                        func_800191BC(gSfxBanks[bankId][next].channelIndex);
                    }
                    gSfxBanks[bankId][next].token = request->token;
                    gSfxBanks[bankId][next].sfxId = request->sfxId;
                    // if(!request->sfxId) {}
                    gSfxBanks[bankId][next].state = SFX_BIT07(request->sfxId);
                    gSfxBanks[bankId][next].freshness = 2;
                    
                    gSfxBanks[bankId][next].freqScale = request->freqScale;
                    gSfxBanks[bankId][next].volScale = request->vol;
                    gSfxBanks[bankId][next].reverbAdd = request->reverbAdd;
                }
                next = 0;
            }
        }
        if (next != 0) {
            next = gSfxBanks[bankId][next].next;
        }
    }
    if ((gSfxBanks[bankId][gSfxBankFreeListStart[bankId]].next != 0xFF) && (next != 0)) {
        next = gSfxBankFreeListStart[bankId];
        entry = &gSfxBanks[bankId][next];
        entry->xPos = &request->pos[0];
        entry->yPos = &request->pos[1];
        entry->zPos = &request->pos[2];
        entry->token = request->token;
        entry->freqScale = request->freqScale;
        entry->volScale = request->vol;
        entry->reverbAdd = request->reverbAdd;
        entry->sfxId = request->sfxId;
        entry->state = SFX_BIT07(request->sfxId);
        entry->freshness = 2;
        
        entry->prev = gSfxBankListEnd[bankId];
        
        gSfxBanks[bankId][gSfxBankListEnd[bankId]].next = gSfxBankFreeListStart[bankId];
        gSfxBankListEnd[bankId] = gSfxBankFreeListStart[bankId];
        gSfxBankFreeListStart[bankId] = gSfxBanks[bankId][gSfxBankFreeListStart[bankId]].next;
        gSfxBanks[bankId][gSfxBankFreeListStart[bankId]].prev = 0xFF;

        entry->next = 0xFF;
    }
}

// #pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80019290.s")

// #pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_80019434.s")

// #pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800197AC.s")

void func_800197AC(u8 bankId, u8 arg1) {
    SfxBankEntry *sp1C;
    SfxBankEntry *sp18;

    sp1C = gSfxBanks[bankId];
    sp18 = &sp1C[arg1];
    if (sp1C[arg1].sfxId & 0x80000) {
        func_800191BC(sp1C[arg1].channelIndex);
    }
    if (arg1 == gSfxBankListEnd[bankId]) {
        gSfxBankListEnd[bankId] = sp1C[arg1].prev;
    } else {
        sp1C[sp1C[arg1].next].prev = sp1C[arg1].prev;
    }
    sp1C[sp1C[arg1].prev].next = sp1C[arg1].next;
    sp1C[arg1].next = gSfxBankFreeListStart[bankId];
    sp1C[arg1].prev = 0xFF;
    
    sp1C[gSfxBankFreeListStart[bankId]].prev = arg1;
    gSfxBankFreeListStart[bankId] = arg1;
    sp1C[arg1].state = 0;
}

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_800198C0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A01C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A290.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A38C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A4B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/Audio_KillSfx.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A55C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A6C4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A838.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A988.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001A9EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AA90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AAE4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AB50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001ACDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AD00.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AD44.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AE58.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AE78.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AED4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AF40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AF50.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001AF9C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001B014.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001B454.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001B774.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001BA40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001BB74.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001BC20.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001BC48.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001BD0C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001BFC0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001C3EC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001C8B8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001CA24.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001CB80.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001CCDC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001CE28.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001CEFC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001CF60.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001CFA8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D034.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D0B4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D10C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D15C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D1C8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D2FC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D3A0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D400.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D410.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D444.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D4AC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D520.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D638.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D6DC.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D780.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D8A8.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D8F4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001D9E0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DA90.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DBD0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DC2C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DC6C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DCB4.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DCE0.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DD40.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DE1C.s")

#pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/func_8001DECC.s")

// #pragma GLOBAL_ASM("asm/us/nonmatchings/main/audio_general/D_800C8DD0.s")
