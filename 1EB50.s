glabel func_8001DF50
/* 01EB50 8001DF50 3C038015 */  lui         $v1, %hi(gAudioTaskCountQ)
/* 01EB54 8001DF54 24635CA8 */  addiu       $v1, $v1, %lo(gAudioTaskCountQ)
/* 01EB58 8001DF58 8C620000 */  lw          $v0, 0x0($v1)
/* 01EB5C 8001DF5C 3C188015 */  lui         $t8, %hi(gAudioBufferParams)
/* 01EB60 8001DF60 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* 01EB64 8001DF64 244E0001 */  addiu       $t6, $v0, 0x1
/* 01EB68 8001DF68 AC6E0000 */  sw          $t6, 0x0($v1)
/* 01EB6C 8001DF6C 8C6F0000 */  lw          $t7, 0x0($v1)
/* 01EB70 8001DF70 87185C78 */  lh          $t8, %lo(gAudioBufferParams)($t8)
/* 01EB74 8001DF74 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01EB78 8001DF78 3C02800C */  lui         $v0, %hi(D_800C7C6C)
/* 01EB7C 8001DF7C 01F8001A */  div         $zero, $t7, $t8
/* 01EB80 8001DF80 0000C810 */  mfhi        $t9
/* 01EB84 8001DF84 3C04800C */  lui         $a0, %hi(D_800C7C58)
/* 01EB88 8001DF88 17000002 */  bnez        $t8, .L8001DF94
/* 01EB8C 8001DF8C 00000000 */   nop
/* 01EB90 8001DF90 0007000D */  break       7
.L8001DF94:
/* 01EB94 8001DF94 2401FFFF */  addiu       $at, $zero, -0x1
/* 01EB98 8001DF98 17010004 */  bne         $t8, $at, .L8001DFAC
/* 01EB9C 8001DF9C 3C018000 */   lui        $at, (0x80000000 >> 16)
/* 01EBA0 8001DFA0 15E10002 */  bne         $t7, $at, .L8001DFAC
/* 01EBA4 8001DFA4 00000000 */   nop
/* 01EBA8 8001DFA8 0006000D */  break       6
.L8001DFAC:
/* 01EBAC 8001DFAC 00003025 */  or          $a2, $zero, $zero
/* 01EBB0 8001DFB0 13200003 */  beqz        $t9, .L8001DFC0
/* 01EBB4 8001DFB4 00000000 */   nop
/* 01EBB8 8001DFB8 1000011E */  b           .L8001E434
/* 01EBBC 8001DFBC 8C427C6C */   lw         $v0, %lo(D_800C7C6C)($v0)
.L8001DFC0:
/* 01EBC0 8001DFC0 8C847C58 */  lw          $a0, %lo(D_800C7C58)($a0)
/* 01EBC4 8001DFC4 0C0081C8 */  jal         osSendMesg
/* 01EBC8 8001DFC8 8C650000 */   lw         $a1, 0x0($v1)
/* 01EBCC 8001DFCC 24030003 */  addiu       $v1, $zero, 0x3
/* 01EBD0 8001DFD0 3C048015 */  lui         $a0, %hi(gCurAiBuffIndex)
/* 01EBD4 8001DFD4 24845CB4 */  addiu       $a0, $a0, %lo(gCurAiBuffIndex)
/* 01EBD8 8001DFD8 8C8C0000 */  lw          $t4, 0x0($a0)
/* 01EBDC 8001DFDC 3C058015 */  lui         $a1, %hi(gAudioTaskIndexQ)
/* 01EBE0 8001DFE0 24A55CB0 */  addiu       $a1, $a1, %lo(gAudioTaskIndexQ)
/* 01EBE4 8001DFE4 258D0001 */  addiu       $t5, $t4, 0x1
/* 01EBE8 8001DFE8 01A3001A */  div         $zero, $t5, $v1
/* 01EBEC 8001DFEC 00007810 */  mfhi        $t7
/* 01EBF0 8001DFF0 25F90001 */  addiu       $t9, $t7, 0x1
/* 01EBF4 8001DFF4 01A07025 */  or          $t6, $t5, $zero
/* 01EBF8 8001DFF8 0323001A */  div         $zero, $t9, $v1
/* 01EBFC 8001DFFC 8CAA0000 */  lw          $t2, 0x0($a1)
/* 01EC00 8001E000 AC8D0000 */  sw          $t5, 0x0($a0)
/* 01EC04 8001E004 00003010 */  mfhi        $a2
/* 01EC08 8001E008 394B0001 */  xori        $t3, $t2, 0x1
/* 01EC0C 8001E00C ACAB0000 */  sw          $t3, 0x0($a1)
/* 01EC10 8001E010 14600002 */  bnez        $v1, .L8001E01C
/* 01EC14 8001E014 00000000 */   nop
/* 01EC18 8001E018 0007000D */  break       7
.L8001E01C:
/* 01EC1C 8001E01C 2401FFFF */  addiu       $at, $zero, -0x1
/* 01EC20 8001E020 14610004 */  bne         $v1, $at, .L8001E034
/* 01EC24 8001E024 3C018000 */   lui        $at, (0x80000000 >> 16)
/* 01EC28 8001E028 15C10002 */  bne         $t6, $at, .L8001E034
/* 01EC2C 8001E02C 00000000 */   nop
/* 01EC30 8001E030 0006000D */  break       6
.L8001E034:
/* 01EC34 8001E034 AC8F0000 */  sw          $t7, 0x0($a0)
/* 01EC38 8001E038 01E0C025 */  or          $t8, $t7, $zero
/* 01EC3C 8001E03C 14600002 */  bnez        $v1, .L8001E048
/* 01EC40 8001E040 00000000 */   nop
/* 01EC44 8001E044 0007000D */  break       7
.L8001E048:
/* 01EC48 8001E048 2401FFFF */  addiu       $at, $zero, -0x1
/* 01EC4C 8001E04C 14610004 */  bne         $v1, $at, .L8001E060
/* 01EC50 8001E050 3C018000 */   lui        $at, (0x80000000 >> 16)
/* 01EC54 8001E054 17210002 */  bne         $t9, $at, .L8001E060
/* 01EC58 8001E058 00000000 */   nop
/* 01EC5C 8001E05C 0006000D */  break       6
.L8001E060:
/* 01EC60 8001E060 AFA6004C */  sw          $a2, 0x4C($sp)
/* 01EC64 8001E064 0C009424 */  jal         osAiGetLength
/* 01EC68 8001E068 00000000 */   nop
/* 01EC6C 8001E06C 00025082 */  srl         $t2, $v0, 2
/* 01EC70 8001E070 3C0B8015 */  lui         $t3, %hi(gResetTimer)
/* 01EC74 8001E074 AFAA0054 */  sw          $t2, 0x54($sp)
/* 01EC78 8001E078 256B5D8C */  addiu       $t3, $t3, %lo(gResetTimer)
/* 01EC7C 8001E07C 8D6C0000 */  lw          $t4, 0x0($t3)
/* 01EC80 8001E080 8FA6004C */  lw          $a2, 0x4C($sp)
/* 01EC84 8001E084 3C028015 */  lui         $v0, %hi(gAiBuffLengths)
/* 01EC88 8001E088 2D810010 */  sltiu       $at, $t4, 0x10
/* 01EC8C 8001E08C 1020000A */  beqz        $at, .L8001E0B8
/* 01EC90 8001E090 00066840 */   sll        $t5, $a2, 1
/* 01EC94 8001E094 004D1021 */  addu        $v0, $v0, $t5
/* 01EC98 8001E098 84425D7C */  lh          $v0, %lo(gAiBuffLengths)($v0)
/* 01EC9C 8001E09C 00067080 */  sll         $t6, $a2, 2
/* 01ECA0 8001E0A0 3C048015 */  lui         $a0, %hi(gAiBuffers)
/* 01ECA4 8001E0A4 10400004 */  beqz        $v0, .L8001E0B8
/* 01ECA8 8001E0A8 008E2021 */   addu       $a0, $a0, $t6
/* 01ECAC 8001E0AC 8C845D70 */  lw          $a0, %lo(gAiBuffers)($a0)
/* 01ECB0 8001E0B0 0C009428 */  jal         osAiSetNextBuffer
/* 01ECB4 8001E0B4 00022880 */   sll        $a1, $v0, 2
.L8001E0B8:
/* 01ECB8 8001E0B8 3C038015 */  lui         $v1, %hi(gCurAudioFrameDmaCount)
/* 01ECBC 8001E0BC 24635CAC */  addiu       $v1, $v1, %lo(gCurAudioFrameDmaCount)
/* 01ECC0 8001E0C0 0C003928 */  jal         func_8000E4A0
/* 01ECC4 8001E0C4 AC600000 */   sw         $zero, 0x0($v1)
/* 01ECC8 8001E0C8 3C0F8015 */  lui         $t7, %hi(gResetStatus)
/* 01ECCC 8001E0CC 25EFD528 */  addiu       $t7, $t7, %lo(gResetStatus)
/* 01ECD0 8001E0D0 0C003FE7 */  jal         func_8000FF9C
/* 01ECD4 8001E0D4 91E40000 */   lbu        $a0, 0x0($t7)
/* 01ECD8 8001E0D8 3C04800C */  lui         $a0, %hi(D_800C7C60)
/* 01ECDC 8001E0DC 8C847C60 */  lw          $a0, %lo(D_800C7C60)($a0)
/* 01ECE0 8001E0E0 27A50038 */  addiu       $a1, $sp, 0x38
/* 01ECE4 8001E0E4 0C008178 */  jal         osRecvMesg
/* 01ECE8 8001E0E8 00003025 */   or         $a2, $zero, $zero
/* 01ECEC 8001E0EC 2401FFFF */  addiu       $at, $zero, -0x1
/* 01ECF0 8001E0F0 1041000A */  beq         $v0, $at, .L8001E11C
/* 01ECF4 8001E0F4 3C028015 */   lui        $v0, %hi(gResetStatus)
/* 01ECF8 8001E0F8 2442D528 */  addiu       $v0, $v0, %lo(gResetStatus)
/* 01ECFC 8001E0FC 90580000 */  lbu         $t8, 0x0($v0)
/* 01ED00 8001E100 24190005 */  addiu       $t9, $zero, 0x5
/* 01ED04 8001E104 57000003 */  bnel        $t8, $zero, .L8001E114
/* 01ED08 8001E108 8FAA0038 */   lw         $t2, 0x38($sp)
/* 01ED0C 8001E10C A0590000 */  sb          $t9, 0x0($v0)
/* 01ED10 8001E110 8FAA0038 */  lw          $t2, 0x38($sp)
.L8001E114:
/* 01ED14 8001E114 3C018015 */  lui         $at, %hi(gAudioSpecId)
/* 01ED18 8001E118 A02AD529 */  sb          $t2, %lo(gAudioSpecId)($at)
.L8001E11C:
/* 01ED1C 8001E11C 3C028015 */  lui         $v0, %hi(gResetStatus)
/* 01ED20 8001E120 2442D528 */  addiu       $v0, $v0, %lo(gResetStatus)
/* 01ED24 8001E124 904B0000 */  lbu         $t3, 0x0($v0)
/* 01ED28 8001E128 11600012 */  beqz        $t3, .L8001E174
/* 01ED2C 8001E12C 00000000 */   nop
/* 01ED30 8001E130 0C003441 */  jal         AudioHeap_ResetStep
/* 01ED34 8001E134 00000000 */   nop
/* 01ED38 8001E138 1440000E */  bnez        $v0, .L8001E174
/* 01ED3C 8001E13C 3C0C8015 */   lui        $t4, %hi(gResetStatus)
/* 01ED40 8001E140 258CD528 */  addiu       $t4, $t4, %lo(gResetStatus)
/* 01ED44 8001E144 918D0000 */  lbu         $t5, 0x0($t4)
/* 01ED48 8001E148 3C04800C */  lui         $a0, %hi(D_800C7C64)
/* 01ED4C 8001E14C 3C058015 */  lui         $a1, %hi(gAudioSpecId)
/* 01ED50 8001E150 15A00004 */  bnez        $t5, .L8001E164
/* 01ED54 8001E154 00003025 */   or         $a2, $zero, $zero
/* 01ED58 8001E158 8C847C64 */  lw          $a0, %lo(D_800C7C64)($a0)
/* 01ED5C 8001E15C 0C0081C8 */  jal         osSendMesg
/* 01ED60 8001E160 90A5D529 */   lbu        $a1, %lo(gAudioSpecId)($a1)
.L8001E164:
/* 01ED64 8001E164 3C01800C */  lui         $at, %hi(D_800C7C6C)
/* 01ED68 8001E168 AC207C6C */  sw          $zero, %lo(D_800C7C6C)($at)
/* 01ED6C 8001E16C 100000B1 */  b           .L8001E434
/* 01ED70 8001E170 00001025 */   or         $v0, $zero, $zero
.L8001E174:
/* 01ED74 8001E174 3C038015 */  lui         $v1, %hi(gResetTimer)
/* 01ED78 8001E178 24635D8C */  addiu       $v1, $v1, %lo(gResetTimer)
/* 01ED7C 8001E17C 8C6E0000 */  lw          $t6, 0x0($v1)
/* 01ED80 8001E180 3C098015 */  lui         $t1, %hi(gAudioBufferParams)
/* 01ED84 8001E184 25295C78 */  addiu       $t1, $t1, %lo(gAudioBufferParams)
/* 01ED88 8001E188 2DC10011 */  sltiu       $at, $t6, 0x11
/* 01ED8C 8001E18C 14200003 */  bnez        $at, .L8001E19C
/* 01ED90 8001E190 3C0A8015 */   lui        $t2, %hi(gAudioRspTasks)
/* 01ED94 8001E194 100000A7 */  b           .L8001E434
/* 01ED98 8001E198 00001025 */   or         $v0, $zero, $zero
.L8001E19C:
/* 01ED9C 8001E19C 8C6F0000 */  lw          $t7, 0x0($v1)
/* 01EDA0 8001E1A0 254A5CC8 */  addiu       $t2, $t2, %lo(gAudioRspTasks)
/* 01EDA4 8001E1A4 3C018015 */  lui         $at, %hi(gAudioCurTask)
/* 01EDA8 8001E1A8 11E00004 */  beqz        $t7, .L8001E1BC
/* 01EDAC 8001E1AC 3C0D8015 */   lui        $t5, %hi(gAbiCmdBuffs)
/* 01EDB0 8001E1B0 8C620000 */  lw          $v0, 0x0($v1)
/* 01EDB4 8001E1B4 24580001 */  addiu       $t8, $v0, 0x1
/* 01EDB8 8001E1B8 AC780000 */  sw          $t8, 0x0($v1)
.L8001E1BC:
/* 01EDBC 8001E1BC 3C038015 */  lui         $v1, %hi(gAudioTaskIndexQ)
/* 01EDC0 8001E1C0 8C635CB0 */  lw          $v1, %lo(gAudioTaskIndexQ)($v1)
/* 01EDC4 8001E1C4 3C068015 */  lui         $a2, %hi(gCurAiBuffIndex)
/* 01EDC8 8001E1C8 8CC65CB4 */  lw          $a2, %lo(gCurAiBuffIndex)($a2)
/* 01EDCC 8001E1CC 0003C880 */  sll         $t9, $v1, 2
/* 01EDD0 8001E1D0 0323C821 */  addu        $t9, $t9, $v1
/* 01EDD4 8001E1D4 00036080 */  sll         $t4, $v1, 2
/* 01EDD8 8001E1D8 0019C900 */  sll         $t9, $t9, 4
/* 01EDDC 8001E1DC 01AC6821 */  addu        $t5, $t5, $t4
/* 01EDE0 8001E1E0 8DAD5CB8 */  lw          $t5, %lo(gAbiCmdBuffs)($t5)
/* 01EDE4 8001E1E4 032A5821 */  addu        $t3, $t9, $t2
/* 01EDE8 8001E1E8 AC2B5CC4 */  sw          $t3, %lo(gAudioCurTask)($at)
/* 01EDEC 8001E1EC 3C018015 */  lui         $at, %hi(D_80155CC0)
/* 01EDF0 8001E1F0 3C0F8015 */  lui         $t7, %hi(gAiBuffers)
/* 01EDF4 8001E1F4 AC2D5CC0 */  sw          $t5, %lo(D_80155CC0)($at)
/* 01EDF8 8001E1F8 852B0006 */  lh          $t3, 0x6($t1)
/* 01EDFC 8001E1FC 8FAC0054 */  lw          $t4, 0x54($sp)
/* 01EE00 8001E200 25EF5D70 */  addiu       $t7, $t7, %lo(gAiBuffers)
/* 01EE04 8001E204 00067080 */  sll         $t6, $a2, 2
/* 01EE08 8001E208 01CF4021 */  addu        $t0, $t6, $t7
/* 01EE0C 8001E20C 8D180000 */  lw          $t8, 0x0($t0)
/* 01EE10 8001E210 016C6823 */  subu        $t5, $t3, $t4
/* 01EE14 8001E214 25AE0080 */  addiu       $t6, $t5, 0x80
/* 01EE18 8001E218 3C0A8015 */  lui         $t2, %hi(gAiBuffLengths)
/* 01EE1C 8001E21C 254A5D7C */  addiu       $t2, $t2, %lo(gAiBuffLengths)
/* 01EE20 8001E220 31CFFFF0 */  andi        $t7, $t6, 0xFFF0
/* 01EE24 8001E224 0006C840 */  sll         $t9, $a2, 1
/* 01EE28 8001E228 AFB80040 */  sw          $t8, 0x40($sp)
/* 01EE2C 8001E22C 25F80010 */  addiu       $t8, $t7, 0x10
/* 01EE30 8001E230 032A3821 */  addu        $a3, $t9, $t2
/* 01EE34 8001E234 A4F80000 */  sh          $t8, 0x0($a3)
/* 01EE38 8001E238 84E20000 */  lh          $v0, 0x0($a3)
/* 01EE3C 8001E23C 8524000A */  lh          $a0, 0xA($t1)
/* 01EE40 8001E240 00003025 */  or          $a2, $zero, $zero
/* 01EE44 8001E244 27A50034 */  addiu       $a1, $sp, 0x34
/* 01EE48 8001E248 0044082A */  slt         $at, $v0, $a0
/* 01EE4C 8001E24C 50200004 */  beql        $at, $zero, .L8001E260
/* 01EE50 8001E250 85230008 */   lh         $v1, 0x8($t1)
/* 01EE54 8001E254 A4E40000 */  sh          $a0, 0x0($a3)
/* 01EE58 8001E258 84E20000 */  lh          $v0, 0x0($a3)
/* 01EE5C 8001E25C 85230008 */  lh          $v1, 0x8($t1)
.L8001E260:
/* 01EE60 8001E260 3C04800C */  lui         $a0, %hi(D_800C7C5C)
/* 01EE64 8001E264 0062082A */  slt         $at, $v1, $v0
/* 01EE68 8001E268 10200002 */  beqz        $at, .L8001E274
/* 01EE6C 8001E26C 00000000 */   nop
/* 01EE70 8001E270 A4E30000 */  sh          $v1, 0x0($a3)
.L8001E274:
/* 01EE74 8001E274 8C847C5C */  lw          $a0, %lo(D_800C7C5C)($a0)
/* 01EE78 8001E278 AFA70028 */  sw          $a3, 0x28($sp)
/* 01EE7C 8001E27C 0C008178 */  jal         osRecvMesg
/* 01EE80 8001E280 AFA80020 */   sw         $t0, 0x20($sp)
/* 01EE84 8001E284 2401FFFF */  addiu       $at, $zero, -0x1
/* 01EE88 8001E288 5041000C */  beql        $v0, $at, .L8001E2BC
/* 01EE8C 8001E28C 8FB90028 */   lw         $t9, 0x28($sp)
.L8001E290:
/* 01EE90 8001E290 0C007A6B */  jal         func_8001E9AC
/* 01EE94 8001E294 8FA40034 */   lw         $a0, 0x34($sp)
/* 01EE98 8001E298 3C04800C */  lui         $a0, %hi(D_800C7C5C)
/* 01EE9C 8001E29C 8C847C5C */  lw          $a0, %lo(D_800C7C5C)($a0)
/* 01EEA0 8001E2A0 27A50034 */  addiu       $a1, $sp, 0x34
/* 01EEA4 8001E2A4 0C008178 */  jal         osRecvMesg
/* 01EEA8 8001E2A8 00003025 */   or         $a2, $zero, $zero
/* 01EEAC 8001E2AC 2401FFFF */  addiu       $at, $zero, -0x1
/* 01EEB0 8001E2B0 1441FFF7 */  bne         $v0, $at, .L8001E290
/* 01EEB4 8001E2B4 00000000 */   nop
/* 01EEB8 8001E2B8 8FB90028 */  lw          $t9, 0x28($sp)
.L8001E2BC:
/* 01EEBC 8001E2BC 3C048015 */  lui         $a0, %hi(D_80155CC0)
/* 01EEC0 8001E2C0 8C845CC0 */  lw          $a0, %lo(D_80155CC0)($a0)
/* 01EEC4 8001E2C4 27A50050 */  addiu       $a1, $sp, 0x50
/* 01EEC8 8001E2C8 8FA60040 */  lw          $a2, 0x40($sp)
/* 01EECC 8001E2CC 0C0026D9 */  jal         func_80009B64
/* 01EED0 8001E2D0 87270000 */   lh         $a3, 0x0($t9)
/* 01EED4 8001E2D4 3C018015 */  lui         $at, %hi(D_80155CC0)
/* 01EED8 8001E2D8 0C009454 */  jal         osGetCount
/* 01EEDC 8001E2DC AC225CC0 */   sw         $v0, %lo(D_80155CC0)($at)
/* 01EEE0 8001E2E0 3C048015 */  lui         $a0, %hi(D_80155D84)
/* 01EEE4 8001E2E4 3C098015 */  lui         $t1, %hi(gAudioTaskCountQ)
/* 01EEE8 8001E2E8 25295CA8 */  addiu       $t1, $t1, %lo(gAudioTaskCountQ)
/* 01EEEC 8001E2EC 24845D84 */  addiu       $a0, $a0, %lo(D_80155D84)
/* 01EEF0 8001E2F0 8C8A0000 */  lw          $t2, 0x0($a0)
/* 01EEF4 8001E2F4 8D2B0000 */  lw          $t3, 0x0($t1)
/* 01EEF8 8001E2F8 8FAE0020 */  lw          $t6, 0x20($sp)
/* 01EEFC 8001E2FC 8D380000 */  lw          $t8, 0x0($t1)
/* 01EF00 8001E300 014B6021 */  addu        $t4, $t2, $t3
/* 01EF04 8001E304 004C0019 */  multu       $v0, $t4
/* 01EF08 8001E308 331900FF */  andi        $t9, $t8, 0xFF
/* 01EF0C 8001E30C 00195040 */  sll         $t2, $t9, 1
/* 01EF10 8001E310 3C088015 */  lui         $t0, %hi(gAudioCurTask)
/* 01EF14 8001E314 25085CC4 */  addiu       $t0, $t0, %lo(gAudioCurTask)
/* 01EF18 8001E318 8D180000 */  lw          $t8, 0x0($t0)
/* 01EF1C 8001E31C 3C068015 */  lui         $a2, %hi(gAudioTaskIndexQ)
/* 01EF20 8001E320 3C058000 */  lui         $a1, %hi(rspbootTextStart)
/* 01EF24 8001E324 24A50450 */  addiu       $a1, $a1, %lo(rspbootTextStart)
/* 01EF28 8001E328 3C07800C */  lui         $a3, %hi(aspMainDataStart)
/* 01EF2C 8001E32C 00006812 */  mflo        $t5
/* 01EF30 8001E330 AC8D0000 */  sw          $t5, 0x0($a0)
/* 01EF34 8001E334 8DCF0000 */  lw          $t7, 0x0($t6)
/* 01EF38 8001E338 8C8D0000 */  lw          $t5, 0x0($a0)
/* 01EF3C 8001E33C 24E732E0 */  addiu       $a3, $a3, %lo(aspMainDataStart)
/* 01EF40 8001E340 01EA5821 */  addu        $t3, $t7, $t2
/* 01EF44 8001E344 856C0000 */  lh          $t4, 0x0($t3)
/* 01EF48 8001E348 3C0A8000 */  lui         $t2, %hi(aspMainTextStart)
/* 01EF4C 8001E34C 254A0520 */  addiu       $t2, $t2, %lo(aspMainTextStart)
/* 01EF50 8001E350 018D7021 */  addu        $t6, $t4, $t5
/* 01EF54 8001E354 AC8E0000 */  sw          $t6, 0x0($a0)
/* 01EF58 8001E358 8CC65CB0 */  lw          $a2, %lo(gAudioTaskIndexQ)($a2)
/* 01EF5C 8001E35C AF000040 */  sw          $zero, 0x40($t8)
/* 01EF60 8001E360 8D190000 */  lw          $t9, 0x0($t0)
/* 01EF64 8001E364 3C0E800C */  lui         $t6, %hi(gSampleBankTableInit)
/* 01EF68 8001E368 01455823 */  subu        $t3, $t2, $a1
/* 01EF6C 8001E36C AF200044 */  sw          $zero, 0x44($t9)
/* 01EF70 8001E370 8D030000 */  lw          $v1, 0x0($t0)
/* 01EF74 8001E374 25CE3610 */  addiu       $t6, $t6, %lo(gSampleBankTableInit)
/* 01EF78 8001E378 240F0002 */  addiu       $t7, $zero, 0x2
/* 01EF7C 8001E37C 01C7C023 */  subu        $t8, $t6, $a3
/* 01EF80 8001E380 3C0C8000 */  lui         $t4, %hi(aspMainTextStart)
/* 01EF84 8001E384 0018C8C3 */  sra         $t9, $t8, 3
/* 01EF88 8001E388 AC6F0000 */  sw          $t7, 0x0($v1)
/* 01EF8C 8001E38C AC6B000C */  sw          $t3, 0xC($v1)
/* 01EF90 8001E390 258C0520 */  addiu       $t4, $t4, %lo(aspMainTextStart)
/* 01EF94 8001E394 240D1000 */  addiu       $t5, $zero, 0x1000
/* 01EF98 8001E398 001978C0 */  sll         $t7, $t9, 3
/* 01EF9C 8001E39C 3C0B8015 */  lui         $t3, %hi(gAbiCmdBuffs)
/* 01EFA0 8001E3A0 00065080 */  sll         $t2, $a2, 2
/* 01EFA4 8001E3A4 016A5821 */  addu        $t3, $t3, $t2
/* 01EFA8 8001E3A8 AC600004 */  sw          $zero, 0x4($v1)
/* 01EFAC 8001E3AC AC650008 */  sw          $a1, 0x8($v1)
/* 01EFB0 8001E3B0 AC6C0010 */  sw          $t4, 0x10($v1)
/* 01EFB4 8001E3B4 AC670018 */  sw          $a3, 0x18($v1)
/* 01EFB8 8001E3B8 AC6D0014 */  sw          $t5, 0x14($v1)
/* 01EFBC 8001E3BC AC6F001C */  sw          $t7, 0x1C($v1)
/* 01EFC0 8001E3C0 AC600020 */  sw          $zero, 0x20($v1)
/* 01EFC4 8001E3C4 AC600024 */  sw          $zero, 0x24($v1)
/* 01EFC8 8001E3C8 AC600028 */  sw          $zero, 0x28($v1)
/* 01EFCC 8001E3CC AC60002C */  sw          $zero, 0x2C($v1)
/* 01EFD0 8001E3D0 8D6B5CB8 */  lw          $t3, %lo(gAbiCmdBuffs)($t3)
/* 01EFD4 8001E3D4 3C0E800C */  lui         $t6, %hi(D_800C7C68)
/* 01EFD8 8001E3D8 3C198015 */  lui         $t9, %hi(gAudioBufferParams)
/* 01EFDC 8001E3DC AC6B0030 */  sw          $t3, 0x30($v1)
/* 01EFE0 8001E3E0 8FAC0050 */  lw          $t4, 0x50($sp)
/* 01EFE4 8001E3E4 AC600038 */  sw          $zero, 0x38($v1)
/* 01EFE8 8001E3E8 AC60003C */  sw          $zero, 0x3C($v1)
/* 01EFEC 8001E3EC 000C68C0 */  sll         $t5, $t4, 3
/* 01EFF0 8001E3F0 AC6D0034 */  sw          $t5, 0x34($v1)
/* 01EFF4 8001E3F4 8FB80050 */  lw          $t8, 0x50($sp)
/* 01EFF8 8001E3F8 8DCE7C68 */  lw          $t6, %lo(D_800C7C68)($t6)
/* 01EFFC 8001E3FC 01D8082A */  slt         $at, $t6, $t8
/* 01F000 8001E400 10200002 */  beqz        $at, .L8001E40C
/* 01F004 8001E404 3C01800C */   lui        $at, %hi(D_800C7C68)
/* 01F008 8001E408 AC387C68 */  sw          $t8, %lo(D_800C7C68)($at)
.L8001E40C:
/* 01F00C 8001E40C 87395C78 */  lh          $t9, %lo(gAudioBufferParams)($t9)
/* 01F010 8001E410 24010001 */  addiu       $at, $zero, 0x1
/* 01F014 8001E414 57210004 */  bnel        $t9, $at, .L8001E428
/* 01F018 8001E418 8D0F0000 */   lw         $t7, 0x0($t0)
/* 01F01C 8001E41C 10000005 */  b           .L8001E434
/* 01F020 8001E420 8D020000 */   lw         $v0, 0x0($t0)
/* 01F024 8001E424 8D0F0000 */  lw          $t7, 0x0($t0)
.L8001E428:
/* 01F028 8001E428 3C01800C */  lui         $at, %hi(D_800C7C6C)
/* 01F02C 8001E42C 00001025 */  or          $v0, $zero, $zero
/* 01F030 8001E430 AC2F7C6C */  sw          $t7, %lo(D_800C7C6C)($at)
.L8001E434:
/* 01F034 8001E434 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01F038 8001E438 27BD0058 */  addiu       $sp, $sp, 0x58
/* 01F03C 8001E43C 03E00008 */  jr          $ra
/* 01F040 8001E440 00000000 */   nop
.section .late_rodata
dlabel jtbl_800C92AC
/* 0C9EAC 800C92AC 8001E548 */ .word .L8001E548
/* 0C9EB0 800C92B0 8001E558 */ .word .L8001E558
/* 0C9EB4 800C92B4 8001E5AC */ .word .L8001E5AC
/* 0C9EB8 800C92B8 8001E6AC */ .word .L8001E6AC
/* 0C9EBC 800C92BC 8001E6C4 */ .word .L8001E6C4
/* 0C9EC0 800C92C0 8001E6E4 */ .word .L8001E6E4
/* 0C9EC4 800C92C4 8001E704 */ .word .L8001E704

