s32 func_80009B64(s32, s32 *, u16 *, s16);          /* extern */
? func_8000E4A0();                                  /* extern */
? func_8000ECC0(u8, ?);                             /* extern */
? func_8000EE14(u8, u8, u8);                        /* extern */
? func_8000EEE4(u8, u8, u8, OSMesgQueue *);         /* extern */
? func_8000EF48(u8, u8, u8, OSMesgQueue *);         /* extern */
? func_8000F010();                                  /* extern */
? func_8000F078(u8);                                /* extern */
? func_8000F200(u8, u8, u8);                        /* extern */
? func_8000FF9C(u8);                                /* extern */
? func_8001E7C8();                                  /* extern */
void func_8001E720(u8 arg0, s32 arg1);              /* static */
void func_8001E778(u8 arg0, s32 arg1);              /* static */
void func_8001E9AC(void *arg0);                     /* static */
extern s32 D_800C7C68;
extern AudioTask *D_800C7C6C;
extern s32 D_800C7C70;
extern u8 D_800C7C74;
extern u8 D_800C7C78;
extern u8 D_8014E684;
extern u8 D_8014E7D0;
extern u8 D_8014E91C;
extern ? D_80152FE8;
extern ? D_80155E00;

SPTask *func_8001DF50(void) {
    u32 sp54;
    s32 sp50;
    s32 sp4C;
    u16 *sp40;
    void *sp38;
    void *sp34;
    u16 *sp28;
    u16 **sp20;
    s16 temp_v0;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_t5;
    u16 **temp_t0;
    u16 *temp_a3;

    D_80155CA8 += 1;
    if (((s32) D_80155CA8 % (s16) D_80155C78.specUnk4) != 0) {
        return (SPTask *) D_800C7C6C;
    }
    osSendMesg(D_800C7C58, (void *) D_80155CA8, 0);
    temp_t5 = D_80155CB4 + 1;
    temp_hi = temp_t5 % 3;
    temp_hi_2 = (s32) (temp_hi + 1) % 3;
    D_80155CB4 = temp_t5;
    D_80155CB0 ^= 1;
    D_80155CB4 = temp_hi;
    sp4C = temp_hi_2;
    sp54 = osAiGetLength() >> 2;
    if ((u32) D_80155D8C < 0x10U) {
        temp_v0 = (s16) D_80155D7C[temp_hi_2];
        if (temp_v0 != 0) {
            osAiSetNextBuffer(D_80155D70[temp_hi_2], temp_v0 * 4);
        }
    }
    D_80155CAC = 0;
    func_8000E4A0();
    func_8000FF9C(D_8014D528);
    if (osRecvMesg(D_800C7C60, &sp38, 0) != -1) {
        if (D_8014D528 == 0) {
            D_8014D528 = 5;
        }
        D_8014D529 = (u8) sp38;
    }
    if ((D_8014D528 != 0) && (func_8000D104() == 0)) {
        if (D_8014D528 == 0) {
            osSendMesg(D_800C7C64, (void *) D_8014D529, 0);
        }
        D_800C7C6C = NULL;
        return NULL;
    }
    if ((u32) D_80155D8C >= 0x11U) {
        return NULL;
    }
    if (D_80155D8C != 0) {
        D_80155D8C += 1;
    }
    D_80155CC4 = &D_80155CC8[D_80155CB0];
    D_80155CC0 = (s32) D_80155CB8[D_80155CB0];
    temp_t0 = &D_80155D70[D_80155CB4];
    sp40 = *temp_t0;
    temp_a3 = &D_80155D7C[D_80155CB4];
    *temp_a3 = (((D_80155C78.samplesPerFrameTarget - sp54) + 0x80) & 0xFFF0) + 0x10;
    if ((s16) *temp_a3 < D_80155C78.minAiBufferLength) {
        *temp_a3 = (u16) D_80155C78.minAiBufferLength;
    }
    if (D_80155C78.maxAiBufferLength < (s16) *temp_a3) {
        *temp_a3 = (u16) D_80155C78.maxAiBufferLength;
    }
    sp28 = temp_a3;
    sp20 = temp_t0;
    if (osRecvMesg(D_800C7C5C, &sp34, 0) != -1) {
        do {
            func_8001E9AC(sp34);
        } while (osRecvMesg(D_800C7C5C, &sp34, 0) != -1);
    }
    D_80155CC0 = func_80009B64(D_80155CC0, &sp50, sp40, (s16) *sp28);
    D_80155D84 = osGetCount() * (D_80155D84 + D_80155CA8);
    D_80155D84 += (s16) (*sp20)[D_80155CA8 & 0xFF];
    D_80155CC4->msgQueue = NULL;
    D_80155CC4->unk_44 = NULL;
    D_80155CC4->task.t.type = 2;
    D_80155CC4->task.t.ucode_boot_size = aspMainTextStart - rspbootTextStart;
    D_80155CC4->task.t.flags = 0;
    D_80155CC4->task.t.ucode_boot = (u64 *) rspbootTextStart;
    D_80155CC4->task.t.ucode = (u64 *) aspMainTextStart;
    D_80155CC4->task.t.ucode_data = (u64 *) aspMainDataStart;
    D_80155CC4->task.t.ucode_size = 0x1000;
    D_80155CC4->task.t.ucode_data_size = ((s32) (&D_800C3610 - aspMainDataStart) >> 3) * 8;
    D_80155CC4->task.t.dram_stack = NULL;
    D_80155CC4->task.t.dram_stack_size = 0;
    D_80155CC4->task.t.output_buff = NULL;
    D_80155CC4->task.t.output_buff_size = NULL;
    D_80155CC4->task.t.data_ptr = (u64 *) D_80155CB8[D_80155CB0];
    D_80155CC4->task.t.yield_data_ptr = NULL;
    D_80155CC4->task.t.yield_data_size = 0;
    D_80155CC4->task.t.data_size = sp50 * 8;
    if (D_800C7C68 < sp50) {
        D_800C7C68 = sp50;
    }
    if (D_80155C78.specUnk4 == 1) {
        return (SPTask *) D_80155CC4;
    }
    D_800C7C6C = D_80155CC4;
    return NULL;
}

