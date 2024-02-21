glabel func_8000E4A0
/* 00F0A0 8000E4A0 3C058015 */  lui         $a1, %hi(D_80155A4C)
/* 00F0A4 8000E4A4 24A55A4C */  addiu       $a1, $a1, %lo(D_80155A4C)
/* 00F0A8 8000E4A8 8CA30000 */  lw          $v1, 0x0($a1)
/* 00F0AC 8000E4AC 3C048015 */  lui         $a0, %hi(D_80154A48)
/* 00F0B0 8000E4B0 24844A48 */  addiu       $a0, $a0, %lo(D_80154A48)
/* 00F0B4 8000E4B4 10600018 */  beqz        $v1, .L8000E518
/* 00F0B8 8000E4B8 00001025 */   or         $v0, $zero, $zero
/* 00F0BC 8000E4BC 3C078015 */  lui         $a3, %hi(D_80155A58)
/* 00F0C0 8000E4C0 3C068015 */  lui         $a2, %hi(D_80155C5A)
/* 00F0C4 8000E4C4 24C65C5A */  addiu       $a2, $a2, %lo(D_80155C5A)
/* 00F0C8 8000E4C8 24E75A58 */  addiu       $a3, $a3, %lo(D_80155A58)
/* 00F0CC 8000E4CC 9083000E */  lbu         $v1, 0xE($a0)
.L8000E4D0:
/* 00F0D0 8000E4D0 1060000B */  beqz        $v1, .L8000E500
/* 00F0D4 8000E4D4 246EFFFF */   addiu      $t6, $v1, -0x1
/* 00F0D8 8000E4D8 31CF00FF */  andi        $t7, $t6, 0xFF
/* 00F0DC 8000E4DC 15E00008 */  bnez        $t7, .L8000E500
/* 00F0E0 8000E4E0 A08E000E */   sb         $t6, 0xE($a0)
/* 00F0E4 8000E4E4 90C30000 */  lbu         $v1, 0x0($a2)
/* 00F0E8 8000E4E8 90D80000 */  lbu         $t8, 0x0($a2)
/* 00F0EC 8000E4EC 00E3C821 */  addu        $t9, $a3, $v1
/* 00F0F0 8000E4F0 A3220000 */  sb          $v0, 0x0($t9)
/* 00F0F4 8000E4F4 24680001 */  addiu       $t0, $v1, 0x1
/* 00F0F8 8000E4F8 A0C80000 */  sb          $t0, 0x0($a2)
/* 00F0FC 8000E4FC A098000D */  sb          $t8, 0xD($a0)
.L8000E500:
/* 00F100 8000E500 8CA30000 */  lw          $v1, 0x0($a1)
/* 00F104 8000E504 24420001 */  addiu       $v0, $v0, 0x1
/* 00F108 8000E508 24840010 */  addiu       $a0, $a0, 0x10
/* 00F10C 8000E50C 0043082B */  sltu        $at, $v0, $v1
/* 00F110 8000E510 5420FFEF */  bnel        $at, $zero, .L8000E4D0
/* 00F114 8000E514 9083000E */   lbu        $v1, 0xE($a0)
.L8000E518:
/* 00F118 8000E518 3C058015 */  lui         $a1, %hi(D_80155A48)
/* 00F11C 8000E51C 24A55A48 */  addiu       $a1, $a1, %lo(D_80155A48)
/* 00F120 8000E520 8CA90000 */  lw          $t1, 0x0($a1)
/* 00F124 8000E524 00601025 */  or          $v0, $v1, $zero
/* 00F128 8000E528 00035100 */  sll         $t2, $v1, 4
/* 00F12C 8000E52C 0069082B */  sltu        $at, $v1, $t1
/* 00F130 8000E530 1020001A */  beqz        $at, .L8000E59C
/* 00F134 8000E534 3C0B8015 */   lui        $t3, %hi(D_80154A48)
/* 00F138 8000E538 256B4A48 */  addiu       $t3, $t3, %lo(D_80154A48)
/* 00F13C 8000E53C 3C078015 */  lui         $a3, %hi(D_80155B58)
/* 00F140 8000E540 3C068015 */  lui         $a2, %hi(D_80155C5B)
/* 00F144 8000E544 24C65C5B */  addiu       $a2, $a2, %lo(D_80155C5B)
/* 00F148 8000E548 24E75B58 */  addiu       $a3, $a3, %lo(D_80155B58)
/* 00F14C 8000E54C 014B2021 */  addu        $a0, $t2, $t3
/* 00F150 8000E550 9083000E */  lbu         $v1, 0xE($a0)
.L8000E554:
/* 00F154 8000E554 1060000B */  beqz        $v1, .L8000E584
/* 00F158 8000E558 246CFFFF */   addiu      $t4, $v1, -0x1
/* 00F15C 8000E55C 318D00FF */  andi        $t5, $t4, 0xFF
/* 00F160 8000E560 15A00008 */  bnez        $t5, .L8000E584
/* 00F164 8000E564 A08C000E */   sb         $t4, 0xE($a0)
/* 00F168 8000E568 90C30000 */  lbu         $v1, 0x0($a2)
/* 00F16C 8000E56C 90CE0000 */  lbu         $t6, 0x0($a2)
/* 00F170 8000E570 00E37821 */  addu        $t7, $a3, $v1
/* 00F174 8000E574 A1E20000 */  sb          $v0, 0x0($t7)
/* 00F178 8000E578 24780001 */  addiu       $t8, $v1, 0x1
/* 00F17C 8000E57C A0D80000 */  sb          $t8, 0x0($a2)
/* 00F180 8000E580 A08E000D */  sb          $t6, 0xD($a0)
.L8000E584:
/* 00F184 8000E584 8CB90000 */  lw          $t9, 0x0($a1)
/* 00F188 8000E588 24420001 */  addiu       $v0, $v0, 0x1
/* 00F18C 8000E58C 24840010 */  addiu       $a0, $a0, 0x10
/* 00F190 8000E590 0059082B */  sltu        $at, $v0, $t9
/* 00F194 8000E594 5420FFEF */  bnel        $at, $zero, .L8000E554
/* 00F198 8000E598 9083000E */   lbu        $v1, 0xE($a0)
.L8000E59C:
/* 00F19C 8000E59C 3C018015 */  lui         $at, %hi(D_80155A50)
/* 00F1A0 8000E5A0 03E00008 */  jr          $ra
/* 00F1A4 8000E5A4 AC205A50 */   sw         $zero, %lo(D_80155A50)($at)
glabel func_8000E5A8
/* 00F1A8 8000E5A8 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* 00F1AC 8000E5AC AFB10030 */  sw          $s1, 0x30($sp)
/* 00F1B0 8000E5B0 AFB0002C */  sw          $s0, 0x2C($sp)
/* 00F1B4 8000E5B4 00A08025 */  or          $s0, $a1, $zero
/* 00F1B8 8000E5B8 00808825 */  or          $s1, $a0, $zero
/* 00F1BC 8000E5BC AFBF0034 */  sw          $ra, 0x34($sp)
/* 00F1C0 8000E5C0 AFA7005C */  sw          $a3, 0x5C($sp)
/* 00F1C4 8000E5C4 14C00008 */  bnez        $a2, .L8000E5E8
/* 00F1C8 8000E5C8 00005825 */   or         $t3, $zero, $zero
/* 00F1CC 8000E5CC 3C058015 */  lui         $a1, %hi(D_80155A4C)
/* 00F1D0 8000E5D0 8CA55A4C */  lw          $a1, %lo(D_80155A4C)($a1)
/* 00F1D4 8000E5D4 90E20000 */  lbu         $v0, 0x0($a3)
/* 00F1D8 8000E5D8 00001825 */  or          $v1, $zero, $zero
/* 00F1DC 8000E5DC 0045082B */  sltu        $at, $v0, $a1
/* 00F1E0 8000E5E0 14200055 */  bnez        $at, .L8000E738
/* 00F1E4 8000E5E4 00026900 */   sll        $t5, $v0, 4
.L8000E5E8:
/* 00F1E8 8000E5E8 3C038015 */  lui         $v1, %hi(D_80155A4C)
/* 00F1EC 8000E5EC 3C058015 */  lui         $a1, %hi(D_80155A48)
/* 00F1F0 8000E5F0 8CA55A48 */  lw          $a1, %lo(D_80155A48)($a1)
/* 00F1F4 8000E5F4 8C635A4C */  lw          $v1, %lo(D_80155A4C)($v1)
/* 00F1F8 8000E5F8 3C188015 */  lui         $t8, %hi(D_80154A48)
/* 00F1FC 8000E5FC 27184A48 */  addiu       $t8, $t8, %lo(D_80154A48)
/* 00F200 8000E600 0065082B */  sltu        $at, $v1, $a1
/* 00F204 8000E604 10200034 */  beqz        $at, .L8000E6D8
/* 00F208 8000E608 00037900 */   sll        $t7, $v1, 4
/* 00F20C 8000E60C 01F82021 */  addu        $a0, $t7, $t8
.L8000E610:
/* 00F210 8000E610 8C990004 */  lw          $t9, 0x4($a0)
/* 00F214 8000E614 00804025 */  or          $t0, $a0, $zero
/* 00F218 8000E618 02391023 */  subu        $v0, $s1, $t9
/* 00F21C 8000E61C 0442002A */  bltzl       $v0, .L8000E6C8
/* 00F220 8000E620 24630001 */   addiu      $v1, $v1, 0x1
/* 00F224 8000E624 948D000A */  lhu         $t5, 0xA($a0)
/* 00F228 8000E628 01B07023 */  subu        $t6, $t5, $s0
/* 00F22C 8000E62C 01C2082B */  sltu        $at, $t6, $v0
/* 00F230 8000E630 54200025 */  bnel        $at, $zero, .L8000E6C8
/* 00F234 8000E634 24630001 */   addiu      $v1, $v1, 0x1
/* 00F238 8000E638 908F000E */  lbu         $t7, 0xE($a0)
/* 00F23C 8000E63C 3C098015 */  lui         $t1, %hi(D_80155C59)
/* 00F240 8000E640 25295C59 */  addiu       $t1, $t1, %lo(D_80155C59)
/* 00F244 8000E644 15E00016 */  bnez        $t7, .L8000E6A0
/* 00F248 8000E648 3C188015 */   lui        $t8, %hi(D_80155C5B)
/* 00F24C 8000E64C 91250000 */  lbu         $a1, 0x0($t1)
/* 00F250 8000E650 93185C5B */  lbu         $t8, %lo(D_80155C5B)($t8)
/* 00F254 8000E654 53050013 */  beql        $t8, $a1, .L8000E6A4
/* 00F258 8000E658 8FB8005C */   lw         $t8, 0x5C($sp)
/* 00F25C 8000E65C 9087000D */  lbu         $a3, 0xD($a0)
/* 00F260 8000E660 3C0C8015 */  lui         $t4, %hi(D_80155B58)
/* 00F264 8000E664 258C5B58 */  addiu       $t4, $t4, %lo(D_80155B58)
/* 00F268 8000E668 10A7000B */  beq         $a1, $a3, .L8000E698
/* 00F26C 8000E66C 01851021 */   addu       $v0, $t4, $a1
/* 00F270 8000E670 90590000 */  lbu         $t9, 0x0($v0)
/* 00F274 8000E674 01876821 */  addu        $t5, $t4, $a3
/* 00F278 8000E678 3C068015 */  lui         $a2, %hi(D_80154A48)
/* 00F27C 8000E67C A1B90000 */  sb          $t9, 0x0($t5)
/* 00F280 8000E680 904F0000 */  lbu         $t7, 0x0($v0)
/* 00F284 8000E684 908E000D */  lbu         $t6, 0xD($a0)
/* 00F288 8000E688 24C64A48 */  addiu       $a2, $a2, %lo(D_80154A48)
/* 00F28C 8000E68C 000FC100 */  sll         $t8, $t7, 4
/* 00F290 8000E690 00D8C821 */  addu        $t9, $a2, $t8
/* 00F294 8000E694 A32E000D */  sb          $t6, 0xD($t9)
.L8000E698:
/* 00F298 8000E698 24AD0001 */  addiu       $t5, $a1, 0x1
/* 00F29C 8000E69C A12D0000 */  sb          $t5, 0x0($t1)
.L8000E6A0:
/* 00F2A0 8000E6A0 8FB8005C */  lw          $t8, 0x5C($sp)
.L8000E6A4:
/* 00F2A4 8000E6A4 240F003C */  addiu       $t7, $zero, 0x3C
/* 00F2A8 8000E6A8 A08F000E */  sb          $t7, 0xE($a0)
/* 00F2AC 8000E6AC A3030000 */  sb          $v1, 0x0($t8)
/* 00F2B0 8000E6B0 8C8E0000 */  lw          $t6, 0x0($a0)
/* 00F2B4 8000E6B4 8C8D0004 */  lw          $t5, 0x4($a0)
/* 00F2B8 8000E6B8 01D1C821 */  addu        $t9, $t6, $s1
/* 00F2BC 8000E6BC 10000083 */  b           .L8000E8CC
/* 00F2C0 8000E6C0 032D1023 */   subu       $v0, $t9, $t5
/* 00F2C4 8000E6C4 24630001 */  addiu       $v1, $v1, 0x1
.L8000E6C8:
/* 00F2C8 8000E6C8 0065082B */  sltu        $at, $v1, $a1
/* 00F2CC 8000E6CC 1420FFD0 */  bnez        $at, .L8000E610
/* 00F2D0 8000E6D0 24840010 */   addiu      $a0, $a0, 0x10
/* 00F2D4 8000E6D4 AFA80048 */  sw          $t0, 0x48($sp)
.L8000E6D8:
/* 00F2D8 8000E6D8 3C098015 */  lui         $t1, %hi(D_80155C59)
/* 00F2DC 8000E6DC 25295C59 */  addiu       $t1, $t1, %lo(D_80155C59)
/* 00F2E0 8000E6E0 3C0F8015 */  lui         $t7, %hi(D_80155C5B)
/* 00F2E4 8000E6E4 91EF5C5B */  lbu         $t7, %lo(D_80155C5B)($t7)
/* 00F2E8 8000E6E8 91250000 */  lbu         $a1, 0x0($t1)
/* 00F2EC 8000E6EC 8FA80048 */  lw          $t0, 0x48($sp)
/* 00F2F0 8000E6F0 11E5000E */  beq         $t7, $a1, .L8000E72C
/* 00F2F4 8000E6F4 00000000 */   nop
/* 00F2F8 8000E6F8 10C0000C */  beqz        $a2, .L8000E72C
/* 00F2FC 8000E6FC 3C0C8015 */   lui        $t4, %hi(D_80155B58)
/* 00F300 8000E700 258C5B58 */  addiu       $t4, $t4, %lo(D_80155B58)
/* 00F304 8000E704 0185C021 */  addu        $t8, $t4, $a1
/* 00F308 8000E708 930A0000 */  lbu         $t2, 0x0($t8)
/* 00F30C 8000E70C 3C068015 */  lui         $a2, %hi(D_80154A48)
/* 00F310 8000E710 24C64A48 */  addiu       $a2, $a2, %lo(D_80154A48)
/* 00F314 8000E714 24AE0001 */  addiu       $t6, $a1, 0x1
/* 00F318 8000E718 000AC900 */  sll         $t9, $t2, 4
/* 00F31C 8000E71C A12E0000 */  sb          $t6, 0x0($t1)
/* 00F320 8000E720 00D94021 */  addu        $t0, $a2, $t9
/* 00F324 8000E724 240B0001 */  addiu       $t3, $zero, 0x1
/* 00F328 8000E728 AFAA0038 */  sw          $t2, 0x38($sp)
.L8000E72C:
/* 00F32C 8000E72C 3C068015 */  lui         $a2, %hi(D_80154A48)
/* 00F330 8000E730 1000002F */  b           .L8000E7F0
/* 00F334 8000E734 24C64A48 */   addiu      $a2, $a2, %lo(D_80154A48)
.L8000E738:
/* 00F338 8000E738 3C068015 */  lui         $a2, %hi(D_80154A48)
/* 00F33C 8000E73C 24C64A48 */  addiu       $a2, $a2, %lo(D_80154A48)
/* 00F340 8000E740 10A0002B */  beqz        $a1, .L8000E7F0
/* 00F344 8000E744 00CD4021 */   addu       $t0, $a2, $t5
.L8000E748:
/* 00F348 8000E748 8D040004 */  lw          $a0, 0x4($t0)
/* 00F34C 8000E74C 0003C900 */  sll         $t9, $v1, 4
/* 00F350 8000E750 24630001 */  addiu       $v1, $v1, 0x1
/* 00F354 8000E754 02241023 */  subu        $v0, $s1, $a0
/* 00F358 8000E758 04420023 */  bltzl       $v0, .L8000E7E8
/* 00F35C 8000E75C 0065082B */   sltu       $at, $v1, $a1
/* 00F360 8000E760 950F000A */  lhu         $t7, 0xA($t0)
/* 00F364 8000E764 01F0C023 */  subu        $t8, $t7, $s0
/* 00F368 8000E768 0302082B */  sltu        $at, $t8, $v0
/* 00F36C 8000E76C 5420001E */  bnel        $at, $zero, .L8000E7E8
/* 00F370 8000E770 0065082B */   sltu       $at, $v1, $a1
/* 00F374 8000E774 910E000E */  lbu         $t6, 0xE($t0)
/* 00F378 8000E778 3C058015 */  lui         $a1, %hi(D_80155C58)
/* 00F37C 8000E77C 24A55C58 */  addiu       $a1, $a1, %lo(D_80155C58)
/* 00F380 8000E780 55C00013 */  bnel        $t6, $zero, .L8000E7D0
/* 00F384 8000E784 8D0E0000 */   lw         $t6, 0x0($t0)
/* 00F388 8000E788 90A30000 */  lbu         $v1, 0x0($a1)
/* 00F38C 8000E78C 9104000D */  lbu         $a0, 0xD($t0)
/* 00F390 8000E790 3C078015 */  lui         $a3, %hi(D_80155A58)
/* 00F394 8000E794 24E75A58 */  addiu       $a3, $a3, %lo(D_80155A58)
/* 00F398 8000E798 10640009 */  beq         $v1, $a0, .L8000E7C0
/* 00F39C 8000E79C 00E31021 */   addu       $v0, $a3, $v1
/* 00F3A0 8000E7A0 90590000 */  lbu         $t9, 0x0($v0)
/* 00F3A4 8000E7A4 00E46821 */  addu        $t5, $a3, $a0
/* 00F3A8 8000E7A8 A1B90000 */  sb          $t9, 0x0($t5)
/* 00F3AC 8000E7AC 90580000 */  lbu         $t8, 0x0($v0)
/* 00F3B0 8000E7B0 910F000D */  lbu         $t7, 0xD($t0)
/* 00F3B4 8000E7B4 00187100 */  sll         $t6, $t8, 4
/* 00F3B8 8000E7B8 00CEC821 */  addu        $t9, $a2, $t6
/* 00F3BC 8000E7BC A32F000D */  sb          $t7, 0xD($t9)
.L8000E7C0:
/* 00F3C0 8000E7C0 246D0001 */  addiu       $t5, $v1, 0x1
/* 00F3C4 8000E7C4 A0AD0000 */  sb          $t5, 0x0($a1)
/* 00F3C8 8000E7C8 8D040004 */  lw          $a0, 0x4($t0)
/* 00F3CC 8000E7CC 8D0E0000 */  lw          $t6, 0x0($t0)
.L8000E7D0:
/* 00F3D0 8000E7D0 24180002 */  addiu       $t8, $zero, 0x2
/* 00F3D4 8000E7D4 A118000E */  sb          $t8, 0xE($t0)
/* 00F3D8 8000E7D8 01D17821 */  addu        $t7, $t6, $s1
/* 00F3DC 8000E7DC 1000003B */  b           .L8000E8CC
/* 00F3E0 8000E7E0 01E41023 */   subu       $v0, $t7, $a0
/* 00F3E4 8000E7E4 0065082B */  sltu        $at, $v1, $a1
.L8000E7E8:
/* 00F3E8 8000E7E8 1420FFD7 */  bnez        $at, .L8000E748
/* 00F3EC 8000E7EC 00D94021 */   addu       $t0, $a2, $t9
.L8000E7F0:
/* 00F3F0 8000E7F0 1560000C */  bnez        $t3, .L8000E824
/* 00F3F4 8000E7F4 8FAA0038 */   lw         $t2, 0x38($sp)
/* 00F3F8 8000E7F8 3C058015 */  lui         $a1, %hi(D_80155C58)
/* 00F3FC 8000E7FC 24A55C58 */  addiu       $a1, $a1, %lo(D_80155C58)
/* 00F400 8000E800 90A30000 */  lbu         $v1, 0x0($a1)
/* 00F404 8000E804 3C078015 */  lui         $a3, %hi(D_80155A58)
/* 00F408 8000E808 24E75A58 */  addiu       $a3, $a3, %lo(D_80155A58)
/* 00F40C 8000E80C 00E36821 */  addu        $t5, $a3, $v1
/* 00F410 8000E810 91AA0000 */  lbu         $t2, 0x0($t5)
/* 00F414 8000E814 24780001 */  addiu       $t8, $v1, 0x1
/* 00F418 8000E818 A0B80000 */  sb          $t8, 0x0($a1)
/* 00F41C 8000E81C 000A7100 */  sll         $t6, $t2, 4
/* 00F420 8000E820 00CE4021 */  addu        $t0, $a2, $t6
.L8000E824:
/* 00F424 8000E824 9502000A */  lhu         $v0, 0xA($t0)
/* 00F428 8000E828 2401FFF0 */  addiu       $at, $zero, -0x10
/* 00F42C 8000E82C 3C098015 */  lui         $t1, %hi(D_80155CAC)
/* 00F430 8000E830 240F0002 */  addiu       $t7, $zero, 0x2
/* 00F434 8000E834 02218024 */  and         $s0, $s1, $at
/* 00F438 8000E838 25295CAC */  addiu       $t1, $t1, %lo(D_80155CAC)
/* 00F43C 8000E83C A10F000E */  sb          $t7, 0xE($t0)
/* 00F440 8000E840 AD100004 */  sw          $s0, 0x4($t0)
/* 00F444 8000E844 A5020008 */  sh          $v0, 0x8($t0)
/* 00F448 8000E848 8D230000 */  lw          $v1, 0x0($t1)
/* 00F44C 8000E84C 8D180000 */  lw          $t8, 0x0($t0)
/* 00F450 8000E850 3C0D8015 */  lui         $t5, %hi(D_80154410)
/* 00F454 8000E854 0003C880 */  sll         $t9, $v1, 2
/* 00F458 8000E858 0323C823 */  subu        $t9, $t9, $v1
/* 00F45C 8000E85C 0019C8C0 */  sll         $t9, $t9, 3
/* 00F460 8000E860 25AD4410 */  addiu       $t5, $t5, %lo(D_80154410)
/* 00F464 8000E864 032D2021 */  addu        $a0, $t9, $t5
/* 00F468 8000E868 8FAF0060 */  lw          $t7, 0x60($sp)
/* 00F46C 8000E86C 3C19800C */  lui         $t9, %hi(D_800C4F6C)
/* 00F470 8000E870 3C0E8015 */  lui         $t6, %hi(D_801542F8)
/* 00F474 8000E874 25CE42F8 */  addiu       $t6, $t6, %lo(D_801542F8)
/* 00F478 8000E878 27394F6C */  addiu       $t9, $t9, %lo(D_800C4F6C)
/* 00F47C 8000E87C 246D0001 */  addiu       $t5, $v1, 0x1
/* 00F480 8000E880 AD2D0000 */  sw          $t5, 0x0($t1)
/* 00F484 8000E884 AFB90020 */  sw          $t9, 0x20($sp)
/* 00F488 8000E888 AFAE0018 */  sw          $t6, 0x18($sp)
/* 00F48C 8000E88C AFAA0038 */  sw          $t2, 0x38($sp)
/* 00F490 8000E890 AFA80048 */  sw          $t0, 0x48($sp)
/* 00F494 8000E894 02003825 */  or          $a3, $s0, $zero
/* 00F498 8000E898 00002825 */  or          $a1, $zero, $zero
/* 00F49C 8000E89C 00003025 */  or          $a2, $zero, $zero
/* 00F4A0 8000E8A0 AFA20014 */  sw          $v0, 0x14($sp)
/* 00F4A4 8000E8A4 AFB80010 */  sw          $t8, 0x10($sp)
/* 00F4A8 8000E8A8 0C003EEA */  jal         func_8000FBA8
/* 00F4AC 8000E8AC AFAF001C */   sw         $t7, 0x1C($sp)
/* 00F4B0 8000E8B0 8FAA0038 */  lw          $t2, 0x38($sp)
/* 00F4B4 8000E8B4 8FB8005C */  lw          $t8, 0x5C($sp)
/* 00F4B8 8000E8B8 8FA80048 */  lw          $t0, 0x48($sp)
/* 00F4BC 8000E8BC 02307023 */  subu        $t6, $s1, $s0
/* 00F4C0 8000E8C0 A30A0000 */  sb          $t2, 0x0($t8)
/* 00F4C4 8000E8C4 8D0F0000 */  lw          $t7, 0x0($t0)
/* 00F4C8 8000E8C8 01CF1021 */  addu        $v0, $t6, $t7
.L8000E8CC:
/* 00F4CC 8000E8CC 8FBF0034 */  lw          $ra, 0x34($sp)
/* 00F4D0 8000E8D0 8FB0002C */  lw          $s0, 0x2C($sp)
/* 00F4D4 8000E8D4 8FB10030 */  lw          $s1, 0x30($sp)
/* 00F4D8 8000E8D8 03E00008 */  jr          $ra
/* 00F4DC 8000E8DC 27BD0050 */   addiu      $sp, $sp, 0x50
glabel func_8000E8E0
/* 00F4E0 8000E8E0 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* 00F4E4 8000E8E4 AFB50028 */  sw          $s5, 0x28($sp)
/* 00F4E8 8000E8E8 3C158015 */  lui         $s5, %hi(D_80155CA0)
/* 00F4EC 8000E8EC 26B55CA0 */  addiu       $s5, $s5, %lo(D_80155CA0)
/* 00F4F0 8000E8F0 AFA40038 */  sw          $a0, 0x38($sp)
/* 00F4F4 8000E8F4 8EA40000 */  lw          $a0, 0x0($s5)
/* 00F4F8 8000E8F8 AFB2001C */  sw          $s2, 0x1C($sp)
/* 00F4FC 8000E8FC 24120003 */  addiu       $s2, $zero, 0x3
/* 00F500 8000E900 00920019 */  multu       $a0, $s2
/* 00F504 8000E904 AFB30020 */  sw          $s3, 0x20($sp)
/* 00F508 8000E908 3C138015 */  lui         $s3, %hi(D_80155C78)
/* 00F50C 8000E90C 26735C78 */  addiu       $s3, $s3, %lo(D_80155C78)
/* 00F510 8000E910 86780000 */  lh          $t8, 0x0($s3)
/* 00F514 8000E914 AFB40024 */  sw          $s4, 0x24($sp)
/* 00F518 8000E918 3C148015 */  lui         $s4, %hi(D_80155C98)
/* 00F51C 8000E91C AFB70030 */  sw          $s7, 0x30($sp)
/* 00F520 8000E920 AFB6002C */  sw          $s6, 0x2C($sp)
/* 00F524 8000E924 AFB10018 */  sw          $s1, 0x18($sp)
/* 00F528 8000E928 00007812 */  mflo        $t7
/* 00F52C 8000E92C 26945C98 */  addiu       $s4, $s4, %lo(D_80155C98)
/* 00F530 8000E930 AFB00014 */  sw          $s0, 0x14($sp)
/* 00F534 8000E934 01F80019 */  multu       $t7, $t8
/* 00F538 8000E938 240E02D0 */  addiu       $t6, $zero, 0x2D0
/* 00F53C 8000E93C 3C118015 */  lui         $s1, %hi(D_80155A48)
/* 00F540 8000E940 3C168015 */  lui         $s6, %hi(D_8014C1E0)
/* 00F544 8000E944 3C178015 */  lui         $s7, %hi(D_80154A48)
/* 00F548 8000E948 AFBF0034 */  sw          $ra, 0x34($sp)
/* 00F54C 8000E94C AE8E0000 */  sw          $t6, 0x0($s4)
/* 00F550 8000E950 26F74A48 */  addiu       $s7, $s7, %lo(D_80154A48)
/* 00F554 8000E954 26D6C1E0 */  addiu       $s6, $s6, %lo(D_8014C1E0)
/* 00F558 8000E958 26315A48 */  addiu       $s1, $s1, %lo(D_80155A48)
/* 00F55C 8000E95C 0000C812 */  mflo        $t9
/* 00F560 8000E960 01C02825 */  or          $a1, $t6, $zero
/* 00F564 8000E964 1B200020 */  blez        $t9, .L8000E9E8
/* 00F568 8000E968 00008025 */   or         $s0, $zero, $zero
.L8000E96C:
/* 00F56C 8000E96C 0C002FC5 */  jal         AudioHeap_Alloc
/* 00F570 8000E970 02C02025 */   or         $a0, $s6, $zero
/* 00F574 8000E974 8E260000 */  lw          $a2, 0x0($s1)
/* 00F578 8000E978 00064100 */  sll         $t0, $a2, 4
/* 00F57C 8000E97C 02E81821 */  addu        $v1, $s7, $t0
/* 00F580 8000E980 14400004 */  bnez        $v0, .L8000E994
/* 00F584 8000E984 AC620000 */   sw         $v0, 0x0($v1)
/* 00F588 8000E988 00008025 */  or          $s0, $zero, $zero
/* 00F58C 8000E98C 10000016 */  b           .L8000E9E8
/* 00F590 8000E990 8EA40000 */   lw         $a0, 0x0($s5)
.L8000E994:
/* 00F594 8000E994 8EA40000 */  lw          $a0, 0x0($s5)
/* 00F598 8000E998 866B0000 */  lh          $t3, 0x0($s3)
/* 00F59C 8000E99C 8E850000 */  lw          $a1, 0x0($s4)
/* 00F5A0 8000E9A0 00920019 */  multu       $a0, $s2
/* 00F5A4 8000E9A4 26100001 */  addiu       $s0, $s0, 0x1
/* 00F5A8 8000E9A8 24C90001 */  addiu       $t1, $a2, 0x1
/* 00F5AC 8000E9AC AC600004 */  sw          $zero, 0x4($v1)
/* 00F5B0 8000E9B0 A4600008 */  sh          $zero, 0x8($v1)
/* 00F5B4 8000E9B4 A060000C */  sb          $zero, 0xC($v1)
/* 00F5B8 8000E9B8 A060000E */  sb          $zero, 0xE($v1)
/* 00F5BC 8000E9BC AE290000 */  sw          $t1, 0x0($s1)
/* 00F5C0 8000E9C0 A465000A */  sh          $a1, 0xA($v1)
/* 00F5C4 8000E9C4 00005012 */  mflo        $t2
/* 00F5C8 8000E9C8 00000000 */  nop
/* 00F5CC 8000E9CC 00000000 */  nop
/* 00F5D0 8000E9D0 014B0019 */  multu       $t2, $t3
/* 00F5D4 8000E9D4 00006012 */  mflo        $t4
/* 00F5D8 8000E9D8 020C082A */  slt         $at, $s0, $t4
/* 00F5DC 8000E9DC 1420FFE3 */  bnez        $at, .L8000E96C
/* 00F5E0 8000E9E0 00000000 */   nop
/* 00F5E4 8000E9E4 00008025 */  or          $s0, $zero, $zero
.L8000E9E8:
/* 00F5E8 8000E9E8 3C118015 */  lui         $s1, %hi(D_80155A48)
/* 00F5EC 8000E9EC 26315A48 */  addiu       $s1, $s1, %lo(D_80155A48)
/* 00F5F0 8000E9F0 8E260000 */  lw          $a2, 0x0($s1)
/* 00F5F4 8000E9F4 3C168015 */  lui         $s6, %hi(D_8014C1E0)
/* 00F5F8 8000E9F8 3C178015 */  lui         $s7, %hi(D_80154A48)
/* 00F5FC 8000E9FC 26F74A48 */  addiu       $s7, $s7, %lo(D_80154A48)
/* 00F600 8000EA00 10C0000C */  beqz        $a2, .L8000EA34
/* 00F604 8000EA04 26D6C1E0 */   addiu      $s6, $s6, %lo(D_8014C1E0)
/* 00F608 8000EA08 3C028015 */  lui         $v0, %hi(D_80155A58)
/* 00F60C 8000EA0C 3C038015 */  lui         $v1, %hi(D_80154A48)
/* 00F610 8000EA10 24634A48 */  addiu       $v1, $v1, %lo(D_80154A48)
/* 00F614 8000EA14 24425A58 */  addiu       $v0, $v0, %lo(D_80155A58)
.L8000EA18:
/* 00F618 8000EA18 A0500000 */  sb          $s0, 0x0($v0)
/* 00F61C 8000EA1C A070000D */  sb          $s0, 0xD($v1)
/* 00F620 8000EA20 26100001 */  addiu       $s0, $s0, 0x1
/* 00F624 8000EA24 0206082B */  sltu        $at, $s0, $a2
/* 00F628 8000EA28 24420001 */  addiu       $v0, $v0, 0x1
/* 00F62C 8000EA2C 1420FFFA */  bnez        $at, .L8000EA18
/* 00F630 8000EA30 24630010 */   addiu      $v1, $v1, 0x10
.L8000EA34:
/* 00F634 8000EA34 28C10100 */  slti        $at, $a2, 0x100
/* 00F638 8000EA38 00C03825 */  or          $a3, $a2, $zero
/* 00F63C 8000EA3C 1020000A */  beqz        $at, .L8000EA68
/* 00F640 8000EA40 00C08025 */   or         $s0, $a2, $zero
/* 00F644 8000EA44 3C0D8015 */  lui         $t5, %hi(D_80155A58)
/* 00F648 8000EA48 25AD5A58 */  addiu       $t5, $t5, %lo(D_80155A58)
/* 00F64C 8000EA4C 3C038015 */  lui         $v1, %hi(D_80155B58)
/* 00F650 8000EA50 24635B58 */  addiu       $v1, $v1, %lo(D_80155B58)
/* 00F654 8000EA54 020D1021 */  addu        $v0, $s0, $t5
.L8000EA58:
/* 00F658 8000EA58 24420001 */  addiu       $v0, $v0, 0x1
/* 00F65C 8000EA5C 0043082B */  sltu        $at, $v0, $v1
/* 00F660 8000EA60 1420FFFD */  bnez        $at, .L8000EA58
/* 00F664 8000EA64 A040FFFF */   sb         $zero, -0x1($v0)
.L8000EA68:
/* 00F668 8000EA68 3C018015 */  lui         $at, %hi(D_80155C58)
/* 00F66C 8000EA6C A0205C58 */  sb          $zero, %lo(D_80155C58)($at)
/* 00F670 8000EA70 3C128015 */  lui         $s2, %hi(D_80155A4C)
/* 00F674 8000EA74 3C018015 */  lui         $at, %hi(D_80155C5A)
/* 00F678 8000EA78 26525A4C */  addiu       $s2, $s2, %lo(D_80155A4C)
/* 00F67C 8000EA7C A0265C5A */  sb          $a2, %lo(D_80155C5A)($at)
/* 00F680 8000EA80 240E0200 */  addiu       $t6, $zero, 0x200
/* 00F684 8000EA84 AE460000 */  sw          $a2, 0x0($s2)
/* 00F688 8000EA88 AE8E0000 */  sw          $t6, 0x0($s4)
/* 00F68C 8000EA8C 1880001A */  blez        $a0, .L8000EAF8
/* 00F690 8000EA90 00008025 */   or         $s0, $zero, $zero
/* 00F694 8000EA94 01C02825 */  or          $a1, $t6, $zero
.L8000EA98:
/* 00F698 8000EA98 0C002FC5 */  jal         AudioHeap_Alloc
/* 00F69C 8000EA9C 02C02025 */   or         $a0, $s6, $zero
/* 00F6A0 8000EAA0 8E260000 */  lw          $a2, 0x0($s1)
/* 00F6A4 8000EAA4 26100001 */  addiu       $s0, $s0, 0x1
/* 00F6A8 8000EAA8 00067900 */  sll         $t7, $a2, 4
/* 00F6AC 8000EAAC 02EF1821 */  addu        $v1, $s7, $t7
/* 00F6B0 8000EAB0 14400003 */  bnez        $v0, .L8000EAC0
/* 00F6B4 8000EAB4 AC620000 */   sw         $v0, 0x0($v1)
/* 00F6B8 8000EAB8 1000000F */  b           .L8000EAF8
/* 00F6BC 8000EABC 00C03825 */   or         $a3, $a2, $zero
.L8000EAC0:
/* 00F6C0 8000EAC0 8EB90000 */  lw          $t9, 0x0($s5)
/* 00F6C4 8000EAC4 8E850000 */  lw          $a1, 0x0($s4)
/* 00F6C8 8000EAC8 24D80001 */  addiu       $t8, $a2, 0x1
/* 00F6CC 8000EACC 0219082A */  slt         $at, $s0, $t9
/* 00F6D0 8000EAD0 AC600004 */  sw          $zero, 0x4($v1)
/* 00F6D4 8000EAD4 A4600008 */  sh          $zero, 0x8($v1)
/* 00F6D8 8000EAD8 A060000C */  sb          $zero, 0xC($v1)
/* 00F6DC 8000EADC A060000E */  sb          $zero, 0xE($v1)
/* 00F6E0 8000EAE0 AE380000 */  sw          $t8, 0x0($s1)
/* 00F6E4 8000EAE4 1420FFEC */  bnez        $at, .L8000EA98
/* 00F6E8 8000EAE8 A465000A */   sh         $a1, 0xA($v1)
/* 00F6EC 8000EAEC 3C068015 */  lui         $a2, %hi(D_80155A48)
/* 00F6F0 8000EAF0 8CC65A48 */  lw          $a2, %lo(D_80155A48)($a2)
/* 00F6F4 8000EAF4 00C03825 */  or          $a3, $a2, $zero
.L8000EAF8:
/* 00F6F8 8000EAF8 8E450000 */  lw          $a1, 0x0($s2)
/* 00F6FC 8000EAFC 3C098015 */  lui         $t1, %hi(D_80154A48)
/* 00F700 8000EB00 25294A48 */  addiu       $t1, $t1, %lo(D_80154A48)
/* 00F704 8000EB04 00A6082B */  sltu        $at, $a1, $a2
/* 00F708 8000EB08 1020000F */  beqz        $at, .L8000EB48
/* 00F70C 8000EB0C 00A08025 */   or         $s0, $a1, $zero
/* 00F710 8000EB10 3C0A8015 */  lui         $t2, %hi(D_80155B58)
/* 00F714 8000EB14 254A5B58 */  addiu       $t2, $t2, %lo(D_80155B58)
/* 00F718 8000EB18 00104100 */  sll         $t0, $s0, 4
/* 00F71C 8000EB1C 02051023 */  subu        $v0, $s0, $a1
/* 00F720 8000EB20 004A2021 */  addu        $a0, $v0, $t2
/* 00F724 8000EB24 01091821 */  addu        $v1, $t0, $t1
.L8000EB28:
/* 00F728 8000EB28 A0900000 */  sb          $s0, 0x0($a0)
/* 00F72C 8000EB2C 26100001 */  addiu       $s0, $s0, 0x1
/* 00F730 8000EB30 0206082B */  sltu        $at, $s0, $a2
/* 00F734 8000EB34 A062000D */  sb          $v0, 0xD($v1)
/* 00F738 8000EB38 24420001 */  addiu       $v0, $v0, 0x1
/* 00F73C 8000EB3C 24630010 */  addiu       $v1, $v1, 0x10
/* 00F740 8000EB40 1420FFF9 */  bnez        $at, .L8000EB28
/* 00F744 8000EB44 24840001 */   addiu      $a0, $a0, 0x1
.L8000EB48:
/* 00F748 8000EB48 28E10100 */  slti        $at, $a3, 0x100
/* 00F74C 8000EB4C 1020000A */  beqz        $at, .L8000EB78
/* 00F750 8000EB50 00C56023 */   subu       $t4, $a2, $a1
/* 00F754 8000EB54 3C0B8015 */  lui         $t3, %hi(D_80155B58)
/* 00F758 8000EB58 256B5B58 */  addiu       $t3, $t3, %lo(D_80155B58)
/* 00F75C 8000EB5C 3C038015 */  lui         $v1, %hi(D_80155C58)
/* 00F760 8000EB60 24635C58 */  addiu       $v1, $v1, %lo(D_80155C58)
/* 00F764 8000EB64 00EB1021 */  addu        $v0, $a3, $t3
.L8000EB68:
/* 00F768 8000EB68 24420001 */  addiu       $v0, $v0, 0x1
/* 00F76C 8000EB6C 0043082B */  sltu        $at, $v0, $v1
/* 00F770 8000EB70 1420FFFD */  bnez        $at, .L8000EB68
/* 00F774 8000EB74 A045FFFF */   sb         $a1, -0x1($v0)
.L8000EB78:
/* 00F778 8000EB78 8FBF0034 */  lw          $ra, 0x34($sp)
/* 00F77C 8000EB7C 3C018015 */  lui         $at, %hi(D_80155C59)
/* 00F780 8000EB80 A0205C59 */  sb          $zero, %lo(D_80155C59)($at)
/* 00F784 8000EB84 3C018015 */  lui         $at, %hi(D_80155C5B)
/* 00F788 8000EB88 8FB00014 */  lw          $s0, 0x14($sp)
/* 00F78C 8000EB8C 8FB10018 */  lw          $s1, 0x18($sp)
/* 00F790 8000EB90 8FB2001C */  lw          $s2, 0x1C($sp)
/* 00F794 8000EB94 8FB30020 */  lw          $s3, 0x20($sp)
/* 00F798 8000EB98 8FB40024 */  lw          $s4, 0x24($sp)
/* 00F79C 8000EB9C 8FB50028 */  lw          $s5, 0x28($sp)
/* 00F7A0 8000EBA0 8FB6002C */  lw          $s6, 0x2C($sp)
/* 00F7A4 8000EBA4 8FB70030 */  lw          $s7, 0x30($sp)
/* 00F7A8 8000EBA8 A02C5C5B */  sb          $t4, %lo(D_80155C5B)($at)
/* 00F7AC 8000EBAC 03E00008 */  jr          $ra
/* 00F7B0 8000EBB0 27BD0038 */   addiu      $sp, $sp, 0x38
glabel func_8000EBB4
/* 00F7B4 8000EBB4 AFA60008 */  sw          $a2, 0x8($sp)
/* 00F7B8 8000EBB8 84830000 */  lh          $v1, 0x0($a0)
/* 00F7BC 8000EBBC A4860002 */  sh          $a2, 0x2($a0)
/* 00F7C0 8000EBC0 AC850004 */  sw          $a1, 0x4($a0)
/* 00F7C4 8000EBC4 18600011 */  blez        $v1, .L8000EC0C
/* 00F7C8 8000EBC8 00001025 */   or         $v0, $zero, $zero
/* 00F7CC 8000EBCC 00803025 */  or          $a2, $a0, $zero
/* 00F7D0 8000EBD0 24070002 */  addiu       $a3, $zero, 0x2
.L8000EBD4:
/* 00F7D4 8000EBD4 8CCF0014 */  lw          $t7, 0x14($a2)
/* 00F7D8 8000EBD8 24420001 */  addiu       $v0, $v0, 0x1
/* 00F7DC 8000EBDC 51E00009 */  beql        $t7, $zero, .L8000EC04
/* 00F7E0 8000EBE0 0043082A */   slt        $at, $v0, $v1
/* 00F7E4 8000EBE4 80D80018 */  lb          $t8, 0x18($a2)
/* 00F7E8 8000EBE8 54F80006 */  bnel        $a3, $t8, .L8000EC04
/* 00F7EC 8000EBEC 0043082A */   slt        $at, $v0, $v1
/* 00F7F0 8000EBF0 8CD90010 */  lw          $t9, 0x10($a2)
/* 00F7F4 8000EBF4 03254021 */  addu        $t0, $t9, $a1
/* 00F7F8 8000EBF8 ACC80010 */  sw          $t0, 0x10($a2)
/* 00F7FC 8000EBFC 84830000 */  lh          $v1, 0x0($a0)
/* 00F800 8000EC00 0043082A */  slt         $at, $v0, $v1
.L8000EC04:
/* 00F804 8000EC04 1420FFF3 */  bnez        $at, .L8000EBD4
/* 00F808 8000EC08 24C60010 */   addiu      $a2, $a2, 0x10
.L8000EC0C:
/* 00F80C 8000EC0C 03E00008 */  jr          $ra
/* 00F810 8000EC10 00000000 */   nop
glabel func_8000EC14
/* 00F814 8000EC14 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* 00F818 8000EC18 AFA5003C */  sw          $a1, 0x3C($sp)
/* 00F81C 8000EC1C 00802825 */  or          $a1, $a0, $zero
/* 00F820 8000EC20 AFBF0024 */  sw          $ra, 0x24($sp)
/* 00F824 8000EC24 AFA40038 */  sw          $a0, 0x38($sp)
/* 00F828 8000EC28 AFB30020 */  sw          $s3, 0x20($sp)
/* 00F82C 8000EC2C AFB2001C */  sw          $s2, 0x1C($sp)
/* 00F830 8000EC30 AFB10018 */  sw          $s1, 0x18($sp)
/* 00F834 8000EC34 AFB00014 */  sw          $s0, 0x14($sp)
/* 00F838 8000EC38 0C003DE4 */  jal         func_8000F790
/* 00F83C 8000EC3C 00002025 */   or         $a0, $zero, $zero
/* 00F840 8000EC40 3C138015 */  lui         $s3, %hi(D_80155C68)
/* 00F844 8000EC44 26735C68 */  addiu       $s3, $s3, %lo(D_80155C68)
/* 00F848 8000EC48 8E630000 */  lw          $v1, 0x0($s3)
/* 00F84C 8000EC4C 00027040 */  sll         $t6, $v0, 1
/* 00F850 8000EC50 241200FF */  addiu       $s2, $zero, 0xFF
/* 00F854 8000EC54 006E7821 */  addu        $t7, $v1, $t6
/* 00F858 8000EC58 95F00000 */  lhu         $s0, 0x0($t7)
/* 00F85C 8000EC5C 0203C021 */  addu        $t8, $s0, $v1
/* 00F860 8000EC60 93110000 */  lbu         $s1, 0x0($t8)
/* 00F864 8000EC64 26100001 */  addiu       $s0, $s0, 0x1
/* 00F868 8000EC68 5A20000C */  blezl       $s1, .L8000EC9C
/* 00F86C 8000EC6C 8FA9003C */   lw         $t1, 0x3C($sp)
/* 00F870 8000EC70 8E790000 */  lw          $t9, 0x0($s3)
.L8000EC74:
/* 00F874 8000EC74 02194021 */  addu        $t0, $s0, $t9
/* 00F878 8000EC78 91120000 */  lbu         $s2, 0x0($t0)
/* 00F87C 8000EC7C 26100001 */  addiu       $s0, $s0, 0x1
/* 00F880 8000EC80 0C003D1E */  jal         func_8000F478
/* 00F884 8000EC84 02402025 */   or         $a0, $s2, $zero
/* 00F888 8000EC88 2631FFFF */  addiu       $s1, $s1, -0x1
/* 00F88C 8000EC8C 5E20FFF9 */  bgtzl       $s1, .L8000EC74
/* 00F890 8000EC90 8E790000 */   lw         $t9, 0x0($s3)
/* 00F894 8000EC94 AFA20028 */  sw          $v0, 0x28($sp)
/* 00F898 8000EC98 8FA9003C */  lw          $t1, 0x3C($sp)
.L8000EC9C:
/* 00F89C 8000EC9C 8FA20028 */  lw          $v0, 0x28($sp)
/* 00F8A0 8000ECA0 AD320000 */  sw          $s2, 0x0($t1)
/* 00F8A4 8000ECA4 8FBF0024 */  lw          $ra, 0x24($sp)
/* 00F8A8 8000ECA8 8FB30020 */  lw          $s3, 0x20($sp)
/* 00F8AC 8000ECAC 8FB2001C */  lw          $s2, 0x1C($sp)
/* 00F8B0 8000ECB0 8FB10018 */  lw          $s1, 0x18($sp)
/* 00F8B4 8000ECB4 8FB00014 */  lw          $s0, 0x14($sp)
/* 00F8B8 8000ECB8 03E00008 */  jr          $ra
/* 00F8BC 8000ECBC 27BD0038 */   addiu      $sp, $sp, 0x38
glabel func_8000ECC0
/* 00F8C0 8000ECC0 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 00F8C4 8000ECC4 AFA50024 */  sw          $a1, 0x24($sp)
/* 00F8C8 8000ECC8 00802825 */  or          $a1, $a0, $zero
/* 00F8CC 8000ECCC AFBF0014 */  sw          $ra, 0x14($sp)
/* 00F8D0 8000ECD0 AFA40020 */  sw          $a0, 0x20($sp)
/* 00F8D4 8000ECD4 0C003DE4 */  jal         func_8000F790
/* 00F8D8 8000ECD8 00002025 */   or         $a0, $zero, $zero
/* 00F8DC 8000ECDC 8FAE0024 */  lw          $t6, 0x24($sp)
/* 00F8E0 8000ECE0 00402025 */  or          $a0, $v0, $zero
/* 00F8E4 8000ECE4 27A50018 */  addiu       $a1, $sp, 0x18
/* 00F8E8 8000ECE8 31CF0002 */  andi        $t7, $t6, 0x2
/* 00F8EC 8000ECEC 51E00005 */  beql        $t7, $zero, .L8000ED04
/* 00F8F0 8000ECF0 8FB80024 */   lw         $t8, 0x24($sp)
/* 00F8F4 8000ECF4 0C003B05 */  jal         func_8000EC14
/* 00F8F8 8000ECF8 AFA20020 */   sw         $v0, 0x20($sp)
/* 00F8FC 8000ECFC 8FA40020 */  lw          $a0, 0x20($sp)
/* 00F900 8000ED00 8FB80024 */  lw          $t8, 0x24($sp)
.L8000ED04:
/* 00F904 8000ED04 33190001 */  andi        $t9, $t8, 0x1
/* 00F908 8000ED08 53200004 */  beql        $t9, $zero, .L8000ED1C
/* 00F90C 8000ED0C 8FBF0014 */   lw         $ra, 0x14($sp)
/* 00F910 8000ED10 0C003CD5 */  jal         func_8000F354
/* 00F914 8000ED14 00000000 */   nop
/* 00F918 8000ED18 8FBF0014 */  lw          $ra, 0x14($sp)
.L8000ED1C:
/* 00F91C 8000ED1C 27BD0020 */  addiu       $sp, $sp, 0x20
/* 00F920 8000ED20 03E00008 */  jr          $ra
/* 00F924 8000ED24 00000000 */   nop
glabel func_8000ED28
/* 00F928 8000ED28 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* 00F92C 8000ED2C AFBF001C */  sw          $ra, 0x1C($sp)
/* 00F930 8000ED30 AFB00018 */  sw          $s0, 0x18($sp)
/* 00F934 8000ED34 908E0000 */  lbu         $t6, 0x0($a0)
/* 00F938 8000ED38 24010001 */  addiu       $at, $zero, 0x1
/* 00F93C 8000ED3C 00808025 */  or          $s0, $a0, $zero
/* 00F940 8000ED40 31CF0001 */  andi        $t7, $t6, 0x1
/* 00F944 8000ED44 55E1002F */  bnel        $t7, $at, .L8000EE04
/* 00F948 8000ED48 8FBF001C */   lw         $ra, 0x1C($sp)
/* 00F94C 8000ED4C 8C820000 */  lw          $v0, 0x0($a0)
/* 00F950 8000ED50 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 00F954 8000ED54 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 00F958 8000ED58 00021900 */  sll         $v1, $v0, 4
/* 00F95C 8000ED5C 0003C782 */  srl         $t8, $v1, 30
/* 00F960 8000ED60 13000027 */  beqz        $t8, .L8000EE00
/* 00F964 8000ED64 00412024 */   and        $a0, $v0, $at
/* 00F968 8000ED68 00183E00 */  sll         $a3, $t8, 24
/* 00F96C 8000ED6C 0007CE03 */  sra         $t9, $a3, 24
/* 00F970 8000ED70 03203825 */  or          $a3, $t9, $zero
/* 00F974 8000ED74 0C00370D */  jal         AudioHeap_AllocPersistentSampleCache
/* 00F978 8000ED78 8E060004 */   lw         $a2, 0x4($s0)
/* 00F97C 8000ED7C 14400003 */  bnez        $v0, .L8000ED8C
/* 00F980 8000ED80 00402825 */   or         $a1, $v0, $zero
/* 00F984 8000ED84 1000001E */  b           .L8000EE00
/* 00F988 8000ED88 2402FFFF */   addiu      $v0, $zero, -0x1
.L8000ED8C:
/* 00F98C 8000ED8C 8E020000 */  lw          $v0, 0x0($s0)
/* 00F990 8000ED90 24010001 */  addiu       $at, $zero, 0x1
/* 00F994 8000ED94 3C098015 */  lui         $t1, %hi(D_80155C64)
/* 00F998 8000ED98 00021900 */  sll         $v1, $v0, 4
/* 00F99C 8000ED9C 00034782 */  srl         $t0, $v1, 30
/* 00F9A0 8000EDA0 1501000B */  bne         $t0, $at, .L8000EDD0
/* 00F9A4 8000EDA4 01001825 */   or         $v1, $t0, $zero
/* 00F9A8 8000EDA8 8D295C64 */  lw          $t1, %lo(D_80155C64)($t1)
/* 00F9AC 8000EDAC 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 00F9B0 8000EDB0 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 00F9B4 8000EDB4 8E040004 */  lw          $a0, 0x4($s0)
/* 00F9B8 8000EDB8 85270002 */  lh          $a3, 0x2($t1)
/* 00F9BC 8000EDBC AFA50024 */  sw          $a1, 0x24($sp)
/* 00F9C0 8000EDC0 0C003ED4 */  jal         func_8000FB50
/* 00F9C4 8000EDC4 00413024 */   and        $a2, $v0, $at
/* 00F9C8 8000EDC8 10000009 */  b           .L8000EDF0
/* 00F9CC 8000EDCC 920A0000 */   lbu        $t2, 0x0($s0)
.L8000EDD0:
/* 00F9D0 8000EDD0 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 00F9D4 8000EDD4 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 00F9D8 8000EDD8 8E040004 */  lw          $a0, 0x4($s0)
/* 00F9DC 8000EDDC AFA50024 */  sw          $a1, 0x24($sp)
/* 00F9E0 8000EDE0 00413024 */  and         $a2, $v0, $at
/* 00F9E4 8000EDE4 0C003E8A */  jal         func_8000FA28
/* 00F9E8 8000EDE8 00603825 */   or         $a3, $v1, $zero
/* 00F9EC 8000EDEC 920A0000 */  lbu         $t2, 0x0($s0)
.L8000EDF0:
/* 00F9F0 8000EDF0 314BFFF3 */  andi        $t3, $t2, 0xFFF3
/* 00F9F4 8000EDF4 A20B0000 */  sb          $t3, 0x0($s0)
/* 00F9F8 8000EDF8 8FAC0024 */  lw          $t4, 0x24($sp)
/* 00F9FC 8000EDFC AE0C0004 */  sw          $t4, 0x4($s0)
.L8000EE00:
/* 00FA00 8000EE00 8FBF001C */  lw          $ra, 0x1C($sp)
.L8000EE04:
/* 00FA04 8000EE04 8FB00018 */  lw          $s0, 0x18($sp)
/* 00FA08 8000EE08 27BD0028 */  addiu       $sp, $sp, 0x28
/* 00FA0C 8000EE0C 03E00008 */  jr          $ra
/* 00FA10 8000EE10 00000000 */   nop
glabel func_8000EE14
/* 00FA14 8000EE14 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* 00FA18 8000EE18 AFB00018 */  sw          $s0, 0x18($sp)
/* 00FA1C 8000EE1C 28A1007F */  slti        $at, $a1, 0x7F
/* 00FA20 8000EE20 00808025 */  or          $s0, $a0, $zero
/* 00FA24 8000EE24 1020001D */  beqz        $at, .L8000EE9C
/* 00FA28 8000EE28 AFBF001C */   sw         $ra, 0x1C($sp)
/* 00FA2C 8000EE2C 0C004753 */  jal         func_80011D4C
/* 00FA30 8000EE30 00000000 */   nop
/* 00FA34 8000EE34 14400003 */  bnez        $v0, .L8000EE44
/* 00FA38 8000EE38 00401825 */   or         $v1, $v0, $zero
/* 00FA3C 8000EE3C 10000024 */  b           .L8000EED0
/* 00FA40 8000EE40 2402FFFF */   addiu      $v0, $zero, -0x1
.L8000EE44:
/* 00FA44 8000EE44 904E0001 */  lbu         $t6, 0x1($v0)
/* 00FA48 8000EE48 02002825 */  or          $a1, $s0, $zero
/* 00FA4C 8000EE4C 51C00006 */  beql        $t6, $zero, .L8000EE68
/* 00FA50 8000EE50 8C640010 */   lw         $a0, 0x10($v1)
/* 00FA54 8000EE54 8C640008 */  lw          $a0, 0x8($v1)
/* 00FA58 8000EE58 0C003B4A */  jal         func_8000ED28
/* 00FA5C 8000EE5C AFA30024 */   sw         $v1, 0x24($sp)
/* 00FA60 8000EE60 8FA30024 */  lw          $v1, 0x24($sp)
/* 00FA64 8000EE64 8C640010 */  lw          $a0, 0x10($v1)
.L8000EE68:
/* 00FA68 8000EE68 AFA30024 */  sw          $v1, 0x24($sp)
/* 00FA6C 8000EE6C 0C003B4A */  jal         func_8000ED28
/* 00FA70 8000EE70 02002825 */   or         $a1, $s0, $zero
/* 00FA74 8000EE74 8FA30024 */  lw          $v1, 0x24($sp)
/* 00FA78 8000EE78 2401007F */  addiu       $at, $zero, 0x7F
/* 00FA7C 8000EE7C 02002825 */  or          $a1, $s0, $zero
/* 00FA80 8000EE80 906F0002 */  lbu         $t7, 0x2($v1)
/* 00FA84 8000EE84 51E10013 */  beql        $t7, $at, .L8000EED4
/* 00FA88 8000EE88 8FBF001C */   lw         $ra, 0x1C($sp)
/* 00FA8C 8000EE8C 0C003B4A */  jal         func_8000ED28
/* 00FA90 8000EE90 8C640018 */   lw         $a0, 0x18($v1)
/* 00FA94 8000EE94 1000000F */  b           .L8000EED4
/* 00FA98 8000EE98 8FBF001C */   lw         $ra, 0x1C($sp)
.L8000EE9C:
/* 00FA9C 8000EE9C 2401007F */  addiu       $at, $zero, 0x7F
/* 00FAA0 8000EEA0 14A1000B */  bne         $a1, $at, .L8000EED0
/* 00FAA4 8000EEA4 02002025 */   or         $a0, $s0, $zero
/* 00FAA8 8000EEA8 0C00477F */  jal         func_80011DFC
/* 00FAAC 8000EEAC 00C02825 */   or         $a1, $a2, $zero
/* 00FAB0 8000EEB0 14400003 */  bnez        $v0, .L8000EEC0
/* 00FAB4 8000EEB4 00401825 */   or         $v1, $v0, $zero
/* 00FAB8 8000EEB8 10000005 */  b           .L8000EED0
/* 00FABC 8000EEBC 2402FFFF */   addiu      $v0, $zero, -0x1
.L8000EEC0:
/* 00FAC0 8000EEC0 8C640004 */  lw          $a0, 0x4($v1)
/* 00FAC4 8000EEC4 0C003B4A */  jal         func_8000ED28
/* 00FAC8 8000EEC8 02002825 */   or         $a1, $s0, $zero
/* 00FACC 8000EECC 00001025 */  or          $v0, $zero, $zero
.L8000EED0:
/* 00FAD0 8000EED0 8FBF001C */  lw          $ra, 0x1C($sp)
.L8000EED4:
/* 00FAD4 8000EED4 8FB00018 */  lw          $s0, 0x18($sp)
/* 00FAD8 8000EED8 27BD0028 */  addiu       $sp, $sp, 0x28
/* 00FADC 8000EEDC 03E00008 */  jr          $ra
/* 00FAE0 8000EEE0 00000000 */   nop
glabel func_8000EEE4
/* 00FAE4 8000EEE4 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 00FAE8 8000EEE8 AFA50024 */  sw          $a1, 0x24($sp)
/* 00FAEC 8000EEEC 00802825 */  or          $a1, $a0, $zero
/* 00FAF0 8000EEF0 AFBF001C */  sw          $ra, 0x1C($sp)
/* 00FAF4 8000EEF4 AFA40020 */  sw          $a0, 0x20($sp)
/* 00FAF8 8000EEF8 AFA60028 */  sw          $a2, 0x28($sp)
/* 00FAFC 8000EEFC AFA7002C */  sw          $a3, 0x2C($sp)
/* 00FB00 8000EF00 0C003DE4 */  jal         func_8000F790
/* 00FB04 8000EF04 24040002 */   addiu      $a0, $zero, 0x2
/* 00FB08 8000EF08 8FAE002C */  lw          $t6, 0x2C($sp)
/* 00FB0C 8000EF0C 24040002 */  addiu       $a0, $zero, 0x2
/* 00FB10 8000EF10 00402825 */  or          $a1, $v0, $zero
/* 00FB14 8000EF14 8FA60024 */  lw          $a2, 0x24($sp)
/* 00FB18 8000EF18 8FA70028 */  lw          $a3, 0x28($sp)
/* 00FB1C 8000EF1C 0C003F30 */  jal         func_8000FCC0
/* 00FB20 8000EF20 AFAE0010 */   sw         $t6, 0x10($sp)
/* 00FB24 8000EF24 14400004 */  bnez        $v0, .L8000EF38
/* 00FB28 8000EF28 8FA4002C */   lw         $a0, 0x2C($sp)
/* 00FB2C 8000EF2C 00002825 */  or          $a1, $zero, $zero
/* 00FB30 8000EF30 0C0081C8 */  jal         osSendMesg
/* 00FB34 8000EF34 00003025 */   or         $a2, $zero, $zero
.L8000EF38:
/* 00FB38 8000EF38 8FBF001C */  lw          $ra, 0x1C($sp)
/* 00FB3C 8000EF3C 27BD0020 */  addiu       $sp, $sp, 0x20
/* 00FB40 8000EF40 03E00008 */  jr          $ra
/* 00FB44 8000EF44 00000000 */   nop
glabel func_8000EF48
/* 00FB48 8000EF48 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* 00FB4C 8000EF4C AFB30028 */  sw          $s3, 0x28($sp)
/* 00FB50 8000EF50 00A09825 */  or          $s3, $a1, $zero
/* 00FB54 8000EF54 00802825 */  or          $a1, $a0, $zero
/* 00FB58 8000EF58 AFBF0034 */  sw          $ra, 0x34($sp)
/* 00FB5C 8000EF5C AFB50030 */  sw          $s5, 0x30($sp)
/* 00FB60 8000EF60 AFB4002C */  sw          $s4, 0x2C($sp)
/* 00FB64 8000EF64 AFA40038 */  sw          $a0, 0x38($sp)
/* 00FB68 8000EF68 00C0A025 */  or          $s4, $a2, $zero
/* 00FB6C 8000EF6C 00E0A825 */  or          $s5, $a3, $zero
/* 00FB70 8000EF70 AFB20024 */  sw          $s2, 0x24($sp)
/* 00FB74 8000EF74 AFB10020 */  sw          $s1, 0x20($sp)
/* 00FB78 8000EF78 AFB0001C */  sw          $s0, 0x1C($sp)
/* 00FB7C 8000EF7C 0C003DE4 */  jal         func_8000F790
/* 00FB80 8000EF80 00002025 */   or         $a0, $zero, $zero
/* 00FB84 8000EF84 3C128015 */  lui         $s2, %hi(D_80155C68)
/* 00FB88 8000EF88 26525C68 */  addiu       $s2, $s2, %lo(D_80155C68)
/* 00FB8C 8000EF8C 8E430000 */  lw          $v1, 0x0($s2)
/* 00FB90 8000EF90 00027040 */  sll         $t6, $v0, 1
/* 00FB94 8000EF94 006E7821 */  addu        $t7, $v1, $t6
/* 00FB98 8000EF98 95F00000 */  lhu         $s0, 0x0($t7)
/* 00FB9C 8000EF9C 0203C021 */  addu        $t8, $s0, $v1
/* 00FBA0 8000EFA0 93110000 */  lbu         $s1, 0x0($t8)
/* 00FBA4 8000EFA4 26100001 */  addiu       $s0, $s0, 0x1
/* 00FBA8 8000EFA8 5A200011 */  blezl       $s1, .L8000EFF0
/* 00FBAC 8000EFAC 8FBF0034 */   lw         $ra, 0x34($sp)
/* 00FBB0 8000EFB0 8E590000 */  lw          $t9, 0x0($s2)
.L8000EFB4:
/* 00FBB4 8000EFB4 24040001 */  addiu       $a0, $zero, 0x1
/* 00FBB8 8000EFB8 02194021 */  addu        $t0, $s0, $t9
/* 00FBBC 8000EFBC 91050000 */  lbu         $a1, 0x0($t0)
/* 00FBC0 8000EFC0 0C003DE4 */  jal         func_8000F790
/* 00FBC4 8000EFC4 26100001 */   addiu      $s0, $s0, 0x1
/* 00FBC8 8000EFC8 24040001 */  addiu       $a0, $zero, 0x1
/* 00FBCC 8000EFCC 00402825 */  or          $a1, $v0, $zero
/* 00FBD0 8000EFD0 02603025 */  or          $a2, $s3, $zero
/* 00FBD4 8000EFD4 02803825 */  or          $a3, $s4, $zero
/* 00FBD8 8000EFD8 0C003F30 */  jal         func_8000FCC0
/* 00FBDC 8000EFDC AFB50010 */   sw         $s5, 0x10($sp)
/* 00FBE0 8000EFE0 2631FFFF */  addiu       $s1, $s1, -0x1
/* 00FBE4 8000EFE4 5E20FFF3 */  bgtzl       $s1, .L8000EFB4
/* 00FBE8 8000EFE8 8E590000 */   lw         $t9, 0x0($s2)
/* 00FBEC 8000EFEC 8FBF0034 */  lw          $ra, 0x34($sp)
.L8000EFF0:
/* 00FBF0 8000EFF0 8FB0001C */  lw          $s0, 0x1C($sp)
/* 00FBF4 8000EFF4 8FB10020 */  lw          $s1, 0x20($sp)
/* 00FBF8 8000EFF8 8FB20024 */  lw          $s2, 0x24($sp)
/* 00FBFC 8000EFFC 8FB30028 */  lw          $s3, 0x28($sp)
/* 00FC00 8000F000 8FB4002C */  lw          $s4, 0x2C($sp)
/* 00FC04 8000F004 8FB50030 */  lw          $s5, 0x30($sp)
/* 00FC08 8000F008 03E00008 */  jr          $ra
/* 00FC0C 8000F00C 27BD0038 */   addiu      $sp, $sp, 0x38
glabel func_8000F010
/* 00FC10 8000F010 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 00FC14 8000F014 AFA5001C */  sw          $a1, 0x1C($sp)
/* 00FC18 8000F018 00802825 */  or          $a1, $a0, $zero
/* 00FC1C 8000F01C AFBF0014 */  sw          $ra, 0x14($sp)
/* 00FC20 8000F020 AFA40018 */  sw          $a0, 0x18($sp)
/* 00FC24 8000F024 0C003DE4 */  jal         func_8000F790
/* 00FC28 8000F028 00002025 */   or         $a0, $zero, $zero
/* 00FC2C 8000F02C 3C068015 */  lui         $a2, %hi(D_80155C68)
/* 00FC30 8000F030 24C65C68 */  addiu       $a2, $a2, %lo(D_80155C68)
/* 00FC34 8000F034 8CC30000 */  lw          $v1, 0x0($a2)
/* 00FC38 8000F038 00027040 */  sll         $t6, $v0, 1
/* 00FC3C 8000F03C 8FA5001C */  lw          $a1, 0x1C($sp)
/* 00FC40 8000F040 006E7821 */  addu        $t7, $v1, $t6
/* 00FC44 8000F044 95E40000 */  lhu         $a0, 0x0($t7)
/* 00FC48 8000F048 0083C021 */  addu        $t8, $a0, $v1
/* 00FC4C 8000F04C 93190000 */  lbu         $t9, 0x0($t8)
/* 00FC50 8000F050 24840001 */  addiu       $a0, $a0, 0x1
/* 00FC54 8000F054 ACB90000 */  sw          $t9, 0x0($a1)
/* 00FC58 8000F058 17200003 */  bnez        $t9, .L8000F068
/* 00FC5C 8000F05C 8FBF0014 */   lw         $ra, 0x14($sp)
/* 00FC60 8000F060 10000003 */  b           .L8000F070
/* 00FC64 8000F064 00001025 */   or         $v0, $zero, $zero
.L8000F068:
/* 00FC68 8000F068 8CC90000 */  lw          $t1, 0x0($a2)
/* 00FC6C 8000F06C 01241021 */  addu        $v0, $t1, $a0
.L8000F070:
/* 00FC70 8000F070 03E00008 */  jr          $ra
/* 00FC74 8000F074 27BD0018 */   addiu      $sp, $sp, 0x18
glabel func_8000F078
/* 00FC78 8000F078 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* 00FC7C 8000F07C AFBF002C */  sw          $ra, 0x2C($sp)
/* 00FC80 8000F080 00802825 */  or          $a1, $a0, $zero
/* 00FC84 8000F084 AFB50028 */  sw          $s5, 0x28($sp)
/* 00FC88 8000F088 AFB40024 */  sw          $s4, 0x24($sp)
/* 00FC8C 8000F08C AFB30020 */  sw          $s3, 0x20($sp)
/* 00FC90 8000F090 AFB2001C */  sw          $s2, 0x1C($sp)
/* 00FC94 8000F094 AFB10018 */  sw          $s1, 0x18($sp)
/* 00FC98 8000F098 AFB00014 */  sw          $s0, 0x14($sp)
/* 00FC9C 8000F09C 0C003DE4 */  jal         func_8000F790
/* 00FCA0 8000F0A0 00002025 */   or         $a0, $zero, $zero
/* 00FCA4 8000F0A4 3C158015 */  lui         $s5, %hi(D_80155C68)
/* 00FCA8 8000F0A8 26B55C68 */  addiu       $s5, $s5, %lo(D_80155C68)
/* 00FCAC 8000F0AC 8EA30000 */  lw          $v1, 0x0($s5)
/* 00FCB0 8000F0B0 00027040 */  sll         $t6, $v0, 1
/* 00FCB4 8000F0B4 3C148015 */  lui         $s4, %hi(D_8014D3E8)
/* 00FCB8 8000F0B8 006E7821 */  addu        $t7, $v1, $t6
/* 00FCBC 8000F0BC 95F10000 */  lhu         $s1, 0x0($t7)
/* 00FCC0 8000F0C0 2694D3E8 */  addiu       $s4, $s4, %lo(D_8014D3E8)
/* 00FCC4 8000F0C4 24130005 */  addiu       $s3, $zero, 0x5
/* 00FCC8 8000F0C8 0223C021 */  addu        $t8, $s1, $v1
/* 00FCCC 8000F0CC 93120000 */  lbu         $s2, 0x0($t8)
/* 00FCD0 8000F0D0 26310001 */  addiu       $s1, $s1, 0x1
/* 00FCD4 8000F0D4 5A400018 */  blezl       $s2, .L8000F138
/* 00FCD8 8000F0D8 8FBF002C */   lw         $ra, 0x2C($sp)
/* 00FCDC 8000F0DC 8EB90000 */  lw          $t9, 0x0($s5)
.L8000F0E0:
/* 00FCE0 8000F0E0 2652FFFF */  addiu       $s2, $s2, -0x1
/* 00FCE4 8000F0E4 24040001 */  addiu       $a0, $zero, 0x1
/* 00FCE8 8000F0E8 02394021 */  addu        $t0, $s1, $t9
/* 00FCEC 8000F0EC 91050000 */  lbu         $a1, 0x0($t0)
/* 00FCF0 8000F0F0 0C003DE4 */  jal         func_8000F790
/* 00FCF4 8000F0F4 26310001 */   addiu      $s1, $s1, 0x1
/* 00FCF8 8000F0F8 00408025 */  or          $s0, $v0, $zero
/* 00FCFC 8000F0FC 24040001 */  addiu       $a0, $zero, 0x1
/* 00FD00 8000F100 0C0036C3 */  jal         AudioHeap_SearchPermanentCache
/* 00FD04 8000F104 00402825 */   or         $a1, $v0, $zero
/* 00FD08 8000F108 14400008 */  bnez        $v0, .L8000F12C
/* 00FD0C 8000F10C 00000000 */   nop
/* 00FD10 8000F110 0C003C56 */  jal         func_8000F158
/* 00FD14 8000F114 02002025 */   or         $a0, $s0, $zero
/* 00FD18 8000F118 02901821 */  addu        $v1, $s4, $s0
/* 00FD1C 8000F11C 90690000 */  lbu         $t1, 0x0($v1)
/* 00FD20 8000F120 12690002 */  beq         $s3, $t1, .L8000F12C
/* 00FD24 8000F124 00000000 */   nop
/* 00FD28 8000F128 A0600000 */  sb          $zero, 0x0($v1)
.L8000F12C:
/* 00FD2C 8000F12C 5E40FFEC */  bgtzl       $s2, .L8000F0E0
/* 00FD30 8000F130 8EB90000 */   lw         $t9, 0x0($s5)
/* 00FD34 8000F134 8FBF002C */  lw          $ra, 0x2C($sp)
.L8000F138:
/* 00FD38 8000F138 8FB00014 */  lw          $s0, 0x14($sp)
/* 00FD3C 8000F13C 8FB10018 */  lw          $s1, 0x18($sp)
/* 00FD40 8000F140 8FB2001C */  lw          $s2, 0x1C($sp)
/* 00FD44 8000F144 8FB30020 */  lw          $s3, 0x20($sp)
/* 00FD48 8000F148 8FB40024 */  lw          $s4, 0x24($sp)
/* 00FD4C 8000F14C 8FB50028 */  lw          $s5, 0x28($sp)
/* 00FD50 8000F150 03E00008 */  jr          $ra
/* 00FD54 8000F154 27BD0030 */   addiu      $sp, $sp, 0x30
glabel func_8000F158
/* 00FD58 8000F158 3C028015 */  lui         $v0, %hi(D_8014C410)
/* 00FD5C 8000F15C 2442C410 */  addiu       $v0, $v0, %lo(D_8014C410)
/* 00FD60 8000F160 844E01B2 */  lh          $t6, 0x1B2($v0)
/* 00FD64 8000F164 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 00FD68 8000F168 AFBF0014 */  sw          $ra, 0x14($sp)
/* 00FD6C 8000F16C 148E0005 */  bne         $a0, $t6, .L8000F184
/* 00FD70 8000F170 00803025 */   or         $a2, $a0, $zero
/* 00FD74 8000F174 240FFFFF */  addiu       $t7, $zero, -0x1
/* 00FD78 8000F178 3C018015 */  lui         $at, %hi(D_8014C5C2)
/* 00FD7C 8000F17C 10000008 */  b           .L8000F1A0
/* 00FD80 8000F180 A42FC5C2 */   sh         $t7, %lo(D_8014C5C2)($at)
.L8000F184:
/* 00FD84 8000F184 3C188015 */  lui         $t8, %hi(D_8014C5CE)
/* 00FD88 8000F188 8718C5CE */  lh          $t8, %lo(D_8014C5CE)($t8)
/* 00FD8C 8000F18C 2419FFFF */  addiu       $t9, $zero, -0x1
/* 00FD90 8000F190 3C018015 */  lui         $at, %hi(D_8014C5CE)
/* 00FD94 8000F194 14D80002 */  bne         $a2, $t8, .L8000F1A0
/* 00FD98 8000F198 00000000 */   nop
/* 00FD9C 8000F19C A439C5CE */  sh          $t9, %lo(D_8014C5CE)($at)
.L8000F1A0:
/* 00FDA0 8000F1A0 3C088015 */  lui         $t0, %hi(D_8014C410)
/* 00FDA4 8000F1A4 8D08C410 */  lw          $t0, %lo(D_8014C410)($t0)
/* 00FDA8 8000F1A8 00402025 */  or          $a0, $v0, $zero
/* 00FDAC 8000F1AC 3C028015 */  lui         $v0, %hi(D_8014C410)
/* 00FDB0 8000F1B0 1100000D */  beqz        $t0, .L8000F1E8
/* 00FDB4 8000F1B4 00001825 */   or         $v1, $zero, $zero
/* 00FDB8 8000F1B8 2442C410 */  addiu       $v0, $v0, %lo(D_8014C410)
/* 00FDBC 8000F1BC 2405FFFF */  addiu       $a1, $zero, -0x1
/* 00FDC0 8000F1C0 8449001E */  lh          $t1, 0x1E($v0)
.L8000F1C4:
/* 00FDC4 8000F1C4 54C90003 */  bnel        $a2, $t1, .L8000F1D4
/* 00FDC8 8000F1C8 8C8A0000 */   lw         $t2, 0x0($a0)
/* 00FDCC 8000F1CC A445001E */  sh          $a1, 0x1E($v0)
/* 00FDD0 8000F1D0 8C8A0000 */  lw          $t2, 0x0($a0)
.L8000F1D4:
/* 00FDD4 8000F1D4 24630001 */  addiu       $v1, $v1, 0x1
/* 00FDD8 8000F1D8 2442000C */  addiu       $v0, $v0, 0xC
/* 00FDDC 8000F1DC 006A082B */  sltu        $at, $v1, $t2
/* 00FDE0 8000F1E0 5420FFF8 */  bnel        $at, $zero, .L8000F1C4
/* 00FDE4 8000F1E4 8449001E */   lh         $t1, 0x1E($v0)
.L8000F1E8:
/* 00FDE8 8000F1E8 0C002F4E */  jal         AudioHeap_DiscardFont
/* 00FDEC 8000F1EC 00C02025 */   or         $a0, $a2, $zero
/* 00FDF0 8000F1F0 8FBF0014 */  lw          $ra, 0x14($sp)
/* 00FDF4 8000F1F4 27BD0018 */  addiu       $sp, $sp, 0x18
/* 00FDF8 8000F1F8 03E00008 */  jr          $ra
/* 00FDFC 8000F1FC 00000000 */   nop
glabel func_8000F200
/* 00FE00 8000F200 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 00FE04 8000F204 AFBF0014 */  sw          $ra, 0x14($sp)
/* 00FE08 8000F208 0C003C88 */  jal         func_8000F220
/* 00FE0C 8000F20C 00000000 */   nop
/* 00FE10 8000F210 8FBF0014 */  lw          $ra, 0x14($sp)
/* 00FE14 8000F214 27BD0018 */  addiu       $sp, $sp, 0x18
/* 00FE18 8000F218 03E00008 */  jr          $ra
/* 00FE1C 8000F21C 00000000 */   nop
glabel func_8000F220
/* 00FE20 8000F220 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* 00FE24 8000F224 AFBF002C */  sw          $ra, 0x2C($sp)
/* 00FE28 8000F228 AFA40030 */  sw          $a0, 0x30($sp)
/* 00FE2C 8000F22C AFB50028 */  sw          $s5, 0x28($sp)
/* 00FE30 8000F230 AFB40024 */  sw          $s4, 0x24($sp)
/* 00FE34 8000F234 AFB30020 */  sw          $s3, 0x20($sp)
/* 00FE38 8000F238 AFB2001C */  sw          $s2, 0x1C($sp)
/* 00FE3C 8000F23C AFB10018 */  sw          $s1, 0x18($sp)
/* 00FE40 8000F240 AFB00014 */  sw          $s0, 0x14($sp)
/* 00FE44 8000F244 AFA60038 */  sw          $a2, 0x38($sp)
/* 00FE48 8000F248 0C003DE4 */  jal         func_8000F790
/* 00FE4C 8000F24C 00002025 */   or         $a0, $zero, $zero
/* 00FE50 8000F250 8FAE0030 */  lw          $t6, 0x30($sp)
/* 00FE54 8000F254 3C188015 */  lui         $t8, %hi(D_8014E538)
/* 00FE58 8000F258 2718E538 */  addiu       $t8, $t8, %lo(D_8014E538)
/* 00FE5C 8000F25C 000E7880 */  sll         $t7, $t6, 2
/* 00FE60 8000F260 01EE7821 */  addu        $t7, $t7, $t6
/* 00FE64 8000F264 000F7880 */  sll         $t7, $t7, 2
/* 00FE68 8000F268 01EE7821 */  addu        $t7, $t7, $t6
/* 00FE6C 8000F26C 000F7880 */  sll         $t7, $t7, 2
/* 00FE70 8000F270 01EE7823 */  subu        $t7, $t7, $t6
/* 00FE74 8000F274 000F7880 */  sll         $t7, $t7, 2
/* 00FE78 8000F278 01F8A021 */  addu        $s4, $t7, $t8
/* 00FE7C 8000F27C 0040A825 */  or          $s5, $v0, $zero
/* 00FE80 8000F280 0C005139 */  jal         func_800144E4
/* 00FE84 8000F284 02802025 */   or         $a0, $s4, $zero
/* 00FE88 8000F288 3C138015 */  lui         $s3, %hi(D_80155C68)
/* 00FE8C 8000F28C 26735C68 */  addiu       $s3, $s3, %lo(D_80155C68)
/* 00FE90 8000F290 8E620000 */  lw          $v0, 0x0($s3)
/* 00FE94 8000F294 0015C840 */  sll         $t9, $s5, 1
/* 00FE98 8000F298 241200FF */  addiu       $s2, $zero, 0xFF
/* 00FE9C 8000F29C 00594021 */  addu        $t0, $v0, $t9
/* 00FEA0 8000F2A0 95100000 */  lhu         $s0, 0x0($t0)
/* 00FEA4 8000F2A4 02024821 */  addu        $t1, $s0, $v0
/* 00FEA8 8000F2A8 91310000 */  lbu         $s1, 0x0($t1)
/* 00FEAC 8000F2AC 26100001 */  addiu       $s0, $s0, 0x1
/* 00FEB0 8000F2B0 1A20000A */  blez        $s1, .L8000F2DC
/* 00FEB4 8000F2B4 00000000 */   nop
/* 00FEB8 8000F2B8 8E6A0000 */  lw          $t2, 0x0($s3)
.L8000F2BC:
/* 00FEBC 8000F2BC 020A5821 */  addu        $t3, $s0, $t2
/* 00FEC0 8000F2C0 91720000 */  lbu         $s2, 0x0($t3)
/* 00FEC4 8000F2C4 26100001 */  addiu       $s0, $s0, 0x1
/* 00FEC8 8000F2C8 0C003D1E */  jal         func_8000F478
/* 00FECC 8000F2CC 02402025 */   or         $a0, $s2, $zero
/* 00FED0 8000F2D0 2631FFFF */  addiu       $s1, $s1, -0x1
/* 00FED4 8000F2D4 5E20FFF9 */  bgtzl       $s1, .L8000F2BC
/* 00FED8 8000F2D8 8E6A0000 */   lw         $t2, 0x0($s3)
.L8000F2DC:
/* 00FEDC 8000F2DC 0C003CD5 */  jal         func_8000F354
/* 00FEE0 8000F2E0 02A02025 */   or         $a0, $s5, $zero
/* 00FEE4 8000F2E4 00408025 */  or          $s0, $v0, $zero
/* 00FEE8 8000F2E8 0C005A01 */  jal         func_80016804
/* 00FEEC 8000F2EC 8FA40030 */   lw         $a0, 0x30($sp)
/* 00FEF0 8000F2F0 928D0000 */  lbu         $t5, 0x0($s4)
/* 00FEF4 8000F2F4 A2950004 */  sb          $s5, 0x4($s4)
/* 00FEF8 8000F2F8 A2920005 */  sb          $s2, 0x5($s4)
/* 00FEFC 8000F2FC 35AF0080 */  ori         $t7, $t5, 0x80
/* 00FF00 8000F300 A28F0000 */  sb          $t7, 0x0($s4)
/* 00FF04 8000F304 31F800BF */  andi        $t8, $t7, 0xBF
/* 00FF08 8000F308 AE900018 */  sw          $s0, 0x18($s4)
/* 00FF0C 8000F30C AE900074 */  sw          $s0, 0x74($s4)
/* 00FF10 8000F310 A280008C */  sb          $zero, 0x8C($s4)
/* 00FF14 8000F314 A6800010 */  sh          $zero, 0x10($s4)
/* 00FF18 8000F318 A2980000 */  sb          $t8, 0x0($s4)
/* 00FF1C 8000F31C 00001025 */  or          $v0, $zero, $zero
/* 00FF20 8000F320 24030010 */  addiu       $v1, $zero, 0x10
/* 00FF24 8000F324 24420004 */  addiu       $v0, $v0, 0x4
.L8000F328:
/* 00FF28 8000F328 5443FFFF */  bnel        $v0, $v1, .L8000F328
/* 00FF2C 8000F32C 24420004 */   addiu      $v0, $v0, 0x4
/* 00FF30 8000F330 8FBF002C */  lw          $ra, 0x2C($sp)
/* 00FF34 8000F334 8FB00014 */  lw          $s0, 0x14($sp)
/* 00FF38 8000F338 8FB10018 */  lw          $s1, 0x18($sp)
/* 00FF3C 8000F33C 8FB2001C */  lw          $s2, 0x1C($sp)
/* 00FF40 8000F340 8FB30020 */  lw          $s3, 0x20($sp)
/* 00FF44 8000F344 8FB40024 */  lw          $s4, 0x24($sp)
/* 00FF48 8000F348 8FB50028 */  lw          $s5, 0x28($sp)
/* 00FF4C 8000F34C 03E00008 */  jr          $ra
/* 00FF50 8000F350 27BD0030 */   addiu      $sp, $sp, 0x30
glabel func_8000F354
/* 00FF54 8000F354 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 00FF58 8000F358 AFBF0014 */  sw          $ra, 0x14($sp)
/* 00FF5C 8000F35C 00802825 */  or          $a1, $a0, $zero
/* 00FF60 8000F360 0C003DE4 */  jal         func_8000F790
/* 00FF64 8000F364 00002025 */   or         $a0, $zero, $zero
/* 00FF68 8000F368 00002025 */  or          $a0, $zero, $zero
/* 00FF6C 8000F36C 00402825 */  or          $a1, $v0, $zero
/* 00FF70 8000F370 0C003D55 */  jal         func_8000F554
/* 00FF74 8000F374 27A60018 */   addiu      $a2, $sp, 0x18
/* 00FF78 8000F378 8FBF0014 */  lw          $ra, 0x14($sp)
/* 00FF7C 8000F37C 27BD0020 */  addiu       $sp, $sp, 0x20
/* 00FF80 8000F380 03E00008 */  jr          $ra
/* 00FF84 8000F384 00000000 */   nop
glabel func_8000F388
/* 00FF88 8000F388 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* 00FF8C 8000F38C AFB00018 */  sw          $s0, 0x18($sp)
/* 00FF90 8000F390 00808025 */  or          $s0, $a0, $zero
/* 00FF94 8000F394 AFBF001C */  sw          $ra, 0x1C($sp)
/* 00FF98 8000F398 AFA5003C */  sw          $a1, 0x3C($sp)
/* 00FF9C 8000F39C 0C003E08 */  jal         func_8000F820
/* 00FFA0 8000F3A0 24040002 */   addiu      $a0, $zero, 0x2
/* 00FFA4 8000F3A4 AFA20030 */  sw          $v0, 0x30($sp)
/* 00FFA8 8000F3A8 24040002 */  addiu       $a0, $zero, 0x2
/* 00FFAC 8000F3AC 0C003DE4 */  jal         func_8000F790
/* 00FFB0 8000F3B0 02002825 */   or         $a1, $s0, $zero
/* 00FFB4 8000F3B4 00408025 */  or          $s0, $v0, $zero
/* 00FFB8 8000F3B8 24040002 */  addiu       $a0, $zero, 0x2
/* 00FFBC 8000F3BC 0C003DF3 */  jal         func_8000F7CC
/* 00FFC0 8000F3C0 00402825 */   or         $a1, $v0, $zero
/* 00FFC4 8000F3C4 1040000E */  beqz        $v0, .L8000F400
/* 00FFC8 8000F3C8 00402025 */   or         $a0, $v0, $zero
/* 00FFCC 8000F3CC 3C0E8015 */  lui         $t6, %hi(D_8014D3A8)
/* 00FFD0 8000F3D0 25CED3A8 */  addiu       $t6, $t6, %lo(D_8014D3A8)
/* 00FFD4 8000F3D4 020E1021 */  addu        $v0, $s0, $t6
/* 00FFD8 8000F3D8 904F0000 */  lbu         $t7, 0x0($v0)
/* 00FFDC 8000F3DC 24010005 */  addiu       $at, $zero, 0x5
/* 00FFE0 8000F3E0 24180002 */  addiu       $t8, $zero, 0x2
/* 00FFE4 8000F3E4 51E10003 */  beql        $t7, $at, .L8000F3F4
/* 00FFE8 8000F3E8 8FB9003C */   lw         $t9, 0x3C($sp)
/* 00FFEC 8000F3EC A0580000 */  sb          $t8, 0x0($v0)
/* 00FFF0 8000F3F0 8FB9003C */  lw          $t9, 0x3C($sp)
.L8000F3F4:
/* 00FFF4 8000F3F4 00801025 */  or          $v0, $a0, $zero
/* 00FFF8 8000F3F8 1000001A */  b           .L8000F464
/* 00FFFC 8000F3FC AF200000 */   sw         $zero, 0x0($t9)
.L8000F400:
/* 010000 8000F400 8FA80030 */  lw          $t0, 0x30($sp)
/* 010004 8000F404 00104900 */  sll         $t1, $s0, 4
/* 010008 8000F408 24010004 */  addiu       $at, $zero, 0x4
/* 01000C 8000F40C 01091821 */  addu        $v1, $t0, $t1
/* 010010 8000F410 80620019 */  lb          $v0, 0x19($v1)
/* 010014 8000F414 24040002 */  addiu       $a0, $zero, 0x2
/* 010018 8000F418 02002825 */  or          $a1, $s0, $zero
/* 01001C 8000F41C 14410006 */  bne         $v0, $at, .L8000F438
/* 010020 8000F420 27A60028 */   addiu      $a2, $sp, 0x28
/* 010024 8000F424 806A0018 */  lb          $t2, 0x18($v1)
/* 010028 8000F428 8FAB003C */  lw          $t3, 0x3C($sp)
/* 01002C 8000F42C AD6A0000 */  sw          $t2, 0x0($t3)
/* 010030 8000F430 1000000C */  b           .L8000F464
/* 010034 8000F434 8C620010 */   lw         $v0, 0x10($v1)
.L8000F438:
/* 010038 8000F438 0C003D55 */  jal         func_8000F554
/* 01003C 8000F43C AFA30024 */   sw         $v1, 0x24($sp)
/* 010040 8000F440 10400004 */  beqz        $v0, .L8000F454
/* 010044 8000F444 8FA30024 */   lw         $v1, 0x24($sp)
/* 010048 8000F448 8FAC003C */  lw          $t4, 0x3C($sp)
/* 01004C 8000F44C 10000005 */  b           .L8000F464
/* 010050 8000F450 AD800000 */   sw         $zero, 0x0($t4)
.L8000F454:
/* 010054 8000F454 806D0018 */  lb          $t5, 0x18($v1)
/* 010058 8000F458 8FAE003C */  lw          $t6, 0x3C($sp)
/* 01005C 8000F45C ADCD0000 */  sw          $t5, 0x0($t6)
/* 010060 8000F460 8C620010 */  lw          $v0, 0x10($v1)
.L8000F464:
/* 010064 8000F464 8FBF001C */  lw          $ra, 0x1C($sp)
/* 010068 8000F468 8FB00018 */  lw          $s0, 0x18($sp)
/* 01006C 8000F46C 27BD0038 */  addiu       $sp, $sp, 0x38
/* 010070 8000F470 03E00008 */  jr          $ra
/* 010074 8000F474 00000000 */   nop
glabel func_8000F478
/* 010078 8000F478 27BDFFB8 */  addiu       $sp, $sp, -0x48
/* 01007C 8000F47C AFBF0014 */  sw          $ra, 0x14($sp)
/* 010080 8000F480 00802825 */  or          $a1, $a0, $zero
/* 010084 8000F484 0C003DE4 */  jal         func_8000F790
/* 010088 8000F488 24040001 */   addiu      $a0, $zero, 0x1
/* 01008C 8000F48C 3C0E8015 */  lui         $t6, %hi(D_80155C70)
/* 010090 8000F490 8DCE5C70 */  lw          $t6, %lo(D_80155C70)($t6)
/* 010094 8000F494 00027880 */  sll         $t7, $v0, 2
/* 010098 8000F498 01E27823 */  subu        $t7, $t7, $v0
/* 01009C 8000F49C 000F7880 */  sll         $t7, $t7, 2
/* 0100A0 8000F4A0 AFA20048 */  sw          $v0, 0x48($sp)
/* 0100A4 8000F4A4 01CF1821 */  addu        $v1, $t6, $t7
/* 0100A8 8000F4A8 90640002 */  lbu         $a0, 0x2($v1)
/* 0100AC 8000F4AC 90660003 */  lbu         $a2, 0x3($v1)
/* 0100B0 8000F4B0 240100FF */  addiu       $at, $zero, 0xFF
/* 0100B4 8000F4B4 AFA40020 */  sw          $a0, 0x20($sp)
/* 0100B8 8000F4B8 10810007 */  beq         $a0, $at, .L8000F4D8
/* 0100BC 8000F4BC AFA60024 */   sw         $a2, 0x24($sp)
/* 0100C0 8000F4C0 27A50030 */  addiu       $a1, $sp, 0x30
/* 0100C4 8000F4C4 0C003CE2 */  jal         func_8000F388
/* 0100C8 8000F4C8 AFA6003C */   sw         $a2, 0x3C($sp)
/* 0100CC 8000F4CC 8FA6003C */  lw          $a2, 0x3C($sp)
/* 0100D0 8000F4D0 10000002 */  b           .L8000F4DC
/* 0100D4 8000F4D4 AFA20028 */   sw         $v0, 0x28($sp)
.L8000F4D8:
/* 0100D8 8000F4D8 AFA00028 */  sw          $zero, 0x28($sp)
.L8000F4DC:
/* 0100DC 8000F4DC 240100FF */  addiu       $at, $zero, 0xFF
/* 0100E0 8000F4E0 10C10005 */  beq         $a2, $at, .L8000F4F8
/* 0100E4 8000F4E4 00C02025 */   or         $a0, $a2, $zero
/* 0100E8 8000F4E8 0C003CE2 */  jal         func_8000F388
/* 0100EC 8000F4EC 27A50034 */   addiu      $a1, $sp, 0x34
/* 0100F0 8000F4F0 10000002 */  b           .L8000F4FC
/* 0100F4 8000F4F4 AFA2002C */   sw         $v0, 0x2C($sp)
.L8000F4F8:
/* 0100F8 8000F4F8 AFA0002C */  sw          $zero, 0x2C($sp)
.L8000F4FC:
/* 0100FC 8000F4FC 24040001 */  addiu       $a0, $zero, 0x1
/* 010100 8000F500 8FA50048 */  lw          $a1, 0x48($sp)
/* 010104 8000F504 0C003D55 */  jal         func_8000F554
/* 010108 8000F508 27A60038 */   addiu      $a2, $sp, 0x38
/* 01010C 8000F50C 14400003 */  bnez        $v0, .L8000F51C
/* 010110 8000F510 00402825 */   or         $a1, $v0, $zero
/* 010114 8000F514 1000000B */  b           .L8000F544
/* 010118 8000F518 00001025 */   or         $v0, $zero, $zero
.L8000F51C:
/* 01011C 8000F51C 8FB80038 */  lw          $t8, 0x38($sp)
/* 010120 8000F520 24010001 */  addiu       $at, $zero, 0x1
/* 010124 8000F524 8FA40048 */  lw          $a0, 0x48($sp)
/* 010128 8000F528 17010005 */  bne         $t8, $at, .L8000F540
/* 01012C 8000F52C 27A60020 */   addiu      $a2, $sp, 0x20
/* 010130 8000F530 00003825 */  or          $a3, $zero, $zero
/* 010134 8000F534 0C004448 */  jal         func_80011120
/* 010138 8000F538 AFA50044 */   sw         $a1, 0x44($sp)
/* 01013C 8000F53C 8FA50044 */  lw          $a1, 0x44($sp)
.L8000F540:
/* 010140 8000F540 00A01025 */  or          $v0, $a1, $zero
.L8000F544:
/* 010144 8000F544 8FBF0014 */  lw          $ra, 0x14($sp)
/* 010148 8000F548 27BD0048 */  addiu       $sp, $sp, 0x48
/* 01014C 8000F54C 03E00008 */  jr          $ra
/* 010150 8000F550 00000000 */   nop
.section .late_rodata
dlabel jtbl_800C8680
/* 0C9280 800C8680 8000F5F4 */ .word .L8000F5F4
/* 0C9284 800C8684 8000F614 */ .word .L8000F614
/* 0C9288 800C8688 8000F638 */ .word .L8000F638
/* 0C928C 800C868C 8000F65C */ .word .L8000F65C
/* 0C9290 800C8690 8000F65C */ .word .L8000F65C


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_8000F554
/* 010154 8000F554 27BDFFC0 */  addiu       $sp, $sp, -0x40
/* 010158 8000F558 AFBF0014 */  sw          $ra, 0x14($sp)
/* 01015C 8000F55C AFA40040 */  sw          $a0, 0x40($sp)
/* 010160 8000F560 AFA50044 */  sw          $a1, 0x44($sp)
/* 010164 8000F564 0C003DF3 */  jal         func_8000F7CC
/* 010168 8000F568 AFA60048 */   sw         $a2, 0x48($sp)
/* 01016C 8000F56C 10400005 */  beqz        $v0, .L8000F584
/* 010170 8000F570 00402825 */   or         $a1, $v0, $zero
/* 010174 8000F574 8FAE0048 */  lw          $t6, 0x48($sp)
/* 010178 8000F578 24020002 */  addiu       $v0, $zero, 0x2
/* 01017C 8000F57C 1000005A */  b           .L8000F6E8
/* 010180 8000F580 ADC00000 */   sw         $zero, 0x0($t6)
.L8000F584:
/* 010184 8000F584 8FA40040 */  lw          $a0, 0x40($sp)
/* 010188 8000F588 0C003E08 */  jal         func_8000F820
/* 01018C 8000F58C AFA50034 */   sw         $a1, 0x34($sp)
/* 010190 8000F590 8FAF0044 */  lw          $t7, 0x44($sp)
/* 010194 8000F594 AFA20038 */  sw          $v0, 0x38($sp)
/* 010198 8000F598 2401FFF0 */  addiu       $at, $zero, -0x10
/* 01019C 8000F59C 000FC100 */  sll         $t8, $t7, 4
/* 0101A0 8000F5A0 00581821 */  addu        $v1, $v0, $t8
/* 0101A4 8000F5A4 8C790014 */  lw          $t9, 0x14($v1)
/* 0101A8 8000F5A8 8FA50034 */  lw          $a1, 0x34($sp)
/* 0101AC 8000F5AC 2729000F */  addiu       $t1, $t9, 0xF
/* 0101B0 8000F5B0 01215024 */  and         $t2, $t1, $at
/* 0101B4 8000F5B4 AFB9003C */  sw          $t9, 0x3C($sp)
/* 0101B8 8000F5B8 AFAA003C */  sw          $t2, 0x3C($sp)
/* 0101BC 8000F5BC 806B0018 */  lb          $t3, 0x18($v1)
/* 0101C0 8000F5C0 AFAB0030 */  sw          $t3, 0x30($sp)
/* 0101C4 8000F5C4 80640019 */  lb          $a0, 0x19($v1)
/* 0101C8 8000F5C8 8C6C0010 */  lw          $t4, 0x10($v1)
/* 0101CC 8000F5CC 2C810005 */  sltiu       $at, $a0, 0x5
/* 0101D0 8000F5D0 AFA40018 */  sw          $a0, 0x18($sp)
/* 0101D4 8000F5D4 1020002A */  beqz        $at, .L8000F680
/* 0101D8 8000F5D8 AFAC0028 */   sw         $t4, 0x28($sp)
/* 0101DC 8000F5DC 00046880 */  sll         $t5, $a0, 2
/* 0101E0 8000F5E0 3C01800D */  lui         $at, %hi(jtbl_800C8680)
/* 0101E4 8000F5E4 002D0821 */  addu        $at, $at, $t5
/* 0101E8 8000F5E8 8C2D8680 */  lw          $t5, %lo(jtbl_800C8680)($at)
/* 0101EC 8000F5EC 01A00008 */  jr          $t5
/* 0101F0 8000F5F0 00000000 */   nop
.L8000F5F4:
/* 0101F4 8000F5F4 8FA40040 */  lw          $a0, 0x40($sp)
/* 0101F8 8000F5F8 8FA50044 */  lw          $a1, 0x44($sp)
/* 0101FC 8000F5FC 0C0036D9 */  jal         func_8000DB64
/* 010200 8000F600 8FA6003C */   lw         $a2, 0x3C($sp)
/* 010204 8000F604 1440001E */  bnez        $v0, .L8000F680
/* 010208 8000F608 00402825 */   or         $a1, $v0, $zero
/* 01020C 8000F60C 1000005D */  b           .L8000F784
/* 010210 8000F610 8FBF0014 */   lw         $ra, 0x14($sp)
.L8000F614:
/* 010214 8000F614 8FA40040 */  lw          $a0, 0x40($sp)
/* 010218 8000F618 8FA5003C */  lw          $a1, 0x3C($sp)
/* 01021C 8000F61C 24060001 */  addiu       $a2, $zero, 0x1
/* 010220 8000F620 0C0030AD */  jal         AudioHeap_AllocCached
/* 010224 8000F624 8FA70044 */   lw         $a3, 0x44($sp)
/* 010228 8000F628 14400015 */  bnez        $v0, .L8000F680
/* 01022C 8000F62C 00402825 */   or         $a1, $v0, $zero
/* 010230 8000F630 10000054 */  b           .L8000F784
/* 010234 8000F634 8FBF0014 */   lw         $ra, 0x14($sp)
.L8000F638:
/* 010238 8000F638 8FA40040 */  lw          $a0, 0x40($sp)
/* 01023C 8000F63C 8FA5003C */  lw          $a1, 0x3C($sp)
/* 010240 8000F640 00003025 */  or          $a2, $zero, $zero
/* 010244 8000F644 0C0030AD */  jal         AudioHeap_AllocCached
/* 010248 8000F648 8FA70044 */   lw         $a3, 0x44($sp)
/* 01024C 8000F64C 1440000C */  bnez        $v0, .L8000F680
/* 010250 8000F650 00402825 */   or         $a1, $v0, $zero
/* 010254 8000F654 1000004B */  b           .L8000F784
/* 010258 8000F658 8FBF0014 */   lw         $ra, 0x14($sp)
.L8000F65C:
/* 01025C 8000F65C 8FA40040 */  lw          $a0, 0x40($sp)
/* 010260 8000F660 8FA5003C */  lw          $a1, 0x3C($sp)
/* 010264 8000F664 24060002 */  addiu       $a2, $zero, 0x2
/* 010268 8000F668 0C0030AD */  jal         AudioHeap_AllocCached
/* 01026C 8000F66C 8FA70044 */   lw         $a3, 0x44($sp)
/* 010270 8000F670 14400003 */  bnez        $v0, .L8000F680
/* 010274 8000F674 00402825 */   or         $a1, $v0, $zero
/* 010278 8000F678 10000042 */  b           .L8000F784
/* 01027C 8000F67C 8FBF0014 */   lw         $ra, 0x14($sp)
.L8000F680:
/* 010280 8000F680 8FAF0048 */  lw          $t7, 0x48($sp)
/* 010284 8000F684 240E0001 */  addiu       $t6, $zero, 0x1
/* 010288 8000F688 24010001 */  addiu       $at, $zero, 0x1
/* 01028C 8000F68C ADEE0000 */  sw          $t6, 0x0($t7)
/* 010290 8000F690 8FB80030 */  lw          $t8, 0x30($sp)
/* 010294 8000F694 8FA70030 */  lw          $a3, 0x30($sp)
/* 010298 8000F698 8FA6003C */  lw          $a2, 0x3C($sp)
/* 01029C 8000F69C 17010009 */  bne         $t8, $at, .L8000F6C4
/* 0102A0 8000F6A0 8FA40028 */   lw         $a0, 0x28($sp)
/* 0102A4 8000F6A4 8FB90038 */  lw          $t9, 0x38($sp)
/* 0102A8 8000F6A8 8FA40028 */  lw          $a0, 0x28($sp)
/* 0102AC 8000F6AC 8FA6003C */  lw          $a2, 0x3C($sp)
/* 0102B0 8000F6B0 87270002 */  lh          $a3, 0x2($t9)
/* 0102B4 8000F6B4 0C003ED4 */  jal         func_8000FB50
/* 0102B8 8000F6B8 AFA50034 */   sw         $a1, 0x34($sp)
/* 0102BC 8000F6BC 10000004 */  b           .L8000F6D0
/* 0102C0 8000F6C0 8FA50034 */   lw         $a1, 0x34($sp)
.L8000F6C4:
/* 0102C4 8000F6C4 0C003E8A */  jal         func_8000FA28
/* 0102C8 8000F6C8 AFA50034 */   sw         $a1, 0x34($sp)
/* 0102CC 8000F6CC 8FA50034 */  lw          $a1, 0x34($sp)
.L8000F6D0:
/* 0102D0 8000F6D0 8FA80018 */  lw          $t0, 0x18($sp)
/* 0102D4 8000F6D4 24020002 */  addiu       $v0, $zero, 0x2
/* 0102D8 8000F6D8 15000003 */  bnez        $t0, .L8000F6E8
/* 0102DC 8000F6DC 00000000 */   nop
/* 0102E0 8000F6E0 10000001 */  b           .L8000F6E8
/* 0102E4 8000F6E4 24020005 */   addiu      $v0, $zero, 0x5
.L8000F6E8:
/* 0102E8 8000F6E8 8FA30040 */  lw          $v1, 0x40($sp)
/* 0102EC 8000F6EC 3C0A8015 */  lui         $t2, %hi(D_8014D428)
/* 0102F0 8000F6F0 254AD428 */  addiu       $t2, $t2, %lo(D_8014D428)
/* 0102F4 8000F6F4 10600009 */  beqz        $v1, .L8000F71C
/* 0102F8 8000F6F8 8FA90044 */   lw         $t1, 0x44($sp)
/* 0102FC 8000F6FC 24010001 */  addiu       $at, $zero, 0x1
/* 010300 8000F700 1061000D */  beq         $v1, $at, .L8000F738
/* 010304 8000F704 8FAC0044 */   lw         $t4, 0x44($sp)
/* 010308 8000F708 24010002 */  addiu       $at, $zero, 0x2
/* 01030C 8000F70C 10610013 */  beq         $v1, $at, .L8000F75C
/* 010310 8000F710 8FAF0044 */   lw         $t7, 0x44($sp)
/* 010314 8000F714 1000001A */  b           .L8000F780
/* 010318 8000F718 00A01025 */   or         $v0, $a1, $zero
.L8000F71C:
/* 01031C 8000F71C 012A1821 */  addu        $v1, $t1, $t2
/* 010320 8000F720 906B0000 */  lbu         $t3, 0x0($v1)
/* 010324 8000F724 24010005 */  addiu       $at, $zero, 0x5
/* 010328 8000F728 51610015 */  beql        $t3, $at, .L8000F780
/* 01032C 8000F72C 00A01025 */   or         $v0, $a1, $zero
/* 010330 8000F730 10000012 */  b           .L8000F77C
/* 010334 8000F734 A0620000 */   sb         $v0, 0x0($v1)
.L8000F738:
/* 010338 8000F738 3C0D8015 */  lui         $t5, %hi(D_8014D3E8)
/* 01033C 8000F73C 25ADD3E8 */  addiu       $t5, $t5, %lo(D_8014D3E8)
/* 010340 8000F740 018D1821 */  addu        $v1, $t4, $t5
/* 010344 8000F744 906E0000 */  lbu         $t6, 0x0($v1)
/* 010348 8000F748 24010005 */  addiu       $at, $zero, 0x5
/* 01034C 8000F74C 51C1000C */  beql        $t6, $at, .L8000F780
/* 010350 8000F750 00A01025 */   or         $v0, $a1, $zero
/* 010354 8000F754 10000009 */  b           .L8000F77C
/* 010358 8000F758 A0620000 */   sb         $v0, 0x0($v1)
.L8000F75C:
/* 01035C 8000F75C 3C188015 */  lui         $t8, %hi(D_8014D3A8)
/* 010360 8000F760 2718D3A8 */  addiu       $t8, $t8, %lo(D_8014D3A8)
/* 010364 8000F764 01F81821 */  addu        $v1, $t7, $t8
/* 010368 8000F768 90790000 */  lbu         $t9, 0x0($v1)
/* 01036C 8000F76C 24010005 */  addiu       $at, $zero, 0x5
/* 010370 8000F770 53210003 */  beql        $t9, $at, .L8000F780
/* 010374 8000F774 00A01025 */   or         $v0, $a1, $zero
/* 010378 8000F778 A0620000 */  sb          $v0, 0x0($v1)
.L8000F77C:
/* 01037C 8000F77C 00A01025 */  or          $v0, $a1, $zero
.L8000F780:
/* 010380 8000F780 8FBF0014 */  lw          $ra, 0x14($sp)
.L8000F784:
/* 010384 8000F784 27BD0040 */  addiu       $sp, $sp, 0x40
/* 010388 8000F788 03E00008 */  jr          $ra
/* 01038C 8000F78C 00000000 */   nop
glabel func_8000F790
/* 010390 8000F790 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 010394 8000F794 AFBF0014 */  sw          $ra, 0x14($sp)
/* 010398 8000F798 0C003E08 */  jal         func_8000F820
/* 01039C 8000F79C AFA5001C */   sw         $a1, 0x1C($sp)
/* 0103A0 8000F7A0 8FA5001C */  lw          $a1, 0x1C($sp)
/* 0103A4 8000F7A4 8FBF0014 */  lw          $ra, 0x14($sp)
/* 0103A8 8000F7A8 00057100 */  sll         $t6, $a1, 4
/* 0103AC 8000F7AC 004E1821 */  addu        $v1, $v0, $t6
/* 0103B0 8000F7B0 8C6F0014 */  lw          $t7, 0x14($v1)
/* 0103B4 8000F7B4 27BD0018 */  addiu       $sp, $sp, 0x18
/* 0103B8 8000F7B8 15E00002 */  bnez        $t7, .L8000F7C4
/* 0103BC 8000F7BC 00000000 */   nop
/* 0103C0 8000F7C0 8C650010 */  lw          $a1, 0x10($v1)
.L8000F7C4:
/* 0103C4 8000F7C4 03E00008 */  jr          $ra
/* 0103C8 8000F7C8 00A01025 */   or         $v0, $a1, $zero
glabel func_8000F7CC
/* 0103CC 8000F7CC 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 0103D0 8000F7D0 AFBF0014 */  sw          $ra, 0x14($sp)
/* 0103D4 8000F7D4 AFA40018 */  sw          $a0, 0x18($sp)
/* 0103D8 8000F7D8 0C0036C3 */  jal         AudioHeap_SearchPermanentCache
/* 0103DC 8000F7DC AFA5001C */   sw         $a1, 0x1C($sp)
/* 0103E0 8000F7E0 10400003 */  beqz        $v0, .L8000F7F0
/* 0103E4 8000F7E4 8FA40018 */   lw         $a0, 0x18($sp)
/* 0103E8 8000F7E8 1000000A */  b           .L8000F814
/* 0103EC 8000F7EC 8FBF0014 */   lw         $ra, 0x14($sp)
.L8000F7F0:
/* 0103F0 8000F7F0 24050002 */  addiu       $a1, $zero, 0x2
/* 0103F4 8000F7F4 0C003264 */  jal         AudioHeap_SearchCaches
/* 0103F8 8000F7F8 8FA6001C */   lw         $a2, 0x1C($sp)
/* 0103FC 8000F7FC 50400004 */  beql        $v0, $zero, .L8000F810
/* 010400 8000F800 00001025 */   or         $v0, $zero, $zero
/* 010404 8000F804 10000003 */  b           .L8000F814
/* 010408 8000F808 8FBF0014 */   lw         $ra, 0x14($sp)
/* 01040C 8000F80C 00001025 */  or          $v0, $zero, $zero
.L8000F810:
/* 010410 8000F810 8FBF0014 */  lw          $ra, 0x14($sp)
.L8000F814:
/* 010414 8000F814 27BD0018 */  addiu       $sp, $sp, 0x18
/* 010418 8000F818 03E00008 */  jr          $ra
/* 01041C 8000F81C 00000000 */   nop
glabel func_8000F820
/* 010420 8000F820 10800009 */  beqz        $a0, .L8000F848
/* 010424 8000F824 3C038015 */   lui        $v1, %hi(D_80155C5C)
/* 010428 8000F828 24010001 */  addiu       $at, $zero, 0x1
/* 01042C 8000F82C 10810008 */  beq         $a0, $at, .L8000F850
/* 010430 8000F830 3C038015 */   lui        $v1, %hi(D_80155C60)
/* 010434 8000F834 24010002 */  addiu       $at, $zero, 0x2
/* 010438 8000F838 10810007 */  beq         $a0, $at, .L8000F858
/* 01043C 8000F83C 3C038015 */   lui        $v1, %hi(D_80155C64)
/* 010440 8000F840 03E00008 */  jr          $ra
/* 010444 8000F844 00001025 */   or         $v0, $zero, $zero
.L8000F848:
/* 010448 8000F848 03E00008 */  jr          $ra
/* 01044C 8000F84C 8C625C5C */   lw         $v0, %lo(D_80155C5C)($v1)
.L8000F850:
/* 010450 8000F850 03E00008 */  jr          $ra
/* 010454 8000F854 8C625C60 */   lw         $v0, %lo(D_80155C60)($v1)
.L8000F858:
/* 010458 8000F858 8C635C64 */  lw          $v1, %lo(D_80155C64)($v1)
/* 01045C 8000F85C 03E00008 */  jr          $ra
/* 010460 8000F860 00601025 */   or         $v0, $v1, $zero
glabel func_8000F864
/* 010464 8000F864 27BDFFA0 */  addiu       $sp, $sp, -0x60
/* 010468 8000F868 00047080 */  sll         $t6, $a0, 2
/* 01046C 8000F86C 3C0F8015 */  lui         $t7, %hi(D_80155C70)
/* 010470 8000F870 8DEF5C70 */  lw          $t7, %lo(D_80155C70)($t7)
/* 010474 8000F874 01C47023 */  subu        $t6, $t6, $a0
/* 010478 8000F878 000E7080 */  sll         $t6, $t6, 2
/* 01047C 8000F87C AFBF0034 */  sw          $ra, 0x34($sp)
/* 010480 8000F880 AFB70030 */  sw          $s7, 0x30($sp)
/* 010484 8000F884 AFB6002C */  sw          $s6, 0x2C($sp)
/* 010488 8000F888 AFB50028 */  sw          $s5, 0x28($sp)
/* 01048C 8000F88C AFB40024 */  sw          $s4, 0x24($sp)
/* 010490 8000F890 AFB30020 */  sw          $s3, 0x20($sp)
/* 010494 8000F894 AFB2001C */  sw          $s2, 0x1C($sp)
/* 010498 8000F898 AFB10018 */  sw          $s1, 0x18($sp)
/* 01049C 8000F89C AFB00014 */  sw          $s0, 0x14($sp)
/* 0104A0 8000F8A0 AFAE003C */  sw          $t6, 0x3C($sp)
/* 0104A4 8000F8A4 01EE1021 */  addu        $v0, $t7, $t6
/* 0104A8 8000F8A8 90590000 */  lbu         $t9, 0x0($v0)
/* 0104AC 8000F8AC 90560001 */  lbu         $s6, 0x1($v0)
/* 0104B0 8000F8B0 00A09025 */  or          $s2, $a1, $zero
/* 0104B4 8000F8B4 AFB90040 */  sw          $t9, 0x40($sp)
/* 0104B8 8000F8B8 8CA30000 */  lw          $v1, 0x0($a1)
/* 0104BC 8000F8BC 00C0A825 */  or          $s5, $a2, $zero
/* 0104C0 8000F8C0 5060001D */  beql        $v1, $zero, .L8000F938
/* 0104C4 8000F8C4 8FAC0040 */   lw         $t4, 0x40($sp)
/* 0104C8 8000F8C8 12C0001A */  beqz        $s6, .L8000F934
/* 0104CC 8000F8CC 00654021 */   addu       $t0, $v1, $a1
/* 0104D0 8000F8D0 ACA80000 */  sw          $t0, 0x0($a1)
/* 0104D4 8000F8D4 1AC00017 */  blez        $s6, .L8000F934
/* 0104D8 8000F8D8 00009825 */   or         $s3, $zero, $zero
/* 0104DC 8000F8DC 0000A025 */  or          $s4, $zero, $zero
/* 0104E0 8000F8E0 24170001 */  addiu       $s7, $zero, 0x1
.L8000F8E4:
/* 0104E4 8000F8E4 8E490000 */  lw          $t1, 0x0($s2)
/* 0104E8 8000F8E8 01341021 */  addu        $v0, $t1, $s4
/* 0104EC 8000F8EC 8C500000 */  lw          $s0, 0x0($v0)
/* 0104F0 8000F8F0 1200000D */  beqz        $s0, .L8000F928
/* 0104F4 8000F8F4 02128021 */   addu       $s0, $s0, $s2
/* 0104F8 8000F8F8 AC500000 */  sw          $s0, 0x0($v0)
/* 0104FC 8000F8FC 920A0002 */  lbu         $t2, 0x2($s0)
/* 010500 8000F900 02008825 */  or          $s1, $s0, $zero
/* 010504 8000F904 26040004 */  addiu       $a0, $s0, 0x4
/* 010508 8000F908 15400007 */  bnez        $t2, .L8000F928
/* 01050C 8000F90C 02402825 */   or         $a1, $s2, $zero
/* 010510 8000F910 0C0043F9 */  jal         func_80010FE4
/* 010514 8000F914 02A03025 */   or         $a2, $s5, $zero
/* 010518 8000F918 8E30000C */  lw          $s0, 0xC($s1)
/* 01051C 8000F91C A2370002 */  sb          $s7, 0x2($s1)
/* 010520 8000F920 02125821 */  addu        $t3, $s0, $s2
/* 010524 8000F924 AE2B000C */  sw          $t3, 0xC($s1)
.L8000F928:
/* 010528 8000F928 26730001 */  addiu       $s3, $s3, 0x1
/* 01052C 8000F92C 1676FFED */  bne         $s3, $s6, .L8000F8E4
/* 010530 8000F930 26940004 */   addiu      $s4, $s4, 0x4
.L8000F934:
/* 010534 8000F934 8FAC0040 */  lw          $t4, 0x40($sp)
.L8000F938:
/* 010538 8000F938 24170001 */  addiu       $s7, $zero, 0x1
/* 01053C 8000F93C 26530004 */  addiu       $s3, $s2, 0x4
/* 010540 8000F940 19800025 */  blez        $t4, .L8000F9D8
/* 010544 8000F944 000C6880 */   sll        $t5, $t4, 2
/* 010548 8000F948 01B2A021 */  addu        $s4, $t5, $s2
/* 01054C 8000F94C 26940004 */  addiu       $s4, $s4, 0x4
/* 010550 8000F950 2416007F */  addiu       $s6, $zero, 0x7F
/* 010554 8000F954 8E620000 */  lw          $v0, 0x0($s3)
.L8000F958:
/* 010558 8000F958 1040001C */  beqz        $v0, .L8000F9CC
/* 01055C 8000F95C 00527021 */   addu       $t6, $v0, $s2
/* 010560 8000F960 AE6E0000 */  sw          $t6, 0x0($s3)
/* 010564 8000F964 91CF0000 */  lbu         $t7, 0x0($t6)
/* 010568 8000F968 01C08825 */  or          $s1, $t6, $zero
/* 01056C 8000F96C 55E00018 */  bnel        $t7, $zero, .L8000F9D0
/* 010570 8000F970 26730004 */   addiu      $s3, $s3, 0x4
/* 010574 8000F974 91D80001 */  lbu         $t8, 0x1($t6)
/* 010578 8000F978 25C40008 */  addiu       $a0, $t6, 0x8
/* 01057C 8000F97C 02402825 */  or          $a1, $s2, $zero
/* 010580 8000F980 53000004 */  beql        $t8, $zero, .L8000F994
/* 010584 8000F984 26240010 */   addiu      $a0, $s1, 0x10
/* 010588 8000F988 0C0043F9 */  jal         func_80010FE4
/* 01058C 8000F98C 02A03025 */   or         $a2, $s5, $zero
/* 010590 8000F990 26240010 */  addiu       $a0, $s1, 0x10
.L8000F994:
/* 010594 8000F994 02402825 */  or          $a1, $s2, $zero
/* 010598 8000F998 0C0043F9 */  jal         func_80010FE4
/* 01059C 8000F99C 02A03025 */   or         $a2, $s5, $zero
/* 0105A0 8000F9A0 92390002 */  lbu         $t9, 0x2($s1)
/* 0105A4 8000F9A4 26240018 */  addiu       $a0, $s1, 0x18
/* 0105A8 8000F9A8 02402825 */  or          $a1, $s2, $zero
/* 0105AC 8000F9AC 52D90004 */  beql        $s6, $t9, .L8000F9C0
/* 0105B0 8000F9B0 8E300004 */   lw         $s0, 0x4($s1)
/* 0105B4 8000F9B4 0C0043F9 */  jal         func_80010FE4
/* 0105B8 8000F9B8 02A03025 */   or         $a2, $s5, $zero
/* 0105BC 8000F9BC 8E300004 */  lw          $s0, 0x4($s1)
.L8000F9C0:
/* 0105C0 8000F9C0 A2370000 */  sb          $s7, 0x0($s1)
/* 0105C4 8000F9C4 02124021 */  addu        $t0, $s0, $s2
/* 0105C8 8000F9C8 AE280004 */  sw          $t0, 0x4($s1)
.L8000F9CC:
/* 0105CC 8000F9CC 26730004 */  addiu       $s3, $s3, 0x4
.L8000F9D0:
/* 0105D0 8000F9D0 5693FFE1 */  bnel        $s4, $s3, .L8000F958
/* 0105D4 8000F9D4 8E620000 */   lw         $v0, 0x0($s3)
.L8000F9D8:
/* 0105D8 8000F9D8 3C0A8015 */  lui         $t2, %hi(D_80155C70)
/* 0105DC 8000F9DC 8D4A5C70 */  lw          $t2, %lo(D_80155C70)($t2)
/* 0105E0 8000F9E0 8FAB003C */  lw          $t3, 0x3C($sp)
/* 0105E4 8000F9E4 8E490000 */  lw          $t1, 0x0($s2)
/* 0105E8 8000F9E8 264D0004 */  addiu       $t5, $s2, 0x4
/* 0105EC 8000F9EC 014B6021 */  addu        $t4, $t2, $t3
/* 0105F0 8000F9F0 014B7021 */  addu        $t6, $t2, $t3
/* 0105F4 8000F9F4 AD890008 */  sw          $t1, 0x8($t4)
/* 0105F8 8000F9F8 ADCD0004 */  sw          $t5, 0x4($t6)
/* 0105FC 8000F9FC 8FBF0034 */  lw          $ra, 0x34($sp)
/* 010600 8000FA00 8FB70030 */  lw          $s7, 0x30($sp)
/* 010604 8000FA04 8FB6002C */  lw          $s6, 0x2C($sp)
/* 010608 8000FA08 8FB50028 */  lw          $s5, 0x28($sp)
/* 01060C 8000FA0C 8FB40024 */  lw          $s4, 0x24($sp)
/* 010610 8000FA10 8FB30020 */  lw          $s3, 0x20($sp)
/* 010614 8000FA14 8FB2001C */  lw          $s2, 0x1C($sp)
/* 010618 8000FA18 8FB10018 */  lw          $s1, 0x18($sp)
/* 01061C 8000FA1C 8FB00014 */  lw          $s0, 0x14($sp)
/* 010620 8000FA20 03E00008 */  jr          $ra
/* 010624 8000FA24 27BD0060 */   addiu      $sp, $sp, 0x60
glabel func_8000FA28
/* 010628 8000FA28 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* 01062C 8000FA2C AFB20038 */  sw          $s2, 0x38($sp)
/* 010630 8000FA30 AFB00030 */  sw          $s0, 0x30($sp)
/* 010634 8000FA34 00809025 */  or          $s2, $a0, $zero
/* 010638 8000FA38 AFB10034 */  sw          $s1, 0x34($sp)
/* 01063C 8000FA3C 24D0000F */  addiu       $s0, $a2, 0xF
/* 010640 8000FA40 2401FFF0 */  addiu       $at, $zero, -0x10
/* 010644 8000FA44 00A08825 */  or          $s1, $a1, $zero
/* 010648 8000FA48 AFBF004C */  sw          $ra, 0x4C($sp)
/* 01064C 8000FA4C AFB50044 */  sw          $s5, 0x44($sp)
/* 010650 8000FA50 02017024 */  and         $t6, $s0, $at
/* 010654 8000FA54 00A02025 */  or          $a0, $a1, $zero
/* 010658 8000FA58 00E0A825 */  or          $s5, $a3, $zero
/* 01065C 8000FA5C AFB60048 */  sw          $s6, 0x48($sp)
/* 010660 8000FA60 AFB40040 */  sw          $s4, 0x40($sp)
/* 010664 8000FA64 AFB3003C */  sw          $s3, 0x3C($sp)
/* 010668 8000FA68 01C08025 */  or          $s0, $t6, $zero
/* 01066C 8000FA6C 0C0085D0 */  jal         osInvalDCache
/* 010670 8000FA70 01C02825 */   or         $a1, $t6, $zero
/* 010674 8000FA74 3C168015 */  lui         $s6, %hi(D_80154A30)
/* 010678 8000FA78 3C14800C */  lui         $s4, %hi(D_800C50E8)
/* 01067C 8000FA7C 3C138015 */  lui         $s3, %hi(D_80154A10)
/* 010680 8000FA80 26734A10 */  addiu       $s3, $s3, %lo(D_80154A10)
/* 010684 8000FA84 269450E8 */  addiu       $s4, $s4, %lo(D_800C50E8)
/* 010688 8000FA88 26D64A30 */  addiu       $s6, $s6, %lo(D_80154A30)
/* 01068C 8000FA8C 2E010400 */  sltiu       $at, $s0, 0x400
/* 010690 8000FA90 14200014 */  bnez        $at, .L8000FAE4
.L8000FA94:
/* 010694 8000FA94 240F0400 */   addiu      $t7, $zero, 0x400
/* 010698 8000FA98 AFAF0014 */  sw          $t7, 0x14($sp)
/* 01069C 8000FA9C 02C02025 */  or          $a0, $s6, $zero
/* 0106A0 8000FAA0 24050001 */  addiu       $a1, $zero, 0x1
/* 0106A4 8000FAA4 00003025 */  or          $a2, $zero, $zero
/* 0106A8 8000FAA8 02403825 */  or          $a3, $s2, $zero
/* 0106AC 8000FAAC AFB10010 */  sw          $s1, 0x10($sp)
/* 0106B0 8000FAB0 AFB30018 */  sw          $s3, 0x18($sp)
/* 0106B4 8000FAB4 AFB5001C */  sw          $s5, 0x1C($sp)
/* 0106B8 8000FAB8 0C003EEA */  jal         func_8000FBA8
/* 0106BC 8000FABC AFB40020 */   sw         $s4, 0x20($sp)
/* 0106C0 8000FAC0 02602025 */  or          $a0, $s3, $zero
/* 0106C4 8000FAC4 00002825 */  or          $a1, $zero, $zero
/* 0106C8 8000FAC8 0C008178 */  jal         osRecvMesg
/* 0106CC 8000FACC 24060001 */   addiu      $a2, $zero, 0x1
/* 0106D0 8000FAD0 2610FC00 */  addiu       $s0, $s0, -0x400
/* 0106D4 8000FAD4 2E010400 */  sltiu       $at, $s0, 0x400
/* 0106D8 8000FAD8 26520400 */  addiu       $s2, $s2, 0x400
/* 0106DC 8000FADC 1020FFED */  beqz        $at, .L8000FA94
/* 0106E0 8000FAE0 26310400 */   addiu      $s1, $s1, 0x400
.L8000FAE4:
/* 0106E4 8000FAE4 12000010 */  beqz        $s0, .L8000FB28
/* 0106E8 8000FAE8 02C02025 */   or         $a0, $s6, $zero
/* 0106EC 8000FAEC 3C18800C */  lui         $t8, %hi(D_800C50F4)
/* 0106F0 8000FAF0 271850F4 */  addiu       $t8, $t8, %lo(D_800C50F4)
/* 0106F4 8000FAF4 AFB80020 */  sw          $t8, 0x20($sp)
/* 0106F8 8000FAF8 24050001 */  addiu       $a1, $zero, 0x1
/* 0106FC 8000FAFC 00003025 */  or          $a2, $zero, $zero
/* 010700 8000FB00 02403825 */  or          $a3, $s2, $zero
/* 010704 8000FB04 AFB10010 */  sw          $s1, 0x10($sp)
/* 010708 8000FB08 AFB00014 */  sw          $s0, 0x14($sp)
/* 01070C 8000FB0C AFB30018 */  sw          $s3, 0x18($sp)
/* 010710 8000FB10 0C003EEA */  jal         func_8000FBA8
/* 010714 8000FB14 AFB5001C */   sw         $s5, 0x1C($sp)
/* 010718 8000FB18 02602025 */  or          $a0, $s3, $zero
/* 01071C 8000FB1C 00002825 */  or          $a1, $zero, $zero
/* 010720 8000FB20 0C008178 */  jal         osRecvMesg
/* 010724 8000FB24 24060001 */   addiu      $a2, $zero, 0x1
.L8000FB28:
/* 010728 8000FB28 8FBF004C */  lw          $ra, 0x4C($sp)
/* 01072C 8000FB2C 8FB00030 */  lw          $s0, 0x30($sp)
/* 010730 8000FB30 8FB10034 */  lw          $s1, 0x34($sp)
/* 010734 8000FB34 8FB20038 */  lw          $s2, 0x38($sp)
/* 010738 8000FB38 8FB3003C */  lw          $s3, 0x3C($sp)
/* 01073C 8000FB3C 8FB40040 */  lw          $s4, 0x40($sp)
/* 010740 8000FB40 8FB50044 */  lw          $s5, 0x44($sp)
/* 010744 8000FB44 8FB60048 */  lw          $s6, 0x48($sp)
/* 010748 8000FB48 03E00008 */  jr          $ra
/* 01074C 8000FB4C 27BD0050 */   addiu      $sp, $sp, 0x50
glabel func_8000FB50
/* 010750 8000FB50 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 010754 8000FB54 AFA40020 */  sw          $a0, 0x20($sp)
/* 010758 8000FB58 AFA4001C */  sw          $a0, 0x1C($sp)
/* 01075C 8000FB5C AFBF0014 */  sw          $ra, 0x14($sp)
/* 010760 8000FB60 AFA50024 */  sw          $a1, 0x24($sp)
/* 010764 8000FB64 00A02025 */  or          $a0, $a1, $zero
/* 010768 8000FB68 AFA60028 */  sw          $a2, 0x28($sp)
/* 01076C 8000FB6C AFA7002C */  sw          $a3, 0x2C($sp)
/* 010770 8000FB70 0C0085D0 */  jal         osInvalDCache
/* 010774 8000FB74 00C02825 */   or         $a1, $a2, $zero
/* 010778 8000FB78 8FA4002C */  lw          $a0, 0x2C($sp)
/* 01077C 8000FB7C 0C003F1F */  jal         func_8000FC7C
/* 010780 8000FB80 27A5001C */   addiu      $a1, $sp, 0x1C
/* 010784 8000FB84 00402025 */  or          $a0, $v0, $zero
/* 010788 8000FB88 8FA5001C */  lw          $a1, 0x1C($sp)
/* 01078C 8000FB8C 8FA60024 */  lw          $a2, 0x24($sp)
/* 010790 8000FB90 0C003F23 */  jal         func_8000FC8C
/* 010794 8000FB94 8FA70028 */   lw         $a3, 0x28($sp)
/* 010798 8000FB98 8FBF0014 */  lw          $ra, 0x14($sp)
/* 01079C 8000FB9C 27BD0020 */  addiu       $sp, $sp, 0x20
/* 0107A0 8000FBA0 03E00008 */  jr          $ra
/* 0107A4 8000FBA4 00000000 */   nop
glabel func_8000FBA8
/* 0107A8 8000FBA8 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 0107AC 8000FBAC 8FAE003C */  lw          $t6, 0x3C($sp)
/* 0107B0 8000FBB0 AFB00018 */  sw          $s0, 0x18($sp)
/* 0107B4 8000FBB4 24010002 */  addiu       $at, $zero, 0x2
/* 0107B8 8000FBB8 00808025 */  or          $s0, $a0, $zero
/* 0107BC 8000FBBC AFBF001C */  sw          $ra, 0x1C($sp)
/* 0107C0 8000FBC0 AFA50024 */  sw          $a1, 0x24($sp)
/* 0107C4 8000FBC4 AFA60028 */  sw          $a2, 0x28($sp)
/* 0107C8 8000FBC8 11C10006 */  beq         $t6, $at, .L8000FBE4
/* 0107CC 8000FBCC AFA7002C */   sw         $a3, 0x2C($sp)
/* 0107D0 8000FBD0 24010003 */  addiu       $at, $zero, 0x3
/* 0107D4 8000FBD4 11C10007 */  beq         $t6, $at, .L8000FBF4
/* 0107D8 8000FBD8 00000000 */   nop
/* 0107DC 8000FBDC 10000022 */  b           .L8000FC68
/* 0107E0 8000FBE0 00001025 */   or         $v0, $zero, $zero
.L8000FBE4:
/* 0107E4 8000FBE4 0C0093B0 */  jal         osCartRomInit
/* 0107E8 8000FBE8 00000000 */   nop
/* 0107EC 8000FBEC 10000007 */  b           .L8000FC0C
/* 0107F0 8000FBF0 00402025 */   or         $a0, $v0, $zero
.L8000FBF4:
/* 0107F4 8000FBF4 0C007B98 */  jal         func_8001EE60
/* 0107F8 8000FBF8 00000000 */   nop
/* 0107FC 8000FBFC 10000003 */  b           .L8000FC0C
/* 010800 8000FC00 00402025 */   or         $a0, $v0, $zero
/* 010804 8000FC04 10000018 */  b           .L8000FC68
/* 010808 8000FC08 00001025 */   or         $v0, $zero, $zero
.L8000FC0C:
/* 01080C 8000FC0C 8FA20034 */  lw          $v0, 0x34($sp)
/* 010810 8000FC10 2401FFF0 */  addiu       $at, $zero, -0x10
/* 010814 8000FC14 8FB90024 */  lw          $t9, 0x24($sp)
/* 010818 8000FC18 304F000F */  andi        $t7, $v0, 0xF
/* 01081C 8000FC1C 51E00005 */  beql        $t7, $zero, .L8000FC34
/* 010820 8000FC20 A2190002 */   sb         $t9, 0x2($s0)
/* 010824 8000FC24 2442000F */  addiu       $v0, $v0, 0xF
/* 010828 8000FC28 0041C024 */  and         $t8, $v0, $at
/* 01082C 8000FC2C 03001025 */  or          $v0, $t8, $zero
/* 010830 8000FC30 A2190002 */  sb          $t9, 0x2($s0)
.L8000FC34:
/* 010834 8000FC34 8FA80038 */  lw          $t0, 0x38($sp)
/* 010838 8000FC38 240B0002 */  addiu       $t3, $zero, 0x2
/* 01083C 8000FC3C 02002825 */  or          $a1, $s0, $zero
/* 010840 8000FC40 AE080004 */  sw          $t0, 0x4($s0)
/* 010844 8000FC44 8FA90030 */  lw          $t1, 0x30($sp)
/* 010848 8000FC48 AE090008 */  sw          $t1, 0x8($s0)
/* 01084C 8000FC4C 8FAA002C */  lw          $t2, 0x2C($sp)
/* 010850 8000FC50 AE020010 */  sw          $v0, 0x10($s0)
/* 010854 8000FC54 AE0A000C */  sw          $t2, 0xC($s0)
/* 010858 8000FC58 AC8B0014 */  sw          $t3, 0x14($a0)
/* 01085C 8000FC5C 0C0093EC */  jal         osEPiStartDma
/* 010860 8000FC60 8FA60028 */   lw         $a2, 0x28($sp)
/* 010864 8000FC64 00001025 */  or          $v0, $zero, $zero
.L8000FC68:
/* 010868 8000FC68 8FBF001C */  lw          $ra, 0x1C($sp)
/* 01086C 8000FC6C 8FB00018 */  lw          $s0, 0x18($sp)
/* 010870 8000FC70 27BD0020 */  addiu       $sp, $sp, 0x20
/* 010874 8000FC74 03E00008 */  jr          $ra
/* 010878 8000FC78 00000000 */   nop
glabel func_8000FC7C
/* 01087C 8000FC7C AFA40000 */  sw          $a0, 0x0($sp)
/* 010880 8000FC80 AFA50004 */  sw          $a1, 0x4($sp)
/* 010884 8000FC84 03E00008 */  jr          $ra
/* 010888 8000FC88 00001025 */   or         $v0, $zero, $zero
glabel func_8000FC8C
/* 01088C 8000FC8C AFA40000 */  sw          $a0, 0x0($sp)
/* 010890 8000FC90 AFA50004 */  sw          $a1, 0x4($sp)
/* 010894 8000FC94 AFA60008 */  sw          $a2, 0x8($sp)
/* 010898 8000FC98 03E00008 */  jr          $ra
/* 01089C 8000FC9C AFA7000C */   sw         $a3, 0xC($sp)
glabel func_8000FCA0
/* 0108A0 8000FCA0 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 0108A4 8000FCA4 AFBF0014 */  sw          $ra, 0x14($sp)
/* 0108A8 8000FCA8 0C003D55 */  jal         func_8000F554
/* 0108AC 8000FCAC 27A6001C */   addiu      $a2, $sp, 0x1C
/* 0108B0 8000FCB0 8FBF0014 */  lw          $ra, 0x14($sp)
/* 0108B4 8000FCB4 27BD0020 */  addiu       $sp, $sp, 0x20
/* 0108B8 8000FCB8 03E00008 */  jr          $ra
/* 0108BC 8000FCBC 00000000 */   nop
.section .late_rodata
dlabel jtbl_800C8694
/* 0C9294 800C8694 8000FDF4 */ .word .L8000FDF4
/* 0C9298 800C8698 8000FE1C */ .word .L8000FE1C
/* 0C929C 800C869C 8000FE48 */ .word .L8000FE48
/* 0C92A0 800C86A0 8000FE74 */ .word .L8000FE74
/* 0C92A4 800C86A4 8000FE74 */ .word .L8000FE74


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_8000FCC0
/* 0108C0 8000FCC0 27BDFFB8 */  addiu       $sp, $sp, -0x48
/* 0108C4 8000FCC4 AFBF0024 */  sw          $ra, 0x24($sp)
/* 0108C8 8000FCC8 AFA60050 */  sw          $a2, 0x50($sp)
/* 0108CC 8000FCCC 10800009 */  beqz        $a0, .L8000FCF4
/* 0108D0 8000FCD0 AFA70054 */   sw         $a3, 0x54($sp)
/* 0108D4 8000FCD4 24020001 */  addiu       $v0, $zero, 0x1
/* 0108D8 8000FCD8 10820010 */  beq         $a0, $v0, .L8000FD1C
/* 0108DC 8000FCDC 3C0F8015 */   lui        $t7, %hi(D_8014D3E8)
/* 0108E0 8000FCE0 24010002 */  addiu       $at, $zero, 0x2
/* 0108E4 8000FCE4 10810013 */  beq         $a0, $at, .L8000FD34
/* 0108E8 8000FCE8 3C188015 */   lui        $t8, %hi(D_8014D3A8)
/* 0108EC 8000FCEC 10000018 */  b           .L8000FD50
/* 0108F0 8000FCF0 AFA40048 */   sw         $a0, 0x48($sp)
.L8000FCF4:
/* 0108F4 8000FCF4 3C0E8015 */  lui         $t6, %hi(D_8014D428)
/* 0108F8 8000FCF8 01C57021 */  addu        $t6, $t6, $a1
/* 0108FC 8000FCFC 91CED428 */  lbu         $t6, %lo(D_8014D428)($t6)
/* 010900 8000FD00 24010001 */  addiu       $at, $zero, 0x1
/* 010904 8000FD04 15C10003 */  bne         $t6, $at, .L8000FD14
/* 010908 8000FD08 00000000 */   nop
/* 01090C 8000FD0C 1000009F */  b           .L8000FF8C
/* 010910 8000FD10 00001025 */   or         $v0, $zero, $zero
.L8000FD14:
/* 010914 8000FD14 1000000E */  b           .L8000FD50
/* 010918 8000FD18 AFA40048 */   sw         $a0, 0x48($sp)
.L8000FD1C:
/* 01091C 8000FD1C 01E57821 */  addu        $t7, $t7, $a1
/* 010920 8000FD20 91EFD3E8 */  lbu         $t7, %lo(D_8014D3E8)($t7)
/* 010924 8000FD24 544F000A */  bnel        $v0, $t7, .L8000FD50
/* 010928 8000FD28 AFA40048 */   sw         $a0, 0x48($sp)
/* 01092C 8000FD2C 10000097 */  b           .L8000FF8C
/* 010930 8000FD30 00001025 */   or         $v0, $zero, $zero
.L8000FD34:
/* 010934 8000FD34 0305C021 */  addu        $t8, $t8, $a1
/* 010938 8000FD38 9318D3A8 */  lbu         $t8, %lo(D_8014D3A8)($t8)
/* 01093C 8000FD3C 54580004 */  bnel        $v0, $t8, .L8000FD50
/* 010940 8000FD40 AFA40048 */   sw         $a0, 0x48($sp)
/* 010944 8000FD44 10000091 */  b           .L8000FF8C
/* 010948 8000FD48 00001025 */   or         $v0, $zero, $zero
/* 01094C 8000FD4C AFA40048 */  sw          $a0, 0x48($sp)
.L8000FD50:
/* 010950 8000FD50 0C003DF3 */  jal         func_8000F7CC
/* 010954 8000FD54 AFA5004C */   sw         $a1, 0x4C($sp)
/* 010958 8000FD58 1040000C */  beqz        $v0, .L8000FD8C
/* 01095C 8000FD5C AFA2003C */   sw         $v0, 0x3C($sp)
/* 010960 8000FD60 8FA50054 */  lw          $a1, 0x54($sp)
/* 010964 8000FD64 24080002 */  addiu       $t0, $zero, 0x2
/* 010968 8000FD68 AFA8002C */  sw          $t0, 0x2C($sp)
/* 01096C 8000FD6C 0005CE00 */  sll         $t9, $a1, 24
/* 010970 8000FD70 03202825 */  or          $a1, $t9, $zero
/* 010974 8000FD74 8FA40058 */  lw          $a0, 0x58($sp)
/* 010978 8000FD78 0C0081C8 */  jal         osSendMesg
/* 01097C 8000FD7C 00003025 */   or         $a2, $zero, $zero
/* 010980 8000FD80 8FA5003C */  lw          $a1, 0x3C($sp)
/* 010984 8000FD84 1000005B */  b           .L8000FEF4
/* 010988 8000FD88 8FA8002C */   lw         $t0, 0x2C($sp)
.L8000FD8C:
/* 01098C 8000FD8C 0C003E08 */  jal         func_8000F820
/* 010990 8000FD90 8FA40048 */   lw         $a0, 0x48($sp)
/* 010994 8000FD94 8FA9004C */  lw          $t1, 0x4C($sp)
/* 010998 8000FD98 2401FFF0 */  addiu       $at, $zero, -0x10
/* 01099C 8000FD9C 8FA5003C */  lw          $a1, 0x3C($sp)
/* 0109A0 8000FDA0 00095100 */  sll         $t2, $t1, 4
/* 0109A4 8000FDA4 004A1821 */  addu        $v1, $v0, $t2
/* 0109A8 8000FDA8 8C6B0014 */  lw          $t3, 0x14($v1)
/* 0109AC 8000FDAC 24080002 */  addiu       $t0, $zero, 0x2
/* 0109B0 8000FDB0 256D000F */  addiu       $t5, $t3, 0xF
/* 0109B4 8000FDB4 01A17024 */  and         $t6, $t5, $at
/* 0109B8 8000FDB8 AFAB0044 */  sw          $t3, 0x44($sp)
/* 0109BC 8000FDBC AFAE0044 */  sw          $t6, 0x44($sp)
/* 0109C0 8000FDC0 806F0018 */  lb          $t7, 0x18($v1)
/* 0109C4 8000FDC4 AFAF0038 */  sw          $t7, 0x38($sp)
/* 0109C8 8000FDC8 80640019 */  lb          $a0, 0x19($v1)
/* 0109CC 8000FDCC 8C780010 */  lw          $t8, 0x10($v1)
/* 0109D0 8000FDD0 2C810005 */  sltiu       $at, $a0, 0x5
/* 0109D4 8000FDD4 10200032 */  beqz        $at, .L8000FEA0
/* 0109D8 8000FDD8 AFB80030 */   sw         $t8, 0x30($sp)
/* 0109DC 8000FDDC 0004C880 */  sll         $t9, $a0, 2
/* 0109E0 8000FDE0 3C01800D */  lui         $at, %hi(jtbl_800C8694)
/* 0109E4 8000FDE4 00390821 */  addu        $at, $at, $t9
/* 0109E8 8000FDE8 8C398694 */  lw          $t9, %lo(jtbl_800C8694)($at)
/* 0109EC 8000FDEC 03200008 */  jr          $t9
/* 0109F0 8000FDF0 00000000 */   nop
.L8000FDF4:
/* 0109F4 8000FDF4 8FA40048 */  lw          $a0, 0x48($sp)
/* 0109F8 8000FDF8 8FA5004C */  lw          $a1, 0x4C($sp)
/* 0109FC 8000FDFC 0C0036D9 */  jal         func_8000DB64
/* 010A00 8000FE00 8FA60044 */   lw         $a2, 0x44($sp)
/* 010A04 8000FE04 14400003 */  bnez        $v0, .L8000FE14
/* 010A08 8000FE08 00402825 */   or         $a1, $v0, $zero
/* 010A0C 8000FE0C 10000060 */  b           .L8000FF90
/* 010A10 8000FE10 8FBF0024 */   lw         $ra, 0x24($sp)
.L8000FE14:
/* 010A14 8000FE14 10000022 */  b           .L8000FEA0
/* 010A18 8000FE18 24080005 */   addiu      $t0, $zero, 0x5
.L8000FE1C:
/* 010A1C 8000FE1C 8FA40048 */  lw          $a0, 0x48($sp)
/* 010A20 8000FE20 8FA50044 */  lw          $a1, 0x44($sp)
/* 010A24 8000FE24 24060001 */  addiu       $a2, $zero, 0x1
/* 010A28 8000FE28 8FA7004C */  lw          $a3, 0x4C($sp)
/* 010A2C 8000FE2C 0C0030AD */  jal         AudioHeap_AllocCached
/* 010A30 8000FE30 AFA8002C */   sw         $t0, 0x2C($sp)
/* 010A34 8000FE34 8FA8002C */  lw          $t0, 0x2C($sp)
/* 010A38 8000FE38 14400019 */  bnez        $v0, .L8000FEA0
/* 010A3C 8000FE3C 00402825 */   or         $a1, $v0, $zero
/* 010A40 8000FE40 10000053 */  b           .L8000FF90
/* 010A44 8000FE44 8FBF0024 */   lw         $ra, 0x24($sp)
.L8000FE48:
/* 010A48 8000FE48 8FA40048 */  lw          $a0, 0x48($sp)
/* 010A4C 8000FE4C 8FA50044 */  lw          $a1, 0x44($sp)
/* 010A50 8000FE50 00003025 */  or          $a2, $zero, $zero
/* 010A54 8000FE54 8FA7004C */  lw          $a3, 0x4C($sp)
/* 010A58 8000FE58 0C0030AD */  jal         AudioHeap_AllocCached
/* 010A5C 8000FE5C AFA8002C */   sw         $t0, 0x2C($sp)
/* 010A60 8000FE60 8FA8002C */  lw          $t0, 0x2C($sp)
/* 010A64 8000FE64 1440000E */  bnez        $v0, .L8000FEA0
/* 010A68 8000FE68 00402825 */   or         $a1, $v0, $zero
/* 010A6C 8000FE6C 10000048 */  b           .L8000FF90
/* 010A70 8000FE70 8FBF0024 */   lw         $ra, 0x24($sp)
.L8000FE74:
/* 010A74 8000FE74 8FA40048 */  lw          $a0, 0x48($sp)
/* 010A78 8000FE78 8FA50044 */  lw          $a1, 0x44($sp)
/* 010A7C 8000FE7C 24060002 */  addiu       $a2, $zero, 0x2
/* 010A80 8000FE80 8FA7004C */  lw          $a3, 0x4C($sp)
/* 010A84 8000FE84 0C0030AD */  jal         AudioHeap_AllocCached
/* 010A88 8000FE88 AFA8002C */   sw         $t0, 0x2C($sp)
/* 010A8C 8000FE8C 8FA8002C */  lw          $t0, 0x2C($sp)
/* 010A90 8000FE90 14400003 */  bnez        $v0, .L8000FEA0
/* 010A94 8000FE94 00402825 */   or         $a1, $v0, $zero
/* 010A98 8000FE98 1000003D */  b           .L8000FF90
/* 010A9C 8000FE9C 8FBF0024 */   lw         $ra, 0x24($sp)
.L8000FEA0:
/* 010AA0 8000FEA0 8FAB0054 */  lw          $t3, 0x54($sp)
/* 010AA4 8000FEA4 8FAD0048 */  lw          $t5, 0x48($sp)
/* 010AA8 8000FEA8 8FA90050 */  lw          $t1, 0x50($sp)
/* 010AAC 8000FEAC 8FB8004C */  lw          $t8, 0x4C($sp)
/* 010AB0 8000FEB0 8FAA0058 */  lw          $t2, 0x58($sp)
/* 010AB4 8000FEB4 000B6600 */  sll         $t4, $t3, 24
/* 010AB8 8000FEB8 000D7400 */  sll         $t6, $t5, 16
/* 010ABC 8000FEBC 018E7825 */  or          $t7, $t4, $t6
/* 010AC0 8000FEC0 AFA90010 */  sw          $t1, 0x10($sp)
/* 010AC4 8000FEC4 0018CA00 */  sll         $t9, $t8, 8
/* 010AC8 8000FEC8 01F94825 */  or          $t1, $t7, $t9
/* 010ACC 8000FECC AFAA0014 */  sw          $t2, 0x14($sp)
/* 010AD0 8000FED0 01285025 */  or          $t2, $t1, $t0
/* 010AD4 8000FED4 AFAA0018 */  sw          $t2, 0x18($sp)
/* 010AD8 8000FED8 8FA40030 */  lw          $a0, 0x30($sp)
/* 010ADC 8000FEDC 8FA60044 */  lw          $a2, 0x44($sp)
/* 010AE0 8000FEE0 8FA70038 */  lw          $a3, 0x38($sp)
/* 010AE4 8000FEE4 0C0042B6 */  jal         func_80010AD8
/* 010AE8 8000FEE8 AFA5003C */   sw         $a1, 0x3C($sp)
/* 010AEC 8000FEEC 8FA5003C */  lw          $a1, 0x3C($sp)
/* 010AF0 8000FEF0 24080001 */  addiu       $t0, $zero, 0x1
.L8000FEF4:
/* 010AF4 8000FEF4 8FA20048 */  lw          $v0, 0x48($sp)
/* 010AF8 8000FEF8 3C0D8015 */  lui         $t5, %hi(D_8014D428)
/* 010AFC 8000FEFC 25ADD428 */  addiu       $t5, $t5, %lo(D_8014D428)
/* 010B00 8000FF00 10400009 */  beqz        $v0, .L8000FF28
/* 010B04 8000FF04 8FAB004C */   lw         $t3, 0x4C($sp)
/* 010B08 8000FF08 24010001 */  addiu       $at, $zero, 0x1
/* 010B0C 8000FF0C 1041000D */  beq         $v0, $at, .L8000FF44
/* 010B10 8000FF10 8FAE004C */   lw         $t6, 0x4C($sp)
/* 010B14 8000FF14 24010002 */  addiu       $at, $zero, 0x2
/* 010B18 8000FF18 10410013 */  beq         $v0, $at, .L8000FF68
/* 010B1C 8000FF1C 8FB9004C */   lw         $t9, 0x4C($sp)
/* 010B20 8000FF20 1000001A */  b           .L8000FF8C
/* 010B24 8000FF24 00A01025 */   or         $v0, $a1, $zero
.L8000FF28:
/* 010B28 8000FF28 016D1021 */  addu        $v0, $t3, $t5
/* 010B2C 8000FF2C 904C0000 */  lbu         $t4, 0x0($v0)
/* 010B30 8000FF30 24010005 */  addiu       $at, $zero, 0x5
/* 010B34 8000FF34 51810015 */  beql        $t4, $at, .L8000FF8C
/* 010B38 8000FF38 00A01025 */   or         $v0, $a1, $zero
/* 010B3C 8000FF3C 10000012 */  b           .L8000FF88
/* 010B40 8000FF40 A0480000 */   sb         $t0, 0x0($v0)
.L8000FF44:
/* 010B44 8000FF44 3C188015 */  lui         $t8, %hi(D_8014D3E8)
/* 010B48 8000FF48 2718D3E8 */  addiu       $t8, $t8, %lo(D_8014D3E8)
/* 010B4C 8000FF4C 01D81021 */  addu        $v0, $t6, $t8
/* 010B50 8000FF50 904F0000 */  lbu         $t7, 0x0($v0)
/* 010B54 8000FF54 24010005 */  addiu       $at, $zero, 0x5
/* 010B58 8000FF58 51E1000C */  beql        $t7, $at, .L8000FF8C
/* 010B5C 8000FF5C 00A01025 */   or         $v0, $a1, $zero
/* 010B60 8000FF60 10000009 */  b           .L8000FF88
/* 010B64 8000FF64 A0480000 */   sb         $t0, 0x0($v0)
.L8000FF68:
/* 010B68 8000FF68 3C098015 */  lui         $t1, %hi(D_8014D3A8)
/* 010B6C 8000FF6C 2529D3A8 */  addiu       $t1, $t1, %lo(D_8014D3A8)
/* 010B70 8000FF70 03291021 */  addu        $v0, $t9, $t1
/* 010B74 8000FF74 904A0000 */  lbu         $t2, 0x0($v0)
/* 010B78 8000FF78 24010005 */  addiu       $at, $zero, 0x5
/* 010B7C 8000FF7C 51410003 */  beql        $t2, $at, .L8000FF8C
/* 010B80 8000FF80 00A01025 */   or         $v0, $a1, $zero
/* 010B84 8000FF84 A0480000 */  sb          $t0, 0x0($v0)
.L8000FF88:
/* 010B88 8000FF88 00A01025 */  or          $v0, $a1, $zero
.L8000FF8C:
/* 010B8C 8000FF8C 8FBF0024 */  lw          $ra, 0x24($sp)
.L8000FF90:
/* 010B90 8000FF90 27BD0048 */  addiu       $sp, $sp, 0x48
/* 010B94 8000FF94 03E00008 */  jr          $ra
/* 010B98 8000FF98 00000000 */   nop
glabel func_8000FF9C
/* 010B9C 8000FF9C 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 010BA0 8000FFA0 AFBF0014 */  sw          $ra, 0x14($sp)
/* 010BA4 8000FFA4 0C00421C */  jal         func_80010870
/* 010BA8 8000FFA8 AFA40018 */   sw         $a0, 0x18($sp)
/* 010BAC 8000FFAC 0C004553 */  jal         func_8001154C
/* 010BB0 8000FFB0 8FA40018 */   lw         $a0, 0x18($sp)
/* 010BB4 8000FFB4 0C0042FC */  jal         func_80010BF0
/* 010BB8 8000FFB8 8FA40018 */   lw         $a0, 0x18($sp)
/* 010BBC 8000FFBC 8FBF0014 */  lw          $ra, 0x14($sp)
/* 010BC0 8000FFC0 27BD0018 */  addiu       $sp, $sp, 0x18
/* 010BC4 8000FFC4 03E00008 */  jr          $ra
/* 010BC8 8000FFC8 00000000 */   nop
.section .late_rodata
dlabel D_800C86A8
/* 0C92A8 800C86A8 41A03E4D */ .float 20.0304203

