extern ? D_8014866C;
extern ? D_8014AFF0;

f32 func_80016A58(u8 bankId, u8 bankIndex) {
    f32 temp_fa1;
    f32 temp_ft4;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fv0;
    s32 temp_v0_2;
    s32 temp_v1;
    void* temp_v0;

    temp_v0 = ((bankId & 0xFF) * 0x3C0) + ((bankIndex & 0xFF) * 0x30) + gSfxBanks;
    temp_v1 = temp_v0->unk24;
    if (temp_v1 & 0x400000) {
        return 1.0f;
    }
    temp_fv1 = temp_v0->unk1C;
    temp_v0_2 = temp_v1 & 0x30000;
    if (temp_fv1 > 33000.0f) {
        var_fa0 = 0.0f;
    } else {
        switch (temp_v0_2) {                        /* irregular */
            default:
                var_fv0 = 1650.0f;
                break;
            case 0x10000:
                var_fv0 = 2200.0f;
                break;
            case 0x20000:
                var_fv0 = 3142.8572f;
                break;
            case 0x30000:
                var_fv0 = 6346.1543f;
                break;
        }
        temp_fa1 = var_fv0 / 5.0f;
        if (temp_fv1 < temp_fa1) {
            var_fa0_2 = 1.0f;
        } else if (temp_fv1 < var_fv0) {
            temp_ft4 = var_fv0 - temp_fa1;
            var_fa0_2 = (((temp_ft4 - (temp_fv1 - temp_fa1)) / temp_ft4) * 0.19f) + 0.81f;
        } else {
            var_fa0_2 = (1.0f - ((temp_fv1 - var_fv0) / (33000.0f - var_fv0))) * 0.81f;
        }
        var_fa0 = var_fa0_2 * var_fa0_2;
    }
    return var_fa0;
}

s8 func_80016BC0(u8 bankId, u8 bankIndex, u8 channelId) {
    SequenceChannel* temp_a0;
    f32 temp_fv0;
    s8 var_a0;
    s8 var_v0;
    s8 var_v1;
    void* temp_a3;

    temp_a3 = ((bankId & 0xFF) * 0x3C0) + ((bankIndex & 0xFF) * 0x30) + gSfxBanks;
    var_v0 = 0;
    var_v1 = 0;
    if (!(temp_a3->unk24 & 0x200000)) {
        temp_fv0 = temp_a3->unk1C;
        var_v0 = 0x28;
        if (temp_fv0 < 8250.0f) {
            var_v0 = (s8) (s32) ((temp_fv0 / 8250.0f) * 40.0f);
        }
    }
    temp_a0 = gSeqPlayers[2].channels[channelId & 0xFF];
    if (&gSeqChannelNone != temp_a0) {
        var_v1 = temp_a0->seqScriptIO[6];
    }
    if (var_v1 == -1) {
        var_v1 = 0;
    }
    var_a0 = *temp_a3->unk18 + var_v0 + var_v1 + D_800C5D60 + D_800C5D64;
    if (var_a0 >= 0x80) {
        var_a0 = 0x7F;
    }
    return var_a0;
}

s8 func_80016CDC(f32 x, f32 z, u8 mode) {
    f32 var_fa1;
    f32 var_fv0;
    f32 var_fv1;
    s32 temp_t6;

    temp_t6 = mode & 0xFF;
    if (gSfxChannelLayout != 3) {
        if (x >= 0.0f) {
            var_fv1 = x;
        } else {
            var_fv1 = -x;
        }
        if (z >= 0.0f) {
            var_fv0 = z;
        } else {
            var_fv0 = -z;
        }
        if ((var_fv1 < 1.0f) && (var_fv0 < 1.0f)) {
            return 0x40;
        }
        if (var_fv1 > 1200.0f) {
            var_fv1 = 1200.0f;
        }
        if (var_fv0 > 1200.0f) {
            var_fv0 = 1200.0f;
        }
        if ((x == 0.0f) && (z == 0.0f)) {
            var_fa1 = 0.5f;
        } else if ((x >= 0.0f) && (var_fv0 <= var_fv1)) {
            var_fa1 = 1.0f - ((2400.0f - var_fv1) / (10.0f * (2400.0f - var_fv0)));
        } else if ((x < 0.0f) && (var_fv0 <= var_fv1)) {
            var_fa1 = (2400.0f - var_fv1) / (10.0f * (2400.0f - var_fv0));
        } else {
            var_fa1 = (x / (2.5f * var_fv0)) + 0.5f;
        }
        return (s8) (s32) ((var_fa1 * 127.0f) + 0.5f);
    }
    if (temp_t6 != 4) {
        return (s8) ((temp_t6 & 1) * 0x7F);
    }
    return 0x40;
}

f32 func_80016EE4(u8 bankId, u8 bankIndex) {
    f32 temp_fv0;
    f32 var_ft1;
    f32 var_fv1;
    s32 temp_t4;
    s32 temp_v1;
    void* temp_v0;

    temp_v0 = ((bankId & 0xFF) * 0x3C0) + ((bankIndex & 0xFF) * 0x30) + gSfxBanks;
    temp_v1 = temp_v0->unk24;
    var_fv1 = 1.0f;
    if (temp_v1 & 0x800000) {
        temp_t4 = gAudioRandom & 0xF;
        var_ft1 = (f32) temp_t4;
        if (temp_t4 < 0) {
            var_ft1 += 4294967296.0f;
        }
        var_fv1 = 1.0f - (var_ft1 / 192.0f);
    }
    temp_fv0 = temp_v0->unk1C;
    if (!(temp_v1 & 0x400000)) {
        if (temp_fv0 >= 33000.0f) {
            var_fv1 += 0.2f;
        } else {
            var_fv1 += 0.2f * (temp_fv0 / 33000.0f);
        }
    }
    if ((gSfxChannelLayout != 0) && (temp_v0->unkC & 2)) {
        var_fv1 *= 1.1f;
    }
    return var_fv1;
}

void func_80016FF0(u8 bankId, u8 bankIndex, u8 arg2) {
    f32 sp3C;
    s8 sp3B;
    f32 sp34;
    s8 sp33;
    SfxChannelState* sp20;
    u32 sp1C;
    SfxChannelState* temp_v1;
    SfxChannelState* var_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    u32 var_a3;
    u8 temp_v0;

    var_a3 = bankId & 0xFF;
    sp3B = 0;
    sp33 = 0x40;
    sp1C = var_a3;
    sp3C = 1.0f;
    sp34 = 1.0f;
    switch (var_a3) {
        case 0:
        case 1:
        case 2:
        case 3:
            temp_v1 = (var_a3 * 0x3C0) + (bankIndex * 0x30) + gSfxBanks;
            if (temp_v1->unk28 == 2) {
                sp20 = temp_v1;
                bankId = (u8) var_a3;
                func_8001E8F0((arg2 << 8) | 0x06020000 | 1, (s8) gLevelType);
                var_a3 = (u32) bankId;
            }
            if ((temp_v1->unk24 & 0x40000) && (*temp_v1->unk8 > 0.0f)) {
                temp_fv0 = *temp_v1->freqScale / 2.5f;
                temp_fv1 = *temp_v1->vol;
                temp_v1->unk1C = (f32) ((temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0));
            }
            temp_v1->unk1C = sqrtf(temp_v1->unk1C);
            bankId = (u8) var_a3;
            sp20 = temp_v1;
            sp3C = gSfxVolumeLerp[bankId].volume * (func_80016A58(var_a3 & 0xFF, bankIndex) * *temp_v1->unk14);
            sp3B = func_80016BC0(bankId & 0xFF, bankIndex, arg2);
            sp34 = *temp_v1->unk10 * func_80016EE4(bankId, bankIndex);
            if ((sp1C != 0) || (temp_fv0_2 = *temp_v1->unk8, !(temp_fv0_2 > -200.0f)) || !(temp_fv0_2 < 200.0f) || (gSfxChannelLayout == 3)) {
                sp33 = func_80016CDC(*temp_v1->vol, *temp_v1->unk8, temp_v1->unkC);
            }
            break;
        case 4:
            if (gSfxChannelLayout == 3) {
                temp_v0 = *(&D_8014866C + ((var_a3 * 0x3C0) + (bankIndex * 0x30)));
                if (temp_v0 != 4) {
                    sp33 = (temp_v0 & 1) * 0x7F;
                }
            }
            break;
    }
    var_v0 = &gSfxChannelState[arg2];
    if (sp3C != var_v0->vol) {
        sp20 = var_v0;
        func_8001E8A8(((arg2 & 0xFF) << 8) | 0x01020000, sp3C);
        var_v0->vol = sp3C;
    }
    if (sp3B != var_v0->reverb) {
        sp20 = var_v0;
        func_8001E8F0((arg2 << 8) | 0x05020000, sp3B);
        var_v0->reverb = sp3B;
    }
    if (sp34 != var_v0->freqScale) {
        sp20 = var_v0;
        func_8001E8A8((arg2 << 8) | 0x04020000, sp34);
        var_v0->freqScale = sp34;
    }
    if (sp33 != var_v0->pan) {
        sp20 = var_v0;
        func_8001E8F0((arg2 << 8) | 0x03020000, sp33);
        var_v0->pan = sp33;
    }
}

f32 func_80017360(f32* sfxPos, f32* sfxVel, f32 soundSpeed, f32* freqMod) {
    f32 sp44;
    f32 sp40;
    f32 sp34;
    f32 sp10;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft1;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv1;
    f32 var_fa1;
    f32 var_fv0;

    temp_fv1 = sfxPos->unk0;
    temp_fa0 = sfxPos[2];
    temp_ft0 = sfxVel->unk0;
    sp44 = temp_ft0;
    temp_ft1 = sfxVel->unk8;
    sp40 = temp_ft1;
    temp_ft4 = temp_fv1 + temp_ft0;
    temp_ft5 = temp_fa0 + temp_ft1;
    sp34 = sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0));
    temp_ft0_2 = *freqMod;
    sp10 = temp_ft0_2;
    var_fa1 = temp_ft0_2;
    temp_fs0 = (1.0f / (1.0f - ((sp34 - sqrtf((temp_ft4 * temp_ft4) + (temp_ft5 * temp_ft5))) / soundSpeed))) - temp_ft0_2;
    if (temp_fs0 != 0.0f) {
        if (temp_fs0 > 0.2f) {
            var_fa1 = temp_ft0_2 + 0.2f;
        } else if (temp_fs0 < -0.2f) {
            var_fa1 -= 0.2f;
        } else {
            var_fa1 += temp_fs0;
        }
    }
    var_fv0 = 4.0f;
    *freqMod = var_fa1;
    if (var_fa1 > 4.0f) {
        goto block_9;
    }
    var_fv0 = 0.1f;
    if (var_fa1 < 0.1f) {
block_9:
        var_fa1 = var_fv0;
    }
    return var_fa1;
}

void func_80017494(void) {
    s32 temp_t1;
    s32 var_s0;
    u8 temp_t8;
    u8 var_s1;

    temp_t8 = *D_800C5D6C[D_800C5D54];
    var_s0 = 0;
    if (temp_t8 != 0xFF) {
        var_s1 = temp_t8 & 0xFF;
        do {
            func_8001E8F0(((var_s1 & 0xFF) << 8) | 0xF3000000, 0);
            temp_t1 = (var_s0 + 1) & 0xFF;
            var_s1 = D_800C5D6C[D_800C5D54][temp_t1];
            var_s0 = temp_t1;
        } while (var_s1 != 0xFF);
    }
}

void func_80017550(void) {
    if (D_800C5D54 == 0xC) {
        func_8001E8CC(0x81000E00U, 0);
    }
}

void func_80017588(void) {
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t9;
    s32 var_v0;
    void* temp_v1;

    D_800C5D60 = 0;
    D_800C5D64 = D_800C5E38[D_800C5D54];
    var_v0 = 0;
    do {
        temp_lo = var_v0 * 0xC;
        temp_t9 = (var_v0 + 1) & 0xFF;
        temp_at = temp_t9 < 0x10;
        var_v0 = temp_t9;
        temp_v1 = gSfxChannelState + temp_lo;
        temp_v1->unk0 = 1.0f;
        temp_v1->unk4 = 1.0f;
        temp_v1->unk8 = 0;
        temp_v1->unk9 = 0x40;
    } while (temp_at != 0);
}

void func_80017600(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
    s32 sp20;
    ActiveSequence* sp1C;
    ActiveSequence* temp_a2;
    f32 temp_fv1;
    s32 temp_at;
    s32 temp_t5;
    s32 temp_v1;
    s32 var_v1;
    u16 temp_v0;
    void* temp_v0_2;

    if ((gStartSeqDisabled == 0) || (arg0 == 2)) {
        temp_v1 = arg0 << 0x10;
        sp20 = temp_v1;
        func_8001E8CC(temp_v1 | 0x82000000 | (arg1 << 8), arg3 & 0xFFFF);
        temp_a2 = &gActiveSequences[arg0];
        temp_fv1 = temp_a2->volCur;
        temp_v0 = arg1 | (arg2 << 8);
        temp_a2->seqId = temp_v0;
        temp_a2->prevSeqId = temp_v0;
        if (temp_fv1 != 1.0f) {
            sp1C = temp_a2;
            func_8001E8A8(temp_v1 | 0x41000000, temp_fv1);
        }
        temp_a2->tempoTimer = 0;
        temp_a2->tempoOriginal = 0;
        temp_a2->tempoCmd = 0;
        var_v1 = 0;
        do {
            temp_v0_2 = &gActiveSequences[arg0] + (var_v1 << 5);
            temp_t5 = (var_v1 + 1) & 0xFF;
            temp_at = temp_t5 < 0x10;
            var_v1 = temp_t5;
            temp_v0_2->unk44 = 1.0f;
            temp_v0_2->unk50 = 0;
            temp_v0_2->unk54 = 1.0f;
            temp_v0_2->unk60 = 0;
        } while (temp_at != 0);
        temp_a2->freqScaleChannelFlags = 0;
        temp_a2->volChannelFlags = 0;
    }
}

void func_80017760(u8 arg0, s32 arg1) {
    func_8001E8CC((arg0 << 0x10) | 0x83000000, arg1 & 0xFFFF);
    *(&D_8014AFF0 + (arg0 * 0x258)) = 0xFFFF;
}