void func_8001E444(void *arg0) {
    SequencePlayer *temp_a0;
    s32 temp_a1;
    s32 var_a0;
    s32 var_a1;
    u8 *temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;

    temp_v0 = arg0->unk0;
    switch ((s32) temp_v0) {                        /* irregular */
    case 0x81:
        func_8000ECC0(arg0->unk2, 3);
        return;
    case 0x82:
    case 0x88:
        func_8000F200(arg0->unk1, arg0->unk2, arg0->unk3);
        func_8001E778(arg0->unk1, arg0->unk4);
        return;
    case 0x83:
        temp_v0_2 = arg0->unk1;
        temp_a0 = &D_8014E538[temp_v0_2];
        if (((u32) *temp_a0 >> 0x1F) != 0) {
            temp_a1 = arg0->unk4;
            if (temp_a1 == 0) {
                func_800144E4(temp_a0);
                return;
            }
            func_8001E720(temp_v0_2, temp_a1);
            return;
        }
        return;
    case 0xF0:
        D_80155CA6 = (s8) arg0->unk4;
        return;
    case 0xF1:
        *D_8014E538 |= 0x24;
        D_8014E684 |= 0x24;
        D_8014E7D0 |= 0x24;
        D_8014E91C |= 0x24;
        return;
    case 0xF2:
        if (arg0->unk4 == 1) {
            var_a0 = 0;
            var_a1 = 0;
            if (D_80155CA0 > 0) {
                do {
                    var_a0 += 1;
                    temp_v1 = var_a1 + D_8014E530;
                    if ((((u32) temp_v1->unkB0 >> 0x1F) != 0) && (temp_v1->unk34 == 0)) {
                        temp_v0_3 = temp_v1->unk44;
                        if (temp_v0_3 != (void *)-1) {
                            temp_v0_4 = temp_v1 + 0xB0;
                            if (temp_v0_3->unk4C->unk3 & 8) {
                                *temp_v0_4 |= 0x20;
                            }
                        }
                    }
                    var_a1 += 0xC0;
                } while (var_a0 < D_80155CA0);
            }
        }
        *D_8014E538 = (*D_8014E538 & 0xFFDF) | 4;
        D_8014E684 = (D_8014E684 & 0xFFDF) | 4;
        D_8014E7D0 = (D_8014E7D0 & 0xFFDF) | 4;
        D_8014E91C = (D_8014E91C & 0xFFDF) | 4;
        return;
    case 0xF3:
        func_8000EE14(arg0->unk1, arg0->unk2, arg0->unk3);
        return;
    case 0xF4:
        func_8000EEE4(arg0->unk1, arg0->unk2, arg0->unk3, &D_80154248);
        return;
    case 0xF5:
        func_8000EF48(arg0->unk1, arg0->unk2, arg0->unk3, &D_80154248);
        return;
    case 0xF6:
        func_8000F078(arg0->unk2);
        break;
    }
}