dlabel jtbl_800C92C8
/* 0C9EC8 800C92C8 8001E4A8 */ .word .L8001E4A8
/* 0C9ECC 800C92CC 8001E4BC */ .word .L8001E4BC
/* 0C9ED0 800C92D0 8001E4E0 */ .word .L8001E4E0
/* 0C9ED4 800C92D4 8001E70C */ .word .L8001E70C
/* 0C9ED8 800C92D8 8001E70C */ .word .L8001E70C
/* 0C9EDC 800C92DC 8001E70C */ .word .L8001E70C
/* 0C9EE0 800C92E0 8001E70C */ .word .L8001E70C
/* 0C9EE4 800C92E4 8001E4BC */ .word .L8001E4BC


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_8001E444
/* 01F044 8001E444 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 01F048 8001E448 AFBF001C */  sw          $ra, 0x1C($sp)
/* 01F04C 8001E44C AFB00018 */  sw          $s0, 0x18($sp)
/* 01F050 8001E450 90820000 */  lbu         $v0, 0x0($a0)
/* 01F054 8001E454 00808025 */  or          $s0, $a0, $zero
/* 01F058 8001E458 28410089 */  slti        $at, $v0, 0x89
/* 01F05C 8001E45C 1420000A */  bnez        $at, .L8001E488
/* 01F060 8001E460 244FFF7F */   addiu      $t7, $v0, -0x81
/* 01F064 8001E464 244EFF10 */  addiu       $t6, $v0, -0xF0
/* 01F068 8001E468 2DC10007 */  sltiu       $at, $t6, 0x7
/* 01F06C 8001E46C 102000A7 */  beqz        $at, .L8001E70C
/* 01F070 8001E470 000E7080 */   sll        $t6, $t6, 2
/* 01F074 8001E474 3C01800D */  lui         $at, %hi(jtbl_800C92AC)
/* 01F078 8001E478 002E0821 */  addu        $at, $at, $t6
/* 01F07C 8001E47C 8C2E92AC */  lw          $t6, %lo(jtbl_800C92AC)($at)
/* 01F080 8001E480 01C00008 */  jr          $t6
/* 01F084 8001E484 00000000 */   nop
.L8001E488:
/* 01F088 8001E488 2DE10008 */  sltiu       $at, $t7, 0x8
/* 01F08C 8001E48C 1020009F */  beqz        $at, .L8001E70C
/* 01F090 8001E490 000F7880 */   sll        $t7, $t7, 2
/* 01F094 8001E494 3C01800D */  lui         $at, %hi(jtbl_800C92C8)
/* 01F098 8001E498 002F0821 */  addu        $at, $at, $t7
/* 01F09C 8001E49C 8C2F92C8 */  lw          $t7, %lo(jtbl_800C92C8)($at)
/* 01F0A0 8001E4A0 01E00008 */  jr          $t7
/* 01F0A4 8001E4A4 00000000 */   nop
.L8001E4A8:
/* 01F0A8 8001E4A8 92040002 */  lbu         $a0, 0x2($s0)
/* 01F0AC 8001E4AC 0C003B30 */  jal         func_8000ECC0
/* 01F0B0 8001E4B0 24050003 */   addiu      $a1, $zero, 0x3
/* 01F0B4 8001E4B4 10000096 */  b           .L8001E710
/* 01F0B8 8001E4B8 8FBF001C */   lw         $ra, 0x1C($sp)
.L8001E4BC:
/* 01F0BC 8001E4BC 92040001 */  lbu         $a0, 0x1($s0)
/* 01F0C0 8001E4C0 92050002 */  lbu         $a1, 0x2($s0)
/* 01F0C4 8001E4C4 0C003C80 */  jal         func_8000F200
/* 01F0C8 8001E4C8 92060003 */   lbu        $a2, 0x3($s0)
/* 01F0CC 8001E4CC 92040001 */  lbu         $a0, 0x1($s0)
/* 01F0D0 8001E4D0 0C0079DE */  jal         func_8001E778
/* 01F0D4 8001E4D4 8E050004 */   lw         $a1, 0x4($s0)
/* 01F0D8 8001E4D8 1000008D */  b           .L8001E710
/* 01F0DC 8001E4DC 8FBF001C */   lw         $ra, 0x1C($sp)
.L8001E4E0:
/* 01F0E0 8001E4E0 92020001 */  lbu         $v0, 0x1($s0)
/* 01F0E4 8001E4E4 3C198015 */  lui         $t9, %hi(gSeqPlayers)
/* 01F0E8 8001E4E8 2739E538 */  addiu       $t9, $t9, %lo(gSeqPlayers)
/* 01F0EC 8001E4EC 0002C080 */  sll         $t8, $v0, 2
/* 01F0F0 8001E4F0 0302C021 */  addu        $t8, $t8, $v0
/* 01F0F4 8001E4F4 0018C080 */  sll         $t8, $t8, 2
/* 01F0F8 8001E4F8 0302C021 */  addu        $t8, $t8, $v0
/* 01F0FC 8001E4FC 0018C080 */  sll         $t8, $t8, 2
/* 01F100 8001E500 0302C023 */  subu        $t8, $t8, $v0
/* 01F104 8001E504 0018C080 */  sll         $t8, $t8, 2
/* 01F108 8001E508 03192021 */  addu        $a0, $t8, $t9
/* 01F10C 8001E50C 8C890000 */  lw          $t1, 0x0($a0)
/* 01F110 8001E510 000957C2 */  srl         $t2, $t1, 31
/* 01F114 8001E514 5140007E */  beql        $t2, $zero, .L8001E710
/* 01F118 8001E518 8FBF001C */   lw         $ra, 0x1C($sp)
/* 01F11C 8001E51C 8E050004 */  lw          $a1, 0x4($s0)
/* 01F120 8001E520 14A00005 */  bnez        $a1, .L8001E538
/* 01F124 8001E524 00000000 */   nop
/* 01F128 8001E528 0C005139 */  jal         func_800144E4
/* 01F12C 8001E52C 00000000 */   nop
/* 01F130 8001E530 10000077 */  b           .L8001E710
/* 01F134 8001E534 8FBF001C */   lw         $ra, 0x1C($sp)
.L8001E538:
/* 01F138 8001E538 0C0079C8 */  jal         func_8001E720
/* 01F13C 8001E53C 00402025 */   or         $a0, $v0, $zero
/* 01F140 8001E540 10000073 */  b           .L8001E710
/* 01F144 8001E544 8FBF001C */   lw         $ra, 0x1C($sp)
.L8001E548:
/* 01F148 8001E548 8E0B0004 */  lw          $t3, 0x4($s0)
/* 01F14C 8001E54C 3C018015 */  lui         $at, %hi(gSoundMode)
/* 01F150 8001E550 1000006E */  b           .L8001E70C
/* 01F154 8001E554 A02B5CA6 */   sb         $t3, %lo(gSoundMode)($at)
.L8001E558:
/* 01F158 8001E558 3C028015 */  lui         $v0, %hi(gSeqPlayers)
/* 01F15C 8001E55C 904FE538 */  lbu         $t7, %lo(gSeqPlayers)($v0)
/* 01F160 8001E560 3C038015 */  lui         $v1, %hi(gSeqPlayers + 0x14C)
/* 01F164 8001E564 9069E684 */  lbu         $t1, %lo(gSeqPlayers + 0x14C)($v1)
/* 01F168 8001E568 3C048015 */  lui         $a0, %hi(gSeqPlayers + 0x298)
/* 01F16C 8001E56C 3C058015 */  lui         $a1, %hi(gSeqPlayers + 0x3E4)
/* 01F170 8001E570 90A5E91C */  lbu         $a1, %lo(gSeqPlayers + 0x3E4)($a1)
/* 01F174 8001E574 9084E7D0 */  lbu         $a0, %lo(gSeqPlayers + 0x298)($a0)
/* 01F178 8001E578 3C018015 */  lui         $at, %hi(gSeqPlayers)
/* 01F17C 8001E57C 35E20024 */  ori         $v0, $t7, 0x24
/* 01F180 8001E580 A022E538 */  sb          $v0, %lo(gSeqPlayers)($at)
/* 01F184 8001E584 3C018015 */  lui         $at, %hi(gSeqPlayers + 0x14C)
/* 01F188 8001E588 35230024 */  ori         $v1, $t1, 0x24
/* 01F18C 8001E58C A023E684 */  sb          $v1, %lo(gSeqPlayers + 0x14C)($at)
/* 01F190 8001E590 3C018015 */  lui         $at, %hi(gSeqPlayers + 0x298)
/* 01F194 8001E594 348B0024 */  ori         $t3, $a0, 0x24
/* 01F198 8001E598 A02BE7D0 */  sb          $t3, %lo(gSeqPlayers + 0x298)($at)
/* 01F19C 8001E59C 3C018015 */  lui         $at, %hi(gSeqPlayers + 0x3E4)
/* 01F1A0 8001E5A0 34B90024 */  ori         $t9, $a1, 0x24
/* 01F1A4 8001E5A4 10000059 */  b           .L8001E70C
/* 01F1A8 8001E5A8 A039E91C */   sb         $t9, %lo(gSeqPlayers + 0x3E4)($at)
.L8001E5AC:
/* 01F1AC 8001E5AC 8E090004 */  lw          $t1, 0x4($s0)
/* 01F1B0 8001E5B0 24010001 */  addiu       $at, $zero, 0x1
/* 01F1B4 8001E5B4 3C068015 */  lui         $a2, %hi(gNumNotes)
/* 01F1B8 8001E5B8 15210023 */  bne         $t1, $at, .L8001E648
/* 01F1BC 8001E5BC 00000000 */   nop
/* 01F1C0 8001E5C0 8CC65CA0 */  lw          $a2, %lo(gNumNotes)($a2)
/* 01F1C4 8001E5C4 00002025 */  or          $a0, $zero, $zero
/* 01F1C8 8001E5C8 00002825 */  or          $a1, $zero, $zero
/* 01F1CC 8001E5CC 18C0001E */  blez        $a2, .L8001E648
/* 01F1D0 8001E5D0 2408FFFF */   addiu      $t0, $zero, -0x1
/* 01F1D4 8001E5D4 3C078015 */  lui         $a3, %hi(gNotes)
/* 01F1D8 8001E5D8 24E7E530 */  addiu       $a3, $a3, %lo(gNotes)
.L8001E5DC:
/* 01F1DC 8001E5DC 8CEA0000 */  lw          $t2, 0x0($a3)
/* 01F1E0 8001E5E0 24840001 */  addiu       $a0, $a0, 0x1
/* 01F1E4 8001E5E4 00AA1821 */  addu        $v1, $a1, $t2
/* 01F1E8 8001E5E8 8C6B00B0 */  lw          $t3, 0xB0($v1)
/* 01F1EC 8001E5EC 000B67C2 */  srl         $t4, $t3, 31
/* 01F1F0 8001E5F0 51800013 */  beql        $t4, $zero, .L8001E640
/* 01F1F4 8001E5F4 0086082A */   slt        $at, $a0, $a2
/* 01F1F8 8001E5F8 906D0034 */  lbu         $t5, 0x34($v1)
/* 01F1FC 8001E5FC 55A00010 */  bnel        $t5, $zero, .L8001E640
/* 01F200 8001E600 0086082A */   slt        $at, $a0, $a2
/* 01F204 8001E604 8C620044 */  lw          $v0, 0x44($v1)
/* 01F208 8001E608 5102000D */  beql        $t0, $v0, .L8001E640
/* 01F20C 8001E60C 0086082A */   slt        $at, $a0, $a2
/* 01F210 8001E610 8C4E004C */  lw          $t6, 0x4C($v0)
/* 01F214 8001E614 246200B0 */  addiu       $v0, $v1, 0xB0
/* 01F218 8001E618 91CF0003 */  lbu         $t7, 0x3($t6)
/* 01F21C 8001E61C 31F80008 */  andi        $t8, $t7, 0x8
/* 01F220 8001E620 53000007 */  beql        $t8, $zero, .L8001E640
/* 01F224 8001E624 0086082A */   slt        $at, $a0, $a2
/* 01F228 8001E628 90490000 */  lbu         $t1, 0x0($v0)
/* 01F22C 8001E62C 3C068015 */  lui         $a2, %hi(gNumNotes)
/* 01F230 8001E630 352A0020 */  ori         $t2, $t1, 0x20
/* 01F234 8001E634 A04A0000 */  sb          $t2, 0x0($v0)
/* 01F238 8001E638 8CC65CA0 */  lw          $a2, %lo(gNumNotes)($a2)
/* 01F23C 8001E63C 0086082A */  slt         $at, $a0, $a2
.L8001E640:
/* 01F240 8001E640 1420FFE6 */  bnez        $at, .L8001E5DC
/* 01F244 8001E644 24A500C0 */   addiu      $a1, $a1, 0xC0
.L8001E648:
/* 01F248 8001E648 3C028015 */  lui         $v0, %hi(gSeqPlayers)
/* 01F24C 8001E64C 9042E538 */  lbu         $v0, %lo(gSeqPlayers)($v0)
/* 01F250 8001E650 3C038015 */  lui         $v1, %hi(gSeqPlayers + 0x14C)
/* 01F254 8001E654 9063E684 */  lbu         $v1, %lo(gSeqPlayers + 0x14C)($v1)
/* 01F258 8001E658 3C048015 */  lui         $a0, %hi(gSeqPlayers + 0x298)
/* 01F25C 8001E65C 9084E7D0 */  lbu         $a0, %lo(gSeqPlayers + 0x298)($a0)
/* 01F260 8001E660 3C058015 */  lui         $a1, %hi(gSeqPlayers + 0x3E4)
/* 01F264 8001E664 304DFFDF */  andi        $t5, $v0, 0xFFDF
/* 01F268 8001E668 90A5E91C */  lbu         $a1, %lo(gSeqPlayers + 0x3E4)($a1)
/* 01F26C 8001E66C 3C018015 */  lui         $at, %hi(gSeqPlayers)
/* 01F270 8001E670 35A20004 */  ori         $v0, $t5, 0x4
/* 01F274 8001E674 A022E538 */  sb          $v0, %lo(gSeqPlayers)($at)
/* 01F278 8001E678 3069FFDF */  andi        $t1, $v1, 0xFFDF
/* 01F27C 8001E67C 35230004 */  ori         $v1, $t1, 0x4
/* 01F280 8001E680 3C018015 */  lui         $at, %hi(gSeqPlayers + 0x14C)
/* 01F284 8001E684 A023E684 */  sb          $v1, %lo(gSeqPlayers + 0x14C)($at)
/* 01F288 8001E688 308EFFDF */  andi        $t6, $a0, 0xFFDF
/* 01F28C 8001E68C 35D80004 */  ori         $t8, $t6, 0x4
/* 01F290 8001E690 3C018015 */  lui         $at, %hi(gSeqPlayers + 0x298)
/* 01F294 8001E694 A038E7D0 */  sb          $t8, %lo(gSeqPlayers + 0x298)($at)
/* 01F298 8001E698 30AAFFDF */  andi        $t2, $a1, 0xFFDF
/* 01F29C 8001E69C 354C0004 */  ori         $t4, $t2, 0x4
/* 01F2A0 8001E6A0 3C018015 */  lui         $at, %hi(gSeqPlayers + 0x3E4)
/* 01F2A4 8001E6A4 10000019 */  b           .L8001E70C
/* 01F2A8 8001E6A8 A02CE91C */   sb         $t4, %lo(gSeqPlayers + 0x3E4)($at)
.L8001E6AC:
/* 01F2AC 8001E6AC 92040001 */  lbu         $a0, 0x1($s0)
/* 01F2B0 8001E6B0 92050002 */  lbu         $a1, 0x2($s0)
/* 01F2B4 8001E6B4 0C003B85 */  jal         func_8000EE14
/* 01F2B8 8001E6B8 92060003 */   lbu        $a2, 0x3($s0)
/* 01F2BC 8001E6BC 10000014 */  b           .L8001E710
/* 01F2C0 8001E6C0 8FBF001C */   lw         $ra, 0x1C($sp)
.L8001E6C4:
/* 01F2C4 8001E6C4 3C078015 */  lui         $a3, %hi(gExternalLoadQueue)
/* 01F2C8 8001E6C8 24E74248 */  addiu       $a3, $a3, %lo(gExternalLoadQueue)
/* 01F2CC 8001E6CC 92040001 */  lbu         $a0, 0x1($s0)
/* 01F2D0 8001E6D0 92050002 */  lbu         $a1, 0x2($s0)
/* 01F2D4 8001E6D4 0C003BB9 */  jal         func_8000EEE4
/* 01F2D8 8001E6D8 92060003 */   lbu        $a2, 0x3($s0)
/* 01F2DC 8001E6DC 1000000C */  b           .L8001E710
/* 01F2E0 8001E6E0 8FBF001C */   lw         $ra, 0x1C($sp)
.L8001E6E4:
/* 01F2E4 8001E6E4 3C078015 */  lui         $a3, %hi(gExternalLoadQueue)
/* 01F2E8 8001E6E8 24E74248 */  addiu       $a3, $a3, %lo(gExternalLoadQueue)
/* 01F2EC 8001E6EC 92040001 */  lbu         $a0, 0x1($s0)
/* 01F2F0 8001E6F0 92050002 */  lbu         $a1, 0x2($s0)
/* 01F2F4 8001E6F4 0C003BD2 */  jal         func_8000EF48
/* 01F2F8 8001E6F8 92060003 */   lbu        $a2, 0x3($s0)
/* 01F2FC 8001E6FC 10000004 */  b           .L8001E710
/* 01F300 8001E700 8FBF001C */   lw         $ra, 0x1C($sp)
.L8001E704:
/* 01F304 8001E704 0C003C1E */  jal         func_8000F078
/* 01F308 8001E708 92040002 */   lbu        $a0, 0x2($s0)
.L8001E70C:
/* 01F30C 8001E70C 8FBF001C */  lw          $ra, 0x1C($sp)
.L8001E710:
/* 01F310 8001E710 8FB00018 */  lw          $s0, 0x18($sp)
/* 01F314 8001E714 27BD0020 */  addiu       $sp, $sp, 0x20
/* 01F318 8001E718 03E00008 */  jr          $ra
/* 01F31C 8001E71C 00000000 */   nop
glabel func_8001E720
/* 01F320 8001E720 14A00002 */  bnez        $a1, .L8001E72C
/* 01F324 8001E724 00047080 */   sll        $t6, $a0, 2
/* 01F328 8001E728 24050001 */  addiu       $a1, $zero, 0x1
.L8001E72C:
/* 01F32C 8001E72C 01C47021 */  addu        $t6, $t6, $a0
/* 01F330 8001E730 44853000 */  mtc1        $a1, $ft1
/* 01F334 8001E734 000E7080 */  sll         $t6, $t6, 2
/* 01F338 8001E738 01C47021 */  addu        $t6, $t6, $a0
/* 01F33C 8001E73C 000E7080 */  sll         $t6, $t6, 2
/* 01F340 8001E740 46803220 */  cvt.s.w     $ft2, $ft1
/* 01F344 8001E744 01C47023 */  subu        $t6, $t6, $a0
/* 01F348 8001E748 3C0F8015 */  lui         $t7, %hi(gSeqPlayers)
/* 01F34C 8001E74C 25EFE538 */  addiu       $t7, $t7, %lo(gSeqPlayers)
/* 01F350 8001E750 000E7080 */  sll         $t6, $t6, 2
/* 01F354 8001E754 01CF1021 */  addu        $v0, $t6, $t7
/* 01F358 8001E758 C444001C */  lwc1        $ft0, 0x1C($v0)
/* 01F35C 8001E75C 24180002 */  addiu       $t8, $zero, 0x2
/* 01F360 8001E760 A0580001 */  sb          $t8, 0x1($v0)
/* 01F364 8001E764 46082283 */  div.s       $ft3, $ft0, $ft2
/* 01F368 8001E768 A4450012 */  sh          $a1, 0x12($v0)
/* 01F36C 8001E76C 46005407 */  neg.s       $ft4, $ft3
/* 01F370 8001E770 03E00008 */  jr          $ra
/* 01F374 8001E774 E4500020 */   swc1       $ft4, 0x20($v0)
glabel func_8001E778
/* 01F378 8001E778 10A00011 */  beqz        $a1, .L8001E7C0
/* 01F37C 8001E77C 00047080 */   sll        $t6, $a0, 2
/* 01F380 8001E780 01C47021 */  addu        $t6, $t6, $a0
/* 01F384 8001E784 000E7080 */  sll         $t6, $t6, 2
/* 01F388 8001E788 01C47021 */  addu        $t6, $t6, $a0
/* 01F38C 8001E78C 000E7080 */  sll         $t6, $t6, 2
/* 01F390 8001E790 01C47023 */  subu        $t6, $t6, $a0
/* 01F394 8001E794 3C0F8015 */  lui         $t7, %hi(gSeqPlayers)
/* 01F398 8001E798 25EFE538 */  addiu       $t7, $t7, %lo(gSeqPlayers)
/* 01F39C 8001E79C 000E7080 */  sll         $t6, $t6, 2
/* 01F3A0 8001E7A0 01CF1021 */  addu        $v0, $t6, $t7
/* 01F3A4 8001E7A4 44800000 */  mtc1        $zero, $fv0
/* 01F3A8 8001E7A8 24180001 */  addiu       $t8, $zero, 0x1
/* 01F3AC 8001E7AC A0580001 */  sb          $t8, 0x1($v0)
/* 01F3B0 8001E7B0 A4450014 */  sh          $a1, 0x14($v0)
/* 01F3B4 8001E7B4 A4450012 */  sh          $a1, 0x12($v0)
/* 01F3B8 8001E7B8 E440001C */  swc1        $fv0, 0x1C($v0)
/* 01F3BC 8001E7BC E4400020 */  swc1        $fv0, 0x20($v0)
.L8001E7C0:
/* 01F3C0 8001E7C0 03E00008 */  jr          $ra
/* 01F3C4 8001E7C4 00000000 */   nop
glabel func_8001E850
/* 01F450 8001E850 3C06800C */  lui         $a2, %hi(D_800C7C50)
/* 01F454 8001E854 24C67C50 */  addiu       $a2, $a2, %lo(D_800C7C50)
/* 01F458 8001E858 90CF0000 */  lbu         $t7, 0x0($a2)
/* 01F45C 8001E85C 3C198015 */  lui         $t9, %hi(D_80155E00)
/* 01F460 8001E860 27395E00 */  addiu       $t9, $t9, %lo(D_80155E00)
/* 01F464 8001E864 000FC0C0 */  sll         $t8, $t7, 3
/* 01F468 8001E868 03191021 */  addu        $v0, $t8, $t9
/* 01F46C 8001E86C AC440000 */  sw          $a0, 0x0($v0)
/* 01F470 8001E870 8CA80000 */  lw          $t0, 0x0($a1)
/* 01F474 8001E874 3C0B800C */  lui         $t3, %hi(D_800C7C54)
/* 01F478 8001E878 AC480004 */  sw          $t0, 0x4($v0)
/* 01F47C 8001E87C 90C90000 */  lbu         $t1, 0x0($a2)
/* 01F480 8001E880 252A0001 */  addiu       $t2, $t1, 0x1
/* 01F484 8001E884 A0CA0000 */  sb          $t2, 0x0($a2)
/* 01F488 8001E888 916B7C54 */  lbu         $t3, %lo(D_800C7C54)($t3)
/* 01F48C 8001E88C 314300FF */  andi        $v1, $t2, 0xFF
/* 01F490 8001E890 246CFFFF */  addiu       $t4, $v1, -0x1
/* 01F494 8001E894 15630002 */  bne         $t3, $v1, .L8001E8A0
/* 01F498 8001E898 00000000 */   nop
/* 01F49C 8001E89C A0CC0000 */  sb          $t4, 0x0($a2)
.L8001E8A0:
/* 01F4A0 8001E8A0 03E00008 */  jr          $ra
/* 01F4A4 8001E8A4 00000000 */   nop
glabel func_8001E8A8
/* 01F4A8 8001E8A8 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 01F4AC 8001E8AC AFBF0014 */  sw          $ra, 0x14($sp)
/* 01F4B0 8001E8B0 AFA5001C */  sw          $a1, 0x1C($sp)
/* 01F4B4 8001E8B4 0C007A14 */  jal         func_8001E850
/* 01F4B8 8001E8B8 27A5001C */   addiu      $a1, $sp, 0x1C
/* 01F4BC 8001E8BC 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01F4C0 8001E8C0 27BD0018 */  addiu       $sp, $sp, 0x18
/* 01F4C4 8001E8C4 03E00008 */  jr          $ra
/* 01F4C8 8001E8C8 00000000 */   nop
glabel func_8001E8CC
/* 01F4CC 8001E8CC 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 01F4D0 8001E8D0 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01F4D4 8001E8D4 AFA5001C */  sw          $a1, 0x1C($sp)
/* 01F4D8 8001E8D8 0C007A14 */  jal         func_8001E850
/* 01F4DC 8001E8DC 27A5001C */   addiu      $a1, $sp, 0x1C
/* 01F4E0 8001E8E0 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01F4E4 8001E8E4 27BD0018 */  addiu       $sp, $sp, 0x18
/* 01F4E8 8001E8E8 03E00008 */  jr          $ra
/* 01F4EC 8001E8EC 00000000 */   nop
glabel func_8001E8F0
/* 01F4F0 8001E8F0 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 01F4F4 8001E8F4 00A07025 */  or          $t6, $a1, $zero
/* 01F4F8 8001E8F8 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01F4FC 8001E8FC AFA50024 */  sw          $a1, 0x24($sp)
/* 01F500 8001E900 000E7E00 */  sll         $t7, $t6, 24
/* 01F504 8001E904 AFAF001C */  sw          $t7, 0x1C($sp)
/* 01F508 8001E908 0C007A14 */  jal         func_8001E850
/* 01F50C 8001E90C 27A5001C */   addiu      $a1, $sp, 0x1C
/* 01F510 8001E910 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01F514 8001E914 27BD0020 */  addiu       $sp, $sp, 0x20
/* 01F518 8001E918 03E00008 */  jr          $ra
/* 01F51C 8001E91C 00000000 */   nop
glabel func_8001E920
/* 01F520 8001E920 3C02800C */  lui         $v0, %hi(D_800C7C50)
/* 01F524 8001E924 3C03800C */  lui         $v1, %hi(D_800C7C54)
/* 01F528 8001E928 90637C54 */  lbu         $v1, %lo(D_800C7C54)($v1)
/* 01F52C 8001E92C 90427C50 */  lbu         $v0, %lo(D_800C7C50)($v0)
/* 01F530 8001E930 3C0F800C */  lui         $t7, %hi(D_800C7C70)
/* 01F534 8001E934 8DEF7C70 */  lw          $t7, %lo(D_800C7C70)($t7)
/* 01F538 8001E938 00432023 */  subu        $a0, $v0, $v1
/* 01F53C 8001E93C 24840100 */  addiu       $a0, $a0, 0x100
/* 01F540 8001E940 308E00FF */  andi        $t6, $a0, 0xFF
/* 01F544 8001E944 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 01F548 8001E948 01EE082A */  slt         $at, $t7, $t6
/* 01F54C 8001E94C 10200003 */  beqz        $at, .L8001E95C
/* 01F550 8001E950 AFBF0014 */   sw         $ra, 0x14($sp)
/* 01F554 8001E954 3C01800C */  lui         $at, %hi(D_800C7C70)
/* 01F558 8001E958 AC2E7C70 */  sw          $t6, %lo(D_800C7C70)($at)
.L8001E95C:
/* 01F55C 8001E95C 307800FF */  andi        $t8, $v1, 0xFF
/* 01F560 8001E960 0018CA00 */  sll         $t9, $t8, 8
/* 01F564 8001E964 304800FF */  andi        $t0, $v0, 0xFF
/* 01F568 8001E968 3C04800C */  lui         $a0, %hi(D_800C7C5C)
/* 01F56C 8001E96C 03282825 */  or          $a1, $t9, $t0
/* 01F570 8001E970 8C847C5C */  lw          $a0, %lo(D_800C7C5C)($a0)
/* 01F574 8001E974 0C0081C8 */  jal         osSendMesg
/* 01F578 8001E978 00003025 */   or         $a2, $zero, $zero
/* 01F57C 8001E97C 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01F580 8001E980 3C09800C */  lui         $t1, %hi(D_800C7C50)
/* 01F584 8001E984 91297C50 */  lbu         $t1, %lo(D_800C7C50)($t1)
/* 01F588 8001E988 3C01800C */  lui         $at, %hi(D_800C7C54)
/* 01F58C 8001E98C 27BD0018 */  addiu       $sp, $sp, 0x18
/* 01F590 8001E990 03E00008 */  jr          $ra
/* 01F594 8001E994 A0297C54 */   sb         $t1, %lo(D_800C7C54)($at)
glabel func_8001E998
/* 01F598 8001E998 3C0E800C */  lui         $t6, %hi(D_800C7C50)
/* 01F59C 8001E99C 91CE7C50 */  lbu         $t6, %lo(D_800C7C50)($t6)
/* 01F5A0 8001E9A0 3C01800C */  lui         $at, %hi(D_800C7C54)
/* 01F5A4 8001E9A4 03E00008 */  jr          $ra
/* 01F5A8 8001E9A8 A02E7C54 */   sb         $t6, %lo(D_800C7C54)($at)
.section .late_rodata
dlabel jtbl_800C92E8
/* 0C9EE8 800C92E8 8001EB94 */ .word .L8001EB94
/* 0C9EEC 800C92EC 8001EBC0 */ .word .L8001EBC0
/* 0C9EF0 800C92F0 8001EBEC */ .word .L8001EBEC
/* 0C9EF4 800C92F4 8001EC10 */ .word .L8001EC10
/* 0C9EF8 800C92F8 8001EC3C */ .word .L8001EC3C
/* 0C9EFC 800C92FC 8001EC54 */ .word .L8001EC54
/* 0C9F00 800C9300 8001EC90 */ .word .L8001EC90
/* 0C9F04 800C9304 8001EC74 */ .word .L8001EC74
/* 0C9F08 800C9308 00000000 */ .word 0x00000000
/* 0C9F0C 800C930C 00000000 */ .word 0x00000000


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_8001E9AC
/* 01F5AC 8001E9AC 3C0E800C */  lui         $t6, %hi(D_800C7C78)
/* 01F5B0 8001E9B0 91CE7C78 */  lbu         $t6, %lo(D_800C7C78)($t6)
/* 01F5B4 8001E9B4 27BDFFC0 */  addiu       $sp, $sp, -0x40
/* 01F5B8 8001E9B8 AFBF001C */  sw          $ra, 0x1C($sp)
/* 01F5BC 8001E9BC 15C00004 */  bnez        $t6, .L8001E9D0
/* 01F5C0 8001E9C0 AFB00018 */   sw         $s0, 0x18($sp)
/* 01F5C4 8001E9C4 0004C202 */  srl         $t8, $a0, 8
/* 01F5C8 8001E9C8 3C01800C */  lui         $at, %hi(D_800C7C74)
/* 01F5CC 8001E9CC A0387C74 */  sb          $t8, %lo(D_800C7C74)($at)
.L8001E9D0:
/* 01F5D0 8001E9D0 308800FF */  andi        $t0, $a0, 0xFF
/* 01F5D4 8001E9D4 AFA80020 */  sw          $t0, 0x20($sp)
.L8001E9D8:
/* 01F5D8 8001E9D8 3C02800C */  lui         $v0, %hi(D_800C7C74)
/* 01F5DC 8001E9DC 90427C74 */  lbu         $v0, %lo(D_800C7C74)($v0)
/* 01F5E0 8001E9E0 8FA90020 */  lw          $t1, 0x20($sp)
/* 01F5E4 8001E9E4 3C0C8015 */  lui         $t4, %hi(D_80155E00)
/* 01F5E8 8001E9E8 304A00FF */  andi        $t2, $v0, 0xFF
/* 01F5EC 8001E9EC 15220004 */  bne         $t1, $v0, .L8001EA00
/* 01F5F0 8001E9F0 000A58C0 */   sll        $t3, $t2, 3
/* 01F5F4 8001E9F4 3C01800C */  lui         $at, %hi(D_800C7C78)
/* 01F5F8 8001E9F8 100000A7 */  b           .L8001EC98
/* 01F5FC 8001E9FC A0207C78 */   sb         $zero, %lo(D_800C7C78)($at)
.L8001EA00:
/* 01F600 8001EA00 3C0D800C */  lui         $t5, %hi(D_800C7C74)
/* 01F604 8001EA04 91AD7C74 */  lbu         $t5, %lo(D_800C7C74)($t5)
/* 01F608 8001EA08 258C5E00 */  addiu       $t4, $t4, %lo(D_80155E00)
/* 01F60C 8001EA0C 3C01800C */  lui         $at, %hi(D_800C7C74)
/* 01F610 8001EA10 25AE0001 */  addiu       $t6, $t5, 0x1
/* 01F614 8001EA14 016C8021 */  addu        $s0, $t3, $t4
/* 01F618 8001EA18 A02E7C74 */  sb          $t6, %lo(D_800C7C74)($at)
/* 01F61C 8001EA1C 92040000 */  lbu         $a0, 0x0($s0)
/* 01F620 8001EA20 240100F8 */  addiu       $at, $zero, 0xF8
/* 01F624 8001EA24 14810005 */  bne         $a0, $at, .L8001EA3C
/* 01F628 8001EA28 309800F0 */   andi       $t8, $a0, 0xF0
/* 01F62C 8001EA2C 240F0001 */  addiu       $t7, $zero, 0x1
/* 01F630 8001EA30 3C01800C */  lui         $at, %hi(D_800C7C78)
/* 01F634 8001EA34 10000098 */  b           .L8001EC98
/* 01F638 8001EA38 A02F7C78 */   sb         $t7, %lo(D_800C7C78)($at)
.L8001EA3C:
/* 01F63C 8001EA3C 240100F0 */  addiu       $at, $zero, 0xF0
/* 01F640 8001EA40 57010006 */  bnel        $t8, $at, .L8001EA5C
/* 01F644 8001EA44 92020001 */   lbu        $v0, 0x1($s0)
/* 01F648 8001EA48 0C007911 */  jal         func_8001E444
/* 01F64C 8001EA4C 02002025 */   or         $a0, $s0, $zero
/* 01F650 8001EA50 1000008F */  b           .L8001EC90
/* 01F654 8001EA54 00000000 */   nop
/* 01F658 8001EA58 92020001 */  lbu         $v0, 0x1($s0)
.L8001EA5C:
/* 01F65C 8001EA5C 3C088015 */  lui         $t0, %hi(gSeqPlayers)
/* 01F660 8001EA60 2508E538 */  addiu       $t0, $t0, %lo(gSeqPlayers)
/* 01F664 8001EA64 28410004 */  slti        $at, $v0, 0x4
/* 01F668 8001EA68 10200089 */  beqz        $at, .L8001EC90
/* 01F66C 8001EA6C 0002C880 */   sll        $t9, $v0, 2
/* 01F670 8001EA70 0322C821 */  addu        $t9, $t9, $v0
/* 01F674 8001EA74 0019C880 */  sll         $t9, $t9, 2
/* 01F678 8001EA78 0322C821 */  addu        $t9, $t9, $v0
/* 01F67C 8001EA7C 0019C880 */  sll         $t9, $t9, 2
/* 01F680 8001EA80 0322C823 */  subu        $t9, $t9, $v0
/* 01F684 8001EA84 0019C880 */  sll         $t9, $t9, 2
/* 01F688 8001EA88 30890080 */  andi        $t1, $a0, 0x80
/* 01F68C 8001EA8C 11200005 */  beqz        $t1, .L8001EAA4
/* 01F690 8001EA90 03281821 */   addu       $v1, $t9, $t0
/* 01F694 8001EA94 0C007911 */  jal         func_8001E444
/* 01F698 8001EA98 02002025 */   or         $a0, $s0, $zero
/* 01F69C 8001EA9C 1000007C */  b           .L8001EC90
/* 01F6A0 8001EAA0 00000000 */   nop
.L8001EAA4:
/* 01F6A4 8001EAA4 308A0040 */  andi        $t2, $a0, 0x40
/* 01F6A8 8001EAA8 11400024 */  beqz        $t2, .L8001EB3C
/* 01F6AC 8001EAAC 24010041 */   addiu      $at, $zero, 0x41
/* 01F6B0 8001EAB0 10810009 */  beq         $a0, $at, .L8001EAD8
/* 01F6B4 8001EAB4 24010046 */   addiu      $at, $zero, 0x46
/* 01F6B8 8001EAB8 1081001B */  beq         $a0, $at, .L8001EB28
/* 01F6BC 8001EABC 24010047 */   addiu      $at, $zero, 0x47
/* 01F6C0 8001EAC0 10810010 */  beq         $a0, $at, .L8001EB04
/* 01F6C4 8001EAC4 24010048 */   addiu      $at, $zero, 0x48
/* 01F6C8 8001EAC8 50810015 */  beql        $a0, $at, .L8001EB20
/* 01F6CC 8001EACC 82180004 */   lb         $t8, 0x4($s0)
/* 01F6D0 8001EAD0 1000006F */  b           .L8001EC90
/* 01F6D4 8001EAD4 00000000 */   nop
.L8001EAD8:
/* 01F6D8 8001EAD8 C6000004 */  lwc1        $fv0, 0x4($s0)
/* 01F6DC 8001EADC C464002C */  lwc1        $ft0, 0x2C($v1)
/* 01F6E0 8001EAE0 46040032 */  c.eq.s      $fv0, $ft0
/* 01F6E4 8001EAE4 00000000 */  nop
/* 01F6E8 8001EAE8 45010069 */  bc1t        .L8001EC90
/* 01F6EC 8001EAEC 00000000 */   nop
/* 01F6F0 8001EAF0 906C0000 */  lbu         $t4, 0x0($v1)
/* 01F6F4 8001EAF4 E460002C */  swc1        $fv0, 0x2C($v1)
/* 01F6F8 8001EAF8 358D0004 */  ori         $t5, $t4, 0x4
/* 01F6FC 8001EAFC 10000064 */  b           .L8001EC90
/* 01F700 8001EB00 A06D0000 */   sb         $t5, 0x0($v1)
.L8001EB04:
/* 01F704 8001EB04 8E0E0004 */  lw          $t6, 0x4($s0)
/* 01F708 8001EB08 000E7880 */  sll         $t7, $t6, 2
/* 01F70C 8001EB0C 01EE7823 */  subu        $t7, $t7, $t6
/* 01F710 8001EB10 000F7900 */  sll         $t7, $t7, 4
/* 01F714 8001EB14 1000005E */  b           .L8001EC90
/* 01F718 8001EB18 A46F0008 */   sh         $t7, 0x8($v1)
/* 01F71C 8001EB1C 82180004 */  lb          $t8, 0x4($s0)
.L8001EB20:
/* 01F720 8001EB20 1000005B */  b           .L8001EC90
/* 01F724 8001EB24 A478000E */   sh         $t8, 0xE($v1)
.L8001EB28:
/* 01F728 8001EB28 92080003 */  lbu         $t0, 0x3($s0)
/* 01F72C 8001EB2C 82190004 */  lb          $t9, 0x4($s0)
/* 01F730 8001EB30 00684821 */  addu        $t1, $v1, $t0
/* 01F734 8001EB34 10000056 */  b           .L8001EC90
/* 01F738 8001EB38 A1390007 */   sb         $t9, 0x7($t1)
.L8001EB3C:
/* 01F73C 8001EB3C 8C6A0000 */  lw          $t2, 0x0($v1)
/* 01F740 8001EB40 000A5FC2 */  srl         $t3, $t2, 31
/* 01F744 8001EB44 11600052 */  beqz        $t3, .L8001EC90
/* 01F748 8001EB48 00000000 */   nop
/* 01F74C 8001EB4C 92050002 */  lbu         $a1, 0x2($s0)
/* 01F750 8001EB50 28A10010 */  slti        $at, $a1, 0x10
/* 01F754 8001EB54 1020004E */  beqz        $at, .L8001EC90
/* 01F758 8001EB58 00056080 */   sll        $t4, $a1, 2
/* 01F75C 8001EB5C 006C6821 */  addu        $t5, $v1, $t4
/* 01F760 8001EB60 8DA20034 */  lw          $v0, 0x34($t5)
/* 01F764 8001EB64 3C0E8015 */  lui         $t6, %hi(gSeqChannelNone)
/* 01F768 8001EB68 25CE2FE8 */  addiu       $t6, $t6, %lo(gSeqChannelNone)
/* 01F76C 8001EB6C 104E0048 */  beq         $v0, $t6, .L8001EC90
/* 01F770 8001EB70 248FFFFF */   addiu      $t7, $a0, -0x1
/* 01F774 8001EB74 2DE10008 */  sltiu       $at, $t7, 0x8
/* 01F778 8001EB78 10200045 */  beqz        $at, .L8001EC90
/* 01F77C 8001EB7C 000F7880 */   sll        $t7, $t7, 2
/* 01F780 8001EB80 3C01800D */  lui         $at, %hi(jtbl_800C92E8)
/* 01F784 8001EB84 002F0821 */  addu        $at, $at, $t7
/* 01F788 8001EB88 8C2F92E8 */  lw          $t7, %lo(jtbl_800C92E8)($at)
/* 01F78C 8001EB8C 01E00008 */  jr          $t7
/* 01F790 8001EB90 00000000 */   nop
.L8001EB94:
/* 01F794 8001EB94 C6000004 */  lwc1        $fv0, 0x4($s0)
/* 01F798 8001EB98 C4460020 */  lwc1        $ft1, 0x20($v0)
/* 01F79C 8001EB9C 46060032 */  c.eq.s      $fv0, $ft1
/* 01F7A0 8001EBA0 00000000 */  nop
/* 01F7A4 8001EBA4 4501003A */  bc1t        .L8001EC90
/* 01F7A8 8001EBA8 00000000 */   nop
/* 01F7AC 8001EBAC 90480001 */  lbu         $t0, 0x1($v0)
/* 01F7B0 8001EBB0 E4400020 */  swc1        $fv0, 0x20($v0)
/* 01F7B4 8001EBB4 35190040 */  ori         $t9, $t0, 0x40
/* 01F7B8 8001EBB8 10000035 */  b           .L8001EC90
/* 01F7BC 8001EBBC A0590001 */   sb         $t9, 0x1($v0)
.L8001EBC0:
/* 01F7C0 8001EBC0 C6000004 */  lwc1        $fv0, 0x4($s0)
/* 01F7C4 8001EBC4 C4480024 */  lwc1        $ft2, 0x24($v0)
/* 01F7C8 8001EBC8 46080032 */  c.eq.s      $fv0, $ft2
/* 01F7CC 8001EBCC 00000000 */  nop
/* 01F7D0 8001EBD0 4501002F */  bc1t        .L8001EC90
/* 01F7D4 8001EBD4 00000000 */   nop
/* 01F7D8 8001EBD8 904A0001 */  lbu         $t2, 0x1($v0)
/* 01F7DC 8001EBDC E4400024 */  swc1        $fv0, 0x24($v0)
/* 01F7E0 8001EBE0 354B0040 */  ori         $t3, $t2, 0x40
/* 01F7E4 8001EBE4 1000002A */  b           .L8001EC90
/* 01F7E8 8001EBE8 A04B0001 */   sb         $t3, 0x1($v0)
.L8001EBEC:
/* 01F7EC 8001EBEC 82030004 */  lb          $v1, 0x4($s0)
/* 01F7F0 8001EBF0 904C0009 */  lbu         $t4, 0x9($v0)
/* 01F7F4 8001EBF4 106C0026 */  beq         $v1, $t4, .L8001EC90
/* 01F7F8 8001EBF8 00000000 */   nop
/* 01F7FC 8001EBFC 904E0001 */  lbu         $t6, 0x1($v0)
/* 01F800 8001EC00 A0430009 */  sb          $v1, 0x9($v0)
/* 01F804 8001EC04 35CF0020 */  ori         $t7, $t6, 0x20
/* 01F808 8001EC08 10000021 */  b           .L8001EC90
/* 01F80C 8001EC0C A04F0001 */   sb         $t7, 0x1($v0)
.L8001EC10:
/* 01F810 8001EC10 C6000004 */  lwc1        $fv0, 0x4($s0)
/* 01F814 8001EC14 C44A0030 */  lwc1        $ft3, 0x30($v0)
/* 01F818 8001EC18 460A0032 */  c.eq.s      $fv0, $ft3
/* 01F81C 8001EC1C 00000000 */  nop
/* 01F820 8001EC20 4501001B */  bc1t        .L8001EC90
/* 01F824 8001EC24 00000000 */   nop
/* 01F828 8001EC28 90480001 */  lbu         $t0, 0x1($v0)
/* 01F82C 8001EC2C E4400030 */  swc1        $fv0, 0x30($v0)
/* 01F830 8001EC30 35190080 */  ori         $t9, $t0, 0x80
/* 01F834 8001EC34 10000016 */  b           .L8001EC90
/* 01F838 8001EC38 A0590001 */   sb         $t9, 0x1($v0)
.L8001EC3C:
/* 01F83C 8001EC3C 82030004 */  lb          $v1, 0x4($s0)
/* 01F840 8001EC40 90490004 */  lbu         $t1, 0x4($v0)
/* 01F844 8001EC44 10690012 */  beq         $v1, $t1, .L8001EC90
/* 01F848 8001EC48 00000000 */   nop
/* 01F84C 8001EC4C 10000010 */  b           .L8001EC90
/* 01F850 8001EC50 A0430004 */   sb         $v1, 0x4($v0)
.L8001EC54:
/* 01F854 8001EC54 92030003 */  lbu         $v1, 0x3($s0)
/* 01F858 8001EC58 28610008 */  slti        $at, $v1, 0x8
/* 01F85C 8001EC5C 1020000C */  beqz        $at, .L8001EC90
/* 01F860 8001EC60 00000000 */   nop
/* 01F864 8001EC64 820A0004 */  lb          $t2, 0x4($s0)
/* 01F868 8001EC68 00435821 */  addu        $t3, $v0, $v1
/* 01F86C 8001EC6C 10000008 */  b           .L8001EC90
/* 01F870 8001EC70 A16A00BC */   sb         $t2, 0xBC($t3)
.L8001EC74:
/* 01F874 8001EC74 820D0004 */  lb          $t5, 0x4($s0)
/* 01F878 8001EC78 90580000 */  lbu         $t8, 0x0($v0)
/* 01F87C 8001EC7C 000D7100 */  sll         $t6, $t5, 4
/* 01F880 8001EC80 31CF0010 */  andi        $t7, $t6, 0x10
/* 01F884 8001EC84 3308FFEF */  andi        $t0, $t8, 0xFFEF
/* 01F888 8001EC88 01E8C825 */  or          $t9, $t7, $t0
/* 01F88C 8001EC8C A0590000 */  sb          $t9, 0x0($v0)
.L8001EC90:
/* 01F890 8001EC90 1000FF51 */  b           .L8001E9D8
/* 01F894 8001EC94 A2000000 */   sb         $zero, 0x0($s0)
.L8001EC98:
/* 01F898 8001EC98 8FBF001C */  lw          $ra, 0x1C($sp)
/* 01F89C 8001EC9C 8FB00018 */  lw          $s0, 0x18($sp)
/* 01F8A0 8001ECA0 27BD0040 */  addiu       $sp, $sp, 0x40
/* 01F8A4 8001ECA4 03E00008 */  jr          $ra
/* 01F8A8 8001ECA8 00000000 */   nop
glabel func_8001ECAC
/* 01F8AC 8001ECAC 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 01F8B0 8001ECB0 AFA40020 */  sw          $a0, 0x20($sp)
/* 01F8B4 8001ECB4 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01F8B8 8001ECB8 3C048015 */  lui         $a0, %hi(gExternalLoadQueue)
/* 01F8BC 8001ECBC 24844248 */  addiu       $a0, $a0, %lo(gExternalLoadQueue)
/* 01F8C0 8001ECC0 27A5001C */  addiu       $a1, $sp, 0x1C
/* 01F8C4 8001ECC4 0C008178 */  jal         osRecvMesg
/* 01F8C8 8001ECC8 00003025 */   or         $a2, $zero, $zero
/* 01F8CC 8001ECCC 2401FFFF */  addiu       $at, $zero, -0x1
/* 01F8D0 8001ECD0 14410004 */  bne         $v0, $at, .L8001ECE4
/* 01F8D4 8001ECD4 8FA30020 */   lw         $v1, 0x20($sp)
/* 01F8D8 8001ECD8 AC600000 */  sw          $zero, 0x0($v1)
/* 01F8DC 8001ECDC 10000009 */  b           .L8001ED04
/* 01F8E0 8001ECE0 00001025 */   or         $v0, $zero, $zero
.L8001ECE4:
/* 01F8E4 8001ECE4 8FAE001C */  lw          $t6, 0x1C($sp)
/* 01F8E8 8001ECE8 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 01F8EC 8001ECEC 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 01F8F0 8001ECF0 01C17824 */  and         $t7, $t6, $at
/* 01F8F4 8001ECF4 AC6F0000 */  sw          $t7, 0x0($v1)
/* 01F8F8 8001ECF8 8FA2001C */  lw          $v0, 0x1C($sp)
/* 01F8FC 8001ECFC 0002C602 */  srl         $t8, $v0, 24
/* 01F900 8001ED00 03001025 */  or          $v0, $t8, $zero
.L8001ED04:
/* 01F904 8001ED04 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01F908 8001ED08 27BD0020 */  addiu       $sp, $sp, 0x20
/* 01F90C 8001ED0C 03E00008 */  jr          $ra
/* 01F910 8001ED10 00000000 */   nop
glabel func_8001ED14
/* 01F914 8001ED14 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 01F918 8001ED18 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01F91C 8001ED1C 0C003C04 */  jal         func_8000F010
/* 01F920 8001ED20 00000000 */   nop
/* 01F924 8001ED24 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01F928 8001ED28 27BD0018 */  addiu       $sp, $sp, 0x18
/* 01F92C 8001ED2C 03E00008 */  jr          $ra
/* 01F930 8001ED30 00000000 */   nop
glabel func_8001ED34
/* 01F934 8001ED34 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 01F938 8001ED38 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01F93C 8001ED3C 3C04800C */  lui         $a0, %hi(D_800C7C64)
/* 01F940 8001ED40 8C847C64 */  lw          $a0, %lo(D_800C7C64)($a0)
/* 01F944 8001ED44 27A50018 */  addiu       $a1, $sp, 0x18
/* 01F948 8001ED48 0C008178 */  jal         osRecvMesg
/* 01F94C 8001ED4C 00003025 */   or         $a2, $zero, $zero
/* 01F950 8001ED50 2401FFFF */  addiu       $at, $zero, -0x1
/* 01F954 8001ED54 14410003 */  bne         $v0, $at, .L8001ED64
/* 01F958 8001ED58 8FBF0014 */   lw         $ra, 0x14($sp)
/* 01F95C 8001ED5C 10000009 */  b           .L8001ED84
/* 01F960 8001ED60 00001025 */   or         $v0, $zero, $zero
.L8001ED64:
/* 01F964 8001ED64 3C0F8015 */  lui         $t7, %hi(gAudioSpecId)
/* 01F968 8001ED68 91EFD529 */  lbu         $t7, %lo(gAudioSpecId)($t7)
/* 01F96C 8001ED6C 8FAE0018 */  lw          $t6, 0x18($sp)
/* 01F970 8001ED70 24020001 */  addiu       $v0, $zero, 0x1
/* 01F974 8001ED74 11CF0003 */  beq         $t6, $t7, .L8001ED84
/* 01F978 8001ED78 00000000 */   nop
/* 01F97C 8001ED7C 10000001 */  b           .L8001ED84
/* 01F980 8001ED80 00001025 */   or         $v0, $zero, $zero
.L8001ED84:
/* 01F984 8001ED84 03E00008 */  jr          $ra
/* 01F988 8001ED88 27BD0020 */   addiu      $sp, $sp, 0x20
glabel func_8001ED8C
/* 01F98C 8001ED8C 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* 01F990 8001ED90 AFB1001C */  sw          $s1, 0x1C($sp)
/* 01F994 8001ED94 AFB20020 */  sw          $s2, 0x20($sp)
/* 01F998 8001ED98 AFB00018 */  sw          $s0, 0x18($sp)
/* 01F99C 8001ED9C 3C11800C */  lui         $s1, %hi(D_800C7C64)
/* 01F9A0 8001EDA0 AFBF0024 */  sw          $ra, 0x24($sp)
/* 01F9A4 8001EDA4 AFA40030 */  sw          $a0, 0x30($sp)
/* 01F9A8 8001EDA8 26317C64 */  addiu       $s1, $s1, %lo(D_800C7C64)
/* 01F9AC 8001EDAC 2410FFFF */  addiu       $s0, $zero, -0x1
/* 01F9B0 8001EDB0 27B20028 */  addiu       $s2, $sp, 0x28
/* 01F9B4 8001EDB4 8E240000 */  lw          $a0, 0x0($s1)
.L8001EDB8:
/* 01F9B8 8001EDB8 02402825 */  or          $a1, $s2, $zero
/* 01F9BC 8001EDBC 0C008178 */  jal         osRecvMesg
/* 01F9C0 8001EDC0 00003025 */   or         $a2, $zero, $zero
/* 01F9C4 8001EDC4 5450FFFC */  bnel        $v0, $s0, .L8001EDB8
/* 01F9C8 8001EDC8 8E240000 */   lw         $a0, 0x0($s1)
/* 01F9CC 8001EDCC 0C007A66 */  jal         func_8001E998
/* 01F9D0 8001EDD0 00000000 */   nop
/* 01F9D4 8001EDD4 3C04800C */  lui         $a0, %hi(D_800C7C60)
/* 01F9D8 8001EDD8 8C847C60 */  lw          $a0, %lo(D_800C7C60)($a0)
/* 01F9DC 8001EDDC 8FA50030 */  lw          $a1, 0x30($sp)
/* 01F9E0 8001EDE0 0C0081C8 */  jal         osSendMesg
/* 01F9E4 8001EDE4 00003025 */   or         $a2, $zero, $zero
/* 01F9E8 8001EDE8 8FBF0024 */  lw          $ra, 0x24($sp)
/* 01F9EC 8001EDEC 8FB00018 */  lw          $s0, 0x18($sp)
/* 01F9F0 8001EDF0 8FB1001C */  lw          $s1, 0x1C($sp)
/* 01F9F4 8001EDF4 8FB20020 */  lw          $s2, 0x20($sp)
/* 01F9F8 8001EDF8 03E00008 */  jr          $ra
/* 01F9FC 8001EDFC 27BD0030 */   addiu      $sp, $sp, 0x30
glabel func_8001EE00
/* 01FA00 8001EE00 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 01FA04 8001EE04 3C0F8015 */  lui         $t7, %hi(gResetTimer)
/* 01FA08 8001EE08 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01FA0C 8001EE0C 25EF5D8C */  addiu       $t7, $t7, %lo(gResetTimer)
/* 01FA10 8001EE10 240E0001 */  addiu       $t6, $zero, 0x1
/* 01FA14 8001EE14 ADEE0000 */  sw          $t6, 0x0($t7)
/* 01FA18 8001EE18 0C007B63 */  jal         func_8001ED8C
/* 01FA1C 8001EE1C 00002025 */   or         $a0, $zero, $zero
/* 01FA20 8001EE20 3C188015 */  lui         $t8, %hi(gResetStatus)
/* 01FA24 8001EE24 2718D528 */  addiu       $t8, $t8, %lo(gResetStatus)
/* 01FA28 8001EE28 A3000000 */  sb          $zero, 0x0($t8)
/* 01FA2C 8001EE2C 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01FA30 8001EE30 27BD0018 */  addiu       $sp, $sp, 0x18
/* 01FA34 8001EE34 03E00008 */  jr          $ra
/* 01FA38 8001EE38 00000000 */   nop
glabel func_8001EE3C
/* 01FA3C 8001EE3C 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 01FA40 8001EE40 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01FA44 8001EE44 0C0079F2 */  jal         func_8001E7C8
/* 01FA48 8001EE48 00000000 */   nop
/* 01FA4C 8001EE4C 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01FA50 8001EE50 27BD0018 */  addiu       $sp, $sp, 0x18
/* 01FA54 8001EE54 03E00008 */  jr          $ra
/* 01FA58 8001EE58 00000000 */   nop
/* 01FA5C 8001EE5C 00000000 */  nop