void func_800177C8(u16 arg0, SeqRequest* arg2) {
    u8 sp63;
    u8 sp61;
    u8* sp54;
    u32 sp4C;
    s32 sp44;
    ActiveSequence* sp40;                           /* compiler-managed */
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    u8* sp2C;
    ActiveSequence* temp_a0_5;
    ActiveSequence* temp_t8_3;
    ActiveSequence* temp_v1;
    ActiveSequence* temp_v1_3;
    ActiveSequence* temp_v1_6;
    ActiveSequence* temp_v1_7;
    SeqRequest* temp_a0_3;
    SeqRequest* temp_a0_4;
    SeqRequest* temp_a1_2;
    SeqRequest* temp_a1_3;
    SeqRequest* temp_a2_2;
    SeqRequest* temp_v0;
    SeqRequest* temp_v0_2;
    SeqRequest* var_a2;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 var_ft2;
    f32 var_ft4;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_at;
    s32 temp_at_2;
    s32 temp_t6_2;
    s32 temp_t6_4;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8_2;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_t9_5;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_3;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s8 var_a2_2;
    u32 temp_t6;
    u32 temp_t6_3;
    u32 temp_t7_3;
    u32 temp_t8;
    u32 temp_t9_4;
    u32 var_a1_2;
    u8 temp_a0;
    u8 temp_a1_4;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t9;
    u8 var_t0_2;
    u8 var_t3;
    u8 var_v1_6;
    u8* temp_t4;
    u8* temp_t4_2;
    void* temp_v0_3;

    var_a2 = arg2;
    temp_t8 = (arg0 >> 0x1C) & 0xFF;
    temp_t6 = (u32) (arg0 & 0x0F000000) >> 0x18;
    temp_a1 = temp_t6 & 0xFF;
    switch (temp_t8) {
        case 0:
            temp_a0 = temp_t6 & 0xFF;
            temp_v1 = &gActiveSequences[temp_a0];
            temp_a2 = ((u32) (arg0 & 0xFF00) >> 8) & 0xFF;
            if (temp_v1->isWaitingForFonts == 0) {
                if (temp_a2 < 0x80) {
                    func_80017600(temp_a0, arg0 & 0xFF, (u8) temp_a2, ((u32) (arg0 & 0xFF0000) >> 0xD) & 0xFFFF);
                    return;
                }
                temp_v1->startSeqCmd = arg0 & 0xFFFF7FFF;
                temp_v1->isWaitingForFonts = 1;
                sp40 = temp_v1;
                sp34 = (s32) temp_a0;
                func_80017760(temp_a0, 1, temp_a2);
                temp_a0_2 = arg0 & 0xFF;
                if (temp_v1->prevSeqId != 0xFFFF) {
                    sp40 = temp_v1;
                    sp44 = temp_a0_2;
                    sp54 = func_8001ED14(temp_a0_2, &sp4C);
                    if (*sp54 != *func_8001ED14(sp40->prevSeqId & 0xFF, &sp4C)) {
                        func_8001E8CC(((sp44 & 0xFF) << 8) | 0xF6000000, 0);
                    }
                }
                func_8001E8F0(((arg0 & 0xFF) << 0x10) | 0xF5000000 | 0x1400 | ((sp34 + 1) & 0xFF), 0);
                return;
            }
        default:
            return;
        case 1:
            func_80017760(temp_t6 & 0xFF, ((u32) (arg0 & 0xFF0000) >> 0xD) & 0xFFFF);
            return;
        case 2:
            temp_t7 = temp_t6 & 0xFF;
            temp_t4 = &gNumSeqRequests[temp_t7];
            temp_t1 = *temp_t4;
            sp34 = temp_t7;
            var_v1 = 0;
            var_t3 = temp_t1;
            if ((s32) temp_t1 > 0) {
                temp_a3 = arg0 & 0xFF;
                sp38 = temp_a3;
loop_12:
                if (temp_a3 == gSeqRequests[temp_t7][var_v1].seqId) {
                    if (var_v1 == 0) {
                        func_80017600(unksp37, unksp3B, ((u32) (arg0 & 0xFF00) >> 8) & 0xFF, ((u32) (arg0 & 0xFF0000) >> 0xD) & 0xFFFF);
                        return;
                    }
                } else {
                    temp_t6_2 = (var_v1 + 1) & 0xFF;
                    var_v1 = temp_t6_2;
                    if (temp_t6_2 >= (s32) gNumSeqRequests[temp_a1]) {
                        var_v1 = 0;
                        goto block_17;
                    }
                    goto loop_12;
                }
            } else {
block_17:
                var_t0 = temp_t1 & 0xFF;
                if ((s32) var_t3 > 0) {
                    do {
                        if ((((u32) (arg0 & 0xFF00) >> 8) & 0xFF) >= (s32) gSeqRequests[sp34][var_v1].priority) {
                            var_t0 = var_v1 & 0xFF;
                            var_v1 = temp_t1 & 0xFF;
                        }
                        temp_t7_2 = (var_v1 + 1) & 0xFF;
                        var_v1 = temp_t7_2;
                    } while (temp_t7_2 < (s32) gNumSeqRequests[temp_a1]);
                }
                if ((var_t0 != var_t3) || (var_t0 == 0)) {
                    temp_a2_2 = gSeqRequests[sp34];
                    if ((s32) var_t3 < 5) {
                        temp_t9 = temp_t1 + 1;
                        *temp_t4 = temp_t9;
                        var_t3 = temp_t9 & 0xFF;
                    }
                    var_v0 = (var_t3 - 1) & 0xFF;
                    var_v1_2 = var_v0;
                    if (var_t0 != var_v0) {
                        do {
                            temp_a1_2 = &temp_a2_2[var_v0];
                            temp_a0_3 = &temp_a2_2[var_v1_2];
                            temp_a0_3->priority = temp_a1_2->unk-1;
                            var_v0 = (var_v1_2 - 1) & 0xFF;
                            var_v1_2 = var_v0;
                            temp_a0_3->seqId = temp_a1_2->unk-2;
                        } while (var_t0 != var_v0);
                    }
                    temp_v0 = &temp_a2_2[var_t0];
                    temp_v0->priority = ((u32) (arg0 & 0xFF00) >> 8) & 0xFF;
                    temp_v0->seqId = arg0 & 0xFF;
                }
                if (var_t0 == 0) {
                    func_80017600(unksp37, arg0 & 0xFF, ((u32) (arg0 & 0xFF00) >> 8) & 0xFF, ((u32) (arg0 & 0xFF0000) >> 0xD) & 0xFFFF);
                    return;
                }
            }
            break;
        case 3:
            temp_t8_2 = temp_t6 & 0xFF;
            temp_t4_2 = &gNumSeqRequests[temp_t8_2];
            temp_t1_2 = *temp_t4_2;
            sp34 = temp_t8_2;
            var_v1_3 = 0;
            var_t0_2 = temp_t1_2;
            if ((s32) temp_t1_2 > 0) {
                var_a2 = gSeqRequests[temp_t8_2];
                do {
                    if ((arg0 & 0xFF) == var_a2[var_v1_3].seqId) {
                        var_t0_2 = var_v1_3 & 0xFF;
                        var_v1_3 = temp_t1_2 & 0xFF;
                    }
                    temp_t9_2 = (var_v1_3 + 1) & 0xFF;
                    var_v1_3 = temp_t9_2;
                } while (temp_t9_2 < (s32) gNumSeqRequests[temp_a1]);
            }
            if (var_t0_2 != temp_t1_2) {
                temp_a3_2 = temp_t1_2 - 1;
                var_v1_4 = var_t0_2 & 0xFF;
                if ((s32) var_t0_2 < temp_a3_2) {
                    var_a2 = gSeqRequests[sp34];
                    var_v0_2 = var_v1_4;
                    do {
                        temp_a1_3 = &var_a2[var_v0_2];
                        temp_a0_4 = &var_a2[var_v1_4];
                        temp_a0_4->priority = temp_a1_3->unk3;
                        var_v0_2 = (var_v1_4 + 1) & 0xFF;
                        var_v1_4 = var_v0_2;
                        temp_a0_4->seqId = temp_a1_3->unk2;
                    } while (var_v0_2 < temp_a3_2);
                }
                *temp_t4_2 = temp_t1_2 - 1;
            }
            if (var_t0_2 == 0) {
                temp_a3_3 = ((u32) (arg0 & 0xFF0000) >> 0xD) & 0xFFFF;
                sp44 = temp_a3_3;
                sp2C = temp_t4_2;
                func_80017760(unksp37, temp_a3_3 & 0xFFFF, (s32) var_a2, temp_a3_3);
                if (*temp_t4_2 != 0) {
                    temp_v0_2 = gSeqRequests[sp34];
                    func_80017600((u8) sp34, temp_v0_2->seqId, temp_v0_2->priority, temp_a3_3);
                    return;
                }
            }
            break;
        case 4:
            temp_t7_3 = (u32) (arg0 & 0xFF0000) >> 0xF;
            temp_v1_2 = temp_t7_3 & 0xFF;
            var_a1 = temp_t7_3 & 0xFF;
            if (temp_v1_2 == 0) {
                var_a1 = (temp_v1_2 + 1) & 0xFF;
            }
            temp_v1_3 = &gActiveSequences[temp_t6 & 0xFF];
            temp_fv1 = temp_v1_3->volCur;
            temp_fv0 = (f32) (arg0 & 0xFF) / 127.0f;
            temp_v1_3->volTarget = temp_fv0;
            if (temp_fv1 != temp_fv0) {
                var_ft2 = (f32) var_a1;
                if (var_a1 < 0) {
                    var_ft2 += 4294967296.0f;
                }
                temp_v1_3->volTimer = (u16) var_a1;
                temp_v1_3->volStep = (temp_fv1 - temp_v1_3->volTarget) / var_ft2;
                return;
            }
            break;
        case 5:
            temp_t6_3 = (u32) (arg0 & 0xFF0000) >> 0xF;
            temp_v1_4 = temp_t6_3 & 0xFF;
            var_a1_2 = temp_t6_3 & 0xFF;
            if (temp_v1_4 == 0) {
                var_a1_2 = (temp_v1_4 + 1) & 0xFF;
            }
            var_v1_5 = 0;
            temp_a2_3 = temp_t6 & 0xFF;
            temp_a0_5 = &gActiveSequences[temp_a2_3];
            temp_fv0_2 = (f32) (arg0 & 0xFFFF) / 1000.0f;
            do {
                temp_v0_3 = temp_a0_5 + (var_v1_5 << 5);
                temp_t9_3 = (var_v1_5 + 1) & 0xFF;
                temp_ft0 = temp_a0_5->channelData[var_v1_5].freqScaleCur - temp_fv0_2;
                temp_at = temp_t9_3 < 0x10;
                var_v1_5 = temp_t9_3;
                temp_v0_3->unk58 = temp_fv0_2;
                temp_v0_3->unk60 = (s16) var_a1_2;
                temp_v0_3->unk5C = (f32) (temp_ft0 / (f32) var_a1_2);
            } while (temp_at != 0);
            gActiveSequences[temp_a2_3].freqScaleChannelFlags = 0xFFFF;
            return;
        case 6:
            temp_t9_4 = (u32) (arg0 & 0xFF0000) >> 0xF;
            temp_v1_5 = temp_t9_4 & 0xFF;
            var_a1_3 = temp_t9_4 & 0xFF;
            if (temp_v1_5 == 0) {
                var_a1_3 = (temp_v1_5 + 1) & 0xFF;
            }
            temp_a3_4 = temp_t6 & 0xFF;
            temp_a2_4 = ((u32) (arg0 & 0xF00) >> 8) & 0xFF;
            temp_t8_3 = &gActiveSequences[temp_a3_4];
            temp_fv0_3 = (f32) (arg0 & 0xFF) / 127.0f;
            temp_t8_3->channelData[temp_a2_4].volTarget = temp_fv0_3;
            if (temp_t8_3->channelData[temp_a2_4].volCur != temp_fv0_3) {
                temp_v1_6 = &gActiveSequences[temp_a3_4];
                var_ft4 = (f32) var_a1_3;
                if (var_a1_3 < 0) {
                    var_ft4 += 4294967296.0f;
                }
                temp_v1_6->channelData[temp_a2_4].volTimer = (u16) var_a1_3;
                temp_v1_6->channelData[temp_a2_4].volStep = (temp_v1_6->channelData[temp_a2_4].volCur - temp_v1_6->channelData[temp_a2_4].volTarget) / var_ft4;
                temp_v1_6->freqScaleChannelFlags |= 1 << temp_a2_4;
                return;
            }
            break;
        case 7:
            func_8001E8F0(((temp_t6 & 0xFF) << 0x10) | 0x46000000 | ((((u32) (arg0 & 0xFF0000) >> 0x10) & 0xFF) << 8), (s8) arg0);
            return;
        case 8:
            temp_v0_4 = temp_t6 & 0xFF;
            temp_a2_5 = ((u32) (arg0 & 0xF00) >> 8) & 0xFF;
            if (!(gActiveSequences[temp_v0_4].channelPortMask & (1 << temp_a2_5))) {
                func_8001E8F0(((temp_v0_4 & 0xFF) << 0x10) | 0x06000000 | ((temp_a2_5 & 0xFF) << 8) | (((u32) (arg0 & 0xFF0000) >> 0x10) & 0xFF), (s8) arg0);
                return;
            }
            break;
        case 9:
            gActiveSequences[temp_t6 & 0xFF].channelPortMask = arg0;
            return;
        case 10:
            var_a0 = 1;
            sp40 = ((temp_t6 & 0xFF) << 0x10) | 0x08000000;
            var_a3 = arg0 & 0xFFFF;
            var_v1_6 = 0;
            do {
                if (var_a3 & var_a0) {
                    var_a2_2 = 1;
                } else {
                    var_a2_2 = 0;
                }
                sp44 = var_a0;
                sp63 = var_v1_6;
                sp3C = var_a3;
                func_8001E8F0(sp40 | ((var_v1_6 & 0xFF) << 8), var_a2_2);
                temp_t9_5 = (var_v1_6 + 1) & 0xFF;
                temp_at_2 = temp_t9_5 < 0x10;
                var_v1_6 = (u8) temp_t9_5;
                var_a0 = (var_a0 * 2) & 0xFFFF;
            } while (temp_at_2 != 0);
            return;
        case 11:
            gActiveSequences[temp_t6 & 0xFF].tempoCmd = (u32) arg0;
            return;
        case 12:
            if ((((u32) (arg0 & 0xF00000) >> 0x14) & 0xFF) != 0xF) {
                temp_v1_7 = &gActiveSequences[temp_t6 & 0xFF];
                temp_t0 = temp_v1_7->setupCmdNum;
                temp_v1_7->setupCmdNum = temp_t0 + 1;
                if ((s32) temp_t0 < 5) {
                    temp_v1_7->setupCmd[temp_t0] = (u32) arg0;
                    temp_v1_7->setupCmdTimer = 2;
                    return;
                }
            } else {
                gActiveSequences[temp_t6 & 0xFF].setupCmdNum = 0;
                return;
            }
            break;
        case 14:
            temp_t6_4 = ((u32) (arg0 & 0xF00) >> 8) & 0xFF;
            switch (temp_t6_4) {                    /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    func_8001E8CC(0xF0000000U, (s32) gSoundModeList[arg0 & 0xFF]);
                    return;
                case 1:                             /* switch 1 */
                    gStartSeqDisabled = arg0 & 1;
                    return;
            }
            break;
        case 15:
            gSfxChannelLayout = (u8) ((u32) (arg0 & 0xFF00) >> 8);
            temp_a1_4 = D_800C5D54;
            temp_a3_5 = arg0 & 0xFF;
            D_800C5D54 = (u8) arg0;
            if (temp_a3_5 != temp_a1_4) {
                sp61 = temp_a1_4;
                func_8001ED8C((void* ) temp_a3_5);
                func_8001DE1C(sp61);
                func_8001E8CC(0xF8000000U, 0);
                return;
            }
            func_80017760(0U, 1, temp_a3_5);
            func_80017760(1U, 1);
            break;
    }
}

void func_800182F4(s32 seqCmd) {
    gAudioSeqCmds[gSeqCmdWritePos] = seqCmd;
    gSeqCmdWritePos += 1;
}

void func_8001831C(void) {
    u8 temp_s0;

    temp_s0 = gSeqCmdReadPos;
    if (temp_s0 != gSeqCmdWritePos) {
        do {
            gSeqCmdReadPos = temp_s0 + 1;
            func_800177C8((u16) gAudioSeqCmds[temp_s0]);
        } while (gSeqCmdReadPos != gSeqCmdWritePos);
    }
}

u16 func_8001839C(s32 arg0) {
    s32 temp_t6;

    temp_t6 = arg0 & 0xFF;
    if (((u32) gSeqPlayers[temp_t6] >> 0x1F) == 0) {
        return 0xFFFFU;
    }
    return *(&D_8014AFF0 + (temp_t6 * 0x258));
}

s32 func_80018410(s32 arg0) {
    s32 temp_t9;
    s32 var_v1;
    u8 var_v0;

    var_v0 = gSeqCmdReadPos;
    var_v1 = 1;
    if ((s32) var_v0 < (s32) gSeqCmdWritePos) {
        do {
            if (arg0 == gAudioSeqCmds[var_v0]) {
                var_v1 = 0;
                var_v0 = gSeqCmdWritePos & 0xFF;
            }
            temp_t9 = (var_v0 + 1) & 0xFF;
            var_v0 = (u8) temp_t9;
        } while (temp_t9 < (s32) gSeqCmdWritePos);
    }
    return var_v1;
}

s32 func_80018470(s32 arg0, s32 arg1) {
    s32 temp_t1;
    s32 var_v1;
    u8 var_v0;

    var_v0 = gSeqCmdReadPos;
    var_v1 = 1;
    if ((s32) var_v0 < (s32) gSeqCmdWritePos) {
        do {
            if (arg0 == (gAudioSeqCmds[var_v0] & arg1)) {
                var_v1 = 0;
                var_v0 = gSeqCmdWritePos & 0xFF;
            }
            temp_t1 = (var_v0 + 1) & 0xFF;
            var_v0 = (u8) temp_t1;
        } while (temp_t1 < (s32) gSeqCmdWritePos);
    }
    return var_v1;
}

void func_800184D4(s32 arg0) {
    gNumSeqRequests[arg0 & 0xFF] = 0;
}

void func_800184EC(s32 arg0, s32 arg1) {
    ActiveSequence* temp_a1;
    ActiveSequence* temp_v1;
    s32 temp_t6;
    s32 temp_t7;
    s32 var_v0;

    temp_t6 = arg0 & 0xFF;
    temp_v1 = &gActiveSequences[temp_t6];
    var_v0 = 0;
    if ((s32) temp_v1->setupCmdNum > 0) {
        temp_a1 = &gActiveSequences[temp_t6];
        do {
            temp_t7 = (var_v0 + 1) & 0xFF;
            if ((arg1 & 0xFF) == (((u32) (temp_a1->setupCmd[var_v0] & 0xF00000) >> 0x14) & 0xFF)) {
                temp_a1->setupCmd[var_v0] = 0xFF000000;
            }
            var_v0 = temp_t7;
        } while (temp_t7 < (s32) temp_v1->setupCmdNum);
    }
}

void func_800185A0(s32 arg0, s32 arg1, u8 arg2, u8 arg3) {
    ActiveSequence* temp_v0;

    temp_v0 = &gActiveSequences[arg0 & 0xFF];
    temp_v0->volScales[arg1 & 0xFF] = arg2;
    temp_v0->volFadeTimer = arg3;
    temp_v0->fadeVolUpdate = 1;
}