void func_8001E720(u8 arg0, u16 arg1) {
    SequencePlayer *temp_v0;
    u16 var_a1;

    var_a1 = arg1;
    if (var_a1 == 0) {
        var_a1 = 1;
    }
    temp_v0 = &D_8014E538[arg0];
    temp_v0->state = 2;
    temp_v0->fadeTimer = var_a1;
    temp_v0->fadeVelocity = -(temp_v0->fadeVolume / (f32) var_a1);
}

void func_8001E778(u8 arg0, u16 arg1) {
    SequencePlayer *temp_v0;

    if (arg1 != 0) {
        temp_v0 = &D_8014E538[arg0];
        temp_v0->state = 1;
        temp_v0->fadeTimerUnkEu = arg1;
        temp_v0->fadeTimer = arg1;
        temp_v0->fadeVolume = 0.0f;
        temp_v0->fadeVelocity = 0.0f;
    }
}

void func_8001E850(s32 *arg0, s32 *arg1) {
    s32 temp_v1;
    s8 temp_t2;
    void *temp_v0;

    temp_v0 = ((u8) D_800C7C50 * 8) + &D_80155E00;
    temp_v0->unk0 = arg0;
    temp_v0->unk4 = (s32) *arg1;
    temp_t2 = (u8) D_800C7C50 + 1;
    D_800C7C50 = temp_t2;
    temp_v1 = temp_t2 & 0xFF;
    if ((u8) D_800C7C54 == temp_v1) {
        D_800C7C50 = temp_v1 - 1;
    }
}

void func_8001E8A8(s32 arg1) {
    func_8001E850(&arg1);
}

void func_8001E8CC(s32 arg1) {
    func_8001E850(&arg1);
}

void func_8001E8F0(s32 arg1) {
    s32 sp1C;

    sp1C = arg1 << 0x18;
    func_8001E850(&sp1C);
}

void func_8001E920(void) {
    s32 temp_t6;

    temp_t6 = (((u8) D_800C7C50 - (u8) D_800C7C54) + 0x100) & 0xFF;
    if (D_800C7C70 < temp_t6) {
        D_800C7C70 = temp_t6;
    }
    osSendMesg(D_800C7C5C, (void *) ((((u8) D_800C7C54 & 0xFF) << 8) | ((u8) D_800C7C50 & 0xFF)), 0);
    D_800C7C54 = (s8) (u8) D_800C7C50;
}

void func_8001E998(void) {
    D_800C7C54 = (s8) (u8) D_800C7C50;
}