dlabel D_800C86AC
/* 0C92AC 800C86AC 41845E35 */ .float 16.54599953

dlabel D_800C86B0
/* 0C92B0 800C86B0 4185B439 */ .float 16.71299934
/* 0C92B4 800C86B4 00000000 */ .float 0
/* 0C92B8 800C86B8 00000000 */ .float 0
/* 0C92BC 800C86BC 00000000 */ .float 0


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_8000FFCC
/* 010BCC 8000FFCC 27BDFF78 */  addiu       $sp, $sp, -0x88
/* 010BD0 8000FFD0 3C0E8015 */  lui         $t6, %hi(D_80155D8C)
/* 010BD4 8000FFD4 AFBF0024 */  sw          $ra, 0x24($sp)
/* 010BD8 8000FFD8 AFB20020 */  sw          $s2, 0x20($sp)
/* 010BDC 8000FFDC AFB1001C */  sw          $s1, 0x1C($sp)
/* 010BE0 8000FFE0 AFB00018 */  sw          $s0, 0x18($sp)
/* 010BE4 8000FFE4 25CE5D8C */  addiu       $t6, $t6, %lo(D_80155D8C)
/* 010BE8 8000FFE8 ADC00000 */  sw          $zero, 0x0($t6)
/* 010BEC 8000FFEC 3C04800C */  lui         $a0, %hi(D_800C7C30)
/* 010BF0 8000FFF0 8C847C30 */  lw          $a0, %lo(D_800C7C30)($a0)
/* 010BF4 8000FFF4 00003825 */  or          $a3, $zero, $zero
/* 010BF8 8000FFF8 3C058015 */  lui         $a1, %hi(D_8014BA40)
/* 010BFC 8000FFFC 04810003 */  bgez        $a0, .L8001000C
/* 010C00 80010000 000478C3 */   sra        $t7, $a0, 3
/* 010C04 80010004 24810007 */  addiu       $at, $a0, 0x7
/* 010C08 80010008 000178C3 */  sra         $t7, $at, 3
.L8001000C:
/* 010C0C 8001000C 19E0000C */  blez        $t7, .L80010040
/* 010C10 80010010 3C0A8015 */   lui        $t2, %hi(D_80155D90)
/* 010C14 80010014 3C18802D */  lui         $t8, %hi(gAudioDataBuffer)
/* 010C18 80010018 27027800 */  addiu       $v0, $t8, %lo(gAudioDataBuffer)
/* 010C1C 8001001C 000FC8C0 */  sll         $t9, $t7, 3
/* 010C20 80010020 03221821 */  addu        $v1, $t9, $v0
.L80010024:
/* 010C24 80010024 24420008 */  addiu       $v0, $v0, 0x8
/* 010C28 80010028 0043082B */  sltu        $at, $v0, $v1
/* 010C2C 8001002C 24080000 */  addiu       $t0, $zero, 0x0
/* 010C30 80010030 24090000 */  addiu       $t1, $zero, 0x0
/* 010C34 80010034 AC49FFFC */  sw          $t1, -0x4($v0)
/* 010C38 80010038 1420FFFA */  bnez        $at, .L80010024
/* 010C3C 8001003C AC48FFF8 */   sw         $t0, -0x8($v0)
.L80010040:
/* 010C40 80010040 24A2BA40 */  addiu       $v0, $a1, %lo(D_8014BA40)
/* 010C44 80010044 254A5D90 */  addiu       $t2, $t2, %lo(D_80155D90)
/* 010C48 80010048 01422023 */  subu        $a0, $t2, $v0
/* 010C4C 8001004C 000418C2 */  srl         $v1, $a0, 3
/* 010C50 80010050 04600007 */  bltz        $v1, .L80010070
.L80010054:
/* 010C54 80010054 2463FFFF */   addiu      $v1, $v1, -0x1
/* 010C58 80010058 240C0000 */  addiu       $t4, $zero, 0x0
/* 010C5C 8001005C 240D0000 */  addiu       $t5, $zero, 0x0
/* 010C60 80010060 AC4D0004 */  sw          $t5, 0x4($v0)
/* 010C64 80010064 AC4C0000 */  sw          $t4, 0x0($v0)
/* 010C68 80010068 0461FFFA */  bgez        $v1, .L80010054
/* 010C6C 8001006C 24420008 */   addiu      $v0, $v0, 0x8
.L80010070:
/* 010C70 80010070 3C028000 */  lui         $v0, %hi(osTvType)
/* 010C74 80010074 8C420300 */  lw          $v0, %lo(osTvType)($v0)
/* 010C78 80010078 10400007 */  beqz        $v0, .L80010098
/* 010C7C 8001007C 24010001 */   addiu      $at, $zero, 0x1
/* 010C80 80010080 10410015 */  beq         $v0, $at, .L800100D8
/* 010C84 80010084 24010002 */   addiu      $at, $zero, 0x2
/* 010C88 80010088 1041000B */  beq         $v0, $at, .L800100B8
/* 010C8C 8001008C 00000000 */   nop
/* 010C90 80010090 10000011 */  b           .L800100D8
/* 010C94 80010094 00000000 */   nop
.L80010098:
/* 010C98 80010098 3C01800D */  lui         $at, %hi(D_800C86A8)
/* 010C9C 8001009C C42486A8 */  lwc1        $ft0, %lo(D_800C86A8)($at)
/* 010CA0 800100A0 3C018015 */  lui         $at, %hi(D_80155D68)
/* 010CA4 800100A4 240E0032 */  addiu       $t6, $zero, 0x32
/* 010CA8 800100A8 E4245D68 */  swc1        $ft0, %lo(D_80155D68)($at)
/* 010CAC 800100AC 3C018015 */  lui         $at, %hi(D_80155D6C)
/* 010CB0 800100B0 10000010 */  b           .L800100F4
/* 010CB4 800100B4 AC2E5D6C */   sw         $t6, %lo(D_80155D6C)($at)
.L800100B8:
/* 010CB8 800100B8 3C01800D */  lui         $at, %hi(D_800C86AC)
/* 010CBC 800100BC C42686AC */  lwc1        $ft1, %lo(D_800C86AC)($at)
/* 010CC0 800100C0 3C018015 */  lui         $at, %hi(D_80155D68)
/* 010CC4 800100C4 240F003C */  addiu       $t7, $zero, 0x3C
/* 010CC8 800100C8 E4265D68 */  swc1        $ft1, %lo(D_80155D68)($at)
/* 010CCC 800100CC 3C018015 */  lui         $at, %hi(D_80155D6C)
/* 010CD0 800100D0 10000008 */  b           .L800100F4
/* 010CD4 800100D4 AC2F5D6C */   sw         $t7, %lo(D_80155D6C)($at)
.L800100D8:
/* 010CD8 800100D8 3C01800D */  lui         $at, %hi(D_800C86B0)
/* 010CDC 800100DC C42886B0 */  lwc1        $ft2, %lo(D_800C86B0)($at)
/* 010CE0 800100E0 3C018015 */  lui         $at, %hi(D_80155D68)
/* 010CE4 800100E4 2419003C */  addiu       $t9, $zero, 0x3C
/* 010CE8 800100E8 E4285D68 */  swc1        $ft2, %lo(D_80155D68)($at)
/* 010CEC 800100EC 3C018015 */  lui         $at, %hi(D_80155D6C)
/* 010CF0 800100F0 AC395D6C */  sw          $t9, %lo(D_80155D6C)($at)
.L800100F4:
/* 010CF4 800100F4 0C007B8F */  jal         func_8001EE3C
/* 010CF8 800100F8 00000000 */   nop
/* 010CFC 800100FC 3C028015 */  lui         $v0, %hi(D_80155D7C)
/* 010D00 80010100 3C048015 */  lui         $a0, %hi(D_80155D82)
/* 010D04 80010104 24845D82 */  addiu       $a0, $a0, %lo(D_80155D82)
/* 010D08 80010108 24425D7C */  addiu       $v0, $v0, %lo(D_80155D7C)
/* 010D0C 8001010C 240300A0 */  addiu       $v1, $zero, 0xA0
.L80010110:
/* 010D10 80010110 24420002 */  addiu       $v0, $v0, 0x2
/* 010D14 80010114 0044082B */  sltu        $at, $v0, $a0
/* 010D18 80010118 1420FFFD */  bnez        $at, .L80010110
/* 010D1C 8001011C A443FFFE */   sh         $v1, -0x2($v0)
/* 010D20 80010120 3C188015 */  lui         $t8, %hi(D_80155CA8)
/* 010D24 80010124 27185CA8 */  addiu       $t8, $t8, %lo(D_80155CA8)
/* 010D28 80010128 AF000000 */  sw          $zero, 0x0($t8)
/* 010D2C 8001012C 3C018015 */  lui         $at, %hi(D_80155CB0)
/* 010D30 80010130 AC205CB0 */  sw          $zero, %lo(D_80155CB0)($at)
/* 010D34 80010134 3C018015 */  lui         $at, %hi(D_80155CB4)
/* 010D38 80010138 AC205CB4 */  sw          $zero, %lo(D_80155CB4)($at)
/* 010D3C 8001013C 3C018015 */  lui         $at, %hi(D_80155CA6)
/* 010D40 80010140 A0205CA6 */  sb          $zero, %lo(D_80155CA6)($at)
/* 010D44 80010144 3C028015 */  lui         $v0, %hi(D_80155CC8)
/* 010D48 80010148 3C018015 */  lui         $at, %hi(D_80155CC4)
/* 010D4C 8001014C 24425CC8 */  addiu       $v0, $v0, %lo(D_80155CC8)
/* 010D50 80010150 AC205CC4 */  sw          $zero, %lo(D_80155CC4)($at)
/* 010D54 80010154 3C048015 */  lui         $a0, %hi(D_80154A10)
/* 010D58 80010158 3C058015 */  lui         $a1, %hi(D_80154A28)
/* 010D5C 8001015C AC400034 */  sw          $zero, 0x34($v0)
/* 010D60 80010160 AC400084 */  sw          $zero, 0x84($v0)
/* 010D64 80010164 24A54A28 */  addiu       $a1, $a1, %lo(D_80154A28)
/* 010D68 80010168 24844A10 */  addiu       $a0, $a0, %lo(D_80154A10)
/* 010D6C 8001016C 0C00873C */  jal         osCreateMesgQueue
/* 010D70 80010170 24060001 */   addiu      $a2, $zero, 0x1
/* 010D74 80010174 3C048015 */  lui         $a0, %hi(D_801542F8)
/* 010D78 80010178 3C058015 */  lui         $a1, %hi(D_80154310)
/* 010D7C 8001017C 24A54310 */  addiu       $a1, $a1, %lo(D_80154310)
/* 010D80 80010180 248442F8 */  addiu       $a0, $a0, %lo(D_801542F8)
/* 010D84 80010184 0C00873C */  jal         osCreateMesgQueue
/* 010D88 80010188 24060040 */   addiu      $a2, $zero, 0x40
/* 010D8C 8001018C 3C048015 */  lui         $a0, %hi(D_80154248)
/* 010D90 80010190 3C058015 */  lui         $a1, %hi(D_80154260)
/* 010D94 80010194 24A54260 */  addiu       $a1, $a1, %lo(D_80154260)
/* 010D98 80010198 24844248 */  addiu       $a0, $a0, %lo(D_80154248)
/* 010D9C 8001019C 0C00873C */  jal         osCreateMesgQueue
/* 010DA0 800101A0 24060010 */   addiu      $a2, $zero, 0x10
/* 010DA4 800101A4 3C048015 */  lui         $a0, %hi(D_801542A0)
/* 010DA8 800101A8 3C058015 */  lui         $a1, %hi(D_801542B8)
/* 010DAC 800101AC 24A542B8 */  addiu       $a1, $a1, %lo(D_801542B8)
/* 010DB0 800101B0 248442A0 */  addiu       $a0, $a0, %lo(D_801542A0)
/* 010DB4 800101B4 0C00873C */  jal         osCreateMesgQueue
/* 010DB8 800101B8 24060010 */   addiu      $a2, $zero, 0x10
/* 010DBC 800101BC 3C018015 */  lui         $at, %hi(D_80155CAC)
/* 010DC0 800101C0 AC205CAC */  sw          $zero, %lo(D_80155CAC)($at)
/* 010DC4 800101C4 3C018015 */  lui         $at, %hi(D_80155A48)
/* 010DC8 800101C8 3C04800C */  lui         $a0, %hi(D_800C7C34)
/* 010DCC 800101CC AC205A48 */  sw          $zero, %lo(D_80155A48)($at)
/* 010DD0 800101D0 0C002FFA */  jal         func_8000BFE8
/* 010DD4 800101D4 8C847C34 */   lw         $a0, %lo(D_800C7C34)($a0)
/* 010DD8 800101D8 3C068015 */  lui         $a2, %hi(D_80155D70)
/* 010DDC 800101DC 3C128015 */  lui         $s2, %hi(D_8014C1D0)
/* 010DE0 800101E0 3C118015 */  lui         $s1, %hi(D_80155D7C)
/* 010DE4 800101E4 26315D7C */  addiu       $s1, $s1, %lo(D_80155D7C)
/* 010DE8 800101E8 2652C1D0 */  addiu       $s2, $s2, %lo(D_8014C1D0)
/* 010DEC 800101EC 24C65D70 */  addiu       $a2, $a2, %lo(D_80155D70)
/* 010DF0 800101F0 24101540 */  addiu       $s0, $zero, 0x1540
/* 010DF4 800101F4 02402025 */  or          $a0, $s2, $zero
.L800101F8:
/* 010DF8 800101F8 24051540 */  addiu       $a1, $zero, 0x1540
/* 010DFC 800101FC 0C002FC5 */  jal         AudioHeap_Alloc
/* 010E00 80010200 AFA6002C */   sw         $a2, 0x2C($sp)
/* 010E04 80010204 8FA6002C */  lw          $a2, 0x2C($sp)
/* 010E08 80010208 00001825 */  or          $v1, $zero, $zero
/* 010E0C 8001020C ACC20000 */  sw          $v0, 0x0($a2)
.L80010210:
/* 010E10 80010210 8CC80000 */  lw          $t0, 0x0($a2)
/* 010E14 80010214 01034821 */  addu        $t1, $t0, $v1
/* 010E18 80010218 A5200000 */  sh          $zero, 0x0($t1)
/* 010E1C 8001021C 8CCA0000 */  lw          $t2, 0x0($a2)
/* 010E20 80010220 01435821 */  addu        $t3, $t2, $v1
/* 010E24 80010224 A5600002 */  sh          $zero, 0x2($t3)
/* 010E28 80010228 8CCC0000 */  lw          $t4, 0x0($a2)
/* 010E2C 8001022C 01836821 */  addu        $t5, $t4, $v1
/* 010E30 80010230 A5A00004 */  sh          $zero, 0x4($t5)
/* 010E34 80010234 8CCE0000 */  lw          $t6, 0x0($a2)
/* 010E38 80010238 01C37821 */  addu        $t7, $t6, $v1
/* 010E3C 8001023C 24630008 */  addiu       $v1, $v1, 0x8
/* 010E40 80010240 1470FFF3 */  bne         $v1, $s0, .L80010210
/* 010E44 80010244 A5E00006 */   sh         $zero, 0x6($t7)
/* 010E48 80010248 24C60004 */  addiu       $a2, $a2, 0x4
/* 010E4C 8001024C 00D1082B */  sltu        $at, $a2, $s1
/* 010E50 80010250 5420FFE9 */  bnel        $at, $zero, .L800101F8
/* 010E54 80010254 02402025 */   or         $a0, $s2, $zero
/* 010E58 80010258 3C018015 */  lui         $at, %hi(D_8014D529)
/* 010E5C 8001025C 3C188015 */  lui         $t8, %hi(D_8014D528)
/* 010E60 80010260 A020D529 */  sb          $zero, %lo(D_8014D529)($at)
/* 010E64 80010264 2718D528 */  addiu       $t8, $t8, %lo(D_8014D528)
/* 010E68 80010268 24190001 */  addiu       $t9, $zero, 0x1
/* 010E6C 8001026C 0C003441 */  jal         func_8000D104
/* 010E70 80010270 A3190000 */   sb         $t9, 0x0($t8)
/* 010E74 80010274 3C038015 */  lui         $v1, %hi(D_80155C5C)
/* 010E78 80010278 3C108015 */  lui         $s0, %hi(D_80155C60)
/* 010E7C 8001027C 3C118015 */  lui         $s1, %hi(D_80155C64)
/* 010E80 80010280 3C08800C */  lui         $t0, %hi(D_800C3660)
/* 010E84 80010284 3C09800C */  lui         $t1, %hi(D_800C3A90)
/* 010E88 80010288 3C0A800C */  lui         $t2, %hi(D_800C3610)
/* 010E8C 8001028C 26315C64 */  addiu       $s1, $s1, %lo(D_80155C64)
/* 010E90 80010290 26105C60 */  addiu       $s0, $s0, %lo(D_80155C60)
/* 010E94 80010294 24635C5C */  addiu       $v1, $v1, %lo(D_80155C5C)
/* 010E98 80010298 25083660 */  addiu       $t0, $t0, %lo(D_800C3660)
/* 010E9C 8001029C 25293A90 */  addiu       $t1, $t1, %lo(D_800C3A90)
/* 010EA0 800102A0 254A3610 */  addiu       $t2, $t2, %lo(D_800C3610)
/* 010EA4 800102A4 3C0B800C */  lui         $t3, %hi(D_800C3CB0)
/* 010EA8 800102A8 AC680000 */  sw          $t0, 0x0($v1)
/* 010EAC 800102AC AE090000 */  sw          $t1, 0x0($s0)
/* 010EB0 800102B0 AE2A0000 */  sw          $t2, 0x0($s1)
/* 010EB4 800102B4 256B3CB0 */  addiu       $t3, $t3, %lo(D_800C3CB0)
/* 010EB8 800102B8 3C018015 */  lui         $at, %hi(D_80155C68)
/* 010EBC 800102BC AC2B5C68 */  sw          $t3, %lo(D_80155C68)($at)
/* 010EC0 800102C0 8C640000 */  lw          $a0, 0x0($v1)
/* 010EC4 800102C4 3C018015 */  lui         $at, %hi(D_80155C6C)
/* 010EC8 800102C8 3C05000E */  lui         $a1, %hi(audio_seq_ROM_START)
/* 010ECC 800102CC 848C0000 */  lh          $t4, 0x0($a0)
/* 010ED0 800102D0 3C06800C */  lui         $a2, %hi(D_800C7C3C)
/* 010ED4 800102D4 94C67C3C */  lhu         $a2, %lo(D_800C7C3C)($a2)
/* 010ED8 800102D8 24A5EA20 */  addiu       $a1, $a1, %lo(audio_seq_ROM_START)
/* 010EDC 800102DC 0C003AED */  jal         func_8000EBB4
/* 010EE0 800102E0 A42C5C6C */   sh         $t4, %lo(D_80155C6C)($at)
/* 010EE4 800102E4 3C050012 */  lui         $a1, %hi(audio_bank_ROM_START)
/* 010EE8 800102E8 3C06800C */  lui         $a2, %hi(D_800C7C40)
/* 010EEC 800102EC 94C67C40 */  lhu         $a2, %lo(D_800C7C40)($a2)
/* 010EF0 800102F0 24A59710 */  addiu       $a1, $a1, %lo(audio_bank_ROM_START)
/* 010EF4 800102F4 0C003AED */  jal         func_8000EBB4
/* 010EF8 800102F8 8E040000 */   lw         $a0, 0x0($s0)
/* 010EFC 800102FC 3C050013 */  lui         $a1, %hi(audio_table_ROM_START)
/* 010F00 80010300 3C06800C */  lui         $a2, %hi(D_800C7C44)
/* 010F04 80010304 94C67C44 */  lhu         $a2, %lo(D_800C7C44)($a2)
/* 010F08 80010308 24A57730 */  addiu       $a1, $a1, %lo(audio_table_ROM_START)
/* 010F0C 8001030C 0C003AED */  jal         func_8000EBB4
/* 010F10 80010310 8E240000 */   lw         $a0, 0x0($s1)
/* 010F14 80010314 8E0D0000 */  lw          $t5, 0x0($s0)
/* 010F18 80010318 02402025 */  or          $a0, $s2, $zero
/* 010F1C 8001031C 85B10000 */  lh          $s1, 0x0($t5)
/* 010F20 80010320 00112880 */  sll         $a1, $s1, 2
/* 010F24 80010324 00B12823 */  subu        $a1, $a1, $s1
/* 010F28 80010328 0C002FC5 */  jal         AudioHeap_Alloc
/* 010F2C 8001032C 00052880 */   sll        $a1, $a1, 2
/* 010F30 80010330 3C048015 */  lui         $a0, %hi(D_80155C70)
/* 010F34 80010334 24845C70 */  addiu       $a0, $a0, %lo(D_80155C70)
/* 010F38 80010338 AC820000 */  sw          $v0, 0x0($a0)
/* 010F3C 8001033C 1A200097 */  blez        $s1, .L8001059C
/* 010F40 80010340 00003825 */   or         $a3, $zero, $zero
/* 010F44 80010344 32260003 */  andi        $a2, $s1, 0x3
/* 010F48 80010348 10C00024 */  beqz        $a2, .L800103DC
/* 010F4C 8001034C 00C02825 */   or         $a1, $a2, $zero
/* 010F50 80010350 00001880 */  sll         $v1, $zero, 2
/* 010F54 80010354 00601823 */  subu        $v1, $v1, $zero
/* 010F58 80010358 00031880 */  sll         $v1, $v1, 2
/* 010F5C 8001035C 00001100 */  sll         $v0, $zero, 4
.L80010360:
/* 010F60 80010360 8E0E0000 */  lw          $t6, 0x0($s0)
/* 010F64 80010364 8C890000 */  lw          $t1, 0x0($a0)
/* 010F68 80010368 24E70001 */  addiu       $a3, $a3, 0x1
/* 010F6C 8001036C 01C27821 */  addu        $t7, $t6, $v0
/* 010F70 80010370 85F9001A */  lh          $t9, 0x1A($t7)
/* 010F74 80010374 01235021 */  addu        $t2, $t1, $v1
/* 010F78 80010378 00194203 */  sra         $t0, $t9, 8
/* 010F7C 8001037C A1480002 */  sb          $t0, 0x2($t2)
/* 010F80 80010380 8E0B0000 */  lw          $t3, 0x0($s0)
/* 010F84 80010384 8C8F0000 */  lw          $t7, 0x0($a0)
/* 010F88 80010388 01626021 */  addu        $t4, $t3, $v0
/* 010F8C 8001038C 858E001A */  lh          $t6, 0x1A($t4)
/* 010F90 80010390 01E3C821 */  addu        $t9, $t7, $v1
/* 010F94 80010394 A32E0003 */  sb          $t6, 0x3($t9)
/* 010F98 80010398 8E180000 */  lw          $t8, 0x0($s0)
/* 010F9C 8001039C 8C8C0000 */  lw          $t4, 0x0($a0)
/* 010FA0 800103A0 03024821 */  addu        $t1, $t8, $v0
/* 010FA4 800103A4 8528001C */  lh          $t0, 0x1C($t1)
/* 010FA8 800103A8 01836821 */  addu        $t5, $t4, $v1
/* 010FAC 800103AC 00085A03 */  sra         $t3, $t0, 8
/* 010FB0 800103B0 A1AB0000 */  sb          $t3, 0x0($t5)
/* 010FB4 800103B4 8E0F0000 */  lw          $t7, 0x0($s0)
/* 010FB8 800103B8 8C890000 */  lw          $t1, 0x0($a0)
/* 010FBC 800103BC 01E27021 */  addu        $t6, $t7, $v0
/* 010FC0 800103C0 85D8001C */  lh          $t8, 0x1C($t6)
/* 010FC4 800103C4 01234021 */  addu        $t0, $t1, $v1
/* 010FC8 800103C8 2463000C */  addiu       $v1, $v1, 0xC
/* 010FCC 800103CC 24420010 */  addiu       $v0, $v0, 0x10
/* 010FD0 800103D0 14A7FFE3 */  bne         $a1, $a3, .L80010360
/* 010FD4 800103D4 A1180001 */   sb         $t8, 0x1($t0)
/* 010FD8 800103D8 10F10070 */  beq         $a3, $s1, .L8001059C
.L800103DC:
/* 010FDC 800103DC 00071880 */   sll        $v1, $a3, 2
/* 010FE0 800103E0 00671823 */  subu        $v1, $v1, $a3
/* 010FE4 800103E4 00031880 */  sll         $v1, $v1, 2
/* 010FE8 800103E8 00071100 */  sll         $v0, $a3, 4
/* 010FEC 800103EC 00112900 */  sll         $a1, $s1, 4
.L800103F0:
/* 010FF0 800103F0 8E0A0000 */  lw          $t2, 0x0($s0)
/* 010FF4 800103F4 8C8E0000 */  lw          $t6, 0x0($a0)
/* 010FF8 800103F8 01426021 */  addu        $t4, $t2, $v0
/* 010FFC 800103FC 858B001A */  lh          $t3, 0x1A($t4)
/* 011000 80010400 01C3C821 */  addu        $t9, $t6, $v1
/* 011004 80010404 000B7A03 */  sra         $t7, $t3, 8
/* 011008 80010408 A32F0002 */  sb          $t7, 0x2($t9)
/* 01100C 8001040C 8E090000 */  lw          $t1, 0x0($s0)
/* 011010 80010410 8C8C0000 */  lw          $t4, 0x0($a0)
/* 011014 80010414 0122C021 */  addu        $t8, $t1, $v0
/* 011018 80010418 870A001A */  lh          $t2, 0x1A($t8)
/* 01101C 8001041C 01835821 */  addu        $t3, $t4, $v1
/* 011020 80010420 A16A0003 */  sb          $t2, 0x3($t3)
/* 011024 80010424 8E0D0000 */  lw          $t5, 0x0($s0)
/* 011028 80010428 8C980000 */  lw          $t8, 0x0($a0)
/* 01102C 8001042C 01A27021 */  addu        $t6, $t5, $v0
/* 011030 80010430 85CF001C */  lh          $t7, 0x1C($t6)
/* 011034 80010434 03034021 */  addu        $t0, $t8, $v1
/* 011038 80010438 000F4A03 */  sra         $t1, $t7, 8
/* 01103C 8001043C A1090000 */  sb          $t1, 0x0($t0)
/* 011040 80010440 8E0C0000 */  lw          $t4, 0x0($s0)
/* 011044 80010444 8C8E0000 */  lw          $t6, 0x0($a0)
/* 011048 80010448 01825021 */  addu        $t2, $t4, $v0
/* 01104C 8001044C 854D001C */  lh          $t5, 0x1C($t2)
/* 011050 80010450 01C37821 */  addu        $t7, $t6, $v1
/* 011054 80010454 A1ED0001 */  sb          $t5, 0x1($t7)
/* 011058 80010458 8E190000 */  lw          $t9, 0x0($s0)
/* 01105C 8001045C 8C8A0000 */  lw          $t2, 0x0($a0)
/* 011060 80010460 0322C021 */  addu        $t8, $t9, $v0
/* 011064 80010464 8709002A */  lh          $t1, 0x2A($t8)
/* 011068 80010468 01435821 */  addu        $t3, $t2, $v1
/* 01106C 8001046C 00096203 */  sra         $t4, $t1, 8
/* 011070 80010470 A16C000E */  sb          $t4, 0xE($t3)
/* 011074 80010474 8E0E0000 */  lw          $t6, 0x0($s0)
/* 011078 80010478 8C980000 */  lw          $t8, 0x0($a0)
/* 01107C 8001047C 01C26821 */  addu        $t5, $t6, $v0
/* 011080 80010480 85B9002A */  lh          $t9, 0x2A($t5)
/* 011084 80010484 03034821 */  addu        $t1, $t8, $v1
/* 011088 80010488 A139000F */  sb          $t9, 0xF($t1)
/* 01108C 8001048C 8E080000 */  lw          $t0, 0x0($s0)
/* 011090 80010490 8C8D0000 */  lw          $t5, 0x0($a0)
/* 011094 80010494 01025021 */  addu        $t2, $t0, $v0
/* 011098 80010498 854C002C */  lh          $t4, 0x2C($t2)
/* 01109C 8001049C 01A37821 */  addu        $t7, $t5, $v1
/* 0110A0 800104A0 000C7203 */  sra         $t6, $t4, 8
/* 0110A4 800104A4 A1EE000C */  sb          $t6, 0xC($t7)
/* 0110A8 800104A8 8E180000 */  lw          $t8, 0x0($s0)
/* 0110AC 800104AC 8C8A0000 */  lw          $t2, 0x0($a0)
/* 0110B0 800104B0 0302C821 */  addu        $t9, $t8, $v0
/* 0110B4 800104B4 8728002C */  lh          $t0, 0x2C($t9)
/* 0110B8 800104B8 01436021 */  addu        $t4, $t2, $v1
/* 0110BC 800104BC A188000D */  sb          $t0, 0xD($t4)
/* 0110C0 800104C0 8E0B0000 */  lw          $t3, 0x0($s0)
/* 0110C4 800104C4 8C990000 */  lw          $t9, 0x0($a0)
/* 0110C8 800104C8 01626821 */  addu        $t5, $t3, $v0
/* 0110CC 800104CC 85AE003A */  lh          $t6, 0x3A($t5)
/* 0110D0 800104D0 03234821 */  addu        $t1, $t9, $v1
/* 0110D4 800104D4 000EC203 */  sra         $t8, $t6, 8
/* 0110D8 800104D8 A138001A */  sb          $t8, 0x1A($t1)
/* 0110DC 800104DC 8E0A0000 */  lw          $t2, 0x0($s0)
/* 0110E0 800104E0 8C8D0000 */  lw          $t5, 0x0($a0)
/* 0110E4 800104E4 01424021 */  addu        $t0, $t2, $v0
/* 0110E8 800104E8 850B003A */  lh          $t3, 0x3A($t0)
/* 0110EC 800104EC 01A37021 */  addu        $t6, $t5, $v1
/* 0110F0 800104F0 A1CB001B */  sb          $t3, 0x1B($t6)
/* 0110F4 800104F4 8E0F0000 */  lw          $t7, 0x0($s0)
/* 0110F8 800104F8 8C880000 */  lw          $t0, 0x0($a0)
/* 0110FC 800104FC 01E2C821 */  addu        $t9, $t7, $v0
/* 011100 80010500 8738003C */  lh          $t8, 0x3C($t9)
/* 011104 80010504 01036021 */  addu        $t4, $t0, $v1
/* 011108 80010508 00185203 */  sra         $t2, $t8, 8
/* 01110C 8001050C A18A0018 */  sb          $t2, 0x18($t4)
/* 011110 80010510 8E0D0000 */  lw          $t5, 0x0($s0)
/* 011114 80010514 8C990000 */  lw          $t9, 0x0($a0)
/* 011118 80010518 01A25821 */  addu        $t3, $t5, $v0
/* 01111C 8001051C 856F003C */  lh          $t7, 0x3C($t3)
/* 011120 80010520 0323C021 */  addu        $t8, $t9, $v1
/* 011124 80010524 A30F0019 */  sb          $t7, 0x19($t8)
/* 011128 80010528 8E090000 */  lw          $t1, 0x0($s0)
/* 01112C 8001052C 8C8B0000 */  lw          $t3, 0x0($a0)
/* 011130 80010530 01224021 */  addu        $t0, $t1, $v0
/* 011134 80010534 850A004A */  lh          $t2, 0x4A($t0)
/* 011138 80010538 01637021 */  addu        $t6, $t3, $v1
/* 01113C 8001053C 000A6A03 */  sra         $t5, $t2, 8
/* 011140 80010540 A1CD0026 */  sb          $t5, 0x26($t6)
/* 011144 80010544 8E190000 */  lw          $t9, 0x0($s0)
/* 011148 80010548 8C880000 */  lw          $t0, 0x0($a0)
/* 01114C 8001054C 03227821 */  addu        $t7, $t9, $v0
/* 011150 80010550 85E9004A */  lh          $t1, 0x4A($t7)
/* 011154 80010554 01035021 */  addu        $t2, $t0, $v1
/* 011158 80010558 A1490027 */  sb          $t1, 0x27($t2)
/* 01115C 8001055C 8E0C0000 */  lw          $t4, 0x0($s0)
/* 011160 80010560 8C8F0000 */  lw          $t7, 0x0($a0)
/* 011164 80010564 01825821 */  addu        $t3, $t4, $v0
/* 011168 80010568 856D004C */  lh          $t5, 0x4C($t3)
/* 01116C 8001056C 01E3C021 */  addu        $t8, $t7, $v1
/* 011170 80010570 000DCA03 */  sra         $t9, $t5, 8
/* 011174 80010574 A3190024 */  sb          $t9, 0x24($t8)
/* 011178 80010578 8E080000 */  lw          $t0, 0x0($s0)
/* 01117C 8001057C 8C8B0000 */  lw          $t3, 0x0($a0)
/* 011180 80010580 01024821 */  addu        $t1, $t0, $v0
/* 011184 80010584 852C004C */  lh          $t4, 0x4C($t1)
/* 011188 80010588 24420040 */  addiu       $v0, $v0, 0x40
/* 01118C 8001058C 01636821 */  addu        $t5, $t3, $v1
/* 011190 80010590 24630030 */  addiu       $v1, $v1, 0x30
/* 011194 80010594 1445FF96 */  bne         $v0, $a1, .L800103F0
/* 011198 80010598 A1AC0025 */   sb         $t4, 0x25($t5)
.L8001059C:
/* 01119C 8001059C 3C10800C */  lui         $s0, %hi(D_800C7C38)
/* 0111A0 800105A0 26107C38 */  addiu       $s0, $s0, %lo(D_800C7C38)
/* 0111A4 800105A4 8E050000 */  lw          $a1, 0x0($s0)
/* 0111A8 800105A8 0C002FC5 */  jal         AudioHeap_Alloc
/* 0111AC 800105AC 02402025 */   or         $a0, $s2, $zero
/* 0111B0 800105B0 14400002 */  bnez        $v0, .L800105BC
/* 0111B4 800105B4 00402825 */   or         $a1, $v0, $zero
/* 0111B8 800105B8 AE000000 */  sw          $zero, 0x0($s0)
.L800105BC:
/* 0111BC 800105BC 3C048015 */  lui         $a0, %hi(D_8014C7B0)
/* 0111C0 800105C0 2484C7B0 */  addiu       $a0, $a0, %lo(D_8014C7B0)
/* 0111C4 800105C4 0C002FDB */  jal         AudioHeap_InitPool
/* 0111C8 800105C8 8E060000 */   lw         $a2, 0x0($s0)
/* 0111CC 800105CC 0C005A2F */  jal         func_800168BC
/* 0111D0 800105D0 00000000 */   nop
/* 0111D4 800105D4 8FBF0024 */  lw          $ra, 0x24($sp)
/* 0111D8 800105D8 8FB00018 */  lw          $s0, 0x18($sp)
/* 0111DC 800105DC 8FB1001C */  lw          $s1, 0x1C($sp)
/* 0111E0 800105E0 8FB20020 */  lw          $s2, 0x20($sp)
/* 0111E4 800105E4 03E00008 */  jr          $ra
/* 0111E8 800105E8 27BD0088 */   addiu      $sp, $sp, 0x88
glabel func_800105EC
/* 0111EC 800105EC 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* 0111F0 800105F0 AFBF001C */  sw          $ra, 0x1C($sp)
/* 0111F4 800105F4 AFB00018 */  sw          $s0, 0x18($sp)
/* 0111F8 800105F8 AFA5002C */  sw          $a1, 0x2C($sp)
/* 0111FC 800105FC 00C08025 */  or          $s0, $a2, $zero
/* 011200 80010600 AFA40028 */  sw          $a0, 0x28($sp)
/* 011204 80010604 0C0041E7 */  jal         func_8001079C
/* 011208 80010608 93A5002F */   lbu        $a1, 0x2F($sp)
/* 01120C 8001060C 14400004 */  bnez        $v0, .L80010620
/* 011210 80010610 00404025 */   or         $t0, $v0, $zero
/* 011214 80010614 A2000000 */  sb          $zero, 0x0($s0)
/* 011218 80010618 1000005B */  b           .L80010788
/* 01121C 8001061C 2402FFFF */   addiu      $v0, $zero, -0x1
.L80010620:
/* 011220 80010620 8C4E0000 */  lw          $t6, 0x0($v0)
/* 011224 80010624 3C098014 */  lui         $t1, %hi(D_80146D90)
/* 011228 80010628 24190002 */  addiu       $t9, $zero, 0x2
/* 01122C 8001062C 000E7900 */  sll         $t7, $t6, 4
/* 011230 80010630 000FC782 */  srl         $t8, $t7, 30
/* 011234 80010634 17000004 */  bnez        $t8, .L80010648
/* 011238 80010638 25296D90 */   addiu      $t1, $t1, %lo(D_80146D90)
/* 01123C 8001063C A2190000 */  sb          $t9, 0x0($s0)
/* 011240 80010640 10000051 */  b           .L80010788
/* 011244 80010644 00001025 */   or         $v0, $zero, $zero
.L80010648:
/* 011248 80010648 8D2A0000 */  lw          $t2, 0x0($t1)
/* 01124C 8001064C 24010003 */  addiu       $at, $zero, 0x3
/* 011250 80010650 000A5880 */  sll         $t3, $t2, 2
/* 011254 80010654 016A5823 */  subu        $t3, $t3, $t2
/* 011258 80010658 000B5940 */  sll         $t3, $t3, 5
/* 01125C 8001065C 012B1821 */  addu        $v1, $t1, $t3
/* 011260 80010660 8C6C0014 */  lw          $t4, 0x14($v1)
/* 011264 80010664 24630004 */  addiu       $v1, $v1, 0x4
/* 011268 80010668 55810003 */  bnel        $t4, $at, .L80010678
/* 01126C 8001066C 8D010000 */   lw         $at, 0x0($t0)
/* 011270 80010670 AC600010 */  sw          $zero, 0x10($v1)
/* 011274 80010674 8D010000 */  lw          $at, 0x0($t0)
.L80010678:
/* 011278 80010678 AC61001C */  sw          $at, 0x1C($v1)
/* 01127C 8001067C 8D0E0004 */  lw          $t6, 0x4($t0)
/* 011280 80010680 AC6E0020 */  sw          $t6, 0x20($v1)
/* 011284 80010684 8D010008 */  lw          $at, 0x8($t0)
/* 011288 80010688 AC610024 */  sw          $at, 0x24($v1)
/* 01128C 8001068C 8D0E000C */  lw          $t6, 0xC($t0)
/* 011290 80010690 AC700018 */  sw          $s0, 0x18($v1)
/* 011294 80010694 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011298 80010698 AC6E0028 */  sw          $t6, 0x28($v1)
/* 01129C 8001069C 8D020000 */  lw          $v0, 0x0($t0)
/* 0112A0 800106A0 8D060004 */  lw          $a2, 0x4($t0)
/* 0112A4 800106A4 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 0112A8 800106A8 00023900 */  sll         $a3, $v0, 4
/* 0112AC 800106AC 00077F82 */  srl         $t7, $a3, 30
/* 0112B0 800106B0 000FC600 */  sll         $t8, $t7, 24
/* 0112B4 800106B4 00183E03 */  sra         $a3, $t8, 24
/* 0112B8 800106B8 AFA80024 */  sw          $t0, 0x24($sp)
/* 0112BC 800106BC AFA30020 */  sw          $v1, 0x20($sp)
/* 0112C0 800106C0 8FA50028 */  lw          $a1, 0x28($sp)
/* 0112C4 800106C4 0C0036F9 */  jal         AudioHeap_AllocTemporarySampleCache
/* 0112C8 800106C8 00412024 */   and        $a0, $v0, $at
/* 0112CC 800106CC 8FA30020 */  lw          $v1, 0x20($sp)
/* 0112D0 800106D0 8FA80024 */  lw          $t0, 0x24($sp)
/* 0112D4 800106D4 3C098014 */  lui         $t1, %hi(D_80146D90)
/* 0112D8 800106D8 25296D90 */  addiu       $t1, $t1, %lo(D_80146D90)
/* 0112DC 800106DC 14400010 */  bnez        $v0, .L80010720
/* 0112E0 800106E0 AC620008 */   sw         $v0, 0x8($v1)
/* 0112E4 800106E4 8D020000 */  lw          $v0, 0x0($t0)
/* 0112E8 800106E8 24010001 */  addiu       $at, $zero, 0x1
/* 0112EC 800106EC 00025100 */  sll         $t2, $v0, 4
/* 0112F0 800106F0 000A5F82 */  srl         $t3, $t2, 30
/* 0112F4 800106F4 11610004 */  beq         $t3, $at, .L80010708
/* 0112F8 800106F8 00026702 */   srl        $t4, $v0, 28
/* 0112FC 800106FC 24010002 */  addiu       $at, $zero, 0x2
/* 011300 80010700 15810004 */  bne         $t4, $at, .L80010714
/* 011304 80010704 240D0003 */   addiu      $t5, $zero, 0x3
.L80010708:
/* 011308 80010708 A2000000 */  sb          $zero, 0x0($s0)
/* 01130C 8001070C 1000001E */  b           .L80010788
/* 011310 80010710 2402FFFF */   addiu      $v0, $zero, -0x1
.L80010714:
/* 011314 80010714 A20D0000 */  sb          $t5, 0x0($s0)
/* 011318 80010718 1000001B */  b           .L80010788
/* 01131C 8001071C 2402FFFF */   addiu      $v0, $zero, -0x1
.L80010720:
/* 011320 80010720 240E0001 */  addiu       $t6, $zero, 0x1
/* 011324 80010724 AC6E0010 */  sw          $t6, 0x10($v1)
/* 011328 80010728 8D0F0000 */  lw          $t7, 0x0($t0)
/* 01132C 8001072C 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011330 80010730 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 011334 80010734 01E1C024 */  and         $t8, $t7, $at
/* 011338 80010738 8C6B0008 */  lw          $t3, 0x8($v1)
/* 01133C 8001073C 2719000F */  addiu       $t9, $t8, 0xF
/* 011340 80010740 2401FFF0 */  addiu       $at, $zero, -0x10
/* 011344 80010744 03215024 */  and         $t2, $t9, $at
/* 011348 80010748 AC6A0014 */  sw          $t2, 0x14($v1)
/* 01134C 8001074C AC6B000C */  sw          $t3, 0xC($v1)
/* 011350 80010750 8D0C0004 */  lw          $t4, 0x4($t0)
/* 011354 80010754 00001025 */  or          $v0, $zero, $zero
/* 011358 80010758 AC6C0004 */  sw          $t4, 0x4($v1)
/* 01135C 8001075C 8D0D0000 */  lw          $t5, 0x0($t0)
/* 011360 80010760 000D7100 */  sll         $t6, $t5, 4
/* 011364 80010764 000E7F82 */  srl         $t7, $t6, 30
/* 011368 80010768 A06F0000 */  sb          $t7, 0x0($v1)
/* 01136C 8001076C 8FB80028 */  lw          $t8, 0x28($sp)
/* 011370 80010770 A0780001 */  sb          $t8, 0x1($v1)
/* 011374 80010774 93B9002F */  lbu         $t9, 0x2F($sp)
/* 011378 80010778 A0790002 */  sb          $t9, 0x2($v1)
/* 01137C 8001077C 8D2A0000 */  lw          $t2, 0x0($t1)
/* 011380 80010780 394B0001 */  xori        $t3, $t2, 0x1
/* 011384 80010784 AD2B0000 */  sw          $t3, 0x0($t1)
.L80010788:
/* 011388 80010788 8FBF001C */  lw          $ra, 0x1C($sp)
/* 01138C 8001078C 8FB00018 */  lw          $s0, 0x18($sp)
/* 011390 80010790 27BD0028 */  addiu       $sp, $sp, 0x28
/* 011394 80010794 03E00008 */  jr          $ra
/* 011398 80010798 00000000 */   nop
glabel func_8001079C
/* 01139C 8001079C 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 0113A0 800107A0 28A10080 */  slti        $at, $a1, 0x80
/* 0113A4 800107A4 AFBF0014 */  sw          $ra, 0x14($sp)
/* 0113A8 800107A8 10200009 */  beqz        $at, .L800107D0
/* 0113AC 800107AC 00A03025 */   or         $a2, $a1, $zero
/* 0113B0 800107B0 0C004753 */  jal         func_80011D4C
/* 0113B4 800107B4 00000000 */   nop
/* 0113B8 800107B8 14400003 */  bnez        $v0, .L800107C8
/* 0113BC 800107BC 00000000 */   nop
/* 0113C0 800107C0 1000000B */  b           .L800107F0
/* 0113C4 800107C4 00001025 */   or         $v0, $zero, $zero
.L800107C8:
/* 0113C8 800107C8 10000008 */  b           .L800107EC
/* 0113CC 800107CC 8C430010 */   lw         $v1, 0x10($v0)
.L800107D0:
/* 0113D0 800107D0 0C00477F */  jal         func_80011DFC
/* 0113D4 800107D4 24C5FF80 */   addiu      $a1, $a2, -0x80
/* 0113D8 800107D8 54400004 */  bnel        $v0, $zero, .L800107EC
/* 0113DC 800107DC 8C430004 */   lw         $v1, 0x4($v0)
/* 0113E0 800107E0 10000003 */  b           .L800107F0
/* 0113E4 800107E4 00001025 */   or         $v0, $zero, $zero
/* 0113E8 800107E8 8C430004 */  lw          $v1, 0x4($v0)
.L800107EC:
/* 0113EC 800107EC 00601025 */  or          $v0, $v1, $zero
.L800107F0:
/* 0113F0 800107F0 8FBF0014 */  lw          $ra, 0x14($sp)
/* 0113F4 800107F4 27BD0018 */  addiu       $sp, $sp, 0x18
/* 0113F8 800107F8 03E00008 */  jr          $ra
/* 0113FC 800107FC 00000000 */   nop
/* 011400 80010800 03E00008 */  jr          $ra
/* 011404 80010804 00000000 */   nop
glabel func_80010808
/* 011408 80010808 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* 01140C 8001080C AFBF0014 */  sw          $ra, 0x14($sp)
/* 011410 80010810 00803025 */  or          $a2, $a0, $zero
/* 011414 80010814 90C50002 */  lbu         $a1, 0x2($a2)
/* 011418 80010818 90840001 */  lbu         $a0, 0x1($a0)
/* 01141C 8001081C 0C0041E7 */  jal         func_8001079C
/* 011420 80010820 AFA60018 */   sw         $a2, 0x18($sp)
/* 011424 80010824 1040000E */  beqz        $v0, .L80010860
/* 011428 80010828 8FA60018 */   lw         $a2, 0x18($sp)
/* 01142C 8001082C 8C410000 */  lw          $at, 0x0($v0)
/* 011430 80010830 8CD8000C */  lw          $t8, 0xC($a2)
/* 011434 80010834 ACC1001C */  sw          $at, 0x1C($a2)
/* 011438 80010838 8C4F0004 */  lw          $t7, 0x4($v0)
/* 01143C 8001083C ACCF0020 */  sw          $t7, 0x20($a2)
/* 011440 80010840 8C410008 */  lw          $at, 0x8($v0)
/* 011444 80010844 ACC10024 */  sw          $at, 0x24($a2)
/* 011448 80010848 8C4F000C */  lw          $t7, 0xC($v0)
/* 01144C 8001084C ACCF0028 */  sw          $t7, 0x28($a2)
/* 011450 80010850 90590000 */  lbu         $t9, 0x0($v0)
/* 011454 80010854 AC580004 */  sw          $t8, 0x4($v0)
/* 011458 80010858 3328FFF3 */  andi        $t0, $t9, 0xFFF3
/* 01145C 8001085C A0480000 */  sb          $t0, 0x0($v0)
.L80010860:
/* 011460 80010860 8FBF0014 */  lw          $ra, 0x14($sp)
/* 011464 80010864 27BD0018 */  addiu       $sp, $sp, 0x18
/* 011468 80010868 03E00008 */  jr          $ra
/* 01146C 8001086C 00000000 */   nop
glabel func_80010870
/* 011470 80010870 27BDFFC0 */  addiu       $sp, $sp, -0x40
/* 011474 80010874 AFB70034 */  sw          $s7, 0x34($sp)
/* 011478 80010878 AFB60030 */  sw          $s6, 0x30($sp)
/* 01147C 8001087C AFB20020 */  sw          $s2, 0x20($sp)
/* 011480 80010880 AFBE0038 */  sw          $fp, 0x38($sp)
/* 011484 80010884 AFB5002C */  sw          $s5, 0x2C($sp)
/* 011488 80010888 AFB40028 */  sw          $s4, 0x28($sp)
/* 01148C 8001088C AFB30024 */  sw          $s3, 0x24($sp)
/* 011490 80010890 3C168015 */  lui         $s6, %hi(D_80155C64)
/* 011494 80010894 3C128014 */  lui         $s2, %hi(D_80146D90)
/* 011498 80010898 3C178014 */  lui         $s7, %hi(D_80146E50)
/* 01149C 8001089C 0080F025 */  or          $fp, $a0, $zero
/* 0114A0 800108A0 AFBF003C */  sw          $ra, 0x3C($sp)
/* 0114A4 800108A4 AFB1001C */  sw          $s1, 0x1C($sp)
/* 0114A8 800108A8 AFB00018 */  sw          $s0, 0x18($sp)
/* 0114AC 800108AC 8ED65C64 */  lw          $s6, %lo(D_80155C64)($s6)
/* 0114B0 800108B0 26F76E50 */  addiu       $s7, $s7, %lo(D_80146E50)
/* 0114B4 800108B4 26526D90 */  addiu       $s2, $s2, %lo(D_80146D90)
/* 0114B8 800108B8 24130001 */  addiu       $s3, $zero, 0x1
/* 0114BC 800108BC 24140002 */  addiu       $s4, $zero, 0x2
/* 0114C0 800108C0 24150003 */  addiu       $s5, $zero, 0x3
/* 0114C4 800108C4 8E420014 */  lw          $v0, 0x14($s2)
.L800108C8:
/* 0114C8 800108C8 5053000C */  beql        $v0, $s3, .L800108FC
/* 0114CC 800108CC 26500004 */   addiu      $s0, $s2, 0x4
/* 0114D0 800108D0 1454003B */  bne         $v0, $s4, .L800109C0
/* 0114D4 800108D4 26500004 */   addiu      $s0, $s2, 0x4
/* 0114D8 800108D8 2604002C */  addiu       $a0, $s0, 0x2C
/* 0114DC 800108DC 00002825 */  or          $a1, $zero, $zero
/* 0114E0 800108E0 0C008178 */  jal         osRecvMesg
/* 0114E4 800108E4 02603025 */   or         $a2, $s3, $zero
/* 0114E8 800108E8 53C00004 */  beql        $fp, $zero, .L800108FC
/* 0114EC 800108EC 26500004 */   addiu      $s0, $s2, 0x4
/* 0114F0 800108F0 10000033 */  b           .L800109C0
/* 0114F4 800108F4 AE150010 */   sw         $s5, 0x10($s0)
/* 0114F8 800108F8 26500004 */  addiu       $s0, $s2, 0x4
.L800108FC:
/* 0114FC 800108FC 8E110014 */  lw          $s1, 0x14($s0)
/* 011500 80010900 AE140010 */  sw          $s4, 0x10($s0)
/* 011504 80010904 16200007 */  bnez        $s1, .L80010924
/* 011508 80010908 2A211000 */   slti       $at, $s1, 0x1000
/* 01150C 8001090C 0C004202 */  jal         func_80010808
/* 011510 80010910 02002025 */   or         $a0, $s0, $zero
/* 011514 80010914 8E0E0018 */  lw          $t6, 0x18($s0)
/* 011518 80010918 AE150010 */  sw          $s5, 0x10($s0)
/* 01151C 8001091C 10000028 */  b           .L800109C0
/* 011520 80010920 A1D30000 */   sb         $s3, 0x0($t6)
.L80010924:
/* 011524 80010924 50200011 */  beql        $at, $zero, .L8001096C
/* 011528 80010928 92180000 */   lbu        $t8, 0x0($s0)
/* 01152C 8001092C 920F0000 */  lbu         $t7, 0x0($s0)
/* 011530 80010930 02203025 */  or          $a2, $s1, $zero
/* 011534 80010934 02002025 */  or          $a0, $s0, $zero
/* 011538 80010938 166F0007 */  bne         $s3, $t7, .L80010958
/* 01153C 8001093C 00000000 */   nop
/* 011540 80010940 8E040004 */  lw          $a0, 0x4($s0)
/* 011544 80010944 8E050008 */  lw          $a1, 0x8($s0)
/* 011548 80010948 0C0042A0 */  jal         func_80010A80
/* 01154C 8001094C 86C70002 */   lh         $a3, 0x2($s6)
/* 011550 80010950 10000003 */  b           .L80010960
/* 011554 80010954 00000000 */   nop
.L80010958:
/* 011558 80010958 0C00427F */  jal         func_800109FC
/* 01155C 8001095C 02202825 */   or         $a1, $s1, $zero
.L80010960:
/* 011560 80010960 10000017 */  b           .L800109C0
/* 011564 80010964 AE000014 */   sw         $zero, 0x14($s0)
/* 011568 80010968 92180000 */  lbu         $t8, 0x0($s0)
.L8001096C:
/* 01156C 8001096C 24061000 */  addiu       $a2, $zero, 0x1000
/* 011570 80010970 02002025 */  or          $a0, $s0, $zero
/* 011574 80010974 16780007 */  bne         $s3, $t8, .L80010994
/* 011578 80010978 00000000 */   nop
/* 01157C 8001097C 8E040004 */  lw          $a0, 0x4($s0)
/* 011580 80010980 8E050008 */  lw          $a1, 0x8($s0)
/* 011584 80010984 0C0042A0 */  jal         func_80010A80
/* 011588 80010988 86C70002 */   lh         $a3, 0x2($s6)
/* 01158C 8001098C 10000004 */  b           .L800109A0
/* 011590 80010990 8E190014 */   lw         $t9, 0x14($s0)
.L80010994:
/* 011594 80010994 0C00427F */  jal         func_800109FC
/* 011598 80010998 24051000 */   addiu      $a1, $zero, 0x1000
/* 01159C 8001099C 8E190014 */  lw          $t9, 0x14($s0)
.L800109A0:
/* 0115A0 800109A0 8E090008 */  lw          $t1, 0x8($s0)
/* 0115A4 800109A4 8E0B0004 */  lw          $t3, 0x4($s0)
/* 0115A8 800109A8 2728F000 */  addiu       $t0, $t9, -0x1000
/* 0115AC 800109AC 252A1000 */  addiu       $t2, $t1, 0x1000
/* 0115B0 800109B0 256C1000 */  addiu       $t4, $t3, 0x1000
/* 0115B4 800109B4 AE080014 */  sw          $t0, 0x14($s0)
/* 0115B8 800109B8 AE0A0008 */  sw          $t2, 0x8($s0)
/* 0115BC 800109BC AE0C0004 */  sw          $t4, 0x4($s0)
.L800109C0:
/* 0115C0 800109C0 26520060 */  addiu       $s2, $s2, 0x60
/* 0115C4 800109C4 5657FFC0 */  bnel        $s2, $s7, .L800108C8
/* 0115C8 800109C8 8E420014 */   lw         $v0, 0x14($s2)
/* 0115CC 800109CC 8FBF003C */  lw          $ra, 0x3C($sp)
/* 0115D0 800109D0 8FB00018 */  lw          $s0, 0x18($sp)
/* 0115D4 800109D4 8FB1001C */  lw          $s1, 0x1C($sp)
/* 0115D8 800109D8 8FB20020 */  lw          $s2, 0x20($sp)
/* 0115DC 800109DC 8FB30024 */  lw          $s3, 0x24($sp)
/* 0115E0 800109E0 8FB40028 */  lw          $s4, 0x28($sp)
/* 0115E4 800109E4 8FB5002C */  lw          $s5, 0x2C($sp)
/* 0115E8 800109E8 8FB60030 */  lw          $s6, 0x30($sp)
/* 0115EC 800109EC 8FB70034 */  lw          $s7, 0x34($sp)
/* 0115F0 800109F0 8FBE0038 */  lw          $fp, 0x38($sp)
/* 0115F4 800109F4 03E00008 */  jr          $ra
/* 0115F8 800109F8 27BD0040 */   addiu      $sp, $sp, 0x40
glabel func_800109FC
/* 0115FC 800109FC 27BDFFC0 */  addiu       $sp, $sp, -0x40
/* 011600 80010A00 AFB00030 */  sw          $s0, 0x30($sp)
/* 011604 80010A04 00808025 */  or          $s0, $a0, $zero
/* 011608 80010A08 AFBF0034 */  sw          $ra, 0x34($sp)
/* 01160C 80010A0C AFA50044 */  sw          $a1, 0x44($sp)
/* 011610 80010A10 0C0085D0 */  jal         osInvalDCache
/* 011614 80010A14 8C840008 */   lw         $a0, 0x8($a0)
/* 011618 80010A18 2604002C */  addiu       $a0, $s0, 0x2C
/* 01161C 80010A1C AFA4003C */  sw          $a0, 0x3C($sp)
/* 011620 80010A20 26050044 */  addiu       $a1, $s0, 0x44
/* 011624 80010A24 0C00873C */  jal         osCreateMesgQueue
/* 011628 80010A28 24060001 */   addiu      $a2, $zero, 0x1
/* 01162C 80010A2C 8E0E0008 */  lw          $t6, 0x8($s0)
/* 011630 80010A30 8FAF0044 */  lw          $t7, 0x44($sp)
/* 011634 80010A34 8FB8003C */  lw          $t8, 0x3C($sp)
/* 011638 80010A38 8E070004 */  lw          $a3, 0x4($s0)
/* 01163C 80010A3C AFAE0010 */  sw          $t6, 0x10($sp)
/* 011640 80010A40 AFAF0014 */  sw          $t7, 0x14($sp)
/* 011644 80010A44 AFB80018 */  sw          $t8, 0x18($sp)
/* 011648 80010A48 92190000 */  lbu         $t9, 0x0($s0)
/* 01164C 80010A4C 3C08800C */  lui         $t0, %hi(D_800C52F4)
/* 011650 80010A50 250852F4 */  addiu       $t0, $t0, %lo(D_800C52F4)
/* 011654 80010A54 AFA80020 */  sw          $t0, 0x20($sp)
/* 011658 80010A58 26040048 */  addiu       $a0, $s0, 0x48
/* 01165C 80010A5C 00002825 */  or          $a1, $zero, $zero
/* 011660 80010A60 00003025 */  or          $a2, $zero, $zero
/* 011664 80010A64 0C003EEA */  jal         func_8000FBA8
/* 011668 80010A68 AFB9001C */   sw         $t9, 0x1C($sp)
/* 01166C 80010A6C 8FBF0034 */  lw          $ra, 0x34($sp)
/* 011670 80010A70 8FB00030 */  lw          $s0, 0x30($sp)
/* 011674 80010A74 27BD0040 */  addiu       $sp, $sp, 0x40
/* 011678 80010A78 03E00008 */  jr          $ra
/* 01167C 80010A7C 00000000 */   nop
glabel func_80010A80
/* 011680 80010A80 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 011684 80010A84 AFA40020 */  sw          $a0, 0x20($sp)
/* 011688 80010A88 AFA4001C */  sw          $a0, 0x1C($sp)
/* 01168C 80010A8C AFBF0014 */  sw          $ra, 0x14($sp)
/* 011690 80010A90 AFA50024 */  sw          $a1, 0x24($sp)
/* 011694 80010A94 00A02025 */  or          $a0, $a1, $zero
/* 011698 80010A98 AFA60028 */  sw          $a2, 0x28($sp)
/* 01169C 80010A9C AFA7002C */  sw          $a3, 0x2C($sp)
/* 0116A0 80010AA0 0C0085D0 */  jal         osInvalDCache
/* 0116A4 80010AA4 00C02825 */   or         $a1, $a2, $zero
/* 0116A8 80010AA8 8FA4002C */  lw          $a0, 0x2C($sp)
/* 0116AC 80010AAC 0C003F1F */  jal         func_8000FC7C
/* 0116B0 80010AB0 27A5001C */   addiu      $a1, $sp, 0x1C
/* 0116B4 80010AB4 00402025 */  or          $a0, $v0, $zero
/* 0116B8 80010AB8 8FA5001C */  lw          $a1, 0x1C($sp)
/* 0116BC 80010ABC 8FA60024 */  lw          $a2, 0x24($sp)
/* 0116C0 80010AC0 0C003F23 */  jal         func_8000FC8C
/* 0116C4 80010AC4 8FA70028 */   lw         $a3, 0x28($sp)
/* 0116C8 80010AC8 8FBF0014 */  lw          $ra, 0x14($sp)
/* 0116CC 80010ACC 27BD0020 */  addiu       $sp, $sp, 0x20
/* 0116D0 80010AD0 03E00008 */  jr          $ra
/* 0116D4 80010AD4 00000000 */   nop
glabel func_80010AD8
/* 0116D8 80010AD8 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 0116DC 80010ADC 3C028015 */  lui         $v0, %hi(D_80153D08)
/* 0116E0 80010AE0 3C038015 */  lui         $v1, %hi(D_80154248)
/* 0116E4 80010AE4 AFBF0014 */  sw          $ra, 0x14($sp)
/* 0116E8 80010AE8 AFA40020 */  sw          $a0, 0x20($sp)
/* 0116EC 80010AEC 24634248 */  addiu       $v1, $v1, %lo(D_80154248)
/* 0116F0 80010AF0 24423D08 */  addiu       $v0, $v0, %lo(D_80153D08)
/* 0116F4 80010AF4 804E0000 */  lb          $t6, 0x0($v0)
.L80010AF8:
/* 0116F8 80010AF8 55C00004 */  bnel        $t6, $zero, .L80010B0C
/* 0116FC 80010AFC 24420054 */   addiu      $v0, $v0, 0x54
/* 011700 80010B00 10000005 */  b           .L80010B18
/* 011704 80010B04 00401825 */   or         $v1, $v0, $zero
/* 011708 80010B08 24420054 */  addiu       $v0, $v0, 0x54
.L80010B0C:
/* 01170C 80010B0C 5443FFFA */  bnel        $v0, $v1, .L80010AF8
/* 011710 80010B10 804E0000 */   lb         $t6, 0x0($v0)
/* 011714 80010B14 8FA3001C */  lw          $v1, 0x1C($sp)
.L80010B18:
/* 011718 80010B18 3C0F8015 */  lui         $t7, %hi(D_80154248)
/* 01171C 80010B1C 25EF4248 */  addiu       $t7, $t7, %lo(D_80154248)
/* 011720 80010B20 144F0003 */  bne         $v0, $t7, .L80010B30
/* 011724 80010B24 8FA40030 */   lw         $a0, 0x30($sp)
/* 011728 80010B28 1000002D */  b           .L80010BE0
/* 01172C 80010B2C 00001025 */   or         $v0, $zero, $zero
.L80010B30:
/* 011730 80010B30 24180001 */  addiu       $t8, $zero, 0x1
/* 011734 80010B34 A0780000 */  sb          $t8, 0x0($v1)
/* 011738 80010B38 8FB90020 */  lw          $t9, 0x20($sp)
/* 01173C 80010B3C AC650004 */  sw          $a1, 0x4($v1)
/* 011740 80010B40 AC65000C */  sw          $a1, 0xC($v1)
/* 011744 80010B44 AC660010 */  sw          $a2, 0x10($v1)
/* 011748 80010B48 14800004 */  bnez        $a0, .L80010B5C
/* 01174C 80010B4C AC790008 */   sw         $t9, 0x8($v1)
/* 011750 80010B50 24081000 */  addiu       $t0, $zero, 0x1000
/* 011754 80010B54 10000015 */  b           .L80010BAC
/* 011758 80010B58 AC680014 */   sw         $t0, 0x14($v1)
.L80010B5C:
/* 01175C 80010B5C 00C4001A */  div         $zero, $a2, $a0
/* 011760 80010B60 14800002 */  bnez        $a0, .L80010B6C
/* 011764 80010B64 00000000 */   nop
/* 011768 80010B68 0007000D */  break       7
.L80010B6C:
/* 01176C 80010B6C 2401FFFF */  addiu       $at, $zero, -0x1
/* 011770 80010B70 14810004 */  bne         $a0, $at, .L80010B84
/* 011774 80010B74 3C018000 */   lui        $at, (0x80000000 >> 16)
/* 011778 80010B78 14C10002 */  bne         $a2, $at, .L80010B84
/* 01177C 80010B7C 00000000 */   nop
/* 011780 80010B80 0006000D */  break       6
.L80010B84:
/* 011784 80010B84 00001012 */  mflo        $v0
/* 011788 80010B88 244200FF */  addiu       $v0, $v0, 0xFF
/* 01178C 80010B8C 2401FF00 */  addiu       $at, $zero, -0x100
/* 011790 80010B90 00414824 */  and         $t1, $v0, $at
/* 011794 80010B94 2D210100 */  sltiu       $at, $t1, 0x100
/* 011798 80010B98 01201025 */  or          $v0, $t1, $zero
/* 01179C 80010B9C 10200003 */  beqz        $at, .L80010BAC
/* 0117A0 80010BA0 AC690014 */   sw         $t1, 0x14($v1)
/* 0117A4 80010BA4 240A0100 */  addiu       $t2, $zero, 0x100
/* 0117A8 80010BA8 AC6A0014 */  sw          $t2, 0x14($v1)
.L80010BAC:
/* 0117AC 80010BAC 8FAB0034 */  lw          $t3, 0x34($sp)
/* 0117B0 80010BB0 240C0003 */  addiu       $t4, $zero, 0x3
/* 0117B4 80010BB4 A06C0001 */  sb          $t4, 0x1($v1)
/* 0117B8 80010BB8 A0670002 */  sb          $a3, 0x2($v1)
/* 0117BC 80010BBC AC6B001C */  sw          $t3, 0x1C($v1)
/* 0117C0 80010BC0 8FAD0038 */  lw          $t5, 0x38($sp)
/* 0117C4 80010BC4 24640020 */  addiu       $a0, $v1, 0x20
/* 0117C8 80010BC8 24650038 */  addiu       $a1, $v1, 0x38
/* 0117CC 80010BCC AC6D0018 */  sw          $t5, 0x18($v1)
/* 0117D0 80010BD0 AFA3001C */  sw          $v1, 0x1C($sp)
/* 0117D4 80010BD4 0C00873C */  jal         osCreateMesgQueue
/* 0117D8 80010BD8 24060001 */   addiu      $a2, $zero, 0x1
/* 0117DC 80010BDC 8FA2001C */  lw          $v0, 0x1C($sp)
.L80010BE0:
/* 0117E0 80010BE0 8FBF0014 */  lw          $ra, 0x14($sp)
/* 0117E4 80010BE4 27BD0020 */  addiu       $sp, $sp, 0x20
/* 0117E8 80010BE8 03E00008 */  jr          $ra
/* 0117EC 80010BEC 00000000 */   nop
glabel func_80010BF0
/* 0117F0 80010BF0 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* 0117F4 80010BF4 AFB30020 */  sw          $s3, 0x20($sp)
/* 0117F8 80010BF8 AFB00014 */  sw          $s0, 0x14($sp)
/* 0117FC 80010BFC AFB2001C */  sw          $s2, 0x1C($sp)
/* 011800 80010C00 AFB10018 */  sw          $s1, 0x18($sp)
/* 011804 80010C04 3C108015 */  lui         $s0, %hi(D_80153D08)
/* 011808 80010C08 3C138015 */  lui         $s3, %hi(D_80154248)
/* 01180C 80010C0C 00808825 */  or          $s1, $a0, $zero
/* 011810 80010C10 AFBF0024 */  sw          $ra, 0x24($sp)
/* 011814 80010C14 26734248 */  addiu       $s3, $s3, %lo(D_80154248)
/* 011818 80010C18 26103D08 */  addiu       $s0, $s0, %lo(D_80153D08)
/* 01181C 80010C1C 24120001 */  addiu       $s2, $zero, 0x1
/* 011820 80010C20 820E0000 */  lb          $t6, 0x0($s0)
.L80010C24:
/* 011824 80010C24 02002025 */  or          $a0, $s0, $zero
/* 011828 80010C28 564E0004 */  bnel        $s2, $t6, .L80010C3C
/* 01182C 80010C2C 26100054 */   addiu      $s0, $s0, 0x54
/* 011830 80010C30 0C004318 */  jal         func_80010C60
/* 011834 80010C34 02202825 */   or         $a1, $s1, $zero
/* 011838 80010C38 26100054 */  addiu       $s0, $s0, 0x54
.L80010C3C:
/* 01183C 80010C3C 5613FFF9 */  bnel        $s0, $s3, .L80010C24
/* 011840 80010C40 820E0000 */   lb         $t6, 0x0($s0)
/* 011844 80010C44 8FBF0024 */  lw          $ra, 0x24($sp)
/* 011848 80010C48 8FB00014 */  lw          $s0, 0x14($sp)
/* 01184C 80010C4C 8FB10018 */  lw          $s1, 0x18($sp)
/* 011850 80010C50 8FB2001C */  lw          $s2, 0x1C($sp)
/* 011854 80010C54 8FB30020 */  lw          $s3, 0x20($sp)
/* 011858 80010C58 03E00008 */  jr          $ra
/* 01185C 80010C5C 27BD0028 */   addiu      $sp, $sp, 0x28
glabel func_80010C60
/* 011860 80010C60 27BDFFA0 */  addiu       $sp, $sp, -0x60
/* 011864 80010C64 AFBF001C */  sw          $ra, 0x1C($sp)
/* 011868 80010C68 AFB00018 */  sw          $s0, 0x18($sp)
/* 01186C 80010C6C 80820001 */  lb          $v0, 0x1($a0)
/* 011870 80010C70 3C038015 */  lui         $v1, %hi(D_80155C64)
/* 011874 80010C74 00808025 */  or          $s0, $a0, $zero
/* 011878 80010C78 28410002 */  slti        $at, $v0, 0x2
/* 01187C 80010C7C 14200004 */  bnez        $at, .L80010C90
/* 011880 80010C80 8C635C64 */   lw         $v1, %lo(D_80155C64)($v1)
/* 011884 80010C84 244EFFFF */  addiu       $t6, $v0, -0x1
/* 011888 80010C88 10000097 */  b           .L80010EE8
/* 01188C 80010C8C A08E0001 */   sb         $t6, 0x1($a0)
.L80010C90:
/* 011890 80010C90 24070001 */  addiu       $a3, $zero, 0x1
/* 011894 80010C94 14E20003 */  bne         $a3, $v0, .L80010CA4
/* 011898 80010C98 00000000 */   nop
/* 01189C 80010C9C 10000011 */  b           .L80010CE4
/* 0118A0 80010CA0 A2000001 */   sb         $zero, 0x1($s0)
.L80010CA4:
/* 0118A4 80010CA4 10A00007 */  beqz        $a1, .L80010CC4
/* 0118A8 80010CA8 26040020 */   addiu      $a0, $s0, 0x20
/* 0118AC 80010CAC 26040020 */  addiu       $a0, $s0, 0x20
/* 0118B0 80010CB0 00002825 */  or          $a1, $zero, $zero
/* 0118B4 80010CB4 0C008178 */  jal         osRecvMesg
/* 0118B8 80010CB8 24060001 */   addiu      $a2, $zero, 0x1
/* 0118BC 80010CBC 1000008A */  b           .L80010EE8
/* 0118C0 80010CC0 A2000000 */   sb         $zero, 0x0($s0)
.L80010CC4:
/* 0118C4 80010CC4 00002825 */  or          $a1, $zero, $zero
/* 0118C8 80010CC8 00003025 */  or          $a2, $zero, $zero
/* 0118CC 80010CCC 0C008178 */  jal         osRecvMesg
/* 0118D0 80010CD0 AFA3005C */   sw         $v1, 0x5C($sp)
/* 0118D4 80010CD4 2401FFFF */  addiu       $at, $zero, -0x1
/* 0118D8 80010CD8 8FA3005C */  lw          $v1, 0x5C($sp)
/* 0118DC 80010CDC 10410082 */  beq         $v0, $at, .L80010EE8
/* 0118E0 80010CE0 24070001 */   addiu      $a3, $zero, 0x1
.L80010CE4:
/* 0118E4 80010CE4 8E0F0010 */  lw          $t7, 0x10($s0)
/* 0118E8 80010CE8 15E00055 */  bnez        $t7, .L80010E40
/* 0118EC 80010CEC AFAF0024 */   sw         $t7, 0x24($sp)
/* 0118F0 80010CF0 8E050018 */  lw          $a1, 0x18($s0)
/* 0118F4 80010CF4 3C0A8015 */  lui         $t2, %hi(D_8014D428)
/* 0118F8 80010CF8 254AD428 */  addiu       $t2, $t2, %lo(D_8014D428)
/* 0118FC 80010CFC 00051C02 */  srl         $v1, $a1, 16
/* 011900 80010D00 307900FF */  andi        $t9, $v1, 0xFF
/* 011904 80010D04 13200008 */  beqz        $t9, .L80010D28
/* 011908 80010D08 00A01025 */   or         $v0, $a1, $zero
/* 01190C 80010D0C 1327001B */  beq         $t9, $a3, .L80010D7C
/* 011910 80010D10 00024202 */   srl        $t0, $v0, 8
/* 011914 80010D14 24010002 */  addiu       $at, $zero, 0x2
/* 011918 80010D18 1321000D */  beq         $t9, $at, .L80010D50
/* 01191C 80010D1C 00026A02 */   srl        $t5, $v0, 8
/* 011920 80010D20 10000042 */  b           .L80010E2C
/* 011924 80010D24 A2000000 */   sb         $zero, 0x0($s0)
.L80010D28:
/* 011928 80010D28 00024202 */  srl         $t0, $v0, 8
/* 01192C 80010D2C 310900FF */  andi        $t1, $t0, 0xFF
/* 011930 80010D30 012A1821 */  addu        $v1, $t1, $t2
/* 011934 80010D34 906B0000 */  lbu         $t3, 0x0($v1)
/* 011938 80010D38 24010005 */  addiu       $at, $zero, 0x5
/* 01193C 80010D3C 5161003B */  beql        $t3, $at, .L80010E2C
/* 011940 80010D40 A2000000 */   sb         $zero, 0x0($s0)
/* 011944 80010D44 A0620000 */  sb          $v0, 0x0($v1)
/* 011948 80010D48 10000037 */  b           .L80010E28
/* 01194C 80010D4C 8E050018 */   lw         $a1, 0x18($s0)
.L80010D50:
/* 011950 80010D50 3C0F8015 */  lui         $t7, %hi(D_8014D3A8)
/* 011954 80010D54 25EFD3A8 */  addiu       $t7, $t7, %lo(D_8014D3A8)
/* 011958 80010D58 31AE00FF */  andi        $t6, $t5, 0xFF
/* 01195C 80010D5C 01CF1821 */  addu        $v1, $t6, $t7
/* 011960 80010D60 90780000 */  lbu         $t8, 0x0($v1)
/* 011964 80010D64 24010005 */  addiu       $at, $zero, 0x5
/* 011968 80010D68 53010030 */  beql        $t8, $at, .L80010E2C
/* 01196C 80010D6C A2000000 */   sb         $zero, 0x0($s0)
/* 011970 80010D70 A0620000 */  sb          $v0, 0x0($v1)
/* 011974 80010D74 1000002C */  b           .L80010E28
/* 011978 80010D78 8E050018 */   lw         $a1, 0x18($s0)
.L80010D7C:
/* 01197C 80010D7C 3C0A8015 */  lui         $t2, %hi(D_8014D3E8)
/* 011980 80010D80 254AD3E8 */  addiu       $t2, $t2, %lo(D_8014D3E8)
/* 011984 80010D84 310900FF */  andi        $t1, $t0, 0xFF
/* 011988 80010D88 012A1821 */  addu        $v1, $t1, $t2
/* 01198C 80010D8C 906B0000 */  lbu         $t3, 0x0($v1)
/* 011990 80010D90 24010005 */  addiu       $at, $zero, 0x5
/* 011994 80010D94 AFA90024 */  sw          $t1, 0x24($sp)
/* 011998 80010D98 11610002 */  beq         $t3, $at, .L80010DA4
/* 01199C 80010D9C 27A5003C */   addiu      $a1, $sp, 0x3C
/* 0119A0 80010DA0 A0620000 */  sb          $v0, 0x0($v1)
.L80010DA4:
/* 0119A4 80010DA4 8FAE0024 */  lw          $t6, 0x24($sp)
/* 0119A8 80010DA8 3C0D8015 */  lui         $t5, %hi(D_80155C70)
/* 0119AC 80010DAC 8DAD5C70 */  lw          $t5, %lo(D_80155C70)($t5)
/* 0119B0 80010DB0 000E7880 */  sll         $t7, $t6, 2
/* 0119B4 80010DB4 01EE7823 */  subu        $t7, $t7, $t6
/* 0119B8 80010DB8 000F7880 */  sll         $t7, $t7, 2
/* 0119BC 80010DBC 01AF1021 */  addu        $v0, $t5, $t7
/* 0119C0 80010DC0 90440002 */  lbu         $a0, 0x2($v0)
/* 0119C4 80010DC4 90460003 */  lbu         $a2, 0x3($v0)
/* 0119C8 80010DC8 240100FF */  addiu       $at, $zero, 0xFF
/* 0119CC 80010DCC AFA4002C */  sw          $a0, 0x2C($sp)
/* 0119D0 80010DD0 10810006 */  beq         $a0, $at, .L80010DEC
/* 0119D4 80010DD4 AFA60030 */   sw         $a2, 0x30($sp)
/* 0119D8 80010DD8 0C003CE2 */  jal         func_8000F388
/* 0119DC 80010DDC AFA60044 */   sw         $a2, 0x44($sp)
/* 0119E0 80010DE0 8FA60044 */  lw          $a2, 0x44($sp)
/* 0119E4 80010DE4 10000002 */  b           .L80010DF0
/* 0119E8 80010DE8 AFA20034 */   sw         $v0, 0x34($sp)
.L80010DEC:
/* 0119EC 80010DEC AFA00034 */  sw          $zero, 0x34($sp)
.L80010DF0:
/* 0119F0 80010DF0 240100FF */  addiu       $at, $zero, 0xFF
/* 0119F4 80010DF4 10C10005 */  beq         $a2, $at, .L80010E0C
/* 0119F8 80010DF8 00C02025 */   or         $a0, $a2, $zero
/* 0119FC 80010DFC 0C003CE2 */  jal         func_8000F388
/* 011A00 80010E00 27A50040 */   addiu      $a1, $sp, 0x40
/* 011A04 80010E04 10000002 */  b           .L80010E10
/* 011A08 80010E08 AFA20038 */   sw         $v0, 0x38($sp)
.L80010E0C:
/* 011A0C 80010E0C AFA00038 */  sw          $zero, 0x38($sp)
.L80010E10:
/* 011A10 80010E10 8FA40024 */  lw          $a0, 0x24($sp)
/* 011A14 80010E14 8E050004 */  lw          $a1, 0x4($s0)
/* 011A18 80010E18 27A6002C */  addiu       $a2, $sp, 0x2C
/* 011A1C 80010E1C 0C004448 */  jal         func_80011120
/* 011A20 80010E20 24070001 */   addiu      $a3, $zero, 0x1
/* 011A24 80010E24 8E050018 */  lw          $a1, 0x18($s0)
.L80010E28:
/* 011A28 80010E28 A2000000 */  sb          $zero, 0x0($s0)
.L80010E2C:
/* 011A2C 80010E2C 8E04001C */  lw          $a0, 0x1C($s0)
/* 011A30 80010E30 0C0081C8 */  jal         osSendMesg
/* 011A34 80010E34 00003025 */   or         $a2, $zero, $zero
/* 011A38 80010E38 1000002C */  b           .L80010EEC
/* 011A3C 80010E3C 8FBF001C */   lw         $ra, 0x1C($sp)
.L80010E40:
/* 011A40 80010E40 8E060014 */  lw          $a2, 0x14($s0)
/* 011A44 80010E44 8FB80024 */  lw          $t8, 0x24($sp)
/* 011A48 80010E48 0306082B */  sltu        $at, $t8, $a2
/* 011A4C 80010E4C 50200011 */  beql        $at, $zero, .L80010E94
/* 011A50 80010E50 82080002 */   lb         $t0, 0x2($s0)
/* 011A54 80010E54 82190002 */  lb          $t9, 0x2($s0)
/* 011A58 80010E58 03003025 */  or          $a2, $t8, $zero
/* 011A5C 80010E5C 02002025 */  or          $a0, $s0, $zero
/* 011A60 80010E60 14F90007 */  bne         $a3, $t9, .L80010E80
/* 011A64 80010E64 00000000 */   nop
/* 011A68 80010E68 8E040008 */  lw          $a0, 0x8($s0)
/* 011A6C 80010E6C 8E05000C */  lw          $a1, 0xC($s0)
/* 011A70 80010E70 0C0043E3 */  jal         func_80010F8C
/* 011A74 80010E74 84670002 */   lh         $a3, 0x2($v1)
/* 011A78 80010E78 10000003 */  b           .L80010E88
/* 011A7C 80010E7C 00000000 */   nop
.L80010E80:
/* 011A80 80010E80 0C0043BF */  jal         func_80010EFC
/* 011A84 80010E84 8FA50024 */   lw         $a1, 0x24($sp)
.L80010E88:
/* 011A88 80010E88 10000017 */  b           .L80010EE8
/* 011A8C 80010E8C AE000010 */   sw         $zero, 0x10($s0)
/* 011A90 80010E90 82080002 */  lb          $t0, 0x2($s0)
.L80010E94:
/* 011A94 80010E94 02002025 */  or          $a0, $s0, $zero
/* 011A98 80010E98 14E80007 */  bne         $a3, $t0, .L80010EB8
/* 011A9C 80010E9C 00000000 */   nop
/* 011AA0 80010EA0 8E040008 */  lw          $a0, 0x8($s0)
/* 011AA4 80010EA4 8E05000C */  lw          $a1, 0xC($s0)
/* 011AA8 80010EA8 0C0043E3 */  jal         func_80010F8C
/* 011AAC 80010EAC 84670002 */   lh         $a3, 0x2($v1)
/* 011AB0 80010EB0 10000004 */  b           .L80010EC4
/* 011AB4 80010EB4 8E060014 */   lw         $a2, 0x14($s0)
.L80010EB8:
/* 011AB8 80010EB8 0C0043BF */  jal         func_80010EFC
/* 011ABC 80010EBC 00C02825 */   or         $a1, $a2, $zero
/* 011AC0 80010EC0 8E060014 */  lw          $a2, 0x14($s0)
.L80010EC4:
/* 011AC4 80010EC4 8E090010 */  lw          $t1, 0x10($s0)
/* 011AC8 80010EC8 8E0B0008 */  lw          $t3, 0x8($s0)
/* 011ACC 80010ECC 8E0E000C */  lw          $t6, 0xC($s0)
/* 011AD0 80010ED0 01265023 */  subu        $t2, $t1, $a2
/* 011AD4 80010ED4 01666021 */  addu        $t4, $t3, $a2
/* 011AD8 80010ED8 01C66821 */  addu        $t5, $t6, $a2
/* 011ADC 80010EDC AE0A0010 */  sw          $t2, 0x10($s0)
/* 011AE0 80010EE0 AE0C0008 */  sw          $t4, 0x8($s0)
/* 011AE4 80010EE4 AE0D000C */  sw          $t5, 0xC($s0)
.L80010EE8:
/* 011AE8 80010EE8 8FBF001C */  lw          $ra, 0x1C($sp)
.L80010EEC:
/* 011AEC 80010EEC 8FB00018 */  lw          $s0, 0x18($sp)
/* 011AF0 80010EF0 27BD0060 */  addiu       $sp, $sp, 0x60
/* 011AF4 80010EF4 03E00008 */  jr          $ra
/* 011AF8 80010EF8 00000000 */   nop
glabel func_80010EFC
/* 011AFC 80010EFC 27BDFFC0 */  addiu       $sp, $sp, -0x40
/* 011B00 80010F00 AFB10030 */  sw          $s1, 0x30($sp)
/* 011B04 80010F04 AFB0002C */  sw          $s0, 0x2C($sp)
/* 011B08 80010F08 24B1000F */  addiu       $s1, $a1, 0xF
/* 011B0C 80010F0C 2401FFF0 */  addiu       $at, $zero, -0x10
/* 011B10 80010F10 00808025 */  or          $s0, $a0, $zero
/* 011B14 80010F14 AFBF0034 */  sw          $ra, 0x34($sp)
/* 011B18 80010F18 02212824 */  and         $a1, $s1, $at
/* 011B1C 80010F1C 00A08825 */  or          $s1, $a1, $zero
/* 011B20 80010F20 0C0085D0 */  jal         osInvalDCache
/* 011B24 80010F24 8C84000C */   lw         $a0, 0xC($a0)
/* 011B28 80010F28 26040020 */  addiu       $a0, $s0, 0x20
/* 011B2C 80010F2C AFA4003C */  sw          $a0, 0x3C($sp)
/* 011B30 80010F30 26050038 */  addiu       $a1, $s0, 0x38
/* 011B34 80010F34 0C00873C */  jal         osCreateMesgQueue
/* 011B38 80010F38 24060001 */   addiu      $a2, $zero, 0x1
/* 011B3C 80010F3C 8E0F000C */  lw          $t7, 0xC($s0)
/* 011B40 80010F40 8FB8003C */  lw          $t8, 0x3C($sp)
/* 011B44 80010F44 8E070008 */  lw          $a3, 0x8($s0)
/* 011B48 80010F48 AFB10014 */  sw          $s1, 0x14($sp)
/* 011B4C 80010F4C AFAF0010 */  sw          $t7, 0x10($sp)
/* 011B50 80010F50 AFB80018 */  sw          $t8, 0x18($sp)
/* 011B54 80010F54 82190002 */  lb          $t9, 0x2($s0)
/* 011B58 80010F58 3C08800C */  lui         $t0, %hi(D_800C53AC)
/* 011B5C 80010F5C 250853AC */  addiu       $t0, $t0, %lo(D_800C53AC)
/* 011B60 80010F60 AFA80020 */  sw          $t0, 0x20($sp)
/* 011B64 80010F64 2604003C */  addiu       $a0, $s0, 0x3C
/* 011B68 80010F68 00002825 */  or          $a1, $zero, $zero
/* 011B6C 80010F6C 00003025 */  or          $a2, $zero, $zero
/* 011B70 80010F70 0C003EEA */  jal         func_8000FBA8
/* 011B74 80010F74 AFB9001C */   sw         $t9, 0x1C($sp)
/* 011B78 80010F78 8FBF0034 */  lw          $ra, 0x34($sp)
/* 011B7C 80010F7C 8FB0002C */  lw          $s0, 0x2C($sp)
/* 011B80 80010F80 8FB10030 */  lw          $s1, 0x30($sp)
/* 011B84 80010F84 03E00008 */  jr          $ra
/* 011B88 80010F88 27BD0040 */   addiu      $sp, $sp, 0x40
glabel func_80010F8C
/* 011B8C 80010F8C 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 011B90 80010F90 AFA40020 */  sw          $a0, 0x20($sp)
/* 011B94 80010F94 AFA4001C */  sw          $a0, 0x1C($sp)
/* 011B98 80010F98 AFBF0014 */  sw          $ra, 0x14($sp)
/* 011B9C 80010F9C AFA50024 */  sw          $a1, 0x24($sp)
/* 011BA0 80010FA0 00A02025 */  or          $a0, $a1, $zero
/* 011BA4 80010FA4 AFA60028 */  sw          $a2, 0x28($sp)
/* 011BA8 80010FA8 AFA7002C */  sw          $a3, 0x2C($sp)
/* 011BAC 80010FAC 0C0085D0 */  jal         osInvalDCache
/* 011BB0 80010FB0 00C02825 */   or         $a1, $a2, $zero
/* 011BB4 80010FB4 8FA4002C */  lw          $a0, 0x2C($sp)
/* 011BB8 80010FB8 0C003F1F */  jal         func_8000FC7C
/* 011BBC 80010FBC 27A5001C */   addiu      $a1, $sp, 0x1C
/* 011BC0 80010FC0 00402025 */  or          $a0, $v0, $zero
/* 011BC4 80010FC4 8FA5001C */  lw          $a1, 0x1C($sp)
/* 011BC8 80010FC8 8FA60024 */  lw          $a2, 0x24($sp)
/* 011BCC 80010FCC 0C003F23 */  jal         func_8000FC8C
/* 011BD0 80010FD0 8FA70028 */   lw         $a3, 0x28($sp)
/* 011BD4 80010FD4 8FBF0014 */  lw          $ra, 0x14($sp)
/* 011BD8 80010FD8 27BD0020 */  addiu       $sp, $sp, 0x20
/* 011BDC 80010FDC 03E00008 */  jr          $ra
/* 011BE0 80010FE0 00000000 */   nop
glabel func_80010FE4
/* 011BE4 80010FE4 8C820000 */  lw          $v0, 0x0($a0)
/* 011BE8 80010FE8 3C018000 */  lui         $at, (0x80000001 >> 16)
/* 011BEC 80010FEC 34210001 */  ori         $at, $at, (0x80000001 & 0xFFFF)
/* 011BF0 80010FF0 0041082B */  sltu        $at, $v0, $at
/* 011BF4 80010FF4 10200048 */  beqz        $at, .L80011118
/* 011BF8 80010FF8 00C03825 */   or         $a3, $a2, $zero
/* 011BFC 80010FFC 00451821 */  addu        $v1, $v0, $a1
/* 011C00 80011000 AC830000 */  sw          $v1, 0x0($a0)
/* 011C04 80011004 8C6E0000 */  lw          $t6, 0x0($v1)
/* 011C08 80011008 00603025 */  or          $a2, $v1, $zero
/* 011C0C 8001100C 000E7A00 */  sll         $t7, $t6, 8
/* 011C10 80011010 11E00041 */  beqz        $t7, .L80011118
/* 011C14 80011014 00000000 */   nop
/* 011C18 80011018 90780000 */  lbu         $t8, 0x0($v1)
/* 011C1C 8001101C 24040001 */  addiu       $a0, $zero, 0x1
/* 011C20 80011020 33190001 */  andi        $t9, $t8, 0x1
/* 011C24 80011024 1099003C */  beq         $a0, $t9, .L80011118
/* 011C28 80011028 00000000 */   nop
/* 011C2C 8001102C 8C680008 */  lw          $t0, 0x8($v1)
/* 011C30 80011030 8CC20000 */  lw          $v0, 0x0($a2)
/* 011C34 80011034 8CC9000C */  lw          $t1, 0xC($a2)
/* 011C38 80011038 01051821 */  addu        $v1, $t0, $a1
/* 011C3C 8001103C ACC30008 */  sw          $v1, 0x8($a2)
/* 011C40 80011040 00025100 */  sll         $t2, $v0, 4
/* 011C44 80011044 000A5F82 */  srl         $t3, $t2, 30
/* 011C48 80011048 01251821 */  addu        $v1, $t1, $a1
/* 011C4C 8001104C 11600009 */  beqz        $t3, .L80011074
/* 011C50 80011050 ACC3000C */   sw         $v1, 0xC($a2)
/* 011C54 80011054 11640013 */  beq         $t3, $a0, .L800110A4
/* 011C58 80011058 24010002 */   addiu      $at, $zero, 0x2
/* 011C5C 8001105C 1161001C */  beq         $t3, $at, .L800110D0
/* 011C60 80011060 24010003 */   addiu      $at, $zero, 0x3
/* 011C64 80011064 5161001B */  beql        $t3, $at, .L800110D4
/* 011C68 80011068 90CB0000 */   lbu        $t3, 0x0($a2)
/* 011C6C 8001106C 10000019 */  b           .L800110D4
/* 011C70 80011070 90CB0000 */   lbu        $t3, 0x0($a2)
.L80011074:
/* 011C74 80011074 8CCC0004 */  lw          $t4, 0x4($a2)
/* 011C78 80011078 8CED0008 */  lw          $t5, 0x8($a3)
/* 011C7C 8001107C 90C80000 */  lbu         $t0, 0x0($a2)
/* 011C80 80011080 018D1821 */  addu        $v1, $t4, $t5
/* 011C84 80011084 ACC30004 */  sw          $v1, 0x4($a2)
/* 011C88 80011088 8CEF0010 */  lw          $t7, 0x10($a3)
/* 011C8C 8001108C 3109FFF3 */  andi        $t1, $t0, 0xFFF3
/* 011C90 80011090 000FC080 */  sll         $t8, $t7, 2
/* 011C94 80011094 3319000C */  andi        $t9, $t8, 0xC
/* 011C98 80011098 03295025 */  or          $t2, $t9, $t1
/* 011C9C 8001109C 1000000C */  b           .L800110D0
/* 011CA0 800110A0 A0CA0000 */   sb         $t2, 0x0($a2)
.L800110A4:
/* 011CA4 800110A4 8CCB0004 */  lw          $t3, 0x4($a2)
/* 011CA8 800110A8 8CEC000C */  lw          $t4, 0xC($a3)
/* 011CAC 800110AC 90C80000 */  lbu         $t0, 0x0($a2)
/* 011CB0 800110B0 016C1821 */  addu        $v1, $t3, $t4
/* 011CB4 800110B4 ACC30004 */  sw          $v1, 0x4($a2)
/* 011CB8 800110B8 8CEE0014 */  lw          $t6, 0x14($a3)
/* 011CBC 800110BC 3119FFF3 */  andi        $t9, $t0, 0xFFF3
/* 011CC0 800110C0 000E7880 */  sll         $t7, $t6, 2
/* 011CC4 800110C4 31F8000C */  andi        $t8, $t7, 0xC
/* 011CC8 800110C8 03194825 */  or          $t1, $t8, $t9
/* 011CCC 800110CC A0C90000 */  sb          $t1, 0x0($a2)
.L800110D0:
/* 011CD0 800110D0 90CB0000 */  lbu         $t3, 0x0($a2)
.L800110D4:
/* 011CD4 800110D4 356C0001 */  ori         $t4, $t3, 0x1
/* 011CD8 800110D8 A0CC0000 */  sb          $t4, 0x0($a2)
/* 011CDC 800110DC 8CC20000 */  lw          $v0, 0x0($a2)
/* 011CE0 800110E0 00027180 */  sll         $t6, $v0, 6
/* 011CE4 800110E4 05C1000C */  bgez        $t6, .L80011118
/* 011CE8 800110E8 00027900 */   sll        $t7, $v0, 4
/* 011CEC 800110EC 000F4782 */  srl         $t0, $t7, 30
/* 011CF0 800110F0 11000009 */  beqz        $t0, .L80011118
/* 011CF4 800110F4 3C038015 */   lui        $v1, %hi(D_80153D00)
/* 011CF8 800110F8 24633D00 */  addiu       $v1, $v1, %lo(D_80153D00)
/* 011CFC 800110FC 8C620000 */  lw          $v0, 0x0($v1)
/* 011D00 80011100 3C018015 */  lui         $at, %hi(D_80153100)
/* 011D04 80011104 0002C080 */  sll         $t8, $v0, 2
/* 011D08 80011108 00380821 */  addu        $at, $at, $t8
/* 011D0C 8001110C AC263100 */  sw          $a2, %lo(D_80153100)($at)
/* 011D10 80011110 24590001 */  addiu       $t9, $v0, 0x1
/* 011D14 80011114 AC790000 */  sw          $t9, 0x0($v1)
.L80011118:
/* 011D18 80011118 03E00008 */  jr          $ra
/* 011D1C 8001111C 00000000 */   nop
glabel func_80011120
/* 011D20 80011120 27BDFF98 */  addiu       $sp, $sp, -0x68
/* 011D24 80011124 AFB5003C */  sw          $s5, 0x3C($sp)
/* 011D28 80011128 3C158015 */  lui         $s5, %hi(D_80153D04)
/* 011D2C 8001112C 26B53D04 */  addiu       $s5, $s5, %lo(D_80153D04)
/* 011D30 80011130 8EAE0000 */  lw          $t6, 0x0($s5)
/* 011D34 80011134 AFB40038 */  sw          $s4, 0x38($sp)
/* 011D38 80011138 AFB20030 */  sw          $s2, 0x30($sp)
/* 011D3C 8001113C 00C09025 */  or          $s2, $a2, $zero
/* 011D40 80011140 00E0A025 */  or          $s4, $a3, $zero
/* 011D44 80011144 AFBF0044 */  sw          $ra, 0x44($sp)
/* 011D48 80011148 AFB60040 */  sw          $s6, 0x40($sp)
/* 011D4C 8001114C AFB30034 */  sw          $s3, 0x34($sp)
/* 011D50 80011150 AFB1002C */  sw          $s1, 0x2C($sp)
/* 011D54 80011154 AFB00028 */  sw          $s0, 0x28($sp)
/* 011D58 80011158 11C00003 */  beqz        $t6, .L80011168
/* 011D5C 8001115C 00001025 */   or         $v0, $zero, $zero
/* 011D60 80011160 10000003 */  b           .L80011170
/* 011D64 80011164 24020001 */   addiu      $v0, $zero, 0x1
.L80011168:
/* 011D68 80011168 3C018014 */  lui         $at, %hi(D_80146D80)
/* 011D6C 8001116C AC206D80 */  sw          $zero, %lo(D_80146D80)($at)
.L80011170:
/* 011D70 80011170 3C018015 */  lui         $at, %hi(D_80153D00)
/* 011D74 80011174 AC203D00 */  sw          $zero, %lo(D_80153D00)($at)
/* 011D78 80011178 02403025 */  or          $a2, $s2, $zero
/* 011D7C 8001117C 0C003E19 */  jal         func_8000F864
/* 011D80 80011180 AFA2004C */   sw         $v0, 0x4C($sp)
/* 011D84 80011184 3C058015 */  lui         $a1, %hi(D_80153D00)
/* 011D88 80011188 8CA53D00 */  lw          $a1, %lo(D_80153D00)($a1)
/* 011D8C 8001118C 00002025 */  or          $a0, $zero, $zero
/* 011D90 80011190 00009825 */  or          $s3, $zero, $zero
/* 011D94 80011194 18A00011 */  blez        $a1, .L800111DC
/* 011D98 80011198 3C0F8015 */   lui        $t7, %hi(D_80153100)
/* 011D9C 8001119C 25E23100 */  addiu       $v0, $t7, %lo(D_80153100)
/* 011DA0 800111A0 0005C080 */  sll         $t8, $a1, 2
/* 011DA4 800111A4 03023021 */  addu        $a2, $t8, $v0
/* 011DA8 800111A8 2403FFF0 */  addiu       $v1, $zero, -0x10
.L800111AC:
/* 011DAC 800111AC 8C590000 */  lw          $t9, 0x0($v0)
/* 011DB0 800111B0 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011DB4 800111B4 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 011DB8 800111B8 8F2A0000 */  lw          $t2, 0x0($t9)
/* 011DBC 800111BC 24420004 */  addiu       $v0, $v0, 0x4
/* 011DC0 800111C0 01415824 */  and         $t3, $t2, $at
/* 011DC4 800111C4 256C000F */  addiu       $t4, $t3, 0xF
/* 011DC8 800111C8 0046082B */  sltu        $at, $v0, $a2
/* 011DCC 800111CC 01836824 */  and         $t5, $t4, $v1
/* 011DD0 800111D0 1420FFF6 */  bnez        $at, .L800111AC
/* 011DD4 800111D4 008D2021 */   addu       $a0, $a0, $t5
/* 011DD8 800111D8 00009825 */  or          $s3, $zero, $zero
.L800111DC:
/* 011DDC 800111DC 18A000B1 */  blez        $a1, .L800114A4
/* 011DE0 800111E0 24160001 */   addiu      $s6, $zero, 0x1
/* 011DE4 800111E4 8FB1005C */  lw          $s1, 0x5C($sp)
/* 011DE8 800111E8 8EAE0000 */  lw          $t6, 0x0($s5)
.L800111EC:
/* 011DEC 800111EC 24010078 */  addiu       $at, $zero, 0x78
/* 011DF0 800111F0 0013C080 */  sll         $t8, $s3, 2
/* 011DF4 800111F4 11C100AB */  beq         $t6, $at, .L800114A4
/* 011DF8 800111F8 3C108015 */   lui        $s0, %hi(D_80153100)
/* 011DFC 800111FC 02188021 */  addu        $s0, $s0, $t8
/* 011E00 80011200 12800005 */  beqz        $s4, .L80011218
/* 011E04 80011204 8E103100 */   lw         $s0, %lo(D_80153100)($s0)
/* 011E08 80011208 52960031 */  beql        $s4, $s6, .L800112D0
/* 011E0C 8001120C 8E420010 */   lw         $v0, 0x10($s2)
/* 011E10 80011210 1000005A */  b           .L8001137C
/* 011E14 80011214 00000000 */   nop
.L80011218:
/* 011E18 80011218 8E420010 */  lw          $v0, 0x10($s2)
/* 011E1C 8001121C 920B0000 */  lbu         $t3, 0x0($s0)
/* 011E20 80011220 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011E24 80011224 304F0003 */  andi        $t7, $v0, 0x3
/* 011E28 80011228 000FC880 */  sll         $t9, $t7, 2
/* 011E2C 8001122C 332A000C */  andi        $t2, $t9, 0xC
/* 011E30 80011230 316CFFF3 */  andi        $t4, $t3, 0xFFF3
/* 011E34 80011234 014C6825 */  or          $t5, $t2, $t4
/* 011E38 80011238 11E0000D */  beqz        $t7, .L80011270
/* 011E3C 8001123C A20D0000 */   sb         $t5, 0x0($s0)
/* 011E40 80011240 8E020000 */  lw          $v0, 0x0($s0)
/* 011E44 80011244 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 011E48 80011248 8E450000 */  lw          $a1, 0x0($s2)
/* 011E4C 8001124C 00023900 */  sll         $a3, $v0, 4
/* 011E50 80011250 00077782 */  srl         $t6, $a3, 30
/* 011E54 80011254 000EC600 */  sll         $t8, $t6, 24
/* 011E58 80011258 00183E03 */  sra         $a3, $t8, 24
/* 011E5C 8001125C 8E060004 */  lw          $a2, 0x4($s0)
/* 011E60 80011260 0C00370D */  jal         AudioHeap_AllocPersistentSampleCache
/* 011E64 80011264 00412024 */   and        $a0, $v0, $at
/* 011E68 80011268 10000044 */  b           .L8001137C
/* 011E6C 8001126C 00408825 */   or         $s1, $v0, $zero
.L80011270:
/* 011E70 80011270 8E420014 */  lw          $v0, 0x14($s2)
/* 011E74 80011274 920C0000 */  lbu         $t4, 0x0($s0)
/* 011E78 80011278 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011E7C 8001127C 30590003 */  andi        $t9, $v0, 0x3
/* 011E80 80011280 00195880 */  sll         $t3, $t9, 2
/* 011E84 80011284 316A000C */  andi        $t2, $t3, 0xC
/* 011E88 80011288 318DFFF3 */  andi        $t5, $t4, 0xFFF3
/* 011E8C 8001128C 014D7025 */  or          $t6, $t2, $t5
/* 011E90 80011290 A20E0000 */  sb          $t6, 0x0($s0)
/* 011E94 80011294 13200039 */  beqz        $t9, .L8001137C
/* 011E98 80011298 03201025 */   or         $v0, $t9, $zero
/* 011E9C 8001129C 8E020000 */  lw          $v0, 0x0($s0)
/* 011EA0 800112A0 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 011EA4 800112A4 8E450004 */  lw          $a1, 0x4($s2)
/* 011EA8 800112A8 00023900 */  sll         $a3, $v0, 4
/* 011EAC 800112AC 0007C782 */  srl         $t8, $a3, 30
/* 011EB0 800112B0 00187E00 */  sll         $t7, $t8, 24
/* 011EB4 800112B4 000F3E03 */  sra         $a3, $t7, 24
/* 011EB8 800112B8 8E060004 */  lw          $a2, 0x4($s0)
/* 011EBC 800112BC 0C00370D */  jal         AudioHeap_AllocPersistentSampleCache
/* 011EC0 800112C0 00412024 */   and        $a0, $v0, $at
/* 011EC4 800112C4 1000002D */  b           .L8001137C
/* 011EC8 800112C8 00408825 */   or         $s1, $v0, $zero
/* 011ECC 800112CC 8E420010 */  lw          $v0, 0x10($s2)
.L800112D0:
/* 011ED0 800112D0 920D0000 */  lbu         $t5, 0x0($s0)
/* 011ED4 800112D4 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011ED8 800112D8 304B0003 */  andi        $t3, $v0, 0x3
/* 011EDC 800112DC 000B6080 */  sll         $t4, $t3, 2
/* 011EE0 800112E0 318A000C */  andi        $t2, $t4, 0xC
/* 011EE4 800112E4 31AEFFF3 */  andi        $t6, $t5, 0xFFF3
/* 011EE8 800112E8 014EC025 */  or          $t8, $t2, $t6
/* 011EEC 800112EC 1160000D */  beqz        $t3, .L80011324
/* 011EF0 800112F0 A2180000 */   sb         $t8, 0x0($s0)
/* 011EF4 800112F4 8E020000 */  lw          $v0, 0x0($s0)
/* 011EF8 800112F8 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 011EFC 800112FC 8E450000 */  lw          $a1, 0x0($s2)
/* 011F00 80011300 00023900 */  sll         $a3, $v0, 4
/* 011F04 80011304 00077F82 */  srl         $t7, $a3, 30
/* 011F08 80011308 000FCE00 */  sll         $t9, $t7, 24
/* 011F0C 8001130C 00193E03 */  sra         $a3, $t9, 24
/* 011F10 80011310 8E060004 */  lw          $a2, 0x4($s0)
/* 011F14 80011314 0C0036F9 */  jal         AudioHeap_AllocTemporarySampleCache
/* 011F18 80011318 00412024 */   and        $a0, $v0, $at
/* 011F1C 8001131C 10000017 */  b           .L8001137C
/* 011F20 80011320 00408825 */   or         $s1, $v0, $zero
.L80011324:
/* 011F24 80011324 8E420014 */  lw          $v0, 0x14($s2)
/* 011F28 80011328 920E0000 */  lbu         $t6, 0x0($s0)
/* 011F2C 8001132C 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011F30 80011330 304C0003 */  andi        $t4, $v0, 0x3
/* 011F34 80011334 000C6880 */  sll         $t5, $t4, 2
/* 011F38 80011338 31AA000C */  andi        $t2, $t5, 0xC
/* 011F3C 8001133C 31D8FFF3 */  andi        $t8, $t6, 0xFFF3
/* 011F40 80011340 01587825 */  or          $t7, $t2, $t8
/* 011F44 80011344 A20F0000 */  sb          $t7, 0x0($s0)
/* 011F48 80011348 1180000C */  beqz        $t4, .L8001137C
/* 011F4C 8001134C 01801025 */   or         $v0, $t4, $zero
/* 011F50 80011350 8E020000 */  lw          $v0, 0x0($s0)
/* 011F54 80011354 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 011F58 80011358 8E450004 */  lw          $a1, 0x4($s2)
/* 011F5C 8001135C 00023900 */  sll         $a3, $v0, 4
/* 011F60 80011360 0007CF82 */  srl         $t9, $a3, 30
/* 011F64 80011364 00195E00 */  sll         $t3, $t9, 24
/* 011F68 80011368 000B3E03 */  sra         $a3, $t3, 24
/* 011F6C 8001136C 8E060004 */  lw          $a2, 0x4($s0)
/* 011F70 80011370 0C0036F9 */  jal         AudioHeap_AllocTemporarySampleCache
/* 011F74 80011374 00412024 */   and        $a0, $v0, $at
/* 011F78 80011378 00408825 */  or          $s1, $v0, $zero
.L8001137C:
/* 011F7C 8001137C 16200003 */  bnez        $s1, .L8001138C
/* 011F80 80011380 3C058015 */   lui        $a1, %hi(D_80153D00)
/* 011F84 80011384 10000042 */  b           .L80011490
/* 011F88 80011388 8CA53D00 */   lw         $a1, %lo(D_80153D00)($a1)
.L8001138C:
/* 011F8C 8001138C 12800005 */  beqz        $s4, .L800113A4
/* 011F90 80011390 3C058015 */   lui        $a1, %hi(D_80153D00)
/* 011F94 80011394 12960025 */  beq         $s4, $s6, .L8001142C
/* 011F98 80011398 8CA53D00 */   lw         $a1, %lo(D_80153D00)($a1)
/* 011F9C 8001139C 1000003D */  b           .L80011494
/* 011FA0 800113A0 26730001 */   addiu      $s3, $s3, 0x1
.L800113A4:
/* 011FA4 800113A4 8E020000 */  lw          $v0, 0x0($s0)
/* 011FA8 800113A8 24010001 */  addiu       $at, $zero, 0x1
/* 011FAC 800113AC 02202825 */  or          $a1, $s1, $zero
/* 011FB0 800113B0 00021900 */  sll         $v1, $v0, 4
/* 011FB4 800113B4 00036F82 */  srl         $t5, $v1, 30
/* 011FB8 800113B8 15A1000F */  bne         $t5, $at, .L800113F8
/* 011FBC 800113BC 01A01825 */   or         $v1, $t5, $zero
/* 011FC0 800113C0 3C0E8015 */  lui         $t6, %hi(D_80155C64)
/* 011FC4 800113C4 8DCE5C64 */  lw          $t6, %lo(D_80155C64)($t6)
/* 011FC8 800113C8 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011FCC 800113CC 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 011FD0 800113D0 00413024 */  and         $a2, $v0, $at
/* 011FD4 800113D4 8E040004 */  lw          $a0, 0x4($s0)
/* 011FD8 800113D8 02202825 */  or          $a1, $s1, $zero
/* 011FDC 800113DC 0C003ED4 */  jal         func_8000FB50
/* 011FE0 800113E0 85C70002 */   lh         $a3, 0x2($t6)
/* 011FE4 800113E4 920A0000 */  lbu         $t2, 0x0($s0)
/* 011FE8 800113E8 AE110004 */  sw          $s1, 0x4($s0)
/* 011FEC 800113EC 3158FFF3 */  andi        $t8, $t2, 0xFFF3
/* 011FF0 800113F0 1000000B */  b           .L80011420
/* 011FF4 800113F4 A2180000 */   sb         $t8, 0x0($s0)
.L800113F8:
/* 011FF8 800113F8 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 011FFC 800113FC 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 012000 80011400 00413024 */  and         $a2, $v0, $at
/* 012004 80011404 8E040004 */  lw          $a0, 0x4($s0)
/* 012008 80011408 0C003E8A */  jal         func_8000FA28
/* 01200C 8001140C 00603825 */   or         $a3, $v1, $zero
/* 012010 80011410 920F0000 */  lbu         $t7, 0x0($s0)
/* 012014 80011414 AE110004 */  sw          $s1, 0x4($s0)
/* 012018 80011418 31F9FFF3 */  andi        $t9, $t7, 0xFFF3
/* 01201C 8001141C A2190000 */  sb          $t9, 0x0($s0)
.L80011420:
/* 012020 80011420 3C058015 */  lui         $a1, %hi(D_80153D00)
/* 012024 80011424 1000001A */  b           .L80011490
/* 012028 80011428 8CA53D00 */   lw         $a1, %lo(D_80153D00)($a1)
.L8001142C:
/* 01202C 8001142C 8EA80000 */  lw          $t0, 0x0($s5)
/* 012030 80011430 3C0C8015 */  lui         $t4, %hi(D_80153300)
/* 012034 80011434 258C3300 */  addiu       $t4, $t4, %lo(D_80153300)
/* 012038 80011438 00085880 */  sll         $t3, $t0, 2
/* 01203C 8001143C 01685821 */  addu        $t3, $t3, $t0
/* 012040 80011440 000B5880 */  sll         $t3, $t3, 2
/* 012044 80011444 016C1821 */  addu        $v1, $t3, $t4
/* 012048 80011448 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 01204C 8001144C 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 012050 80011450 00086E00 */  sll         $t5, $t0, 24
/* 012054 80011454 01A17025 */  or          $t6, $t5, $at
/* 012058 80011458 AC700004 */  sw          $s0, 0x4($v1)
/* 01205C 8001145C AC710008 */  sw          $s1, 0x8($v1)
/* 012060 80011460 AC6E000C */  sw          $t6, 0xC($v1)
/* 012064 80011464 AC600010 */  sw          $zero, 0x10($v1)
/* 012068 80011468 8E020000 */  lw          $v0, 0x0($s0)
/* 01206C 8001146C 8E0A0004 */  lw          $t2, 0x4($s0)
/* 012070 80011470 250D0001 */  addiu       $t5, $t0, 0x1
/* 012074 80011474 0041C024 */  and         $t8, $v0, $at
/* 012078 80011478 0002C900 */  sll         $t9, $v0, 4
/* 01207C 8001147C 00195F82 */  srl         $t3, $t9, 30
/* 012080 80011480 01587821 */  addu        $t7, $t2, $t8
/* 012084 80011484 01EB6021 */  addu        $t4, $t7, $t3
/* 012088 80011488 AC6C0000 */  sw          $t4, 0x0($v1)
/* 01208C 8001148C AEAD0000 */  sw          $t5, 0x0($s5)
.L80011490:
/* 012090 80011490 26730001 */  addiu       $s3, $s3, 0x1
.L80011494:
/* 012094 80011494 0265082A */  slt         $at, $s3, $a1
/* 012098 80011498 5420FF54 */  bnel        $at, $zero, .L800111EC
/* 01209C 8001149C 8EAE0000 */   lw         $t6, 0x0($s5)
/* 0120A0 800114A0 AFB1005C */  sw          $s1, 0x5C($sp)
.L800114A4:
/* 0120A4 800114A4 3C018015 */  lui         $at, %hi(D_80153D00)
/* 0120A8 800114A8 AC203D00 */  sw          $zero, %lo(D_80153D00)($at)
/* 0120AC 800114AC 8EA80000 */  lw          $t0, 0x0($s5)
/* 0120B0 800114B0 8FAE004C */  lw          $t6, 0x4C($sp)
/* 0120B4 800114B4 5100001C */  beql        $t0, $zero, .L80011528
/* 0120B8 800114B8 8FBF0044 */   lw         $ra, 0x44($sp)
/* 0120BC 800114BC 15C00019 */  bnez        $t6, .L80011524
/* 0120C0 800114C0 00085080 */   sll        $t2, $t0, 2
/* 0120C4 800114C4 01485021 */  addu        $t2, $t2, $t0
/* 0120C8 800114C8 3C188015 */  lui         $t8, %hi(D_80153300)
/* 0120CC 800114CC 27183300 */  addiu       $t8, $t8, %lo(D_80153300)
/* 0120D0 800114D0 000A5080 */  sll         $t2, $t2, 2
/* 0120D4 800114D4 01581821 */  addu        $v1, $t2, $t8
/* 0120D8 800114D8 8C70FFF0 */  lw          $s0, -0x10($v1)
/* 0120DC 800114DC 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 0120E0 800114E0 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 0120E4 800114E4 8E020000 */  lw          $v0, 0x0($s0)
/* 0120E8 800114E8 8C6BFFF8 */  lw          $t3, -0x8($v1)
/* 0120EC 800114EC 3C0F8015 */  lui         $t7, %hi(D_801542A0)
/* 0120F0 800114F0 00413024 */  and         $a2, $v0, $at
/* 0120F4 800114F4 00064B02 */  srl         $t1, $a2, 12
/* 0120F8 800114F8 8E040004 */  lw          $a0, 0x4($s0)
/* 0120FC 800114FC 00023900 */  sll         $a3, $v0, 4
/* 012100 80011500 25290001 */  addiu       $t1, $t1, 0x1
/* 012104 80011504 0007CF82 */  srl         $t9, $a3, 30
/* 012108 80011508 25EF42A0 */  addiu       $t7, $t7, %lo(D_801542A0)
/* 01210C 8001150C AFAF0014 */  sw          $t7, 0x14($sp)
/* 012110 80011510 03203825 */  or          $a3, $t9, $zero
/* 012114 80011514 AFA90010 */  sw          $t1, 0x10($sp)
/* 012118 80011518 8C65FFF4 */  lw          $a1, -0xC($v1)
/* 01211C 8001151C 0C0042B6 */  jal         func_80010AD8
/* 012120 80011520 AFAB0018 */   sw         $t3, 0x18($sp)
.L80011524:
/* 012124 80011524 8FBF0044 */  lw          $ra, 0x44($sp)
.L80011528:
/* 012128 80011528 8FB00028 */  lw          $s0, 0x28($sp)
/* 01212C 8001152C 8FB1002C */  lw          $s1, 0x2C($sp)
/* 012130 80011530 8FB20030 */  lw          $s2, 0x30($sp)
/* 012134 80011534 8FB30034 */  lw          $s3, 0x34($sp)
/* 012138 80011538 8FB40038 */  lw          $s4, 0x38($sp)
/* 01213C 8001153C 8FB5003C */  lw          $s5, 0x3C($sp)
/* 012140 80011540 8FB60040 */  lw          $s6, 0x40($sp)
/* 012144 80011544 03E00008 */  jr          $ra
/* 012148 80011548 27BD0068 */   addiu      $sp, $sp, 0x68
glabel func_8001154C
/* 01214C 8001154C 3C0B8015 */  lui         $t3, %hi(D_80153D04)
/* 012150 80011550 256B3D04 */  addiu       $t3, $t3, %lo(D_80153D04)
/* 012154 80011554 8D6E0000 */  lw          $t6, 0x0($t3)
/* 012158 80011558 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* 01215C 8001155C AFBF002C */  sw          $ra, 0x2C($sp)
/* 012160 80011560 19C00065 */  blez        $t6, .L800116F8
/* 012164 80011564 AFB00028 */   sw         $s0, 0x28($sp)
/* 012168 80011568 1080000B */  beqz        $a0, .L80011598
/* 01216C 8001156C 27A50050 */   addiu      $a1, $sp, 0x50
/* 012170 80011570 3C048015 */  lui         $a0, %hi(D_801542A0)
/* 012174 80011574 248442A0 */  addiu       $a0, $a0, %lo(D_801542A0)
/* 012178 80011578 27A50050 */  addiu       $a1, $sp, 0x50
/* 01217C 8001157C 0C008178 */  jal         osRecvMesg
/* 012180 80011580 00003025 */   or         $a2, $zero, $zero
/* 012184 80011584 3C0B8015 */  lui         $t3, %hi(D_80153D04)
/* 012188 80011588 256B3D04 */  addiu       $t3, $t3, %lo(D_80153D04)
/* 01218C 8001158C AD600000 */  sw          $zero, 0x0($t3)
/* 012190 80011590 1000005A */  b           .L800116FC
/* 012194 80011594 00001025 */   or         $v0, $zero, $zero
.L80011598:
/* 012198 80011598 3C048015 */  lui         $a0, %hi(D_801542A0)
/* 01219C 8001159C 248442A0 */  addiu       $a0, $a0, %lo(D_801542A0)
/* 0121A0 800115A0 0C008178 */  jal         osRecvMesg
/* 0121A4 800115A4 00003025 */   or         $a2, $zero, $zero
/* 0121A8 800115A8 3C0B8015 */  lui         $t3, %hi(D_80153D04)
/* 0121AC 800115AC 2401FFFF */  addiu       $at, $zero, -0x1
/* 0121B0 800115B0 14410003 */  bne         $v0, $at, .L800115C0
/* 0121B4 800115B4 256B3D04 */   addiu      $t3, $t3, %lo(D_80153D04)
/* 0121B8 800115B8 10000050 */  b           .L800116FC
/* 0121BC 800115BC 00001025 */   or         $v0, $zero, $zero
.L800115C0:
/* 0121C0 800115C0 8FA30050 */  lw          $v1, 0x50($sp)
/* 0121C4 800115C4 3C0D8015 */  lui         $t5, %hi(D_80153300)
/* 0121C8 800115C8 25AD3300 */  addiu       $t5, $t5, %lo(D_80153300)
/* 0121CC 800115CC 00037E02 */  srl         $t7, $v1, 24
/* 0121D0 800115D0 000FC080 */  sll         $t8, $t7, 2
/* 0121D4 800115D4 030FC021 */  addu        $t8, $t8, $t7
/* 0121D8 800115D8 0018C080 */  sll         $t8, $t8, 2
/* 0121DC 800115DC 01B81021 */  addu        $v0, $t5, $t8
/* 0121E0 800115E0 8C590010 */  lw          $t9, 0x10($v0)
/* 0121E4 800115E4 AFAF0050 */  sw          $t7, 0x50($sp)
/* 0121E8 800115E8 24090001 */  addiu       $t1, $zero, 0x1
/* 0121EC 800115EC 17200019 */  bnez        $t9, .L80011654
/* 0121F0 800115F0 240C0014 */   addiu      $t4, $zero, 0x14
/* 0121F4 800115F4 8C440004 */  lw          $a0, 0x4($v0)
/* 0121F8 800115F8 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 0121FC 800115FC 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 012200 80011600 8C850000 */  lw          $a1, 0x0($a0)
/* 012204 80011604 8C8E0004 */  lw          $t6, 0x4($a0)
/* 012208 80011608 00A17824 */  and         $t7, $a1, $at
/* 01220C 8001160C 01CFC021 */  addu        $t8, $t6, $t7
/* 012210 80011610 8C4F0000 */  lw          $t7, 0x0($v0)
/* 012214 80011614 0005C900 */  sll         $t9, $a1, 4
/* 012218 80011618 00197782 */  srl         $t6, $t9, 30
/* 01221C 8001161C 030E3821 */  addu        $a3, $t8, $t6
/* 012220 80011620 54EF000C */  bnel        $a3, $t7, .L80011654
/* 012224 80011624 AC490010 */   sw         $t1, 0x10($v0)
/* 012228 80011628 90980000 */  lbu         $t8, 0x0($a0)
/* 01222C 8001162C 8C590008 */  lw          $t9, 0x8($v0)
/* 012230 80011630 330EFFF3 */  andi        $t6, $t8, 0xFFF3
/* 012234 80011634 A08E0000 */  sb          $t6, 0x0($a0)
/* 012238 80011638 AC990004 */  sw          $t9, 0x4($a0)
/* 01223C 8001163C 8FAF0050 */  lw          $t7, 0x50($sp)
/* 012240 80011640 000FC880 */  sll         $t9, $t7, 2
/* 012244 80011644 032FC821 */  addu        $t9, $t9, $t7
/* 012248 80011648 0019C880 */  sll         $t9, $t9, 2
/* 01224C 8001164C 01B91021 */  addu        $v0, $t5, $t9
/* 012250 80011650 AC490010 */  sw          $t1, 0x10($v0)
.L80011654:
/* 012254 80011654 24090001 */  addiu       $t1, $zero, 0x1
.L80011658:
/* 012258 80011658 8D630000 */  lw          $v1, 0x0($t3)
/* 01225C 8001165C 18600026 */  blez        $v1, .L800116F8
/* 012260 80011660 246FFFFF */   addiu      $t7, $v1, -0x1
/* 012264 80011664 006C0019 */  multu       $v1, $t4
/* 012268 80011668 0000C012 */  mflo        $t8
/* 01226C 8001166C 01B81021 */  addu        $v0, $t5, $t8
/* 012270 80011670 8C4EFFFC */  lw          $t6, -0x4($v0)
/* 012274 80011674 552E0004 */  bnel        $t1, $t6, .L80011688
/* 012278 80011678 8C44FFF0 */   lw         $a0, -0x10($v0)
/* 01227C 8001167C 1000FFF6 */  b           .L80011658
/* 012280 80011680 AD6F0000 */   sw         $t7, 0x0($t3)
/* 012284 80011684 8C44FFF0 */  lw          $a0, -0x10($v0)
.L80011688:
/* 012288 80011688 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 01228C 8001168C 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 012290 80011690 8C850000 */  lw          $a1, 0x0($a0)
/* 012294 80011694 8C900004 */  lw          $s0, 0x4($a0)
/* 012298 80011698 8C4EFFEC */  lw          $t6, -0x14($v0)
/* 01229C 8001169C 00A13024 */  and         $a2, $a1, $at
/* 0122A0 800116A0 00054100 */  sll         $t0, $a1, 4
/* 0122A4 800116A4 0008CF82 */  srl         $t9, $t0, 30
/* 0122A8 800116A8 0206C021 */  addu        $t8, $s0, $a2
/* 0122AC 800116AC 00065302 */  srl         $t2, $a2, 12
/* 0122B0 800116B0 03193821 */  addu        $a3, $t8, $t9
/* 0122B4 800116B4 254A0001 */  addiu       $t2, $t2, 0x1
/* 0122B8 800116B8 10EE0005 */  beq         $a3, $t6, .L800116D0
/* 0122BC 800116BC 03204025 */   or         $t0, $t9, $zero
/* 0122C0 800116C0 246FFFFF */  addiu       $t7, $v1, -0x1
/* 0122C4 800116C4 AC49FFFC */  sw          $t1, -0x4($v0)
/* 0122C8 800116C8 1000FFE3 */  b           .L80011658
/* 0122CC 800116CC AD6F0000 */   sw         $t7, 0x0($t3)
.L800116D0:
/* 0122D0 800116D0 8C58FFF8 */  lw          $t8, -0x8($v0)
/* 0122D4 800116D4 3C198015 */  lui         $t9, %hi(D_801542A0)
/* 0122D8 800116D8 273942A0 */  addiu       $t9, $t9, %lo(D_801542A0)
/* 0122DC 800116DC AFB90014 */  sw          $t9, 0x14($sp)
/* 0122E0 800116E0 02002025 */  or          $a0, $s0, $zero
/* 0122E4 800116E4 8C45FFF4 */  lw          $a1, -0xC($v0)
/* 0122E8 800116E8 01003825 */  or          $a3, $t0, $zero
/* 0122EC 800116EC AFAA0010 */  sw          $t2, 0x10($sp)
/* 0122F0 800116F0 0C0042B6 */  jal         func_80010AD8
/* 0122F4 800116F4 AFB80018 */   sw         $t8, 0x18($sp)
.L800116F8:
/* 0122F8 800116F8 24020001 */  addiu       $v0, $zero, 0x1
.L800116FC:
/* 0122FC 800116FC 8FBF002C */  lw          $ra, 0x2C($sp)
/* 012300 80011700 8FB00028 */  lw          $s0, 0x28($sp)
/* 012304 80011704 27BD0058 */  addiu       $sp, $sp, 0x58
/* 012308 80011708 03E00008 */  jr          $ra
/* 01230C 8001170C 00000000 */   nop
glabel func_80011710
/* 012310 80011710 18A0000A */  blez        $a1, .L8001173C
/* 012314 80011714 00001025 */   or         $v0, $zero, $zero
/* 012318 80011718 8C830004 */  lw          $v1, 0x4($a0)
/* 01231C 8001171C 00C03825 */  or          $a3, $a2, $zero
.L80011720:
/* 012320 80011720 8CEE0000 */  lw          $t6, 0x0($a3)
/* 012324 80011724 8DCF0004 */  lw          $t7, 0x4($t6)
/* 012328 80011728 106F0004 */  beq         $v1, $t7, .L8001173C
/* 01232C 8001172C 00000000 */   nop
/* 012330 80011730 24420001 */  addiu       $v0, $v0, 0x1
/* 012334 80011734 1445FFFA */  bne         $v0, $a1, .L80011720
/* 012338 80011738 24E70004 */   addiu      $a3, $a3, 0x4
.L8001173C:
/* 01233C 8001173C 14450004 */  bne         $v0, $a1, .L80011750
/* 012340 80011740 0005C080 */   sll        $t8, $a1, 2
/* 012344 80011744 00D8C821 */  addu        $t9, $a2, $t8
/* 012348 80011748 AF240000 */  sw          $a0, 0x0($t9)
/* 01234C 8001174C 24A50001 */  addiu       $a1, $a1, 0x1
.L80011750:
/* 012350 80011750 03E00008 */  jr          $ra
/* 012354 80011754 00A01025 */   or         $v0, $a1, $zero
glabel func_80011758
/* 012358 80011758 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* 01235C 8001175C 3C0E8015 */  lui         $t6, %hi(D_80155C70)
/* 012360 80011760 8DCE5C70 */  lw          $t6, %lo(D_80155C70)($t6)
/* 012364 80011764 00047880 */  sll         $t7, $a0, 2
/* 012368 80011768 01E47823 */  subu        $t7, $t7, $a0
/* 01236C 8001176C 000F7880 */  sll         $t7, $t7, 2
/* 012370 80011770 AFBF0034 */  sw          $ra, 0x34($sp)
/* 012374 80011774 AFB60030 */  sw          $s6, 0x30($sp)
/* 012378 80011778 AFB5002C */  sw          $s5, 0x2C($sp)
/* 01237C 8001177C AFB40028 */  sw          $s4, 0x28($sp)
/* 012380 80011780 AFB30024 */  sw          $s3, 0x24($sp)
/* 012384 80011784 AFB20020 */  sw          $s2, 0x20($sp)
/* 012388 80011788 AFB1001C */  sw          $s1, 0x1C($sp)
/* 01238C 8001178C AFB00018 */  sw          $s0, 0x18($sp)
/* 012390 80011790 01CF1021 */  addu        $v0, $t6, $t7
/* 012394 80011794 90500001 */  lbu         $s0, 0x1($v0)
/* 012398 80011798 00A09825 */  or          $s3, $a1, $zero
/* 01239C 8001179C 0080A025 */  or          $s4, $a0, $zero
/* 0123A0 800117A0 00008825 */  or          $s1, $zero, $zero
/* 0123A4 800117A4 90560000 */  lbu         $s6, 0x0($v0)
/* 0123A8 800117A8 1A00000E */  blez        $s0, .L800117E4
/* 0123AC 800117AC 00009025 */   or         $s2, $zero, $zero
/* 0123B0 800117B0 02802025 */  or          $a0, $s4, $zero
.L800117B4:
/* 0123B4 800117B4 0C00477F */  jal         func_80011DFC
/* 0123B8 800117B8 02402825 */   or         $a1, $s2, $zero
/* 0123BC 800117BC 10400005 */  beqz        $v0, .L800117D4
/* 0123C0 800117C0 02202825 */   or         $a1, $s1, $zero
/* 0123C4 800117C4 8C440004 */  lw          $a0, 0x4($v0)
/* 0123C8 800117C8 0C0045C4 */  jal         func_80011710
/* 0123CC 800117CC 02603025 */   or         $a2, $s3, $zero
/* 0123D0 800117D0 00408825 */  or          $s1, $v0, $zero
.L800117D4:
/* 0123D4 800117D4 26520001 */  addiu       $s2, $s2, 0x1
/* 0123D8 800117D8 5650FFF6 */  bnel        $s2, $s0, .L800117B4
/* 0123DC 800117DC 02802025 */   or         $a0, $s4, $zero
/* 0123E0 800117E0 00009025 */  or          $s2, $zero, $zero
.L800117E4:
/* 0123E4 800117E4 1AC0001E */  blez        $s6, .L80011860
/* 0123E8 800117E8 2415007F */   addiu      $s5, $zero, 0x7F
/* 0123EC 800117EC 02802025 */  or          $a0, $s4, $zero
.L800117F0:
/* 0123F0 800117F0 0C004753 */  jal         func_80011D4C
/* 0123F4 800117F4 02402825 */   or         $a1, $s2, $zero
/* 0123F8 800117F8 10400016 */  beqz        $v0, .L80011854
/* 0123FC 800117FC 00408025 */   or         $s0, $v0, $zero
/* 012400 80011800 90580001 */  lbu         $t8, 0x1($v0)
/* 012404 80011804 02202825 */  or          $a1, $s1, $zero
/* 012408 80011808 02603025 */  or          $a2, $s3, $zero
/* 01240C 8001180C 53000005 */  beql        $t8, $zero, .L80011824
/* 012410 80011810 92190002 */   lbu        $t9, 0x2($s0)
/* 012414 80011814 0C0045C4 */  jal         func_80011710
/* 012418 80011818 8C440008 */   lw         $a0, 0x8($v0)
/* 01241C 8001181C 00408825 */  or          $s1, $v0, $zero
/* 012420 80011820 92190002 */  lbu         $t9, 0x2($s0)
.L80011824:
/* 012424 80011824 02202825 */  or          $a1, $s1, $zero
/* 012428 80011828 02603025 */  or          $a2, $s3, $zero
/* 01242C 8001182C 52B90005 */  beql        $s5, $t9, .L80011844
/* 012430 80011830 8E040010 */   lw         $a0, 0x10($s0)
/* 012434 80011834 0C0045C4 */  jal         func_80011710
/* 012438 80011838 8E040018 */   lw         $a0, 0x18($s0)
/* 01243C 8001183C 00408825 */  or          $s1, $v0, $zero
/* 012440 80011840 8E040010 */  lw          $a0, 0x10($s0)
.L80011844:
/* 012444 80011844 02202825 */  or          $a1, $s1, $zero
/* 012448 80011848 0C0045C4 */  jal         func_80011710
/* 01244C 8001184C 02603025 */   or         $a2, $s3, $zero
/* 012450 80011850 00408825 */  or          $s1, $v0, $zero
.L80011854:
/* 012454 80011854 26520001 */  addiu       $s2, $s2, 0x1
/* 012458 80011858 5656FFE5 */  bnel        $s2, $s6, .L800117F0
/* 01245C 8001185C 02802025 */   or         $a0, $s4, $zero
.L80011860:
/* 012460 80011860 8FBF0034 */  lw          $ra, 0x34($sp)
/* 012464 80011864 02201025 */  or          $v0, $s1, $zero
/* 012468 80011868 8FB1001C */  lw          $s1, 0x1C($sp)
/* 01246C 8001186C 8FB00018 */  lw          $s0, 0x18($sp)
/* 012470 80011870 8FB20020 */  lw          $s2, 0x20($sp)
/* 012474 80011874 8FB30024 */  lw          $s3, 0x24($sp)
/* 012478 80011878 8FB40028 */  lw          $s4, 0x28($sp)
/* 01247C 8001187C 8FB5002C */  lw          $s5, 0x2C($sp)
/* 012480 80011880 8FB60030 */  lw          $s6, 0x30($sp)
/* 012484 80011884 03E00008 */  jr          $ra
/* 012488 80011888 27BD0038 */   addiu      $sp, $sp, 0x38
/* 01248C 8001188C 00000000 */  nop