void func_800185F8(void) {
    s32 sp70;
    ActiveSequence* temp_s0;
    ActiveSequence* temp_s0_2;
    ActiveSequence* temp_s3;
    ActiveSequence* temp_s4;
    ActiveSequence* temp_s4_2;
    SequencePlayer* temp_a1_2;
    f32 temp_fv1;
    f32 var_ft1;
    f32 var_ft2;
    f32 var_ft4;
    f32 var_fv0;
    f32 var_fv0_2;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_at;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_t2_2;
    s32 temp_t4;
    s32 temp_t4_2;
    s32 temp_t4_3;
    s32 temp_t5_2;
    s32 temp_t5_3;
    s32 temp_t8_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_t0;
    u16 temp_t3_2;
    u16 temp_t5;
    u16 temp_t6;
    u16 temp_t8;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u32 temp_a1;
    u32 temp_t2;
    u32 temp_t8_3;
    u32 temp_v0_6;
    u8 temp_a3_3;
    u8 temp_t3;
    u8 temp_v0_5;
    void* temp_v0;

    var_s5 = 0;
loop_1:
    temp_s3 = &gActiveSequences[var_s5];
    if ((temp_s3->isWaitingForFonts != 0) && ((temp_v0 = func_8001ECAC(&sp70), (temp_v0 == (void* )1)) || (temp_v0 == (void* )2) || (temp_v0 == (void* )3) || (temp_v0 == (void* )4))) {
        temp_s3->isWaitingForFonts = 0;
        func_800177C8((u16) temp_s3->startSeqCmd);
    }
    if (temp_s3->fadeVolUpdate != 0) {
        var_fv0 = 1.0f;
        var_s2 = 0;
        do {
            temp_t3 = gActiveSequences[var_s5].volScales[var_s2];
            var_ft1 = (f32) temp_t3;
            if ((s32) temp_t3 < 0) {
                var_ft1 += 4294967296.0f;
            }
            temp_t4 = (var_s2 + 1) & 0xFF;
            temp_at = temp_t4 < 3;
            var_s2 = temp_t4;
            var_fv0 *= var_ft1 / 127.0f;
        } while (temp_at != 0);
        func_800182F4((temp_s3->volFadeTimer << 0x10) | 0x40000000 | (var_s5 << 0x18) | ((u32) (var_fv0 * 127.0f) & 0xFF));
        temp_s3->fadeVolUpdate = 0;
    }
    temp_v0_2 = temp_s3->volTimer;
    temp_t5 = temp_v0_2 - 1;
    if (temp_v0_2 != 0) {
        temp_s3->volTimer = temp_t5;
        if (temp_t5 & 0xFFFF) {
            temp_s3->volCur -= temp_s3->volStep;
        } else {
            temp_s3->volCur = temp_s3->volTarget;
        }
        func_8001E8A8(((var_s5 & 0xFF) << 0x10) | 0x41000000, temp_s3->volCur);
    }
    temp_a1 = temp_s3->tempoCmd;
    if (temp_a1 != 0) {
        temp_t2 = (u32) (temp_a1 & 0xFF0000) >> 0xF;
        temp_a0 = temp_a1 & 0xFFF;
        temp_a3 = temp_t2 & 0xFF;
        var_t0 = temp_t2 & 0xFF;
        var_a2 = temp_a0 & 0xFFFF;
        if (temp_a3 == 0) {
            var_t0 = (temp_a3 + 1) & 0xFF;
        }
        temp_a1_2 = &gSeqPlayers[var_s5];
        if (((u32) temp_a1_2->unk0 >> 0x1F) != 0) {
            temp_t2_2 = ((u32) (temp_a1 & 0xF000) >> 0xC) & 0xFF;
            temp_lo = (s32) temp_a1_2->tempo / 48;
            temp_a3_2 = temp_lo & 0xFFFF;
            if (temp_t2_2 != 1) {
                temp_v1 = temp_a0 & 0xFFFF;
                switch (temp_t2_2) {                /* switch 1; irregular */
                    case 2:                         /* switch 1 */
                        if (temp_v1 < temp_a3_2) {
                            var_a2 = (temp_a3_2 - temp_v1) & 0xFFFF;
                        }
                        break;
                    case 3:                         /* switch 1 */
                        var_ft4 = (f32) temp_a3_2;
                        if (temp_a3_2 < 0) {
                            var_ft4 += 4294967296.0f;
                        }
                        var_a2 = (u32) (var_ft4 * ((f32) (temp_a0 & 0xFFFF) / 100.0f)) & 0xFFFF;
                        break;
                    case 4:                         /* switch 1 */
                        temp_v0_3 = temp_s3->tempoOriginal;
                        var_a2 = temp_a3_2 & 0xFFFF;
                        if (temp_v0_3 != 0) {
                            var_a2 = temp_v0_3 & 0xFFFF;
                        }
                        break;
                }
            } else {
                var_a2 = (temp_a0 + temp_a3_2) & 0xFFFF;
            }
            temp_fv1 = (f32) temp_lo;
            if (var_a2 >= 0x12D) {
                var_a2 = 0x12C;
            }
            if (temp_s3->tempoOriginal == 0) {
                temp_s3->tempoOriginal = (u16) temp_a3_2;
            }
            var_fv0_2 = (f32) var_a2;
            if (var_a2 < 0) {
                var_fv0_2 += 4294967296.0f;
            }
            temp_s3->tempoTarget = var_fv0_2;
            temp_s3->tempoCur = temp_fv1;
            var_ft2 = (f32) var_t0;
            if (var_t0 < 0) {
                var_ft2 += 4294967296.0f;
            }
            temp_s3->tempoTimer = (u16) var_t0;
            temp_s3->tempoCmd = 0;
            temp_s3->tempoStep = (temp_fv1 - var_fv0_2) / var_ft2;
        }
    }
    temp_v0_4 = temp_s3->tempoTimer;
    temp_t8 = temp_v0_4 - 1;
    if (temp_v0_4 != 0) {
        temp_s3->tempoTimer = temp_t8;
        if (temp_t8 & 0xFFFF) {
            temp_s3->tempoCur -= temp_s3->tempoStep;
        } else {
            temp_s3->tempoCur = temp_s3->tempoTarget;
        }
        func_8001E8CC(((var_s5 & 0xFF) << 0x10) | 0x47000000, (s32) temp_s3->tempoCur);
    }
    if (temp_s3->volChannelFlags != 0) {
        temp_s4 = &gActiveSequences[var_s5];
        var_s0 = 0;
        do {
            temp_v1_2 = temp_s4->channelData[var_s0].volTimer;
            temp_t6 = temp_v1_2 - 1;
            if (temp_v1_2 != 0) {
                temp_s4->channelData[var_s0].volTimer = temp_t6;
                if (temp_t6 & 0xFFFF) {
                    temp_s4->channelData[var_s0].volCur -= temp_s4->channelData[var_s0].volStep;
                } else {
                    temp_s3->channelData[var_s0].volCur = temp_s3->channelData[var_s0].volTarget;
                    temp_s3->volChannelFlags ^= 1 << var_s0;
                }
                func_8001E8A8(((var_s5 & 0xFF) << 0x10) | 0x01000000 | ((var_s0 & 0xFF) << 8), temp_s4->channelData[var_s0].volCur);
            }
            temp_t8_2 = (var_s0 + 1) & 0xFF;
            var_s0 = temp_t8_2;
        } while (temp_t8_2 < 0x10);
    }
    if (temp_s3->freqScaleChannelFlags != 0) {
        temp_s4_2 = &gActiveSequences[var_s5];
        var_s0_2 = 0;
        do {
            temp_v1_3 = temp_s4_2->channelData[var_s0_2].freqScaleTimer;
            temp_t3_2 = temp_v1_3 - 1;
            if (temp_v1_3 != 0) {
                temp_s4_2->channelData[var_s0_2].freqScaleTimer = temp_t3_2;
                if (temp_t3_2 & 0xFFFF) {
                    temp_s4_2->channelData[var_s0_2].freqScaleCur -= temp_s4_2->channelData[var_s0_2].freqScaleStep;
                } else {
                    temp_s3->channelData[var_s0_2].freqScaleCur = temp_s3->channelData[var_s0_2].freqScaleTarget;
                    temp_s3->freqScaleChannelFlags ^= 1 << var_s0_2;
                }
                func_8001E8A8(((var_s5 & 0xFF) << 0x10) | 0x04000000 | ((var_s0_2 & 0xFF) << 8), temp_s4_2->channelData[var_s0_2].freqScaleCur);
            }
            temp_t5_2 = (var_s0_2 + 1) & 0xFF;
            var_s0_2 = temp_t5_2;
        } while (temp_t5_2 < 0x10);
    }
    if (temp_s3->setupCmdNum != 0) {
        if (func_80018470(0xF0000000, 0xF0000000) == 0) {
            temp_s3->setupCmdNum = 0;
            return;
        }
        temp_v0_5 = temp_s3->setupCmdTimer;
        if (temp_v0_5 != 0) {
            temp_s3->setupCmdTimer = temp_v0_5 - 1;
        } else if (((u32) gSeqPlayers[var_s5].unk0 >> 0x1F) == 0) {
            var_s2_2 = 0;
            if ((s32) temp_s3->setupCmdNum > 0) {
                do {
                    temp_v0_6 = gActiveSequences[var_s5].setupCmd[var_s2_2];
                    temp_t8_3 = ((u32) (temp_v0_6 & 0xF00000) >> 0x14) & 0xFF;
                    temp_t4_3 = temp_v0_6 & 0xFF;
                    temp_s1 = ((u32) (temp_v0_6 & 0xF0000) >> 0x10) & 0xFF;
                    temp_a3_3 = ((u32) (temp_v0_6 & 0xFF00) >> 8) & 0xFF;
                    switch (temp_t8_3) {
                        case 0:
                            func_800185A0(temp_s1 & 0xFF, 1, 0x7FU, temp_a3_3);
                            break;
                        case 1:
                            func_800182F4(temp_s3->seqId | 0x30000000 | (var_s5 << 0x18));
                            break;
                        case 2:
                            temp_s0 = &gActiveSequences[temp_s1];
                            func_800182F4(temp_s0->seqId | (temp_s1 << 0x18) | 0x10000);
                            temp_s0->fadeVolUpdate = 1;
                            temp_s0->volScales[1] = 0x7F;
                            break;
                        case 3:
                            func_800182F4((temp_s1 << 0x18) | 0xB0003000 | (temp_a3_3 << 0x10) | temp_t4_3);
                            break;
                        case 4:
                            func_800182F4((temp_s1 << 0x18) | 0xB0004000 | (temp_t4_3 << 0x10));
                            break;
                        case 5:
                            temp_s0_2 = &gActiveSequences[temp_s1];
                            func_800182F4((temp_s0_2->setupFadeTimer << 0x10) | (temp_s1 << 0x18) | (temp_v0_6 & 0xFFFF));
                            func_800185A0(temp_s1 & 0xFF, 1, 0x7FU, 0U);
                            temp_s0_2->setupFadeTimer = 0;
                            break;
                        case 6:
                            temp_s3->setupFadeTimer = temp_a3_3;
                            break;
                    }
                    temp_t4_2 = (var_s2_2 + 1) & 0xFF;
                    var_s2_2 = temp_t4_2;
                } while (temp_t4_2 < (s32) temp_s3->setupCmdNum);
            }
            temp_s3->setupCmdNum = 0;
        }
        goto block_86;
    }
block_86:
    temp_t5_3 = (var_s5 + 1) & 0xFF;
    var_s5 = temp_t5_3;
    if (temp_t5_3 >= 4) {
        return;
    }
    goto loop_1;
}

void func_80018E9C(u32 arg0, u16 arg1) {
    UnkStruct_14B710* temp_v1;
    s32 temp_t7;

    temp_t7 = (arg0 >> 0x1C) & 0xFF;
    temp_v1 = &D_8014B710[temp_t7];
    temp_v1->seqData = arg0;
    temp_v1->timer = arg1;
    D_8014B708 |= 1 << temp_t7;
}

void func_80018EE0(void) {
    UnkStruct_14B710* temp_v0;
    s32 var_s1;
    s32 var_v1;
    u16 temp_v1;
    u16 var_v0;

    var_v0 = D_8014B708;
    var_s1 = 0;
    var_v1 = 1;
    if (var_v0 != 0) {
        do {
            if (var_v0 & var_v1) {
                temp_v0 = &D_8014B710[var_s1];
                temp_v1 = temp_v0->timer;
                if (temp_v1 != 0) {
                    temp_v0->timer = temp_v1 - 1;
                } else {
                    func_800182F4((s32) temp_v0->seqData);
                    D_8014B708 ^= var_v1;
                }
                var_v0 = (var_v0 ^ var_v1) & 0xFFFF;
            }
            var_s1 = (var_s1 + 1) & 0xFF;
            var_v1 = (var_v1 * 2) & 0xFFFF;
        } while (var_v0 != 0);
    }
}

u8 func_80018FA4(void) {
    u8 var_v1;

    var_v1 = D_800C5D58;
    if (var_v1 != 0) {
        if (var_v1 == 1) {
            if (func_8001ED34() == 1) {
                D_800C5D58 = 0;
                func_8001E8F0(0x46020000U, (s8) gSfxChannelLayout);
                func_8001DD40();
            }
            goto block_9;
        }
        if (var_v1 == 2) {
            if (func_8001ED34() != 1) {
                do {

                } while (func_8001ED34() != 1);
            }
            D_800C5D58 = 0;
            func_8001E8F0(0x46020000U, (s8) gSfxChannelLayout);
            func_8001DD40();
block_9:
            var_v1 = D_800C5D58;
        }
    }
    return var_v1;
}

void func_80019068(void) {
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t8;
    s32 var_v0;
    void* temp_v1;

    var_v0 = 0;
    do {
        temp_lo = var_v0 * 0x258;
        gNumSeqRequests[var_v0] = 0;
        temp_t8 = (var_v0 + 1) & 0xFF;
        temp_at = temp_t8 < 4;
        var_v0 = temp_t8;
        temp_v1 = gActiveSequences + temp_lo;
        temp_v1->unk248 = 0xFFFF;
        temp_v1->unk24A = 0xFFFF;
        temp_v1->unk28 = 0;
        temp_v1->unk18 = 0;
        temp_v1->unk14 = 0;
        temp_v1->unk24C = 0;
        temp_v1->unk41 = 0;
        temp_v1->unk42 = 0;
        temp_v1->unk244 = 0;
        temp_v1->unk246 = 0;
        temp_v1->unk10 = 0x7F;
    } while (temp_at != 0);
}

void func_800190E4(void) {
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t7;
    s32 var_a0;
    void* temp_v0;

    var_a0 = 0;
    do {
        temp_lo = var_a0 * 0x258;
        temp_t7 = (var_a0 + 1) & 0xFF;
        temp_at = temp_t7 < 4;
        var_a0 = temp_t7;
        temp_v0 = gActiveSequences + temp_lo;
        temp_v0->unk0 = 1.0f;
        temp_v0->unkC = 0;
        temp_v0->unk12 = 0;
        gActiveSequences->volScales[temp_lo] = 0x7F;
        temp_v0->unkF = 0x7F;
        temp_v0->unk10 = 0x7F;
    } while (temp_at != 0);
    func_80019068(var_a0, gActiveSequences, 0x258);
}

void func_80019158(u16 muteFlags) {
    s32 temp_at;
    s32 temp_t1;
    s32 var_a0;
    s32 var_v0;

    var_a0 = muteFlags & 0xFFFF;
    var_v0 = 0;
    do {
        if (var_a0 & 1) {
            gSfxBankMuted[var_v0] = 1;
        } else {
            gSfxBankMuted[var_v0] = 0;
        }
        temp_t1 = (var_v0 + 1) & 0xFF;
        temp_at = temp_t1 < 5;
        var_v0 = temp_t1;
        var_a0 = (var_a0 >> 1) & 0xFFFF;
    } while (temp_at != 0);
}

void func_800191BC(u8 channelIndex) {
    u16 temp_t1;

    temp_t1 = D_800C5D24 & ((1 << (channelIndex & 0xFF)) ^ 0xFFFF);
    D_800C5D24 = temp_t1;
    if (!(temp_t1 & 0xFFFF)) {
        func_800185A0(0, 2, 0x7FU, 0xFU);
    }
}

void Audio_PlaySfx(u32 sfxId, f32* sfxPos, u8 token, f32* fresScale, f32* volScale, s8* reverbAdd) {
    SfxRequest* temp_v0;

    if (gSfxBankMuted[(sfxId >> 0x1C) & 0xFF] == 0) {
        temp_v0 = &gSfxRequests[gSfxRequestWriteIndex];
        temp_v0->sfxId = sfxId;
        temp_v0->pos = sfxPos;
        temp_v0->token = token & 0xFF;
        temp_v0->freqScale = fresScale;
        temp_v0->vol = volScale;
        temp_v0->reverbAdd = reverbAdd;
        gSfxRequestWriteIndex += 1;
    }
}

void func_80019290(u8 aspect, SfxBankEntry* data) {
    SfxRequest* temp_a1;
    SfxRequest* temp_a1_2;
    SfxRequest* temp_a1_3;
    s32 var_a0;
    u32 temp_t6;
    u8 temp_t6_2;
    u8 var_v0;

    var_v0 = gSfxRequestReadIndex;
    temp_t6 = aspect & 0xFF;
    if (gSfxRequestWriteIndex != var_v0) {
        do {
            var_a0 = 0;
            switch (temp_t6) {
                case 0:
                    if ((data->sfxId & 0xF0000000) == (gSfxRequests[var_v0].sfxId & 0xF0000000)) {
block_18:
                        var_a0 = 1;
                    }
                    break;
                case 1:
                    temp_a1 = &gSfxRequests[var_v0];
                    if (((data->sfxId & 0xF0000000) == (temp_a1->sfxId & 0xF0000000)) && (data->xPos == temp_a1->pos)) {
                        goto block_18;
                    }
                    break;
                case 2:
                    if (data->xPos == gSfxRequests[var_v0].pos) {
                        goto block_18;
                    }
                    break;
                case 3:
                    temp_a1_2 = &gSfxRequests[var_v0];
                    if ((data->xPos == temp_a1_2->pos) && (data->sfxId == temp_a1_2->sfxId)) {
                        goto block_18;
                    }
                    break;
                case 4:
                    temp_a1_3 = &gSfxRequests[var_v0];
                    if ((data->token == temp_a1_3->token) && (data->sfxId == temp_a1_3->sfxId)) {
                        goto block_18;
                    }
                    break;
                case 5:
                    if (data->sfxId == gSfxRequests[var_v0].sfxId) {
                        goto block_18;
                    }
                    break;
            }
            if (var_a0 != 0) {
                gSfxRequests[var_v0].sfxId = 0;
            }
            temp_t6_2 = (var_v0 + 1) & 0xFF;
            var_v0 = temp_t6_2;
        } while (gSfxRequestWriteIndex != temp_t6_2);
    }
}

