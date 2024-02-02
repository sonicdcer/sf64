glabel func_ending_80187520
/* EF0260 80187520 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* EF0264 80187524 AFB20040 */  sw          $s2, 0x40($sp)
/* EF0268 80187528 3C128013 */  lui         $s2, %hi(gMasterDisp)
/* EF026C 8018752C AFB00038 */  sw          $s0, 0x38($sp)
/* EF0270 80187530 00808025 */  or          $s0, $a0, $zero
/* EF0274 80187534 26527E64 */  addiu       $s2, $s2, %lo(gMasterDisp)
/* EF0278 80187538 AFBF004C */  sw          $ra, 0x4C($sp)
/* EF027C 8018753C AFB40048 */  sw          $s4, 0x48($sp)
/* EF0280 80187540 AFB30044 */  sw          $s3, 0x44($sp)
/* EF0284 80187544 AFB1003C */  sw          $s1, 0x3C($sp)
/* EF0288 80187548 F7B60030 */  sdc1        $fs1, 0x30($sp)
/* EF028C 8018754C F7B40028 */  sdc1        $fs0, 0x28($sp)
/* EF0290 80187550 02402025 */  or          $a0, $s2, $zero
/* EF0294 80187554 0C02E374 */  jal         RCP_SetupDL
/* EF0298 80187558 2405004C */   addiu      $a1, $zero, 0x4C
/* EF029C 8018755C 8E430000 */  lw          $v1, 0x0($s2)
/* EF02A0 80187560 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* EF02A4 80187564 2418FFFF */  addiu       $t8, $zero, -0x1
/* EF02A8 80187568 246E0008 */  addiu       $t6, $v1, 0x8
/* EF02AC 8018756C AE4E0000 */  sw          $t6, 0x0($s2)
/* EF02B0 80187570 AC780004 */  sw          $t8, 0x4($v1)
/* EF02B4 80187574 AC6F0000 */  sw          $t7, 0x0($v1)
/* EF02B8 80187578 12000006 */  beqz        $s0, .Lending_80187594
/* EF02BC 8018757C 00008825 */   or         $s1, $zero, $zero
/* EF02C0 80187580 24010001 */  addiu       $at, $zero, 0x1
/* EF02C4 80187584 12010027 */  beq         $s0, $at, .Lending_80187624
/* EF02C8 80187588 00008825 */   or         $s1, $zero, $zero
/* EF02CC 8018758C 1000003C */  b           .Lending_80187680
/* EF02D0 80187590 8FBF004C */   lw         $ra, 0x4C($sp)
.Lending_80187594:
/* EF02D4 80187594 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF02D8 80187598 3C130800 */  lui         $s3, %hi(D_8000000)
/* EF02DC 8018759C 4481A000 */  mtc1        $at, $fs0
/* EF02E0 801875A0 4480B000 */  mtc1        $zero, $fs1
/* EF02E4 801875A4 26730000 */  addiu       $s3, $s3, %lo(D_8000000)
/* EF02E8 801875A8 00008025 */  or          $s0, $zero, $zero
/* EF02EC 801875AC 2414010C */  addiu       $s4, $zero, 0x10C
.Lending_801875B0:
/* EF02F0 801875B0 44902000 */  mtc1        $s0, $ft0
/* EF02F4 801875B4 0011C840 */  sll         $t9, $s1, 1
/* EF02F8 801875B8 02792821 */  addu        $a1, $s3, $t9
/* EF02FC 801875BC 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF0300 801875C0 02402025 */  or          $a0, $s2, $zero
/* EF0304 801875C4 2406013C */  addiu       $a2, $zero, 0x13C
/* EF0308 801875C8 24070004 */  addiu       $a3, $zero, 0x4
/* EF030C 801875CC E7B60010 */  swc1        $fs1, 0x10($sp)
/* EF0310 801875D0 E7B40018 */  swc1        $fs0, 0x18($sp)
/* EF0314 801875D4 E7A60014 */  swc1        $ft1, 0x14($sp)
/* EF0318 801875D8 0C027506 */  jal         TextureRect_16bRGBA
/* EF031C 801875DC E7B4001C */   swc1       $fs0, 0x1C($sp)
/* EF0320 801875E0 26100004 */  addiu       $s0, $s0, 0x4
/* EF0324 801875E4 1614FFF2 */  bne         $s0, $s4, .Lending_801875B0
/* EF0328 801875E8 263104F0 */   addiu      $s1, $s1, 0x4F0
/* EF032C 801875EC 44904000 */  mtc1        $s0, $ft2
/* EF0330 801875F0 00114040 */  sll         $t0, $s1, 1
/* EF0334 801875F4 02682821 */  addu        $a1, $s3, $t0
/* EF0338 801875F8 468042A0 */  cvt.s.w     $ft3, $ft2
/* EF033C 801875FC 02402025 */  or          $a0, $s2, $zero
/* EF0340 80187600 2406013C */  addiu       $a2, $zero, 0x13C
/* EF0344 80187604 24070003 */  addiu       $a3, $zero, 0x3
/* EF0348 80187608 E7B60010 */  swc1        $fs1, 0x10($sp)
/* EF034C 8018760C E7B40018 */  swc1        $fs0, 0x18($sp)
/* EF0350 80187610 E7AA0014 */  swc1        $ft3, 0x14($sp)
/* EF0354 80187614 0C027506 */  jal         TextureRect_16bRGBA
/* EF0358 80187618 E7B4001C */   swc1       $fs0, 0x1C($sp)
/* EF035C 8018761C 10000018 */  b           .Lending_80187680
/* EF0360 80187620 8FBF004C */   lw         $ra, 0x4C($sp)
.Lending_80187624:
/* EF0364 80187624 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF0368 80187628 3C130800 */  lui         $s3, %hi(D_8000000)
/* EF036C 8018762C 4481A000 */  mtc1        $at, $fs0
/* EF0370 80187630 4480B000 */  mtc1        $zero, $fs1
/* EF0374 80187634 26730000 */  addiu       $s3, $s3, %lo(D_8000000)
/* EF0378 80187638 00008025 */  or          $s0, $zero, $zero
/* EF037C 8018763C 241400F0 */  addiu       $s4, $zero, 0xF0
.Lending_80187640:
/* EF0380 80187640 44908000 */  mtc1        $s0, $ft4
/* EF0384 80187644 00114840 */  sll         $t1, $s1, 1
/* EF0388 80187648 02692821 */  addu        $a1, $s3, $t1
/* EF038C 8018764C 468084A0 */  cvt.s.w     $ft5, $ft4
/* EF0390 80187650 02402025 */  or          $a0, $s2, $zero
/* EF0394 80187654 2406013C */  addiu       $a2, $zero, 0x13C
/* EF0398 80187658 24070004 */  addiu       $a3, $zero, 0x4
/* EF039C 8018765C E7B60010 */  swc1        $fs1, 0x10($sp)
/* EF03A0 80187660 E7B40018 */  swc1        $fs0, 0x18($sp)
/* EF03A4 80187664 E7B20014 */  swc1        $ft5, 0x14($sp)
/* EF03A8 80187668 0C027506 */  jal         TextureRect_16bRGBA
/* EF03AC 8018766C E7B4001C */   swc1       $fs0, 0x1C($sp)
/* EF03B0 80187670 26100004 */  addiu       $s0, $s0, 0x4
/* EF03B4 80187674 1614FFF2 */  bne         $s0, $s4, .Lending_80187640
/* EF03B8 80187678 263104F0 */   addiu      $s1, $s1, 0x4F0
/* EF03BC 8018767C 8FBF004C */  lw          $ra, 0x4C($sp)
.Lending_80187680:
/* EF03C0 80187680 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* EF03C4 80187684 D7B60030 */  ldc1        $fs1, 0x30($sp)
/* EF03C8 80187688 8FB00038 */  lw          $s0, 0x38($sp)
/* EF03CC 8018768C 8FB1003C */  lw          $s1, 0x3C($sp)
/* EF03D0 80187690 8FB20040 */  lw          $s2, 0x40($sp)
/* EF03D4 80187694 8FB30044 */  lw          $s3, 0x44($sp)
/* EF03D8 80187698 8FB40048 */  lw          $s4, 0x48($sp)
/* EF03DC 8018769C 03E00008 */  jr          $ra
/* EF03E0 801876A0 27BD0050 */   addiu      $sp, $sp, 0x50
.section .late_rodata
dlabel D_ending_80196458
/* EFF198 80196458 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_801876A4
/* EF03E4 801876A4 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* EF03E8 801876A8 AFBF0054 */  sw          $ra, 0x54($sp)
/* EF03EC 801876AC AFB70050 */  sw          $s7, 0x50($sp)
/* EF03F0 801876B0 AFB6004C */  sw          $s6, 0x4C($sp)
/* EF03F4 801876B4 AFB50048 */  sw          $s5, 0x48($sp)
/* EF03F8 801876B8 AFB40044 */  sw          $s4, 0x44($sp)
/* EF03FC 801876BC AFB30040 */  sw          $s3, 0x40($sp)
/* EF0400 801876C0 AFB2003C */  sw          $s2, 0x3C($sp)
/* EF0404 801876C4 AFB10038 */  sw          $s1, 0x38($sp)
/* EF0408 801876C8 AFB00034 */  sw          $s0, 0x34($sp)
/* EF040C 801876CC F7B80028 */  sdc1        $fs2, 0x28($sp)
/* EF0410 801876D0 F7B60020 */  sdc1        $fs1, 0x20($sp)
/* EF0414 801876D4 F7B40018 */  sdc1        $fs0, 0x18($sp)
/* EF0418 801876D8 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* EF041C 801876DC 4481C000 */  mtc1        $at, $fs2
/* EF0420 801876E0 3C018019 */  lui         $at, %hi(D_ending_80196458)
/* EF0424 801876E4 C4366458 */  lwc1        $fs1, %lo(D_ending_80196458)($at)
/* EF0428 801876E8 3C014080 */  lui         $at, (0x40800000 >> 16)
/* EF042C 801876EC 3C108019 */  lui         $s0, %hi(D_ending_80196D08)
/* EF0430 801876F0 3C130604 */  lui         $s3, %hi(D_6041070)
/* EF0434 801876F4 3C178019 */  lui         $s7, %hi(D_ending_80196D08 + 0x100)
/* EF0438 801876F8 3C128013 */  lui         $s2, %hi(gMasterDisp)
/* EF043C 801876FC 3C118014 */  lui         $s1, %hi(gGfxMatrix)
/* EF0440 80187700 4481A000 */  mtc1        $at, $fs0
/* EF0444 80187704 2631B3C0 */  addiu       $s1, $s1, %lo(gGfxMatrix)
/* EF0448 80187708 26527E64 */  addiu       $s2, $s2, %lo(gMasterDisp)
/* EF044C 8018770C 26F76E08 */  addiu       $s7, $s7, %lo(D_ending_80196D08 + 0x100)
/* EF0450 80187710 26731070 */  addiu       $s3, $s3, %lo(D_6041070)
/* EF0454 80187714 26106D08 */  addiu       $s0, $s0, %lo(D_ending_80196D08)
/* EF0458 80187718 3C160600 */  lui         $s6, (0x6000000 >> 16)
/* EF045C 8018771C 2415FFF0 */  addiu       $s5, $zero, -0x10
/* EF0460 80187720 3C14FA00 */  lui         $s4, (0xFA000000 >> 16)
.Lending_80187724:
/* EF0464 80187724 0C0015C2 */  jal         Matrix_Push
/* EF0468 80187728 02202025 */   or         $a0, $s1, $zero
/* EF046C 8018772C 02402025 */  or          $a0, $s2, $zero
/* EF0470 80187730 0C02E374 */  jal         RCP_SetupDL
/* EF0474 80187734 2405003E */   addiu      $a1, $zero, 0x3E
/* EF0478 80187738 8E430000 */  lw          $v1, 0x0($s2)
/* EF047C 8018773C 240F0001 */  addiu       $t7, $zero, 0x1
/* EF0480 80187740 246E0008 */  addiu       $t6, $v1, 0x8
/* EF0484 80187744 AE4E0000 */  sw          $t6, 0x0($s2)
/* EF0488 80187748 AC750004 */  sw          $s5, 0x4($v1)
/* EF048C 8018774C AC740000 */  sw          $s4, 0x0($v1)
/* EF0490 80187750 8E240000 */  lw          $a0, 0x0($s1)
/* EF0494 80187754 8E05000C */  lw          $a1, 0xC($s0)
/* EF0498 80187758 8E060010 */  lw          $a2, 0x10($s0)
/* EF049C 8018775C 8E070014 */  lw          $a3, 0x14($s0)
/* EF04A0 80187760 0C0016C0 */  jal         Matrix_Translate
/* EF04A4 80187764 AFAF0010 */   sw         $t7, 0x10($sp)
/* EF04A8 80187768 C6040024 */  lwc1        $ft0, 0x24($s0)
/* EF04AC 8018776C C6080028 */  lwc1        $ft2, 0x28($s0)
/* EF04B0 80187770 C610002C */  lwc1        $ft4, 0x2C($s0)
/* EF04B4 80187774 46142180 */  add.s       $ft1, $ft0, $fs0
/* EF04B8 80187778 24180001 */  addiu       $t8, $zero, 0x1
/* EF04BC 8018777C AFB80010 */  sw          $t8, 0x10($sp)
/* EF04C0 80187780 46144280 */  add.s       $ft3, $ft2, $fs0
/* EF04C4 80187784 44053000 */  mfc1        $a1, $ft1
/* EF04C8 80187788 8E240000 */  lw          $a0, 0x0($s1)
/* EF04CC 8018778C 46148480 */  add.s       $ft5, $ft4, $fs0
/* EF04D0 80187790 44065000 */  mfc1        $a2, $ft3
/* EF04D4 80187794 44079000 */  mfc1        $a3, $ft5
/* EF04D8 80187798 0C00170D */  jal         Matrix_Scale
/* EF04DC 8018779C 00000000 */   nop
/* EF04E0 801877A0 C604001C */  lwc1        $ft0, 0x1C($s0)
/* EF04E4 801877A4 8E240000 */  lw          $a0, 0x0($s1)
/* EF04E8 801877A8 24060001 */  addiu       $a2, $zero, 0x1
/* EF04EC 801877AC 46162182 */  mul.s       $ft1, $ft0, $fs1
/* EF04F0 801877B0 44053000 */  mfc1        $a1, $ft1
/* EF04F4 801877B4 0C0017A4 */  jal         Matrix_RotateY
/* EF04F8 801877B8 00000000 */   nop
/* EF04FC 801877BC C6080018 */  lwc1        $ft2, 0x18($s0)
/* EF0500 801877C0 8E240000 */  lw          $a0, 0x0($s1)
/* EF0504 801877C4 24060001 */  addiu       $a2, $zero, 0x1
/* EF0508 801877C8 46184280 */  add.s       $ft3, $ft2, $fs2
/* EF050C 801877CC 46165402 */  mul.s       $ft4, $ft3, $fs1
/* EF0510 801877D0 44058000 */  mfc1        $a1, $ft4
/* EF0514 801877D4 0C001751 */  jal         Matrix_RotateX
/* EF0518 801877D8 00000000 */   nop
/* EF051C 801877DC C6120020 */  lwc1        $ft5, 0x20($s0)
/* EF0520 801877E0 8E240000 */  lw          $a0, 0x0($s1)
/* EF0524 801877E4 24060001 */  addiu       $a2, $zero, 0x1
/* EF0528 801877E8 46169102 */  mul.s       $ft0, $ft5, $fs1
/* EF052C 801877EC 44052000 */  mfc1        $a1, $ft0
/* EF0530 801877F0 0C0017F8 */  jal         Matrix_RotateZ
/* EF0534 801877F4 00000000 */   nop
/* EF0538 801877F8 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF053C 801877FC 02402025 */   or         $a0, $s2, $zero
/* EF0540 80187800 8E430000 */  lw          $v1, 0x0($s2)
/* EF0544 80187804 24790008 */  addiu       $t9, $v1, 0x8
/* EF0548 80187808 AE590000 */  sw          $t9, 0x0($s2)
/* EF054C 8018780C AC730004 */  sw          $s3, 0x4($v1)
/* EF0550 80187810 AC760000 */  sw          $s6, 0x0($v1)
/* EF0554 80187814 0C0015D0 */  jal         Matrix_Pop
/* EF0558 80187818 02202025 */   or         $a0, $s1, $zero
/* EF055C 8018781C 26100040 */  addiu       $s0, $s0, 0x40
/* EF0560 80187820 1617FFC0 */  bne         $s0, $s7, .Lending_80187724
/* EF0564 80187824 00000000 */   nop
/* EF0568 80187828 8FBF0054 */  lw          $ra, 0x54($sp)
/* EF056C 8018782C D7B40018 */  ldc1        $fs0, 0x18($sp)
/* EF0570 80187830 D7B60020 */  ldc1        $fs1, 0x20($sp)
/* EF0574 80187834 D7B80028 */  ldc1        $fs2, 0x28($sp)
/* EF0578 80187838 8FB00034 */  lw          $s0, 0x34($sp)
/* EF057C 8018783C 8FB10038 */  lw          $s1, 0x38($sp)
/* EF0580 80187840 8FB2003C */  lw          $s2, 0x3C($sp)
/* EF0584 80187844 8FB30040 */  lw          $s3, 0x40($sp)
/* EF0588 80187848 8FB40044 */  lw          $s4, 0x44($sp)
/* EF058C 8018784C 8FB50048 */  lw          $s5, 0x48($sp)
/* EF0590 80187850 8FB6004C */  lw          $s6, 0x4C($sp)
/* EF0594 80187854 8FB70050 */  lw          $s7, 0x50($sp)
/* EF0598 80187858 03E00008 */  jr          $ra
/* EF059C 8018785C 27BD0058 */   addiu      $sp, $sp, 0x58
.section .late_rodata
dlabel D_ending_8019645C
/* EFF19C 8019645C 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_80196460
/* EFF1A0 80196460 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_80196464
/* EFF1A4 80196464 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_80187860
/* EF05A0 80187860 27BDFD20 */  addiu       $sp, $sp, -0x2E0
/* EF05A4 80187864 AFBF0054 */  sw          $ra, 0x54($sp)
/* EF05A8 80187868 AFBE0050 */  sw          $fp, 0x50($sp)
/* EF05AC 8018786C AFB7004C */  sw          $s7, 0x4C($sp)
/* EF05B0 80187870 AFB60048 */  sw          $s6, 0x48($sp)
/* EF05B4 80187874 AFB50044 */  sw          $s5, 0x44($sp)
/* EF05B8 80187878 AFB40040 */  sw          $s4, 0x40($sp)
/* EF05BC 8018787C AFB3003C */  sw          $s3, 0x3C($sp)
/* EF05C0 80187880 AFB20038 */  sw          $s2, 0x38($sp)
/* EF05C4 80187884 AFB10034 */  sw          $s1, 0x34($sp)
/* EF05C8 80187888 AFB00030 */  sw          $s0, 0x30($sp)
/* EF05CC 8018788C F7B40028 */  sdc1        $fs0, 0x28($sp)
/* EF05D0 80187890 AFA502E4 */  sw          $a1, 0x2E4($sp)
/* EF05D4 80187894 3C0F8019 */  lui         $t7, %hi(D_ending_80192820)
/* EF05D8 80187898 25EF2820 */  addiu       $t7, $t7, %lo(D_ending_80192820)
/* EF05DC 8018789C 8DE10000 */  lw          $at, 0x0($t7)
/* EF05E0 801878A0 8DE90004 */  lw          $t1, 0x4($t7)
/* EF05E4 801878A4 27AE0070 */  addiu       $t6, $sp, 0x70
/* EF05E8 801878A8 ADC10000 */  sw          $at, 0x0($t6)
/* EF05EC 801878AC ADC90004 */  sw          $t1, 0x4($t6)
/* EF05F0 801878B0 8DE9000C */  lw          $t1, 0xC($t7)
/* EF05F4 801878B4 8DE10008 */  lw          $at, 0x8($t7)
/* EF05F8 801878B8 3C0A8019 */  lui         $t2, %hi(D_ending_80196F88)
/* EF05FC 801878BC ADC9000C */  sw          $t1, 0xC($t6)
/* EF0600 801878C0 ADC10008 */  sw          $at, 0x8($t6)
/* EF0604 801878C4 8D4A6F88 */  lw          $t2, %lo(D_ending_80196F88)($t2)
/* EF0608 801878C8 3C0B8019 */  lui         $t3, %hi(func_ending_80189C64)
/* EF060C 801878CC 256B9C64 */  addiu       $t3, $t3, %lo(func_ending_80189C64)
/* EF0610 801878D0 008A082A */  slt         $at, $a0, $t2
/* EF0614 801878D4 1020010C */  beqz        $at, .Lending_80187D08
/* EF0618 801878D8 AFA40084 */   sw         $a0, 0x84($sp)
/* EF061C 801878DC 3C018019 */  lui         $at, %hi(D_ending_8019645C)
/* EF0620 801878E0 3C158019 */  lui         $s5, %hi(D_ending_80197900)
/* EF0624 801878E4 3C148013 */  lui         $s4, %hi(gMasterDisp)
/* EF0628 801878E8 3C118014 */  lui         $s1, %hi(gGfxMatrix)
/* EF062C 801878EC 3C108019 */  lui         $s0, %hi(D_ending_80196D08)
/* EF0630 801878F0 26106D08 */  addiu       $s0, $s0, %lo(D_ending_80196D08)
/* EF0634 801878F4 2631B3C0 */  addiu       $s1, $s1, %lo(gGfxMatrix)
/* EF0638 801878F8 26947E64 */  addiu       $s4, $s4, %lo(gMasterDisp)
/* EF063C 801878FC 26B57900 */  addiu       $s5, $s5, %lo(D_ending_80197900)
/* EF0640 80187900 C434645C */  lwc1        $fs0, %lo(D_ending_8019645C)($at)
/* EF0644 80187904 AFAB0060 */  sw          $t3, 0x60($sp)
/* EF0648 80187908 241E0002 */  addiu       $fp, $zero, 0x2
/* EF064C 8018790C 24170001 */  addiu       $s7, $zero, 0x1
/* EF0650 80187910 24160258 */  addiu       $s6, $zero, 0x258
/* EF0654 80187914 8FB30080 */  lw          $s3, 0x80($sp)
/* EF0658 80187918 27B20088 */  addiu       $s2, $sp, 0x88
.Lending_8018791C:
/* EF065C 8018791C 0C0015C2 */  jal         Matrix_Push
/* EF0660 80187920 02202025 */   or         $a0, $s1, $zero
/* EF0664 80187924 8FAC0084 */  lw          $t4, 0x84($sp)
/* EF0668 80187928 02802025 */  or          $a0, $s4, $zero
/* EF066C 8018792C 000C6980 */  sll         $t5, $t4, 6
/* EF0670 80187930 020DC821 */  addu        $t9, $s0, $t5
/* EF0674 80187934 0C02E374 */  jal         RCP_SetupDL
/* EF0678 80187938 87250008 */   lh         $a1, 0x8($t9)
/* EF067C 8018793C 8E840000 */  lw          $a0, 0x0($s4)
/* EF0680 80187940 3C0EFA00 */  lui         $t6, (0xFA000000 >> 16)
/* EF0684 80187944 24980008 */  addiu       $t8, $a0, 0x8
/* EF0688 80187948 AE980000 */  sw          $t8, 0x0($s4)
/* EF068C 8018794C AC8E0000 */  sw          $t6, 0x0($a0)
/* EF0690 80187950 8FAF0084 */  lw          $t7, 0x84($sp)
/* EF0694 80187954 000F4980 */  sll         $t1, $t7, 6
/* EF0698 80187958 02091821 */  addu        $v1, $s0, $t1
/* EF069C 8018795C 906D003C */  lbu         $t5, 0x3C($v1)
/* EF06A0 80187960 906B003F */  lbu         $t3, 0x3F($v1)
/* EF06A4 80187964 906F003D */  lbu         $t7, 0x3D($v1)
/* EF06A8 80187968 000DCE00 */  sll         $t9, $t5, 24
/* EF06AC 8018796C 906D003E */  lbu         $t5, 0x3E($v1)
/* EF06B0 80187970 0179C025 */  or          $t8, $t3, $t9
/* EF06B4 80187974 000F4C00 */  sll         $t1, $t7, 16
/* EF06B8 80187978 03095025 */  or          $t2, $t8, $t1
/* EF06BC 8018797C 000D5A00 */  sll         $t3, $t5, 8
/* EF06C0 80187980 014BC825 */  or          $t9, $t2, $t3
/* EF06C4 80187984 AC990004 */  sw          $t9, 0x4($a0)
/* EF06C8 80187988 8FAE0084 */  lw          $t6, 0x84($sp)
/* EF06CC 8018798C 11D70003 */  beq         $t6, $s7, .Lending_8018799C
/* EF06D0 80187990 8FA80084 */   lw         $t0, 0x84($sp)
/* EF06D4 80187994 15DE0011 */  bne         $t6, $fp, .Lending_801879DC
/* EF06D8 80187998 8FA90084 */   lw         $t1, 0x84($sp)
.Lending_8018799C:
/* EF06DC 8018799C 00087980 */  sll         $t7, $t0, 6
/* EF06E0 801879A0 020F1821 */  addu        $v1, $s0, $t7
/* EF06E4 801879A4 3C014120 */  lui         $at, (0x41200000 >> 16)
/* EF06E8 801879A8 44813000 */  mtc1        $at, $ft1
/* EF06EC 801879AC C4640010 */  lwc1        $ft0, 0x10($v1)
/* EF06F0 801879B0 24180001 */  addiu       $t8, $zero, 0x1
/* EF06F4 801879B4 AFB80010 */  sw          $t8, 0x10($sp)
/* EF06F8 801879B8 46062201 */  sub.s       $ft2, $ft0, $ft1
/* EF06FC 801879BC 8C65000C */  lw          $a1, 0xC($v1)
/* EF0700 801879C0 8C670014 */  lw          $a3, 0x14($v1)
/* EF0704 801879C4 8E240000 */  lw          $a0, 0x0($s1)
/* EF0708 801879C8 44064000 */  mfc1        $a2, $ft2
/* EF070C 801879CC 0C0016C0 */  jal         Matrix_Translate
/* EF0710 801879D0 00000000 */   nop
/* EF0714 801879D4 1000000B */  b           .Lending_80187A04
/* EF0718 801879D8 8FAA0084 */   lw         $t2, 0x84($sp)
.Lending_801879DC:
/* EF071C 801879DC 00096180 */  sll         $t4, $t1, 6
/* EF0720 801879E0 020C1821 */  addu        $v1, $s0, $t4
/* EF0724 801879E4 240D0001 */  addiu       $t5, $zero, 0x1
/* EF0728 801879E8 AFAD0010 */  sw          $t5, 0x10($sp)
/* EF072C 801879EC 8C65000C */  lw          $a1, 0xC($v1)
/* EF0730 801879F0 8C660010 */  lw          $a2, 0x10($v1)
/* EF0734 801879F4 8C670014 */  lw          $a3, 0x14($v1)
/* EF0738 801879F8 0C0016C0 */  jal         Matrix_Translate
/* EF073C 801879FC 8E240000 */   lw         $a0, 0x0($s1)
/* EF0740 80187A00 8FAA0084 */  lw          $t2, 0x84($sp)
.Lending_80187A04:
/* EF0744 80187A04 24190001 */  addiu       $t9, $zero, 0x1
/* EF0748 80187A08 AFB90010 */  sw          $t9, 0x10($sp)
/* EF074C 80187A0C 000A5980 */  sll         $t3, $t2, 6
/* EF0750 80187A10 020B1821 */  addu        $v1, $s0, $t3
/* EF0754 80187A14 8C650024 */  lw          $a1, 0x24($v1)
/* EF0758 80187A18 8C660028 */  lw          $a2, 0x28($v1)
/* EF075C 80187A1C 8C67002C */  lw          $a3, 0x2C($v1)
/* EF0760 80187A20 0C00170D */  jal         Matrix_Scale
/* EF0764 80187A24 8E240000 */   lw         $a0, 0x0($s1)
/* EF0768 80187A28 8FAE0084 */  lw          $t6, 0x84($sp)
/* EF076C 80187A2C 8E240000 */  lw          $a0, 0x0($s1)
/* EF0770 80187A30 24060001 */  addiu       $a2, $zero, 0x1
/* EF0774 80187A34 000E7980 */  sll         $t7, $t6, 6
/* EF0778 80187A38 020FC021 */  addu        $t8, $s0, $t7
/* EF077C 80187A3C C70A001C */  lwc1        $ft3, 0x1C($t8)
/* EF0780 80187A40 46145402 */  mul.s       $ft4, $ft3, $fs0
/* EF0784 80187A44 44058000 */  mfc1        $a1, $ft4
/* EF0788 80187A48 0C0017A4 */  jal         Matrix_RotateY
/* EF078C 80187A4C 00000000 */   nop
/* EF0790 80187A50 8FA90084 */  lw          $t1, 0x84($sp)
/* EF0794 80187A54 8E240000 */  lw          $a0, 0x0($s1)
/* EF0798 80187A58 24060001 */  addiu       $a2, $zero, 0x1
/* EF079C 80187A5C 00096180 */  sll         $t4, $t1, 6
/* EF07A0 80187A60 020C6821 */  addu        $t5, $s0, $t4
/* EF07A4 80187A64 C5B20018 */  lwc1        $ft5, 0x18($t5)
/* EF07A8 80187A68 46149102 */  mul.s       $ft0, $ft5, $fs0
/* EF07AC 80187A6C 44052000 */  mfc1        $a1, $ft0
/* EF07B0 80187A70 0C001751 */  jal         Matrix_RotateX
/* EF07B4 80187A74 00000000 */   nop
/* EF07B8 80187A78 8FA80084 */  lw          $t0, 0x84($sp)
/* EF07BC 80187A7C 8E240000 */  lw          $a0, 0x0($s1)
/* EF07C0 80187A80 24060001 */  addiu       $a2, $zero, 0x1
/* EF07C4 80187A84 00085180 */  sll         $t2, $t0, 6
/* EF07C8 80187A88 020A5821 */  addu        $t3, $s0, $t2
/* EF07CC 80187A8C C5660020 */  lwc1        $ft1, 0x20($t3)
/* EF07D0 80187A90 46143202 */  mul.s       $ft2, $ft1, $fs0
/* EF07D4 80187A94 44054000 */  mfc1        $a1, $ft2
/* EF07D8 80187A98 0C0017F8 */  jal         Matrix_RotateZ
/* EF07DC 80187A9C 00000000 */   nop
/* EF07E0 80187AA0 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF07E4 80187AA4 02802025 */   or         $a0, $s4, $zero
/* EF07E8 80187AA8 8FB902E4 */  lw          $t9, 0x2E4($sp)
/* EF07EC 80187AAC 8FA80084 */  lw          $t0, 0x84($sp)
/* EF07F0 80187AB0 3C0E8017 */  lui         $t6, %hi(gCsFrameCount)
/* EF07F4 80187AB4 1320003E */  beqz        $t9, .Lending_80187BB0
/* EF07F8 80187AB8 0008C180 */   sll        $t8, $t0, 6
/* EF07FC 80187ABC 8DCE7A80 */  lw          $t6, %lo(gCsFrameCount)($t6)
/* EF0800 80187AC0 29C1018A */  slti        $at, $t6, 0x18A
/* EF0804 80187AC4 5420003B */  bnel        $at, $zero, .Lending_80187BB4
/* EF0808 80187AC8 02184821 */   addu       $t1, $s0, $t8
/* EF080C 80187ACC 8FA80084 */  lw          $t0, 0x84($sp)
/* EF0810 80187AD0 3C040602 */  lui         $a0, %hi(D_60246F8)
/* EF0814 80187AD4 248446F8 */  addiu       $a0, $a0, %lo(D_60246F8)
/* EF0818 80187AD8 1100000A */  beqz        $t0, .Lending_80187B04
/* EF081C 80187ADC 00002825 */   or         $a1, $zero, $zero
/* EF0820 80187AE0 1117000C */  beq         $t0, $s7, .Lending_80187B14
/* EF0824 80187AE4 3C040603 */   lui        $a0, %hi(D_60338DC)
/* EF0828 80187AE8 111E0011 */  beq         $t0, $fp, .Lending_80187B30
/* EF082C 80187AEC 3C040603 */   lui        $a0, %hi(D_6036278)
/* EF0830 80187AF0 24010003 */  addiu       $at, $zero, 0x3
/* EF0834 80187AF4 11010015 */  beq         $t0, $at, .Lending_80187B4C
/* EF0838 80187AF8 3C040603 */   lui        $a0, %hi(D_603531C)
/* EF083C 80187AFC 10000019 */  b           .Lending_80187B64
/* EF0840 80187B00 AFA80084 */   sw         $t0, 0x84($sp)
.Lending_80187B04:
/* EF0844 80187B04 0C026A88 */  jal         Animation_GetFrameData
/* EF0848 80187B08 02403025 */   or         $a2, $s2, $zero
/* EF084C 80187B0C 10000015 */  b           .Lending_80187B64
/* EF0850 80187B10 00409825 */   or         $s3, $v0, $zero
.Lending_80187B14:
/* EF0854 80187B14 AFA80084 */  sw          $t0, 0x84($sp)
/* EF0858 80187B18 248438DC */  addiu       $a0, $a0, %lo(D_60338DC)
/* EF085C 80187B1C 00002825 */  or          $a1, $zero, $zero
/* EF0860 80187B20 0C026A88 */  jal         Animation_GetFrameData
/* EF0864 80187B24 02403025 */   or         $a2, $s2, $zero
/* EF0868 80187B28 1000000E */  b           .Lending_80187B64
/* EF086C 80187B2C 00409825 */   or         $s3, $v0, $zero
.Lending_80187B30:
/* EF0870 80187B30 AFA80084 */  sw          $t0, 0x84($sp)
/* EF0874 80187B34 24846278 */  addiu       $a0, $a0, %lo(D_6036278)
/* EF0878 80187B38 00002825 */  or          $a1, $zero, $zero
/* EF087C 80187B3C 0C026A88 */  jal         Animation_GetFrameData
/* EF0880 80187B40 02403025 */   or         $a2, $s2, $zero
/* EF0884 80187B44 10000007 */  b           .Lending_80187B64
/* EF0888 80187B48 00409825 */   or         $s3, $v0, $zero
.Lending_80187B4C:
/* EF088C 80187B4C AFA80084 */  sw          $t0, 0x84($sp)
/* EF0890 80187B50 2484531C */  addiu       $a0, $a0, %lo(D_603531C)
/* EF0894 80187B54 00002825 */  or          $a1, $zero, $zero
/* EF0898 80187B58 0C026A88 */  jal         Animation_GetFrameData
/* EF089C 80187B5C 02403025 */   or         $a2, $s2, $zero
/* EF08A0 80187B60 00409825 */  or          $s3, $v0, $zero
.Lending_80187B64:
/* EF08A4 80187B64 8FA80084 */  lw          $t0, 0x84($sp)
/* EF08A8 80187B68 3C018019 */  lui         $at, %hi(D_ending_80196460)
/* EF08AC 80187B6C C42A6460 */  lwc1        $ft3, %lo(D_ending_80196460)($at)
/* EF08B0 80187B70 01160019 */  multu       $t0, $s6
/* EF08B4 80187B74 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* EF08B8 80187B78 44818000 */  mtc1        $at, $ft4
/* EF08BC 80187B7C 3C018019 */  lui         $at, %hi(D_ending_80196464)
/* EF08C0 80187B80 C4326464 */  lwc1        $ft5, %lo(D_ending_80196464)($at)
/* EF08C4 80187B84 02402025 */  or          $a0, $s2, $zero
/* EF08C8 80187B88 02E03025 */  or          $a2, $s7, $zero
/* EF08CC 80187B8C 02603825 */  or          $a3, $s3, $zero
/* EF08D0 80187B90 E7AA0010 */  swc1        $ft3, 0x10($sp)
/* EF08D4 80187B94 E7B00014 */  swc1        $ft4, 0x14($sp)
/* EF08D8 80187B98 00007812 */  mflo        $t7
/* EF08DC 80187B9C 02AF2821 */  addu        $a1, $s5, $t7
/* EF08E0 80187BA0 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* EF08E4 80187BA4 E7B20018 */   swc1       $ft5, 0x18($sp)
/* EF08E8 80187BA8 1000003C */  b           .Lending_80187C9C
/* EF08EC 80187BAC 8FA80084 */   lw         $t0, 0x84($sp)
.Lending_80187BB0:
/* EF08F0 80187BB0 02184821 */  addu        $t1, $s0, $t8
.Lending_80187BB4:
/* EF08F4 80187BB4 0C026B37 */  jal         Animation_GetFrameCount
/* EF08F8 80187BB8 8D240000 */   lw         $a0, 0x0($t1)
/* EF08FC 80187BBC 8FA80084 */  lw          $t0, 0x84($sp)
/* EF0900 80187BC0 240B0001 */  addiu       $t3, $zero, 0x1
/* EF0904 80187BC4 00086180 */  sll         $t4, $t0, 6
/* EF0908 80187BC8 020C1821 */  addu        $v1, $s0, $t4
/* EF090C 80187BCC 8C6D0034 */  lw          $t5, 0x34($v1)
/* EF0910 80187BD0 C4680030 */  lwc1        $ft2, 0x30($v1)
/* EF0914 80187BD4 8C640000 */  lw          $a0, 0x0($v1)
/* EF0918 80187BD8 448D2000 */  mtc1        $t5, $ft0
/* EF091C 80187BDC 00000000 */  nop
/* EF0920 80187BE0 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF0924 80187BE4 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF0928 80187BE8 444AF800 */  cfc1        $t2, $31
/* EF092C 80187BEC 44CBF800 */  ctc1        $t3, $31
/* EF0930 80187BF0 00000000 */  nop
/* EF0934 80187BF4 46005424 */  cvt.w.s     $ft4, $ft3
/* EF0938 80187BF8 444BF800 */  cfc1        $t3, $31
/* EF093C 80187BFC 00000000 */  nop
/* EF0940 80187C00 31610004 */  andi        $at, $t3, 0x4
/* EF0944 80187C04 316B0078 */  andi        $t3, $t3, 0x78
/* EF0948 80187C08 51600015 */  beql        $t3, $zero, .Lending_80187C60
/* EF094C 80187C0C 440B8000 */   mfc1       $t3, $ft4
/* EF0950 80187C10 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF0954 80187C14 44818000 */  mtc1        $at, $ft4
/* EF0958 80187C18 240B0001 */  addiu       $t3, $zero, 0x1
/* EF095C 80187C1C 46105401 */  sub.s       $ft4, $ft3, $ft4
/* EF0960 80187C20 44CBF800 */  ctc1        $t3, $31
/* EF0964 80187C24 00000000 */  nop
/* EF0968 80187C28 46008424 */  cvt.w.s     $ft4, $ft4
/* EF096C 80187C2C 444BF800 */  cfc1        $t3, $31
/* EF0970 80187C30 00000000 */  nop
/* EF0974 80187C34 31610004 */  andi        $at, $t3, 0x4
/* EF0978 80187C38 316B0078 */  andi        $t3, $t3, 0x78
/* EF097C 80187C3C 15600005 */  bnez        $t3, .Lending_80187C54
/* EF0980 80187C40 00000000 */   nop
/* EF0984 80187C44 440B8000 */  mfc1        $t3, $ft4
/* EF0988 80187C48 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF098C 80187C4C 10000007 */  b           .Lending_80187C6C
/* EF0990 80187C50 01615825 */   or         $t3, $t3, $at
.Lending_80187C54:
/* EF0994 80187C54 10000005 */  b           .Lending_80187C6C
/* EF0998 80187C58 240BFFFF */   addiu      $t3, $zero, -0x1
/* EF099C 80187C5C 440B8000 */  mfc1        $t3, $ft4
.Lending_80187C60:
/* EF09A0 80187C60 00000000 */  nop
/* EF09A4 80187C64 0560FFFB */  bltz        $t3, .Lending_80187C54
/* EF09A8 80187C68 00000000 */   nop
.Lending_80187C6C:
/* EF09AC 80187C6C 0162001B */  divu        $zero, $t3, $v0
/* EF09B0 80187C70 00002810 */  mfhi        $a1
/* EF09B4 80187C74 44CAF800 */  ctc1        $t2, $31
/* EF09B8 80187C78 14400002 */  bnez        $v0, .Lending_80187C84
/* EF09BC 80187C7C 00000000 */   nop
/* EF09C0 80187C80 0007000D */  break       7
.Lending_80187C84:
/* EF09C4 80187C84 01160019 */  multu       $t0, $s6
/* EF09C8 80187C88 0000C812 */  mflo        $t9
/* EF09CC 80187C8C 02B93021 */  addu        $a2, $s5, $t9
/* EF09D0 80187C90 0C026A88 */  jal         Animation_GetFrameData
/* EF09D4 80187C94 00000000 */   nop
/* EF09D8 80187C98 8FA80084 */  lw          $t0, 0x84($sp)
.Lending_80187C9C:
/* EF09DC 80187C9C 3C0C800C */  lui         $t4, %hi(gIdentityMatrix)
/* EF09E0 80187CA0 258C4660 */  addiu       $t4, $t4, %lo(gIdentityMatrix)
/* EF09E4 80187CA4 01160019 */  multu       $t0, $s6
/* EF09E8 80187CA8 00087180 */  sll         $t6, $t0, 6
/* EF09EC 80187CAC 020E7821 */  addu        $t7, $s0, $t6
/* EF09F0 80187CB0 8DE50004 */  lw          $a1, 0x4($t7)
/* EF09F4 80187CB4 27A90084 */  addiu       $t1, $sp, 0x84
/* EF09F8 80187CB8 AFA90014 */  sw          $t1, 0x14($sp)
/* EF09FC 80187CBC AFAC0018 */  sw          $t4, 0x18($sp)
/* EF0A00 80187CC0 AFA00010 */  sw          $zero, 0x10($sp)
/* EF0A04 80187CC4 00002025 */  or          $a0, $zero, $zero
/* EF0A08 80187CC8 8FA70060 */  lw          $a3, 0x60($sp)
/* EF0A0C 80187CCC 0000C012 */  mflo        $t8
/* EF0A10 80187CD0 02B83021 */  addu        $a2, $s5, $t8
/* EF0A14 80187CD4 0C0269CB */  jal         Animation_DrawSkeleton
/* EF0A18 80187CD8 00000000 */   nop
/* EF0A1C 80187CDC 0C0015D0 */  jal         Matrix_Pop
/* EF0A20 80187CE0 02202025 */   or         $a0, $s1, $zero
/* EF0A24 80187CE4 8FA80084 */  lw          $t0, 0x84($sp)
/* EF0A28 80187CE8 3C0D8019 */  lui         $t5, %hi(D_ending_80196F88)
/* EF0A2C 80187CEC 8DAD6F88 */  lw          $t5, %lo(D_ending_80196F88)($t5)
/* EF0A30 80187CF0 25080001 */  addiu       $t0, $t0, 0x1
/* EF0A34 80187CF4 AFA80084 */  sw          $t0, 0x84($sp)
/* EF0A38 80187CF8 010D082A */  slt         $at, $t0, $t5
/* EF0A3C 80187CFC 1420FF07 */  bnez        $at, .Lending_8018791C
/* EF0A40 80187D00 00000000 */   nop
/* EF0A44 80187D04 AFB30080 */  sw          $s3, 0x80($sp)
.Lending_80187D08:
/* EF0A48 80187D08 8FBF0054 */  lw          $ra, 0x54($sp)
/* EF0A4C 80187D0C D7B40028 */  ldc1        $fs0, 0x28($sp)
/* EF0A50 80187D10 8FB00030 */  lw          $s0, 0x30($sp)
/* EF0A54 80187D14 8FB10034 */  lw          $s1, 0x34($sp)
/* EF0A58 80187D18 8FB20038 */  lw          $s2, 0x38($sp)
/* EF0A5C 80187D1C 8FB3003C */  lw          $s3, 0x3C($sp)
/* EF0A60 80187D20 8FB40040 */  lw          $s4, 0x40($sp)
/* EF0A64 80187D24 8FB50044 */  lw          $s5, 0x44($sp)
/* EF0A68 80187D28 8FB60048 */  lw          $s6, 0x48($sp)
/* EF0A6C 80187D2C 8FB7004C */  lw          $s7, 0x4C($sp)
/* EF0A70 80187D30 8FBE0050 */  lw          $fp, 0x50($sp)
/* EF0A74 80187D34 03E00008 */  jr          $ra
/* EF0A78 80187D38 27BD02E0 */   addiu      $sp, $sp, 0x2E0
.section .late_rodata
dlabel D_ending_80196468
/* EFF1A8 80196468 3B83126F */ .float 0.00400000019

dlabel D_ending_8019646C
/* EFF1AC 8019646C 3B449BA6 */ .float 0.003000000026


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_80187D3C
/* EF0A7C 80187D3C 27BDFDB0 */  addiu       $sp, $sp, -0x250
/* EF0A80 80187D40 3C058019 */  lui         $a1, %hi(D_ending_80196F88)
/* EF0A84 80187D44 24A56F88 */  addiu       $a1, $a1, %lo(D_ending_80196F88)
/* EF0A88 80187D48 AFB1000C */  sw          $s1, 0xC($sp)
/* EF0A8C 80187D4C AFB00008 */  sw          $s0, 0x8($sp)
/* EF0A90 80187D50 27A2023C */  addiu       $v0, $sp, 0x23C
/* EF0A94 80187D54 3C0E8019 */  lui         $t6, %hi(D_ending_80192830)
/* EF0A98 80187D58 25CE2830 */  addiu       $t6, $t6, %lo(D_ending_80192830)
/* EF0A9C 80187D5C 8DC10000 */  lw          $at, 0x0($t6)
/* EF0AA0 80187D60 3C0F8019 */  lui         $t7, %hi(D_ending_8019283C)
/* EF0AA4 80187D64 25EF283C */  addiu       $t7, $t7, %lo(D_ending_8019283C)
/* EF0AA8 80187D68 AC410000 */  sw          $at, 0x0($v0)
/* EF0AAC 80187D6C 8DD90004 */  lw          $t9, 0x4($t6)
/* EF0AB0 80187D70 27B8013C */  addiu       $t8, $sp, 0x13C
/* EF0AB4 80187D74 3C0D8019 */  lui         $t5, %hi(D_ending_80196FA0 + 0xC)
/* EF0AB8 80187D78 AC590004 */  sw          $t9, 0x4($v0)
/* EF0ABC 80187D7C 8DC10008 */  lw          $at, 0x8($t6)
/* EF0AC0 80187D80 25F900FC */  addiu       $t9, $t7, 0xFC
/* EF0AC4 80187D84 27AE003C */  addiu       $t6, $sp, 0x3C
/* EF0AC8 80187D88 AC410008 */  sw          $at, 0x8($v0)
.Lending_80187D8C:
/* EF0ACC 80187D8C 8DE10000 */  lw          $at, 0x0($t7)
/* EF0AD0 80187D90 25EF000C */  addiu       $t7, $t7, 0xC
/* EF0AD4 80187D94 2718000C */  addiu       $t8, $t8, 0xC
/* EF0AD8 80187D98 AF01FFF4 */  sw          $at, -0xC($t8)
/* EF0ADC 80187D9C 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF0AE0 80187DA0 AF01FFF8 */  sw          $at, -0x8($t8)
/* EF0AE4 80187DA4 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF0AE8 80187DA8 15F9FFF8 */  bne         $t7, $t9, .Lending_80187D8C
/* EF0AEC 80187DAC AF01FFFC */   sw         $at, -0x4($t8)
/* EF0AF0 80187DB0 8DE10000 */  lw          $at, 0x0($t7)
/* EF0AF4 80187DB4 3C198019 */  lui         $t9, %hi(D_ending_8019293C)
/* EF0AF8 80187DB8 2739293C */  addiu       $t9, $t9, %lo(D_ending_8019293C)
/* EF0AFC 80187DBC AF010000 */  sw          $at, 0x0($t8)
/* EF0B00 80187DC0 273800FC */  addiu       $t8, $t9, 0xFC
.Lending_80187DC4:
/* EF0B04 80187DC4 8F210000 */  lw          $at, 0x0($t9)
/* EF0B08 80187DC8 2739000C */  addiu       $t9, $t9, 0xC
/* EF0B0C 80187DCC 25CE000C */  addiu       $t6, $t6, 0xC
/* EF0B10 80187DD0 ADC1FFF4 */  sw          $at, -0xC($t6)
/* EF0B14 80187DD4 8F21FFF8 */  lw          $at, -0x8($t9)
/* EF0B18 80187DD8 ADC1FFF8 */  sw          $at, -0x8($t6)
/* EF0B1C 80187DDC 8F21FFFC */  lw          $at, -0x4($t9)
/* EF0B20 80187DE0 1738FFF8 */  bne         $t9, $t8, .Lending_80187DC4
/* EF0B24 80187DE4 ADC1FFFC */   sw         $at, -0x4($t6)
/* EF0B28 80187DE8 8F210000 */  lw          $at, 0x0($t9)
/* EF0B2C 80187DEC 240F0004 */  addiu       $t7, $zero, 0x4
/* EF0B30 80187DF0 25AD6FAC */  addiu       $t5, $t5, %lo(D_ending_80196FA0 + 0xC)
/* EF0B34 80187DF4 ADC10000 */  sw          $at, 0x0($t6)
/* EF0B38 80187DF8 10800006 */  beqz        $a0, .Lending_80187E14
/* EF0B3C 80187DFC ACAF0000 */   sw         $t7, 0x0($a1)
/* EF0B40 80187E00 24010001 */  addiu       $at, $zero, 0x1
/* EF0B44 80187E04 50810023 */  beql        $a0, $at, .Lending_80187E94
/* EF0B48 80187E08 8CA40000 */   lw         $a0, 0x0($a1)
/* EF0B4C 80187E0C 1000003E */  b           .Lending_80187F08
/* EF0B50 80187E10 00000000 */   nop
.Lending_80187E14:
/* EF0B54 80187E14 8CA40000 */  lw          $a0, 0x0($a1)
/* EF0B58 80187E18 3C038019 */  lui         $v1, %hi(D_ending_80196D08)
/* EF0B5C 80187E1C 24636D08 */  addiu       $v1, $v1, %lo(D_ending_80196D08)
/* EF0B60 80187E20 18800016 */  blez        $a0, .Lending_80187E7C
/* EF0B64 80187E24 27A5013C */   addiu      $a1, $sp, 0x13C
/* EF0B68 80187E28 0004C980 */  sll         $t9, $a0, 6
/* EF0B6C 80187E2C 03253021 */  addu        $a2, $t9, $a1
/* EF0B70 80187E30 00A0C825 */  or          $t9, $a1, $zero
.Lending_80187E34:
/* EF0B74 80187E34 0060C025 */  or          $t8, $v1, $zero
/* EF0B78 80187E38 24AF003C */  addiu       $t7, $a1, 0x3C
.Lending_80187E3C:
/* EF0B7C 80187E3C 8F210000 */  lw          $at, 0x0($t9)
/* EF0B80 80187E40 2739000C */  addiu       $t9, $t9, 0xC
/* EF0B84 80187E44 2718000C */  addiu       $t8, $t8, 0xC
/* EF0B88 80187E48 AF01FFF4 */  sw          $at, -0xC($t8)
/* EF0B8C 80187E4C 8F21FFF8 */  lw          $at, -0x8($t9)
/* EF0B90 80187E50 AF01FFF8 */  sw          $at, -0x8($t8)
/* EF0B94 80187E54 8F21FFFC */  lw          $at, -0x4($t9)
/* EF0B98 80187E58 172FFFF8 */  bne         $t9, $t7, .Lending_80187E3C
/* EF0B9C 80187E5C AF01FFFC */   sw         $at, -0x4($t8)
/* EF0BA0 80187E60 8F210000 */  lw          $at, 0x0($t9)
/* EF0BA4 80187E64 24A50040 */  addiu       $a1, $a1, 0x40
/* EF0BA8 80187E68 24630040 */  addiu       $v1, $v1, 0x40
/* EF0BAC 80187E6C AF010000 */  sw          $at, 0x0($t8)
/* EF0BB0 80187E70 00A6082B */  sltu        $at, $a1, $a2
/* EF0BB4 80187E74 5420FFEF */  bnel        $at, $zero, .Lending_80187E34
/* EF0BB8 80187E78 00A0C825 */   or         $t9, $a1, $zero
.Lending_80187E7C:
/* EF0BBC 80187E7C 3C018019 */  lui         $at, %hi(D_ending_80196468)
/* EF0BC0 80187E80 C4246468 */  lwc1        $ft0, %lo(D_ending_80196468)($at)
/* EF0BC4 80187E84 3C018019 */  lui         $at, %hi(D_ending_80196F9C)
/* EF0BC8 80187E88 1000001F */  b           .Lending_80187F08
/* EF0BCC 80187E8C E4246F9C */   swc1       $ft0, %lo(D_ending_80196F9C)($at)
/* EF0BD0 80187E90 8CA40000 */  lw          $a0, 0x0($a1)
.Lending_80187E94:
/* EF0BD4 80187E94 3C038019 */  lui         $v1, %hi(D_ending_80196D08)
/* EF0BD8 80187E98 24636D08 */  addiu       $v1, $v1, %lo(D_ending_80196D08)
/* EF0BDC 80187E9C 18800016 */  blez        $a0, .Lending_80187EF8
/* EF0BE0 80187EA0 27A5003C */   addiu      $a1, $sp, 0x3C
/* EF0BE4 80187EA4 00047980 */  sll         $t7, $a0, 6
/* EF0BE8 80187EA8 01E53021 */  addu        $a2, $t7, $a1
/* EF0BEC 80187EAC 00A07825 */  or          $t7, $a1, $zero
.Lending_80187EB0:
/* EF0BF0 80187EB0 00607025 */  or          $t6, $v1, $zero
/* EF0BF4 80187EB4 24B8003C */  addiu       $t8, $a1, 0x3C
.Lending_80187EB8:
/* EF0BF8 80187EB8 8DE10000 */  lw          $at, 0x0($t7)
/* EF0BFC 80187EBC 25EF000C */  addiu       $t7, $t7, 0xC
/* EF0C00 80187EC0 25CE000C */  addiu       $t6, $t6, 0xC
/* EF0C04 80187EC4 ADC1FFF4 */  sw          $at, -0xC($t6)
/* EF0C08 80187EC8 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF0C0C 80187ECC ADC1FFF8 */  sw          $at, -0x8($t6)
/* EF0C10 80187ED0 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF0C14 80187ED4 15F8FFF8 */  bne         $t7, $t8, .Lending_80187EB8
/* EF0C18 80187ED8 ADC1FFFC */   sw         $at, -0x4($t6)
/* EF0C1C 80187EDC 8DE10000 */  lw          $at, 0x0($t7)
/* EF0C20 80187EE0 24A50040 */  addiu       $a1, $a1, 0x40
/* EF0C24 80187EE4 24630040 */  addiu       $v1, $v1, 0x40
/* EF0C28 80187EE8 ADC10000 */  sw          $at, 0x0($t6)
/* EF0C2C 80187EEC 00A6082B */  sltu        $at, $a1, $a2
/* EF0C30 80187EF0 5420FFEF */  bnel        $at, $zero, .Lending_80187EB0
/* EF0C34 80187EF4 00A07825 */   or         $t7, $a1, $zero
.Lending_80187EF8:
/* EF0C38 80187EF8 3C018019 */  lui         $at, %hi(D_ending_8019646C)
/* EF0C3C 80187EFC C426646C */  lwc1        $ft1, %lo(D_ending_8019646C)($at)
/* EF0C40 80187F00 3C018019 */  lui         $at, %hi(D_ending_80196F9C)
/* EF0C44 80187F04 E4266F9C */  swc1        $ft1, %lo(D_ending_80196F9C)($at)
.Lending_80187F08:
/* EF0C48 80187F08 3C19801A */  lui         $t9, %hi(D_ending_80198260)
/* EF0C4C 80187F0C 3C188019 */  lui         $t8, %hi(D_ending_80196FA0)
/* EF0C50 80187F10 270C6FA0 */  addiu       $t4, $t8, %lo(D_ending_80196FA0)
/* EF0C54 80187F14 272B8260 */  addiu       $t3, $t9, %lo(D_ending_80198260)
/* EF0C58 80187F18 3C118019 */  lui         $s1, %hi(D_ending_80197900 + 0xC)
/* EF0C5C 80187F1C 2631790C */  addiu       $s1, $s1, %lo(D_ending_80197900 + 0xC)
/* EF0C60 80187F20 01602025 */  or          $a0, $t3, $zero
/* EF0C64 80187F24 01803025 */  or          $a2, $t4, $zero
/* EF0C68 80187F28 24100032 */  addiu       $s0, $zero, 0x32
.Lending_80187F2C:
/* EF0C6C 80187F2C 8C410000 */  lw          $at, 0x0($v0)
/* EF0C70 80187F30 8C4E0004 */  lw          $t6, 0x4($v0)
/* EF0C74 80187F34 8C580004 */  lw          $t8, 0x4($v0)
/* EF0C78 80187F38 AD810000 */  sw          $at, 0x0($t4)
/* EF0C7C 80187F3C 8C410008 */  lw          $at, 0x8($v0)
/* EF0C80 80187F40 AD8E0004 */  sw          $t6, 0x4($t4)
/* EF0C84 80187F44 24C70018 */  addiu       $a3, $a2, 0x18
/* EF0C88 80187F48 AD810008 */  sw          $at, 0x8($t4)
/* EF0C8C 80187F4C 8C410000 */  lw          $at, 0x0($v0)
/* EF0C90 80187F50 24E8000C */  addiu       $t0, $a3, 0xC
/* EF0C94 80187F54 24E90018 */  addiu       $t1, $a3, 0x18
/* EF0C98 80187F58 ADA10000 */  sw          $at, 0x0($t5)
/* EF0C9C 80187F5C 8C410008 */  lw          $at, 0x8($v0)
/* EF0CA0 80187F60 24EA0024 */  addiu       $t2, $a3, 0x24
/* EF0CA4 80187F64 AD600000 */  sw          $zero, 0x0($t3)
/* EF0CA8 80187F68 AD600004 */  sw          $zero, 0x4($t3)
/* EF0CAC 80187F6C 24030002 */  addiu       $v1, $zero, 0x2
/* EF0CB0 80187F70 24850008 */  addiu       $a1, $a0, 0x8
/* EF0CB4 80187F74 ADB80004 */  sw          $t8, 0x4($t5)
/* EF0CB8 80187F78 ADA10008 */  sw          $at, 0x8($t5)
.Lending_80187F7C:
/* EF0CBC 80187F7C 8C410000 */  lw          $at, 0x0($v0)
/* EF0CC0 80187F80 8C4E0004 */  lw          $t6, 0x4($v0)
/* EF0CC4 80187F84 8C580004 */  lw          $t8, 0x4($v0)
/* EF0CC8 80187F88 ACE10000 */  sw          $at, 0x0($a3)
/* EF0CCC 80187F8C 8C410008 */  lw          $at, 0x8($v0)
/* EF0CD0 80187F90 ACEE0004 */  sw          $t6, 0x4($a3)
/* EF0CD4 80187F94 8C4E0004 */  lw          $t6, 0x4($v0)
/* EF0CD8 80187F98 ACE10008 */  sw          $at, 0x8($a3)
/* EF0CDC 80187F9C 8C410000 */  lw          $at, 0x0($v0)
/* EF0CE0 80187FA0 AD180004 */  sw          $t8, 0x4($t0)
/* EF0CE4 80187FA4 8C580004 */  lw          $t8, 0x4($v0)
/* EF0CE8 80187FA8 AD010000 */  sw          $at, 0x0($t0)
/* EF0CEC 80187FAC 8C410008 */  lw          $at, 0x8($v0)
/* EF0CF0 80187FB0 24630004 */  addiu       $v1, $v1, 0x4
/* EF0CF4 80187FB4 ACA00004 */  sw          $zero, 0x4($a1)
/* EF0CF8 80187FB8 AD010008 */  sw          $at, 0x8($t0)
/* EF0CFC 80187FBC 8C410000 */  lw          $at, 0x0($v0)
/* EF0D00 80187FC0 AD2E0004 */  sw          $t6, 0x4($t1)
/* EF0D04 80187FC4 ACA00008 */  sw          $zero, 0x8($a1)
/* EF0D08 80187FC8 AD210000 */  sw          $at, 0x0($t1)
/* EF0D0C 80187FCC 8C410008 */  lw          $at, 0x8($v0)
/* EF0D10 80187FD0 ACA0000C */  sw          $zero, 0xC($a1)
/* EF0D14 80187FD4 24A50010 */  addiu       $a1, $a1, 0x10
/* EF0D18 80187FD8 AD210008 */  sw          $at, 0x8($t1)
/* EF0D1C 80187FDC 8C410000 */  lw          $at, 0x0($v0)
/* EF0D20 80187FE0 24E70030 */  addiu       $a3, $a3, 0x30
/* EF0D24 80187FE4 25080030 */  addiu       $t0, $t0, 0x30
/* EF0D28 80187FE8 AD410000 */  sw          $at, 0x0($t2)
/* EF0D2C 80187FEC 8C410008 */  lw          $at, 0x8($v0)
/* EF0D30 80187FF0 25290030 */  addiu       $t1, $t1, 0x30
/* EF0D34 80187FF4 254A0030 */  addiu       $t2, $t2, 0x30
/* EF0D38 80187FF8 ACA0FFF0 */  sw          $zero, -0x10($a1)
/* EF0D3C 80187FFC AD58FFD4 */  sw          $t8, -0x2C($t2)
/* EF0D40 80188000 1470FFDE */  bne         $v1, $s0, .Lending_80187F7C
/* EF0D44 80188004 AD41FFD8 */   sw         $at, -0x28($t2)
/* EF0D48 80188008 25AD0258 */  addiu       $t5, $t5, 0x258
/* EF0D4C 8018800C 248400C8 */  addiu       $a0, $a0, 0xC8
/* EF0D50 80188010 24C60258 */  addiu       $a2, $a2, 0x258
/* EF0D54 80188014 256B00C8 */  addiu       $t3, $t3, 0xC8
/* EF0D58 80188018 15B1FFC4 */  bne         $t5, $s1, .Lending_80187F2C
/* EF0D5C 8018801C 258C0258 */   addiu      $t4, $t4, 0x258
/* EF0D60 80188020 8FB00008 */  lw          $s0, 0x8($sp)
/* EF0D64 80188024 8FB1000C */  lw          $s1, 0xC($sp)
/* EF0D68 80188028 03E00008 */  jr          $ra
/* EF0D6C 8018802C 27BD0250 */   addiu      $sp, $sp, 0x250
.section .late_rodata
dlabel D_ending_80196470
/* EFF1B0 80196470 44F64000 */ .float 1970

dlabel D_ending_80196474
/* EFF1B4 80196474 38D1B717 */ .float 9.999999747e-05

dlabel D_ending_80196478
/* EFF1B8 80196478 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_8019647C
/* EFF1BC 8019647C 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_80196480
/* EFF1C0 80196480 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_80196484
/* EFF1C4 80196484 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_80196488
/* EFF1C8 80196488 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_8019648C
/* EFF1CC 8019648C 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_80196490
/* EFF1D0 80196490 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_80196494
/* EFF1D4 80196494 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_80196498
/* EFF1D8 80196498 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_8019649C
/* EFF1DC 8019649C 3DCCCCCD */ .float 0.1000000015


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_80188030
/* EF0D70 80188030 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* EF0D74 80188034 AFB00020 */  sw          $s0, 0x20($sp)
/* EF0D78 80188038 00808025 */  or          $s0, $a0, $zero
/* EF0D7C 8018803C AFBF0024 */  sw          $ra, 0x24($sp)
/* EF0D80 80188040 12000007 */  beqz        $s0, .Lending_80188060
/* EF0D84 80188044 3C01C461 */   lui        $at, (0xC4610000 >> 16)
/* EF0D88 80188048 24080001 */  addiu       $t0, $zero, 0x1
/* EF0D8C 8018804C 12080014 */  beq         $s0, $t0, .Lending_801880A0
/* EF0D90 80188050 3C018019 */   lui        $at, %hi(D_ending_80196470)
/* EF0D94 80188054 C7AE0030 */  lwc1        $fa1, 0x30($sp)
/* EF0D98 80188058 10000018 */  b           .Lending_801880BC
/* EF0D9C 8018805C C7AC002C */   lwc1       $fa0, 0x2C($sp)
.Lending_80188060:
/* EF0DA0 80188060 44810000 */  mtc1        $at, $fv0
/* EF0DA4 80188064 3C018019 */  lui         $at, %hi(D_ending_80196F9C)
/* EF0DA8 80188068 C4226F9C */  lwc1        $fv1, %lo(D_ending_80196F9C)($at)
/* EF0DAC 8018806C 46000005 */  abs.s       $fv0, $fv0
/* EF0DB0 80188070 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* EF0DB4 80188074 46020302 */  mul.s       $fa0, $fv0, $fv1
/* EF0DB8 80188078 44812000 */  mtc1        $at, $ft0
/* EF0DBC 8018807C 3C01C3A0 */  lui         $at, (0xC3A00000 >> 16)
/* EF0DC0 80188080 44810000 */  mtc1        $at, $fv0
/* EF0DC4 80188084 24080001 */  addiu       $t0, $zero, 0x1
/* EF0DC8 80188088 46000005 */  abs.s       $fv0, $fv0
/* EF0DCC 8018808C 46046302 */  mul.s       $fa0, $fa0, $ft0
/* EF0DD0 80188090 00000000 */  nop
/* EF0DD4 80188094 46020382 */  mul.s       $fa1, $fv0, $fv1
/* EF0DD8 80188098 10000008 */  b           .Lending_801880BC
/* EF0DDC 8018809C 00000000 */   nop
.Lending_801880A0:
/* EF0DE0 801880A0 C4206470 */  lwc1        $fv0, %lo(D_ending_80196470)($at)
/* EF0DE4 801880A4 3C018019 */  lui         $at, %hi(D_ending_80196F9C)
/* EF0DE8 801880A8 C4266F9C */  lwc1        $ft1, %lo(D_ending_80196F9C)($at)
/* EF0DEC 801880AC 46000005 */  abs.s       $fv0, $fv0
/* EF0DF0 801880B0 44807000 */  mtc1        $zero, $fa1
/* EF0DF4 801880B4 46060302 */  mul.s       $fa0, $fv0, $ft1
/* EF0DF8 801880B8 00000000 */  nop
.Lending_801880BC:
/* EF0DFC 801880BC 16080013 */  bne         $s0, $t0, .Lending_8018810C
/* EF0E00 801880C0 3C0E8017 */   lui        $t6, %hi(gCsFrameCount)
/* EF0E04 801880C4 8DCE7A80 */  lw          $t6, %lo(gCsFrameCount)($t6)
/* EF0E08 801880C8 3C048019 */  lui         $a0, %hi(D_ending_80196F9C)
/* EF0E0C 801880CC 24846F9C */  addiu       $a0, $a0, %lo(D_ending_80196F9C)
/* EF0E10 801880D0 29C1018A */  slti        $at, $t6, 0x18A
/* EF0E14 801880D4 1420000D */  bnez        $at, .Lending_8018810C
/* EF0E18 801880D8 24050000 */   addiu      $a1, $zero, 0x0
/* EF0E1C 801880DC 3C018019 */  lui         $at, %hi(D_ending_80196474)
/* EF0E20 801880E0 C4286474 */  lwc1        $ft2, %lo(D_ending_80196474)($at)
/* EF0E24 801880E4 3C063DCC */  lui         $a2, (0x3DCCCCCD >> 16)
/* EF0E28 801880E8 34C6CCCD */  ori         $a2, $a2, (0x3DCCCCCD & 0xFFFF)
/* EF0E2C 801880EC 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* EF0E30 801880F0 E7AC002C */  swc1        $fa0, 0x2C($sp)
/* EF0E34 801880F4 E7AE0030 */  swc1        $fa1, 0x30($sp)
/* EF0E38 801880F8 0C026F0B */  jal         Math_SmoothStepToF
/* EF0E3C 801880FC E7A80010 */   swc1       $ft2, 0x10($sp)
/* EF0E40 80188100 24080001 */  addiu       $t0, $zero, 0x1
/* EF0E44 80188104 C7AC002C */  lwc1        $fa0, 0x2C($sp)
/* EF0E48 80188108 C7AE0030 */  lwc1        $fa1, 0x30($sp)
.Lending_8018810C:
/* EF0E4C 8018810C 3C058019 */  lui         $a1, %hi(D_ending_80196F88)
/* EF0E50 80188110 8CA56F88 */  lw          $a1, %lo(D_ending_80196F88)($a1)
/* EF0E54 80188114 3C048017 */  lui         $a0, %hi(gCsFrameCount)
/* EF0E58 80188118 8C847A80 */  lw          $a0, %lo(gCsFrameCount)($a0)
/* EF0E5C 8018811C 18A00015 */  blez        $a1, .Lending_80188174
/* EF0E60 80188120 3C0F8019 */   lui        $t7, %hi(D_ending_80196D08)
/* EF0E64 80188124 25E26D08 */  addiu       $v0, $t7, %lo(D_ending_80196D08)
/* EF0E68 80188128 0005C180 */  sll         $t8, $a1, 6
/* EF0E6C 8018812C 03021821 */  addu        $v1, $t8, $v0
/* EF0E70 80188130 C44A0014 */  lwc1        $ft3, 0x14($v0)
.Lending_80188134:
/* EF0E74 80188134 C4520010 */  lwc1        $ft5, 0x10($v0)
/* EF0E78 80188138 2881018A */  slti        $at, $a0, 0x18A
/* EF0E7C 8018813C 460C5401 */  sub.s       $ft4, $ft3, $fa0
/* EF0E80 80188140 460E9100 */  add.s       $ft0, $ft5, $fa1
/* EF0E84 80188144 E4500014 */  swc1        $ft4, 0x14($v0)
/* EF0E88 80188148 16080003 */  bne         $s0, $t0, .Lending_80188158
/* EF0E8C 8018814C E4440010 */   swc1       $ft0, 0x10($v0)
/* EF0E90 80188150 50200005 */  beql        $at, $zero, .Lending_80188168
/* EF0E94 80188154 24420040 */   addiu      $v0, $v0, 0x40
.Lending_80188158:
/* EF0E98 80188158 8C590034 */  lw          $t9, 0x34($v0)
/* EF0E9C 8018815C 27290001 */  addiu       $t1, $t9, 0x1
/* EF0EA0 80188160 AC490034 */  sw          $t1, 0x34($v0)
/* EF0EA4 80188164 24420040 */  addiu       $v0, $v0, 0x40
.Lending_80188168:
/* EF0EA8 80188168 0043082B */  sltu        $at, $v0, $v1
/* EF0EAC 8018816C 5420FFF1 */  bnel        $at, $zero, .Lending_80188134
/* EF0EB0 80188170 C44A0014 */   lwc1       $ft3, 0x14($v0)
.Lending_80188174:
/* EF0EB4 80188174 28810096 */  slti        $at, $a0, 0x96
/* EF0EB8 80188178 14200002 */  bnez        $at, .Lending_80188184
/* EF0EBC 8018817C 288100AB */   slti       $at, $a0, 0xAB
/* EF0EC0 80188180 14200008 */  bnez        $at, .Lending_801881A4
.Lending_80188184:
/* EF0EC4 80188184 28810118 */   slti       $at, $a0, 0x118
/* EF0EC8 80188188 14200002 */  bnez        $at, .Lending_80188194
/* EF0ECC 8018818C 2881012D */   slti       $at, $a0, 0x12D
/* EF0ED0 80188190 14200004 */  bnez        $at, .Lending_801881A4
.Lending_80188194:
/* EF0ED4 80188194 28810154 */   slti       $at, $a0, 0x154
/* EF0ED8 80188198 14200022 */  bnez        $at, .Lending_80188224
/* EF0EDC 8018819C 28810169 */   slti       $at, $a0, 0x169
/* EF0EE0 801881A0 10200020 */  beqz        $at, .Lending_80188224
.Lending_801881A4:
/* EF0EE4 801881A4 3C018019 */   lui        $at, %hi(D_ending_80196478)
/* EF0EE8 801881A8 C4266478 */  lwc1        $ft1, %lo(D_ending_80196478)($at)
/* EF0EEC 801881AC 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B0)
/* EF0EF0 801881B0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF0EF4 801881B4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF0EF8 801881B8 24847450 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B0)
/* EF0EFC 801881BC 3C054220 */  lui         $a1, (0x42200000 >> 16)
/* EF0F00 801881C0 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF0F04 801881C4 0C026F0B */  jal         Math_SmoothStepToF
/* EF0F08 801881C8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* EF0F0C 801881CC 3C018019 */  lui         $at, %hi(D_ending_8019647C)
/* EF0F10 801881D0 C428647C */  lwc1        $ft2, %lo(D_ending_8019647C)($at)
/* EF0F14 801881D4 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B4)
/* EF0F18 801881D8 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF0F1C 801881DC 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF0F20 801881E0 24847454 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B4)
/* EF0F24 801881E4 3C054120 */  lui         $a1, (0x41200000 >> 16)
/* EF0F28 801881E8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF0F2C 801881EC 0C026F0B */  jal         Math_SmoothStepToF
/* EF0F30 801881F0 E7A80010 */   swc1       $ft2, 0x10($sp)
/* EF0F34 801881F4 3C018019 */  lui         $at, %hi(D_ending_80196480)
/* EF0F38 801881F8 C42A6480 */  lwc1        $ft3, %lo(D_ending_80196480)($at)
/* EF0F3C 801881FC 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4FC)
/* EF0F40 80188200 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF0F44 80188204 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF0F48 80188208 2484749C */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4FC)
/* EF0F4C 8018820C 24050000 */  addiu       $a1, $zero, 0x0
/* EF0F50 80188210 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF0F54 80188214 0C026F0B */  jal         Math_SmoothStepToF
/* EF0F58 80188218 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* EF0F5C 8018821C 10000059 */  b           .Lending_80188384
/* EF0F60 80188220 8FBF0024 */   lw         $ra, 0x24($sp)
.Lending_80188224:
/* EF0F64 80188224 1608000F */  bne         $s0, $t0, .Lending_80188264
/* EF0F68 80188228 288100C8 */   slti       $at, $a0, 0xC8
/* EF0F6C 8018822C 1420000D */  bnez        $at, .Lending_80188264
/* EF0F70 80188230 28810105 */   slti       $at, $a0, 0x105
/* EF0F74 80188234 1020000B */  beqz        $at, .Lending_80188264
/* EF0F78 80188238 3C054270 */   lui        $a1, (0x42700000 >> 16)
/* EF0F7C 8018823C 3C018019 */  lui         $at, %hi(D_ending_80196484)
/* EF0F80 80188240 C4206484 */  lwc1        $fv0, %lo(D_ending_80196484)($at)
/* EF0F84 80188244 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B0)
/* EF0F88 80188248 24847450 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B0)
/* EF0F8C 8018824C 44060000 */  mfc1        $a2, $fv0
/* EF0F90 80188250 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF0F94 80188254 0C026F0B */  jal         Math_SmoothStepToF
/* EF0F98 80188258 E7A00010 */   swc1       $fv0, 0x10($sp)
/* EF0F9C 8018825C 10000049 */  b           .Lending_80188384
/* EF0FA0 80188260 8FBF0024 */   lw         $ra, 0x24($sp)
.Lending_80188264:
/* EF0FA4 80188264 16080004 */  bne         $s0, $t0, .Lending_80188278
/* EF0FA8 80188268 288100AA */   slti       $at, $a0, 0xAA
/* EF0FAC 8018826C 14200002 */  bnez        $at, .Lending_80188278
/* EF0FB0 80188270 288100BF */   slti       $at, $a0, 0xBF
/* EF0FB4 80188274 14200005 */  bnez        $at, .Lending_8018828C
.Lending_80188278:
/* EF0FB8 80188278 2881012C */   slti       $at, $a0, 0x12C
/* EF0FBC 8018827C 14200023 */  bnez        $at, .Lending_8018830C
/* EF0FC0 80188280 24050000 */   addiu      $a1, $zero, 0x0
/* EF0FC4 80188284 28810141 */  slti        $at, $a0, 0x141
/* EF0FC8 80188288 10200020 */  beqz        $at, .Lending_8018830C
.Lending_8018828C:
/* EF0FCC 8018828C 3C018019 */   lui        $at, %hi(D_ending_80196488)
/* EF0FD0 80188290 C4306488 */  lwc1        $ft4, %lo(D_ending_80196488)($at)
/* EF0FD4 80188294 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B0)
/* EF0FD8 80188298 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF0FDC 8018829C 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF0FE0 801882A0 24847450 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B0)
/* EF0FE4 801882A4 3C05C220 */  lui         $a1, (0xC2200000 >> 16)
/* EF0FE8 801882A8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF0FEC 801882AC 0C026F0B */  jal         Math_SmoothStepToF
/* EF0FF0 801882B0 E7B00010 */   swc1       $ft4, 0x10($sp)
/* EF0FF4 801882B4 3C018019 */  lui         $at, %hi(D_ending_8019648C)
/* EF0FF8 801882B8 C432648C */  lwc1        $ft5, %lo(D_ending_8019648C)($at)
/* EF0FFC 801882BC 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B4)
/* EF1000 801882C0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF1004 801882C4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF1008 801882C8 24847454 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B4)
/* EF100C 801882CC 3C054120 */  lui         $a1, (0x41200000 >> 16)
/* EF1010 801882D0 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF1014 801882D4 0C026F0B */  jal         Math_SmoothStepToF
/* EF1018 801882D8 E7B20010 */   swc1       $ft5, 0x10($sp)
/* EF101C 801882DC 3C018019 */  lui         $at, %hi(D_ending_80196490)
/* EF1020 801882E0 C4246490 */  lwc1        $ft0, %lo(D_ending_80196490)($at)
/* EF1024 801882E4 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4FC)
/* EF1028 801882E8 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF102C 801882EC 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF1030 801882F0 2484749C */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4FC)
/* EF1034 801882F4 24050000 */  addiu       $a1, $zero, 0x0
/* EF1038 801882F8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF103C 801882FC 0C026F0B */  jal         Math_SmoothStepToF
/* EF1040 80188300 E7A40010 */   swc1       $ft0, 0x10($sp)
/* EF1044 80188304 1000001F */  b           .Lending_80188384
/* EF1048 80188308 8FBF0024 */   lw         $ra, 0x24($sp)
.Lending_8018830C:
/* EF104C 8018830C 3C018019 */  lui         $at, %hi(D_ending_80196494)
/* EF1050 80188310 C4266494 */  lwc1        $ft1, %lo(D_ending_80196494)($at)
/* EF1054 80188314 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B0)
/* EF1058 80188318 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF105C 8018831C 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF1060 80188320 24847450 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B0)
/* EF1064 80188324 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF1068 80188328 0C026F0B */  jal         Math_SmoothStepToF
/* EF106C 8018832C E7A60010 */   swc1       $ft1, 0x10($sp)
/* EF1070 80188330 3C018019 */  lui         $at, %hi(D_ending_80196498)
/* EF1074 80188334 C4286498 */  lwc1        $ft2, %lo(D_ending_80196498)($at)
/* EF1078 80188338 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B4)
/* EF107C 8018833C 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF1080 80188340 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF1084 80188344 24847454 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B4)
/* EF1088 80188348 24050000 */  addiu       $a1, $zero, 0x0
/* EF108C 8018834C 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF1090 80188350 0C026F0B */  jal         Math_SmoothStepToF
/* EF1094 80188354 E7A80010 */   swc1       $ft2, 0x10($sp)
/* EF1098 80188358 3C018019 */  lui         $at, %hi(D_ending_8019649C)
/* EF109C 8018835C C42A649C */  lwc1        $ft3, %lo(D_ending_8019649C)($at)
/* EF10A0 80188360 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4FC)
/* EF10A4 80188364 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF10A8 80188368 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF10AC 8018836C 2484749C */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4FC)
/* EF10B0 80188370 24050000 */  addiu       $a1, $zero, 0x0
/* EF10B4 80188374 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF10B8 80188378 0C026F0B */  jal         Math_SmoothStepToF
/* EF10BC 8018837C E7AA0010 */   swc1       $ft3, 0x10($sp)
/* EF10C0 80188380 8FBF0024 */  lw          $ra, 0x24($sp)
.Lending_80188384:
/* EF10C4 80188384 8FB00020 */  lw          $s0, 0x20($sp)
/* EF10C8 80188388 27BD0038 */  addiu       $sp, $sp, 0x38
/* EF10CC 8018838C 03E00008 */  jr          $ra
/* EF10D0 80188390 00000000 */   nop
glabel func_ending_80188394
/* EF10D4 80188394 3C048019 */  lui         $a0, %hi(D_ending_80196F88)
/* EF10D8 80188398 24846F88 */  addiu       $a0, $a0, %lo(D_ending_80196F88)
/* EF10DC 8018839C 27BDFF68 */  addiu       $sp, $sp, -0x98
/* EF10E0 801883A0 3C0F8019 */  lui         $t7, %hi(D_ending_80192A3C)
/* EF10E4 801883A4 25EF2A3C */  addiu       $t7, $t7, %lo(D_ending_80192A3C)
/* EF10E8 801883A8 25E80078 */  addiu       $t0, $t7, 0x78
/* EF10EC 801883AC 27AE0014 */  addiu       $t6, $sp, 0x14
.Lending_801883B0:
/* EF10F0 801883B0 8DE10000 */  lw          $at, 0x0($t7)
/* EF10F4 801883B4 25EF000C */  addiu       $t7, $t7, 0xC
/* EF10F8 801883B8 25CE000C */  addiu       $t6, $t6, 0xC
/* EF10FC 801883BC ADC1FFF4 */  sw          $at, -0xC($t6)
/* EF1100 801883C0 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF1104 801883C4 ADC1FFF8 */  sw          $at, -0x8($t6)
/* EF1108 801883C8 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF110C 801883CC 15E8FFF8 */  bne         $t7, $t0, .Lending_801883B0
/* EF1110 801883D0 ADC1FFFC */   sw         $at, -0x4($t6)
/* EF1114 801883D4 8DE10000 */  lw          $at, 0x0($t7)
/* EF1118 801883D8 8DE80004 */  lw          $t0, 0x4($t7)
/* EF111C 801883DC 24090002 */  addiu       $t1, $zero, 0x2
/* EF1120 801883E0 ADC10000 */  sw          $at, 0x0($t6)
/* EF1124 801883E4 ADC80004 */  sw          $t0, 0x4($t6)
/* EF1128 801883E8 AC890000 */  sw          $t1, 0x0($a0)
/* EF112C 801883EC 19200019 */  blez        $t1, .Lending_80188454
/* EF1130 801883F0 00001025 */   or         $v0, $zero, $zero
/* EF1134 801883F4 3C028019 */  lui         $v0, %hi(D_ending_80196D08)
/* EF1138 801883F8 27A40014 */  addiu       $a0, $sp, 0x14
/* EF113C 801883FC 00095980 */  sll         $t3, $t1, 6
/* EF1140 80188400 01642821 */  addu        $a1, $t3, $a0
/* EF1144 80188404 24426D08 */  addiu       $v0, $v0, %lo(D_ending_80196D08)
/* EF1148 80188408 0080C825 */  or          $t9, $a0, $zero
.Lending_8018840C:
/* EF114C 8018840C 0040C025 */  or          $t8, $v0, $zero
/* EF1150 80188410 248D003C */  addiu       $t5, $a0, 0x3C
.Lending_80188414:
/* EF1154 80188414 8F210000 */  lw          $at, 0x0($t9)
/* EF1158 80188418 2739000C */  addiu       $t9, $t9, 0xC
/* EF115C 8018841C 2718000C */  addiu       $t8, $t8, 0xC
/* EF1160 80188420 AF01FFF4 */  sw          $at, -0xC($t8)
/* EF1164 80188424 8F21FFF8 */  lw          $at, -0x8($t9)
/* EF1168 80188428 AF01FFF8 */  sw          $at, -0x8($t8)
/* EF116C 8018842C 8F21FFFC */  lw          $at, -0x4($t9)
/* EF1170 80188430 172DFFF8 */  bne         $t9, $t5, .Lending_80188414
/* EF1174 80188434 AF01FFFC */   sw         $at, -0x4($t8)
/* EF1178 80188438 8F210000 */  lw          $at, 0x0($t9)
/* EF117C 8018843C 24840040 */  addiu       $a0, $a0, 0x40
/* EF1180 80188440 24420040 */  addiu       $v0, $v0, 0x40
/* EF1184 80188444 AF010000 */  sw          $at, 0x0($t8)
/* EF1188 80188448 0085082B */  sltu        $at, $a0, $a1
/* EF118C 8018844C 5420FFEF */  bnel        $at, $zero, .Lending_8018840C
/* EF1190 80188450 0080C825 */   or         $t9, $a0, $zero
.Lending_80188454:
/* EF1194 80188454 03E00008 */  jr          $ra
/* EF1198 80188458 27BD0098 */   addiu      $sp, $sp, 0x98
glabel func_ending_8018845C
/* EF119C 8018845C 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* EF11A0 80188460 AFBF0014 */  sw          $ra, 0x14($sp)
/* EF11A4 80188464 3C02801A */  lui         $v0, %hi(D_ending_8019858C)
/* EF11A8 80188468 8C42858C */  lw          $v0, %lo(D_ending_8019858C)($v0)
/* EF11AC 8018846C 00003025 */  or          $a2, $zero, $zero
/* EF11B0 80188470 24030002 */  addiu       $v1, $zero, 0x2
.Lending_80188474:
/* EF11B4 80188474 50C20002 */  beql        $a2, $v0, .Lending_80188480
/* EF11B8 80188478 24C60001 */   addiu      $a2, $a2, 0x1
/* EF11BC 8018847C 24C60001 */  addiu       $a2, $a2, 0x1
.Lending_80188480:
/* EF11C0 80188480 14C3FFFC */  bne         $a2, $v1, .Lending_80188474
/* EF11C4 80188484 00000000 */   nop
/* EF11C8 80188488 3C028017 */  lui         $v0, %hi(gCsFrameCount)
/* EF11CC 8018848C 8C427A80 */  lw          $v0, %lo(gCsFrameCount)($v0)
/* EF11D0 80188490 240E0001 */  addiu       $t6, $zero, 0x1
/* EF11D4 80188494 3C018018 */  lui         $at, %hi(D_80178300)
/* EF11D8 80188498 AC2E8300 */  sw          $t6, %lo(D_80178300)($at)
/* EF11DC 8018849C 2401000A */  addiu       $at, $zero, 0xA
/* EF11E0 801884A0 10410006 */  beq         $v0, $at, .Lending_801884BC
/* EF11E4 801884A4 3C048018 */   lui        $a0, %hi(gMsg_ID_21010)
/* EF11E8 801884A8 2401006E */  addiu       $at, $zero, 0x6E
/* EF11EC 801884AC 10410009 */  beq         $v0, $at, .Lending_801884D4
/* EF11F0 801884B0 3C048018 */   lui        $a0, %hi(gMsg_ID_21020)
/* EF11F4 801884B4 1000000C */  b           .Lending_801884E8
/* EF11F8 801884B8 00000000 */   nop
.Lending_801884BC:
/* EF11FC 801884BC 24844CB4 */  addiu       $a0, $a0, %lo(gMsg_ID_21010)
/* EF1200 801884C0 24050136 */  addiu       $a1, $zero, 0x136
/* EF1204 801884C4 0C02EA02 */  jal         Radio_PlayMessage
/* EF1208 801884C8 AFA6001C */   sw         $a2, 0x1C($sp)
/* EF120C 801884CC 10000006 */  b           .Lending_801884E8
/* EF1210 801884D0 8FA6001C */   lw         $a2, 0x1C($sp)
.Lending_801884D4:
/* EF1214 801884D4 24844CF8 */  addiu       $a0, $a0, %lo(gMsg_ID_21020)
/* EF1218 801884D8 24050136 */  addiu       $a1, $zero, 0x136
/* EF121C 801884DC 0C02EA02 */  jal         Radio_PlayMessage
/* EF1220 801884E0 AFA6001C */   sw         $a2, 0x1C($sp)
/* EF1224 801884E4 8FA6001C */  lw          $a2, 0x1C($sp)
.Lending_801884E8:
/* EF1228 801884E8 3C058019 */  lui         $a1, %hi(D_ending_80196D08)
/* EF122C 801884EC 24A56D08 */  addiu       $a1, $a1, %lo(D_ending_80196D08)
/* EF1230 801884F0 8CA40040 */  lw          $a0, 0x40($a1)
/* EF1234 801884F4 0C026B37 */  jal         Animation_GetFrameCount
/* EF1238 801884F8 AFA6001C */   sw         $a2, 0x1C($sp)
/* EF123C 801884FC 3C058019 */  lui         $a1, %hi(D_ending_80196D08)
/* EF1240 80188500 24A56D08 */  addiu       $a1, $a1, %lo(D_ending_80196D08)
/* EF1244 80188504 8CA40074 */  lw          $a0, 0x74($a1)
/* EF1248 80188508 8FA6001C */  lw          $a2, 0x1C($sp)
/* EF124C 8018850C 24080001 */  addiu       $t0, $zero, 0x1
/* EF1250 80188510 44842000 */  mtc1        $a0, $ft0
/* EF1254 80188514 00067980 */  sll         $t7, $a2, 6
/* EF1258 80188518 00AFC021 */  addu        $t8, $a1, $t7
/* EF125C 8018851C 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF1260 80188520 C7080030 */  lwc1        $ft2, 0x30($t8)
/* EF1264 80188524 3C038017 */  lui         $v1, %hi(gCsFrameCount)
/* EF1268 80188528 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF126C 8018852C 4459F800 */  cfc1        $t9, $31
/* EF1270 80188530 44C8F800 */  ctc1        $t0, $31
/* EF1274 80188534 00000000 */  nop
/* EF1278 80188538 46005424 */  cvt.w.s     $ft4, $ft3
/* EF127C 8018853C 4448F800 */  cfc1        $t0, $31
/* EF1280 80188540 00000000 */  nop
/* EF1284 80188544 31010004 */  andi        $at, $t0, 0x4
/* EF1288 80188548 31080078 */  andi        $t0, $t0, 0x78
/* EF128C 8018854C 51000015 */  beql        $t0, $zero, .Lending_801885A4
/* EF1290 80188550 44088000 */   mfc1       $t0, $ft4
/* EF1294 80188554 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF1298 80188558 44818000 */  mtc1        $at, $ft4
/* EF129C 8018855C 24080001 */  addiu       $t0, $zero, 0x1
/* EF12A0 80188560 46105401 */  sub.s       $ft4, $ft3, $ft4
/* EF12A4 80188564 44C8F800 */  ctc1        $t0, $31
/* EF12A8 80188568 00000000 */  nop
/* EF12AC 8018856C 46008424 */  cvt.w.s     $ft4, $ft4
/* EF12B0 80188570 4448F800 */  cfc1        $t0, $31
/* EF12B4 80188574 00000000 */  nop
/* EF12B8 80188578 31010004 */  andi        $at, $t0, 0x4
/* EF12BC 8018857C 31080078 */  andi        $t0, $t0, 0x78
/* EF12C0 80188580 15000005 */  bnez        $t0, .Lending_80188598
/* EF12C4 80188584 00000000 */   nop
/* EF12C8 80188588 44088000 */  mfc1        $t0, $ft4
/* EF12CC 8018858C 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF12D0 80188590 10000007 */  b           .Lending_801885B0
/* EF12D4 80188594 01014025 */   or         $t0, $t0, $at
.Lending_80188598:
/* EF12D8 80188598 10000005 */  b           .Lending_801885B0
/* EF12DC 8018859C 2408FFFF */   addiu      $t0, $zero, -0x1
/* EF12E0 801885A0 44088000 */  mfc1        $t0, $ft4
.Lending_801885A4:
/* EF12E4 801885A4 00000000 */  nop
/* EF12E8 801885A8 0500FFFB */  bltz        $t0, .Lending_80188598
/* EF12EC 801885AC 00000000 */   nop
.Lending_801885B0:
/* EF12F0 801885B0 0102001B */  divu        $zero, $t0, $v0
/* EF12F4 801885B4 8C637A80 */  lw          $v1, %lo(gCsFrameCount)($v1)
/* EF12F8 801885B8 00003810 */  mfhi        $a3
/* EF12FC 801885BC 44D9F800 */  ctc1        $t9, $31
/* EF1300 801885C0 14400002 */  bnez        $v0, .Lending_801885CC
/* EF1304 801885C4 00000000 */   nop
/* EF1308 801885C8 0007000D */  break       7
.Lending_801885CC:
/* EF130C 801885CC 28610014 */  slti        $at, $v1, 0x14
/* EF1310 801885D0 14200002 */  bnez        $at, .Lending_801885DC
/* EF1314 801885D4 2861001F */   slti       $at, $v1, 0x1F
/* EF1318 801885D8 1420000C */  bnez        $at, .Lending_8018860C
.Lending_801885DC:
/* EF131C 801885DC 28610032 */   slti       $at, $v1, 0x32
/* EF1320 801885E0 14200002 */  bnez        $at, .Lending_801885EC
/* EF1324 801885E4 28610047 */   slti       $at, $v1, 0x47
/* EF1328 801885E8 14200008 */  bnez        $at, .Lending_8018860C
.Lending_801885EC:
/* EF132C 801885EC 2861006E */   slti       $at, $v1, 0x6E
/* EF1330 801885F0 14200002 */  bnez        $at, .Lending_801885FC
/* EF1334 801885F4 2861008D */   slti       $at, $v1, 0x8D
/* EF1338 801885F8 14200004 */  bnez        $at, .Lending_8018860C
.Lending_801885FC:
/* EF133C 801885FC 286100A0 */   slti       $at, $v1, 0xA0
/* EF1340 80188600 14200005 */  bnez        $at, .Lending_80188618
/* EF1344 80188604 286100BF */   slti       $at, $v1, 0xBF
/* EF1348 80188608 10200003 */  beqz        $at, .Lending_80188618
.Lending_8018860C:
/* EF134C 8018860C 24890001 */   addiu      $t1, $a0, 0x1
/* EF1350 80188610 10000004 */  b           .Lending_80188624
/* EF1354 80188614 ACA90074 */   sw         $t1, 0x74($a1)
.Lending_80188618:
/* EF1358 80188618 10E00002 */  beqz        $a3, .Lending_80188624
/* EF135C 8018861C 248A0001 */   addiu      $t2, $a0, 0x1
/* EF1360 80188620 ACAA0074 */  sw          $t2, 0x74($a1)
.Lending_80188624:
/* EF1364 80188624 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF1368 80188628 27BD0020 */  addiu       $sp, $sp, 0x20
/* EF136C 8018862C 03E00008 */  jr          $ra
/* EF1370 80188630 00000000 */   nop
glabel func_ending_80188634
/* EF1374 80188634 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* EF1378 80188638 3C088016 */  lui         $t0, %hi(D_80161690)
/* EF137C 8018863C 25081690 */  addiu       $t0, $t0, %lo(D_80161690)
/* EF1380 80188640 AFBF001C */  sw          $ra, 0x1C($sp)
/* EF1384 80188644 8D020000 */  lw          $v0, 0x0($t0)
/* EF1388 80188648 3C038019 */  lui         $v1, %hi(D_ending_80196F90)
/* EF138C 8018864C 3C018019 */  lui         $at, %hi(D_ending_80196F90)
/* EF1390 80188650 10400022 */  beqz        $v0, .Lending_801886DC
/* EF1394 80188654 00000000 */   nop
/* EF1398 80188658 8C636F90 */  lw          $v1, %lo(D_ending_80196F90)($v1)
/* EF139C 8018865C 2401000E */  addiu       $at, $zero, 0xE
/* EF13A0 80188660 3C07800C */  lui         $a3, %hi(D_800C5D34)
/* EF13A4 80188664 0061001A */  div         $zero, $v1, $at
/* EF13A8 80188668 00007010 */  mfhi        $t6
/* EF13AC 8018866C 24E75D34 */  addiu       $a3, $a3, %lo(D_800C5D34)
/* EF13B0 80188670 15C0000F */  bnez        $t6, .Lending_801886B0
/* EF13B4 80188674 3C044900 */   lui        $a0, (0x49002018 >> 16)
/* EF13B8 80188678 3C0F800C */  lui         $t7, %hi(D_800C5D3C)
/* EF13BC 8018867C 25EF5D3C */  addiu       $t7, $t7, %lo(D_800C5D3C)
/* EF13C0 80188680 3C05800C */  lui         $a1, %hi(D_800C5D28)
/* EF13C4 80188684 24A55D28 */  addiu       $a1, $a1, %lo(D_800C5D28)
/* EF13C8 80188688 AFAF0014 */  sw          $t7, 0x14($sp)
/* EF13CC 8018868C 34842018 */  ori         $a0, $a0, (0x49002018 & 0xFFFF)
/* EF13D0 80188690 24060004 */  addiu       $a2, $zero, 0x4
/* EF13D4 80188694 0C006486 */  jal         Audio_PlaySfx
/* EF13D8 80188698 AFA70010 */   sw         $a3, 0x10($sp)
/* EF13DC 8018869C 3C088016 */  lui         $t0, %hi(D_80161690)
/* EF13E0 801886A0 25081690 */  addiu       $t0, $t0, %lo(D_80161690)
/* EF13E4 801886A4 3C038019 */  lui         $v1, %hi(D_ending_80196F90)
/* EF13E8 801886A8 8C636F90 */  lw          $v1, %lo(D_ending_80196F90)($v1)
/* EF13EC 801886AC 8D020000 */  lw          $v0, 0x0($t0)
.Lending_801886B0:
/* EF13F0 801886B0 24780001 */  addiu       $t8, $v1, 0x1
/* EF13F4 801886B4 3C018019 */  lui         $at, %hi(D_ending_80196F90)
/* EF13F8 801886B8 AC386F90 */  sw          $t8, %lo(D_ending_80196F90)($at)
/* EF13FC 801886BC 2459FFFF */  addiu       $t9, $v0, -0x1
/* EF1400 801886C0 17200007 */  bnez        $t9, .Lending_801886E0
/* EF1404 801886C4 AD190000 */   sw         $t9, 0x0($t0)
/* EF1408 801886C8 3C044900 */  lui         $a0, (0x49002018 >> 16)
/* EF140C 801886CC 0C006A0E */  jal         func_8001A838
/* EF1410 801886D0 34842018 */   ori        $a0, $a0, (0x49002018 & 0xFFFF)
/* EF1414 801886D4 10000003 */  b           .Lending_801886E4
/* EF1418 801886D8 00001025 */   or         $v0, $zero, $zero
.Lending_801886DC:
/* EF141C 801886DC AC206F90 */  sw          $zero, %lo(D_ending_80196F90)($at)
.Lending_801886E0:
/* EF1420 801886E0 00001025 */  or          $v0, $zero, $zero
.Lending_801886E4:
/* EF1424 801886E4 8FBF001C */  lw          $ra, 0x1C($sp)
/* EF1428 801886E8 27BD0020 */  addiu       $sp, $sp, 0x20
/* EF142C 801886EC 03E00008 */  jr          $ra
/* EF1430 801886F0 00000000 */   nop
glabel func_ending_801886F4
/* EF1434 801886F4 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* EF1438 801886F8 AFBF0034 */  sw          $ra, 0x34($sp)
/* EF143C 801886FC AFB00030 */  sw          $s0, 0x30($sp)
/* EF1440 80188700 3C0E8016 */  lui         $t6, %hi(D_80161690)
/* EF1444 80188704 8DCE1690 */  lw          $t6, %lo(D_80161690)($t6)
/* EF1448 80188708 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* EF144C 8018870C 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* EF1450 80188710 11C00073 */  beqz        $t6, .Lending_801888E0
/* EF1454 80188714 02002025 */   or         $a0, $s0, $zero
/* EF1458 80188718 0C02E374 */  jal         RCP_SetupDL
/* EF145C 8018871C 2405004E */   addiu      $a1, $zero, 0x4E
/* EF1460 80188720 8E030000 */  lw          $v1, 0x0($s0)
/* EF1464 80188724 3C18FA00 */  lui         $t8, (0xFA000000 >> 16)
/* EF1468 80188728 2419FFFF */  addiu       $t9, $zero, -0x1
/* EF146C 8018872C 246F0008 */  addiu       $t7, $v1, 0x8
/* EF1470 80188730 AE0F0000 */  sw          $t7, 0x0($s0)
/* EF1474 80188734 AC790004 */  sw          $t9, 0x4($v1)
/* EF1478 80188738 AC780000 */  sw          $t8, 0x0($v1)
/* EF147C 8018873C 3C048019 */  lui         $a0, %hi(D_ending_80196F90)
/* EF1480 80188740 8C846F90 */  lw          $a0, %lo(D_ending_80196F90)($a0)
/* EF1484 80188744 04810004 */  bgez        $a0, .Lending_80188758
/* EF1488 80188748 30880007 */   andi       $t0, $a0, 0x7
/* EF148C 8018874C 11000002 */  beqz        $t0, .Lending_80188758
/* EF1490 80188750 00000000 */   nop
/* EF1494 80188754 2508FFF8 */  addiu       $t0, $t0, -0x8
.Lending_80188758:
/* EF1498 80188758 01002025 */  or          $a0, $t0, $zero
/* EF149C 8018875C 04810003 */  bgez        $a0, .Lending_8018876C
/* EF14A0 80188760 00044843 */   sra        $t1, $a0, 1
/* EF14A4 80188764 24810001 */  addiu       $at, $a0, 0x1
/* EF14A8 80188768 00014843 */  sra         $t1, $at, 1
.Lending_8018876C:
/* EF14AC 8018876C 11200048 */  beqz        $t1, .Lending_80188890
/* EF14B0 80188770 24010001 */   addiu      $at, $zero, 0x1
/* EF14B4 80188774 11210030 */  beq         $t1, $at, .Lending_80188838
/* EF14B8 80188778 24010002 */   addiu      $at, $zero, 0x2
/* EF14BC 8018877C 11210018 */  beq         $t1, $at, .Lending_801887E0
/* EF14C0 80188780 24010003 */   addiu      $at, $zero, 0x3
/* EF14C4 80188784 15210056 */  bne         $t1, $at, .Lending_801888E0
/* EF14C8 80188788 02002025 */   or         $a0, $s0, $zero
/* EF14CC 8018878C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF14D0 80188790 44810000 */  mtc1        $at, $fv0
/* EF14D4 80188794 3C01430E */  lui         $at, (0x430E0000 >> 16)
/* EF14D8 80188798 44812000 */  mtc1        $at, $ft0
/* EF14DC 8018879C 3C0141F8 */  lui         $at, (0x41F80000 >> 16)
/* EF14E0 801887A0 44813000 */  mtc1        $at, $ft1
/* EF14E4 801887A4 3C014190 */  lui         $at, (0x41900000 >> 16)
/* EF14E8 801887A8 44815000 */  mtc1        $at, $ft3
/* EF14EC 801887AC 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF14F0 801887B0 3C050701 */  lui         $a1, %hi(D_70110E0)
/* EF14F4 801887B4 3C060701 */  lui         $a2, %hi(D_70111B0)
/* EF14F8 801887B8 240A001A */  addiu       $t2, $zero, 0x1A
/* EF14FC 801887BC AFAA0010 */  sw          $t2, 0x10($sp)
/* EF1500 801887C0 24C611B0 */  addiu       $a2, $a2, %lo(D_70111B0)
/* EF1504 801887C4 24A510E0 */  addiu       $a1, $a1, %lo(D_70110E0)
/* EF1508 801887C8 E7A80014 */  swc1        $ft2, 0x14($sp)
/* EF150C 801887CC 24070010 */  addiu       $a3, $zero, 0x10
/* EF1510 801887D0 E7A0001C */  swc1        $fv0, 0x1C($sp)
/* EF1514 801887D4 E7A00020 */  swc1        $fv0, 0x20($sp)
/* EF1518 801887D8 0C0270C8 */  jal         TextureRect_4bCI
/* EF151C 801887DC E7AA0018 */   swc1       $ft3, 0x18($sp)
.Lending_801887E0:
/* EF1520 801887E0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF1524 801887E4 44810000 */  mtc1        $at, $fv0
/* EF1528 801887E8 3C01430E */  lui         $at, (0x430E0000 >> 16)
/* EF152C 801887EC 44818000 */  mtc1        $at, $ft4
/* EF1530 801887F0 3C0141C0 */  lui         $at, (0x41C00000 >> 16)
/* EF1534 801887F4 44819000 */  mtc1        $at, $ft5
/* EF1538 801887F8 3C014190 */  lui         $at, (0x41900000 >> 16)
/* EF153C 801887FC 44813000 */  mtc1        $at, $ft1
/* EF1540 80188800 46128100 */  add.s       $ft0, $ft4, $ft5
/* EF1544 80188804 3C050701 */  lui         $a1, %hi(D_7010FF0)
/* EF1548 80188808 3C060701 */  lui         $a2, %hi(D_70110C0)
/* EF154C 8018880C 240B001A */  addiu       $t3, $zero, 0x1A
/* EF1550 80188810 AFAB0010 */  sw          $t3, 0x10($sp)
/* EF1554 80188814 24C610C0 */  addiu       $a2, $a2, %lo(D_70110C0)
/* EF1558 80188818 24A50FF0 */  addiu       $a1, $a1, %lo(D_7010FF0)
/* EF155C 8018881C E7A40014 */  swc1        $ft0, 0x14($sp)
/* EF1560 80188820 02002025 */  or          $a0, $s0, $zero
/* EF1564 80188824 24070010 */  addiu       $a3, $zero, 0x10
/* EF1568 80188828 E7A0001C */  swc1        $fv0, 0x1C($sp)
/* EF156C 8018882C E7A00020 */  swc1        $fv0, 0x20($sp)
/* EF1570 80188830 0C0270C8 */  jal         TextureRect_4bCI
/* EF1574 80188834 E7A60018 */   swc1       $ft1, 0x18($sp)
.Lending_80188838:
/* EF1578 80188838 3C01430E */  lui         $at, (0x430E0000 >> 16)
/* EF157C 8018883C 44814000 */  mtc1        $at, $ft2
/* EF1580 80188840 3C014190 */  lui         $at, (0x41900000 >> 16)
/* EF1584 80188844 44815000 */  mtc1        $at, $ft3
/* EF1588 80188848 44819000 */  mtc1        $at, $ft5
/* EF158C 8018884C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF1590 80188850 460A4400 */  add.s       $ft4, $ft2, $ft3
/* EF1594 80188854 44812000 */  mtc1        $at, $ft0
/* EF1598 80188858 44813000 */  mtc1        $at, $ft1
/* EF159C 8018885C 3C050701 */  lui         $a1, %hi(D_7010F00)
/* EF15A0 80188860 3C060701 */  lui         $a2, %hi(D_7010FD0)
/* EF15A4 80188864 240C001A */  addiu       $t4, $zero, 0x1A
/* EF15A8 80188868 AFAC0010 */  sw          $t4, 0x10($sp)
/* EF15AC 8018886C 24C60FD0 */  addiu       $a2, $a2, %lo(D_7010FD0)
/* EF15B0 80188870 24A50F00 */  addiu       $a1, $a1, %lo(D_7010F00)
/* EF15B4 80188874 E7B00014 */  swc1        $ft4, 0x14($sp)
/* EF15B8 80188878 02002025 */  or          $a0, $s0, $zero
/* EF15BC 8018887C 24070010 */  addiu       $a3, $zero, 0x10
/* EF15C0 80188880 E7B20018 */  swc1        $ft5, 0x18($sp)
/* EF15C4 80188884 E7A4001C */  swc1        $ft0, 0x1C($sp)
/* EF15C8 80188888 0C0270C8 */  jal         TextureRect_4bCI
/* EF15CC 8018888C E7A60020 */   swc1       $ft1, 0x20($sp)
.Lending_80188890:
/* EF15D0 80188890 3C01430E */  lui         $at, (0x430E0000 >> 16)
/* EF15D4 80188894 44814000 */  mtc1        $at, $ft2
/* EF15D8 80188898 3C014190 */  lui         $at, (0x41900000 >> 16)
/* EF15DC 8018889C 44815000 */  mtc1        $at, $ft3
/* EF15E0 801888A0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF15E4 801888A4 44818000 */  mtc1        $at, $ft4
/* EF15E8 801888A8 44819000 */  mtc1        $at, $ft5
/* EF15EC 801888AC 3C050701 */  lui         $a1, %hi(D_7010E10)
/* EF15F0 801888B0 3C060701 */  lui         $a2, %hi(D_7010EE0)
/* EF15F4 801888B4 240D001A */  addiu       $t5, $zero, 0x1A
/* EF15F8 801888B8 AFAD0010 */  sw          $t5, 0x10($sp)
/* EF15FC 801888BC 24C60EE0 */  addiu       $a2, $a2, %lo(D_7010EE0)
/* EF1600 801888C0 24A50E10 */  addiu       $a1, $a1, %lo(D_7010E10)
/* EF1604 801888C4 02002025 */  or          $a0, $s0, $zero
/* EF1608 801888C8 24070010 */  addiu       $a3, $zero, 0x10
/* EF160C 801888CC E7A80014 */  swc1        $ft2, 0x14($sp)
/* EF1610 801888D0 E7AA0018 */  swc1        $ft3, 0x18($sp)
/* EF1614 801888D4 E7B0001C */  swc1        $ft4, 0x1C($sp)
/* EF1618 801888D8 0C0270C8 */  jal         TextureRect_4bCI
/* EF161C 801888DC E7B20020 */   swc1       $ft5, 0x20($sp)
.Lending_801888E0:
/* EF1620 801888E0 8FBF0034 */  lw          $ra, 0x34($sp)
/* EF1624 801888E4 8FB00030 */  lw          $s0, 0x30($sp)
/* EF1628 801888E8 27BD0038 */  addiu       $sp, $sp, 0x38
/* EF162C 801888EC 03E00008 */  jr          $ra
/* EF1630 801888F0 00000000 */   nop
.section .late_rodata
dlabel D_ending_801964A0
/* EFF1E0 801964A0 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_801964A4
/* EFF1E4 801964A4 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_801964A8
/* EFF1E8 801964A8 3E4CCCCD */ .float 0.200000003

dlabel D_ending_801964AC
/* EFF1EC 801964AC 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964B0
/* EFF1F0 801964B0 3D4CCCCD */ .float 0.05000000075

dlabel D_ending_801964B4
/* EFF1F4 801964B4 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_801888F4
/* EF1634 801888F4 27BDFD60 */  addiu       $sp, $sp, -0x2A0
/* EF1638 801888F8 AFBF002C */  sw          $ra, 0x2C($sp)
/* EF163C 801888FC AFB00028 */  sw          $s0, 0x28($sp)
/* EF1640 80188900 240E0004 */  addiu       $t6, $zero, 0x4
/* EF1644 80188904 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF1648 80188908 AFAE029C */  sw          $t6, 0x29C($sp)
/* EF164C 8018890C 0C0015C2 */  jal         Matrix_Push
/* EF1650 80188910 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* EF1654 80188914 8FAF029C */  lw          $t7, 0x29C($sp)
/* EF1658 80188918 3C058019 */  lui         $a1, %hi(D_ending_80196D08 + 0x8)
/* EF165C 8018891C 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* EF1660 80188920 000FC180 */  sll         $t8, $t7, 6
/* EF1664 80188924 00B82821 */  addu        $a1, $a1, $t8
/* EF1668 80188928 84A56D10 */  lh          $a1, %lo(D_ending_80196D08 + 0x8)($a1)
/* EF166C 8018892C 0C02E374 */  jal         RCP_SetupDL
/* EF1670 80188930 24847E64 */   addiu      $a0, $a0, %lo(gMasterDisp)
/* EF1674 80188934 8FB9029C */  lw          $t9, 0x29C($sp)
/* EF1678 80188938 3C098019 */  lui         $t1, %hi(D_ending_80196D08)
/* EF167C 8018893C 25296D08 */  addiu       $t1, $t1, %lo(D_ending_80196D08)
/* EF1680 80188940 00194180 */  sll         $t0, $t9, 6
/* EF1684 80188944 01098021 */  addu        $s0, $t0, $t1
/* EF1688 80188948 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF168C 8018894C 240A0001 */  addiu       $t2, $zero, 0x1
/* EF1690 80188950 AFAA0010 */  sw          $t2, 0x10($sp)
/* EF1694 80188954 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* EF1698 80188958 8E05000C */  lw          $a1, 0xC($s0)
/* EF169C 8018895C 8E060010 */  lw          $a2, 0x10($s0)
/* EF16A0 80188960 0C0016C0 */  jal         Matrix_Translate
/* EF16A4 80188964 8E070014 */   lw         $a3, 0x14($s0)
/* EF16A8 80188968 8FAB029C */  lw          $t3, 0x29C($sp)
/* EF16AC 8018896C 3C0D8019 */  lui         $t5, %hi(D_ending_80196D08)
/* EF16B0 80188970 25AD6D08 */  addiu       $t5, $t5, %lo(D_ending_80196D08)
/* EF16B4 80188974 000B6180 */  sll         $t4, $t3, 6
/* EF16B8 80188978 018D8021 */  addu        $s0, $t4, $t5
/* EF16BC 8018897C 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF16C0 80188980 240E0001 */  addiu       $t6, $zero, 0x1
/* EF16C4 80188984 AFAE0010 */  sw          $t6, 0x10($sp)
/* EF16C8 80188988 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* EF16CC 8018898C 8E050024 */  lw          $a1, 0x24($s0)
/* EF16D0 80188990 8E060028 */  lw          $a2, 0x28($s0)
/* EF16D4 80188994 0C00170D */  jal         Matrix_Scale
/* EF16D8 80188998 8E07002C */   lw         $a3, 0x2C($s0)
/* EF16DC 8018899C 8FAF029C */  lw          $t7, 0x29C($sp)
/* EF16E0 801889A0 3C018019 */  lui         $at, %hi(D_ending_80196D08 + 0x1C)
/* EF16E4 801889A4 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF16E8 801889A8 000FC180 */  sll         $t8, $t7, 6
/* EF16EC 801889AC 00380821 */  addu        $at, $at, $t8
/* EF16F0 801889B0 C4246D24 */  lwc1        $ft0, %lo(D_ending_80196D08 + 0x1C)($at)
/* EF16F4 801889B4 3C018019 */  lui         $at, %hi(D_ending_801964A0)
/* EF16F8 801889B8 C42664A0 */  lwc1        $ft1, %lo(D_ending_801964A0)($at)
/* EF16FC 801889BC 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* EF1700 801889C0 24060001 */  addiu       $a2, $zero, 0x1
/* EF1704 801889C4 46062202 */  mul.s       $ft2, $ft0, $ft1
/* EF1708 801889C8 44054000 */  mfc1        $a1, $ft2
/* EF170C 801889CC 0C0017A4 */  jal         Matrix_RotateY
/* EF1710 801889D0 00000000 */   nop
/* EF1714 801889D4 8FB9029C */  lw          $t9, 0x29C($sp)
/* EF1718 801889D8 3C018019 */  lui         $at, %hi(D_ending_80196D08 + 0x18)
/* EF171C 801889DC 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF1720 801889E0 00194180 */  sll         $t0, $t9, 6
/* EF1724 801889E4 00280821 */  addu        $at, $at, $t0
/* EF1728 801889E8 C42A6D20 */  lwc1        $ft3, %lo(D_ending_80196D08 + 0x18)($at)
/* EF172C 801889EC 3C018019 */  lui         $at, %hi(D_ending_801964A4)
/* EF1730 801889F0 C43064A4 */  lwc1        $ft4, %lo(D_ending_801964A4)($at)
/* EF1734 801889F4 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* EF1738 801889F8 24060001 */  addiu       $a2, $zero, 0x1
/* EF173C 801889FC 46105482 */  mul.s       $ft5, $ft3, $ft4
/* EF1740 80188A00 44059000 */  mfc1        $a1, $ft5
/* EF1744 80188A04 0C001751 */  jal         Matrix_RotateX
/* EF1748 80188A08 00000000 */   nop
/* EF174C 80188A0C 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* EF1750 80188A10 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF1754 80188A14 24847E64 */   addiu      $a0, $a0, %lo(gMasterDisp)
/* EF1758 80188A18 8FA9029C */  lw          $t1, 0x29C($sp)
/* EF175C 80188A1C 3C0B8019 */  lui         $t3, %hi(D_ending_80196D08)
/* EF1760 80188A20 256B6D08 */  addiu       $t3, $t3, %lo(D_ending_80196D08)
/* EF1764 80188A24 00095180 */  sll         $t2, $t1, 6
/* EF1768 80188A28 014B8021 */  addu        $s0, $t2, $t3
/* EF176C 80188A2C 8E020038 */  lw          $v0, 0x38($s0)
/* EF1770 80188A30 24010001 */  addiu       $at, $zero, 0x1
/* EF1774 80188A34 10400007 */  beqz        $v0, .Lending_80188A54
/* EF1778 80188A38 00000000 */   nop
/* EF177C 80188A3C 10410043 */  beq         $v0, $at, .Lending_80188B4C
/* EF1780 80188A40 24010002 */   addiu      $at, $zero, 0x2
/* EF1784 80188A44 1041006D */  beq         $v0, $at, .Lending_80188BFC
/* EF1788 80188A48 00000000 */   nop
/* EF178C 80188A4C 100000C4 */  b           .Lending_80188D60
/* EF1790 80188A50 00000000 */   nop
.Lending_80188A54:
/* EF1794 80188A54 0C026B37 */  jal         Animation_GetFrameCount
/* EF1798 80188A58 8E040000 */   lw         $a0, 0x0($s0)
/* EF179C 80188A5C 8FAC029C */  lw          $t4, 0x29C($sp)
/* EF17A0 80188A60 3C0E8019 */  lui         $t6, %hi(D_ending_80196D08)
/* EF17A4 80188A64 25CE6D08 */  addiu       $t6, $t6, %lo(D_ending_80196D08)
/* EF17A8 80188A68 000C6980 */  sll         $t5, $t4, 6
/* EF17AC 80188A6C 01AE8021 */  addu        $s0, $t5, $t6
/* EF17B0 80188A70 8E0F0034 */  lw          $t7, 0x34($s0)
/* EF17B4 80188A74 C6080030 */  lwc1        $ft2, 0x30($s0)
/* EF17B8 80188A78 24190001 */  addiu       $t9, $zero, 0x1
/* EF17BC 80188A7C 448F2000 */  mtc1        $t7, $ft0
/* EF17C0 80188A80 3C068019 */  lui         $a2, %hi(D_ending_80197900)
/* EF17C4 80188A84 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF17C8 80188A88 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF17CC 80188A8C 4458F800 */  cfc1        $t8, $31
/* EF17D0 80188A90 44D9F800 */  ctc1        $t9, $31
/* EF17D4 80188A94 00000000 */  nop
/* EF17D8 80188A98 46005424 */  cvt.w.s     $ft4, $ft3
/* EF17DC 80188A9C 4459F800 */  cfc1        $t9, $31
/* EF17E0 80188AA0 00000000 */  nop
/* EF17E4 80188AA4 33210004 */  andi        $at, $t9, 0x4
/* EF17E8 80188AA8 33390078 */  andi        $t9, $t9, 0x78
/* EF17EC 80188AAC 53200015 */  beql        $t9, $zero, .Lending_80188B04
/* EF17F0 80188AB0 44198000 */   mfc1       $t9, $ft4
/* EF17F4 80188AB4 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF17F8 80188AB8 44818000 */  mtc1        $at, $ft4
/* EF17FC 80188ABC 24190001 */  addiu       $t9, $zero, 0x1
/* EF1800 80188AC0 46105401 */  sub.s       $ft4, $ft3, $ft4
/* EF1804 80188AC4 44D9F800 */  ctc1        $t9, $31
/* EF1808 80188AC8 00000000 */  nop
/* EF180C 80188ACC 46008424 */  cvt.w.s     $ft4, $ft4
/* EF1810 80188AD0 4459F800 */  cfc1        $t9, $31
/* EF1814 80188AD4 00000000 */  nop
/* EF1818 80188AD8 33210004 */  andi        $at, $t9, 0x4
/* EF181C 80188ADC 33390078 */  andi        $t9, $t9, 0x78
/* EF1820 80188AE0 17200005 */  bnez        $t9, .Lending_80188AF8
/* EF1824 80188AE4 00000000 */   nop
/* EF1828 80188AE8 44198000 */  mfc1        $t9, $ft4
/* EF182C 80188AEC 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF1830 80188AF0 10000007 */  b           .Lending_80188B10
/* EF1834 80188AF4 0321C825 */   or         $t9, $t9, $at
.Lending_80188AF8:
/* EF1838 80188AF8 10000005 */  b           .Lending_80188B10
/* EF183C 80188AFC 2419FFFF */   addiu      $t9, $zero, -0x1
/* EF1840 80188B00 44198000 */  mfc1        $t9, $ft4
.Lending_80188B04:
/* EF1844 80188B04 00000000 */  nop
/* EF1848 80188B08 0720FFFB */  bltz        $t9, .Lending_80188AF8
/* EF184C 80188B0C 00000000 */   nop
.Lending_80188B10:
/* EF1850 80188B10 0322001B */  divu        $zero, $t9, $v0
/* EF1854 80188B14 00002810 */  mfhi        $a1
/* EF1858 80188B18 44D8F800 */  ctc1        $t8, $31
/* EF185C 80188B1C 14400002 */  bnez        $v0, .Lending_80188B28
/* EF1860 80188B20 00000000 */   nop
/* EF1864 80188B24 0007000D */  break       7
.Lending_80188B28:
/* EF1868 80188B28 8E040000 */  lw          $a0, 0x0($s0)
/* EF186C 80188B2C 0C026A88 */  jal         Animation_GetFrameData
/* EF1870 80188B30 24C67900 */   addiu      $a2, $a2, %lo(D_ending_80197900)
/* EF1874 80188B34 8FA8029C */  lw          $t0, 0x29C($sp)
/* EF1878 80188B38 3C0A8019 */  lui         $t2, %hi(D_ending_80196D08)
/* EF187C 80188B3C 254A6D08 */  addiu       $t2, $t2, %lo(D_ending_80196D08)
/* EF1880 80188B40 00084980 */  sll         $t1, $t0, 6
/* EF1884 80188B44 10000086 */  b           .Lending_80188D60
/* EF1888 80188B48 012A8021 */   addu       $s0, $t1, $t2
.Lending_80188B4C:
/* EF188C 80188B4C 8E0B0034 */  lw          $t3, 0x34($s0)
/* EF1890 80188B50 C6120030 */  lwc1        $ft5, 0x30($s0)
/* EF1894 80188B54 3C040602 */  lui         $a0, %hi(D_601F8E0)
/* EF1898 80188B58 448B2000 */  mtc1        $t3, $ft0
/* EF189C 80188B5C 2484F8E0 */  addiu       $a0, $a0, %lo(D_601F8E0)
/* EF18A0 80188B60 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF18A4 80188B64 46069202 */  mul.s       $ft2, $ft5, $ft1
/* EF18A8 80188B68 4600428D */  trunc.w.s   $ft3, $ft2
/* EF18AC 80188B6C 44055000 */  mfc1        $a1, $ft3
/* EF18B0 80188B70 0C026B37 */  jal         Animation_GetFrameCount
/* EF18B4 80188B74 AFA50294 */   sw         $a1, 0x294($sp)
/* EF18B8 80188B78 8FA50294 */  lw          $a1, 0x294($sp)
/* EF18BC 80188B7C 3C100602 */  lui         $s0, %hi(D_601F8E0)
/* EF18C0 80188B80 2610F8E0 */  addiu       $s0, $s0, %lo(D_601F8E0)
/* EF18C4 80188B84 00A2082A */  slt         $at, $a1, $v0
/* EF18C8 80188B88 54200005 */  bnel        $at, $zero, .Lending_80188BA0
/* EF18CC 80188B8C 02002025 */   or         $a0, $s0, $zero
/* EF18D0 80188B90 0C026B37 */  jal         Animation_GetFrameCount
/* EF18D4 80188B94 02002025 */   or         $a0, $s0, $zero
/* EF18D8 80188B98 2445FFFF */  addiu       $a1, $v0, -0x1
/* EF18DC 80188B9C 02002025 */  or          $a0, $s0, $zero
.Lending_80188BA0:
/* EF18E0 80188BA0 0C026A88 */  jal         Animation_GetFrameData
/* EF18E4 80188BA4 27A6003C */   addiu      $a2, $sp, 0x3C
/* EF18E8 80188BA8 3C018019 */  lui         $at, %hi(D_ending_801964A8)
/* EF18EC 80188BAC C43064A8 */  lwc1        $ft4, %lo(D_ending_801964A8)($at)
/* EF18F0 80188BB0 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* EF18F4 80188BB4 44812000 */  mtc1        $at, $ft0
/* EF18F8 80188BB8 3C018019 */  lui         $at, %hi(D_ending_801964AC)
/* EF18FC 80188BBC C43264AC */  lwc1        $ft5, %lo(D_ending_801964AC)($at)
/* EF1900 80188BC0 3C058019 */  lui         $a1, %hi(D_ending_80197900)
/* EF1904 80188BC4 24A57900 */  addiu       $a1, $a1, %lo(D_ending_80197900)
/* EF1908 80188BC8 27A4003C */  addiu       $a0, $sp, 0x3C
/* EF190C 80188BCC 24060001 */  addiu       $a2, $zero, 0x1
/* EF1910 80188BD0 00403825 */  or          $a3, $v0, $zero
/* EF1914 80188BD4 E7B00010 */  swc1        $ft4, 0x10($sp)
/* EF1918 80188BD8 E7A40014 */  swc1        $ft0, 0x14($sp)
/* EF191C 80188BDC 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* EF1920 80188BE0 E7B20018 */   swc1       $ft5, 0x18($sp)
/* EF1924 80188BE4 8FAD029C */  lw          $t5, 0x29C($sp)
/* EF1928 80188BE8 3C0F8019 */  lui         $t7, %hi(D_ending_80196D08)
/* EF192C 80188BEC 25EF6D08 */  addiu       $t7, $t7, %lo(D_ending_80196D08)
/* EF1930 80188BF0 000D7180 */  sll         $t6, $t5, 6
/* EF1934 80188BF4 1000005A */  b           .Lending_80188D60
/* EF1938 80188BF8 01CF8021 */   addu       $s0, $t6, $t7
.Lending_80188BFC:
/* EF193C 80188BFC 0C026B37 */  jal         Animation_GetFrameCount
/* EF1940 80188C00 8E040000 */   lw         $a0, 0x0($s0)
/* EF1944 80188C04 8FB8029C */  lw          $t8, 0x29C($sp)
/* EF1948 80188C08 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF194C 80188C0C 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF1950 80188C10 0018C980 */  sll         $t9, $t8, 6
/* EF1954 80188C14 03288021 */  addu        $s0, $t9, $t0
/* EF1958 80188C18 8E090034 */  lw          $t1, 0x34($s0)
/* EF195C 80188C1C C60A0030 */  lwc1        $ft3, 0x30($s0)
/* EF1960 80188C20 240B0001 */  addiu       $t3, $zero, 0x1
/* EF1964 80188C24 44893000 */  mtc1        $t1, $ft1
/* EF1968 80188C28 3C040602 */  lui         $a0, %hi(D_60246F8)
/* EF196C 80188C2C 46803220 */  cvt.s.w     $ft2, $ft1
/* EF1970 80188C30 460A4402 */  mul.s       $ft4, $ft2, $ft3
/* EF1974 80188C34 444AF800 */  cfc1        $t2, $31
/* EF1978 80188C38 44CBF800 */  ctc1        $t3, $31
/* EF197C 80188C3C 00000000 */  nop
/* EF1980 80188C40 46008124 */  cvt.w.s     $ft0, $ft4
/* EF1984 80188C44 444BF800 */  cfc1        $t3, $31
/* EF1988 80188C48 00000000 */  nop
/* EF198C 80188C4C 31610004 */  andi        $at, $t3, 0x4
/* EF1990 80188C50 316B0078 */  andi        $t3, $t3, 0x78
/* EF1994 80188C54 51600015 */  beql        $t3, $zero, .Lending_80188CAC
/* EF1998 80188C58 440B2000 */   mfc1       $t3, $ft0
/* EF199C 80188C5C 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF19A0 80188C60 44812000 */  mtc1        $at, $ft0
/* EF19A4 80188C64 240B0001 */  addiu       $t3, $zero, 0x1
/* EF19A8 80188C68 46048101 */  sub.s       $ft0, $ft4, $ft0
/* EF19AC 80188C6C 44CBF800 */  ctc1        $t3, $31
/* EF19B0 80188C70 00000000 */  nop
/* EF19B4 80188C74 46002124 */  cvt.w.s     $ft0, $ft0
/* EF19B8 80188C78 444BF800 */  cfc1        $t3, $31
/* EF19BC 80188C7C 00000000 */  nop
/* EF19C0 80188C80 31610004 */  andi        $at, $t3, 0x4
/* EF19C4 80188C84 316B0078 */  andi        $t3, $t3, 0x78
/* EF19C8 80188C88 15600005 */  bnez        $t3, .Lending_80188CA0
/* EF19CC 80188C8C 00000000 */   nop
/* EF19D0 80188C90 440B2000 */  mfc1        $t3, $ft0
/* EF19D4 80188C94 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF19D8 80188C98 10000007 */  b           .Lending_80188CB8
/* EF19DC 80188C9C 01615825 */   or         $t3, $t3, $at
.Lending_80188CA0:
/* EF19E0 80188CA0 10000005 */  b           .Lending_80188CB8
/* EF19E4 80188CA4 240BFFFF */   addiu      $t3, $zero, -0x1
/* EF19E8 80188CA8 440B2000 */  mfc1        $t3, $ft0
.Lending_80188CAC:
/* EF19EC 80188CAC 00000000 */  nop
/* EF19F0 80188CB0 0560FFFB */  bltz        $t3, .Lending_80188CA0
/* EF19F4 80188CB4 00000000 */   nop
.Lending_80188CB8:
/* EF19F8 80188CB8 0162001B */  divu        $zero, $t3, $v0
/* EF19FC 80188CBC 00002810 */  mfhi        $a1
/* EF1A00 80188CC0 44CAF800 */  ctc1        $t2, $31
/* EF1A04 80188CC4 14400002 */  bnez        $v0, .Lending_80188CD0
/* EF1A08 80188CC8 00000000 */   nop
/* EF1A0C 80188CCC 0007000D */  break       7
.Lending_80188CD0:
/* EF1A10 80188CD0 248446F8 */  addiu       $a0, $a0, %lo(D_60246F8)
/* EF1A14 80188CD4 0C026A88 */  jal         Animation_GetFrameData
/* EF1A18 80188CD8 27A6003C */   addiu      $a2, $sp, 0x3C
/* EF1A1C 80188CDC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF1A20 80188CE0 44810000 */  mtc1        $at, $fv0
/* EF1A24 80188CE4 3C018019 */  lui         $at, %hi(D_ending_801964B0)
/* EF1A28 80188CE8 C43264B0 */  lwc1        $ft5, %lo(D_ending_801964B0)($at)
/* EF1A2C 80188CEC 3C04801A */  lui         $a0, %hi(D_ending_80198580)
/* EF1A30 80188CF0 3C063C23 */  lui         $a2, (0x3C23D70A >> 16)
/* EF1A34 80188CF4 44050000 */  mfc1        $a1, $fv0
/* EF1A38 80188CF8 44070000 */  mfc1        $a3, $fv0
/* EF1A3C 80188CFC 00408025 */  or          $s0, $v0, $zero
/* EF1A40 80188D00 34C6D70A */  ori         $a2, $a2, (0x3C23D70A & 0xFFFF)
/* EF1A44 80188D04 24848580 */  addiu       $a0, $a0, %lo(D_ending_80198580)
/* EF1A48 80188D08 0C026F0B */  jal         Math_SmoothStepToF
/* EF1A4C 80188D0C E7B20010 */   swc1       $ft5, 0x10($sp)
/* EF1A50 80188D10 3C01801A */  lui         $at, %hi(D_ending_80198580)
/* EF1A54 80188D14 C4268580 */  lwc1        $ft1, %lo(D_ending_80198580)($at)
/* EF1A58 80188D18 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* EF1A5C 80188D1C 44814000 */  mtc1        $at, $ft2
/* EF1A60 80188D20 3C018019 */  lui         $at, %hi(D_ending_801964B4)
/* EF1A64 80188D24 C42A64B4 */  lwc1        $ft3, %lo(D_ending_801964B4)($at)
/* EF1A68 80188D28 3C058019 */  lui         $a1, %hi(D_ending_80197900)
/* EF1A6C 80188D2C 24A57900 */  addiu       $a1, $a1, %lo(D_ending_80197900)
/* EF1A70 80188D30 27A4003C */  addiu       $a0, $sp, 0x3C
/* EF1A74 80188D34 24060001 */  addiu       $a2, $zero, 0x1
/* EF1A78 80188D38 02003825 */  or          $a3, $s0, $zero
/* EF1A7C 80188D3C E7A60010 */  swc1        $ft1, 0x10($sp)
/* EF1A80 80188D40 E7A80014 */  swc1        $ft2, 0x14($sp)
/* EF1A84 80188D44 0C026FBB */  jal         Math_SmoothStepToVec3fArray
/* EF1A88 80188D48 E7AA0018 */   swc1       $ft3, 0x18($sp)
/* EF1A8C 80188D4C 8FAC029C */  lw          $t4, 0x29C($sp)
/* EF1A90 80188D50 3C0E8019 */  lui         $t6, %hi(D_ending_80196D08)
/* EF1A94 80188D54 25CE6D08 */  addiu       $t6, $t6, %lo(D_ending_80196D08)
/* EF1A98 80188D58 000C6980 */  sll         $t5, $t4, 6
/* EF1A9C 80188D5C 01AE8021 */  addu        $s0, $t5, $t6
.Lending_80188D60:
/* EF1AA0 80188D60 3C18800C */  lui         $t8, %hi(gIdentityMatrix)
/* EF1AA4 80188D64 27184660 */  addiu       $t8, $t8, %lo(gIdentityMatrix)
/* EF1AA8 80188D68 3C068019 */  lui         $a2, %hi(D_ending_80197900)
/* EF1AAC 80188D6C 3C078019 */  lui         $a3, %hi(func_ending_80189C64)
/* EF1AB0 80188D70 27AF029C */  addiu       $t7, $sp, 0x29C
/* EF1AB4 80188D74 AFAF0014 */  sw          $t7, 0x14($sp)
/* EF1AB8 80188D78 24E79C64 */  addiu       $a3, $a3, %lo(func_ending_80189C64)
/* EF1ABC 80188D7C 24C67900 */  addiu       $a2, $a2, %lo(D_ending_80197900)
/* EF1AC0 80188D80 AFB80018 */  sw          $t8, 0x18($sp)
/* EF1AC4 80188D84 00002025 */  or          $a0, $zero, $zero
/* EF1AC8 80188D88 8E050004 */  lw          $a1, 0x4($s0)
/* EF1ACC 80188D8C 0C0269CB */  jal         Animation_DrawSkeleton
/* EF1AD0 80188D90 AFA00010 */   sw         $zero, 0x10($sp)
/* EF1AD4 80188D94 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF1AD8 80188D98 0C0015D0 */  jal         Matrix_Pop
/* EF1ADC 80188D9C 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* EF1AE0 80188DA0 8FBF002C */  lw          $ra, 0x2C($sp)
/* EF1AE4 80188DA4 8FB00028 */  lw          $s0, 0x28($sp)
/* EF1AE8 80188DA8 27BD02A0 */  addiu       $sp, $sp, 0x2A0
/* EF1AEC 80188DAC 03E00008 */  jr          $ra
/* EF1AF0 80188DB0 00000000 */   nop
glabel func_ending_80188DB4
/* EF1AF4 80188DB4 27BDFE38 */  addiu       $sp, $sp, -0x1C8
/* EF1AF8 80188DB8 3C038019 */  lui         $v1, %hi(D_ending_80196F88)
/* EF1AFC 80188DBC 24636F88 */  addiu       $v1, $v1, %lo(D_ending_80196F88)
/* EF1B00 80188DC0 AFBF002C */  sw          $ra, 0x2C($sp)
/* EF1B04 80188DC4 AFBE0028 */  sw          $fp, 0x28($sp)
/* EF1B08 80188DC8 AFB70024 */  sw          $s7, 0x24($sp)
/* EF1B0C 80188DCC AFB60020 */  sw          $s6, 0x20($sp)
/* EF1B10 80188DD0 AFB5001C */  sw          $s5, 0x1C($sp)
/* EF1B14 80188DD4 AFB40018 */  sw          $s4, 0x18($sp)
/* EF1B18 80188DD8 AFB30014 */  sw          $s3, 0x14($sp)
/* EF1B1C 80188DDC AFB20010 */  sw          $s2, 0x10($sp)
/* EF1B20 80188DE0 AFB1000C */  sw          $s1, 0xC($sp)
/* EF1B24 80188DE4 AFB00008 */  sw          $s0, 0x8($sp)
/* EF1B28 80188DE8 27A201B4 */  addiu       $v0, $sp, 0x1B4
/* EF1B2C 80188DEC 3C0E8019 */  lui         $t6, %hi(D_ending_80192ABC)
/* EF1B30 80188DF0 25CE2ABC */  addiu       $t6, $t6, %lo(D_ending_80192ABC)
/* EF1B34 80188DF4 8DC10000 */  lw          $at, 0x0($t6)
/* EF1B38 80188DF8 3C0F8019 */  lui         $t7, %hi(D_ending_80192AC8)
/* EF1B3C 80188DFC 25EF2AC8 */  addiu       $t7, $t7, %lo(D_ending_80192AC8)
/* EF1B40 80188E00 AC410000 */  sw          $at, 0x0($v0)
/* EF1B44 80188E04 8DD90004 */  lw          $t9, 0x4($t6)
/* EF1B48 80188E08 3C168019 */  lui         $s6, %hi(D_ending_80197900 + 0xC)
/* EF1B4C 80188E0C 27B80074 */  addiu       $t8, $sp, 0x74
/* EF1B50 80188E10 AC590004 */  sw          $t9, 0x4($v0)
/* EF1B54 80188E14 8DC10008 */  lw          $at, 0x8($t6)
/* EF1B58 80188E18 25F90138 */  addiu       $t9, $t7, 0x138
/* EF1B5C 80188E1C 26D6790C */  addiu       $s6, $s6, %lo(D_ending_80197900 + 0xC)
/* EF1B60 80188E20 AC410008 */  sw          $at, 0x8($v0)
.Lending_80188E24:
/* EF1B64 80188E24 8DE10000 */  lw          $at, 0x0($t7)
/* EF1B68 80188E28 25EF000C */  addiu       $t7, $t7, 0xC
/* EF1B6C 80188E2C 2718000C */  addiu       $t8, $t8, 0xC
/* EF1B70 80188E30 AF01FFF4 */  sw          $at, -0xC($t8)
/* EF1B74 80188E34 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF1B78 80188E38 AF01FFF8 */  sw          $at, -0x8($t8)
/* EF1B7C 80188E3C 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF1B80 80188E40 15F9FFF8 */  bne         $t7, $t9, .Lending_80188E24
/* EF1B84 80188E44 AF01FFFC */   sw         $at, -0x4($t8)
/* EF1B88 80188E48 8DE10000 */  lw          $at, 0x0($t7)
/* EF1B8C 80188E4C 8DF90004 */  lw          $t9, 0x4($t7)
/* EF1B90 80188E50 240E0005 */  addiu       $t6, $zero, 0x5
/* EF1B94 80188E54 AF010000 */  sw          $at, 0x0($t8)
/* EF1B98 80188E58 AF190004 */  sw          $t9, 0x4($t8)
/* EF1B9C 80188E5C 19C00019 */  blez        $t6, .Lending_80188EC4
/* EF1BA0 80188E60 AC6E0000 */   sw         $t6, 0x0($v1)
/* EF1BA4 80188E64 3C048019 */  lui         $a0, %hi(D_ending_80196D08)
/* EF1BA8 80188E68 27A60074 */  addiu       $a2, $sp, 0x74
/* EF1BAC 80188E6C 000E7980 */  sll         $t7, $t6, 6
/* EF1BB0 80188E70 01E63821 */  addu        $a3, $t7, $a2
/* EF1BB4 80188E74 24846D08 */  addiu       $a0, $a0, %lo(D_ending_80196D08)
/* EF1BB8 80188E78 00C07825 */  or          $t7, $a2, $zero
.Lending_80188E7C:
/* EF1BBC 80188E7C 0080C825 */  or          $t9, $a0, $zero
/* EF1BC0 80188E80 24CE003C */  addiu       $t6, $a2, 0x3C
.Lending_80188E84:
/* EF1BC4 80188E84 8DE10000 */  lw          $at, 0x0($t7)
/* EF1BC8 80188E88 25EF000C */  addiu       $t7, $t7, 0xC
/* EF1BCC 80188E8C 2739000C */  addiu       $t9, $t9, 0xC
/* EF1BD0 80188E90 AF21FFF4 */  sw          $at, -0xC($t9)
/* EF1BD4 80188E94 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF1BD8 80188E98 AF21FFF8 */  sw          $at, -0x8($t9)
/* EF1BDC 80188E9C 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF1BE0 80188EA0 15EEFFF8 */  bne         $t7, $t6, .Lending_80188E84
/* EF1BE4 80188EA4 AF21FFFC */   sw         $at, -0x4($t9)
/* EF1BE8 80188EA8 8DE10000 */  lw          $at, 0x0($t7)
/* EF1BEC 80188EAC 24C60040 */  addiu       $a2, $a2, 0x40
/* EF1BF0 80188EB0 24840040 */  addiu       $a0, $a0, 0x40
/* EF1BF4 80188EB4 AF210000 */  sw          $at, 0x0($t9)
/* EF1BF8 80188EB8 00C7082B */  sltu        $at, $a2, $a3
/* EF1BFC 80188EBC 5420FFEF */  bnel        $at, $zero, .Lending_80188E7C
/* EF1C00 80188EC0 00C07825 */   or         $t7, $a2, $zero
.Lending_80188EC4:
/* EF1C04 80188EC4 3C188019 */  lui         $t8, %hi(D_ending_80197900)
/* EF1C08 80188EC8 3C0E801A */  lui         $t6, %hi(D_ending_80198260)
/* EF1C0C 80188ECC 3C0F8019 */  lui         $t7, %hi(D_ending_80196FA0)
/* EF1C10 80188ED0 25F56FA0 */  addiu       $s5, $t7, %lo(D_ending_80196FA0)
/* EF1C14 80188ED4 25D48260 */  addiu       $s4, $t6, %lo(D_ending_80198260)
/* EF1C18 80188ED8 27137900 */  addiu       $s3, $t8, %lo(D_ending_80197900)
/* EF1C1C 80188EDC 3C178019 */  lui         $s7, %hi(D_ending_80196FA0 + 0xC)
/* EF1C20 80188EE0 3C1F8019 */  lui         $ra, %hi(D_ending_80197900 + 0xC)
/* EF1C24 80188EE4 27FF790C */  addiu       $ra, $ra, %lo(D_ending_80197900 + 0xC)
/* EF1C28 80188EE8 26F76FAC */  addiu       $s7, $s7, %lo(D_ending_80196FA0 + 0xC)
/* EF1C2C 80188EEC 02602825 */  or          $a1, $s3, $zero
/* EF1C30 80188EF0 02803825 */  or          $a3, $s4, $zero
/* EF1C34 80188EF4 02A04825 */  or          $t1, $s5, $zero
/* EF1C38 80188EF8 241E0032 */  addiu       $fp, $zero, 0x32
.Lending_80188EFC:
/* EF1C3C 80188EFC 8C410000 */  lw          $at, 0x0($v0)
/* EF1C40 80188F00 8C580004 */  lw          $t8, 0x4($v0)
/* EF1C44 80188F04 8C4F0004 */  lw          $t7, 0x4($v0)
/* EF1C48 80188F08 AE610000 */  sw          $at, 0x0($s3)
/* EF1C4C 80188F0C 8C410008 */  lw          $at, 0x8($v0)
/* EF1C50 80188F10 AE780004 */  sw          $t8, 0x4($s3)
/* EF1C54 80188F14 AEAF0004 */  sw          $t7, 0x4($s5)
/* EF1C58 80188F18 AE610008 */  sw          $at, 0x8($s3)
/* EF1C5C 80188F1C 8C410000 */  lw          $at, 0x0($v0)
/* EF1C60 80188F20 8C4F0004 */  lw          $t7, 0x4($v0)
/* EF1C64 80188F24 8C580004 */  lw          $t8, 0x4($v0)
/* EF1C68 80188F28 AEA10000 */  sw          $at, 0x0($s5)
/* EF1C6C 80188F2C 8C410008 */  lw          $at, 0x8($v0)
/* EF1C70 80188F30 24A60018 */  addiu       $a2, $a1, 0x18
/* EF1C74 80188F34 252A0018 */  addiu       $t2, $t1, 0x18
/* EF1C78 80188F38 AEA10008 */  sw          $at, 0x8($s5)
/* EF1C7C 80188F3C 8C410000 */  lw          $at, 0x0($v0)
/* EF1C80 80188F40 254C000C */  addiu       $t4, $t2, 0xC
/* EF1C84 80188F44 25500018 */  addiu       $s0, $t2, 0x18
/* EF1C88 80188F48 AEC10000 */  sw          $at, 0x0($s6)
/* EF1C8C 80188F4C 8C410008 */  lw          $at, 0x8($v0)
/* EF1C90 80188F50 25520024 */  addiu       $s2, $t2, 0x24
/* EF1C94 80188F54 24CB000C */  addiu       $t3, $a2, 0xC
/* EF1C98 80188F58 AEC10008 */  sw          $at, 0x8($s6)
/* EF1C9C 80188F5C 8C410000 */  lw          $at, 0x0($v0)
/* EF1CA0 80188F60 24CD0018 */  addiu       $t5, $a2, 0x18
/* EF1CA4 80188F64 24D10024 */  addiu       $s1, $a2, 0x24
/* EF1CA8 80188F68 AEE10000 */  sw          $at, 0x0($s7)
/* EF1CAC 80188F6C 8C410008 */  lw          $at, 0x8($v0)
/* EF1CB0 80188F70 AE800000 */  sw          $zero, 0x0($s4)
/* EF1CB4 80188F74 AE800004 */  sw          $zero, 0x4($s4)
/* EF1CB8 80188F78 24040002 */  addiu       $a0, $zero, 0x2
/* EF1CBC 80188F7C 24E80008 */  addiu       $t0, $a3, 0x8
/* EF1CC0 80188F80 AEEF0004 */  sw          $t7, 0x4($s7)
/* EF1CC4 80188F84 AED80004 */  sw          $t8, 0x4($s6)
/* EF1CC8 80188F88 AEE10008 */  sw          $at, 0x8($s7)
.Lending_80188F8C:
/* EF1CCC 80188F8C 8C410000 */  lw          $at, 0x0($v0)
/* EF1CD0 80188F90 8C580004 */  lw          $t8, 0x4($v0)
/* EF1CD4 80188F94 8C4F0004 */  lw          $t7, 0x4($v0)
/* EF1CD8 80188F98 ACC10000 */  sw          $at, 0x0($a2)
/* EF1CDC 80188F9C 8C410008 */  lw          $at, 0x8($v0)
/* EF1CE0 80188FA0 ACD80004 */  sw          $t8, 0x4($a2)
/* EF1CE4 80188FA4 AD4F0004 */  sw          $t7, 0x4($t2)
/* EF1CE8 80188FA8 ACC10008 */  sw          $at, 0x8($a2)
/* EF1CEC 80188FAC 8C410000 */  lw          $at, 0x0($v0)
/* EF1CF0 80188FB0 8C580004 */  lw          $t8, 0x4($v0)
/* EF1CF4 80188FB4 8C4F0004 */  lw          $t7, 0x4($v0)
/* EF1CF8 80188FB8 AD410000 */  sw          $at, 0x0($t2)
/* EF1CFC 80188FBC 8C410008 */  lw          $at, 0x8($v0)
/* EF1D00 80188FC0 AD780004 */  sw          $t8, 0x4($t3)
/* EF1D04 80188FC4 8C580004 */  lw          $t8, 0x4($v0)
/* EF1D08 80188FC8 AD410008 */  sw          $at, 0x8($t2)
/* EF1D0C 80188FCC 8C410000 */  lw          $at, 0x0($v0)
/* EF1D10 80188FD0 AD8F0004 */  sw          $t7, 0x4($t4)
/* EF1D14 80188FD4 8C4F0004 */  lw          $t7, 0x4($v0)
/* EF1D18 80188FD8 AD610000 */  sw          $at, 0x0($t3)
/* EF1D1C 80188FDC 8C410008 */  lw          $at, 0x8($v0)
/* EF1D20 80188FE0 24840004 */  addiu       $a0, $a0, 0x4
/* EF1D24 80188FE4 AD000004 */  sw          $zero, 0x4($t0)
/* EF1D28 80188FE8 AD610008 */  sw          $at, 0x8($t3)
/* EF1D2C 80188FEC 8C410000 */  lw          $at, 0x0($v0)
/* EF1D30 80188FF0 ADB80004 */  sw          $t8, 0x4($t5)
/* EF1D34 80188FF4 8C580004 */  lw          $t8, 0x4($v0)
/* EF1D38 80188FF8 AD810000 */  sw          $at, 0x0($t4)
/* EF1D3C 80188FFC 8C410008 */  lw          $at, 0x8($v0)
/* EF1D40 80189000 AD000008 */  sw          $zero, 0x8($t0)
/* EF1D44 80189004 AD00000C */  sw          $zero, 0xC($t0)
/* EF1D48 80189008 AD810008 */  sw          $at, 0x8($t4)
/* EF1D4C 8018900C 8C410000 */  lw          $at, 0x0($v0)
/* EF1D50 80189010 AE0F0004 */  sw          $t7, 0x4($s0)
/* EF1D54 80189014 8C4F0004 */  lw          $t7, 0x4($v0)
/* EF1D58 80189018 ADA10000 */  sw          $at, 0x0($t5)
/* EF1D5C 8018901C 8C410008 */  lw          $at, 0x8($v0)
/* EF1D60 80189020 24C60030 */  addiu       $a2, $a2, 0x30
/* EF1D64 80189024 25080010 */  addiu       $t0, $t0, 0x10
/* EF1D68 80189028 ADA10008 */  sw          $at, 0x8($t5)
/* EF1D6C 8018902C 8C410000 */  lw          $at, 0x0($v0)
/* EF1D70 80189030 254A0030 */  addiu       $t2, $t2, 0x30
/* EF1D74 80189034 256B0030 */  addiu       $t3, $t3, 0x30
/* EF1D78 80189038 AE010000 */  sw          $at, 0x0($s0)
/* EF1D7C 8018903C 8C410008 */  lw          $at, 0x8($v0)
/* EF1D80 80189040 258C0030 */  addiu       $t4, $t4, 0x30
/* EF1D84 80189044 25AD0030 */  addiu       $t5, $t5, 0x30
/* EF1D88 80189048 AE010008 */  sw          $at, 0x8($s0)
/* EF1D8C 8018904C 8C410000 */  lw          $at, 0x0($v0)
/* EF1D90 80189050 26100030 */  addiu       $s0, $s0, 0x30
/* EF1D94 80189054 26310030 */  addiu       $s1, $s1, 0x30
/* EF1D98 80189058 AE21FFD0 */  sw          $at, -0x30($s1)
/* EF1D9C 8018905C 8C410008 */  lw          $at, 0x8($v0)
/* EF1DA0 80189060 26520030 */  addiu       $s2, $s2, 0x30
/* EF1DA4 80189064 AD00FFF0 */  sw          $zero, -0x10($t0)
/* EF1DA8 80189068 AE21FFD8 */  sw          $at, -0x28($s1)
/* EF1DAC 8018906C 8C410000 */  lw          $at, 0x0($v0)
/* EF1DB0 80189070 AE38FFD4 */  sw          $t8, -0x2C($s1)
/* EF1DB4 80189074 AE4FFFD4 */  sw          $t7, -0x2C($s2)
/* EF1DB8 80189078 AE41FFD0 */  sw          $at, -0x30($s2)
/* EF1DBC 8018907C 8C410008 */  lw          $at, 0x8($v0)
/* EF1DC0 80189080 149EFFC2 */  bne         $a0, $fp, .Lending_80188F8C
/* EF1DC4 80189084 AE41FFD8 */   sw         $at, -0x28($s2)
/* EF1DC8 80189088 26F70258 */  addiu       $s7, $s7, 0x258
/* EF1DCC 8018908C 24A50258 */  addiu       $a1, $a1, 0x258
/* EF1DD0 80189090 24E700C8 */  addiu       $a3, $a3, 0xC8
/* EF1DD4 80189094 25290258 */  addiu       $t1, $t1, 0x258
/* EF1DD8 80189098 26730258 */  addiu       $s3, $s3, 0x258
/* EF1DDC 8018909C 269400C8 */  addiu       $s4, $s4, 0xC8
/* EF1DE0 801890A0 26B50258 */  addiu       $s5, $s5, 0x258
/* EF1DE4 801890A4 16FFFF95 */  bne         $s7, $ra, .Lending_80188EFC
/* EF1DE8 801890A8 26D60258 */   addiu      $s6, $s6, 0x258
/* EF1DEC 801890AC 3C018016 */  lui         $at, %hi(D_80161690)
/* EF1DF0 801890B0 AC201690 */  sw          $zero, %lo(D_80161690)($at)
/* EF1DF4 801890B4 3C018019 */  lui         $at, %hi(D_ending_80196F94)
/* EF1DF8 801890B8 AC206F94 */  sw          $zero, %lo(D_ending_80196F94)($at)
/* EF1DFC 801890BC 44802000 */  mtc1        $zero, $ft0
/* EF1E00 801890C0 3C018019 */  lui         $at, %hi(D_ending_80196F98)
/* EF1E04 801890C4 AC206F98 */  sw          $zero, %lo(D_ending_80196F98)($at)
/* EF1E08 801890C8 3C01801A */  lui         $at, %hi(D_ending_80198580)
/* EF1E0C 801890CC 24190004 */  addiu       $t9, $zero, 0x4
/* EF1E10 801890D0 E4248580 */  swc1        $ft0, %lo(D_ending_80198580)($at)
/* EF1E14 801890D4 AC790000 */  sw          $t9, 0x0($v1)
/* EF1E18 801890D8 8FBF002C */  lw          $ra, 0x2C($sp)
/* EF1E1C 801890DC 8FB00008 */  lw          $s0, 0x8($sp)
/* EF1E20 801890E0 8FB1000C */  lw          $s1, 0xC($sp)
/* EF1E24 801890E4 8FB20010 */  lw          $s2, 0x10($sp)
/* EF1E28 801890E8 8FB30014 */  lw          $s3, 0x14($sp)
/* EF1E2C 801890EC 8FB40018 */  lw          $s4, 0x18($sp)
/* EF1E30 801890F0 8FB5001C */  lw          $s5, 0x1C($sp)
/* EF1E34 801890F4 8FB60020 */  lw          $s6, 0x20($sp)
/* EF1E38 801890F8 8FB70024 */  lw          $s7, 0x24($sp)
/* EF1E3C 801890FC 8FBE0028 */  lw          $fp, 0x28($sp)
/* EF1E40 80189100 03E00008 */  jr          $ra
/* EF1E44 80189104 27BD01C8 */   addiu      $sp, $sp, 0x1C8
.section .late_rodata
dlabel D_ending_801964B8
/* EFF1F8 801964B8 4019999A */ .float 2.400000095

dlabel D_ending_801964BC
/* EFF1FC 801964BC 4019999A */ .float 2.400000095

dlabel D_ending_801964C0
/* EFF200 801964C0 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_801964C4
/* EFF204 801964C4 3DCCCCCD */ .float 0.1000000015

dlabel D_ending_801964C8
/* EFF208 801964C8 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964CC
/* EFF20C 801964CC 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964D0
/* EFF210 801964D0 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964D4
/* EFF214 801964D4 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964D8
/* EFF218 801964D8 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964DC
/* EFF21C 801964DC 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964E0
/* EFF220 801964E0 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964E4
/* EFF224 801964E4 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964E8
/* EFF228 801964E8 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964EC
/* EFF22C 801964EC 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964F0
/* EFF230 801964F0 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964F4
/* EFF234 801964F4 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964F8
/* EFF238 801964F8 3C23D70A */ .float 0.009999999776

dlabel D_ending_801964FC
/* EFF23C 801964FC 3C23D70A */ .float 0.009999999776

dlabel D_ending_80196500
/* EFF240 80196500 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_80189108
/* EF1E48 80189108 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* EF1E4C 8018910C 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF1E50 80189110 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF1E54 80189114 AFBF001C */  sw          $ra, 0x1C($sp)
/* EF1E58 80189118 8D030138 */  lw          $v1, 0x138($t0)
/* EF1E5C 8018911C 2404001E */  addiu       $a0, $zero, 0x1E
/* EF1E60 80189120 10600009 */  beqz        $v1, .Lending_80189148
/* EF1E64 80189124 00601025 */   or         $v0, $v1, $zero
/* EF1E68 80189128 24010001 */  addiu       $at, $zero, 0x1
/* EF1E6C 8018912C 10410095 */  beq         $v0, $at, .Lending_80189384
/* EF1E70 80189130 3C038017 */   lui        $v1, %hi(gCsFrameCount)
/* EF1E74 80189134 24010002 */  addiu       $at, $zero, 0x2
/* EF1E78 80189138 104100AA */  beq         $v0, $at, .Lending_801893E4
/* EF1E7C 8018913C 240E0001 */   addiu      $t6, $zero, 0x1
/* EF1E80 80189140 100000F9 */  b           .Lending_80189528
/* EF1E84 80189144 00000000 */   nop
.Lending_80189148:
/* EF1E88 80189148 3C028017 */  lui         $v0, %hi(gCsFrameCount)
/* EF1E8C 8018914C 8C427A80 */  lw          $v0, %lo(gCsFrameCount)($v0)
/* EF1E90 80189150 240E0001 */  addiu       $t6, $zero, 0x1
/* EF1E94 80189154 3C018018 */  lui         $at, %hi(D_80178300)
/* EF1E98 80189158 10440011 */  beq         $v0, $a0, .Lending_801891A0
/* EF1E9C 8018915C AC2E8300 */   sw         $t6, %lo(D_80178300)($at)
/* EF1EA0 80189160 2401003C */  addiu       $at, $zero, 0x3C
/* EF1EA4 80189164 10410016 */  beq         $v0, $at, .Lending_801891C0
/* EF1EA8 80189168 240F0014 */   addiu      $t7, $zero, 0x14
/* EF1EAC 8018916C 24010064 */  addiu       $at, $zero, 0x64
/* EF1EB0 80189170 10410016 */  beq         $v0, $at, .Lending_801891CC
/* EF1EB4 80189174 24180014 */   addiu      $t8, $zero, 0x14
/* EF1EB8 80189178 24010078 */  addiu       $at, $zero, 0x78
/* EF1EBC 8018917C 10410016 */  beq         $v0, $at, .Lending_801891D8
/* EF1EC0 80189180 24010082 */   addiu      $at, $zero, 0x82
/* EF1EC4 80189184 10410017 */  beq         $v0, $at, .Lending_801891E4
/* EF1EC8 80189188 24190014 */   addiu      $t9, $zero, 0x14
/* EF1ECC 8018918C 240100AA */  addiu       $at, $zero, 0xAA
/* EF1ED0 80189190 10410017 */  beq         $v0, $at, .Lending_801891F0
/* EF1ED4 80189194 240A0014 */   addiu      $t2, $zero, 0x14
/* EF1ED8 80189198 10000017 */  b           .Lending_801891F8
/* EF1EDC 8018919C 00000000 */   nop
.Lending_801891A0:
/* EF1EE0 801891A0 3C048018 */  lui         $a0, %hi(gMsg_ID_21030)
/* EF1EE4 801891A4 24844D78 */  addiu       $a0, $a0, %lo(gMsg_ID_21030)
/* EF1EE8 801891A8 0C02EA02 */  jal         Radio_PlayMessage
/* EF1EEC 801891AC 00002825 */   or         $a1, $zero, $zero
/* EF1EF0 801891B0 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF1EF4 801891B4 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF1EF8 801891B8 1000000F */  b           .Lending_801891F8
/* EF1EFC 801891BC 8D030138 */   lw         $v1, 0x138($t0)
.Lending_801891C0:
/* EF1F00 801891C0 3C018019 */  lui         $at, %hi(D_ending_80196F94)
/* EF1F04 801891C4 1000000C */  b           .Lending_801891F8
/* EF1F08 801891C8 AC2F6F94 */   sw         $t7, %lo(D_ending_80196F94)($at)
.Lending_801891CC:
/* EF1F0C 801891CC 3C018019 */  lui         $at, %hi(D_ending_80196F94)
/* EF1F10 801891D0 10000009 */  b           .Lending_801891F8
/* EF1F14 801891D4 AC386F94 */   sw         $t8, %lo(D_ending_80196F94)($at)
.Lending_801891D8:
/* EF1F18 801891D8 3C018019 */  lui         $at, %hi(D_ending_80196F98)
/* EF1F1C 801891DC 10000006 */  b           .Lending_801891F8
/* EF1F20 801891E0 AC246F98 */   sw         $a0, %lo(D_ending_80196F98)($at)
.Lending_801891E4:
/* EF1F24 801891E4 3C018019 */  lui         $at, %hi(D_ending_80196F94)
/* EF1F28 801891E8 10000003 */  b           .Lending_801891F8
/* EF1F2C 801891EC AC396F94 */   sw         $t9, %lo(D_ending_80196F94)($at)
.Lending_801891F0:
/* EF1F30 801891F0 3C018019 */  lui         $at, %hi(D_ending_80196F94)
/* EF1F34 801891F4 AC2A6F94 */  sw          $t2, %lo(D_ending_80196F94)($at)
.Lending_801891F8:
/* EF1F38 801891F8 14600009 */  bnez        $v1, .Lending_80189220
/* EF1F3C 801891FC 3C0B8017 */   lui        $t3, %hi(gCsFrameCount)
/* EF1F40 80189200 8D6B7A80 */  lw          $t3, %lo(gCsFrameCount)($t3)
/* EF1F44 80189204 240100B4 */  addiu       $at, $zero, 0xB4
/* EF1F48 80189208 240C0078 */  addiu       $t4, $zero, 0x78
/* EF1F4C 8018920C 15610004 */  bne         $t3, $at, .Lending_80189220
/* EF1F50 80189210 3C018016 */   lui        $at, %hi(D_80161690)
/* EF1F54 80189214 AC2C1690 */  sw          $t4, %lo(D_80161690)($at)
/* EF1F58 80189218 3C018018 */  lui         $at, %hi(gRadioState)
/* EF1F5C 8018921C AC20829C */  sw          $zero, %lo(gRadioState)($at)
.Lending_80189220:
/* EF1F60 80189220 0C06218D */  jal         func_ending_80188634
/* EF1F64 80189224 00000000 */   nop
/* EF1F68 80189228 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF1F6C 8018922C 14400005 */  bnez        $v0, .Lending_80189244
/* EF1F70 80189230 25086D08 */   addiu      $t0, $t0, %lo(D_ending_80196D08)
/* EF1F74 80189234 3C0D8017 */  lui         $t5, %hi(gCsFrameCount)
/* EF1F78 80189238 8DAD7A80 */  lw          $t5, %lo(gCsFrameCount)($t5)
/* EF1F7C 8018923C 240100E6 */  addiu       $at, $zero, 0xE6
/* EF1F80 80189240 15A1000E */  bne         $t5, $at, .Lending_8018927C
.Lending_80189244:
/* EF1F84 80189244 240E0001 */   addiu      $t6, $zero, 0x1
/* EF1F88 80189248 AD000134 */  sw          $zero, 0x134($t0)
/* EF1F8C 8018924C AD0E0138 */  sw          $t6, 0x138($t0)
/* EF1F90 80189250 3C018017 */  lui         $at, %hi(gCsFrameCount)
/* EF1F94 80189254 3C044900 */  lui         $a0, (0x49002018 >> 16)
/* EF1F98 80189258 AC207A80 */  sw          $zero, %lo(gCsFrameCount)($at)
/* EF1F9C 8018925C 0C006A0E */  jal         func_8001A838
/* EF1FA0 80189260 34842018 */   ori        $a0, $a0, (0x49002018 & 0xFFFF)
/* EF1FA4 80189264 3C018019 */  lui         $at, %hi(D_ending_80196F90)
/* EF1FA8 80189268 AC206F90 */  sw          $zero, %lo(D_ending_80196F90)($at)
/* EF1FAC 8018926C 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF1FB0 80189270 3C018016 */  lui         $at, %hi(D_80161690)
/* EF1FB4 80189274 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF1FB8 80189278 AC201690 */  sw          $zero, %lo(D_80161690)($at)
.Lending_8018927C:
/* EF1FBC 8018927C 0C026B37 */  jal         Animation_GetFrameCount
/* EF1FC0 80189280 8D040100 */   lw         $a0, 0x100($t0)
/* EF1FC4 80189284 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF1FC8 80189288 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF1FCC 8018928C 8D050134 */  lw          $a1, 0x134($t0)
/* EF1FD0 80189290 C5080130 */  lwc1        $ft2, 0x130($t0)
/* EF1FD4 80189294 24180001 */  addiu       $t8, $zero, 0x1
/* EF1FD8 80189298 44852000 */  mtc1        $a1, $ft0
/* EF1FDC 8018929C 3C038017 */  lui         $v1, %hi(gCsFrameCount)
/* EF1FE0 801892A0 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF1FE4 801892A4 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF1FE8 801892A8 444FF800 */  cfc1        $t7, $31
/* EF1FEC 801892AC 44D8F800 */  ctc1        $t8, $31
/* EF1FF0 801892B0 00000000 */  nop
/* EF1FF4 801892B4 46005424 */  cvt.w.s     $ft4, $ft3
/* EF1FF8 801892B8 4458F800 */  cfc1        $t8, $31
/* EF1FFC 801892BC 00000000 */  nop
/* EF2000 801892C0 33010004 */  andi        $at, $t8, 0x4
/* EF2004 801892C4 33180078 */  andi        $t8, $t8, 0x78
/* EF2008 801892C8 53000015 */  beql        $t8, $zero, .Lending_80189320
/* EF200C 801892CC 44188000 */   mfc1       $t8, $ft4
/* EF2010 801892D0 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF2014 801892D4 44818000 */  mtc1        $at, $ft4
/* EF2018 801892D8 24180001 */  addiu       $t8, $zero, 0x1
/* EF201C 801892DC 46105401 */  sub.s       $ft4, $ft3, $ft4
/* EF2020 801892E0 44D8F800 */  ctc1        $t8, $31
/* EF2024 801892E4 00000000 */  nop
/* EF2028 801892E8 46008424 */  cvt.w.s     $ft4, $ft4
/* EF202C 801892EC 4458F800 */  cfc1        $t8, $31
/* EF2030 801892F0 00000000 */  nop
/* EF2034 801892F4 33010004 */  andi        $at, $t8, 0x4
/* EF2038 801892F8 33180078 */  andi        $t8, $t8, 0x78
/* EF203C 801892FC 17000005 */  bnez        $t8, .Lending_80189314
/* EF2040 80189300 00000000 */   nop
/* EF2044 80189304 44188000 */  mfc1        $t8, $ft4
/* EF2048 80189308 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF204C 8018930C 10000007 */  b           .Lending_8018932C
/* EF2050 80189310 0301C025 */   or         $t8, $t8, $at
.Lending_80189314:
/* EF2054 80189314 10000005 */  b           .Lending_8018932C
/* EF2058 80189318 2418FFFF */   addiu      $t8, $zero, -0x1
/* EF205C 8018931C 44188000 */  mfc1        $t8, $ft4
.Lending_80189320:
/* EF2060 80189320 00000000 */  nop
/* EF2064 80189324 0700FFFB */  bltz        $t8, .Lending_80189314
/* EF2068 80189328 00000000 */   nop
.Lending_8018932C:
/* EF206C 8018932C 0302001B */  divu        $zero, $t8, $v0
/* EF2070 80189330 8C637A80 */  lw          $v1, %lo(gCsFrameCount)($v1)
/* EF2074 80189334 00002010 */  mfhi        $a0
/* EF2078 80189338 44CFF800 */  ctc1        $t7, $31
/* EF207C 8018933C 14400002 */  bnez        $v0, .Lending_80189348
/* EF2080 80189340 00000000 */   nop
/* EF2084 80189344 0007000D */  break       7
.Lending_80189348:
/* EF2088 80189348 2861001E */  slti        $at, $v1, 0x1E
/* EF208C 8018934C 14200002 */  bnez        $at, .Lending_80189358
/* EF2090 80189350 28610029 */   slti       $at, $v1, 0x29
/* EF2094 80189354 14200004 */  bnez        $at, .Lending_80189368
.Lending_80189358:
/* EF2098 80189358 2861003C */   slti       $at, $v1, 0x3C
/* EF209C 8018935C 14200005 */  bnez        $at, .Lending_80189374
/* EF20A0 80189360 2861006F */   slti       $at, $v1, 0x6F
/* EF20A4 80189364 10200003 */  beqz        $at, .Lending_80189374
.Lending_80189368:
/* EF20A8 80189368 24B90001 */   addiu      $t9, $a1, 0x1
/* EF20AC 8018936C 1000006E */  b           .Lending_80189528
/* EF20B0 80189370 AD190134 */   sw         $t9, 0x134($t0)
.Lending_80189374:
/* EF20B4 80189374 1080006C */  beqz        $a0, .Lending_80189528
/* EF20B8 80189378 24AA0001 */   addiu      $t2, $a1, 0x1
/* EF20BC 8018937C 1000006A */  b           .Lending_80189528
/* EF20C0 80189380 AD0A0134 */   sw         $t2, 0x134($t0)
.Lending_80189384:
/* EF20C4 80189384 8C637A80 */  lw          $v1, %lo(gCsFrameCount)($v1)
/* EF20C8 80189388 3C018018 */  lui         $at, %hi(D_80178300)
/* EF20CC 8018938C AC208300 */  sw          $zero, %lo(D_80178300)($at)
/* EF20D0 80189390 24010014 */  addiu       $at, $zero, 0x14
/* EF20D4 80189394 14610008 */  bne         $v1, $at, .Lending_801893B8
/* EF20D8 80189398 3C048018 */   lui        $a0, %hi(gMsg_ID_21050)
/* EF20DC 8018939C 24844DDC */  addiu       $a0, $a0, %lo(gMsg_ID_21050)
/* EF20E0 801893A0 0C02EA02 */  jal         Radio_PlayMessage
/* EF20E4 801893A4 2405012C */   addiu      $a1, $zero, 0x12C
/* EF20E8 801893A8 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF20EC 801893AC 3C038017 */  lui         $v1, %hi(gCsFrameCount)
/* EF20F0 801893B0 8C637A80 */  lw          $v1, %lo(gCsFrameCount)($v1)
/* EF20F4 801893B4 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
.Lending_801893B8:
/* EF20F8 801893B8 24010082 */  addiu       $at, $zero, 0x82
/* EF20FC 801893BC 14610005 */  bne         $v1, $at, .Lending_801893D4
/* EF2100 801893C0 240B0002 */   addiu      $t3, $zero, 0x2
/* EF2104 801893C4 AD000134 */  sw          $zero, 0x134($t0)
/* EF2108 801893C8 AD0B0138 */  sw          $t3, 0x138($t0)
/* EF210C 801893CC 3C018017 */  lui         $at, %hi(gCsFrameCount)
/* EF2110 801893D0 AC207A80 */  sw          $zero, %lo(gCsFrameCount)($at)
.Lending_801893D4:
/* EF2114 801893D4 8D0C0134 */  lw          $t4, 0x134($t0)
/* EF2118 801893D8 258D0001 */  addiu       $t5, $t4, 0x1
/* EF211C 801893DC 10000052 */  b           .Lending_80189528
/* EF2120 801893E0 AD0D0134 */   sw         $t5, 0x134($t0)
.Lending_801893E4:
/* EF2124 801893E4 3C028017 */  lui         $v0, %hi(gCsFrameCount)
/* EF2128 801893E8 8C427A80 */  lw          $v0, %lo(gCsFrameCount)($v0)
/* EF212C 801893EC 3C018018 */  lui         $at, %hi(D_80178300)
/* EF2130 801893F0 AC2E8300 */  sw          $t6, %lo(D_80178300)($at)
/* EF2134 801893F4 24010014 */  addiu       $at, $zero, 0x14
/* EF2138 801893F8 10410006 */  beq         $v0, $at, .Lending_80189414
/* EF213C 801893FC 3C048018 */   lui        $a0, %hi(gMsg_ID_21060)
/* EF2140 80189400 24010050 */  addiu       $at, $zero, 0x50
/* EF2144 80189404 10410009 */  beq         $v0, $at, .Lending_8018942C
/* EF2148 80189408 240F00FF */   addiu      $t7, $zero, 0xFF
/* EF214C 8018940C 10000009 */  b           .Lending_80189434
/* EF2150 80189410 00000000 */   nop
.Lending_80189414:
/* EF2154 80189414 24844E18 */  addiu       $a0, $a0, %lo(gMsg_ID_21060)
/* EF2158 80189418 0C02EA02 */  jal         Radio_PlayMessage
/* EF215C 8018941C 00002825 */   or         $a1, $zero, $zero
/* EF2160 80189420 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF2164 80189424 10000003 */  b           .Lending_80189434
/* EF2168 80189428 25086D08 */   addiu      $t0, $t0, %lo(D_ending_80196D08)
.Lending_8018942C:
/* EF216C 8018942C 3C018018 */  lui         $at, %hi(D_80178358)
/* EF2170 80189430 AC2F8358 */  sw          $t7, %lo(D_80178358)($at)
.Lending_80189434:
/* EF2174 80189434 0C026B37 */  jal         Animation_GetFrameCount
/* EF2178 80189438 8D040100 */   lw         $a0, 0x100($t0)
/* EF217C 8018943C 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF2180 80189440 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF2184 80189444 8D050134 */  lw          $a1, 0x134($t0)
/* EF2188 80189448 C5060130 */  lwc1        $ft1, 0x130($t0)
/* EF218C 8018944C 24190001 */  addiu       $t9, $zero, 0x1
/* EF2190 80189450 44859000 */  mtc1        $a1, $ft5
/* EF2194 80189454 3C038017 */  lui         $v1, %hi(gCsFrameCount)
/* EF2198 80189458 46809120 */  cvt.s.w     $ft0, $ft5
/* EF219C 8018945C 46062202 */  mul.s       $ft2, $ft0, $ft1
/* EF21A0 80189460 4458F800 */  cfc1        $t8, $31
/* EF21A4 80189464 44D9F800 */  ctc1        $t9, $31
/* EF21A8 80189468 00000000 */  nop
/* EF21AC 8018946C 460042A4 */  cvt.w.s     $ft3, $ft2
/* EF21B0 80189470 4459F800 */  cfc1        $t9, $31
/* EF21B4 80189474 00000000 */  nop
/* EF21B8 80189478 33210004 */  andi        $at, $t9, 0x4
/* EF21BC 8018947C 33390078 */  andi        $t9, $t9, 0x78
/* EF21C0 80189480 53200015 */  beql        $t9, $zero, .Lending_801894D8
/* EF21C4 80189484 44195000 */   mfc1       $t9, $ft3
/* EF21C8 80189488 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF21CC 8018948C 44815000 */  mtc1        $at, $ft3
/* EF21D0 80189490 24190001 */  addiu       $t9, $zero, 0x1
/* EF21D4 80189494 460A4281 */  sub.s       $ft3, $ft2, $ft3
/* EF21D8 80189498 44D9F800 */  ctc1        $t9, $31
/* EF21DC 8018949C 00000000 */  nop
/* EF21E0 801894A0 460052A4 */  cvt.w.s     $ft3, $ft3
/* EF21E4 801894A4 4459F800 */  cfc1        $t9, $31
/* EF21E8 801894A8 00000000 */  nop
/* EF21EC 801894AC 33210004 */  andi        $at, $t9, 0x4
/* EF21F0 801894B0 33390078 */  andi        $t9, $t9, 0x78
/* EF21F4 801894B4 17200005 */  bnez        $t9, .Lending_801894CC
/* EF21F8 801894B8 00000000 */   nop
/* EF21FC 801894BC 44195000 */  mfc1        $t9, $ft3
/* EF2200 801894C0 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF2204 801894C4 10000007 */  b           .Lending_801894E4
/* EF2208 801894C8 0321C825 */   or         $t9, $t9, $at
.Lending_801894CC:
/* EF220C 801894CC 10000005 */  b           .Lending_801894E4
/* EF2210 801894D0 2419FFFF */   addiu      $t9, $zero, -0x1
/* EF2214 801894D4 44195000 */  mfc1        $t9, $ft3
.Lending_801894D8:
/* EF2218 801894D8 00000000 */  nop
/* EF221C 801894DC 0720FFFB */  bltz        $t9, .Lending_801894CC
/* EF2220 801894E0 00000000 */   nop
.Lending_801894E4:
/* EF2224 801894E4 0322001B */  divu        $zero, $t9, $v0
/* EF2228 801894E8 8C637A80 */  lw          $v1, %lo(gCsFrameCount)($v1)
/* EF222C 801894EC 00002010 */  mfhi        $a0
/* EF2230 801894F0 44D8F800 */  ctc1        $t8, $31
/* EF2234 801894F4 14400002 */  bnez        $v0, .Lending_80189500
/* EF2238 801894F8 00000000 */   nop
/* EF223C 801894FC 0007000D */  break       7
.Lending_80189500:
/* EF2240 80189500 28610014 */  slti        $at, $v1, 0x14
/* EF2244 80189504 14200005 */  bnez        $at, .Lending_8018951C
/* EF2248 80189508 28610033 */   slti       $at, $v1, 0x33
/* EF224C 8018950C 10200003 */  beqz        $at, .Lending_8018951C
/* EF2250 80189510 24AA0001 */   addiu      $t2, $a1, 0x1
/* EF2254 80189514 10000004 */  b           .Lending_80189528
/* EF2258 80189518 AD0A0134 */   sw         $t2, 0x134($t0)
.Lending_8018951C:
/* EF225C 8018951C 10800002 */  beqz        $a0, .Lending_80189528
/* EF2260 80189520 24AB0001 */   addiu      $t3, $a1, 0x1
/* EF2264 80189524 AD0B0134 */  sw          $t3, 0x134($t0)
.Lending_80189528:
/* EF2268 80189528 3C028019 */  lui         $v0, %hi(D_ending_80196F94)
/* EF226C 8018952C 8C426F94 */  lw          $v0, %lo(D_ending_80196F94)($v0)
/* EF2270 80189530 3C018019 */  lui         $at, %hi(D_ending_80196F94)
/* EF2274 80189534 3C038019 */  lui         $v1, %hi(D_ending_80196F98)
/* EF2278 80189538 10400002 */  beqz        $v0, .Lending_80189544
/* EF227C 8018953C 244CFFFF */   addiu      $t4, $v0, -0x1
/* EF2280 80189540 AC2C6F94 */  sw          $t4, %lo(D_ending_80196F94)($at)
.Lending_80189544:
/* EF2284 80189544 8C636F98 */  lw          $v1, %lo(D_ending_80196F98)($v1)
/* EF2288 80189548 3C018019 */  lui         $at, %hi(D_ending_80196F98)
/* EF228C 8018954C 3C028016 */  lui         $v0, %hi(D_80161690)
/* EF2290 80189550 10600004 */  beqz        $v1, .Lending_80189564
/* EF2294 80189554 246DFFFF */   addiu      $t5, $v1, -0x1
/* EF2298 80189558 AC2D6F98 */  sw          $t5, %lo(D_ending_80196F98)($at)
/* EF229C 8018955C 3C038019 */  lui         $v1, %hi(D_ending_80196F98)
/* EF22A0 80189560 8C636F98 */  lw          $v1, %lo(D_ending_80196F98)($v1)
.Lending_80189564:
/* EF22A4 80189564 8C421690 */  lw          $v0, %lo(D_80161690)($v0)
/* EF22A8 80189568 3C0E8019 */  lui         $t6, %hi(D_ending_80196F94)
/* EF22AC 8018956C 14400033 */  bnez        $v0, .Lending_8018963C
/* EF22B0 80189570 00000000 */   nop
/* EF22B4 80189574 8DCE6F94 */  lw          $t6, %lo(D_ending_80196F94)($t6)
/* EF22B8 80189578 3C09801A */  lui         $t1, %hi(D_ending_80198260)
/* EF22BC 8018957C 25298260 */  addiu       $t1, $t1, %lo(D_ending_80198260)
/* EF22C0 80189580 11C0002E */  beqz        $t6, .Lending_8018963C
/* EF22C4 80189584 00000000 */   nop
/* EF22C8 80189588 8D2F00CC */  lw          $t7, 0xCC($t1)
/* EF22CC 8018958C 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x264)
/* EF22D0 80189590 15E00019 */  bnez        $t7, .Lending_801895F8
/* EF22D4 80189594 00000000 */   nop
/* EF22D8 80189598 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x264)
/* EF22DC 8018959C C4307204 */  lwc1        $ft4, %lo(D_ending_80196FA0 + 0x264)($at)
/* EF22E0 801895A0 3C018019 */  lui         $at, %hi(D_ending_801964B8)
/* EF22E4 801895A4 C43264B8 */  lwc1        $ft5, %lo(D_ending_801964B8)($at)
/* EF22E8 801895A8 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x264)
/* EF22EC 801895AC 24180001 */  addiu       $t8, $zero, 0x1
/* EF22F0 801895B0 46128101 */  sub.s       $ft0, $ft4, $ft5
/* EF22F4 801895B4 E4247204 */  swc1        $ft0, %lo(D_ending_80196FA0 + 0x264)($at)
/* EF22F8 801895B8 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x26C)
/* EF22FC 801895BC C426720C */  lwc1        $ft1, %lo(D_ending_80196FA0 + 0x26C)($at)
/* EF2300 801895C0 3C014140 */  lui         $at, (0x41400000 >> 16)
/* EF2304 801895C4 44814000 */  mtc1        $at, $ft2
/* EF2308 801895C8 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x26C)
/* EF230C 801895CC 46083281 */  sub.s       $ft3, $ft1, $ft2
/* EF2310 801895D0 E42A720C */  swc1        $ft3, %lo(D_ending_80196FA0 + 0x26C)($at)
/* EF2314 801895D4 3C01C0C0 */  lui         $at, (0xC0C00000 >> 16)
/* EF2318 801895D8 44818000 */  mtc1        $at, $ft4
/* EF231C 801895DC 00000000 */  nop
/* EF2320 801895E0 4610203E */  c.le.s      $ft0, $ft4
/* EF2324 801895E4 00000000 */  nop
/* EF2328 801895E8 45000014 */  bc1f        .Lending_8018963C
/* EF232C 801895EC 00000000 */   nop
/* EF2330 801895F0 10000012 */  b           .Lending_8018963C
/* EF2334 801895F4 AD3800CC */   sw         $t8, 0xCC($t1)
.Lending_801895F8:
/* EF2338 801895F8 C4327204 */  lwc1        $ft5, %lo(D_ending_80196FA0 + 0x264)($at)
/* EF233C 801895FC 3C018019 */  lui         $at, %hi(D_ending_801964BC)
/* EF2340 80189600 C42664BC */  lwc1        $ft1, %lo(D_ending_801964BC)($at)
/* EF2344 80189604 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x264)
/* EF2348 80189608 46069200 */  add.s       $ft2, $ft5, $ft1
/* EF234C 8018960C 44809000 */  mtc1        $zero, $ft5
/* EF2350 80189610 E4287204 */  swc1        $ft2, %lo(D_ending_80196FA0 + 0x264)($at)
/* EF2354 80189614 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x26C)
/* EF2358 80189618 C42A720C */  lwc1        $ft3, %lo(D_ending_80196FA0 + 0x26C)($at)
/* EF235C 8018961C 3C014140 */  lui         $at, (0x41400000 >> 16)
/* EF2360 80189620 44818000 */  mtc1        $at, $ft4
/* EF2364 80189624 4608903E */  c.le.s      $ft5, $ft2
/* EF2368 80189628 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x26C)
/* EF236C 8018962C 46105100 */  add.s       $ft0, $ft3, $ft4
/* EF2370 80189630 45000002 */  bc1f        .Lending_8018963C
/* EF2374 80189634 E424720C */   swc1       $ft0, %lo(D_ending_80196FA0 + 0x26C)($at)
/* EF2378 80189638 AD2000CC */  sw          $zero, 0xCC($t1)
.Lending_8018963C:
/* EF237C 8018963C 3C09801A */  lui         $t1, %hi(D_ending_80198260)
/* EF2380 80189640 14400038 */  bnez        $v0, .Lending_80189724
/* EF2384 80189644 25298260 */   addiu      $t1, $t1, %lo(D_ending_80198260)
/* EF2388 80189648 10600036 */  beqz        $v1, .Lending_80189724
/* EF238C 8018964C 00000000 */   nop
/* EF2390 80189650 8D390190 */  lw          $t9, 0x190($t1)
/* EF2394 80189654 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B4)
/* EF2398 80189658 24847454 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B4)
/* EF239C 8018965C 17200019 */  bnez        $t9, .Lending_801896C4
/* EF23A0 80189660 3C054120 */   lui        $a1, (0x41200000 >> 16)
/* EF23A4 80189664 3C018019 */  lui         $at, %hi(D_ending_801964C0)
/* EF23A8 80189668 C42664C0 */  lwc1        $ft1, %lo(D_ending_801964C0)($at)
/* EF23AC 8018966C 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B4)
/* EF23B0 80189670 3C063ECC */  lui         $a2, (0x3ECCCCCD >> 16)
/* EF23B4 80189674 34C6CCCD */  ori         $a2, $a2, (0x3ECCCCCD & 0xFFFF)
/* EF23B8 80189678 24847454 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B4)
/* EF23BC 8018967C 3C05C120 */  lui         $a1, (0xC1200000 >> 16)
/* EF23C0 80189680 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* EF23C4 80189684 0C026F0B */  jal         Math_SmoothStepToF
/* EF23C8 80189688 E7A60010 */   swc1       $ft1, 0x10($sp)
/* EF23CC 8018968C 3C01C120 */  lui         $at, (0xC1200000 >> 16)
/* EF23D0 80189690 44815000 */  mtc1        $at, $ft3
/* EF23D4 80189694 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x4B4)
/* EF23D8 80189698 C4307454 */  lwc1        $ft4, %lo(D_ending_80196FA0 + 0x4B4)($at)
/* EF23DC 8018969C 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF23E0 801896A0 3C09801A */  lui         $t1, %hi(D_ending_80198260)
/* EF23E4 801896A4 460A803E */  c.le.s      $ft4, $ft3
/* EF23E8 801896A8 25298260 */  addiu       $t1, $t1, %lo(D_ending_80198260)
/* EF23EC 801896AC 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF23F0 801896B0 240A0001 */  addiu       $t2, $zero, 0x1
/* EF23F4 801896B4 45020017 */  bc1fl       .Lending_80189714
/* EF23F8 801896B8 8D0B00F4 */   lw         $t3, 0xF4($t0)
/* EF23FC 801896BC 10000014 */  b           .Lending_80189710
/* EF2400 801896C0 AD2A0190 */   sw         $t2, 0x190($t1)
.Lending_801896C4:
/* EF2404 801896C4 3C018019 */  lui         $at, %hi(D_ending_801964C4)
/* EF2408 801896C8 C42464C4 */  lwc1        $ft0, %lo(D_ending_801964C4)($at)
/* EF240C 801896CC 3C063ECC */  lui         $a2, (0x3ECCCCCD >> 16)
/* EF2410 801896D0 34C6CCCD */  ori         $a2, $a2, (0x3ECCCCCD & 0xFFFF)
/* EF2414 801896D4 3C0742C8 */  lui         $a3, (0x42C80000 >> 16)
/* EF2418 801896D8 0C026F0B */  jal         Math_SmoothStepToF
/* EF241C 801896DC E7A40010 */   swc1       $ft0, 0x10($sp)
/* EF2420 801896E0 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x4B4)
/* EF2424 801896E4 C4287454 */  lwc1        $ft2, %lo(D_ending_80196FA0 + 0x4B4)($at)
/* EF2428 801896E8 3C014120 */  lui         $at, (0x41200000 >> 16)
/* EF242C 801896EC 44819000 */  mtc1        $at, $ft5
/* EF2430 801896F0 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF2434 801896F4 3C09801A */  lui         $t1, %hi(D_ending_80198260)
/* EF2438 801896F8 4608903E */  c.le.s      $ft5, $ft2
/* EF243C 801896FC 25298260 */  addiu       $t1, $t1, %lo(D_ending_80198260)
/* EF2440 80189700 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF2444 80189704 45020003 */  bc1fl       .Lending_80189714
/* EF2448 80189708 8D0B00F4 */   lw         $t3, 0xF4($t0)
/* EF244C 8018970C AD200190 */  sw          $zero, 0x190($t1)
.Lending_80189710:
/* EF2450 80189710 8D0B00F4 */  lw          $t3, 0xF4($t0)
.Lending_80189714:
/* EF2454 80189714 3C038019 */  lui         $v1, %hi(D_ending_80196F98)
/* EF2458 80189718 256C0002 */  addiu       $t4, $t3, 0x2
/* EF245C 8018971C AD0C00F4 */  sw          $t4, 0xF4($t0)
/* EF2460 80189720 8C636F98 */  lw          $v1, %lo(D_ending_80196F98)($v1)
.Lending_80189724:
/* EF2464 80189724 5460003B */  bnel        $v1, $zero, .Lending_80189814
/* EF2468 80189728 8D190138 */   lw         $t9, 0x138($t0)
/* EF246C 8018972C 8D0D0138 */  lw          $t5, 0x138($t0)
/* EF2470 80189730 24010002 */  addiu       $at, $zero, 0x2
/* EF2474 80189734 51A10037 */  beql        $t5, $at, .Lending_80189814
/* EF2478 80189738 8D190138 */   lw         $t9, 0x138($t0)
/* EF247C 8018973C 0C026B37 */  jal         Animation_GetFrameCount
/* EF2480 80189740 8D0400C0 */   lw         $a0, 0xC0($t0)
/* EF2484 80189744 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF2488 80189748 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF248C 8018974C 8D0300F4 */  lw          $v1, 0xF4($t0)
/* EF2490 80189750 C51000F0 */  lwc1        $ft4, 0xF0($t0)
/* EF2494 80189754 240F0001 */  addiu       $t7, $zero, 0x1
/* EF2498 80189758 44833000 */  mtc1        $v1, $ft1
/* EF249C 8018975C 24780002 */  addiu       $t8, $v1, 0x2
/* EF24A0 80189760 468032A0 */  cvt.s.w     $ft3, $ft1
/* EF24A4 80189764 46105102 */  mul.s       $ft0, $ft3, $ft4
/* EF24A8 80189768 444EF800 */  cfc1        $t6, $31
/* EF24AC 8018976C 44CFF800 */  ctc1        $t7, $31
/* EF24B0 80189770 00000000 */  nop
/* EF24B4 80189774 46002224 */  cvt.w.s     $ft2, $ft0
/* EF24B8 80189778 444FF800 */  cfc1        $t7, $31
/* EF24BC 8018977C 00000000 */  nop
/* EF24C0 80189780 31E10004 */  andi        $at, $t7, 0x4
/* EF24C4 80189784 31EF0078 */  andi        $t7, $t7, 0x78
/* EF24C8 80189788 51E00015 */  beql        $t7, $zero, .Lending_801897E0
/* EF24CC 8018978C 440F4000 */   mfc1       $t7, $ft2
/* EF24D0 80189790 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF24D4 80189794 44814000 */  mtc1        $at, $ft2
/* EF24D8 80189798 240F0001 */  addiu       $t7, $zero, 0x1
/* EF24DC 8018979C 46082201 */  sub.s       $ft2, $ft0, $ft2
/* EF24E0 801897A0 44CFF800 */  ctc1        $t7, $31
/* EF24E4 801897A4 00000000 */  nop
/* EF24E8 801897A8 46004224 */  cvt.w.s     $ft2, $ft2
/* EF24EC 801897AC 444FF800 */  cfc1        $t7, $31
/* EF24F0 801897B0 00000000 */  nop
/* EF24F4 801897B4 31E10004 */  andi        $at, $t7, 0x4
/* EF24F8 801897B8 31EF0078 */  andi        $t7, $t7, 0x78
/* EF24FC 801897BC 15E00005 */  bnez        $t7, .Lending_801897D4
/* EF2500 801897C0 00000000 */   nop
/* EF2504 801897C4 440F4000 */  mfc1        $t7, $ft2
/* EF2508 801897C8 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF250C 801897CC 10000007 */  b           .Lending_801897EC
/* EF2510 801897D0 01E17825 */   or         $t7, $t7, $at
.Lending_801897D4:
/* EF2514 801897D4 10000005 */  b           .Lending_801897EC
/* EF2518 801897D8 240FFFFF */   addiu      $t7, $zero, -0x1
/* EF251C 801897DC 440F4000 */  mfc1        $t7, $ft2
.Lending_801897E0:
/* EF2520 801897E0 00000000 */  nop
/* EF2524 801897E4 05E0FFFB */  bltz        $t7, .Lending_801897D4
/* EF2528 801897E8 00000000 */   nop
.Lending_801897EC:
/* EF252C 801897EC 01E2001B */  divu        $zero, $t7, $v0
/* EF2530 801897F0 00002010 */  mfhi        $a0
/* EF2534 801897F4 44CEF800 */  ctc1        $t6, $31
/* EF2538 801897F8 14400002 */  bnez        $v0, .Lending_80189804
/* EF253C 801897FC 00000000 */   nop
/* EF2540 80189800 0007000D */  break       7
.Lending_80189804:
/* EF2544 80189804 50800003 */  beql        $a0, $zero, .Lending_80189814
/* EF2548 80189808 8D190138 */   lw         $t9, 0x138($t0)
/* EF254C 8018980C AD1800F4 */  sw          $t8, 0xF4($t0)
/* EF2550 80189810 8D190138 */  lw          $t9, 0x138($t0)
.Lending_80189814:
/* EF2554 80189814 24010002 */  addiu       $at, $zero, 0x2
/* EF2558 80189818 3C028016 */  lui         $v0, %hi(D_80161690)
/* EF255C 8018981C 5321008C */  beql        $t9, $at, .Lending_80189A50
/* EF2560 80189820 3C01C0C0 */   lui        $at, (0xC0C00000 >> 16)
/* EF2564 80189824 8C421690 */  lw          $v0, %lo(D_80161690)($v0)
/* EF2568 80189828 1040001A */  beqz        $v0, .Lending_80189894
/* EF256C 8018982C 28410079 */   slti       $at, $v0, 0x79
/* EF2570 80189830 10200018 */  beqz        $at, .Lending_80189894
/* EF2574 80189834 3C048019 */   lui        $a0, %hi(D_ending_80196FA0 + 0x258)
/* EF2578 80189838 3C018019 */  lui         $at, %hi(D_ending_801964C8)
/* EF257C 8018983C C43264C8 */  lwc1        $ft5, %lo(D_ending_801964C8)($at)
/* EF2580 80189840 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF2584 80189844 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2588 80189848 248471F8 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x258)
/* EF258C 8018984C 3C05C248 */  lui         $a1, (0xC2480000 >> 16)
/* EF2590 80189850 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF2594 80189854 0C026F0B */  jal         Math_SmoothStepToF
/* EF2598 80189858 E7B20010 */   swc1       $ft5, 0x10($sp)
/* EF259C 8018985C 3C018019 */  lui         $at, %hi(D_ending_801964CC)
/* EF25A0 80189860 C42664CC */  lwc1        $ft1, %lo(D_ending_801964CC)($at)
/* EF25A4 80189864 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x260)
/* EF25A8 80189868 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF25AC 8018986C 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF25B0 80189870 24847200 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x260)
/* EF25B4 80189874 3C054190 */  lui         $a1, (0x41900000 >> 16)
/* EF25B8 80189878 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF25BC 8018987C 0C026F0B */  jal         Math_SmoothStepToF
/* EF25C0 80189880 E7A60010 */   swc1       $ft1, 0x10($sp)
/* EF25C4 80189884 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF25C8 80189888 3C028016 */  lui         $v0, %hi(D_80161690)
/* EF25CC 8018988C 8C421690 */  lw          $v0, %lo(D_80161690)($v0)
/* EF25D0 80189890 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
.Lending_80189894:
/* EF25D4 80189894 10400010 */  beqz        $v0, .Lending_801898D8
/* EF25D8 80189898 28410074 */   slti       $at, $v0, 0x74
/* EF25DC 8018989C 1020000E */  beqz        $at, .Lending_801898D8
/* EF25E0 801898A0 3C048019 */   lui        $a0, %hi(D_ending_80196FA0 + 0x708)
/* EF25E4 801898A4 3C018019 */  lui         $at, %hi(D_ending_801964D0)
/* EF25E8 801898A8 C42A64D0 */  lwc1        $ft3, %lo(D_ending_801964D0)($at)
/* EF25EC 801898AC 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF25F0 801898B0 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF25F4 801898B4 248476A8 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x708)
/* EF25F8 801898B8 3C0541A0 */  lui         $a1, (0x41A00000 >> 16)
/* EF25FC 801898BC 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF2600 801898C0 0C026F0B */  jal         Math_SmoothStepToF
/* EF2604 801898C4 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* EF2608 801898C8 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF260C 801898CC 3C028016 */  lui         $v0, %hi(D_80161690)
/* EF2610 801898D0 8C421690 */  lw          $v0, %lo(D_80161690)($v0)
/* EF2614 801898D4 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
.Lending_801898D8:
/* EF2618 801898D8 10400018 */  beqz        $v0, .Lending_8018993C
/* EF261C 801898DC 2841006F */   slti       $at, $v0, 0x6F
/* EF2620 801898E0 10200016 */  beqz        $at, .Lending_8018993C
/* EF2624 801898E4 3C048019 */   lui        $a0, %hi(D_ending_80196FA0 + 0x4B0)
/* EF2628 801898E8 3C018019 */  lui         $at, %hi(D_ending_801964D4)
/* EF262C 801898EC C43064D4 */  lwc1        $ft4, %lo(D_ending_801964D4)($at)
/* EF2630 801898F0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF2634 801898F4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2638 801898F8 24847450 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B0)
/* EF263C 801898FC 3C0541A0 */  lui         $a1, (0x41A00000 >> 16)
/* EF2640 80189900 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF2644 80189904 0C026F0B */  jal         Math_SmoothStepToF
/* EF2648 80189908 E7B00010 */   swc1       $ft4, 0x10($sp)
/* EF264C 8018990C 3C018019 */  lui         $at, %hi(D_ending_801964D8)
/* EF2650 80189910 C42464D8 */  lwc1        $ft0, %lo(D_ending_801964D8)($at)
/* EF2654 80189914 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B4)
/* EF2658 80189918 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF265C 8018991C 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2660 80189920 24847454 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B4)
/* EF2664 80189924 3C0541A0 */  lui         $a1, (0x41A00000 >> 16)
/* EF2668 80189928 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF266C 8018992C 0C026F0B */  jal         Math_SmoothStepToF
/* EF2670 80189930 E7A40010 */   swc1       $ft0, 0x10($sp)
/* EF2674 80189934 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF2678 80189938 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
.Lending_8018993C:
/* EF267C 8018993C 3C0A8019 */  lui         $t2, %hi(D_ending_80196F94)
/* EF2680 80189940 8D4A6F94 */  lw          $t2, %lo(D_ending_80196F94)($t2)
/* EF2684 80189944 3C0B8016 */  lui         $t3, %hi(D_80161690)
/* EF2688 80189948 15400019 */  bnez        $t2, .Lending_801899B0
/* EF268C 8018994C 00000000 */   nop
/* EF2690 80189950 8D6B1690 */  lw          $t3, %lo(D_80161690)($t3)
/* EF2694 80189954 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x258)
/* EF2698 80189958 248471F8 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x258)
/* EF269C 8018995C 15600014 */  bnez        $t3, .Lending_801899B0
/* EF26A0 80189960 24050000 */   addiu      $a1, $zero, 0x0
/* EF26A4 80189964 3C018019 */  lui         $at, %hi(D_ending_801964DC)
/* EF26A8 80189968 C42864DC */  lwc1        $ft2, %lo(D_ending_801964DC)($at)
/* EF26AC 8018996C 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF26B0 80189970 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF26B4 80189974 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF26B8 80189978 0C026F0B */  jal         Math_SmoothStepToF
/* EF26BC 8018997C E7A80010 */   swc1       $ft2, 0x10($sp)
/* EF26C0 80189980 3C018019 */  lui         $at, %hi(D_ending_801964E0)
/* EF26C4 80189984 C43264E0 */  lwc1        $ft5, %lo(D_ending_801964E0)($at)
/* EF26C8 80189988 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x260)
/* EF26CC 8018998C 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF26D0 80189990 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF26D4 80189994 24847200 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x260)
/* EF26D8 80189998 24050000 */  addiu       $a1, $zero, 0x0
/* EF26DC 8018999C 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF26E0 801899A0 0C026F0B */  jal         Math_SmoothStepToF
/* EF26E4 801899A4 E7B20010 */   swc1       $ft5, 0x10($sp)
/* EF26E8 801899A8 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF26EC 801899AC 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
.Lending_801899B0:
/* EF26F0 801899B0 3C0C8019 */  lui         $t4, %hi(D_ending_80196F98)
/* EF26F4 801899B4 8D8C6F98 */  lw          $t4, %lo(D_ending_80196F98)($t4)
/* EF26F8 801899B8 3C0D8016 */  lui         $t5, %hi(D_80161690)
/* EF26FC 801899BC 55800024 */  bnel        $t4, $zero, .Lending_80189A50
/* EF2700 801899C0 3C01C0C0 */   lui        $at, (0xC0C00000 >> 16)
/* EF2704 801899C4 8DAD1690 */  lw          $t5, %lo(D_80161690)($t5)
/* EF2708 801899C8 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x708)
/* EF270C 801899CC 248476A8 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x708)
/* EF2710 801899D0 15A0001E */  bnez        $t5, .Lending_80189A4C
/* EF2714 801899D4 24050000 */   addiu      $a1, $zero, 0x0
/* EF2718 801899D8 3C018019 */  lui         $at, %hi(D_ending_801964E4)
/* EF271C 801899DC C42664E4 */  lwc1        $ft1, %lo(D_ending_801964E4)($at)
/* EF2720 801899E0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF2724 801899E4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2728 801899E8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF272C 801899EC 0C026F0B */  jal         Math_SmoothStepToF
/* EF2730 801899F0 E7A60010 */   swc1       $ft1, 0x10($sp)
/* EF2734 801899F4 3C018019 */  lui         $at, %hi(D_ending_801964E8)
/* EF2738 801899F8 C42A64E8 */  lwc1        $ft3, %lo(D_ending_801964E8)($at)
/* EF273C 801899FC 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B0)
/* EF2740 80189A00 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF2744 80189A04 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2748 80189A08 24847450 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B0)
/* EF274C 80189A0C 24050000 */  addiu       $a1, $zero, 0x0
/* EF2750 80189A10 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF2754 80189A14 0C026F0B */  jal         Math_SmoothStepToF
/* EF2758 80189A18 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* EF275C 80189A1C 3C018019 */  lui         $at, %hi(D_ending_801964EC)
/* EF2760 80189A20 C43064EC */  lwc1        $ft4, %lo(D_ending_801964EC)($at)
/* EF2764 80189A24 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x4B4)
/* EF2768 80189A28 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF276C 80189A2C 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2770 80189A30 24847454 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x4B4)
/* EF2774 80189A34 24050000 */  addiu       $a1, $zero, 0x0
/* EF2778 80189A38 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF277C 80189A3C 0C026F0B */  jal         Math_SmoothStepToF
/* EF2780 80189A40 E7B00010 */   swc1       $ft4, 0x10($sp)
/* EF2784 80189A44 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF2788 80189A48 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
.Lending_80189A4C:
/* EF278C 80189A4C 3C01C0C0 */  lui         $at, (0xC0C00000 >> 16)
.Lending_80189A50:
/* EF2790 80189A50 44812000 */  mtc1        $at, $ft0
/* EF2794 80189A54 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x4D0)
/* EF2798 80189A58 3C0F8017 */  lui         $t7, %hi(gCsFrameCount)
/* EF279C 80189A5C E4247470 */  swc1        $ft0, %lo(D_ending_80196FA0 + 0x4D0)($at)
/* EF27A0 80189A60 3C0140C0 */  lui         $at, (0x40C00000 >> 16)
/* EF27A4 80189A64 44814000 */  mtc1        $at, $ft2
/* EF27A8 80189A68 3C018019 */  lui         $at, %hi(D_ending_80196FA0 + 0x4B8)
/* EF27AC 80189A6C E4287458 */  swc1        $ft2, %lo(D_ending_80196FA0 + 0x4B8)($at)
/* EF27B0 80189A70 8D0E0138 */  lw          $t6, 0x138($t0)
/* EF27B4 80189A74 24010002 */  addiu       $at, $zero, 0x2
/* EF27B8 80189A78 55C10077 */  bnel        $t6, $at, .Lending_80189C58
/* EF27BC 80189A7C 8FBF001C */   lw         $ra, 0x1C($sp)
/* EF27C0 80189A80 8DEF7A80 */  lw          $t7, %lo(gCsFrameCount)($t7)
/* EF27C4 80189A84 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x258)
/* EF27C8 80189A88 248471F8 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x258)
/* EF27CC 80189A8C 29E1003C */  slti        $at, $t7, 0x3C
/* EF27D0 80189A90 14200070 */  bnez        $at, .Lending_80189C54
/* EF27D4 80189A94 3C05C220 */   lui        $a1, (0xC2200000 >> 16)
/* EF27D8 80189A98 3C018019 */  lui         $at, %hi(D_ending_801964F0)
/* EF27DC 80189A9C C43264F0 */  lwc1        $ft5, %lo(D_ending_801964F0)($at)
/* EF27E0 80189AA0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF27E4 80189AA4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF27E8 80189AA8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF27EC 80189AAC 0C026F0B */  jal         Math_SmoothStepToF
/* EF27F0 80189AB0 E7B20010 */   swc1       $ft5, 0x10($sp)
/* EF27F4 80189AB4 3C018019 */  lui         $at, %hi(D_ending_801964F4)
/* EF27F8 80189AB8 C42664F4 */  lwc1        $ft1, %lo(D_ending_801964F4)($at)
/* EF27FC 80189ABC 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x260)
/* EF2800 80189AC0 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF2804 80189AC4 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2808 80189AC8 24847200 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x260)
/* EF280C 80189ACC 3C054190 */  lui         $a1, (0x41900000 >> 16)
/* EF2810 80189AD0 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF2814 80189AD4 0C026F0B */  jal         Math_SmoothStepToF
/* EF2818 80189AD8 E7A60010 */   swc1       $ft1, 0x10($sp)
/* EF281C 80189ADC 3C018019 */  lui         $at, %hi(D_ending_801964F8)
/* EF2820 80189AE0 C42A64F8 */  lwc1        $ft3, %lo(D_ending_801964F8)($at)
/* EF2824 80189AE4 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x294)
/* EF2828 80189AE8 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF282C 80189AEC 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2830 80189AF0 24847234 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x294)
/* EF2834 80189AF4 3C05C140 */  lui         $a1, (0xC1400000 >> 16)
/* EF2838 80189AF8 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF283C 80189AFC 0C026F0B */  jal         Math_SmoothStepToF
/* EF2840 80189B00 E7AA0010 */   swc1       $ft3, 0x10($sp)
/* EF2844 80189B04 3C018019 */  lui         $at, %hi(D_ending_801964FC)
/* EF2848 80189B08 C43064FC */  lwc1        $ft4, %lo(D_ending_801964FC)($at)
/* EF284C 80189B0C 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x29C)
/* EF2850 80189B10 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF2854 80189B14 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2858 80189B18 2484723C */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x29C)
/* EF285C 80189B1C 3C05C0C0 */  lui         $a1, (0xC0C00000 >> 16)
/* EF2860 80189B20 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF2864 80189B24 0C026F0B */  jal         Math_SmoothStepToF
/* EF2868 80189B28 E7B00010 */   swc1       $ft4, 0x10($sp)
/* EF286C 80189B2C 3C188017 */  lui         $t8, %hi(gCsFrameCount)
/* EF2870 80189B30 8F187A80 */  lw          $t8, %lo(gCsFrameCount)($t8)
/* EF2874 80189B34 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF2878 80189B38 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF287C 80189B3C 2B01005B */  slti        $at, $t8, 0x5B
/* EF2880 80189B40 10200005 */  beqz        $at, .Lending_80189B58
/* EF2884 80189B44 00000000 */   nop
/* EF2888 80189B48 8D1900F4 */  lw          $t9, 0xF4($t0)
/* EF288C 80189B4C 272A0002 */  addiu       $t2, $t9, 0x2
/* EF2890 80189B50 10000036 */  b           .Lending_80189C2C
/* EF2894 80189B54 AD0A00F4 */   sw         $t2, 0xF4($t0)
.Lending_80189B58:
/* EF2898 80189B58 0C026B37 */  jal         Animation_GetFrameCount
/* EF289C 80189B5C 8D0400C0 */   lw         $a0, 0xC0($t0)
/* EF28A0 80189B60 3C088019 */  lui         $t0, %hi(D_ending_80196D08)
/* EF28A4 80189B64 25086D08 */  addiu       $t0, $t0, %lo(D_ending_80196D08)
/* EF28A8 80189B68 8D0300F4 */  lw          $v1, 0xF4($t0)
/* EF28AC 80189B6C C51200F0 */  lwc1        $ft5, 0xF0($t0)
/* EF28B0 80189B70 240C0001 */  addiu       $t4, $zero, 0x1
/* EF28B4 80189B74 44832000 */  mtc1        $v1, $ft0
/* EF28B8 80189B78 246D0002 */  addiu       $t5, $v1, 0x2
/* EF28BC 80189B7C 46802220 */  cvt.s.w     $ft2, $ft0
/* EF28C0 80189B80 46124182 */  mul.s       $ft1, $ft2, $ft5
/* EF28C4 80189B84 444BF800 */  cfc1        $t3, $31
/* EF28C8 80189B88 44CCF800 */  ctc1        $t4, $31
/* EF28CC 80189B8C 00000000 */  nop
/* EF28D0 80189B90 460032A4 */  cvt.w.s     $ft3, $ft1
/* EF28D4 80189B94 444CF800 */  cfc1        $t4, $31
/* EF28D8 80189B98 00000000 */  nop
/* EF28DC 80189B9C 31810004 */  andi        $at, $t4, 0x4
/* EF28E0 80189BA0 318C0078 */  andi        $t4, $t4, 0x78
/* EF28E4 80189BA4 51800015 */  beql        $t4, $zero, .Lending_80189BFC
/* EF28E8 80189BA8 440C5000 */   mfc1       $t4, $ft3
/* EF28EC 80189BAC 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF28F0 80189BB0 44815000 */  mtc1        $at, $ft3
/* EF28F4 80189BB4 240C0001 */  addiu       $t4, $zero, 0x1
/* EF28F8 80189BB8 460A3281 */  sub.s       $ft3, $ft1, $ft3
/* EF28FC 80189BBC 44CCF800 */  ctc1        $t4, $31
/* EF2900 80189BC0 00000000 */  nop
/* EF2904 80189BC4 460052A4 */  cvt.w.s     $ft3, $ft3
/* EF2908 80189BC8 444CF800 */  cfc1        $t4, $31
/* EF290C 80189BCC 00000000 */  nop
/* EF2910 80189BD0 31810004 */  andi        $at, $t4, 0x4
/* EF2914 80189BD4 318C0078 */  andi        $t4, $t4, 0x78
/* EF2918 80189BD8 15800005 */  bnez        $t4, .Lending_80189BF0
/* EF291C 80189BDC 00000000 */   nop
/* EF2920 80189BE0 440C5000 */  mfc1        $t4, $ft3
/* EF2924 80189BE4 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF2928 80189BE8 10000007 */  b           .Lending_80189C08
/* EF292C 80189BEC 01816025 */   or         $t4, $t4, $at
.Lending_80189BF0:
/* EF2930 80189BF0 10000005 */  b           .Lending_80189C08
/* EF2934 80189BF4 240CFFFF */   addiu      $t4, $zero, -0x1
/* EF2938 80189BF8 440C5000 */  mfc1        $t4, $ft3
.Lending_80189BFC:
/* EF293C 80189BFC 00000000 */  nop
/* EF2940 80189C00 0580FFFB */  bltz        $t4, .Lending_80189BF0
/* EF2944 80189C04 00000000 */   nop
.Lending_80189C08:
/* EF2948 80189C08 0182001B */  divu        $zero, $t4, $v0
/* EF294C 80189C0C 00002010 */  mfhi        $a0
/* EF2950 80189C10 44CBF800 */  ctc1        $t3, $31
/* EF2954 80189C14 14400002 */  bnez        $v0, .Lending_80189C20
/* EF2958 80189C18 00000000 */   nop
/* EF295C 80189C1C 0007000D */  break       7
.Lending_80189C20:
/* EF2960 80189C20 10800002 */  beqz        $a0, .Lending_80189C2C
/* EF2964 80189C24 00000000 */   nop
/* EF2968 80189C28 AD0D00F4 */  sw          $t5, 0xF4($t0)
.Lending_80189C2C:
/* EF296C 80189C2C 3C018019 */  lui         $at, %hi(D_ending_80196500)
/* EF2970 80189C30 C4306500 */  lwc1        $ft4, %lo(D_ending_80196500)($at)
/* EF2974 80189C34 3C048019 */  lui         $a0, %hi(D_ending_80196FA0 + 0x708)
/* EF2978 80189C38 3C063E4C */  lui         $a2, (0x3E4CCCCD >> 16)
/* EF297C 80189C3C 34C6CCCD */  ori         $a2, $a2, (0x3E4CCCCD & 0xFFFF)
/* EF2980 80189C40 248476A8 */  addiu       $a0, $a0, %lo(D_ending_80196FA0 + 0x708)
/* EF2984 80189C44 24050000 */  addiu       $a1, $zero, 0x0
/* EF2988 80189C48 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF298C 80189C4C 0C026F0B */  jal         Math_SmoothStepToF
/* EF2990 80189C50 E7B00010 */   swc1       $ft4, 0x10($sp)
.Lending_80189C54:
/* EF2994 80189C54 8FBF001C */  lw          $ra, 0x1C($sp)
.Lending_80189C58:
/* EF2998 80189C58 27BD0020 */  addiu       $sp, $sp, 0x20
/* EF299C 80189C5C 03E00008 */  jr          $ra
/* EF29A0 80189C60 00000000 */   nop
.section .late_rodata
dlabel jtbl_ending_80196504
/* EFF244 80196504 80189CD4 */ .word .Lending_80189CD4
/* EFF248 80196508 80189D38 */ .word .Lending_80189D38
/* EFF24C 8019650C 8018A018 */ .word .Lending_8018A018
/* EFF250 80196510 8018A018 */ .word .Lending_8018A018
/* EFF254 80196514 8018A018 */ .word .Lending_8018A018
/* EFF258 80196518 80189D9C */ .word .Lending_80189D9C
/* EFF25C 8019651C 8018A018 */ .word .Lending_8018A018
/* EFF260 80196520 8018A018 */ .word .Lending_8018A018
/* EFF264 80196524 80189E00 */ .word .Lending_80189E00
/* EFF268 80196528 8018A018 */ .word .Lending_8018A018
/* EFF26C 8019652C 8018A018 */ .word .Lending_8018A018
/* EFF270 80196530 8018A018 */ .word .Lending_8018A018
/* EFF274 80196534 8018A018 */ .word .Lending_8018A018
/* EFF278 80196538 8018A018 */ .word .Lending_8018A018
/* EFF27C 8019653C 8018A018 */ .word .Lending_8018A018
/* EFF280 80196540 8018A018 */ .word .Lending_8018A018
/* EFF284 80196544 80189E64 */ .word .Lending_80189E64
/* EFF288 80196548 8018A018 */ .word .Lending_8018A018
/* EFF28C 8019654C 80189EC8 */ .word .Lending_80189EC8
/* EFF290 80196550 80189F98 */ .word .Lending_80189F98


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_80189C64
/* EF29A4 80189C64 AFA50004 */  sw          $a1, 0x4($sp)
/* EF29A8 80189C68 AFA60008 */  sw          $a2, 0x8($sp)
/* EF29AC 80189C6C 24060003 */  addiu       $a2, $zero, 0x3
/* EF29B0 80189C70 00802825 */  or          $a1, $a0, $zero
/* EF29B4 80189C74 AFA40000 */  sw          $a0, 0x0($sp)
/* EF29B8 80189C78 8FAE0010 */  lw          $t6, 0x10($sp)
/* EF29BC 80189C7C 24A9FFFF */  addiu       $t1, $a1, -0x1
/* EF29C0 80189C80 3C088013 */  lui         $t0, %hi(gMasterDisp)
/* EF29C4 80189C84 8DC20000 */  lw          $v0, 0x0($t6)
/* EF29C8 80189C88 2D210014 */  sltiu       $at, $t1, 0x14
/* EF29CC 80189C8C 25087E64 */  addiu       $t0, $t0, %lo(gMasterDisp)
/* EF29D0 80189C90 14460008 */  bne         $v0, $a2, .Lending_80189CB4
/* EF29D4 80189C94 00094880 */   sll        $t1, $t1, 2
/* EF29D8 80189C98 8D040000 */  lw          $a0, 0x0($t0)
/* EF29DC 80189C9C 3C18B700 */  lui         $t8, (0xB7000000 >> 16)
/* EF29E0 80189CA0 24192000 */  addiu       $t9, $zero, 0x2000
/* EF29E4 80189CA4 248F0008 */  addiu       $t7, $a0, 0x8
/* EF29E8 80189CA8 AD0F0000 */  sw          $t7, 0x0($t0)
/* EF29EC 80189CAC AC990004 */  sw          $t9, 0x4($a0)
/* EF29F0 80189CB0 AC980000 */  sw          $t8, 0x0($a0)
.Lending_80189CB4:
/* EF29F4 80189CB4 3C088013 */  lui         $t0, %hi(gMasterDisp)
/* EF29F8 80189CB8 102000D7 */  beqz        $at, .Lending_8018A018
/* EF29FC 80189CBC 25087E64 */   addiu      $t0, $t0, %lo(gMasterDisp)
/* EF2A00 80189CC0 3C018019 */  lui         $at, %hi(jtbl_ending_80196504)
/* EF2A04 80189CC4 00290821 */  addu        $at, $at, $t1
/* EF2A08 80189CC8 8C296504 */  lw          $t1, %lo(jtbl_ending_80196504)($at)
/* EF2A0C 80189CCC 01200008 */  jr          $t1
/* EF2A10 80189CD0 00000000 */   nop
.Lending_80189CD4:
/* EF2A14 80189CD4 24010002 */  addiu       $at, $zero, 0x2
/* EF2A18 80189CD8 144100CF */  bne         $v0, $at, .Lending_8018A018
/* EF2A1C 80189CDC 00025080 */   sll        $t2, $v0, 2
/* EF2A20 80189CE0 01425021 */  addu        $t2, $t2, $v0
/* EF2A24 80189CE4 000A5080 */  sll         $t2, $t2, 2
/* EF2A28 80189CE8 01425023 */  subu        $t2, $t2, $v0
/* EF2A2C 80189CEC 000A5080 */  sll         $t2, $t2, 2
/* EF2A30 80189CF0 01425023 */  subu        $t2, $t2, $v0
/* EF2A34 80189CF4 3C0B8019 */  lui         $t3, %hi(D_ending_80196FA0)
/* EF2A38 80189CF8 256B6FA0 */  addiu       $t3, $t3, %lo(D_ending_80196FA0)
/* EF2A3C 80189CFC 000A50C0 */  sll         $t2, $t2, 3
/* EF2A40 80189D00 014B1821 */  addu        $v1, $t2, $t3
/* EF2A44 80189D04 C4660018 */  lwc1        $ft1, 0x18($v1)
/* EF2A48 80189D08 C4E40000 */  lwc1        $ft0, 0x0($a3)
/* EF2A4C 80189D0C C4EA0004 */  lwc1        $ft3, 0x4($a3)
/* EF2A50 80189D10 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2A54 80189D14 C4E40008 */  lwc1        $ft0, 0x8($a3)
/* EF2A58 80189D18 E4E80000 */  swc1        $ft2, 0x0($a3)
/* EF2A5C 80189D1C C470001C */  lwc1        $ft4, 0x1C($v1)
/* EF2A60 80189D20 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2A64 80189D24 E4F20004 */  swc1        $ft5, 0x4($a3)
/* EF2A68 80189D28 C4660020 */  lwc1        $ft1, 0x20($v1)
/* EF2A6C 80189D2C 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2A70 80189D30 100000B9 */  b           .Lending_8018A018
/* EF2A74 80189D34 E4E80008 */   swc1       $ft2, 0x8($a3)
.Lending_80189D38:
/* EF2A78 80189D38 24010001 */  addiu       $at, $zero, 0x1
/* EF2A7C 80189D3C 144100B6 */  bne         $v0, $at, .Lending_8018A018
/* EF2A80 80189D40 00026080 */   sll        $t4, $v0, 2
/* EF2A84 80189D44 01826021 */  addu        $t4, $t4, $v0
/* EF2A88 80189D48 000C6080 */  sll         $t4, $t4, 2
/* EF2A8C 80189D4C 01826023 */  subu        $t4, $t4, $v0
/* EF2A90 80189D50 000C6080 */  sll         $t4, $t4, 2
/* EF2A94 80189D54 01826023 */  subu        $t4, $t4, $v0
/* EF2A98 80189D58 3C0D8019 */  lui         $t5, %hi(D_ending_80196FA0)
/* EF2A9C 80189D5C 25AD6FA0 */  addiu       $t5, $t5, %lo(D_ending_80196FA0)
/* EF2AA0 80189D60 000C60C0 */  sll         $t4, $t4, 3
/* EF2AA4 80189D64 018D1821 */  addu        $v1, $t4, $t5
/* EF2AA8 80189D68 C470000C */  lwc1        $ft4, 0xC($v1)
/* EF2AAC 80189D6C C4EA0000 */  lwc1        $ft3, 0x0($a3)
/* EF2AB0 80189D70 C4E40004 */  lwc1        $ft0, 0x4($a3)
/* EF2AB4 80189D74 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2AB8 80189D78 C4EA0008 */  lwc1        $ft3, 0x8($a3)
/* EF2ABC 80189D7C E4F20000 */  swc1        $ft5, 0x0($a3)
/* EF2AC0 80189D80 C4660010 */  lwc1        $ft1, 0x10($v1)
/* EF2AC4 80189D84 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2AC8 80189D88 E4E80004 */  swc1        $ft2, 0x4($a3)
/* EF2ACC 80189D8C C4700014 */  lwc1        $ft4, 0x14($v1)
/* EF2AD0 80189D90 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2AD4 80189D94 100000A0 */  b           .Lending_8018A018
/* EF2AD8 80189D98 E4F20008 */   swc1       $ft5, 0x8($a3)
.Lending_80189D9C:
/* EF2ADC 80189D9C 24010002 */  addiu       $at, $zero, 0x2
/* EF2AE0 80189DA0 1441009D */  bne         $v0, $at, .Lending_8018A018
/* EF2AE4 80189DA4 00027080 */   sll        $t6, $v0, 2
/* EF2AE8 80189DA8 01C27021 */  addu        $t6, $t6, $v0
/* EF2AEC 80189DAC 000E7080 */  sll         $t6, $t6, 2
/* EF2AF0 80189DB0 01C27023 */  subu        $t6, $t6, $v0
/* EF2AF4 80189DB4 000E7080 */  sll         $t6, $t6, 2
/* EF2AF8 80189DB8 01C27023 */  subu        $t6, $t6, $v0
/* EF2AFC 80189DBC 3C0F8019 */  lui         $t7, %hi(D_ending_80196FA0)
/* EF2B00 80189DC0 25EF6FA0 */  addiu       $t7, $t7, %lo(D_ending_80196FA0)
/* EF2B04 80189DC4 000E70C0 */  sll         $t6, $t6, 3
/* EF2B08 80189DC8 01CF1821 */  addu        $v1, $t6, $t7
/* EF2B0C 80189DCC C4660024 */  lwc1        $ft1, 0x24($v1)
/* EF2B10 80189DD0 C4E40000 */  lwc1        $ft0, 0x0($a3)
/* EF2B14 80189DD4 C4EA0004 */  lwc1        $ft3, 0x4($a3)
/* EF2B18 80189DD8 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2B1C 80189DDC C4E40008 */  lwc1        $ft0, 0x8($a3)
/* EF2B20 80189DE0 E4E80000 */  swc1        $ft2, 0x0($a3)
/* EF2B24 80189DE4 C4700028 */  lwc1        $ft4, 0x28($v1)
/* EF2B28 80189DE8 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2B2C 80189DEC E4F20004 */  swc1        $ft5, 0x4($a3)
/* EF2B30 80189DF0 C466002C */  lwc1        $ft1, 0x2C($v1)
/* EF2B34 80189DF4 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2B38 80189DF8 10000087 */  b           .Lending_8018A018
/* EF2B3C 80189DFC E4E80008 */   swc1       $ft2, 0x8($a3)
.Lending_80189E00:
/* EF2B40 80189E00 24010002 */  addiu       $at, $zero, 0x2
/* EF2B44 80189E04 14410084 */  bne         $v0, $at, .Lending_8018A018
/* EF2B48 80189E08 0002C080 */   sll        $t8, $v0, 2
/* EF2B4C 80189E0C 0302C021 */  addu        $t8, $t8, $v0
/* EF2B50 80189E10 0018C080 */  sll         $t8, $t8, 2
/* EF2B54 80189E14 0302C023 */  subu        $t8, $t8, $v0
/* EF2B58 80189E18 0018C080 */  sll         $t8, $t8, 2
/* EF2B5C 80189E1C 0302C023 */  subu        $t8, $t8, $v0
/* EF2B60 80189E20 3C198019 */  lui         $t9, %hi(D_ending_80196FA0)
/* EF2B64 80189E24 27396FA0 */  addiu       $t9, $t9, %lo(D_ending_80196FA0)
/* EF2B68 80189E28 0018C0C0 */  sll         $t8, $t8, 3
/* EF2B6C 80189E2C 03191821 */  addu        $v1, $t8, $t9
/* EF2B70 80189E30 C4700030 */  lwc1        $ft4, 0x30($v1)
/* EF2B74 80189E34 C4EA0000 */  lwc1        $ft3, 0x0($a3)
/* EF2B78 80189E38 C4E40004 */  lwc1        $ft0, 0x4($a3)
/* EF2B7C 80189E3C 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2B80 80189E40 C4EA0008 */  lwc1        $ft3, 0x8($a3)
/* EF2B84 80189E44 E4F20000 */  swc1        $ft5, 0x0($a3)
/* EF2B88 80189E48 C4660034 */  lwc1        $ft1, 0x34($v1)
/* EF2B8C 80189E4C 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2B90 80189E50 E4E80004 */  swc1        $ft2, 0x4($a3)
/* EF2B94 80189E54 C4700038 */  lwc1        $ft4, 0x38($v1)
/* EF2B98 80189E58 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2B9C 80189E5C 1000006E */  b           .Lending_8018A018
/* EF2BA0 80189E60 E4F20008 */   swc1       $ft5, 0x8($a3)
.Lending_80189E64:
/* EF2BA4 80189E64 24010002 */  addiu       $at, $zero, 0x2
/* EF2BA8 80189E68 1441006B */  bne         $v0, $at, .Lending_8018A018
/* EF2BAC 80189E6C 00024880 */   sll        $t1, $v0, 2
/* EF2BB0 80189E70 01224821 */  addu        $t1, $t1, $v0
/* EF2BB4 80189E74 00094880 */  sll         $t1, $t1, 2
/* EF2BB8 80189E78 01224823 */  subu        $t1, $t1, $v0
/* EF2BBC 80189E7C 00094880 */  sll         $t1, $t1, 2
/* EF2BC0 80189E80 01224823 */  subu        $t1, $t1, $v0
/* EF2BC4 80189E84 3C0A8019 */  lui         $t2, %hi(D_ending_80196FA0)
/* EF2BC8 80189E88 254A6FA0 */  addiu       $t2, $t2, %lo(D_ending_80196FA0)
/* EF2BCC 80189E8C 000948C0 */  sll         $t1, $t1, 3
/* EF2BD0 80189E90 012A1821 */  addu        $v1, $t1, $t2
/* EF2BD4 80189E94 C4660000 */  lwc1        $ft1, 0x0($v1)
/* EF2BD8 80189E98 C4E40000 */  lwc1        $ft0, 0x0($a3)
/* EF2BDC 80189E9C C4EA0004 */  lwc1        $ft3, 0x4($a3)
/* EF2BE0 80189EA0 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2BE4 80189EA4 C4E40008 */  lwc1        $ft0, 0x8($a3)
/* EF2BE8 80189EA8 E4E80000 */  swc1        $ft2, 0x0($a3)
/* EF2BEC 80189EAC C4700004 */  lwc1        $ft4, 0x4($v1)
/* EF2BF0 80189EB0 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2BF4 80189EB4 E4F20004 */  swc1        $ft5, 0x4($a3)
/* EF2BF8 80189EB8 C4660008 */  lwc1        $ft1, 0x8($v1)
/* EF2BFC 80189EBC 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2C00 80189EC0 10000055 */  b           .Lending_8018A018
/* EF2C04 80189EC4 E4E80008 */   swc1       $ft2, 0x8($a3)
.Lending_80189EC8:
/* EF2C08 80189EC8 24010001 */  addiu       $at, $zero, 0x1
/* EF2C0C 80189ECC 10410004 */  beq         $v0, $at, .Lending_80189EE0
/* EF2C10 80189ED0 00025880 */   sll        $t3, $v0, 2
/* EF2C14 80189ED4 50460003 */  beql        $v0, $a2, .Lending_80189EE4
/* EF2C18 80189ED8 01625821 */   addu       $t3, $t3, $v0
/* EF2C1C 80189EDC 14400015 */  bnez        $v0, .Lending_80189F34
.Lending_80189EE0:
/* EF2C20 80189EE0 01625821 */   addu       $t3, $t3, $v0
.Lending_80189EE4:
/* EF2C24 80189EE4 000B5880 */  sll         $t3, $t3, 2
/* EF2C28 80189EE8 01625823 */  subu        $t3, $t3, $v0
/* EF2C2C 80189EEC 000B5880 */  sll         $t3, $t3, 2
/* EF2C30 80189EF0 01625823 */  subu        $t3, $t3, $v0
/* EF2C34 80189EF4 3C0C8019 */  lui         $t4, %hi(D_ending_80196FA0)
/* EF2C38 80189EF8 258C6FA0 */  addiu       $t4, $t4, %lo(D_ending_80196FA0)
/* EF2C3C 80189EFC 000B58C0 */  sll         $t3, $t3, 3
/* EF2C40 80189F00 016C1821 */  addu        $v1, $t3, $t4
/* EF2C44 80189F04 C4700000 */  lwc1        $ft4, 0x0($v1)
/* EF2C48 80189F08 C4EA0000 */  lwc1        $ft3, 0x0($a3)
/* EF2C4C 80189F0C C4E40004 */  lwc1        $ft0, 0x4($a3)
/* EF2C50 80189F10 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2C54 80189F14 C4EA0008 */  lwc1        $ft3, 0x8($a3)
/* EF2C58 80189F18 E4F20000 */  swc1        $ft5, 0x0($a3)
/* EF2C5C 80189F1C C4660004 */  lwc1        $ft1, 0x4($v1)
/* EF2C60 80189F20 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2C64 80189F24 E4E80004 */  swc1        $ft2, 0x4($a3)
/* EF2C68 80189F28 C4700008 */  lwc1        $ft4, 0x8($v1)
/* EF2C6C 80189F2C 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2C70 80189F30 E4F20008 */  swc1        $ft5, 0x8($a3)
.Lending_80189F34:
/* EF2C74 80189F34 24010002 */  addiu       $at, $zero, 0x2
/* EF2C78 80189F38 14410037 */  bne         $v0, $at, .Lending_8018A018
/* EF2C7C 80189F3C 00026880 */   sll        $t5, $v0, 2
/* EF2C80 80189F40 01A26821 */  addu        $t5, $t5, $v0
/* EF2C84 80189F44 000D6880 */  sll         $t5, $t5, 2
/* EF2C88 80189F48 01A26823 */  subu        $t5, $t5, $v0
/* EF2C8C 80189F4C 000D6880 */  sll         $t5, $t5, 2
/* EF2C90 80189F50 01A26823 */  subu        $t5, $t5, $v0
/* EF2C94 80189F54 3C0E8019 */  lui         $t6, %hi(D_ending_80196FA0)
/* EF2C98 80189F58 25CE6FA0 */  addiu       $t6, $t6, %lo(D_ending_80196FA0)
/* EF2C9C 80189F5C 000D68C0 */  sll         $t5, $t5, 3
/* EF2CA0 80189F60 01AE1821 */  addu        $v1, $t5, $t6
/* EF2CA4 80189F64 C4660048 */  lwc1        $ft1, 0x48($v1)
/* EF2CA8 80189F68 C4E40000 */  lwc1        $ft0, 0x0($a3)
/* EF2CAC 80189F6C C4EA0004 */  lwc1        $ft3, 0x4($a3)
/* EF2CB0 80189F70 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2CB4 80189F74 C4E40008 */  lwc1        $ft0, 0x8($a3)
/* EF2CB8 80189F78 E4E80000 */  swc1        $ft2, 0x0($a3)
/* EF2CBC 80189F7C C470004C */  lwc1        $ft4, 0x4C($v1)
/* EF2CC0 80189F80 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2CC4 80189F84 E4F20004 */  swc1        $ft5, 0x4($a3)
/* EF2CC8 80189F88 C4660050 */  lwc1        $ft1, 0x50($v1)
/* EF2CCC 80189F8C 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2CD0 80189F90 10000021 */  b           .Lending_8018A018
/* EF2CD4 80189F94 E4E80008 */   swc1       $ft2, 0x8($a3)
.Lending_80189F98:
/* EF2CD8 80189F98 14460008 */  bne         $v0, $a2, .Lending_80189FBC
/* EF2CDC 80189F9C 24010001 */   addiu      $at, $zero, 0x1
/* EF2CE0 80189FA0 8D040000 */  lw          $a0, 0x0($t0)
/* EF2CE4 80189FA4 3C18B600 */  lui         $t8, (0xB6000000 >> 16)
/* EF2CE8 80189FA8 24192000 */  addiu       $t9, $zero, 0x2000
/* EF2CEC 80189FAC 248F0008 */  addiu       $t7, $a0, 0x8
/* EF2CF0 80189FB0 AD0F0000 */  sw          $t7, 0x0($t0)
/* EF2CF4 80189FB4 AC990004 */  sw          $t9, 0x4($a0)
/* EF2CF8 80189FB8 AC980000 */  sw          $t8, 0x0($a0)
.Lending_80189FBC:
/* EF2CFC 80189FBC 14410016 */  bne         $v0, $at, .Lending_8018A018
/* EF2D00 80189FC0 00024880 */   sll        $t1, $v0, 2
/* EF2D04 80189FC4 01224821 */  addu        $t1, $t1, $v0
/* EF2D08 80189FC8 00094880 */  sll         $t1, $t1, 2
/* EF2D0C 80189FCC 01224823 */  subu        $t1, $t1, $v0
/* EF2D10 80189FD0 00094880 */  sll         $t1, $t1, 2
/* EF2D14 80189FD4 01224823 */  subu        $t1, $t1, $v0
/* EF2D18 80189FD8 3C0A8019 */  lui         $t2, %hi(D_ending_80196FA0)
/* EF2D1C 80189FDC 254A6FA0 */  addiu       $t2, $t2, %lo(D_ending_80196FA0)
/* EF2D20 80189FE0 000948C0 */  sll         $t1, $t1, 3
/* EF2D24 80189FE4 012A1821 */  addu        $v1, $t1, $t2
/* EF2D28 80189FE8 C470003C */  lwc1        $ft4, 0x3C($v1)
/* EF2D2C 80189FEC C4EA0000 */  lwc1        $ft3, 0x0($a3)
/* EF2D30 80189FF0 C4E40004 */  lwc1        $ft0, 0x4($a3)
/* EF2D34 80189FF4 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2D38 80189FF8 C4EA0008 */  lwc1        $ft3, 0x8($a3)
/* EF2D3C 80189FFC E4F20000 */  swc1        $ft5, 0x0($a3)
/* EF2D40 8018A000 C4660040 */  lwc1        $ft1, 0x40($v1)
/* EF2D44 8018A004 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF2D48 8018A008 E4E80004 */  swc1        $ft2, 0x4($a3)
/* EF2D4C 8018A00C C4700044 */  lwc1        $ft4, 0x44($v1)
/* EF2D50 8018A010 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF2D54 8018A014 E4F20008 */  swc1        $ft5, 0x8($a3)
.Lending_8018A018:
/* EF2D58 8018A018 00001025 */  or          $v0, $zero, $zero
/* EF2D5C 8018A01C 03E00008 */  jr          $ra
/* EF2D60 8018A020 00000000 */   nop
.section .late_rodata
dlabel D_ending_80196554
/* EFF294 80196554 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_80196558
/* EFF298 80196558 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_8019655C
/* EFF29C 8019655C 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018A024
/* EF2D64 8018A024 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* EF2D68 8018A028 44800000 */  mtc1        $zero, $fv0
/* EF2D6C 8018A02C AFBF0014 */  sw          $ra, 0x14($sp)
/* EF2D70 8018A030 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* EF2D74 8018A034 44812000 */  mtc1        $at, $ft0
/* EF2D78 8018A038 3C018018 */  lui         $at, %hi(D_801784D0)
/* EF2D7C 8018A03C C42684D0 */  lwc1        $ft1, %lo(D_801784D0)($at)
/* EF2D80 8018A040 3C018019 */  lui         $at, %hi(D_ending_80196554)
/* EF2D84 8018A044 C4286554 */  lwc1        $ft2, %lo(D_ending_80196554)($at)
/* EF2D88 8018A048 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* EF2D8C 8018A04C E7A00028 */  swc1        $fv0, 0x28($sp)
/* EF2D90 8018A050 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF2D94 8018A054 E7A00024 */  swc1        $fv0, 0x24($sp)
/* EF2D98 8018A058 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* EF2D9C 8018A05C 00003025 */  or          $a2, $zero, $zero
/* EF2DA0 8018A060 E7A4002C */  swc1        $ft0, 0x2C($sp)
/* EF2DA4 8018A064 44055000 */  mfc1        $a1, $ft3
/* EF2DA8 8018A068 0C001751 */  jal         Matrix_RotateX
/* EF2DAC 8018A06C 00000000 */   nop
/* EF2DB0 8018A070 3C018018 */  lui         $at, %hi(D_801784D4)
/* EF2DB4 8018A074 C43084D4 */  lwc1        $ft4, %lo(D_801784D4)($at)
/* EF2DB8 8018A078 3C018019 */  lui         $at, %hi(D_ending_80196558)
/* EF2DBC 8018A07C C4326558 */  lwc1        $ft5, %lo(D_ending_80196558)($at)
/* EF2DC0 8018A080 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* EF2DC4 8018A084 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* EF2DC8 8018A088 46128102 */  mul.s       $ft0, $ft4, $ft5
/* EF2DCC 8018A08C 24060001 */  addiu       $a2, $zero, 0x1
/* EF2DD0 8018A090 44052000 */  mfc1        $a1, $ft0
/* EF2DD4 8018A094 0C0017A4 */  jal         Matrix_RotateY
/* EF2DD8 8018A098 00000000 */   nop
/* EF2DDC 8018A09C 3C018018 */  lui         $at, %hi(D_801784D8)
/* EF2DE0 8018A0A0 C42684D8 */  lwc1        $ft1, %lo(D_801784D8)($at)
/* EF2DE4 8018A0A4 3C018019 */  lui         $at, %hi(D_ending_8019655C)
/* EF2DE8 8018A0A8 C428655C */  lwc1        $ft2, %lo(D_ending_8019655C)($at)
/* EF2DEC 8018A0AC 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* EF2DF0 8018A0B0 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* EF2DF4 8018A0B4 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF2DF8 8018A0B8 24060001 */  addiu       $a2, $zero, 0x1
/* EF2DFC 8018A0BC 44055000 */  mfc1        $a1, $ft3
/* EF2E00 8018A0C0 0C0017F8 */  jal         Matrix_RotateZ
/* EF2E04 8018A0C4 00000000 */   nop
/* EF2E08 8018A0C8 3C048014 */  lui         $a0, %hi(gCalcMatrix)
/* EF2E0C 8018A0CC 8C84BBC8 */  lw          $a0, %lo(gCalcMatrix)($a0)
/* EF2E10 8018A0D0 27A50024 */  addiu       $a1, $sp, 0x24
/* EF2E14 8018A0D4 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* EF2E18 8018A0D8 27A60018 */   addiu      $a2, $sp, 0x18
/* EF2E1C 8018A0DC C7B00018 */  lwc1        $ft4, 0x18($sp)
/* EF2E20 8018A0E0 C7A4001C */  lwc1        $ft0, 0x1C($sp)
/* EF2E24 8018A0E4 C7A80020 */  lwc1        $ft2, 0x20($sp)
/* EF2E28 8018A0E8 4600848D */  trunc.w.s   $ft5, $ft4
/* EF2E2C 8018A0EC 3C018018 */  lui         $at, %hi(gLight1x)
/* EF2E30 8018A0F0 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF2E34 8018A0F4 4600218D */  trunc.w.s   $ft1, $ft0
/* EF2E38 8018A0F8 440F9000 */  mfc1        $t7, $ft5
/* EF2E3C 8018A0FC 4600428D */  trunc.w.s   $ft3, $ft2
/* EF2E40 8018A100 44193000 */  mfc1        $t9, $ft1
/* EF2E44 8018A104 AC2F84DC */  sw          $t7, %lo(gLight1x)($at)
/* EF2E48 8018A108 3C018018 */  lui         $at, %hi(gLight1y)
/* EF2E4C 8018A10C 44095000 */  mfc1        $t1, $ft3
/* EF2E50 8018A110 AC3984E0 */  sw          $t9, %lo(gLight1y)($at)
/* EF2E54 8018A114 3C018018 */  lui         $at, %hi(gLight1z)
/* EF2E58 8018A118 AC2984E4 */  sw          $t1, %lo(gLight1z)($at)
/* EF2E5C 8018A11C 03E00008 */  jr          $ra
/* EF2E60 8018A120 27BD0030 */   addiu      $sp, $sp, 0x30
glabel func_ending_8018A124
/* EF2E64 8018A124 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* EF2E68 8018A128 27A9002C */  addiu       $t1, $sp, 0x2C
/* EF2E6C 8018A12C 27AA0020 */  addiu       $t2, $sp, 0x20
/* EF2E70 8018A130 27AB0014 */  addiu       $t3, $sp, 0x14
/* EF2E74 8018A134 27AC0008 */  addiu       $t4, $sp, 0x8
/* EF2E78 8018A138 27AD0000 */  addiu       $t5, $sp, 0x0
/* EF2E7C 8018A13C 3C0E8019 */  lui         $t6, %hi(D_ending_80192C08)
/* EF2E80 8018A140 25CE2C08 */  addiu       $t6, $t6, %lo(D_ending_80192C08)
/* EF2E84 8018A144 8DC10000 */  lw          $at, 0x0($t6)
/* EF2E88 8018A148 3C188019 */  lui         $t8, %hi(D_ending_80192C14)
/* EF2E8C 8018A14C 27182C14 */  addiu       $t8, $t8, %lo(D_ending_80192C14)
/* EF2E90 8018A150 AD210000 */  sw          $at, 0x0($t1)
/* EF2E94 8018A154 8DD90004 */  lw          $t9, 0x4($t6)
/* EF2E98 8018A158 00041080 */  sll         $v0, $a0, 2
/* EF2E9C 8018A15C 00441023 */  subu        $v0, $v0, $a0
/* EF2EA0 8018A160 AD390004 */  sw          $t9, 0x4($t1)
/* EF2EA4 8018A164 8DC10008 */  lw          $at, 0x8($t6)
/* EF2EA8 8018A168 3C0E8019 */  lui         $t6, %hi(D_ending_80192C20)
/* EF2EAC 8018A16C 25CE2C20 */  addiu       $t6, $t6, %lo(D_ending_80192C20)
/* EF2EB0 8018A170 AD210008 */  sw          $at, 0x8($t1)
/* EF2EB4 8018A174 8F010000 */  lw          $at, 0x0($t8)
/* EF2EB8 8018A178 00021080 */  sll         $v0, $v0, 2
/* EF2EBC 8018A17C 01221821 */  addu        $v1, $t1, $v0
/* EF2EC0 8018A180 AD410000 */  sw          $at, 0x0($t2)
/* EF2EC4 8018A184 8F190004 */  lw          $t9, 0x4($t8)
/* EF2EC8 8018A188 C4640000 */  lwc1        $ft0, 0x0($v1)
/* EF2ECC 8018A18C 01422821 */  addu        $a1, $t2, $v0
/* EF2ED0 8018A190 AD590004 */  sw          $t9, 0x4($t2)
/* EF2ED4 8018A194 8F010008 */  lw          $at, 0x8($t8)
/* EF2ED8 8018A198 3C188019 */  lui         $t8, %hi(D_ending_80192C2C)
/* EF2EDC 8018A19C 27182C2C */  addiu       $t8, $t8, %lo(D_ending_80192C2C)
/* EF2EE0 8018A1A0 AD410008 */  sw          $at, 0x8($t2)
/* EF2EE4 8018A1A4 8DC10000 */  lw          $at, 0x0($t6)
/* EF2EE8 8018A1A8 01623021 */  addu        $a2, $t3, $v0
/* EF2EEC 8018A1AC 01823821 */  addu        $a3, $t4, $v0
/* EF2EF0 8018A1B0 AD610000 */  sw          $at, 0x0($t3)
/* EF2EF4 8018A1B4 8DD90004 */  lw          $t9, 0x4($t6)
/* EF2EF8 8018A1B8 AD790004 */  sw          $t9, 0x4($t3)
/* EF2EFC 8018A1BC 8DC10008 */  lw          $at, 0x8($t6)
/* EF2F00 8018A1C0 3C0E8019 */  lui         $t6, %hi(D_ending_80192C38)
/* EF2F04 8018A1C4 25CE2C38 */  addiu       $t6, $t6, %lo(D_ending_80192C38)
/* EF2F08 8018A1C8 AD610008 */  sw          $at, 0x8($t3)
/* EF2F0C 8018A1CC 8F010000 */  lw          $at, 0x0($t8)
/* EF2F10 8018A1D0 AD810000 */  sw          $at, 0x0($t4)
/* EF2F14 8018A1D4 8F190004 */  lw          $t9, 0x4($t8)
/* EF2F18 8018A1D8 AD990004 */  sw          $t9, 0x4($t4)
/* EF2F1C 8018A1DC 8F010008 */  lw          $at, 0x8($t8)
/* EF2F20 8018A1E0 AD810008 */  sw          $at, 0x8($t4)
/* EF2F24 8018A1E4 8DC10000 */  lw          $at, 0x0($t6)
/* EF2F28 8018A1E8 ADA10000 */  sw          $at, 0x0($t5)
/* EF2F2C 8018A1EC 8DD90004 */  lw          $t9, 0x4($t6)
/* EF2F30 8018A1F0 3C018017 */  lui         $at, %hi(D_80177978)
/* EF2F34 8018A1F4 ADB90004 */  sw          $t9, 0x4($t5)
/* EF2F38 8018A1F8 E4247978 */  swc1        $ft0, %lo(D_80177978)($at)
/* EF2F3C 8018A1FC C4660004 */  lwc1        $ft1, 0x4($v1)
/* EF2F40 8018A200 3C018017 */  lui         $at, %hi(D_80177980)
/* EF2F44 8018A204 E4267980 */  swc1        $ft1, %lo(D_80177980)($at)
/* EF2F48 8018A208 C4680008 */  lwc1        $ft2, 0x8($v1)
/* EF2F4C 8018A20C 3C018017 */  lui         $at, %hi(D_80177988)
/* EF2F50 8018A210 E4287988 */  swc1        $ft2, %lo(D_80177988)($at)
/* EF2F54 8018A214 C4AA0000 */  lwc1        $ft3, 0x0($a1)
/* EF2F58 8018A218 3C018017 */  lui         $at, %hi(D_801779A0)
/* EF2F5C 8018A21C E42A79A0 */  swc1        $ft3, %lo(D_801779A0)($at)
/* EF2F60 8018A220 C4B00004 */  lwc1        $ft4, 0x4($a1)
/* EF2F64 8018A224 3C018017 */  lui         $at, %hi(D_801779B8)
/* EF2F68 8018A228 E43079B8 */  swc1        $ft4, %lo(D_801779B8)($at)
/* EF2F6C 8018A22C C4B20008 */  lwc1        $ft5, 0x8($a1)
/* EF2F70 8018A230 3C018017 */  lui         $at, %hi(D_801779C0)
/* EF2F74 8018A234 E43279C0 */  swc1        $ft5, %lo(D_801779C0)($at)
/* EF2F78 8018A238 8CD80000 */  lw          $t8, 0x0($a2)
/* EF2F7C 8018A23C 3C018018 */  lui         $at, %hi(gLight1R)
/* EF2F80 8018A240 AC388548 */  sw          $t8, %lo(gLight1R)($at)
/* EF2F84 8018A244 8CCF0004 */  lw          $t7, 0x4($a2)
/* EF2F88 8018A248 3C018018 */  lui         $at, %hi(gLight1G)
/* EF2F8C 8018A24C AC2F854C */  sw          $t7, %lo(gLight1G)($at)
/* EF2F90 8018A250 8CCE0008 */  lw          $t6, 0x8($a2)
/* EF2F94 8018A254 3C018018 */  lui         $at, %hi(gLight1B)
/* EF2F98 8018A258 AC2E8550 */  sw          $t6, %lo(gLight1B)($at)
/* EF2F9C 8018A25C 8CF90000 */  lw          $t9, 0x0($a3)
/* EF2FA0 8018A260 3C018018 */  lui         $at, %hi(gAmbientR)
/* EF2FA4 8018A264 000470C0 */  sll         $t6, $a0, 3
/* EF2FA8 8018A268 AC398554 */  sw          $t9, %lo(gAmbientR)($at)
/* EF2FAC 8018A26C 8CF80004 */  lw          $t8, 0x4($a3)
/* EF2FB0 8018A270 3C018018 */  lui         $at, %hi(gAmbientG)
/* EF2FB4 8018A274 01AE4021 */  addu        $t0, $t5, $t6
/* EF2FB8 8018A278 AC388558 */  sw          $t8, %lo(gAmbientG)($at)
/* EF2FBC 8018A27C 8CEF0008 */  lw          $t7, 0x8($a3)
/* EF2FC0 8018A280 3C018018 */  lui         $at, %hi(gAmbientB)
/* EF2FC4 8018A284 AC2F855C */  sw          $t7, %lo(gAmbientB)($at)
/* EF2FC8 8018A288 C5040000 */  lwc1        $ft0, 0x0($t0)
/* EF2FCC 8018A28C 3C018018 */  lui         $at, %hi(D_801784D0)
/* EF2FD0 8018A290 E42484D0 */  swc1        $ft0, %lo(D_801784D0)($at)
/* EF2FD4 8018A294 C5060004 */  lwc1        $ft1, 0x4($t0)
/* EF2FD8 8018A298 3C018018 */  lui         $at, %hi(D_801784D4)
/* EF2FDC 8018A29C E42684D4 */  swc1        $ft1, %lo(D_801784D4)($at)
/* EF2FE0 8018A2A0 03E00008 */  jr          $ra
/* EF2FE4 8018A2A4 27BD0038 */   addiu      $sp, $sp, 0x38
.section .late_rodata
dlabel D_ending_80196560
/* EFF2A0 80196560 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018A2A8
/* EF2FE8 8018A2A8 27BDFD38 */  addiu       $sp, $sp, -0x2C8
/* EF2FEC 8018A2AC AFBE0050 */  sw          $fp, 0x50($sp)
/* EF2FF0 8018A2B0 3C1E8019 */  lui         $fp, %hi(D_ending_80196F88)
/* EF2FF4 8018A2B4 27DE6F88 */  addiu       $fp, $fp, %lo(D_ending_80196F88)
/* EF2FF8 8018A2B8 AFBF0054 */  sw          $ra, 0x54($sp)
/* EF2FFC 8018A2BC AFB7004C */  sw          $s7, 0x4C($sp)
/* EF3000 8018A2C0 AFB60048 */  sw          $s6, 0x48($sp)
/* EF3004 8018A2C4 AFB50044 */  sw          $s5, 0x44($sp)
/* EF3008 8018A2C8 AFB40040 */  sw          $s4, 0x40($sp)
/* EF300C 8018A2CC AFB3003C */  sw          $s3, 0x3C($sp)
/* EF3010 8018A2D0 AFB20038 */  sw          $s2, 0x38($sp)
/* EF3014 8018A2D4 AFB10034 */  sw          $s1, 0x34($sp)
/* EF3018 8018A2D8 AFB00030 */  sw          $s0, 0x30($sp)
/* EF301C 8018A2DC F7B40028 */  sdc1        $fs0, 0x28($sp)
/* EF3020 8018A2E0 8FCE0000 */  lw          $t6, 0x0($fp)
/* EF3024 8018A2E4 3C108019 */  lui         $s0, %hi(D_ending_80196D08)
/* EF3028 8018A2E8 26106D08 */  addiu       $s0, $s0, %lo(D_ending_80196D08)
/* EF302C 8018A2EC 19C00093 */  blez        $t6, .Lending_8018A53C
/* EF3030 8018A2F0 00009825 */   or         $s3, $zero, $zero
/* EF3034 8018A2F4 3C018019 */  lui         $at, %hi(D_ending_80196560)
/* EF3038 8018A2F8 3C17800C */  lui         $s7, %hi(gIdentityMatrix)
/* EF303C 8018A2FC 3C128013 */  lui         $s2, %hi(gMasterDisp)
/* EF3040 8018A300 3C118014 */  lui         $s1, %hi(gGfxMatrix)
/* EF3044 8018A304 2631B3C0 */  addiu       $s1, $s1, %lo(gGfxMatrix)
/* EF3048 8018A308 26527E64 */  addiu       $s2, $s2, %lo(gMasterDisp)
/* EF304C 8018A30C 26F74660 */  addiu       $s7, $s7, %lo(gIdentityMatrix)
/* EF3050 8018A310 C4346560 */  lwc1        $fs0, %lo(D_ending_80196560)($at)
/* EF3054 8018A314 3C160600 */  lui         $s6, (0x6000000 >> 16)
/* EF3058 8018A318 3C15FA00 */  lui         $s5, (0xFA000000 >> 16)
/* EF305C 8018A31C 27B4006C */  addiu       $s4, $sp, 0x6C
.Lending_8018A320:
/* EF3060 8018A320 0C0015C2 */  jal         Matrix_Push
/* EF3064 8018A324 02202025 */   or         $a0, $s1, $zero
/* EF3068 8018A328 02402025 */  or          $a0, $s2, $zero
/* EF306C 8018A32C 0C02E374 */  jal         RCP_SetupDL
/* EF3070 8018A330 86050008 */   lh         $a1, 0x8($s0)
/* EF3074 8018A334 8E430000 */  lw          $v1, 0x0($s2)
/* EF3078 8018A338 246F0008 */  addiu       $t7, $v1, 0x8
/* EF307C 8018A33C AE4F0000 */  sw          $t7, 0x0($s2)
/* EF3080 8018A340 AC750000 */  sw          $s5, 0x0($v1)
/* EF3084 8018A344 9209003C */  lbu         $t1, 0x3C($s0)
/* EF3088 8018A348 920D003D */  lbu         $t5, 0x3D($s0)
/* EF308C 8018A34C 9219003F */  lbu         $t9, 0x3F($s0)
/* EF3090 8018A350 9208003E */  lbu         $t0, 0x3E($s0)
/* EF3094 8018A354 00095600 */  sll         $t2, $t1, 24
/* EF3098 8018A358 000D7400 */  sll         $t6, $t5, 16
/* EF309C 8018A35C 032A5825 */  or          $t3, $t9, $t2
/* EF30A0 8018A360 016E7825 */  or          $t7, $t3, $t6
/* EF30A4 8018A364 00084A00 */  sll         $t1, $t0, 8
/* EF30A8 8018A368 01E9C825 */  or          $t9, $t7, $t1
/* EF30AC 8018A36C AC790004 */  sw          $t9, 0x4($v1)
/* EF30B0 8018A370 240A0001 */  addiu       $t2, $zero, 0x1
/* EF30B4 8018A374 AFAA0010 */  sw          $t2, 0x10($sp)
/* EF30B8 8018A378 8E240000 */  lw          $a0, 0x0($s1)
/* EF30BC 8018A37C 8E05000C */  lw          $a1, 0xC($s0)
/* EF30C0 8018A380 8E060010 */  lw          $a2, 0x10($s0)
/* EF30C4 8018A384 0C0016C0 */  jal         Matrix_Translate
/* EF30C8 8018A388 8E070014 */   lw         $a3, 0x14($s0)
/* EF30CC 8018A38C 240C0001 */  addiu       $t4, $zero, 0x1
/* EF30D0 8018A390 AFAC0010 */  sw          $t4, 0x10($sp)
/* EF30D4 8018A394 8E240000 */  lw          $a0, 0x0($s1)
/* EF30D8 8018A398 8E050024 */  lw          $a1, 0x24($s0)
/* EF30DC 8018A39C 8E060028 */  lw          $a2, 0x28($s0)
/* EF30E0 8018A3A0 0C00170D */  jal         Matrix_Scale
/* EF30E4 8018A3A4 8E07002C */   lw         $a3, 0x2C($s0)
/* EF30E8 8018A3A8 C604001C */  lwc1        $ft0, 0x1C($s0)
/* EF30EC 8018A3AC 8E240000 */  lw          $a0, 0x0($s1)
/* EF30F0 8018A3B0 24060001 */  addiu       $a2, $zero, 0x1
/* EF30F4 8018A3B4 46142182 */  mul.s       $ft1, $ft0, $fs0
/* EF30F8 8018A3B8 44053000 */  mfc1        $a1, $ft1
/* EF30FC 8018A3BC 0C0017A4 */  jal         Matrix_RotateY
/* EF3100 8018A3C0 00000000 */   nop
/* EF3104 8018A3C4 C6080018 */  lwc1        $ft2, 0x18($s0)
/* EF3108 8018A3C8 8E240000 */  lw          $a0, 0x0($s1)
/* EF310C 8018A3CC 24060001 */  addiu       $a2, $zero, 0x1
/* EF3110 8018A3D0 46144282 */  mul.s       $ft3, $ft2, $fs0
/* EF3114 8018A3D4 44055000 */  mfc1        $a1, $ft3
/* EF3118 8018A3D8 0C001751 */  jal         Matrix_RotateX
/* EF311C 8018A3DC 00000000 */   nop
/* EF3120 8018A3E0 C6100020 */  lwc1        $ft4, 0x20($s0)
/* EF3124 8018A3E4 8E240000 */  lw          $a0, 0x0($s1)
/* EF3128 8018A3E8 24060001 */  addiu       $a2, $zero, 0x1
/* EF312C 8018A3EC 46148482 */  mul.s       $ft5, $ft4, $fs0
/* EF3130 8018A3F0 44059000 */  mfc1        $a1, $ft5
/* EF3134 8018A3F4 0C0017F8 */  jal         Matrix_RotateZ
/* EF3138 8018A3F8 00000000 */   nop
/* EF313C 8018A3FC 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF3140 8018A400 02402025 */   or         $a0, $s2, $zero
/* EF3144 8018A404 8E0D0004 */  lw          $t5, 0x4($s0)
/* EF3148 8018A408 15A00009 */  bnez        $t5, .Lending_8018A430
/* EF314C 8018A40C 00000000 */   nop
/* EF3150 8018A410 8E430000 */  lw          $v1, 0x0($s2)
/* EF3154 8018A414 246B0008 */  addiu       $t3, $v1, 0x8
/* EF3158 8018A418 AE4B0000 */  sw          $t3, 0x0($s2)
/* EF315C 8018A41C AC760000 */  sw          $s6, 0x0($v1)
/* EF3160 8018A420 8E0E0000 */  lw          $t6, 0x0($s0)
/* EF3164 8018A424 AC6E0004 */  sw          $t6, 0x4($v1)
/* EF3168 8018A428 1000003C */  b           .Lending_8018A51C
/* EF316C 8018A42C 00000000 */   nop
.Lending_8018A430:
/* EF3170 8018A430 0C026B37 */  jal         Animation_GetFrameCount
/* EF3174 8018A434 8E040000 */   lw         $a0, 0x0($s0)
/* EF3178 8018A438 8E180034 */  lw          $t8, 0x34($s0)
/* EF317C 8018A43C C6080030 */  lwc1        $ft2, 0x30($s0)
/* EF3180 8018A440 240F0001 */  addiu       $t7, $zero, 0x1
/* EF3184 8018A444 44982000 */  mtc1        $t8, $ft0
/* EF3188 8018A448 8E040000 */  lw          $a0, 0x0($s0)
/* EF318C 8018A44C 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF3190 8018A450 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF3194 8018A454 4448F800 */  cfc1        $t0, $31
/* EF3198 8018A458 44CFF800 */  ctc1        $t7, $31
/* EF319C 8018A45C 00000000 */  nop
/* EF31A0 8018A460 46005424 */  cvt.w.s     $ft4, $ft3
/* EF31A4 8018A464 444FF800 */  cfc1        $t7, $31
/* EF31A8 8018A468 00000000 */  nop
/* EF31AC 8018A46C 31E10004 */  andi        $at, $t7, 0x4
/* EF31B0 8018A470 31EF0078 */  andi        $t7, $t7, 0x78
/* EF31B4 8018A474 51E00015 */  beql        $t7, $zero, .Lending_8018A4CC
/* EF31B8 8018A478 440F8000 */   mfc1       $t7, $ft4
/* EF31BC 8018A47C 3C014F00 */  lui         $at, (0x4F000000 >> 16)
/* EF31C0 8018A480 44818000 */  mtc1        $at, $ft4
/* EF31C4 8018A484 240F0001 */  addiu       $t7, $zero, 0x1
/* EF31C8 8018A488 46105401 */  sub.s       $ft4, $ft3, $ft4
/* EF31CC 8018A48C 44CFF800 */  ctc1        $t7, $31
/* EF31D0 8018A490 00000000 */  nop
/* EF31D4 8018A494 46008424 */  cvt.w.s     $ft4, $ft4
/* EF31D8 8018A498 444FF800 */  cfc1        $t7, $31
/* EF31DC 8018A49C 00000000 */  nop
/* EF31E0 8018A4A0 31E10004 */  andi        $at, $t7, 0x4
/* EF31E4 8018A4A4 31EF0078 */  andi        $t7, $t7, 0x78
/* EF31E8 8018A4A8 15E00005 */  bnez        $t7, .Lending_8018A4C0
/* EF31EC 8018A4AC 00000000 */   nop
/* EF31F0 8018A4B0 440F8000 */  mfc1        $t7, $ft4
/* EF31F4 8018A4B4 3C018000 */  lui         $at, (0x80000000 >> 16)
/* EF31F8 8018A4B8 10000007 */  b           .Lending_8018A4D8
/* EF31FC 8018A4BC 01E17825 */   or         $t7, $t7, $at
.Lending_8018A4C0:
/* EF3200 8018A4C0 10000005 */  b           .Lending_8018A4D8
/* EF3204 8018A4C4 240FFFFF */   addiu      $t7, $zero, -0x1
/* EF3208 8018A4C8 440F8000 */  mfc1        $t7, $ft4
.Lending_8018A4CC:
/* EF320C 8018A4CC 00000000 */  nop
/* EF3210 8018A4D0 05E0FFFB */  bltz        $t7, .Lending_8018A4C0
/* EF3214 8018A4D4 00000000 */   nop
.Lending_8018A4D8:
/* EF3218 8018A4D8 01E2001B */  divu        $zero, $t7, $v0
/* EF321C 8018A4DC 00002810 */  mfhi        $a1
/* EF3220 8018A4E0 44C8F800 */  ctc1        $t0, $31
/* EF3224 8018A4E4 14400002 */  bnez        $v0, .Lending_8018A4F0
/* EF3228 8018A4E8 00000000 */   nop
/* EF322C 8018A4EC 0007000D */  break       7
.Lending_8018A4F0:
/* EF3230 8018A4F0 02803025 */  or          $a2, $s4, $zero
/* EF3234 8018A4F4 0C026A88 */  jal         Animation_GetFrameData
/* EF3238 8018A4F8 00000000 */   nop
/* EF323C 8018A4FC 00002025 */  or          $a0, $zero, $zero
/* EF3240 8018A500 8E050004 */  lw          $a1, 0x4($s0)
/* EF3244 8018A504 02803025 */  or          $a2, $s4, $zero
/* EF3248 8018A508 00003825 */  or          $a3, $zero, $zero
/* EF324C 8018A50C AFA00010 */  sw          $zero, 0x10($sp)
/* EF3250 8018A510 AFA00014 */  sw          $zero, 0x14($sp)
/* EF3254 8018A514 0C0269CB */  jal         Animation_DrawSkeleton
/* EF3258 8018A518 AFB70018 */   sw         $s7, 0x18($sp)
.Lending_8018A51C:
/* EF325C 8018A51C 0C0015D0 */  jal         Matrix_Pop
/* EF3260 8018A520 02202025 */   or         $a0, $s1, $zero
/* EF3264 8018A524 8FC90000 */  lw          $t1, 0x0($fp)
/* EF3268 8018A528 26730001 */  addiu       $s3, $s3, 0x1
/* EF326C 8018A52C 26100040 */  addiu       $s0, $s0, 0x40
/* EF3270 8018A530 0269082A */  slt         $at, $s3, $t1
/* EF3274 8018A534 1420FF7A */  bnez        $at, .Lending_8018A320
/* EF3278 8018A538 00000000 */   nop
.Lending_8018A53C:
/* EF327C 8018A53C 8FBF0054 */  lw          $ra, 0x54($sp)
/* EF3280 8018A540 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* EF3284 8018A544 8FB00030 */  lw          $s0, 0x30($sp)
/* EF3288 8018A548 8FB10034 */  lw          $s1, 0x34($sp)
/* EF328C 8018A54C 8FB20038 */  lw          $s2, 0x38($sp)
/* EF3290 8018A550 8FB3003C */  lw          $s3, 0x3C($sp)
/* EF3294 8018A554 8FB40040 */  lw          $s4, 0x40($sp)
/* EF3298 8018A558 8FB50044 */  lw          $s5, 0x44($sp)
/* EF329C 8018A55C 8FB60048 */  lw          $s6, 0x48($sp)
/* EF32A0 8018A560 8FB7004C */  lw          $s7, 0x4C($sp)
/* EF32A4 8018A564 8FBE0050 */  lw          $fp, 0x50($sp)
/* EF32A8 8018A568 03E00008 */  jr          $ra
/* EF32AC 8018A56C 27BD02C8 */   addiu      $sp, $sp, 0x2C8
.section .late_rodata
dlabel jtbl_ending_80196564
/* EFF2A4 80196564 8018A6D4 */ .word .Lending_8018A6D4
/* EFF2A8 80196568 8018A6DC */ .word .Lending_8018A6DC
/* EFF2AC 8019656C 8018A70C */ .word .Lending_8018A70C
/* EFF2B0 80196570 8018A71C */ .word .Lending_8018A71C
/* EFF2B4 80196574 8018A75C */ .word .Lending_8018A75C
/* EFF2B8 80196578 8018A76C */ .word .Lending_8018A76C
/* EFF2BC 8019657C 8018A7AC */ .word .Lending_8018A7AC
/* EFF2C0 80196580 8018A7BC */ .word .Lending_8018A7BC
/* EFF2C4 80196584 8018A7EC */ .word .Lending_8018A7EC
/* EFF2C8 80196588 8018A7FC */ .word .Lending_8018A7FC


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018A570
/* EF32B0 8018A570 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* EF32B4 8018A574 AFBF002C */  sw          $ra, 0x2C($sp)
/* EF32B8 8018A578 0C062809 */  jal         func_ending_8018A024
/* EF32BC 8018A57C 00000000 */   nop
/* EF32C0 8018A580 3C0E8018 */  lui         $t6, %hi(gLight1R)
/* EF32C4 8018A584 3C0F8018 */  lui         $t7, %hi(gLight1G)
/* EF32C8 8018A588 3C188018 */  lui         $t8, %hi(gLight1B)
/* EF32CC 8018A58C 3C198018 */  lui         $t9, %hi(gAmbientR)
/* EF32D0 8018A590 3C088018 */  lui         $t0, %hi(gAmbientG)
/* EF32D4 8018A594 3C098018 */  lui         $t1, %hi(gAmbientB)
/* EF32D8 8018A598 8D29855C */  lw          $t1, %lo(gAmbientB)($t1)
/* EF32DC 8018A59C 8D088558 */  lw          $t0, %lo(gAmbientG)($t0)
/* EF32E0 8018A5A0 8F398554 */  lw          $t9, %lo(gAmbientR)($t9)
/* EF32E4 8018A5A4 8F188550 */  lw          $t8, %lo(gLight1B)($t8)
/* EF32E8 8018A5A8 8DEF854C */  lw          $t7, %lo(gLight1G)($t7)
/* EF32EC 8018A5AC 8DCE8548 */  lw          $t6, %lo(gLight1R)($t6)
/* EF32F0 8018A5B0 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* EF32F4 8018A5B4 3C058018 */  lui         $a1, %hi(gLight1x)
/* EF32F8 8018A5B8 3C068018 */  lui         $a2, %hi(gLight1y)
/* EF32FC 8018A5BC 3C078018 */  lui         $a3, %hi(gLight1z)
/* EF3300 8018A5C0 8CE784E4 */  lw          $a3, %lo(gLight1z)($a3)
/* EF3304 8018A5C4 8CC684E0 */  lw          $a2, %lo(gLight1y)($a2)
/* EF3308 8018A5C8 8CA584DC */  lw          $a1, %lo(gLight1x)($a1)
/* EF330C 8018A5CC 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* EF3310 8018A5D0 AFA90024 */  sw          $t1, 0x24($sp)
/* EF3314 8018A5D4 AFA80020 */  sw          $t0, 0x20($sp)
/* EF3318 8018A5D8 AFB9001C */  sw          $t9, 0x1C($sp)
/* EF331C 8018A5DC AFB80018 */  sw          $t8, 0x18($sp)
/* EF3320 8018A5E0 AFAF0014 */  sw          $t7, 0x14($sp)
/* EF3324 8018A5E4 0C000DCB */  jal         Lights_SetOneLight
/* EF3328 8018A5E8 AFAE0010 */   sw         $t6, 0x10($sp)
/* EF332C 8018A5EC 3C058019 */  lui         $a1, %hi(D_ending_80196F8C)
/* EF3330 8018A5F0 24A56F8C */  addiu       $a1, $a1, %lo(D_ending_80196F8C)
/* EF3334 8018A5F4 8CA30000 */  lw          $v1, 0x0($a1)
/* EF3338 8018A5F8 24010002 */  addiu       $at, $zero, 0x2
/* EF333C 8018A5FC 3C0A8017 */  lui         $t2, %hi(gCsFrameCount)
/* EF3340 8018A600 1061000C */  beq         $v1, $at, .Lending_8018A634
/* EF3344 8018A604 00601025 */   or         $v0, $v1, $zero
/* EF3348 8018A608 24010004 */  addiu       $at, $zero, 0x4
/* EF334C 8018A60C 10410010 */  beq         $v0, $at, .Lending_8018A650
/* EF3350 8018A610 3C0C8017 */   lui        $t4, %hi(gCsFrameCount)
/* EF3354 8018A614 24010006 */  addiu       $at, $zero, 0x6
/* EF3358 8018A618 10410014 */  beq         $v0, $at, .Lending_8018A66C
/* EF335C 8018A61C 3C0E8017 */   lui        $t6, %hi(gCsFrameCount)
/* EF3360 8018A620 24010008 */  addiu       $at, $zero, 0x8
/* EF3364 8018A624 10410018 */  beq         $v0, $at, .Lending_8018A688
/* EF3368 8018A628 3C188019 */   lui        $t8, %hi(D_ending_80196D08 + 0x138)
/* EF336C 8018A62C 10000022 */  b           .Lending_8018A6B8
/* EF3370 8018A630 2C61000A */   sltiu      $at, $v1, 0xA
.Lending_8018A634:
/* EF3374 8018A634 8D4A7A80 */  lw          $t2, %lo(gCsFrameCount)($t2)
/* EF3378 8018A638 240100C8 */  addiu       $at, $zero, 0xC8
/* EF337C 8018A63C 5541001E */  bnel        $t2, $at, .Lending_8018A6B8
/* EF3380 8018A640 2C61000A */   sltiu      $at, $v1, 0xA
/* EF3384 8018A644 24030003 */  addiu       $v1, $zero, 0x3
/* EF3388 8018A648 1000001A */  b           .Lending_8018A6B4
/* EF338C 8018A64C ACA30000 */   sw         $v1, 0x0($a1)
.Lending_8018A650:
/* EF3390 8018A650 8D8C7A80 */  lw          $t4, %lo(gCsFrameCount)($t4)
/* EF3394 8018A654 240101B3 */  addiu       $at, $zero, 0x1B3
/* EF3398 8018A658 55810017 */  bnel        $t4, $at, .Lending_8018A6B8
/* EF339C 8018A65C 2C61000A */   sltiu      $at, $v1, 0xA
/* EF33A0 8018A660 24030005 */  addiu       $v1, $zero, 0x5
/* EF33A4 8018A664 10000013 */  b           .Lending_8018A6B4
/* EF33A8 8018A668 ACA30000 */   sw         $v1, 0x0($a1)
.Lending_8018A66C:
/* EF33AC 8018A66C 8DCE7A80 */  lw          $t6, %lo(gCsFrameCount)($t6)
/* EF33B0 8018A670 240100B4 */  addiu       $at, $zero, 0xB4
/* EF33B4 8018A674 55C10010 */  bnel        $t6, $at, .Lending_8018A6B8
/* EF33B8 8018A678 2C61000A */   sltiu      $at, $v1, 0xA
/* EF33BC 8018A67C 24030007 */  addiu       $v1, $zero, 0x7
/* EF33C0 8018A680 1000000C */  b           .Lending_8018A6B4
/* EF33C4 8018A684 ACA30000 */   sw         $v1, 0x0($a1)
.Lending_8018A688:
/* EF33C8 8018A688 8F186E40 */  lw          $t8, %lo(D_ending_80196D08 + 0x138)($t8)
/* EF33CC 8018A68C 24010002 */  addiu       $at, $zero, 0x2
/* EF33D0 8018A690 3C198017 */  lui         $t9, %hi(gCsFrameCount)
/* EF33D4 8018A694 57010008 */  bnel        $t8, $at, .Lending_8018A6B8
/* EF33D8 8018A698 2C61000A */   sltiu      $at, $v1, 0xA
/* EF33DC 8018A69C 8F397A80 */  lw          $t9, %lo(gCsFrameCount)($t9)
/* EF33E0 8018A6A0 2B21006C */  slti        $at, $t9, 0x6C
/* EF33E4 8018A6A4 54200004 */  bnel        $at, $zero, .Lending_8018A6B8
/* EF33E8 8018A6A8 2C61000A */   sltiu      $at, $v1, 0xA
/* EF33EC 8018A6AC 24030009 */  addiu       $v1, $zero, 0x9
/* EF33F0 8018A6B0 ACA30000 */  sw          $v1, 0x0($a1)
.Lending_8018A6B4:
/* EF33F4 8018A6B4 2C61000A */  sltiu       $at, $v1, 0xA
.Lending_8018A6B8:
/* EF33F8 8018A6B8 10200057 */  beqz        $at, .Lending_8018A818
/* EF33FC 8018A6BC 00034880 */   sll        $t1, $v1, 2
/* EF3400 8018A6C0 3C018019 */  lui         $at, %hi(jtbl_ending_80196564)
/* EF3404 8018A6C4 00290821 */  addu        $at, $at, $t1
/* EF3408 8018A6C8 8C296564 */  lw          $t1, %lo(jtbl_ending_80196564)($at)
/* EF340C 8018A6CC 01200008 */  jr          $t1
/* EF3410 8018A6D0 00000000 */   nop
.Lending_8018A6D4:
/* EF3414 8018A6D4 0C062849 */  jal         func_ending_8018A124
/* EF3418 8018A6D8 00002025 */   or         $a0, $zero, $zero
.Lending_8018A6DC:
/* EF341C 8018A6DC 0C061F4F */  jal         func_ending_80187D3C
/* EF3420 8018A6E0 00002025 */   or         $a0, $zero, $zero
/* EF3424 8018A6E4 3C018018 */  lui         $at, %hi(D_80178358)
/* EF3428 8018A6E8 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* EF342C 8018A6EC 3C01801A */  lui         $at, %hi(D_ending_8019858C)
/* EF3430 8018A6F0 3C058019 */  lui         $a1, %hi(D_ending_80196F8C)
/* EF3434 8018A6F4 AC20858C */  sw          $zero, %lo(D_ending_8019858C)($at)
/* EF3438 8018A6F8 24A56F8C */  addiu       $a1, $a1, %lo(D_ending_80196F8C)
/* EF343C 8018A6FC 240A0002 */  addiu       $t2, $zero, 0x2
/* EF3440 8018A700 ACAA0000 */  sw          $t2, 0x0($a1)
/* EF3444 8018A704 3C018017 */  lui         $at, %hi(gCsFrameCount)
/* EF3448 8018A708 AC207A80 */  sw          $zero, %lo(gCsFrameCount)($at)
.Lending_8018A70C:
/* EF344C 8018A70C 0C06200C */  jal         func_ending_80188030
/* EF3450 8018A710 00002025 */   or         $a0, $zero, $zero
/* EF3454 8018A714 10000041 */  b           .Lending_8018A81C
/* EF3458 8018A718 8FBF002C */   lw         $ra, 0x2C($sp)
.Lending_8018A71C:
/* EF345C 8018A71C 0C061F4F */  jal         func_ending_80187D3C
/* EF3460 8018A720 24040001 */   addiu      $a0, $zero, 0x1
/* EF3464 8018A724 3C018018 */  lui         $at, %hi(D_80178358)
/* EF3468 8018A728 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* EF346C 8018A72C 3C01801A */  lui         $at, %hi(D_ending_8019858C)
/* EF3470 8018A730 3C058019 */  lui         $a1, %hi(D_ending_80196F8C)
/* EF3474 8018A734 AC20858C */  sw          $zero, %lo(D_ending_8019858C)($at)
/* EF3478 8018A738 24A56F8C */  addiu       $a1, $a1, %lo(D_ending_80196F8C)
/* EF347C 8018A73C 240B0004 */  addiu       $t3, $zero, 0x4
/* EF3480 8018A740 ACAB0000 */  sw          $t3, 0x0($a1)
/* EF3484 8018A744 3C018017 */  lui         $at, %hi(gCsFrameCount)
/* EF3488 8018A748 AC207A80 */  sw          $zero, %lo(gCsFrameCount)($at)
/* EF348C 8018A74C 3C018017 */  lui         $at, %hi(gOverlayStage)
/* EF3490 8018A750 240C0001 */  addiu       $t4, $zero, 0x1
/* EF3494 8018A754 10000030 */  b           .Lending_8018A818
/* EF3498 8018A758 AC2C7820 */   sw         $t4, %lo(gOverlayStage)($at)
.Lending_8018A75C:
/* EF349C 8018A75C 0C06200C */  jal         func_ending_80188030
/* EF34A0 8018A760 24040001 */   addiu      $a0, $zero, 0x1
/* EF34A4 8018A764 1000002D */  b           .Lending_8018A81C
/* EF34A8 8018A768 8FBF002C */   lw         $ra, 0x2C($sp)
.Lending_8018A76C:
/* EF34AC 8018A76C 0C0620E5 */  jal         func_ending_80188394
/* EF34B0 8018A770 00000000 */   nop
/* EF34B4 8018A774 3C018018 */  lui         $at, %hi(D_80178358)
/* EF34B8 8018A778 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* EF34BC 8018A77C 3C01801A */  lui         $at, %hi(D_ending_8019858C)
/* EF34C0 8018A780 3C058019 */  lui         $a1, %hi(D_ending_80196F8C)
/* EF34C4 8018A784 AC20858C */  sw          $zero, %lo(D_ending_8019858C)($at)
/* EF34C8 8018A788 24A56F8C */  addiu       $a1, $a1, %lo(D_ending_80196F8C)
/* EF34CC 8018A78C 240D0006 */  addiu       $t5, $zero, 0x6
/* EF34D0 8018A790 ACAD0000 */  sw          $t5, 0x0($a1)
/* EF34D4 8018A794 3C018017 */  lui         $at, %hi(gCsFrameCount)
/* EF34D8 8018A798 AC207A80 */  sw          $zero, %lo(gCsFrameCount)($at)
/* EF34DC 8018A79C 3C018017 */  lui         $at, %hi(gOverlayStage)
/* EF34E0 8018A7A0 240E0004 */  addiu       $t6, $zero, 0x4
/* EF34E4 8018A7A4 1000001C */  b           .Lending_8018A818
/* EF34E8 8018A7A8 AC2E7820 */   sw         $t6, %lo(gOverlayStage)($at)
.Lending_8018A7AC:
/* EF34EC 8018A7AC 0C062117 */  jal         func_ending_8018845C
/* EF34F0 8018A7B0 00000000 */   nop
/* EF34F4 8018A7B4 10000019 */  b           .Lending_8018A81C
/* EF34F8 8018A7B8 8FBF002C */   lw         $ra, 0x2C($sp)
.Lending_8018A7BC:
/* EF34FC 8018A7BC 0C06236D */  jal         func_ending_80188DB4
/* EF3500 8018A7C0 00000000 */   nop
/* EF3504 8018A7C4 3C018018 */  lui         $at, %hi(D_80178358)
/* EF3508 8018A7C8 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* EF350C 8018A7CC 3C01801A */  lui         $at, %hi(D_ending_8019858C)
/* EF3510 8018A7D0 3C058019 */  lui         $a1, %hi(D_ending_80196F8C)
/* EF3514 8018A7D4 AC20858C */  sw          $zero, %lo(D_ending_8019858C)($at)
/* EF3518 8018A7D8 24A56F8C */  addiu       $a1, $a1, %lo(D_ending_80196F8C)
/* EF351C 8018A7DC 240F0008 */  addiu       $t7, $zero, 0x8
/* EF3520 8018A7E0 ACAF0000 */  sw          $t7, 0x0($a1)
/* EF3524 8018A7E4 3C018017 */  lui         $at, %hi(gCsFrameCount)
/* EF3528 8018A7E8 AC207A80 */  sw          $zero, %lo(gCsFrameCount)($at)
.Lending_8018A7EC:
/* EF352C 8018A7EC 0C062442 */  jal         func_ending_80189108
/* EF3530 8018A7F0 00000000 */   nop
/* EF3534 8018A7F4 10000009 */  b           .Lending_8018A81C
/* EF3538 8018A7F8 8FBF002C */   lw         $ra, 0x2C($sp)
.Lending_8018A7FC:
/* EF353C 8018A7FC 3C018018 */  lui         $at, %hi(D_80178358)
/* EF3540 8018A800 AC208358 */  sw          $zero, %lo(D_80178358)($at)
/* EF3544 8018A804 3C018017 */  lui         $at, %hi(gCsFrameCount)
/* EF3548 8018A808 AC207A80 */  sw          $zero, %lo(gCsFrameCount)($at)
/* EF354C 8018A80C 3C018019 */  lui         $at, %hi(D_ending_80196D00)
/* EF3550 8018A810 24180007 */  addiu       $t8, $zero, 0x7
/* EF3554 8018A814 AC386D00 */  sw          $t8, %lo(D_ending_80196D00)($at)
.Lending_8018A818:
/* EF3558 8018A818 8FBF002C */  lw          $ra, 0x2C($sp)
.Lending_8018A81C:
/* EF355C 8018A81C 27BD0030 */  addiu       $sp, $sp, 0x30
/* EF3560 8018A820 03E00008 */  jr          $ra
/* EF3564 8018A824 00000000 */   nop
.section .late_rodata
dlabel jtbl_ending_8019658C
/* EFF2CC 8019658C 8018A85C */ .word .Lending_8018A85C
/* EFF2D0 80196590 8018A8EC */ .word .Lending_8018A8EC
/* EFF2D4 80196594 8018A880 */ .word .Lending_8018A880
/* EFF2D8 80196598 8018A8EC */ .word .Lending_8018A8EC
/* EFF2DC 8019659C 8018A8A4 */ .word .Lending_8018A8A4
/* EFF2E0 801965A0 8018A8B4 */ .word .Lending_8018A8B4
/* EFF2E4 801965A4 8018A8B4 */ .word .Lending_8018A8B4


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018A828
/* EF3568 8018A828 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* EF356C 8018A82C AFBF0014 */  sw          $ra, 0x14($sp)
/* EF3570 8018A830 3C0E8019 */  lui         $t6, %hi(D_ending_80196F8C)
/* EF3574 8018A834 8DCE6F8C */  lw          $t6, %lo(D_ending_80196F8C)($t6)
/* EF3578 8018A838 25CFFFFE */  addiu       $t7, $t6, -0x2
/* EF357C 8018A83C 2DE10007 */  sltiu       $at, $t7, 0x7
/* EF3580 8018A840 1020002A */  beqz        $at, .Lending_8018A8EC
/* EF3584 8018A844 000F7880 */   sll        $t7, $t7, 2
/* EF3588 8018A848 3C018019 */  lui         $at, %hi(jtbl_ending_8019658C)
/* EF358C 8018A84C 002F0821 */  addu        $at, $at, $t7
/* EF3590 8018A850 8C2F658C */  lw          $t7, %lo(jtbl_ending_8019658C)($at)
/* EF3594 8018A854 01E00008 */  jr          $t7
/* EF3598 8018A858 00000000 */   nop
.Lending_8018A85C:
/* EF359C 8018A85C 0C061D48 */  jal         func_ending_80187520
/* EF35A0 8018A860 00002025 */   or         $a0, $zero, $zero
/* EF35A4 8018A864 0C061DA9 */  jal         func_ending_801876A4
/* EF35A8 8018A868 00000000 */   nop
/* EF35AC 8018A86C 00002025 */  or          $a0, $zero, $zero
/* EF35B0 8018A870 0C061E18 */  jal         func_ending_80187860
/* EF35B4 8018A874 00002825 */   or         $a1, $zero, $zero
/* EF35B8 8018A878 1000001D */  b           .Lending_8018A8F0
/* EF35BC 8018A87C 8FBF0014 */   lw         $ra, 0x14($sp)
.Lending_8018A880:
/* EF35C0 8018A880 0C061D48 */  jal         func_ending_80187520
/* EF35C4 8018A884 24040001 */   addiu      $a0, $zero, 0x1
/* EF35C8 8018A888 0C061DA9 */  jal         func_ending_801876A4
/* EF35CC 8018A88C 00000000 */   nop
/* EF35D0 8018A890 00002025 */  or          $a0, $zero, $zero
/* EF35D4 8018A894 0C061E18 */  jal         func_ending_80187860
/* EF35D8 8018A898 24050001 */   addiu      $a1, $zero, 0x1
/* EF35DC 8018A89C 10000014 */  b           .Lending_8018A8F0
/* EF35E0 8018A8A0 8FBF0014 */   lw         $ra, 0x14($sp)
.Lending_8018A8A4:
/* EF35E4 8018A8A4 0C0628AA */  jal         func_ending_8018A2A8
/* EF35E8 8018A8A8 00000000 */   nop
/* EF35EC 8018A8AC 10000010 */  b           .Lending_8018A8F0
/* EF35F0 8018A8B0 8FBF0014 */   lw         $ra, 0x14($sp)
.Lending_8018A8B4:
/* EF35F4 8018A8B4 24180001 */  addiu       $t8, $zero, 0x1
/* EF35F8 8018A8B8 3C018019 */  lui         $at, %hi(D_ending_80196F88)
/* EF35FC 8018A8BC 0C0628AA */  jal         func_ending_8018A2A8
/* EF3600 8018A8C0 AC386F88 */   sw         $t8, %lo(D_ending_80196F88)($at)
/* EF3604 8018A8C4 24190004 */  addiu       $t9, $zero, 0x4
/* EF3608 8018A8C8 3C018019 */  lui         $at, %hi(D_ending_80196F88)
/* EF360C 8018A8CC AC396F88 */  sw          $t9, %lo(D_ending_80196F88)($at)
/* EF3610 8018A8D0 24040001 */  addiu       $a0, $zero, 0x1
/* EF3614 8018A8D4 0C061E18 */  jal         func_ending_80187860
/* EF3618 8018A8D8 00002825 */   or         $a1, $zero, $zero
/* EF361C 8018A8DC 0C06223D */  jal         func_ending_801888F4
/* EF3620 8018A8E0 00000000 */   nop
/* EF3624 8018A8E4 0C0621BD */  jal         func_ending_801886F4
/* EF3628 8018A8E8 00000000 */   nop
.Lending_8018A8EC:
/* EF362C 8018A8EC 8FBF0014 */  lw          $ra, 0x14($sp)
.Lending_8018A8F0:
/* EF3630 8018A8F0 27BD0018 */  addiu       $sp, $sp, 0x18
/* EF3634 8018A8F4 03E00008 */  jr          $ra
/* EF3638 8018A8F8 00000000 */   nop
glabel func_ending_8018A8FC
/* EF363C 8018A8FC 3C048018 */  lui         $a0, %hi(D_80178340)
/* EF3640 8018A900 24848340 */  addiu       $a0, $a0, %lo(D_80178340)
/* EF3644 8018A904 3C028018 */  lui         $v0, %hi(D_80178358)
/* EF3648 8018A908 8C428358 */  lw          $v0, %lo(D_80178358)($v0)
/* EF364C 8018A90C 8C830000 */  lw          $v1, 0x0($a0)
/* EF3650 8018A910 240A0010 */  addiu       $t2, $zero, 0x10
/* EF3654 8018A914 10430011 */  beq         $v0, $v1, .Lending_8018A95C
/* EF3658 8018A918 0062082A */   slt        $at, $v1, $v0
/* EF365C 8018A91C 10200009 */  beqz        $at, .Lending_8018A944
/* EF3660 8018A920 3C198018 */   lui        $t9, %hi(D_8017835C)
/* EF3664 8018A924 3C0E8018 */  lui         $t6, %hi(D_8017835C)
/* EF3668 8018A928 8DCE835C */  lw          $t6, %lo(D_8017835C)($t6)
/* EF366C 8018A92C 006E7821 */  addu        $t7, $v1, $t6
/* EF3670 8018A930 01E2082A */  slt         $at, $t7, $v0
/* EF3674 8018A934 14200009 */  bnez        $at, .Lending_8018A95C
/* EF3678 8018A938 AC8F0000 */   sw         $t7, 0x0($a0)
/* EF367C 8018A93C 10000007 */  b           .Lending_8018A95C
/* EF3680 8018A940 AC820000 */   sw         $v0, 0x0($a0)
.Lending_8018A944:
/* EF3684 8018A944 8F39835C */  lw          $t9, %lo(D_8017835C)($t9)
/* EF3688 8018A948 00794023 */  subu        $t0, $v1, $t9
/* EF368C 8018A94C 0048082A */  slt         $at, $v0, $t0
/* EF3690 8018A950 14200002 */  bnez        $at, .Lending_8018A95C
/* EF3694 8018A954 AC880000 */   sw         $t0, 0x0($a0)
/* EF3698 8018A958 AC820000 */  sw          $v0, 0x0($a0)
.Lending_8018A95C:
/* EF369C 8018A95C 3C018018 */  lui         $at, %hi(D_8017835C)
/* EF36A0 8018A960 AC2A835C */  sw          $t2, %lo(D_8017835C)($at)
/* EF36A4 8018A964 03E00008 */  jr          $ra
/* EF36A8 8018A968 00000000 */   nop
.section .late_rodata
dlabel jtbl_ending_801965A8
/* EFF2E8 801965A8 8018A9C8 */ .word .Lending_8018A9C8
/* EFF2EC 801965AC 8018AA3C */ .word .Lending_8018AA3C
/* EFF2F0 801965B0 8018AA4C */ .word .Lending_8018AA4C
/* EFF2F4 801965B4 8018AA58 */ .word .Lending_8018AA58
/* EFF2F8 801965B8 8018AA6C */ .word .Lending_8018AA6C
/* EFF2FC 801965BC 8018AA84 */ .word .Lending_8018AA84
/* EFF300 801965C0 8018AA94 */ .word .Lending_8018AA94
/* EFF304 801965C4 8018AA9C */ .word .Lending_8018AA9C


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018A96C
/* EF36AC 8018A96C 27BDFFE8 */  addiu       $sp, $sp, -0x18
/* EF36B0 8018A970 3C028017 */  lui         $v0, %hi(gCsFrameCount)
/* EF36B4 8018A974 3C038017 */  lui         $v1, %hi(gGameFrameCount)
/* EF36B8 8018A978 3C048019 */  lui         $a0, %hi(D_ending_80196D00)
/* EF36BC 8018A97C 24846D00 */  addiu       $a0, $a0, %lo(D_ending_80196D00)
/* EF36C0 8018A980 24637DB0 */  addiu       $v1, $v1, %lo(gGameFrameCount)
/* EF36C4 8018A984 24427A80 */  addiu       $v0, $v0, %lo(gCsFrameCount)
/* EF36C8 8018A988 AFBF0014 */  sw          $ra, 0x14($sp)
/* EF36CC 8018A98C 8C4E0000 */  lw          $t6, 0x0($v0)
/* EF36D0 8018A990 8C780000 */  lw          $t8, 0x0($v1)
/* EF36D4 8018A994 8C880000 */  lw          $t0, 0x0($a0)
/* EF36D8 8018A998 25CF0001 */  addiu       $t7, $t6, 0x1
/* EF36DC 8018A99C 27190001 */  addiu       $t9, $t8, 0x1
/* EF36E0 8018A9A0 2D010008 */  sltiu       $at, $t0, 0x8
/* EF36E4 8018A9A4 AC4F0000 */  sw          $t7, 0x0($v0)
/* EF36E8 8018A9A8 1020003C */  beqz        $at, .Lending_8018AA9C
/* EF36EC 8018A9AC AC790000 */   sw         $t9, 0x0($v1)
/* EF36F0 8018A9B0 00084080 */  sll         $t0, $t0, 2
/* EF36F4 8018A9B4 3C018019 */  lui         $at, %hi(jtbl_ending_801965A8)
/* EF36F8 8018A9B8 00280821 */  addu        $at, $at, $t0
/* EF36FC 8018A9BC 8C2865A8 */  lw          $t0, %lo(jtbl_ending_801965A8)($at)
/* EF3700 8018A9C0 01000008 */  jr          $t0
/* EF3704 8018A9C4 00000000 */   nop
.Lending_8018A9C8:
/* EF3708 8018A9C8 3C018018 */  lui         $at, %hi(gRadioState)
/* EF370C 8018A9CC AC20829C */  sw          $zero, %lo(gRadioState)($at)
/* EF3710 8018A9D0 44800000 */  mtc1        $zero, $fv0
/* EF3714 8018A9D4 3C028017 */  lui         $v0, %hi(D_80177988)
/* EF3718 8018A9D8 AC600000 */  sw          $zero, 0x0($v1)
/* EF371C 8018A9DC 3C018017 */  lui         $at, %hi(gOverlayStage)
/* EF3720 8018A9E0 24427988 */  addiu       $v0, $v0, %lo(D_80177988)
/* EF3724 8018A9E4 AC207820 */  sw          $zero, %lo(gOverlayStage)($at)
/* EF3728 8018A9E8 E4400000 */  swc1        $fv0, 0x0($v0)
/* EF372C 8018A9EC C4440000 */  lwc1        $ft0, 0x0($v0)
/* EF3730 8018A9F0 3C058017 */  lui         $a1, %hi(D_80177980)
/* EF3734 8018A9F4 24A57980 */  addiu       $a1, $a1, %lo(D_80177980)
/* EF3738 8018A9F8 E4A40000 */  swc1        $ft0, 0x0($a1)
/* EF373C 8018A9FC C4A60000 */  lwc1        $ft1, 0x0($a1)
/* EF3740 8018AA00 3C068017 */  lui         $a2, %hi(D_801779B8)
/* EF3744 8018AA04 3C018017 */  lui         $at, %hi(D_80177978)
/* EF3748 8018AA08 24C679B8 */  addiu       $a2, $a2, %lo(D_801779B8)
/* EF374C 8018AA0C E4267978 */  swc1        $ft1, %lo(D_80177978)($at)
/* EF3750 8018AA10 E4C00000 */  swc1        $fv0, 0x0($a2)
/* EF3754 8018AA14 C4C80000 */  lwc1        $ft2, 0x0($a2)
/* EF3758 8018AA18 3C018017 */  lui         $at, %hi(D_801779A0)
/* EF375C 8018AA1C 24090001 */  addiu       $t1, $zero, 0x1
/* EF3760 8018AA20 E42879A0 */  swc1        $ft2, %lo(D_801779A0)($at)
/* EF3764 8018AA24 3C01C2C8 */  lui         $at, (0xC2C80000 >> 16)
/* EF3768 8018AA28 44815000 */  mtc1        $at, $ft3
/* EF376C 8018AA2C 3C018017 */  lui         $at, %hi(D_801779C0)
/* EF3770 8018AA30 E42A79C0 */  swc1        $ft3, %lo(D_801779C0)($at)
/* EF3774 8018AA34 10000019 */  b           .Lending_8018AA9C
/* EF3778 8018AA38 AC890000 */   sw         $t1, 0x0($a0)
.Lending_8018AA3C:
/* EF377C 8018AA3C 3C0A8019 */  lui         $t2, %hi(D_ending_80192E70)
/* EF3780 8018AA40 8D4A2E70 */  lw          $t2, %lo(D_ending_80192E70)($t2)
/* EF3784 8018AA44 2D410AF0 */  sltiu       $at, $t2, 0xAF0
/* EF3788 8018AA48 14200014 */  bnez        $at, .Lending_8018AA9C
.Lending_8018AA4C:
/* EF378C 8018AA4C 240B0003 */   addiu      $t3, $zero, 0x3
/* EF3790 8018AA50 AC8B0000 */  sw          $t3, 0x0($a0)
/* EF3794 8018AA54 AC400000 */  sw          $zero, 0x0($v0)
.Lending_8018AA58:
/* EF3798 8018AA58 0C062F2C */  jal         func_ending_8018BCB0
/* EF379C 8018AA5C 00000000 */   nop
/* EF37A0 8018AA60 3C048019 */  lui         $a0, %hi(D_ending_80196D00)
/* EF37A4 8018AA64 1040000D */  beqz        $v0, .Lending_8018AA9C
/* EF37A8 8018AA68 24846D00 */   addiu      $a0, $a0, %lo(D_ending_80196D00)
.Lending_8018AA6C:
/* EF37AC 8018AA6C 240C0002 */  addiu       $t4, $zero, 0x2
/* EF37B0 8018AA70 3C018017 */  lui         $at, %hi(gOverlayStage)
/* EF37B4 8018AA74 AC2C7820 */  sw          $t4, %lo(gOverlayStage)($at)
/* EF37B8 8018AA78 240D0005 */  addiu       $t5, $zero, 0x5
/* EF37BC 8018AA7C 10000007 */  b           .Lending_8018AA9C
/* EF37C0 8018AA80 AC8D0000 */   sw         $t5, 0x0($a0)
.Lending_8018AA84:
/* EF37C4 8018AA84 3C018019 */  lui         $at, %hi(D_ending_80196F8C)
/* EF37C8 8018AA88 AC206F8C */  sw          $zero, %lo(D_ending_80196F8C)($at)
/* EF37CC 8018AA8C 240E0006 */  addiu       $t6, $zero, 0x6
/* EF37D0 8018AA90 AC8E0000 */  sw          $t6, 0x0($a0)
.Lending_8018AA94:
/* EF37D4 8018AA94 0C06295C */  jal         func_ending_8018A570
/* EF37D8 8018AA98 00000000 */   nop
.Lending_8018AA9C:
/* EF37DC 8018AA9C 0C062A3F */  jal         func_ending_8018A8FC
/* EF37E0 8018AAA0 00000000 */   nop
/* EF37E4 8018AAA4 0C062CF6 */  jal         func_ending_8018B3D8
/* EF37E8 8018AAA8 00000000 */   nop
/* EF37EC 8018AAAC 0C062AFA */  jal         func_ending_8018ABE8
/* EF37F0 8018AAB0 00000000 */   nop
/* EF37F4 8018AAB4 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF37F8 8018AAB8 27BD0018 */  addiu       $sp, $sp, 0x18
/* EF37FC 8018AABC 03E00008 */  jr          $ra
/* EF3800 8018AAC0 00000000 */   nop
glabel func_ending_8018AAC4
/* EF3804 8018AAC4 27BDFFC8 */  addiu       $sp, $sp, -0x38
/* EF3808 8018AAC8 AFBF0034 */  sw          $ra, 0x34($sp)
/* EF380C 8018AACC 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF3810 8018AAD0 0C0015C2 */  jal         Matrix_Push
/* EF3814 8018AAD4 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* EF3818 8018AAD8 3C018017 */  lui         $at, %hi(D_801779A0)
/* EF381C 8018AADC C42479A0 */  lwc1        $ft0, %lo(D_801779A0)($at)
/* EF3820 8018AAE0 3C018017 */  lui         $at, %hi(D_801779B8)
/* EF3824 8018AAE4 C42679B8 */  lwc1        $ft1, %lo(D_801779B8)($at)
/* EF3828 8018AAE8 3C018017 */  lui         $at, %hi(D_801779C0)
/* EF382C 8018AAEC C42879C0 */  lwc1        $ft2, %lo(D_801779C0)($at)
/* EF3830 8018AAF0 44800000 */  mtc1        $zero, $fv0
/* EF3834 8018AAF4 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* EF3838 8018AAF8 44815000 */  mtc1        $at, $ft3
/* EF383C 8018AAFC 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF3840 8018AB00 3C058017 */  lui         $a1, %hi(D_80177978)
/* EF3844 8018AB04 3C068017 */  lui         $a2, %hi(D_80177980)
/* EF3848 8018AB08 3C078017 */  lui         $a3, %hi(D_80177988)
/* EF384C 8018AB0C 8CE77988 */  lw          $a3, %lo(D_80177988)($a3)
/* EF3850 8018AB10 8CC67980 */  lw          $a2, %lo(D_80177980)($a2)
/* EF3854 8018AB14 8CA57978 */  lw          $a1, %lo(D_80177978)($a1)
/* EF3858 8018AB18 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* EF385C 8018AB1C AFA00028 */  sw          $zero, 0x28($sp)
/* EF3860 8018AB20 E7A40010 */  swc1        $ft0, 0x10($sp)
/* EF3864 8018AB24 E7A60014 */  swc1        $ft1, 0x14($sp)
/* EF3868 8018AB28 E7A80018 */  swc1        $ft2, 0x18($sp)
/* EF386C 8018AB2C E7A0001C */  swc1        $fv0, 0x1C($sp)
/* EF3870 8018AB30 E7A00024 */  swc1        $fv0, 0x24($sp)
/* EF3874 8018AB34 0C001B8F */  jal         Matrix_LookAt
/* EF3878 8018AB38 E7AA0020 */   swc1       $ft3, 0x20($sp)
/* EF387C 8018AB3C 3C028019 */  lui         $v0, %hi(D_ending_80196D00)
/* EF3880 8018AB40 8C426D00 */  lw          $v0, %lo(D_ending_80196D00)($v0)
/* EF3884 8018AB44 24010001 */  addiu       $at, $zero, 0x1
/* EF3888 8018AB48 10410009 */  beq         $v0, $at, .Lending_8018AB70
/* EF388C 8018AB4C 24010003 */   addiu      $at, $zero, 0x3
/* EF3890 8018AB50 1041000B */  beq         $v0, $at, .Lending_8018AB80
/* EF3894 8018AB54 24010006 */   addiu      $at, $zero, 0x6
/* EF3898 8018AB58 1041000D */  beq         $v0, $at, .Lending_8018AB90
/* EF389C 8018AB5C 24010007 */   addiu      $at, $zero, 0x7
/* EF38A0 8018AB60 1041000F */  beq         $v0, $at, .Lending_8018ABA0
/* EF38A4 8018AB64 00000000 */   nop
/* EF38A8 8018AB68 1000000F */  b           .Lending_8018ABA8
/* EF38AC 8018AB6C 00000000 */   nop
.Lending_8018AB70:
/* EF38B0 8018AB70 0C0649B5 */  jal         func_ending_801926D4
/* EF38B4 8018AB74 00000000 */   nop
/* EF38B8 8018AB78 1000000B */  b           .Lending_8018ABA8
/* EF38BC 8018AB7C 00000000 */   nop
.Lending_8018AB80:
/* EF38C0 8018AB80 0C063087 */  jal         func_ending_8018C21C
/* EF38C4 8018AB84 00000000 */   nop
/* EF38C8 8018AB88 10000007 */  b           .Lending_8018ABA8
/* EF38CC 8018AB8C 00000000 */   nop
.Lending_8018AB90:
/* EF38D0 8018AB90 0C062A0A */  jal         func_ending_8018A828
/* EF38D4 8018AB94 00000000 */   nop
/* EF38D8 8018AB98 10000003 */  b           .Lending_8018ABA8
/* EF38DC 8018AB9C 00000000 */   nop
.Lending_8018ABA0:
/* EF38E0 8018ABA0 0C0649B5 */  jal         func_ending_801926D4
/* EF38E4 8018ABA4 00000000 */   nop
.Lending_8018ABA8:
/* EF38E8 8018ABA8 3C048019 */  lui         $a0, %hi(D_ending_80196D04)
/* EF38EC 8018ABAC 0C063388 */  jal         func_ending_8018CE20
/* EF38F0 8018ABB0 8C846D04 */   lw         $a0, %lo(D_ending_80196D04)($a0)
/* EF38F4 8018ABB4 3C028019 */  lui         $v0, %hi(D_ending_80196D04)
/* EF38F8 8018ABB8 24426D04 */  addiu       $v0, $v0, %lo(D_ending_80196D04)
/* EF38FC 8018ABBC 8C4E0000 */  lw          $t6, 0x0($v0)
/* EF3900 8018ABC0 25CF0001 */  addiu       $t7, $t6, 0x1
/* EF3904 8018ABC4 0C02ED74 */  jal         func_800BB5D0
/* EF3908 8018ABC8 AC4F0000 */   sw         $t7, 0x0($v0)
/* EF390C 8018ABCC 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* EF3910 8018ABD0 0C0015D0 */  jal         Matrix_Pop
/* EF3914 8018ABD4 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* EF3918 8018ABD8 8FBF0034 */  lw          $ra, 0x34($sp)
/* EF391C 8018ABDC 27BD0038 */  addiu       $sp, $sp, 0x38
/* EF3920 8018ABE0 03E00008 */  jr          $ra
/* EF3924 8018ABE4 00000000 */   nop
.section .late_rodata
dlabel jtbl_ending_801965C8
/* EFF308 801965C8 8018AC74 */ .word .Lending_8018AC74
/* EFF30C 801965CC 8018AD6C */ .word .Lending_8018AD6C
/* EFF310 801965D0 8018AE64 */ .word .Lending_8018AE64
/* EFF314 801965D4 8018AF5C */ .word .Lending_8018AF5C
/* EFF318 801965D8 8018B0DC */ .word .Lending_8018B0DC


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018ABE8
/* EF3928 8018ABE8 3C02800E */  lui         $v0, %hi(gControllerPress + 0x12)
/* EF392C 8018ABEC 9442D8AA */  lhu         $v0, %lo(gControllerPress + 0x12)($v0)
/* EF3930 8018ABF0 3C03801A */  lui         $v1, %hi(D_ending_80198584)
/* EF3934 8018ABF4 24638584 */  addiu       $v1, $v1, %lo(D_ending_80198584)
/* EF3938 8018ABF8 304E2000 */  andi        $t6, $v0, 0x2000
/* EF393C 8018ABFC 11C00004 */  beqz        $t6, .Lending_8018AC10
/* EF3940 8018AC00 30480010 */   andi       $t0, $v0, 0x10
/* EF3944 8018AC04 8C6F0000 */  lw          $t7, 0x0($v1)
/* EF3948 8018AC08 39F80001 */  xori        $t8, $t7, 0x1
/* EF394C 8018AC0C AC780000 */  sw          $t8, 0x0($v1)
.Lending_8018AC10:
/* EF3950 8018AC10 3C03801A */  lui         $v1, %hi(D_ending_80198584)
/* EF3954 8018AC14 24638584 */  addiu       $v1, $v1, %lo(D_ending_80198584)
/* EF3958 8018AC18 8C790000 */  lw          $t9, 0x0($v1)
/* EF395C 8018AC1C 13200151 */  beqz        $t9, .Lending_8018B164
/* EF3960 8018AC20 00000000 */   nop
/* EF3964 8018AC24 11000008 */  beqz        $t0, .Lending_8018AC48
/* EF3968 8018AC28 3C03801A */   lui        $v1, %hi(D_ending_80198588)
/* EF396C 8018AC2C 24638588 */  addiu       $v1, $v1, %lo(D_ending_80198588)
/* EF3970 8018AC30 8C690000 */  lw          $t1, 0x0($v1)
/* EF3974 8018AC34 252A0001 */  addiu       $t2, $t1, 0x1
/* EF3978 8018AC38 29410005 */  slti        $at, $t2, 0x5
/* EF397C 8018AC3C 14200002 */  bnez        $at, .Lending_8018AC48
/* EF3980 8018AC40 AC6A0000 */   sw         $t2, 0x0($v1)
/* EF3984 8018AC44 AC600000 */  sw          $zero, 0x0($v1)
.Lending_8018AC48:
/* EF3988 8018AC48 3C03801A */  lui         $v1, %hi(D_ending_80198588)
/* EF398C 8018AC4C 24638588 */  addiu       $v1, $v1, %lo(D_ending_80198588)
/* EF3990 8018AC50 8C6C0000 */  lw          $t4, 0x0($v1)
/* EF3994 8018AC54 2D810005 */  sltiu       $at, $t4, 0x5
/* EF3998 8018AC58 10200142 */  beqz        $at, .Lending_8018B164
/* EF399C 8018AC5C 000C6080 */   sll        $t4, $t4, 2
/* EF39A0 8018AC60 3C018019 */  lui         $at, %hi(jtbl_ending_801965C8)
/* EF39A4 8018AC64 002C0821 */  addu        $at, $at, $t4
/* EF39A8 8018AC68 8C2C65C8 */  lw          $t4, %lo(jtbl_ending_801965C8)($at)
/* EF39AC 8018AC6C 01800008 */  jr          $t4
/* EF39B0 8018AC70 00000000 */   nop
.Lending_8018AC74:
/* EF39B4 8018AC74 3C02800E */  lui         $v0, %hi(gControllerHold + 0x12)
/* EF39B8 8018AC78 9442D892 */  lhu         $v0, %lo(gControllerHold + 0x12)($v0)
/* EF39BC 8018AC7C 304D4000 */  andi        $t5, $v0, 0x4000
/* EF39C0 8018AC80 11A0000A */  beqz        $t5, .Lending_8018ACAC
/* EF39C4 8018AC84 30598000 */   andi       $t9, $v0, 0x8000
/* EF39C8 8018AC88 3C038018 */  lui         $v1, %hi(gFogRed)
/* EF39CC 8018AC8C 24638320 */  addiu       $v1, $v1, %lo(gFogRed)
/* EF39D0 8018AC90 8C6E0000 */  lw          $t6, 0x0($v1)
/* EF39D4 8018AC94 240400FF */  addiu       $a0, $zero, 0xFF
/* EF39D8 8018AC98 25CF0001 */  addiu       $t7, $t6, 0x1
/* EF39DC 8018AC9C 29E10100 */  slti        $at, $t7, 0x100
/* EF39E0 8018ACA0 14200002 */  bnez        $at, .Lending_8018ACAC
/* EF39E4 8018ACA4 AC6F0000 */   sw         $t7, 0x0($v1)
/* EF39E8 8018ACA8 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018ACAC:
/* EF39EC 8018ACAC 3C038018 */  lui         $v1, %hi(gFogRed)
/* EF39F0 8018ACB0 24638320 */  addiu       $v1, $v1, %lo(gFogRed)
/* EF39F4 8018ACB4 13200006 */  beqz        $t9, .Lending_8018ACD0
/* EF39F8 8018ACB8 240400FF */   addiu      $a0, $zero, 0xFF
/* EF39FC 8018ACBC 8C680000 */  lw          $t0, 0x0($v1)
/* EF3A00 8018ACC0 2509FFFF */  addiu       $t1, $t0, -0x1
/* EF3A04 8018ACC4 05210002 */  bgez        $t1, .Lending_8018ACD0
/* EF3A08 8018ACC8 AC690000 */   sw         $t1, 0x0($v1)
/* EF3A0C 8018ACCC AC600000 */  sw          $zero, 0x0($v1)
.Lending_8018ACD0:
/* EF3A10 8018ACD0 304B0002 */  andi        $t3, $v0, 0x2
/* EF3A14 8018ACD4 11600009 */  beqz        $t3, .Lending_8018ACFC
/* EF3A18 8018ACD8 304F0004 */   andi       $t7, $v0, 0x4
/* EF3A1C 8018ACDC 3C038018 */  lui         $v1, %hi(gFogGreen)
/* EF3A20 8018ACE0 24638328 */  addiu       $v1, $v1, %lo(gFogGreen)
/* EF3A24 8018ACE4 8C6C0000 */  lw          $t4, 0x0($v1)
/* EF3A28 8018ACE8 258D0001 */  addiu       $t5, $t4, 0x1
/* EF3A2C 8018ACEC 29A10100 */  slti        $at, $t5, 0x100
/* EF3A30 8018ACF0 14200002 */  bnez        $at, .Lending_8018ACFC
/* EF3A34 8018ACF4 AC6D0000 */   sw         $t5, 0x0($v1)
/* EF3A38 8018ACF8 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018ACFC:
/* EF3A3C 8018ACFC 3C038018 */  lui         $v1, %hi(gFogGreen)
/* EF3A40 8018AD00 11E00006 */  beqz        $t7, .Lending_8018AD1C
/* EF3A44 8018AD04 24638328 */   addiu      $v1, $v1, %lo(gFogGreen)
/* EF3A48 8018AD08 8C780000 */  lw          $t8, 0x0($v1)
/* EF3A4C 8018AD0C 2719FFFF */  addiu       $t9, $t8, -0x1
/* EF3A50 8018AD10 07210002 */  bgez        $t9, .Lending_8018AD1C
/* EF3A54 8018AD14 AC790000 */   sw         $t9, 0x0($v1)
/* EF3A58 8018AD18 AC600000 */  sw          $zero, 0x0($v1)
.Lending_8018AD1C:
/* EF3A5C 8018AD1C 30490008 */  andi        $t1, $v0, 0x8
/* EF3A60 8018AD20 11200009 */  beqz        $t1, .Lending_8018AD48
/* EF3A64 8018AD24 304D0001 */   andi       $t5, $v0, 0x1
/* EF3A68 8018AD28 3C038018 */  lui         $v1, %hi(gFogBlue)
/* EF3A6C 8018AD2C 24638330 */  addiu       $v1, $v1, %lo(gFogBlue)
/* EF3A70 8018AD30 8C6A0000 */  lw          $t2, 0x0($v1)
/* EF3A74 8018AD34 254B0001 */  addiu       $t3, $t2, 0x1
/* EF3A78 8018AD38 29610100 */  slti        $at, $t3, 0x100
/* EF3A7C 8018AD3C 14200002 */  bnez        $at, .Lending_8018AD48
/* EF3A80 8018AD40 AC6B0000 */   sw         $t3, 0x0($v1)
/* EF3A84 8018AD44 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018AD48:
/* EF3A88 8018AD48 3C038018 */  lui         $v1, %hi(gFogBlue)
/* EF3A8C 8018AD4C 11A00105 */  beqz        $t5, .Lending_8018B164
/* EF3A90 8018AD50 24638330 */   addiu      $v1, $v1, %lo(gFogBlue)
/* EF3A94 8018AD54 8C6E0000 */  lw          $t6, 0x0($v1)
/* EF3A98 8018AD58 25CFFFFF */  addiu       $t7, $t6, -0x1
/* EF3A9C 8018AD5C 05E10101 */  bgez        $t7, .Lending_8018B164
/* EF3AA0 8018AD60 AC6F0000 */   sw         $t7, 0x0($v1)
/* EF3AA4 8018AD64 03E00008 */  jr          $ra
/* EF3AA8 8018AD68 AC600000 */   sw         $zero, 0x0($v1)
.Lending_8018AD6C:
/* EF3AAC 8018AD6C 3C02800E */  lui         $v0, %hi(gControllerHold + 0x12)
/* EF3AB0 8018AD70 9442D892 */  lhu         $v0, %lo(gControllerHold + 0x12)($v0)
/* EF3AB4 8018AD74 3C038018 */  lui         $v1, %hi(gLight1R)
/* EF3AB8 8018AD78 24638548 */  addiu       $v1, $v1, %lo(gLight1R)
/* EF3ABC 8018AD7C 30594000 */  andi        $t9, $v0, 0x4000
/* EF3AC0 8018AD80 13200008 */  beqz        $t9, .Lending_8018ADA4
/* EF3AC4 8018AD84 304B8000 */   andi       $t3, $v0, 0x8000
/* EF3AC8 8018AD88 8C680000 */  lw          $t0, 0x0($v1)
/* EF3ACC 8018AD8C 240400FF */  addiu       $a0, $zero, 0xFF
/* EF3AD0 8018AD90 25090001 */  addiu       $t1, $t0, 0x1
/* EF3AD4 8018AD94 29210100 */  slti        $at, $t1, 0x100
/* EF3AD8 8018AD98 14200002 */  bnez        $at, .Lending_8018ADA4
/* EF3ADC 8018AD9C AC690000 */   sw         $t1, 0x0($v1)
/* EF3AE0 8018ADA0 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018ADA4:
/* EF3AE4 8018ADA4 3C038018 */  lui         $v1, %hi(gLight1R)
/* EF3AE8 8018ADA8 24638548 */  addiu       $v1, $v1, %lo(gLight1R)
/* EF3AEC 8018ADAC 11600006 */  beqz        $t3, .Lending_8018ADC8
/* EF3AF0 8018ADB0 240400FF */   addiu      $a0, $zero, 0xFF
/* EF3AF4 8018ADB4 8C6C0000 */  lw          $t4, 0x0($v1)
/* EF3AF8 8018ADB8 258DFFFF */  addiu       $t5, $t4, -0x1
/* EF3AFC 8018ADBC 05A10002 */  bgez        $t5, .Lending_8018ADC8
/* EF3B00 8018ADC0 AC6D0000 */   sw         $t5, 0x0($v1)
/* EF3B04 8018ADC4 AC600000 */  sw          $zero, 0x0($v1)
.Lending_8018ADC8:
/* EF3B08 8018ADC8 304F0002 */  andi        $t7, $v0, 0x2
/* EF3B0C 8018ADCC 11E00009 */  beqz        $t7, .Lending_8018ADF4
/* EF3B10 8018ADD0 30490004 */   andi       $t1, $v0, 0x4
/* EF3B14 8018ADD4 3C038018 */  lui         $v1, %hi(gLight1G)
/* EF3B18 8018ADD8 2463854C */  addiu       $v1, $v1, %lo(gLight1G)
/* EF3B1C 8018ADDC 8C780000 */  lw          $t8, 0x0($v1)
/* EF3B20 8018ADE0 27190001 */  addiu       $t9, $t8, 0x1
/* EF3B24 8018ADE4 2B210100 */  slti        $at, $t9, 0x100
/* EF3B28 8018ADE8 14200002 */  bnez        $at, .Lending_8018ADF4
/* EF3B2C 8018ADEC AC790000 */   sw         $t9, 0x0($v1)
/* EF3B30 8018ADF0 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018ADF4:
/* EF3B34 8018ADF4 3C038018 */  lui         $v1, %hi(gLight1G)
/* EF3B38 8018ADF8 11200006 */  beqz        $t1, .Lending_8018AE14
/* EF3B3C 8018ADFC 2463854C */   addiu      $v1, $v1, %lo(gLight1G)
/* EF3B40 8018AE00 8C6A0000 */  lw          $t2, 0x0($v1)
/* EF3B44 8018AE04 254BFFFF */  addiu       $t3, $t2, -0x1
/* EF3B48 8018AE08 05610002 */  bgez        $t3, .Lending_8018AE14
/* EF3B4C 8018AE0C AC6B0000 */   sw         $t3, 0x0($v1)
/* EF3B50 8018AE10 AC600000 */  sw          $zero, 0x0($v1)
.Lending_8018AE14:
/* EF3B54 8018AE14 304D0008 */  andi        $t5, $v0, 0x8
/* EF3B58 8018AE18 11A00009 */  beqz        $t5, .Lending_8018AE40
/* EF3B5C 8018AE1C 30590001 */   andi       $t9, $v0, 0x1
/* EF3B60 8018AE20 3C038018 */  lui         $v1, %hi(gLight1B)
/* EF3B64 8018AE24 24638550 */  addiu       $v1, $v1, %lo(gLight1B)
/* EF3B68 8018AE28 8C6E0000 */  lw          $t6, 0x0($v1)
/* EF3B6C 8018AE2C 25CF0001 */  addiu       $t7, $t6, 0x1
/* EF3B70 8018AE30 29E10100 */  slti        $at, $t7, 0x100
/* EF3B74 8018AE34 14200002 */  bnez        $at, .Lending_8018AE40
/* EF3B78 8018AE38 AC6F0000 */   sw         $t7, 0x0($v1)
/* EF3B7C 8018AE3C AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018AE40:
/* EF3B80 8018AE40 3C038018 */  lui         $v1, %hi(gLight1B)
/* EF3B84 8018AE44 132000C7 */  beqz        $t9, .Lending_8018B164
/* EF3B88 8018AE48 24638550 */   addiu      $v1, $v1, %lo(gLight1B)
/* EF3B8C 8018AE4C 8C680000 */  lw          $t0, 0x0($v1)
/* EF3B90 8018AE50 2509FFFF */  addiu       $t1, $t0, -0x1
/* EF3B94 8018AE54 052100C3 */  bgez        $t1, .Lending_8018B164
/* EF3B98 8018AE58 AC690000 */   sw         $t1, 0x0($v1)
/* EF3B9C 8018AE5C 03E00008 */  jr          $ra
/* EF3BA0 8018AE60 AC600000 */   sw         $zero, 0x0($v1)
.Lending_8018AE64:
/* EF3BA4 8018AE64 3C02800E */  lui         $v0, %hi(gControllerHold + 0x12)
/* EF3BA8 8018AE68 9442D892 */  lhu         $v0, %lo(gControllerHold + 0x12)($v0)
/* EF3BAC 8018AE6C 3C038018 */  lui         $v1, %hi(gAmbientR)
/* EF3BB0 8018AE70 24638554 */  addiu       $v1, $v1, %lo(gAmbientR)
/* EF3BB4 8018AE74 304B4000 */  andi        $t3, $v0, 0x4000
/* EF3BB8 8018AE78 11600008 */  beqz        $t3, .Lending_8018AE9C
/* EF3BBC 8018AE7C 304F8000 */   andi       $t7, $v0, 0x8000
/* EF3BC0 8018AE80 8C6C0000 */  lw          $t4, 0x0($v1)
/* EF3BC4 8018AE84 240400FF */  addiu       $a0, $zero, 0xFF
/* EF3BC8 8018AE88 258D0001 */  addiu       $t5, $t4, 0x1
/* EF3BCC 8018AE8C 29A10100 */  slti        $at, $t5, 0x100
/* EF3BD0 8018AE90 14200002 */  bnez        $at, .Lending_8018AE9C
/* EF3BD4 8018AE94 AC6D0000 */   sw         $t5, 0x0($v1)
/* EF3BD8 8018AE98 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018AE9C:
/* EF3BDC 8018AE9C 3C038018 */  lui         $v1, %hi(gAmbientR)
/* EF3BE0 8018AEA0 24638554 */  addiu       $v1, $v1, %lo(gAmbientR)
/* EF3BE4 8018AEA4 11E00006 */  beqz        $t7, .Lending_8018AEC0
/* EF3BE8 8018AEA8 240400FF */   addiu      $a0, $zero, 0xFF
/* EF3BEC 8018AEAC 8C780000 */  lw          $t8, 0x0($v1)
/* EF3BF0 8018AEB0 2719FFFF */  addiu       $t9, $t8, -0x1
/* EF3BF4 8018AEB4 07210002 */  bgez        $t9, .Lending_8018AEC0
/* EF3BF8 8018AEB8 AC790000 */   sw         $t9, 0x0($v1)
/* EF3BFC 8018AEBC AC600000 */  sw          $zero, 0x0($v1)
.Lending_8018AEC0:
/* EF3C00 8018AEC0 30490002 */  andi        $t1, $v0, 0x2
/* EF3C04 8018AEC4 11200009 */  beqz        $t1, .Lending_8018AEEC
/* EF3C08 8018AEC8 304D0004 */   andi       $t5, $v0, 0x4
/* EF3C0C 8018AECC 3C038018 */  lui         $v1, %hi(gAmbientG)
/* EF3C10 8018AED0 24638558 */  addiu       $v1, $v1, %lo(gAmbientG)
/* EF3C14 8018AED4 8C6A0000 */  lw          $t2, 0x0($v1)
/* EF3C18 8018AED8 254B0001 */  addiu       $t3, $t2, 0x1
/* EF3C1C 8018AEDC 29610100 */  slti        $at, $t3, 0x100
/* EF3C20 8018AEE0 14200002 */  bnez        $at, .Lending_8018AEEC
/* EF3C24 8018AEE4 AC6B0000 */   sw         $t3, 0x0($v1)
/* EF3C28 8018AEE8 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018AEEC:
/* EF3C2C 8018AEEC 3C038018 */  lui         $v1, %hi(gAmbientG)
/* EF3C30 8018AEF0 11A00006 */  beqz        $t5, .Lending_8018AF0C
/* EF3C34 8018AEF4 24638558 */   addiu      $v1, $v1, %lo(gAmbientG)
/* EF3C38 8018AEF8 8C6E0000 */  lw          $t6, 0x0($v1)
/* EF3C3C 8018AEFC 25CFFFFF */  addiu       $t7, $t6, -0x1
/* EF3C40 8018AF00 05E10002 */  bgez        $t7, .Lending_8018AF0C
/* EF3C44 8018AF04 AC6F0000 */   sw         $t7, 0x0($v1)
/* EF3C48 8018AF08 AC600000 */  sw          $zero, 0x0($v1)
.Lending_8018AF0C:
/* EF3C4C 8018AF0C 30590008 */  andi        $t9, $v0, 0x8
/* EF3C50 8018AF10 13200009 */  beqz        $t9, .Lending_8018AF38
/* EF3C54 8018AF14 304B0001 */   andi       $t3, $v0, 0x1
/* EF3C58 8018AF18 3C038018 */  lui         $v1, %hi(gAmbientB)
/* EF3C5C 8018AF1C 2463855C */  addiu       $v1, $v1, %lo(gAmbientB)
/* EF3C60 8018AF20 8C680000 */  lw          $t0, 0x0($v1)
/* EF3C64 8018AF24 25090001 */  addiu       $t1, $t0, 0x1
/* EF3C68 8018AF28 29210100 */  slti        $at, $t1, 0x100
/* EF3C6C 8018AF2C 14200002 */  bnez        $at, .Lending_8018AF38
/* EF3C70 8018AF30 AC690000 */   sw         $t1, 0x0($v1)
/* EF3C74 8018AF34 AC640000 */  sw          $a0, 0x0($v1)
.Lending_8018AF38:
/* EF3C78 8018AF38 3C038018 */  lui         $v1, %hi(gAmbientB)
/* EF3C7C 8018AF3C 11600089 */  beqz        $t3, .Lending_8018B164
/* EF3C80 8018AF40 2463855C */   addiu      $v1, $v1, %lo(gAmbientB)
/* EF3C84 8018AF44 8C6C0000 */  lw          $t4, 0x0($v1)
/* EF3C88 8018AF48 258DFFFF */  addiu       $t5, $t4, -0x1
/* EF3C8C 8018AF4C 05A10085 */  bgez        $t5, .Lending_8018B164
/* EF3C90 8018AF50 AC6D0000 */   sw         $t5, 0x0($v1)
/* EF3C94 8018AF54 03E00008 */  jr          $ra
/* EF3C98 8018AF58 AC600000 */   sw         $zero, 0x0($v1)
.Lending_8018AF5C:
/* EF3C9C 8018AF5C 3C02800E */  lui         $v0, %hi(gControllerHold + 0x12)
/* EF3CA0 8018AF60 9442D892 */  lhu         $v0, %lo(gControllerHold + 0x12)($v0)
/* EF3CA4 8018AF64 3C038018 */  lui         $v1, %hi(D_801784D0)
/* EF3CA8 8018AF68 246384D0 */  addiu       $v1, $v1, %lo(D_801784D0)
/* EF3CAC 8018AF6C 304F4000 */  andi        $t7, $v0, 0x4000
/* EF3CB0 8018AF70 11E00010 */  beqz        $t7, .Lending_8018AFB4
/* EF3CB4 8018AF74 30588000 */   andi       $t8, $v0, 0x8000
/* EF3CB8 8018AF78 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF3CBC 8018AF7C 44810000 */  mtc1        $at, $fv0
/* EF3CC0 8018AF80 C4640000 */  lwc1        $ft0, 0x0($v1)
/* EF3CC4 8018AF84 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* EF3CC8 8018AF88 44811000 */  mtc1        $at, $fv1
/* EF3CCC 8018AF8C 46002180 */  add.s       $ft1, $ft0, $fv0
/* EF3CD0 8018AF90 E4660000 */  swc1        $ft1, 0x0($v1)
/* EF3CD4 8018AF94 C4680000 */  lwc1        $ft2, 0x0($v1)
/* EF3CD8 8018AF98 4608103C */  c.lt.s      $fv1, $ft2
/* EF3CDC 8018AF9C 00000000 */  nop
/* EF3CE0 8018AFA0 45020005 */  bc1fl       .Lending_8018AFB8
/* EF3CE4 8018AFA4 3C013F80 */   lui        $at, (0x3F800000 >> 16)
/* EF3CE8 8018AFA8 44806000 */  mtc1        $zero, $fa0
/* EF3CEC 8018AFAC 00000000 */  nop
/* EF3CF0 8018AFB0 E46C0000 */  swc1        $fa0, 0x0($v1)
.Lending_8018AFB4:
/* EF3CF4 8018AFB4 3C013F80 */  lui         $at, (0x3F800000 >> 16)
.Lending_8018AFB8:
/* EF3CF8 8018AFB8 44810000 */  mtc1        $at, $fv0
/* EF3CFC 8018AFBC 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* EF3D00 8018AFC0 44811000 */  mtc1        $at, $fv1
/* EF3D04 8018AFC4 3C038018 */  lui         $v1, %hi(D_801784D0)
/* EF3D08 8018AFC8 44806000 */  mtc1        $zero, $fa0
/* EF3D0C 8018AFCC 1300000C */  beqz        $t8, .Lending_8018B000
/* EF3D10 8018AFD0 246384D0 */   addiu      $v1, $v1, %lo(D_801784D0)
/* EF3D14 8018AFD4 C46A0000 */  lwc1        $ft3, 0x0($v1)
/* EF3D18 8018AFD8 3C01C3B4 */  lui         $at, (0xC3B40000 >> 16)
/* EF3D1C 8018AFDC 44817000 */  mtc1        $at, $fa1
/* EF3D20 8018AFE0 46005401 */  sub.s       $ft4, $ft3, $fv0
/* EF3D24 8018AFE4 E4700000 */  swc1        $ft4, 0x0($v1)
/* EF3D28 8018AFE8 C4720000 */  lwc1        $ft5, 0x0($v1)
/* EF3D2C 8018AFEC 460E903C */  c.lt.s      $ft5, $fa1
/* EF3D30 8018AFF0 00000000 */  nop
/* EF3D34 8018AFF4 45020003 */  bc1fl       .Lending_8018B004
/* EF3D38 8018AFF8 3C01C3B4 */   lui        $at, (0xC3B40000 >> 16)
/* EF3D3C 8018AFFC E46C0000 */  swc1        $fa0, 0x0($v1)
.Lending_8018B000:
/* EF3D40 8018B000 3C01C3B4 */  lui         $at, (0xC3B40000 >> 16)
.Lending_8018B004:
/* EF3D44 8018B004 44817000 */  mtc1        $at, $fa1
/* EF3D48 8018B008 30590002 */  andi        $t9, $v0, 0x2
/* EF3D4C 8018B00C 1320000C */  beqz        $t9, .Lending_8018B040
/* EF3D50 8018B010 30480004 */   andi       $t0, $v0, 0x4
/* EF3D54 8018B014 3C038018 */  lui         $v1, %hi(D_801784D4)
/* EF3D58 8018B018 246384D4 */  addiu       $v1, $v1, %lo(D_801784D4)
/* EF3D5C 8018B01C C4640000 */  lwc1        $ft0, 0x0($v1)
/* EF3D60 8018B020 46002180 */  add.s       $ft1, $ft0, $fv0
/* EF3D64 8018B024 E4660000 */  swc1        $ft1, 0x0($v1)
/* EF3D68 8018B028 C4680000 */  lwc1        $ft2, 0x0($v1)
/* EF3D6C 8018B02C 4608103C */  c.lt.s      $fv1, $ft2
/* EF3D70 8018B030 00000000 */  nop
/* EF3D74 8018B034 45000002 */  bc1f        .Lending_8018B040
/* EF3D78 8018B038 00000000 */   nop
/* EF3D7C 8018B03C E46C0000 */  swc1        $fa0, 0x0($v1)
.Lending_8018B040:
/* EF3D80 8018B040 3C038018 */  lui         $v1, %hi(D_801784D4)
/* EF3D84 8018B044 1100000A */  beqz        $t0, .Lending_8018B070
/* EF3D88 8018B048 246384D4 */   addiu      $v1, $v1, %lo(D_801784D4)
/* EF3D8C 8018B04C C46A0000 */  lwc1        $ft3, 0x0($v1)
/* EF3D90 8018B050 46005401 */  sub.s       $ft4, $ft3, $fv0
/* EF3D94 8018B054 E4700000 */  swc1        $ft4, 0x0($v1)
/* EF3D98 8018B058 C4720000 */  lwc1        $ft5, 0x0($v1)
/* EF3D9C 8018B05C 460E903C */  c.lt.s      $ft5, $fa1
/* EF3DA0 8018B060 00000000 */  nop
/* EF3DA4 8018B064 45020003 */  bc1fl       .Lending_8018B074
/* EF3DA8 8018B068 30490008 */   andi       $t1, $v0, 0x8
/* EF3DAC 8018B06C E46C0000 */  swc1        $fa0, 0x0($v1)
.Lending_8018B070:
/* EF3DB0 8018B070 30490008 */  andi        $t1, $v0, 0x8
.Lending_8018B074:
/* EF3DB4 8018B074 1120000C */  beqz        $t1, .Lending_8018B0A8
/* EF3DB8 8018B078 304A0001 */   andi       $t2, $v0, 0x1
/* EF3DBC 8018B07C 3C038018 */  lui         $v1, %hi(D_801784D8)
/* EF3DC0 8018B080 246384D8 */  addiu       $v1, $v1, %lo(D_801784D8)
/* EF3DC4 8018B084 C4640000 */  lwc1        $ft0, 0x0($v1)
/* EF3DC8 8018B088 46002180 */  add.s       $ft1, $ft0, $fv0
/* EF3DCC 8018B08C E4660000 */  swc1        $ft1, 0x0($v1)
/* EF3DD0 8018B090 C4680000 */  lwc1        $ft2, 0x0($v1)
/* EF3DD4 8018B094 4608103C */  c.lt.s      $fv1, $ft2
/* EF3DD8 8018B098 00000000 */  nop
/* EF3DDC 8018B09C 45000002 */  bc1f        .Lending_8018B0A8
/* EF3DE0 8018B0A0 00000000 */   nop
/* EF3DE4 8018B0A4 E46C0000 */  swc1        $fa0, 0x0($v1)
.Lending_8018B0A8:
/* EF3DE8 8018B0A8 3C038018 */  lui         $v1, %hi(D_801784D8)
/* EF3DEC 8018B0AC 1140002D */  beqz        $t2, .Lending_8018B164
/* EF3DF0 8018B0B0 246384D8 */   addiu      $v1, $v1, %lo(D_801784D8)
/* EF3DF4 8018B0B4 C46A0000 */  lwc1        $ft3, 0x0($v1)
/* EF3DF8 8018B0B8 46005401 */  sub.s       $ft4, $ft3, $fv0
/* EF3DFC 8018B0BC E4700000 */  swc1        $ft4, 0x0($v1)
/* EF3E00 8018B0C0 C4720000 */  lwc1        $ft5, 0x0($v1)
/* EF3E04 8018B0C4 460E903C */  c.lt.s      $ft5, $fa1
/* EF3E08 8018B0C8 00000000 */  nop
/* EF3E0C 8018B0CC 45000025 */  bc1f        .Lending_8018B164
/* EF3E10 8018B0D0 00000000 */   nop
/* EF3E14 8018B0D4 03E00008 */  jr          $ra
/* EF3E18 8018B0D8 E46C0000 */   swc1       $fa0, 0x0($v1)
.Lending_8018B0DC:
/* EF3E1C 8018B0DC 304B4000 */  andi        $t3, $v0, 0x4000
/* EF3E20 8018B0E0 1160000D */  beqz        $t3, .Lending_8018B118
/* EF3E24 8018B0E4 30588000 */   andi       $t8, $v0, 0x8000
/* EF3E28 8018B0E8 3C048018 */  lui         $a0, %hi(gFogNear)
/* EF3E2C 8018B0EC 248483D8 */  addiu       $a0, $a0, %lo(gFogNear)
/* EF3E30 8018B0F0 3C058018 */  lui         $a1, %hi(gFogFar)
/* EF3E34 8018B0F4 8C8C0000 */  lw          $t4, 0x0($a0)
/* EF3E38 8018B0F8 24A583DC */  addiu       $a1, $a1, %lo(gFogFar)
/* EF3E3C 8018B0FC 8CA30000 */  lw          $v1, 0x0($a1)
/* EF3E40 8018B100 258D0001 */  addiu       $t5, $t4, 0x1
/* EF3E44 8018B104 AC8D0000 */  sw          $t5, 0x0($a0)
/* EF3E48 8018B108 01A3082A */  slt         $at, $t5, $v1
/* EF3E4C 8018B10C 14200002 */  bnez        $at, .Lending_8018B118
/* EF3E50 8018B110 246FFFFF */   addiu      $t7, $v1, -0x1
/* EF3E54 8018B114 AC8F0000 */  sw          $t7, 0x0($a0)
.Lending_8018B118:
/* EF3E58 8018B118 3C048018 */  lui         $a0, %hi(gFogNear)
/* EF3E5C 8018B11C 3C058018 */  lui         $a1, %hi(gFogFar)
/* EF3E60 8018B120 24A583DC */  addiu       $a1, $a1, %lo(gFogFar)
/* EF3E64 8018B124 13000004 */  beqz        $t8, .Lending_8018B138
/* EF3E68 8018B128 248483D8 */   addiu      $a0, $a0, %lo(gFogNear)
/* EF3E6C 8018B12C 8C990000 */  lw          $t9, 0x0($a0)
/* EF3E70 8018B130 2728FFFF */  addiu       $t0, $t9, -0x1
/* EF3E74 8018B134 AC880000 */  sw          $t0, 0x0($a0)
.Lending_8018B138:
/* EF3E78 8018B138 30490002 */  andi        $t1, $v0, 0x2
/* EF3E7C 8018B13C 11200004 */  beqz        $t1, .Lending_8018B150
/* EF3E80 8018B140 304C0004 */   andi       $t4, $v0, 0x4
/* EF3E84 8018B144 8CAA0000 */  lw          $t2, 0x0($a1)
/* EF3E88 8018B148 254B0001 */  addiu       $t3, $t2, 0x1
/* EF3E8C 8018B14C ACAB0000 */  sw          $t3, 0x0($a1)
.Lending_8018B150:
/* EF3E90 8018B150 11800004 */  beqz        $t4, .Lending_8018B164
/* EF3E94 8018B154 00000000 */   nop
/* EF3E98 8018B158 8CAD0000 */  lw          $t5, 0x0($a1)
/* EF3E9C 8018B15C 25AEFFFF */  addiu       $t6, $t5, -0x1
/* EF3EA0 8018B160 ACAE0000 */  sw          $t6, 0x0($a1)
.Lending_8018B164:
/* EF3EA4 8018B164 03E00008 */  jr          $ra
/* EF3EA8 8018B168 00000000 */   nop
/* EF3EAC 8018B16C 03E00008 */  jr          $ra
/* EF3EB0 8018B170 00000000 */   nop
.section .late_rodata
dlabel D_ending_801965DC
/* EFF31C 801965DC 3C23D70A */ .float 0.009999999776

dlabel D_ending_801965E0
/* EFF320 801965E0 3C23D70A */ .float 0.009999999776

dlabel D_ending_801965E4
/* EFF324 801965E4 3C23D70A */ .float 0.009999999776

dlabel D_ending_801965E8
/* EFF328 801965E8 3C23D70A */ .float 0.009999999776


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018B174
/* EF3EB4 8018B174 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* EF3EB8 8018B178 F7B40008 */  sdc1        $fs0, 0x8($sp)
/* EF3EBC 8018B17C 4480A000 */  mtc1        $zero, $fs0
/* EF3EC0 8018B180 27A70028 */  addiu       $a3, $sp, 0x28
/* EF3EC4 8018B184 27A8001C */  addiu       $t0, $sp, 0x1C
/* EF3EC8 8018B188 8C810000 */  lw          $at, 0x0($a0)
/* EF3ECC 8018B18C 3C02800E */  lui         $v0, %hi(gControllerHold + 0xC)
/* EF3ED0 8018B190 4600A006 */  mov.s       $fv0, $fs0
/* EF3ED4 8018B194 ACE10000 */  sw          $at, 0x0($a3)
/* EF3ED8 8018B198 8C980004 */  lw          $t8, 0x4($a0)
/* EF3EDC 8018B19C 4600A086 */  mov.s       $fv1, $fs0
/* EF3EE0 8018B1A0 4600A306 */  mov.s       $fa0, $fs0
/* EF3EE4 8018B1A4 ACF80004 */  sw          $t8, 0x4($a3)
/* EF3EE8 8018B1A8 8C810008 */  lw          $at, 0x8($a0)
/* EF3EEC 8018B1AC 4600A386 */  mov.s       $fa1, $fs0
/* EF3EF0 8018B1B0 4600A406 */  mov.s       $ft4, $fs0
/* EF3EF4 8018B1B4 ACE10008 */  sw          $at, 0x8($a3)
/* EF3EF8 8018B1B8 8CA10000 */  lw          $at, 0x0($a1)
/* EF3EFC 8018B1BC 4600A486 */  mov.s       $ft5, $fs0
/* EF3F00 8018B1C0 AD010000 */  sw          $at, 0x0($t0)
/* EF3F04 8018B1C4 8CAA0004 */  lw          $t2, 0x4($a1)
/* EF3F08 8018B1C8 AD0A0004 */  sw          $t2, 0x4($t0)
/* EF3F0C 8018B1CC 8CA10008 */  lw          $at, 0x8($a1)
/* EF3F10 8018B1D0 AD010008 */  sw          $at, 0x8($t0)
/* EF3F14 8018B1D4 9442D88C */  lhu         $v0, %lo(gControllerHold + 0xC)($v0)
/* EF3F18 8018B1D8 C4C40000 */  lwc1        $ft0, 0x0($a2)
/* EF3F1C 8018B1DC 30432000 */  andi        $v1, $v0, 0x2000
/* EF3F20 8018B1E0 1060000D */  beqz        $v1, .Lending_8018B218
/* EF3F24 8018B1E4 E7A4004C */   swc1       $ft0, 0x4C($sp)
/* EF3F28 8018B1E8 304B0001 */  andi        $t3, $v0, 0x1
/* EF3F2C 8018B1EC 11600005 */  beqz        $t3, .Lending_8018B204
/* EF3F30 8018B1F0 304C0002 */   andi       $t4, $v0, 0x2
/* EF3F34 8018B1F4 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* EF3F38 8018B1F8 44813000 */  mtc1        $at, $ft1
/* EF3F3C 8018B1FC 00000000 */  nop
/* EF3F40 8018B200 4606A380 */  add.s       $fa1, $fs0, $ft1
.Lending_8018B204:
/* EF3F44 8018B204 11800010 */  beqz        $t4, .Lending_8018B248
/* EF3F48 8018B208 3C0142C8 */   lui        $at, (0x42C80000 >> 16)
/* EF3F4C 8018B20C 44814000 */  mtc1        $at, $ft2
/* EF3F50 8018B210 1000000D */  b           .Lending_8018B248
/* EF3F54 8018B214 46087381 */   sub.s      $fa1, $fa1, $ft2
.Lending_8018B218:
/* EF3F58 8018B218 304D0001 */  andi        $t5, $v0, 0x1
/* EF3F5C 8018B21C 11A00005 */  beqz        $t5, .Lending_8018B234
/* EF3F60 8018B220 304F0002 */   andi       $t7, $v0, 0x2
/* EF3F64 8018B224 3C014120 */  lui         $at, (0x41200000 >> 16)
/* EF3F68 8018B228 44815000 */  mtc1        $at, $ft3
/* EF3F6C 8018B22C 00000000 */  nop
/* EF3F70 8018B230 460AA380 */  add.s       $fa1, $fs0, $ft3
.Lending_8018B234:
/* EF3F74 8018B234 11E00004 */  beqz        $t7, .Lending_8018B248
/* EF3F78 8018B238 3C014120 */   lui        $at, (0x41200000 >> 16)
/* EF3F7C 8018B23C 44812000 */  mtc1        $at, $ft0
/* EF3F80 8018B240 00000000 */  nop
/* EF3F84 8018B244 46047381 */  sub.s       $fa1, $fa1, $ft0
.Lending_8018B248:
/* EF3F88 8018B248 1060000D */  beqz        $v1, .Lending_8018B280
/* EF3F8C 8018B24C 304D4000 */   andi       $t5, $v0, 0x4000
/* EF3F90 8018B250 304E0008 */  andi        $t6, $v0, 0x8
/* EF3F94 8018B254 11C00005 */  beqz        $t6, .Lending_8018B26C
/* EF3F98 8018B258 30580004 */   andi       $t8, $v0, 0x4
/* EF3F9C 8018B25C 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* EF3FA0 8018B260 44813000 */  mtc1        $at, $ft1
/* EF3FA4 8018B264 00000000 */  nop
/* EF3FA8 8018B268 4606A300 */  add.s       $fa0, $fs0, $ft1
.Lending_8018B26C:
/* EF3FAC 8018B26C 13000010 */  beqz        $t8, .Lending_8018B2B0
/* EF3FB0 8018B270 3C0142C8 */   lui        $at, (0x42C80000 >> 16)
/* EF3FB4 8018B274 44814000 */  mtc1        $at, $ft2
/* EF3FB8 8018B278 1000000D */  b           .Lending_8018B2B0
/* EF3FBC 8018B27C 46086301 */   sub.s      $fa0, $fa0, $ft2
.Lending_8018B280:
/* EF3FC0 8018B280 30490008 */  andi        $t1, $v0, 0x8
/* EF3FC4 8018B284 11200005 */  beqz        $t1, .Lending_8018B29C
/* EF3FC8 8018B288 30590004 */   andi       $t9, $v0, 0x4
/* EF3FCC 8018B28C 3C014120 */  lui         $at, (0x41200000 >> 16)
/* EF3FD0 8018B290 44815000 */  mtc1        $at, $ft3
/* EF3FD4 8018B294 00000000 */  nop
/* EF3FD8 8018B298 460AA300 */  add.s       $fa0, $fs0, $ft3
.Lending_8018B29C:
/* EF3FDC 8018B29C 13200004 */  beqz        $t9, .Lending_8018B2B0
/* EF3FE0 8018B2A0 3C014120 */   lui        $at, (0x41200000 >> 16)
/* EF3FE4 8018B2A4 44812000 */  mtc1        $at, $ft0
/* EF3FE8 8018B2A8 00000000 */  nop
/* EF3FEC 8018B2AC 46046301 */  sub.s       $fa0, $fa0, $ft0
.Lending_8018B2B0:
/* EF3FF0 8018B2B0 10600007 */  beqz        $v1, .Lending_8018B2D0
/* EF3FF4 8018B2B4 304F8000 */   andi       $t7, $v0, 0x8000
/* EF3FF8 8018B2B8 3C03800E */  lui         $v1, %hi(gControllerPress)
/* EF3FFC 8018B2BC 2463D898 */  addiu       $v1, $v1, %lo(gControllerPress)
/* EF4000 8018B2C0 806A000F */  lb          $t2, 0xF($v1)
/* EF4004 8018B2C4 448A3000 */  mtc1        $t2, $ft1
/* EF4008 8018B2C8 1000000F */  b           .Lending_8018B308
/* EF400C 8018B2CC 468030A0 */   cvt.s.w    $fv1, $ft1
.Lending_8018B2D0:
/* EF4010 8018B2D0 3C03800E */  lui         $v1, %hi(gControllerPress)
/* EF4014 8018B2D4 2463D898 */  addiu       $v1, $v1, %lo(gControllerPress)
/* EF4018 8018B2D8 806B000F */  lb          $t3, 0xF($v1)
/* EF401C 8018B2DC 806C000E */  lb          $t4, 0xE($v1)
/* EF4020 8018B2E0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* EF4024 8018B2E4 448B4000 */  mtc1        $t3, $ft2
/* EF4028 8018B2E8 448C3000 */  mtc1        $t4, $ft1
/* EF402C 8018B2EC 44812000 */  mtc1        $at, $ft0
/* EF4030 8018B2F0 468042A0 */  cvt.s.w     $ft3, $ft2
/* EF4034 8018B2F4 46803220 */  cvt.s.w     $ft2, $ft1
/* EF4038 8018B2F8 46045483 */  div.s       $ft5, $ft3, $ft0
/* EF403C 8018B2FC 44815000 */  mtc1        $at, $ft3
/* EF4040 8018B300 00000000 */  nop
/* EF4044 8018B304 460A4403 */  div.s       $ft4, $ft2, $ft3
.Lending_8018B308:
/* EF4048 8018B308 11A00004 */  beqz        $t5, .Lending_8018B31C
/* EF404C 8018B30C C7A8004C */   lwc1       $ft2, 0x4C($sp)
/* EF4050 8018B310 3C018019 */  lui         $at, %hi(D_ending_801965DC)
/* EF4054 8018B314 C42465DC */  lwc1        $ft0, %lo(D_ending_801965DC)($at)
/* EF4058 8018B318 4604A000 */  add.s       $fv0, $fs0, $ft0
.Lending_8018B31C:
/* EF405C 8018B31C 11E00003 */  beqz        $t7, .Lending_8018B32C
/* EF4060 8018B320 3C018019 */   lui        $at, %hi(D_ending_801965E0)
/* EF4064 8018B324 C42665E0 */  lwc1        $ft1, %lo(D_ending_801965E0)($at)
/* EF4068 8018B328 46060001 */  sub.s       $fv0, $fv0, $ft1
.Lending_8018B32C:
/* EF406C 8018B32C 46004280 */  add.s       $ft3, $ft2, $fv0
/* EF4070 8018B330 3C018019 */  lui         $at, %hi(D_ending_801965E4)
/* EF4074 8018B334 C42465E4 */  lwc1        $ft0, %lo(D_ending_801965E4)($at)
/* EF4078 8018B338 3C018019 */  lui         $at, %hi(D_ending_801965E8)
/* EF407C 8018B33C E7AA004C */  swc1        $ft3, 0x4C($sp)
/* EF4080 8018B340 4604503C */  c.lt.s      $ft3, $ft0
/* EF4084 8018B344 00000000 */  nop
/* EF4088 8018B348 45020004 */  bc1fl       .Lending_8018B35C
/* EF408C 8018B34C C7A80028 */   lwc1       $ft2, 0x28($sp)
/* EF4090 8018B350 C42665E8 */  lwc1        $ft1, %lo(D_ending_801965E8)($at)
/* EF4094 8018B354 E7A6004C */  swc1        $ft1, 0x4C($sp)
/* EF4098 8018B358 C7A80028 */  lwc1        $ft2, 0x28($sp)
.Lending_8018B35C:
/* EF409C 8018B35C C7A4002C */  lwc1        $ft0, 0x2C($sp)
/* EF40A0 8018B360 460E4280 */  add.s       $ft3, $ft2, $fa1
/* EF40A4 8018B364 C7A80030 */  lwc1        $ft2, 0x30($sp)
/* EF40A8 8018B368 460C2180 */  add.s       $ft1, $ft0, $fa0
/* EF40AC 8018B36C E7AA0028 */  swc1        $ft3, 0x28($sp)
/* EF40B0 8018B370 C7A4001C */  lwc1        $ft0, 0x1C($sp)
/* EF40B4 8018B374 46024281 */  sub.s       $ft3, $ft2, $fv1
/* EF40B8 8018B378 C7A80020 */  lwc1        $ft2, 0x20($sp)
/* EF40BC 8018B37C E7A6002C */  swc1        $ft1, 0x2C($sp)
/* EF40C0 8018B380 46122180 */  add.s       $ft1, $ft0, $ft5
/* EF40C4 8018B384 E7AA0030 */  swc1        $ft3, 0x30($sp)
/* EF40C8 8018B388 46104280 */  add.s       $ft3, $ft2, $ft4
/* EF40CC 8018B38C E7A6001C */  swc1        $ft1, 0x1C($sp)
/* EF40D0 8018B390 E7AA0020 */  swc1        $ft3, 0x20($sp)
/* EF40D4 8018B394 8CE10000 */  lw          $at, 0x0($a3)
/* EF40D8 8018B398 AC810000 */  sw          $at, 0x0($a0)
/* EF40DC 8018B39C 8CE90004 */  lw          $t1, 0x4($a3)
/* EF40E0 8018B3A0 AC890004 */  sw          $t1, 0x4($a0)
/* EF40E4 8018B3A4 8CE10008 */  lw          $at, 0x8($a3)
/* EF40E8 8018B3A8 AC810008 */  sw          $at, 0x8($a0)
/* EF40EC 8018B3AC 8D010000 */  lw          $at, 0x0($t0)
/* EF40F0 8018B3B0 ACA10000 */  sw          $at, 0x0($a1)
/* EF40F4 8018B3B4 8D0B0004 */  lw          $t3, 0x4($t0)
/* EF40F8 8018B3B8 ACAB0004 */  sw          $t3, 0x4($a1)
/* EF40FC 8018B3BC 8D010008 */  lw          $at, 0x8($t0)
/* EF4100 8018B3C0 ACA10008 */  sw          $at, 0x8($a1)
/* EF4104 8018B3C4 C7A4004C */  lwc1        $ft0, 0x4C($sp)
/* EF4108 8018B3C8 E4C40000 */  swc1        $ft0, 0x0($a2)
/* EF410C 8018B3CC D7B40008 */  ldc1        $fs0, 0x8($sp)
/* EF4110 8018B3D0 03E00008 */  jr          $ra
/* EF4114 8018B3D4 27BD0050 */   addiu      $sp, $sp, 0x50
glabel func_ending_8018B3D8
/* EF4118 8018B3D8 03E00008 */  jr          $ra
/* EF411C 8018B3DC 00000000 */   nop
/* EF4120 8018B3E0 03E00008 */  jr          $ra
/* EF4124 8018B3E4 00000000 */   nop
glabel func_ending_8018B3E8
/* EF4128 8018B3E8 27BDFFB0 */  addiu       $sp, $sp, -0x50
/* EF412C 8018B3EC AFBF0014 */  sw          $ra, 0x14($sp)
/* EF4130 8018B3F0 3C0F8019 */  lui         $t7, %hi(D_ending_80192C40)
/* EF4134 8018B3F4 25EF2C40 */  addiu       $t7, $t7, %lo(D_ending_80192C40)
/* EF4138 8018B3F8 8DE10000 */  lw          $at, 0x0($t7)
/* EF413C 8018B3FC 8DE80004 */  lw          $t0, 0x4($t7)
/* EF4140 8018B400 27AE0038 */  addiu       $t6, $sp, 0x38
/* EF4144 8018B404 ADC10000 */  sw          $at, 0x0($t6)
/* EF4148 8018B408 ADC80004 */  sw          $t0, 0x4($t6)
/* EF414C 8018B40C 8DE8000C */  lw          $t0, 0xC($t7)
/* EF4150 8018B410 8DE10008 */  lw          $at, 0x8($t7)
/* EF4154 8018B414 3C0A8019 */  lui         $t2, %hi(D_ending_80192C58)
/* EF4158 8018B418 ADC8000C */  sw          $t0, 0xC($t6)
/* EF415C 8018B41C ADC10008 */  sw          $at, 0x8($t6)
/* EF4160 8018B420 8DE10010 */  lw          $at, 0x10($t7)
/* EF4164 8018B424 8DE80014 */  lw          $t0, 0x14($t7)
/* EF4168 8018B428 254A2C58 */  addiu       $t2, $t2, %lo(D_ending_80192C58)
/* EF416C 8018B42C ADC10010 */  sw          $at, 0x10($t6)
/* EF4170 8018B430 ADC80014 */  sw          $t0, 0x14($t6)
/* EF4174 8018B434 8D4D0004 */  lw          $t5, 0x4($t2)
/* EF4178 8018B438 8D410000 */  lw          $at, 0x0($t2)
/* EF417C 8018B43C 27A90020 */  addiu       $t1, $sp, 0x20
/* EF4180 8018B440 AD2D0004 */  sw          $t5, 0x4($t1)
/* EF4184 8018B444 AD210000 */  sw          $at, 0x0($t1)
/* EF4188 8018B448 8D410008 */  lw          $at, 0x8($t2)
/* EF418C 8018B44C 8D4D000C */  lw          $t5, 0xC($t2)
/* EF4190 8018B450 AD210008 */  sw          $at, 0x8($t1)
/* EF4194 8018B454 AD2D000C */  sw          $t5, 0xC($t1)
/* EF4198 8018B458 8D4D0014 */  lw          $t5, 0x14($t2)
/* EF419C 8018B45C 8D410010 */  lw          $at, 0x10($t2)
/* EF41A0 8018B460 AD2D0014 */  sw          $t5, 0x14($t1)
/* EF41A4 8018B464 AD210010 */  sw          $at, 0x10($t1)
/* EF41A8 8018B468 AFA50054 */  sw          $a1, 0x54($sp)
/* EF41AC 8018B46C 0C0184F1 */  jal         Actor_Initialize
/* EF41B0 8018B470 AFA40050 */   sw         $a0, 0x50($sp)
/* EF41B4 8018B474 8FA50054 */  lw          $a1, 0x54($sp)
/* EF41B8 8018B478 8FA40050 */  lw          $a0, 0x50($sp)
/* EF41BC 8018B47C 24190002 */  addiu       $t9, $zero, 0x2
/* EF41C0 8018B480 00051880 */  sll         $v1, $a1, 2
/* EF41C4 8018B484 00651823 */  subu        $v1, $v1, $a1
/* EF41C8 8018B488 00031880 */  sll         $v1, $v1, 2
/* EF41CC 8018B48C 27B80020 */  addiu       $t8, $sp, 0x20
/* EF41D0 8018B490 00781021 */  addu        $v0, $v1, $t8
/* EF41D4 8018B494 A0990000 */  sb          $t9, 0x0($a0)
/* EF41D8 8018B498 A4800002 */  sh          $zero, 0x2($a0)
/* EF41DC 8018B49C A48500B8 */  sh          $a1, 0xB8($a0)
/* EF41E0 8018B4A0 C4440000 */  lwc1        $ft0, 0x0($v0)
/* EF41E4 8018B4A4 27AE0038 */  addiu       $t6, $sp, 0x38
/* EF41E8 8018B4A8 006E7821 */  addu        $t7, $v1, $t6
/* EF41EC 8018B4AC E48400F4 */  swc1        $ft0, 0xF4($a0)
/* EF41F0 8018B4B0 C4460004 */  lwc1        $ft1, 0x4($v0)
/* EF41F4 8018B4B4 E48600F8 */  swc1        $ft1, 0xF8($a0)
/* EF41F8 8018B4B8 C4480008 */  lwc1        $ft2, 0x8($v0)
/* EF41FC 8018B4BC E48800FC */  swc1        $ft2, 0xFC($a0)
/* EF4200 8018B4C0 8DE10000 */  lw          $at, 0x0($t7)
/* EF4204 8018B4C4 AC810004 */  sw          $at, 0x4($a0)
/* EF4208 8018B4C8 8DEC0004 */  lw          $t4, 0x4($t7)
/* EF420C 8018B4CC AC8C0008 */  sw          $t4, 0x8($a0)
/* EF4210 8018B4D0 8DE10008 */  lw          $at, 0x8($t7)
/* EF4214 8018B4D4 14A0000E */  bnez        $a1, .Lending_8018B510
/* EF4218 8018B4D8 AC81000C */   sw         $at, 0xC($a0)
/* EF421C 8018B4DC 3C014416 */  lui         $at, (0x44160000 >> 16)
/* EF4220 8018B4E0 44818000 */  mtc1        $at, $ft4
/* EF4224 8018B4E4 C48A0004 */  lwc1        $ft3, 0x4($a0)
/* EF4228 8018B4E8 3C014316 */  lui         $at, (0x43160000 >> 16)
/* EF422C 8018B4EC 44813000 */  mtc1        $at, $ft1
/* EF4230 8018B4F0 C4840008 */  lwc1        $ft0, 0x8($a0)
/* EF4234 8018B4F4 46105481 */  sub.s       $ft5, $ft3, $ft4
/* EF4238 8018B4F8 3C0140C0 */  lui         $at, (0x40C00000 >> 16)
/* EF423C 8018B4FC 44815000 */  mtc1        $at, $ft3
/* EF4240 8018B500 46062200 */  add.s       $ft2, $ft0, $ft1
/* EF4244 8018B504 E4920004 */  swc1        $ft5, 0x4($a0)
/* EF4248 8018B508 E48A0114 */  swc1        $ft3, 0x114($a0)
/* EF424C 8018B50C E4880008 */  swc1        $ft2, 0x8($a0)
.Lending_8018B510:
/* EF4250 8018B510 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF4254 8018B514 44818000 */  mtc1        $at, $ft4
/* EF4258 8018B518 00000000 */  nop
/* EF425C 8018B51C E4900110 */  swc1        $ft4, 0x110($a0)
/* EF4260 8018B520 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF4264 8018B524 03E00008 */  jr          $ra
/* EF4268 8018B528 27BD0050 */   addiu      $sp, $sp, 0x50
glabel func_ending_8018B52C
/* EF426C 8018B52C 27BDFF98 */  addiu       $sp, $sp, -0x68
/* EF4270 8018B530 AFBF0014 */  sw          $ra, 0x14($sp)
/* EF4274 8018B534 AFA5006C */  sw          $a1, 0x6C($sp)
/* EF4278 8018B538 3C0F8019 */  lui         $t7, %hi(D_ending_80192C70)
/* EF427C 8018B53C 25EF2C70 */  addiu       $t7, $t7, %lo(D_ending_80192C70)
/* EF4280 8018B540 25E80024 */  addiu       $t0, $t7, 0x24
/* EF4284 8018B544 27AE0044 */  addiu       $t6, $sp, 0x44
.Lending_8018B548:
/* EF4288 8018B548 8DE10000 */  lw          $at, 0x0($t7)
/* EF428C 8018B54C 25EF000C */  addiu       $t7, $t7, 0xC
/* EF4290 8018B550 25CE000C */  addiu       $t6, $t6, 0xC
/* EF4294 8018B554 ADC1FFF4 */  sw          $at, -0xC($t6)
/* EF4298 8018B558 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF429C 8018B55C ADC1FFF8 */  sw          $at, -0x8($t6)
/* EF42A0 8018B560 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF42A4 8018B564 15E8FFF8 */  bne         $t7, $t0, .Lending_8018B548
/* EF42A8 8018B568 ADC1FFFC */   sw         $at, -0x4($t6)
/* EF42AC 8018B56C 3C0A8019 */  lui         $t2, %hi(D_ending_80192C94)
/* EF42B0 8018B570 254A2C94 */  addiu       $t2, $t2, %lo(D_ending_80192C94)
/* EF42B4 8018B574 254D0024 */  addiu       $t5, $t2, 0x24
/* EF42B8 8018B578 27A90020 */  addiu       $t1, $sp, 0x20
.Lending_8018B57C:
/* EF42BC 8018B57C 8D410000 */  lw          $at, 0x0($t2)
/* EF42C0 8018B580 254A000C */  addiu       $t2, $t2, 0xC
/* EF42C4 8018B584 2529000C */  addiu       $t1, $t1, 0xC
/* EF42C8 8018B588 AD21FFF4 */  sw          $at, -0xC($t1)
/* EF42CC 8018B58C 8D41FFF8 */  lw          $at, -0x8($t2)
/* EF42D0 8018B590 AD21FFF8 */  sw          $at, -0x8($t1)
/* EF42D4 8018B594 8D41FFFC */  lw          $at, -0x4($t2)
/* EF42D8 8018B598 154DFFF8 */  bne         $t2, $t5, .Lending_8018B57C
/* EF42DC 8018B59C AD21FFFC */   sw         $at, -0x4($t1)
/* EF42E0 8018B5A0 0C0184F1 */  jal         Actor_Initialize
/* EF42E4 8018B5A4 AFA40068 */   sw         $a0, 0x68($sp)
/* EF42E8 8018B5A8 8FA40068 */  lw          $a0, 0x68($sp)
/* EF42EC 8018B5AC 24190002 */  addiu       $t9, $zero, 0x2
/* EF42F0 8018B5B0 24180001 */  addiu       $t8, $zero, 0x1
/* EF42F4 8018B5B4 A0990000 */  sb          $t9, 0x0($a0)
/* EF42F8 8018B5B8 A4980002 */  sh          $t8, 0x2($a0)
/* EF42FC 8018B5BC 8FA3006C */  lw          $v1, 0x6C($sp)
/* EF4300 8018B5C0 27AF0044 */  addiu       $t7, $sp, 0x44
/* EF4304 8018B5C4 27AD0020 */  addiu       $t5, $sp, 0x20
/* EF4308 8018B5C8 00034080 */  sll         $t0, $v1, 2
/* EF430C 8018B5CC 01034023 */  subu        $t0, $t0, $v1
/* EF4310 8018B5D0 00084080 */  sll         $t0, $t0, 2
/* EF4314 8018B5D4 010F7021 */  addu        $t6, $t0, $t7
/* EF4318 8018B5D8 8DC10000 */  lw          $at, 0x0($t6)
/* EF431C 8018B5DC 010D1021 */  addu        $v0, $t0, $t5
/* EF4320 8018B5E0 AC810004 */  sw          $at, 0x4($a0)
/* EF4324 8018B5E4 8DCB0004 */  lw          $t3, 0x4($t6)
/* EF4328 8018B5E8 AC8B0008 */  sw          $t3, 0x8($a0)
/* EF432C 8018B5EC 8DC10008 */  lw          $at, 0x8($t6)
/* EF4330 8018B5F0 AC81000C */  sw          $at, 0xC($a0)
/* EF4334 8018B5F4 C4440000 */  lwc1        $ft0, 0x0($v0)
/* EF4338 8018B5F8 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF433C 8018B5FC 44815000 */  mtc1        $at, $ft3
/* EF4340 8018B600 E48400F4 */  swc1        $ft0, 0xF4($a0)
/* EF4344 8018B604 C4460004 */  lwc1        $ft1, 0x4($v0)
/* EF4348 8018B608 E48600F8 */  swc1        $ft1, 0xF8($a0)
/* EF434C 8018B60C C4480008 */  lwc1        $ft2, 0x8($v0)
/* EF4350 8018B610 E48A0110 */  swc1        $ft3, 0x110($a0)
/* EF4354 8018B614 E48800FC */  swc1        $ft2, 0xFC($a0)
/* EF4358 8018B618 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF435C 8018B61C 03E00008 */  jr          $ra
/* EF4360 8018B620 27BD0068 */   addiu      $sp, $sp, 0x68
glabel func_ending_8018B624
/* EF4364 8018B624 27BDFFD0 */  addiu       $sp, $sp, -0x30
/* EF4368 8018B628 AFBF0014 */  sw          $ra, 0x14($sp)
/* EF436C 8018B62C 3C0F8019 */  lui         $t7, %hi(D_ending_80192CB8)
/* EF4370 8018B630 25EF2CB8 */  addiu       $t7, $t7, %lo(D_ending_80192CB8)
/* EF4374 8018B634 8DE10000 */  lw          $at, 0x0($t7)
/* EF4378 8018B638 27AE0024 */  addiu       $t6, $sp, 0x24
/* EF437C 8018B63C 8DE80004 */  lw          $t0, 0x4($t7)
/* EF4380 8018B640 ADC10000 */  sw          $at, 0x0($t6)
/* EF4384 8018B644 8DE10008 */  lw          $at, 0x8($t7)
/* EF4388 8018B648 3C0A8019 */  lui         $t2, %hi(D_ending_80192CC4)
/* EF438C 8018B64C 254A2CC4 */  addiu       $t2, $t2, %lo(D_ending_80192CC4)
/* EF4390 8018B650 ADC80004 */  sw          $t0, 0x4($t6)
/* EF4394 8018B654 ADC10008 */  sw          $at, 0x8($t6)
/* EF4398 8018B658 8D410000 */  lw          $at, 0x0($t2)
/* EF439C 8018B65C 27A90018 */  addiu       $t1, $sp, 0x18
/* EF43A0 8018B660 8D4D0004 */  lw          $t5, 0x4($t2)
/* EF43A4 8018B664 AD210000 */  sw          $at, 0x0($t1)
/* EF43A8 8018B668 8D410008 */  lw          $at, 0x8($t2)
/* EF43AC 8018B66C AD2D0004 */  sw          $t5, 0x4($t1)
/* EF43B0 8018B670 AD210008 */  sw          $at, 0x8($t1)
/* EF43B4 8018B674 0C0184F1 */  jal         Actor_Initialize
/* EF43B8 8018B678 AFA40030 */   sw         $a0, 0x30($sp)
/* EF43BC 8018B67C 8FA40030 */  lw          $a0, 0x30($sp)
/* EF43C0 8018B680 24020002 */  addiu       $v0, $zero, 0x2
/* EF43C4 8018B684 27B90024 */  addiu       $t9, $sp, 0x24
/* EF43C8 8018B688 A0820000 */  sb          $v0, 0x0($a0)
/* EF43CC 8018B68C A4820002 */  sh          $v0, 0x2($a0)
/* EF43D0 8018B690 8F210000 */  lw          $at, 0x0($t9)
/* EF43D4 8018B694 AC810004 */  sw          $at, 0x4($a0)
/* EF43D8 8018B698 8F2E0004 */  lw          $t6, 0x4($t9)
/* EF43DC 8018B69C AC8E0008 */  sw          $t6, 0x8($a0)
/* EF43E0 8018B6A0 8F210008 */  lw          $at, 0x8($t9)
/* EF43E4 8018B6A4 AC81000C */  sw          $at, 0xC($a0)
/* EF43E8 8018B6A8 C7A40018 */  lwc1        $ft0, 0x18($sp)
/* EF43EC 8018B6AC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF43F0 8018B6B0 44815000 */  mtc1        $at, $ft3
/* EF43F4 8018B6B4 E48400F4 */  swc1        $ft0, 0xF4($a0)
/* EF43F8 8018B6B8 C7A6001C */  lwc1        $ft1, 0x1C($sp)
/* EF43FC 8018B6BC E48600F8 */  swc1        $ft1, 0xF8($a0)
/* EF4400 8018B6C0 C7A80020 */  lwc1        $ft2, 0x20($sp)
/* EF4404 8018B6C4 E48A0110 */  swc1        $ft3, 0x110($a0)
/* EF4408 8018B6C8 E48800FC */  swc1        $ft2, 0xFC($a0)
/* EF440C 8018B6CC 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF4410 8018B6D0 03E00008 */  jr          $ra
/* EF4414 8018B6D4 27BD0030 */   addiu      $sp, $sp, 0x30
glabel func_ending_8018B6D8
/* EF4418 8018B6D8 27BDFF38 */  addiu       $sp, $sp, -0xC8
/* EF441C 8018B6DC AFBF0014 */  sw          $ra, 0x14($sp)
/* EF4420 8018B6E0 3C0F8019 */  lui         $t7, %hi(D_ending_80192CD0)
/* EF4424 8018B6E4 25EF2CD0 */  addiu       $t7, $t7, %lo(D_ending_80192CD0)
/* EF4428 8018B6E8 25E80048 */  addiu       $t0, $t7, 0x48
/* EF442C 8018B6EC 27AE0080 */  addiu       $t6, $sp, 0x80
.Lending_8018B6F0:
/* EF4430 8018B6F0 8DE10000 */  lw          $at, 0x0($t7)
/* EF4434 8018B6F4 25EF000C */  addiu       $t7, $t7, 0xC
/* EF4438 8018B6F8 25CE000C */  addiu       $t6, $t6, 0xC
/* EF443C 8018B6FC ADC1FFF4 */  sw          $at, -0xC($t6)
/* EF4440 8018B700 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF4444 8018B704 ADC1FFF8 */  sw          $at, -0x8($t6)
/* EF4448 8018B708 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF444C 8018B70C 15E8FFF8 */  bne         $t7, $t0, .Lending_8018B6F0
/* EF4450 8018B710 ADC1FFFC */   sw         $at, -0x4($t6)
/* EF4454 8018B714 3C0A8019 */  lui         $t2, %hi(D_ending_80192D18)
/* EF4458 8018B718 254A2D18 */  addiu       $t2, $t2, %lo(D_ending_80192D18)
/* EF445C 8018B71C 254D0048 */  addiu       $t5, $t2, 0x48
/* EF4460 8018B720 27A90038 */  addiu       $t1, $sp, 0x38
.Lending_8018B724:
/* EF4464 8018B724 8D410000 */  lw          $at, 0x0($t2)
/* EF4468 8018B728 254A000C */  addiu       $t2, $t2, 0xC
/* EF446C 8018B72C 2529000C */  addiu       $t1, $t1, 0xC
/* EF4470 8018B730 AD21FFF4 */  sw          $at, -0xC($t1)
/* EF4474 8018B734 8D41FFF8 */  lw          $at, -0x8($t2)
/* EF4478 8018B738 AD21FFF8 */  sw          $at, -0x8($t1)
/* EF447C 8018B73C 8D41FFFC */  lw          $at, -0x4($t2)
/* EF4480 8018B740 154DFFF8 */  bne         $t2, $t5, .Lending_8018B724
/* EF4484 8018B744 AD21FFFC */   sw         $at, -0x4($t1)
/* EF4488 8018B748 3C188019 */  lui         $t8, %hi(D_ending_80192D60)
/* EF448C 8018B74C 27182D60 */  addiu       $t8, $t8, %lo(D_ending_80192D60)
/* EF4490 8018B750 8F010000 */  lw          $at, 0x0($t8)
/* EF4494 8018B754 8F0E0004 */  lw          $t6, 0x4($t8)
/* EF4498 8018B758 27B90020 */  addiu       $t9, $sp, 0x20
/* EF449C 8018B75C AF210000 */  sw          $at, 0x0($t9)
/* EF44A0 8018B760 AF2E0004 */  sw          $t6, 0x4($t9)
/* EF44A4 8018B764 8F0E000C */  lw          $t6, 0xC($t8)
/* EF44A8 8018B768 8F010008 */  lw          $at, 0x8($t8)
/* EF44AC 8018B76C AF2E000C */  sw          $t6, 0xC($t9)
/* EF44B0 8018B770 AF210008 */  sw          $at, 0x8($t9)
/* EF44B4 8018B774 8F010010 */  lw          $at, 0x10($t8)
/* EF44B8 8018B778 8F0E0014 */  lw          $t6, 0x14($t8)
/* EF44BC 8018B77C AF210010 */  sw          $at, 0x10($t9)
/* EF44C0 8018B780 AF2E0014 */  sw          $t6, 0x14($t9)
/* EF44C4 8018B784 AFA500CC */  sw          $a1, 0xCC($sp)
/* EF44C8 8018B788 0C0184F1 */  jal         Actor_Initialize
/* EF44CC 8018B78C AFA400C8 */   sw         $a0, 0xC8($sp)
/* EF44D0 8018B790 8FA500CC */  lw          $a1, 0xCC($sp)
/* EF44D4 8018B794 8FA400C8 */  lw          $a0, 0xC8($sp)
/* EF44D8 8018B798 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF44DC 8018B79C 00051880 */  sll         $v1, $a1, 2
/* EF44E0 8018B7A0 00651823 */  subu        $v1, $v1, $a1
/* EF44E4 8018B7A4 240C0002 */  addiu       $t4, $zero, 0x2
/* EF44E8 8018B7A8 240B0003 */  addiu       $t3, $zero, 0x3
/* EF44EC 8018B7AC 00031880 */  sll         $v1, $v1, 2
/* EF44F0 8018B7B0 27AD0080 */  addiu       $t5, $sp, 0x80
/* EF44F4 8018B7B4 44810000 */  mtc1        $at, $fv0
/* EF44F8 8018B7B8 006D5021 */  addu        $t2, $v1, $t5
/* EF44FC 8018B7BC A08C0000 */  sb          $t4, 0x0($a0)
/* EF4500 8018B7C0 A48B0002 */  sh          $t3, 0x2($a0)
/* EF4504 8018B7C4 8D410000 */  lw          $at, 0x0($t2)
/* EF4508 8018B7C8 27A80038 */  addiu       $t0, $sp, 0x38
/* EF450C 8018B7CC 00681021 */  addu        $v0, $v1, $t0
/* EF4510 8018B7D0 AC810004 */  sw          $at, 0x4($a0)
/* EF4514 8018B7D4 8D4F0004 */  lw          $t7, 0x4($t2)
/* EF4518 8018B7D8 C48A0004 */  lwc1        $ft3, 0x4($a0)
/* EF451C 8018B7DC 24190064 */  addiu       $t9, $zero, 0x64
/* EF4520 8018B7E0 AC8F0008 */  sw          $t7, 0x8($a0)
/* EF4524 8018B7E4 8D410008 */  lw          $at, 0x8($t2)
/* EF4528 8018B7E8 0005C080 */  sll         $t8, $a1, 2
/* EF452C 8018B7EC 03B87021 */  addu        $t6, $sp, $t8
/* EF4530 8018B7F0 AC81000C */  sw          $at, 0xC($a0)
/* EF4534 8018B7F4 C4440000 */  lwc1        $ft0, 0x0($v0)
/* EF4538 8018B7F8 3C014548 */  lui         $at, (0x45480000 >> 16)
/* EF453C 8018B7FC 44818000 */  mtc1        $at, $ft4
/* EF4540 8018B800 E48400F4 */  swc1        $ft0, 0xF4($a0)
/* EF4544 8018B804 C4460004 */  lwc1        $ft1, 0x4($v0)
/* EF4548 8018B808 3C014348 */  lui         $at, (0x43480000 >> 16)
/* EF454C 8018B80C C484000C */  lwc1        $ft0, 0xC($a0)
/* EF4550 8018B810 E48600F8 */  swc1        $ft1, 0xF8($a0)
/* EF4554 8018B814 C4480008 */  lwc1        $ft2, 0x8($v0)
/* EF4558 8018B818 44813000 */  mtc1        $at, $ft1
/* EF455C 8018B81C 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF4560 8018B820 E48800FC */  swc1        $ft2, 0xFC($a0)
/* EF4564 8018B824 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* EF4568 8018B828 46062201 */  sub.s       $ft2, $ft0, $ft1
/* EF456C 8018B82C 44815000 */  mtc1        $at, $ft3
/* EF4570 8018B830 E4920004 */  swc1        $ft5, 0x4($a0)
/* EF4574 8018B834 AC990054 */  sw          $t9, 0x54($a0)
/* EF4578 8018B838 E488000C */  swc1        $ft2, 0xC($a0)
/* EF457C 8018B83C E4800110 */  swc1        $fv0, 0x110($a0)
/* EF4580 8018B840 E4800118 */  swc1        $fv0, 0x118($a0)
/* EF4584 8018B844 E48A0114 */  swc1        $ft3, 0x114($a0)
/* EF4588 8018B848 8DCE0020 */  lw          $t6, 0x20($t6)
/* EF458C 8018B84C A4850046 */  sh          $a1, 0x46($a0)
/* EF4590 8018B850 AC8E0050 */  sw          $t6, 0x50($a0)
/* EF4594 8018B854 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF4598 8018B858 03E00008 */  jr          $ra
/* EF459C 8018B85C 27BD00C8 */   addiu      $sp, $sp, 0xC8
glabel func_ending_8018B860
/* EF45A0 8018B860 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* EF45A4 8018B864 AFBF0014 */  sw          $ra, 0x14($sp)
/* EF45A8 8018B868 3C0F8019 */  lui         $t7, %hi(D_ending_80192D78)
/* EF45AC 8018B86C 25EF2D78 */  addiu       $t7, $t7, %lo(D_ending_80192D78)
/* EF45B0 8018B870 8DE10000 */  lw          $at, 0x0($t7)
/* EF45B4 8018B874 27AE004C */  addiu       $t6, $sp, 0x4C
/* EF45B8 8018B878 8DE80004 */  lw          $t0, 0x4($t7)
/* EF45BC 8018B87C ADC10000 */  sw          $at, 0x0($t6)
/* EF45C0 8018B880 8DE10008 */  lw          $at, 0x8($t7)
/* EF45C4 8018B884 3C0A8019 */  lui         $t2, %hi(D_ending_80192D84)
/* EF45C8 8018B888 254A2D84 */  addiu       $t2, $t2, %lo(D_ending_80192D84)
/* EF45CC 8018B88C ADC80004 */  sw          $t0, 0x4($t6)
/* EF45D0 8018B890 ADC10008 */  sw          $at, 0x8($t6)
/* EF45D4 8018B894 8D410000 */  lw          $at, 0x0($t2)
/* EF45D8 8018B898 27A90040 */  addiu       $t1, $sp, 0x40
/* EF45DC 8018B89C 8D4D0004 */  lw          $t5, 0x4($t2)
/* EF45E0 8018B8A0 AD210000 */  sw          $at, 0x0($t1)
/* EF45E4 8018B8A4 8D410008 */  lw          $at, 0x8($t2)
/* EF45E8 8018B8A8 3C188019 */  lui         $t8, %hi(D_ending_80192D90)
/* EF45EC 8018B8AC 27182D90 */  addiu       $t8, $t8, %lo(D_ending_80192D90)
/* EF45F0 8018B8B0 AD2D0004 */  sw          $t5, 0x4($t1)
/* EF45F4 8018B8B4 AD210008 */  sw          $at, 0x8($t1)
/* EF45F8 8018B8B8 8F010000 */  lw          $at, 0x0($t8)
/* EF45FC 8018B8BC 27B90034 */  addiu       $t9, $sp, 0x34
/* EF4600 8018B8C0 8F080004 */  lw          $t0, 0x4($t8)
/* EF4604 8018B8C4 AF210000 */  sw          $at, 0x0($t9)
/* EF4608 8018B8C8 8F010008 */  lw          $at, 0x8($t8)
/* EF460C 8018B8CC 3C0B8019 */  lui         $t3, %hi(D_ending_80192D9C)
/* EF4610 8018B8D0 256B2D9C */  addiu       $t3, $t3, %lo(D_ending_80192D9C)
/* EF4614 8018B8D4 AF280004 */  sw          $t0, 0x4($t9)
/* EF4618 8018B8D8 AF210008 */  sw          $at, 0x8($t9)
/* EF461C 8018B8DC 8D610000 */  lw          $at, 0x0($t3)
/* EF4620 8018B8E0 27AC0028 */  addiu       $t4, $sp, 0x28
/* EF4624 8018B8E4 8D6D0004 */  lw          $t5, 0x4($t3)
/* EF4628 8018B8E8 AD810000 */  sw          $at, 0x0($t4)
/* EF462C 8018B8EC 8D610008 */  lw          $at, 0x8($t3)
/* EF4630 8018B8F0 3C0E8019 */  lui         $t6, %hi(D_ending_80192DA8)
/* EF4634 8018B8F4 25CE2DA8 */  addiu       $t6, $t6, %lo(D_ending_80192DA8)
/* EF4638 8018B8F8 AD8D0004 */  sw          $t5, 0x4($t4)
/* EF463C 8018B8FC AD810008 */  sw          $at, 0x8($t4)
/* EF4640 8018B900 8DC10000 */  lw          $at, 0x0($t6)
/* EF4644 8018B904 27AF001C */  addiu       $t7, $sp, 0x1C
/* EF4648 8018B908 8DC80004 */  lw          $t0, 0x4($t6)
/* EF464C 8018B90C ADE10000 */  sw          $at, 0x0($t7)
/* EF4650 8018B910 8DC10008 */  lw          $at, 0x8($t6)
/* EF4654 8018B914 ADE80004 */  sw          $t0, 0x4($t7)
/* EF4658 8018B918 ADE10008 */  sw          $at, 0x8($t7)
/* EF465C 8018B91C C7A4004C */  lwc1        $ft0, 0x4C($sp)
/* EF4660 8018B920 C7A60050 */  lwc1        $ft1, 0x50($sp)
/* EF4664 8018B924 3C018017 */  lui         $at, %hi(D_80177978)
/* EF4668 8018B928 E4247978 */  swc1        $ft0, %lo(D_80177978)($at)
/* EF466C 8018B92C C7A80054 */  lwc1        $ft2, 0x54($sp)
/* EF4670 8018B930 3C018017 */  lui         $at, %hi(D_80177980)
/* EF4674 8018B934 E4267980 */  swc1        $ft1, %lo(D_80177980)($at)
/* EF4678 8018B938 C7AA0040 */  lwc1        $ft3, 0x40($sp)
/* EF467C 8018B93C 3C018017 */  lui         $at, %hi(D_80177988)
/* EF4680 8018B940 E4287988 */  swc1        $ft2, %lo(D_80177988)($at)
/* EF4684 8018B944 C7B00044 */  lwc1        $ft4, 0x44($sp)
/* EF4688 8018B948 3C018017 */  lui         $at, %hi(D_801779A0)
/* EF468C 8018B94C 8FAB0034 */  lw          $t3, 0x34($sp)
/* EF4690 8018B950 E42A79A0 */  swc1        $ft3, %lo(D_801779A0)($at)
/* EF4694 8018B954 C7B20048 */  lwc1        $ft5, 0x48($sp)
/* EF4698 8018B958 3C018017 */  lui         $at, %hi(D_801779B8)
/* EF469C 8018B95C 8FAD0038 */  lw          $t5, 0x38($sp)
/* EF46A0 8018B960 E43079B8 */  swc1        $ft4, %lo(D_801779B8)($at)
/* EF46A4 8018B964 8FAA0028 */  lw          $t2, 0x28($sp)
/* EF46A8 8018B968 448B2000 */  mtc1        $t3, $ft0
/* EF46AC 8018B96C 3C018017 */  lui         $at, %hi(D_801779C0)
/* EF46B0 8018B970 8FB8003C */  lw          $t8, 0x3C($sp)
/* EF46B4 8018B974 E43279C0 */  swc1        $ft5, %lo(D_801779C0)($at)
/* EF46B8 8018B978 8FA9002C */  lw          $t1, 0x2C($sp)
/* EF46BC 8018B97C 448D4000 */  mtc1        $t5, $ft2
/* EF46C0 8018B980 3C018018 */  lui         $at, %hi(gLight1R)
/* EF46C4 8018B984 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF46C8 8018B988 AC2A8548 */  sw          $t2, %lo(gLight1R)($at)
/* EF46CC 8018B98C 8FAC0030 */  lw          $t4, 0x30($sp)
/* EF46D0 8018B990 44988000 */  mtc1        $t8, $ft4
/* EF46D4 8018B994 3C018018 */  lui         $at, %hi(gLight1G)
/* EF46D8 8018B998 468042A0 */  cvt.s.w     $ft3, $ft2
/* EF46DC 8018B99C AC29854C */  sw          $t1, %lo(gLight1G)($at)
/* EF46E0 8018B9A0 3C018018 */  lui         $at, %hi(gLight1B)
/* EF46E4 8018B9A4 AC2C8550 */  sw          $t4, %lo(gLight1B)($at)
/* EF46E8 8018B9A8 3C018018 */  lui         $at, %hi(D_801784D0)
/* EF46EC 8018B9AC 468084A0 */  cvt.s.w     $ft5, $ft4
/* EF46F0 8018B9B0 E42684D0 */  swc1        $ft1, %lo(D_801784D0)($at)
/* EF46F4 8018B9B4 3C018018 */  lui         $at, %hi(D_801784D4)
/* EF46F8 8018B9B8 E42A84D4 */  swc1        $ft3, %lo(D_801784D4)($at)
/* EF46FC 8018B9BC 8FB9001C */  lw          $t9, 0x1C($sp)
/* EF4700 8018B9C0 3C018018 */  lui         $at, %hi(D_801784D8)
/* EF4704 8018B9C4 E43284D8 */  swc1        $ft5, %lo(D_801784D8)($at)
/* EF4708 8018B9C8 8FAF0020 */  lw          $t7, 0x20($sp)
/* EF470C 8018B9CC 3C018018 */  lui         $at, %hi(gAmbientR)
/* EF4710 8018B9D0 AC398554 */  sw          $t9, %lo(gAmbientR)($at)
/* EF4714 8018B9D4 3C018018 */  lui         $at, %hi(gAmbientG)
/* EF4718 8018B9D8 8FAE0024 */  lw          $t6, 0x24($sp)
/* EF471C 8018B9DC AC2F8558 */  sw          $t7, %lo(gAmbientG)($at)
/* EF4720 8018B9E0 3C018018 */  lui         $at, %hi(gAmbientB)
/* EF4724 8018B9E4 0C029852 */  jal         func_800A6148
/* EF4728 8018B9E8 AC2E855C */   sw         $t6, %lo(gAmbientB)($at)
/* EF472C 8018B9EC 3C048016 */  lui         $a0, %hi(gActors)
/* EF4730 8018B9F0 24843FE0 */  addiu       $a0, $a0, %lo(gActors)
/* EF4734 8018B9F4 0C062CFA */  jal         func_ending_8018B3E8
/* EF4738 8018B9F8 00002825 */   or         $a1, $zero, $zero
/* EF473C 8018B9FC 3C048016 */  lui         $a0, %hi(gActors + 0x2F4)
/* EF4740 8018BA00 248442D4 */  addiu       $a0, $a0, %lo(gActors + 0x2F4)
/* EF4744 8018BA04 0C062D4B */  jal         func_ending_8018B52C
/* EF4748 8018BA08 00002825 */   or         $a1, $zero, $zero
/* EF474C 8018BA0C 3C048016 */  lui         $a0, %hi(gActors + 0x5E8)
/* EF4750 8018BA10 248445C8 */  addiu       $a0, $a0, %lo(gActors + 0x5E8)
/* EF4754 8018BA14 0C062D4B */  jal         func_ending_8018B52C
/* EF4758 8018BA18 24050001 */   addiu      $a1, $zero, 0x1
/* EF475C 8018BA1C 3C048016 */  lui         $a0, %hi(gActors + 0x8DC)
/* EF4760 8018BA20 248448BC */  addiu       $a0, $a0, %lo(gActors + 0x8DC)
/* EF4764 8018BA24 0C062D4B */  jal         func_ending_8018B52C
/* EF4768 8018BA28 24050002 */   addiu      $a1, $zero, 0x2
/* EF476C 8018BA2C 3C048016 */  lui         $a0, %hi(gActors + 0xBD0)
/* EF4770 8018BA30 24844BB0 */  addiu       $a0, $a0, %lo(gActors + 0xBD0)
/* EF4774 8018BA34 0C062DB6 */  jal         func_ending_8018B6D8
/* EF4778 8018BA38 00002825 */   or         $a1, $zero, $zero
/* EF477C 8018BA3C 3C048016 */  lui         $a0, %hi(gActors + 0xEC4)
/* EF4780 8018BA40 24844EA4 */  addiu       $a0, $a0, %lo(gActors + 0xEC4)
/* EF4784 8018BA44 0C062DB6 */  jal         func_ending_8018B6D8
/* EF4788 8018BA48 24050001 */   addiu      $a1, $zero, 0x1
/* EF478C 8018BA4C 3C048016 */  lui         $a0, %hi(gActors + 0x11B8)
/* EF4790 8018BA50 24845198 */  addiu       $a0, $a0, %lo(gActors + 0x11B8)
/* EF4794 8018BA54 0C062DB6 */  jal         func_ending_8018B6D8
/* EF4798 8018BA58 24050002 */   addiu      $a1, $zero, 0x2
/* EF479C 8018BA5C 3C048016 */  lui         $a0, %hi(gActors + 0x14AC)
/* EF47A0 8018BA60 2484548C */  addiu       $a0, $a0, %lo(gActors + 0x14AC)
/* EF47A4 8018BA64 0C062DB6 */  jal         func_ending_8018B6D8
/* EF47A8 8018BA68 24050003 */   addiu      $a1, $zero, 0x3
/* EF47AC 8018BA6C 3C048016 */  lui         $a0, %hi(gActors + 0x17A0)
/* EF47B0 8018BA70 24845780 */  addiu       $a0, $a0, %lo(gActors + 0x17A0)
/* EF47B4 8018BA74 0C062DB6 */  jal         func_ending_8018B6D8
/* EF47B8 8018BA78 24050004 */   addiu      $a1, $zero, 0x4
/* EF47BC 8018BA7C 3C048016 */  lui         $a0, %hi(gActors + 0x1A94)
/* EF47C0 8018BA80 24845A74 */  addiu       $a0, $a0, %lo(gActors + 0x1A94)
/* EF47C4 8018BA84 0C062DB6 */  jal         func_ending_8018B6D8
/* EF47C8 8018BA88 24050005 */   addiu      $a1, $zero, 0x5
/* EF47CC 8018BA8C 3C018017 */  lui         $at, %hi(D_801779A0)
/* EF47D0 8018BA90 C42479A0 */  lwc1        $ft0, %lo(D_801779A0)($at)
/* EF47D4 8018BA94 3C018017 */  lui         $at, %hi(D_80177A48)
/* EF47D8 8018BA98 24084AE5 */  addiu       $t0, $zero, 0x4AE5
/* EF47DC 8018BA9C E4247A48 */  swc1        $ft0, %lo(D_80177A48)($at)
/* EF47E0 8018BAA0 3C018017 */  lui         $at, %hi(D_80177A10)
/* EF47E4 8018BAA4 AC207A10 */  sw          $zero, %lo(D_80177A10)($at)
/* EF47E8 8018BAA8 3C01801A */  lui         $at, %hi(D_ending_8019858C)
/* EF47EC 8018BAAC AC20858C */  sw          $zero, %lo(D_ending_8019858C)($at)
/* EF47F0 8018BAB0 3C018016 */  lui         $at, %hi(gBgColor)
/* EF47F4 8018BAB4 A4281A36 */  sh          $t0, %lo(gBgColor)($at)
/* EF47F8 8018BAB8 3C018018 */  lui         $at, %hi(D_80178410)
/* EF47FC 8018BABC AC208410 */  sw          $zero, %lo(D_80178410)($at)
/* EF4800 8018BAC0 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF4804 8018BAC4 27BD0058 */  addiu       $sp, $sp, 0x58
/* EF4808 8018BAC8 03E00008 */  jr          $ra
/* EF480C 8018BACC 00000000 */   nop
glabel func_ending_8018BAD0
/* EF4810 8018BAD0 27BDFFA8 */  addiu       $sp, $sp, -0x58
/* EF4814 8018BAD4 AFBF0014 */  sw          $ra, 0x14($sp)
/* EF4818 8018BAD8 3C0F8019 */  lui         $t7, %hi(D_ending_80192DB4)
/* EF481C 8018BADC 25EF2DB4 */  addiu       $t7, $t7, %lo(D_ending_80192DB4)
/* EF4820 8018BAE0 8DE10000 */  lw          $at, 0x0($t7)
/* EF4824 8018BAE4 27AE004C */  addiu       $t6, $sp, 0x4C
/* EF4828 8018BAE8 8DE80004 */  lw          $t0, 0x4($t7)
/* EF482C 8018BAEC ADC10000 */  sw          $at, 0x0($t6)
/* EF4830 8018BAF0 8DE10008 */  lw          $at, 0x8($t7)
/* EF4834 8018BAF4 3C0A8019 */  lui         $t2, %hi(D_ending_80192DC0)
/* EF4838 8018BAF8 254A2DC0 */  addiu       $t2, $t2, %lo(D_ending_80192DC0)
/* EF483C 8018BAFC ADC80004 */  sw          $t0, 0x4($t6)
/* EF4840 8018BB00 ADC10008 */  sw          $at, 0x8($t6)
/* EF4844 8018BB04 8D410000 */  lw          $at, 0x0($t2)
/* EF4848 8018BB08 27A90040 */  addiu       $t1, $sp, 0x40
/* EF484C 8018BB0C 8D4D0004 */  lw          $t5, 0x4($t2)
/* EF4850 8018BB10 AD210000 */  sw          $at, 0x0($t1)
/* EF4854 8018BB14 8D410008 */  lw          $at, 0x8($t2)
/* EF4858 8018BB18 3C188019 */  lui         $t8, %hi(D_ending_80192DCC)
/* EF485C 8018BB1C 27182DCC */  addiu       $t8, $t8, %lo(D_ending_80192DCC)
/* EF4860 8018BB20 AD2D0004 */  sw          $t5, 0x4($t1)
/* EF4864 8018BB24 AD210008 */  sw          $at, 0x8($t1)
/* EF4868 8018BB28 8F010000 */  lw          $at, 0x0($t8)
/* EF486C 8018BB2C 27B90034 */  addiu       $t9, $sp, 0x34
/* EF4870 8018BB30 8F080004 */  lw          $t0, 0x4($t8)
/* EF4874 8018BB34 AF210000 */  sw          $at, 0x0($t9)
/* EF4878 8018BB38 8F010008 */  lw          $at, 0x8($t8)
/* EF487C 8018BB3C 3C0B8019 */  lui         $t3, %hi(D_ending_80192DD8)
/* EF4880 8018BB40 256B2DD8 */  addiu       $t3, $t3, %lo(D_ending_80192DD8)
/* EF4884 8018BB44 AF280004 */  sw          $t0, 0x4($t9)
/* EF4888 8018BB48 AF210008 */  sw          $at, 0x8($t9)
/* EF488C 8018BB4C 8D610000 */  lw          $at, 0x0($t3)
/* EF4890 8018BB50 27AC0028 */  addiu       $t4, $sp, 0x28
/* EF4894 8018BB54 8D6D0004 */  lw          $t5, 0x4($t3)
/* EF4898 8018BB58 AD810000 */  sw          $at, 0x0($t4)
/* EF489C 8018BB5C 8D610008 */  lw          $at, 0x8($t3)
/* EF48A0 8018BB60 3C0E8019 */  lui         $t6, %hi(D_ending_80192DE4)
/* EF48A4 8018BB64 25CE2DE4 */  addiu       $t6, $t6, %lo(D_ending_80192DE4)
/* EF48A8 8018BB68 AD8D0004 */  sw          $t5, 0x4($t4)
/* EF48AC 8018BB6C AD810008 */  sw          $at, 0x8($t4)
/* EF48B0 8018BB70 8DC10000 */  lw          $at, 0x0($t6)
/* EF48B4 8018BB74 27AF001C */  addiu       $t7, $sp, 0x1C
/* EF48B8 8018BB78 8DC80004 */  lw          $t0, 0x4($t6)
/* EF48BC 8018BB7C ADE10000 */  sw          $at, 0x0($t7)
/* EF48C0 8018BB80 8DC10008 */  lw          $at, 0x8($t6)
/* EF48C4 8018BB84 ADE80004 */  sw          $t0, 0x4($t7)
/* EF48C8 8018BB88 ADE10008 */  sw          $at, 0x8($t7)
/* EF48CC 8018BB8C C7A4004C */  lwc1        $ft0, 0x4C($sp)
/* EF48D0 8018BB90 C7A60050 */  lwc1        $ft1, 0x50($sp)
/* EF48D4 8018BB94 3C018017 */  lui         $at, %hi(D_80177978)
/* EF48D8 8018BB98 E4247978 */  swc1        $ft0, %lo(D_80177978)($at)
/* EF48DC 8018BB9C C7A80054 */  lwc1        $ft2, 0x54($sp)
/* EF48E0 8018BBA0 3C018017 */  lui         $at, %hi(D_80177980)
/* EF48E4 8018BBA4 E4267980 */  swc1        $ft1, %lo(D_80177980)($at)
/* EF48E8 8018BBA8 C7AA0040 */  lwc1        $ft3, 0x40($sp)
/* EF48EC 8018BBAC 3C018017 */  lui         $at, %hi(D_80177988)
/* EF48F0 8018BBB0 E4287988 */  swc1        $ft2, %lo(D_80177988)($at)
/* EF48F4 8018BBB4 C7B00044 */  lwc1        $ft4, 0x44($sp)
/* EF48F8 8018BBB8 3C018017 */  lui         $at, %hi(D_801779A0)
/* EF48FC 8018BBBC 8FAB0034 */  lw          $t3, 0x34($sp)
/* EF4900 8018BBC0 E42A79A0 */  swc1        $ft3, %lo(D_801779A0)($at)
/* EF4904 8018BBC4 C7B20048 */  lwc1        $ft5, 0x48($sp)
/* EF4908 8018BBC8 3C018017 */  lui         $at, %hi(D_801779B8)
/* EF490C 8018BBCC 8FAD0038 */  lw          $t5, 0x38($sp)
/* EF4910 8018BBD0 E43079B8 */  swc1        $ft4, %lo(D_801779B8)($at)
/* EF4914 8018BBD4 8FAA0028 */  lw          $t2, 0x28($sp)
/* EF4918 8018BBD8 448B2000 */  mtc1        $t3, $ft0
/* EF491C 8018BBDC 3C018017 */  lui         $at, %hi(D_801779C0)
/* EF4920 8018BBE0 8FB8003C */  lw          $t8, 0x3C($sp)
/* EF4924 8018BBE4 E43279C0 */  swc1        $ft5, %lo(D_801779C0)($at)
/* EF4928 8018BBE8 8FA9002C */  lw          $t1, 0x2C($sp)
/* EF492C 8018BBEC 448D4000 */  mtc1        $t5, $ft2
/* EF4930 8018BBF0 3C018018 */  lui         $at, %hi(gLight1R)
/* EF4934 8018BBF4 468021A0 */  cvt.s.w     $ft1, $ft0
/* EF4938 8018BBF8 AC2A8548 */  sw          $t2, %lo(gLight1R)($at)
/* EF493C 8018BBFC 8FAC0030 */  lw          $t4, 0x30($sp)
/* EF4940 8018BC00 44988000 */  mtc1        $t8, $ft4
/* EF4944 8018BC04 3C018018 */  lui         $at, %hi(gLight1G)
/* EF4948 8018BC08 468042A0 */  cvt.s.w     $ft3, $ft2
/* EF494C 8018BC0C AC29854C */  sw          $t1, %lo(gLight1G)($at)
/* EF4950 8018BC10 3C018018 */  lui         $at, %hi(gLight1B)
/* EF4954 8018BC14 AC2C8550 */  sw          $t4, %lo(gLight1B)($at)
/* EF4958 8018BC18 3C018018 */  lui         $at, %hi(D_801784D0)
/* EF495C 8018BC1C 468084A0 */  cvt.s.w     $ft5, $ft4
/* EF4960 8018BC20 E42684D0 */  swc1        $ft1, %lo(D_801784D0)($at)
/* EF4964 8018BC24 3C018018 */  lui         $at, %hi(D_801784D4)
/* EF4968 8018BC28 E42A84D4 */  swc1        $ft3, %lo(D_801784D4)($at)
/* EF496C 8018BC2C 8FB9001C */  lw          $t9, 0x1C($sp)
/* EF4970 8018BC30 3C018018 */  lui         $at, %hi(D_801784D8)
/* EF4974 8018BC34 E43284D8 */  swc1        $ft5, %lo(D_801784D8)($at)
/* EF4978 8018BC38 8FAF0020 */  lw          $t7, 0x20($sp)
/* EF497C 8018BC3C 3C018018 */  lui         $at, %hi(gAmbientR)
/* EF4980 8018BC40 AC398554 */  sw          $t9, %lo(gAmbientR)($at)
/* EF4984 8018BC44 3C018018 */  lui         $at, %hi(gAmbientG)
/* EF4988 8018BC48 8FAE0024 */  lw          $t6, 0x24($sp)
/* EF498C 8018BC4C AC2F8558 */  sw          $t7, %lo(gAmbientG)($at)
/* EF4990 8018BC50 3C018018 */  lui         $at, %hi(gAmbientB)
/* EF4994 8018BC54 0C029852 */  jal         func_800A6148
/* EF4998 8018BC58 AC2E855C */   sw         $t6, %lo(gAmbientB)($at)
/* EF499C 8018BC5C 3C048016 */  lui         $a0, %hi(gActors)
/* EF49A0 8018BC60 24843FE0 */  addiu       $a0, $a0, %lo(gActors)
/* EF49A4 8018BC64 0C062CFA */  jal         func_ending_8018B3E8
/* EF49A8 8018BC68 24050001 */   addiu      $a1, $zero, 0x1
/* EF49AC 8018BC6C 3C048016 */  lui         $a0, %hi(gActors + 0x2F4)
/* EF49B0 8018BC70 0C062D89 */  jal         func_ending_8018B624
/* EF49B4 8018BC74 248442D4 */   addiu      $a0, $a0, %lo(gActors + 0x2F4)
/* EF49B8 8018BC78 24080001 */  addiu       $t0, $zero, 0x1
/* EF49BC 8018BC7C 3C018017 */  lui         $at, %hi(D_80177A10)
/* EF49C0 8018BC80 AC287A10 */  sw          $t0, %lo(D_80177A10)($at)
/* EF49C4 8018BC84 3C01801A */  lui         $at, %hi(D_ending_8019858C)
/* EF49C8 8018BC88 AC20858C */  sw          $zero, %lo(D_ending_8019858C)($at)
/* EF49CC 8018BC8C 3C018016 */  lui         $at, %hi(gBgColor)
/* EF49D0 8018BC90 240A4AE5 */  addiu       $t2, $zero, 0x4AE5
/* EF49D4 8018BC94 A42A1A36 */  sh          $t2, %lo(gBgColor)($at)
/* EF49D8 8018BC98 3C018018 */  lui         $at, %hi(D_80178410)
/* EF49DC 8018BC9C AC208410 */  sw          $zero, %lo(D_80178410)($at)
/* EF49E0 8018BCA0 8FBF0014 */  lw          $ra, 0x14($sp)
/* EF49E4 8018BCA4 27BD0058 */  addiu       $sp, $sp, 0x58
/* EF49E8 8018BCA8 03E00008 */  jr          $ra
/* EF49EC 8018BCAC 00000000 */   nop
.section .late_rodata
dlabel D_ending_801965EC
/* EFF32C 801965EC 410B3333 */ .float 8.699999809

dlabel D_ending_801965F0
/* EFF330 801965F0 C0C9999A */ .float -6.300000191

dlabel D_ending_801965F4
/* EFF334 801965F4 C0533333 */ .float -3.299999952

dlabel D_ending_801965F8
/* EFF338 801965F8 3A83126F */ .float 0.001000000047

dlabel D_ending_801965FC
/* EFF33C 801965FC 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_80196600
/* EFF340 80196600 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_80196604
/* EFF344 80196604 38D1B717 */ .float 9.999999747e-05

dlabel D_ending_80196608
/* EFF348 80196608 38D1B717 */ .float 9.999999747e-05

dlabel D_ending_8019660C
/* EFF34C 8019660C 3E4CCCCD */ .float 0.200000003

dlabel D_ending_80196610
/* EFF350 80196610 3E4CCCCD */ .float 0.200000003


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018BCB0
/* EF49F0 8018BCB0 27BDFF78 */  addiu       $sp, $sp, -0x88
/* EF49F4 8018BCB4 AFBF0044 */  sw          $ra, 0x44($sp)
/* EF49F8 8018BCB8 AFB30040 */  sw          $s3, 0x40($sp)
/* EF49FC 8018BCBC AFB2003C */  sw          $s2, 0x3C($sp)
/* EF4A00 8018BCC0 AFB10038 */  sw          $s1, 0x38($sp)
/* EF4A04 8018BCC4 AFB00034 */  sw          $s0, 0x34($sp)
/* EF4A08 8018BCC8 F7B40028 */  sdc1        $fs0, 0x28($sp)
/* EF4A0C 8018BCCC 3C028017 */  lui         $v0, %hi(gCsFrameCount)
/* EF4A10 8018BCD0 8C427A80 */  lw          $v0, %lo(gCsFrameCount)($v0)
/* EF4A14 8018BCD4 AFA0005C */  sw          $zero, 0x5C($sp)
/* EF4A18 8018BCD8 3C018018 */  lui         $at, %hi(D_80178358)
/* EF4A1C 8018BCDC 10400008 */  beqz        $v0, .Lending_8018BD00
/* EF4A20 8018BCE0 00000000 */   nop
/* EF4A24 8018BCE4 2401030C */  addiu       $at, $zero, 0x30C
/* EF4A28 8018BCE8 10410009 */  beq         $v0, $at, .Lending_8018BD10
/* EF4A2C 8018BCEC 240103F2 */   addiu      $at, $zero, 0x3F2
/* EF4A30 8018BCF0 1041000B */  beq         $v0, $at, .Lending_8018BD20
/* EF4A34 8018BCF4 240E0001 */   addiu      $t6, $zero, 0x1
/* EF4A38 8018BCF8 1000000B */  b           .Lending_8018BD28
/* EF4A3C 8018BCFC 00000000 */   nop
.Lending_8018BD00:
/* EF4A40 8018BD00 0C062E18 */  jal         func_ending_8018B860
/* EF4A44 8018BD04 AC208358 */   sw         $zero, %lo(D_80178358)($at)
/* EF4A48 8018BD08 10000007 */  b           .Lending_8018BD28
/* EF4A4C 8018BD0C 00000000 */   nop
.Lending_8018BD10:
/* EF4A50 8018BD10 0C062EB4 */  jal         func_ending_8018BAD0
/* EF4A54 8018BD14 00000000 */   nop
/* EF4A58 8018BD18 10000003 */  b           .Lending_8018BD28
/* EF4A5C 8018BD1C 00000000 */   nop
.Lending_8018BD20:
/* EF4A60 8018BD20 0C029852 */  jal         func_800A6148
/* EF4A64 8018BD24 AFAE005C */   sw         $t6, 0x5C($sp)
.Lending_8018BD28:
/* EF4A68 8018BD28 0C062809 */  jal         func_ending_8018A024
/* EF4A6C 8018BD2C 00000000 */   nop
/* EF4A70 8018BD30 3C0F8018 */  lui         $t7, %hi(gLight1R)
/* EF4A74 8018BD34 3C188018 */  lui         $t8, %hi(gLight1G)
/* EF4A78 8018BD38 3C198018 */  lui         $t9, %hi(gLight1B)
/* EF4A7C 8018BD3C 3C088018 */  lui         $t0, %hi(gAmbientR)
/* EF4A80 8018BD40 3C098018 */  lui         $t1, %hi(gAmbientG)
/* EF4A84 8018BD44 3C0A8018 */  lui         $t2, %hi(gAmbientB)
/* EF4A88 8018BD48 8D4A855C */  lw          $t2, %lo(gAmbientB)($t2)
/* EF4A8C 8018BD4C 8D298558 */  lw          $t1, %lo(gAmbientG)($t1)
/* EF4A90 8018BD50 8D088554 */  lw          $t0, %lo(gAmbientR)($t0)
/* EF4A94 8018BD54 8F398550 */  lw          $t9, %lo(gLight1B)($t9)
/* EF4A98 8018BD58 8F18854C */  lw          $t8, %lo(gLight1G)($t8)
/* EF4A9C 8018BD5C 8DEF8548 */  lw          $t7, %lo(gLight1R)($t7)
/* EF4AA0 8018BD60 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* EF4AA4 8018BD64 3C058018 */  lui         $a1, %hi(gLight1x)
/* EF4AA8 8018BD68 3C068018 */  lui         $a2, %hi(gLight1y)
/* EF4AAC 8018BD6C 3C078018 */  lui         $a3, %hi(gLight1z)
/* EF4AB0 8018BD70 8CE784E4 */  lw          $a3, %lo(gLight1z)($a3)
/* EF4AB4 8018BD74 8CC684E0 */  lw          $a2, %lo(gLight1y)($a2)
/* EF4AB8 8018BD78 8CA584DC */  lw          $a1, %lo(gLight1x)($a1)
/* EF4ABC 8018BD7C 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* EF4AC0 8018BD80 AFAA0024 */  sw          $t2, 0x24($sp)
/* EF4AC4 8018BD84 AFA90020 */  sw          $t1, 0x20($sp)
/* EF4AC8 8018BD88 AFA8001C */  sw          $t0, 0x1C($sp)
/* EF4ACC 8018BD8C AFB90018 */  sw          $t9, 0x18($sp)
/* EF4AD0 8018BD90 AFB80014 */  sw          $t8, 0x14($sp)
/* EF4AD4 8018BD94 0C000DCB */  jal         Lights_SetOneLight
/* EF4AD8 8018BD98 AFAF0010 */   sw         $t7, 0x10($sp)
/* EF4ADC 8018BD9C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* EF4AE0 8018BDA0 3C108017 */  lui         $s0, %hi(gActors + 0xAE3C)
/* EF4AE4 8018BDA4 3C138014 */  lui         $s3, %hi(gCalcMatrix)
/* EF4AE8 8018BDA8 3C12801A */  lui         $s2, %hi(D_ending_8019858C)
/* EF4AEC 8018BDAC 4481A000 */  mtc1        $at, $fs0
/* EF4AF0 8018BDB0 2652858C */  addiu       $s2, $s2, %lo(D_ending_8019858C)
/* EF4AF4 8018BDB4 2673BBC8 */  addiu       $s3, $s3, %lo(gCalcMatrix)
/* EF4AF8 8018BDB8 2610EE1C */  addiu       $s0, $s0, %lo(gActors + 0xAE3C)
/* EF4AFC 8018BDBC 2411003B */  addiu       $s1, $zero, 0x3B
.Lending_8018BDC0:
/* EF4B00 8018BDC0 920B0000 */  lbu         $t3, 0x0($s0)
/* EF4B04 8018BDC4 516000A2 */  beql        $t3, $zero, .Lending_8018C050
/* EF4B08 8018BDC8 2631FFFF */   addiu      $s1, $s1, -0x1
/* EF4B0C 8018BDCC 96020002 */  lhu         $v0, 0x2($s0)
/* EF4B10 8018BDD0 24010001 */  addiu       $at, $zero, 0x1
/* EF4B14 8018BDD4 5040000A */  beql        $v0, $zero, .Lending_8018BE00
/* EF4B18 8018BDD8 860200B8 */   lh         $v0, 0xB8($s0)
/* EF4B1C 8018BDDC 10410033 */  beq         $v0, $at, .Lending_8018BEAC
/* EF4B20 8018BDE0 24010002 */   addiu      $at, $zero, 0x2
/* EF4B24 8018BDE4 1041003A */  beq         $v0, $at, .Lending_8018BED0
/* EF4B28 8018BDE8 24010003 */   addiu      $at, $zero, 0x3
/* EF4B2C 8018BDEC 50410042 */  beql        $v0, $at, .Lending_8018BEF8
/* EF4B30 8018BDF0 8E020050 */   lw         $v0, 0x50($s0)
/* EF4B34 8018BDF4 1000005B */  b           .Lending_8018BF64
/* EF4B38 8018BDF8 C60400F8 */   lwc1       $ft0, 0xF8($s0)
/* EF4B3C 8018BDFC 860200B8 */  lh          $v0, 0xB8($s0)
.Lending_8018BE00:
/* EF4B40 8018BE00 3C01C57A */  lui         $at, (0xC57A0000 >> 16)
/* EF4B44 8018BE04 26040004 */  addiu       $a0, $s0, 0x4
/* EF4B48 8018BE08 10400006 */  beqz        $v0, .Lending_8018BE24
/* EF4B4C 8018BE0C 26050010 */   addiu      $a1, $s0, 0x10
/* EF4B50 8018BE10 24010001 */  addiu       $at, $zero, 0x1
/* EF4B54 8018BE14 1041000C */  beq         $v0, $at, .Lending_8018BE48
/* EF4B58 8018BE18 3C0C8017 */   lui        $t4, %hi(gCsFrameCount)
/* EF4B5C 8018BE1C 1000001D */  b           .Lending_8018BE94
/* EF4B60 8018BE20 8E4D0000 */   lw         $t5, 0x0($s2)
.Lending_8018BE24:
/* EF4B64 8018BE24 C6040004 */  lwc1        $ft0, 0x4($s0)
/* EF4B68 8018BE28 44813000 */  mtc1        $at, $ft1
/* EF4B6C 8018BE2C 00000000 */  nop
/* EF4B70 8018BE30 4606203C */  c.lt.s      $ft0, $ft1
/* EF4B74 8018BE34 00000000 */  nop
/* EF4B78 8018BE38 45020016 */  bc1fl       .Lending_8018BE94
/* EF4B7C 8018BE3C 8E4D0000 */   lw         $t5, 0x0($s2)
/* EF4B80 8018BE40 10000013 */  b           .Lending_8018BE90
/* EF4B84 8018BE44 A2000000 */   sb         $zero, 0x0($s0)
.Lending_8018BE48:
/* EF4B88 8018BE48 8D8C7A80 */  lw          $t4, %lo(gCsFrameCount)($t4)
/* EF4B8C 8018BE4C 2981030C */  slti        $at, $t4, 0x30C
/* EF4B90 8018BE50 1420000F */  bnez        $at, .Lending_8018BE90
/* EF4B94 8018BE54 3C018019 */   lui        $at, %hi(D_ending_801965EC)
/* EF4B98 8018BE58 C42A65EC */  lwc1        $ft3, %lo(D_ending_801965EC)($at)
/* EF4B9C 8018BE5C C6080004 */  lwc1        $ft2, 0x4($s0)
/* EF4BA0 8018BE60 3C018019 */  lui         $at, %hi(D_ending_801965F0)
/* EF4BA4 8018BE64 C6120008 */  lwc1        $ft5, 0x8($s0)
/* EF4BA8 8018BE68 460A4400 */  add.s       $ft4, $ft2, $ft3
/* EF4BAC 8018BE6C C608000C */  lwc1        $ft2, 0xC($s0)
/* EF4BB0 8018BE70 E6100004 */  swc1        $ft4, 0x4($s0)
/* EF4BB4 8018BE74 C42465F0 */  lwc1        $ft0, %lo(D_ending_801965F0)($at)
/* EF4BB8 8018BE78 3C018019 */  lui         $at, %hi(D_ending_801965F4)
/* EF4BBC 8018BE7C 46049180 */  add.s       $ft1, $ft5, $ft0
/* EF4BC0 8018BE80 E6060008 */  swc1        $ft1, 0x8($s0)
/* EF4BC4 8018BE84 C42A65F4 */  lwc1        $ft3, %lo(D_ending_801965F4)($at)
/* EF4BC8 8018BE88 460A4400 */  add.s       $ft4, $ft2, $ft3
/* EF4BCC 8018BE8C E610000C */  swc1        $ft4, 0xC($s0)
.Lending_8018BE90:
/* EF4BD0 8018BE90 8E4D0000 */  lw          $t5, 0x0($s2)
.Lending_8018BE94:
/* EF4BD4 8018BE94 562D0033 */  bnel        $s1, $t5, .Lending_8018BF64
/* EF4BD8 8018BE98 C60400F8 */   lwc1       $ft0, 0xF8($s0)
/* EF4BDC 8018BE9C 0C062C5D */  jal         func_ending_8018B174
/* EF4BE0 8018BEA0 26060110 */   addiu      $a2, $s0, 0x110
/* EF4BE4 8018BEA4 1000002F */  b           .Lending_8018BF64
/* EF4BE8 8018BEA8 C60400F8 */   lwc1       $ft0, 0xF8($s0)
.Lending_8018BEAC:
/* EF4BEC 8018BEAC 8E4E0000 */  lw          $t6, 0x0($s2)
/* EF4BF0 8018BEB0 26040004 */  addiu       $a0, $s0, 0x4
/* EF4BF4 8018BEB4 26050010 */  addiu       $a1, $s0, 0x10
/* EF4BF8 8018BEB8 562E002A */  bnel        $s1, $t6, .Lending_8018BF64
/* EF4BFC 8018BEBC C60400F8 */   lwc1       $ft0, 0xF8($s0)
/* EF4C00 8018BEC0 0C062C5D */  jal         func_ending_8018B174
/* EF4C04 8018BEC4 26060110 */   addiu      $a2, $s0, 0x110
/* EF4C08 8018BEC8 10000026 */  b           .Lending_8018BF64
/* EF4C0C 8018BECC C60400F8 */   lwc1       $ft0, 0xF8($s0)
.Lending_8018BED0:
/* EF4C10 8018BED0 8E4F0000 */  lw          $t7, 0x0($s2)
/* EF4C14 8018BED4 26040004 */  addiu       $a0, $s0, 0x4
/* EF4C18 8018BED8 26050010 */  addiu       $a1, $s0, 0x10
/* EF4C1C 8018BEDC 562F0021 */  bnel        $s1, $t7, .Lending_8018BF64
/* EF4C20 8018BEE0 C60400F8 */   lwc1       $ft0, 0xF8($s0)
/* EF4C24 8018BEE4 0C062C5D */  jal         func_ending_8018B174
/* EF4C28 8018BEE8 26060110 */   addiu      $a2, $s0, 0x110
/* EF4C2C 8018BEEC 1000001D */  b           .Lending_8018BF64
/* EF4C30 8018BEF0 C60400F8 */   lwc1       $ft0, 0xF8($s0)
/* EF4C34 8018BEF4 8E020050 */  lw          $v0, 0x50($s0)
.Lending_8018BEF8:
/* EF4C38 8018BEF8 3C063D4C */  lui         $a2, (0x3D4CCCCD >> 16)
/* EF4C3C 8018BEFC 34C6CCCD */  ori         $a2, $a2, (0x3D4CCCCD & 0xFFFF)
/* EF4C40 8018BF00 18400004 */  blez        $v0, .Lending_8018BF14
/* EF4C44 8018BF04 3C053F80 */   lui        $a1, (0x3F800000 >> 16)
/* EF4C48 8018BF08 2458FFFF */  addiu       $t8, $v0, -0x1
/* EF4C4C 8018BF0C 1000000D */  b           .Lending_8018BF44
/* EF4C50 8018BF10 AE180050 */   sw         $t8, 0x50($s0)
.Lending_8018BF14:
/* EF4C54 8018BF14 8E190054 */  lw          $t9, 0x54($s0)
/* EF4C58 8018BF18 26040114 */  addiu       $a0, $s0, 0x114
/* EF4C5C 8018BF1C 3C018019 */  lui         $at, %hi(D_ending_801965F8)
/* EF4C60 8018BF20 2728FFFF */  addiu       $t0, $t9, -0x1
/* EF4C64 8018BF24 1D000003 */  bgtz        $t0, .Lending_8018BF34
/* EF4C68 8018BF28 AE080054 */   sw         $t0, 0x54($s0)
/* EF4C6C 8018BF2C AE000054 */  sw          $zero, 0x54($s0)
/* EF4C70 8018BF30 A2000000 */  sb          $zero, 0x0($s0)
.Lending_8018BF34:
/* EF4C74 8018BF34 C43265F8 */  lwc1        $ft5, %lo(D_ending_801965F8)($at)
/* EF4C78 8018BF38 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF4C7C 8018BF3C 0C026F0B */  jal         Math_SmoothStepToF
/* EF4C80 8018BF40 E7B20010 */   swc1       $ft5, 0x10($sp)
.Lending_8018BF44:
/* EF4C84 8018BF44 8E4A0000 */  lw          $t2, 0x0($s2)
/* EF4C88 8018BF48 26040004 */  addiu       $a0, $s0, 0x4
/* EF4C8C 8018BF4C 26050010 */  addiu       $a1, $s0, 0x10
/* EF4C90 8018BF50 562A0004 */  bnel        $s1, $t2, .Lending_8018BF64
/* EF4C94 8018BF54 C60400F8 */   lwc1       $ft0, 0xF8($s0)
/* EF4C98 8018BF58 0C062C5D */  jal         func_ending_8018B174
/* EF4C9C 8018BF5C 26060110 */   addiu      $a2, $s0, 0x110
/* EF4CA0 8018BF60 C60400F8 */  lwc1        $ft0, 0xF8($s0)
.Lending_8018BF64:
/* EF4CA4 8018BF64 3C018019 */  lui         $at, %hi(D_ending_801965FC)
/* EF4CA8 8018BF68 C42865FC */  lwc1        $ft2, %lo(D_ending_801965FC)($at)
/* EF4CAC 8018BF6C 46142180 */  add.s       $ft1, $ft0, $fs0
/* EF4CB0 8018BF70 8E640000 */  lw          $a0, 0x0($s3)
/* EF4CB4 8018BF74 00003025 */  or          $a2, $zero, $zero
/* EF4CB8 8018BF78 46083282 */  mul.s       $ft3, $ft1, $ft2
/* EF4CBC 8018BF7C 44055000 */  mfc1        $a1, $ft3
/* EF4CC0 8018BF80 0C0017A4 */  jal         Matrix_RotateY
/* EF4CC4 8018BF84 00000000 */   nop
/* EF4CC8 8018BF88 3C018019 */  lui         $at, %hi(D_ending_80196600)
/* EF4CCC 8018BF8C C4326600 */  lwc1        $ft5, %lo(D_ending_80196600)($at)
/* EF4CD0 8018BF90 C61000F4 */  lwc1        $ft4, 0xF4($s0)
/* EF4CD4 8018BF94 8E640000 */  lw          $a0, 0x0($s3)
/* EF4CD8 8018BF98 24060001 */  addiu       $a2, $zero, 0x1
/* EF4CDC 8018BF9C 46128102 */  mul.s       $ft0, $ft4, $ft5
/* EF4CE0 8018BFA0 46002187 */  neg.s       $ft1, $ft0
/* EF4CE4 8018BFA4 44053000 */  mfc1        $a1, $ft1
/* EF4CE8 8018BFA8 0C001751 */  jal         Matrix_RotateX
/* EF4CEC 8018BFAC 00000000 */   nop
/* EF4CF0 8018BFB0 44800000 */  mtc1        $zero, $fv0
/* EF4CF4 8018BFB4 C6080114 */  lwc1        $ft2, 0x114($s0)
/* EF4CF8 8018BFB8 8E640000 */  lw          $a0, 0x0($s3)
/* EF4CFC 8018BFBC 27A50078 */  addiu       $a1, $sp, 0x78
/* EF4D00 8018BFC0 27A6006C */  addiu       $a2, $sp, 0x6C
/* EF4D04 8018BFC4 E7A00078 */  swc1        $fv0, 0x78($sp)
/* EF4D08 8018BFC8 E7A0007C */  swc1        $fv0, 0x7C($sp)
/* EF4D0C 8018BFCC 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* EF4D10 8018BFD0 E7A80080 */   swc1       $ft2, 0x80($sp)
/* EF4D14 8018BFD4 C7B20070 */  lwc1        $ft5, 0x70($sp)
/* EF4D18 8018BFD8 C7B0006C */  lwc1        $ft4, 0x6C($sp)
/* EF4D1C 8018BFDC C7AE0074 */  lwc1        $fa1, 0x74($sp)
/* EF4D20 8018BFE0 C60C00F4 */  lwc1        $fa0, 0xF4($s0)
/* EF4D24 8018BFE4 C60A00F8 */  lwc1        $ft3, 0xF8($s0)
/* EF4D28 8018BFE8 C6080004 */  lwc1        $ft2, 0x4($s0)
/* EF4D2C 8018BFEC C6060008 */  lwc1        $ft1, 0x8($s0)
/* EF4D30 8018BFF0 46145280 */  add.s       $ft3, $ft3, $fs0
/* EF4D34 8018BFF4 C60400FC */  lwc1        $ft0, 0xFC($s0)
/* EF4D38 8018BFF8 C602000C */  lwc1        $fv1, 0xC($s0)
/* EF4D3C 8018BFFC E61200EC */  swc1        $ft5, 0xEC($s0)
/* EF4D40 8018C000 C61200EC */  lwc1        $ft5, 0xEC($s0)
/* EF4D44 8018C004 E61000E8 */  swc1        $ft4, 0xE8($s0)
/* EF4D48 8018C008 C61000E8 */  lwc1        $ft4, 0xE8($s0)
/* EF4D4C 8018C00C 46123180 */  add.s       $ft1, $ft1, $ft5
/* EF4D50 8018C010 C600010C */  lwc1        $fv0, 0x10C($s0)
/* EF4D54 8018C014 E60E00F0 */  swc1        $fa1, 0xF0($s0)
/* EF4D58 8018C018 46104400 */  add.s       $ft4, $ft2, $ft4
/* EF4D5C 8018C01C C60800F0 */  lwc1        $ft2, 0xF0($s0)
/* EF4D60 8018C020 E60A0014 */  swc1        $ft3, 0x14($s0)
/* EF4D64 8018C024 46009001 */  sub.s       $fv0, $ft5, $fv0
/* EF4D68 8018C028 E6100004 */  swc1        $ft4, 0x4($s0)
/* EF4D6C 8018C02C E6060008 */  swc1        $ft1, 0x8($s0)
/* EF4D70 8018C030 46006307 */  neg.s       $fa0, $fa0
/* EF4D74 8018C034 46081200 */  add.s       $ft2, $fv1, $ft2
/* EF4D78 8018C038 E60C0010 */  swc1        $fa0, 0x10($s0)
/* EF4D7C 8018C03C E60000EC */  swc1        $fv0, 0xEC($s0)
/* EF4D80 8018C040 46002107 */  neg.s       $ft0, $ft0
/* EF4D84 8018C044 E608000C */  swc1        $ft2, 0xC($s0)
/* EF4D88 8018C048 E6040018 */  swc1        $ft0, 0x18($s0)
/* EF4D8C 8018C04C 2631FFFF */  addiu       $s1, $s1, -0x1
.Lending_8018C050:
/* EF4D90 8018C050 0621FF5B */  bgez        $s1, .Lending_8018BDC0
/* EF4D94 8018C054 2610FD0C */   addiu      $s0, $s0, -0x2F4
/* EF4D98 8018C058 3C0B8017 */  lui         $t3, %hi(D_80177A10)
/* EF4D9C 8018C05C 8D6B7A10 */  lw          $t3, %lo(D_80177A10)($t3)
/* EF4DA0 8018C060 3C028016 */  lui         $v0, %hi(gActors)
/* EF4DA4 8018C064 24423FE0 */  addiu       $v0, $v0, %lo(gActors)
/* EF4DA8 8018C068 1560002B */  bnez        $t3, .Lending_8018C118
/* EF4DAC 8018C06C 3C048017 */   lui        $a0, %hi(D_801779A0)
/* EF4DB0 8018C070 3C028016 */  lui         $v0, %hi(gActors)
/* EF4DB4 8018C074 3C048017 */  lui         $a0, %hi(D_801779A0)
/* EF4DB8 8018C078 248479A0 */  addiu       $a0, $a0, %lo(D_801779A0)
/* EF4DBC 8018C07C 24423FE0 */  addiu       $v0, $v0, %lo(gActors)
/* EF4DC0 8018C080 C4400004 */  lwc1        $fv0, 0x4($v0)
/* EF4DC4 8018C084 C4900000 */  lwc1        $ft4, 0x0($a0)
/* EF4DC8 8018C088 3C063B83 */  lui         $a2, (0x3B83126F >> 16)
/* EF4DCC 8018C08C 3C01C3C8 */  lui         $at, (0xC3C80000 >> 16)
/* EF4DD0 8018C090 4610003E */  c.le.s      $fv0, $ft4
/* EF4DD4 8018C094 3C038017 */  lui         $v1, %hi(gCsFrameCount)
/* EF4DD8 8018C098 34C6126F */  ori         $a2, $a2, (0x3B83126F & 0xFFFF)
/* EF4DDC 8018C09C 3C058017 */  lui         $a1, %hi(D_80177A48)
/* EF4DE0 8018C0A0 45000008 */  bc1f        .Lending_8018C0C4
/* EF4DE4 8018C0A4 3C07447A */   lui        $a3, (0x447A0000 >> 16)
/* EF4DE8 8018C0A8 44819000 */  mtc1        $at, $ft5
/* EF4DEC 8018C0AC 3C018017 */  lui         $at, %hi(D_80177A48)
/* EF4DF0 8018C0B0 4600903C */  c.lt.s      $ft5, $fv0
/* EF4DF4 8018C0B4 00000000 */  nop
/* EF4DF8 8018C0B8 45000002 */  bc1f        .Lending_8018C0C4
/* EF4DFC 8018C0BC 00000000 */   nop
/* EF4E00 8018C0C0 E4207A48 */  swc1        $fv0, %lo(D_80177A48)($at)
.Lending_8018C0C4:
/* EF4E04 8018C0C4 8C637A80 */  lw          $v1, %lo(gCsFrameCount)($v1)
/* EF4E08 8018C0C8 2861001E */  slti        $at, $v1, 0x1E
/* EF4E0C 8018C0CC 1420001D */  bnez        $at, .Lending_8018C144
/* EF4E10 8018C0D0 3C018019 */   lui        $at, %hi(D_ending_80196604)
/* EF4E14 8018C0D4 C4246604 */  lwc1        $ft0, %lo(D_ending_80196604)($at)
/* EF4E18 8018C0D8 8CA57A48 */  lw          $a1, %lo(D_80177A48)($a1)
/* EF4E1C 8018C0DC 0C026F0B */  jal         Math_SmoothStepToF
/* EF4E20 8018C0E0 E7A40010 */   swc1       $ft0, 0x10($sp)
/* EF4E24 8018C0E4 3C018019 */  lui         $at, %hi(D_ending_80196608)
/* EF4E28 8018C0E8 C4266608 */  lwc1        $ft1, %lo(D_ending_80196608)($at)
/* EF4E2C 8018C0EC 3C048017 */  lui         $a0, %hi(D_801779B8)
/* EF4E30 8018C0F0 3C063B03 */  lui         $a2, (0x3B03126F >> 16)
/* EF4E34 8018C0F4 34C6126F */  ori         $a2, $a2, (0x3B03126F & 0xFFFF)
/* EF4E38 8018C0F8 248479B8 */  addiu       $a0, $a0, %lo(D_801779B8)
/* EF4E3C 8018C0FC 3C05431C */  lui         $a1, (0x431C0000 >> 16)
/* EF4E40 8018C100 3C07447A */  lui         $a3, (0x447A0000 >> 16)
/* EF4E44 8018C104 0C026F0B */  jal         Math_SmoothStepToF
/* EF4E48 8018C108 E7A60010 */   swc1       $ft1, 0x10($sp)
/* EF4E4C 8018C10C 3C038017 */  lui         $v1, %hi(gCsFrameCount)
/* EF4E50 8018C110 1000000C */  b           .Lending_8018C144
/* EF4E54 8018C114 8C637A80 */   lw         $v1, %lo(gCsFrameCount)($v1)
.Lending_8018C118:
/* EF4E58 8018C118 C4480004 */  lwc1        $ft2, 0x4($v0)
/* EF4E5C 8018C11C C44A0008 */  lwc1        $ft3, 0x8($v0)
/* EF4E60 8018C120 248479A0 */  addiu       $a0, $a0, %lo(D_801779A0)
/* EF4E64 8018C124 3C018017 */  lui         $at, %hi(D_801779B8)
/* EF4E68 8018C128 E4880000 */  swc1        $ft2, 0x0($a0)
/* EF4E6C 8018C12C E42A79B8 */  swc1        $ft3, %lo(D_801779B8)($at)
/* EF4E70 8018C130 C450000C */  lwc1        $ft4, 0xC($v0)
/* EF4E74 8018C134 3C018017 */  lui         $at, %hi(D_801779C0)
/* EF4E78 8018C138 3C038017 */  lui         $v1, %hi(gCsFrameCount)
/* EF4E7C 8018C13C 8C637A80 */  lw          $v1, %lo(gCsFrameCount)($v1)
/* EF4E80 8018C140 E43079C0 */  swc1        $ft4, %lo(D_801779C0)($at)
.Lending_8018C144:
/* EF4E84 8018C144 28610224 */  slti        $at, $v1, 0x224
/* EF4E88 8018C148 10200010 */  beqz        $at, .Lending_8018C18C
/* EF4E8C 8018C14C 240C00FF */   addiu      $t4, $zero, 0xFF
/* EF4E90 8018C150 286100F0 */  slti        $at, $v1, 0xF0
/* EF4E94 8018C154 1420000D */  bnez        $at, .Lending_8018C18C
/* EF4E98 8018C158 3C028018 */   lui        $v0, %hi(D_801784D0)
/* EF4E9C 8018C15C 244284D0 */  addiu       $v0, $v0, %lo(D_801784D0)
/* EF4EA0 8018C160 3C018019 */  lui         $at, %hi(D_ending_8019660C)
/* EF4EA4 8018C164 C424660C */  lwc1        $ft0, %lo(D_ending_8019660C)($at)
/* EF4EA8 8018C168 C4520000 */  lwc1        $ft5, 0x0($v0)
/* EF4EAC 8018C16C 46049181 */  sub.s       $ft1, $ft5, $ft0
/* EF4EB0 8018C170 E4460000 */  swc1        $ft1, 0x0($v0)
/* EF4EB4 8018C174 C4480000 */  lwc1        $ft2, 0x0($v0)
/* EF4EB8 8018C178 4614403C */  c.lt.s      $ft2, $fs0
/* EF4EBC 8018C17C 00000000 */  nop
/* EF4EC0 8018C180 45000002 */  bc1f        .Lending_8018C18C
/* EF4EC4 8018C184 00000000 */   nop
/* EF4EC8 8018C188 E4540000 */  swc1        $fs0, 0x0($v0)
.Lending_8018C18C:
/* EF4ECC 8018C18C 3C028018 */  lui         $v0, %hi(D_801784D0)
/* EF4ED0 8018C190 28610225 */  slti        $at, $v1, 0x225
/* EF4ED4 8018C194 1420000E */  bnez        $at, .Lending_8018C1D0
/* EF4ED8 8018C198 244284D0 */   addiu      $v0, $v0, %lo(D_801784D0)
/* EF4EDC 8018C19C 3C014370 */  lui         $at, (0x43700000 >> 16)
/* EF4EE0 8018C1A0 44810000 */  mtc1        $at, $fv0
/* EF4EE4 8018C1A4 3C018019 */  lui         $at, %hi(D_ending_80196610)
/* EF4EE8 8018C1A8 C4306610 */  lwc1        $ft4, %lo(D_ending_80196610)($at)
/* EF4EEC 8018C1AC C44A0000 */  lwc1        $ft3, 0x0($v0)
/* EF4EF0 8018C1B0 46105480 */  add.s       $ft5, $ft3, $ft4
/* EF4EF4 8018C1B4 E4520000 */  swc1        $ft5, 0x0($v0)
/* EF4EF8 8018C1B8 C4440000 */  lwc1        $ft0, 0x0($v0)
/* EF4EFC 8018C1BC 4604003C */  c.lt.s      $fv0, $ft0
/* EF4F00 8018C1C0 00000000 */  nop
/* EF4F04 8018C1C4 45020003 */  bc1fl       .Lending_8018C1D4
/* EF4F08 8018C1C8 240102F8 */   addiu      $at, $zero, 0x2F8
/* EF4F0C 8018C1CC E4400000 */  swc1        $fv0, 0x0($v0)
.Lending_8018C1D0:
/* EF4F10 8018C1D0 240102F8 */  addiu       $at, $zero, 0x2F8
.Lending_8018C1D4:
/* EF4F14 8018C1D4 10610002 */  beq         $v1, $at, .Lending_8018C1E0
/* EF4F18 8018C1D8 240103E2 */   addiu      $at, $zero, 0x3E2
/* EF4F1C 8018C1DC 14610002 */  bne         $v1, $at, .Lending_8018C1E8
.Lending_8018C1E0:
/* EF4F20 8018C1E0 3C018018 */   lui        $at, %hi(D_80178358)
/* EF4F24 8018C1E4 AC2C8358 */  sw          $t4, %lo(D_80178358)($at)
.Lending_8018C1E8:
/* EF4F28 8018C1E8 2401030C */  addiu       $at, $zero, 0x30C
/* EF4F2C 8018C1EC 14610002 */  bne         $v1, $at, .Lending_8018C1F8
/* EF4F30 8018C1F0 3C018018 */   lui        $at, %hi(D_80178358)
/* EF4F34 8018C1F4 AC208358 */  sw          $zero, %lo(D_80178358)($at)
.Lending_8018C1F8:
/* EF4F38 8018C1F8 8FA2005C */  lw          $v0, 0x5C($sp)
/* EF4F3C 8018C1FC 8FBF0044 */  lw          $ra, 0x44($sp)
/* EF4F40 8018C200 D7B40028 */  ldc1        $fs0, 0x28($sp)
/* EF4F44 8018C204 8FB00034 */  lw          $s0, 0x34($sp)
/* EF4F48 8018C208 8FB10038 */  lw          $s1, 0x38($sp)
/* EF4F4C 8018C20C 8FB2003C */  lw          $s2, 0x3C($sp)
/* EF4F50 8018C210 8FB30040 */  lw          $s3, 0x40($sp)
/* EF4F54 8018C214 03E00008 */  jr          $ra
/* EF4F58 8018C218 27BD0088 */   addiu      $sp, $sp, 0x88
.section .late_rodata
dlabel D_ending_80196614
/* EFF354 80196614 3C8EFA35 */ .float 0.01745329238

dlabel D_ending_80196618
/* EFF358 80196618 3FC90FDB */ .float 1.570796371

dlabel jtbl_ending_8019661C
/* EFF35C 8019661C 8018CB74 */ .word .Lending_8018CB74
/* EFF360 80196620 8018CBA4 */ .word .Lending_8018CBA4
/* EFF364 80196624 8018CBD4 */ .word .Lending_8018CBD4
/* EFF368 80196628 8018CC00 */ .word .Lending_8018CC00
/* EFF36C 8019662C 8018CC30 */ .word .Lending_8018CC30
/* EFF370 80196630 8018CC64 */ .word .Lending_8018CC64
/* EFF374 80196634 00000000 */ .word 0x00000000
/* EFF378 80196638 00000000 */ .word 0x00000000
/* EFF37C 8019663C 00000000 */ .word 0x00000000


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_ending_8018C21C
/* EF4F5C 8018C21C 27BDFEB8 */  addiu       $sp, $sp, -0x148
/* EF4F60 8018C220 AFBF006C */  sw          $ra, 0x6C($sp)
/* EF4F64 8018C224 AFBE0068 */  sw          $fp, 0x68($sp)
/* EF4F68 8018C228 AFB70064 */  sw          $s7, 0x64($sp)
/* EF4F6C 8018C22C AFB60060 */  sw          $s6, 0x60($sp)
/* EF4F70 8018C230 AFB5005C */  sw          $s5, 0x5C($sp)
/* EF4F74 8018C234 AFB40058 */  sw          $s4, 0x58($sp)
/* EF4F78 8018C238 AFB30054 */  sw          $s3, 0x54($sp)
/* EF4F7C 8018C23C AFB20050 */  sw          $s2, 0x50($sp)
/* EF4F80 8018C240 AFB1004C */  sw          $s1, 0x4C($sp)
/* EF4F84 8018C244 AFB00048 */  sw          $s0, 0x48($sp)
/* EF4F88 8018C248 F7BC0040 */  sdc1        $fs4, 0x40($sp)
/* EF4F8C 8018C24C F7BA0038 */  sdc1        $fs3, 0x38($sp)
/* EF4F90 8018C250 F7B80030 */  sdc1        $fs2, 0x30($sp)
/* EF4F94 8018C254 F7B60028 */  sdc1        $fs1, 0x28($sp)
/* EF4F98 8018C258 F7B40020 */  sdc1        $fs0, 0x20($sp)
/* EF4F9C 8018C25C 3C0F8019 */  lui         $t7, %hi(D_ending_80192E10)
/* EF4FA0 8018C260 25EF2E10 */  addiu       $t7, $t7, %lo(D_ending_80192E10)
/* EF4FA4 8018C264 25E90024 */  addiu       $t1, $t7, 0x24
/* EF4FA8 8018C268 27AE0124 */  addiu       $t6, $sp, 0x124
.Lending_8018C26C:
/* EF4FAC 8018C26C 8DE10000 */  lw          $at, 0x0($t7)
/* EF4FB0 8018C270 25EF000C */  addiu       $t7, $t7, 0xC
/* EF4FB4 8018C274 25CE000C */  addiu       $t6, $t6, 0xC
/* EF4FB8 8018C278 ADC1FFF4 */  sw          $at, -0xC($t6)
/* EF4FBC 8018C27C 8DE1FFF8 */  lw          $at, -0x8($t7)
/* EF4FC0 8018C280 ADC1FFF8 */  sw          $at, -0x8($t6)
/* EF4FC4 8018C284 8DE1FFFC */  lw          $at, -0x4($t7)
/* EF4FC8 8018C288 15E9FFF8 */  bne         $t7, $t1, .Lending_8018C26C
/* EF4FCC 8018C28C ADC1FFFC */   sw         $at, -0x4($t6)
/* EF4FD0 8018C290 3C0B8019 */  lui         $t3, %hi(D_ending_80192E34)
/* EF4FD4 8018C294 256B2E34 */  addiu       $t3, $t3, %lo(D_ending_80192E34)
/* EF4FD8 8018C298 8D610000 */  lw          $at, 0x0($t3)
/* EF4FDC 8018C29C 8D790004 */  lw          $t9, 0x4($t3)
/* EF4FE0 8018C2A0 27AA010C */  addiu       $t2, $sp, 0x10C
/* EF4FE4 8018C2A4 AD410000 */  sw          $at, 0x0($t2)
/* EF4FE8 8018C2A8 AD590004 */  sw          $t9, 0x4($t2)
/* EF4FEC 8018C2AC 8D79000C */  lw          $t9, 0xC($t3)
/* EF4FF0 8018C2B0 8D610008 */  lw          $at, 0x8($t3)
/* EF4FF4 8018C2B4 3C098019 */  lui         $t1, %hi(D_ending_80192E4C)
/* EF4FF8 8018C2B8 AD59000C */  sw          $t9, 0xC($t2)
/* EF4FFC 8018C2BC AD410008 */  sw          $at, 0x8($t2)
/* EF5000 8018C2C0 8D610010 */  lw          $at, 0x10($t3)
/* EF5004 8018C2C4 8D790014 */  lw          $t9, 0x14($t3)
/* EF5008 8018C2C8 25292E4C */  addiu       $t1, $t1, %lo(D_ending_80192E4C)
/* EF500C 8018C2CC AD410010 */  sw          $at, 0x10($t2)
/* EF5010 8018C2D0 AD590014 */  sw          $t9, 0x14($t2)
/* EF5014 8018C2D4 8D2D0004 */  lw          $t5, 0x4($t1)
/* EF5018 8018C2D8 8D210000 */  lw          $at, 0x0($t1)
/* EF501C 8018C2DC 27B800F4 */  addiu       $t8, $sp, 0xF4
/* EF5020 8018C2E0 AF0D0004 */  sw          $t5, 0x4($t8)
/* EF5024 8018C2E4 AF010000 */  sw          $at, 0x0($t8)
/* EF5028 8018C2E8 8D210008 */  lw          $at, 0x8($t1)
/* EF502C 8018C2EC 8D2D000C */  lw          $t5, 0xC($t1)
/* EF5030 8018C2F0 3C0C8017 */  lui         $t4, %hi(gCsFrameCount)
/* EF5034 8018C2F4 AF010008 */  sw          $at, 0x8($t8)
/* EF5038 8018C2F8 AF0D000C */  sw          $t5, 0xC($t8)
/* EF503C 8018C2FC 8D2D0014 */  lw          $t5, 0x14($t1)
/* EF5040 8018C300 8D210010 */  lw          $at, 0x10($t1)
/* EF5044 8018C304 3C138014 */  lui         $s3, %hi(gGfxMatrix)
/* EF5048 8018C308 AF0D0014 */  sw          $t5, 0x14($t8)
/* EF504C 8018C30C AF010010 */  sw          $at, 0x10($t8)
/* EF5050 8018C310 8D8C7A80 */  lw          $t4, %lo(gCsFrameCount)($t4)
/* EF5054 8018C314 2673B3C0 */  addiu       $s3, $s3, %lo(gGfxMatrix)
/* EF5058 8018C318 2981030C */  slti        $at, $t4, 0x30C
/* EF505C 8018C31C 1020001F */  beqz        $at, .Lending_8018C39C
/* EF5060 8018C320 00000000 */   nop
/* EF5064 8018C324 0C0015C2 */  jal         Matrix_Push
/* EF5068 8018C328 02602025 */   or         $a0, $s3, $zero
/* EF506C 8018C32C 3C148013 */  lui         $s4, %hi(gMasterDisp)
/* EF5070 8018C330 26947E64 */  addiu       $s4, $s4, %lo(gMasterDisp)
/* EF5074 8018C334 02802025 */  or          $a0, $s4, $zero
/* EF5078 8018C338 0C02E374 */  jal         RCP_SetupDL
/* EF507C 8018C33C 24050011 */   addiu      $a1, $zero, 0x11
/* EF5080 8018C340 4480D000 */  mtc1        $zero, $fs3
/* EF5084 8018C344 3C07C5BB */  lui         $a3, (0xC5BB8000 >> 16)
/* EF5088 8018C348 240A0001 */  addiu       $t2, $zero, 0x1
/* EF508C 8018C34C 4405D000 */  mfc1        $a1, $fs3
/* EF5090 8018C350 AFAA0010 */  sw          $t2, 0x10($sp)
/* EF5094 8018C354 34E78000 */  ori         $a3, $a3, (0xC5BB8000 & 0xFFFF)
/* EF5098 8018C358 8E640000 */  lw          $a0, 0x0($s3)
/* EF509C 8018C35C 0C0016C0 */  jal         Matrix_Translate
/* EF50A0 8018C360 3C06C496 */   lui        $a2, (0xC4960000 >> 16)
/* EF50A4 8018C364 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF50A8 8018C368 02802025 */   or         $a0, $s4, $zero
/* EF50AC 8018C36C 3C170600 */  lui         $s7, (0x6000000 >> 16)
/* EF50B0 8018C370 8E830000 */  lw          $v1, 0x0($s4)
/* EF50B4 8018C374 3C190701 */  lui         $t9, %hi(D_700C8B0)
/* EF50B8 8018C378 2739C8B0 */  addiu       $t9, $t9, %lo(D_700C8B0)
/* EF50BC 8018C37C 246B0008 */  addiu       $t3, $v1, 0x8
/* EF50C0 8018C380 AE8B0000 */  sw          $t3, 0x0($s4)
/* EF50C4 8018C384 AC790004 */  sw          $t9, 0x4($v1)
/* EF50C8 8018C388 AC770000 */  sw          $s7, 0x0($v1)
/* EF50CC 8018C38C 0C0015D0 */  jal         Matrix_Pop
/* EF50D0 8018C390 02602025 */   or         $a0, $s3, $zero
/* EF50D4 8018C394 10000026 */  b           .Lending_8018C430
/* EF50D8 8018C398 00000000 */   nop
.Lending_8018C39C:
/* EF50DC 8018C39C 3C138014 */  lui         $s3, %hi(gGfxMatrix)
/* EF50E0 8018C3A0 2673B3C0 */  addiu       $s3, $s3, %lo(gGfxMatrix)
/* EF50E4 8018C3A4 0C0015C2 */  jal         Matrix_Push
/* EF50E8 8018C3A8 02602025 */   or         $a0, $s3, $zero
/* EF50EC 8018C3AC 3C148013 */  lui         $s4, %hi(gMasterDisp)
/* EF50F0 8018C3B0 26947E64 */  addiu       $s4, $s4, %lo(gMasterDisp)
/* EF50F4 8018C3B4 02802025 */  or          $a0, $s4, $zero
/* EF50F8 8018C3B8 0C02E374 */  jal         RCP_SetupDL
/* EF50FC 8018C3BC 24050011 */   addiu      $a1, $zero, 0x11
/* EF5100 8018C3C0 3C06C53B */  lui         $a2, (0xC53B8000 >> 16)
/* EF5104 8018C3C4 3C07453B */  lui         $a3, (0x453B8000 >> 16)
/* EF5108 8018C3C8 240E0001 */  addiu       $t6, $zero, 0x1
/* EF510C 8018C3CC AFAE0010 */  sw          $t6, 0x10($sp)
/* EF5110 8018C3D0 34E78000 */  ori         $a3, $a3, (0x453B8000 & 0xFFFF)
/* EF5114 8018C3D4 34C68000 */  ori         $a2, $a2, (0xC53B8000 & 0xFFFF)
/* EF5118 8018C3D8 8E640000 */  lw          $a0, 0x0($s3)
/* EF511C 8018C3DC 0C0016C0 */  jal         Matrix_Translate
/* EF5120 8018C3E0 3C05C4FA */   lui        $a1, (0xC4FA0000 >> 16)
/* EF5124 8018C3E4 3C053FF5 */  lui         $a1, (0x3FF5BE0B >> 16)
/* EF5128 8018C3E8 34A5BE0B */  ori         $a1, $a1, (0x3FF5BE0B & 0xFFFF)
/* EF512C 8018C3EC 8E640000 */  lw          $a0, 0x0($s3)
/* EF5130 8018C3F0 0C0017A4 */  jal         Matrix_RotateY
/* EF5134 8018C3F4 24060001 */   addiu      $a2, $zero, 0x1
/* EF5138 8018C3F8 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF513C 8018C3FC 02802025 */   or         $a0, $s4, $zero
/* EF5140 8018C400 3C170600 */  lui         $s7, (0x6000000 >> 16)
/* EF5144 8018C404 8E830000 */  lw          $v1, 0x0($s4)
/* EF5148 8018C408 3C180701 */  lui         $t8, %hi(D_700C8B0)
/* EF514C 8018C40C 2718C8B0 */  addiu       $t8, $t8, %lo(D_700C8B0)
/* EF5150 8018C410 246F0008 */  addiu       $t7, $v1, 0x8
/* EF5154 8018C414 AE8F0000 */  sw          $t7, 0x0($s4)
/* EF5158 8018C418 AC780004 */  sw          $t8, 0x4($v1)
/* EF515C 8018C41C AC770000 */  sw          $s7, 0x0($v1)
/* EF5160 8018C420 0C0015D0 */  jal         Matrix_Pop
/* EF5164 8018C424 02602025 */   or         $a0, $s3, $zero
/* EF5168 8018C428 4480D000 */  mtc1        $zero, $fs3
/* EF516C 8018C42C 00000000 */  nop
.Lending_8018C430:
/* EF5170 8018C430 0C0015C2 */  jal         Matrix_Push
/* EF5174 8018C434 02602025 */   or         $a0, $s3, $zero
/* EF5178 8018C438 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* EF517C 8018C43C 4481E000 */  mtc1        $at, $fs4
/* EF5180 8018C440 3C014270 */  lui         $at, (0x42700000 >> 16)
/* EF5184 8018C444 4481C000 */  mtc1        $at, $fs2
/* EF5188 8018C448 3C018019 */  lui         $at, %hi(D_ending_80196614)
/* EF518C 8018C44C C4366614 */  lwc1        $fs1, %lo(D_ending_80196614)($at)
/* EF5190 8018C450 3C018019 */  lui         $at, %hi(D_ending_80196618)
/* EF5194 8018C454 3C168017 */  lui         $s6, %hi(gActors + 0xAE3C)
/* EF5198 8018C458 3C1E8017 */  lui         $fp, %hi(gGameFrameCount)
/* EF519C 8018C45C 27DE7DB0 */  addiu       $fp, $fp, %lo(gGameFrameCount)
/* EF51A0 8018C460 26D6EE1C */  addiu       $s6, $s6, %lo(gActors + 0xAE3C)
/* EF51A4 8018C464 C4346618 */  lwc1        $fs0, %lo(D_ending_80196618)($at)
/* EF51A8 8018C468 92C90000 */  lbu         $t1, 0x0($s6)
.Lending_8018C46C:
/* EF51AC 8018C46C 11200252 */  beqz        $t1, .Lending_8018CDB8
/* EF51B0 8018C470 00000000 */   nop
/* EF51B4 8018C474 0C0015C2 */  jal         Matrix_Push
/* EF51B8 8018C478 02602025 */   or         $a0, $s3, $zero
/* EF51BC 8018C47C 96C20002 */  lhu         $v0, 0x2($s6)
/* EF51C0 8018C480 24010001 */  addiu       $at, $zero, 0x1
/* EF51C4 8018C484 5040000C */  beql        $v0, $zero, .Lending_8018C4B8
/* EF51C8 8018C488 86CD00B8 */   lh         $t5, 0xB8($s6)
/* EF51CC 8018C48C 104100E7 */  beq         $v0, $at, .Lending_8018C82C
/* EF51D0 8018C490 02802025 */   or         $a0, $s4, $zero
/* EF51D4 8018C494 24010002 */  addiu       $at, $zero, 0x2
/* EF51D8 8018C498 10410115 */  beq         $v0, $at, .Lending_8018C8F0
/* EF51DC 8018C49C 02802025 */   or         $a0, $s4, $zero
/* EF51E0 8018C4A0 24010003 */  addiu       $at, $zero, 0x3
/* EF51E4 8018C4A4 10410143 */  beq         $v0, $at, .Lending_8018C9B4
/* EF51E8 8018C4A8 02802025 */   or         $a0, $s4, $zero
/* EF51EC 8018C4AC 10000240 */  b           .Lending_8018CDB0
/* EF51F0 8018C4B0 00000000 */   nop
/* EF51F4 8018C4B4 86CD00B8 */  lh          $t5, 0xB8($s6)
.Lending_8018C4B8:
/* EF51F8 8018C4B8 24050017 */  addiu       $a1, $zero, 0x17
/* EF51FC 8018C4BC 3C150701 */  lui         $s5, %hi(D_7010970)
/* EF5200 8018C4C0 15A000AE */  bnez        $t5, .Lending_8018C77C
/* EF5204 8018C4C4 02802025 */   or         $a0, $s4, $zero
/* EF5208 8018C4C8 02802025 */  or          $a0, $s4, $zero
/* EF520C 8018C4CC 0C02E374 */  jal         RCP_SetupDL
/* EF5210 8018C4D0 26B50970 */   addiu      $s5, $s5, %lo(D_7010970)
/* EF5214 8018C4D4 240C0001 */  addiu       $t4, $zero, 0x1
/* EF5218 8018C4D8 AFAC0010 */  sw          $t4, 0x10($sp)
/* EF521C 8018C4DC 8E640000 */  lw          $a0, 0x0($s3)
/* EF5220 8018C4E0 8EC50004 */  lw          $a1, 0x4($s6)
/* EF5224 8018C4E4 8EC60008 */  lw          $a2, 0x8($s6)
/* EF5228 8018C4E8 0C0016C0 */  jal         Matrix_Translate
/* EF522C 8018C4EC 8EC7000C */   lw         $a3, 0xC($s6)
/* EF5230 8018C4F0 C6C00110 */  lwc1        $fv0, 0x110($s6)
/* EF5234 8018C4F4 240A0001 */  addiu       $t2, $zero, 0x1
/* EF5238 8018C4F8 AFAA0010 */  sw          $t2, 0x10($sp)
/* EF523C 8018C4FC 44050000 */  mfc1        $a1, $fv0
/* EF5240 8018C500 44060000 */  mfc1        $a2, $fv0
/* EF5244 8018C504 44070000 */  mfc1        $a3, $fv0
/* EF5248 8018C508 0C00170D */  jal         Matrix_Scale
/* EF524C 8018C50C 8E640000 */   lw         $a0, 0x0($s3)
/* EF5250 8018C510 C6C40014 */  lwc1        $ft0, 0x14($s6)
/* EF5254 8018C514 8E640000 */  lw          $a0, 0x0($s3)
/* EF5258 8018C518 24060001 */  addiu       $a2, $zero, 0x1
/* EF525C 8018C51C 46162182 */  mul.s       $ft1, $ft0, $fs1
/* EF5260 8018C520 44053000 */  mfc1        $a1, $ft1
/* EF5264 8018C524 0C0017A4 */  jal         Matrix_RotateY
/* EF5268 8018C528 00000000 */   nop
/* EF526C 8018C52C C6C80010 */  lwc1        $ft2, 0x10($s6)
/* EF5270 8018C530 8E640000 */  lw          $a0, 0x0($s3)
/* EF5274 8018C534 24060001 */  addiu       $a2, $zero, 0x1
/* EF5278 8018C538 46164282 */  mul.s       $ft3, $ft2, $fs1
/* EF527C 8018C53C 44055000 */  mfc1        $a1, $ft3
/* EF5280 8018C540 0C001751 */  jal         Matrix_RotateX
/* EF5284 8018C544 00000000 */   nop
/* EF5288 8018C548 C6D00018 */  lwc1        $ft4, 0x18($s6)
/* EF528C 8018C54C 8E640000 */  lw          $a0, 0x0($s3)
/* EF5290 8018C550 24060001 */  addiu       $a2, $zero, 0x1
/* EF5294 8018C554 46168482 */  mul.s       $ft5, $ft4, $fs1
/* EF5298 8018C558 44059000 */  mfc1        $a1, $ft5
/* EF529C 8018C55C 0C0017F8 */  jal         Matrix_RotateZ
/* EF52A0 8018C560 00000000 */   nop
/* EF52A4 8018C564 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF52A8 8018C568 02802025 */   or         $a0, $s4, $zero
/* EF52AC 8018C56C 3C048017 */  lui         $a0, %hi(D_80177B8C)
/* EF52B0 8018C570 90847B8C */  lbu         $a0, %lo(D_80177B8C)($a0)
/* EF52B4 8018C574 24050031 */  addiu       $a1, $zero, 0x31
/* EF52B8 8018C578 1080000A */  beqz        $a0, .Lending_8018C5A4
/* EF52BC 8018C57C 00000000 */   nop
/* EF52C0 8018C580 8E830000 */  lw          $v1, 0x0($s4)
/* EF52C4 8018C584 3C190E00 */  lui         $t9, %hi(D_E000000)
/* EF52C8 8018C588 27390000 */  addiu       $t9, $t9, %lo(D_E000000)
/* EF52CC 8018C58C 246B0008 */  addiu       $t3, $v1, 0x8
/* EF52D0 8018C590 AE8B0000 */  sw          $t3, 0x0($s4)
/* EF52D4 8018C594 AC790004 */  sw          $t9, 0x4($v1)
/* EF52D8 8018C598 AC770000 */  sw          $s7, 0x0($v1)
/* EF52DC 8018C59C 3C048017 */  lui         $a0, %hi(D_80177B8C)
/* EF52E0 8018C5A0 90847B8C */  lbu         $a0, %lo(D_80177B8C)($a0)
.Lending_8018C5A4:
/* EF52E4 8018C5A4 14800008 */  bnez        $a0, .Lending_8018C5C8
/* EF52E8 8018C5A8 00000000 */   nop
/* EF52EC 8018C5AC 8E830000 */  lw          $v1, 0x0($s4)
/* EF52F0 8018C5B0 3C0F0E00 */  lui         $t7, %hi(D_E003AB0)
/* EF52F4 8018C5B4 25EF3AB0 */  addiu       $t7, $t7, %lo(D_E003AB0)
/* EF52F8 8018C5B8 246E0008 */  addiu       $t6, $v1, 0x8
/* EF52FC 8018C5BC AE8E0000 */  sw          $t6, 0x0($s4)
/* EF5300 8018C5C0 AC6F0004 */  sw          $t7, 0x4($v1)
/* EF5304 8018C5C4 AC770000 */  sw          $s7, 0x0($v1)
.Lending_8018C5C8:
/* EF5308 8018C5C8 0C02E374 */  jal         RCP_SetupDL
/* EF530C 8018C5CC 02802025 */   or         $a0, $s4, $zero
/* EF5310 8018C5D0 8E830000 */  lw          $v1, 0x0($s4)
/* EF5314 8018C5D4 3C09FA00 */  lui         $t1, (0xFA000000 >> 16)
/* EF5318 8018C5D8 240DFF40 */  addiu       $t5, $zero, -0xC0
/* EF531C 8018C5DC 24780008 */  addiu       $t8, $v1, 0x8
/* EF5320 8018C5E0 AE980000 */  sw          $t8, 0x0($s4)
/* EF5324 8018C5E4 AC6D0004 */  sw          $t5, 0x4($v1)
/* EF5328 8018C5E8 AC690000 */  sw          $t1, 0x0($v1)
/* EF532C 8018C5EC 8E830000 */  lw          $v1, 0x0($s4)
/* EF5330 8018C5F0 3C0BFFFF */  lui         $t3, (0xFFFF0040 >> 16)
/* EF5334 8018C5F4 356B0040 */  ori         $t3, $t3, (0xFFFF0040 & 0xFFFF)
/* EF5338 8018C5F8 246C0008 */  addiu       $t4, $v1, 0x8
/* EF533C 8018C5FC AE8C0000 */  sw          $t4, 0x0($s4)
/* EF5340 8018C600 3C0AFB00 */  lui         $t2, (0xFB000000 >> 16)
/* EF5344 8018C604 AC6A0000 */  sw          $t2, 0x0($v1)
/* EF5348 8018C608 AC6B0004 */  sw          $t3, 0x4($v1)
/* EF534C 8018C60C 00009025 */  or          $s2, $zero, $zero
/* EF5350 8018C610 27B10124 */  addiu       $s1, $sp, 0x124
.Lending_8018C614:
/* EF5354 8018C614 0C0015C2 */  jal         Matrix_Push
/* EF5358 8018C618 02602025 */   or         $a0, $s3, $zero
/* EF535C 8018C61C 8FD90000 */  lw          $t9, 0x0($fp)
/* EF5360 8018C620 27B8010C */  addiu       $t8, $sp, 0x10C
/* EF5364 8018C624 02602025 */  or          $a0, $s3, $zero
/* EF5368 8018C628 07210004 */  bgez        $t9, .Lending_8018C63C
/* EF536C 8018C62C 332E0001 */   andi       $t6, $t9, 0x1
/* EF5370 8018C630 11C00002 */  beqz        $t6, .Lending_8018C63C
/* EF5374 8018C634 00000000 */   nop
/* EF5378 8018C638 25CEFFFE */  addiu       $t6, $t6, -0x2
.Lending_8018C63C:
/* EF537C 8018C63C 000E7880 */  sll         $t7, $t6, 2
/* EF5380 8018C640 01EE7823 */  subu        $t7, $t7, $t6
/* EF5384 8018C644 000F7880 */  sll         $t7, $t7, 2
/* EF5388 8018C648 0C0015C2 */  jal         Matrix_Push
/* EF538C 8018C64C 01F88021 */   addu       $s0, $t7, $t8
/* EF5390 8018C650 8E250000 */  lw          $a1, 0x0($s1)
/* EF5394 8018C654 8E260004 */  lw          $a2, 0x4($s1)
/* EF5398 8018C658 8E270008 */  lw          $a3, 0x8($s1)
/* EF539C 8018C65C 24090001 */  addiu       $t1, $zero, 0x1
/* EF53A0 8018C660 AFA90010 */  sw          $t1, 0x10($sp)
/* EF53A4 8018C664 0C0016C0 */  jal         Matrix_Translate
/* EF53A8 8018C668 8E640000 */   lw         $a0, 0x0($s3)
/* EF53AC 8018C66C 8E050000 */  lw          $a1, 0x0($s0)
/* EF53B0 8018C670 8E060004 */  lw          $a2, 0x4($s0)
/* EF53B4 8018C674 8E070008 */  lw          $a3, 0x8($s0)
/* EF53B8 8018C678 240D0001 */  addiu       $t5, $zero, 0x1
/* EF53BC 8018C67C AFAD0010 */  sw          $t5, 0x10($sp)
/* EF53C0 8018C680 0C00170D */  jal         Matrix_Scale
/* EF53C4 8018C684 8E640000 */   lw         $a0, 0x0($s3)
/* EF53C8 8018C688 4405A000 */  mfc1        $a1, $fs0
/* EF53CC 8018C68C 8E640000 */  lw          $a0, 0x0($s3)
/* EF53D0 8018C690 0C001751 */  jal         Matrix_RotateX
/* EF53D4 8018C694 24060001 */   addiu      $a2, $zero, 0x1
/* EF53D8 8018C698 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF53DC 8018C69C 02802025 */   or         $a0, $s4, $zero
/* EF53E0 8018C6A0 8E830000 */  lw          $v1, 0x0($s4)
/* EF53E4 8018C6A4 246C0008 */  addiu       $t4, $v1, 0x8
/* EF53E8 8018C6A8 AE8C0000 */  sw          $t4, 0x0($s4)
/* EF53EC 8018C6AC AC750004 */  sw          $s5, 0x4($v1)
/* EF53F0 8018C6B0 AC770000 */  sw          $s7, 0x0($v1)
/* EF53F4 8018C6B4 0C0015D0 */  jal         Matrix_Pop
/* EF53F8 8018C6B8 02602025 */   or         $a0, $s3, $zero
/* EF53FC 8018C6BC 0C0015C2 */  jal         Matrix_Push
/* EF5400 8018C6C0 02602025 */   or         $a0, $s3, $zero
/* EF5404 8018C6C4 C6240008 */  lwc1        $ft0, 0x8($s1)
/* EF5408 8018C6C8 8FCA0000 */  lw          $t2, 0x0($fp)
/* EF540C 8018C6CC 27AE00F4 */  addiu       $t6, $sp, 0xF4
/* EF5410 8018C6D0 46182181 */  sub.s       $ft1, $ft0, $fs2
/* EF5414 8018C6D4 05410004 */  bgez        $t2, .Lending_8018C6E8
/* EF5418 8018C6D8 314B0001 */   andi       $t3, $t2, 0x1
/* EF541C 8018C6DC 11600002 */  beqz        $t3, .Lending_8018C6E8
/* EF5420 8018C6E0 00000000 */   nop
/* EF5424 8018C6E4 256BFFFE */  addiu       $t3, $t3, -0x2
.Lending_8018C6E8:
/* EF5428 8018C6E8 000BC880 */  sll         $t9, $t3, 2
/* EF542C 8018C6EC 032BC823 */  subu        $t9, $t9, $t3
/* EF5430 8018C6F0 0019C880 */  sll         $t9, $t9, 2
/* EF5434 8018C6F4 44073000 */  mfc1        $a3, $ft1
/* EF5438 8018C6F8 8E250000 */  lw          $a1, 0x0($s1)
/* EF543C 8018C6FC 8E260004 */  lw          $a2, 0x4($s1)
/* EF5440 8018C700 240F0001 */  addiu       $t7, $zero, 0x1
/* EF5444 8018C704 032E8021 */  addu        $s0, $t9, $t6
/* EF5448 8018C708 AFAF0010 */  sw          $t7, 0x10($sp)
/* EF544C 8018C70C 0C0016C0 */  jal         Matrix_Translate
/* EF5450 8018C710 8E640000 */   lw         $a0, 0x0($s3)
/* EF5454 8018C714 8E050000 */  lw          $a1, 0x0($s0)
/* EF5458 8018C718 8E060004 */  lw          $a2, 0x4($s0)
/* EF545C 8018C71C 8E070008 */  lw          $a3, 0x8($s0)
/* EF5460 8018C720 24180001 */  addiu       $t8, $zero, 0x1
/* EF5464 8018C724 AFB80010 */  sw          $t8, 0x10($sp)
/* EF5468 8018C728 0C00170D */  jal         Matrix_Scale
/* EF546C 8018C72C 8E640000 */   lw         $a0, 0x0($s3)
/* EF5470 8018C730 4405A000 */  mfc1        $a1, $fs0
/* EF5474 8018C734 8E640000 */  lw          $a0, 0x0($s3)
/* EF5478 8018C738 0C001751 */  jal         Matrix_RotateX
/* EF547C 8018C73C 24060001 */   addiu      $a2, $zero, 0x1
/* EF5480 8018C740 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF5484 8018C744 02802025 */   or         $a0, $s4, $zero
/* EF5488 8018C748 8E830000 */  lw          $v1, 0x0($s4)
/* EF548C 8018C74C 24690008 */  addiu       $t1, $v1, 0x8
/* EF5490 8018C750 AE890000 */  sw          $t1, 0x0($s4)
/* EF5494 8018C754 AC750004 */  sw          $s5, 0x4($v1)
/* EF5498 8018C758 AC770000 */  sw          $s7, 0x0($v1)
/* EF549C 8018C75C 0C0015D0 */  jal         Matrix_Pop
/* EF54A0 8018C760 02602025 */   or         $a0, $s3, $zero
/* EF54A4 8018C764 26520001 */  addiu       $s2, $s2, 0x1
/* EF54A8 8018C768 24010003 */  addiu       $at, $zero, 0x3
/* EF54AC 8018C76C 1641FFA9 */  bne         $s2, $at, .Lending_8018C614
/* EF54B0 8018C770 2631000C */   addiu      $s1, $s1, 0xC
/* EF54B4 8018C774 1000018E */  b           .Lending_8018CDB0
/* EF54B8 8018C778 00000000 */   nop
.Lending_8018C77C:
/* EF54BC 8018C77C 0C02E374 */  jal         RCP_SetupDL
/* EF54C0 8018C780 24050017 */   addiu      $a1, $zero, 0x17
/* EF54C4 8018C784 240D0001 */  addiu       $t5, $zero, 0x1
/* EF54C8 8018C788 AFAD0010 */  sw          $t5, 0x10($sp)
/* EF54CC 8018C78C 8E640000 */  lw          $a0, 0x0($s3)
/* EF54D0 8018C790 8EC50004 */  lw          $a1, 0x4($s6)
/* EF54D4 8018C794 8EC60008 */  lw          $a2, 0x8($s6)
/* EF54D8 8018C798 0C0016C0 */  jal         Matrix_Translate
/* EF54DC 8018C79C 8EC7000C */   lw         $a3, 0xC($s6)
/* EF54E0 8018C7A0 C6C00110 */  lwc1        $fv0, 0x110($s6)
/* EF54E4 8018C7A4 240C0001 */  addiu       $t4, $zero, 0x1
/* EF54E8 8018C7A8 AFAC0010 */  sw          $t4, 0x10($sp)
/* EF54EC 8018C7AC 44050000 */  mfc1        $a1, $fv0
/* EF54F0 8018C7B0 44060000 */  mfc1        $a2, $fv0
/* EF54F4 8018C7B4 44070000 */  mfc1        $a3, $fv0
/* EF54F8 8018C7B8 0C00170D */  jal         Matrix_Scale
/* EF54FC 8018C7BC 8E640000 */   lw         $a0, 0x0($s3)
/* EF5500 8018C7C0 C6C80014 */  lwc1        $ft2, 0x14($s6)
/* EF5504 8018C7C4 8E640000 */  lw          $a0, 0x0($s3)
/* EF5508 8018C7C8 24060001 */  addiu       $a2, $zero, 0x1
/* EF550C 8018C7CC 46164282 */  mul.s       $ft3, $ft2, $fs1
/* EF5510 8018C7D0 44055000 */  mfc1        $a1, $ft3
/* EF5514 8018C7D4 0C0017A4 */  jal         Matrix_RotateY
/* EF5518 8018C7D8 00000000 */   nop
/* EF551C 8018C7DC C6D00010 */  lwc1        $ft4, 0x10($s6)
/* EF5520 8018C7E0 8E640000 */  lw          $a0, 0x0($s3)
/* EF5524 8018C7E4 24060001 */  addiu       $a2, $zero, 0x1
/* EF5528 8018C7E8 46168482 */  mul.s       $ft5, $ft4, $fs1
/* EF552C 8018C7EC 44059000 */  mfc1        $a1, $ft5
/* EF5530 8018C7F0 0C001751 */  jal         Matrix_RotateX
/* EF5534 8018C7F4 00000000 */   nop
/* EF5538 8018C7F8 C6C40018 */  lwc1        $ft0, 0x18($s6)
/* EF553C 8018C7FC 8E640000 */  lw          $a0, 0x0($s3)
/* EF5540 8018C800 24060001 */  addiu       $a2, $zero, 0x1
/* EF5544 8018C804 46162182 */  mul.s       $ft1, $ft0, $fs1
/* EF5548 8018C808 44053000 */  mfc1        $a1, $ft1
/* EF554C 8018C80C 0C0017F8 */  jal         Matrix_RotateZ
/* EF5550 8018C810 00000000 */   nop
/* EF5554 8018C814 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF5558 8018C818 02802025 */   or         $a0, $s4, $zero
/* EF555C 8018C81C 0C014571 */  jal         func_800515C4
/* EF5560 8018C820 00000000 */   nop
/* EF5564 8018C824 10000162 */  b           .Lending_8018CDB0
/* EF5568 8018C828 00000000 */   nop
.Lending_8018C82C:
/* EF556C 8018C82C 3C100701 */  lui         $s0, %hi(D_700F240)
/* EF5570 8018C830 2610F240 */  addiu       $s0, $s0, %lo(D_700F240)
/* EF5574 8018C834 0C02E374 */  jal         RCP_SetupDL
/* EF5578 8018C838 24050017 */   addiu      $a1, $zero, 0x17
/* EF557C 8018C83C 240A0001 */  addiu       $t2, $zero, 0x1
/* EF5580 8018C840 AFAA0010 */  sw          $t2, 0x10($sp)
/* EF5584 8018C844 8E640000 */  lw          $a0, 0x0($s3)
/* EF5588 8018C848 8EC50004 */  lw          $a1, 0x4($s6)
/* EF558C 8018C84C 8EC60008 */  lw          $a2, 0x8($s6)
/* EF5590 8018C850 0C0016C0 */  jal         Matrix_Translate
/* EF5594 8018C854 8EC7000C */   lw         $a3, 0xC($s6)
/* EF5598 8018C858 C6C00110 */  lwc1        $fv0, 0x110($s6)
/* EF559C 8018C85C 240B0001 */  addiu       $t3, $zero, 0x1
/* EF55A0 8018C860 AFAB0010 */  sw          $t3, 0x10($sp)
/* EF55A4 8018C864 44050000 */  mfc1        $a1, $fv0
/* EF55A8 8018C868 44060000 */  mfc1        $a2, $fv0
/* EF55AC 8018C86C 44070000 */  mfc1        $a3, $fv0
/* EF55B0 8018C870 0C00170D */  jal         Matrix_Scale
/* EF55B4 8018C874 8E640000 */   lw         $a0, 0x0($s3)
/* EF55B8 8018C878 C6C80014 */  lwc1        $ft2, 0x14($s6)
/* EF55BC 8018C87C 8E640000 */  lw          $a0, 0x0($s3)
/* EF55C0 8018C880 24060001 */  addiu       $a2, $zero, 0x1
/* EF55C4 8018C884 46164282 */  mul.s       $ft3, $ft2, $fs1
/* EF55C8 8018C888 44055000 */  mfc1        $a1, $ft3
/* EF55CC 8018C88C 0C0017A4 */  jal         Matrix_RotateY
/* EF55D0 8018C890 00000000 */   nop
/* EF55D4 8018C894 C6D00010 */  lwc1        $ft4, 0x10($s6)
/* EF55D8 8018C898 8E640000 */  lw          $a0, 0x0($s3)
/* EF55DC 8018C89C 24060001 */  addiu       $a2, $zero, 0x1
/* EF55E0 8018C8A0 46168482 */  mul.s       $ft5, $ft4, $fs1
/* EF55E4 8018C8A4 44059000 */  mfc1        $a1, $ft5
/* EF55E8 8018C8A8 0C001751 */  jal         Matrix_RotateX
/* EF55EC 8018C8AC 00000000 */   nop
/* EF55F0 8018C8B0 C6C40018 */  lwc1        $ft0, 0x18($s6)
/* EF55F4 8018C8B4 8E640000 */  lw          $a0, 0x0($s3)
/* EF55F8 8018C8B8 24060001 */  addiu       $a2, $zero, 0x1
/* EF55FC 8018C8BC 46162182 */  mul.s       $ft1, $ft0, $fs1
/* EF5600 8018C8C0 44053000 */  mfc1        $a1, $ft1
/* EF5604 8018C8C4 0C0017F8 */  jal         Matrix_RotateZ
/* EF5608 8018C8C8 00000000 */   nop
/* EF560C 8018C8CC 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF5610 8018C8D0 02802025 */   or         $a0, $s4, $zero
/* EF5614 8018C8D4 8E830000 */  lw          $v1, 0x0($s4)
/* EF5618 8018C8D8 24790008 */  addiu       $t9, $v1, 0x8
/* EF561C 8018C8DC AE990000 */  sw          $t9, 0x0($s4)
/* EF5620 8018C8E0 AC700004 */  sw          $s0, 0x4($v1)
/* EF5624 8018C8E4 AC770000 */  sw          $s7, 0x0($v1)
/* EF5628 8018C8E8 10000131 */  b           .Lending_8018CDB0
/* EF562C 8018C8EC 00000000 */   nop
.Lending_8018C8F0:
/* EF5630 8018C8F0 3C100701 */  lui         $s0, %hi(D_700F320)
/* EF5634 8018C8F4 2610F320 */  addiu       $s0, $s0, %lo(D_700F320)
/* EF5638 8018C8F8 0C02E374 */  jal         RCP_SetupDL
/* EF563C 8018C8FC 24050017 */   addiu      $a1, $zero, 0x17
/* EF5640 8018C900 240E0001 */  addiu       $t6, $zero, 0x1
/* EF5644 8018C904 AFAE0010 */  sw          $t6, 0x10($sp)
/* EF5648 8018C908 8E640000 */  lw          $a0, 0x0($s3)
/* EF564C 8018C90C 8EC50004 */  lw          $a1, 0x4($s6)
/* EF5650 8018C910 8EC60008 */  lw          $a2, 0x8($s6)
/* EF5654 8018C914 0C0016C0 */  jal         Matrix_Translate
/* EF5658 8018C918 8EC7000C */   lw         $a3, 0xC($s6)
/* EF565C 8018C91C C6C00110 */  lwc1        $fv0, 0x110($s6)
/* EF5660 8018C920 240F0001 */  addiu       $t7, $zero, 0x1
/* EF5664 8018C924 AFAF0010 */  sw          $t7, 0x10($sp)
/* EF5668 8018C928 44050000 */  mfc1        $a1, $fv0
/* EF566C 8018C92C 44060000 */  mfc1        $a2, $fv0
/* EF5670 8018C930 44070000 */  mfc1        $a3, $fv0
/* EF5674 8018C934 0C00170D */  jal         Matrix_Scale
/* EF5678 8018C938 8E640000 */   lw         $a0, 0x0($s3)
/* EF567C 8018C93C C6C80014 */  lwc1        $ft2, 0x14($s6)
/* EF5680 8018C940 8E640000 */  lw          $a0, 0x0($s3)
/* EF5684 8018C944 24060001 */  addiu       $a2, $zero, 0x1
/* EF5688 8018C948 46164282 */  mul.s       $ft3, $ft2, $fs1
/* EF568C 8018C94C 44055000 */  mfc1        $a1, $ft3
/* EF5690 8018C950 0C0017A4 */  jal         Matrix_RotateY
/* EF5694 8018C954 00000000 */   nop
/* EF5698 8018C958 C6D00010 */  lwc1        $ft4, 0x10($s6)
/* EF569C 8018C95C 8E640000 */  lw          $a0, 0x0($s3)
/* EF56A0 8018C960 24060001 */  addiu       $a2, $zero, 0x1
/* EF56A4 8018C964 46168482 */  mul.s       $ft5, $ft4, $fs1
/* EF56A8 8018C968 44059000 */  mfc1        $a1, $ft5
/* EF56AC 8018C96C 0C001751 */  jal         Matrix_RotateX
/* EF56B0 8018C970 00000000 */   nop
/* EF56B4 8018C974 C6C40018 */  lwc1        $ft0, 0x18($s6)
/* EF56B8 8018C978 8E640000 */  lw          $a0, 0x0($s3)
/* EF56BC 8018C97C 24060001 */  addiu       $a2, $zero, 0x1
/* EF56C0 8018C980 46162182 */  mul.s       $ft1, $ft0, $fs1
/* EF56C4 8018C984 44053000 */  mfc1        $a1, $ft1
/* EF56C8 8018C988 0C0017F8 */  jal         Matrix_RotateZ
/* EF56CC 8018C98C 00000000 */   nop
/* EF56D0 8018C990 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF56D4 8018C994 02802025 */   or         $a0, $s4, $zero
/* EF56D8 8018C998 8E830000 */  lw          $v1, 0x0($s4)
/* EF56DC 8018C99C 24780008 */  addiu       $t8, $v1, 0x8
/* EF56E0 8018C9A0 AE980000 */  sw          $t8, 0x0($s4)
/* EF56E4 8018C9A4 AC700004 */  sw          $s0, 0x4($v1)
/* EF56E8 8018C9A8 AC770000 */  sw          $s7, 0x0($v1)
/* EF56EC 8018C9AC 10000100 */  b           .Lending_8018CDB0
/* EF56F0 8018C9B0 00000000 */   nop
.Lending_8018C9B4:
/* EF56F4 8018C9B4 3C150701 */  lui         $s5, %hi(D_7010970)
/* EF56F8 8018C9B8 3C100D01 */  lui         $s0, %hi(D_D00B880)
/* EF56FC 8018C9BC 3C110701 */  lui         $s1, %hi(D_700C620)
/* EF5700 8018C9C0 2631C620 */  addiu       $s1, $s1, %lo(D_700C620)
/* EF5704 8018C9C4 2610B880 */  addiu       $s0, $s0, %lo(D_D00B880)
/* EF5708 8018C9C8 26B50970 */  addiu       $s5, $s5, %lo(D_7010970)
/* EF570C 8018C9CC 0C02E374 */  jal         RCP_SetupDL
/* EF5710 8018C9D0 24050017 */   addiu      $a1, $zero, 0x17
/* EF5714 8018C9D4 24090001 */  addiu       $t1, $zero, 0x1
/* EF5718 8018C9D8 AFA90010 */  sw          $t1, 0x10($sp)
/* EF571C 8018C9DC 8E640000 */  lw          $a0, 0x0($s3)
/* EF5720 8018C9E0 8EC50004 */  lw          $a1, 0x4($s6)
/* EF5724 8018C9E4 8EC60008 */  lw          $a2, 0x8($s6)
/* EF5728 8018C9E8 0C0016C0 */  jal         Matrix_Translate
/* EF572C 8018C9EC 8EC7000C */   lw         $a3, 0xC($s6)
/* EF5730 8018C9F0 C6C00110 */  lwc1        $fv0, 0x110($s6)
/* EF5734 8018C9F4 240D0001 */  addiu       $t5, $zero, 0x1
/* EF5738 8018C9F8 AFAD0010 */  sw          $t5, 0x10($sp)
/* EF573C 8018C9FC 44050000 */  mfc1        $a1, $fv0
/* EF5740 8018CA00 44060000 */  mfc1        $a2, $fv0
/* EF5744 8018CA04 44070000 */  mfc1        $a3, $fv0
/* EF5748 8018CA08 0C00170D */  jal         Matrix_Scale
/* EF574C 8018CA0C 8E640000 */   lw         $a0, 0x0($s3)
/* EF5750 8018CA10 C6C80014 */  lwc1        $ft2, 0x14($s6)
/* EF5754 8018CA14 8E640000 */  lw          $a0, 0x0($s3)
/* EF5758 8018CA18 24060001 */  addiu       $a2, $zero, 0x1
/* EF575C 8018CA1C 46164282 */  mul.s       $ft3, $ft2, $fs1
/* EF5760 8018CA20 44055000 */  mfc1        $a1, $ft3
/* EF5764 8018CA24 0C0017A4 */  jal         Matrix_RotateY
/* EF5768 8018CA28 00000000 */   nop
/* EF576C 8018CA2C C6D00010 */  lwc1        $ft4, 0x10($s6)
/* EF5770 8018CA30 8E640000 */  lw          $a0, 0x0($s3)
/* EF5774 8018CA34 24060001 */  addiu       $a2, $zero, 0x1
/* EF5778 8018CA38 46168482 */  mul.s       $ft5, $ft4, $fs1
/* EF577C 8018CA3C 44059000 */  mfc1        $a1, $ft5
/* EF5780 8018CA40 0C001751 */  jal         Matrix_RotateX
/* EF5784 8018CA44 00000000 */   nop
/* EF5788 8018CA48 C6C40018 */  lwc1        $ft0, 0x18($s6)
/* EF578C 8018CA4C 8E640000 */  lw          $a0, 0x0($s3)
/* EF5790 8018CA50 24060001 */  addiu       $a2, $zero, 0x1
/* EF5794 8018CA54 46162182 */  mul.s       $ft1, $ft0, $fs1
/* EF5798 8018CA58 44053000 */  mfc1        $a1, $ft1
/* EF579C 8018CA5C 0C0017F8 */  jal         Matrix_RotateZ
/* EF57A0 8018CA60 00000000 */   nop
/* EF57A4 8018CA64 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF57A8 8018CA68 02802025 */   or         $a0, $s4, $zero
/* EF57AC 8018CA6C 8E830000 */  lw          $v1, 0x0($s4)
/* EF57B0 8018CA70 246C0008 */  addiu       $t4, $v1, 0x8
/* EF57B4 8018CA74 AE8C0000 */  sw          $t4, 0x0($s4)
/* EF57B8 8018CA78 AC700004 */  sw          $s0, 0x4($v1)
/* EF57BC 8018CA7C AC770000 */  sw          $s7, 0x0($v1)
/* EF57C0 8018CA80 0C0015C2 */  jal         Matrix_Push
/* EF57C4 8018CA84 02602025 */   or         $a0, $s3, $zero
/* EF57C8 8018CA88 02802025 */  or          $a0, $s4, $zero
/* EF57CC 8018CA8C 0C02E374 */  jal         RCP_SetupDL
/* EF57D0 8018CA90 24050031 */   addiu      $a1, $zero, 0x31
/* EF57D4 8018CA94 8E830000 */  lw          $v1, 0x0($s4)
/* EF57D8 8018CA98 3C0BFA00 */  lui         $t3, (0xFA000000 >> 16)
/* EF57DC 8018CA9C 2419FF40 */  addiu       $t9, $zero, -0xC0
/* EF57E0 8018CAA0 246A0008 */  addiu       $t2, $v1, 0x8
/* EF57E4 8018CAA4 AE8A0000 */  sw          $t2, 0x0($s4)
/* EF57E8 8018CAA8 AC790004 */  sw          $t9, 0x4($v1)
/* EF57EC 8018CAAC AC6B0000 */  sw          $t3, 0x0($v1)
/* EF57F0 8018CAB0 8E830000 */  lw          $v1, 0x0($s4)
/* EF57F4 8018CAB4 3C1800FF */  lui         $t8, (0xFF0040 >> 16)
/* EF57F8 8018CAB8 37180040 */  ori         $t8, $t8, (0xFF0040 & 0xFFFF)
/* EF57FC 8018CABC 246E0008 */  addiu       $t6, $v1, 0x8
/* EF5800 8018CAC0 AE8E0000 */  sw          $t6, 0x0($s4)
/* EF5804 8018CAC4 3C0FFB00 */  lui         $t7, (0xFB000000 >> 16)
/* EF5808 8018CAC8 AC6F0000 */  sw          $t7, 0x0($v1)
/* EF580C 8018CACC AC780004 */  sw          $t8, 0x4($v1)
/* EF5810 8018CAD0 4405D000 */  mfc1        $a1, $fs3
/* EF5814 8018CAD4 4406D000 */  mfc1        $a2, $fs3
/* EF5818 8018CAD8 24090001 */  addiu       $t1, $zero, 0x1
/* EF581C 8018CADC AFA90010 */  sw          $t1, 0x10($sp)
/* EF5820 8018CAE0 8E640000 */  lw          $a0, 0x0($s3)
/* EF5824 8018CAE4 0C0016C0 */  jal         Matrix_Translate
/* EF5828 8018CAE8 3C07C284 */   lui        $a3, (0xC2840000 >> 16)
/* EF582C 8018CAEC 4405E000 */  mfc1        $a1, $fs4
/* EF5830 8018CAF0 4406E000 */  mfc1        $a2, $fs4
/* EF5834 8018CAF4 4407E000 */  mfc1        $a3, $fs4
/* EF5838 8018CAF8 240D0001 */  addiu       $t5, $zero, 0x1
/* EF583C 8018CAFC AFAD0010 */  sw          $t5, 0x10($sp)
/* EF5840 8018CB00 0C00170D */  jal         Matrix_Scale
/* EF5844 8018CB04 8E640000 */   lw         $a0, 0x0($s3)
/* EF5848 8018CB08 4405A000 */  mfc1        $a1, $fs0
/* EF584C 8018CB0C 8E640000 */  lw          $a0, 0x0($s3)
/* EF5850 8018CB10 0C001751 */  jal         Matrix_RotateX
/* EF5854 8018CB14 24060001 */   addiu      $a2, $zero, 0x1
/* EF5858 8018CB18 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF585C 8018CB1C 02802025 */   or         $a0, $s4, $zero
/* EF5860 8018CB20 8E830000 */  lw          $v1, 0x0($s4)
/* EF5864 8018CB24 246C0008 */  addiu       $t4, $v1, 0x8
/* EF5868 8018CB28 AE8C0000 */  sw          $t4, 0x0($s4)
/* EF586C 8018CB2C AC750004 */  sw          $s5, 0x4($v1)
/* EF5870 8018CB30 AC770000 */  sw          $s7, 0x0($v1)
/* EF5874 8018CB34 0C0015D0 */  jal         Matrix_Pop
/* EF5878 8018CB38 02602025 */   or         $a0, $s3, $zero
/* EF587C 8018CB3C C6C80118 */  lwc1        $ft2, 0x118($s6)
/* EF5880 8018CB40 02802025 */  or          $a0, $s4, $zero
/* EF5884 8018CB44 24050029 */  addiu       $a1, $zero, 0x29
/* EF5888 8018CB48 0C02E374 */  jal         RCP_SetupDL
/* EF588C 8018CB4C E7A800E4 */   swc1       $ft2, 0xE4($sp)
/* EF5890 8018CB50 96CA0046 */  lhu         $t2, 0x46($s6)
/* EF5894 8018CB54 2D410006 */  sltiu       $at, $t2, 0x6
/* EF5898 8018CB58 1020004D */  beqz        $at, .Lending_8018CC90
/* EF589C 8018CB5C 000A5080 */   sll        $t2, $t2, 2
/* EF58A0 8018CB60 3C018019 */  lui         $at, %hi(jtbl_ending_8019661C)
/* EF58A4 8018CB64 002A0821 */  addu        $at, $at, $t2
/* EF58A8 8018CB68 8C2A661C */  lw          $t2, %lo(jtbl_ending_8019661C)($at)
/* EF58AC 8018CB6C 01400008 */  jr          $t2
/* EF58B0 8018CB70 00000000 */   nop
.Lending_8018CB74:
/* EF58B4 8018CB74 8E830000 */  lw          $v1, 0x0($s4)
/* EF58B8 8018CB78 3C19FA00 */  lui         $t9, (0xFA000000 >> 16)
/* EF58BC 8018CB7C 3C01C800 */  lui         $at, (0xC8000000 >> 16)
/* EF58C0 8018CB80 246B0008 */  addiu       $t3, $v1, 0x8
/* EF58C4 8018CB84 AE8B0000 */  sw          $t3, 0x0($s4)
/* EF58C8 8018CB88 AC790000 */  sw          $t9, 0x0($v1)
/* EF58CC 8018CB8C 8ECE0054 */  lw          $t6, 0x54($s6)
/* EF58D0 8018CB90 31CF00FF */  andi        $t7, $t6, 0xFF
/* EF58D4 8018CB94 01E1C025 */  or          $t8, $t7, $at
/* EF58D8 8018CB98 AC780004 */  sw          $t8, 0x4($v1)
/* EF58DC 8018CB9C 1000003C */  b           .Lending_8018CC90
/* EF58E0 8018CBA0 00000000 */   nop
.Lending_8018CBA4:
/* EF58E4 8018CBA4 8E830000 */  lw          $v1, 0x0($s4)
/* EF58E8 8018CBA8 3C0DFA00 */  lui         $t5, (0xFA000000 >> 16)
/* EF58EC 8018CBAC 3C0100C8 */  lui         $at, (0xC80000 >> 16)
/* EF58F0 8018CBB0 24690008 */  addiu       $t1, $v1, 0x8
/* EF58F4 8018CBB4 AE890000 */  sw          $t1, 0x0($s4)
/* EF58F8 8018CBB8 AC6D0000 */  sw          $t5, 0x0($v1)
/* EF58FC 8018CBBC 8ECC0054 */  lw          $t4, 0x54($s6)
/* EF5900 8018CBC0 318A00FF */  andi        $t2, $t4, 0xFF
/* EF5904 8018CBC4 01415825 */  or          $t3, $t2, $at
/* EF5908 8018CBC8 AC6B0004 */  sw          $t3, 0x4($v1)
/* EF590C 8018CBCC 10000030 */  b           .Lending_8018CC90
/* EF5910 8018CBD0 00000000 */   nop
.Lending_8018CBD4:
/* EF5914 8018CBD4 8E830000 */  lw          $v1, 0x0($s4)
/* EF5918 8018CBD8 3C0EFA00 */  lui         $t6, (0xFA000000 >> 16)
/* EF591C 8018CBDC 24790008 */  addiu       $t9, $v1, 0x8
/* EF5920 8018CBE0 AE990000 */  sw          $t9, 0x0($s4)
/* EF5924 8018CBE4 AC6E0000 */  sw          $t6, 0x0($v1)
/* EF5928 8018CBE8 8ECF0054 */  lw          $t7, 0x54($s6)
/* EF592C 8018CBEC 31F800FF */  andi        $t8, $t7, 0xFF
/* EF5930 8018CBF0 3709C800 */  ori         $t1, $t8, 0xC800
/* EF5934 8018CBF4 AC690004 */  sw          $t1, 0x4($v1)
/* EF5938 8018CBF8 10000025 */  b           .Lending_8018CC90
/* EF593C 8018CBFC 00000000 */   nop
.Lending_8018CC00:
/* EF5940 8018CC00 8E830000 */  lw          $v1, 0x0($s4)
/* EF5944 8018CC04 3C0CFA00 */  lui         $t4, (0xFA000000 >> 16)
/* EF5948 8018CC08 3C01C8C8 */  lui         $at, (0xC8C80000 >> 16)
/* EF594C 8018CC0C 246D0008 */  addiu       $t5, $v1, 0x8
/* EF5950 8018CC10 AE8D0000 */  sw          $t5, 0x0($s4)
/* EF5954 8018CC14 AC6C0000 */  sw          $t4, 0x0($v1)
/* EF5958 8018CC18 8ECA0054 */  lw          $t2, 0x54($s6)
/* EF595C 8018CC1C 314B00FF */  andi        $t3, $t2, 0xFF
/* EF5960 8018CC20 0161C825 */  or          $t9, $t3, $at
/* EF5964 8018CC24 AC790004 */  sw          $t9, 0x4($v1)
/* EF5968 8018CC28 10000019 */  b           .Lending_8018CC90
/* EF596C 8018CC2C 00000000 */   nop
.Lending_8018CC30:
/* EF5970 8018CC30 8E830000 */  lw          $v1, 0x0($s4)
/* EF5974 8018CC34 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* EF5978 8018CC38 3C01C800 */  lui         $at, (0xC800C800 >> 16)
/* EF597C 8018CC3C 246E0008 */  addiu       $t6, $v1, 0x8
/* EF5980 8018CC40 AE8E0000 */  sw          $t6, 0x0($s4)
/* EF5984 8018CC44 AC6F0000 */  sw          $t7, 0x0($v1)
/* EF5988 8018CC48 8ED80054 */  lw          $t8, 0x54($s6)
/* EF598C 8018CC4C 3421C800 */  ori         $at, $at, (0xC800C800 & 0xFFFF)
/* EF5990 8018CC50 330900FF */  andi        $t1, $t8, 0xFF
/* EF5994 8018CC54 01216825 */  or          $t5, $t1, $at
/* EF5998 8018CC58 AC6D0004 */  sw          $t5, 0x4($v1)
/* EF599C 8018CC5C 1000000C */  b           .Lending_8018CC90
/* EF59A0 8018CC60 00000000 */   nop
.Lending_8018CC64:
/* EF59A4 8018CC64 8E830000 */  lw          $v1, 0x0($s4)
/* EF59A8 8018CC68 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
/* EF59AC 8018CC6C 3C01C8C8 */  lui         $at, (0xC8C8C800 >> 16)
/* EF59B0 8018CC70 246C0008 */  addiu       $t4, $v1, 0x8
/* EF59B4 8018CC74 AE8C0000 */  sw          $t4, 0x0($s4)
/* EF59B8 8018CC78 AC6A0000 */  sw          $t2, 0x0($v1)
/* EF59BC 8018CC7C 8ECB0054 */  lw          $t3, 0x54($s6)
/* EF59C0 8018CC80 3421C800 */  ori         $at, $at, (0xC8C8C800 & 0xFFFF)
/* EF59C4 8018CC84 317900FF */  andi        $t9, $t3, 0xFF
/* EF59C8 8018CC88 03217025 */  or          $t6, $t9, $at
/* EF59CC 8018CC8C AC6E0004 */  sw          $t6, 0x4($v1)
.Lending_8018CC90:
/* EF59D0 8018CC90 0C0015C2 */  jal         Matrix_Push
/* EF59D4 8018CC94 02602025 */   or         $a0, $s3, $zero
/* EF59D8 8018CC98 4406D000 */  mfc1        $a2, $fs3
/* EF59DC 8018CC9C 240F0001 */  addiu       $t7, $zero, 0x1
/* EF59E0 8018CCA0 AFAF0010 */  sw          $t7, 0x10($sp)
/* EF59E4 8018CCA4 8E640000 */  lw          $a0, 0x0($s3)
/* EF59E8 8018CCA8 3C05428C */  lui         $a1, (0x428C0000 >> 16)
/* EF59EC 8018CCAC 0C0016C0 */  jal         Matrix_Translate
/* EF59F0 8018CCB0 3C07C2C8 */   lui        $a3, (0xC2C80000 >> 16)
/* EF59F4 8018CCB4 4406E000 */  mfc1        $a2, $fs4
/* EF59F8 8018CCB8 24180001 */  addiu       $t8, $zero, 0x1
/* EF59FC 8018CCBC AFB80010 */  sw          $t8, 0x10($sp)
/* EF5A00 8018CCC0 8E640000 */  lw          $a0, 0x0($s3)
/* EF5A04 8018CCC4 8FA500E4 */  lw          $a1, 0xE4($sp)
/* EF5A08 8018CCC8 0C00170D */  jal         Matrix_Scale
/* EF5A0C 8018CCCC 3C074348 */   lui        $a3, (0x43480000 >> 16)
/* EF5A10 8018CCD0 4405D000 */  mfc1        $a1, $fs3
/* EF5A14 8018CCD4 4406D000 */  mfc1        $a2, $fs3
/* EF5A18 8018CCD8 24090001 */  addiu       $t1, $zero, 0x1
/* EF5A1C 8018CCDC AFA90010 */  sw          $t1, 0x10($sp)
/* EF5A20 8018CCE0 8E640000 */  lw          $a0, 0x0($s3)
/* EF5A24 8018CCE4 0C0016C0 */  jal         Matrix_Translate
/* EF5A28 8018CCE8 3C07C18C */   lui        $a3, (0xC18C0000 >> 16)
/* EF5A2C 8018CCEC 4405A000 */  mfc1        $a1, $fs0
/* EF5A30 8018CCF0 8E640000 */  lw          $a0, 0x0($s3)
/* EF5A34 8018CCF4 0C001751 */  jal         Matrix_RotateX
/* EF5A38 8018CCF8 24060001 */   addiu      $a2, $zero, 0x1
/* EF5A3C 8018CCFC 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF5A40 8018CD00 02802025 */   or         $a0, $s4, $zero
/* EF5A44 8018CD04 8E830000 */  lw          $v1, 0x0($s4)
/* EF5A48 8018CD08 246D0008 */  addiu       $t5, $v1, 0x8
/* EF5A4C 8018CD0C AE8D0000 */  sw          $t5, 0x0($s4)
/* EF5A50 8018CD10 AC710004 */  sw          $s1, 0x4($v1)
/* EF5A54 8018CD14 AC770000 */  sw          $s7, 0x0($v1)
/* EF5A58 8018CD18 0C0015D0 */  jal         Matrix_Pop
/* EF5A5C 8018CD1C 02602025 */   or         $a0, $s3, $zero
/* EF5A60 8018CD20 0C0015C2 */  jal         Matrix_Push
/* EF5A64 8018CD24 02602025 */   or         $a0, $s3, $zero
/* EF5A68 8018CD28 4406D000 */  mfc1        $a2, $fs3
/* EF5A6C 8018CD2C 240C0001 */  addiu       $t4, $zero, 0x1
/* EF5A70 8018CD30 AFAC0010 */  sw          $t4, 0x10($sp)
/* EF5A74 8018CD34 8E640000 */  lw          $a0, 0x0($s3)
/* EF5A78 8018CD38 3C05C28C */  lui         $a1, (0xC28C0000 >> 16)
/* EF5A7C 8018CD3C 0C0016C0 */  jal         Matrix_Translate
/* EF5A80 8018CD40 3C07C2C8 */   lui        $a3, (0xC2C80000 >> 16)
/* EF5A84 8018CD44 4406E000 */  mfc1        $a2, $fs4
/* EF5A88 8018CD48 240A0001 */  addiu       $t2, $zero, 0x1
/* EF5A8C 8018CD4C AFAA0010 */  sw          $t2, 0x10($sp)
/* EF5A90 8018CD50 8E640000 */  lw          $a0, 0x0($s3)
/* EF5A94 8018CD54 8FA500E4 */  lw          $a1, 0xE4($sp)
/* EF5A98 8018CD58 0C00170D */  jal         Matrix_Scale
/* EF5A9C 8018CD5C 3C074348 */   lui        $a3, (0x43480000 >> 16)
/* EF5AA0 8018CD60 4405D000 */  mfc1        $a1, $fs3
/* EF5AA4 8018CD64 4406D000 */  mfc1        $a2, $fs3
/* EF5AA8 8018CD68 240B0001 */  addiu       $t3, $zero, 0x1
/* EF5AAC 8018CD6C AFAB0010 */  sw          $t3, 0x10($sp)
/* EF5AB0 8018CD70 8E640000 */  lw          $a0, 0x0($s3)
/* EF5AB4 8018CD74 0C0016C0 */  jal         Matrix_Translate
/* EF5AB8 8018CD78 3C07C18C */   lui        $a3, (0xC18C0000 >> 16)
/* EF5ABC 8018CD7C 4405A000 */  mfc1        $a1, $fs0
/* EF5AC0 8018CD80 8E640000 */  lw          $a0, 0x0($s3)
/* EF5AC4 8018CD84 0C001751 */  jal         Matrix_RotateX
/* EF5AC8 8018CD88 24060001 */   addiu      $a2, $zero, 0x1
/* EF5ACC 8018CD8C 0C001BAE */  jal         Matrix_SetGfxMtx
/* EF5AD0 8018CD90 02802025 */   or         $a0, $s4, $zero
/* EF5AD4 8018CD94 8E830000 */  lw          $v1, 0x0($s4)
/* EF5AD8 8018CD98 24790008 */  addiu       $t9, $v1, 0x8
/* EF5ADC 8018CD9C AE990000 */  sw          $t9, 0x0($s4)
/* EF5AE0 8018CDA0 AC710004 */  sw          $s1, 0x4($v1)
/* EF5AE4 8018CDA4 AC770000 */  sw          $s7, 0x0($v1)
/* EF5AE8 8018CDA8 0C0015D0 */  jal         Matrix_Pop
/* EF5AEC 8018CDAC 02602025 */   or         $a0, $s3, $zero
.Lending_8018CDB0:
/* EF5AF0 8018CDB0 0C0015D0 */  jal         Matrix_Pop
/* EF5AF4 8018CDB4 02602025 */   or         $a0, $s3, $zero
.Lending_8018CDB8:
/* EF5AF8 8018CDB8 3C0E8016 */  lui         $t6, %hi(gActors)
/* EF5AFC 8018CDBC 25CE3FE0 */  addiu       $t6, $t6, %lo(gActors)
/* EF5B00 8018CDC0 26D6FD0C */  addiu       $s6, $s6, -0x2F4
/* EF5B04 8018CDC4 02CE082B */  sltu        $at, $s6, $t6
/* EF5B08 8018CDC8 5020FDA8 */  beql        $at, $zero, .Lending_8018C46C
/* EF5B0C 8018CDCC 92C90000 */   lbu        $t1, 0x0($s6)
/* EF5B10 8018CDD0 8FBF006C */  lw          $ra, 0x6C($sp)
/* EF5B14 8018CDD4 D7B40020 */  ldc1        $fs0, 0x20($sp)
/* EF5B18 8018CDD8 D7B60028 */  ldc1        $fs1, 0x28($sp)
/* EF5B1C 8018CDDC D7B80030 */  ldc1        $fs2, 0x30($sp)
/* EF5B20 8018CDE0 D7BA0038 */  ldc1        $fs3, 0x38($sp)
/* EF5B24 8018CDE4 D7BC0040 */  ldc1        $fs4, 0x40($sp)
/* EF5B28 8018CDE8 8FB00048 */  lw          $s0, 0x48($sp)
/* EF5B2C 8018CDEC 8FB1004C */  lw          $s1, 0x4C($sp)
/* EF5B30 8018CDF0 8FB20050 */  lw          $s2, 0x50($sp)
/* EF5B34 8018CDF4 8FB30054 */  lw          $s3, 0x54($sp)
/* EF5B38 8018CDF8 8FB40058 */  lw          $s4, 0x58($sp)
/* EF5B3C 8018CDFC 8FB5005C */  lw          $s5, 0x5C($sp)
/* EF5B40 8018CE00 8FB60060 */  lw          $s6, 0x60($sp)
/* EF5B44 8018CE04 8FB70064 */  lw          $s7, 0x64($sp)
/* EF5B48 8018CE08 8FBE0068 */  lw          $fp, 0x68($sp)
/* EF5B4C 8018CE0C 03E00008 */  jr          $ra
/* EF5B50 8018CE10 27BD0148 */   addiu      $sp, $sp, 0x148
/* EF5B54 8018CE14 00000000 */  nop
/* EF5B58 8018CE18 00000000 */  nop
/* EF5B5C 8018CE1C 00000000 */  nop
