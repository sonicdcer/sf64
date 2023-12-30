glabel func_8003DAF0
/* 03E6F0 8003DAF0 27BDFF78 */  addiu       $sp, $sp, -0x88
/* 03E6F4 8003DAF4 AFB30050 */  sw          $s3, 0x50($sp)
/* 03E6F8 8003DAF8 3C0A8013 */  lui         $t2, %hi(gMasterDisp)
/* 03E6FC 8003DAFC 254A7E64 */  addiu       $t2, $t2, %lo(gMasterDisp)
/* 03E700 8003DB00 3C13E700 */  lui         $s3, (0xE7000000 >> 16)
/* 03E704 8003DB04 AFBF0054 */  sw          $ra, 0x54($sp)
/* 03E708 8003DB08 AFB2004C */  sw          $s2, 0x4C($sp)
/* 03E70C 8003DB0C AFB10048 */  sw          $s1, 0x48($sp)
/* 03E710 8003DB10 AFB00044 */  sw          $s0, 0x44($sp)
/* 03E714 8003DB14 F7BE0038 */  sdc1        $fs5, 0x38($sp)
/* 03E718 8003DB18 F7BC0030 */  sdc1        $fs4, 0x30($sp)
/* 03E71C 8003DB1C F7BA0028 */  sdc1        $fs3, 0x28($sp)
/* 03E720 8003DB20 F7B80020 */  sdc1        $fs2, 0x20($sp)
/* 03E724 8003DB24 F7B60018 */  sdc1        $fs1, 0x18($sp)
/* 03E728 8003DB28 F7B40010 */  sdc1        $fs0, 0x10($sp)
/* 03E72C 8003DB2C 8D420000 */  lw          $v0, 0x0($t2)
/* 03E730 8003DB30 3C18BA00 */  lui         $t8, (0xBA001402 >> 16)
/* 03E734 8003DB34 3C128018 */  lui         $s2, %hi(D_80178410)
/* 03E738 8003DB38 244E0008 */  addiu       $t6, $v0, 0x8
/* 03E73C 8003DB3C AD4E0000 */  sw          $t6, 0x0($t2)
/* 03E740 8003DB40 AC400004 */  sw          $zero, 0x4($v0)
/* 03E744 8003DB44 AC530000 */  sw          $s3, 0x0($v0)
/* 03E748 8003DB48 8D420000 */  lw          $v0, 0x0($t2)
/* 03E74C 8003DB4C 37181402 */  ori         $t8, $t8, (0xBA001402 & 0xFFFF)
/* 03E750 8003DB50 3C190030 */  lui         $t9, (0x300000 >> 16)
/* 03E754 8003DB54 244F0008 */  addiu       $t7, $v0, 0x8
/* 03E758 8003DB58 AD4F0000 */  sw          $t7, 0x0($t2)
/* 03E75C 8003DB5C AC590004 */  sw          $t9, 0x4($v0)
/* 03E760 8003DB60 AC580000 */  sw          $t8, 0x0($v0)
/* 03E764 8003DB64 8D420000 */  lw          $v0, 0x0($t2)
/* 03E768 8003DB68 3C0FFCFF */  lui         $t7, (0xFCFFFFFF >> 16)
/* 03E76C 8003DB6C 3C18FFFE */  lui         $t8, (0xFFFE793C >> 16)
/* 03E770 8003DB70 244E0008 */  addiu       $t6, $v0, 0x8
/* 03E774 8003DB74 AD4E0000 */  sw          $t6, 0x0($t2)
/* 03E778 8003DB78 3718793C */  ori         $t8, $t8, (0xFFFE793C & 0xFFFF)
/* 03E77C 8003DB7C 35EFFFFF */  ori         $t7, $t7, (0xFCFFFFFF & 0xFFFF)
/* 03E780 8003DB80 AC4F0000 */  sw          $t7, 0x0($v0)
/* 03E784 8003DB84 AC580004 */  sw          $t8, 0x4($v0)
/* 03E788 8003DB88 8D420000 */  lw          $v0, 0x0($t2)
/* 03E78C 8003DB8C 3C0EB900 */  lui         $t6, (0xB900031D >> 16)
/* 03E790 8003DB90 3C0F0F0A */  lui         $t7, (0xF0A4000 >> 16)
/* 03E794 8003DB94 24590008 */  addiu       $t9, $v0, 0x8
/* 03E798 8003DB98 AD590000 */  sw          $t9, 0x0($t2)
/* 03E79C 8003DB9C 35EF4000 */  ori         $t7, $t7, (0xF0A4000 & 0xFFFF)
/* 03E7A0 8003DBA0 35CE031D */  ori         $t6, $t6, (0xB900031D & 0xFFFF)
/* 03E7A4 8003DBA4 AC4E0000 */  sw          $t6, 0x0($v0)
/* 03E7A8 8003DBA8 AC4F0004 */  sw          $t7, 0x4($v0)
/* 03E7AC 8003DBAC 8E528410 */  lw          $s2, %lo(D_80178410)($s2)
/* 03E7B0 8003DBB0 3C028018 */  lui         $v0, %hi(D_80178420)
/* 03E7B4 8003DBB4 24428420 */  addiu       $v0, $v0, %lo(D_80178420)
/* 03E7B8 8003DBB8 12400092 */  beqz        $s2, .L8003DE04
/* 03E7BC 8003DBBC 3C0143F0 */   lui        $at, (0x43F00000 >> 16)
/* 03E7C0 8003DBC0 4481E000 */  mtc1        $at, $fs4
/* 03E7C4 8003DBC4 C4400000 */  lwc1        $fv0, 0x0($v0)
/* 03E7C8 8003DBC8 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 03E7CC 8003DBCC 4481F000 */  mtc1        $at, $fs5
/* 03E7D0 8003DBD0 4600E03E */  c.le.s      $fs4, $fv0
/* 03E7D4 8003DBD4 3C038018 */  lui         $v1, %hi(D_80178424)
/* 03E7D8 8003DBD8 44806000 */  mtc1        $zero, $fa0
/* 03E7DC 8003DBDC 24638424 */  addiu       $v1, $v1, %lo(D_80178424)
/* 03E7E0 8003DBE0 45000004 */  bc1f        .L8003DBF4
/* 03E7E4 8003DBE4 3C0C8018 */   lui        $t4, %hi(D_80178288)
/* 03E7E8 8003DBE8 461C0101 */  sub.s       $ft0, $fv0, $fs4
/* 03E7EC 8003DBEC E4440000 */  swc1        $ft0, 0x0($v0)
/* 03E7F0 8003DBF0 C4400000 */  lwc1        $fv0, 0x0($v0)
.L8003DBF4:
/* 03E7F4 8003DBF4 C4620000 */  lwc1        $fv1, 0x0($v1)
/* 03E7F8 8003DBF8 3C108018 */  lui         $s0, %hi(D_80178428)
/* 03E7FC 8003DBFC 3C0D8018 */  lui         $t5, %hi(D_80178290)
/* 03E800 8003DC00 4602F03E */  c.le.s      $fs5, $fv1
/* 03E804 8003DC04 3C1F8018 */  lui         $ra, %hi(D_80178298)
/* 03E808 8003DC08 3C188017 */  lui         $t8, %hi(gGameState)
/* 03E80C 8003DC0C 24010007 */  addiu       $at, $zero, 0x7
/* 03E810 8003DC10 45000004 */  bc1f        .L8003DC24
/* 03E814 8003DC14 26108428 */   addiu      $s0, $s0, %lo(D_80178428)
/* 03E818 8003DC18 461E1181 */  sub.s       $ft1, $fv1, $fs5
/* 03E81C 8003DC1C E4660000 */  swc1        $ft1, 0x0($v1)
/* 03E820 8003DC20 C4620000 */  lwc1        $fv1, 0x0($v1)
.L8003DC24:
/* 03E824 8003DC24 460C003C */  c.lt.s      $fv0, $fa0
/* 03E828 8003DC28 00000000 */  nop
/* 03E82C 8003DC2C 45020005 */  bc1fl       .L8003DC44
/* 03E830 8003DC30 460C103C */   c.lt.s     $fv1, $fa0
/* 03E834 8003DC34 461C0200 */  add.s       $ft2, $fv0, $fs4
/* 03E838 8003DC38 E4480000 */  swc1        $ft2, 0x0($v0)
/* 03E83C 8003DC3C C4400000 */  lwc1        $fv0, 0x0($v0)
/* 03E840 8003DC40 460C103C */  c.lt.s      $fv1, $fa0
.L8003DC44:
/* 03E844 8003DC44 46000606 */  mov.s       $fs2, $fv0
/* 03E848 8003DC48 45000004 */  bc1f        .L8003DC5C
/* 03E84C 8003DC4C 00000000 */   nop
/* 03E850 8003DC50 461E1280 */  add.s       $ft3, $fv1, $fs5
/* 03E854 8003DC54 E46A0000 */  swc1        $ft3, 0x0($v1)
/* 03E858 8003DC58 C4620000 */  lwc1        $fv1, 0x0($v1)
.L8003DC5C:
/* 03E85C 8003DC5C 8F187834 */  lw          $t8, %lo(gGameState)($t8)
/* 03E860 8003DC60 46001686 */  mov.s       $fs3, $fv1
/* 03E864 8003DC64 8D8C8288 */  lw          $t4, %lo(D_80178288)($t4)
/* 03E868 8003DC68 8DAD8290 */  lw          $t5, %lo(D_80178290)($t5)
/* 03E86C 8003DC6C 13010002 */  beq         $t8, $at, .L8003DC78
/* 03E870 8003DC70 8FFF8298 */   lw         $ra, %lo(D_80178298)($ra)
/* 03E874 8003DC74 241203E8 */  addiu       $s2, $zero, 0x3E8
.L8003DC78:
/* 03E878 8003DC78 AFBF0058 */  sw          $ra, 0x58($sp)
/* 03E87C 8003DC7C C60C0000 */  lwc1        $fa0, 0x0($s0)
/* 03E880 8003DC80 AFAC0060 */  sw          $t4, 0x60($sp)
/* 03E884 8003DC84 0C008C94 */  jal         __cosf
/* 03E888 8003DC88 AFAD005C */   sw         $t5, 0x5C($sp)
/* 03E88C 8003DC8C C60C0000 */  lwc1        $fa0, 0x0($s0)
/* 03E890 8003DC90 0C008C24 */  jal         __sinf
/* 03E894 8003DC94 E7A00070 */   swc1       $fv0, 0x70($sp)
/* 03E898 8003DC98 3C0A8013 */  lui         $t2, %hi(gMasterDisp)
/* 03E89C 8003DC9C 254A7E64 */  addiu       $t2, $t2, %lo(gMasterDisp)
/* 03E8A0 8003DCA0 8FAC0060 */  lw          $t4, 0x60($sp)
/* 03E8A4 8003DCA4 8FAD005C */  lw          $t5, 0x5C($sp)
/* 03E8A8 8003DCA8 8FBF0058 */  lw          $ra, 0x58($sp)
/* 03E8AC 8003DCAC C7AE0070 */  lwc1        $fa1, 0x70($sp)
/* 03E8B0 8003DCB0 1A400054 */  blez        $s2, .L8003DE04
/* 03E8B4 8003DCB4 00005825 */   or         $t3, $zero, $zero
/* 03E8B8 8003DCB8 3C014396 */  lui         $at, (0x43960000 >> 16)
/* 03E8BC 8003DCBC 4481B000 */  mtc1        $at, $fs1
/* 03E8C0 8003DCC0 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* 03E8C4 8003DCC4 4481A000 */  mtc1        $at, $fs0
/* 03E8C8 8003DCC8 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 03E8CC 8003DCCC 44819000 */  mtc1        $at, $ft5
/* 03E8D0 8003DCD0 3C014320 */  lui         $at, (0x43200000 >> 16)
/* 03E8D4 8003DCD4 44818000 */  mtc1        $at, $ft4
/* 03E8D8 8003DCD8 3C11F600 */  lui         $s1, (0xF6000000 >> 16)
/* 03E8DC 8003DCDC 3C10F700 */  lui         $s0, (0xF7000000 >> 16)
.L8003DCE0:
/* 03E8E0 8003DCE0 C5840000 */  lwc1        $ft0, 0x0($t4)
/* 03E8E4 8003DCE4 C5A60000 */  lwc1        $ft1, 0x0($t5)
/* 03E8E8 8003DCE8 256B0001 */  addiu       $t3, $t3, 0x1
/* 03E8EC 8003DCEC 46182080 */  add.s       $fv1, $ft0, $fs2
/* 03E8F0 8003DCF0 25AD0004 */  addiu       $t5, $t5, 0x4
/* 03E8F4 8003DCF4 258C0004 */  addiu       $t4, $t4, 0x4
/* 03E8F8 8003DCF8 461A3300 */  add.s       $fa0, $ft1, $fs3
/* 03E8FC 8003DCFC 4602A03E */  c.le.s      $fs0, $fv1
/* 03E900 8003DD00 00000000 */  nop
/* 03E904 8003DD04 45020003 */  bc1fl       .L8003DD14
/* 03E908 8003DD08 460CB03E */   c.le.s     $fs1, $fa0
/* 03E90C 8003DD0C 461C1081 */  sub.s       $fv1, $fv1, $fs4
/* 03E910 8003DD10 460CB03E */  c.le.s      $fs1, $fa0
.L8003DD14:
/* 03E914 8003DD14 46101081 */  sub.s       $fv1, $fv1, $ft4
/* 03E918 8003DD18 45020003 */  bc1fl       .L8003DD28
/* 03E91C 8003DD1C 46126301 */   sub.s      $fa0, $fa0, $ft5
/* 03E920 8003DD20 461E6301 */  sub.s       $fa0, $fa0, $fs5
/* 03E924 8003DD24 46126301 */  sub.s       $fa0, $fa0, $ft5
.L8003DD28:
/* 03E928 8003DD28 46027202 */  mul.s       $ft2, $fa1, $fv1
/* 03E92C 8003DD2C 00000000 */  nop
/* 03E930 8003DD30 460C0282 */  mul.s       $ft3, $fv0, $fa0
/* 03E934 8003DD34 460A4100 */  add.s       $ft0, $ft2, $ft3
/* 03E938 8003DD38 46102180 */  add.s       $ft1, $ft0, $ft4
/* 03E93C 8003DD3C 4600320D */  trunc.w.s   $ft2, $ft1
/* 03E940 8003DD40 44084000 */  mfc1        $t0, $ft2
/* 03E944 8003DD44 00000000 */  nop
/* 03E948 8003DD48 00087400 */  sll         $t6, $t0, 16
/* 03E94C 8003DD4C 000E7C03 */  sra         $t7, $t6, 16
/* 03E950 8003DD50 05E0002A */  bltz        $t7, .L8003DDFC
/* 03E954 8003DD54 01E04025 */   or         $t0, $t7, $zero
/* 03E958 8003DD58 29E10140 */  slti        $at, $t7, 0x140
/* 03E95C 8003DD5C 10200027 */  beqz        $at, .L8003DDFC
/* 03E960 8003DD60 00000000 */   nop
/* 03E964 8003DD64 46000287 */  neg.s       $ft3, $fv0
/* 03E968 8003DD68 46025102 */  mul.s       $ft0, $ft3, $fv1
/* 03E96C 8003DD6C 00000000 */  nop
/* 03E970 8003DD70 460C7182 */  mul.s       $ft1, $fa1, $fa0
/* 03E974 8003DD74 46062200 */  add.s       $ft2, $ft0, $ft1
/* 03E978 8003DD78 46124280 */  add.s       $ft3, $ft2, $ft5
/* 03E97C 8003DD7C 4600510D */  trunc.w.s   $ft0, $ft3
/* 03E980 8003DD80 44092000 */  mfc1        $t1, $ft0
/* 03E984 8003DD84 00000000 */  nop
/* 03E988 8003DD88 0009CC00 */  sll         $t9, $t1, 16
/* 03E98C 8003DD8C 00197403 */  sra         $t6, $t9, 16
/* 03E990 8003DD90 19C0001A */  blez        $t6, .L8003DDFC
/* 03E994 8003DD94 01C04825 */   or         $t1, $t6, $zero
/* 03E998 8003DD98 29C100F0 */  slti        $at, $t6, 0xF0
/* 03E99C 8003DD9C 10200017 */  beqz        $at, .L8003DDFC
/* 03E9A0 8003DDA0 310603FF */   andi       $a2, $t0, 0x3FF
/* 03E9A4 8003DDA4 8D420000 */  lw          $v0, 0x0($t2)
/* 03E9A8 8003DDA8 312703FF */  andi        $a3, $t1, 0x3FF
/* 03E9AC 8003DDAC 244F0008 */  addiu       $t7, $v0, 0x8
/* 03E9B0 8003DDB0 AD4F0000 */  sw          $t7, 0x0($t2)
/* 03E9B4 8003DDB4 AC400004 */  sw          $zero, 0x4($v0)
/* 03E9B8 8003DDB8 AC530000 */  sw          $s3, 0x0($v0)
/* 03E9BC 8003DDBC 8D420000 */  lw          $v0, 0x0($t2)
/* 03E9C0 8003DDC0 00067B80 */  sll         $t7, $a2, 14
/* 03E9C4 8003DDC4 24580008 */  addiu       $t8, $v0, 0x8
/* 03E9C8 8003DDC8 AD580000 */  sw          $t8, 0x0($t2)
/* 03E9CC 8003DDCC AC500000 */  sw          $s0, 0x0($v0)
/* 03E9D0 8003DDD0 8FF90000 */  lw          $t9, 0x0($ra)
/* 03E9D4 8003DDD4 0007C080 */  sll         $t8, $a3, 2
/* 03E9D8 8003DDD8 AC590004 */  sw          $t9, 0x4($v0)
/* 03E9DC 8003DDDC 8D420000 */  lw          $v0, 0x0($t2)
/* 03E9E0 8003DDE0 01F1C825 */  or          $t9, $t7, $s1
/* 03E9E4 8003DDE4 01F87825 */  or          $t7, $t7, $t8
/* 03E9E8 8003DDE8 244E0008 */  addiu       $t6, $v0, 0x8
/* 03E9EC 8003DDEC AD4E0000 */  sw          $t6, 0x0($t2)
/* 03E9F0 8003DDF0 03387025 */  or          $t6, $t9, $t8
/* 03E9F4 8003DDF4 AC4E0000 */  sw          $t6, 0x0($v0)
/* 03E9F8 8003DDF8 AC4F0004 */  sw          $t7, 0x4($v0)
.L8003DDFC:
/* 03E9FC 8003DDFC 1572FFB8 */  bne         $t3, $s2, .L8003DCE0
/* 03EA00 8003DE00 27FF0004 */   addiu      $ra, $ra, 0x4
.L8003DE04:
/* 03EA04 8003DE04 8D420000 */  lw          $v0, 0x0($t2)
/* 03EA08 8003DE08 24580008 */  addiu       $t8, $v0, 0x8
/* 03EA0C 8003DE0C AD580000 */  sw          $t8, 0x0($t2)
/* 03EA10 8003DE10 AC400004 */  sw          $zero, 0x4($v0)
/* 03EA14 8003DE14 AC530000 */  sw          $s3, 0x0($v0)
/* 03EA18 8003DE18 8D420000 */  lw          $v0, 0x0($t2)
/* 03EA1C 8003DE1C 3C0EBA00 */  lui         $t6, (0xBA000602 >> 16)
/* 03EA20 8003DE20 35CE0602 */  ori         $t6, $t6, (0xBA000602 & 0xFFFF)
/* 03EA24 8003DE24 24590008 */  addiu       $t9, $v0, 0x8
/* 03EA28 8003DE28 AD590000 */  sw          $t9, 0x0($t2)
/* 03EA2C 8003DE2C AC400004 */  sw          $zero, 0x4($v0)
/* 03EA30 8003DE30 AC4E0000 */  sw          $t6, 0x0($v0)
/* 03EA34 8003DE34 8FBF0054 */  lw          $ra, 0x54($sp)
/* 03EA38 8003DE38 D7B40010 */  ldc1        $fs0, 0x10($sp)
/* 03EA3C 8003DE3C D7B60018 */  ldc1        $fs1, 0x18($sp)
/* 03EA40 8003DE40 D7B80020 */  ldc1        $fs2, 0x20($sp)
/* 03EA44 8003DE44 D7BA0028 */  ldc1        $fs3, 0x28($sp)
/* 03EA48 8003DE48 D7BC0030 */  ldc1        $fs4, 0x30($sp)
/* 03EA4C 8003DE4C D7BE0038 */  ldc1        $fs5, 0x38($sp)
/* 03EA50 8003DE50 8FB00044 */  lw          $s0, 0x44($sp)
/* 03EA54 8003DE54 8FB10048 */  lw          $s1, 0x48($sp)
/* 03EA58 8003DE58 8FB2004C */  lw          $s2, 0x4C($sp)
/* 03EA5C 8003DE5C 8FB30050 */  lw          $s3, 0x50($sp)
/* 03EA60 8003DE60 03E00008 */  jr          $ra
/* 03EA64 8003DE64 27BD0088 */   addiu      $sp, $sp, 0x88
glabel func_8003DE68
/* 03EA68 8003DE68 27BDFF70 */  addiu       $sp, $sp, -0x90
/* 03EA6C 8003DE6C F7BE0038 */  sdc1        $fs5, 0x38($sp)
/* 03EA70 8003DE70 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 03EA74 8003DE74 AFB50058 */  sw          $s5, 0x58($sp)
/* 03EA78 8003DE78 AFB40054 */  sw          $s4, 0x54($sp)
/* 03EA7C 8003DE7C AFB30050 */  sw          $s3, 0x50($sp)
/* 03EA80 8003DE80 3C098018 */  lui         $t1, %hi(D_80178420)
/* 03EA84 8003DE84 3C0A8013 */  lui         $t2, %hi(gMasterDisp)
/* 03EA88 8003DE88 4481F000 */  mtc1        $at, $fs5
/* 03EA8C 8003DE8C 254A7E64 */  addiu       $t2, $t2, %lo(gMasterDisp)
/* 03EA90 8003DE90 25298420 */  addiu       $t1, $t1, %lo(D_80178420)
/* 03EA94 8003DE94 3C13E700 */  lui         $s3, (0xE7000000 >> 16)
/* 03EA98 8003DE98 0080A025 */  or          $s4, $a0, $zero
/* 03EA9C 8003DE9C 00A0A825 */  or          $s5, $a1, $zero
/* 03EAA0 8003DEA0 AFBF005C */  sw          $ra, 0x5C($sp)
/* 03EAA4 8003DEA4 AFB2004C */  sw          $s2, 0x4C($sp)
/* 03EAA8 8003DEA8 AFB10048 */  sw          $s1, 0x48($sp)
/* 03EAAC 8003DEAC AFB00044 */  sw          $s0, 0x44($sp)
/* 03EAB0 8003DEB0 F7BC0030 */  sdc1        $fs4, 0x30($sp)
/* 03EAB4 8003DEB4 F7BA0028 */  sdc1        $fs3, 0x28($sp)
/* 03EAB8 8003DEB8 F7B80020 */  sdc1        $fs2, 0x20($sp)
/* 03EABC 8003DEBC F7B60018 */  sdc1        $fs1, 0x18($sp)
/* 03EAC0 8003DEC0 F7B40010 */  sdc1        $fs0, 0x10($sp)
/* 03EAC4 8003DEC4 8D420000 */  lw          $v0, 0x0($t2)
/* 03EAC8 8003DEC8 3C18BA00 */  lui         $t8, (0xBA001402 >> 16)
/* 03EACC 8003DECC 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 03EAD0 8003DED0 244E0008 */  addiu       $t6, $v0, 0x8
/* 03EAD4 8003DED4 AD4E0000 */  sw          $t6, 0x0($t2)
/* 03EAD8 8003DED8 AC400004 */  sw          $zero, 0x4($v0)
/* 03EADC 8003DEDC AC530000 */  sw          $s3, 0x0($v0)
/* 03EAE0 8003DEE0 8D420000 */  lw          $v0, 0x0($t2)
/* 03EAE4 8003DEE4 37181402 */  ori         $t8, $t8, (0xBA001402 & 0xFFFF)
/* 03EAE8 8003DEE8 3C190030 */  lui         $t9, (0x300000 >> 16)
/* 03EAEC 8003DEEC 244F0008 */  addiu       $t7, $v0, 0x8
/* 03EAF0 8003DEF0 AD4F0000 */  sw          $t7, 0x0($t2)
/* 03EAF4 8003DEF4 AC590004 */  sw          $t9, 0x4($v0)
/* 03EAF8 8003DEF8 AC580000 */  sw          $t8, 0x0($v0)
/* 03EAFC 8003DEFC 8D420000 */  lw          $v0, 0x0($t2)
/* 03EB00 8003DF00 3C0FFCFF */  lui         $t7, (0xFCFFFFFF >> 16)
/* 03EB04 8003DF04 3C18FFFE */  lui         $t8, (0xFFFE793C >> 16)
/* 03EB08 8003DF08 244E0008 */  addiu       $t6, $v0, 0x8
/* 03EB0C 8003DF0C AD4E0000 */  sw          $t6, 0x0($t2)
/* 03EB10 8003DF10 3718793C */  ori         $t8, $t8, (0xFFFE793C & 0xFFFF)
/* 03EB14 8003DF14 35EFFFFF */  ori         $t7, $t7, (0xFCFFFFFF & 0xFFFF)
/* 03EB18 8003DF18 AC4F0000 */  sw          $t7, 0x0($v0)
/* 03EB1C 8003DF1C AC580004 */  sw          $t8, 0x4($v0)
/* 03EB20 8003DF20 8D420000 */  lw          $v0, 0x0($t2)
/* 03EB24 8003DF24 3C0EB900 */  lui         $t6, (0xB900031D >> 16)
/* 03EB28 8003DF28 3C0F0F0A */  lui         $t7, (0xF0A4000 >> 16)
/* 03EB2C 8003DF2C 24590008 */  addiu       $t9, $v0, 0x8
/* 03EB30 8003DF30 AD590000 */  sw          $t9, 0x0($t2)
/* 03EB34 8003DF34 35EF4000 */  ori         $t7, $t7, (0xF0A4000 & 0xFFFF)
/* 03EB38 8003DF38 35CE031D */  ori         $t6, $t6, (0xB900031D & 0xFFFF)
/* 03EB3C 8003DF3C AC4E0000 */  sw          $t6, 0x0($v0)
/* 03EB40 8003DF40 AC4F0004 */  sw          $t7, 0x4($v0)
/* 03EB44 8003DF44 C5200000 */  lwc1        $fv0, 0x0($t1)
/* 03EB48 8003DF48 3C028018 */  lui         $v0, %hi(D_80178424)
/* 03EB4C 8003DF4C 4481E000 */  mtc1        $at, $fs4
/* 03EB50 8003DF50 4600F03E */  c.le.s      $fs5, $fv0
/* 03EB54 8003DF54 44806000 */  mtc1        $zero, $fa0
/* 03EB58 8003DF58 3C108018 */  lui         $s0, %hi(D_80178428)
/* 03EB5C 8003DF5C 24428424 */  addiu       $v0, $v0, %lo(D_80178424)
/* 03EB60 8003DF60 45000004 */  bc1f        .L8003DF74
/* 03EB64 8003DF64 26108428 */   addiu      $s0, $s0, %lo(D_80178428)
/* 03EB68 8003DF68 461E0101 */  sub.s       $ft0, $fv0, $fs5
/* 03EB6C 8003DF6C E5240000 */  swc1        $ft0, 0x0($t1)
/* 03EB70 8003DF70 C5200000 */  lwc1        $fv0, 0x0($t1)
.L8003DF74:
/* 03EB74 8003DF74 C4420000 */  lwc1        $fv1, 0x0($v0)
/* 03EB78 8003DF78 3C0C8018 */  lui         $t4, %hi(D_80178288)
/* 03EB7C 8003DF7C 3C0D8018 */  lui         $t5, %hi(D_80178290)
/* 03EB80 8003DF80 4602E03E */  c.le.s      $fs4, $fv1
/* 03EB84 8003DF84 3C1F8018 */  lui         $ra, %hi(D_80178298)
/* 03EB88 8003DF88 241201F4 */  addiu       $s2, $zero, 0x1F4
/* 03EB8C 8003DF8C 45020005 */  bc1fl       .L8003DFA4
/* 03EB90 8003DF90 460C003C */   c.lt.s     $fv0, $fa0
/* 03EB94 8003DF94 461C1181 */  sub.s       $ft1, $fv1, $fs4
/* 03EB98 8003DF98 E4460000 */  swc1        $ft1, 0x0($v0)
/* 03EB9C 8003DF9C C4420000 */  lwc1        $fv1, 0x0($v0)
/* 03EBA0 8003DFA0 460C003C */  c.lt.s      $fv0, $fa0
.L8003DFA4:
/* 03EBA4 8003DFA4 00000000 */  nop
/* 03EBA8 8003DFA8 45020005 */  bc1fl       .L8003DFC0
/* 03EBAC 8003DFAC 460C103C */   c.lt.s     $fv1, $fa0
/* 03EBB0 8003DFB0 461E0200 */  add.s       $ft2, $fv0, $fs5
/* 03EBB4 8003DFB4 E5280000 */  swc1        $ft2, 0x0($t1)
/* 03EBB8 8003DFB8 C5200000 */  lwc1        $fv0, 0x0($t1)
/* 03EBBC 8003DFBC 460C103C */  c.lt.s      $fv1, $fa0
.L8003DFC0:
/* 03EBC0 8003DFC0 46000606 */  mov.s       $fs2, $fv0
/* 03EBC4 8003DFC4 45000004 */  bc1f        .L8003DFD8
/* 03EBC8 8003DFC8 00000000 */   nop
/* 03EBCC 8003DFCC 461C1280 */  add.s       $ft3, $fv1, $fs4
/* 03EBD0 8003DFD0 E44A0000 */  swc1        $ft3, 0x0($v0)
/* 03EBD4 8003DFD4 C4420000 */  lwc1        $fv1, 0x0($v0)
.L8003DFD8:
/* 03EBD8 8003DFD8 8FFF8298 */  lw          $ra, %lo(D_80178298)($ra)
/* 03EBDC 8003DFDC 8D8C8288 */  lw          $t4, %lo(D_80178288)($t4)
/* 03EBE0 8003DFE0 8DAD8290 */  lw          $t5, %lo(D_80178290)($t5)
/* 03EBE4 8003DFE4 AFBF0060 */  sw          $ra, 0x60($sp)
/* 03EBE8 8003DFE8 46001686 */  mov.s       $fs3, $fv1
/* 03EBEC 8003DFEC C60C0000 */  lwc1        $fa0, 0x0($s0)
/* 03EBF0 8003DFF0 AFAC0068 */  sw          $t4, 0x68($sp)
/* 03EBF4 8003DFF4 0C008C94 */  jal         __cosf
/* 03EBF8 8003DFF8 AFAD0064 */   sw         $t5, 0x64($sp)
/* 03EBFC 8003DFFC C60C0000 */  lwc1        $fa0, 0x0($s0)
/* 03EC00 8003E000 0C008C24 */  jal         __sinf
/* 03EC04 8003E004 E7A00078 */   swc1       $fv0, 0x78($sp)
/* 03EC08 8003E008 3C014396 */  lui         $at, (0x43960000 >> 16)
/* 03EC0C 8003E00C 4481B000 */  mtc1        $at, $fs1
/* 03EC10 8003E010 3C0143C8 */  lui         $at, (0x43C80000 >> 16)
/* 03EC14 8003E014 4481A000 */  mtc1        $at, $fs0
/* 03EC18 8003E018 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 03EC1C 8003E01C 44819000 */  mtc1        $at, $ft5
/* 03EC20 8003E020 3C014320 */  lui         $at, (0x43200000 >> 16)
/* 03EC24 8003E024 3C0A8013 */  lui         $t2, %hi(gMasterDisp)
/* 03EC28 8003E028 44818000 */  mtc1        $at, $ft4
/* 03EC2C 8003E02C 254A7E64 */  addiu       $t2, $t2, %lo(gMasterDisp)
/* 03EC30 8003E030 8FAC0068 */  lw          $t4, 0x68($sp)
/* 03EC34 8003E034 8FAD0064 */  lw          $t5, 0x64($sp)
/* 03EC38 8003E038 8FBF0060 */  lw          $ra, 0x60($sp)
/* 03EC3C 8003E03C C7AE0078 */  lwc1        $fa1, 0x78($sp)
/* 03EC40 8003E040 00005825 */  or          $t3, $zero, $zero
/* 03EC44 8003E044 3C11F600 */  lui         $s1, (0xF6000000 >> 16)
/* 03EC48 8003E048 3C10F700 */  lui         $s0, (0xF7000000 >> 16)
.L8003E04C:
/* 03EC4C 8003E04C C5840000 */  lwc1        $ft0, 0x0($t4)
/* 03EC50 8003E050 C5A60000 */  lwc1        $ft1, 0x0($t5)
/* 03EC54 8003E054 256B0001 */  addiu       $t3, $t3, 0x1
/* 03EC58 8003E058 46182080 */  add.s       $fv1, $ft0, $fs2
/* 03EC5C 8003E05C 25AD0004 */  addiu       $t5, $t5, 0x4
/* 03EC60 8003E060 258C0004 */  addiu       $t4, $t4, 0x4
/* 03EC64 8003E064 461A3300 */  add.s       $fa0, $ft1, $fs3
/* 03EC68 8003E068 4602A03E */  c.le.s      $fs0, $fv1
/* 03EC6C 8003E06C 00000000 */  nop
/* 03EC70 8003E070 45020003 */  bc1fl       .L8003E080
/* 03EC74 8003E074 460CB03E */   c.le.s     $fs1, $fa0
/* 03EC78 8003E078 461E1081 */  sub.s       $fv1, $fv1, $fs5
/* 03EC7C 8003E07C 460CB03E */  c.le.s      $fs1, $fa0
.L8003E080:
/* 03EC80 8003E080 46101081 */  sub.s       $fv1, $fv1, $ft4
/* 03EC84 8003E084 45020003 */  bc1fl       .L8003E094
/* 03EC88 8003E088 46126301 */   sub.s      $fa0, $fa0, $ft5
/* 03EC8C 8003E08C 461C6301 */  sub.s       $fa0, $fa0, $fs4
/* 03EC90 8003E090 46126301 */  sub.s       $fa0, $fa0, $ft5
.L8003E094:
/* 03EC94 8003E094 46027202 */  mul.s       $ft2, $fa1, $fv1
/* 03EC98 8003E098 00000000 */  nop
/* 03EC9C 8003E09C 460C0282 */  mul.s       $ft3, $fv0, $fa0
/* 03ECA0 8003E0A0 460A4100 */  add.s       $ft0, $ft2, $ft3
/* 03ECA4 8003E0A4 46102180 */  add.s       $ft1, $ft0, $ft4
/* 03ECA8 8003E0A8 4600320D */  trunc.w.s   $ft2, $ft1
/* 03ECAC 8003E0AC 44084000 */  mfc1        $t0, $ft2
/* 03ECB0 8003E0B0 00000000 */  nop
/* 03ECB4 8003E0B4 0008CC00 */  sll         $t9, $t0, 16
/* 03ECB8 8003E0B8 00197403 */  sra         $t6, $t9, 16
/* 03ECBC 8003E0BC 05C0002B */  bltz        $t6, .L8003E16C
/* 03ECC0 8003E0C0 01C04025 */   or         $t0, $t6, $zero
/* 03ECC4 8003E0C4 29C10140 */  slti        $at, $t6, 0x140
/* 03ECC8 8003E0C8 10200028 */  beqz        $at, .L8003E16C
/* 03ECCC 8003E0CC 00000000 */   nop
/* 03ECD0 8003E0D0 46000287 */  neg.s       $ft3, $fv0
/* 03ECD4 8003E0D4 46025102 */  mul.s       $ft0, $ft3, $fv1
/* 03ECD8 8003E0D8 00000000 */  nop
/* 03ECDC 8003E0DC 460C7182 */  mul.s       $ft1, $fa1, $fa0
/* 03ECE0 8003E0E0 46062200 */  add.s       $ft2, $ft0, $ft1
/* 03ECE4 8003E0E4 46124280 */  add.s       $ft3, $ft2, $ft5
/* 03ECE8 8003E0E8 4600510D */  trunc.w.s   $ft0, $ft3
/* 03ECEC 8003E0EC 44092000 */  mfc1        $t1, $ft0
/* 03ECF0 8003E0F0 00000000 */  nop
/* 03ECF4 8003E0F4 0009C400 */  sll         $t8, $t1, 16
/* 03ECF8 8003E0F8 0018CC03 */  sra         $t9, $t8, 16
/* 03ECFC 8003E0FC 0299082A */  slt         $at, $s4, $t9
/* 03ED00 8003E100 1020001A */  beqz        $at, .L8003E16C
/* 03ED04 8003E104 03204825 */   or         $t1, $t9, $zero
/* 03ED08 8003E108 0335082A */  slt         $at, $t9, $s5
/* 03ED0C 8003E10C 10200017 */  beqz        $at, .L8003E16C
/* 03ED10 8003E110 310603FF */   andi       $a2, $t0, 0x3FF
/* 03ED14 8003E114 8D420000 */  lw          $v0, 0x0($t2)
/* 03ED18 8003E118 312703FF */  andi        $a3, $t1, 0x3FF
/* 03ED1C 8003E11C 244E0008 */  addiu       $t6, $v0, 0x8
/* 03ED20 8003E120 AD4E0000 */  sw          $t6, 0x0($t2)
/* 03ED24 8003E124 AC400004 */  sw          $zero, 0x4($v0)
/* 03ED28 8003E128 AC530000 */  sw          $s3, 0x0($v0)
/* 03ED2C 8003E12C 8D420000 */  lw          $v0, 0x0($t2)
/* 03ED30 8003E130 00067380 */  sll         $t6, $a2, 14
/* 03ED34 8003E134 244F0008 */  addiu       $t7, $v0, 0x8
/* 03ED38 8003E138 AD4F0000 */  sw          $t7, 0x0($t2)
/* 03ED3C 8003E13C AC500000 */  sw          $s0, 0x0($v0)
/* 03ED40 8003E140 8FF80000 */  lw          $t8, 0x0($ra)
/* 03ED44 8003E144 00077880 */  sll         $t7, $a3, 2
/* 03ED48 8003E148 AC580004 */  sw          $t8, 0x4($v0)
/* 03ED4C 8003E14C 8D420000 */  lw          $v0, 0x0($t2)
/* 03ED50 8003E150 01D1C025 */  or          $t8, $t6, $s1
/* 03ED54 8003E154 01CF7025 */  or          $t6, $t6, $t7
/* 03ED58 8003E158 24590008 */  addiu       $t9, $v0, 0x8
/* 03ED5C 8003E15C AD590000 */  sw          $t9, 0x0($t2)
/* 03ED60 8003E160 030FC825 */  or          $t9, $t8, $t7
/* 03ED64 8003E164 AC590000 */  sw          $t9, 0x0($v0)
/* 03ED68 8003E168 AC4E0004 */  sw          $t6, 0x4($v0)
.L8003E16C:
/* 03ED6C 8003E16C 1572FFB7 */  bne         $t3, $s2, .L8003E04C
/* 03ED70 8003E170 27FF0004 */   addiu      $ra, $ra, 0x4
/* 03ED74 8003E174 8D420000 */  lw          $v0, 0x0($t2)
/* 03ED78 8003E178 244F0008 */  addiu       $t7, $v0, 0x8
/* 03ED7C 8003E17C AD4F0000 */  sw          $t7, 0x0($t2)
/* 03ED80 8003E180 AC400004 */  sw          $zero, 0x4($v0)
/* 03ED84 8003E184 AC530000 */  sw          $s3, 0x0($v0)
/* 03ED88 8003E188 8D420000 */  lw          $v0, 0x0($t2)
/* 03ED8C 8003E18C 3C19BA00 */  lui         $t9, (0xBA000602 >> 16)
/* 03ED90 8003E190 37390602 */  ori         $t9, $t9, (0xBA000602 & 0xFFFF)
/* 03ED94 8003E194 24580008 */  addiu       $t8, $v0, 0x8
/* 03ED98 8003E198 AD580000 */  sw          $t8, 0x0($t2)
/* 03ED9C 8003E19C AC400004 */  sw          $zero, 0x4($v0)
/* 03EDA0 8003E1A0 AC590000 */  sw          $t9, 0x0($v0)
/* 03EDA4 8003E1A4 8FBF005C */  lw          $ra, 0x5C($sp)
/* 03EDA8 8003E1A8 D7B40010 */  ldc1        $fs0, 0x10($sp)
/* 03EDAC 8003E1AC D7B60018 */  ldc1        $fs1, 0x18($sp)
/* 03EDB0 8003E1B0 D7B80020 */  ldc1        $fs2, 0x20($sp)
/* 03EDB4 8003E1B4 D7BA0028 */  ldc1        $fs3, 0x28($sp)
/* 03EDB8 8003E1B8 D7BC0030 */  ldc1        $fs4, 0x30($sp)
/* 03EDBC 8003E1BC D7BE0038 */  ldc1        $fs5, 0x38($sp)
/* 03EDC0 8003E1C0 8FB00044 */  lw          $s0, 0x44($sp)
/* 03EDC4 8003E1C4 8FB10048 */  lw          $s1, 0x48($sp)
/* 03EDC8 8003E1C8 8FB2004C */  lw          $s2, 0x4C($sp)
/* 03EDCC 8003E1CC 8FB30050 */  lw          $s3, 0x50($sp)
/* 03EDD0 8003E1D0 8FB40054 */  lw          $s4, 0x54($sp)
/* 03EDD4 8003E1D4 8FB50058 */  lw          $s5, 0x58($sp)
/* 03EDD8 8003E1D8 03E00008 */  jr          $ra
/* 03EDDC 8003E1DC 27BD0090 */   addiu      $sp, $sp, 0x90
glabel func_8003E1E0
/* 03EDE0 8003E1E0 03E00008 */  jr          $ra
/* 03EDE4 8003E1E4 00000000 */   nop
.section .late_rodata
dlabel D_800D5390
/* 0D5F90 800D5390 3F99999A */ .float 1.200000048

dlabel jtbl_800D5394
/* 0D5F94 800D5394 8003E6C4 */ .word .L8003E6C4
/* 0D5F98 800D5398 80040434 */ .word .L80040434
/* 0D5F9C 800D539C 80040434 */ .word .L80040434
/* 0D5FA0 800D53A0 80040434 */ .word .L80040434
/* 0D5FA4 800D53A4 80040434 */ .word .L80040434
/* 0D5FA8 800D53A8 80040434 */ .word .L80040434
/* 0D5FAC 800D53AC 8003E6C4 */ .word .L8003E6C4
/* 0D5FB0 800D53B0 8003F0B4 */ .word .L8003F0B4
/* 0D5FB4 800D53B4 8003F0B4 */ .word .L8003F0B4
/* 0D5FB8 800D53B8 8003E8C8 */ .word .L8003E8C8
/* 0D5FBC 800D53BC 80040434 */ .word .L80040434
/* 0D5FC0 800D53C0 8003F0B4 */ .word .L8003F0B4
/* 0D5FC4 800D53C4 8003F0B4 */ .word .L8003F0B4
/* 0D5FC8 800D53C8 8003EE1C */ .word .L8003EE1C
/* 0D5FCC 800D53CC 8003E2D8 */ .word .L8003E2D8
/* 0D5FD0 800D53D0 80040434 */ .word .L80040434
/* 0D5FD4 800D53D4 8003E2D8 */ .word .L8003E2D8
/* 0D5FD8 800D53D8 80040434 */ .word .L80040434
/* 0D5FDC 800D53DC 80040434 */ .word .L80040434
/* 0D5FE0 800D53E0 8003E2D8 */ .word .L8003E2D8
/* 0D5FE4 800D53E4 8003E2D8 */ .word .L8003E2D8

dlabel D_800D53E8
/* 0D5FE8 800D53E8 3ECCCCCD */ .float 0.400000006

dlabel D_800D53EC
/* 0D5FEC 800D53EC C5BB8000 */ .float -6000

dlabel D_800D53F0
/* 0D5FF0 800D53F0 C1A1C71C */ .float -20.22222137

dlabel D_800D53F4
/* 0D5FF4 800D53F4 45E38000 */ .float 7280

dlabel D_800D53F8
/* 0D5FF8 800D53F8 3C8EFA35 */ .float 0.01745329238

dlabel D_800D53FC
/* 0D5FFC 800D53FC C5BB8000 */ .float -6000

dlabel D_800D5400
/* 0D6000 800D5400 3F19999A */ .float 0.6000000238

dlabel D_800D5404
/* 0D6004 800D5404 C1A1C71C */ .float -20.22222137

dlabel D_800D5408
/* 0D6008 800D5408 45E38000 */ .float 7280

dlabel D_800D540C
/* 0D600C 800D540C 3C8EFA35 */ .float 0.01745329238

dlabel D_800D5410
/* 0D6010 800D5410 3C8EFA35 */ .float 0.01745329238

dlabel D_800D5414
/* 0D6014 800D5414 3ECCCCCD */ .float 0.400000006

dlabel D_800D5418
/* 0D6018 800D5418 C5BB8000 */ .float -6000

dlabel D_800D541C
/* 0D601C 800D541C C1A1C71C */ .float -20.22222137

dlabel D_800D5420
/* 0D6020 800D5420 45E38000 */ .float 7280

dlabel D_800D5424
/* 0D6024 800D5424 3C8EFA35 */ .float 0.01745329238

dlabel D_800D5428
/* 0D6028 800D5428 3C8EFA35 */ .float 0.01745329238

dlabel D_800D542C
/* 0D602C 800D542C BFA66666 */ .float -1.299999952

dlabel D_800D5430
/* 0D6030 800D5430 3C8EFA35 */ .float 0.01745329238

dlabel D_800D5434
/* 0D6034 800D5434 C5DAC000 */ .float -7000

dlabel D_800D5438
/* 0D6038 800D5438 3F19999A */ .float 0.6000000238

dlabel D_800D543C
/* 0D603C 800D543C C221C71B */ .float -40.44443893

dlabel D_800D5440
/* 0D6040 800D5440 45E38000 */ .float 7280

dlabel D_800D5444
/* 0D6044 800D5444 3C8EFA35 */ .float 0.01745329238

dlabel D_800D5448
/* 0D6048 800D5448 45E38000 */ .float 7280

dlabel D_800D544C
/* 0D604C 800D544C C5DAC000 */ .float -7000

dlabel D_800D5450
/* 0D6050 800D5450 3F19999A */ .float 0.6000000238

dlabel D_800D5454
/* 0D6054 800D5454 C221C71B */ .float -40.44443893

dlabel D_800D5458
/* 0D6058 800D5458 C4ED8000 */ .float -1900

dlabel D_800D545C
/* 0D605C 800D545C 45DAC000 */ .float 7000

dlabel D_800D5460
/* 0D6060 800D5460 45E38000 */ .float 7280

dlabel D_800D5464
/* 0D6064 800D5464 3C8EFA35 */ .float 0.01745329238

dlabel D_800D5468
/* 0D6068 800D5468 C53B8000 */ .float -3000

dlabel D_800D546C
/* 0D606C 800D546C C55AC000 */ .float -3500

dlabel D_800D5470
/* 0D6070 800D5470 45E38000 */ .float 7280

dlabel D_800D5474
/* 0D6074 800D5474 439D8000 */ .float 315

dlabel D_800D5478
/* 0D6078 800D5478 43A28000 */ .float 325

dlabel jtbl_800D547C
/* 0D607C 800D547C 8003FB34 */ .word .L8003FB34
/* 0D6080 800D5480 8003FCBC */ .word .L8003FCBC
/* 0D6084 800D5484 8003FE40 */ .word .L8003FE40
/* 0D6088 800D5488 8003FE40 */ .word .L8003FE40
/* 0D608C 800D548C 800401B0 */ .word .L800401B0
/* 0D6090 800D5490 80040264 */ .word .L80040264
/* 0D6094 800D5494 80040264 */ .word .L80040264
/* 0D6098 800D5498 80040264 */ .word .L80040264
/* 0D609C 800D549C 80040264 */ .word .L80040264
/* 0D60A0 800D54A0 8003FD84 */ .word .L8003FD84
/* 0D60A4 800D54A4 80040264 */ .word .L80040264
/* 0D60A8 800D54A8 80040264 */ .word .L80040264
/* 0D60AC 800D54AC 80040264 */ .word .L80040264
/* 0D60B0 800D54B0 8003FF6C */ .word .L8003FF6C
/* 0D60B4 800D54B4 80040264 */ .word .L80040264
/* 0D60B8 800D54B8 80040264 */ .word .L80040264
/* 0D60BC 800D54BC 80040038 */ .word .L80040038
/* 0D60C0 800D54C0 80040104 */ .word .L80040104

dlabel D_800D54C4
/* 0D60C4 800D54C4 3FD9999A */ .float 1.700000048

dlabel D_800D54C8
/* 0D60C8 800D54C8 3C8EFA35 */ .float 0.01745329238

dlabel D_800D54CC
/* 0D60CC 800D54CC 3C8EFA35 */ .float 0.01745329238

dlabel D_800D54D0
/* 0D60D0 800D54D0 48355100 */ .float 185668

dlabel D_800D54D4
/* 0D60D4 800D54D4 3ECCCCCD */ .float 0.400000006

dlabel D_800D54D8
/* 0D60D8 800D54D8 3E4CCCCD */ .float 0.200000003

dlabel D_800D54DC
/* 0D60DC 800D54DC 3827C5AC */ .float 3.999999899e-05

dlabel D_800D54E0
/* 0D60E0 800D54E0 3FA66666 */ .float 1.299999952

dlabel D_800D54E4
/* 0D60E4 800D54E4 3ECCCCCD */ .float 0.400000006

dlabel D_800D54E8
/* 0D60E8 800D54E8 3F490FDB */ .float 0.7853981853


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_8003E1E8
/* 03EDE8 8003E1E8 27BDFEC0 */  addiu       $sp, $sp, -0x140
/* 03EDEC 8003E1EC AFBF0024 */  sw          $ra, 0x24($sp)
/* 03EDF0 8003E1F0 AFB10020 */  sw          $s1, 0x20($sp)
/* 03EDF4 8003E1F4 AFB0001C */  sw          $s0, 0x1C($sp)
/* 03EDF8 8003E1F8 3C0E8017 */  lui         $t6, %hi(D_80177AB0)
/* 03EDFC 8003E1FC 91CE7AB0 */  lbu         $t6, %lo(D_80177AB0)($t6)
/* 03EE00 8003E200 3C118014 */  lui         $s1, %hi(gGfxMatrix)
/* 03EE04 8003E204 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 03EE08 8003E208 11C0088C */  beqz        $t6, .L8004043C
/* 03EE0C 8003E20C 2631B3C0 */   addiu      $s1, $s1, %lo(gGfxMatrix)
/* 03EE10 8003E210 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 03EE14 8003E214 3C108017 */  lui         $s0, %hi(gLevelType)
/* 03EE18 8003E218 24010014 */  addiu       $at, $zero, 0x14
/* 03EE1C 8003E21C 14A10007 */  bne         $a1, $at, .L8003E23C
/* 03EE20 8003E220 92107C98 */   lbu        $s0, %lo(gLevelType)($s0)
/* 03EE24 8003E224 3C0F8017 */  lui         $t7, %hi(gVersusStage)
/* 03EE28 8003E228 8DEF789C */  lw          $t7, %lo(gVersusStage)($t7)
/* 03EE2C 8003E22C 24010002 */  addiu       $at, $zero, 0x2
/* 03EE30 8003E230 55E10003 */  bnel        $t7, $at, .L8003E240
/* 03EE34 8003E234 2401000A */   addiu      $at, $zero, 0xA
/* 03EE38 8003E238 00008025 */  or          $s0, $zero, $zero
.L8003E23C:
/* 03EE3C 8003E23C 2401000A */  addiu       $at, $zero, 0xA
.L8003E240:
/* 03EE40 8003E240 14A10002 */  bne         $a1, $at, .L8003E24C
/* 03EE44 8003E244 02202025 */   or         $a0, $s1, $zero
/* 03EE48 8003E248 24100001 */  addiu       $s0, $zero, 0x1
.L8003E24C:
/* 03EE4C 8003E24C 0C0015C2 */  jal         Matrix_Push
/* 03EE50 8003E250 AFA5011C */   sw         $a1, 0x11C($sp)
/* 03EE54 8003E254 3C188017 */  lui         $t8, %hi(D_80177C70)
/* 03EE58 8003E258 8F187C70 */  lw          $t8, %lo(D_80177C70)($t8)
/* 03EE5C 8003E25C 24010002 */  addiu       $at, $zero, 0x2
/* 03EE60 8003E260 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* 03EE64 8003E264 17010008 */  bne         $t8, $at, .L8003E288
/* 03EE68 8003E268 3C01800D */   lui        $at, %hi(D_800D5390)
/* 03EE6C 8003E26C C4205390 */  lwc1        $fv0, %lo(D_800D5390)($at)
/* 03EE70 8003E270 24190001 */  addiu       $t9, $zero, 0x1
/* 03EE74 8003E274 AFB90010 */  sw          $t9, 0x10($sp)
/* 03EE78 8003E278 44050000 */  mfc1        $a1, $fv0
/* 03EE7C 8003E27C 44060000 */  mfc1        $a2, $fv0
/* 03EE80 8003E280 0C00170D */  jal         Matrix_Scale
/* 03EE84 8003E284 8E240000 */   lw         $a0, 0x0($s1)
.L8003E288:
/* 03EE88 8003E288 12000006 */  beqz        $s0, .L8003E2A4
/* 03EE8C 8003E28C 24050011 */   addiu      $a1, $zero, 0x11
/* 03EE90 8003E290 24010001 */  addiu       $at, $zero, 0x1
/* 03EE94 8003E294 120104BE */  beq         $s0, $at, .L8003F590
/* 03EE98 8003E298 3C188018 */   lui        $t8, %hi(gPlayer)
/* 03EE9C 8003E29C 10000865 */  b           .L80040434
/* 03EEA0 8003E2A0 00000000 */   nop
.L8003E2A4:
/* 03EEA4 8003E2A4 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 03EEA8 8003E2A8 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 03EEAC 8003E2AC 0C02E374 */  jal         RCP_SetupDL
/* 03EEB0 8003E2B0 02002025 */   or         $a0, $s0, $zero
/* 03EEB4 8003E2B4 8FA9011C */  lw          $t1, 0x11C($sp)
/* 03EEB8 8003E2B8 2D210015 */  sltiu       $at, $t1, 0x15
/* 03EEBC 8003E2BC 1020085D */  beqz        $at, .L80040434
/* 03EEC0 8003E2C0 00094880 */   sll        $t1, $t1, 2
/* 03EEC4 8003E2C4 3C01800D */  lui         $at, %hi(jtbl_800D5394)
/* 03EEC8 8003E2C8 00290821 */  addu        $at, $at, $t1
/* 03EECC 8003E2CC 8C295394 */  lw          $t1, %lo(jtbl_800D5394)($at)
/* 03EED0 8003E2D0 01200008 */  jr          $t1
/* 03EED4 8003E2D4 00000000 */   nop
.L8003E2D8:
/* 03EED8 8003E2D8 3C0B8017 */  lui         $t3, %hi(gPlayerNum)
/* 03EEDC 8003E2DC 8D6B78A0 */  lw          $t3, %lo(gPlayerNum)($t3)
/* 03EEE0 8003E2E0 3C0A8018 */  lui         $t2, %hi(gPlayer)
/* 03EEE4 8003E2E4 8D4A8280 */  lw          $t2, %lo(gPlayer)($t2)
/* 03EEE8 8003E2E8 000B6080 */  sll         $t4, $t3, 2
/* 03EEEC 8003E2EC 018B6021 */  addu        $t4, $t4, $t3
/* 03EEF0 8003E2F0 000C60C0 */  sll         $t4, $t4, 3
/* 03EEF4 8003E2F4 3C01800D */  lui         $at, %hi(D_800D53E8)
/* 03EEF8 8003E2F8 018B6023 */  subu        $t4, $t4, $t3
/* 03EEFC 8003E2FC C42053E8 */  lwc1        $fv0, %lo(D_800D53E8)($at)
/* 03EF00 8003E300 000C6140 */  sll         $t4, $t4, 5
/* 03EF04 8003E304 3C01800D */  lui         $at, %hi(D_800D53EC)
/* 03EF08 8003E308 014C1021 */  addu        $v0, $t2, $t4
/* 03EF0C 8003E30C C444005C */  lwc1        $ft0, 0x5C($v0)
/* 03EF10 8003E310 C42653EC */  lwc1        $ft1, %lo(D_800D53EC)($at)
/* 03EF14 8003E314 C44A0044 */  lwc1        $ft3, 0x44($v0)
/* 03EF18 8003E318 46062202 */  mul.s       $ft2, $ft0, $ft1
/* 03EF1C 8003E31C 00000000 */  nop
/* 03EF20 8003E320 46005482 */  mul.s       $ft5, $ft3, $fv0
/* 03EF24 8003E324 46124101 */  sub.s       $ft0, $ft2, $ft5
/* 03EF28 8003E328 E7A40134 */  swc1        $ft0, 0x134($sp)
/* 03EF2C 8003E32C 0C027DDA */  jal         Math_RadToDeg
/* 03EF30 8003E330 C44C0058 */   lwc1       $fa0, 0x58($v0)
/* 03EF34 8003E334 3C01800D */  lui         $at, %hi(D_800D53F0)
/* 03EF38 8003E338 C42653F0 */  lwc1        $ft1, %lo(D_800D53F0)($at)
/* 03EF3C 8003E33C 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* 03EF40 8003E340 44814000 */  mtc1        $at, $ft2
/* 03EF44 8003E344 46060282 */  mul.s       $ft3, $fv0, $ft1
/* 03EF48 8003E348 3C01800D */  lui         $at, %hi(D_800D53F4)
/* 03EF4C 8003E34C C42E53F4 */  lwc1        $fa1, %lo(D_800D53F4)($at)
/* 03EF50 8003E350 46085302 */  mul.s       $fa0, $ft3, $ft2
/* 03EF54 8003E354 0C001388 */  jal         Math_ModF
/* 03EF58 8003E358 00000000 */   nop
/* 03EF5C 8003E35C 3C0E8017 */  lui         $t6, %hi(gPlayerNum)
/* 03EF60 8003E360 8DCE78A0 */  lw          $t6, %lo(gPlayerNum)($t6)
/* 03EF64 8003E364 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* 03EF68 8003E368 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* 03EF6C 8003E36C 000E7880 */  sll         $t7, $t6, 2
/* 03EF70 8003E370 01EE7821 */  addu        $t7, $t7, $t6
/* 03EF74 8003E374 000F78C0 */  sll         $t7, $t7, 3
/* 03EF78 8003E378 01EE7823 */  subu        $t7, $t7, $t6
/* 03EF7C 8003E37C 000F7940 */  sll         $t7, $t7, 5
/* 03EF80 8003E380 E7A0013C */  swc1        $fv0, 0x13C($sp)
/* 03EF84 8003E384 3C01800D */  lui         $at, %hi(D_800D53F8)
/* 03EF88 8003E388 01AFC021 */  addu        $t8, $t5, $t7
/* 03EF8C 8003E38C C7120034 */  lwc1        $ft5, 0x34($t8)
/* 03EF90 8003E390 C42453F8 */  lwc1        $ft0, %lo(D_800D53F8)($at)
/* 03EF94 8003E394 8E240000 */  lw          $a0, 0x0($s1)
/* 03EF98 8003E398 24060001 */  addiu       $a2, $zero, 0x1
/* 03EF9C 8003E39C 46049182 */  mul.s       $ft1, $ft5, $ft0
/* 03EFA0 8003E3A0 44053000 */  mfc1        $a1, $ft1
/* 03EFA4 8003E3A4 0C0017F8 */  jal         Matrix_RotateZ
/* 03EFA8 8003E3A8 00000000 */   nop
/* 03EFAC 8003E3AC 3C01C4FA */  lui         $at, (0xC4FA0000 >> 16)
/* 03EFB0 8003E3B0 44815000 */  mtc1        $at, $ft3
/* 03EFB4 8003E3B4 C7A80134 */  lwc1        $ft2, 0x134($sp)
/* 03EFB8 8003E3B8 3C07C5BB */  lui         $a3, (0xC5BB8000 >> 16)
/* 03EFBC 8003E3BC 24190001 */  addiu       $t9, $zero, 0x1
/* 03EFC0 8003E3C0 46085480 */  add.s       $ft5, $ft3, $ft2
/* 03EFC4 8003E3C4 AFB90010 */  sw          $t9, 0x10($sp)
/* 03EFC8 8003E3C8 34E78000 */  ori         $a3, $a3, (0xC5BB8000 & 0xFFFF)
/* 03EFCC 8003E3CC 8E240000 */  lw          $a0, 0x0($s1)
/* 03EFD0 8003E3D0 44069000 */  mfc1        $a2, $ft5
/* 03EFD4 8003E3D4 0C0016C0 */  jal         Matrix_Translate
/* 03EFD8 8003E3D8 8FA5013C */   lw         $a1, 0x13C($sp)
/* 03EFDC 8003E3DC 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 03EFE0 8003E3E0 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 03EFE4 8003E3E4 2401000E */  addiu       $at, $zero, 0xE
/* 03EFE8 8003E3E8 3C06C4FA */  lui         $a2, (0xC4FA0000 >> 16)
/* 03EFEC 8003E3EC 14A10008 */  bne         $a1, $at, .L8003E410
/* 03EFF0 8003E3F0 24070000 */   addiu      $a3, $zero, 0x0
/* 03EFF4 8003E3F4 24090001 */  addiu       $t1, $zero, 0x1
/* 03EFF8 8003E3F8 AFA90010 */  sw          $t1, 0x10($sp)
/* 03EFFC 8003E3FC 8E240000 */  lw          $a0, 0x0($s1)
/* 03F000 8003E400 0C0016C0 */  jal         Matrix_Translate
/* 03F004 8003E404 24050000 */   addiu      $a1, $zero, 0x0
/* 03F008 8003E408 1000000B */  b           .L8003E438
/* 03F00C 8003E40C 00000000 */   nop
.L8003E410:
/* 03F010 8003E410 24010010 */  addiu       $at, $zero, 0x10
/* 03F014 8003E414 14A10008 */  bne         $a1, $at, .L8003E438
/* 03F018 8003E418 3C06C51C */   lui        $a2, (0xC51C4000 >> 16)
/* 03F01C 8003E41C 240B0001 */  addiu       $t3, $zero, 0x1
/* 03F020 8003E420 AFAB0010 */  sw          $t3, 0x10($sp)
/* 03F024 8003E424 8E240000 */  lw          $a0, 0x0($s1)
/* 03F028 8003E428 24050000 */  addiu       $a1, $zero, 0x0
/* 03F02C 8003E42C 34C64000 */  ori         $a2, $a2, (0xC51C4000 & 0xFFFF)
/* 03F030 8003E430 0C0016C0 */  jal         Matrix_Translate
/* 03F034 8003E434 24070000 */   addiu      $a3, $zero, 0x0
.L8003E438:
/* 03F038 8003E438 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F03C 8003E43C 02002025 */   or         $a0, $s0, $zero
/* 03F040 8003E440 3C028018 */  lui         $v0, %hi(gCurrentLevel)
/* 03F044 8003E444 8C428234 */  lw          $v0, %lo(gCurrentLevel)($v0)
/* 03F048 8003E448 2401000E */  addiu       $at, $zero, 0xE
/* 03F04C 8003E44C 44800000 */  mtc1        $zero, $fv0
/* 03F050 8003E450 1041002D */  beq         $v0, $at, .L8003E508
/* 03F054 8003E454 3C0545E3 */   lui        $a1, (0x45E38000 >> 16)
/* 03F058 8003E458 24010010 */  addiu       $at, $zero, 0x10
/* 03F05C 8003E45C 10410034 */  beq         $v0, $at, .L8003E530
/* 03F060 8003E460 3C0F0600 */   lui        $t7, (0x6000000 >> 16)
/* 03F064 8003E464 24010013 */  addiu       $at, $zero, 0x13
/* 03F068 8003E468 1041003A */  beq         $v0, $at, .L8003E554
/* 03F06C 8003E46C 3C090600 */   lui        $t1, (0x6000000 >> 16)
/* 03F070 8003E470 24010014 */  addiu       $at, $zero, 0x14
/* 03F074 8003E474 1441003E */  bne         $v0, $at, .L8003E570
/* 03F078 8003E478 3C028017 */   lui        $v0, %hi(gVersusStage)
/* 03F07C 8003E47C 8C42789C */  lw          $v0, %lo(gVersusStage)($v0)
/* 03F080 8003E480 3C0C0600 */  lui         $t4, (0x6000000 >> 16)
/* 03F084 8003E484 24010001 */  addiu       $at, $zero, 0x1
/* 03F088 8003E488 1440000A */  bnez        $v0, .L8003E4B4
/* 03F08C 8003E48C 00000000 */   nop
/* 03F090 8003E490 8E030000 */  lw          $v1, 0x0($s0)
/* 03F094 8003E494 3C0E0303 */  lui         $t6, %hi(D_302D4D0)
/* 03F098 8003E498 25CED4D0 */  addiu       $t6, $t6, %lo(D_302D4D0)
/* 03F09C 8003E49C 246A0008 */  addiu       $t2, $v1, 0x8
/* 03F0A0 8003E4A0 AE0A0000 */  sw          $t2, 0x0($s0)
/* 03F0A4 8003E4A4 AC6E0004 */  sw          $t6, 0x4($v1)
/* 03F0A8 8003E4A8 AC6C0000 */  sw          $t4, 0x0($v1)
/* 03F0AC 8003E4AC 10000031 */  b           .L8003E574
/* 03F0B0 8003E4B0 44060000 */   mfc1       $a2, $fv0
.L8003E4B4:
/* 03F0B4 8003E4B4 1441000B */  bne         $v0, $at, .L8003E4E4
/* 03F0B8 8003E4B8 3C090600 */   lui        $t1, (0x6000000 >> 16)
/* 03F0BC 8003E4BC 8E030000 */  lw          $v1, 0x0($s0)
/* 03F0C0 8003E4C0 3C180301 */  lui         $t8, %hi(D_30146B0)
/* 03F0C4 8003E4C4 271846B0 */  addiu       $t8, $t8, %lo(D_30146B0)
/* 03F0C8 8003E4C8 246D0008 */  addiu       $t5, $v1, 0x8
/* 03F0CC 8003E4CC AE0D0000 */  sw          $t5, 0x0($s0)
/* 03F0D0 8003E4D0 3C0F0600 */  lui         $t7, (0x6000000 >> 16)
/* 03F0D4 8003E4D4 AC6F0000 */  sw          $t7, 0x0($v1)
/* 03F0D8 8003E4D8 AC780004 */  sw          $t8, 0x4($v1)
/* 03F0DC 8003E4DC 10000025 */  b           .L8003E574
/* 03F0E0 8003E4E0 44060000 */   mfc1       $a2, $fv0
.L8003E4E4:
/* 03F0E4 8003E4E4 8E030000 */  lw          $v1, 0x0($s0)
/* 03F0E8 8003E4E8 3C0B0301 */  lui         $t3, %hi(D_3011E40)
/* 03F0EC 8003E4EC 256B1E40 */  addiu       $t3, $t3, %lo(D_3011E40)
/* 03F0F0 8003E4F0 24790008 */  addiu       $t9, $v1, 0x8
/* 03F0F4 8003E4F4 AE190000 */  sw          $t9, 0x0($s0)
/* 03F0F8 8003E4F8 AC6B0004 */  sw          $t3, 0x4($v1)
/* 03F0FC 8003E4FC AC690000 */  sw          $t1, 0x0($v1)
/* 03F100 8003E500 1000001C */  b           .L8003E574
/* 03F104 8003E504 44060000 */   mfc1       $a2, $fv0
.L8003E508:
/* 03F108 8003E508 8E030000 */  lw          $v1, 0x0($s0)
/* 03F10C 8003E50C 3C0E0601 */  lui         $t6, %hi(D_600D9F0)
/* 03F110 8003E510 25CED9F0 */  addiu       $t6, $t6, %lo(D_600D9F0)
/* 03F114 8003E514 246A0008 */  addiu       $t2, $v1, 0x8
/* 03F118 8003E518 AE0A0000 */  sw          $t2, 0x0($s0)
/* 03F11C 8003E51C 3C0C0600 */  lui         $t4, (0x6000000 >> 16)
/* 03F120 8003E520 AC6C0000 */  sw          $t4, 0x0($v1)
/* 03F124 8003E524 AC6E0004 */  sw          $t6, 0x4($v1)
/* 03F128 8003E528 10000012 */  b           .L8003E574
/* 03F12C 8003E52C 44060000 */   mfc1       $a2, $fv0
.L8003E530:
/* 03F130 8003E530 8E030000 */  lw          $v1, 0x0($s0)
/* 03F134 8003E534 3C180601 */  lui         $t8, %hi(D_600F1D0)
/* 03F138 8003E538 2718F1D0 */  addiu       $t8, $t8, %lo(D_600F1D0)
/* 03F13C 8003E53C 246D0008 */  addiu       $t5, $v1, 0x8
/* 03F140 8003E540 AE0D0000 */  sw          $t5, 0x0($s0)
/* 03F144 8003E544 AC780004 */  sw          $t8, 0x4($v1)
/* 03F148 8003E548 AC6F0000 */  sw          $t7, 0x0($v1)
/* 03F14C 8003E54C 10000009 */  b           .L8003E574
/* 03F150 8003E550 44060000 */   mfc1       $a2, $fv0
.L8003E554:
/* 03F154 8003E554 8E030000 */  lw          $v1, 0x0($s0)
/* 03F158 8003E558 3C0B0601 */  lui         $t3, %hi(D_600F670)
/* 03F15C 8003E55C 256BF670 */  addiu       $t3, $t3, %lo(D_600F670)
/* 03F160 8003E560 24790008 */  addiu       $t9, $v1, 0x8
/* 03F164 8003E564 AE190000 */  sw          $t9, 0x0($s0)
/* 03F168 8003E568 AC6B0004 */  sw          $t3, 0x4($v1)
/* 03F16C 8003E56C AC690000 */  sw          $t1, 0x0($v1)
.L8003E570:
/* 03F170 8003E570 44060000 */  mfc1        $a2, $fv0
.L8003E574:
/* 03F174 8003E574 44070000 */  mfc1        $a3, $fv0
/* 03F178 8003E578 240A0001 */  addiu       $t2, $zero, 0x1
/* 03F17C 8003E57C AFAA0010 */  sw          $t2, 0x10($sp)
/* 03F180 8003E580 8E240000 */  lw          $a0, 0x0($s1)
/* 03F184 8003E584 0C0016C0 */  jal         Matrix_Translate
/* 03F188 8003E588 34A58000 */   ori        $a1, $a1, (0x45E38000 & 0xFFFF)
/* 03F18C 8003E58C 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F190 8003E590 02002025 */   or         $a0, $s0, $zero
/* 03F194 8003E594 3C028018 */  lui         $v0, %hi(gCurrentLevel)
/* 03F198 8003E598 8C428234 */  lw          $v0, %lo(gCurrentLevel)($v0)
/* 03F19C 8003E59C 2401000E */  addiu       $at, $zero, 0xE
/* 03F1A0 8003E5A0 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* 03F1A4 8003E5A4 1041002C */  beq         $v0, $at, .L8003E658
/* 03F1A8 8003E5A8 24010010 */   addiu      $at, $zero, 0x10
/* 03F1AC 8003E5AC 10410033 */  beq         $v0, $at, .L8003E67C
/* 03F1B0 8003E5B0 3C180600 */   lui        $t8, (0x6000000 >> 16)
/* 03F1B4 8003E5B4 24010013 */  addiu       $at, $zero, 0x13
/* 03F1B8 8003E5B8 10410039 */  beq         $v0, $at, .L8003E6A0
/* 03F1BC 8003E5BC 3C0B0600 */   lui        $t3, (0x6000000 >> 16)
/* 03F1C0 8003E5C0 24010014 */  addiu       $at, $zero, 0x14
/* 03F1C4 8003E5C4 1441079B */  bne         $v0, $at, .L80040434
/* 03F1C8 8003E5C8 3C028017 */   lui        $v0, %hi(gVersusStage)
/* 03F1CC 8003E5CC 8C42789C */  lw          $v0, %lo(gVersusStage)($v0)
/* 03F1D0 8003E5D0 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* 03F1D4 8003E5D4 24010001 */  addiu       $at, $zero, 0x1
/* 03F1D8 8003E5D8 1440000A */  bnez        $v0, .L8003E604
/* 03F1DC 8003E5DC 00000000 */   nop
/* 03F1E0 8003E5E0 8E030000 */  lw          $v1, 0x0($s0)
/* 03F1E4 8003E5E4 3C0D0303 */  lui         $t5, %hi(D_302D4D0)
/* 03F1E8 8003E5E8 25ADD4D0 */  addiu       $t5, $t5, %lo(D_302D4D0)
/* 03F1EC 8003E5EC 246C0008 */  addiu       $t4, $v1, 0x8
/* 03F1F0 8003E5F0 AE0C0000 */  sw          $t4, 0x0($s0)
/* 03F1F4 8003E5F4 AC6D0004 */  sw          $t5, 0x4($v1)
/* 03F1F8 8003E5F8 AC6E0000 */  sw          $t6, 0x0($v1)
/* 03F1FC 8003E5FC 1000078D */  b           .L80040434
/* 03F200 8003E600 00000000 */   nop
.L8003E604:
/* 03F204 8003E604 1441000B */  bne         $v0, $at, .L8003E634
/* 03F208 8003E608 3C0B0600 */   lui        $t3, (0x6000000 >> 16)
/* 03F20C 8003E60C 8E030000 */  lw          $v1, 0x0($s0)
/* 03F210 8003E610 3C190301 */  lui         $t9, %hi(D_30146B0)
/* 03F214 8003E614 273946B0 */  addiu       $t9, $t9, %lo(D_30146B0)
/* 03F218 8003E618 246F0008 */  addiu       $t7, $v1, 0x8
/* 03F21C 8003E61C AE0F0000 */  sw          $t7, 0x0($s0)
/* 03F220 8003E620 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* 03F224 8003E624 AC780000 */  sw          $t8, 0x0($v1)
/* 03F228 8003E628 AC790004 */  sw          $t9, 0x4($v1)
/* 03F22C 8003E62C 10000781 */  b           .L80040434
/* 03F230 8003E630 00000000 */   nop
.L8003E634:
/* 03F234 8003E634 8E030000 */  lw          $v1, 0x0($s0)
/* 03F238 8003E638 3C0A0301 */  lui         $t2, %hi(D_3011E40)
/* 03F23C 8003E63C 254A1E40 */  addiu       $t2, $t2, %lo(D_3011E40)
/* 03F240 8003E640 24690008 */  addiu       $t1, $v1, 0x8
/* 03F244 8003E644 AE090000 */  sw          $t1, 0x0($s0)
/* 03F248 8003E648 AC6A0004 */  sw          $t2, 0x4($v1)
/* 03F24C 8003E64C AC6B0000 */  sw          $t3, 0x0($v1)
/* 03F250 8003E650 10000778 */  b           .L80040434
/* 03F254 8003E654 00000000 */   nop
.L8003E658:
/* 03F258 8003E658 8E030000 */  lw          $v1, 0x0($s0)
/* 03F25C 8003E65C 3C0D0601 */  lui         $t5, %hi(D_600D9F0)
/* 03F260 8003E660 25ADD9F0 */  addiu       $t5, $t5, %lo(D_600D9F0)
/* 03F264 8003E664 246C0008 */  addiu       $t4, $v1, 0x8
/* 03F268 8003E668 AE0C0000 */  sw          $t4, 0x0($s0)
/* 03F26C 8003E66C AC6D0004 */  sw          $t5, 0x4($v1)
/* 03F270 8003E670 AC6E0000 */  sw          $t6, 0x0($v1)
/* 03F274 8003E674 1000076F */  b           .L80040434
/* 03F278 8003E678 00000000 */   nop
.L8003E67C:
/* 03F27C 8003E67C 8E030000 */  lw          $v1, 0x0($s0)
/* 03F280 8003E680 3C190601 */  lui         $t9, %hi(D_600F1D0)
/* 03F284 8003E684 2739F1D0 */  addiu       $t9, $t9, %lo(D_600F1D0)
/* 03F288 8003E688 246F0008 */  addiu       $t7, $v1, 0x8
/* 03F28C 8003E68C AE0F0000 */  sw          $t7, 0x0($s0)
/* 03F290 8003E690 AC790004 */  sw          $t9, 0x4($v1)
/* 03F294 8003E694 AC780000 */  sw          $t8, 0x0($v1)
/* 03F298 8003E698 10000766 */  b           .L80040434
/* 03F29C 8003E69C 00000000 */   nop
.L8003E6A0:
/* 03F2A0 8003E6A0 8E030000 */  lw          $v1, 0x0($s0)
/* 03F2A4 8003E6A4 3C0A0601 */  lui         $t2, %hi(D_600F670)
/* 03F2A8 8003E6A8 254AF670 */  addiu       $t2, $t2, %lo(D_600F670)
/* 03F2AC 8003E6AC 24690008 */  addiu       $t1, $v1, 0x8
/* 03F2B0 8003E6B0 AE090000 */  sw          $t1, 0x0($s0)
/* 03F2B4 8003E6B4 AC6A0004 */  sw          $t2, 0x4($v1)
/* 03F2B8 8003E6B8 AC6B0000 */  sw          $t3, 0x0($v1)
/* 03F2BC 8003E6BC 1000075D */  b           .L80040434
/* 03F2C0 8003E6C0 00000000 */   nop
.L8003E6C4:
/* 03F2C4 8003E6C4 3C0E8017 */  lui         $t6, %hi(gPlayerNum)
/* 03F2C8 8003E6C8 8DCE78A0 */  lw          $t6, %lo(gPlayerNum)($t6)
/* 03F2CC 8003E6CC 3C0C8018 */  lui         $t4, %hi(gPlayer)
/* 03F2D0 8003E6D0 8D8C8280 */  lw          $t4, %lo(gPlayer)($t4)
/* 03F2D4 8003E6D4 000E6880 */  sll         $t5, $t6, 2
/* 03F2D8 8003E6D8 01AE6821 */  addu        $t5, $t5, $t6
/* 03F2DC 8003E6DC 000D68C0 */  sll         $t5, $t5, 3
/* 03F2E0 8003E6E0 01AE6823 */  subu        $t5, $t5, $t6
/* 03F2E4 8003E6E4 000D6940 */  sll         $t5, $t5, 5
/* 03F2E8 8003E6E8 3C01800D */  lui         $at, %hi(D_800D53FC)
/* 03F2EC 8003E6EC 018D1021 */  addu        $v0, $t4, $t5
/* 03F2F0 8003E6F0 C444005C */  lwc1        $ft0, 0x5C($v0)
/* 03F2F4 8003E6F4 C42653FC */  lwc1        $ft1, %lo(D_800D53FC)($at)
/* 03F2F8 8003E6F8 3C01800D */  lui         $at, %hi(D_800D5400)
/* 03F2FC 8003E6FC C4325400 */  lwc1        $ft5, %lo(D_800D5400)($at)
/* 03F300 8003E700 46062282 */  mul.s       $ft3, $ft0, $ft1
/* 03F304 8003E704 C4480044 */  lwc1        $ft2, 0x44($v0)
/* 03F308 8003E708 46124102 */  mul.s       $ft0, $ft2, $ft5
/* 03F30C 8003E70C 46045181 */  sub.s       $ft1, $ft3, $ft0
/* 03F310 8003E710 E7A60134 */  swc1        $ft1, 0x134($sp)
/* 03F314 8003E714 0C027DDA */  jal         Math_RadToDeg
/* 03F318 8003E718 C44C0058 */   lwc1       $fa0, 0x58($v0)
/* 03F31C 8003E71C 3C01800D */  lui         $at, %hi(D_800D5404)
/* 03F320 8003E720 C4285404 */  lwc1        $ft2, %lo(D_800D5404)($at)
/* 03F324 8003E724 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* 03F328 8003E728 44815000 */  mtc1        $at, $ft3
/* 03F32C 8003E72C 46080482 */  mul.s       $ft5, $fv0, $ft2
/* 03F330 8003E730 3C01800D */  lui         $at, %hi(D_800D5408)
/* 03F334 8003E734 C42E5408 */  lwc1        $fa1, %lo(D_800D5408)($at)
/* 03F338 8003E738 460A9302 */  mul.s       $fa0, $ft5, $ft3
/* 03F33C 8003E73C 0C001388 */  jal         Math_ModF
/* 03F340 8003E740 00000000 */   nop
/* 03F344 8003E744 3C188017 */  lui         $t8, %hi(gPlayerNum)
/* 03F348 8003E748 8F1878A0 */  lw          $t8, %lo(gPlayerNum)($t8)
/* 03F34C 8003E74C 3C0F8018 */  lui         $t7, %hi(gPlayer)
/* 03F350 8003E750 8DEF8280 */  lw          $t7, %lo(gPlayer)($t7)
/* 03F354 8003E754 0018C880 */  sll         $t9, $t8, 2
/* 03F358 8003E758 0338C821 */  addu        $t9, $t9, $t8
/* 03F35C 8003E75C 0019C8C0 */  sll         $t9, $t9, 3
/* 03F360 8003E760 0338C823 */  subu        $t9, $t9, $t8
/* 03F364 8003E764 0019C940 */  sll         $t9, $t9, 5
/* 03F368 8003E768 E7A0013C */  swc1        $fv0, 0x13C($sp)
/* 03F36C 8003E76C 3C01800D */  lui         $at, %hi(D_800D540C)
/* 03F370 8003E770 01F94821 */  addu        $t1, $t7, $t9
/* 03F374 8003E774 C5240034 */  lwc1        $ft0, 0x34($t1)
/* 03F378 8003E778 C426540C */  lwc1        $ft1, %lo(D_800D540C)($at)
/* 03F37C 8003E77C 8E240000 */  lw          $a0, 0x0($s1)
/* 03F380 8003E780 24060001 */  addiu       $a2, $zero, 0x1
/* 03F384 8003E784 46062202 */  mul.s       $ft2, $ft0, $ft1
/* 03F388 8003E788 44054000 */  mfc1        $a1, $ft2
/* 03F38C 8003E78C 0C0017F8 */  jal         Matrix_RotateZ
/* 03F390 8003E790 00000000 */   nop
/* 03F394 8003E794 3C01C4FA */  lui         $at, (0xC4FA0000 >> 16)
/* 03F398 8003E798 44819000 */  mtc1        $at, $ft5
/* 03F39C 8003E79C C7AA0134 */  lwc1        $ft3, 0x134($sp)
/* 03F3A0 8003E7A0 3C07C5BB */  lui         $a3, (0xC5BB8000 >> 16)
/* 03F3A4 8003E7A4 240B0001 */  addiu       $t3, $zero, 0x1
/* 03F3A8 8003E7A8 460A9100 */  add.s       $ft0, $ft5, $ft3
/* 03F3AC 8003E7AC AFAB0010 */  sw          $t3, 0x10($sp)
/* 03F3B0 8003E7B0 34E78000 */  ori         $a3, $a3, (0xC5BB8000 & 0xFFFF)
/* 03F3B4 8003E7B4 8E240000 */  lw          $a0, 0x0($s1)
/* 03F3B8 8003E7B8 44062000 */  mfc1        $a2, $ft0
/* 03F3BC 8003E7BC 0C0016C0 */  jal         Matrix_Translate
/* 03F3C0 8003E7C0 8FA5013C */   lw         $a1, 0x13C($sp)
/* 03F3C4 8003E7C4 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F3C8 8003E7C8 02002025 */   or         $a0, $s0, $zero
/* 03F3CC 8003E7CC 3C028018 */  lui         $v0, %hi(gCurrentLevel)
/* 03F3D0 8003E7D0 8C428234 */  lw          $v0, %lo(gCurrentLevel)($v0)
/* 03F3D4 8003E7D4 3C0545E3 */  lui         $a1, (0x45E38000 >> 16)
/* 03F3D8 8003E7D8 34A58000 */  ori         $a1, $a1, (0x45E38000 & 0xFFFF)
/* 03F3DC 8003E7DC 10400006 */  beqz        $v0, .L8003E7F8
/* 03F3E0 8003E7E0 24060000 */   addiu      $a2, $zero, 0x0
/* 03F3E4 8003E7E4 24010006 */  addiu       $at, $zero, 0x6
/* 03F3E8 8003E7E8 1041000D */  beq         $v0, $at, .L8003E820
/* 03F3EC 8003E7EC 3C180600 */   lui        $t8, (0x6000000 >> 16)
/* 03F3F0 8003E7F0 10000013 */  b           .L8003E840
/* 03F3F4 8003E7F4 24190001 */   addiu      $t9, $zero, 0x1
.L8003E7F8:
/* 03F3F8 8003E7F8 8E030000 */  lw          $v1, 0x0($s0)
/* 03F3FC 8003E7FC 3C0C0600 */  lui         $t4, %hi(D_60059F0)
/* 03F400 8003E800 258C59F0 */  addiu       $t4, $t4, %lo(D_60059F0)
/* 03F404 8003E804 246A0008 */  addiu       $t2, $v1, 0x8
/* 03F408 8003E808 AE0A0000 */  sw          $t2, 0x0($s0)
/* 03F40C 8003E80C 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* 03F410 8003E810 AC6E0000 */  sw          $t6, 0x0($v1)
/* 03F414 8003E814 AC6C0004 */  sw          $t4, 0x4($v1)
/* 03F418 8003E818 10000009 */  b           .L8003E840
/* 03F41C 8003E81C 24190001 */   addiu      $t9, $zero, 0x1
.L8003E820:
/* 03F420 8003E820 8E030000 */  lw          $v1, 0x0($s0)
/* 03F424 8003E824 3C0F0600 */  lui         $t7, %hi(D_60046F0)
/* 03F428 8003E828 25EF46F0 */  addiu       $t7, $t7, %lo(D_60046F0)
/* 03F42C 8003E82C 246D0008 */  addiu       $t5, $v1, 0x8
/* 03F430 8003E830 AE0D0000 */  sw          $t5, 0x0($s0)
/* 03F434 8003E834 AC6F0004 */  sw          $t7, 0x4($v1)
/* 03F438 8003E838 AC780000 */  sw          $t8, 0x0($v1)
/* 03F43C 8003E83C 24190001 */  addiu       $t9, $zero, 0x1
.L8003E840:
/* 03F440 8003E840 AFB90010 */  sw          $t9, 0x10($sp)
/* 03F444 8003E844 8E240000 */  lw          $a0, 0x0($s1)
/* 03F448 8003E848 0C0016C0 */  jal         Matrix_Translate
/* 03F44C 8003E84C 24070000 */   addiu      $a3, $zero, 0x0
/* 03F450 8003E850 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F454 8003E854 02002025 */   or         $a0, $s0, $zero
/* 03F458 8003E858 3C028018 */  lui         $v0, %hi(gCurrentLevel)
/* 03F45C 8003E85C 8C428234 */  lw          $v0, %lo(gCurrentLevel)($v0)
/* 03F460 8003E860 24010006 */  addiu       $at, $zero, 0x6
/* 03F464 8003E864 3C0B0600 */  lui         $t3, (0x6000000 >> 16)
/* 03F468 8003E868 50400006 */  beql        $v0, $zero, .L8003E884
/* 03F46C 8003E86C 8E030000 */   lw         $v1, 0x0($s0)
/* 03F470 8003E870 1041000C */  beq         $v0, $at, .L8003E8A4
/* 03F474 8003E874 3C0C0600 */   lui        $t4, (0x6000000 >> 16)
/* 03F478 8003E878 100006EE */  b           .L80040434
/* 03F47C 8003E87C 00000000 */   nop
/* 03F480 8003E880 8E030000 */  lw          $v1, 0x0($s0)
.L8003E884:
/* 03F484 8003E884 3C0A0600 */  lui         $t2, %hi(D_60059F0)
/* 03F488 8003E888 254A59F0 */  addiu       $t2, $t2, %lo(D_60059F0)
/* 03F48C 8003E88C 24690008 */  addiu       $t1, $v1, 0x8
/* 03F490 8003E890 AE090000 */  sw          $t1, 0x0($s0)
/* 03F494 8003E894 AC6A0004 */  sw          $t2, 0x4($v1)
/* 03F498 8003E898 AC6B0000 */  sw          $t3, 0x0($v1)
/* 03F49C 8003E89C 100006E5 */  b           .L80040434
/* 03F4A0 8003E8A0 00000000 */   nop
.L8003E8A4:
/* 03F4A4 8003E8A4 8E030000 */  lw          $v1, 0x0($s0)
/* 03F4A8 8003E8A8 3C0D0600 */  lui         $t5, %hi(D_60046F0)
/* 03F4AC 8003E8AC 25AD46F0 */  addiu       $t5, $t5, %lo(D_60046F0)
/* 03F4B0 8003E8B0 246E0008 */  addiu       $t6, $v1, 0x8
/* 03F4B4 8003E8B4 AE0E0000 */  sw          $t6, 0x0($s0)
/* 03F4B8 8003E8B8 AC6D0004 */  sw          $t5, 0x4($v1)
/* 03F4BC 8003E8BC AC6C0000 */  sw          $t4, 0x0($v1)
/* 03F4C0 8003E8C0 100006DC */  b           .L80040434
/* 03F4C4 8003E8C4 00000000 */   nop
.L8003E8C8:
/* 03F4C8 8003E8C8 3C028017 */  lui         $v0, %hi(D_80177AB0)
/* 03F4CC 8003E8CC 90427AB0 */  lbu         $v0, %lo(D_80177AB0)($v0)
/* 03F4D0 8003E8D0 24010006 */  addiu       $at, $zero, 0x6
/* 03F4D4 8003E8D4 104106D7 */  beq         $v0, $at, .L80040434
/* 03F4D8 8003E8D8 24010002 */   addiu      $at, $zero, 0x2
/* 03F4DC 8003E8DC 10410003 */  beq         $v0, $at, .L8003E8EC
/* 03F4E0 8003E8E0 3C188018 */   lui        $t8, %hi(gPlayer)
/* 03F4E4 8003E8E4 24010007 */  addiu       $at, $zero, 0x7
/* 03F4E8 8003E8E8 14410026 */  bne         $v0, $at, .L8003E984
.L8003E8EC:
/* 03F4EC 8003E8EC 3C0F8017 */   lui        $t7, %hi(gPlayerNum)
/* 03F4F0 8003E8F0 8DEF78A0 */  lw          $t7, %lo(gPlayerNum)($t7)
/* 03F4F4 8003E8F4 8F188280 */  lw          $t8, %lo(gPlayer)($t8)
/* 03F4F8 8003E8F8 3C01800D */  lui         $at, %hi(D_800D5410)
/* 03F4FC 8003E8FC 000FC880 */  sll         $t9, $t7, 2
/* 03F500 8003E900 032FC821 */  addu        $t9, $t9, $t7
/* 03F504 8003E904 0019C8C0 */  sll         $t9, $t9, 3
/* 03F508 8003E908 032FC823 */  subu        $t9, $t9, $t7
/* 03F50C 8003E90C 0019C940 */  sll         $t9, $t9, 5
/* 03F510 8003E910 03194821 */  addu        $t1, $t8, $t9
/* 03F514 8003E914 C5260034 */  lwc1        $ft1, 0x34($t1)
/* 03F518 8003E918 C4285410 */  lwc1        $ft2, %lo(D_800D5410)($at)
/* 03F51C 8003E91C 8E240000 */  lw          $a0, 0x0($s1)
/* 03F520 8003E920 24060001 */  addiu       $a2, $zero, 0x1
/* 03F524 8003E924 46083482 */  mul.s       $ft5, $ft1, $ft2
/* 03F528 8003E928 44059000 */  mfc1        $a1, $ft5
/* 03F52C 8003E92C 0C0017F8 */  jal         Matrix_RotateZ
/* 03F530 8003E930 00000000 */   nop
/* 03F534 8003E934 3C07C5DA */  lui         $a3, (0xC5DAC000 >> 16)
/* 03F538 8003E938 240B0001 */  addiu       $t3, $zero, 0x1
/* 03F53C 8003E93C AFAB0010 */  sw          $t3, 0x10($sp)
/* 03F540 8003E940 34E7C000 */  ori         $a3, $a3, (0xC5DAC000 & 0xFFFF)
/* 03F544 8003E944 8E240000 */  lw          $a0, 0x0($s1)
/* 03F548 8003E948 24050000 */  addiu       $a1, $zero, 0x0
/* 03F54C 8003E94C 0C0016C0 */  jal         Matrix_Translate
/* 03F550 8003E950 3C06C57A */   lui        $a2, (0xC57A0000 >> 16)
/* 03F554 8003E954 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F558 8003E958 02002025 */   or         $a0, $s0, $zero
/* 03F55C 8003E95C 8E030000 */  lw          $v1, 0x0($s0)
/* 03F560 8003E960 3C0C0601 */  lui         $t4, %hi(D_600F670)
/* 03F564 8003E964 258CF670 */  addiu       $t4, $t4, %lo(D_600F670)
/* 03F568 8003E968 246A0008 */  addiu       $t2, $v1, 0x8
/* 03F56C 8003E96C AE0A0000 */  sw          $t2, 0x0($s0)
/* 03F570 8003E970 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* 03F574 8003E974 AC6E0000 */  sw          $t6, 0x0($v1)
/* 03F578 8003E978 AC6C0004 */  sw          $t4, 0x4($v1)
/* 03F57C 8003E97C 100006AD */  b           .L80040434
/* 03F580 8003E980 00000000 */   nop
.L8003E984:
/* 03F584 8003E984 24010003 */  addiu       $at, $zero, 0x3
/* 03F588 8003E988 10410004 */  beq         $v0, $at, .L8003E99C
/* 03F58C 8003E98C 02002025 */   or         $a0, $s0, $zero
/* 03F590 8003E990 24010004 */  addiu       $at, $zero, 0x4
/* 03F594 8003E994 544100A3 */  bnel        $v0, $at, .L8003EC24
/* 03F598 8003E998 02002025 */   or         $a0, $s0, $zero
.L8003E99C:
/* 03F59C 8003E99C 0C02E374 */  jal         RCP_SetupDL
/* 03F5A0 8003E9A0 2405003E */   addiu      $a1, $zero, 0x3E
/* 03F5A4 8003E9A4 3C0D8017 */  lui         $t5, %hi(D_80177AB0)
/* 03F5A8 8003E9A8 91AD7AB0 */  lbu         $t5, %lo(D_80177AB0)($t5)
/* 03F5AC 8003E9AC 24010004 */  addiu       $at, $zero, 0x4
/* 03F5B0 8003E9B0 15A10018 */  bne         $t5, $at, .L8003EA14
/* 03F5B4 8003E9B4 3C0F8017 */   lui        $t7, %hi(gFrameCount)
/* 03F5B8 8003E9B8 8DEF7DB0 */  lw          $t7, %lo(gFrameCount)($t7)
/* 03F5BC 8003E9BC 3C048016 */  lui         $a0, %hi(D_80161394)
/* 03F5C0 8003E9C0 24841394 */  addiu       $a0, $a0, %lo(D_80161394)
/* 03F5C4 8003E9C4 31F80008 */  andi        $t8, $t7, 0x8
/* 03F5C8 8003E9C8 1700000B */  bnez        $t8, .L8003E9F8
/* 03F5CC 8003E9CC 3C0542F0 */   lui        $a1, (0x42F00000 >> 16)
/* 03F5D0 8003E9D0 44805000 */  mtc1        $zero, $ft3
/* 03F5D4 8003E9D4 3C048016 */  lui         $a0, %hi(D_80161394)
/* 03F5D8 8003E9D8 24841394 */  addiu       $a0, $a0, %lo(D_80161394)
/* 03F5DC 8003E9DC 24050000 */  addiu       $a1, $zero, 0x0
/* 03F5E0 8003E9E0 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* 03F5E4 8003E9E4 3C0741F0 */  lui         $a3, (0x41F00000 >> 16)
/* 03F5E8 8003E9E8 0C026F0B */  jal         Math_SmoothStepToF
/* 03F5EC 8003E9EC E7AA0010 */   swc1       $ft3, 0x10($sp)
/* 03F5F0 8003E9F0 1000000C */  b           .L8003EA24
/* 03F5F4 8003E9F4 00000000 */   nop
.L8003E9F8:
/* 03F5F8 8003E9F8 44802000 */  mtc1        $zero, $ft0
/* 03F5FC 8003E9FC 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* 03F600 8003EA00 3C0741F0 */  lui         $a3, (0x41F00000 >> 16)
/* 03F604 8003EA04 0C026F0B */  jal         Math_SmoothStepToF
/* 03F608 8003EA08 E7A40010 */   swc1       $ft0, 0x10($sp)
/* 03F60C 8003EA0C 10000005 */  b           .L8003EA24
/* 03F610 8003EA10 00000000 */   nop
.L8003EA14:
/* 03F614 8003EA14 3C01437F */  lui         $at, (0x437F0000 >> 16)
/* 03F618 8003EA18 44813000 */  mtc1        $at, $ft1
/* 03F61C 8003EA1C 3C018016 */  lui         $at, %hi(D_80161394)
/* 03F620 8003EA20 E4261394 */  swc1        $ft1, %lo(D_80161394)($at)
.L8003EA24:
/* 03F624 8003EA24 3C01800D */  lui         $at, %hi(D_800D5414)
/* 03F628 8003EA28 C4205414 */  lwc1        $fv0, %lo(D_800D5414)($at)
/* 03F62C 8003EA2C 8E030000 */  lw          $v1, 0x0($s0)
/* 03F630 8003EA30 3C09FA00 */  lui         $t1, (0xFA000000 >> 16)
/* 03F634 8003EA34 3C018016 */  lui         $at, %hi(D_80161394)
/* 03F638 8003EA38 24790008 */  addiu       $t9, $v1, 0x8
/* 03F63C 8003EA3C AE190000 */  sw          $t9, 0x0($s0)
/* 03F640 8003EA40 AC690000 */  sw          $t1, 0x0($v1)
/* 03F644 8003EA44 C4281394 */  lwc1        $ft2, %lo(D_80161394)($at)
/* 03F648 8003EA48 3C01FF00 */  lui         $at, (0xFF000000 >> 16)
/* 03F64C 8003EA4C 4600448D */  trunc.w.s   $ft5, $ft2
/* 03F650 8003EA50 44059000 */  mfc1        $a1, $ft5
/* 03F654 8003EA54 00000000 */  nop
/* 03F658 8003EA58 30AA00FF */  andi        $t2, $a1, 0xFF
/* 03F65C 8003EA5C 000A7400 */  sll         $t6, $t2, 16
/* 03F660 8003EA60 01C16025 */  or          $t4, $t6, $at
/* 03F664 8003EA64 3C01800D */  lui         $at, %hi(D_800C9C30)
/* 03F668 8003EA68 C42A9C30 */  lwc1        $ft3, %lo(D_800C9C30)($at)
/* 03F66C 8003EA6C 000A6A00 */  sll         $t5, $t2, 8
/* 03F670 8003EA70 018D7825 */  or          $t7, $t4, $t5
/* 03F674 8003EA74 4600510D */  trunc.w.s   $ft0, $ft3
/* 03F678 8003EA78 3C0A8018 */  lui         $t2, %hi(gPlayer)
/* 03F67C 8003EA7C 3C01800D */  lui         $at, %hi(D_800D5418)
/* 03F680 8003EA80 3C0E8017 */  lui         $t6, %hi(gPlayerNum)
/* 03F684 8003EA84 44192000 */  mfc1        $t9, $ft0
/* 03F688 8003EA88 00000000 */  nop
/* 03F68C 8003EA8C 332900FF */  andi        $t1, $t9, 0xFF
/* 03F690 8003EA90 01E95825 */  or          $t3, $t7, $t1
/* 03F694 8003EA94 AC6B0004 */  sw          $t3, 0x4($v1)
/* 03F698 8003EA98 8DCE78A0 */  lw          $t6, %lo(gPlayerNum)($t6)
/* 03F69C 8003EA9C 8D4A8280 */  lw          $t2, %lo(gPlayer)($t2)
/* 03F6A0 8003EAA0 C4285418 */  lwc1        $ft2, %lo(D_800D5418)($at)
/* 03F6A4 8003EAA4 000E6080 */  sll         $t4, $t6, 2
/* 03F6A8 8003EAA8 018E6021 */  addu        $t4, $t4, $t6
/* 03F6AC 8003EAAC 000C60C0 */  sll         $t4, $t4, 3
/* 03F6B0 8003EAB0 018E6023 */  subu        $t4, $t4, $t6
/* 03F6B4 8003EAB4 000C6140 */  sll         $t4, $t4, 5
/* 03F6B8 8003EAB8 014C1021 */  addu        $v0, $t2, $t4
/* 03F6BC 8003EABC C446005C */  lwc1        $ft1, 0x5C($v0)
/* 03F6C0 8003EAC0 C44A0044 */  lwc1        $ft3, 0x44($v0)
/* 03F6C4 8003EAC4 46083482 */  mul.s       $ft5, $ft1, $ft2
/* 03F6C8 8003EAC8 00000000 */  nop
/* 03F6CC 8003EACC 46005102 */  mul.s       $ft0, $ft3, $fv0
/* 03F6D0 8003EAD0 46049181 */  sub.s       $ft1, $ft5, $ft0
/* 03F6D4 8003EAD4 E7A60134 */  swc1        $ft1, 0x134($sp)
/* 03F6D8 8003EAD8 0C027DDA */  jal         Math_RadToDeg
/* 03F6DC 8003EADC C44C0058 */   lwc1       $fa0, 0x58($v0)
/* 03F6E0 8003EAE0 3C01800D */  lui         $at, %hi(D_800D541C)
/* 03F6E4 8003EAE4 C428541C */  lwc1        $ft2, %lo(D_800D541C)($at)
/* 03F6E8 8003EAE8 3C0140A0 */  lui         $at, (0x40A00000 >> 16)
/* 03F6EC 8003EAEC 44819000 */  mtc1        $at, $ft5
/* 03F6F0 8003EAF0 46080282 */  mul.s       $ft3, $fv0, $ft2
/* 03F6F4 8003EAF4 3C01800D */  lui         $at, %hi(D_800D5420)
/* 03F6F8 8003EAF8 C42E5420 */  lwc1        $fa1, %lo(D_800D5420)($at)
/* 03F6FC 8003EAFC 46125302 */  mul.s       $fa0, $ft3, $ft5
/* 03F700 8003EB00 0C001388 */  jal         Math_ModF
/* 03F704 8003EB04 00000000 */   nop
/* 03F708 8003EB08 3C188017 */  lui         $t8, %hi(gPlayerNum)
/* 03F70C 8003EB0C 8F1878A0 */  lw          $t8, %lo(gPlayerNum)($t8)
/* 03F710 8003EB10 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* 03F714 8003EB14 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* 03F718 8003EB18 0018C880 */  sll         $t9, $t8, 2
/* 03F71C 8003EB1C 0338C821 */  addu        $t9, $t9, $t8
/* 03F720 8003EB20 0019C8C0 */  sll         $t9, $t9, 3
/* 03F724 8003EB24 0338C823 */  subu        $t9, $t9, $t8
/* 03F728 8003EB28 0019C940 */  sll         $t9, $t9, 5
/* 03F72C 8003EB2C E7A0013C */  swc1        $fv0, 0x13C($sp)
/* 03F730 8003EB30 3C01800D */  lui         $at, %hi(D_800D5424)
/* 03F734 8003EB34 01B97821 */  addu        $t7, $t5, $t9
/* 03F738 8003EB38 C5E40034 */  lwc1        $ft0, 0x34($t7)
/* 03F73C 8003EB3C C4265424 */  lwc1        $ft1, %lo(D_800D5424)($at)
/* 03F740 8003EB40 8E240000 */  lw          $a0, 0x0($s1)
/* 03F744 8003EB44 24060001 */  addiu       $a2, $zero, 0x1
/* 03F748 8003EB48 46062202 */  mul.s       $ft2, $ft0, $ft1
/* 03F74C 8003EB4C 44054000 */  mfc1        $a1, $ft2
/* 03F750 8003EB50 0C0017F8 */  jal         Matrix_RotateZ
/* 03F754 8003EB54 00000000 */   nop
/* 03F758 8003EB58 3C01C4FA */  lui         $at, (0xC4FA0000 >> 16)
/* 03F75C 8003EB5C 44815000 */  mtc1        $at, $ft3
/* 03F760 8003EB60 C7B20134 */  lwc1        $ft5, 0x134($sp)
/* 03F764 8003EB64 3C07C5BB */  lui         $a3, (0xC5BB8000 >> 16)
/* 03F768 8003EB68 24090001 */  addiu       $t1, $zero, 0x1
/* 03F76C 8003EB6C 46125100 */  add.s       $ft0, $ft3, $ft5
/* 03F770 8003EB70 AFA90010 */  sw          $t1, 0x10($sp)
/* 03F774 8003EB74 34E78000 */  ori         $a3, $a3, (0xC5BB8000 & 0xFFFF)
/* 03F778 8003EB78 8E240000 */  lw          $a0, 0x0($s1)
/* 03F77C 8003EB7C 44062000 */  mfc1        $a2, $ft0
/* 03F780 8003EB80 0C0016C0 */  jal         Matrix_Translate
/* 03F784 8003EB84 8FA5013C */   lw         $a1, 0x13C($sp)
/* 03F788 8003EB88 3C06C51C */  lui         $a2, (0xC51C4000 >> 16)
/* 03F78C 8003EB8C 240B0001 */  addiu       $t3, $zero, 0x1
/* 03F790 8003EB90 AFAB0010 */  sw          $t3, 0x10($sp)
/* 03F794 8003EB94 34C64000 */  ori         $a2, $a2, (0xC51C4000 & 0xFFFF)
/* 03F798 8003EB98 8E240000 */  lw          $a0, 0x0($s1)
/* 03F79C 8003EB9C 24050000 */  addiu       $a1, $zero, 0x0
/* 03F7A0 8003EBA0 0C0016C0 */  jal         Matrix_Translate
/* 03F7A4 8003EBA4 24070000 */   addiu      $a3, $zero, 0x0
/* 03F7A8 8003EBA8 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F7AC 8003EBAC 02002025 */   or         $a0, $s0, $zero
/* 03F7B0 8003EBB0 8E030000 */  lw          $v1, 0x0($s0)
/* 03F7B4 8003EBB4 3C080600 */  lui         $t0, %hi(D_60038E0)
/* 03F7B8 8003EBB8 250838E0 */  addiu       $t0, $t0, %lo(D_60038E0)
/* 03F7BC 8003EBBC 246E0008 */  addiu       $t6, $v1, 0x8
/* 03F7C0 8003EBC0 AE0E0000 */  sw          $t6, 0x0($s0)
/* 03F7C4 8003EBC4 3C0A0600 */  lui         $t2, (0x6000000 >> 16)
/* 03F7C8 8003EBC8 AC6A0000 */  sw          $t2, 0x0($v1)
/* 03F7CC 8003EBCC AC680004 */  sw          $t0, 0x4($v1)
/* 03F7D0 8003EBD0 3C0545E3 */  lui         $a1, (0x45E38000 >> 16)
/* 03F7D4 8003EBD4 240C0001 */  addiu       $t4, $zero, 0x1
/* 03F7D8 8003EBD8 AFAC0010 */  sw          $t4, 0x10($sp)
/* 03F7DC 8003EBDC 34A58000 */  ori         $a1, $a1, (0x45E38000 & 0xFFFF)
/* 03F7E0 8003EBE0 8E240000 */  lw          $a0, 0x0($s1)
/* 03F7E4 8003EBE4 24060000 */  addiu       $a2, $zero, 0x0
/* 03F7E8 8003EBE8 24070000 */  addiu       $a3, $zero, 0x0
/* 03F7EC 8003EBEC 0C0016C0 */  jal         Matrix_Translate
/* 03F7F0 8003EBF0 AFA80034 */   sw         $t0, 0x34($sp)
/* 03F7F4 8003EBF4 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F7F8 8003EBF8 02002025 */   or         $a0, $s0, $zero
/* 03F7FC 8003EBFC 8E030000 */  lw          $v1, 0x0($s0)
/* 03F800 8003EC00 3C0D0600 */  lui         $t5, (0x6000000 >> 16)
/* 03F804 8003EC04 24780008 */  addiu       $t8, $v1, 0x8
/* 03F808 8003EC08 AE180000 */  sw          $t8, 0x0($s0)
/* 03F80C 8003EC0C AC6D0000 */  sw          $t5, 0x0($v1)
/* 03F810 8003EC10 8FB90034 */  lw          $t9, 0x34($sp)
/* 03F814 8003EC14 AC790004 */  sw          $t9, 0x4($v1)
/* 03F818 8003EC18 10000606 */  b           .L80040434
/* 03F81C 8003EC1C 00000000 */   nop
/* 03F820 8003EC20 02002025 */  or          $a0, $s0, $zero
.L8003EC24:
/* 03F824 8003EC24 0C02E374 */  jal         RCP_SetupDL
/* 03F828 8003EC28 2405003E */   addiu      $a1, $zero, 0x3E
/* 03F82C 8003EC2C 3C0F8017 */  lui         $t7, %hi(D_80177AB0)
/* 03F830 8003EC30 91EF7AB0 */  lbu         $t7, %lo(D_80177AB0)($t7)
/* 03F834 8003EC34 24010005 */  addiu       $at, $zero, 0x5
/* 03F838 8003EC38 24050000 */  addiu       $a1, $zero, 0x0
/* 03F83C 8003EC3C 15E1000A */  bne         $t7, $at, .L8003EC68
/* 03F840 8003EC40 24060000 */   addiu      $a2, $zero, 0x0
/* 03F844 8003EC44 8E030000 */  lw          $v1, 0x0($s0)
/* 03F848 8003EC48 3C0BFA00 */  lui         $t3, (0xFA000000 >> 16)
/* 03F84C 8003EC4C 240EFF40 */  addiu       $t6, $zero, -0xC0
/* 03F850 8003EC50 24690008 */  addiu       $t1, $v1, 0x8
/* 03F854 8003EC54 AE090000 */  sw          $t1, 0x0($s0)
/* 03F858 8003EC58 AC6E0004 */  sw          $t6, 0x4($v1)
/* 03F85C 8003EC5C AC6B0000 */  sw          $t3, 0x0($v1)
/* 03F860 8003EC60 10000011 */  b           .L8003ECA8
/* 03F864 8003EC64 24090001 */   addiu      $t1, $zero, 0x1
.L8003EC68:
/* 03F868 8003EC68 8E030000 */  lw          $v1, 0x0($s0)
/* 03F86C 8003EC6C 3C0CFA00 */  lui         $t4, (0xFA000000 >> 16)
/* 03F870 8003EC70 3C01800D */  lui         $at, %hi(D_800C9C30)
/* 03F874 8003EC74 246A0008 */  addiu       $t2, $v1, 0x8
/* 03F878 8003EC78 AE0A0000 */  sw          $t2, 0x0($s0)
/* 03F87C 8003EC7C AC6C0000 */  sw          $t4, 0x0($v1)
/* 03F880 8003EC80 C4269C30 */  lwc1        $ft1, %lo(D_800C9C30)($at)
/* 03F884 8003EC84 3C0100FF */  lui         $at, (0xFF8000 >> 16)
/* 03F888 8003EC88 34218000 */  ori         $at, $at, (0xFF8000 & 0xFFFF)
/* 03F88C 8003EC8C 4600320D */  trunc.w.s   $ft2, $ft1
/* 03F890 8003EC90 440D4000 */  mfc1        $t5, $ft2
/* 03F894 8003EC94 00000000 */  nop
/* 03F898 8003EC98 31B900FF */  andi        $t9, $t5, 0xFF
/* 03F89C 8003EC9C 03217825 */  or          $t7, $t9, $at
/* 03F8A0 8003ECA0 AC6F0004 */  sw          $t7, 0x4($v1)
/* 03F8A4 8003ECA4 24090001 */  addiu       $t1, $zero, 0x1
.L8003ECA8:
/* 03F8A8 8003ECA8 AFA90010 */  sw          $t1, 0x10($sp)
/* 03F8AC 8003ECAC 8E240000 */  lw          $a0, 0x0($s1)
/* 03F8B0 8003ECB0 0C0016C0 */  jal         Matrix_Translate
/* 03F8B4 8003ECB4 3C07C391 */   lui        $a3, (0xC3910000 >> 16)
/* 03F8B8 8003ECB8 0C0015C2 */  jal         Matrix_Push
/* 03F8BC 8003ECBC 02202025 */   or         $a0, $s1, $zero
/* 03F8C0 8003ECC0 3C014130 */  lui         $at, (0x41300000 >> 16)
/* 03F8C4 8003ECC4 44810000 */  mtc1        $at, $fv0
/* 03F8C8 8003ECC8 240B0001 */  addiu       $t3, $zero, 0x1
/* 03F8CC 8003ECCC AFAB0010 */  sw          $t3, 0x10($sp)
/* 03F8D0 8003ECD0 44050000 */  mfc1        $a1, $fv0
/* 03F8D4 8003ECD4 44060000 */  mfc1        $a2, $fv0
/* 03F8D8 8003ECD8 8E240000 */  lw          $a0, 0x0($s1)
/* 03F8DC 8003ECDC 0C00170D */  jal         Matrix_Scale
/* 03F8E0 8003ECE0 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 03F8E4 8003ECE4 3C0E8017 */  lui         $t6, %hi(gFrameCount)
/* 03F8E8 8003ECE8 8DCE7DB0 */  lw          $t6, %lo(gFrameCount)($t6)
/* 03F8EC 8003ECEC 3C013FC0 */  lui         $at, (0x3FC00000 >> 16)
/* 03F8F0 8003ECF0 44812000 */  mtc1        $at, $ft0
/* 03F8F4 8003ECF4 448E5000 */  mtc1        $t6, $ft3
/* 03F8F8 8003ECF8 3C0A8018 */  lui         $t2, %hi(gPlayer)
/* 03F8FC 8003ECFC 8D4A8280 */  lw          $t2, %lo(gPlayer)($t2)
/* 03F900 8003ED00 468054A0 */  cvt.s.w     $ft5, $ft3
/* 03F904 8003ED04 3C01800D */  lui         $at, %hi(D_800D5428)
/* 03F908 8003ED08 C5480034 */  lwc1        $ft2, 0x34($t2)
/* 03F90C 8003ED0C 8E240000 */  lw          $a0, 0x0($s1)
/* 03F910 8003ED10 24060001 */  addiu       $a2, $zero, 0x1
/* 03F914 8003ED14 46049182 */  mul.s       $ft1, $ft5, $ft0
/* 03F918 8003ED18 C4325428 */  lwc1        $ft5, %lo(D_800D5428)($at)
/* 03F91C 8003ED1C 46064280 */  add.s       $ft3, $ft2, $ft1
/* 03F920 8003ED20 46125102 */  mul.s       $ft0, $ft3, $ft5
/* 03F924 8003ED24 44052000 */  mfc1        $a1, $ft0
/* 03F928 8003ED28 0C0017F8 */  jal         Matrix_RotateZ
/* 03F92C 8003ED2C 00000000 */   nop
/* 03F930 8003ED30 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F934 8003ED34 02002025 */   or         $a0, $s0, $zero
/* 03F938 8003ED38 8E030000 */  lw          $v1, 0x0($s0)
/* 03F93C 8003ED3C 3C050C04 */  lui         $a1, %hi(D_C039208)
/* 03F940 8003ED40 24A59208 */  addiu       $a1, $a1, %lo(D_C039208)
/* 03F944 8003ED44 246C0008 */  addiu       $t4, $v1, 0x8
/* 03F948 8003ED48 AE0C0000 */  sw          $t4, 0x0($s0)
/* 03F94C 8003ED4C 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* 03F950 8003ED50 AC780000 */  sw          $t8, 0x0($v1)
/* 03F954 8003ED54 AC650004 */  sw          $a1, 0x4($v1)
/* 03F958 8003ED58 02202025 */  or          $a0, $s1, $zero
/* 03F95C 8003ED5C 0C0015D0 */  jal         Matrix_Pop
/* 03F960 8003ED60 AFA50034 */   sw         $a1, 0x34($sp)
/* 03F964 8003ED64 3C0D8017 */  lui         $t5, %hi(D_80177AB0)
/* 03F968 8003ED68 91AD7AB0 */  lbu         $t5, %lo(D_80177AB0)($t5)
/* 03F96C 8003ED6C 24010005 */  addiu       $at, $zero, 0x5
/* 03F970 8003ED70 11A105B0 */  beq         $t5, $at, .L80040434
/* 03F974 8003ED74 00000000 */   nop
/* 03F978 8003ED78 0C0015C2 */  jal         Matrix_Push
/* 03F97C 8003ED7C 02202025 */   or         $a0, $s1, $zero
/* 03F980 8003ED80 24190001 */  addiu       $t9, $zero, 0x1
/* 03F984 8003ED84 AFB90010 */  sw          $t9, 0x10($sp)
/* 03F988 8003ED88 8E240000 */  lw          $a0, 0x0($s1)
/* 03F98C 8003ED8C 3C054120 */  lui         $a1, (0x41200000 >> 16)
/* 03F990 8003ED90 3C064120 */  lui         $a2, (0x41200000 >> 16)
/* 03F994 8003ED94 0C00170D */  jal         Matrix_Scale
/* 03F998 8003ED98 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 03F99C 8003ED9C 3C0F8017 */  lui         $t7, %hi(gFrameCount)
/* 03F9A0 8003EDA0 8DEF7DB0 */  lw          $t7, %lo(gFrameCount)($t7)
/* 03F9A4 8003EDA4 3C01800D */  lui         $at, %hi(D_800D542C)
/* 03F9A8 8003EDA8 C42A542C */  lwc1        $ft3, %lo(D_800D542C)($at)
/* 03F9AC 8003EDAC 448F4000 */  mtc1        $t7, $ft2
/* 03F9B0 8003EDB0 3C098018 */  lui         $t1, %hi(gPlayer)
/* 03F9B4 8003EDB4 8D298280 */  lw          $t1, %lo(gPlayer)($t1)
/* 03F9B8 8003EDB8 468041A0 */  cvt.s.w     $ft1, $ft2
/* 03F9BC 8003EDBC 3C01800D */  lui         $at, %hi(D_800D5430)
/* 03F9C0 8003EDC0 C5240034 */  lwc1        $ft0, 0x34($t1)
/* 03F9C4 8003EDC4 8E240000 */  lw          $a0, 0x0($s1)
/* 03F9C8 8003EDC8 24060001 */  addiu       $a2, $zero, 0x1
/* 03F9CC 8003EDCC 460A3482 */  mul.s       $ft5, $ft1, $ft3
/* 03F9D0 8003EDD0 C4265430 */  lwc1        $ft1, %lo(D_800D5430)($at)
/* 03F9D4 8003EDD4 46122200 */  add.s       $ft2, $ft0, $ft5
/* 03F9D8 8003EDD8 46064282 */  mul.s       $ft3, $ft2, $ft1
/* 03F9DC 8003EDDC 44055000 */  mfc1        $a1, $ft3
/* 03F9E0 8003EDE0 0C0017F8 */  jal         Matrix_RotateZ
/* 03F9E4 8003EDE4 00000000 */   nop
/* 03F9E8 8003EDE8 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03F9EC 8003EDEC 02002025 */   or         $a0, $s0, $zero
/* 03F9F0 8003EDF0 8E030000 */  lw          $v1, 0x0($s0)
/* 03F9F4 8003EDF4 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* 03F9F8 8003EDF8 246B0008 */  addiu       $t3, $v1, 0x8
/* 03F9FC 8003EDFC AE0B0000 */  sw          $t3, 0x0($s0)
/* 03FA00 8003EE00 AC6E0000 */  sw          $t6, 0x0($v1)
/* 03FA04 8003EE04 8FAA0034 */  lw          $t2, 0x34($sp)
/* 03FA08 8003EE08 AC6A0004 */  sw          $t2, 0x4($v1)
/* 03FA0C 8003EE0C 0C0015D0 */  jal         Matrix_Pop
/* 03FA10 8003EE10 02202025 */   or         $a0, $s1, $zero
/* 03FA14 8003EE14 10000587 */  b           .L80040434
/* 03FA18 8003EE18 00000000 */   nop
.L8003EE1C:
/* 03FA1C 8003EE1C 3C038018 */  lui         $v1, %hi(gPlayer)
/* 03FA20 8003EE20 8C638280 */  lw          $v1, %lo(gPlayer)($v1)
/* 03FA24 8003EE24 24010002 */  addiu       $at, $zero, 0x2
/* 03FA28 8003EE28 3C188017 */  lui         $t8, %hi(gPlayerNum)
/* 03FA2C 8003EE2C 8C6C01C8 */  lw          $t4, 0x1C8($v1)
/* 03FA30 8003EE30 15810580 */  bne         $t4, $at, .L80040434
/* 03FA34 8003EE34 00000000 */   nop
/* 03FA38 8003EE38 8F1878A0 */  lw          $t8, %lo(gPlayerNum)($t8)
/* 03FA3C 8003EE3C 00186880 */  sll         $t5, $t8, 2
/* 03FA40 8003EE40 01B86821 */  addu        $t5, $t5, $t8
/* 03FA44 8003EE44 000D68C0 */  sll         $t5, $t5, 3
/* 03FA48 8003EE48 01B86823 */  subu        $t5, $t5, $t8
/* 03FA4C 8003EE4C 000D6940 */  sll         $t5, $t5, 5
/* 03FA50 8003EE50 006DC821 */  addu        $t9, $v1, $t5
/* 03FA54 8003EE54 0C027DDA */  jal         Math_RadToDeg
/* 03FA58 8003EE58 C72C0058 */   lwc1       $fa0, 0x58($t9)
/* 03FA5C 8003EE5C 3C098017 */  lui         $t1, %hi(gPlayerNum)
/* 03FA60 8003EE60 8D2978A0 */  lw          $t1, %lo(gPlayerNum)($t1)
/* 03FA64 8003EE64 3C0F8018 */  lui         $t7, %hi(gPlayer)
/* 03FA68 8003EE68 8DEF8280 */  lw          $t7, %lo(gPlayer)($t7)
/* 03FA6C 8003EE6C 00095880 */  sll         $t3, $t1, 2
/* 03FA70 8003EE70 01695821 */  addu        $t3, $t3, $t1
/* 03FA74 8003EE74 000B58C0 */  sll         $t3, $t3, 3
/* 03FA78 8003EE78 01695823 */  subu        $t3, $t3, $t1
/* 03FA7C 8003EE7C 000B5940 */  sll         $t3, $t3, 5
/* 03FA80 8003EE80 01EB1021 */  addu        $v0, $t7, $t3
/* 03FA84 8003EE84 C4440114 */  lwc1        $ft0, 0x114($v0)
/* 03FA88 8003EE88 3C01800D */  lui         $at, %hi(D_800D5434)
/* 03FA8C 8003EE8C C4285434 */  lwc1        $ft2, %lo(D_800D5434)($at)
/* 03FA90 8003EE90 C452005C */  lwc1        $ft5, 0x5C($v0)
/* 03FA94 8003EE94 46040401 */  sub.s       $ft4, $fv0, $ft0
/* 03FA98 8003EE98 3C01800D */  lui         $at, %hi(D_800D5438)
/* 03FA9C 8003EE9C 46089182 */  mul.s       $ft1, $ft5, $ft2
/* 03FAA0 8003EEA0 C4245438 */  lwc1        $ft0, %lo(D_800D5438)($at)
/* 03FAA4 8003EEA4 C44A0044 */  lwc1        $ft3, 0x44($v0)
/* 03FAA8 8003EEA8 3C01800D */  lui         $at, %hi(D_800D543C)
/* 03FAAC 8003EEAC 46045482 */  mul.s       $ft5, $ft3, $ft0
/* 03FAB0 8003EEB0 C42A543C */  lwc1        $ft3, %lo(D_800D543C)($at)
/* 03FAB4 8003EEB4 3C01800D */  lui         $at, %hi(D_800D5440)
/* 03FAB8 8003EEB8 C42E5440 */  lwc1        $fa1, %lo(D_800D5440)($at)
/* 03FABC 8003EEBC 460A8082 */  mul.s       $fv1, $ft4, $ft3
/* 03FAC0 8003EEC0 46123201 */  sub.s       $ft2, $ft1, $ft5
/* 03FAC4 8003EEC4 46021300 */  add.s       $fa0, $fv1, $fv1
/* 03FAC8 8003EEC8 0C001388 */  jal         Math_ModF
/* 03FACC 8003EECC E7A80134 */   swc1       $ft2, 0x134($sp)
/* 03FAD0 8003EED0 0C02E4CA */  jal         RCP_SetupDL_17
/* 03FAD4 8003EED4 E7A0013C */   swc1       $fv0, 0x13C($sp)
/* 03FAD8 8003EED8 3C0A8017 */  lui         $t2, %hi(gPlayerNum)
/* 03FADC 8003EEDC 8D4A78A0 */  lw          $t2, %lo(gPlayerNum)($t2)
/* 03FAE0 8003EEE0 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* 03FAE4 8003EEE4 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* 03FAE8 8003EEE8 000A6080 */  sll         $t4, $t2, 2
/* 03FAEC 8003EEEC 018A6021 */  addu        $t4, $t4, $t2
/* 03FAF0 8003EEF0 000C60C0 */  sll         $t4, $t4, 3
/* 03FAF4 8003EEF4 018A6023 */  subu        $t4, $t4, $t2
/* 03FAF8 8003EEF8 000C6140 */  sll         $t4, $t4, 5
/* 03FAFC 8003EEFC 3C01800D */  lui         $at, %hi(D_800D5444)
/* 03FB00 8003EF00 01CCC021 */  addu        $t8, $t6, $t4
/* 03FB04 8003EF04 C7040034 */  lwc1        $ft0, 0x34($t8)
/* 03FB08 8003EF08 C4265444 */  lwc1        $ft1, %lo(D_800D5444)($at)
/* 03FB0C 8003EF0C 8E240000 */  lw          $a0, 0x0($s1)
/* 03FB10 8003EF10 24060001 */  addiu       $a2, $zero, 0x1
/* 03FB14 8003EF14 46062482 */  mul.s       $ft5, $ft0, $ft1
/* 03FB18 8003EF18 44059000 */  mfc1        $a1, $ft5
/* 03FB1C 8003EF1C 0C0017F8 */  jal         Matrix_RotateZ
/* 03FB20 8003EF20 00000000 */   nop
/* 03FB24 8003EF24 240D0001 */  addiu       $t5, $zero, 0x1
/* 03FB28 8003EF28 AFAD0010 */  sw          $t5, 0x10($sp)
/* 03FB2C 8003EF2C 8E240000 */  lw          $a0, 0x0($s1)
/* 03FB30 8003EF30 3C053FC0 */  lui         $a1, (0x3FC00000 >> 16)
/* 03FB34 8003EF34 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* 03FB38 8003EF38 0C00170D */  jal         Matrix_Scale
/* 03FB3C 8003EF3C 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 03FB40 8003EF40 0C0015C2 */  jal         Matrix_Push
/* 03FB44 8003EF44 02202025 */   or         $a0, $s1, $zero
/* 03FB48 8003EF48 3C07C5DA */  lui         $a3, (0xC5DAC000 >> 16)
/* 03FB4C 8003EF4C 24190001 */  addiu       $t9, $zero, 0x1
/* 03FB50 8003EF50 AFB90010 */  sw          $t9, 0x10($sp)
/* 03FB54 8003EF54 34E7C000 */  ori         $a3, $a3, (0xC5DAC000 & 0xFFFF)
/* 03FB58 8003EF58 8E240000 */  lw          $a0, 0x0($s1)
/* 03FB5C 8003EF5C 8FA5013C */  lw          $a1, 0x13C($sp)
/* 03FB60 8003EF60 0C0016C0 */  jal         Matrix_Translate
/* 03FB64 8003EF64 8FA60134 */   lw         $a2, 0x134($sp)
/* 03FB68 8003EF68 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03FB6C 8003EF6C 02002025 */   or         $a0, $s0, $zero
/* 03FB70 8003EF70 3C098018 */  lui         $t1, %hi(gPlayer)
/* 03FB74 8003EF74 8D298280 */  lw          $t1, %lo(gPlayer)($t1)
/* 03FB78 8003EF78 24010002 */  addiu       $at, $zero, 0x2
/* 03FB7C 8003EF7C 44805000 */  mtc1        $zero, $ft3
/* 03FB80 8003EF80 8D2F01C8 */  lw          $t7, 0x1C8($t1)
/* 03FB84 8003EF84 3C0A0600 */  lui         $t2, (0x6000000 >> 16)
/* 03FB88 8003EF88 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* 03FB8C 8003EF8C 55E1000B */  bnel        $t7, $at, .L8003EFBC
/* 03FB90 8003EF90 8E030000 */   lw         $v1, 0x0($s0)
/* 03FB94 8003EF94 8E030000 */  lw          $v1, 0x0($s0)
/* 03FB98 8003EF98 3C0E0602 */  lui         $t6, %hi(D_601AFF0)
/* 03FB9C 8003EF9C 25CEAFF0 */  addiu       $t6, $t6, %lo(D_601AFF0)
/* 03FBA0 8003EFA0 246B0008 */  addiu       $t3, $v1, 0x8
/* 03FBA4 8003EFA4 AE0B0000 */  sw          $t3, 0x0($s0)
/* 03FBA8 8003EFA8 AC6E0004 */  sw          $t6, 0x4($v1)
/* 03FBAC 8003EFAC AC6A0000 */  sw          $t2, 0x0($v1)
/* 03FBB0 8003EFB0 10000009 */  b           .L8003EFD8
/* 03FBB4 8003EFB4 C7A8013C */   lwc1       $ft2, 0x13C($sp)
/* 03FBB8 8003EFB8 8E030000 */  lw          $v1, 0x0($s0)
.L8003EFBC:
/* 03FBBC 8003EFBC 3C0D0602 */  lui         $t5, %hi(D_601C080)
/* 03FBC0 8003EFC0 25ADC080 */  addiu       $t5, $t5, %lo(D_601C080)
/* 03FBC4 8003EFC4 246C0008 */  addiu       $t4, $v1, 0x8
/* 03FBC8 8003EFC8 AE0C0000 */  sw          $t4, 0x0($s0)
/* 03FBCC 8003EFCC AC6D0004 */  sw          $t5, 0x4($v1)
/* 03FBD0 8003EFD0 AC780000 */  sw          $t8, 0x0($v1)
/* 03FBD4 8003EFD4 C7A8013C */  lwc1        $ft2, 0x13C($sp)
.L8003EFD8:
/* 03FBD8 8003EFD8 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* 03FBDC 8003EFDC 460A403C */  c.lt.s      $ft2, $ft3
/* 03FBE0 8003EFE0 00000000 */  nop
/* 03FBE4 8003EFE4 45020006 */  bc1fl       .L8003F000
/* 03FBE8 8003EFE8 44813000 */   mtc1       $at, $ft1
/* 03FBEC 8003EFEC 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 03FBF0 8003EFF0 44812000 */  mtc1        $at, $ft0
/* 03FBF4 8003EFF4 10000004 */  b           .L8003F008
/* 03FBF8 8003EFF8 E7A4013C */   swc1       $ft0, 0x13C($sp)
/* 03FBFC 8003EFFC 44813000 */  mtc1        $at, $ft1
.L8003F000:
/* 03FC00 8003F000 00000000 */  nop
/* 03FC04 8003F004 E7A6013C */  swc1        $ft1, 0x13C($sp)
.L8003F008:
/* 03FC08 8003F008 3C01800D */  lui         $at, %hi(D_800D5448)
/* 03FC0C 8003F00C C4325448 */  lwc1        $ft5, %lo(D_800D5448)($at)
/* 03FC10 8003F010 C7A8013C */  lwc1        $ft2, 0x13C($sp)
/* 03FC14 8003F014 44800000 */  mtc1        $zero, $fv0
/* 03FC18 8003F018 24190001 */  addiu       $t9, $zero, 0x1
/* 03FC1C 8003F01C 46089282 */  mul.s       $ft3, $ft5, $ft2
/* 03FC20 8003F020 44060000 */  mfc1        $a2, $fv0
/* 03FC24 8003F024 44070000 */  mfc1        $a3, $fv0
/* 03FC28 8003F028 AFB90010 */  sw          $t9, 0x10($sp)
/* 03FC2C 8003F02C 8E240000 */  lw          $a0, 0x0($s1)
/* 03FC30 8003F030 44055000 */  mfc1        $a1, $ft3
/* 03FC34 8003F034 0C0016C0 */  jal         Matrix_Translate
/* 03FC38 8003F038 00000000 */   nop
/* 03FC3C 8003F03C 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03FC40 8003F040 02002025 */   or         $a0, $s0, $zero
/* 03FC44 8003F044 3C098018 */  lui         $t1, %hi(gPlayer)
/* 03FC48 8003F048 8D298280 */  lw          $t1, %lo(gPlayer)($t1)
/* 03FC4C 8003F04C 24010002 */  addiu       $at, $zero, 0x2
/* 03FC50 8003F050 3C0A0600 */  lui         $t2, (0x6000000 >> 16)
/* 03FC54 8003F054 8D2F01C8 */  lw          $t7, 0x1C8($t1)
/* 03FC58 8003F058 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* 03FC5C 8003F05C 55E1000B */  bnel        $t7, $at, .L8003F08C
/* 03FC60 8003F060 8E030000 */   lw         $v1, 0x0($s0)
/* 03FC64 8003F064 8E030000 */  lw          $v1, 0x0($s0)
/* 03FC68 8003F068 3C0E0602 */  lui         $t6, %hi(D_601AFF0)
/* 03FC6C 8003F06C 25CEAFF0 */  addiu       $t6, $t6, %lo(D_601AFF0)
/* 03FC70 8003F070 246B0008 */  addiu       $t3, $v1, 0x8
/* 03FC74 8003F074 AE0B0000 */  sw          $t3, 0x0($s0)
/* 03FC78 8003F078 AC6E0004 */  sw          $t6, 0x4($v1)
/* 03FC7C 8003F07C AC6A0000 */  sw          $t2, 0x0($v1)
/* 03FC80 8003F080 10000008 */  b           .L8003F0A4
/* 03FC84 8003F084 00000000 */   nop
/* 03FC88 8003F088 8E030000 */  lw          $v1, 0x0($s0)
.L8003F08C:
/* 03FC8C 8003F08C 3C0D0602 */  lui         $t5, %hi(D_601C080)
/* 03FC90 8003F090 25ADC080 */  addiu       $t5, $t5, %lo(D_601C080)
/* 03FC94 8003F094 246C0008 */  addiu       $t4, $v1, 0x8
/* 03FC98 8003F098 AE0C0000 */  sw          $t4, 0x0($s0)
/* 03FC9C 8003F09C AC6D0004 */  sw          $t5, 0x4($v1)
/* 03FCA0 8003F0A0 AC780000 */  sw          $t8, 0x0($v1)
.L8003F0A4:
/* 03FCA4 8003F0A4 0C0015D0 */  jal         Matrix_Pop
/* 03FCA8 8003F0A8 02202025 */   or         $a0, $s1, $zero
/* 03FCAC 8003F0AC 100004E1 */  b           .L80040434
/* 03FCB0 8003F0B0 00000000 */   nop
.L8003F0B4:
/* 03FCB4 8003F0B4 3C098017 */  lui         $t1, %hi(gPlayerNum)
/* 03FCB8 8003F0B8 8D2978A0 */  lw          $t1, %lo(gPlayerNum)($t1)
/* 03FCBC 8003F0BC 3C198018 */  lui         $t9, %hi(gPlayer)
/* 03FCC0 8003F0C0 8F398280 */  lw          $t9, %lo(gPlayer)($t9)
/* 03FCC4 8003F0C4 00097880 */  sll         $t7, $t1, 2
/* 03FCC8 8003F0C8 01E97821 */  addu        $t7, $t7, $t1
/* 03FCCC 8003F0CC 000F78C0 */  sll         $t7, $t7, 3
/* 03FCD0 8003F0D0 01E97823 */  subu        $t7, $t7, $t1
/* 03FCD4 8003F0D4 000F7940 */  sll         $t7, $t7, 5
/* 03FCD8 8003F0D8 032F5821 */  addu        $t3, $t9, $t7
/* 03FCDC 8003F0DC 0C027DDA */  jal         Math_RadToDeg
/* 03FCE0 8003F0E0 C56C0058 */   lwc1       $fa0, 0x58($t3)
/* 03FCE4 8003F0E4 3C0A8017 */  lui         $t2, %hi(gPlayerNum)
/* 03FCE8 8003F0E8 8D4A78A0 */  lw          $t2, %lo(gPlayerNum)($t2)
/* 03FCEC 8003F0EC 3C038018 */  lui         $v1, %hi(gPlayer)
/* 03FCF0 8003F0F0 8C638280 */  lw          $v1, %lo(gPlayer)($v1)
/* 03FCF4 8003F0F4 000A7080 */  sll         $t6, $t2, 2
/* 03FCF8 8003F0F8 01CA7021 */  addu        $t6, $t6, $t2
/* 03FCFC 8003F0FC 000E70C0 */  sll         $t6, $t6, 3
/* 03FD00 8003F100 01CA7023 */  subu        $t6, $t6, $t2
/* 03FD04 8003F104 000E7140 */  sll         $t6, $t6, 5
/* 03FD08 8003F108 006E1021 */  addu        $v0, $v1, $t6
/* 03FD0C 8003F10C C4440114 */  lwc1        $ft0, 0x114($v0)
/* 03FD10 8003F110 3C01800D */  lui         $at, %hi(D_800D544C)
/* 03FD14 8003F114 C432544C */  lwc1        $ft5, %lo(D_800D544C)($at)
/* 03FD18 8003F118 C446005C */  lwc1        $ft1, 0x5C($v0)
/* 03FD1C 8003F11C 46040301 */  sub.s       $fa0, $fv0, $ft0
/* 03FD20 8003F120 3C01800D */  lui         $at, %hi(D_800D5450)
/* 03FD24 8003F124 46123202 */  mul.s       $ft2, $ft1, $ft5
/* 03FD28 8003F128 C4245450 */  lwc1        $ft0, %lo(D_800D5450)($at)
/* 03FD2C 8003F12C C44A0044 */  lwc1        $ft3, 0x44($v0)
/* 03FD30 8003F130 3C01800D */  lui         $at, %hi(D_800D5454)
/* 03FD34 8003F134 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 03FD38 8003F138 46045182 */  mul.s       $ft1, $ft3, $ft0
/* 03FD3C 8003F13C C42A5454 */  lwc1        $ft3, %lo(D_800D5454)($at)
/* 03FD40 8003F140 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 03FD44 8003F144 2401000C */  addiu       $at, $zero, 0xC
/* 03FD48 8003F148 460A6082 */  mul.s       $fv1, $fa0, $ft3
/* 03FD4C 8003F14C 46064481 */  sub.s       $ft5, $ft2, $ft1
/* 03FD50 8003F150 46021380 */  add.s       $fa1, $fv1, $fv1
/* 03FD54 8003F154 E7B20134 */  swc1        $ft5, 0x134($sp)
/* 03FD58 8003F158 14A1001A */  bne         $a1, $at, .L8003F1C4
/* 03FD5C 8003F15C E7AE013C */   swc1       $fa1, 0x13C($sp)
/* 03FD60 8003F160 8C6C01C8 */  lw          $t4, 0x1C8($v1)
/* 03FD64 8003F164 24010002 */  addiu       $at, $zero, 0x2
/* 03FD68 8003F168 55810017 */  bnel        $t4, $at, .L8003F1C8
/* 03FD6C 8003F16C 24010007 */   addiu      $at, $zero, 0x7
/* 03FD70 8003F170 8C7801D0 */  lw          $t8, 0x1D0($v1)
/* 03FD74 8003F174 2B010003 */  slti        $at, $t8, 0x3
/* 03FD78 8003F178 50200013 */  beql        $at, $zero, .L8003F1C8
/* 03FD7C 8003F17C 24010007 */   addiu      $at, $zero, 0x7
/* 03FD80 8003F180 C46C0058 */  lwc1        $fa0, 0x58($v1)
/* 03FD84 8003F184 0C008C24 */  jal         __sinf
/* 03FD88 8003F188 E7AE002C */   swc1       $fa1, 0x2C($sp)
/* 03FD8C 8003F18C 3C0141A0 */  lui         $at, (0x41A00000 >> 16)
/* 03FD90 8003F190 44814000 */  mtc1        $at, $ft2
/* 03FD94 8003F194 3C028016 */  lui         $v0, %hi(D_8015F968)
/* 03FD98 8003F198 2442F968 */  addiu       $v0, $v0, %lo(D_8015F968)
/* 03FD9C 8003F19C 46080182 */  mul.s       $ft1, $fv0, $ft2
/* 03FDA0 8003F1A0 C4440000 */  lwc1        $ft0, 0x0($v0)
/* 03FDA4 8003F1A4 C7AE002C */  lwc1        $fa1, 0x2C($sp)
/* 03FDA8 8003F1A8 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 03FDAC 8003F1AC 46062480 */  add.s       $ft5, $ft0, $ft1
/* 03FDB0 8003F1B0 E4520000 */  swc1        $ft5, 0x0($v0)
/* 03FDB4 8003F1B4 C44A0000 */  lwc1        $ft3, 0x0($v0)
/* 03FDB8 8003F1B8 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 03FDBC 8003F1BC 460A7200 */  add.s       $ft2, $fa1, $ft3
/* 03FDC0 8003F1C0 E7A8013C */  swc1        $ft2, 0x13C($sp)
.L8003F1C4:
/* 03FDC4 8003F1C4 24010007 */  addiu       $at, $zero, 0x7
.L8003F1C8:
/* 03FDC8 8003F1C8 14A1001D */  bne         $a1, $at, .L8003F240
/* 03FDCC 8003F1CC 3C038018 */   lui        $v1, %hi(gPlayer)
/* 03FDD0 8003F1D0 8C638280 */  lw          $v1, %lo(gPlayer)($v1)
/* 03FDD4 8003F1D4 24010002 */  addiu       $at, $zero, 0x2
/* 03FDD8 8003F1D8 8C6D01C8 */  lw          $t5, 0x1C8($v1)
/* 03FDDC 8003F1DC 15A10018 */  bne         $t5, $at, .L8003F240
/* 03FDE0 8003F1E0 00000000 */   nop
/* 03FDE4 8003F1E4 8C6901D0 */  lw          $t1, 0x1D0($v1)
/* 03FDE8 8003F1E8 29210002 */  slti        $at, $t1, 0x2
/* 03FDEC 8003F1EC 14200014 */  bnez        $at, .L8003F240
/* 03FDF0 8003F1F0 3C01800D */   lui        $at, %hi(D_800D5458)
/* 03FDF4 8003F1F4 C4245458 */  lwc1        $ft0, %lo(D_800D5458)($at)
/* 03FDF8 8003F1F8 C4660048 */  lwc1        $ft1, 0x48($v1)
/* 03FDFC 8003F1FC 4604303E */  c.le.s      $ft1, $ft0
/* 03FE00 8003F200 00000000 */  nop
/* 03FE04 8003F204 4500000E */  bc1f        .L8003F240
/* 03FE08 8003F208 00000000 */   nop
/* 03FE0C 8003F20C 0C008C24 */  jal         __sinf
/* 03FE10 8003F210 C46C005C */   lwc1       $fa0, 0x5C($v1)
/* 03FE14 8003F214 3C01800D */  lui         $at, %hi(D_800D545C)
/* 03FE18 8003F218 C432545C */  lwc1        $ft5, %lo(D_800D545C)($at)
/* 03FE1C 8003F21C 3C028016 */  lui         $v0, %hi(D_8015F968)
/* 03FE20 8003F220 2442F968 */  addiu       $v0, $v0, %lo(D_8015F968)
/* 03FE24 8003F224 46120282 */  mul.s       $ft3, $fv0, $ft5
/* 03FE28 8003F228 C7A80134 */  lwc1        $ft2, 0x134($sp)
/* 03FE2C 8003F22C E44A0000 */  swc1        $ft3, 0x0($v0)
/* 03FE30 8003F230 C4400000 */  lwc1        $fv0, 0x0($v0)
/* 03FE34 8003F234 46000005 */  abs.s       $fv0, $fv0
/* 03FE38 8003F238 46004101 */  sub.s       $ft0, $ft2, $fv0
/* 03FE3C 8003F23C E7A40134 */  swc1        $ft0, 0x134($sp)
.L8003F240:
/* 03FE40 8003F240 3C01800D */  lui         $at, %hi(D_800D5460)
/* 03FE44 8003F244 C42E5460 */  lwc1        $fa1, %lo(D_800D5460)($at)
/* 03FE48 8003F248 0C001388 */  jal         Math_ModF
/* 03FE4C 8003F24C C7AC013C */   lwc1       $fa0, 0x13C($sp)
/* 03FE50 8003F250 0C02E4CA */  jal         RCP_SetupDL_17
/* 03FE54 8003F254 E7A0013C */   swc1       $fv0, 0x13C($sp)
/* 03FE58 8003F258 3C0F8017 */  lui         $t7, %hi(gPlayerNum)
/* 03FE5C 8003F25C 8DEF78A0 */  lw          $t7, %lo(gPlayerNum)($t7)
/* 03FE60 8003F260 3C198018 */  lui         $t9, %hi(gPlayer)
/* 03FE64 8003F264 8F398280 */  lw          $t9, %lo(gPlayer)($t9)
/* 03FE68 8003F268 000F5880 */  sll         $t3, $t7, 2
/* 03FE6C 8003F26C 016F5821 */  addu        $t3, $t3, $t7
/* 03FE70 8003F270 000B58C0 */  sll         $t3, $t3, 3
/* 03FE74 8003F274 016F5823 */  subu        $t3, $t3, $t7
/* 03FE78 8003F278 000B5940 */  sll         $t3, $t3, 5
/* 03FE7C 8003F27C 3C01800D */  lui         $at, %hi(D_800D5464)
/* 03FE80 8003F280 032B5021 */  addu        $t2, $t9, $t3
/* 03FE84 8003F284 C5460034 */  lwc1        $ft1, 0x34($t2)
/* 03FE88 8003F288 C4325464 */  lwc1        $ft5, %lo(D_800D5464)($at)
/* 03FE8C 8003F28C 8E240000 */  lw          $a0, 0x0($s1)
/* 03FE90 8003F290 24060001 */  addiu       $a2, $zero, 0x1
/* 03FE94 8003F294 46123282 */  mul.s       $ft3, $ft1, $ft5
/* 03FE98 8003F298 44055000 */  mfc1        $a1, $ft3
/* 03FE9C 8003F29C 0C0017F8 */  jal         Matrix_RotateZ
/* 03FEA0 8003F2A0 00000000 */   nop
/* 03FEA4 8003F2A4 240E0001 */  addiu       $t6, $zero, 0x1
/* 03FEA8 8003F2A8 AFAE0010 */  sw          $t6, 0x10($sp)
/* 03FEAC 8003F2AC 8E240000 */  lw          $a0, 0x0($s1)
/* 03FEB0 8003F2B0 3C053FC0 */  lui         $a1, (0x3FC00000 >> 16)
/* 03FEB4 8003F2B4 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* 03FEB8 8003F2B8 0C00170D */  jal         Matrix_Scale
/* 03FEBC 8003F2BC 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 03FEC0 8003F2C0 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 03FEC4 8003F2C4 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 03FEC8 8003F2C8 2401000C */  addiu       $at, $zero, 0xC
/* 03FECC 8003F2CC C7A40134 */  lwc1        $ft0, 0x134($sp)
/* 03FED0 8003F2D0 10A10002 */  beq         $a1, $at, .L8003F2DC
/* 03FED4 8003F2D4 24010008 */   addiu      $at, $zero, 0x8
/* 03FED8 8003F2D8 14A1000D */  bne         $a1, $at, .L8003F310
.L8003F2DC:
/* 03FEDC 8003F2DC 3C01800D */   lui        $at, %hi(D_800D5468)
/* 03FEE0 8003F2E0 C4285468 */  lwc1        $ft2, %lo(D_800D5468)($at)
/* 03FEE4 8003F2E4 3C07C5DA */  lui         $a3, (0xC5DAC000 >> 16)
/* 03FEE8 8003F2E8 240C0001 */  addiu       $t4, $zero, 0x1
/* 03FEEC 8003F2EC 46044180 */  add.s       $ft1, $ft2, $ft0
/* 03FEF0 8003F2F0 AFAC0010 */  sw          $t4, 0x10($sp)
/* 03FEF4 8003F2F4 34E7C000 */  ori         $a3, $a3, (0xC5DAC000 & 0xFFFF)
/* 03FEF8 8003F2F8 8E240000 */  lw          $a0, 0x0($s1)
/* 03FEFC 8003F2FC 44063000 */  mfc1        $a2, $ft1
/* 03FF00 8003F300 0C0016C0 */  jal         Matrix_Translate
/* 03FF04 8003F304 8FA5013C */   lw         $a1, 0x13C($sp)
/* 03FF08 8003F308 1000001F */  b           .L8003F388
/* 03FF0C 8003F30C 00000000 */   nop
.L8003F310:
/* 03FF10 8003F310 24010007 */  addiu       $at, $zero, 0x7
/* 03FF14 8003F314 14A1000E */  bne         $a1, $at, .L8003F350
/* 03FF18 8003F318 C7AA0134 */   lwc1       $ft3, 0x134($sp)
/* 03FF1C 8003F31C 3C01800D */  lui         $at, %hi(D_800D546C)
/* 03FF20 8003F320 C432546C */  lwc1        $ft5, %lo(D_800D546C)($at)
/* 03FF24 8003F324 3C07C5DA */  lui         $a3, (0xC5DAC000 >> 16)
/* 03FF28 8003F328 24180001 */  addiu       $t8, $zero, 0x1
/* 03FF2C 8003F32C 460A9200 */  add.s       $ft2, $ft5, $ft3
/* 03FF30 8003F330 AFB80010 */  sw          $t8, 0x10($sp)
/* 03FF34 8003F334 34E7C000 */  ori         $a3, $a3, (0xC5DAC000 & 0xFFFF)
/* 03FF38 8003F338 8E240000 */  lw          $a0, 0x0($s1)
/* 03FF3C 8003F33C 44064000 */  mfc1        $a2, $ft2
/* 03FF40 8003F340 0C0016C0 */  jal         Matrix_Translate
/* 03FF44 8003F344 8FA5013C */   lw         $a1, 0x13C($sp)
/* 03FF48 8003F348 1000000F */  b           .L8003F388
/* 03FF4C 8003F34C 00000000 */   nop
.L8003F350:
/* 03FF50 8003F350 2401000B */  addiu       $at, $zero, 0xB
/* 03FF54 8003F354 14A1000C */  bne         $a1, $at, .L8003F388
/* 03FF58 8003F358 C7A60134 */   lwc1       $ft1, 0x134($sp)
/* 03FF5C 8003F35C 3C01C57A */  lui         $at, (0xC57A0000 >> 16)
/* 03FF60 8003F360 44812000 */  mtc1        $at, $ft0
/* 03FF64 8003F364 3C07C5DA */  lui         $a3, (0xC5DAC000 >> 16)
/* 03FF68 8003F368 240D0001 */  addiu       $t5, $zero, 0x1
/* 03FF6C 8003F36C 46062480 */  add.s       $ft5, $ft0, $ft1
/* 03FF70 8003F370 AFAD0010 */  sw          $t5, 0x10($sp)
/* 03FF74 8003F374 34E7C000 */  ori         $a3, $a3, (0xC5DAC000 & 0xFFFF)
/* 03FF78 8003F378 8E240000 */  lw          $a0, 0x0($s1)
/* 03FF7C 8003F37C 44069000 */  mfc1        $a2, $ft5
/* 03FF80 8003F380 0C0016C0 */  jal         Matrix_Translate
/* 03FF84 8003F384 8FA5013C */   lw         $a1, 0x13C($sp)
.L8003F388:
/* 03FF88 8003F388 0C001BAE */  jal         Matrix_SetGfxMtx
/* 03FF8C 8003F38C 02002025 */   or         $a0, $s0, $zero
/* 03FF90 8003F390 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 03FF94 8003F394 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 03FF98 8003F398 2401000C */  addiu       $at, $zero, 0xC
/* 03FF9C 8003F39C 44804000 */  mtc1        $zero, $ft2
/* 03FFA0 8003F3A0 14A1000A */  bne         $a1, $at, .L8003F3CC
/* 03FFA4 8003F3A4 3C0F0600 */   lui        $t7, (0x6000000 >> 16)
/* 03FFA8 8003F3A8 8E030000 */  lw          $v1, 0x0($s0)
/* 03FFAC 8003F3AC 3C190600 */  lui         $t9, %hi(D_6000A80)
/* 03FFB0 8003F3B0 27390A80 */  addiu       $t9, $t9, %lo(D_6000A80)
/* 03FFB4 8003F3B4 24690008 */  addiu       $t1, $v1, 0x8
/* 03FFB8 8003F3B8 AE090000 */  sw          $t1, 0x0($s0)
/* 03FFBC 8003F3BC AC790004 */  sw          $t9, 0x4($v1)
/* 03FFC0 8003F3C0 AC6F0000 */  sw          $t7, 0x0($v1)
/* 03FFC4 8003F3C4 10000024 */  b           .L8003F458
/* 03FFC8 8003F3C8 C7AA013C */   lwc1       $ft3, 0x13C($sp)
.L8003F3CC:
/* 03FFCC 8003F3CC 2401000B */  addiu       $at, $zero, 0xB
/* 03FFD0 8003F3D0 14A1000A */  bne         $a1, $at, .L8003F3FC
/* 03FFD4 8003F3D4 3C0A0600 */   lui        $t2, (0x6000000 >> 16)
/* 03FFD8 8003F3D8 8E030000 */  lw          $v1, 0x0($s0)
/* 03FFDC 8003F3DC 3C0E0602 */  lui         $t6, %hi(D_6019220)
/* 03FFE0 8003F3E0 25CE9220 */  addiu       $t6, $t6, %lo(D_6019220)
/* 03FFE4 8003F3E4 246B0008 */  addiu       $t3, $v1, 0x8
/* 03FFE8 8003F3E8 AE0B0000 */  sw          $t3, 0x0($s0)
/* 03FFEC 8003F3EC AC6E0004 */  sw          $t6, 0x4($v1)
/* 03FFF0 8003F3F0 AC6A0000 */  sw          $t2, 0x0($v1)
/* 03FFF4 8003F3F4 10000018 */  b           .L8003F458
/* 03FFF8 8003F3F8 C7AA013C */   lwc1       $ft3, 0x13C($sp)
.L8003F3FC:
/* 03FFFC 8003F3FC 24010008 */  addiu       $at, $zero, 0x8
/* 040000 8003F400 14A1000A */  bne         $a1, $at, .L8003F42C
/* 040004 8003F404 3C180600 */   lui        $t8, (0x6000000 >> 16)
/* 040008 8003F408 8E030000 */  lw          $v1, 0x0($s0)
/* 04000C 8003F40C 3C0D0601 */  lui         $t5, %hi(D_6013480)
/* 040010 8003F410 25AD3480 */  addiu       $t5, $t5, %lo(D_6013480)
/* 040014 8003F414 246C0008 */  addiu       $t4, $v1, 0x8
/* 040018 8003F418 AE0C0000 */  sw          $t4, 0x0($s0)
/* 04001C 8003F41C AC6D0004 */  sw          $t5, 0x4($v1)
/* 040020 8003F420 AC780000 */  sw          $t8, 0x0($v1)
/* 040024 8003F424 1000000C */  b           .L8003F458
/* 040028 8003F428 C7AA013C */   lwc1       $ft3, 0x13C($sp)
.L8003F42C:
/* 04002C 8003F42C 24010007 */  addiu       $at, $zero, 0x7
/* 040030 8003F430 14A10008 */  bne         $a1, $at, .L8003F454
/* 040034 8003F434 3C0F0600 */   lui        $t7, (0x6000000 >> 16)
/* 040038 8003F438 8E030000 */  lw          $v1, 0x0($s0)
/* 04003C 8003F43C 3C190602 */  lui         $t9, %hi(D_601E150)
/* 040040 8003F440 2739E150 */  addiu       $t9, $t9, %lo(D_601E150)
/* 040044 8003F444 24690008 */  addiu       $t1, $v1, 0x8
/* 040048 8003F448 AE090000 */  sw          $t1, 0x0($s0)
/* 04004C 8003F44C AC790004 */  sw          $t9, 0x4($v1)
/* 040050 8003F450 AC6F0000 */  sw          $t7, 0x0($v1)
.L8003F454:
/* 040054 8003F454 C7AA013C */  lwc1        $ft3, 0x13C($sp)
.L8003F458:
/* 040058 8003F458 3C01BF80 */  lui         $at, (0xBF800000 >> 16)
/* 04005C 8003F45C 4608503C */  c.lt.s      $ft3, $ft2
/* 040060 8003F460 00000000 */  nop
/* 040064 8003F464 45020006 */  bc1fl       .L8003F480
/* 040068 8003F468 44813000 */   mtc1       $at, $ft1
/* 04006C 8003F46C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 040070 8003F470 44812000 */  mtc1        $at, $ft0
/* 040074 8003F474 10000004 */  b           .L8003F488
/* 040078 8003F478 E7A4013C */   swc1       $ft0, 0x13C($sp)
/* 04007C 8003F47C 44813000 */  mtc1        $at, $ft1
.L8003F480:
/* 040080 8003F480 00000000 */  nop
/* 040084 8003F484 E7A6013C */  swc1        $ft1, 0x13C($sp)
.L8003F488:
/* 040088 8003F488 3C01800D */  lui         $at, %hi(D_800D5470)
/* 04008C 8003F48C C4325470 */  lwc1        $ft5, %lo(D_800D5470)($at)
/* 040090 8003F490 C7AA013C */  lwc1        $ft3, 0x13C($sp)
/* 040094 8003F494 44800000 */  mtc1        $zero, $fv0
/* 040098 8003F498 240B0001 */  addiu       $t3, $zero, 0x1
/* 04009C 8003F49C 460A9202 */  mul.s       $ft2, $ft5, $ft3
/* 0400A0 8003F4A0 44060000 */  mfc1        $a2, $fv0
/* 0400A4 8003F4A4 44070000 */  mfc1        $a3, $fv0
/* 0400A8 8003F4A8 AFAB0010 */  sw          $t3, 0x10($sp)
/* 0400AC 8003F4AC 8E240000 */  lw          $a0, 0x0($s1)
/* 0400B0 8003F4B0 44054000 */  mfc1        $a1, $ft2
/* 0400B4 8003F4B4 0C0016C0 */  jal         Matrix_Translate
/* 0400B8 8003F4B8 00000000 */   nop
/* 0400BC 8003F4BC 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0400C0 8003F4C0 02002025 */   or         $a0, $s0, $zero
/* 0400C4 8003F4C4 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 0400C8 8003F4C8 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 0400CC 8003F4CC 2401000C */  addiu       $at, $zero, 0xC
/* 0400D0 8003F4D0 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* 0400D4 8003F4D4 54A1000B */  bnel        $a1, $at, .L8003F504
/* 0400D8 8003F4D8 2401000B */   addiu      $at, $zero, 0xB
/* 0400DC 8003F4DC 8E030000 */  lw          $v1, 0x0($s0)
/* 0400E0 8003F4E0 3C0C0600 */  lui         $t4, %hi(D_6000A80)
/* 0400E4 8003F4E4 258C0A80 */  addiu       $t4, $t4, %lo(D_6000A80)
/* 0400E8 8003F4E8 246A0008 */  addiu       $t2, $v1, 0x8
/* 0400EC 8003F4EC AE0A0000 */  sw          $t2, 0x0($s0)
/* 0400F0 8003F4F0 AC6C0004 */  sw          $t4, 0x4($v1)
/* 0400F4 8003F4F4 AC6E0000 */  sw          $t6, 0x0($v1)
/* 0400F8 8003F4F8 100003CE */  b           .L80040434
/* 0400FC 8003F4FC 00000000 */   nop
/* 040100 8003F500 2401000B */  addiu       $at, $zero, 0xB
.L8003F504:
/* 040104 8003F504 14A1000A */  bne         $a1, $at, .L8003F530
/* 040108 8003F508 3C0D0600 */   lui        $t5, (0x6000000 >> 16)
/* 04010C 8003F50C 8E030000 */  lw          $v1, 0x0($s0)
/* 040110 8003F510 3C090602 */  lui         $t1, %hi(D_6019220)
/* 040114 8003F514 25299220 */  addiu       $t1, $t1, %lo(D_6019220)
/* 040118 8003F518 24780008 */  addiu       $t8, $v1, 0x8
/* 04011C 8003F51C AE180000 */  sw          $t8, 0x0($s0)
/* 040120 8003F520 AC690004 */  sw          $t1, 0x4($v1)
/* 040124 8003F524 AC6D0000 */  sw          $t5, 0x0($v1)
/* 040128 8003F528 100003C2 */  b           .L80040434
/* 04012C 8003F52C 00000000 */   nop
.L8003F530:
/* 040130 8003F530 24010008 */  addiu       $at, $zero, 0x8
/* 040134 8003F534 14A1000A */  bne         $a1, $at, .L8003F560
/* 040138 8003F538 3C190600 */   lui        $t9, (0x6000000 >> 16)
/* 04013C 8003F53C 8E030000 */  lw          $v1, 0x0($s0)
/* 040140 8003F540 3C0B0601 */  lui         $t3, %hi(D_6013480)
/* 040144 8003F544 256B3480 */  addiu       $t3, $t3, %lo(D_6013480)
/* 040148 8003F548 246F0008 */  addiu       $t7, $v1, 0x8
/* 04014C 8003F54C AE0F0000 */  sw          $t7, 0x0($s0)
/* 040150 8003F550 AC6B0004 */  sw          $t3, 0x4($v1)
/* 040154 8003F554 AC790000 */  sw          $t9, 0x0($v1)
/* 040158 8003F558 100003B6 */  b           .L80040434
/* 04015C 8003F55C 00000000 */   nop
.L8003F560:
/* 040160 8003F560 24010007 */  addiu       $at, $zero, 0x7
/* 040164 8003F564 14A103B3 */  bne         $a1, $at, .L80040434
/* 040168 8003F568 3C0E0600 */   lui        $t6, (0x6000000 >> 16)
/* 04016C 8003F56C 8E030000 */  lw          $v1, 0x0($s0)
/* 040170 8003F570 3C0C0602 */  lui         $t4, %hi(D_601E150)
/* 040174 8003F574 258CE150 */  addiu       $t4, $t4, %lo(D_601E150)
/* 040178 8003F578 246A0008 */  addiu       $t2, $v1, 0x8
/* 04017C 8003F57C AE0A0000 */  sw          $t2, 0x0($s0)
/* 040180 8003F580 AC6C0004 */  sw          $t4, 0x4($v1)
/* 040184 8003F584 AC6E0000 */  sw          $t6, 0x0($v1)
/* 040188 8003F588 100003AA */  b           .L80040434
/* 04018C 8003F58C 00000000 */   nop
.L8003F590:
/* 040190 8003F590 8F188280 */  lw          $t8, %lo(gPlayer)($t8)
/* 040194 8003F594 24010008 */  addiu       $at, $zero, 0x8
/* 040198 8003F598 8F0D01C8 */  lw          $t5, 0x1C8($t8)
/* 04019C 8003F59C 11A10333 */  beq         $t5, $at, .L8004026C
/* 0401A0 8003F5A0 00000000 */   nop
/* 0401A4 8003F5A4 0C0015C2 */  jal         Matrix_Push
/* 0401A8 8003F5A8 02202025 */   or         $a0, $s1, $zero
/* 0401AC 8003F5AC 3C098018 */  lui         $t1, %hi(gPlayer)
/* 0401B0 8003F5B0 8D298280 */  lw          $t1, %lo(gPlayer)($t1)
/* 0401B4 8003F5B4 0C027DDA */  jal         Math_RadToDeg
/* 0401B8 8003F5B8 C52C0058 */   lwc1       $fa0, 0x58($t1)
/* 0401BC 8003F5BC 3C0F8018 */  lui         $t7, %hi(gPlayer)
/* 0401C0 8003F5C0 8DEF8280 */  lw          $t7, %lo(gPlayer)($t7)
/* 0401C4 8003F5C4 E7A0012C */  swc1        $fv0, 0x12C($sp)
/* 0401C8 8003F5C8 0C027DDA */  jal         Math_RadToDeg
/* 0401CC 8003F5CC C5EC005C */   lwc1       $fa0, 0x5C($t7)
/* 0401D0 8003F5D0 3C014234 */  lui         $at, (0x42340000 >> 16)
/* 0401D4 8003F5D4 C7A2012C */  lwc1        $fv1, 0x12C($sp)
/* 0401D8 8003F5D8 44812000 */  mtc1        $at, $ft0
/* 0401DC 8003F5DC E7A00130 */  swc1        $fv0, 0x130($sp)
/* 0401E0 8003F5E0 3C01800D */  lui         $at, %hi(D_800D5474)
/* 0401E4 8003F5E4 4604103C */  c.lt.s      $fv1, $ft0
/* 0401E8 8003F5E8 00000000 */  nop
/* 0401EC 8003F5EC 45030006 */  bc1tl       .L8003F608
/* 0401F0 8003F5F0 3C014220 */   lui        $at, (0x42200000 >> 16)
/* 0401F4 8003F5F4 C4265474 */  lwc1        $ft1, %lo(D_800D5474)($at)
/* 0401F8 8003F5F8 4602303C */  c.lt.s      $ft1, $fv1
/* 0401FC 8003F5FC 00000000 */  nop
/* 040200 8003F600 45000318 */  bc1f        .L80040264
/* 040204 8003F604 3C014220 */   lui        $at, (0x42200000 >> 16)
.L8003F608:
/* 040208 8003F608 44819000 */  mtc1        $at, $ft5
/* 04020C 8003F60C 3C01800D */  lui         $at, %hi(D_800D5478)
/* 040210 8003F610 4612003C */  c.lt.s      $fv0, $ft5
/* 040214 8003F614 00000000 */  nop
/* 040218 8003F618 45010006 */  bc1t        .L8003F634
/* 04021C 8003F61C 00000000 */   nop
/* 040220 8003F620 C42A5478 */  lwc1        $ft3, %lo(D_800D5478)($at)
/* 040224 8003F624 4600503C */  c.lt.s      $ft3, $fv0
/* 040228 8003F628 00000000 */  nop
/* 04022C 8003F62C 4500030D */  bc1f        .L80040264
/* 040230 8003F630 00000000 */   nop
.L8003F634:
/* 040234 8003F634 0C02E4D6 */  jal         RCP_SetupDL_36
/* 040238 8003F638 00000000 */   nop
/* 04023C 8003F63C 3C018018 */  lui         $at, %hi(D_80178420)
/* 040240 8003F640 C4288420 */  lwc1        $ft2, %lo(D_80178420)($at)
/* 040244 8003F644 3C058018 */  lui         $a1, %hi(gCurrentLevel)
/* 040248 8003F648 8CA58234 */  lw          $a1, %lo(gCurrentLevel)($a1)
/* 04024C 8003F64C 3C018018 */  lui         $at, %hi(D_80178424)
/* 040250 8003F650 C4248424 */  lwc1        $ft0, %lo(D_80178424)($at)
/* 040254 8003F654 24020002 */  addiu       $v0, $zero, 0x2
/* 040258 8003F658 E7A80138 */  swc1        $ft2, 0x138($sp)
/* 04025C 8003F65C 10450003 */  beq         $v0, $a1, .L8003F66C
/* 040260 8003F660 E7A40134 */   swc1       $ft0, 0x134($sp)
/* 040264 8003F664 24010001 */  addiu       $at, $zero, 0x1
/* 040268 8003F668 14A10007 */  bne         $a1, $at, .L8003F688
.L8003F66C:
/* 04026C 8003F66C 3C198018 */   lui        $t9, %hi(D_8017827C)
/* 040270 8003F670 8F39827C */  lw          $t9, %lo(D_8017827C)($t9)
/* 040274 8003F674 24010001 */  addiu       $at, $zero, 0x1
/* 040278 8003F678 240B004D */  addiu       $t3, $zero, 0x4D
/* 04027C 8003F67C 57210003 */  bnel        $t9, $at, .L8003F68C
/* 040280 8003F680 8FAA011C */   lw         $t2, 0x11C($sp)
/* 040284 8003F684 AFAB011C */  sw          $t3, 0x11C($sp)
.L8003F688:
/* 040288 8003F688 8FAA011C */  lw          $t2, 0x11C($sp)
.L8003F68C:
/* 04028C 8003F68C C7A60138 */  lwc1        $ft1, 0x138($sp)
/* 040290 8003F690 8FAE011C */  lw          $t6, 0x11C($sp)
/* 040294 8003F694 15420012 */  bne         $t2, $v0, .L8003F6E0
/* 040298 8003F698 2401000A */   addiu      $at, $zero, 0xA
/* 04029C 8003F69C 3C014270 */  lui         $at, (0x42700000 >> 16)
/* 0402A0 8003F6A0 44819000 */  mtc1        $at, $ft5
/* 0402A4 8003F6A4 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 0402A8 8003F6A8 44817000 */  mtc1        $at, $fa1
/* 0402AC 8003F6AC 0C001388 */  jal         Math_ModF
/* 0402B0 8003F6B0 46123300 */   add.s      $fa0, $ft1, $ft5
/* 0402B4 8003F6B4 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 0402B8 8003F6B8 44817000 */  mtc1        $at, $fa1
/* 0402BC 8003F6BC C7AA0134 */  lwc1        $ft3, 0x134($sp)
/* 0402C0 8003F6C0 3C014220 */  lui         $at, (0x42200000 >> 16)
/* 0402C4 8003F6C4 44812000 */  mtc1        $at, $ft0
/* 0402C8 8003F6C8 460E5200 */  add.s       $ft2, $ft3, $fa1
/* 0402CC 8003F6CC E7A00138 */  swc1        $fv0, 0x138($sp)
/* 0402D0 8003F6D0 0C001388 */  jal         Math_ModF
/* 0402D4 8003F6D4 46044301 */   sub.s      $fa0, $ft2, $ft0
/* 0402D8 8003F6D8 10000064 */  b           .L8003F86C
/* 0402DC 8003F6DC E7A00134 */   swc1       $fv0, 0x134($sp)
.L8003F6E0:
/* 0402E0 8003F6E0 15C10015 */  bne         $t6, $at, .L8003F738
/* 0402E4 8003F6E4 8FAC011C */   lw         $t4, 0x11C($sp)
/* 0402E8 8003F6E8 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* 0402EC 8003F6EC 44819000 */  mtc1        $at, $ft5
/* 0402F0 8003F6F0 C7A60138 */  lwc1        $ft1, 0x138($sp)
/* 0402F4 8003F6F4 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 0402F8 8003F6F8 44817000 */  mtc1        $at, $fa1
/* 0402FC 8003F6FC 0C001388 */  jal         Math_ModF
/* 040300 8003F700 46123301 */   sub.s      $fa0, $ft1, $ft5
/* 040304 8003F704 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 040308 8003F708 44814000 */  mtc1        $at, $ft2
/* 04030C 8003F70C C7AA0134 */  lwc1        $ft3, 0x134($sp)
/* 040310 8003F710 3C014220 */  lui         $at, (0x42200000 >> 16)
/* 040314 8003F714 44813000 */  mtc1        $at, $ft1
/* 040318 8003F718 46085100 */  add.s       $ft0, $ft3, $ft2
/* 04031C 8003F71C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 040320 8003F720 44817000 */  mtc1        $at, $fa1
/* 040324 8003F724 E7A00138 */  swc1        $fv0, 0x138($sp)
/* 040328 8003F728 0C001388 */  jal         Math_ModF
/* 04032C 8003F72C 46062301 */   sub.s      $fa0, $ft0, $ft1
/* 040330 8003F730 1000004E */  b           .L8003F86C
/* 040334 8003F734 E7A00134 */   swc1       $fv0, 0x134($sp)
.L8003F738:
/* 040338 8003F738 24010005 */  addiu       $at, $zero, 0x5
/* 04033C 8003F73C 15810015 */  bne         $t4, $at, .L8003F794
/* 040340 8003F740 3C188017 */   lui        $t8, %hi(gLevelMode)
/* 040344 8003F744 8F187880 */  lw          $t8, %lo(gLevelMode)($t8)
/* 040348 8003F748 C7B20138 */  lwc1        $ft5, 0x138($sp)
/* 04034C 8003F74C 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 040350 8003F750 57000011 */  bnel        $t8, $zero, .L8003F798
/* 040354 8003F754 8FAD011C */   lw         $t5, 0x11C($sp)
/* 040358 8003F758 44815000 */  mtc1        $at, $ft3
/* 04035C 8003F75C 3C014270 */  lui         $at, (0x42700000 >> 16)
/* 040360 8003F760 44812000 */  mtc1        $at, $ft0
/* 040364 8003F764 460A9200 */  add.s       $ft2, $ft5, $ft3
/* 040368 8003F768 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 04036C 8003F76C 44817000 */  mtc1        $at, $fa1
/* 040370 8003F770 0C001388 */  jal         Math_ModF
/* 040374 8003F774 46044301 */   sub.s      $fa0, $ft2, $ft0
/* 040378 8003F778 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 04037C 8003F77C 44817000 */  mtc1        $at, $fa1
/* 040380 8003F780 E7A00138 */  swc1        $fv0, 0x138($sp)
/* 040384 8003F784 0C001388 */  jal         Math_ModF
/* 040388 8003F788 C7AC0134 */   lwc1       $fa0, 0x134($sp)
/* 04038C 8003F78C 10000037 */  b           .L8003F86C
/* 040390 8003F790 E7A00134 */   swc1       $fv0, 0x134($sp)
.L8003F794:
/* 040394 8003F794 8FAD011C */  lw          $t5, 0x11C($sp)
.L8003F798:
/* 040398 8003F798 2401000E */  addiu       $at, $zero, 0xE
/* 04039C 8003F79C C7A60138 */  lwc1        $ft1, 0x138($sp)
/* 0403A0 8003F7A0 15A10011 */  bne         $t5, $at, .L8003F7E8
/* 0403A4 8003F7A4 8FA9011C */   lw         $t1, 0x11C($sp)
/* 0403A8 8003F7A8 3C01420A */  lui         $at, (0x420A0000 >> 16)
/* 0403AC 8003F7AC 44819000 */  mtc1        $at, $ft5
/* 0403B0 8003F7B0 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 0403B4 8003F7B4 44817000 */  mtc1        $at, $fa1
/* 0403B8 8003F7B8 0C001388 */  jal         Math_ModF
/* 0403BC 8003F7BC 46123301 */   sub.s      $fa0, $ft1, $ft5
/* 0403C0 8003F7C0 3C014198 */  lui         $at, (0x41980000 >> 16)
/* 0403C4 8003F7C4 44814000 */  mtc1        $at, $ft2
/* 0403C8 8003F7C8 C7AA0134 */  lwc1        $ft3, 0x134($sp)
/* 0403CC 8003F7CC 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 0403D0 8003F7D0 44817000 */  mtc1        $at, $fa1
/* 0403D4 8003F7D4 E7A00138 */  swc1        $fv0, 0x138($sp)
/* 0403D8 8003F7D8 0C001388 */  jal         Math_ModF
/* 0403DC 8003F7DC 46085300 */   add.s      $fa0, $ft3, $ft2
/* 0403E0 8003F7E0 10000022 */  b           .L8003F86C
/* 0403E4 8003F7E4 E7A00134 */   swc1       $fv0, 0x134($sp)
.L8003F7E8:
/* 0403E8 8003F7E8 24010011 */  addiu       $at, $zero, 0x11
/* 0403EC 8003F7EC 15210015 */  bne         $t1, $at, .L8003F844
/* 0403F0 8003F7F0 3C038018 */   lui        $v1, %hi(gPlayer)
/* 0403F4 8003F7F4 8C638280 */  lw          $v1, %lo(gPlayer)($v1)
/* 0403F8 8003F7F8 24010007 */  addiu       $at, $zero, 0x7
/* 0403FC 8003F7FC C7A40134 */  lwc1        $ft0, 0x134($sp)
/* 040400 8003F800 8C6F01C8 */  lw          $t7, 0x1C8($v1)
/* 040404 8003F804 55E10005 */  bnel        $t7, $at, .L8003F81C
/* 040408 8003F808 3C0143B4 */   lui        $at, (0x43B40000 >> 16)
/* 04040C 8003F80C 8C7901D0 */  lw          $t9, 0x1D0($v1)
/* 040410 8003F810 2B21000A */  slti        $at, $t9, 0xA
/* 040414 8003F814 10200015 */  beqz        $at, .L8003F86C
/* 040418 8003F818 3C0143B4 */   lui        $at, (0x43B40000 >> 16)
.L8003F81C:
/* 04041C 8003F81C 44813000 */  mtc1        $at, $ft1
/* 040420 8003F820 3C0142C8 */  lui         $at, (0x42C80000 >> 16)
/* 040424 8003F824 44815000 */  mtc1        $at, $ft3
/* 040428 8003F828 46062480 */  add.s       $ft5, $ft0, $ft1
/* 04042C 8003F82C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 040430 8003F830 44817000 */  mtc1        $at, $fa1
/* 040434 8003F834 0C001388 */  jal         Math_ModF
/* 040438 8003F838 460A9301 */   sub.s      $fa0, $ft5, $ft3
/* 04043C 8003F83C 1000000B */  b           .L8003F86C
/* 040440 8003F840 E7A00134 */   swc1       $fv0, 0x134($sp)
.L8003F844:
/* 040444 8003F844 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 040448 8003F848 44817000 */  mtc1        $at, $fa1
/* 04044C 8003F84C 0C001388 */  jal         Math_ModF
/* 040450 8003F850 C7AC0138 */   lwc1       $fa0, 0x138($sp)
/* 040454 8003F854 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 040458 8003F858 44817000 */  mtc1        $at, $fa1
/* 04045C 8003F85C C7AC0134 */  lwc1        $fa0, 0x134($sp)
/* 040460 8003F860 0C001388 */  jal         Math_ModF
/* 040464 8003F864 E7A00138 */   swc1       $fv0, 0x138($sp)
/* 040468 8003F868 E7A00134 */  swc1        $fv0, 0x134($sp)
.L8003F86C:
/* 04046C 8003F86C 3C014334 */  lui         $at, (0x43340000 >> 16)
/* 040470 8003F870 44810000 */  mtc1        $at, $fv0
/* 040474 8003F874 C7A8012C */  lwc1        $ft2, 0x12C($sp)
/* 040478 8003F878 3C0143BE */  lui         $at, (0x43BE0000 >> 16)
/* 04047C 8003F87C C7A60138 */  lwc1        $ft1, 0x138($sp)
/* 040480 8003F880 4600403C */  c.lt.s      $ft2, $fv0
/* 040484 8003F884 3C058018 */  lui         $a1, %hi(D_80178428)
/* 040488 8003F888 24060001 */  addiu       $a2, $zero, 0x1
/* 04048C 8003F88C 4502000D */  bc1fl       .L8003F8C4
/* 040490 8003F890 C7A40130 */   lwc1       $ft0, 0x130($sp)
/* 040494 8003F894 44812000 */  mtc1        $at, $ft0
/* 040498 8003F898 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 04049C 8003F89C 4606203C */  c.lt.s      $ft0, $ft1
/* 0404A0 8003F8A0 00000000 */  nop
/* 0404A4 8003F8A4 45020007 */  bc1fl       .L8003F8C4
/* 0404A8 8003F8A8 C7A40130 */   lwc1       $ft0, 0x130($sp)
/* 0404AC 8003F8AC 44819000 */  mtc1        $at, $ft5
/* 0404B0 8003F8B0 00000000 */  nop
/* 0404B4 8003F8B4 46069281 */  sub.s       $ft3, $ft5, $ft1
/* 0404B8 8003F8B8 46005207 */  neg.s       $ft2, $ft3
/* 0404BC 8003F8BC E7A80138 */  swc1        $ft2, 0x138($sp)
/* 0404C0 8003F8C0 C7A40130 */  lwc1        $ft0, 0x130($sp)
.L8003F8C4:
/* 0404C4 8003F8C4 3C01438C */  lui         $at, (0x438C0000 >> 16)
/* 0404C8 8003F8C8 C7A60134 */  lwc1        $ft1, 0x134($sp)
/* 0404CC 8003F8CC 4604003C */  c.lt.s      $fv0, $ft0
/* 0404D0 8003F8D0 00000000 */  nop
/* 0404D4 8003F8D4 4502000D */  bc1fl       .L8003F90C
/* 0404D8 8003F8D8 8E240000 */   lw         $a0, 0x0($s1)
/* 0404DC 8003F8DC 44819000 */  mtc1        $at, $ft5
/* 0404E0 8003F8E0 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 0404E4 8003F8E4 4606903C */  c.lt.s      $ft5, $ft1
/* 0404E8 8003F8E8 00000000 */  nop
/* 0404EC 8003F8EC 45020007 */  bc1fl       .L8003F90C
/* 0404F0 8003F8F0 8E240000 */   lw         $a0, 0x0($s1)
/* 0404F4 8003F8F4 44815000 */  mtc1        $at, $ft3
/* 0404F8 8003F8F8 00000000 */  nop
/* 0404FC 8003F8FC 46065201 */  sub.s       $ft2, $ft3, $ft1
/* 040500 8003F900 46004107 */  neg.s       $ft0, $ft2
/* 040504 8003F904 E7A40134 */  swc1        $ft0, 0x134($sp)
/* 040508 8003F908 8E240000 */  lw          $a0, 0x0($s1)
.L8003F90C:
/* 04050C 8003F90C 0C0017F8 */  jal         Matrix_RotateZ
/* 040510 8003F910 8CA58428 */   lw         $a1, %lo(D_80178428)($a1)
/* 040514 8003F914 8FAB011C */  lw          $t3, 0x11C($sp)
/* 040518 8003F918 8FAA011C */  lw          $t2, 0x11C($sp)
/* 04051C 8003F91C C7B00138 */  lwc1        $ft4, 0x138($sp)
/* 040520 8003F920 29610013 */  slti        $at, $t3, 0x13
/* 040524 8003F924 14200006 */  bnez        $at, .L8003F940
/* 040528 8003F928 254EFFFF */   addiu      $t6, $t2, -0x1
/* 04052C 8003F92C 2401004D */  addiu       $at, $zero, 0x4D
/* 040530 8003F930 1161000B */  beq         $t3, $at, .L8003F960
/* 040534 8003F934 00000000 */   nop
/* 040538 8003F938 1000024A */  b           .L80040264
/* 04053C 8003F93C 00000000 */   nop
.L8003F940:
/* 040540 8003F940 2DC10012 */  sltiu       $at, $t6, 0x12
/* 040544 8003F944 10200247 */  beqz        $at, .L80040264
/* 040548 8003F948 000E7080 */   sll        $t6, $t6, 2
/* 04054C 8003F94C 3C01800D */  lui         $at, %hi(jtbl_800D547C)
/* 040550 8003F950 002E0821 */  addu        $at, $at, $t6
/* 040554 8003F954 8C2E547C */  lw          $t6, %lo(jtbl_800D547C)($at)
/* 040558 8003F958 01C00008 */  jr          $t6
/* 04055C 8003F95C 00000000 */   nop
.L8003F960:
/* 040560 8003F960 3C018016 */  lui         $at, %hi(D_8015F960)
/* 040564 8003F964 C432F960 */  lwc1        $ft5, %lo(D_8015F960)($at)
/* 040568 8003F968 4600928D */  trunc.w.s   $ft3, $ft5
/* 04056C 8003F96C 44185000 */  mfc1        $t8, $ft3
/* 040570 8003F970 00000000 */  nop
/* 040574 8003F974 1300006D */  beqz        $t8, .L8003FB2C
/* 040578 8003F978 00000000 */   nop
/* 04057C 8003F97C 0C02E528 */  jal         RCP_SetupDL_62
/* 040580 8003F980 E7B00138 */   swc1       $ft4, 0x138($sp)
/* 040584 8003F984 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040588 8003F988 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 04058C 8003F98C C7B00138 */  lwc1        $ft4, 0x138($sp)
/* 040590 8003F990 8E030000 */  lw          $v1, 0x0($s0)
/* 040594 8003F994 3C09FA00 */  lui         $t1, (0xFA000000 >> 16)
/* 040598 8003F998 3C018016 */  lui         $at, %hi(D_8015F960)
/* 04059C 8003F99C 246D0008 */  addiu       $t5, $v1, 0x8
/* 0405A0 8003F9A0 AE0D0000 */  sw          $t5, 0x0($s0)
/* 0405A4 8003F9A4 AC690000 */  sw          $t1, 0x0($v1)
/* 0405A8 8003F9A8 C426F960 */  lwc1        $ft1, %lo(D_8015F960)($at)
/* 0405AC 8003F9AC 2401FF00 */  addiu       $at, $zero, -0x100
/* 0405B0 8003F9B0 4600320D */  trunc.w.s   $ft2, $ft1
/* 0405B4 8003F9B4 44194000 */  mfc1        $t9, $ft2
/* 0405B8 8003F9B8 00000000 */  nop
/* 0405BC 8003F9BC 332B00FF */  andi        $t3, $t9, 0xFF
/* 0405C0 8003F9C0 01615025 */  or          $t2, $t3, $at
/* 0405C4 8003F9C4 AC6A0004 */  sw          $t2, 0x4($v1)
/* 0405C8 8003F9C8 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 0405CC 8003F9CC 44813000 */  mtc1        $at, $ft1
/* 0405D0 8003F9D0 C7AA0134 */  lwc1        $ft3, 0x134($sp)
/* 0405D4 8003F9D4 44812000 */  mtc1        $at, $ft0
/* 0405D8 8003F9D8 240E0001 */  addiu       $t6, $zero, 0x1
/* 0405DC 8003F9DC 46065201 */  sub.s       $ft2, $ft3, $ft1
/* 0405E0 8003F9E0 AFAE0010 */  sw          $t6, 0x10($sp)
/* 0405E4 8003F9E4 8E240000 */  lw          $a0, 0x0($s1)
/* 0405E8 8003F9E8 46048481 */  sub.s       $ft5, $ft4, $ft0
/* 0405EC 8003F9EC 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 0405F0 8003F9F0 46004107 */  neg.s       $ft0, $ft2
/* 0405F4 8003F9F4 44059000 */  mfc1        $a1, $ft5
/* 0405F8 8003F9F8 44062000 */  mfc1        $a2, $ft0
/* 0405FC 8003F9FC 0C0016C0 */  jal         Matrix_Translate
/* 040600 8003FA00 00000000 */   nop
/* 040604 8003FA04 3C01800D */  lui         $at, %hi(D_800D54C4)
/* 040608 8003FA08 C42054C4 */  lwc1        $fv0, %lo(D_800D54C4)($at)
/* 04060C 8003FA0C 240C0001 */  addiu       $t4, $zero, 0x1
/* 040610 8003FA10 AFAC0010 */  sw          $t4, 0x10($sp)
/* 040614 8003FA14 44050000 */  mfc1        $a1, $fv0
/* 040618 8003FA18 44060000 */  mfc1        $a2, $fv0
/* 04061C 8003FA1C 8E240000 */  lw          $a0, 0x0($s1)
/* 040620 8003FA20 0C00170D */  jal         Matrix_Scale
/* 040624 8003FA24 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 040628 8003FA28 0C0015C2 */  jal         Matrix_Push
/* 04062C 8003FA2C 02202025 */   or         $a0, $s1, $zero
/* 040630 8003FA30 3C188017 */  lui         $t8, %hi(gFrameCount)
/* 040634 8003FA34 8F187DB0 */  lw          $t8, %lo(gFrameCount)($t8)
/* 040638 8003FA38 3C014120 */  lui         $at, (0x41200000 >> 16)
/* 04063C 8003FA3C 44814000 */  mtc1        $at, $ft2
/* 040640 8003FA40 44989000 */  mtc1        $t8, $ft5
/* 040644 8003FA44 3C01800D */  lui         $at, %hi(D_800D54C8)
/* 040648 8003FA48 8E240000 */  lw          $a0, 0x0($s1)
/* 04064C 8003FA4C 468092A0 */  cvt.s.w     $ft3, $ft5
/* 040650 8003FA50 C43254C8 */  lwc1        $ft5, %lo(D_800D54C8)($at)
/* 040654 8003FA54 24060001 */  addiu       $a2, $zero, 0x1
/* 040658 8003FA58 46005187 */  neg.s       $ft1, $ft3
/* 04065C 8003FA5C 46083102 */  mul.s       $ft0, $ft1, $ft2
/* 040660 8003FA60 00000000 */  nop
/* 040664 8003FA64 46122282 */  mul.s       $ft3, $ft0, $ft5
/* 040668 8003FA68 44055000 */  mfc1        $a1, $ft3
/* 04066C 8003FA6C 0C0017F8 */  jal         Matrix_RotateZ
/* 040670 8003FA70 00000000 */   nop
/* 040674 8003FA74 3C053F88 */  lui         $a1, (0x3F88F5C3 >> 16)
/* 040678 8003FA78 3C063F6E */  lui         $a2, (0x3F6E147B >> 16)
/* 04067C 8003FA7C 240D0001 */  addiu       $t5, $zero, 0x1
/* 040680 8003FA80 AFAD0010 */  sw          $t5, 0x10($sp)
/* 040684 8003FA84 34C6147B */  ori         $a2, $a2, (0x3F6E147B & 0xFFFF)
/* 040688 8003FA88 34A5F5C3 */  ori         $a1, $a1, (0x3F88F5C3 & 0xFFFF)
/* 04068C 8003FA8C 8E240000 */  lw          $a0, 0x0($s1)
/* 040690 8003FA90 0C00170D */  jal         Matrix_Scale
/* 040694 8003FA94 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 040698 8003FA98 3C098017 */  lui         $t1, %hi(gFrameCount)
/* 04069C 8003FA9C 8D297DB0 */  lw          $t1, %lo(gFrameCount)($t1)
/* 0406A0 8003FAA0 3C014120 */  lui         $at, (0x41200000 >> 16)
/* 0406A4 8003FAA4 44812000 */  mtc1        $at, $ft0
/* 0406A8 8003FAA8 44893000 */  mtc1        $t1, $ft1
/* 0406AC 8003FAAC 3C01800D */  lui         $at, %hi(D_800D54CC)
/* 0406B0 8003FAB0 C42A54CC */  lwc1        $ft3, %lo(D_800D54CC)($at)
/* 0406B4 8003FAB4 46803220 */  cvt.s.w     $ft2, $ft1
/* 0406B8 8003FAB8 8E240000 */  lw          $a0, 0x0($s1)
/* 0406BC 8003FABC 24060001 */  addiu       $a2, $zero, 0x1
/* 0406C0 8003FAC0 46044482 */  mul.s       $ft5, $ft2, $ft0
/* 0406C4 8003FAC4 00000000 */  nop
/* 0406C8 8003FAC8 460A9182 */  mul.s       $ft1, $ft5, $ft3
/* 0406CC 8003FACC 44053000 */  mfc1        $a1, $ft1
/* 0406D0 8003FAD0 0C0017F8 */  jal         Matrix_RotateZ
/* 0406D4 8003FAD4 00000000 */   nop
/* 0406D8 8003FAD8 3C053F88 */  lui         $a1, (0x3F88F5C3 >> 16)
/* 0406DC 8003FADC 3C063F6E */  lui         $a2, (0x3F6E147B >> 16)
/* 0406E0 8003FAE0 240F0001 */  addiu       $t7, $zero, 0x1
/* 0406E4 8003FAE4 AFAF0010 */  sw          $t7, 0x10($sp)
/* 0406E8 8003FAE8 34C6147B */  ori         $a2, $a2, (0x3F6E147B & 0xFFFF)
/* 0406EC 8003FAEC 34A5F5C3 */  ori         $a1, $a1, (0x3F88F5C3 & 0xFFFF)
/* 0406F0 8003FAF0 8E240000 */  lw          $a0, 0x0($s1)
/* 0406F4 8003FAF4 0C00170D */  jal         Matrix_Scale
/* 0406F8 8003FAF8 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 0406FC 8003FAFC 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040700 8003FB00 02002025 */   or         $a0, $s0, $zero
/* 040704 8003FB04 8E030000 */  lw          $v1, 0x0($s0)
/* 040708 8003FB08 3C0A0700 */  lui         $t2, %hi(D_7001540)
/* 04070C 8003FB0C 254A1540 */  addiu       $t2, $t2, %lo(D_7001540)
/* 040710 8003FB10 24790008 */  addiu       $t9, $v1, 0x8
/* 040714 8003FB14 AE190000 */  sw          $t9, 0x0($s0)
/* 040718 8003FB18 3C0B0600 */  lui         $t3, (0x6000000 >> 16)
/* 04071C 8003FB1C AC6B0000 */  sw          $t3, 0x0($v1)
/* 040720 8003FB20 AC6A0004 */  sw          $t2, 0x4($v1)
/* 040724 8003FB24 0C0015D0 */  jal         Matrix_Pop
/* 040728 8003FB28 02202025 */   or         $a0, $s1, $zero
.L8003FB2C:
/* 04072C 8003FB2C 100001CD */  b           .L80040264
/* 040730 8003FB30 00000000 */   nop
.L8003FB34:
/* 040734 8003FB34 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* 040738 8003FB38 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* 04073C 8003FB3C 24010007 */  addiu       $at, $zero, 0x7
/* 040740 8003FB40 8DCC01C8 */  lw          $t4, 0x1C8($t6)
/* 040744 8003FB44 1581002D */  bne         $t4, $at, .L8003FBFC
/* 040748 8003FB48 3C188017 */   lui        $t8, %hi(D_80177A80)
/* 04074C 8003FB4C 8F187A80 */  lw          $t8, %lo(D_80177A80)($t8)
/* 040750 8003FB50 2B010105 */  slti        $at, $t8, 0x105
/* 040754 8003FB54 14200029 */  bnez        $at, .L8003FBFC
/* 040758 8003FB58 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 04075C 8003FB5C 44814000 */  mtc1        $at, $ft2
/* 040760 8003FB60 44815000 */  mtc1        $at, $ft3
/* 040764 8003FB64 C7B20134 */  lwc1        $ft5, 0x134($sp)
/* 040768 8003FB68 46088101 */  sub.s       $ft0, $ft4, $ft2
/* 04076C 8003FB6C 3C0141F0 */  lui         $at, (0x41F00000 >> 16)
/* 040770 8003FB70 240D0001 */  addiu       $t5, $zero, 0x1
/* 040774 8003FB74 460A9181 */  sub.s       $ft1, $ft5, $ft3
/* 040778 8003FB78 44052000 */  mfc1        $a1, $ft0
/* 04077C 8003FB7C 44812000 */  mtc1        $at, $ft0
/* 040780 8003FB80 AFAD0010 */  sw          $t5, 0x10($sp)
/* 040784 8003FB84 46003207 */  neg.s       $ft2, $ft1
/* 040788 8003FB88 8E240000 */  lw          $a0, 0x0($s1)
/* 04078C 8003FB8C 46044481 */  sub.s       $ft5, $ft2, $ft0
/* 040790 8003FB90 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 040794 8003FB94 44069000 */  mfc1        $a2, $ft5
/* 040798 8003FB98 0C0016C0 */  jal         Matrix_Translate
/* 04079C 8003FB9C 00000000 */   nop
/* 0407A0 8003FBA0 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* 0407A4 8003FBA4 44811000 */  mtc1        $at, $fv1
/* 0407A8 8003FBA8 24090001 */  addiu       $t1, $zero, 0x1
/* 0407AC 8003FBAC AFA90010 */  sw          $t1, 0x10($sp)
/* 0407B0 8003FBB0 44051000 */  mfc1        $a1, $fv1
/* 0407B4 8003FBB4 44061000 */  mfc1        $a2, $fv1
/* 0407B8 8003FBB8 8E240000 */  lw          $a0, 0x0($s1)
/* 0407BC 8003FBBC 0C00170D */  jal         Matrix_Scale
/* 0407C0 8003FBC0 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 0407C4 8003FBC4 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 0407C8 8003FBC8 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 0407CC 8003FBCC 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0407D0 8003FBD0 02002025 */   or         $a0, $s0, $zero
/* 0407D4 8003FBD4 8E030000 */  lw          $v1, 0x0($s0)
/* 0407D8 8003FBD8 3C0B0601 */  lui         $t3, %hi(D_600DDF0)
/* 0407DC 8003FBDC 256BDDF0 */  addiu       $t3, $t3, %lo(D_600DDF0)
/* 0407E0 8003FBE0 246F0008 */  addiu       $t7, $v1, 0x8
/* 0407E4 8003FBE4 AE0F0000 */  sw          $t7, 0x0($s0)
/* 0407E8 8003FBE8 3C190600 */  lui         $t9, (0x6000000 >> 16)
/* 0407EC 8003FBEC AC790000 */  sw          $t9, 0x0($v1)
/* 0407F0 8003FBF0 AC6B0004 */  sw          $t3, 0x4($v1)
/* 0407F4 8003FBF4 1000019B */  b           .L80040264
/* 0407F8 8003FBF8 00000000 */   nop
.L8003FBFC:
/* 0407FC 8003FBFC 3C01800D */  lui         $at, %hi(D_800D54D0)
/* 040800 8003FC00 C42A54D0 */  lwc1        $ft3, %lo(D_800D54D0)($at)
/* 040804 8003FC04 3C018017 */  lui         $at, %hi(D_80177D20)
/* 040808 8003FC08 C4267D20 */  lwc1        $ft1, %lo(D_80177D20)($at)
/* 04080C 8003FC0C 4606503C */  c.lt.s      $ft3, $ft1
/* 040810 8003FC10 00000000 */  nop
/* 040814 8003FC14 45000027 */  bc1f        .L8003FCB4
/* 040818 8003FC18 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 04081C 8003FC1C 44814000 */  mtc1        $at, $ft2
/* 040820 8003FC20 44815000 */  mtc1        $at, $ft3
/* 040824 8003FC24 C7B20134 */  lwc1        $ft5, 0x134($sp)
/* 040828 8003FC28 46088101 */  sub.s       $ft0, $ft4, $ft2
/* 04082C 8003FC2C 3C014302 */  lui         $at, (0x43020000 >> 16)
/* 040830 8003FC30 240A0001 */  addiu       $t2, $zero, 0x1
/* 040834 8003FC34 460A9181 */  sub.s       $ft1, $ft5, $ft3
/* 040838 8003FC38 44052000 */  mfc1        $a1, $ft0
/* 04083C 8003FC3C 44812000 */  mtc1        $at, $ft0
/* 040840 8003FC40 AFAA0010 */  sw          $t2, 0x10($sp)
/* 040844 8003FC44 46003207 */  neg.s       $ft2, $ft1
/* 040848 8003FC48 8E240000 */  lw          $a0, 0x0($s1)
/* 04084C 8003FC4C 46044481 */  sub.s       $ft5, $ft2, $ft0
/* 040850 8003FC50 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 040854 8003FC54 44069000 */  mfc1        $a2, $ft5
/* 040858 8003FC58 0C0016C0 */  jal         Matrix_Translate
/* 04085C 8003FC5C 00000000 */   nop
/* 040860 8003FC60 3C01800D */  lui         $at, %hi(D_800D54D4)
/* 040864 8003FC64 C42054D4 */  lwc1        $fv0, %lo(D_800D54D4)($at)
/* 040868 8003FC68 240E0001 */  addiu       $t6, $zero, 0x1
/* 04086C 8003FC6C AFAE0010 */  sw          $t6, 0x10($sp)
/* 040870 8003FC70 44050000 */  mfc1        $a1, $fv0
/* 040874 8003FC74 44060000 */  mfc1        $a2, $fv0
/* 040878 8003FC78 8E240000 */  lw          $a0, 0x0($s1)
/* 04087C 8003FC7C 0C00170D */  jal         Matrix_Scale
/* 040880 8003FC80 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 040884 8003FC84 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040888 8003FC88 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 04088C 8003FC8C 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040890 8003FC90 02002025 */   or         $a0, $s0, $zero
/* 040894 8003FC94 8E030000 */  lw          $v1, 0x0($s0)
/* 040898 8003FC98 3C0D0601 */  lui         $t5, %hi(D_600DDF0)
/* 04089C 8003FC9C 25ADDDF0 */  addiu       $t5, $t5, %lo(D_600DDF0)
/* 0408A0 8003FCA0 246C0008 */  addiu       $t4, $v1, 0x8
/* 0408A4 8003FCA4 AE0C0000 */  sw          $t4, 0x0($s0)
/* 0408A8 8003FCA8 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* 0408AC 8003FCAC AC780000 */  sw          $t8, 0x0($v1)
/* 0408B0 8003FCB0 AC6D0004 */  sw          $t5, 0x4($v1)
.L8003FCB4:
/* 0408B4 8003FCB4 1000016B */  b           .L80040264
/* 0408B8 8003FCB8 00000000 */   nop
.L8003FCBC:
/* 0408BC 8003FCBC 3C098017 */  lui         $t1, %hi(gOverlayStage)
/* 0408C0 8003FCC0 8D297820 */  lw          $t1, %lo(gOverlayStage)($t1)
/* 0408C4 8003FCC4 1520002D */  bnez        $t1, .L8003FD7C
/* 0408C8 8003FCC8 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 0408CC 8003FCCC 44812000 */  mtc1        $at, $ft0
/* 0408D0 8003FCD0 C7A80134 */  lwc1        $ft2, 0x134($sp)
/* 0408D4 8003FCD4 44815000 */  mtc1        $at, $ft3
/* 0408D8 8003FCD8 240F0001 */  addiu       $t7, $zero, 0x1
/* 0408DC 8003FCDC 46044481 */  sub.s       $ft5, $ft2, $ft0
/* 0408E0 8003FCE0 AFAF0010 */  sw          $t7, 0x10($sp)
/* 0408E4 8003FCE4 8E240000 */  lw          $a0, 0x0($s1)
/* 0408E8 8003FCE8 460A8181 */  sub.s       $ft1, $ft4, $ft3
/* 0408EC 8003FCEC 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 0408F0 8003FCF0 46009287 */  neg.s       $ft3, $ft5
/* 0408F4 8003FCF4 44053000 */  mfc1        $a1, $ft1
/* 0408F8 8003FCF8 44065000 */  mfc1        $a2, $ft3
/* 0408FC 8003FCFC 0C0016C0 */  jal         Matrix_Translate
/* 040900 8003FD00 00000000 */   nop
/* 040904 8003FD04 3C014040 */  lui         $at, (0x40400000 >> 16)
/* 040908 8003FD08 44810000 */  mtc1        $at, $fv0
/* 04090C 8003FD0C 24190001 */  addiu       $t9, $zero, 0x1
/* 040910 8003FD10 AFB90010 */  sw          $t9, 0x10($sp)
/* 040914 8003FD14 44050000 */  mfc1        $a1, $fv0
/* 040918 8003FD18 44060000 */  mfc1        $a2, $fv0
/* 04091C 8003FD1C 8E240000 */  lw          $a0, 0x0($s1)
/* 040920 8003FD20 0C00170D */  jal         Matrix_Scale
/* 040924 8003FD24 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 040928 8003FD28 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 04092C 8003FD2C 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 040930 8003FD30 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040934 8003FD34 02002025 */   or         $a0, $s0, $zero
/* 040938 8003FD38 0C02E528 */  jal         RCP_SetupDL_62
/* 04093C 8003FD3C 00000000 */   nop
/* 040940 8003FD40 8E030000 */  lw          $v1, 0x0($s0)
/* 040944 8003FD44 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
/* 040948 8003FD48 240EFFC0 */  addiu       $t6, $zero, -0x40
/* 04094C 8003FD4C 246B0008 */  addiu       $t3, $v1, 0x8
/* 040950 8003FD50 AE0B0000 */  sw          $t3, 0x0($s0)
/* 040954 8003FD54 AC6E0004 */  sw          $t6, 0x4($v1)
/* 040958 8003FD58 AC6A0000 */  sw          $t2, 0x0($v1)
/* 04095C 8003FD5C 8E030000 */  lw          $v1, 0x0($s0)
/* 040960 8003FD60 3C0D0603 */  lui         $t5, %hi(D_6029890)
/* 040964 8003FD64 25AD9890 */  addiu       $t5, $t5, %lo(D_6029890)
/* 040968 8003FD68 246C0008 */  addiu       $t4, $v1, 0x8
/* 04096C 8003FD6C AE0C0000 */  sw          $t4, 0x0($s0)
/* 040970 8003FD70 3C180600 */  lui         $t8, (0x6000000 >> 16)
/* 040974 8003FD74 AC780000 */  sw          $t8, 0x0($v1)
/* 040978 8003FD78 AC6D0004 */  sw          $t5, 0x4($v1)
.L8003FD7C:
/* 04097C 8003FD7C 10000139 */  b           .L80040264
/* 040980 8003FD80 00000000 */   nop
.L8003FD84:
/* 040984 8003FD84 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 040988 8003FD88 44819000 */  mtc1        $at, $ft5
/* 04098C 8003FD8C C7A40134 */  lwc1        $ft0, 0x134($sp)
/* 040990 8003FD90 44813000 */  mtc1        $at, $ft1
/* 040994 8003FD94 24090001 */  addiu       $t1, $zero, 0x1
/* 040998 8003FD98 46122281 */  sub.s       $ft3, $ft0, $ft5
/* 04099C 8003FD9C AFA90010 */  sw          $t1, 0x10($sp)
/* 0409A0 8003FDA0 8E240000 */  lw          $a0, 0x0($s1)
/* 0409A4 8003FDA4 46068201 */  sub.s       $ft2, $ft4, $ft1
/* 0409A8 8003FDA8 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 0409AC 8003FDAC 46005187 */  neg.s       $ft1, $ft3
/* 0409B0 8003FDB0 44054000 */  mfc1        $a1, $ft2
/* 0409B4 8003FDB4 44063000 */  mfc1        $a2, $ft1
/* 0409B8 8003FDB8 0C0016C0 */  jal         Matrix_Translate
/* 0409BC 8003FDBC 00000000 */   nop
/* 0409C0 8003FDC0 3C01800D */  lui         $at, %hi(D_800D54D8)
/* 0409C4 8003FDC4 C42054D8 */  lwc1        $fv0, %lo(D_800D54D8)($at)
/* 0409C8 8003FDC8 240F0001 */  addiu       $t7, $zero, 0x1
/* 0409CC 8003FDCC AFAF0010 */  sw          $t7, 0x10($sp)
/* 0409D0 8003FDD0 44050000 */  mfc1        $a1, $fv0
/* 0409D4 8003FDD4 44060000 */  mfc1        $a2, $fv0
/* 0409D8 8003FDD8 8E240000 */  lw          $a0, 0x0($s1)
/* 0409DC 8003FDDC 0C00170D */  jal         Matrix_Scale
/* 0409E0 8003FDE0 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 0409E4 8003FDE4 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 0409E8 8003FDE8 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 0409EC 8003FDEC 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0409F0 8003FDF0 02002025 */   or         $a0, $s0, $zero
/* 0409F4 8003FDF4 0C02E528 */  jal         RCP_SetupDL_62
/* 0409F8 8003FDF8 00000000 */   nop
/* 0409FC 8003FDFC 8E030000 */  lw          $v1, 0x0($s0)
/* 040A00 8003FE00 3C0BFA00 */  lui         $t3, (0xFA000000 >> 16)
/* 040A04 8003FE04 240AFFFF */  addiu       $t2, $zero, -0x1
/* 040A08 8003FE08 24790008 */  addiu       $t9, $v1, 0x8
/* 040A0C 8003FE0C AE190000 */  sw          $t9, 0x0($s0)
/* 040A10 8003FE10 AC6A0004 */  sw          $t2, 0x4($v1)
/* 040A14 8003FE14 AC6B0000 */  sw          $t3, 0x0($v1)
/* 040A18 8003FE18 8E030000 */  lw          $v1, 0x0($s0)
/* 040A1C 8003FE1C 3C180600 */  lui         $t8, %hi(D_6003760)
/* 040A20 8003FE20 27183760 */  addiu       $t8, $t8, %lo(D_6003760)
/* 040A24 8003FE24 246E0008 */  addiu       $t6, $v1, 0x8
/* 040A28 8003FE28 AE0E0000 */  sw          $t6, 0x0($s0)
/* 040A2C 8003FE2C 3C0C0600 */  lui         $t4, (0x6000000 >> 16)
/* 040A30 8003FE30 AC6C0000 */  sw          $t4, 0x0($v1)
/* 040A34 8003FE34 AC780004 */  sw          $t8, 0x4($v1)
/* 040A38 8003FE38 1000010A */  b           .L80040264
/* 040A3C 8003FE3C 00000000 */   nop
.L8003FE40:
/* 040A40 8003FE40 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* 040A44 8003FE44 44811000 */  mtc1        $at, $fv1
/* 040A48 8003FE48 3C014060 */  lui         $at, (0x40600000 >> 16)
/* 040A4C 8003FE4C 44816000 */  mtc1        $at, $fa0
/* 040A50 8003FE50 3C018017 */  lui         $at, %hi(D_80177D20)
/* 040A54 8003FE54 C4287D20 */  lwc1        $ft2, %lo(D_80177D20)($at)
/* 040A58 8003FE58 3C01800D */  lui         $at, %hi(D_800D54DC)
/* 040A5C 8003FE5C C42454DC */  lwc1        $ft0, %lo(D_800D54DC)($at)
/* 040A60 8003FE60 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* 040A64 8003FE64 46044482 */  mul.s       $ft5, $ft2, $ft0
/* 040A68 8003FE68 C7A80134 */  lwc1        $ft2, 0x134($sp)
/* 040A6C 8003FE6C 46029000 */  add.s       $fv0, $ft5, $fv1
/* 040A70 8003FE70 4600603C */  c.lt.s      $fa0, $fv0
/* 040A74 8003FE74 00000000 */  nop
/* 040A78 8003FE78 45000002 */  bc1f        .L8003FE84
/* 040A7C 8003FE7C 00000000 */   nop
/* 040A80 8003FE80 46006006 */  mov.s       $fv0, $fa0
.L8003FE84:
/* 040A84 8003FE84 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* 040A88 8003FE88 24010007 */  addiu       $at, $zero, 0x7
/* 040A8C 8003FE8C 8DA901C8 */  lw          $t1, 0x1C8($t5)
/* 040A90 8003FE90 15210007 */  bne         $t1, $at, .L8003FEB0
/* 040A94 8003FE94 3C018016 */   lui        $at, %hi(D_8015F984)
/* 040A98 8003FE98 C420F984 */  lwc1        $fv0, %lo(D_8015F984)($at)
/* 040A9C 8003FE9C 4600603C */  c.lt.s      $fa0, $fv0
/* 040AA0 8003FEA0 00000000 */  nop
/* 040AA4 8003FEA4 45020003 */  bc1fl       .L8003FEB4
/* 040AA8 8003FEA8 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 040AAC 8003FEAC 46006006 */  mov.s       $fv0, $fa0
.L8003FEB0:
/* 040AB0 8003FEB0 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
.L8003FEB4:
/* 040AB4 8003FEB4 44812000 */  mtc1        $at, $ft0
/* 040AB8 8003FEB8 44815000 */  mtc1        $at, $ft3
/* 040ABC 8003FEBC 240F0001 */  addiu       $t7, $zero, 0x1
/* 040AC0 8003FEC0 46044481 */  sub.s       $ft5, $ft2, $ft0
/* 040AC4 8003FEC4 AFAF0010 */  sw          $t7, 0x10($sp)
/* 040AC8 8003FEC8 8E240000 */  lw          $a0, 0x0($s1)
/* 040ACC 8003FECC 460A8181 */  sub.s       $ft1, $ft4, $ft3
/* 040AD0 8003FED0 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 040AD4 8003FED4 E7A00128 */  swc1        $fv0, 0x128($sp)
/* 040AD8 8003FED8 46009287 */  neg.s       $ft3, $ft5
/* 040ADC 8003FEDC 44053000 */  mfc1        $a1, $ft1
/* 040AE0 8003FEE0 44065000 */  mfc1        $a2, $ft3
/* 040AE4 8003FEE4 0C0016C0 */  jal         Matrix_Translate
/* 040AE8 8003FEE8 00000000 */   nop
/* 040AEC 8003FEEC C7A00128 */  lwc1        $fv0, 0x128($sp)
/* 040AF0 8003FEF0 3C013FE8 */  lui         $at, (0x3FE80000 >> 16)
/* 040AF4 8003FEF4 44814800 */  mtc1        $at, $ft2f
/* 040AF8 8003FEF8 44804000 */  mtc1        $zero, $ft2
/* 040AFC 8003FEFC 460001A1 */  cvt.d.s     $ft1, $fv0
/* 040B00 8003FF00 3C013F40 */  lui         $at, (0x3F400000 >> 16)
/* 040B04 8003FF04 46283102 */  mul.d       $ft0, $ft1, $ft2
/* 040B08 8003FF08 44815000 */  mtc1        $at, $ft3
/* 040B0C 8003FF0C 24190001 */  addiu       $t9, $zero, 0x1
/* 040B10 8003FF10 AFB90010 */  sw          $t9, 0x10($sp)
/* 040B14 8003FF14 460A0182 */  mul.s       $ft1, $fv0, $ft3
/* 040B18 8003FF18 8E240000 */  lw          $a0, 0x0($s1)
/* 040B1C 8003FF1C 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* 040B20 8003FF20 462024A0 */  cvt.s.d     $ft5, $ft0
/* 040B24 8003FF24 44063000 */  mfc1        $a2, $ft1
/* 040B28 8003FF28 44059000 */  mfc1        $a1, $ft5
/* 040B2C 8003FF2C 0C00170D */  jal         Matrix_Scale
/* 040B30 8003FF30 00000000 */   nop
/* 040B34 8003FF34 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040B38 8003FF38 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 040B3C 8003FF3C 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040B40 8003FF40 02002025 */   or         $a0, $s0, $zero
/* 040B44 8003FF44 8E030000 */  lw          $v1, 0x0($s0)
/* 040B48 8003FF48 3C0E0602 */  lui         $t6, %hi(D_601BB40)
/* 040B4C 8003FF4C 25CEBB40 */  addiu       $t6, $t6, %lo(D_601BB40)
/* 040B50 8003FF50 246B0008 */  addiu       $t3, $v1, 0x8
/* 040B54 8003FF54 AE0B0000 */  sw          $t3, 0x0($s0)
/* 040B58 8003FF58 3C0A0600 */  lui         $t2, (0x6000000 >> 16)
/* 040B5C 8003FF5C AC6A0000 */  sw          $t2, 0x0($v1)
/* 040B60 8003FF60 AC6E0004 */  sw          $t6, 0x4($v1)
/* 040B64 8003FF64 100000BF */  b           .L80040264
/* 040B68 8003FF68 00000000 */   nop
.L8003FF6C:
/* 040B6C 8003FF6C 3C0C8017 */  lui         $t4, %hi(D_80177A80)
/* 040B70 8003FF70 8D8C7A80 */  lw          $t4, %lo(D_80177A80)($t4)
/* 040B74 8003FF74 3C013FC0 */  lui         $at, (0x3FC00000 >> 16)
/* 040B78 8003FF78 44810000 */  mtc1        $at, $fv0
/* 040B7C 8003FF7C 29810191 */  slti        $at, $t4, 0x191
/* 040B80 8003FF80 14200008 */  bnez        $at, .L8003FFA4
/* 040B84 8003FF84 C7B20134 */   lwc1       $ft5, 0x134($sp)
/* 040B88 8003FF88 3C188017 */  lui         $t8, %hi(D_80177930)
/* 040B8C 8003FF8C 93187930 */  lbu         $t8, %lo(D_80177930)($t8)
/* 040B90 8003FF90 3C013F40 */  lui         $at, (0x3F400000 >> 16)
/* 040B94 8003FF94 57000004 */  bnel        $t8, $zero, .L8003FFA8
/* 040B98 8003FF98 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 040B9C 8003FF9C 44810000 */  mtc1        $at, $fv0
/* 040BA0 8003FFA0 00000000 */  nop
.L8003FFA4:
/* 040BA4 8003FFA4 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
.L8003FFA8:
/* 040BA8 8003FFA8 44815000 */  mtc1        $at, $ft3
/* 040BAC 8003FFAC 44814000 */  mtc1        $at, $ft2
/* 040BB0 8003FFB0 240D0001 */  addiu       $t5, $zero, 0x1
/* 040BB4 8003FFB4 460A9181 */  sub.s       $ft1, $ft5, $ft3
/* 040BB8 8003FFB8 AFAD0010 */  sw          $t5, 0x10($sp)
/* 040BBC 8003FFBC 8E240000 */  lw          $a0, 0x0($s1)
/* 040BC0 8003FFC0 46088101 */  sub.s       $ft0, $ft4, $ft2
/* 040BC4 8003FFC4 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 040BC8 8003FFC8 E7A00128 */  swc1        $fv0, 0x128($sp)
/* 040BCC 8003FFCC 46003207 */  neg.s       $ft2, $ft1
/* 040BD0 8003FFD0 44052000 */  mfc1        $a1, $ft0
/* 040BD4 8003FFD4 44064000 */  mfc1        $a2, $ft2
/* 040BD8 8003FFD8 0C0016C0 */  jal         Matrix_Translate
/* 040BDC 8003FFDC 00000000 */   nop
/* 040BE0 8003FFE0 C7A00128 */  lwc1        $fv0, 0x128($sp)
/* 040BE4 8003FFE4 24090001 */  addiu       $t1, $zero, 0x1
/* 040BE8 8003FFE8 AFA90010 */  sw          $t1, 0x10($sp)
/* 040BEC 8003FFEC 44050000 */  mfc1        $a1, $fv0
/* 040BF0 8003FFF0 44060000 */  mfc1        $a2, $fv0
/* 040BF4 8003FFF4 44070000 */  mfc1        $a3, $fv0
/* 040BF8 8003FFF8 0C00170D */  jal         Matrix_Scale
/* 040BFC 8003FFFC 8E240000 */   lw         $a0, 0x0($s1)
/* 040C00 80040000 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040C04 80040004 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 040C08 80040008 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040C0C 8004000C 02002025 */   or         $a0, $s0, $zero
/* 040C10 80040010 8E030000 */  lw          $v1, 0x0($s0)
/* 040C14 80040014 3C0B0601 */  lui         $t3, %hi(D_600B4B0)
/* 040C18 80040018 256BB4B0 */  addiu       $t3, $t3, %lo(D_600B4B0)
/* 040C1C 8004001C 246F0008 */  addiu       $t7, $v1, 0x8
/* 040C20 80040020 AE0F0000 */  sw          $t7, 0x0($s0)
/* 040C24 80040024 3C190600 */  lui         $t9, (0x6000000 >> 16)
/* 040C28 80040028 AC790000 */  sw          $t9, 0x0($v1)
/* 040C2C 8004002C AC6B0004 */  sw          $t3, 0x4($v1)
/* 040C30 80040030 1000008C */  b           .L80040264
/* 040C34 80040034 00000000 */   nop
.L80040038:
/* 040C38 80040038 3C0A8017 */  lui         $t2, %hi(D_80177A80)
/* 040C3C 8004003C 8D4A7A80 */  lw          $t2, %lo(D_80177A80)($t2)
/* 040C40 80040040 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 040C44 80040044 44810000 */  mtc1        $at, $fv0
/* 040C48 80040048 294101F5 */  slti        $at, $t2, 0x1F5
/* 040C4C 8004004C 14200008 */  bnez        $at, .L80040070
/* 040C50 80040050 C7AA0134 */   lwc1       $ft3, 0x134($sp)
/* 040C54 80040054 3C0E8018 */  lui         $t6, %hi(gPlayer)
/* 040C58 80040058 8DCE8280 */  lw          $t6, %lo(gPlayer)($t6)
/* 040C5C 8004005C 24010007 */  addiu       $at, $zero, 0x7
/* 040C60 80040060 8DCC01C8 */  lw          $t4, 0x1C8($t6)
/* 040C64 80040064 15810002 */  bne         $t4, $at, .L80040070
/* 040C68 80040068 3C01800D */   lui        $at, %hi(D_800D54E0)
/* 040C6C 8004006C C42054E0 */  lwc1        $fv0, %lo(D_800D54E0)($at)
.L80040070:
/* 040C70 80040070 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 040C74 80040074 44813000 */  mtc1        $at, $ft1
/* 040C78 80040078 44812000 */  mtc1        $at, $ft0
/* 040C7C 8004007C 24180001 */  addiu       $t8, $zero, 0x1
/* 040C80 80040080 46065201 */  sub.s       $ft2, $ft3, $ft1
/* 040C84 80040084 AFB80010 */  sw          $t8, 0x10($sp)
/* 040C88 80040088 8E240000 */  lw          $a0, 0x0($s1)
/* 040C8C 8004008C 46048481 */  sub.s       $ft5, $ft4, $ft0
/* 040C90 80040090 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 040C94 80040094 E7A00128 */  swc1        $fv0, 0x128($sp)
/* 040C98 80040098 46004107 */  neg.s       $ft0, $ft2
/* 040C9C 8004009C 44059000 */  mfc1        $a1, $ft5
/* 040CA0 800400A0 44062000 */  mfc1        $a2, $ft0
/* 040CA4 800400A4 0C0016C0 */  jal         Matrix_Translate
/* 040CA8 800400A8 00000000 */   nop
/* 040CAC 800400AC C7A00128 */  lwc1        $fv0, 0x128($sp)
/* 040CB0 800400B0 240D0001 */  addiu       $t5, $zero, 0x1
/* 040CB4 800400B4 AFAD0010 */  sw          $t5, 0x10($sp)
/* 040CB8 800400B8 44050000 */  mfc1        $a1, $fv0
/* 040CBC 800400BC 44060000 */  mfc1        $a2, $fv0
/* 040CC0 800400C0 44070000 */  mfc1        $a3, $fv0
/* 040CC4 800400C4 0C00170D */  jal         Matrix_Scale
/* 040CC8 800400C8 8E240000 */   lw         $a0, 0x0($s1)
/* 040CCC 800400CC 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040CD0 800400D0 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 040CD4 800400D4 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040CD8 800400D8 02002025 */   or         $a0, $s0, $zero
/* 040CDC 800400DC 8E030000 */  lw          $v1, 0x0($s0)
/* 040CE0 800400E0 3C190601 */  lui         $t9, %hi(D_600D190)
/* 040CE4 800400E4 2739D190 */  addiu       $t9, $t9, %lo(D_600D190)
/* 040CE8 800400E8 24690008 */  addiu       $t1, $v1, 0x8
/* 040CEC 800400EC AE090000 */  sw          $t1, 0x0($s0)
/* 040CF0 800400F0 3C0F0600 */  lui         $t7, (0x6000000 >> 16)
/* 040CF4 800400F4 AC6F0000 */  sw          $t7, 0x0($v1)
/* 040CF8 800400F8 AC790004 */  sw          $t9, 0x4($v1)
/* 040CFC 800400FC 10000059 */  b           .L80040264
/* 040D00 80040100 00000000 */   nop
.L80040104:
/* 040D04 80040104 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 040D08 80040108 44814000 */  mtc1        $at, $ft2
/* 040D0C 8004010C C7A60134 */  lwc1        $ft1, 0x134($sp)
/* 040D10 80040110 44819000 */  mtc1        $at, $ft5
/* 040D14 80040114 240B0001 */  addiu       $t3, $zero, 0x1
/* 040D18 80040118 46083101 */  sub.s       $ft0, $ft1, $ft2
/* 040D1C 8004011C AFAB0010 */  sw          $t3, 0x10($sp)
/* 040D20 80040120 8E240000 */  lw          $a0, 0x0($s1)
/* 040D24 80040124 46128281 */  sub.s       $ft3, $ft4, $ft5
/* 040D28 80040128 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 040D2C 8004012C 46002487 */  neg.s       $ft5, $ft0
/* 040D30 80040130 44055000 */  mfc1        $a1, $ft3
/* 040D34 80040134 44069000 */  mfc1        $a2, $ft5
/* 040D38 80040138 0C0016C0 */  jal         Matrix_Translate
/* 040D3C 8004013C 00000000 */   nop
/* 040D40 80040140 3C013F00 */  lui         $at, (0x3F000000 >> 16)
/* 040D44 80040144 44811000 */  mtc1        $at, $fv1
/* 040D48 80040148 240A0001 */  addiu       $t2, $zero, 0x1
/* 040D4C 8004014C AFAA0010 */  sw          $t2, 0x10($sp)
/* 040D50 80040150 44051000 */  mfc1        $a1, $fv1
/* 040D54 80040154 44061000 */  mfc1        $a2, $fv1
/* 040D58 80040158 44071000 */  mfc1        $a3, $fv1
/* 040D5C 8004015C 0C00170D */  jal         Matrix_Scale
/* 040D60 80040160 8E240000 */   lw         $a0, 0x0($s1)
/* 040D64 80040164 3C053FC9 */  lui         $a1, (0x3FC90FDB >> 16)
/* 040D68 80040168 34A50FDB */  ori         $a1, $a1, (0x3FC90FDB & 0xFFFF)
/* 040D6C 8004016C 8E240000 */  lw          $a0, 0x0($s1)
/* 040D70 80040170 0C001751 */  jal         Matrix_RotateX
/* 040D74 80040174 24060001 */   addiu      $a2, $zero, 0x1
/* 040D78 80040178 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040D7C 8004017C 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 040D80 80040180 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040D84 80040184 02002025 */   or         $a0, $s0, $zero
/* 040D88 80040188 8E030000 */  lw          $v1, 0x0($s0)
/* 040D8C 8004018C 3C180600 */  lui         $t8, %hi(D_6002F80)
/* 040D90 80040190 27182F80 */  addiu       $t8, $t8, %lo(D_6002F80)
/* 040D94 80040194 246E0008 */  addiu       $t6, $v1, 0x8
/* 040D98 80040198 AE0E0000 */  sw          $t6, 0x0($s0)
/* 040D9C 8004019C 3C0C0600 */  lui         $t4, (0x6000000 >> 16)
/* 040DA0 800401A0 AC6C0000 */  sw          $t4, 0x0($v1)
/* 040DA4 800401A4 AC780004 */  sw          $t8, 0x4($v1)
/* 040DA8 800401A8 1000002E */  b           .L80040264
/* 040DAC 800401AC 00000000 */   nop
.L800401B0:
/* 040DB0 800401B0 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 040DB4 800401B4 44812000 */  mtc1        $at, $ft0
/* 040DB8 800401B8 C7A80134 */  lwc1        $ft2, 0x134($sp)
/* 040DBC 800401BC 44815000 */  mtc1        $at, $ft3
/* 040DC0 800401C0 240D0001 */  addiu       $t5, $zero, 0x1
/* 040DC4 800401C4 46044481 */  sub.s       $ft5, $ft2, $ft0
/* 040DC8 800401C8 AFAD0010 */  sw          $t5, 0x10($sp)
/* 040DCC 800401CC 8E240000 */  lw          $a0, 0x0($s1)
/* 040DD0 800401D0 460A8181 */  sub.s       $ft1, $ft4, $ft3
/* 040DD4 800401D4 3C07C391 */  lui         $a3, (0xC3910000 >> 16)
/* 040DD8 800401D8 46009287 */  neg.s       $ft3, $ft5
/* 040DDC 800401DC 44053000 */  mfc1        $a1, $ft1
/* 040DE0 800401E0 44065000 */  mfc1        $a2, $ft3
/* 040DE4 800401E4 0C0016C0 */  jal         Matrix_Translate
/* 040DE8 800401E8 00000000 */   nop
/* 040DEC 800401EC 3C01800D */  lui         $at, %hi(D_800D54E4)
/* 040DF0 800401F0 C42054E4 */  lwc1        $fv0, %lo(D_800D54E4)($at)
/* 040DF4 800401F4 24090001 */  addiu       $t1, $zero, 0x1
/* 040DF8 800401F8 AFA90010 */  sw          $t1, 0x10($sp)
/* 040DFC 800401FC 44050000 */  mfc1        $a1, $fv0
/* 040E00 80040200 44060000 */  mfc1        $a2, $fv0
/* 040E04 80040204 8E240000 */  lw          $a0, 0x0($s1)
/* 040E08 80040208 0C00170D */  jal         Matrix_Scale
/* 040E0C 8004020C 3C073F80 */   lui        $a3, (0x3F800000 >> 16)
/* 040E10 80040210 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040E14 80040214 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 040E18 80040218 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040E1C 8004021C 02002025 */   or         $a0, $s0, $zero
/* 040E20 80040220 0C02E528 */  jal         RCP_SetupDL_62
/* 040E24 80040224 00000000 */   nop
/* 040E28 80040228 8E030000 */  lw          $v1, 0x0($s0)
/* 040E2C 8004022C 3C19FA00 */  lui         $t9, (0xFA000000 >> 16)
/* 040E30 80040230 240BFFC0 */  addiu       $t3, $zero, -0x40
/* 040E34 80040234 246F0008 */  addiu       $t7, $v1, 0x8
/* 040E38 80040238 AE0F0000 */  sw          $t7, 0x0($s0)
/* 040E3C 8004023C AC6B0004 */  sw          $t3, 0x4($v1)
/* 040E40 80040240 AC790000 */  sw          $t9, 0x0($v1)
/* 040E44 80040244 8E030000 */  lw          $v1, 0x0($s0)
/* 040E48 80040248 3C0C0600 */  lui         $t4, %hi(D_6001840)
/* 040E4C 8004024C 258C1840 */  addiu       $t4, $t4, %lo(D_6001840)
/* 040E50 80040250 246A0008 */  addiu       $t2, $v1, 0x8
/* 040E54 80040254 AE0A0000 */  sw          $t2, 0x0($s0)
/* 040E58 80040258 3C0E0600 */  lui         $t6, (0x6000000 >> 16)
/* 040E5C 8004025C AC6E0000 */  sw          $t6, 0x0($v1)
/* 040E60 80040260 AC6C0004 */  sw          $t4, 0x4($v1)
.L80040264:
/* 040E64 80040264 0C0015D0 */  jal         Matrix_Pop
/* 040E68 80040268 02202025 */   or         $a0, $s1, $zero
.L8004026C:
/* 040E6C 8004026C 3C018018 */  lui         $at, %hi(D_80178414)
/* 040E70 80040270 C4288414 */  lwc1        $ft2, %lo(D_80178414)($at)
/* 040E74 80040274 44803000 */  mtc1        $zero, $ft1
/* 040E78 80040278 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 040E7C 8004027C 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 040E80 80040280 4608303C */  c.lt.s      $ft1, $ft2
/* 040E84 80040284 3C188018 */  lui         $t8, %hi(D_80178288)
/* 040E88 80040288 3C0D8018 */  lui         $t5, %hi(D_80178290)
/* 040E8C 8004028C 45000069 */  bc1f        .L80040434
/* 040E90 80040290 00000000 */   nop
/* 040E94 80040294 8F188288 */  lw          $t8, %lo(D_80178288)($t8)
/* 040E98 80040298 8DAD8290 */  lw          $t5, %lo(D_80178290)($t5)
/* 040E9C 8004029C AFB80050 */  sw          $t8, 0x50($sp)
/* 040EA0 800402A0 0C02E4BE */  jal         RCP_SetupDL_14
/* 040EA4 800402A4 AFAD004C */   sw         $t5, 0x4C($sp)
/* 040EA8 800402A8 8E030000 */  lw          $v1, 0x0($s0)
/* 040EAC 800402AC 3C198080 */  lui         $t9, (0x8080FFFF >> 16)
/* 040EB0 800402B0 3739FFFF */  ori         $t9, $t9, (0x8080FFFF & 0xFFFF)
/* 040EB4 800402B4 24690008 */  addiu       $t1, $v1, 0x8
/* 040EB8 800402B8 AE090000 */  sw          $t1, 0x0($s0)
/* 040EBC 800402BC 3C0FFA00 */  lui         $t7, (0xFA000000 >> 16)
/* 040EC0 800402C0 AC6F0000 */  sw          $t7, 0x0($v1)
/* 040EC4 800402C4 AC790004 */  sw          $t9, 0x4($v1)
/* 040EC8 800402C8 44802000 */  mtc1        $zero, $ft0
/* 040ECC 800402CC 3C0B800D */  lui         $t3, %hi(D_800CFD80)
/* 040ED0 800402D0 256BFD80 */  addiu       $t3, $t3, %lo(D_800CFD80)
/* 040ED4 800402D4 AFAB0034 */  sw          $t3, 0x34($sp)
/* 040ED8 800402D8 AFA00124 */  sw          $zero, 0x124($sp)
/* 040EDC 800402DC E7A40048 */  swc1        $ft0, 0x48($sp)
.L800402E0:
/* 040EE0 800402E0 0C0013FA */  jal         Rand_ZeroOneSeeded
/* 040EE4 800402E4 00000000 */   nop
/* 040EE8 800402E8 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 040EEC 800402EC 44819000 */  mtc1        $at, $ft5
/* 040EF0 800402F0 3C0142A0 */  lui         $at, (0x42A00000 >> 16)
/* 040EF4 800402F4 44813000 */  mtc1        $at, $ft1
/* 040EF8 800402F8 46120282 */  mul.s       $ft3, $fv0, $ft5
/* 040EFC 800402FC 8FAA0050 */  lw          $t2, 0x50($sp)
/* 040F00 80040300 46065201 */  sub.s       $ft2, $ft3, $ft1
/* 040F04 80040304 0C0013FA */  jal         Rand_ZeroOneSeeded
/* 040F08 80040308 E5480000 */   swc1       $ft2, 0x0($t2)
/* 040F0C 8004030C 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 040F10 80040310 44812000 */  mtc1        $at, $ft0
/* 040F14 80040314 3C014270 */  lui         $at, (0x42700000 >> 16)
/* 040F18 80040318 44815000 */  mtc1        $at, $ft3
/* 040F1C 8004031C 46040482 */  mul.s       $ft5, $fv0, $ft0
/* 040F20 80040320 8FAE004C */  lw          $t6, 0x4C($sp)
/* 040F24 80040324 02202025 */  or          $a0, $s1, $zero
/* 040F28 80040328 460A9181 */  sub.s       $ft1, $ft5, $ft3
/* 040F2C 8004032C 0C0015C2 */  jal         Matrix_Push
/* 040F30 80040330 E5C60000 */   swc1       $ft1, 0x0($t6)
/* 040F34 80040334 8FAC0050 */  lw          $t4, 0x50($sp)
/* 040F38 80040338 3C014120 */  lui         $at, (0x41200000 >> 16)
/* 040F3C 8004033C 44810000 */  mtc1        $at, $fv0
/* 040F40 80040340 3C014320 */  lui         $at, (0x43200000 >> 16)
/* 040F44 80040344 44812000 */  mtc1        $at, $ft0
/* 040F48 80040348 C5880000 */  lwc1        $ft2, 0x0($t4)
/* 040F4C 8004034C 8FB8004C */  lw          $t8, 0x4C($sp)
/* 040F50 80040350 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
/* 040F54 80040354 46044481 */  sub.s       $ft5, $ft2, $ft0
/* 040F58 80040358 44814000 */  mtc1        $at, $ft2
/* 040F5C 8004035C C7060000 */  lwc1        $ft1, 0x0($t8)
/* 040F60 80040360 3C07C59C */  lui         $a3, (0xC59C4000 >> 16)
/* 040F64 80040364 46009282 */  mul.s       $ft3, $ft5, $fv0
/* 040F68 80040368 46083101 */  sub.s       $ft0, $ft1, $ft2
/* 040F6C 8004036C 240D0001 */  addiu       $t5, $zero, 0x1
/* 040F70 80040370 AFAD0010 */  sw          $t5, 0x10($sp)
/* 040F74 80040374 34E74000 */  ori         $a3, $a3, (0xC59C4000 & 0xFFFF)
/* 040F78 80040378 46002482 */  mul.s       $ft5, $ft0, $fv0
/* 040F7C 8004037C 8E240000 */  lw          $a0, 0x0($s1)
/* 040F80 80040380 44055000 */  mfc1        $a1, $ft3
/* 040F84 80040384 44069000 */  mfc1        $a2, $ft5
/* 040F88 80040388 0C0016C0 */  jal         Matrix_Translate
/* 040F8C 8004038C 00000000 */   nop
/* 040F90 80040390 8E240000 */  lw          $a0, 0x0($s1)
/* 040F94 80040394 8FA50048 */  lw          $a1, 0x48($sp)
/* 040F98 80040398 0C0017F8 */  jal         Matrix_RotateZ
/* 040F9C 8004039C 24060001 */   addiu      $a2, $zero, 0x1
/* 040FA0 800403A0 3C018018 */  lui         $at, %hi(D_80178414)
/* 040FA4 800403A4 C42A8414 */  lwc1        $ft3, %lo(D_80178414)($at)
/* 040FA8 800403A8 24090001 */  addiu       $t1, $zero, 0x1
/* 040FAC 800403AC AFA90010 */  sw          $t1, 0x10($sp)
/* 040FB0 800403B0 46005187 */  neg.s       $ft1, $ft3
/* 040FB4 800403B4 8E240000 */  lw          $a0, 0x0($s1)
/* 040FB8 800403B8 44073000 */  mfc1        $a3, $ft1
/* 040FBC 800403BC 3C054120 */  lui         $a1, (0x41200000 >> 16)
/* 040FC0 800403C0 0C00170D */  jal         Matrix_Scale
/* 040FC4 800403C4 3C063F80 */   lui        $a2, (0x3F800000 >> 16)
/* 040FC8 800403C8 0C001BAE */  jal         Matrix_SetGfxMtx
/* 040FCC 800403CC 02002025 */   or         $a0, $s0, $zero
/* 040FD0 800403D0 8E030000 */  lw          $v1, 0x0($s0)
/* 040FD4 800403D4 3C190600 */  lui         $t9, (0x6000000 >> 16)
/* 040FD8 800403D8 246F0008 */  addiu       $t7, $v1, 0x8
/* 040FDC 800403DC AE0F0000 */  sw          $t7, 0x0($s0)
/* 040FE0 800403E0 AC790000 */  sw          $t9, 0x0($v1)
/* 040FE4 800403E4 8FAB0034 */  lw          $t3, 0x34($sp)
/* 040FE8 800403E8 AC6B0004 */  sw          $t3, 0x4($v1)
/* 040FEC 800403EC 0C0015D0 */  jal         Matrix_Pop
/* 040FF0 800403F0 02202025 */   or         $a0, $s1, $zero
/* 040FF4 800403F4 3C01800D */  lui         $at, %hi(D_800D54E8)
/* 040FF8 800403F8 C42454E8 */  lwc1        $ft0, %lo(D_800D54E8)($at)
/* 040FFC 800403FC C7A80048 */  lwc1        $ft2, 0x48($sp)
/* 041000 80040400 8FAA0050 */  lw          $t2, 0x50($sp)
/* 041004 80040404 8FAC004C */  lw          $t4, 0x4C($sp)
/* 041008 80040408 8FA20124 */  lw          $v0, 0x124($sp)
/* 04100C 8004040C 46044480 */  add.s       $ft5, $ft2, $ft0
/* 041010 80040410 2401012C */  addiu       $at, $zero, 0x12C
/* 041014 80040414 254E0004 */  addiu       $t6, $t2, 0x4
/* 041018 80040418 25980004 */  addiu       $t8, $t4, 0x4
/* 04101C 8004041C 24420001 */  addiu       $v0, $v0, 0x1
/* 041020 80040420 AFA20124 */  sw          $v0, 0x124($sp)
/* 041024 80040424 AFB8004C */  sw          $t8, 0x4C($sp)
/* 041028 80040428 AFAE0050 */  sw          $t6, 0x50($sp)
/* 04102C 8004042C 1441FFAC */  bne         $v0, $at, .L800402E0
/* 041030 80040430 E7B20048 */   swc1       $ft5, 0x48($sp)
.L80040434:
/* 041034 80040434 0C0015D0 */  jal         Matrix_Pop
/* 041038 80040438 02202025 */   or         $a0, $s1, $zero
.L8004043C:
/* 04103C 8004043C 8FBF0024 */  lw          $ra, 0x24($sp)
/* 041040 80040440 8FB0001C */  lw          $s0, 0x1C($sp)
/* 041044 80040444 8FB10020 */  lw          $s1, 0x20($sp)
/* 041048 80040448 03E00008 */  jr          $ra
/* 04104C 8004044C 27BD0140 */   addiu      $sp, $sp, 0x140
.section .late_rodata
dlabel D_800D54EC
/* 0D60EC 800D54EC 404CCCCD */ .float 3.200000048

dlabel D_800D54F0
/* 0D60F0 800D54F0 3C75C28F */ .float 0.01499999966

dlabel D_800D54F4
/* 0D60F4 800D54F4 3C8EFA35 */ .float 0.01745329238


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_80040450
/* 041050 80040450 27BDFFB8 */  addiu       $sp, $sp, -0x48
/* 041054 80040454 AFBF003C */  sw          $ra, 0x3C($sp)
/* 041058 80040458 AFB60038 */  sw          $s6, 0x38($sp)
/* 04105C 8004045C AFB50034 */  sw          $s5, 0x34($sp)
/* 041060 80040460 AFB40030 */  sw          $s4, 0x30($sp)
/* 041064 80040464 AFB3002C */  sw          $s3, 0x2C($sp)
/* 041068 80040468 AFB20028 */  sw          $s2, 0x28($sp)
/* 04106C 8004046C AFB10024 */  sw          $s1, 0x24($sp)
/* 041070 80040470 AFB00020 */  sw          $s0, 0x20($sp)
/* 041074 80040474 3C038018 */  lui         $v1, %hi(gCurrentLevel)
/* 041078 80040478 8C638234 */  lw          $v1, %lo(gCurrentLevel)($v1)
/* 04107C 8004047C 3C078017 */  lui         $a3, %hi(gLevelType)
/* 041080 80040480 24010010 */  addiu       $at, $zero, 0x10
/* 041084 80040484 10610129 */  beq         $v1, $at, .L8004092C
/* 041088 80040488 90E77C98 */   lbu        $a3, %lo(gLevelType)($a3)
/* 04108C 8004048C 24010013 */  addiu       $at, $zero, 0x13
/* 041090 80040490 10610126 */  beq         $v1, $at, .L8004092C
/* 041094 80040494 24010009 */   addiu      $at, $zero, 0x9
/* 041098 80040498 10610124 */  beq         $v1, $at, .L8004092C
/* 04109C 8004049C 24080007 */   addiu      $t0, $zero, 0x7
/* 0410A0 800404A0 11030122 */  beq         $t0, $v1, .L8004092C
/* 0410A4 800404A4 2401000A */   addiu      $at, $zero, 0xA
/* 0410A8 800404A8 10610120 */  beq         $v1, $at, .L8004092C
/* 0410AC 800404AC 3C0E8017 */   lui        $t6, %hi(gVersusMode)
/* 0410B0 800404B0 8DCE78E8 */  lw          $t6, %lo(gVersusMode)($t6)
/* 0410B4 800404B4 3C168018 */  lui         $s6, %hi(D_80178380)
/* 0410B8 800404B8 26D68380 */  addiu       $s6, $s6, %lo(D_80178380)
/* 0410BC 800404BC 15C0011B */  bnez        $t6, .L8004092C
/* 0410C0 800404C0 3C058017 */   lui        $a1, %hi(gPlayerNum)
/* 0410C4 800404C4 8CA578A0 */  lw          $a1, %lo(gPlayerNum)($a1)
/* 0410C8 800404C8 3C0F800D */  lui         $t7, %hi(D_800C9E4C)
/* 0410CC 800404CC 25EF9E4C */  addiu       $t7, $t7, %lo(D_800C9E4C)
/* 0410D0 800404D0 00079080 */  sll         $s2, $a3, 2
/* 0410D4 800404D4 00053080 */  sll         $a2, $a1, 2
/* 0410D8 800404D8 02C61021 */  addu        $v0, $s6, $a2
/* 0410DC 800404DC 024F9821 */  addu        $s3, $s2, $t7
/* 0410E0 800404E0 8E790000 */  lw          $t9, 0x0($s3)
/* 0410E4 800404E4 8C580000 */  lw          $t8, 0x0($v0)
/* 0410E8 800404E8 2409000D */  addiu       $t1, $zero, 0xD
/* 0410EC 800404EC 3C148018 */  lui         $s4, %hi(gPlayer)
/* 0410F0 800404F0 03195023 */  subu        $t2, $t8, $t9
/* 0410F4 800404F4 2D41012D */  sltiu       $at, $t2, 0x12D
/* 0410F8 800404F8 14200002 */  bnez        $at, .L80040504
/* 0410FC 800404FC AC4A0000 */   sw         $t2, 0x0($v0)
/* 041100 80040500 AC400000 */  sw          $zero, 0x0($v0)
.L80040504:
/* 041104 80040504 15230005 */  bne         $t1, $v1, .L8004051C
/* 041108 80040508 26948280 */   addiu      $s4, $s4, %lo(gPlayer)
/* 04110C 8004050C 8E840000 */  lw          $a0, 0x0($s4)
/* 041110 80040510 24010002 */  addiu       $at, $zero, 0x2
/* 041114 80040514 8C8C01C8 */  lw          $t4, 0x1C8($a0)
/* 041118 80040518 11810018 */  beq         $t4, $at, .L8004057C
.L8004051C:
/* 04111C 8004051C 241504E0 */   addiu      $s5, $zero, 0x4E0
/* 041120 80040520 00B50019 */  multu       $a1, $s5
/* 041124 80040524 3C148018 */  lui         $s4, %hi(gPlayer)
/* 041128 80040528 26948280 */  addiu       $s4, $s4, %lo(gPlayer)
/* 04112C 8004052C 8E840000 */  lw          $a0, 0x0($s4)
/* 041130 80040530 24010005 */  addiu       $at, $zero, 0x5
/* 041134 80040534 3C0F8017 */  lui         $t7, %hi(gLevelMode)
/* 041138 80040538 00006812 */  mflo        $t5
/* 04113C 8004053C 008D7021 */  addu        $t6, $a0, $t5
/* 041140 80040540 8DC201C8 */  lw          $v0, 0x1C8($t6)
/* 041144 80040544 10410007 */  beq         $v0, $at, .L80040564
/* 041148 80040548 00000000 */   nop
/* 04114C 8004054C 8DEF7880 */  lw          $t7, %lo(gLevelMode)($t7)
/* 041150 80040550 24010001 */  addiu       $at, $zero, 0x1
/* 041154 80040554 11E10003 */  beq         $t7, $at, .L80040564
/* 041158 80040558 00000000 */   nop
/* 04115C 8004055C 5502008A */  bnel        $t0, $v0, .L80040788
/* 041160 80040560 0005C080 */   sll        $t8, $a1, 2
.L80040564:
/* 041164 80040564 14E00087 */  bnez        $a3, .L80040784
/* 041168 80040568 2401000C */   addiu      $at, $zero, 0xC
/* 04116C 8004056C 50610086 */  beql        $v1, $at, .L80040788
/* 041170 80040570 0005C080 */   sll        $t8, $a1, 2
/* 041174 80040574 51230084 */  beql        $t1, $v1, .L80040788
/* 041178 80040578 0005C080 */   sll        $t8, $a1, 2
.L8004057C:
/* 04117C 8004057C 241504E0 */  addiu       $s5, $zero, 0x4E0
/* 041180 80040580 00B50019 */  multu       $a1, $s5
/* 041184 80040584 3C018018 */  lui         $at, %hi(D_80178390)
/* 041188 80040588 24020080 */  addiu       $v0, $zero, 0x80
/* 04118C 8004058C 00260821 */  addu        $at, $at, $a2
/* 041190 80040590 AC228390 */  sw          $v0, %lo(D_80178390)($at)
/* 041194 80040594 3C018018 */  lui         $at, %hi(D_801783A0)
/* 041198 80040598 00260821 */  addu        $at, $at, $a2
/* 04119C 8004059C AC2283A0 */  sw          $v0, %lo(D_801783A0)($at)
/* 0411A0 800405A0 3C018018 */  lui         $at, %hi(D_801783B0)
/* 0411A4 800405A4 00260821 */  addu        $at, $at, $a2
/* 0411A8 800405A8 0000C012 */  mflo        $t8
/* 0411AC 800405AC AC2283B0 */  sw          $v0, %lo(D_801783B0)($at)
/* 0411B0 800405B0 0098C821 */  addu        $t9, $a0, $t8
/* 0411B4 800405B4 0C027DDA */  jal         Math_RadToDeg
/* 0411B8 800405B8 C72C0058 */   lwc1       $fa0, 0x58($t9)
/* 0411BC 800405BC 3C0B8017 */  lui         $t3, %hi(gPlayerNum)
/* 0411C0 800405C0 8D6B78A0 */  lw          $t3, %lo(gPlayerNum)($t3)
/* 0411C4 800405C4 8E8A0000 */  lw          $t2, 0x0($s4)
/* 0411C8 800405C8 01750019 */  multu       $t3, $s5
/* 0411CC 800405CC 00006012 */  mflo        $t4
/* 0411D0 800405D0 014C6821 */  addu        $t5, $t2, $t4
/* 0411D4 800405D4 C5AC005C */  lwc1        $fa0, 0x5C($t5)
/* 0411D8 800405D8 0C027DDA */  jal         Math_RadToDeg
/* 0411DC 800405DC E7A00044 */   swc1       $fv0, 0x44($sp)
/* 0411E0 800405E0 3C014334 */  lui         $at, (0x43340000 >> 16)
/* 0411E4 800405E4 44812000 */  mtc1        $at, $ft0
/* 0411E8 800405E8 C7A20044 */  lwc1        $fv1, 0x44($sp)
/* 0411EC 800405EC 46000306 */  mov.s       $fa0, $fv0
/* 0411F0 800405F0 4600203C */  c.lt.s      $ft0, $fv0
/* 0411F4 800405F4 3C0143B4 */  lui         $at, (0x43B40000 >> 16)
/* 0411F8 800405F8 45000004 */  bc1f        .L8004060C
/* 0411FC 800405FC 00000000 */   nop
/* 041200 80040600 44813000 */  mtc1        $at, $ft1
/* 041204 80040604 00000000 */  nop
/* 041208 80040608 46060301 */  sub.s       $fa0, $fv0, $ft1
.L8004060C:
/* 04120C 8004060C 3C01800D */  lui         $at, %hi(D_800D54EC)
/* 041210 80040610 C42054EC */  lwc1        $fv0, %lo(D_800D54EC)($at)
/* 041214 80040614 3C014307 */  lui         $at, (0x43070000 >> 16)
/* 041218 80040618 44814000 */  mtc1        $at, $ft2
/* 04121C 8004061C 3C118018 */  lui         $s1, %hi(D_801783D0)
/* 041220 80040620 263183D0 */  addiu       $s1, $s1, %lo(D_801783D0)
/* 041224 80040624 46081081 */  sub.s       $fv1, $fv1, $ft2
/* 041228 80040628 3C058017 */  lui         $a1, %hi(gPlayerNum)
/* 04122C 8004062C 8E840000 */  lw          $a0, 0x0($s4)
/* 041230 80040630 46006487 */  neg.s       $ft5, $fa0
/* 041234 80040634 46001287 */  neg.s       $ft3, $fv1
/* 041238 80040638 3C014302 */  lui         $at, (0x43020000 >> 16)
/* 04123C 8004063C 46005402 */  mul.s       $ft4, $ft3, $fv0
/* 041240 80040640 44813000 */  mtc1        $at, $ft1
/* 041244 80040644 3C0143AF */  lui         $at, (0x43AF0000 >> 16)
/* 041248 80040648 46009102 */  mul.s       $ft0, $ft5, $fv0
/* 04124C 8004064C 3C108018 */  lui         $s0, %hi(D_801783D4)
/* 041250 80040650 261083D4 */  addiu       $s0, $s0, %lo(D_801783D4)
/* 041254 80040654 3C038018 */  lui         $v1, %hi(gCurrentLevel)
/* 041258 80040658 E6300000 */  swc1        $ft4, 0x0($s1)
/* 04125C 8004065C 8CA578A0 */  lw          $a1, %lo(gPlayerNum)($a1)
/* 041260 80040660 44818000 */  mtc1        $at, $ft4
/* 041264 80040664 46062200 */  add.s       $ft2, $ft0, $ft1
/* 041268 80040668 00B50019 */  multu       $a1, $s5
/* 04126C 8004066C 3C01800D */  lui         $at, %hi(D_800D54F0)
/* 041270 80040670 C42454F0 */  lwc1        $ft0, %lo(D_800D54F0)($at)
/* 041274 80040674 24010010 */  addiu       $at, $zero, 0x10
/* 041278 80040678 00007012 */  mflo        $t6
/* 04127C 8004067C 008E7821 */  addu        $t7, $a0, $t6
/* 041280 80040680 C5EA0044 */  lwc1        $ft3, 0x44($t7)
/* 041284 80040684 46105481 */  sub.s       $ft5, $ft3, $ft4
/* 041288 80040688 46049182 */  mul.s       $ft1, $ft5, $ft0
/* 04128C 8004068C 46064281 */  sub.s       $ft3, $ft2, $ft1
/* 041290 80040690 E60A0000 */  swc1        $ft3, 0x0($s0)
/* 041294 80040694 8C638234 */  lw          $v1, %lo(gCurrentLevel)($v1)
/* 041298 80040698 14610005 */  bne         $v1, $at, .L800406B0
/* 04129C 8004069C 3C0142A0 */   lui        $at, (0x42A00000 >> 16)
/* 0412A0 800406A0 44819000 */  mtc1        $at, $ft5
/* 0412A4 800406A4 C6100000 */  lwc1        $ft4, 0x0($s0)
/* 0412A8 800406A8 46128101 */  sub.s       $ft0, $ft4, $ft5
/* 0412AC 800406AC E6040000 */  swc1        $ft0, 0x0($s0)
.L800406B0:
/* 0412B0 800406B0 24010008 */  addiu       $at, $zero, 0x8
/* 0412B4 800406B4 54610014 */  bnel        $v1, $at, .L80040708
/* 0412B8 800406B8 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 0412BC 800406BC 8C9801D0 */  lw          $t8, 0x1D0($a0)
/* 0412C0 800406C0 3C198016 */  lui         $t9, %hi(D_80161684)
/* 0412C4 800406C4 2B010002 */  slti        $at, $t8, 0x2
/* 0412C8 800406C8 5420000F */  bnel        $at, $zero, .L80040708
/* 0412CC 800406CC 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 0412D0 800406D0 93391684 */  lbu         $t9, %lo(D_80161684)($t9)
/* 0412D4 800406D4 3C014270 */  lui         $at, (0x42700000 >> 16)
/* 0412D8 800406D8 5720000B */  bnel        $t9, $zero, .L80040708
/* 0412DC 800406DC 3C0142F0 */   lui        $at, (0x42F00000 >> 16)
/* 0412E0 800406E0 44813000 */  mtc1        $at, $ft1
/* 0412E4 800406E4 3C0143F0 */  lui         $at, (0x43F00000 >> 16)
/* 0412E8 800406E8 C6080000 */  lwc1        $ft2, 0x0($s0)
/* 0412EC 800406EC 44819000 */  mtc1        $at, $ft5
/* 0412F0 800406F0 C6300000 */  lwc1        $ft4, 0x0($s1)
/* 0412F4 800406F4 46064281 */  sub.s       $ft3, $ft2, $ft1
/* 0412F8 800406F8 46128101 */  sub.s       $ft0, $ft4, $ft5
/* 0412FC 800406FC E60A0000 */  swc1        $ft3, 0x0($s0)
/* 041300 80040700 E6240000 */  swc1        $ft0, 0x0($s1)
/* 041304 80040704 3C0142F0 */  lui         $at, (0x42F00000 >> 16)
.L80040708:
/* 041308 80040708 44811000 */  mtc1        $at, $fv1
/* 04130C 8004070C C6200000 */  lwc1        $fv0, 0x0($s1)
/* 041310 80040710 3C01C2F0 */  lui         $at, (0xC2F00000 >> 16)
/* 041314 80040714 4602003C */  c.lt.s      $fv0, $fv1
/* 041318 80040718 00000000 */  nop
/* 04131C 8004071C 4502001A */  bc1fl       .L80040788
/* 041320 80040720 0005C080 */   sll        $t8, $a1, 2
/* 041324 80040724 44814000 */  mtc1        $at, $ft2
/* 041328 80040728 00000000 */  nop
/* 04132C 8004072C 4600403C */  c.lt.s      $ft2, $fv0
/* 041330 80040730 00000000 */  nop
/* 041334 80040734 45020014 */  bc1fl       .L80040788
/* 041338 80040738 0005C080 */   sll        $t8, $a1, 2
/* 04133C 8004073C C6060000 */  lwc1        $ft1, 0x0($s0)
/* 041340 80040740 00055880 */  sll         $t3, $a1, 2
/* 041344 80040744 02CB1021 */  addu        $v0, $s6, $t3
/* 041348 80040748 4602303C */  c.lt.s      $ft1, $fv1
/* 04134C 8004074C 3C03800D */  lui         $v1, %hi(D_800C9E54)
/* 041350 80040750 4502000D */  bc1fl       .L80040788
/* 041354 80040754 0005C080 */   sll        $t8, $a1, 2
/* 041358 80040758 8E6C0000 */  lw          $t4, 0x0($s3)
/* 04135C 8004075C 8C4A0000 */  lw          $t2, 0x0($v0)
/* 041360 80040760 00721821 */  addu        $v1, $v1, $s2
/* 041364 80040764 000C6840 */  sll         $t5, $t4, 1
/* 041368 80040768 014D7021 */  addu        $t6, $t2, $t5
/* 04136C 8004076C AC4E0000 */  sw          $t6, 0x0($v0)
/* 041370 80040770 8C639E54 */  lw          $v1, %lo(D_800C9E54)($v1)
/* 041374 80040774 006E082B */  sltu        $at, $v1, $t6
/* 041378 80040778 50200003 */  beql        $at, $zero, .L80040788
/* 04137C 8004077C 0005C080 */   sll        $t8, $a1, 2
/* 041380 80040780 AC430000 */  sw          $v1, 0x0($v0)
.L80040784:
/* 041384 80040784 0005C080 */  sll         $t8, $a1, 2
.L80040788:
/* 041388 80040788 02D8C821 */  addu        $t9, $s6, $t8
/* 04138C 8004078C 8F2B0000 */  lw          $t3, 0x0($t9)
/* 041390 80040790 3C108018 */  lui         $s0, %hi(D_801783D4)
/* 041394 80040794 3C118018 */  lui         $s1, %hi(D_801783D0)
/* 041398 80040798 263183D0 */  addiu       $s1, $s1, %lo(D_801783D0)
/* 04139C 8004079C 11600063 */  beqz        $t3, .L8004092C
/* 0413A0 800407A0 261083D4 */   addiu      $s0, $s0, %lo(D_801783D4)
/* 0413A4 800407A4 3C168014 */  lui         $s6, %hi(gGfxMatrix)
/* 0413A8 800407A8 26D6B3C0 */  addiu       $s6, $s6, %lo(gGfxMatrix)
/* 0413AC 800407AC 0C0015C2 */  jal         Matrix_Push
/* 0413B0 800407B0 02C02025 */   or         $a0, $s6, $zero
/* 0413B4 800407B4 3C0A8017 */  lui         $t2, %hi(gPlayerNum)
/* 0413B8 800407B8 8D4A78A0 */  lw          $t2, %lo(gPlayerNum)($t2)
/* 0413BC 800407BC 8E8C0000 */  lw          $t4, 0x0($s4)
/* 0413C0 800407C0 3C01800D */  lui         $at, %hi(D_800D54F4)
/* 0413C4 800407C4 01550019 */  multu       $t2, $s5
/* 0413C8 800407C8 C43054F4 */  lwc1        $ft4, %lo(D_800D54F4)($at)
/* 0413CC 800407CC 8EC40000 */  lw          $a0, 0x0($s6)
/* 0413D0 800407D0 24060001 */  addiu       $a2, $zero, 0x1
/* 0413D4 800407D4 00006812 */  mflo        $t5
/* 0413D8 800407D8 018D7021 */  addu        $t6, $t4, $t5
/* 0413DC 800407DC C5CA0034 */  lwc1        $ft3, 0x34($t6)
/* 0413E0 800407E0 46105482 */  mul.s       $ft5, $ft3, $ft4
/* 0413E4 800407E4 44059000 */  mfc1        $a1, $ft5
/* 0413E8 800407E8 0C0017F8 */  jal         Matrix_RotateZ
/* 0413EC 800407EC 00000000 */   nop
/* 0413F0 800407F0 240F0001 */  addiu       $t7, $zero, 0x1
/* 0413F4 800407F4 AFAF0010 */  sw          $t7, 0x10($sp)
/* 0413F8 800407F8 8EC40000 */  lw          $a0, 0x0($s6)
/* 0413FC 800407FC 8E250000 */  lw          $a1, 0x0($s1)
/* 041400 80040800 8E060000 */  lw          $a2, 0x0($s0)
/* 041404 80040804 0C0016C0 */  jal         Matrix_Translate
/* 041408 80040808 3C07C348 */   lui        $a3, (0xC3480000 >> 16)
/* 04140C 8004080C 0C02E528 */  jal         RCP_SetupDL_62
/* 041410 80040810 00000000 */   nop
/* 041414 80040814 3C188018 */  lui         $t8, %hi(gCurrentLevel)
/* 041418 80040818 8F188234 */  lw          $t8, %lo(gCurrentLevel)($t8)
/* 04141C 8004081C 3C11800D */  lui         $s1, %hi(D_800C9D94)
/* 041420 80040820 3C12800D */  lui         $s2, %hi(D_800C9DE4)
/* 041424 80040824 3C13800D */  lui         $s3, %hi(D_800C9C5C)
/* 041428 80040828 3C14800D */  lui         $s4, %hi(D_800C9D2C)
/* 04142C 8004082C 24010010 */  addiu       $at, $zero, 0x10
/* 041430 80040830 26319D94 */  addiu       $s1, $s1, %lo(D_800C9D94)
/* 041434 80040834 26529DE4 */  addiu       $s2, $s2, %lo(D_800C9DE4)
/* 041438 80040838 26739C5C */  addiu       $s3, $s3, %lo(D_800C9C5C)
/* 04143C 8004083C 17010009 */  bne         $t8, $at, .L80040864
/* 041440 80040840 26949D2C */   addiu      $s4, $s4, %lo(D_800C9D2C)
/* 041444 80040844 3C11800D */  lui         $s1, %hi(D_800C9DBC)
/* 041448 80040848 3C12800D */  lui         $s2, %hi(D_800C9E18)
/* 04144C 8004084C 3C13800D */  lui         $s3, %hi(D_800C9C90)
/* 041450 80040850 3C14800D */  lui         $s4, %hi(D_800C9D60)
/* 041454 80040854 26319DBC */  addiu       $s1, $s1, %lo(D_800C9DBC)
/* 041458 80040858 26529E18 */  addiu       $s2, $s2, %lo(D_800C9E18)
/* 04145C 8004085C 26739C90 */  addiu       $s3, $s3, %lo(D_800C9C90)
/* 041460 80040860 26949D60 */  addiu       $s4, $s4, %lo(D_800C9D60)
.L80040864:
/* 041464 80040864 3C108013 */  lui         $s0, %hi(gMasterDisp)
/* 041468 80040868 26107E64 */  addiu       $s0, $s0, %lo(gMasterDisp)
/* 04146C 8004086C 0000A825 */  or          $s5, $zero, $zero
.L80040870:
/* 041470 80040870 0C0015C2 */  jal         Matrix_Push
/* 041474 80040874 02C02025 */   or         $a0, $s6, $zero
/* 041478 80040878 C6800000 */  lwc1        $fv0, 0x0($s4)
/* 04147C 8004087C 24190001 */  addiu       $t9, $zero, 0x1
/* 041480 80040880 AFB90010 */  sw          $t9, 0x10($sp)
/* 041484 80040884 44050000 */  mfc1        $a1, $fv0
/* 041488 80040888 44060000 */  mfc1        $a2, $fv0
/* 04148C 8004088C 44070000 */  mfc1        $a3, $fv0
/* 041490 80040890 0C00170D */  jal         Matrix_Scale
/* 041494 80040894 8EC40000 */   lw         $a0, 0x0($s6)
/* 041498 80040898 0C001BAE */  jal         Matrix_SetGfxMtx
/* 04149C 8004089C 02002025 */   or         $a0, $s0, $zero
/* 0414A0 800408A0 8E020000 */  lw          $v0, 0x0($s0)
/* 0414A4 800408A4 3C0AFA00 */  lui         $t2, (0xFA000000 >> 16)
/* 0414A8 800408A8 244B0008 */  addiu       $t3, $v0, 0x8
/* 0414AC 800408AC AE0B0000 */  sw          $t3, 0x0($s0)
/* 0414B0 800408B0 AC4A0000 */  sw          $t2, 0x0($v0)
/* 0414B4 800408B4 922F0000 */  lbu         $t7, 0x0($s1)
/* 0414B8 800408B8 8E4C0000 */  lw          $t4, 0x0($s2)
/* 0414BC 800408BC 922A0001 */  lbu         $t2, 0x1($s1)
/* 0414C0 800408C0 000FC600 */  sll         $t8, $t7, 24
/* 0414C4 800408C4 318D00FF */  andi        $t5, $t4, 0xFF
/* 0414C8 800408C8 01B8C825 */  or          $t9, $t5, $t8
/* 0414CC 800408CC 922D0002 */  lbu         $t5, 0x2($s1)
/* 0414D0 800408D0 000A6400 */  sll         $t4, $t2, 16
/* 0414D4 800408D4 032C7025 */  or          $t6, $t9, $t4
/* 0414D8 800408D8 000DC200 */  sll         $t8, $t5, 8
/* 0414DC 800408DC 01D85825 */  or          $t3, $t6, $t8
/* 0414E0 800408E0 AC4B0004 */  sw          $t3, 0x4($v0)
/* 0414E4 800408E4 8E020000 */  lw          $v0, 0x0($s0)
/* 0414E8 800408E8 3C190600 */  lui         $t9, (0x6000000 >> 16)
/* 0414EC 800408EC 244A0008 */  addiu       $t2, $v0, 0x8
/* 0414F0 800408F0 AE0A0000 */  sw          $t2, 0x0($s0)
/* 0414F4 800408F4 AC590000 */  sw          $t9, 0x0($v0)
/* 0414F8 800408F8 8E6C0000 */  lw          $t4, 0x0($s3)
/* 0414FC 800408FC AC4C0004 */  sw          $t4, 0x4($v0)
/* 041500 80040900 0C0015D0 */  jal         Matrix_Pop
/* 041504 80040904 02C02025 */   or         $a0, $s6, $zero
/* 041508 80040908 26B50001 */  addiu       $s5, $s5, 0x1
/* 04150C 8004090C 24010005 */  addiu       $at, $zero, 0x5
/* 041510 80040910 26310003 */  addiu       $s1, $s1, 0x3
/* 041514 80040914 26520004 */  addiu       $s2, $s2, 0x4
/* 041518 80040918 26730004 */  addiu       $s3, $s3, 0x4
/* 04151C 8004091C 16A1FFD4 */  bne         $s5, $at, .L80040870
/* 041520 80040920 26940004 */   addiu      $s4, $s4, 0x4
/* 041524 80040924 0C0015D0 */  jal         Matrix_Pop
/* 041528 80040928 02C02025 */   or         $a0, $s6, $zero
.L8004092C:
/* 04152C 8004092C 8FBF003C */  lw          $ra, 0x3C($sp)
/* 041530 80040930 8FB00020 */  lw          $s0, 0x20($sp)
/* 041534 80040934 8FB10024 */  lw          $s1, 0x24($sp)
/* 041538 80040938 8FB20028 */  lw          $s2, 0x28($sp)
/* 04153C 8004093C 8FB3002C */  lw          $s3, 0x2C($sp)
/* 041540 80040940 8FB40030 */  lw          $s4, 0x30($sp)
/* 041544 80040944 8FB50034 */  lw          $s5, 0x34($sp)
/* 041548 80040948 8FB60038 */  lw          $s6, 0x38($sp)
/* 04154C 8004094C 03E00008 */  jr          $ra
/* 041550 80040950 27BD0048 */   addiu      $sp, $sp, 0x48
glabel func_80040CDC
/* 0418DC 80040CDC 03E00008 */  jr          $ra
/* 0418E0 80040CE0 00000000 */   nop
.section .late_rodata
dlabel D_800D5508
/* 0D6108 800D5508 C5ABE000 */ .float -5500

dlabel D_800D550C
/* 0D610C 800D550C 45BB8000 */ .float 6000

dlabel D_800D5510
/* 0D6110 800D5510 463B8000 */ .float 12000

dlabel D_800D5514
/* 0D6114 800D5514 468CA000 */ .float 18000

dlabel D_800D5518
/* 0D6118 800D5518 46BB8000 */ .float 24000

dlabel D_800D551C
/* 0D611C 800D551C C5BB8000 */ .float -6000

dlabel D_800D5520
/* 0D6120 800D5520 C63B8000 */ .float -12000

dlabel D_800D5524
/* 0D6124 800D5524 C68CA000 */ .float -18000

dlabel D_800D5528
/* 0D6128 800D5528 C6BB8000 */ .float -24000

dlabel D_800D552C
/* 0D612C 800D552C 463B8000 */ .float 12000

dlabel D_800D5530
/* 0D6130 800D5530 46BB8000 */ .float 24000

dlabel D_800D5534
/* 0D6134 800D5534 C63B8000 */ .float -12000

dlabel D_800D5538
/* 0D6138 800D5538 C68CA000 */ .float -18000

dlabel D_800D553C
/* 0D613C 800D553C C6BB8000 */ .float -24000

dlabel D_800D5540
/* 0D6140 800D5540 3F99999A */ .float 1.200000048

dlabel jtbl_800D5544
/* 0D6144 800D5544 800410D4 */ .word .L800410D4
/* 0D6148 800D5548 80042D0C */ .word .L80042D0C
/* 0D614C 800D554C 80042D0C */ .word .L80042D0C
/* 0D6150 800D5550 80042D0C */ .word .L80042D0C
/* 0D6154 800D5554 80042D0C */ .word .L80042D0C
/* 0D6158 800D5558 80042D0C */ .word .L80042D0C
/* 0D615C 800D555C 80041760 */ .word .L80041760
/* 0D6160 800D5560 80042B38 */ .word .L80042B38
/* 0D6164 800D5564 80042C24 */ .word .L80042C24
/* 0D6168 800D5568 80042D0C */ .word .L80042D0C
/* 0D616C 800D556C 80041C74 */ .word .L80041C74
/* 0D6170 800D5570 80041760 */ .word .L80041760
/* 0D6174 800D5574 80042D0C */ .word .L80042D0C
/* 0D6178 800D5578 80041EB8 */ .word .L80041EB8
/* 0D617C 800D557C 80042830 */ .word .L80042830
/* 0D6180 800D5580 80042D0C */ .word .L80042D0C
/* 0D6184 800D5584 80042830 */ .word .L80042830
/* 0D6188 800D5588 80042830 */ .word .L80042830
/* 0D618C 800D558C 80042D0C */ .word .L80042D0C
/* 0D6190 800D5590 80042830 */ .word .L80042830
/* 0D6194 800D5594 800429F0 */ .word .L800429F0

dlabel D_800D5598
/* 0D6198 800D5598 3E5A740B */ .float 0.2133332938

dlabel D_800D559C
/* 0D619C 800D559C 461C4000 */ .float 10000

dlabel D_800D55A0
/* 0D61A0 800D55A0 3EA3D70A */ .float 0.3199999928

dlabel D_800D55A4
/* 0D61A4 800D55A4 3E5A740B */ .float 0.2133332938

dlabel D_800D55A8
/* 0D61A8 800D55A8 461C4000 */ .float 10000

dlabel D_800D55AC
/* 0D61AC 800D55AC 3EA3D70A */ .float 0.3199999928

dlabel D_800D55B0
/* 0D61B0 800D55B0 C53B8000 */ .float -3000

dlabel D_800D55B4
/* 0D61B4 800D55B4 453B8000 */ .float 3000

dlabel D_800D55B8
/* 0D61B8 800D55B8 3E5A740B */ .float 0.2133332938

dlabel D_800D55BC
/* 0D61BC 800D55BC 461C4000 */ .float 10000

dlabel D_800D55C0
/* 0D61C0 800D55C0 3EA3D70A */ .float 0.3199999928

dlabel D_800D55C4
/* 0D61C4 800D55C4 3E5A740B */ .float 0.2133332938

dlabel D_800D55C8
/* 0D61C8 800D55C8 461C4000 */ .float 10000

dlabel D_800D55CC
/* 0D61CC 800D55CC 3EA3D70A */ .float 0.3199999928


.section .text
/* Generated by spimdisasm 1.19.1.dev0 */

glabel func_80040CE4
/* 0418E4 80040CE4 27BDFE28 */  addiu       $sp, $sp, -0x1D8
/* 0418E8 80040CE8 AFBF003C */  sw          $ra, 0x3C($sp)
/* 0418EC 80040CEC AFB40038 */  sw          $s4, 0x38($sp)
/* 0418F0 80040CF0 AFB30034 */  sw          $s3, 0x34($sp)
/* 0418F4 80040CF4 AFB20030 */  sw          $s2, 0x30($sp)
/* 0418F8 80040CF8 AFB1002C */  sw          $s1, 0x2C($sp)
/* 0418FC 80040CFC AFB00028 */  sw          $s0, 0x28($sp)
/* 041900 80040D00 F7B40020 */  sdc1        $fs0, 0x20($sp)
/* 041904 80040D04 3C028018 */  lui         $v0, %hi(gCurrentLevel)
/* 041908 80040D08 8C428234 */  lw          $v0, %lo(gCurrentLevel)($v0)
/* 04190C 80040D0C 24010013 */  addiu       $at, $zero, 0x13
/* 041910 80040D10 3C038018 */  lui         $v1, %hi(gPlayer)
/* 041914 80040D14 1041000C */  beq         $v0, $at, .L80040D48
/* 041918 80040D18 24638280 */   addiu      $v1, $v1, %lo(gPlayer)
/* 04191C 80040D1C 8C6E0000 */  lw          $t6, 0x0($v1)
/* 041920 80040D20 3C01457A */  lui         $at, (0x457A0000 >> 16)
/* 041924 80040D24 44812000 */  mtc1        $at, $ft0
/* 041928 80040D28 C5C60044 */  lwc1        $ft1, 0x44($t6)
/* 04192C 80040D2C 3C0F8017 */  lui         $t7, %hi(D_80177A98)
/* 041930 80040D30 4606203C */  c.lt.s      $ft0, $ft1
/* 041934 80040D34 00000000 */  nop
/* 041938 80040D38 450307F7 */  bc1tl       .L80042D18
/* 04193C 80040D3C 8FBF003C */   lw         $ra, 0x3C($sp)
/* 041940 80040D40 91EF7A98 */  lbu         $t7, %lo(D_80177A98)($t7)
/* 041944 80040D44 11E007F3 */  beqz        $t7, .L80042D14
.L80040D48:
/* 041948 80040D48 3C038018 */   lui        $v1, %hi(gPlayer)
/* 04194C 80040D4C 24010011 */  addiu       $at, $zero, 0x11
/* 041950 80040D50 14410009 */  bne         $v0, $at, .L80040D78
/* 041954 80040D54 24638280 */   addiu      $v1, $v1, %lo(gPlayer)
/* 041958 80040D58 3C18800D */  lui         $t8, %hi(D_800C9C34)
/* 04195C 80040D5C 97189C34 */  lhu         $t8, %lo(D_800C9C34)($t8)
/* 041960 80040D60 13000005 */  beqz        $t8, .L80040D78
/* 041964 80040D64 00000000 */   nop
/* 041968 80040D68 0C064899 */  jal         func_80192264
/* 04196C 80040D6C 00000000 */   nop
/* 041970 80040D70 100007E9 */  b           .L80042D18
/* 041974 80040D74 8FBF003C */   lw         $ra, 0x3C($sp)
.L80040D78:
/* 041978 80040D78 3C028018 */  lui         $v0, %hi(D_801784AC)
/* 04197C 80040D7C 8C4284AC */  lw          $v0, %lo(D_801784AC)($v0)
/* 041980 80040D80 4480A000 */  mtc1        $zero, $fs0
/* 041984 80040D84 2401000A */  addiu       $at, $zero, 0xA
/* 041988 80040D88 10410006 */  beq         $v0, $at, .L80040DA4
/* 04198C 80040D8C 4600A086 */   mov.s      $fv1, $fs0
/* 041990 80040D90 2401000B */  addiu       $at, $zero, 0xB
/* 041994 80040D94 10410003 */  beq         $v0, $at, .L80040DA4
/* 041998 80040D98 3C01C57A */   lui        $at, (0xC57A0000 >> 16)
/* 04199C 80040D9C 44811000 */  mtc1        $at, $fv1
/* 0419A0 80040DA0 00000000 */  nop
.L80040DA4:
/* 0419A4 80040DA4 24010007 */  addiu       $at, $zero, 0x7
/* 0419A8 80040DA8 1441000C */  bne         $v0, $at, .L80040DDC
/* 0419AC 80040DAC 3C118017 */   lui        $s1, %hi(gLevelMode)
/* 0419B0 80040DB0 3C0D8017 */  lui         $t5, %hi(gPlayerNum)
/* 0419B4 80040DB4 8DAD78A0 */  lw          $t5, %lo(gPlayerNum)($t5)
/* 0419B8 80040DB8 8C790000 */  lw          $t9, 0x0($v1)
/* 0419BC 80040DBC 4600A086 */  mov.s       $fv1, $fs0
/* 0419C0 80040DC0 000D7080 */  sll         $t6, $t5, 2
/* 0419C4 80040DC4 01CD7021 */  addu        $t6, $t6, $t5
/* 0419C8 80040DC8 000E70C0 */  sll         $t6, $t6, 3
/* 0419CC 80040DCC 01CD7023 */  subu        $t6, $t6, $t5
/* 0419D0 80040DD0 000E7140 */  sll         $t6, $t6, 5
/* 0419D4 80040DD4 032E7821 */  addu        $t7, $t9, $t6
/* 0419D8 80040DD8 E5F400AC */  swc1        $fs0, 0xAC($t7)
.L80040DDC:
/* 0419DC 80040DDC 26317880 */  addiu       $s1, $s1, %lo(gLevelMode)
/* 0419E0 80040DE0 8E380000 */  lw          $t8, 0x0($s1)
/* 0419E4 80040DE4 24010001 */  addiu       $at, $zero, 0x1
/* 0419E8 80040DE8 3C198017 */  lui         $t9, %hi(gPlayerNum)
/* 0419EC 80040DEC 17010082 */  bne         $t8, $at, .L80040FF8
/* 0419F0 80040DF0 00000000 */   nop
/* 0419F4 80040DF4 3C108014 */  lui         $s0, %hi(gCalcMatrix)
/* 0419F8 80040DF8 44800000 */  mtc1        $zero, $fv0
/* 0419FC 80040DFC 2610BBC8 */  addiu       $s0, $s0, %lo(gCalcMatrix)
/* 041A00 80040E00 8F3978A0 */  lw          $t9, %lo(gPlayerNum)($t9)
/* 041A04 80040E04 8C6D0000 */  lw          $t5, 0x0($v1)
/* 041A08 80040E08 3C01800D */  lui         $at, %hi(D_800D5508)
/* 041A0C 80040E0C 00197080 */  sll         $t6, $t9, 2
/* 041A10 80040E10 01D97021 */  addu        $t6, $t6, $t9
/* 041A14 80040E14 000E70C0 */  sll         $t6, $t6, 3
/* 041A18 80040E18 01D97023 */  subu        $t6, $t6, $t9
/* 041A1C 80040E1C 000E7140 */  sll         $t6, $t6, 5
/* 041A20 80040E20 01AE7821 */  addu        $t7, $t5, $t6
/* 041A24 80040E24 E5F400AC */  swc1        $fs0, 0xAC($t7)
/* 041A28 80040E28 3C198017 */  lui         $t9, %hi(gPlayerNum)
/* 041A2C 80040E2C 8F3978A0 */  lw          $t9, %lo(gPlayerNum)($t9)
/* 041A30 80040E30 C4285508 */  lwc1        $ft2, %lo(D_800D5508)($at)
/* 041A34 80040E34 8C780000 */  lw          $t8, 0x0($v1)
/* 041A38 80040E38 00196880 */  sll         $t5, $t9, 2
/* 041A3C 80040E3C 01B96821 */  addu        $t5, $t5, $t9
/* 041A40 80040E40 000D68C0 */  sll         $t5, $t5, 3
/* 041A44 80040E44 01B96823 */  subu        $t5, $t5, $t9
/* 041A48 80040E48 000D6940 */  sll         $t5, $t5, 5
/* 041A4C 80040E4C E7A001B4 */  swc1        $fv0, 0x1B4($sp)
/* 041A50 80040E50 E7A001B8 */  swc1        $fv0, 0x1B8($sp)
/* 041A54 80040E54 E7A801BC */  swc1        $ft2, 0x1BC($sp)
/* 041A58 80040E58 030D7021 */  addu        $t6, $t8, $t5
/* 041A5C 80040E5C C5CA0058 */  lwc1        $ft3, 0x58($t6)
/* 041A60 80040E60 E7B401D4 */  swc1        $fs0, 0x1D4($sp)
/* 041A64 80040E64 8E040000 */  lw          $a0, 0x0($s0)
/* 041A68 80040E68 46005107 */  neg.s       $ft0, $ft3
/* 041A6C 80040E6C 00003025 */  or          $a2, $zero, $zero
/* 041A70 80040E70 44052000 */  mfc1        $a1, $ft0
/* 041A74 80040E74 0C0017A4 */  jal         Matrix_RotateY
/* 041A78 80040E78 00000000 */   nop
/* 041A7C 80040E7C 8E040000 */  lw          $a0, 0x0($s0)
/* 041A80 80040E80 27A501B4 */  addiu       $a1, $sp, 0x1B4
/* 041A84 80040E84 0C001A88 */  jal         Matrix_MultVec3fNoTranslate
/* 041A88 80040E88 27A601A8 */   addiu      $a2, $sp, 0x1A8
/* 041A8C 80040E8C 3C048017 */  lui         $a0, %hi(gPlayerNum)
/* 041A90 80040E90 248478A0 */  addiu       $a0, $a0, %lo(gPlayerNum)
/* 041A94 80040E94 8C990000 */  lw          $t9, 0x0($a0)
/* 041A98 80040E98 240504E0 */  addiu       $a1, $zero, 0x4E0
/* 041A9C 80040E9C 3C038018 */  lui         $v1, %hi(gPlayer)
/* 041AA0 80040EA0 03250019 */  multu       $t9, $a1
/* 041AA4 80040EA4 24638280 */  addiu       $v1, $v1, %lo(gPlayer)
/* 041AA8 80040EA8 8C6F0000 */  lw          $t7, 0x0($v1)
/* 041AAC 80040EAC C7A801A8 */  lwc1        $ft2, 0x1A8($sp)
/* 041AB0 80040EB0 3C01800D */  lui         $at, %hi(D_800D550C)
/* 041AB4 80040EB4 C42E550C */  lwc1        $fa1, %lo(D_800D550C)($at)
/* 041AB8 80040EB8 C7A401B0 */  lwc1        $ft0, 0x1B0($sp)
/* 041ABC 80040EBC C7A201D4 */  lwc1        $fv1, 0x1D4($sp)
/* 041AC0 80040EC0 3C01800D */  lui         $at, %hi(D_800D5510)
/* 041AC4 80040EC4 0000C012 */  mflo        $t8
/* 041AC8 80040EC8 01F81021 */  addu        $v0, $t7, $t8
/* 041ACC 80040ECC C4460040 */  lwc1        $ft1, 0x40($v0)
/* 041AD0 80040ED0 C44A0048 */  lwc1        $ft3, 0x48($v0)
/* 041AD4 80040ED4 46083000 */  add.s       $fv0, $ft1, $ft2
/* 041AD8 80040ED8 46045300 */  add.s       $fa0, $ft3, $ft0
/* 041ADC 80040EDC 4600703C */  c.lt.s      $fa1, $fv0
/* 041AE0 80040EE0 00000000 */  nop
/* 041AE4 80040EE4 45000003 */  bc1f        .L80040EF4
/* 041AE8 80040EE8 00000000 */   nop
/* 041AEC 80040EEC C4265510 */  lwc1        $ft1, %lo(D_800D5510)($at)
/* 041AF0 80040EF0 E44600AC */  swc1        $ft1, 0xAC($v0)
.L80040EF4:
/* 041AF4 80040EF4 3C01800D */  lui         $at, %hi(D_800D5514)
/* 041AF8 80040EF8 C4305514 */  lwc1        $ft4, %lo(D_800D5514)($at)
/* 041AFC 80040EFC 4600803C */  c.lt.s      $ft4, $fv0
/* 041B00 80040F00 00000000 */  nop
/* 041B04 80040F04 45000009 */  bc1f        .L80040F2C
/* 041B08 80040F08 00000000 */   nop
/* 041B0C 80040F0C 8C8E0000 */  lw          $t6, 0x0($a0)
/* 041B10 80040F10 8C6D0000 */  lw          $t5, 0x0($v1)
/* 041B14 80040F14 3C01800D */  lui         $at, %hi(D_800D5518)
/* 041B18 80040F18 01C50019 */  multu       $t6, $a1
/* 041B1C 80040F1C C4285518 */  lwc1        $ft2, %lo(D_800D5518)($at)
/* 041B20 80040F20 0000C812 */  mflo        $t9
/* 041B24 80040F24 01B97821 */  addu        $t7, $t5, $t9
/* 041B28 80040F28 E5E800AC */  swc1        $ft2, 0xAC($t7)
.L80040F2C:
/* 041B2C 80040F2C 3C01800D */  lui         $at, %hi(D_800D551C)
/* 041B30 80040F30 C432551C */  lwc1        $ft5, %lo(D_800D551C)($at)
/* 041B34 80040F34 4612003C */  c.lt.s      $fv0, $ft5
/* 041B38 80040F38 00000000 */  nop
/* 041B3C 80040F3C 45000009 */  bc1f        .L80040F64
/* 041B40 80040F40 00000000 */   nop
/* 041B44 80040F44 8C8E0000 */  lw          $t6, 0x0($a0)
/* 041B48 80040F48 8C780000 */  lw          $t8, 0x0($v1)
/* 041B4C 80040F4C 3C01800D */  lui         $at, %hi(D_800D5520)
/* 041B50 80040F50 01C50019 */  multu       $t6, $a1
/* 041B54 80040F54 C42A5520 */  lwc1        $ft3, %lo(D_800D5520)($at)
/* 041B58 80040F58 00006812 */  mflo        $t5
/* 041B5C 80040F5C 030DC821 */  addu        $t9, $t8, $t5
/* 041B60 80040F60 E72A00AC */  swc1        $ft3, 0xAC($t9)
.L80040F64:
/* 041B64 80040F64 3C01800D */  lui         $at, %hi(D_800D5524)
/* 041B68 80040F68 C4245524 */  lwc1        $ft0, %lo(D_800D5524)($at)
/* 041B6C 80040F6C 4604003C */  c.lt.s      $fv0, $ft0
/* 041B70 80040F70 00000000 */  nop
/* 041B74 80040F74 4502000A */  bc1fl       .L80040FA0
/* 041B78 80040F78 460C703C */   c.lt.s     $fa1, $fa0
/* 041B7C 80040F7C 8C8E0000 */  lw          $t6, 0x0($a0)
/* 041B80 80040F80 8C6F0000 */  lw          $t7, 0x0($v1)
/* 041B84 80040F84 3C01800D */  lui         $at, %hi(D_800D5528)
/* 041B88 80040F88 01C50019 */  multu       $t6, $a1
/* 041B8C 80040F8C C4265528 */  lwc1        $ft1, %lo(D_800D5528)($at)
/* 041B90 80040F90 0000C012 */  mflo        $t8
/* 041B94 80040F94 01F86821 */  addu        $t5, $t7, $t8
/* 041B98 80040F98 E5A600AC */  swc1        $ft1, 0xAC($t5)
/* 041B9C 80040F9C 460C703C */  c.lt.s      $fa1, $fa0
.L80040FA0:
/* 041BA0 80040FA0 3C01800D */  lui         $at, %hi(D_800D552C)
/* 041BA4 80040FA4 45020003 */  bc1fl       .L80040FB4
/* 041BA8 80040FA8 460C803C */   c.lt.s     $ft4, $fa0
/* 041BAC 80040FAC C422552C */  lwc1        $fv1, %lo(D_800D552C)($at)
/* 041BB0 80040FB0 460C803C */  c.lt.s      $ft4, $fa0
.L80040FB4:
/* 041BB4 80040FB4 3C01800D */  lui         $at, %hi(D_800D5530)
/* 041BB8 80040FB8 45020003 */  bc1fl       .L80040FC8
/* 041BBC 80040FBC 4612603C */   c.lt.s     $fa0, $ft5
/* 041BC0 80040FC0 C4225530 */  lwc1        $fv1, %lo(D_800D5530)($at)
/* 041BC4 80040FC4 4612603C */  c.lt.s      $fa0, $ft5
.L80040FC8:
/* 041BC8 80040FC8 3C01800D */  lui         $at, %hi(D_800D5534)
/* 041BCC 80040FCC 45000002 */  bc1f        .L80040FD8
/* 041BD0 80040FD0 00000000 */   nop
/* 041BD4 80040FD4 C4225534 */  lwc1        $fv1, %lo(D_800D5534)($at)
.L80040FD8:
/* 041BD8 80040FD8 3C01800D */  lui         $at, %hi(D_800D5538)
/* 041BDC 80040FDC C4285538 */  lwc1        $ft2, %lo(D_800D5538)($at)
/* 041BE0 80040FE0 3C01800D */  lui         $at, %hi(D_800D553C)
/* 041BE4 80040FE4 4608603C */  c.lt.s      $fa0, $ft2
/* 041BE8 80040FE8 00000000 */  nop
/* 041BEC 80040FEC 45000002 */  bc1f        .L80040FF8
/* 041BF0 80040FF0 00000000 */   nop
/* 041BF4 80040FF4 C422553C */  lwc1        $fv1, %lo(D_800D553C)($at)
.L80040FF8:
/* 041BF8 80040FF8 3C148014 */  lui         $s4, %hi(gGfxMatrix)
/* 041BFC 80040FFC 2694B3C0 */  addiu       $s4, $s4, %lo(gGfxMatrix)
/* 041C00 80041000 02802025 */  or          $a0, $s4, $zero
/* 041C04 80041004 0C0015C2 */  jal         Matrix_Push
/* 041C08 80041008 E7A201D4 */   swc1       $fv1, 0x1D4($sp)
/* 041C0C 8004100C 3C0E8017 */  lui         $t6, %hi(gPlayerNum)
/* 041C10 80041010 3C01C040 */  lui         $at, (0xC0400000 >> 16)
/* 041C14 80041014 44815000 */  mtc1        $at, $ft3
/* 041C18 80041018 8DCE78A0 */  lw          $t6, %lo(gPlayerNum)($t6)
/* 041C1C 8004101C 3C018018 */  lui         $at, %hi(D_8017847C)
/* 041C20 80041020 C424847C */  lwc1        $ft0, %lo(D_8017847C)($at)
/* 041C24 80041024 000E7880 */  sll         $t7, $t6, 2
/* 041C28 80041028 3C198018 */  lui         $t9, %hi(gPlayer)
/* 041C2C 8004102C 01EE7821 */  addu        $t7, $t7, $t6
/* 041C30 80041030 46045180 */  add.s       $ft1, $ft3, $ft0
/* 041C34 80041034 8F398280 */  lw          $t9, %lo(gPlayer)($t9)
/* 041C38 80041038 000F78C0 */  sll         $t7, $t7, 3
/* 041C3C 8004103C C7A201D4 */  lwc1        $fv1, 0x1D4($sp)
/* 041C40 80041040 01EE7823 */  subu        $t7, $t7, $t6
/* 041C44 80041044 000F7940 */  sll         $t7, $t7, 5
/* 041C48 80041048 032FC021 */  addu        $t8, $t9, $t7
/* 041C4C 8004104C 8F0500AC */  lw          $a1, 0xAC($t8)
/* 041C50 80041050 44063000 */  mfc1        $a2, $ft1
/* 041C54 80041054 240D0001 */  addiu       $t5, $zero, 0x1
/* 041C58 80041058 44071000 */  mfc1        $a3, $fv1
/* 041C5C 8004105C AFAD0010 */  sw          $t5, 0x10($sp)
/* 041C60 80041060 0C0016C0 */  jal         Matrix_Translate
/* 041C64 80041064 8E840000 */   lw         $a0, 0x0($s4)
/* 041C68 80041068 3C0E8017 */  lui         $t6, %hi(D_80177C70)
/* 041C6C 8004106C 8DCE7C70 */  lw          $t6, %lo(D_80177C70)($t6)
/* 041C70 80041070 24010002 */  addiu       $at, $zero, 0x2
/* 041C74 80041074 3C073F80 */  lui         $a3, (0x3F800000 >> 16)
/* 041C78 80041078 15C10008 */  bne         $t6, $at, .L8004109C
/* 041C7C 8004107C 3C01800D */   lui        $at, %hi(D_800D5540)
/* 041C80 80041080 C4205540 */  lwc1        $fv0, %lo(D_800D5540)($at)
/* 041C84 80041084 24190001 */  addiu       $t9, $zero, 0x1
/* 041C88 80041088 AFB90010 */  sw          $t9, 0x10($sp)
/* 041C8C 8004108C 44050000 */  mfc1        $a1, $fv0
/* 041C90 80041090 44060000 */  mfc1        $a2, $fv0
/* 041C94 80041094 0C00170D */  jal         Matrix_Scale
/* 041C98 80041098 8E840000 */   lw         $a0, 0x0($s4)
.L8004109C:
/* 041C9C 8004109C 3C128013 */  lui         $s2, %hi(gMasterDisp)
/* 041CA0 800410A0 26527E64 */  addiu       $s2, $s2, %lo(gMasterDisp)
/* 041CA4 800410A4 0C001BAE */  jal         Matrix_SetGfxMtx
/* 041CA8 800410A8 02402025 */   or         $a0, $s2, $zero
/* 041CAC 800410AC 3C028018 */  lui         $v0, %hi(gCurrentLevel)
/* 041CB0 800410B0 8C428234 */  lw          $v0, %lo(gCurrentLevel)($v0)
/* 041CB4 800410B4 2C410015 */  sltiu       $at, $v0, 0x15
/* 041CB8 800410B8 10200714 */  beqz        $at, .L80042D0C
/* 041CBC 800410BC 00027880 */   sll        $t7, $v0, 2
/* 041CC0 800410C0 3C01800D */  lui         $at, %hi(jtbl_800D5544)
/* 041CC4 800410C4 002F0821 */  addu        $at, $at, $t7
/* 041CC8 800410C8 8C2F5544 */  lw          $t7, %lo(jtbl_800D5544)($at)
/* 041CCC 800410CC 01E00008 */  jr          $t7
/* 041CD0 800410D0 00000000 */   nop
.L800410D4:
/* 041CD4 800410D4 3C188018 */  lui         $t8, %hi(D_8017812C)
/* 041CD8 800410D8 8F18812C */  lw          $t8, %lo(D_8017812C)($t8)
/* 041CDC 800410DC 3C138018 */  lui         $s3, %hi(gFogRed)
/* 041CE0 800410E0 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 041CE4 800410E4 13000013 */  beqz        $t8, .L80041134
/* 041CE8 800410E8 3C058018 */   lui        $a1, %hi(gFogGreen)
/* 041CEC 800410EC 3C0D8018 */  lui         $t5, %hi(gFogNear)
/* 041CF0 800410F0 3C0E8018 */  lui         $t6, %hi(gFogFar)
/* 041CF4 800410F4 8DCE83DC */  lw          $t6, %lo(gFogFar)($t6)
/* 041CF8 800410F8 8DAD83D8 */  lw          $t5, %lo(gFogNear)($t5)
/* 041CFC 800410FC 3C138018 */  lui         $s3, %hi(gFogRed)
/* 041D00 80041100 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 041D04 80041104 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 041D08 80041108 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 041D0C 8004110C 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 041D10 80041110 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 041D14 80041114 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 041D18 80041118 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 041D1C 8004111C 8E640000 */  lw          $a0, 0x0($s3)
/* 041D20 80041120 AFAE0014 */  sw          $t6, 0x14($sp)
/* 041D24 80041124 0C02E874 */  jal         RCP_SetupDL_29
/* 041D28 80041128 AFAD0010 */   sw         $t5, 0x10($sp)
/* 041D2C 8004112C 1000000F */  b           .L8004116C
/* 041D30 80041130 8E380000 */   lw         $t8, 0x0($s1)
.L80041134:
/* 041D34 80041134 3C198018 */  lui         $t9, %hi(gFogNear)
/* 041D38 80041138 3C0F8018 */  lui         $t7, %hi(gFogFar)
/* 041D3C 8004113C 8DEF83DC */  lw          $t7, %lo(gFogFar)($t7)
/* 041D40 80041140 8F3983D8 */  lw          $t9, %lo(gFogNear)($t9)
/* 041D44 80041144 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 041D48 80041148 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 041D4C 8004114C 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 041D50 80041150 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 041D54 80041154 8E640000 */  lw          $a0, 0x0($s3)
/* 041D58 80041158 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 041D5C 8004115C AFAF0014 */  sw          $t7, 0x14($sp)
/* 041D60 80041160 0C02E586 */  jal         RCP_SetupDL_20
/* 041D64 80041164 AFB90010 */   sw         $t9, 0x10($sp)
/* 041D68 80041168 8E380000 */  lw          $t8, 0x0($s1)
.L8004116C:
/* 041D6C 8004116C 3C018016 */  lui         $at, %hi(D_80161A88)
/* 041D70 80041170 240F0845 */  addiu       $t7, $zero, 0x845
/* 041D74 80041174 17000156 */  bnez        $t8, .L800416D0
/* 041D78 80041178 3C11800D */   lui        $s1, %hi(D_800C9E64)
/* 041D7C 8004117C 8E420000 */  lw          $v0, 0x0($s2)
/* 041D80 80041180 3C110602 */  lui         $s1, %hi(D_601B6C0)
/* 041D84 80041184 2631B6C0 */  addiu       $s1, $s1, %lo(D_601B6C0)
/* 041D88 80041188 0011C900 */  sll         $t9, $s1, 4
/* 041D8C 8004118C 244D0008 */  addiu       $t5, $v0, 0x8
/* 041D90 80041190 AE4D0000 */  sw          $t5, 0x0($s2)
/* 041D94 80041194 00197F02 */  srl         $t7, $t9, 28
/* 041D98 80041198 000FC080 */  sll         $t8, $t7, 2
/* 041D9C 8004119C 3C0D800E */  lui         $t5, %hi(gSegments)
/* 041DA0 800411A0 3C0EFD10 */  lui         $t6, (0xFD100000 >> 16)
/* 041DA4 800411A4 01B86821 */  addu        $t5, $t5, $t8
/* 041DA8 800411A8 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 041DAC 800411AC AC4E0000 */  sw          $t6, 0x0($v0)
/* 041DB0 800411B0 8DAD1FD0 */  lw          $t5, %lo(gSegments)($t5)
/* 041DB4 800411B4 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 041DB8 800411B8 02217024 */  and         $t6, $s1, $at
/* 041DBC 800411BC 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 041DC0 800411C0 01AEC821 */  addu        $t9, $t5, $t6
/* 041DC4 800411C4 03217821 */  addu        $t7, $t9, $at
/* 041DC8 800411C8 AC4F0004 */  sw          $t7, 0x4($v0)
/* 041DCC 800411CC 3C018017 */  lui         $at, %hi(D_80177CE8)
/* 041DD0 800411D0 C4287CE8 */  lwc1        $ft2, %lo(D_80177CE8)($at)
/* 041DD4 800411D4 3C01800D */  lui         $at, %hi(D_800D5598)
/* 041DD8 800411D8 C42A5598 */  lwc1        $ft3, %lo(D_800D5598)($at)
/* 041DDC 800411DC 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 041DE0 800411E0 44817000 */  mtc1        $at, $fa1
/* 041DE4 800411E4 460A4002 */  mul.s       $fv0, $ft2, $ft3
/* 041DE8 800411E8 0C001388 */  jal         Math_ModF
/* 041DEC 800411EC 46000300 */   add.s      $fa0, $fv0, $fv0
/* 041DF0 800411F0 46000005 */  abs.s       $fv0, $fv0
/* 041DF4 800411F4 24100001 */  addiu       $s0, $zero, 0x1
/* 041DF8 800411F8 4458F800 */  cfc1        $t8, $31
/* 041DFC 800411FC 44D0F800 */  ctc1        $s0, $31
/* 041E00 80041200 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* 041E04 80041204 3C0E8017 */  lui         $t6, %hi(gPlayerNum)
/* 041E08 80041208 46000124 */  cvt.w.s     $ft0, $fv0
/* 041E0C 8004120C 4450F800 */  cfc1        $s0, $31
/* 041E10 80041210 00000000 */  nop
/* 041E14 80041214 32100078 */  andi        $s0, $s0, 0x78
/* 041E18 80041218 12000012 */  beqz        $s0, .L80041264
/* 041E1C 8004121C 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 041E20 80041220 44812000 */  mtc1        $at, $ft0
/* 041E24 80041224 24100001 */  addiu       $s0, $zero, 0x1
/* 041E28 80041228 46040101 */  sub.s       $ft0, $fv0, $ft0
/* 041E2C 8004122C 44D0F800 */  ctc1        $s0, $31
/* 041E30 80041230 00000000 */  nop
/* 041E34 80041234 46002124 */  cvt.w.s     $ft0, $ft0
/* 041E38 80041238 4450F800 */  cfc1        $s0, $31
/* 041E3C 8004123C 00000000 */  nop
/* 041E40 80041240 32100078 */  andi        $s0, $s0, 0x78
/* 041E44 80041244 16000005 */  bnez        $s0, .L8004125C
/* 041E48 80041248 00000000 */   nop
/* 041E4C 8004124C 44102000 */  mfc1        $s0, $ft0
/* 041E50 80041250 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 041E54 80041254 10000007 */  b           .L80041274
/* 041E58 80041258 02018025 */   or         $s0, $s0, $at
.L8004125C:
/* 041E5C 8004125C 10000005 */  b           .L80041274
/* 041E60 80041260 2410FFFF */   addiu      $s0, $zero, -0x1
.L80041264:
/* 041E64 80041264 44102000 */  mfc1        $s0, $ft0
/* 041E68 80041268 00000000 */  nop
/* 041E6C 8004126C 0600FFFB */  bltz        $s0, .L8004125C
/* 041E70 80041270 00000000 */   nop
.L80041274:
/* 041E74 80041274 8DCE78A0 */  lw          $t6, %lo(gPlayerNum)($t6)
/* 041E78 80041278 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* 041E7C 8004127C 3C01800D */  lui         $at, %hi(D_800D559C)
/* 041E80 80041280 000EC880 */  sll         $t9, $t6, 2
/* 041E84 80041284 032EC821 */  addu        $t9, $t9, $t6
/* 041E88 80041288 0019C8C0 */  sll         $t9, $t9, 3
/* 041E8C 8004128C 032EC823 */  subu        $t9, $t9, $t6
/* 041E90 80041290 0019C940 */  sll         $t9, $t9, 5
/* 041E94 80041294 01B97821 */  addu        $t7, $t5, $t9
/* 041E98 80041298 44D8F800 */  ctc1        $t8, $31
/* 041E9C 8004129C C5E600AC */  lwc1        $ft1, 0xAC($t7)
/* 041EA0 800412A0 C428559C */  lwc1        $ft2, %lo(D_800D559C)($at)
/* 041EA4 800412A4 3C01800D */  lui         $at, %hi(D_800D55A0)
/* 041EA8 800412A8 C42455A0 */  lwc1        $ft0, %lo(D_800D55A0)($at)
/* 041EAC 800412AC 46064281 */  sub.s       $ft3, $ft2, $ft1
/* 041EB0 800412B0 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 041EB4 800412B4 44817000 */  mtc1        $at, $fa1
/* 041EB8 800412B8 46045302 */  mul.s       $fa0, $ft3, $ft0
/* 041EBC 800412BC 0C001388 */  jal         Math_ModF
/* 041EC0 800412C0 00000000 */   nop
/* 041EC4 800412C4 3C08E800 */  lui         $t0, (0xE8000000 >> 16)
/* 041EC8 800412C8 8E420000 */  lw          $v0, 0x0($s2)
/* 041ECC 800412CC 3C0DF510 */  lui         $t5, (0xF5101000 >> 16)
/* 041ED0 800412D0 35AD1000 */  ori         $t5, $t5, (0xF5101000 & 0xFFFF)
/* 041ED4 800412D4 24580008 */  addiu       $t8, $v0, 0x8
/* 041ED8 800412D8 AE580000 */  sw          $t8, 0x0($s2)
/* 041EDC 800412DC AC400004 */  sw          $zero, 0x4($v0)
/* 041EE0 800412E0 AC480000 */  sw          $t0, 0x0($v0)
/* 041EE4 800412E4 8E420000 */  lw          $v0, 0x0($s2)
/* 041EE8 800412E8 3C190001 */  lui         $t9, (0x14050 >> 16)
/* 041EEC 800412EC 37394050 */  ori         $t9, $t9, (0x14050 & 0xFFFF)
/* 041EF0 800412F0 244E0008 */  addiu       $t6, $v0, 0x8
/* 041EF4 800412F4 AE4E0000 */  sw          $t6, 0x0($s2)
/* 041EF8 800412F8 AC590004 */  sw          $t9, 0x4($v0)
/* 041EFC 800412FC AC4D0000 */  sw          $t5, 0x0($v0)
/* 041F00 80041300 4458F800 */  cfc1        $t8, $31
/* 041F04 80041304 240E0001 */  addiu       $t6, $zero, 0x1
/* 041F08 80041308 44CEF800 */  ctc1        $t6, $31
/* 041F0C 8004130C 8E460000 */  lw          $a2, 0x0($s2)
/* 041F10 80041310 3C038016 */  lui         $v1, %hi(D_80161A88)
/* 041F14 80041314 46000224 */  cvt.w.s     $ft2, $fv0
/* 041F18 80041318 24CF0008 */  addiu       $t7, $a2, 0x8
/* 041F1C 8004131C AE4F0000 */  sw          $t7, 0x0($s2)
/* 041F20 80041320 444EF800 */  cfc1        $t6, $31
/* 041F24 80041324 00000000 */  nop
/* 041F28 80041328 31CE0078 */  andi        $t6, $t6, 0x78
/* 041F2C 8004132C 11C00012 */  beqz        $t6, .L80041378
/* 041F30 80041330 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 041F34 80041334 44814000 */  mtc1        $at, $ft2
/* 041F38 80041338 240E0001 */  addiu       $t6, $zero, 0x1
/* 041F3C 8004133C 46080201 */  sub.s       $ft2, $fv0, $ft2
/* 041F40 80041340 44CEF800 */  ctc1        $t6, $31
/* 041F44 80041344 00000000 */  nop
/* 041F48 80041348 46004224 */  cvt.w.s     $ft2, $ft2
/* 041F4C 8004134C 444EF800 */  cfc1        $t6, $31
/* 041F50 80041350 00000000 */  nop
/* 041F54 80041354 31CE0078 */  andi        $t6, $t6, 0x78
/* 041F58 80041358 15C00005 */  bnez        $t6, .L80041370
/* 041F5C 8004135C 00000000 */   nop
/* 041F60 80041360 440E4000 */  mfc1        $t6, $ft2
/* 041F64 80041364 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 041F68 80041368 10000007 */  b           .L80041388
/* 041F6C 8004136C 01C17025 */   or         $t6, $t6, $at
.L80041370:
/* 041F70 80041370 10000005 */  b           .L80041388
/* 041F74 80041374 240EFFFF */   addiu      $t6, $zero, -0x1
.L80041378:
/* 041F78 80041378 440E4000 */  mfc1        $t6, $ft2
/* 041F7C 8004137C 00000000 */  nop
/* 041F80 80041380 05C0FFFB */  bltz        $t6, .L80041370
/* 041F84 80041384 00000000 */   nop
.L80041388:
/* 041F88 80041388 31CD0FFF */  andi        $t5, $t6, 0xFFF
/* 041F8C 8004138C 000DCB00 */  sll         $t9, $t5, 12
/* 041F90 80041390 44D8F800 */  ctc1        $t8, $31
/* 041F94 80041394 3C01F200 */  lui         $at, (0xF2000000 >> 16)
/* 041F98 80041398 03217825 */  or          $t7, $t9, $at
/* 041F9C 8004139C 32180FFF */  andi        $t8, $s0, 0xFFF
/* 041FA0 800413A0 3C0D0007 */  lui         $t5, (0x7C07C >> 16)
/* 041FA4 800413A4 35ADC07C */  ori         $t5, $t5, (0x7C07C & 0xFFFF)
/* 041FA8 800413A8 01F87025 */  or          $t6, $t7, $t8
/* 041FAC 800413AC ACCE0000 */  sw          $t6, 0x0($a2)
/* 041FB0 800413B0 ACCD0004 */  sw          $t5, 0x4($a2)
/* 041FB4 800413B4 8C631A88 */  lw          $v1, %lo(D_80161A88)($v1)
/* 041FB8 800413B8 10600008 */  beqz        $v1, .L800413DC
/* 041FBC 800413BC 24010001 */   addiu      $at, $zero, 0x1
/* 041FC0 800413C0 1061002A */  beq         $v1, $at, .L8004146C
/* 041FC4 800413C4 3C0EFD10 */   lui        $t6, (0xFD100000 >> 16)
/* 041FC8 800413C8 24010002 */  addiu       $at, $zero, 0x2
/* 041FCC 800413CC 1061004D */  beq         $v1, $at, .L80041504
/* 041FD0 800413D0 3C058018 */   lui        $a1, %hi(gFogGreen)
/* 041FD4 800413D4 10000085 */  b           .L800415EC
/* 041FD8 800413D8 00000000 */   nop
.L800413DC:
/* 041FDC 800413DC 8E420000 */  lw          $v0, 0x0($s2)
/* 041FE0 800413E0 3C0FFD10 */  lui         $t7, (0xFD100000 >> 16)
/* 041FE4 800413E4 3C018016 */  lui         $at, %hi(gBgColor)
/* 041FE8 800413E8 24590008 */  addiu       $t9, $v0, 0x8
/* 041FEC 800413EC AE590000 */  sw          $t9, 0x0($s2)
/* 041FF0 800413F0 AC510004 */  sw          $s1, 0x4($v0)
/* 041FF4 800413F4 AC4F0000 */  sw          $t7, 0x0($v0)
/* 041FF8 800413F8 8E420000 */  lw          $v0, 0x0($s2)
/* 041FFC 800413FC 24580008 */  addiu       $t8, $v0, 0x8
/* 042000 80041400 AE580000 */  sw          $t8, 0x0($s2)
/* 042004 80041404 AC400004 */  sw          $zero, 0x4($v0)
/* 042008 80041408 AC480000 */  sw          $t0, 0x0($v0)
/* 04200C 8004140C 8E420000 */  lw          $v0, 0x0($s2)
/* 042010 80041410 3C0DF510 */  lui         $t5, (0xF5100000 >> 16)
/* 042014 80041414 3C190700 */  lui         $t9, (0x7000000 >> 16)
/* 042018 80041418 244E0008 */  addiu       $t6, $v0, 0x8
/* 04201C 8004141C AE4E0000 */  sw          $t6, 0x0($s2)
/* 042020 80041420 AC590004 */  sw          $t9, 0x4($v0)
/* 042024 80041424 AC4D0000 */  sw          $t5, 0x0($v0)
/* 042028 80041428 8E420000 */  lw          $v0, 0x0($s2)
/* 04202C 8004142C 3C18E600 */  lui         $t8, (0xE6000000 >> 16)
/* 042030 80041430 3C0DF300 */  lui         $t5, (0xF3000000 >> 16)
/* 042034 80041434 244F0008 */  addiu       $t7, $v0, 0x8
/* 042038 80041438 AE4F0000 */  sw          $t7, 0x0($s2)
/* 04203C 8004143C AC400004 */  sw          $zero, 0x4($v0)
/* 042040 80041440 AC580000 */  sw          $t8, 0x0($v0)
/* 042044 80041444 8E420000 */  lw          $v0, 0x0($s2)
/* 042048 80041448 3C19073F */  lui         $t9, (0x73FF100 >> 16)
/* 04204C 8004144C 3739F100 */  ori         $t9, $t9, (0x73FF100 & 0xFFFF)
/* 042050 80041450 244E0008 */  addiu       $t6, $v0, 0x8
/* 042054 80041454 AE4E0000 */  sw          $t6, 0x0($s2)
/* 042058 80041458 AC590004 */  sw          $t9, 0x4($v0)
/* 04205C 8004145C AC4D0000 */  sw          $t5, 0x0($v0)
/* 042060 80041460 240F0845 */  addiu       $t7, $zero, 0x845
/* 042064 80041464 10000061 */  b           .L800415EC
/* 042068 80041468 A42F1A36 */   sh         $t7, %lo(gBgColor)($at)
.L8004146C:
/* 04206C 8004146C 8E420000 */  lw          $v0, 0x0($s2)
/* 042070 80041470 3C0D0603 */  lui         $t5, %hi(D_6028260)
/* 042074 80041474 25AD8260 */  addiu       $t5, $t5, %lo(D_6028260)
/* 042078 80041478 24580008 */  addiu       $t8, $v0, 0x8
/* 04207C 8004147C AE580000 */  sw          $t8, 0x0($s2)
/* 042080 80041480 AC4D0004 */  sw          $t5, 0x4($v0)
/* 042084 80041484 AC4E0000 */  sw          $t6, 0x0($v0)
/* 042088 80041488 8E420000 */  lw          $v0, 0x0($s2)
/* 04208C 8004148C 3C0FE800 */  lui         $t7, (0xE8000000 >> 16)
/* 042090 80041490 3C018016 */  lui         $at, %hi(gBgColor)
/* 042094 80041494 24590008 */  addiu       $t9, $v0, 0x8
/* 042098 80041498 AE590000 */  sw          $t9, 0x0($s2)
/* 04209C 8004149C AC400004 */  sw          $zero, 0x4($v0)
/* 0420A0 800414A0 AC4F0000 */  sw          $t7, 0x0($v0)
/* 0420A4 800414A4 8E420000 */  lw          $v0, 0x0($s2)
/* 0420A8 800414A8 3C0EF510 */  lui         $t6, (0xF5100000 >> 16)
/* 0420AC 800414AC 3C0D0700 */  lui         $t5, (0x7000000 >> 16)
/* 0420B0 800414B0 24580008 */  addiu       $t8, $v0, 0x8
/* 0420B4 800414B4 AE580000 */  sw          $t8, 0x0($s2)
/* 0420B8 800414B8 AC4D0004 */  sw          $t5, 0x4($v0)
/* 0420BC 800414BC AC4E0000 */  sw          $t6, 0x0($v0)
/* 0420C0 800414C0 8E420000 */  lw          $v0, 0x0($s2)
/* 0420C4 800414C4 3C0FE600 */  lui         $t7, (0xE6000000 >> 16)
/* 0420C8 800414C8 3C0EF300 */  lui         $t6, (0xF3000000 >> 16)
/* 0420CC 800414CC 24590008 */  addiu       $t9, $v0, 0x8
/* 0420D0 800414D0 AE590000 */  sw          $t9, 0x0($s2)
/* 0420D4 800414D4 AC400004 */  sw          $zero, 0x4($v0)
/* 0420D8 800414D8 AC4F0000 */  sw          $t7, 0x0($v0)
/* 0420DC 800414DC 8E420000 */  lw          $v0, 0x0($s2)
/* 0420E0 800414E0 3C0D073F */  lui         $t5, (0x73FF100 >> 16)
/* 0420E4 800414E4 35ADF100 */  ori         $t5, $t5, (0x73FF100 & 0xFFFF)
/* 0420E8 800414E8 24580008 */  addiu       $t8, $v0, 0x8
/* 0420EC 800414EC AE580000 */  sw          $t8, 0x0($s2)
/* 0420F0 800414F0 AC4D0004 */  sw          $t5, 0x4($v0)
/* 0420F4 800414F4 AC4E0000 */  sw          $t6, 0x0($v0)
/* 0420F8 800414F8 24190845 */  addiu       $t9, $zero, 0x845
/* 0420FC 800414FC 1000003B */  b           .L800415EC
/* 042100 80041500 A4391A36 */   sh         $t9, %lo(gBgColor)($at)
.L80041504:
/* 042104 80041504 3C0F8018 */  lui         $t7, %hi(gFogNear)
/* 042108 80041508 3C188018 */  lui         $t8, %hi(gFogFar)
/* 04210C 8004150C 8F1883DC */  lw          $t8, %lo(gFogFar)($t8)
/* 042110 80041510 8DEF83D8 */  lw          $t7, %lo(gFogNear)($t7)
/* 042114 80041514 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 042118 80041518 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 04211C 8004151C 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 042120 80041520 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 042124 80041524 8E640000 */  lw          $a0, 0x0($s3)
/* 042128 80041528 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 04212C 8004152C AFB80014 */  sw          $t8, 0x14($sp)
/* 042130 80041530 0C02E7F2 */  jal         RCP_SetupDL_45
/* 042134 80041534 AFAF0010 */   sw         $t7, 0x10($sp)
/* 042138 80041538 8E420000 */  lw          $v0, 0x0($s2)
/* 04213C 8004153C 3C0DFA00 */  lui         $t5, (0xFA000000 >> 16)
/* 042140 80041540 2419FF80 */  addiu       $t9, $zero, -0x80
/* 042144 80041544 244E0008 */  addiu       $t6, $v0, 0x8
/* 042148 80041548 AE4E0000 */  sw          $t6, 0x0($s2)
/* 04214C 8004154C AC590004 */  sw          $t9, 0x4($v0)
/* 042150 80041550 AC4D0000 */  sw          $t5, 0x0($v0)
/* 042154 80041554 8E420000 */  lw          $v0, 0x0($s2)
/* 042158 80041558 3C0E0603 */  lui         $t6, %hi(D_6028A60)
/* 04215C 8004155C 25CE8A60 */  addiu       $t6, $t6, %lo(D_6028A60)
/* 042160 80041560 244F0008 */  addiu       $t7, $v0, 0x8
/* 042164 80041564 AE4F0000 */  sw          $t7, 0x0($s2)
/* 042168 80041568 3C18FD10 */  lui         $t8, (0xFD100000 >> 16)
/* 04216C 8004156C AC580000 */  sw          $t8, 0x0($v0)
/* 042170 80041570 AC4E0004 */  sw          $t6, 0x4($v0)
/* 042174 80041574 8E420000 */  lw          $v0, 0x0($s2)
/* 042178 80041578 3C19E800 */  lui         $t9, (0xE8000000 >> 16)
/* 04217C 8004157C 3C018016 */  lui         $at, %hi(gBgColor)
/* 042180 80041580 244D0008 */  addiu       $t5, $v0, 0x8
/* 042184 80041584 AE4D0000 */  sw          $t5, 0x0($s2)
/* 042188 80041588 AC400004 */  sw          $zero, 0x4($v0)
/* 04218C 8004158C AC590000 */  sw          $t9, 0x0($v0)
/* 042190 80041590 8E420000 */  lw          $v0, 0x0($s2)
/* 042194 80041594 3C18F510 */  lui         $t8, (0xF5100000 >> 16)
/* 042198 80041598 3C0E0700 */  lui         $t6, (0x7000000 >> 16)
/* 04219C 8004159C 244F0008 */  addiu       $t7, $v0, 0x8
/* 0421A0 800415A0 AE4F0000 */  sw          $t7, 0x0($s2)
/* 0421A4 800415A4 AC4E0004 */  sw          $t6, 0x4($v0)
/* 0421A8 800415A8 AC580000 */  sw          $t8, 0x0($v0)
/* 0421AC 800415AC 8E420000 */  lw          $v0, 0x0($s2)
/* 0421B0 800415B0 3C19E600 */  lui         $t9, (0xE6000000 >> 16)
/* 0421B4 800415B4 3C18F300 */  lui         $t8, (0xF3000000 >> 16)
/* 0421B8 800415B8 244D0008 */  addiu       $t5, $v0, 0x8
/* 0421BC 800415BC AE4D0000 */  sw          $t5, 0x0($s2)
/* 0421C0 800415C0 AC400004 */  sw          $zero, 0x4($v0)
/* 0421C4 800415C4 AC590000 */  sw          $t9, 0x0($v0)
/* 0421C8 800415C8 8E420000 */  lw          $v0, 0x0($s2)
/* 0421CC 800415CC 3C0E073F */  lui         $t6, (0x73FF100 >> 16)
/* 0421D0 800415D0 35CEF100 */  ori         $t6, $t6, (0x73FF100 & 0xFFFF)
/* 0421D4 800415D4 244F0008 */  addiu       $t7, $v0, 0x8
/* 0421D8 800415D8 AE4F0000 */  sw          $t7, 0x0($s2)
/* 0421DC 800415DC AC4E0004 */  sw          $t6, 0x4($v0)
/* 0421E0 800415E0 AC580000 */  sw          $t8, 0x0($v0)
/* 0421E4 800415E4 240D190F */  addiu       $t5, $zero, 0x190F
/* 0421E8 800415E8 A42D1A36 */  sh          $t5, %lo(gBgColor)($at)
.L800415EC:
/* 0421EC 800415EC 0C0015C2 */  jal         Matrix_Push
/* 0421F0 800415F0 02802025 */   or         $a0, $s4, $zero
/* 0421F4 800415F4 4405A000 */  mfc1        $a1, $fs0
/* 0421F8 800415F8 4406A000 */  mfc1        $a2, $fs0
/* 0421FC 800415FC 3C07C53B */  lui         $a3, (0xC53B8000 >> 16)
/* 042200 80041600 24190001 */  addiu       $t9, $zero, 0x1
/* 042204 80041604 AFB90010 */  sw          $t9, 0x10($sp)
/* 042208 80041608 34E78000 */  ori         $a3, $a3, (0xC53B8000 & 0xFFFF)
/* 04220C 8004160C 0C0016C0 */  jal         Matrix_Translate
/* 042210 80041610 8E840000 */   lw         $a0, 0x0($s4)
/* 042214 80041614 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 042218 80041618 44810000 */  mtc1        $at, $fv0
/* 04221C 8004161C 240F0001 */  addiu       $t7, $zero, 0x1
/* 042220 80041620 AFAF0010 */  sw          $t7, 0x10($sp)
/* 042224 80041624 44050000 */  mfc1        $a1, $fv0
/* 042228 80041628 44060000 */  mfc1        $a2, $fv0
/* 04222C 8004162C 8E840000 */  lw          $a0, 0x0($s4)
/* 042230 80041630 0C00170D */  jal         Matrix_Scale
/* 042234 80041634 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 042238 80041638 0C001BAE */  jal         Matrix_SetGfxMtx
/* 04223C 8004163C 02402025 */   or         $a0, $s2, $zero
/* 042240 80041640 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 042244 80041644 8E420000 */  lw          $v0, 0x0($s2)
/* 042248 80041648 3C100602 */  lui         $s0, %hi(D_601B640)
/* 04224C 8004164C 2610B640 */  addiu       $s0, $s0, %lo(D_601B640)
/* 042250 80041650 24580008 */  addiu       $t8, $v0, 0x8
/* 042254 80041654 AE580000 */  sw          $t8, 0x0($s2)
/* 042258 80041658 AC500004 */  sw          $s0, 0x4($v0)
/* 04225C 8004165C AC530000 */  sw          $s3, 0x0($v0)
/* 042260 80041660 0C0015D0 */  jal         Matrix_Pop
/* 042264 80041664 02802025 */   or         $a0, $s4, $zero
/* 042268 80041668 4405A000 */  mfc1        $a1, $fs0
/* 04226C 8004166C 4406A000 */  mfc1        $a2, $fs0
/* 042270 80041670 3C07453B */  lui         $a3, (0x453B8000 >> 16)
/* 042274 80041674 240E0001 */  addiu       $t6, $zero, 0x1
/* 042278 80041678 AFAE0010 */  sw          $t6, 0x10($sp)
/* 04227C 8004167C 34E78000 */  ori         $a3, $a3, (0x453B8000 & 0xFFFF)
/* 042280 80041680 0C0016C0 */  jal         Matrix_Translate
/* 042284 80041684 8E840000 */   lw         $a0, 0x0($s4)
/* 042288 80041688 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 04228C 8004168C 44810000 */  mtc1        $at, $fv0
/* 042290 80041690 240D0001 */  addiu       $t5, $zero, 0x1
/* 042294 80041694 AFAD0010 */  sw          $t5, 0x10($sp)
/* 042298 80041698 44050000 */  mfc1        $a1, $fv0
/* 04229C 8004169C 44060000 */  mfc1        $a2, $fv0
/* 0422A0 800416A0 8E840000 */  lw          $a0, 0x0($s4)
/* 0422A4 800416A4 0C00170D */  jal         Matrix_Scale
/* 0422A8 800416A8 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 0422AC 800416AC 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0422B0 800416B0 02402025 */   or         $a0, $s2, $zero
/* 0422B4 800416B4 8E420000 */  lw          $v0, 0x0($s2)
/* 0422B8 800416B8 24590008 */  addiu       $t9, $v0, 0x8
/* 0422BC 800416BC AE590000 */  sw          $t9, 0x0($s2)
/* 0422C0 800416C0 AC500004 */  sw          $s0, 0x4($v0)
/* 0422C4 800416C4 AC530000 */  sw          $s3, 0x0($v0)
/* 0422C8 800416C8 10000590 */  b           .L80042D0C
/* 0422CC 800416CC 00000000 */   nop
.L800416D0:
/* 0422D0 800416D0 AC201A88 */  sw          $zero, %lo(D_80161A88)($at)
/* 0422D4 800416D4 3C180602 */  lui         $t8, %hi(D_601EAA0)
/* 0422D8 800416D8 3C018016 */  lui         $at, %hi(gBgColor)
/* 0422DC 800416DC 2718EAA0 */  addiu       $t8, $t8, %lo(D_601EAA0)
/* 0422E0 800416E0 3C10800D */  lui         $s0, %hi(D_800C9E74)
/* 0422E4 800416E4 A42F1A36 */  sh          $t7, %lo(gBgColor)($at)
/* 0422E8 800416E8 26109E74 */  addiu       $s0, $s0, %lo(D_800C9E74)
/* 0422EC 800416EC AFB8004C */  sw          $t8, 0x4C($sp)
/* 0422F0 800416F0 26319E64 */  addiu       $s1, $s1, %lo(D_800C9E64)
/* 0422F4 800416F4 3C130600 */  lui         $s3, (0x6000000 >> 16)
.L800416F8:
/* 0422F8 800416F8 0C0015C2 */  jal         Matrix_Push
/* 0422FC 800416FC 02802025 */   or         $a0, $s4, $zero
/* 042300 80041700 4406A000 */  mfc1        $a2, $fs0
/* 042304 80041704 240E0001 */  addiu       $t6, $zero, 0x1
/* 042308 80041708 AFAE0010 */  sw          $t6, 0x10($sp)
/* 04230C 8004170C 8E840000 */  lw          $a0, 0x0($s4)
/* 042310 80041710 8E250000 */  lw          $a1, 0x0($s1)
/* 042314 80041714 0C0016C0 */  jal         Matrix_Translate
/* 042318 80041718 8E070000 */   lw         $a3, 0x0($s0)
/* 04231C 8004171C 0C001BAE */  jal         Matrix_SetGfxMtx
/* 042320 80041720 02402025 */   or         $a0, $s2, $zero
/* 042324 80041724 8E420000 */  lw          $v0, 0x0($s2)
/* 042328 80041728 244D0008 */  addiu       $t5, $v0, 0x8
/* 04232C 8004172C AE4D0000 */  sw          $t5, 0x0($s2)
/* 042330 80041730 AC530000 */  sw          $s3, 0x0($v0)
/* 042334 80041734 8FB9004C */  lw          $t9, 0x4C($sp)
/* 042338 80041738 AC590004 */  sw          $t9, 0x4($v0)
/* 04233C 8004173C 0C0015D0 */  jal         Matrix_Pop
/* 042340 80041740 02802025 */   or         $a0, $s4, $zero
/* 042344 80041744 3C0F800D */  lui         $t7, %hi(D_800C9E84)
/* 042348 80041748 25EF9E84 */  addiu       $t7, $t7, %lo(D_800C9E84)
/* 04234C 8004174C 26100004 */  addiu       $s0, $s0, 0x4
/* 042350 80041750 160FFFE9 */  bne         $s0, $t7, .L800416F8
/* 042354 80041754 26310004 */   addiu      $s1, $s1, 0x4
/* 042358 80041758 1000056C */  b           .L80042D0C
/* 04235C 8004175C 00000000 */   nop
.L80041760:
/* 042360 80041760 3C188018 */  lui         $t8, %hi(gFogNear)
/* 042364 80041764 3C0E8018 */  lui         $t6, %hi(gFogFar)
/* 042368 80041768 8DCE83DC */  lw          $t6, %lo(gFogFar)($t6)
/* 04236C 8004176C 8F1883D8 */  lw          $t8, %lo(gFogNear)($t8)
/* 042370 80041770 3C138018 */  lui         $s3, %hi(gFogRed)
/* 042374 80041774 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 042378 80041778 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 04237C 8004177C 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 042380 80041780 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 042384 80041784 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 042388 80041788 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 04238C 8004178C 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 042390 80041790 8E640000 */  lw          $a0, 0x0($s3)
/* 042394 80041794 AFAE0014 */  sw          $t6, 0x14($sp)
/* 042398 80041798 0C02E874 */  jal         RCP_SetupDL_29
/* 04239C 8004179C AFB80010 */   sw         $t8, 0x10($sp)
/* 0423A0 800417A0 3C038018 */  lui         $v1, %hi(gCurrentLevel)
/* 0423A4 800417A4 8C638234 */  lw          $v1, %lo(gCurrentLevel)($v1)
/* 0423A8 800417A8 24010006 */  addiu       $at, $zero, 0x6
/* 0423AC 800417AC 10610005 */  beq         $v1, $at, .L800417C4
/* 0423B0 800417B0 2401000B */   addiu      $at, $zero, 0xB
/* 0423B4 800417B4 1061003D */  beq         $v1, $at, .L800418AC
/* 0423B8 800417B8 3C0A0603 */   lui        $t2, %hi(D_602DCB8)
/* 0423BC 800417BC 10000072 */  b           .L80041988
/* 0423C0 800417C0 8FB101C0 */   lw         $s1, 0x1C0($sp)
.L800417C4:
/* 0423C4 800417C4 3C0A0600 */  lui         $t2, %hi(D_6006750)
/* 0423C8 800417C8 254A6750 */  addiu       $t2, $t2, %lo(D_6006750)
/* 0423CC 800417CC 3C110600 */  lui         $s1, %hi(D_60066D0)
/* 0423D0 800417D0 AFAA01C4 */  sw          $t2, 0x1C4($sp)
/* 0423D4 800417D4 263166D0 */  addiu       $s1, $s1, %lo(D_60066D0)
/* 0423D8 800417D8 8E420000 */  lw          $v0, 0x0($s2)
/* 0423DC 800417DC 3C19FD10 */  lui         $t9, (0xFD100000 >> 16)
/* 0423E0 800417E0 3C18F510 */  lui         $t8, (0xF5100000 >> 16)
/* 0423E4 800417E4 244D0008 */  addiu       $t5, $v0, 0x8
/* 0423E8 800417E8 AE4D0000 */  sw          $t5, 0x0($s2)
/* 0423EC 800417EC AC4A0004 */  sw          $t2, 0x4($v0)
/* 0423F0 800417F0 AC590000 */  sw          $t9, 0x0($v0)
/* 0423F4 800417F4 8E420000 */  lw          $v0, 0x0($s2)
/* 0423F8 800417F8 3C0E0701 */  lui         $t6, (0x7014050 >> 16)
/* 0423FC 800417FC 35CE4050 */  ori         $t6, $t6, (0x7014050 & 0xFFFF)
/* 042400 80041800 244F0008 */  addiu       $t7, $v0, 0x8
/* 042404 80041804 AE4F0000 */  sw          $t7, 0x0($s2)
/* 042408 80041808 AC4E0004 */  sw          $t6, 0x4($v0)
/* 04240C 8004180C AC580000 */  sw          $t8, 0x0($v0)
/* 042410 80041810 8E420000 */  lw          $v0, 0x0($s2)
/* 042414 80041814 3C19E600 */  lui         $t9, (0xE6000000 >> 16)
/* 042418 80041818 3C18F300 */  lui         $t8, (0xF3000000 >> 16)
/* 04241C 8004181C 244D0008 */  addiu       $t5, $v0, 0x8
/* 042420 80041820 AE4D0000 */  sw          $t5, 0x0($s2)
/* 042424 80041824 AC400004 */  sw          $zero, 0x4($v0)
/* 042428 80041828 AC590000 */  sw          $t9, 0x0($v0)
/* 04242C 8004182C 8E420000 */  lw          $v0, 0x0($s2)
/* 042430 80041830 3C0E073F */  lui         $t6, (0x73FF100 >> 16)
/* 042434 80041834 35CEF100 */  ori         $t6, $t6, (0x73FF100 & 0xFFFF)
/* 042438 80041838 244F0008 */  addiu       $t7, $v0, 0x8
/* 04243C 8004183C AE4F0000 */  sw          $t7, 0x0($s2)
/* 042440 80041840 AC4E0004 */  sw          $t6, 0x4($v0)
/* 042444 80041844 AC580000 */  sw          $t8, 0x0($v0)
/* 042448 80041848 8E420000 */  lw          $v0, 0x0($s2)
/* 04244C 8004184C 3C19E700 */  lui         $t9, (0xE7000000 >> 16)
/* 042450 80041850 3C18F510 */  lui         $t8, (0xF5101000 >> 16)
/* 042454 80041854 244D0008 */  addiu       $t5, $v0, 0x8
/* 042458 80041858 AE4D0000 */  sw          $t5, 0x0($s2)
/* 04245C 8004185C AC400004 */  sw          $zero, 0x4($v0)
/* 042460 80041860 AC590000 */  sw          $t9, 0x0($v0)
/* 042464 80041864 8E420000 */  lw          $v0, 0x0($s2)
/* 042468 80041868 3C0E0001 */  lui         $t6, (0x14050 >> 16)
/* 04246C 8004186C 35CE4050 */  ori         $t6, $t6, (0x14050 & 0xFFFF)
/* 042470 80041870 244F0008 */  addiu       $t7, $v0, 0x8
/* 042474 80041874 AE4F0000 */  sw          $t7, 0x0($s2)
/* 042478 80041878 37181000 */  ori         $t8, $t8, (0xF5101000 & 0xFFFF)
/* 04247C 8004187C AC580000 */  sw          $t8, 0x0($v0)
/* 042480 80041880 AC4E0004 */  sw          $t6, 0x4($v0)
/* 042484 80041884 8E420000 */  lw          $v0, 0x0($s2)
/* 042488 80041888 3C0F0007 */  lui         $t7, (0x7C07C >> 16)
/* 04248C 8004188C 35EFC07C */  ori         $t7, $t7, (0x7C07C & 0xFFFF)
/* 042490 80041890 244D0008 */  addiu       $t5, $v0, 0x8
/* 042494 80041894 AE4D0000 */  sw          $t5, 0x0($s2)
/* 042498 80041898 3C19F200 */  lui         $t9, (0xF2000000 >> 16)
/* 04249C 8004189C AC590000 */  sw          $t9, 0x0($v0)
/* 0424A0 800418A0 AC4F0004 */  sw          $t7, 0x4($v0)
/* 0424A4 800418A4 10000039 */  b           .L8004198C
/* 0424A8 800418A8 8E420000 */   lw         $v0, 0x0($s2)
.L800418AC:
/* 0424AC 800418AC 254ADCB8 */  addiu       $t2, $t2, %lo(D_602DCB8)
/* 0424B0 800418B0 3C110603 */  lui         $s1, %hi(D_60306D0)
/* 0424B4 800418B4 AFAA01C4 */  sw          $t2, 0x1C4($sp)
/* 0424B8 800418B8 263106D0 */  addiu       $s1, $s1, %lo(D_60306D0)
/* 0424BC 800418BC 8E420000 */  lw          $v0, 0x0($s2)
/* 0424C0 800418C0 3C0EFD10 */  lui         $t6, (0xFD100000 >> 16)
/* 0424C4 800418C4 3C19F510 */  lui         $t9, (0xF5100000 >> 16)
/* 0424C8 800418C8 24580008 */  addiu       $t8, $v0, 0x8
/* 0424CC 800418CC AE580000 */  sw          $t8, 0x0($s2)
/* 0424D0 800418D0 AC4A0004 */  sw          $t2, 0x4($v0)
/* 0424D4 800418D4 AC4E0000 */  sw          $t6, 0x0($v0)
/* 0424D8 800418D8 8E420000 */  lw          $v0, 0x0($s2)
/* 0424DC 800418DC 3C0F0701 */  lui         $t7, (0x7014050 >> 16)
/* 0424E0 800418E0 35EF4050 */  ori         $t7, $t7, (0x7014050 & 0xFFFF)
/* 0424E4 800418E4 244D0008 */  addiu       $t5, $v0, 0x8
/* 0424E8 800418E8 AE4D0000 */  sw          $t5, 0x0($s2)
/* 0424EC 800418EC AC4F0004 */  sw          $t7, 0x4($v0)
/* 0424F0 800418F0 AC590000 */  sw          $t9, 0x0($v0)
/* 0424F4 800418F4 8E420000 */  lw          $v0, 0x0($s2)
/* 0424F8 800418F8 3C0EE600 */  lui         $t6, (0xE6000000 >> 16)
/* 0424FC 800418FC 3C19F300 */  lui         $t9, (0xF3000000 >> 16)
/* 042500 80041900 24580008 */  addiu       $t8, $v0, 0x8
/* 042504 80041904 AE580000 */  sw          $t8, 0x0($s2)
/* 042508 80041908 AC400004 */  sw          $zero, 0x4($v0)
/* 04250C 8004190C AC4E0000 */  sw          $t6, 0x0($v0)
/* 042510 80041910 8E420000 */  lw          $v0, 0x0($s2)
/* 042514 80041914 3C0F073F */  lui         $t7, (0x73FF100 >> 16)
/* 042518 80041918 35EFF100 */  ori         $t7, $t7, (0x73FF100 & 0xFFFF)
/* 04251C 8004191C 244D0008 */  addiu       $t5, $v0, 0x8
/* 042520 80041920 AE4D0000 */  sw          $t5, 0x0($s2)
/* 042524 80041924 AC4F0004 */  sw          $t7, 0x4($v0)
/* 042528 80041928 AC590000 */  sw          $t9, 0x0($v0)
/* 04252C 8004192C 8E420000 */  lw          $v0, 0x0($s2)
/* 042530 80041930 3C0EE700 */  lui         $t6, (0xE7000000 >> 16)
/* 042534 80041934 3C19F510 */  lui         $t9, (0xF5101000 >> 16)
/* 042538 80041938 24580008 */  addiu       $t8, $v0, 0x8
/* 04253C 8004193C AE580000 */  sw          $t8, 0x0($s2)
/* 042540 80041940 AC400004 */  sw          $zero, 0x4($v0)
/* 042544 80041944 AC4E0000 */  sw          $t6, 0x0($v0)
/* 042548 80041948 8E420000 */  lw          $v0, 0x0($s2)
/* 04254C 8004194C 3C0F0001 */  lui         $t7, (0x14050 >> 16)
/* 042550 80041950 35EF4050 */  ori         $t7, $t7, (0x14050 & 0xFFFF)
/* 042554 80041954 244D0008 */  addiu       $t5, $v0, 0x8
/* 042558 80041958 AE4D0000 */  sw          $t5, 0x0($s2)
/* 04255C 8004195C 37391000 */  ori         $t9, $t9, (0xF5101000 & 0xFFFF)
/* 042560 80041960 AC590000 */  sw          $t9, 0x0($v0)
/* 042564 80041964 AC4F0004 */  sw          $t7, 0x4($v0)
/* 042568 80041968 8E420000 */  lw          $v0, 0x0($s2)
/* 04256C 8004196C 3C0D0007 */  lui         $t5, (0x7C07C >> 16)
/* 042570 80041970 35ADC07C */  ori         $t5, $t5, (0x7C07C & 0xFFFF)
/* 042574 80041974 24580008 */  addiu       $t8, $v0, 0x8
/* 042578 80041978 AE580000 */  sw          $t8, 0x0($s2)
/* 04257C 8004197C 3C0EF200 */  lui         $t6, (0xF2000000 >> 16)
/* 042580 80041980 AC4E0000 */  sw          $t6, 0x0($v0)
/* 042584 80041984 AC4D0004 */  sw          $t5, 0x4($v0)
.L80041988:
/* 042588 80041988 8E420000 */  lw          $v0, 0x0($s2)
.L8004198C:
/* 04258C 8004198C 3C0FFD10 */  lui         $t7, (0xFD100000 >> 16)
/* 042590 80041990 3C018017 */  lui         $at, %hi(D_80177CE8)
/* 042594 80041994 24590008 */  addiu       $t9, $v0, 0x8
/* 042598 80041998 AE590000 */  sw          $t9, 0x0($s2)
/* 04259C 8004199C AC4F0000 */  sw          $t7, 0x0($v0)
/* 0425A0 800419A0 8FB801C4 */  lw          $t8, 0x1C4($sp)
/* 0425A4 800419A4 AC580004 */  sw          $t8, 0x4($v0)
/* 0425A8 800419A8 C4267CE8 */  lwc1        $ft1, %lo(D_80177CE8)($at)
/* 0425AC 800419AC 3C01800D */  lui         $at, %hi(D_800D55A4)
/* 0425B0 800419B0 C42A55A4 */  lwc1        $ft3, %lo(D_800D55A4)($at)
/* 0425B4 800419B4 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 0425B8 800419B8 44817000 */  mtc1        $at, $fa1
/* 0425BC 800419BC 460A3002 */  mul.s       $fv0, $ft1, $ft3
/* 0425C0 800419C0 0C001388 */  jal         Math_ModF
/* 0425C4 800419C4 46000300 */   add.s      $fa0, $fv0, $fv0
/* 0425C8 800419C8 46000005 */  abs.s       $fv0, $fv0
/* 0425CC 800419CC 24100001 */  addiu       $s0, $zero, 0x1
/* 0425D0 800419D0 444EF800 */  cfc1        $t6, $31
/* 0425D4 800419D4 44D0F800 */  ctc1        $s0, $31
/* 0425D8 800419D8 3C0D8018 */  lui         $t5, %hi(gPlayer)
/* 0425DC 800419DC 3C198017 */  lui         $t9, %hi(gPlayerNum)
/* 0425E0 800419E0 46000124 */  cvt.w.s     $ft0, $fv0
/* 0425E4 800419E4 4450F800 */  cfc1        $s0, $31
/* 0425E8 800419E8 00000000 */  nop
/* 0425EC 800419EC 32100078 */  andi        $s0, $s0, 0x78
/* 0425F0 800419F0 12000012 */  beqz        $s0, .L80041A3C
/* 0425F4 800419F4 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 0425F8 800419F8 44812000 */  mtc1        $at, $ft0
/* 0425FC 800419FC 24100001 */  addiu       $s0, $zero, 0x1
/* 042600 80041A00 46040101 */  sub.s       $ft0, $fv0, $ft0
/* 042604 80041A04 44D0F800 */  ctc1        $s0, $31
/* 042608 80041A08 00000000 */  nop
/* 04260C 80041A0C 46002124 */  cvt.w.s     $ft0, $ft0
/* 042610 80041A10 4450F800 */  cfc1        $s0, $31
/* 042614 80041A14 00000000 */  nop
/* 042618 80041A18 32100078 */  andi        $s0, $s0, 0x78
/* 04261C 80041A1C 16000005 */  bnez        $s0, .L80041A34
/* 042620 80041A20 00000000 */   nop
/* 042624 80041A24 44102000 */  mfc1        $s0, $ft0
/* 042628 80041A28 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 04262C 80041A2C 10000007 */  b           .L80041A4C
/* 042630 80041A30 02018025 */   or         $s0, $s0, $at
.L80041A34:
/* 042634 80041A34 10000005 */  b           .L80041A4C
/* 042638 80041A38 2410FFFF */   addiu      $s0, $zero, -0x1
.L80041A3C:
/* 04263C 80041A3C 44102000 */  mfc1        $s0, $ft0
/* 042640 80041A40 00000000 */  nop
/* 042644 80041A44 0600FFFB */  bltz        $s0, .L80041A34
/* 042648 80041A48 00000000 */   nop
.L80041A4C:
/* 04264C 80041A4C 8F3978A0 */  lw          $t9, %lo(gPlayerNum)($t9)
/* 042650 80041A50 8DAD8280 */  lw          $t5, %lo(gPlayer)($t5)
/* 042654 80041A54 3C01800D */  lui         $at, %hi(D_800D55A8)
/* 042658 80041A58 00197880 */  sll         $t7, $t9, 2
/* 04265C 80041A5C 01F97821 */  addu        $t7, $t7, $t9
/* 042660 80041A60 000F78C0 */  sll         $t7, $t7, 3
/* 042664 80041A64 01F97823 */  subu        $t7, $t7, $t9
/* 042668 80041A68 000F7940 */  sll         $t7, $t7, 5
/* 04266C 80041A6C 01AFC021 */  addu        $t8, $t5, $t7
/* 042670 80041A70 44CEF800 */  ctc1        $t6, $31
/* 042674 80041A74 C70800AC */  lwc1        $ft2, 0xAC($t8)
/* 042678 80041A78 C42655A8 */  lwc1        $ft1, %lo(D_800D55A8)($at)
/* 04267C 80041A7C 3C01800D */  lui         $at, %hi(D_800D55AC)
/* 042680 80041A80 C42455AC */  lwc1        $ft0, %lo(D_800D55AC)($at)
/* 042684 80041A84 46083281 */  sub.s       $ft3, $ft1, $ft2
/* 042688 80041A88 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 04268C 80041A8C 44817000 */  mtc1        $at, $fa1
/* 042690 80041A90 46045302 */  mul.s       $fa0, $ft3, $ft0
/* 042694 80041A94 0C001388 */  jal         Math_ModF
/* 042698 80041A98 00000000 */   nop
/* 04269C 80041A9C 8E420000 */  lw          $v0, 0x0($s2)
/* 0426A0 80041AA0 3C19E800 */  lui         $t9, (0xE8000000 >> 16)
/* 0426A4 80041AA4 3C0FF510 */  lui         $t7, (0xF5101000 >> 16)
/* 0426A8 80041AA8 244E0008 */  addiu       $t6, $v0, 0x8
/* 0426AC 80041AAC AE4E0000 */  sw          $t6, 0x0($s2)
/* 0426B0 80041AB0 AC400004 */  sw          $zero, 0x4($v0)
/* 0426B4 80041AB4 AC590000 */  sw          $t9, 0x0($v0)
/* 0426B8 80041AB8 8E420000 */  lw          $v0, 0x0($s2)
/* 0426BC 80041ABC 3C180001 */  lui         $t8, (0x14050 >> 16)
/* 0426C0 80041AC0 37184050 */  ori         $t8, $t8, (0x14050 & 0xFFFF)
/* 0426C4 80041AC4 244D0008 */  addiu       $t5, $v0, 0x8
/* 0426C8 80041AC8 AE4D0000 */  sw          $t5, 0x0($s2)
/* 0426CC 80041ACC 35EF1000 */  ori         $t7, $t7, (0xF5101000 & 0xFFFF)
/* 0426D0 80041AD0 AC4F0000 */  sw          $t7, 0x0($v0)
/* 0426D4 80041AD4 AC580004 */  sw          $t8, 0x4($v0)
/* 0426D8 80041AD8 4459F800 */  cfc1        $t9, $31
/* 0426DC 80041ADC 240D0001 */  addiu       $t5, $zero, 0x1
/* 0426E0 80041AE0 44CDF800 */  ctc1        $t5, $31
/* 0426E4 80041AE4 8E460000 */  lw          $a2, 0x0($s2)
/* 0426E8 80041AE8 460001A4 */  cvt.w.s     $ft1, $fv0
/* 0426EC 80041AEC 24CE0008 */  addiu       $t6, $a2, 0x8
/* 0426F0 80041AF0 AE4E0000 */  sw          $t6, 0x0($s2)
/* 0426F4 80041AF4 444DF800 */  cfc1        $t5, $31
/* 0426F8 80041AF8 00000000 */  nop
/* 0426FC 80041AFC 31AD0078 */  andi        $t5, $t5, 0x78
/* 042700 80041B00 11A00012 */  beqz        $t5, .L80041B4C
/* 042704 80041B04 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 042708 80041B08 44813000 */  mtc1        $at, $ft1
/* 04270C 80041B0C 240D0001 */  addiu       $t5, $zero, 0x1
/* 042710 80041B10 46060181 */  sub.s       $ft1, $fv0, $ft1
/* 042714 80041B14 44CDF800 */  ctc1        $t5, $31
/* 042718 80041B18 00000000 */  nop
/* 04271C 80041B1C 460031A4 */  cvt.w.s     $ft1, $ft1
/* 042720 80041B20 444DF800 */  cfc1        $t5, $31
/* 042724 80041B24 00000000 */  nop
/* 042728 80041B28 31AD0078 */  andi        $t5, $t5, 0x78
/* 04272C 80041B2C 15A00005 */  bnez        $t5, .L80041B44
/* 042730 80041B30 00000000 */   nop
/* 042734 80041B34 440D3000 */  mfc1        $t5, $ft1
/* 042738 80041B38 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 04273C 80041B3C 10000007 */  b           .L80041B5C
/* 042740 80041B40 01A16825 */   or         $t5, $t5, $at
.L80041B44:
/* 042744 80041B44 10000005 */  b           .L80041B5C
/* 042748 80041B48 240DFFFF */   addiu      $t5, $zero, -0x1
.L80041B4C:
/* 04274C 80041B4C 440D3000 */  mfc1        $t5, $ft1
/* 042750 80041B50 00000000 */  nop
/* 042754 80041B54 05A0FFFB */  bltz        $t5, .L80041B44
/* 042758 80041B58 00000000 */   nop
.L80041B5C:
/* 04275C 80041B5C 31AF0FFF */  andi        $t7, $t5, 0xFFF
/* 042760 80041B60 000FC300 */  sll         $t8, $t7, 12
/* 042764 80041B64 44D9F800 */  ctc1        $t9, $31
/* 042768 80041B68 3C01F200 */  lui         $at, (0xF2000000 >> 16)
/* 04276C 80041B6C 03017025 */  or          $t6, $t8, $at
/* 042770 80041B70 32190FFF */  andi        $t9, $s0, 0xFFF
/* 042774 80041B74 3C0F0007 */  lui         $t7, (0x7C07C >> 16)
/* 042778 80041B78 35EFC07C */  ori         $t7, $t7, (0x7C07C & 0xFFFF)
/* 04277C 80041B7C 01D96825 */  or          $t5, $t6, $t9
/* 042780 80041B80 ACCD0000 */  sw          $t5, 0x0($a2)
/* 042784 80041B84 ACCF0004 */  sw          $t7, 0x4($a2)
/* 042788 80041B88 0C0015C2 */  jal         Matrix_Push
/* 04278C 80041B8C 02802025 */   or         $a0, $s4, $zero
/* 042790 80041B90 4405A000 */  mfc1        $a1, $fs0
/* 042794 80041B94 4406A000 */  mfc1        $a2, $fs0
/* 042798 80041B98 3C07C53B */  lui         $a3, (0xC53B8000 >> 16)
/* 04279C 80041B9C 24180001 */  addiu       $t8, $zero, 0x1
/* 0427A0 80041BA0 AFB80010 */  sw          $t8, 0x10($sp)
/* 0427A4 80041BA4 34E78000 */  ori         $a3, $a3, (0xC53B8000 & 0xFFFF)
/* 0427A8 80041BA8 0C0016C0 */  jal         Matrix_Translate
/* 0427AC 80041BAC 8E840000 */   lw         $a0, 0x0($s4)
/* 0427B0 80041BB0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 0427B4 80041BB4 44810000 */  mtc1        $at, $fv0
/* 0427B8 80041BB8 240E0001 */  addiu       $t6, $zero, 0x1
/* 0427BC 80041BBC AFAE0010 */  sw          $t6, 0x10($sp)
/* 0427C0 80041BC0 44050000 */  mfc1        $a1, $fv0
/* 0427C4 80041BC4 44060000 */  mfc1        $a2, $fv0
/* 0427C8 80041BC8 8E840000 */  lw          $a0, 0x0($s4)
/* 0427CC 80041BCC 0C00170D */  jal         Matrix_Scale
/* 0427D0 80041BD0 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 0427D4 80041BD4 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0427D8 80041BD8 02402025 */   or         $a0, $s2, $zero
/* 0427DC 80041BDC 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 0427E0 80041BE0 8E420000 */  lw          $v0, 0x0($s2)
/* 0427E4 80041BE4 24590008 */  addiu       $t9, $v0, 0x8
/* 0427E8 80041BE8 AE590000 */  sw          $t9, 0x0($s2)
/* 0427EC 80041BEC AC510004 */  sw          $s1, 0x4($v0)
/* 0427F0 80041BF0 AC530000 */  sw          $s3, 0x0($v0)
/* 0427F4 80041BF4 0C0015D0 */  jal         Matrix_Pop
/* 0427F8 80041BF8 02802025 */   or         $a0, $s4, $zero
/* 0427FC 80041BFC 0C0015C2 */  jal         Matrix_Push
/* 042800 80041C00 02802025 */   or         $a0, $s4, $zero
/* 042804 80041C04 4405A000 */  mfc1        $a1, $fs0
/* 042808 80041C08 4406A000 */  mfc1        $a2, $fs0
/* 04280C 80041C0C 3C07453B */  lui         $a3, (0x453B8000 >> 16)
/* 042810 80041C10 240D0001 */  addiu       $t5, $zero, 0x1
/* 042814 80041C14 AFAD0010 */  sw          $t5, 0x10($sp)
/* 042818 80041C18 34E78000 */  ori         $a3, $a3, (0x453B8000 & 0xFFFF)
/* 04281C 80041C1C 0C0016C0 */  jal         Matrix_Translate
/* 042820 80041C20 8E840000 */   lw         $a0, 0x0($s4)
/* 042824 80041C24 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 042828 80041C28 44810000 */  mtc1        $at, $fv0
/* 04282C 80041C2C 240F0001 */  addiu       $t7, $zero, 0x1
/* 042830 80041C30 AFAF0010 */  sw          $t7, 0x10($sp)
/* 042834 80041C34 44050000 */  mfc1        $a1, $fv0
/* 042838 80041C38 44060000 */  mfc1        $a2, $fv0
/* 04283C 80041C3C 8E840000 */  lw          $a0, 0x0($s4)
/* 042840 80041C40 0C00170D */  jal         Matrix_Scale
/* 042844 80041C44 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 042848 80041C48 0C001BAE */  jal         Matrix_SetGfxMtx
/* 04284C 80041C4C 02402025 */   or         $a0, $s2, $zero
/* 042850 80041C50 8E420000 */  lw          $v0, 0x0($s2)
/* 042854 80041C54 24580008 */  addiu       $t8, $v0, 0x8
/* 042858 80041C58 AE580000 */  sw          $t8, 0x0($s2)
/* 04285C 80041C5C AC510004 */  sw          $s1, 0x4($v0)
/* 042860 80041C60 AC530000 */  sw          $s3, 0x0($v0)
/* 042864 80041C64 0C0015D0 */  jal         Matrix_Pop
/* 042868 80041C68 02802025 */   or         $a0, $s4, $zero
/* 04286C 80041C6C 10000427 */  b           .L80042D0C
/* 042870 80041C70 00000000 */   nop
.L80041C74:
/* 042874 80041C74 3C0E8018 */  lui         $t6, %hi(gFogNear)
/* 042878 80041C78 3C198018 */  lui         $t9, %hi(gFogFar)
/* 04287C 80041C7C 8F3983DC */  lw          $t9, %lo(gFogFar)($t9)
/* 042880 80041C80 8DCE83D8 */  lw          $t6, %lo(gFogNear)($t6)
/* 042884 80041C84 3C138018 */  lui         $s3, %hi(gFogRed)
/* 042888 80041C88 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 04288C 80041C8C 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 042890 80041C90 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 042894 80041C94 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 042898 80041C98 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 04289C 80041C9C 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 0428A0 80041CA0 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 0428A4 80041CA4 8E640000 */  lw          $a0, 0x0($s3)
/* 0428A8 80041CA8 AFB90014 */  sw          $t9, 0x14($sp)
/* 0428AC 80041CAC 0C02E874 */  jal         RCP_SetupDL_29
/* 0428B0 80041CB0 AFAE0010 */   sw         $t6, 0x10($sp)
/* 0428B4 80041CB4 8E2D0000 */  lw          $t5, 0x0($s1)
/* 0428B8 80041CB8 3C11800D */  lui         $s1, %hi(D_800C9E64)
/* 0428BC 80041CBC 26319E64 */  addiu       $s1, $s1, %lo(D_800C9E64)
/* 0428C0 80041CC0 15A00055 */  bnez        $t5, .L80041E18
/* 0428C4 80041CC4 3C10800D */   lui        $s0, %hi(D_800C9E74)
/* 0428C8 80041CC8 3C028017 */  lui         $v0, %hi(D_80177CE8)
/* 0428CC 80041CCC 24427CE8 */  addiu       $v0, $v0, %lo(D_80177CE8)
/* 0428D0 80041CD0 3C014391 */  lui         $at, (0x43910000 >> 16)
/* 0428D4 80041CD4 44811000 */  mtc1        $at, $fv1
/* 0428D8 80041CD8 C4400000 */  lwc1        $fv0, 0x0($v0)
/* 0428DC 80041CDC 4600103C */  c.lt.s      $fv1, $fv0
/* 0428E0 80041CE0 00000000 */  nop
/* 0428E4 80041CE4 45000003 */  bc1f        .L80041CF4
/* 0428E8 80041CE8 00000000 */   nop
/* 0428EC 80041CEC 46020201 */  sub.s       $ft2, $fv0, $fv1
/* 0428F0 80041CF0 E4480000 */  swc1        $ft2, 0x0($v0)
.L80041CF4:
/* 0428F4 80041CF4 0C0015C2 */  jal         Matrix_Push
/* 0428F8 80041CF8 02802025 */   or         $a0, $s4, $zero
/* 0428FC 80041CFC 3C01800D */  lui         $at, %hi(D_800D55B0)
/* 042900 80041D00 C42A55B0 */  lwc1        $ft3, %lo(D_800D55B0)($at)
/* 042904 80041D04 3C018017 */  lui         $at, %hi(D_80177CE8)
/* 042908 80041D08 C4247CE8 */  lwc1        $ft0, %lo(D_80177CE8)($at)
/* 04290C 80041D0C 4405A000 */  mfc1        $a1, $fs0
/* 042910 80041D10 4406A000 */  mfc1        $a2, $fs0
/* 042914 80041D14 46045180 */  add.s       $ft1, $ft3, $ft0
/* 042918 80041D18 240F0001 */  addiu       $t7, $zero, 0x1
/* 04291C 80041D1C AFAF0010 */  sw          $t7, 0x10($sp)
/* 042920 80041D20 8E840000 */  lw          $a0, 0x0($s4)
/* 042924 80041D24 44073000 */  mfc1        $a3, $ft1
/* 042928 80041D28 0C0016C0 */  jal         Matrix_Translate
/* 04292C 80041D2C 00000000 */   nop
/* 042930 80041D30 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 042934 80041D34 44810000 */  mtc1        $at, $fv0
/* 042938 80041D38 24180001 */  addiu       $t8, $zero, 0x1
/* 04293C 80041D3C AFB80010 */  sw          $t8, 0x10($sp)
/* 042940 80041D40 44050000 */  mfc1        $a1, $fv0
/* 042944 80041D44 44060000 */  mfc1        $a2, $fv0
/* 042948 80041D48 8E840000 */  lw          $a0, 0x0($s4)
/* 04294C 80041D4C 0C00170D */  jal         Matrix_Scale
/* 042950 80041D50 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 042954 80041D54 0C001BAE */  jal         Matrix_SetGfxMtx
/* 042958 80041D58 02402025 */   or         $a0, $s2, $zero
/* 04295C 80041D5C 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 042960 80041D60 8E420000 */  lw          $v0, 0x0($s2)
/* 042964 80041D64 3C050600 */  lui         $a1, %hi(D_6005880)
/* 042968 80041D68 24A55880 */  addiu       $a1, $a1, %lo(D_6005880)
/* 04296C 80041D6C 244E0008 */  addiu       $t6, $v0, 0x8
/* 042970 80041D70 AE4E0000 */  sw          $t6, 0x0($s2)
/* 042974 80041D74 AC450004 */  sw          $a1, 0x4($v0)
/* 042978 80041D78 AC530000 */  sw          $s3, 0x0($v0)
/* 04297C 80041D7C 02802025 */  or          $a0, $s4, $zero
/* 042980 80041D80 0C0015D0 */  jal         Matrix_Pop
/* 042984 80041D84 AFA5004C */   sw         $a1, 0x4C($sp)
/* 042988 80041D88 0C0015C2 */  jal         Matrix_Push
/* 04298C 80041D8C 02802025 */   or         $a0, $s4, $zero
/* 042990 80041D90 3C01800D */  lui         $at, %hi(D_800D55B4)
/* 042994 80041D94 C42855B4 */  lwc1        $ft2, %lo(D_800D55B4)($at)
/* 042998 80041D98 3C018017 */  lui         $at, %hi(D_80177CE8)
/* 04299C 80041D9C C42A7CE8 */  lwc1        $ft3, %lo(D_80177CE8)($at)
/* 0429A0 80041DA0 4405A000 */  mfc1        $a1, $fs0
/* 0429A4 80041DA4 4406A000 */  mfc1        $a2, $fs0
/* 0429A8 80041DA8 460A4100 */  add.s       $ft0, $ft2, $ft3
/* 0429AC 80041DAC 24190001 */  addiu       $t9, $zero, 0x1
/* 0429B0 80041DB0 AFB90010 */  sw          $t9, 0x10($sp)
/* 0429B4 80041DB4 8E840000 */  lw          $a0, 0x0($s4)
/* 0429B8 80041DB8 44072000 */  mfc1        $a3, $ft0
/* 0429BC 80041DBC 0C0016C0 */  jal         Matrix_Translate
/* 0429C0 80041DC0 00000000 */   nop
/* 0429C4 80041DC4 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 0429C8 80041DC8 44810000 */  mtc1        $at, $fv0
/* 0429CC 80041DCC 240D0001 */  addiu       $t5, $zero, 0x1
/* 0429D0 80041DD0 AFAD0010 */  sw          $t5, 0x10($sp)
/* 0429D4 80041DD4 44050000 */  mfc1        $a1, $fv0
/* 0429D8 80041DD8 44060000 */  mfc1        $a2, $fv0
/* 0429DC 80041DDC 8E840000 */  lw          $a0, 0x0($s4)
/* 0429E0 80041DE0 0C00170D */  jal         Matrix_Scale
/* 0429E4 80041DE4 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 0429E8 80041DE8 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0429EC 80041DEC 02402025 */   or         $a0, $s2, $zero
/* 0429F0 80041DF0 8E420000 */  lw          $v0, 0x0($s2)
/* 0429F4 80041DF4 244F0008 */  addiu       $t7, $v0, 0x8
/* 0429F8 80041DF8 AE4F0000 */  sw          $t7, 0x0($s2)
/* 0429FC 80041DFC AC530000 */  sw          $s3, 0x0($v0)
/* 042A00 80041E00 8FB8004C */  lw          $t8, 0x4C($sp)
/* 042A04 80041E04 AC580004 */  sw          $t8, 0x4($v0)
/* 042A08 80041E08 0C0015D0 */  jal         Matrix_Pop
/* 042A0C 80041E0C 02802025 */   or         $a0, $s4, $zero
/* 042A10 80041E10 100003BE */  b           .L80042D0C
/* 042A14 80041E14 00000000 */   nop
.L80041E18:
/* 042A18 80041E18 3C0E0600 */  lui         $t6, %hi(D_6005880)
/* 042A1C 80041E1C 25CE5880 */  addiu       $t6, $t6, %lo(D_6005880)
/* 042A20 80041E20 AFAE004C */  sw          $t6, 0x4C($sp)
/* 042A24 80041E24 26109E74 */  addiu       $s0, $s0, %lo(D_800C9E74)
/* 042A28 80041E28 3C130600 */  lui         $s3, (0x6000000 >> 16)
.L80041E2C:
/* 042A2C 80041E2C 0C0015C2 */  jal         Matrix_Push
/* 042A30 80041E30 02802025 */   or         $a0, $s4, $zero
/* 042A34 80041E34 4406A000 */  mfc1        $a2, $fs0
/* 042A38 80041E38 24190001 */  addiu       $t9, $zero, 0x1
/* 042A3C 80041E3C AFB90010 */  sw          $t9, 0x10($sp)
/* 042A40 80041E40 8E840000 */  lw          $a0, 0x0($s4)
/* 042A44 80041E44 8E250000 */  lw          $a1, 0x0($s1)
/* 042A48 80041E48 0C0016C0 */  jal         Matrix_Translate
/* 042A4C 80041E4C 8E070000 */   lw         $a3, 0x0($s0)
/* 042A50 80041E50 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 042A54 80041E54 44810000 */  mtc1        $at, $fv0
/* 042A58 80041E58 240D0001 */  addiu       $t5, $zero, 0x1
/* 042A5C 80041E5C AFAD0010 */  sw          $t5, 0x10($sp)
/* 042A60 80041E60 44060000 */  mfc1        $a2, $fv0
/* 042A64 80041E64 44070000 */  mfc1        $a3, $fv0
/* 042A68 80041E68 8E840000 */  lw          $a0, 0x0($s4)
/* 042A6C 80041E6C 0C00170D */  jal         Matrix_Scale
/* 042A70 80041E70 3C053FC0 */   lui        $a1, (0x3FC00000 >> 16)
/* 042A74 80041E74 0C001BAE */  jal         Matrix_SetGfxMtx
/* 042A78 80041E78 02402025 */   or         $a0, $s2, $zero
/* 042A7C 80041E7C 8E420000 */  lw          $v0, 0x0($s2)
/* 042A80 80041E80 244F0008 */  addiu       $t7, $v0, 0x8
/* 042A84 80041E84 AE4F0000 */  sw          $t7, 0x0($s2)
/* 042A88 80041E88 AC530000 */  sw          $s3, 0x0($v0)
/* 042A8C 80041E8C 8FB8004C */  lw          $t8, 0x4C($sp)
/* 042A90 80041E90 AC580004 */  sw          $t8, 0x4($v0)
/* 042A94 80041E94 0C0015D0 */  jal         Matrix_Pop
/* 042A98 80041E98 02802025 */   or         $a0, $s4, $zero
/* 042A9C 80041E9C 3C0E800D */  lui         $t6, %hi(D_800C9E84)
/* 042AA0 80041EA0 25CE9E84 */  addiu       $t6, $t6, %lo(D_800C9E84)
/* 042AA4 80041EA4 26100004 */  addiu       $s0, $s0, 0x4
/* 042AA8 80041EA8 160EFFE0 */  bne         $s0, $t6, .L80041E2C
/* 042AAC 80041EAC 26310004 */   addiu      $s1, $s1, 0x4
/* 042AB0 80041EB0 10000396 */  b           .L80042D0C
/* 042AB4 80041EB4 00000000 */   nop
.L80041EB8:
/* 042AB8 80041EB8 02402025 */  or          $a0, $s2, $zero
/* 042ABC 80041EBC 0C02E374 */  jal         RCP_SetupDL
/* 042AC0 80041EC0 24050014 */   addiu      $a1, $zero, 0x14
/* 042AC4 80041EC4 8E420000 */  lw          $v0, 0x0($s2)
/* 042AC8 80041EC8 3C0DBC00 */  lui         $t5, (0xBC000008 >> 16)
/* 042ACC 80041ECC 35AD0008 */  ori         $t5, $t5, (0xBC000008 & 0xFFFF)
/* 042AD0 80041ED0 24590008 */  addiu       $t9, $v0, 0x8
/* 042AD4 80041ED4 AE590000 */  sw          $t9, 0x0($s2)
/* 042AD8 80041ED8 AC4D0000 */  sw          $t5, 0x0($v0)
/* 042ADC 80041EDC 3C038018 */  lui         $v1, %hi(gFogNear)
/* 042AE0 80041EE0 3C0F8018 */  lui         $t7, %hi(gFogFar)
/* 042AE4 80041EE4 8DEF83DC */  lw          $t7, %lo(gFogFar)($t7)
/* 042AE8 80041EE8 8C6383D8 */  lw          $v1, %lo(gFogNear)($v1)
/* 042AEC 80041EEC 3C180001 */  lui         $t8, (0x1F400 >> 16)
/* 042AF0 80041EF0 3718F400 */  ori         $t8, $t8, (0x1F400 & 0xFFFF)
/* 042AF4 80041EF4 01E32823 */  subu        $a1, $t7, $v1
/* 042AF8 80041EF8 0305001A */  div         $zero, $t8, $a1
/* 042AFC 80041EFC 00037823 */  negu        $t7, $v1
/* 042B00 80041F00 0000C812 */  mflo        $t9
/* 042B04 80041F04 00196C00 */  sll         $t5, $t9, 16
/* 042B08 80041F08 00402025 */  or          $a0, $v0, $zero
/* 042B0C 80041F0C 14A00002 */  bnez        $a1, .L80041F18
/* 042B10 80041F10 00000000 */   nop
/* 042B14 80041F14 0007000D */  break       7
.L80041F18:
/* 042B18 80041F18 2401FFFF */  addiu       $at, $zero, -0x1
/* 042B1C 80041F1C 14A10004 */  bne         $a1, $at, .L80041F30
/* 042B20 80041F20 3C018000 */   lui        $at, (0x80000000 >> 16)
/* 042B24 80041F24 17010002 */  bne         $t8, $at, .L80041F30
/* 042B28 80041F28 00000000 */   nop
/* 042B2C 80041F2C 0006000D */  break       6
.L80041F30:
/* 042B30 80041F30 3C010001 */  lui         $at, (0x1F400 >> 16)
/* 042B34 80041F34 3421F400 */  ori         $at, $at, (0x1F400 & 0xFFFF)
/* 042B38 80041F38 000FC200 */  sll         $t8, $t7, 8
/* 042B3C 80041F3C 03017021 */  addu        $t6, $t8, $at
/* 042B40 80041F40 01C5001A */  div         $zero, $t6, $a1
/* 042B44 80041F44 0000C812 */  mflo        $t9
/* 042B48 80041F48 332FFFFF */  andi        $t7, $t9, 0xFFFF
/* 042B4C 80041F4C 01AFC025 */  or          $t8, $t5, $t7
/* 042B50 80041F50 AC980004 */  sw          $t8, 0x4($a0)
/* 042B54 80041F54 14A00002 */  bnez        $a1, .L80041F60
/* 042B58 80041F58 00000000 */   nop
/* 042B5C 80041F5C 0007000D */  break       7
.L80041F60:
/* 042B60 80041F60 2401FFFF */  addiu       $at, $zero, -0x1
/* 042B64 80041F64 14A10004 */  bne         $a1, $at, .L80041F78
/* 042B68 80041F68 3C018000 */   lui        $at, (0x80000000 >> 16)
/* 042B6C 80041F6C 15C10002 */  bne         $t6, $at, .L80041F78
/* 042B70 80041F70 00000000 */   nop
/* 042B74 80041F74 0006000D */  break       6
.L80041F78:
/* 042B78 80041F78 3C068016 */  lui         $a2, %hi(D_8015F964)
/* 042B7C 80041F7C 90C6F964 */  lbu         $a2, %lo(D_8015F964)($a2)
/* 042B80 80041F80 3C028017 */  lui         $v0, %hi(D_80177AC8)
/* 042B84 80041F84 54C000F5 */  bnel        $a2, $zero, .L8004235C
/* 042B88 80041F88 3C118000 */   lui        $s1, (0x80000000 >> 16)
/* 042B8C 80041F8C 90427AC8 */  lbu         $v0, %lo(D_80177AC8)($v0)
/* 042B90 80041F90 24010002 */  addiu       $at, $zero, 0x2
/* 042B94 80041F94 3C0CFD10 */  lui         $t4, (0xFD100000 >> 16)
/* 042B98 80041F98 10400003 */  beqz        $v0, .L80041FA8
/* 042B9C 80041F9C 3C118000 */   lui        $s1, (0x80000000 >> 16)
/* 042BA0 80041FA0 544100EE */  bnel        $v0, $at, .L8004235C
/* 042BA4 80041FA4 3C118000 */   lui        $s1, (0x80000000 >> 16)
.L80041FA8:
/* 042BA8 80041FA8 8E420000 */  lw          $v0, 0x0($s2)
/* 042BAC 80041FAC 3C040601 */  lui         $a0, %hi(D_600AB68)
/* 042BB0 80041FB0 2484AB68 */  addiu       $a0, $a0, %lo(D_600AB68)
/* 042BB4 80041FB4 0004C900 */  sll         $t9, $a0, 4
/* 042BB8 80041FB8 00196F02 */  srl         $t5, $t9, 28
/* 042BBC 80041FBC 3C18800E */  lui         $t8, %hi(gSegments)
/* 042BC0 80041FC0 244E0008 */  addiu       $t6, $v0, 0x8
/* 042BC4 80041FC4 AE4E0000 */  sw          $t6, 0x0($s2)
/* 042BC8 80041FC8 27181FD0 */  addiu       $t8, $t8, %lo(gSegments)
/* 042BCC 80041FCC 000D7880 */  sll         $t7, $t5, 2
/* 042BD0 80041FD0 01F82821 */  addu        $a1, $t7, $t8
/* 042BD4 80041FD4 AC4C0000 */  sw          $t4, 0x0($v0)
/* 042BD8 80041FD8 8CAE0000 */  lw          $t6, 0x0($a1)
/* 042BDC 80041FDC 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 042BE0 80041FE0 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 042BE4 80041FE4 00813024 */  and         $a2, $a0, $at
/* 042BE8 80041FE8 01C6C821 */  addu        $t9, $t6, $a2
/* 042BEC 80041FEC 03316821 */  addu        $t5, $t9, $s1
/* 042BF0 80041FF0 AC4D0004 */  sw          $t5, 0x4($v0)
/* 042BF4 80041FF4 8E420000 */  lw          $v0, 0x0($s2)
/* 042BF8 80041FF8 3C18E800 */  lui         $t8, (0xE8000000 >> 16)
/* 042BFC 80041FFC 3C018017 */  lui         $at, %hi(D_80177CE8)
/* 042C00 80042000 244F0008 */  addiu       $t7, $v0, 0x8
/* 042C04 80042004 AE4F0000 */  sw          $t7, 0x0($s2)
/* 042C08 80042008 AC400004 */  sw          $zero, 0x4($v0)
/* 042C0C 8004200C AC580000 */  sw          $t8, 0x0($v0)
/* 042C10 80042010 8E420000 */  lw          $v0, 0x0($s2)
/* 042C14 80042014 3C19F510 */  lui         $t9, (0xF5100000 >> 16)
/* 042C18 80042018 3C0D0700 */  lui         $t5, (0x7000000 >> 16)
/* 042C1C 8004201C 244E0008 */  addiu       $t6, $v0, 0x8
/* 042C20 80042020 AE4E0000 */  sw          $t6, 0x0($s2)
/* 042C24 80042024 AC4D0004 */  sw          $t5, 0x4($v0)
/* 042C28 80042028 AC590000 */  sw          $t9, 0x0($v0)
/* 042C2C 8004202C 8E420000 */  lw          $v0, 0x0($s2)
/* 042C30 80042030 3C18E600 */  lui         $t8, (0xE6000000 >> 16)
/* 042C34 80042034 3C19F300 */  lui         $t9, (0xF3000000 >> 16)
/* 042C38 80042038 244F0008 */  addiu       $t7, $v0, 0x8
/* 042C3C 8004203C AE4F0000 */  sw          $t7, 0x0($s2)
/* 042C40 80042040 AC400004 */  sw          $zero, 0x4($v0)
/* 042C44 80042044 AC580000 */  sw          $t8, 0x0($v0)
/* 042C48 80042048 8E420000 */  lw          $v0, 0x0($s2)
/* 042C4C 8004204C 3C0D073F */  lui         $t5, (0x73FF100 >> 16)
/* 042C50 80042050 35ADF100 */  ori         $t5, $t5, (0x73FF100 & 0xFFFF)
/* 042C54 80042054 244E0008 */  addiu       $t6, $v0, 0x8
/* 042C58 80042058 AE4E0000 */  sw          $t6, 0x0($s2)
/* 042C5C 8004205C AC4D0004 */  sw          $t5, 0x4($v0)
/* 042C60 80042060 AC590000 */  sw          $t9, 0x0($v0)
/* 042C64 80042064 8E420000 */  lw          $v0, 0x0($s2)
/* 042C68 80042068 244F0008 */  addiu       $t7, $v0, 0x8
/* 042C6C 8004206C AE4F0000 */  sw          $t7, 0x0($s2)
/* 042C70 80042070 AC4C0000 */  sw          $t4, 0x0($v0)
/* 042C74 80042074 8CB80000 */  lw          $t8, 0x0($a1)
/* 042C78 80042078 03067021 */  addu        $t6, $t8, $a2
/* 042C7C 8004207C 01D1C821 */  addu        $t9, $t6, $s1
/* 042C80 80042080 AC590004 */  sw          $t9, 0x4($v0)
/* 042C84 80042084 C4267CE8 */  lwc1        $ft1, %lo(D_80177CE8)($at)
/* 042C88 80042088 3C01800D */  lui         $at, %hi(D_800D55B8)
/* 042C8C 8004208C C42855B8 */  lwc1        $ft2, %lo(D_800D55B8)($at)
/* 042C90 80042090 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 042C94 80042094 44817000 */  mtc1        $at, $fa1
/* 042C98 80042098 46083002 */  mul.s       $fv0, $ft1, $ft2
/* 042C9C 8004209C 0C001388 */  jal         Math_ModF
/* 042CA0 800420A0 46000300 */   add.s      $fa0, $fv0, $fv0
/* 042CA4 800420A4 46000005 */  abs.s       $fv0, $fv0
/* 042CA8 800420A8 24100001 */  addiu       $s0, $zero, 0x1
/* 042CAC 800420AC 444DF800 */  cfc1        $t5, $31
/* 042CB0 800420B0 44D0F800 */  ctc1        $s0, $31
/* 042CB4 800420B4 3C0F8018 */  lui         $t7, %hi(gPlayer)
/* 042CB8 800420B8 3C188017 */  lui         $t8, %hi(gPlayerNum)
/* 042CBC 800420BC 460002A4 */  cvt.w.s     $ft3, $fv0
/* 042CC0 800420C0 4450F800 */  cfc1        $s0, $31
/* 042CC4 800420C4 00000000 */  nop
/* 042CC8 800420C8 32100078 */  andi        $s0, $s0, 0x78
/* 042CCC 800420CC 12000012 */  beqz        $s0, .L80042118
/* 042CD0 800420D0 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 042CD4 800420D4 44815000 */  mtc1        $at, $ft3
/* 042CD8 800420D8 24100001 */  addiu       $s0, $zero, 0x1
/* 042CDC 800420DC 460A0281 */  sub.s       $ft3, $fv0, $ft3
/* 042CE0 800420E0 44D0F800 */  ctc1        $s0, $31
/* 042CE4 800420E4 00000000 */  nop
/* 042CE8 800420E8 460052A4 */  cvt.w.s     $ft3, $ft3
/* 042CEC 800420EC 4450F800 */  cfc1        $s0, $31
/* 042CF0 800420F0 00000000 */  nop
/* 042CF4 800420F4 32100078 */  andi        $s0, $s0, 0x78
/* 042CF8 800420F8 16000005 */  bnez        $s0, .L80042110
/* 042CFC 800420FC 00000000 */   nop
/* 042D00 80042100 44105000 */  mfc1        $s0, $ft3
/* 042D04 80042104 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 042D08 80042108 10000007 */  b           .L80042128
/* 042D0C 8004210C 02018025 */   or         $s0, $s0, $at
.L80042110:
/* 042D10 80042110 10000005 */  b           .L80042128
/* 042D14 80042114 2410FFFF */   addiu      $s0, $zero, -0x1
.L80042118:
/* 042D18 80042118 44105000 */  mfc1        $s0, $ft3
/* 042D1C 8004211C 00000000 */  nop
/* 042D20 80042120 0600FFFB */  bltz        $s0, .L80042110
/* 042D24 80042124 00000000 */   nop
.L80042128:
/* 042D28 80042128 8F1878A0 */  lw          $t8, %lo(gPlayerNum)($t8)
/* 042D2C 8004212C 8DEF8280 */  lw          $t7, %lo(gPlayer)($t7)
/* 042D30 80042130 3C01800D */  lui         $at, %hi(D_800D55BC)
/* 042D34 80042134 00187080 */  sll         $t6, $t8, 2
/* 042D38 80042138 01D87021 */  addu        $t6, $t6, $t8
/* 042D3C 8004213C 000E70C0 */  sll         $t6, $t6, 3
/* 042D40 80042140 01D87023 */  subu        $t6, $t6, $t8
/* 042D44 80042144 000E7140 */  sll         $t6, $t6, 5
/* 042D48 80042148 01EEC821 */  addu        $t9, $t7, $t6
/* 042D4C 8004214C 44CDF800 */  ctc1        $t5, $31
/* 042D50 80042150 C72400AC */  lwc1        $ft0, 0xAC($t9)
/* 042D54 80042154 C42655BC */  lwc1        $ft1, %lo(D_800D55BC)($at)
/* 042D58 80042158 3C01800D */  lui         $at, %hi(D_800D55C0)
/* 042D5C 8004215C C42A55C0 */  lwc1        $ft3, %lo(D_800D55C0)($at)
/* 042D60 80042160 46043201 */  sub.s       $ft2, $ft1, $ft0
/* 042D64 80042164 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 042D68 80042168 44817000 */  mtc1        $at, $fa1
/* 042D6C 8004216C 460A4302 */  mul.s       $fa0, $ft2, $ft3
/* 042D70 80042170 0C001388 */  jal         Math_ModF
/* 042D74 80042174 00000000 */   nop
/* 042D78 80042178 8E420000 */  lw          $v0, 0x0($s2)
/* 042D7C 8004217C 3C18E800 */  lui         $t8, (0xE8000000 >> 16)
/* 042D80 80042180 3C0EF510 */  lui         $t6, (0xF5101000 >> 16)
/* 042D84 80042184 244D0008 */  addiu       $t5, $v0, 0x8
/* 042D88 80042188 AE4D0000 */  sw          $t5, 0x0($s2)
/* 042D8C 8004218C AC400004 */  sw          $zero, 0x4($v0)
/* 042D90 80042190 AC580000 */  sw          $t8, 0x0($v0)
/* 042D94 80042194 8E420000 */  lw          $v0, 0x0($s2)
/* 042D98 80042198 3C190001 */  lui         $t9, (0x14050 >> 16)
/* 042D9C 8004219C 37394050 */  ori         $t9, $t9, (0x14050 & 0xFFFF)
/* 042DA0 800421A0 244F0008 */  addiu       $t7, $v0, 0x8
/* 042DA4 800421A4 AE4F0000 */  sw          $t7, 0x0($s2)
/* 042DA8 800421A8 35CE1000 */  ori         $t6, $t6, (0xF5101000 & 0xFFFF)
/* 042DAC 800421AC AC4E0000 */  sw          $t6, 0x0($v0)
/* 042DB0 800421B0 AC590004 */  sw          $t9, 0x4($v0)
/* 042DB4 800421B4 4458F800 */  cfc1        $t8, $31
/* 042DB8 800421B8 240F0001 */  addiu       $t7, $zero, 0x1
/* 042DBC 800421BC 44CFF800 */  ctc1        $t7, $31
/* 042DC0 800421C0 8E460000 */  lw          $a2, 0x0($s2)
/* 042DC4 800421C4 460001A4 */  cvt.w.s     $ft1, $fv0
/* 042DC8 800421C8 24CD0008 */  addiu       $t5, $a2, 0x8
/* 042DCC 800421CC AE4D0000 */  sw          $t5, 0x0($s2)
/* 042DD0 800421D0 444FF800 */  cfc1        $t7, $31
/* 042DD4 800421D4 00000000 */  nop
/* 042DD8 800421D8 31EF0078 */  andi        $t7, $t7, 0x78
/* 042DDC 800421DC 11E00012 */  beqz        $t7, .L80042228
/* 042DE0 800421E0 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 042DE4 800421E4 44813000 */  mtc1        $at, $ft1
/* 042DE8 800421E8 240F0001 */  addiu       $t7, $zero, 0x1
/* 042DEC 800421EC 46060181 */  sub.s       $ft1, $fv0, $ft1
/* 042DF0 800421F0 44CFF800 */  ctc1        $t7, $31
/* 042DF4 800421F4 00000000 */  nop
/* 042DF8 800421F8 460031A4 */  cvt.w.s     $ft1, $ft1
/* 042DFC 800421FC 444FF800 */  cfc1        $t7, $31
/* 042E00 80042200 00000000 */  nop
/* 042E04 80042204 31EF0078 */  andi        $t7, $t7, 0x78
/* 042E08 80042208 15E00005 */  bnez        $t7, .L80042220
/* 042E0C 8004220C 00000000 */   nop
/* 042E10 80042210 440F3000 */  mfc1        $t7, $ft1
/* 042E14 80042214 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 042E18 80042218 10000007 */  b           .L80042238
/* 042E1C 8004221C 01E17825 */   or         $t7, $t7, $at
.L80042220:
/* 042E20 80042220 10000005 */  b           .L80042238
/* 042E24 80042224 240FFFFF */   addiu      $t7, $zero, -0x1
.L80042228:
/* 042E28 80042228 440F3000 */  mfc1        $t7, $ft1
/* 042E2C 8004222C 00000000 */  nop
/* 042E30 80042230 05E0FFFB */  bltz        $t7, .L80042220
/* 042E34 80042234 00000000 */   nop
.L80042238:
/* 042E38 80042238 31EE0FFF */  andi        $t6, $t7, 0xFFF
/* 042E3C 8004223C 000ECB00 */  sll         $t9, $t6, 12
/* 042E40 80042240 44D8F800 */  ctc1        $t8, $31
/* 042E44 80042244 3C01F200 */  lui         $at, (0xF2000000 >> 16)
/* 042E48 80042248 03216825 */  or          $t5, $t9, $at
/* 042E4C 8004224C 32180FFF */  andi        $t8, $s0, 0xFFF
/* 042E50 80042250 3C0E0007 */  lui         $t6, (0x7C07C >> 16)
/* 042E54 80042254 35CEC07C */  ori         $t6, $t6, (0x7C07C & 0xFFFF)
/* 042E58 80042258 01B87825 */  or          $t7, $t5, $t8
/* 042E5C 8004225C ACCF0000 */  sw          $t7, 0x0($a2)
/* 042E60 80042260 ACCE0004 */  sw          $t6, 0x4($a2)
/* 042E64 80042264 0C0015C2 */  jal         Matrix_Push
/* 042E68 80042268 02802025 */   or         $a0, $s4, $zero
/* 042E6C 8004226C 4405A000 */  mfc1        $a1, $fs0
/* 042E70 80042270 4406A000 */  mfc1        $a2, $fs0
/* 042E74 80042274 3C07C53B */  lui         $a3, (0xC53B8000 >> 16)
/* 042E78 80042278 24190001 */  addiu       $t9, $zero, 0x1
/* 042E7C 8004227C AFB90010 */  sw          $t9, 0x10($sp)
/* 042E80 80042280 34E78000 */  ori         $a3, $a3, (0xC53B8000 & 0xFFFF)
/* 042E84 80042284 0C0016C0 */  jal         Matrix_Translate
/* 042E88 80042288 8E840000 */   lw         $a0, 0x0($s4)
/* 042E8C 8004228C 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 042E90 80042290 44810000 */  mtc1        $at, $fv0
/* 042E94 80042294 240D0001 */  addiu       $t5, $zero, 0x1
/* 042E98 80042298 AFAD0010 */  sw          $t5, 0x10($sp)
/* 042E9C 8004229C 44050000 */  mfc1        $a1, $fv0
/* 042EA0 800422A0 44060000 */  mfc1        $a2, $fv0
/* 042EA4 800422A4 8E840000 */  lw          $a0, 0x0($s4)
/* 042EA8 800422A8 0C00170D */  jal         Matrix_Scale
/* 042EAC 800422AC 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 042EB0 800422B0 0C001BAE */  jal         Matrix_SetGfxMtx
/* 042EB4 800422B4 02402025 */   or         $a0, $s2, $zero
/* 042EB8 800422B8 3C100601 */  lui         $s0, %hi(D_600AB10)
/* 042EBC 800422BC 2610AB10 */  addiu       $s0, $s0, %lo(D_600AB10)
/* 042EC0 800422C0 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 042EC4 800422C4 8E420000 */  lw          $v0, 0x0($s2)
/* 042EC8 800422C8 24580008 */  addiu       $t8, $v0, 0x8
/* 042ECC 800422CC AE580000 */  sw          $t8, 0x0($s2)
/* 042ED0 800422D0 AC500004 */  sw          $s0, 0x4($v0)
/* 042ED4 800422D4 AC530000 */  sw          $s3, 0x0($v0)
/* 042ED8 800422D8 0C0015D0 */  jal         Matrix_Pop
/* 042EDC 800422DC 02802025 */   or         $a0, $s4, $zero
/* 042EE0 800422E0 0C0015C2 */  jal         Matrix_Push
/* 042EE4 800422E4 02802025 */   or         $a0, $s4, $zero
/* 042EE8 800422E8 4405A000 */  mfc1        $a1, $fs0
/* 042EEC 800422EC 4406A000 */  mfc1        $a2, $fs0
/* 042EF0 800422F0 3C07453B */  lui         $a3, (0x453B8000 >> 16)
/* 042EF4 800422F4 240F0001 */  addiu       $t7, $zero, 0x1
/* 042EF8 800422F8 AFAF0010 */  sw          $t7, 0x10($sp)
/* 042EFC 800422FC 34E78000 */  ori         $a3, $a3, (0x453B8000 & 0xFFFF)
/* 042F00 80042300 0C0016C0 */  jal         Matrix_Translate
/* 042F04 80042304 8E840000 */   lw         $a0, 0x0($s4)
/* 042F08 80042308 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 042F0C 8004230C 44810000 */  mtc1        $at, $fv0
/* 042F10 80042310 240E0001 */  addiu       $t6, $zero, 0x1
/* 042F14 80042314 AFAE0010 */  sw          $t6, 0x10($sp)
/* 042F18 80042318 44050000 */  mfc1        $a1, $fv0
/* 042F1C 8004231C 44060000 */  mfc1        $a2, $fv0
/* 042F20 80042320 8E840000 */  lw          $a0, 0x0($s4)
/* 042F24 80042324 0C00170D */  jal         Matrix_Scale
/* 042F28 80042328 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 042F2C 8004232C 0C001BAE */  jal         Matrix_SetGfxMtx
/* 042F30 80042330 02402025 */   or         $a0, $s2, $zero
/* 042F34 80042334 8E420000 */  lw          $v0, 0x0($s2)
/* 042F38 80042338 24590008 */  addiu       $t9, $v0, 0x8
/* 042F3C 8004233C AE590000 */  sw          $t9, 0x0($s2)
/* 042F40 80042340 AC500004 */  sw          $s0, 0x4($v0)
/* 042F44 80042344 AC530000 */  sw          $s3, 0x0($v0)
/* 042F48 80042348 0C0015D0 */  jal         Matrix_Pop
/* 042F4C 8004234C 02802025 */   or         $a0, $s4, $zero
/* 042F50 80042350 3C068016 */  lui         $a2, %hi(D_8015F964)
/* 042F54 80042354 90C6F964 */  lbu         $a2, %lo(D_8015F964)($a2)
/* 042F58 80042358 3C118000 */  lui         $s1, (0x80000000 >> 16)
.L8004235C:
/* 042F5C 8004235C 14C00005 */  bnez        $a2, .L80042374
/* 042F60 80042360 3C130600 */   lui        $s3, (0x6000000 >> 16)
/* 042F64 80042364 3C0D8017 */  lui         $t5, %hi(D_80177AC8)
/* 042F68 80042368 91AD7AC8 */  lbu         $t5, %lo(D_80177AC8)($t5)
/* 042F6C 8004236C 15A00267 */  bnez        $t5, .L80042D0C
/* 042F70 80042370 00000000 */   nop
.L80042374:
/* 042F74 80042374 8E420000 */  lw          $v0, 0x0($s2)
/* 042F78 80042378 3C040603 */  lui         $a0, %hi(D_602ACC0)
/* 042F7C 8004237C 2484ACC0 */  addiu       $a0, $a0, %lo(D_602ACC0)
/* 042F80 80042380 24580008 */  addiu       $t8, $v0, 0x8
/* 042F84 80042384 AE580000 */  sw          $t8, 0x0($s2)
/* 042F88 80042388 00047100 */  sll         $t6, $a0, 4
/* 042F8C 8004238C 000ECF02 */  srl         $t9, $t6, 28
/* 042F90 80042390 3C18800E */  lui         $t8, %hi(gSegments)
/* 042F94 80042394 27181FD0 */  addiu       $t8, $t8, %lo(gSegments)
/* 042F98 80042398 00196880 */  sll         $t5, $t9, 2
/* 042F9C 8004239C 3C0FFD10 */  lui         $t7, (0xFD100000 >> 16)
/* 042FA0 800423A0 01B82821 */  addu        $a1, $t5, $t8
/* 042FA4 800423A4 AC4F0000 */  sw          $t7, 0x0($v0)
/* 042FA8 800423A8 8CAF0000 */  lw          $t7, 0x0($a1)
/* 042FAC 800423AC 3C0100FF */  lui         $at, (0xFFFFFF >> 16)
/* 042FB0 800423B0 3421FFFF */  ori         $at, $at, (0xFFFFFF & 0xFFFF)
/* 042FB4 800423B4 00813024 */  and         $a2, $a0, $at
/* 042FB8 800423B8 01E67021 */  addu        $t6, $t7, $a2
/* 042FBC 800423BC 01D1C821 */  addu        $t9, $t6, $s1
/* 042FC0 800423C0 AC590004 */  sw          $t9, 0x4($v0)
/* 042FC4 800423C4 8E420000 */  lw          $v0, 0x0($s2)
/* 042FC8 800423C8 3C18E800 */  lui         $t8, (0xE8000000 >> 16)
/* 042FCC 800423CC 3C018017 */  lui         $at, %hi(D_80177CE8)
/* 042FD0 800423D0 244D0008 */  addiu       $t5, $v0, 0x8
/* 042FD4 800423D4 AE4D0000 */  sw          $t5, 0x0($s2)
/* 042FD8 800423D8 AC400004 */  sw          $zero, 0x4($v0)
/* 042FDC 800423DC AC580000 */  sw          $t8, 0x0($v0)
/* 042FE0 800423E0 8E420000 */  lw          $v0, 0x0($s2)
/* 042FE4 800423E4 3C0EF510 */  lui         $t6, (0xF5100000 >> 16)
/* 042FE8 800423E8 3C190700 */  lui         $t9, (0x7000000 >> 16)
/* 042FEC 800423EC 244F0008 */  addiu       $t7, $v0, 0x8
/* 042FF0 800423F0 AE4F0000 */  sw          $t7, 0x0($s2)
/* 042FF4 800423F4 AC590004 */  sw          $t9, 0x4($v0)
/* 042FF8 800423F8 AC4E0000 */  sw          $t6, 0x0($v0)
/* 042FFC 800423FC 8E420000 */  lw          $v0, 0x0($s2)
/* 043000 80042400 3C18E600 */  lui         $t8, (0xE6000000 >> 16)
/* 043004 80042404 3C0EF300 */  lui         $t6, (0xF3000000 >> 16)
/* 043008 80042408 244D0008 */  addiu       $t5, $v0, 0x8
/* 04300C 8004240C AE4D0000 */  sw          $t5, 0x0($s2)
/* 043010 80042410 AC400004 */  sw          $zero, 0x4($v0)
/* 043014 80042414 AC580000 */  sw          $t8, 0x0($v0)
/* 043018 80042418 8E420000 */  lw          $v0, 0x0($s2)
/* 04301C 8004241C 3C19073F */  lui         $t9, (0x73FF100 >> 16)
/* 043020 80042420 3739F100 */  ori         $t9, $t9, (0x73FF100 & 0xFFFF)
/* 043024 80042424 244F0008 */  addiu       $t7, $v0, 0x8
/* 043028 80042428 AE4F0000 */  sw          $t7, 0x0($s2)
/* 04302C 8004242C AC590004 */  sw          $t9, 0x4($v0)
/* 043030 80042430 AC4E0000 */  sw          $t6, 0x0($v0)
/* 043034 80042434 8E420000 */  lw          $v0, 0x0($s2)
/* 043038 80042438 3C18FD10 */  lui         $t8, (0xFD100000 >> 16)
/* 04303C 8004243C 244D0008 */  addiu       $t5, $v0, 0x8
/* 043040 80042440 AE4D0000 */  sw          $t5, 0x0($s2)
/* 043044 80042444 AC580000 */  sw          $t8, 0x0($v0)
/* 043048 80042448 8CAF0000 */  lw          $t7, 0x0($a1)
/* 04304C 8004244C 01E67021 */  addu        $t6, $t7, $a2
/* 043050 80042450 01D1C821 */  addu        $t9, $t6, $s1
/* 043054 80042454 AC590004 */  sw          $t9, 0x4($v0)
/* 043058 80042458 C4247CE8 */  lwc1        $ft0, %lo(D_80177CE8)($at)
/* 04305C 8004245C 3C01800D */  lui         $at, %hi(D_800D55C4)
/* 043060 80042460 C42855C4 */  lwc1        $ft2, %lo(D_800D55C4)($at)
/* 043064 80042464 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 043068 80042468 44817000 */  mtc1        $at, $fa1
/* 04306C 8004246C 46082002 */  mul.s       $fv0, $ft0, $ft2
/* 043070 80042470 0C001388 */  jal         Math_ModF
/* 043074 80042474 46000300 */   add.s      $fa0, $fv0, $fv0
/* 043078 80042478 46000005 */  abs.s       $fv0, $fv0
/* 04307C 8004247C 24100001 */  addiu       $s0, $zero, 0x1
/* 043080 80042480 444DF800 */  cfc1        $t5, $31
/* 043084 80042484 44D0F800 */  ctc1        $s0, $31
/* 043088 80042488 3C188018 */  lui         $t8, %hi(gPlayer)
/* 04308C 8004248C 3C0F8017 */  lui         $t7, %hi(gPlayerNum)
/* 043090 80042490 460002A4 */  cvt.w.s     $ft3, $fv0
/* 043094 80042494 4450F800 */  cfc1        $s0, $31
/* 043098 80042498 00000000 */  nop
/* 04309C 8004249C 32100078 */  andi        $s0, $s0, 0x78
/* 0430A0 800424A0 12000012 */  beqz        $s0, .L800424EC
/* 0430A4 800424A4 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 0430A8 800424A8 44815000 */  mtc1        $at, $ft3
/* 0430AC 800424AC 24100001 */  addiu       $s0, $zero, 0x1
/* 0430B0 800424B0 460A0281 */  sub.s       $ft3, $fv0, $ft3
/* 0430B4 800424B4 44D0F800 */  ctc1        $s0, $31
/* 0430B8 800424B8 00000000 */  nop
/* 0430BC 800424BC 460052A4 */  cvt.w.s     $ft3, $ft3
/* 0430C0 800424C0 4450F800 */  cfc1        $s0, $31
/* 0430C4 800424C4 00000000 */  nop
/* 0430C8 800424C8 32100078 */  andi        $s0, $s0, 0x78
/* 0430CC 800424CC 16000005 */  bnez        $s0, .L800424E4
/* 0430D0 800424D0 00000000 */   nop
/* 0430D4 800424D4 44105000 */  mfc1        $s0, $ft3
/* 0430D8 800424D8 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 0430DC 800424DC 10000007 */  b           .L800424FC
/* 0430E0 800424E0 02018025 */   or         $s0, $s0, $at
.L800424E4:
/* 0430E4 800424E4 10000005 */  b           .L800424FC
/* 0430E8 800424E8 2410FFFF */   addiu      $s0, $zero, -0x1
.L800424EC:
/* 0430EC 800424EC 44105000 */  mfc1        $s0, $ft3
/* 0430F0 800424F0 00000000 */  nop
/* 0430F4 800424F4 0600FFFB */  bltz        $s0, .L800424E4
/* 0430F8 800424F8 00000000 */   nop
.L800424FC:
/* 0430FC 800424FC 8DEF78A0 */  lw          $t7, %lo(gPlayerNum)($t7)
/* 043100 80042500 8F188280 */  lw          $t8, %lo(gPlayer)($t8)
/* 043104 80042504 3C01800D */  lui         $at, %hi(D_800D55C8)
/* 043108 80042508 000F7080 */  sll         $t6, $t7, 2
/* 04310C 8004250C 01CF7021 */  addu        $t6, $t6, $t7
/* 043110 80042510 000E70C0 */  sll         $t6, $t6, 3
/* 043114 80042514 01CF7023 */  subu        $t6, $t6, $t7
/* 043118 80042518 000E7140 */  sll         $t6, $t6, 5
/* 04311C 8004251C 030EC821 */  addu        $t9, $t8, $t6
/* 043120 80042520 44CDF800 */  ctc1        $t5, $31
/* 043124 80042524 C72600AC */  lwc1        $ft1, 0xAC($t9)
/* 043128 80042528 C42455C8 */  lwc1        $ft0, %lo(D_800D55C8)($at)
/* 04312C 8004252C 3C01800D */  lui         $at, %hi(D_800D55CC)
/* 043130 80042530 C42A55CC */  lwc1        $ft3, %lo(D_800D55CC)($at)
/* 043134 80042534 46062201 */  sub.s       $ft2, $ft0, $ft1
/* 043138 80042538 3C014300 */  lui         $at, (0x43000000 >> 16)
/* 04313C 8004253C 44817000 */  mtc1        $at, $fa1
/* 043140 80042540 460A4302 */  mul.s       $fa0, $ft2, $ft3
/* 043144 80042544 0C001388 */  jal         Math_ModF
/* 043148 80042548 00000000 */   nop
/* 04314C 8004254C 8E420000 */  lw          $v0, 0x0($s2)
/* 043150 80042550 3C0FE800 */  lui         $t7, (0xE8000000 >> 16)
/* 043154 80042554 3C0EF510 */  lui         $t6, (0xF5101000 >> 16)
/* 043158 80042558 244D0008 */  addiu       $t5, $v0, 0x8
/* 04315C 8004255C AE4D0000 */  sw          $t5, 0x0($s2)
/* 043160 80042560 AC400004 */  sw          $zero, 0x4($v0)
/* 043164 80042564 AC4F0000 */  sw          $t7, 0x0($v0)
/* 043168 80042568 8E420000 */  lw          $v0, 0x0($s2)
/* 04316C 8004256C 3C190001 */  lui         $t9, (0x14050 >> 16)
/* 043170 80042570 37394050 */  ori         $t9, $t9, (0x14050 & 0xFFFF)
/* 043174 80042574 24580008 */  addiu       $t8, $v0, 0x8
/* 043178 80042578 AE580000 */  sw          $t8, 0x0($s2)
/* 04317C 8004257C 35CE1000 */  ori         $t6, $t6, (0xF5101000 & 0xFFFF)
/* 043180 80042580 AC4E0000 */  sw          $t6, 0x0($v0)
/* 043184 80042584 AC590004 */  sw          $t9, 0x4($v0)
/* 043188 80042588 444FF800 */  cfc1        $t7, $31
/* 04318C 8004258C 24180001 */  addiu       $t8, $zero, 0x1
/* 043190 80042590 44D8F800 */  ctc1        $t8, $31
/* 043194 80042594 8E450000 */  lw          $a1, 0x0($s2)
/* 043198 80042598 46000124 */  cvt.w.s     $ft0, $fv0
/* 04319C 8004259C 24AD0008 */  addiu       $t5, $a1, 0x8
/* 0431A0 800425A0 AE4D0000 */  sw          $t5, 0x0($s2)
/* 0431A4 800425A4 4458F800 */  cfc1        $t8, $31
/* 0431A8 800425A8 00000000 */  nop
/* 0431AC 800425AC 33180078 */  andi        $t8, $t8, 0x78
/* 0431B0 800425B0 13000012 */  beqz        $t8, .L800425FC
/* 0431B4 800425B4 3C014F00 */   lui        $at, (0x4F000000 >> 16)
/* 0431B8 800425B8 44812000 */  mtc1        $at, $ft0
/* 0431BC 800425BC 24180001 */  addiu       $t8, $zero, 0x1
/* 0431C0 800425C0 46040101 */  sub.s       $ft0, $fv0, $ft0
/* 0431C4 800425C4 44D8F800 */  ctc1        $t8, $31
/* 0431C8 800425C8 00000000 */  nop
/* 0431CC 800425CC 46002124 */  cvt.w.s     $ft0, $ft0
/* 0431D0 800425D0 4458F800 */  cfc1        $t8, $31
/* 0431D4 800425D4 00000000 */  nop
/* 0431D8 800425D8 33180078 */  andi        $t8, $t8, 0x78
/* 0431DC 800425DC 17000005 */  bnez        $t8, .L800425F4
/* 0431E0 800425E0 00000000 */   nop
/* 0431E4 800425E4 44182000 */  mfc1        $t8, $ft0
/* 0431E8 800425E8 3C018000 */  lui         $at, (0x80000000 >> 16)
/* 0431EC 800425EC 10000007 */  b           .L8004260C
/* 0431F0 800425F0 0301C025 */   or         $t8, $t8, $at
.L800425F4:
/* 0431F4 800425F4 10000005 */  b           .L8004260C
/* 0431F8 800425F8 2418FFFF */   addiu      $t8, $zero, -0x1
.L800425FC:
/* 0431FC 800425FC 44182000 */  mfc1        $t8, $ft0
/* 043200 80042600 00000000 */  nop
/* 043204 80042604 0700FFFB */  bltz        $t8, .L800425F4
/* 043208 80042608 00000000 */   nop
.L8004260C:
/* 04320C 8004260C 330E0FFF */  andi        $t6, $t8, 0xFFF
/* 043210 80042610 000ECB00 */  sll         $t9, $t6, 12
/* 043214 80042614 44CFF800 */  ctc1        $t7, $31
/* 043218 80042618 3C01F200 */  lui         $at, (0xF2000000 >> 16)
/* 04321C 8004261C 03216825 */  or          $t5, $t9, $at
/* 043220 80042620 320F0FFF */  andi        $t7, $s0, 0xFFF
/* 043224 80042624 3C0E0007 */  lui         $t6, (0x7C07C >> 16)
/* 043228 80042628 35CEC07C */  ori         $t6, $t6, (0x7C07C & 0xFFFF)
/* 04322C 8004262C 01AFC025 */  or          $t8, $t5, $t7
/* 043230 80042630 ACB80000 */  sw          $t8, 0x0($a1)
/* 043234 80042634 ACAE0004 */  sw          $t6, 0x4($a1)
/* 043238 80042638 3C198017 */  lui         $t9, %hi(D_80177AC8)
/* 04323C 8004263C 93397AC8 */  lbu         $t9, %lo(D_80177AC8)($t9)
/* 043240 80042640 13200005 */  beqz        $t9, .L80042658
/* 043244 80042644 02402025 */   or         $a0, $s2, $zero
/* 043248 80042648 0C02E374 */  jal         RCP_SetupDL
/* 04324C 8004264C 2405002F */   addiu      $a1, $zero, 0x2F
/* 043250 80042650 10000004 */  b           .L80042664
/* 043254 80042654 00000000 */   nop
.L80042658:
/* 043258 80042658 02402025 */  or          $a0, $s2, $zero
/* 04325C 8004265C 0C02E374 */  jal         RCP_SetupDL
/* 043260 80042660 24050025 */   addiu      $a1, $zero, 0x25
.L80042664:
/* 043264 80042664 3C028018 */  lui         $v0, %hi(gPlayer)
/* 043268 80042668 8C428280 */  lw          $v0, %lo(gPlayer)($v0)
/* 04326C 8004266C 24010002 */  addiu       $at, $zero, 0x2
/* 043270 80042670 8C4301C8 */  lw          $v1, 0x1C8($v0)
/* 043274 80042674 5461000F */  bnel        $v1, $at, .L800426B4
/* 043278 80042678 24010007 */   addiu      $at, $zero, 0x7
/* 04327C 8004267C 8C4D01D0 */  lw          $t5, 0x1D0($v0)
/* 043280 80042680 29A10002 */  slti        $at, $t5, 0x2
/* 043284 80042684 5020000B */  beql        $at, $zero, .L800426B4
/* 043288 80042688 24010007 */   addiu      $at, $zero, 0x7
/* 04328C 8004268C 8E420000 */  lw          $v0, 0x0($s2)
/* 043290 80042690 3C18FA00 */  lui         $t8, (0xFA000000 >> 16)
/* 043294 80042694 240EFFFF */  addiu       $t6, $zero, -0x1
/* 043298 80042698 244F0008 */  addiu       $t7, $v0, 0x8
/* 04329C 8004269C AE4F0000 */  sw          $t7, 0x0($s2)
/* 0432A0 800426A0 AC4E0004 */  sw          $t6, 0x4($v0)
/* 0432A4 800426A4 AC580000 */  sw          $t8, 0x0($v0)
/* 0432A8 800426A8 1000002B */  b           .L80042758
/* 0432AC 800426AC 00000000 */   nop
/* 0432B0 800426B0 24010007 */  addiu       $at, $zero, 0x7
.L800426B4:
/* 0432B4 800426B4 5461001B */  bnel        $v1, $at, .L80042724
/* 0432B8 800426B8 8E420000 */   lw         $v0, 0x0($s2)
/* 0432BC 800426BC 8E420000 */  lw          $v0, 0x0($s2)
/* 0432C0 800426C0 3C0DFA00 */  lui         $t5, (0xFA000000 >> 16)
/* 0432C4 800426C4 3C0F8016 */  lui         $t7, %hi(D_8015F974)
/* 0432C8 800426C8 24590008 */  addiu       $t9, $v0, 0x8
/* 0432CC 800426CC AE590000 */  sw          $t9, 0x0($s2)
/* 0432D0 800426D0 3C198016 */  lui         $t9, %hi(D_8015F978)
/* 0432D4 800426D4 AC4D0000 */  sw          $t5, 0x0($v0)
/* 0432D8 800426D8 8F39F978 */  lw          $t9, %lo(D_8015F978)($t9)
/* 0432DC 800426DC 8DF8F974 */  lw          $t8, %lo(D_8015F974)($t7)
/* 0432E0 800426E0 332D00FF */  andi        $t5, $t9, 0xFF
/* 0432E4 800426E4 3C198016 */  lui         $t9, %hi(D_8015F97C)
/* 0432E8 800426E8 8F39F97C */  lw          $t9, %lo(D_8015F97C)($t9)
/* 0432EC 800426EC 000D7C00 */  sll         $t7, $t5, 16
/* 0432F0 800426F0 00187600 */  sll         $t6, $t8, 24
/* 0432F4 800426F4 332D00FF */  andi        $t5, $t9, 0xFF
/* 0432F8 800426F8 3C198016 */  lui         $t9, %hi(D_8015F980)
/* 0432FC 800426FC 8F39F980 */  lw          $t9, %lo(D_8015F980)($t9)
/* 043300 80042700 01CFC025 */  or          $t8, $t6, $t7
/* 043304 80042704 000D7200 */  sll         $t6, $t5, 8
/* 043308 80042708 030E7825 */  or          $t7, $t8, $t6
/* 04330C 8004270C 332D00FF */  andi        $t5, $t9, 0xFF
/* 043310 80042710 01EDC025 */  or          $t8, $t7, $t5
/* 043314 80042714 AC580004 */  sw          $t8, 0x4($v0)
/* 043318 80042718 1000000F */  b           .L80042758
/* 04331C 8004271C 00000000 */   nop
/* 043320 80042720 8E420000 */  lw          $v0, 0x0($s2)
.L80042724:
/* 043324 80042724 3C19FA00 */  lui         $t9, (0xFA000000 >> 16)
/* 043328 80042728 3C01801C */  lui         $at, %hi(D_E16C50_801C4188)
/* 04332C 8004272C 244E0008 */  addiu       $t6, $v0, 0x8
/* 043330 80042730 AE4E0000 */  sw          $t6, 0x0($s2)
/* 043334 80042734 AC590000 */  sw          $t9, 0x0($v0)
/* 043338 80042738 C4264188 */  lwc1        $ft1, %lo(D_E16C50_801C4188)($at)
/* 04333C 8004273C 2401FF00 */  addiu       $at, $zero, -0x100
/* 043340 80042740 4600320D */  trunc.w.s   $ft2, $ft1
/* 043344 80042744 440D4000 */  mfc1        $t5, $ft2
/* 043348 80042748 00000000 */  nop
/* 04334C 8004274C 31B800FF */  andi        $t8, $t5, 0xFF
/* 043350 80042750 03017025 */  or          $t6, $t8, $at
/* 043354 80042754 AC4E0004 */  sw          $t6, 0x4($v0)
.L80042758:
/* 043358 80042758 0C0015C2 */  jal         Matrix_Push
/* 04335C 8004275C 02802025 */   or         $a0, $s4, $zero
/* 043360 80042760 3C118016 */  lui         $s1, %hi(D_8015F970)
/* 043364 80042764 2631F970 */  addiu       $s1, $s1, %lo(D_8015F970)
/* 043368 80042768 4405A000 */  mfc1        $a1, $fs0
/* 04336C 8004276C 3C07C53B */  lui         $a3, (0xC53B8000 >> 16)
/* 043370 80042770 24190001 */  addiu       $t9, $zero, 0x1
/* 043374 80042774 AFB90010 */  sw          $t9, 0x10($sp)
/* 043378 80042778 34E78000 */  ori         $a3, $a3, (0xC53B8000 & 0xFFFF)
/* 04337C 8004277C 8E260000 */  lw          $a2, 0x0($s1)
/* 043380 80042780 0C0016C0 */  jal         Matrix_Translate
/* 043384 80042784 8E840000 */   lw         $a0, 0x0($s4)
/* 043388 80042788 240F0001 */  addiu       $t7, $zero, 0x1
/* 04338C 8004278C AFAF0010 */  sw          $t7, 0x10($sp)
/* 043390 80042790 8E840000 */  lw          $a0, 0x0($s4)
/* 043394 80042794 3C054000 */  lui         $a1, (0x40000000 >> 16)
/* 043398 80042798 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* 04339C 8004279C 0C00170D */  jal         Matrix_Scale
/* 0433A0 800427A0 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 0433A4 800427A4 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0433A8 800427A8 02402025 */   or         $a0, $s2, $zero
/* 0433AC 800427AC 8E420000 */  lw          $v0, 0x0($s2)
/* 0433B0 800427B0 3C100603 */  lui         $s0, %hi(D_602AC40)
/* 0433B4 800427B4 2610AC40 */  addiu       $s0, $s0, %lo(D_602AC40)
/* 0433B8 800427B8 244D0008 */  addiu       $t5, $v0, 0x8
/* 0433BC 800427BC AE4D0000 */  sw          $t5, 0x0($s2)
/* 0433C0 800427C0 AC500004 */  sw          $s0, 0x4($v0)
/* 0433C4 800427C4 AC530000 */  sw          $s3, 0x0($v0)
/* 0433C8 800427C8 0C0015D0 */  jal         Matrix_Pop
/* 0433CC 800427CC 02802025 */   or         $a0, $s4, $zero
/* 0433D0 800427D0 4405A000 */  mfc1        $a1, $fs0
/* 0433D4 800427D4 3C07453B */  lui         $a3, (0x453B8000 >> 16)
/* 0433D8 800427D8 24180001 */  addiu       $t8, $zero, 0x1
/* 0433DC 800427DC AFB80010 */  sw          $t8, 0x10($sp)
/* 0433E0 800427E0 34E78000 */  ori         $a3, $a3, (0x453B8000 & 0xFFFF)
/* 0433E4 800427E4 8E840000 */  lw          $a0, 0x0($s4)
/* 0433E8 800427E8 0C0016C0 */  jal         Matrix_Translate
/* 0433EC 800427EC 8E260000 */   lw         $a2, 0x0($s1)
/* 0433F0 800427F0 240E0001 */  addiu       $t6, $zero, 0x1
/* 0433F4 800427F4 AFAE0010 */  sw          $t6, 0x10($sp)
/* 0433F8 800427F8 8E840000 */  lw          $a0, 0x0($s4)
/* 0433FC 800427FC 3C054000 */  lui         $a1, (0x40000000 >> 16)
/* 043400 80042800 3C063F80 */  lui         $a2, (0x3F800000 >> 16)
/* 043404 80042804 0C00170D */  jal         Matrix_Scale
/* 043408 80042808 3C073F00 */   lui        $a3, (0x3F000000 >> 16)
/* 04340C 8004280C 0C001BAE */  jal         Matrix_SetGfxMtx
/* 043410 80042810 02402025 */   or         $a0, $s2, $zero
/* 043414 80042814 8E420000 */  lw          $v0, 0x0($s2)
/* 043418 80042818 24590008 */  addiu       $t9, $v0, 0x8
/* 04341C 8004281C AE590000 */  sw          $t9, 0x0($s2)
/* 043420 80042820 AC500004 */  sw          $s0, 0x4($v0)
/* 043424 80042824 AC530000 */  sw          $s3, 0x0($v0)
/* 043428 80042828 10000138 */  b           .L80042D0C
/* 04342C 8004282C 00000000 */   nop
.L80042830:
/* 043430 80042830 3C0F8018 */  lui         $t7, %hi(D_8017812C)
/* 043434 80042834 8DEF812C */  lw          $t7, %lo(D_8017812C)($t7)
/* 043438 80042838 3C138018 */  lui         $s3, %hi(gFogRed)
/* 04343C 8004283C 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 043440 80042840 15E00003 */  bnez        $t7, .L80042850
/* 043444 80042844 24010011 */   addiu      $at, $zero, 0x11
/* 043448 80042848 14410011 */  bne         $v0, $at, .L80042890
/* 04344C 8004284C 3C058018 */   lui        $a1, %hi(gFogGreen)
.L80042850:
/* 043450 80042850 3C0D8018 */  lui         $t5, %hi(gFogNear)
/* 043454 80042854 3C188018 */  lui         $t8, %hi(gFogFar)
/* 043458 80042858 8F1883DC */  lw          $t8, %lo(gFogFar)($t8)
/* 04345C 8004285C 8DAD83D8 */  lw          $t5, %lo(gFogNear)($t5)
/* 043460 80042860 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 043464 80042864 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 043468 80042868 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 04346C 8004286C 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 043470 80042870 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 043474 80042874 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 043478 80042878 8E640000 */  lw          $a0, 0x0($s3)
/* 04347C 8004287C AFB80014 */  sw          $t8, 0x14($sp)
/* 043480 80042880 0C02E874 */  jal         RCP_SetupDL_29
/* 043484 80042884 AFAD0010 */   sw         $t5, 0x10($sp)
/* 043488 80042888 10000010 */  b           .L800428CC
/* 04348C 8004288C 00000000 */   nop
.L80042890:
/* 043490 80042890 3C0E8018 */  lui         $t6, %hi(gFogNear)
/* 043494 80042894 3C198018 */  lui         $t9, %hi(gFogFar)
/* 043498 80042898 8F3983DC */  lw          $t9, %lo(gFogFar)($t9)
/* 04349C 8004289C 8DCE83D8 */  lw          $t6, %lo(gFogNear)($t6)
/* 0434A0 800428A0 3C138018 */  lui         $s3, %hi(gFogRed)
/* 0434A4 800428A4 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 0434A8 800428A8 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 0434AC 800428AC 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 0434B0 800428B0 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 0434B4 800428B4 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 0434B8 800428B8 8E640000 */  lw          $a0, 0x0($s3)
/* 0434BC 800428BC 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 0434C0 800428C0 AFB90014 */  sw          $t9, 0x14($sp)
/* 0434C4 800428C4 0C02E586 */  jal         RCP_SetupDL_20
/* 0434C8 800428C8 AFAE0010 */   sw         $t6, 0x10($sp)
.L800428CC:
/* 0434CC 800428CC 3C11800D */  lui         $s1, %hi(D_800C9E64)
/* 0434D0 800428D0 3C10800D */  lui         $s0, %hi(D_800C9E74)
/* 0434D4 800428D4 26109E74 */  addiu       $s0, $s0, %lo(D_800C9E74)
/* 0434D8 800428D8 26319E64 */  addiu       $s1, $s1, %lo(D_800C9E64)
/* 0434DC 800428DC 3C130600 */  lui         $s3, (0x6000000 >> 16)
.L800428E0:
/* 0434E0 800428E0 0C0015C2 */  jal         Matrix_Push
/* 0434E4 800428E4 02802025 */   or         $a0, $s4, $zero
/* 0434E8 800428E8 4406A000 */  mfc1        $a2, $fs0
/* 0434EC 800428EC 240F0001 */  addiu       $t7, $zero, 0x1
/* 0434F0 800428F0 AFAF0010 */  sw          $t7, 0x10($sp)
/* 0434F4 800428F4 8E840000 */  lw          $a0, 0x0($s4)
/* 0434F8 800428F8 8E250000 */  lw          $a1, 0x0($s1)
/* 0434FC 800428FC 0C0016C0 */  jal         Matrix_Translate
/* 043500 80042900 8E070000 */   lw         $a3, 0x0($s0)
/* 043504 80042904 0C001BAE */  jal         Matrix_SetGfxMtx
/* 043508 80042908 02402025 */   or         $a0, $s2, $zero
/* 04350C 8004290C 3C028018 */  lui         $v0, %hi(gCurrentLevel)
/* 043510 80042910 8C428234 */  lw          $v0, %lo(gCurrentLevel)($v0)
/* 043514 80042914 2401000E */  addiu       $at, $zero, 0xE
/* 043518 80042918 5441000B */  bnel        $v0, $at, .L80042948
/* 04351C 8004291C 24010010 */   addiu      $at, $zero, 0x10
/* 043520 80042920 8E420000 */  lw          $v0, 0x0($s2)
/* 043524 80042924 3C180600 */  lui         $t8, %hi(D_6001360)
/* 043528 80042928 27181360 */  addiu       $t8, $t8, %lo(D_6001360)
/* 04352C 8004292C 244D0008 */  addiu       $t5, $v0, 0x8
/* 043530 80042930 AE4D0000 */  sw          $t5, 0x0($s2)
/* 043534 80042934 AC580004 */  sw          $t8, 0x4($v0)
/* 043538 80042938 AC530000 */  sw          $s3, 0x0($v0)
/* 04353C 8004293C 10000023 */  b           .L800429CC
/* 043540 80042940 00000000 */   nop
/* 043544 80042944 24010010 */  addiu       $at, $zero, 0x10
.L80042948:
/* 043548 80042948 5441000B */  bnel        $v0, $at, .L80042978
/* 04354C 8004294C 24010011 */   addiu      $at, $zero, 0x11
/* 043550 80042950 8E420000 */  lw          $v0, 0x0($s2)
/* 043554 80042954 3C190601 */  lui         $t9, %hi(D_6009250)
/* 043558 80042958 27399250 */  addiu       $t9, $t9, %lo(D_6009250)
/* 04355C 8004295C 244E0008 */  addiu       $t6, $v0, 0x8
/* 043560 80042960 AE4E0000 */  sw          $t6, 0x0($s2)
/* 043564 80042964 AC590004 */  sw          $t9, 0x4($v0)
/* 043568 80042968 AC530000 */  sw          $s3, 0x0($v0)
/* 04356C 8004296C 10000017 */  b           .L800429CC
/* 043570 80042970 00000000 */   nop
/* 043574 80042974 24010011 */  addiu       $at, $zero, 0x11
.L80042978:
/* 043578 80042978 5441000B */  bnel        $v0, $at, .L800429A8
/* 04357C 8004297C 24010013 */   addiu      $at, $zero, 0x13
/* 043580 80042980 8E420000 */  lw          $v0, 0x0($s2)
/* 043584 80042984 3C0D0601 */  lui         $t5, %hi(D_600A810)
/* 043588 80042988 25ADA810 */  addiu       $t5, $t5, %lo(D_600A810)
/* 04358C 8004298C 244F0008 */  addiu       $t7, $v0, 0x8
/* 043590 80042990 AE4F0000 */  sw          $t7, 0x0($s2)
/* 043594 80042994 AC4D0004 */  sw          $t5, 0x4($v0)
/* 043598 80042998 AC530000 */  sw          $s3, 0x0($v0)
/* 04359C 8004299C 1000000B */  b           .L800429CC
/* 0435A0 800429A0 00000000 */   nop
/* 0435A4 800429A4 24010013 */  addiu       $at, $zero, 0x13
.L800429A8:
/* 0435A8 800429A8 14410008 */  bne         $v0, $at, .L800429CC
/* 0435AC 800429AC 00000000 */   nop
/* 0435B0 800429B0 8E420000 */  lw          $v0, 0x0($s2)
/* 0435B4 800429B4 3C0E0601 */  lui         $t6, %hi(D_6010700)
/* 0435B8 800429B8 25CE0700 */  addiu       $t6, $t6, %lo(D_6010700)
/* 0435BC 800429BC 24580008 */  addiu       $t8, $v0, 0x8
/* 0435C0 800429C0 AE580000 */  sw          $t8, 0x0($s2)
/* 0435C4 800429C4 AC4E0004 */  sw          $t6, 0x4($v0)
/* 0435C8 800429C8 AC530000 */  sw          $s3, 0x0($v0)
.L800429CC:
/* 0435CC 800429CC 0C0015D0 */  jal         Matrix_Pop
/* 0435D0 800429D0 02802025 */   or         $a0, $s4, $zero
/* 0435D4 800429D4 3C19800D */  lui         $t9, %hi(D_800C9E84)
/* 0435D8 800429D8 27399E84 */  addiu       $t9, $t9, %lo(D_800C9E84)
/* 0435DC 800429DC 26100004 */  addiu       $s0, $s0, 0x4
/* 0435E0 800429E0 1619FFBF */  bne         $s0, $t9, .L800428E0
/* 0435E4 800429E4 26310004 */   addiu      $s1, $s1, 0x4
/* 0435E8 800429E8 100000C8 */  b           .L80042D0C
/* 0435EC 800429EC 00000000 */   nop
.L800429F0:
/* 0435F0 800429F0 3C0F8018 */  lui         $t7, %hi(D_8017812C)
/* 0435F4 800429F4 8DEF812C */  lw          $t7, %lo(D_8017812C)($t7)
/* 0435F8 800429F8 3C138018 */  lui         $s3, %hi(gFogRed)
/* 0435FC 800429FC 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 043600 80042A00 11E00013 */  beqz        $t7, .L80042A50
/* 043604 80042A04 3C058018 */   lui        $a1, %hi(gFogGreen)
/* 043608 80042A08 3C0D8018 */  lui         $t5, %hi(gFogNear)
/* 04360C 80042A0C 3C188018 */  lui         $t8, %hi(gFogFar)
/* 043610 80042A10 8F1883DC */  lw          $t8, %lo(gFogFar)($t8)
/* 043614 80042A14 8DAD83D8 */  lw          $t5, %lo(gFogNear)($t5)
/* 043618 80042A18 3C138018 */  lui         $s3, %hi(gFogRed)
/* 04361C 80042A1C 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 043620 80042A20 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 043624 80042A24 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 043628 80042A28 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 04362C 80042A2C 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 043630 80042A30 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 043634 80042A34 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 043638 80042A38 8E640000 */  lw          $a0, 0x0($s3)
/* 04363C 80042A3C AFB80014 */  sw          $t8, 0x14($sp)
/* 043640 80042A40 0C02E874 */  jal         RCP_SetupDL_29
/* 043644 80042A44 AFAD0010 */   sw         $t5, 0x10($sp)
/* 043648 80042A48 1000000E */  b           .L80042A84
/* 04364C 80042A4C 00000000 */   nop
.L80042A50:
/* 043650 80042A50 3C0E8018 */  lui         $t6, %hi(gFogNear)
/* 043654 80042A54 3C198018 */  lui         $t9, %hi(gFogFar)
/* 043658 80042A58 8F3983DC */  lw          $t9, %lo(gFogFar)($t9)
/* 04365C 80042A5C 8DCE83D8 */  lw          $t6, %lo(gFogNear)($t6)
/* 043660 80042A60 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 043664 80042A64 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 043668 80042A68 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 04366C 80042A6C 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 043670 80042A70 8E640000 */  lw          $a0, 0x0($s3)
/* 043674 80042A74 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 043678 80042A78 AFB90014 */  sw          $t9, 0x14($sp)
/* 04367C 80042A7C 0C02E586 */  jal         RCP_SetupDL_20
/* 043680 80042A80 AFAE0010 */   sw         $t6, 0x10($sp)
.L80042A84:
/* 043684 80042A84 3C11800D */  lui         $s1, %hi(D_800C9E64)
/* 043688 80042A88 3C10800D */  lui         $s0, %hi(D_800C9E74)
/* 04368C 80042A8C 26109E74 */  addiu       $s0, $s0, %lo(D_800C9E74)
/* 043690 80042A90 26319E64 */  addiu       $s1, $s1, %lo(D_800C9E64)
/* 043694 80042A94 3C130600 */  lui         $s3, (0x6000000 >> 16)
.L80042A98:
/* 043698 80042A98 0C0015C2 */  jal         Matrix_Push
/* 04369C 80042A9C 02802025 */   or         $a0, $s4, $zero
/* 0436A0 80042AA0 4406A000 */  mfc1        $a2, $fs0
/* 0436A4 80042AA4 240F0001 */  addiu       $t7, $zero, 0x1
/* 0436A8 80042AA8 AFAF0010 */  sw          $t7, 0x10($sp)
/* 0436AC 80042AAC 8E840000 */  lw          $a0, 0x0($s4)
/* 0436B0 80042AB0 8E250000 */  lw          $a1, 0x0($s1)
/* 0436B4 80042AB4 0C0016C0 */  jal         Matrix_Translate
/* 0436B8 80042AB8 8E070000 */   lw         $a3, 0x0($s0)
/* 0436BC 80042ABC 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0436C0 80042AC0 02402025 */   or         $a0, $s2, $zero
/* 0436C4 80042AC4 3C0D8017 */  lui         $t5, %hi(gVersusStage)
/* 0436C8 80042AC8 8DAD789C */  lw          $t5, %lo(gVersusStage)($t5)
/* 0436CC 80042ACC 55A0000B */  bnel        $t5, $zero, .L80042AFC
/* 0436D0 80042AD0 8E420000 */   lw         $v0, 0x0($s2)
/* 0436D4 80042AD4 8E420000 */  lw          $v0, 0x0($s2)
/* 0436D8 80042AD8 3C0E0302 */  lui         $t6, %hi(D_3018800)
/* 0436DC 80042ADC 25CE8800 */  addiu       $t6, $t6, %lo(D_3018800)
/* 0436E0 80042AE0 24580008 */  addiu       $t8, $v0, 0x8
/* 0436E4 80042AE4 AE580000 */  sw          $t8, 0x0($s2)
/* 0436E8 80042AE8 AC4E0004 */  sw          $t6, 0x4($v0)
/* 0436EC 80042AEC AC530000 */  sw          $s3, 0x0($v0)
/* 0436F0 80042AF0 10000008 */  b           .L80042B14
/* 0436F4 80042AF4 00000000 */   nop
/* 0436F8 80042AF8 8E420000 */  lw          $v0, 0x0($s2)
.L80042AFC:
/* 0436FC 80042AFC 3C0F0301 */  lui         $t7, %hi(D_30160A0)
/* 043700 80042B00 25EF60A0 */  addiu       $t7, $t7, %lo(D_30160A0)
/* 043704 80042B04 24590008 */  addiu       $t9, $v0, 0x8
/* 043708 80042B08 AE590000 */  sw          $t9, 0x0($s2)
/* 04370C 80042B0C AC4F0004 */  sw          $t7, 0x4($v0)
/* 043710 80042B10 AC530000 */  sw          $s3, 0x0($v0)
.L80042B14:
/* 043714 80042B14 0C0015D0 */  jal         Matrix_Pop
/* 043718 80042B18 02802025 */   or         $a0, $s4, $zero
/* 04371C 80042B1C 3C0D800D */  lui         $t5, %hi(D_800C9E84)
/* 043720 80042B20 25AD9E84 */  addiu       $t5, $t5, %lo(D_800C9E84)
/* 043724 80042B24 26100004 */  addiu       $s0, $s0, 0x4
/* 043728 80042B28 160DFFDB */  bne         $s0, $t5, .L80042A98
/* 04372C 80042B2C 26310004 */   addiu      $s1, $s1, 0x4
/* 043730 80042B30 10000076 */  b           .L80042D0C
/* 043734 80042B34 00000000 */   nop
.L80042B38:
/* 043738 80042B38 3C188018 */  lui         $t8, %hi(gFogNear)
/* 04373C 80042B3C 3C0E8018 */  lui         $t6, %hi(gFogFar)
/* 043740 80042B40 8DCE83DC */  lw          $t6, %lo(gFogFar)($t6)
/* 043744 80042B44 8F1883D8 */  lw          $t8, %lo(gFogNear)($t8)
/* 043748 80042B48 3C138018 */  lui         $s3, %hi(gFogRed)
/* 04374C 80042B4C 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 043750 80042B50 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 043754 80042B54 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 043758 80042B58 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 04375C 80042B5C 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 043760 80042B60 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 043764 80042B64 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 043768 80042B68 8E640000 */  lw          $a0, 0x0($s3)
/* 04376C 80042B6C AFAE0014 */  sw          $t6, 0x14($sp)
/* 043770 80042B70 0C02E874 */  jal         RCP_SetupDL_29
/* 043774 80042B74 AFB80010 */   sw         $t8, 0x10($sp)
/* 043778 80042B78 4405A000 */  mfc1        $a1, $fs0
/* 04377C 80042B7C 4406A000 */  mfc1        $a2, $fs0
/* 043780 80042B80 24190001 */  addiu       $t9, $zero, 0x1
/* 043784 80042B84 AFB90010 */  sw          $t9, 0x10($sp)
/* 043788 80042B88 8E840000 */  lw          $a0, 0x0($s4)
/* 04378C 80042B8C 0C0016C0 */  jal         Matrix_Translate
/* 043790 80042B90 3C07C4FA */   lui        $a3, (0xC4FA0000 >> 16)
/* 043794 80042B94 3C014040 */  lui         $at, (0x40400000 >> 16)
/* 043798 80042B98 44810000 */  mtc1        $at, $fv0
/* 04379C 80042B9C 240F0001 */  addiu       $t7, $zero, 0x1
/* 0437A0 80042BA0 AFAF0010 */  sw          $t7, 0x10($sp)
/* 0437A4 80042BA4 44050000 */  mfc1        $a1, $fv0
/* 0437A8 80042BA8 44070000 */  mfc1        $a3, $fv0
/* 0437AC 80042BAC 8E840000 */  lw          $a0, 0x0($s4)
/* 0437B0 80042BB0 0C00170D */  jal         Matrix_Scale
/* 0437B4 80042BB4 3C064000 */   lui        $a2, (0x40000000 >> 16)
/* 0437B8 80042BB8 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0437BC 80042BBC 02402025 */   or         $a0, $s2, $zero
/* 0437C0 80042BC0 3C0D8017 */  lui         $t5, %hi(gFrameCount)
/* 0437C4 80042BC4 8DAD7DB0 */  lw          $t5, %lo(gFrameCount)($t5)
/* 0437C8 80042BC8 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 0437CC 80042BCC 31B80001 */  andi        $t8, $t5, 0x1
/* 0437D0 80042BD0 1300000B */  beqz        $t8, .L80042C00
/* 0437D4 80042BD4 00000000 */   nop
/* 0437D8 80042BD8 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 0437DC 80042BDC 8E420000 */  lw          $v0, 0x0($s2)
/* 0437E0 80042BE0 3C190600 */  lui         $t9, %hi(D_60005B0)
/* 0437E4 80042BE4 273905B0 */  addiu       $t9, $t9, %lo(D_60005B0)
/* 0437E8 80042BE8 244E0008 */  addiu       $t6, $v0, 0x8
/* 0437EC 80042BEC AE4E0000 */  sw          $t6, 0x0($s2)
/* 0437F0 80042BF0 AC590004 */  sw          $t9, 0x4($v0)
/* 0437F4 80042BF4 AC530000 */  sw          $s3, 0x0($v0)
/* 0437F8 80042BF8 10000044 */  b           .L80042D0C
/* 0437FC 80042BFC 00000000 */   nop
.L80042C00:
/* 043800 80042C00 8E420000 */  lw          $v0, 0x0($s2)
/* 043804 80042C04 3C0D0600 */  lui         $t5, %hi(D_6002E60)
/* 043808 80042C08 25AD2E60 */  addiu       $t5, $t5, %lo(D_6002E60)
/* 04380C 80042C0C 244F0008 */  addiu       $t7, $v0, 0x8
/* 043810 80042C10 AE4F0000 */  sw          $t7, 0x0($s2)
/* 043814 80042C14 AC4D0004 */  sw          $t5, 0x4($v0)
/* 043818 80042C18 AC530000 */  sw          $s3, 0x0($v0)
/* 04381C 80042C1C 1000003B */  b           .L80042D0C
/* 043820 80042C20 00000000 */   nop
.L80042C24:
/* 043824 80042C24 3C188018 */  lui         $t8, %hi(gFogNear)
/* 043828 80042C28 3C0E8018 */  lui         $t6, %hi(gFogFar)
/* 04382C 80042C2C 8DCE83DC */  lw          $t6, %lo(gFogFar)($t6)
/* 043830 80042C30 8F1883D8 */  lw          $t8, %lo(gFogNear)($t8)
/* 043834 80042C34 3C138018 */  lui         $s3, %hi(gFogRed)
/* 043838 80042C38 26738320 */  addiu       $s3, $s3, %lo(gFogRed)
/* 04383C 80042C3C 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 043840 80042C40 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 043844 80042C44 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 043848 80042C48 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 04384C 80042C4C 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 043850 80042C50 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 043854 80042C54 8E640000 */  lw          $a0, 0x0($s3)
/* 043858 80042C58 AFAE0014 */  sw          $t6, 0x14($sp)
/* 04385C 80042C5C 0C02E874 */  jal         RCP_SetupDL_29
/* 043860 80042C60 AFB80010 */   sw         $t8, 0x10($sp)
/* 043864 80042C64 4405A000 */  mfc1        $a1, $fs0
/* 043868 80042C68 4406A000 */  mfc1        $a2, $fs0
/* 04386C 80042C6C 3C07C4BB */  lui         $a3, (0xC4BB8000 >> 16)
/* 043870 80042C70 24190001 */  addiu       $t9, $zero, 0x1
/* 043874 80042C74 AFB90010 */  sw          $t9, 0x10($sp)
/* 043878 80042C78 34E78000 */  ori         $a3, $a3, (0xC4BB8000 & 0xFFFF)
/* 04387C 80042C7C 0C0016C0 */  jal         Matrix_Translate
/* 043880 80042C80 8E840000 */   lw         $a0, 0x0($s4)
/* 043884 80042C84 3C014040 */  lui         $at, (0x40400000 >> 16)
/* 043888 80042C88 44810000 */  mtc1        $at, $fv0
/* 04388C 80042C8C 240F0001 */  addiu       $t7, $zero, 0x1
/* 043890 80042C90 AFAF0010 */  sw          $t7, 0x10($sp)
/* 043894 80042C94 44050000 */  mfc1        $a1, $fv0
/* 043898 80042C98 44070000 */  mfc1        $a3, $fv0
/* 04389C 80042C9C 8E840000 */  lw          $a0, 0x0($s4)
/* 0438A0 80042CA0 0C00170D */  jal         Matrix_Scale
/* 0438A4 80042CA4 3C064000 */   lui        $a2, (0x40000000 >> 16)
/* 0438A8 80042CA8 0C001BAE */  jal         Matrix_SetGfxMtx
/* 0438AC 80042CAC 02402025 */   or         $a0, $s2, $zero
/* 0438B0 80042CB0 3C0D8017 */  lui         $t5, %hi(gFrameCount)
/* 0438B4 80042CB4 8DAD7DB0 */  lw          $t5, %lo(gFrameCount)($t5)
/* 0438B8 80042CB8 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 0438BC 80042CBC 31B80001 */  andi        $t8, $t5, 0x1
/* 0438C0 80042CC0 1300000B */  beqz        $t8, .L80042CF0
/* 0438C4 80042CC4 00000000 */   nop
/* 0438C8 80042CC8 3C130600 */  lui         $s3, (0x6000000 >> 16)
/* 0438CC 80042CCC 8E420000 */  lw          $v0, 0x0($s2)
/* 0438D0 80042CD0 3C190601 */  lui         $t9, %hi(D_6008830)
/* 0438D4 80042CD4 27398830 */  addiu       $t9, $t9, %lo(D_6008830)
/* 0438D8 80042CD8 244E0008 */  addiu       $t6, $v0, 0x8
/* 0438DC 80042CDC AE4E0000 */  sw          $t6, 0x0($s2)
/* 0438E0 80042CE0 AC590004 */  sw          $t9, 0x4($v0)
/* 0438E4 80042CE4 AC530000 */  sw          $s3, 0x0($v0)
/* 0438E8 80042CE8 10000008 */  b           .L80042D0C
/* 0438EC 80042CEC 00000000 */   nop
.L80042CF0:
/* 0438F0 80042CF0 8E420000 */  lw          $v0, 0x0($s2)
/* 0438F4 80042CF4 3C0D0601 */  lui         $t5, %hi(D_600B0E0)
/* 0438F8 80042CF8 25ADB0E0 */  addiu       $t5, $t5, %lo(D_600B0E0)
/* 0438FC 80042CFC 244F0008 */  addiu       $t7, $v0, 0x8
/* 043900 80042D00 AE4F0000 */  sw          $t7, 0x0($s2)
/* 043904 80042D04 AC4D0004 */  sw          $t5, 0x4($v0)
/* 043908 80042D08 AC530000 */  sw          $s3, 0x0($v0)
.L80042D0C:
/* 04390C 80042D0C 0C0015D0 */  jal         Matrix_Pop
/* 043910 80042D10 02802025 */   or         $a0, $s4, $zero
.L80042D14:
/* 043914 80042D14 8FBF003C */  lw          $ra, 0x3C($sp)
.L80042D18:
/* 043918 80042D18 D7B40020 */  ldc1        $fs0, 0x20($sp)
/* 04391C 80042D1C 8FB00028 */  lw          $s0, 0x28($sp)
/* 043920 80042D20 8FB1002C */  lw          $s1, 0x2C($sp)
/* 043924 80042D24 8FB20030 */  lw          $s2, 0x30($sp)
/* 043928 80042D28 8FB30034 */  lw          $s3, 0x34($sp)
/* 04392C 80042D2C 8FB40038 */  lw          $s4, 0x38($sp)
/* 043930 80042D30 03E00008 */  jr          $ra
/* 043934 80042D34 27BD01D8 */   addiu      $sp, $sp, 0x1D8
glabel func_80042D38
/* 043938 80042D38 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 04393C 80042D3C AFBF001C */  sw          $ra, 0x1C($sp)
/* 043940 80042D40 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* 043944 80042D44 0C0015C2 */  jal         Matrix_Push
/* 043948 80042D48 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* 04394C 80042D4C 3C088017 */  lui         $t0, %hi(gPlayerNum)
/* 043950 80042D50 8D0878A0 */  lw          $t0, %lo(gPlayerNum)($t0)
/* 043954 80042D54 3C014000 */  lui         $at, (0x40000000 >> 16)
/* 043958 80042D58 44812000 */  mtc1        $at, $ft0
/* 04395C 80042D5C 00084880 */  sll         $t1, $t0, 2
/* 043960 80042D60 3C198018 */  lui         $t9, %hi(gPlayer)
/* 043964 80042D64 01284821 */  addu        $t1, $t1, $t0
/* 043968 80042D68 8F398280 */  lw          $t9, %lo(gPlayer)($t9)
/* 04396C 80042D6C 000948C0 */  sll         $t1, $t1, 3
/* 043970 80042D70 3C018018 */  lui         $at, %hi(D_8017847C)
/* 043974 80042D74 C426847C */  lwc1        $ft1, %lo(D_8017847C)($at)
/* 043978 80042D78 01284823 */  subu        $t1, $t1, $t0
/* 04397C 80042D7C 00094940 */  sll         $t1, $t1, 5
/* 043980 80042D80 03291021 */  addu        $v0, $t9, $t1
/* 043984 80042D84 46062200 */  add.s       $ft2, $ft0, $ft1
/* 043988 80042D88 C4420040 */  lwc1        $fv1, 0x40($v0)
/* 04398C 80042D8C C4400048 */  lwc1        $fv0, 0x48($v0)
/* 043990 80042D90 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* 043994 80042D94 44064000 */  mfc1        $a2, $ft2
/* 043998 80042D98 240A0001 */  addiu       $t2, $zero, 0x1
/* 04399C 80042D9C 44051000 */  mfc1        $a1, $fv1
/* 0439A0 80042DA0 44070000 */  mfc1        $a3, $fv0
/* 0439A4 80042DA4 AFAA0010 */  sw          $t2, 0x10($sp)
/* 0439A8 80042DA8 0C0016C0 */  jal         Matrix_Translate
/* 0439AC 80042DAC 8C84B3C0 */   lw         $a0, %lo(gGfxMatrix)($a0)
/* 0439B0 80042DB0 3C013F80 */  lui         $at, (0x3F800000 >> 16)
/* 0439B4 80042DB4 44810000 */  mtc1        $at, $fv0
/* 0439B8 80042DB8 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* 0439BC 80042DBC 240B0001 */  addiu       $t3, $zero, 0x1
/* 0439C0 80042DC0 44060000 */  mfc1        $a2, $fv0
/* 0439C4 80042DC4 44070000 */  mfc1        $a3, $fv0
/* 0439C8 80042DC8 AFAB0010 */  sw          $t3, 0x10($sp)
/* 0439CC 80042DCC 8C84B3C0 */  lw          $a0, %lo(gGfxMatrix)($a0)
/* 0439D0 80042DD0 0C00170D */  jal         Matrix_Scale
/* 0439D4 80042DD4 3C053FC0 */   lui        $a1, (0x3FC00000 >> 16)
/* 0439D8 80042DD8 3C0C8018 */  lui         $t4, %hi(gFogNear)
/* 0439DC 80042DDC 3C0D8018 */  lui         $t5, %hi(gFogFar)
/* 0439E0 80042DE0 8DAD83DC */  lw          $t5, %lo(gFogFar)($t5)
/* 0439E4 80042DE4 8D8C83D8 */  lw          $t4, %lo(gFogNear)($t4)
/* 0439E8 80042DE8 3C048018 */  lui         $a0, %hi(gFogRed)
/* 0439EC 80042DEC 3C058018 */  lui         $a1, %hi(gFogGreen)
/* 0439F0 80042DF0 3C068018 */  lui         $a2, %hi(gFogBlue)
/* 0439F4 80042DF4 3C078018 */  lui         $a3, %hi(gFogAlpha)
/* 0439F8 80042DF8 8CE78338 */  lw          $a3, %lo(gFogAlpha)($a3)
/* 0439FC 80042DFC 8CC68330 */  lw          $a2, %lo(gFogBlue)($a2)
/* 043A00 80042E00 8CA58328 */  lw          $a1, %lo(gFogGreen)($a1)
/* 043A04 80042E04 8C848320 */  lw          $a0, %lo(gFogRed)($a0)
/* 043A08 80042E08 AFAD0014 */  sw          $t5, 0x14($sp)
/* 043A0C 80042E0C 0C02E534 */  jal         RCP_SetupDL_37
/* 043A10 80042E10 AFAC0010 */   sw         $t4, 0x10($sp)
/* 043A14 80042E14 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* 043A18 80042E18 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* 043A1C 80042E1C 8C820000 */  lw          $v0, 0x0($a0)
/* 043A20 80042E20 3C0EFA00 */  lui         $t6, (0xFA000000 >> 16)
/* 043A24 80042E24 2418FF7D */  addiu       $t8, $zero, -0x83
/* 043A28 80042E28 244F0008 */  addiu       $t7, $v0, 0x8
/* 043A2C 80042E2C AC8F0000 */  sw          $t7, 0x0($a0)
/* 043A30 80042E30 AC580004 */  sw          $t8, 0x4($v0)
/* 043A34 80042E34 AC4E0000 */  sw          $t6, 0x0($v0)
/* 043A38 80042E38 0C001BAE */  jal         Matrix_SetGfxMtx
/* 043A3C 80042E3C 00000000 */   nop
/* 043A40 80042E40 3C088017 */  lui         $t0, %hi(gFrameCount)
/* 043A44 80042E44 8D087DB0 */  lw          $t0, %lo(gFrameCount)($t0)
/* 043A48 80042E48 3C048013 */  lui         $a0, %hi(gMasterDisp)
/* 043A4C 80042E4C 24847E64 */  addiu       $a0, $a0, %lo(gMasterDisp)
/* 043A50 80042E50 31190001 */  andi        $t9, $t0, 0x1
/* 043A54 80042E54 1320000B */  beqz        $t9, .L80042E84
/* 043A58 80042E58 3C0D0600 */   lui        $t5, (0x6000000 >> 16)
/* 043A5C 80042E5C 8C820000 */  lw          $v0, 0x0($a0)
/* 043A60 80042E60 3C0B0603 */  lui         $t3, %hi(D_602C030)
/* 043A64 80042E64 256BC030 */  addiu       $t3, $t3, %lo(D_602C030)
/* 043A68 80042E68 24490008 */  addiu       $t1, $v0, 0x8
/* 043A6C 80042E6C AC890000 */  sw          $t1, 0x0($a0)
/* 043A70 80042E70 3C0A0600 */  lui         $t2, (0x6000000 >> 16)
/* 043A74 80042E74 AC4A0000 */  sw          $t2, 0x0($v0)
/* 043A78 80042E78 AC4B0004 */  sw          $t3, 0x4($v0)
/* 043A7C 80042E7C 10000008 */  b           .L80042EA0
/* 043A80 80042E80 00000000 */   nop
.L80042E84:
/* 043A84 80042E84 8C820000 */  lw          $v0, 0x0($a0)
/* 043A88 80042E88 3C0F0603 */  lui         $t7, %hi(D_602C088)
/* 043A8C 80042E8C 25EFC088 */  addiu       $t7, $t7, %lo(D_602C088)
/* 043A90 80042E90 244C0008 */  addiu       $t4, $v0, 0x8
/* 043A94 80042E94 AC8C0000 */  sw          $t4, 0x0($a0)
/* 043A98 80042E98 AC4F0004 */  sw          $t7, 0x4($v0)
/* 043A9C 80042E9C AC4D0000 */  sw          $t5, 0x0($v0)
.L80042EA0:
/* 043AA0 80042EA0 3C048014 */  lui         $a0, %hi(gGfxMatrix)
/* 043AA4 80042EA4 0C0015D0 */  jal         Matrix_Pop
/* 043AA8 80042EA8 2484B3C0 */   addiu      $a0, $a0, %lo(gGfxMatrix)
/* 043AAC 80042EAC 8FBF001C */  lw          $ra, 0x1C($sp)
/* 043AB0 80042EB0 27BD0020 */  addiu       $sp, $sp, 0x20
/* 043AB4 80042EB4 03E00008 */  jr          $ra
/* 043AB8 80042EB8 00000000 */   nop
/* 043ABC 80042EBC 00000000 */  nop