void func_80019434(void) {
    u8 sp4B;
    u32 sp44;
    SfxBankEntry* temp_a3;
    SfxBankEntry* temp_s0;
    SfxBankEntry* temp_s0_2;
    SfxBankEntry* temp_s0_3;
    SfxBankEntry* temp_s3;
    SfxBankEntry* temp_s3_2;
    SfxRequest* temp_s1;
    s32 temp_t1;
    s32 var_s2;
    s32 var_v0_2;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_v0;
    u32 var_s5;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1_3;
    u8 temp_t4;
    u8 var_s4;
    u8 var_v0;
    u8 var_v1;
    u8* temp_a2;
    u8* temp_v0_2;

    temp_s1 = &gSfxRequests[gSfxRequestReadIndex];
    temp_a1 = temp_s1->sfxId;
    if (temp_a1 != 0) {
        temp_t1 = ((u32) (temp_a1 & 0xF0000000) >> 0x1C) & 0xFF;
        var_v1 = gSfxBanks[temp_t1]->next;
        var_s2 = 0;
        var_v0 = var_v1;
        if ((var_v1 != 0xFF) && (var_v1 != 0)) {
            temp_s3 = gSfxBanks[temp_t1];
            var_s5 = sp44;
            var_s4 = sp4B;
loop_4:
            temp_s0 = &temp_s3[var_v1];
            if (temp_s1->pos == temp_s0->xPos) {
                temp_a1_2 = temp_s1->sfxId;
                temp_v0 = temp_s0->sfxId;
                temp_a0 = (*gUsedChannelsPerBank)[(gSfxChannelLayout * 5) + temp_t1];
                if (temp_a1_2 == temp_v0) {
                    var_s2 = temp_a0 & 0xFF;
                    var_v0_2 = var_s2;
                } else {
                    if (var_s2 == 0) {
                        var_s4 = var_v1 & 0xFF;
                        goto block_11;
                    }
                    if ((u32) (temp_v0 & 0xFF00) < (u32) (var_s5 & 0xFF00)) {
                        var_s4 = var_v1 & 0xFF;
block_11:
                        var_s5 = temp_v0;
                    }
                    var_v0_2 = (var_s2 + 1) & 0xFF;
                    var_s2 = var_v0_2;
                    if (var_v0_2 == temp_a0) {
                        var_v1 = 0;
                        if ((u32) (temp_a1_2 & 0xFF00) >= (u32) (var_s5 & 0xFF00)) {
                            var_v1 = var_s4 & 0xFF;
                        }
                    }
                }
                if (var_v0_2 == temp_a0) {
                    if ((temp_a1_2 & 0x08000000) || (temp_a1_2 & 0x40000) || (var_s4 == var_v1)) {
                        temp_s0_2 = &temp_s3[var_v1];
                        if ((temp_s0_2->sfxId & 0x80000) && (temp_s0_2->state != 1)) {
                            func_800191BC(temp_s0_2->channelIndex);
                        }
                        temp_s0_2->token = temp_s1->token;
                        temp_s0_2->sfxId = temp_s1->sfxId;
                        temp_s0_2->freshness = 2;
                        temp_s0_2->state = (u8) ((u32) (temp_s1->sfxId & 0x01000000) >> 0x18);
                        temp_s0_2->freqScale = temp_s1->freqScale;
                        temp_s0_2->volScale = temp_s1->vol;
                        temp_s0_2->reverbAdd = temp_s1->reverbAdd;
                    }
                    var_v1 = 0;
                }
            }
            var_v0 = var_v1;
            if (var_v1 != 0) {
                var_v1 = temp_s3[var_v1].next;
                var_v0 = var_v1;
            }
            if (var_v0 != 0xFF) {
                if (var_v0 == 0) {
                    sp44 = var_s5;
                    sp4B = var_s4;
                } else {
                    goto loop_4;
                }
            }
        }
        temp_a2 = &gSfxBankFreeListStart[temp_t1];
        temp_a1_3 = *temp_a2;
        temp_s3_2 = gSfxBanks[temp_t1];
        temp_a3 = &temp_s3_2[temp_a1_3];
        if ((temp_a3->next != 0xFF) && (var_v0 != 0)) {
            temp_s0_3 = &temp_s3_2[temp_a1_3 & 0xFF];
            temp_s0_3->xPos = temp_s1->pos;
            temp_s0_3->yPos = &temp_s1->pos[1];
            temp_s0_3->zPos = &temp_s1->pos[2];
            temp_s0_3->token = temp_s1->token;
            temp_s0_3->freqScale = temp_s1->freqScale;
            temp_v0_2 = &gSfxBankListEnd[temp_t1];
            temp_a0_2 = *temp_v0_2;
            temp_s0_3->volScale = temp_s1->vol;
            temp_s0_3->reverbAdd = temp_s1->reverbAdd;
            temp_s0_3->sfxId = temp_s1->sfxId;
            temp_s0_3->freshness = 2;
            temp_s0_3->prev = temp_a0_2;
            temp_s0_3->state = (u8) ((u32) (temp_s1->sfxId & 0x01000000) >> 0x18);
            temp_s3_2[temp_a0_2].next = temp_a1_3;
            temp_t4 = temp_a3->next;
            *temp_v0_2 = temp_a1_3;
            *temp_a2 = temp_t4;
            temp_s3_2[temp_t4 & 0xFF].prev = 0xFF;
            temp_s0_3->next = 0xFF;
        }
    }
}

void func_800197AC(u8 bankId, u8 arg1) {
    SfxBankEntry* sp1C;
    SfxBankEntry* sp18;
    SfxBankEntry* temp_a2;
    SfxBankEntry* temp_v1;
    u8 temp_t6;
    u8 var_a1;
    u8 var_a3;
    u8* temp_v0;
    u8* temp_v0_2;

    temp_t6 = arg1 & 0xFF;
    var_a3 = bankId & 0xFF;
    temp_a2 = gSfxBanks[var_a3];
    temp_v1 = &temp_a2[temp_t6];
    var_a1 = temp_t6;
    if (temp_v1->sfxId & 0x80000) {
        sp18 = temp_v1;
        arg1 = temp_t6;
        sp1C = temp_a2;
        bankId = var_a3;
        func_800191BC(temp_v1->channelIndex);
        var_a1 = arg1;
        var_a3 = bankId;
    }
    temp_v0 = &gSfxBankListEnd[var_a3];
    if (var_a1 == *temp_v0) {
        *temp_v0 = temp_v1->prev;
    } else {
        temp_a2[temp_v1->next].prev = temp_v1->prev;
    }
    temp_v0_2 = &gSfxBankFreeListStart[var_a3];
    temp_a2[temp_v1->prev].next = temp_v1->next;
    temp_v1->prev = 0xFF;
    temp_v1->next = *temp_v0_2;
    temp_a2[*temp_v0_2].prev = var_a1;
    *temp_v0_2 = var_a1;
    temp_v1->state = 0;
}

void func_800198C0(u8 bankId) {
    u8 spBE;
    u8 spBC;
    ? sp6C;
    ActiveSfx* sp5C;
    SfxBankEntry* sp58;
    SfxBankEntry* sp54;
    s32 sp4C;
    ActiveSfx* temp_s3;
    ActiveSfx* var_a2;
    SfxBankEntry* temp_a0_2;
    SfxBankEntry* temp_t2;
    SfxBankEntry* temp_v0_7;
    SfxBankEntry* var_ra;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fv1;
    f32* temp_v0;
    s32 temp_a2;
    s32 temp_at;
    s32 temp_s5;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t7_4;
    s32 temp_t7_5;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_t2;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t3_3;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_t7_3;
    u32 temp_v0_2;
    u8 temp_a1;
    u8 temp_a3_3;
    u8 temp_a3_4;
    u8 temp_t4;
    u8 temp_v1;
    u8 var_s3;
    u8 var_t0;
    u8 var_t1;
    void* temp_a0;
    void* temp_a0_3;
    void* temp_a0_4;
    void* temp_a3;
    void* temp_a3_2;
    void* temp_v0_6;

    temp_s5 = bankId & 0xFF;
    var_s2 = 0;
    var_t3 = 0;
    do {
        temp_t7 = (var_t3 + 1) & 0xFF;
        temp_at = temp_t7 < 8;
        temp_a3 = &sp6C + (var_t3 * 8);
        var_t3 = temp_t7;
        temp_a3->unk0 = 0x7FFFFFFF;
        temp_a3->unk4 = 0xFF;
    } while (temp_at != 0);
    var_s3 = gSfxBanks[temp_s5]->next;
    var_s0 = 0;
    if (var_s3 != 0xFF) {
        var_ra = gSfxBanks[temp_s5];
        do {
            temp_t2 = &var_ra[var_s3];
            if ((temp_t2->state == 1) && ((temp_t2->sfxId & 0x08000000) == 0x08000000)) {
                temp_t2->freshness -= 1;
            }
            if (temp_t2->freshness == 0) {
                sp58 = var_ra;
                func_800197AC(temp_s5 & 0xFF, var_s3 & 0xFF);
            } else if (temp_t2->state != 0) {
                temp_v0 = temp_t2->xPos;
                if (gDefaultSfxPos == temp_v0) {
                    temp_t2->distance = 0.0f;
                } else {
                    temp_fa0 = *temp_v0;
                    temp_fv0 = *temp_t2->yPos / 2.5f;
                    temp_fv1 = *temp_t2->zPos;
                    temp_t2->distance = (temp_fv1 * temp_fv1) + ((temp_fa0 * temp_fa0) + (temp_fv0 * temp_fv0));
                }
                temp_v0_2 = temp_t2->sfxId;
                temp_t7_2 = ((u32) (temp_v0_2 & 0xFF00) >> 8) & 0xFF;
                if (temp_v0_2 & 0x100000) {
                    temp_v0_3 = 0xFF - temp_t7_2;
                    temp_t2->priority = temp_v0_3 * temp_v0_3 * 0x1690;
                } else {
                    temp_v0_4 = 0xFF - temp_t7_2;
                    temp_t7_3 = (u32) temp_t2->distance + (temp_v0_4 * temp_v0_4 * 0x1690);
                    temp_t2->priority = temp_t7_3;
                    temp_fv1_2 = *temp_t2->zPos;
                    if (temp_fv1_2 > 0.0f) {
                        temp_t2->priority = temp_t7_3 + (s32) (temp_fv1_2 * 6.0f);
                    }
                }
                temp_t7_4 = ((u32) (temp_t2->sfxId & 0x30000) >> 0x10) & 0xFF;
                if (temp_t7_4 != 0) {
                    var_fv1 = 1.089e9f / (f32) (temp_t7_4 * temp_t7_4);
                } else {
                    var_fv1 = 1e10f;
                }
                if (var_fv1 < temp_t2->distance) {
                    if (temp_t2->state == 4) {
                        sp58 = var_ra;
                        sp54 = temp_t2;
                        func_8001E8F0((temp_t2->channelIndex << 8) | 0x06020000, 0);
                        if (temp_t2->sfxId & 0x08000000) {
                            sp58 = var_ra;
                            func_800197AC(temp_s5 & 0xFF, var_s3 & 0xFF);
                            var_s3 = var_s0 & 0xFF;
                        }
                    }
                } else {
                    var_t3_2 = 0;
                    temp_t4 = (*gChannelsPerBank)[(gSfxChannelLayout * 5) + temp_s5];
                    if ((s32) temp_t4 > 0) {
                        do {
                            temp_a3_2 = &sp6C + (var_t3_2 * 8);
                            temp_v0_5 = temp_t4 - 1;
                            var_a1 = temp_v0_5 & 0xFF;
                            temp_a2 = var_t3_2;
                            if ((u32) temp_a3_2->unk0 >= (u32) temp_t2->priority) {
                                if (var_s2 < (s32) temp_t4) {
                                    var_s2 = (var_s2 + 1) & 0xFF;
                                }
                                var_t3_2 = temp_t4 & 0xFF;
                                if (temp_a2 < (temp_v0_5 & 0xFF)) {
                                    var_v1 = var_a1;
                                    do {
                                        temp_v0_6 = &sp6C + (var_v1 * 8);
                                        temp_a0 = &sp6C + (var_a1 * 8);
                                        temp_a0->unk0 = (s32) temp_v0_6->unk-8;
                                        var_v1 = (var_a1 - 1) & 0xFF;
                                        var_a1 = var_v1;
                                        temp_a0->unk4 = (u8) temp_v0_6->unk-4;
                                    } while (temp_a2 < var_v1);
                                }
                                temp_a3_2->unk0 = temp_t2->priority;
                                temp_a3_2->unk4 = var_s3;
                            }
                            temp_t8 = (var_t3_2 + 1) & 0xFF;
                            var_t3_2 = temp_t8;
                        } while (temp_t8 < (s32) temp_t4);
                    }
                }
                var_s0 = var_s3 & 0xFF;
            }
            var_s3 = var_ra[var_s0].next;
        } while (var_s3 != 0xFF);
    }
    var_t1 = (*gChannelsPerBank)[(gSfxChannelLayout * 5) + temp_s5];
    var_t3_3 = 0;
    if (var_s2 > 0) {
        do {
            temp_t6 = (var_t3_3 + 1) & 0xFF;
            temp_v0_7 = &gSfxBanks[temp_s5][(&sp6C + (var_t3_3 * 8))->unk4];
            temp_v1 = temp_v0_7->state;
            if (temp_v1 == 1) {
                temp_v0_7->state = 2;
            } else if (temp_v1 == 4) {
                temp_v0_7->state = 3;
            }
            var_t3_3 = temp_t6;
        } while (temp_t6 < var_s2);
        var_t3_3 = 0;
    }
    var_t0 = var_t1;
    if ((s32) var_t1 > 0) {
        var_a2 = gActiveSfx[temp_s5];
        do {
            temp_s3 = &var_a2[var_t3_3];
            temp_a1 = temp_s3->entryIndex;
            var_v1_2 = 0;
            if (temp_a1 == 0xFF) {
                var_v1_2 = 1;
            } else {
                temp_a0_2 = &gSfxBanks[temp_s5][temp_a1];
                temp_a3_3 = temp_a0_2->state;
                if (temp_a3_3 == 4) {
                    if (temp_a0_2->sfxId & 0x08000000) {
                        sp5C = var_a2;
                        sp4C = (s32) var_t0;
                        spBE = var_t1;
                        spBC = (u8) var_t3_3;
                        func_800197AC(temp_s5 & 0xFF, temp_a1);
                        var_v1_2 = 1;
                    } else {
                        temp_a0_2->state = 1;
                        var_v1_2 = 1;
                    }
                } else if (temp_a3_3 == 0) {
                    temp_s3->entryIndex = 0xFF;
                    var_v1_2 = 1;
                } else {
                    var_a1_2 = 0;
                    if ((s32) var_t0 > 0) {
                        do {
                            temp_a0_3 = &sp6C + (var_a1_2 * 8);
                            if (temp_a1 == temp_a0_3->unk4) {
                                temp_a0_3->unk4 = 0xFFU;
                                var_a1_2 = var_t1 & 0xFF;
                            }
                            temp_t6_2 = (var_a1_2 + 1) & 0xFF;
                            var_a1_2 = temp_t6_2;
                        } while (temp_t6_2 < (s32) var_t0);
                    }
                }
            }
            var_t2 = var_v1_2;
            if (var_v1_2 == 1) {
                var_a1_3 = 0;
                if ((s32) var_t0 > 0) {
                    do {
                        temp_a0_4 = &sp6C + (var_a1_3 * 8);
                        temp_a3_4 = temp_a0_4->unk4;
                        if ((temp_a3_4 != 0xFF) && (gSfxBanks[temp_s5][temp_a3_4].state != 3)) {
                            var_s0_2 = 0;
                            if ((s32) var_t0 > 0) {
                                do {
                                    if (temp_a3_4 == var_a2[var_s0_2].entryIndex) {
                                        var_v1_2 = 0;
                                        var_s0_2 = var_t1 & 0xFF;
                                    }
                                    temp_t9_2 = (var_s0_2 + 1) & 0xFF;
                                    var_s0_2 = temp_t9_2;
                                } while (temp_t9_2 < (s32) var_t0);
                                var_t2 = var_v1_2;
                            }
                            if (var_t2 == 1) {
                                temp_s3->entryIndex = temp_a3_4;
                                temp_a0_4->unk4 = 0xFFU;
                                var_a1_3 = (var_t0 + 1) & 0xFF;
                            }
                        }
                        temp_t7_5 = (var_a1_3 + 1) & 0xFF;
                        var_a1_3 = temp_t7_5;
                    } while (temp_t7_5 < (s32) var_t0);
                }
                if (var_t0 == var_a1_3) {
                    temp_s3->entryIndex = 0xFF;
                }
            }
            temp_t9 = (var_t3_3 + 1) & 0xFF;
            var_t3_3 = temp_t9;
        } while (temp_t9 < (s32) var_t0);
    }
}