void func_8001E9AC(u32 arg0) {
    s32 sp20;
    SequencePlayer *temp_v1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    s8 temp_v1_2;
    s8 temp_v1_3;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_v0;
    u8 temp_v1_4;
    void *temp_s0;
    void *temp_v0_2;

    if (D_800C7C78 == 0) {
        D_800C7C74 = (u8) (arg0 >> 8);
    }
    sp20 = arg0 & 0xFF;
loop_3:
    if (sp20 == D_800C7C74) {
        D_800C7C78 = 0;
        return;
    }
    temp_s0 = ((D_800C7C74 & 0xFF) * 8) + &D_80155E00;
    D_800C7C74 += 1;
    temp_a0 = temp_s0->unk0;
    if (temp_a0 == 0xF8) {
        D_800C7C78 = 1;
        return;
    }
    if ((temp_a0 & 0xF0) == 0xF0) {
        func_8001E444(temp_s0);
    } else {
        temp_v0 = temp_s0->unk1;
        if ((s32) temp_v0 < 4) {
            temp_v1 = &D_8014E538[temp_v0];
            if (temp_a0 & 0x80) {
                func_8001E444(temp_s0);
            } else if (temp_a0 & 0x40) {
                switch (temp_a0) {                  /* switch 1; irregular */
                case 0x41:                          /* switch 1 */
                    temp_fv0 = (bitwise f32) temp_s0->unk4;
                    if (temp_fv0 != temp_v1->fadeVolumeScale) {
                        temp_v1->fadeVolumeScale = temp_fv0;
                        temp_v1->unk0 = (u8) (temp_v1->unk0 | 4);
                    }
                    break;
                case 0x47:                          /* switch 1 */
                    temp_v1->tempo = (s32) temp_s0->unk4 * 0x30;
                    break;
                case 0x48:                          /* switch 1 */
                    temp_v1->transposition = (s16) temp_s0->unk4;
                    break;
                case 0x46:                          /* switch 1 */
                    (temp_v1 + temp_s0->unk3)->unk7 = (s8) temp_s0->unk4;
                    break;
                }
            } else if (((u32) temp_v1->unk0 >> 0x1F) != 0) {
                temp_a1 = temp_s0->unk2;
                if ((s32) temp_a1 < 0x10) {
                    temp_v0_2 = (temp_v1 + (temp_a1 * 4))->unk34;
                    if (temp_v0_2 != &D_80152FE8) {
                        switch (temp_a0) {
                        case 1:
                            temp_fv0_2 = (bitwise f32) temp_s0->unk4;
                            if (temp_fv0_2 != temp_v0_2->unk20) {
                                temp_v0_2->unk20 = temp_fv0_2;
                                temp_v0_2->unk1 = (u8) (temp_v0_2->unk1 | 0x40);
                            }
                            break;
                        case 2:
                            temp_fv0_3 = (bitwise f32) temp_s0->unk4;
                            if (temp_fv0_3 != temp_v0_2->unk24) {
                                temp_v0_2->unk24 = temp_fv0_3;
                                temp_v0_2->unk1 = (u8) (temp_v0_2->unk1 | 0x40);
                            }
                            break;
                        case 3:
                            temp_v1_2 = temp_s0->unk4;
                            if (temp_v1_2 != temp_v0_2->unk9) {
                                temp_v0_2->unk9 = (u8) temp_v1_2;
                                temp_v0_2->unk1 = (u8) (temp_v0_2->unk1 | 0x20);
                            }
                            break;
                        case 4:
                            temp_fv0_4 = (bitwise f32) temp_s0->unk4;
                            if (temp_fv0_4 != temp_v0_2->unk30) {
                                temp_v0_2->unk30 = temp_fv0_4;
                                temp_v0_2->unk1 = (u8) (temp_v0_2->unk1 | 0x80);
                            }
                            break;
                        case 5:
                            temp_v1_3 = temp_s0->unk4;
                            if (temp_v1_3 != temp_v0_2->unk4) {
                                temp_v0_2->unk4 = (u8) temp_v1_3;
                            }
                            break;
                        case 6:
                            temp_v1_4 = temp_s0->unk3;
                            if ((s32) temp_v1_4 < 8) {
                                (temp_v0_2 + temp_v1_4)->unkBC = (s8) temp_s0->unk4;
                            }
                            break;
                        case 8:
                            temp_v0_2->unk0 = (u8) (((temp_s0->unk4 * 0x10) & 0x10) | (temp_v0_2->unk0 & 0xFFEF));
                            break;
                        }
                    }
                }
            }
        }
    }
    temp_s0->unk0 = 0U;
    goto loop_3;
}

u32 func_8001ECAC(s32 *arg0) {
    void *sp1C;

    if (osRecvMesg(&D_80154248, &sp1C, 0) == -1) {
        *arg0 = 0;
        return 0U;
    }
    *arg0 = (s32) sp1C & 0xFFFFFF;
    return (u32) sp1C >> 0x18;
}

void func_8001ED14(void) {
    func_8000F010();
}

s32 func_8001ED34(void) {
    void *sp18;
    s32 var_v0;

    if (osRecvMesg(D_800C7C64, &sp18, 0) == -1) {
        return 0;
    }
    var_v0 = 1;
    if (sp18 != D_8014D529) {
        var_v0 = 0;
    }
    return var_v0;
}

void func_8001ED8C(void *arg0) {
    void *sp28;

    do {

    } while (osRecvMesg(D_800C7C64, &sp28, 0) != -1);
    func_8001E998();
    osSendMesg(D_800C7C60, arg0, 0);
}

void func_8001EE00(void) {
    D_80155D8C = 1;
    func_8001ED8C(NULL);
    D_8014D528 = 0;
}

void func_8001EE3C(void) {
    func_8001E7C8();
}