void func_8001A01C(u8 bankId) {
    ActiveSfx* sp40;
    s32 temp_at;
    s32 temp_s3;
    s32 temp_t3;
    s32 var_s4;
    u8 temp_s1;
    u8 temp_v0;
    u8 var_v1;
    u8* var_v1_2;
    void* temp_s0;

    temp_s3 = bankId & 0xFF;
    var_v1 = (*gChannelsPerBank)[(gSfxChannelLayout * 5) + temp_s3];
    var_s4 = 0;
    if ((s32) var_v1 > 0) {
        sp40 = gActiveSfx[temp_s3];
        do {
            temp_s1 = sp40[var_s4].entryIndex;
            if (temp_s1 != 0xFF) {
                temp_s0 = (temp_s3 * 0x3C0) + (temp_s1 * 0x30) + gSfxBanks;
                temp_v0 = temp_s0->unk28;
                if (temp_v0 == 2) {
                    temp_s0->unk2C = (u8) gCurSfxPlayerChannelIndex;
                    if (temp_s0->unk24 & 0x80000) {
                        D_800C5D24 |= 1 << gCurSfxPlayerChannelIndex;
                        func_800185A0(0, 2, 0x40U, 0xFU);
                    }
                    func_80016FF0(temp_s3 & 0xFF, temp_s1 & 0xFF, gCurSfxPlayerChannelIndex);
                    func_8001E8F0((gCurSfxPlayerChannelIndex << 8) | 0x06020000, 1);
                    func_8001E8F0((gCurSfxPlayerChannelIndex << 8) | 0x06020000 | 4, (s8) temp_s0->unk24);
                    temp_s0->unk28 = 4U;
                    var_v1_2 = &(*gChannelsPerBank)[(gSfxChannelLayout * 5) + temp_s3];
                    goto block_11;
                }
                if ((u8) gSeqPlayers[2].channels[gCurSfxPlayerChannelIndex]->seqScriptIO[7] == 0x80) {
                    func_8001E8F0(((gCurSfxPlayerChannelIndex & 0xFF) << 8) | 0x06020000 | 7, 0);
                    func_800197AC(temp_s3 & 0xFF, temp_s1 & 0xFF);
                    var_v1_2 = &(*gChannelsPerBank)[(gSfxChannelLayout * 5) + temp_s3];
                    goto block_11;
                }
                if (temp_v0 == 3) {
                    func_80016FF0(temp_s3 & 0xFF, temp_s1 & 0xFF, gCurSfxPlayerChannelIndex);
                    temp_s0->unk28 = 4U;
                    var_v1_2 = &(*gChannelsPerBank)[(gSfxChannelLayout * 5) + temp_s3];
block_11:
                    var_v1 = *var_v1_2;
                }
            }
            temp_t3 = (var_s4 + 1) & 0xFF;
            temp_at = temp_t3 < (s32) var_v1;
            var_s4 = temp_t3;
            gCurSfxPlayerChannelIndex += 1;
        } while (temp_at != 0);
    }
}

void func_8001A290(u8 bankId) {
    SfxBankEntry sp48;
    SfxBankEntry* temp_s0;
    SfxBankEntry* temp_s2;
    s32 temp_s7;

    temp_s7 = bankId & 0xFF;
    temp_s2 = gSfxBanks[temp_s7];
    if (temp_s2->next != 0xFF) {
        do {
            temp_s0 = &gSfxBanks[temp_s7][temp_s2->next];
            if ((s32) temp_s0->state >= 3) {
                func_8001E8F0((temp_s0->channelIndex << 8) | 0x06020000, 0);
            }
            if (temp_s0->state != 0) {
                func_800197AC(temp_s7 & 0xFF, temp_s2->next & 0xFF);
            }
        } while (temp_s2->next != 0xFF);
    }
    sp48.sfxId = temp_s7 << 0x1C;
    func_80019290(0U, &sp48);
}

void func_8001A38C(u8 bankId, f32* sfxPos) {
    SfxBankEntry* temp_s0;
    SfxBankEntry* temp_s3;
    s32 temp_s5;
    s32 var_s2;
    u8 var_s1;

    temp_s5 = bankId & 0xFF;
    var_s1 = gSfxBanks[temp_s5]->next;
    var_s2 = 0;
    if (var_s1 != 0xFF) {
        temp_s3 = gSfxBanks[temp_s5];
        do {
            temp_s0 = &temp_s3[var_s1];
            if (sfxPos == temp_s0->xPos) {
                if ((s32) temp_s0->state >= 3) {
                    func_8001E8F0((temp_s0->channelIndex << 8) | 0x06020000, 0);
                }
                if (temp_s0->state != 0) {
                    func_800197AC(temp_s5 & 0xFF, var_s1 & 0xFF);
                }
                var_s1 = temp_s3[var_s2].next;
            } else {
                var_s2 = var_s1 & 0xFF;
                var_s1 = temp_s3[var_s2].next;
            }
        } while (var_s1 != 0xFF);
    }
}

void func_8001A4B8(u8 bankId, f32* sfxPos) {
    s32 sp3C;
    f32* sp18;

    func_8001A38C(bankId, sfxPos);
    sp3C = bankId << 0x1C;
    sp18 = sfxPos;
    func_80019290(1U, (SfxBankEntry* ) &sp18);
}

void Audio_KillSfx(f32* sfxPos) {
    f32* sp24;
    s32 temp_t6;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8001A38C(var_s0 & 0xFF, sfxPos);
        temp_t6 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t6;
    } while (temp_t6 < 5);
    sp24 = sfxPos;
    func_80019290(2U, (SfxBankEntry* ) &sp24);
}

void func_8001A55C(f32* sfxPos, u32 sfxId) {
    u32 sp74;
    f32* sp50;
    SfxBankEntry* temp_s0;
    SfxBankEntry* temp_s4;
    s32 temp_t7;
    s32 var_s3;
    u8 var_s1;
    u8 var_v0;

    temp_t7 = ((u32) (sfxId & 0xF0000000) >> 0x1C) & 0xFF;
    var_s1 = gSfxBanks[temp_t7]->next;
    var_s3 = 0;
    var_v0 = var_s1;
    if (var_s1 != 0xFF) {
        temp_s4 = gSfxBanks[temp_t7];
        do {
            temp_s0 = &temp_s4[var_s1];
            if ((sfxPos == temp_s0->xPos) && (sfxId == temp_s0->sfxId)) {
                if ((s32) temp_s0->state >= 3) {
                    func_8001E8F0((temp_s0->channelIndex << 8) | 0x06020000, 0);
                }
                if (temp_s0->state != 0) {
                    func_800197AC(temp_t7 & 0xFF, var_s1 & 0xFF);
                }
                var_s1 = 0xFF;
                var_v0 = 0xFF;
            } else {
                var_s3 = var_s1 & 0xFF;
            }
            if (var_v0 != 0xFF) {
                var_s1 = temp_s4[var_s3].next;
                var_v0 = var_s1;
            }
        } while (var_v0 != 0xFF);
    }
    sp74 = sfxId;
    sp50 = sfxPos;
    func_80019290(3U, (SfxBankEntry* ) &sp50);
}

void func_8001A6C4(u8 token, u32 sfxId) {
    SfxBankEntry sp58;
    s32 sp4C;
    SfxBankEntry* temp_s0;
    SfxBankEntry* temp_s5;
    s32 temp_t8;
    s32 var_s4;
    u8 var_s1;
    u8 var_s2;

    temp_t8 = ((u32) (sfxId & 0xF0000000) >> 0x1C) & 0xFF;
    var_s1 = gSfxBanks[temp_t8]->next;
    var_s4 = 0;
    var_s2 = var_s1;
    if (var_s1 != 0xFF) {
        temp_s5 = gSfxBanks[temp_t8];
        sp4C = (s32) token;
        do {
            temp_s0 = &temp_s5[var_s1];
            if ((sp4C == temp_s0->token) && (sfxId == temp_s0->sfxId)) {
                if ((s32) temp_s0->state >= 3) {
                    func_8001E8F0((temp_s0->channelIndex << 8) | 0x06020000, 0);
                }
                if (temp_s0->state != 0) {
                    func_800197AC(temp_t8 & 0xFF, var_s1 & 0xFF);
                }
            } else {
                var_s4 = var_s1 & 0xFF;
            }
            if (var_s2 != 0xFF) {
                var_s1 = temp_s5[var_s4].next;
                var_s2 = var_s1;
            }
        } while (var_s2 != 0xFF);
    }
    sp58.token = token;
    sp58.sfxId = sfxId;
    func_80019290(4U, &sp58);
}

void func_8001A838(u32 sfxId) {
    SfxBankEntry sp58;
    SfxBankEntry* temp_s0;
    SfxBankEntry* temp_s3;
    s32 temp_t8;
    s32 var_s2;
    u8 var_s1;

    temp_t8 = ((u32) (sfxId & 0xF0000000) >> 0x1C) & 0xFF;
    var_s1 = gSfxBanks[temp_t8]->next;
    var_s2 = 0;
    if (var_s1 != 0xFF) {
        temp_s3 = gSfxBanks[temp_t8];
        do {
            temp_s0 = &temp_s3[var_s1];
            if (sfxId == temp_s0->sfxId) {
                if ((s32) temp_s0->state >= 3) {
                    func_8001E8F0((temp_s0->channelIndex << 8) | 0x06020000, 0);
                }
                if (temp_s0->state != 0) {
                    func_800197AC(temp_t8 & 0xFF, var_s1 & 0xFF);
                }
                var_s1 = temp_s3[var_s2].next;
            } else {
                var_s2 = var_s1 & 0xFF;
                var_s1 = temp_s3[var_s2].next;
            }
        } while (var_s1 != 0xFF);
    }
    sp58.sfxId = sfxId;
    func_80019290(5U, &sp58);
}

void func_8001A988(void) {
    u8 temp_t9;

    if (gSfxRequestReadIndex != gSfxRequestWriteIndex) {
        do {
            func_80019434();
            temp_t9 = gSfxRequestReadIndex + 1;
            gSfxRequestReadIndex = temp_t9;
        } while ((temp_t9 & 0xFF) != gSfxRequestWriteIndex);
    }
}

void func_8001A9EC(u8 bankId, u8 target, u16 timer) {
    VolumeLerp* temp_v0;
    f32 temp_fv0;
    f32 var_ft2;
    u16 temp_t8;
    u16 var_a2;

    temp_t8 = timer & 0xFFFF;
    var_a2 = temp_t8;
    if (temp_t8 == 0) {
        var_a2 = (temp_t8 + 1) & 0xFFFF;
    }
    temp_v0 = &gSfxVolumeLerp[bankId & 0xFF];
    temp_fv0 = (f32) (target & 0xFF) / 127.0f;
    temp_v0->timer = var_a2;
    var_ft2 = (f32) var_a2;
    temp_v0->target = temp_fv0;
    if ((s32) var_a2 < 0) {
        var_ft2 += 4294967296.0f;
    }
    temp_v0->step = (temp_v0->volume - temp_fv0) / var_ft2;
}

void func_8001AA90(u8 bankId) {
    VolumeLerp* temp_v0;
    u16 temp_t9;
    u16 temp_v1;

    temp_v0 = &gSfxVolumeLerp[bankId & 0xFF];
    temp_v1 = temp_v0->timer;
    temp_t9 = temp_v1 - 1;
    if (temp_v1 != 0) {
        temp_v0->timer = temp_t9;
        if (temp_t9 & 0xFFFF) {
            temp_v0->volume -= temp_v0->step;
            return;
        }
        temp_v0->volume = temp_v0->target;
    }
}

void func_8001AAE4(void) {
    s32 temp_t8;
    s32 var_s0;

    if (&gSeqChannelNone != gSeqPlayers[2].channels[0]) {
        gCurSfxPlayerChannelIndex = 0;
        var_s0 = 0;
        do {
            func_800198C0(var_s0 & 0xFF);
            func_8001A01C(var_s0 & 0xFF);
            func_8001AA90(var_s0 & 0xFF);
            temp_t8 = (var_s0 + 1) & 0xFF;
            var_s0 = temp_t8;
        } while (temp_t8 < 5);
    }
}

void func_8001AB50(void) {
    ActiveSfx* temp_t8;
    SfxBankEntry* temp_a1;
    SfxBankEntry* temp_a1_3;
    SfxBankEntry* temp_a2;
    VolumeLerp* temp_v1;
    s32 temp_at;
    s32 temp_at_2;
    s32 temp_at_3;
    s32 temp_lo;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_t7;
    s8 temp_t8_2;
    void* temp_a1_2;

    gSfxRequestWriteIndex = 0;
    gSfxRequestReadIndex = 0;
    D_800C5D24 = 0;
    var_v0 = 0;
    do {
        gSfxBankListEnd[var_v0] = 0;
        gSfxBankFreeListStart[var_v0] = 1;
        temp_t4 = (var_v0 + 1) & 0xFF;
        gSfxBankUnused[var_v0] = 0;
        temp_at = temp_t4 < 5;
        gSfxBankMuted[var_v0] = 0;
        temp_v1 = &gSfxVolumeLerp[var_v0];
        var_v0 = temp_t4;
        temp_v1->volume = 1.0f;
        temp_v1->timer = 0;
    } while (temp_at != 0);
    var_v0_2 = 0;
    do {
        var_v1 = 0;
loop_4:
        temp_t9 = (var_v1 + 1) & 0xFF;
        temp_at_2 = temp_t9 < 8;
        temp_t8 = &gActiveSfx[var_v0_2][var_v1];
        var_v1 = temp_t9;
        temp_t8->entryIndex = 0xFF;
        if (temp_at_2 != 0) {
            goto loop_4;
        }
        temp_t3 = (var_v0_2 + 1) & 0xFF;
        var_v0_2 = temp_t3;
    } while (temp_t3 < 5);
    var_v0_3 = 0;
    do {
        temp_a2 = gSfxBanks[var_v0_3];
        var_v1_2 = 1;
        var_a0 = 1;
        temp_a1 = gSfxBanks[var_v0_3];
        temp_a1->prev = 0xFF;
        temp_a1->next = 0xFF;
loop_8:
        temp_lo = var_v1_2 * 0x30;
        temp_t9_2 = (var_v1_2 + 1) & 0xFF;
        temp_t7 = var_a0 - 1;
        temp_t8_2 = var_a0 + 1;
        var_a0 = temp_t9_2;
        var_v1_2 = temp_t9_2;
        temp_a1_2 = temp_a2 + temp_lo;
        temp_a1_2->unk2A = temp_t7;
        temp_a1_2->unk2B = temp_t8_2;
        if (temp_t9_2 < 0x13) {
            goto loop_8;
        }
        temp_t5 = (var_v0_3 + 1) & 0xFF;
        temp_at_3 = temp_t5 < 5;
        var_v0_3 = temp_t5;
        temp_a1_3 = &temp_a2[temp_t9_2];
        temp_a1_3->prev = temp_t9_2 - 1;
        temp_a1_3->next = 0xFF;
    } while (temp_at_3 != 0);
}

void func_8001ACDC(s32 arg0) {
    D_800C7384 = arg0;
    D_800C7388 = arg0;
    D_800C738C = 1;
}

void func_8001AD00(u32 arg0) {
    D_800C7394 = 1;
    func_800185A0(0, 2, 0x40U, 0xFU);
    func_8001ACDC((s32) arg0);
}

void func_8001AD44(void) {
    s8 sp27;
    u16 sp24;
    s32 sp1C;

    if (D_800C738C != 0) {
        sp27 = (s8) ((u32) D_800C7384 / 1000U);
        sp24 = (u16) ((u32) D_800C7384 % 1000U);
        func_8001E8F0(0x06030F00U, 1);
        func_8001E8F0(0x06030F04U, sp27);
        sp1C = (s32) sp24;
        func_8001E8F0(0x06030F05U, (s8) ((s32) sp24 / 256));
        func_8001E8F0(0x06030F06U, (s8) ((s32) sp24 % 256));
        D_800C738C = 0;
        return;
    }
    if ((D_800C7394 != 0) && (func_8001AE78() == 0)) {
        func_800185A0(0, 2, 0x7FU, 0xFU);
        D_800C7394 = 0;
    }
}

void func_8001AE58(void) {
    D_800C7388 = 0;
    D_800C7384 = 1;
    D_800C738C = 1;
}

s32 func_8001AE78(void) {
    SequenceChannel* temp_v0;

    temp_v0 = gSeqPlayers[3].channels[0xF];
    if (&gSeqChannelNone == temp_v0) {
        return 0;
    }
    if (temp_v0->seqScriptIO[1] == 1) {
        if ((u32) D_800C7388 < 4U) {
            return 0;
        }
        return D_800C7388;
    }
    return 0;
}

s32 func_8001AED4(void) {
    Note* temp_v0_2;
    SequenceChannel* temp_v0;
    SequenceLayer* temp_v1;

    temp_v0 = gSeqPlayers[3].channels[0xF];
    temp_v1 = temp_v0->layers[0];
    if ((temp_v0 == &gSeqChannelNone) || (temp_v1 == NULL) || (temp_v0->seqScriptIO[1] != 1)) {
        return 0;
    }
    temp_v0_2 = temp_v1->note;
    if (temp_v0_2 != NULL) {
        if (temp_v1 != temp_v0_2->playbackState.parentLayer) {
            return 2;
        }
        return 1;
    }
    return 0;
}

void func_8001AF40(s32 arg0) {
    D_800C7390 = (u8) arg0;
}

void func_8001AF50(void) {
    if (D_800C7390 != 0xFF) {
        func_8001E8F0(0x06030E00U, (s8) D_800C7390);
        D_800C7390 = 0xFF;
    }
}

void func_8001AF9C(void) {
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t0;
    s32 temp_t9;
    s32 var_v0;
    s32 var_v1;
    void* temp_a1;

    var_v0 = 0;
    do {
        var_v1 = 0;
loop_2:
        temp_lo = var_v1 * 0x14;
        temp_t9 = (var_v1 + 1) & 0xFF;
        temp_at = temp_t9 < 5;
        var_v1 = temp_t9;
        temp_a1 = &D_8014B850[var_v0] + temp_lo;
        temp_a1->unk0 = 1.0f;
        temp_a1->unk8 = 0;
        temp_a1->unk10 = 0;
        temp_a1->unk11 = 0;
        if (temp_at != 0) {
            goto loop_2;
        }
        temp_t0 = (var_v0 + 1) & 0xFF;
        var_v0 = temp_t0;
    } while (temp_t0 < 4);
}

void func_8001B014(u8 arg0) {
    s32 sp28;
    PlayerAudioUnkStruct* sp20;
    Player* var_v0;
    PlayerAudioUnkStruct* temp_a1;
    PlayerAudioUnkStruct* var_t0;
    PlayerAudioUnkStruct_00* temp_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_ft2;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t5;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_v1;
    s32 var_v1;
    s32 var_v1_2;
    u8 var_a2;

    var_a2 = arg0 & 0xFF;
    var_v0 = &gPlayer[var_a2];
    if ((u8) var_v0->boost != 0) {
        var_t0 = &D_8014B850[var_a2];
        var_t0->unk_00[0].unk_08 = 0x12;
        var_t0->unk_00[0].unk_10 = 1;
        var_t0->unk_00[0].unk_04 = 1.5f;
        var_t0->unk_00[0].unk_0C = (1.5f - var_t0->unk_00[0].unk_00) / 18.0f;
    } else {
        var_t0 = &D_8014B850[var_a2];
        if (var_t0->unk_00[0].unk_10 != 0) {
            var_t0->unk_00[0].unk_10 = 0;
            var_t0->unk_00[0].unk_08 = 1;
        }
    }
    if ((u8) var_v0->brake != 0) {
        var_t0->unk_00[0].unk_08 = 0x14;
        var_t0->unk_00[0].unk_11 = 1;
        var_t0->unk_00[0].unk_04 = 0.65f;
        var_t0->unk_00[0].unk_0C = (0.65f - var_t0->unk_00[0].unk_00) / 20.0f;
    } else if (var_t0->unk_00[0].unk_11 != 0) {
        var_t0->unk_00[0].unk_11 = 0;
        var_t0->unk_00[0].unk_08 = 1;
    }
    if ((var_v0->unk_48C != 0) && (var_v0->unk_490 < 45.0f)) {
        var_t0->unk_00[2].unk_08 = 0xA;
        var_t0->unk_00[2].unk_04 = 1.25f;
        var_t0->unk_00[2].unk_0C = (1.25f - var_t0->unk_00[2].unk_00) / 10.0f;
    }
    if (var_v0->unk_494 != 0) {
        sp20 = var_t0;
        arg0 = var_a2;
        sp28 = var_a2 * 0x4E0;
        Audio_PlaySfx(0x09000012U, var_v0->srcPos, var_a2, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        var_t0->unk_00[1].unk_08 = 8;
        var_t0->unk_00[1].unk_04 = 1.65f;
        var_a2 = arg0;
        var_t0->unk_00[1].unk_0C = (1.65f - var_t0->unk_00[1].unk_00) / 8.0f;
        var_v0 = &gPlayer[var_a2];
    }
    temp_fv0 = var_v0->yVel;
    if (temp_fv0 >= 0.0f) {
        var_fv1 = temp_fv0;
    } else {
        var_fv1 = -temp_fv0;
    }
    temp_a1 = &D_8014B850[var_a2];
    if (var_fv1 > 2.0f) {
        var_t0->unk_00[3].unk_04 = 1.25f;
        var_t0->unk_00[3].unk_08 = 0xF;
        var_t0->unk_00[3].unk_10 = 1;
        var_t0->unk_00[3].unk_0C = (1.25f - var_t0->unk_00[3].unk_00) / 15.0f;
    } else if (var_t0->unk_00[3].unk_10 != 0) {
        var_t0->unk_00[3].unk_10 = 0;
        var_t0->unk_00[3].unk_08 = 1;
    }
    if (var_t0->unk_00[4].unk_08 == 0) {
        temp_v1 = ((u32) gAudioRandom >> 0x1B) + 0x10;
        var_t0->unk_00[4].unk_08 = temp_v1;
        var_ft2 = (f32) temp_v1;
        temp_fv0_2 = (f32) (((((f64) (f32) (gAudioRandom & 0xFFFF) / 32768.0) * 0.15000000596046448) + 1.0) - 0.15000000596046448);
        var_t0->unk_00[4].unk_04 = temp_fv0_2;
        if (temp_v1 < 0) {
            var_ft2 += 4294967296.0f;
        }
        var_t0->unk_00[4].unk_0C = (temp_fv0_2 - var_t0->unk_00[3].unk_00) / var_ft2;
    }
    var_v1 = 0;
    do {
        temp_v0 = &temp_a1->unk_00[var_v1];
        temp_a0 = temp_v0->unk_08;
        if (temp_a0 != 0) {
            temp_t8 = temp_a0 - 1;
            temp_v0->unk_08 = temp_t8;
            temp_v0->unk_00 += temp_v0->unk_0C;
            if ((temp_t8 == 0) && (temp_v0->unk_04 != 1.0f)) {
                temp_a0_2 = D_800C5E58[var_v1];
                temp_v0->unk_04 = 1.0f;
                temp_v0->unk_08 = temp_a0_2;
                temp_v0->unk_0C = (1.0f - temp_v0->unk_00) / (f32) temp_a0_2;
            }
        }
        temp_t5 = (var_v1 + 1) & 0xFF;
        var_v1 = temp_t5;
    } while (temp_t5 < 5);
    var_fv1_2 = 1.0f;
    var_v1_2 = 0;
    do {
        temp_lo = var_v1_2 * 0x14;
        temp_t8_2 = (var_v1_2 + 1) & 0xFF;
        temp_at = temp_t8_2 < 5;
        var_v1_2 = temp_t8_2;
        var_fv1_2 *= *(temp_a1 + temp_lo);
    } while (temp_at != 0);
    if (var_fv1_2 >= 4.0f) {
        var_fv1_2 = 4.0f;
    }
    var_t0->freqScale = var_fv1_2;
}

void func_8001B454(s32 arg0) {
    Player* temp_v0;
    PlayerAudioUnkStruct* temp_a2;
    PlayerAudioUnkStruct* temp_v1;
    PlayerAudioUnkStruct* temp_v1_2;
    PlayerAudioUnkStruct_00* temp_a0;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t4;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t8;
    s32 var_a1;
    s32 var_a1_2;

    temp_t6 = arg0 & 0xFF;
    temp_v0 = &gPlayer[temp_t6];
    if ((temp_v0->unk_48C != 0) && (temp_v0->unk_490 < 45.0f)) {
        temp_v1 = &D_8014B850[temp_t6];
        temp_v1->unk_00[2].unk_08 = 0xA;
        temp_v1->unk_00[2].unk_04 = 1.25f;
        temp_v1->unk_00[2].unk_0C = (1.25f - temp_v1->unk_00[2].unk_00) / 10.0f;
    }
    temp_v1_2 = &D_8014B850[temp_t6];
    if (temp_v0->unk_494 != 0) {
        temp_v1_2->unk_00[1].unk_08 = 8;
        temp_v1_2->unk_00[1].unk_04 = 1.65f;
        temp_v1_2->unk_00[1].unk_0C = (1.65f - temp_v1_2->unk_00[1].unk_00) / 8.0f;
    }
    temp_fv0 = temp_v0->yVel;
    var_a1 = 0;
    if (temp_fv0 >= 0.0f) {
        var_fa0 = temp_fv0;
    } else {
        var_fa0 = -temp_fv0;
    }
    temp_a2 = &D_8014B850[temp_t6];
    if (var_fa0 > 2.0f) {
        temp_v1_2->unk_00[3].unk_04 = 1.25f;
        temp_v1_2->unk_00[3].unk_08 = 0xF;
        temp_v1_2->unk_00[3].unk_10 = 1;
        temp_v1_2->unk_00[3].unk_0C = (1.25f - temp_v1_2->unk_00[3].unk_00) / 15.0f;
    } else if (temp_v1_2->unk_00[3].unk_10 != 0) {
        temp_v1_2->unk_00[3].unk_10 = 0;
        temp_v1_2->unk_00[3].unk_08 = 1;
    }
    do {
        temp_a0 = &temp_a2->unk_00[var_a1];
        temp_a3 = temp_a0->unk_08;
        if (temp_a3 != 0) {
            temp_t8 = temp_a3 - 1;
            temp_a0->unk_08 = temp_t8;
            temp_a0->unk_00 += temp_a0->unk_0C;
            if ((temp_t8 == 0) && (temp_a0->unk_04 != 1.0f)) {
                temp_a3_2 = D_800C5E58[var_a1];
                temp_a0->unk_04 = 1.0f;
                temp_a0->unk_08 = temp_a3_2;
                temp_a0->unk_0C = (1.0f - temp_a0->unk_00) / (f32) temp_a3_2;
            }
        }
        temp_t4 = (var_a1 + 1) & 0xFF;
        var_a1 = temp_t4;
    } while (temp_t4 < 5);
    var_fv0 = 1.0f;
    var_a1_2 = 0;
    do {
        temp_lo = var_a1_2 * 0x14;
        temp_t7 = (var_a1_2 + 1) & 0xFF;
        temp_at = temp_t7 < 5;
        var_a1_2 = temp_t7;
        var_fv0 *= *(temp_a2 + temp_lo);
    } while (temp_at != 0);
    temp_fa1 = temp_v0->pos.y;
    if (temp_fa1 >= 0.0f) {
        var_fa0_2 = temp_fa1;
    } else {
        var_fa0_2 = -temp_fa1;
    }
    if (var_fa0_2 < 600.0f) {
        var_fv0_2 = var_fv0 + (temp_fa1 / 600.0f);
    } else {
        var_fv0_2 = var_fv0 + 1.0f;
    }
    temp_fa0 = temp_v0->unk_0D0;
    if (temp_fa0 > 25.0f) {
        var_fv0_3 = var_fv0_2 + 0.5f;
    } else if (temp_fa0 < 5.0f) {
        var_fv0_3 = var_fv0_2 - 0.5f;
    } else {
        var_fv0_3 = var_fv0_2 + ((temp_fa0 - 15.0f) * 0.05f);
    }
    if (var_fv0_3 > 2.0f) {
        var_fv0_3 = 2.0f;
    }
    temp_v1_2->freqScale = var_fv0_3;
}

void func_8001B774(u8 arg0) {
    s32 sp28;
    PlayerAudioUnkStruct* sp20;
    Player* var_v0;
    PlayerAudioUnkStruct* temp_a1;
    PlayerAudioUnkStruct* temp_t0;
    PlayerAudioUnkStruct* temp_t0_2;
    PlayerAudioUnkStruct_00* temp_v0;
    f32 temp_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t1;
    s32 temp_t4;
    s32 temp_t6;
    s32 var_v1;
    s32 var_v1_2;
    u8 var_a2;

    var_a2 = arg0 & 0xFF;
    var_v0 = &gPlayer[var_a2];
    if ((var_v0->unk_48C != 0) && (var_v0->unk_490 < 45.0f)) {
        temp_t0 = &D_8014B850[var_a2];
        temp_t0->unk_00[2].unk_08 = 0xA;
        temp_t0->unk_00[2].unk_04 = 1.1f;
        temp_t0->unk_00[2].unk_0C = (1.1f - temp_t0->unk_00[2].unk_00) / 10.0f;
    }
    temp_t0_2 = &D_8014B850[var_a2];
    if (var_v0->unk_494 != 0) {
        sp20 = temp_t0_2;
        arg0 = var_a2;
        sp28 = var_a2 * 0x4E0;
        Audio_PlaySfx(0x09000017U, var_v0->srcPos, var_a2, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        temp_t0_2->unk_00[1].unk_08 = 8;
        temp_t0_2->unk_00[1].unk_04 = 1.2f;
        var_a2 = arg0;
        temp_t0_2->unk_00[1].unk_0C = (1.2f - temp_t0_2->unk_00[1].unk_00) / 8.0f;
        var_v0 = &gPlayer[var_a2];
    }
    temp_fv0 = var_v0->yVel;
    var_v1 = 0;
    if (temp_fv0 >= 0.0f) {
        var_fv1 = temp_fv0;
    } else {
        var_fv1 = -temp_fv0;
    }
    temp_a1 = &D_8014B850[var_a2];
    if (var_fv1 > 2.0f) {
        temp_t0_2->unk_00[3].unk_08 = 0xF;
        temp_t0_2->unk_00[3].unk_10 = 1;
        temp_t0_2->unk_00[3].unk_04 = 1.12f;
        temp_t0_2->unk_00[3].unk_0C = (1.12f - temp_t0_2->unk_00[3].unk_00) / 15.0f;
    } else if (temp_t0_2->unk_00[3].unk_10 != 0) {
        temp_t0_2->unk_00[3].unk_10 = 0;
        temp_t0_2->unk_00[3].unk_08 = 1;
    }
    do {
        temp_v0 = &temp_a1->unk_00[var_v1];
        temp_a0 = temp_v0->unk_08;
        if (temp_a0 != 0) {
            temp_t6 = temp_a0 - 1;
            temp_v0->unk_08 = temp_t6;
            temp_v0->unk_00 += temp_v0->unk_0C;
            if ((temp_t6 == 0) && (temp_v0->unk_04 != 1.0f)) {
                temp_a0_2 = D_800C5E58[var_v1];
                temp_v0->unk_04 = 1.0f;
                temp_v0->unk_08 = temp_a0_2;
                temp_v0->unk_0C = (1.0f - temp_v0->unk_00) / (f32) temp_a0_2;
            }
        }
        temp_t1 = (var_v1 + 1) & 0xFF;
        var_v1 = temp_t1;
    } while (temp_t1 < 5);
    var_fv1_2 = 1.0f;
    var_v1_2 = 0;
    do {
        temp_lo = var_v1_2 * 0x14;
        temp_t4 = (var_v1_2 + 1) & 0xFF;
        temp_at = temp_t4 < 5;
        var_v1_2 = temp_t4;
        var_fv1_2 *= *(temp_a1 + temp_lo);
    } while (temp_at != 0);
    if (var_fv1_2 > 2.0f) {
        var_fv1_2 = 2.0f;
    }
    temp_t0_2->freqScale = var_fv1_2;
}

void func_8001BA40(void) {
    Player* temp_v0_2;
    PlayerAudioUnkStruct* temp_s0;
    s32 temp_t9;
    s32 var_s1;
    u8 temp_v0;

    var_s1 = 0;
    do {
        temp_s0 = &D_8014B850[var_s1];
        temp_v0 = temp_s0->form;
        switch (temp_v0) {                          /* irregular */
            case 0xFF:
                break;
            case 0x0:
                func_8001B014(var_s1 & 0xFF);
                temp_v0_2 = &gPlayer[var_s1];
                temp_s0->freqScale *= func_80017360(temp_v0_2->srcPos, temp_v0_2->srcVel, 150.0f, &temp_s0->freqMod);
                break;
            case 0x1:
                func_8001B454(var_s1 & 0xFF);
                break;
            case 0x2:
                func_8001B774(var_s1 & 0xFF);
                break;
        }
        temp_t9 = (var_s1 + 1) & 0xFF;
        var_s1 = temp_t9;
    } while (temp_t9 < 4);
}

void func_8001BB74(void) {
    Player* temp_a0;
    PlayerAudioUnkStruct* temp_v1;
    f32 temp_fv0;
    s32 temp_t4;
    s32 var_v0;

    var_v0 = 0;
    do {
        temp_v1 = &D_8014B850[var_v0];
        if (temp_v1->form == 0) {
            temp_a0 = &gPlayer[var_v0];
            if (temp_a0->levelType == 0) {
                temp_fv0 = temp_a0->pos.y;
                if (temp_fv0 < 150.0f) {
                    temp_v1->reverbAdd = (s8) (s32) ((150.0f - temp_fv0) * 0.53f);
                } else {
                    temp_v1->reverbAdd = 0;
                }
            }
        }
        temp_t4 = (var_v0 + 1) & 0xFF;
        var_v0 = temp_t4;
    } while (temp_t4 < 4);
}

void func_8001BC20(void) {
    func_8001BA40();
    func_8001BB74();
}

void func_8001BC48(void) {
    s32 temp_at;
    s32 temp_lo;
    s32 temp_t1;
    s32 var_v1;
    s32* temp_t9;
    void* temp_v0;

    func_8001AF9C();
    var_v1 = 0;
    do {
        temp_lo = var_v1 * 0x70;
        temp_t1 = (var_v1 + 1) & 0xFF;
        temp_at = temp_t1 < 4;
        D_8014BA24[var_v1] = 0;
        temp_t9 = &D_8014BA28[var_v1];
        var_v1 = temp_t1;
        *temp_t9 = 0;
        temp_v0 = D_8014B850 + temp_lo;
        temp_v0->unk6C = 0xFF;
        temp_v0->unk6D = 0;
        temp_v0->unk68 = 1.0f;
        temp_v0->unk64 = 1.0f;
    } while (temp_at != 0);
    gSfxVolScale = 1.0f;
    gSfxFreqScale = 1.0f;
    D_800C7384 = 0;
    D_800C7388 = 0;
    D_800C738C = 0;
    D_800C7394 = 0;
    gPlaylistIndex = 0xFF;
}

void func_8001BD0C(void) {
    u16 temp_t3;
    u16 temp_t3_2;
    u16 temp_t8;
    u16 temp_t9;
    u8 temp_v1;
    void* temp_v0;

    if (gPlaylistIndex != 0xFF) {
        if (gPlaylistTimer == 0) {
            temp_v0 = (gPlaylistIndex * 0x3E8) + (gPlaylistCmdIndex * 0xA) + gPlaylists;
            temp_v1 = temp_v0->unk0;
            switch (temp_v1) {                      /* irregular */
                case 0x0:
                    func_8001D444(temp_v0->unk1, temp_v0->unk2 & 0xFF, 0U, temp_v0->unk6);
                    temp_t3 = (&gPlaylists[0][0].unk_4)[(gPlaylistIndex * 0x3E8) + (gPlaylistCmdIndex * 0xA)];
                    gPlaylistCmdIndex += 1;
                    gPlaylistTimer = (s32) temp_t3;
                    return;
                case 0x1:
                    func_800182F4((temp_v0->unk5 << 0x10) | 0x100000FF | (temp_v0->unk1 << 0x18));
                    temp_t8 = (&gPlaylists[0][0].unk_4)[(gPlaylistIndex * 0x3E8) + (gPlaylistCmdIndex * 0xA)];
                    gPlaylistCmdIndex += 1;
                    gPlaylistTimer = (s32) temp_t8;
                    return;
                case 0x2:
                    func_8001D9E0(temp_v0->unk1, temp_v0->unk2 & 0xFF, 0x461U, 0x19U, /* extra? */ (s32) temp_v0->unk6);
                    temp_t9 = (&gPlaylists[0][0].unk_4)[(gPlaylistIndex * 0x3E8) + (gPlaylistCmdIndex * 0xA)];
                    gPlaylistCmdIndex += 1;
                    gPlaylistTimer = (s32) temp_t9;
                    return;
                case 0x3:
                    func_8001D4AC(temp_v0->unk2 & 0xFF, 0x14U, 0xAU, 0xAU);
                    temp_t3_2 = (&gPlaylists[0][0].unk_4)[(gPlaylistIndex * 0x3E8) + (gPlaylistCmdIndex * 0xA)];
                    gPlaylistCmdIndex += 1;
                    gPlaylistTimer = (s32) temp_t3_2;
                    return;
                case 0xFF:
                    gPlaylistIndex = 0xFF;
                    return;
            }
        } else {
            gPlaylistTimer -= 1;
        }
    }
}

void func_8001BFC0(f32* arg0, f32* arg1, s32 arg2, f32* arg3) {
    f32* sp84;
    s32 sp64;
    void* sp58;
    void* sp54;
    s32 sp50;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_ft0;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft3;
    f32 temp_ft5;
    f32 temp_ft5_2;
    f32 var_fs0;
    f32* var_a0;
    f32* var_a3;
    f32* var_a3_2;
    f32* var_s0_2;
    f32* var_s1_2;
    f32* var_v0;
    f32* var_v0_2;
    f32* var_v1_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s4;
    s32 temp_t1;
    s32 temp_t7;
    s32 temp_t9;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_t3;
    void* temp_t0;
    void* temp_t4;
    void* var_a0_2;
    void* var_s0;
    void* var_s1;
    void* var_v1;

    var_t3 = 1 << arg2;
    temp_s4 = var_t3 >> 1;
    temp_a1 = temp_s4 * 4;
    var_s0 = temp_a1 + arg3;
    var_s1 = temp_a1 + var_s0;
    if (var_t3 != (s32) *arg3) {
        var_fs0 = 0.0f;
        var_s2 = 0;
        if (temp_s4 > 0) {
            sp64 = var_t3;
            do {
                temp_fs1 = __cosf(var_fs0);
                var_s0 += 4;
                var_s0->unk-4 = (f32) ((temp_fs1 - __sinf(var_fs0)) * 0.707107f);
                temp_fs1_2 = __cosf(var_fs0);
                temp_ft3 = __sinf(var_fs0) + temp_fs1_2;
                var_s2 += 1;
                var_s1 += 4;
                var_fs0 += (f32) (3.141592653589793 / (f64) (var_t3 * 2));
                var_s1->unk-4 = (f32) (temp_ft3 * 0.707107f);
            } while (var_s2 != temp_s4);
            var_t3 = sp64;
        }
    }
    var_a0 = arg0;
    temp_t1 = var_t3 - 1;
    var_v0 = arg1;
    temp_t9 = temp_t1 * 4;
    temp_a1_2 = temp_s4 * 4;
    temp_t0 = temp_a1_2 + arg3;
    var_a3 = temp_t9 + var_a0;
    temp_t4 = temp_a1_2 + temp_t0;
    var_s2_2 = 0;
    var_v1 = temp_a1_2 + var_v0;
    if (temp_s4 > 0) {
        temp_a2 = temp_s4 & 3;
        if (temp_a2 != 0) {
            do {
                var_s2_2 += 1;
                var_v0 += 4;
                var_v0->unk-4 = (f32) *var_a0;
                temp_ft5 = *var_a3;
                var_v1 += 4;
                var_a0 += 8;
                var_a3 -= 8;
                var_v1->unk-4 = temp_ft5;
            } while (temp_a2 != var_s2_2);
            if (var_s2_2 != temp_s4) {
                goto loop_9;
            }
        } else {
            do {
loop_9:
                var_s2_2 += 4;
                var_v0 += 0x10;
                var_v0->unk-10 = (f32) *var_a0;
                var_v1 += 0x10;
                var_a0 += 0x20;
                var_v1->unk-10 = (f32) *var_a3;
                var_a3 -= 0x20;
                var_v0->unk-C = (f32) var_a0->unk-18;
                var_v1->unk-C = (f32) var_a3->unk18;
                var_v0->unk-8 = (f32) var_a0->unk-10;
                var_v1->unk-8 = (f32) var_a3->unk10;
                var_v0->unk-4 = (f32) var_a0->unk-8;
                var_v1->unk-4 = (f32) var_a3->unk8;
            } while (var_s2_2 != temp_s4);
        }
    }
    sp84 = var_a3;
    sp58 = temp_t0;
    sp50 = temp_t9;
    sp54 = temp_t4;
    func_80008780(arg1, arg2, arg3);
    var_a3_2 = var_a3;
    *arg0 = *arg1;
    *(arg0 + (temp_s4 * 4)) = arg1[temp_s4];
    var_s2_3 = 1;
    var_s0_2 = &arg3[temp_s4].unk4;
    var_s1_2 = temp_t4 + 4;
    var_v0_2 = &arg1[1];
    var_v1_2 = &arg1[temp_t1];
    var_a0_2 = arg0 + 4;
    if (temp_s4 >= 2) {
        temp_t7 = (temp_s4 - 1) & 3;
        if (temp_t7 != 0) {
            do {
                temp_ft0 = *var_v1_2 * *var_s1_2;
                var_s2_3 += 1;
                var_a0_2 += 4;
                temp_ft2 = *var_s0_2 * *var_v0_2;
                var_a3_2 -= 4;
                var_v0_2 += 4;
                var_s1_2 += 4;
                var_s0_2 += 4;
                var_v1_2 -= 4;
                var_a0_2->unk-4 = (f32) (temp_ft0 + temp_ft2);
                var_a3_2->unk4 = (f32) ((var_s1_2->unk-4 * var_v0_2->unk-4) - (var_v1_2->unk4 * var_s0_2->unk-4));
            } while ((temp_t7 + 1) != var_s2_3);
            if (var_s2_3 != temp_s4) {
                goto loop_15;
            }
        } else {
            do {
loop_15:
                temp_ft2_2 = *var_v1_2 * *var_s1_2;
                var_s2_3 += 4;
                var_a0_2 += 0x10;
                temp_ft5_2 = *var_s0_2 * *var_v0_2;
                var_a3_2 -= 0x10;
                var_v0_2 += 0x10;
                var_s1_2 += 0x10;
                var_s0_2 += 0x10;
                var_v1_2 -= 0x10;
                var_a0_2->unk-10 = (f32) (temp_ft2_2 + temp_ft5_2);
                var_a3_2->unk10 = (f32) ((var_s1_2->unk-10 * var_v0_2->unk-10) - (var_v1_2->unk10 * var_s0_2->unk-10));
                var_a0_2->unk-C = (f32) ((var_v1_2->unkC * var_s1_2->unk-C) + (var_s0_2->unk-C * var_v0_2->unk-C));
                var_a3_2->unkC = (f32) ((var_s1_2->unk-C * var_v0_2->unk-C) - (var_v1_2->unkC * var_s0_2->unk-C));
                var_a0_2->unk-8 = (f32) ((var_v1_2->unk8 * var_s1_2->unk-8) + (var_s0_2->unk-8 * var_v0_2->unk-8));
                var_a3_2->unk8 = (f32) ((var_s1_2->unk-8 * var_v0_2->unk-8) - (var_v1_2->unk8 * var_s0_2->unk-8));
                var_a0_2->unk-4 = (f32) ((var_v1_2->unk4 * var_s1_2->unk-4) + (var_s0_2->unk-4 * var_v0_2->unk-4));
                var_a3_2->unk4 = (f32) ((var_s1_2->unk-4 * var_v0_2->unk-4) - (var_v1_2->unk4 * var_s0_2->unk-4));
            } while (var_s2_3 != temp_s4);
        }
    }
}

u8* func_8001C3EC(void) {
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 var_fs1;
    f32* temp_v0_2;
    f32* var_v0_2;
    f32* var_v0_3;
    f32* var_v1;
    f32* var_v1_3;
    f32* var_v1_4;
    s16 var_t8;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a0;
    s32 var_t0;
    s32 var_v1_2;
    s32* var_a3;
    u16* temp_v0;
    u16* var_v0;
    u8* var_a0_2;

    func_8001BD0C();
    var_v0 = gAiBuffers[gCurAiBuffIndex];
    var_v1 = &D_80149AD8[4];
    var_t8 = (s16) *var_v0;
    if (var_v1 != D_80149ED8) {
        do {
            var_v1 += 0x10;
            var_v0 += 8;
            var_v1->unk-20 = (f32) var_t8;
            var_v1->unk-1C = (f32) var_v0->unk-6;
            var_v1->unk-18 = (f32) var_v0->unk-4;
            var_v1->unk-14 = (f32) var_v0->unk-2;
            var_t8 = (s16) var_v0->unk0;
        } while (var_v1 != D_80149ED8);
    }
    temp_v0 = var_v0 + 8;
    var_v1->unk-10 = (f32) var_t8;
    var_v1->unk-C = (f32) temp_v0->unk-6;
    var_v1->unk-8 = (f32) temp_v0->unk-4;
    var_v1->unk-4 = (f32) temp_v0->unk-2;
    func_8001BFC0(D_80149AD8, D_80149ED8, 8, D_8014A2D8);
    var_v1_2 = 0;
    var_a3 = D_800C7398;
    var_t0 = 0;
    do {
        temp_a1 = *var_a3;
        var_a3 += 4;
        var_a0 = var_v1_2;
        temp_a1_2 = temp_a1 + 1;
        if (var_v1_2 < temp_a1_2) {
            temp_v0_2 = var_t0 + D_8014A8D8;
            if ((temp_a1_2 - var_v1_2) & 1) {
                temp_fv0 = D_80149AD8[var_v1_2];
                var_a0 = var_v1_2 + 1;
                if (temp_fv0 > 0.0f) {
                    *temp_v0_2 += temp_fv0;
                } else {
                    *temp_v0_2 -= temp_fv0;
                }
                if (var_a0 != temp_a1_2) {
                    goto block_9;
                }
            } else {
block_9:
                var_v1_3 = &D_80149AD8[var_a0];
                do {
                    temp_fv0_2 = var_v1_3->unk0;
                    var_a0 += 2;
                    if (temp_fv0_2 > 0.0f) {
                        *temp_v0_2 += temp_fv0_2;
                    } else {
                        *temp_v0_2 -= temp_fv0_2;
                    }
                    temp_fv0_3 = var_v1_3->unk4;
                    if (temp_fv0_3 > 0.0f) {
                        *temp_v0_2 += temp_fv0_3;
                    } else {
                        *temp_v0_2 -= temp_fv0_3;
                    }
                    var_v1_3 += 8;
                } while (var_a0 != temp_a1_2);
            }
        }
        var_t0 += 4;
        var_v1_2 = var_a0;
    } while ((u32) var_a3 < (u32) &D_800C7418);
    var_v0_2 = &D_8014A8D8[4];
    var_fs1 = var_v0_2->unk-10;
    if (var_v0_2 != D_8014A958) {
        do {
            temp_fs0 = var_fs1 / 8.0f;
            temp_ft5 = var_v0_2->unk-C;
            temp_ft4 = var_v0_2->unk-8;
            temp_fa1 = var_v0_2->unk-4;
            var_fs1 = var_v0_2->unk0;
            var_v0_2 += 0x10;
            var_v0_2->unk-20 = temp_fs0;
            var_v0_2->unk-1C = (f32) (temp_ft5 / 8.0f);
            var_v0_2->unk-18 = (f32) (temp_ft4 / 8.0f);
            var_v0_2->unk-14 = (f32) (temp_fa1 / 8.0f);
        } while (var_v0_2 != D_8014A958);
    }
    var_v0_2->unk-10 = (f32) (var_fs1 / 8.0f);
    var_v0_2->unk-C = (f32) (var_v0_2->unk-C / 8.0f);
    var_v0_2->unk-8 = (f32) (var_v0_2->unk-8 / 8.0f);
    var_v0_2->unk-4 = (f32) (var_v0_2->unk-4 / 8.0f);
    var_a0_2 = D_8014A958;
    var_v1_4 = D_800C741C;
    var_v0_3 = D_8014A8D8;
    do {
        var_v0_3->unk0 = (var_v0_3->unk0 / 32768.0f) * D_800C7418;
        if (var_v0_3->unk0 > 1.0f) {
            var_v0_3->unk0 = 1.0f;
        }
        var_v1_4->unk0 = (var_v0_3->unk0 * 0.25f) + (var_v1_4->unk0 * 0.75f);
        *var_a0_2 = (u8) (u32) (var_v1_4->unk0 * 255.0f);
        var_v0_3[1] = (var_v0_3[1] / 32768.0f) * D_800C7418;
        if (var_v0_3[1] > 1.0f) {
            var_v0_3[1] = 1.0f;
        }
        var_v0_3 += 8;
        temp_ft0 = var_v1_4[1] * 0.75f;
        var_v1_4 += 8;
        var_v1_4->unk-4 = (f32) ((var_v0_3[1] * 0.25f) + temp_ft0);
        var_a0_2 += 2;
        var_a0_2->unk-1 = (s8) (u32) (var_v1_4->unk-4 * 255.0f);
    } while (var_a0_2 != gSeqRequests);
    return D_8014A958;
}

void func_8001C8B8(u8 arg0) {
    PlayerAudioUnkStruct* sp2C;
    s32 sp28;
    PlayerAudioUnkStruct* temp_v1;
    s32 temp_t0;
    u32 var_s0;
    u8 temp_t6;
    u8 temp_v0;

    temp_t6 = arg0 & 0xFF;
    temp_t0 = temp_t6 * 0x4E0;
    temp_v1 = &D_8014B850[temp_t6];
    var_s0 = 0;
    sp2C = temp_v1;
    sp28 = temp_t0;
    arg0 = temp_t6;
    temp_v1->form = gPlayer[temp_t6].form2;
    func_8001AF9C();
    temp_v0 = temp_v1->form;
    switch (temp_v0) {                              /* irregular */
        case 0:
            if (gPlayer[temp_t6].levelType == 1) {
                var_s0 = 0x0100F020;
            } else {
                var_s0 = 0x0100F005;
            }
            break;
        case 1:
            var_s0 = 0x0100F006;
            break;
        case 2:
            var_s0 = 0x0100F022;
            sp28 = temp_t0;
            sp2C = temp_v1;
            Audio_PlaySfx(0x1100802CU, gPlayer[temp_t6].srcPos, arg0, &gDefaultScale, &gDefaultScale, &temp_v1->reverbAdd);
            break;
    }
    if (var_s0 != 0) {
        Audio_PlaySfx(var_s0, gPlayer[temp_t6].srcPos, arg0, &temp_v1->freqScale, &gDefaultScale, &temp_v1->reverbAdd);
    }
}

void func_8001CA24(u8 arg0) {
    u32 sp24;
    PlayerAudioUnkStruct* sp1C;
    Player* temp_v0_2;
    PlayerAudioUnkStruct* temp_v1;
    u32 var_a2;
    u32 var_a2_2;
    u8 temp_v0;
    u8 var_a3;

    var_a3 = arg0 & 0xFF;
    temp_v1 = &D_8014B850[var_a3];
    temp_v0 = temp_v1->form;
    var_a2 = 0;
    switch (temp_v0) {                              /* irregular */
        case 0:
            temp_v0_2 = &gPlayer[var_a3];
            if (temp_v0_2->levelType == 1) {
                var_a2_2 = 0x0100F020;
            } else {
                var_a2_2 = 0x0100F005;
            }
            arg0 = var_a3;
            sp24 = var_a2_2;
            sp1C = temp_v1;
            func_8001A55C(temp_v0_2->srcPos, 0x1100000BU);
            var_a2 = var_a2_2;
block_10:
            var_a3 = arg0;
            break;
        case 1:
            var_a2 = 0x0100F006;
            break;
        case 2:
            sp24 = 0x0100F022;
            arg0 = var_a3;
            sp1C = temp_v1;
            func_8001A55C(gPlayer[var_a3].srcPos, 0x1100802CU);
            var_a2 = 0x0100F022;
            goto block_10;
    }
    temp_v1->form = 0xFF;
    if (var_a2 != 0) {
        func_8001A55C(gPlayer[var_a3].srcPos, var_a2);
    }
}

void func_8001CB80(u8 arg0, u8 arg1) {
    u8* sp20;
    s32 temp_t6;
    u8 temp_a2;
    u8* temp_v0;

    temp_a2 = arg0 & 0xFF;
    temp_t6 = arg1 & 0xFF;
    D_8014BA28[temp_a2] = D_800C5D40;
    switch (temp_t6) {                              /* irregular */
        case 1:
            D_8014BA10[temp_a2] = 1.0f;
            D_8014BA20[temp_a2] = 1;
            break;
        case 2:
            D_8014BA10[temp_a2] = 1.5f;
            D_8014BA20[temp_a2] = 2;
            break;
        default:
        case 0:
            D_8014BA10[temp_a2] = 0.75f;
            D_8014BA20[temp_a2] = 0;
            break;
    }
    temp_v0 = &D_8014BA24[temp_a2];
    if (*temp_v0 != 1) {
        sp20 = temp_v0;
        Audio_PlaySfx(0x01008008U, gPlayer[temp_a2].srcPos, temp_a2, &D_8014BA10[temp_a2], &gDefaultScale, &D_8014B850[temp_a2].reverbAdd);
        *temp_v0 = 1;
    }
}

void func_8001CCDC(u8 arg0, f32* arg1) {
    u8* sp28;
    f32* sp24;
    u8 temp_a2;
    u8 temp_v0;
    u8* temp_v1;

    temp_a2 = arg0 & 0xFF;
    temp_v1 = &D_8014BA24[temp_a2];
    if (*temp_v1 != 0) {
        temp_v0 = D_8014BA20[temp_a2];
        switch (temp_v0) {                          /* irregular */
            case 1:
                D_8014BA10[temp_a2] = 1.2f;
                break;
            case 2:
                D_8014BA10[temp_a2] = 1.5f;
                break;
            default:
            case 0:
                D_8014BA10[temp_a2] = 1.0f;
                break;
        }
        sp24 = &D_8014BA10[temp_a2];
        arg0 = temp_a2;
        sp28 = temp_v1;
        func_8001A55C(gPlayer[temp_a2].srcPos, 0x01008008U);
        Audio_PlaySfx(0x09001001U, arg1, arg0, &D_8014BA10[temp_a2], &gDefaultScale, &D_8014B850[arg0].reverbAdd);
        *temp_v1 = 2;
    }
}

void func_8001CE28(u8 arg0, f32* arg1) {
    u32 sp2C;
    u8* sp24;
    u8 temp_a2;
    u8 temp_v0;
    u8* temp_v1;

    temp_a2 = arg0 & 0xFF;
    temp_v1 = &D_8014BA24[temp_a2];
    if (*temp_v1 != 0) {
        temp_v0 = D_8014BA20[temp_a2];
        switch (temp_v0) {                          /* irregular */
            case 1:
                sp2C = 0x0903A00A;
                break;
            case 2:
                sp2C = 0x0901A00B;
                break;
            default:
            case 0:
                sp2C = 0x0901A009;
                break;
        }
        sp24 = temp_v1;
        arg0 = temp_a2;
        func_8001A6C4(temp_a2 & 0xFF, 0x09001001U);
        Audio_PlaySfx(sp2C, arg1, arg0, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        *temp_v1 = 0;
    }
}

void func_8001CEFC(f32* arg0) {
    u32 var_a0;

    if (gPlayer->levelType == 1) {
        var_a0 = 0x31000040;
    } else {
        var_a0 = 0x3100000C;
    }
    Audio_PlaySfx(var_a0, arg0, 0U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
}

void func_8001CF60(f32* arg0) {
    u32 var_a1;

    var_a1 = 0x3100000C;
    if (gPlayer->levelType == 1) {
        var_a1 = 0x31000040;
    }
    func_8001A55C(arg0, var_a1);
}

void func_8001CFA8(f32 arg0) {
    f32 var_fv0;
    f32 var_fv1;

    var_fv1 = 6.0f;
    if (arg0 >= 0.0f) {
        var_fv0 = arg0;
    } else {
        var_fv0 = -arg0;
    }
    if (var_fv0 < 6.0f) {
        goto block_6;
    }
    var_fv1 = 30.0f;
    if (var_fv0 > 30.0f) {
block_6:
        var_fv0 = var_fv1;
    }
    gSfxVolScale = ((var_fv0 - 18.0f) / 24.0f) + 1.0f;
}

void func_8001D034(f32* arg0, s32 arg1, u8 arg2) {
    s32 var_a3;

    var_a3 = arg2 & 0xFF;
    M2C_MEMCPY_ALIGNED(&sp1C[0], D_800C749C, 0x30);
    *(&sp1C[0] + 0x30) = D_800C749C[0xC];
    if (var_a3 >= 0xD) {
        var_a3 = 0xC;
    }
    func_8001D0B4(arg0, (u32) arg1, (&sp1C[0])[var_a3]);
}

void func_8001D0B4(f32* sfxPos, u32 sfxId, f32 volScale) {
    gSfxVolScale = volScale;
    Audio_PlaySfx(sfxId, sfxPos, 0U, &gSfxVolScale, &gDefaultScale, &gDefaultReverb);
}

void func_8001D10C(f32* arg0, u32 arg1) {
    Audio_PlaySfx(arg1, arg0, 0U, &gSfxVolScale, &gSfxFreqScale, &gDefaultReverb);
}

void func_8001D15C(u8 arg0) {
    f32 var_ft1;
    s32 temp_t6;

    temp_t6 = arg0 & 0xFF;
    if (temp_t6 < 0xC) {
        var_ft1 = (f32) temp_t6;
        if (temp_t6 < 0) {
            var_ft1 += 4294967296.0f;
        }
        gSfxVolScale = (var_ft1 / 11.0f) + 0.5f;
        return;
    }
    gSfxVolScale = 1.5f;
}

void func_8001D1C8(u8 arg0, u32 arg1) {
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 var_v1;

    temp_v0 = arg0 & 0xFF;
    temp_a1 = (temp_v0 >> 2) + 8;
    sp1C = (s32) temp_a1;
    sp20 = temp_v0;
    func_8001E8F0(0x06020902U, temp_a1);
    func_8001E8F0(0x06020A02U, unksp1F);
    func_8001E8F0(0x06020B02U, unksp1F);
    temp_a1_2 = 0x13 - ((u8) arg1 * 3);
    sp18 = (s32) temp_a1_2;
    sp1C = (s32) (u8) arg1;
    func_8001E8F0(0x06020901U, temp_a1_2);
    func_8001E8F0(0x06020A01U, unksp1B);
    func_8001E8F0(0x06020B01U, unksp1B);
    temp_v0_2 = 0x44 - (sp20 >> 3);
    temp_t9 = (0x50 - (sp1C * 0xA)) & 0xFF;
    var_v1 = temp_v0_2 & 0xFF;
    if ((temp_v0_2 & 0xFF) < temp_t9) {
        var_v1 = temp_t9 & 0xFF;
    }
    sp20 = (s32) var_v1;
    func_8001E8F0(0x06020903U, var_v1);
    func_8001E8F0(0x06020A03U, unksp23);
    func_8001E8F0(0x06020B03U, unksp23);
}

void func_8001D2FC(f32* arg0, u16 arg1) {
    u32 sp24;
    u32 temp_t8;

    temp_t8 = D_800C5E88[arg1 & 0xFFFF];
    sp24 = temp_t8;
    if ((temp_t8 & 0xF0000000) != 0x40000000) {
        Audio_PlaySfx(temp_t8, arg0, 0U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        return;
    }
    Audio_PlaySfx(sp24, gDefaultSfxPos, 0U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
}

void func_8001D3A0(f32* arg0, u16 arg1) {
    u32 temp_a2;

    temp_a2 = D_800C5E88[arg1 & 0xFFFF];
    if ((temp_a2 & 0xF0000000) != 0x40000000) {
        func_8001A55C(arg0, temp_a2);
        return;
    }
    func_8001A55C(gDefaultSfxPos, temp_a2);
}

void func_8001D400(s8 arg0) {
    D_800C5D60 = arg0;
}

void func_8001D410(s32 arg0) {
    func_800182F4((arg0 & 0xFF) | 0x70000000);
}

void func_8001D444(u8 arg0, u16 arg1, u8 arg2, u8 arg3) {
    s32 sp1C;
    s32 temp_t7;

    temp_t7 = arg0 << 0x18;
    sp1C = temp_t7;
    func_800182F4(temp_t7 | 0x70000000 | (arg3 & 0xFF));
    func_800182F4(sp1C | (arg2 << 0x10) | arg1);
}

void func_8001D4AC(u16 arg0, u8 arg1, u8 arg2, u8 arg3) {
    if (func_8001839C(0) != 0x27) {
        func_800185A0(0, 1, arg1, arg2);
        func_800182F4((arg3 << 8) | 0xC1000000);
        func_800182F4(arg0 | 0x01000000);
    }
}

void func_8001D520(void) {
    s32 temp_t8;
    s32 var_s0;

    if (D_800C5D54 == 0x18) {
        func_8001AE58();
        func_8001D6DC(0);
        Audio_PlaySfx(0x0903F004U, gDefaultSfxPos, 4U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        func_800182F4(0x4005001E);
        func_800182F4(-0x3EFFE200);
        func_800182F4(0x01000027);
        return;
    }
    var_s0 = 0;
    do {
        func_8001A290(var_s0 & 0xFF);
        temp_t8 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t8;
    } while (temp_t8 < 5);
    func_8001E8CC(0xF2000000U, 1);
    Audio_PlaySfx(0x0903F004U, gDefaultSfxPos, 4U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
    func_800182F4(0x100000FF);
    func_800182F4(0x110000FF);
    func_800182F4(0x27);
}

void func_8001D638(u8 arg0) {
    if (arg0 & 0xFF) {
        Audio_PlaySfx(0x4900F000U, gDefaultSfxPos, 4U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        func_8001E8CC(0xF1000000U, 0);
        return;
    }
    Audio_PlaySfx(0x4900F000U, gDefaultSfxPos, 4U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
    func_8001E8CC(0xF2000000U, 0);
}

void func_8001D6DC(s32 arg0) {
    if (arg0 & 0xFF) {
        Audio_PlaySfx(0x49000019U, gDefaultSfxPos, 4U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        func_8001E8CC(0xF1000000U, 0);
        return;
    }
    Audio_PlaySfx(0x4900101AU, gDefaultSfxPos, 4U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
    func_8001E8CC(0xF2000000U, 0);
}

void func_8001D780(s32 arg0) {
    f32 temp_fs0;
    s32 temp_s0;
    s32 temp_t4;
    s32 temp_t6;
    s32 var_s0;
    s8 temp_t9;

    temp_t6 = arg0 & 0xFF;
    temp_t9 = ((s32) (D_800C5D68[temp_t6] * 0x7F) / 99) & 0x7F;
    switch (temp_t6) {                              /* irregular */
        case 0:
            temp_s0 = temp_t9 & 0xFF;
            func_800185A0(0, 0, temp_s0 & 0xFF, 1U);
            func_800185A0(1, 0, temp_s0 & 0xFF, 1U);
            return;
        case 2:
            var_s0 = 0;
            temp_fs0 = (f32) temp_t9 / 127.0f;
            do {
                func_8001E8A8(((var_s0 & 0xFF) << 8) | 0x02020000, temp_fs0);
                temp_t4 = (var_s0 + 1) & 0xFF;
                var_s0 = temp_t4;
            } while (temp_t4 < 0xF);
            return;
        case 1:
            func_8001E8A8(0x02030F00U, (f32) temp_t9 / 127.0f);
            return;
    }
}

void func_8001D8A8(u8 arg0, u8 arg1) {
    s32 temp_t6;
    s32 temp_t7;
    s32 var_a1;

    temp_t7 = arg1 & 0xFF;
    temp_t6 = arg0 & 0xFF;
    var_a1 = temp_t7;
    if (temp_t7 >= 0x64) {
        var_a1 = 0x63;
    }
    D_800C5D68[temp_t6] = (u8) var_a1;
    func_8001D780(temp_t6, (u8) var_a1);
}

void func_8001D8F4(u8 arg0) {
    s32 temp_t6;

    temp_t6 = arg0 & 0xFF;
    switch (temp_t6) {                              /* irregular */
        case 0:
            func_8001D444(0U, 0x24U, 0U, 0xFFU);
            func_8001ACDC(1);
            func_8001A838(0x0100001FU);
            func_8001A838(0x0100F005U);
            return;
        case 1:
            func_8001D444(0U, 0x2EU, 0U, 0xFFU);
            func_8001ACDC(2);
            Audio_PlaySfx(0x0100001FU, gDefaultSfxPos, 0U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
            Audio_PlaySfx(0x0100F005U, gDefaultSfxPos, 0U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
            return;
    }
}

void func_8001D9E0(u8 arg0, u16 arg1, u16 arg2, u8 arg3) {
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 temp_t8;
    s32 temp_t9;

    func_8001D444(arg0, arg1 & 0x7FFF, 0U, 0xFFU);
    temp_t8 = arg0 << 0x18;
    temp_t9 = arg3 << 0x10;
    sp18 = temp_t9;
    sp1C = temp_t8;
    sp20 = (s32) arg2;
    func_800182F4(temp_t8 | 0x50000000 | temp_t9 | arg2);
    func_800182F4(sp1C | 0xB0003000 | sp18 | (((s32) arg2 / 10) & 0xFF));
}

void func_8001DA90(u8 arg0) {
    u16 sp26;
    u8 sp25;
    s32 sp20;
    SoundTestTrack* temp_v0;
    s32 temp_a1;

    temp_a1 = arg0 & 0xFF;
    if ((temp_a1 >= 0x2D) && (temp_a1 < 0x32)) {
        sp20 = temp_a1;
        func_800182F4(0x100100FF);
        func_800182F4(0x110100FF);
        gPlaylistIndex = temp_a1 - 0x2D;
        gPlaylistCmdIndex = 0;
        gPlaylistTimer = 0;
        return;
    }
    if (temp_a1 >= 0x32) {
        Audio_PlaySfx(0x4900100AU, gDefaultSfxPos, 4U, &gDefaultScale, &gDefaultScale, &gDefaultReverb);
        return;
    }
    gPlaylistIndex = 0xFF;
    temp_v0 = &D_800C5EE4[temp_a1];
    sp26 = temp_v0->unk_0 & 0xFF;
    sp25 = temp_v0->unk_4;
    func_800182F4(((D_800C5E70 ^ 1) << 0x18) | 0x100000FF | 0x50000);
    func_8001D444(D_800C5E70, sp26, 0U, sp25);
    D_800C5E70 ^= 1;
}

void func_8001DBD0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = (arg0 & 0xFF) << 0x10;
    func_800182F4(temp_s0 | 0x40000000);
    func_800182F4(temp_s0 | 0x41000000);
    func_800182F4(temp_s0 | 0x42000000);
    func_800182F4(temp_s0 | 0x43000000);
}

void func_8001DC2C(void) {
    s32 temp_t6;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8001A290(var_s0 & 0xFF);
        temp_t6 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t6;
    } while (temp_t6 < 5);
}

void func_8001DC6C(u8 arg0, u16 arg1) {
    s32 temp_v0;

    temp_v0 = arg1 & 0xFFFF;
    func_800182F4(((((s32) (temp_v0 & 0xFF00) >> 8) & 0xFF) << 8) | 0xF0000000 | (temp_v0 & 0xFF));
}

void func_8001DCB4(s32 arg0) {
    func_800182F4((arg0 & 0xFFFF) | 0x10000);
}

void func_8001DCE0(void) {
    func_8001BC48();
    func_80017588();
    func_800190E4();
    func_8001AB50();
    func_80017600(3U, 1U, 0xFFU, 1);
    func_80017600(2U, 0U, 0xFFU, 0xA);
}

void func_8001DD40(void) {
    u16 sp1E;
    u16 var_a3;

    sp1E = 1;
    func_80017600(3U, 1U, 0xFFU, 1);
    var_a3 = sp1E;
    if (D_800C5D54 == 0xC) {
        var_a3 = 0x168;
    } else if ((s32) D_800C5D54 < 0x17) {
        var_a3 = 0x5A;
    }
    func_80017600(2U, 0U, 0xFFU, (s32) var_a3);
    func_80017494();
    func_80017550();
    func_800182F4(0x4200007F);
    func_800182F4(0x4300007F);
    func_8001E920();
    func_8001E8CC(0xF8000000U, 0);
    func_8001E8CC(0xF8000000U, 0);
    func_8001E8CC(0xF8000000U, 0);
    func_8001D780(0);
    func_8001D780(2);
    func_8001D780(1);
}

void func_8001DE1C(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 == 0x10) {
        if ((D_800C5D54 == 0x16) || (D_800C5D54 == 0x17)) {
            D_800C5D58 = 2;
        }
    } else if ((temp_v0 == 0x1C) && (D_800C5D54 == 0x17)) {
        D_800C5D58 = 2;
    } else {
        D_800C5D58 = 1;
    }
    func_8001E8CC(0xF2000000U, 1);
    func_8001BC48();
    func_80017588();
    func_80019068();
    func_8001AB50();
}

void func_8001DECC(void) {
    if (func_80018FA4() == 0) {
        func_8001A988();
        func_8001831C();
        func_8001AAE4();
        func_8001BC20();
        func_8001AD44();
        func_8001AF50();
        func_800185F8();
        func_80018EE0();
        func_8001E920();
    }
    D_800C5D40 += 1;
}
