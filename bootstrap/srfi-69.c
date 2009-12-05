/* Generated from srfi-69.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:26
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: srfi-69.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file srfi-69.c -extend ./private-namespace.scm
   unit: srfi_69
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[119];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,110,117,109,98,101,114,45,104,97,115,104,45,104,111,111,107,32,111,98,106,54,52,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,29),40,110,117,109,98,101,114,45,104,97,115,104,32,111,98,106,55,52,32,46,32,116,109,112,55,51,55,53,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,36),40,111,98,106,101,99,116,45,117,105,100,45,104,97,115,104,32,111,98,106,49,54,50,32,46,32,116,109,112,49,54,49,49,54,51,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,32),40,115,121,109,98,111,108,45,104,97,115,104,32,111,98,106,49,57,49,32,46,32,116,109,112,49,57,48,49,57,50,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,101,99,107,45,107,101,121,119,111,114,100,32,120,50,49,55,32,46,32,121,50,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,33),40,107,101,121,119,111,114,100,45,104,97,115,104,32,111,98,106,50,51,49,32,46,32,116,109,112,50,51,48,50,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,29),40,101,113,63,45,104,97,115,104,32,111,98,106,50,56,52,32,46,32,116,109,112,50,56,51,50,56,53,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,30),40,101,113,118,63,45,104,97,115,104,32,111,98,106,51,55,57,32,46,32,116,109,112,51,55,56,51,56,48,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,104,115,104,52,49,51,32,105,52,49,52,32,108,101,110,52,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,46),40,118,101,99,116,111,114,45,104,97,115,104,32,111,98,106,52,48,55,32,115,101,101,100,52,48,56,32,100,101,112,116,104,52,48,57,32,115,116,97,114,116,52,49,48,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,39),40,114,101,99,117,114,115,105,118,101,45,97,116,111,109,105,99,45,104,97,115,104,32,111,98,106,52,49,55,32,100,101,112,116,104,52,49,56,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,13),40,103,53,49,56,32,111,98,106,53,50,48,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,13),40,103,53,50,49,32,111,98,106,53,50,51,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,13),40,103,53,51,51,32,111,98,106,53,51,53,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,103,53,51,54,32,111,98,106,53,51,56,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,32),40,114,101,99,117,114,115,105,118,101,45,104,97,115,104,32,111,98,106,52,52,54,32,100,101,112,116,104,52,52,55,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,21),40,42,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,52,48,51,41,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,32),40,101,113,117,97,108,63,45,104,97,115,104,32,111,98,106,53,52,57,32,46,32,116,109,112,53,52,56,53,53,48,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,53,57,50,32,115,116,97,114,116,54,48,49,32,101,110,100,54,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,110,100,53,57,53,32,37,115,116,97,114,116,53,57,48,54,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,115,116,97,114,116,53,57,52,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,104,97,115,104,32,115,116,114,53,55,52,32,46,32,116,109,112,53,55,51,53,55,53,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,54,53,50,32,115,116,97,114,116,54,54,49,32,101,110,100,54,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,110,100,54,53,53,32,37,115,116,97,114,116,54,53,48,54,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,115,116,97,114,116,54,53,52,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,35),40,115,116,114,105,110,103,45,99,105,45,104,97,115,104,32,115,116,114,54,51,52,32,46,32,116,109,112,54,51,51,54,51,53,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,43),40,104,97,115,104,45,116,97,98,108,101,45,99,97,110,111,110,105,99,97,108,45,108,101,110,103,116,104,32,116,97,98,55,48,49,32,114,101,113,55,48,50,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,86),40,42,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,116,101,115,116,55,50,48,32,104,97,115,104,55,50,49,32,108,101,110,55,50,50,32,109,105,110,45,108,111,97,100,55,50,51,32,109,97,120,45,108,111,97,100,55,50,52,32,105,110,105,116,105,97,108,55,50,55,32,116,109,112,55,49,57,55,50,56,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,19),40,105,110,118,97,114,103,45,101,114,114,32,109,115,103,56,49,55,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,8),40,102,95,51,52,51,55,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,97,114,103,115,56,49,50,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,46,32,97,114,103,117,109,101,110,116,115,48,55,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,104,97,115,104,45,116,97,98,108,101,63,32,111,98,106,56,54,52,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,56,54,54,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,39),40,104,97,115,104,45,116,97,98,108,101,45,101,113,117,105,118,97,108,101,110,99,101,45,102,117,110,99,116,105,111,110,32,104,116,56,54,57,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,104,45,102,117,110,99,116,105,111,110,32,104,116,56,55,50,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,105,110,45,108,111,97,100,32,104,116,56,55,53,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,27),40,104,97,115,104,45,116,97,98,108,101,45,109,97,120,45,108,111,97,100,32,104,116,56,55,56,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,28),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,107,101,121,115,32,104,116,56,56,49,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,30),40,104,97,115,104,45,116,97,98,108,101,45,119,101,97,107,45,118,97,108,117,101,115,32,104,116,56,56,52,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,31),40,104,97,115,104,45,116,97,98,108,101,45,104,97,115,45,105,110,105,116,105,97,108,63,32,104,116,56,56,55,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,105,110,105,116,105,97,108,32,104,116,56,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,98,117,99,107,101,116,57,49,48,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,48,52,32,105,57,48,56,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,114,101,115,105,122,101,33,32,104,116,57,50,50,32,118,101,99,57,50,51,32,108,101,110,57,50,52,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,99,111,112,121,45,108,111,111,112,32,98,117,99,107,101,116,57,52,51,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,51,55,32,105,57,52,49,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,24),40,42,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,57,51,50,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,23),40,104,97,115,104,45,116,97,98,108,101,45,99,111,112,121,32,104,116,57,52,57,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,26),40,98,111,100,121,57,54,54,32,102,117,110,99,57,55,53,32,116,104,117,110,107,57,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,8),40,102,95,52,49,54,49,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,116,104,117,110,107,57,54,57,32,37,102,117,110,99,57,54,52,49,48,50,50,41,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,102,117,110,99,57,54,56,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,45),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,57,53,56,32,107,101,121,57,53,57,32,46,32,116,109,112,57,53,55,57,54,48,41,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,48,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,61),40,42,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,49,48,51,53,32,107,101,121,49,48,51,54,32,102,117,110,99,49,48,51,55,32,100,101,102,49,48,51,56,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,60),40,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,47,100,101,102,97,117,108,116,32,104,116,49,48,56,49,32,107,101,121,49,48,56,50,32,102,117,110,99,49,48,56,51,32,100,101,102,49,48,56,52,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,40),40,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,49,48,56,56,32,107,101,121,49,48,56,57,32,118,97,108,49,48,57,48,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,47),40,104,97,115,104,45,116,97,98,108,101,45,114,101,102,47,100,101,102,97,117,108,116,32,104,116,49,49,53,55,32,107,101,121,49,49,53,56,32,100,101,102,49,49,53,57,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,101,120,105,115,116,115,63,32,104,116,49,49,55,53,32,107,101,121,49,49,55,54,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,50,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,50,50,55,32,98,117,99,107,101,116,49,50,50,56,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,100,101,108,101,116,101,33,32,104,116,49,50,48,54,32,107,101,121,49,50,48,55,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,112,114,101,118,49,50,53,48,32,98,117,99,107,101,116,49,50,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,50,52,52,32,105,49,50,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,36),40,104,97,115,104,45,116,97,98,108,101,45,114,101,109,111,118,101,33,32,104,116,49,50,51,56,32,102,117,110,99,49,50,51,57,41,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,99,108,101,97,114,33,32,104,116,49,50,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,50,55,56,32,108,115,116,49,50,56,50,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,50,55,51,32,105,49,50,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,36),40,42,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,50,54,56,32,104,116,50,49,50,54,57,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,35),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,33,32,104,116,49,49,50,56,57,32,104,116,50,49,50,57,48,41,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,34),40,104,97,115,104,45,116,97,98,108,101,45,109,101,114,103,101,32,104,116,49,49,50,57,52,32,104,116,50,49,50,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,51,48,55,32,108,115,116,49,51,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,48,52,32,108,115,116,49,51,48,53,41,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,62,97,108,105,115,116,32,104,116,49,50,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,13),40,103,49,51,50,54,32,120,49,51,50,56,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,51,49,57,32,103,49,51,50,51,49,51,50,53,41,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,40),40,97,108,105,115,116,45,62,104,97,115,104,45,116,97,98,108,101,32,97,108,105,115,116,49,51,49,52,32,46,32,114,101,115,116,49,51,49,53,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,51,52,51,32,108,115,116,49,51,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,52,48,32,108,115,116,49,51,52,49,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,24),40,104,97,115,104,45,116,97,98,108,101,45,107,101,121,115,32,104,116,49,51,51,53,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,50,32,98,117,99,107,101,116,49,51,53,56,32,108,115,116,49,51,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,53,53,32,108,115,116,49,51,53,54,41,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,26),40,104,97,115,104,45,116,97,98,108,101,45,118,97,108,117,101,115,32,104,116,49,51,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,18),40,103,49,51,56,52,32,98,117,99,107,101,116,49,51,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,51,55,55,32,103,49,51,56,49,49,51,56,51,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,51,55,48,32,105,49,51,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,38),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,51,54,53,32,112,114,111,99,49,51,54,54,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,50,32,98,117,99,107,101,116,49,52,48,50,32,97,99,99,49,52,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,105,49,51,57,57,32,97,99,99,49,52,48,48,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,43),40,42,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,51,57,50,32,102,117,110,99,49,51,57,51,32,105,110,105,116,49,51,57,52,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,42),40,104,97,115,104,45,116,97,98,108,101,45,102,111,108,100,32,104,116,49,52,48,56,32,102,117,110,99,49,52,48,57,32,105,110,105,116,49,52,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,37),40,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,104,116,49,52,49,52,32,112,114,111,99,49,52,49,53,41,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,33),40,104,97,115,104,45,116,97,98,108,101,45,119,97,108,107,32,104,116,49,52,49,57,32,112,114,111,99,49,52,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,25),40,97,53,54,50,56,32,107,49,52,50,54,32,118,49,52,50,55,32,97,49,52,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,32),40,104,97,115,104,45,116,97,98,108,101,45,109,97,112,32,104,116,49,52,50,52,32,102,117,110,99,49,52,50,53,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,23),40,97,53,54,52,49,32,104,116,49,52,51,49,32,112,111,114,116,49,52,51,50,41,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,98,117,99,107,101,116,49,49,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,8),40,102,95,53,55,55,56,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,36),40,97,53,54,53,55,32,104,116,49,49,51,51,32,107,101,121,49,49,51,52,32,46,32,116,109,112,49,49,51,50,49,49,51,53,41,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_srfi_69_toplevel)
C_externexport void C_ccall C_srfi_69_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5737)
static void C_fcall f_5737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5756)
static void C_ccall f_5756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_fcall f_5695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5646)
static void C_ccall f_5646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5640)
static void C_ccall f_5640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5617)
static void C_ccall f_5617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5515)
static void C_fcall f_5515(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5527)
static void C_fcall f_5527(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5543)
static void C_fcall f_5543(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5444)
static void C_fcall f_5444(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5456)
static void C_fcall f_5456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5479)
static void C_fcall f_5479(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5487)
static void C_fcall f_5487(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5394)
static void C_fcall f_5394(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5410)
static void C_fcall f_5410(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5314)
static void C_ccall f_5314(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5329)
static void C_fcall f_5329(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5345)
static void C_fcall f_5345(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5275)
static void C_fcall f_5275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5301)
static void C_ccall f_5301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5283)
static void C_fcall f_5283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5205)
static void C_fcall f_5205(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5221)
static void C_fcall f_5221(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5097)
static void C_fcall f_5097(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5109)
static void C_fcall f_5109(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5132)
static void C_fcall f_5132(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4985)
static void C_ccall f_4985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_fcall f_5006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5032)
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5051)
static void C_ccall f_5051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4937)
static void C_fcall f_4937(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4890)
static C_word C_fcall f_4890(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4817)
static void C_fcall f_4817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4777)
static C_word C_fcall f_4777(C_word t0,C_word t1);
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4710)
static void C_fcall f_4710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4671)
static C_word C_fcall f_4671(C_word t0,C_word t1);
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4471)
static void C_fcall f_4471(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4586)
static void C_fcall f_4586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4537)
static void C_fcall f_4537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4214)
static void C_fcall f_4214(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_fcall f_4244(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4278)
static void C_ccall f_4278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_fcall f_4366(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4166)
static void C_fcall f_4166(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void C_fcall f_4149(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3921)
static void C_fcall f_3921(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3960)
static void C_fcall f_3960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4023)
static void C_fcall f_4023(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3798)
static void C_fcall f_3798(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_fcall f_3813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3875)
static void C_fcall f_3875(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3705)
static void C_fcall f_3705(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3728)
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3312)
static void C_fcall f_3312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3315)
static void C_fcall f_3315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3318)
static void C_fcall f_3318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3353)
static void C_fcall f_3353(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_fcall f_3364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static C_word C_fcall f_3236(C_word t0);
C_noret_decl(f_3203)
static void C_fcall f_3203(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3173)
static void C_fcall f_3173(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3179)
static C_word C_fcall f_3179(C_word t0,C_word t1);
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3111)
static void C_fcall f_3111(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_fcall f_3102(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3083)
static void C_fcall f_3083(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2970)
static void C_fcall f_2970(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2942)
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2363)
static void C_fcall f_2363(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_fcall f_2482(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2817)
static void C_fcall f_2817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2805)
static void C_fcall f_2805(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_fcall f_2738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_fcall f_2712(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_fcall f_2431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2465)
static void C_fcall f_2465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_fcall f_2468(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_fcall f_2366(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2383)
static void C_fcall f_2383(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_fcall f_1686(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_5737)
static void C_fcall trf_5737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5737(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5737(t0,t1,t2);}

C_noret_decl(trf_5695)
static void C_fcall trf_5695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5695(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5695(t0,t1,t2);}

C_noret_decl(trf_5515)
static void C_fcall trf_5515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5515(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5515(t0,t1,t2,t3);}

C_noret_decl(trf_5527)
static void C_fcall trf_5527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5527(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5527(t0,t1,t2,t3);}

C_noret_decl(trf_5543)
static void C_fcall trf_5543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5543(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5543(t0,t1,t2,t3);}

C_noret_decl(trf_5444)
static void C_fcall trf_5444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5444(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5444(t0,t1,t2);}

C_noret_decl(trf_5456)
static void C_fcall trf_5456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5456(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5456(t0,t1,t2);}

C_noret_decl(trf_5479)
static void C_fcall trf_5479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5479(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5479(t0,t1,t2);}

C_noret_decl(trf_5487)
static void C_fcall trf_5487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5487(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5487(t0,t1,t2);}

C_noret_decl(trf_5394)
static void C_fcall trf_5394(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5394(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5394(t0,t1,t2,t3);}

C_noret_decl(trf_5410)
static void C_fcall trf_5410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5410(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5410(t0,t1,t2,t3);}

C_noret_decl(trf_5329)
static void C_fcall trf_5329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5329(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5329(t0,t1,t2,t3);}

C_noret_decl(trf_5345)
static void C_fcall trf_5345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5345(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5345(t0,t1,t2,t3);}

C_noret_decl(trf_5275)
static void C_fcall trf_5275(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5275(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5275(t0,t1,t2);}

C_noret_decl(trf_5283)
static void C_fcall trf_5283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5283(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5283(t0,t1,t2);}

C_noret_decl(trf_5205)
static void C_fcall trf_5205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5205(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5205(t0,t1,t2,t3);}

C_noret_decl(trf_5221)
static void C_fcall trf_5221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5221(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5221(t0,t1,t2,t3);}

C_noret_decl(trf_5097)
static void C_fcall trf_5097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5097(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5097(t0,t1,t2);}

C_noret_decl(trf_5109)
static void C_fcall trf_5109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5109(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5109(t0,t1,t2);}

C_noret_decl(trf_5132)
static void C_fcall trf_5132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5132(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5132(t0,t1,t2);}

C_noret_decl(trf_5006)
static void C_fcall trf_5006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5006(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5006(t0,t1,t2);}

C_noret_decl(trf_5032)
static void C_fcall trf_5032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5032(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5032(t0,t1,t2,t3);}

C_noret_decl(trf_4937)
static void C_fcall trf_4937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4937(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4937(t0,t1,t2,t3);}

C_noret_decl(trf_4817)
static void C_fcall trf_4817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4817(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4817(t0,t1,t2);}

C_noret_decl(trf_4710)
static void C_fcall trf_4710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4710(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4710(t0,t1,t2);}

C_noret_decl(trf_4471)
static void C_fcall trf_4471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4471(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4471(t0,t1);}

C_noret_decl(trf_4586)
static void C_fcall trf_4586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4586(t0,t1,t2);}

C_noret_decl(trf_4537)
static void C_fcall trf_4537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4537(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4537(t0,t1,t2);}

C_noret_decl(trf_4214)
static void C_fcall trf_4214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4214(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4214(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4244)
static void C_fcall trf_4244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4244(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4244(t0,t1);}

C_noret_decl(trf_4366)
static void C_fcall trf_4366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4366(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4366(t0,t1,t2);}

C_noret_decl(trf_4307)
static void C_fcall trf_4307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4307(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4307(t0,t1,t2);}

C_noret_decl(trf_4166)
static void C_fcall trf_4166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4166(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4166(t0,t1);}

C_noret_decl(trf_4149)
static void C_fcall trf_4149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4149(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4149(t0,t1,t2);}

C_noret_decl(trf_3921)
static void C_fcall trf_3921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3921(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3921(t0,t1,t2,t3);}

C_noret_decl(trf_3960)
static void C_fcall trf_3960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3960(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3960(t0,t1);}

C_noret_decl(trf_4086)
static void C_fcall trf_4086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4086(t0,t1,t2);}

C_noret_decl(trf_4023)
static void C_fcall trf_4023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4023(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4023(t0,t1,t2);}

C_noret_decl(trf_3798)
static void C_fcall trf_3798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3798(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3798(t0,t1,t2);}

C_noret_decl(trf_3813)
static void C_fcall trf_3813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3813(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3813(t0,t1,t2);}

C_noret_decl(trf_3875)
static void C_fcall trf_3875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3875(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3875(t0,t1,t2);}

C_noret_decl(trf_3705)
static void C_fcall trf_3705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3705(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3705(t0,t1,t2);}

C_noret_decl(trf_3728)
static void C_fcall trf_3728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3728(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3728(t0,t1,t2);}

C_noret_decl(trf_3312)
static void C_fcall trf_3312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3312(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3312(t0,t1);}

C_noret_decl(trf_3315)
static void C_fcall trf_3315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3315(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3315(t0,t1);}

C_noret_decl(trf_3318)
static void C_fcall trf_3318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3318(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3318(t0,t1);}

C_noret_decl(trf_3353)
static void C_fcall trf_3353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3353(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3353(t0,t1,t2);}

C_noret_decl(trf_3364)
static void C_fcall trf_3364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3364(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3364(t0,t1,t2);}

C_noret_decl(trf_3203)
static void C_fcall trf_3203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3203(void *dummy){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
f_3203(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3173)
static void C_fcall trf_3173(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3173(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3173(t0,t1,t2);}

C_noret_decl(trf_3111)
static void C_fcall trf_3111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3111(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3111(t0,t1);}

C_noret_decl(trf_3102)
static void C_fcall trf_3102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3102(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3102(t0,t1,t2);}

C_noret_decl(trf_3083)
static void C_fcall trf_3083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3083(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3083(t0,t1,t2,t3);}

C_noret_decl(trf_2970)
static void C_fcall trf_2970(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2970(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2970(t0,t1);}

C_noret_decl(trf_2961)
static void C_fcall trf_2961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2961(t0,t1,t2);}

C_noret_decl(trf_2942)
static void C_fcall trf_2942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2942(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2942(t0,t1,t2,t3);}

C_noret_decl(trf_2363)
static void C_fcall trf_2363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2363(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2363(t0,t1);}

C_noret_decl(trf_2482)
static void C_fcall trf_2482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2482(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2482(t0,t1,t2,t3);}

C_noret_decl(trf_2817)
static void C_fcall trf_2817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2817(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2817(t0,t1,t2);}

C_noret_decl(trf_2805)
static void C_fcall trf_2805(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2805(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2805(t0,t1,t2);}

C_noret_decl(trf_2738)
static void C_fcall trf_2738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2738(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2738(t0,t1,t2);}

C_noret_decl(trf_2712)
static void C_fcall trf_2712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2712(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2712(t0,t1,t2);}

C_noret_decl(trf_2431)
static void C_fcall trf_2431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2431(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2431(t0,t1,t2,t3);}

C_noret_decl(trf_2465)
static void C_fcall trf_2465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2465(t0,t1);}

C_noret_decl(trf_2468)
static void C_fcall trf_2468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2468(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2468(t0,t1);}

C_noret_decl(trf_2366)
static void C_fcall trf_2366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2366(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2366(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2383)
static void C_fcall trf_2383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2383(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2383(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1686)
static void C_fcall trf_1686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1686(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1686(t0,t1);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr3rv)
static void C_fcall tr3rv(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3rv(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n+1);
t3=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_69_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_69_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_69_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(953)){
C_save(t1);
C_rereclaim2(953*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,119);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],20,"\003sysnumber-hash-hook");
lf[4]=C_h_intern(&lf[4],11,"number-hash");
lf[5]=C_h_intern(&lf[5],5,"fxmod");
lf[6]=C_h_intern(&lf[6],15,"\003syssignal-hook");
lf[7]=C_h_intern(&lf[7],5,"\000type");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid number");
lf[9]=C_h_intern(&lf[9],9,"\003syserror");
lf[10]=C_h_intern(&lf[10],15,"object-uid-hash");
lf[11]=C_h_intern(&lf[11],11,"symbol-hash");
lf[12]=C_h_intern(&lf[12],17,"\003syscheck-keyword");
lf[13]=C_h_intern(&lf[13],11,"\000type-error");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a keyword");
lf[15]=C_h_intern(&lf[15],8,"keyword\077");
lf[16]=C_h_intern(&lf[16],12,"keyword-hash");
lf[17]=C_h_intern(&lf[17],8,"eq\077-hash");
lf[18]=C_h_intern(&lf[18],16,"hash-by-identity");
lf[19]=C_h_intern(&lf[19],9,"eqv\077-hash");
lf[20]=C_h_intern(&lf[20],11,"input-port\077");
lf[21]=C_h_intern(&lf[21],11,"equal\077-hash");
lf[22]=C_h_intern(&lf[22],4,"hash");
lf[23]=C_h_intern(&lf[23],11,"string-hash");
lf[24]=C_h_intern(&lf[24],13,"\003syssubstring");
lf[25]=C_h_intern(&lf[25],15,"\003syscheck-range");
lf[26]=C_h_intern(&lf[26],14,"string-ci-hash");
lf[27]=C_h_intern(&lf[27],14,"string-hash-ci");
lf[29]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\0013\376\003\000\000\002\376\377\001\000\000\002i\376\003\000\000\002\376\377\001\000\000\004\325\376\003\000\000\002\376\377\001\000\000\011\255\376\003\000\000\002\376\377\001\000\000\023]\376\003\000\000\002\376\377\001\000\000&\303\376\003\000\000\002\376\377\001"
"\000\000M\215\376\003\000\000\002\376\377\001\000\000\233\035\376\003\000\000\002\376\377\001\000\0016\077\376\003\000\000\002\376\377\001\000\002l\201\376\003\000\000\002\376\377\001\000\004\331\005\376\003\000\000\002\376\377\001\000\011\262\025\376\003\000\000\002\376\377\001\000\023dA\376\003\000\000"
"\002\376\377\001\000&\310\205\376\003\000\000\002\376\377\001\000M\221\037\376\003\000\000\002\376\377\001\000\233\042I\376\003\000\000\002\376\377\001\0016D\277\376\003\000\000\002\376\377\001\002l\211\207\376\003\000\000\002\376\377\001\004\331\023\027\376\003\000\000\002\376\377\001\011\262&1"
"\376\003\000\000\002\376\377\001\023dLq\376\003\000\000\002\376\377\001&\310\230\373\376\003\000\000\002\376\377\001\077\377\377\377\376\377\016");
lf[31]=C_h_intern(&lf[31],11,"make-vector");
lf[33]=C_h_intern(&lf[33],10,"hash-table");
lf[34]=C_h_intern(&lf[34],3,"eq\077");
lf[35]=C_h_intern(&lf[35],4,"eqv\077");
lf[36]=C_h_intern(&lf[36],6,"equal\077");
lf[37]=C_h_intern(&lf[37],8,"string=\077");
lf[38]=C_h_intern(&lf[38],11,"string-ci=\077");
lf[39]=C_h_intern(&lf[39],1,"=");
lf[40]=C_h_intern(&lf[40],15,"make-hash-table");
lf[41]=C_decode_literal(C_heaptop,"\376U0.5\000");
lf[42]=C_decode_literal(C_heaptop,"\376U0.8\000");
lf[43]=C_h_intern(&lf[43],7,"warning");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\033user test without user hash");
lf[45]=C_h_intern(&lf[45],5,"error");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\036min-load greater than max-load");
lf[47]=C_h_intern(&lf[47],5,"\000test");
lf[48]=C_h_intern(&lf[48],17,"\003syscheck-closure");
lf[49]=C_h_intern(&lf[49],5,"\000hash");
lf[50]=C_h_intern(&lf[50],5,"\000size");
lf[51]=C_h_intern(&lf[51],19,"hash-table-max-size");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[53]=C_h_intern(&lf[53],8,"\000initial");
lf[54]=C_h_intern(&lf[54],9,"\000min-load");
lf[55]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[56]=C_decode_literal(C_heaptop,"\376U1.0\000");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid min-load");
lf[58]=C_h_intern(&lf[58],17,"\003syscheck-inexact");
lf[59]=C_h_intern(&lf[59],9,"\000max-load");
lf[60]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[61]=C_decode_literal(C_heaptop,"\376U1.0\000");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid max-load");
lf[63]=C_h_intern(&lf[63],10,"\000weak-keys");
lf[64]=C_h_intern(&lf[64],12,"\000weak-values");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\017unknown keyword");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\025missing keyword value");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\017missing keyword");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid size");
lf[69]=C_h_intern(&lf[69],11,"hash-table\077");
lf[70]=C_h_intern(&lf[70],15,"hash-table-size");
lf[71]=C_h_intern(&lf[71],31,"hash-table-equivalence-function");
lf[72]=C_h_intern(&lf[72],24,"hash-table-hash-function");
lf[73]=C_h_intern(&lf[73],19,"hash-table-min-load");
lf[74]=C_h_intern(&lf[74],19,"hash-table-max-load");
lf[75]=C_h_intern(&lf[75],20,"hash-table-weak-keys");
lf[76]=C_h_intern(&lf[76],22,"hash-table-weak-values");
lf[77]=C_h_intern(&lf[77],23,"hash-table-has-initial\077");
lf[78]=C_h_intern(&lf[78],18,"hash-table-initial");
lf[79]=C_h_intern(&lf[79],18,"hash-table-resize!");
lf[81]=C_h_intern(&lf[81],15,"hash-table-copy");
lf[82]=C_h_intern(&lf[82],18,"hash-table-update!");
lf[83]=C_h_intern(&lf[83],5,"floor");
lf[84]=C_h_intern(&lf[84],13,"\000access-error");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[86]=C_h_intern(&lf[86],8,"identity");
lf[88]=C_h_intern(&lf[88],26,"hash-table-update!/default");
lf[89]=C_h_intern(&lf[89],15,"hash-table-set!");
lf[90]=C_h_intern(&lf[90],19,"\003sysundefined-value");
lf[91]=C_h_intern(&lf[91],14,"hash-table-ref");
lf[92]=C_h_intern(&lf[92],22,"hash-table-ref/default");
lf[93]=C_h_intern(&lf[93],18,"hash-table-exists\077");
lf[94]=C_h_intern(&lf[94],18,"hash-table-delete!");
lf[95]=C_h_intern(&lf[95],18,"hash-table-remove!");
lf[96]=C_h_intern(&lf[96],17,"hash-table-clear!");
lf[97]=C_h_intern(&lf[97],12,"vector-fill!");
lf[99]=C_h_intern(&lf[99],17,"hash-table-merge!");
lf[100]=C_h_intern(&lf[100],16,"hash-table-merge");
lf[101]=C_h_intern(&lf[101],17,"hash-table->alist");
lf[102]=C_h_intern(&lf[102],17,"alist->hash-table");
lf[103]=C_h_intern(&lf[103],15,"hash-table-keys");
lf[104]=C_h_intern(&lf[104],17,"hash-table-values");
lf[107]=C_h_intern(&lf[107],15,"hash-table-fold");
lf[108]=C_h_intern(&lf[108],19,"hash-table-for-each");
lf[109]=C_h_intern(&lf[109],15,"hash-table-walk");
lf[110]=C_h_intern(&lf[110],14,"hash-table-map");
lf[111]=C_h_intern(&lf[111],9,"\003sysprint");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\002)>");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\016#<hash-table (");
lf[114]=C_h_intern(&lf[114],27,"\003sysregister-record-printer");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\037hash-table does not contain key");
lf[116]=C_h_intern(&lf[116],18,"getter-with-setter");
lf[117]=C_h_intern(&lf[117],17,"register-feature!");
lf[118]=C_h_intern(&lf[118],7,"srfi-69");
C_register_lf2(lf,119,create_ptable());
t2=C_mutate(&lf[0] /* (set! c81 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm: 65   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[117]+1)))(3,*((C_word*)lf[117]+1),t3,lf[118]);}

/* k1500 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word ab[114],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1502,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! number-hash-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1504,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! number-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1510,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[10]+1 /* (set! object-uid-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1713,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[11]+1 /* (set! symbol-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1777,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[12]+1 /* (set! check-keyword ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[16]+1 /* (set! keyword-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[17]+1 /* (set! eq?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2030,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[18]+1 /* (set! hash-by-identity ...) */,*((C_word*)lf[17]+1));
t10=C_mutate((C_word*)lf[19]+1 /* (set! eqv?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2304,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[3] /* (set! *equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2363,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[21]+1 /* (set! equal?-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2829,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[22]+1 /* (set! hash ...) */,*((C_word*)lf[21]+1));
t14=C_mutate((C_word*)lf[23]+1 /* (set! string-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[26]+1 /* (set! string-ci-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[27]+1 /* (set! string-hash-ci ...) */,*((C_word*)lf[26]+1));
t17=C_mutate(&lf[28] /* (set! constant699 ...) */,lf[29]);
t18=C_mutate(&lf[30] /* (set! hash-table-canonical-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3173,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t19=*((C_word*)lf[31]+1);
t20=C_mutate(&lf[32] /* (set! *make-hash-table ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=t19,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t21=*((C_word*)lf[34]+1);
t22=*((C_word*)lf[35]+1);
t23=*((C_word*)lf[36]+1);
t24=*((C_word*)lf[37]+1);
t25=*((C_word*)lf[38]+1);
t26=*((C_word*)lf[39]+1);
t27=C_mutate((C_word*)lf[40]+1 /* (set! make-hash-table ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3234,a[2]=t26,a[3]=t25,a[4]=t24,a[5]=t23,a[6]=t22,a[7]=t21,a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp));
t28=C_mutate((C_word*)lf[69]+1 /* (set! hash-table? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3597,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[70]+1 /* (set! hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[71]+1 /* (set! hash-table-equivalence-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3612,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[72]+1 /* (set! hash-table-hash-function ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3621,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[73]+1 /* (set! hash-table-min-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3630,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[74]+1 /* (set! hash-table-max-load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3639,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[75]+1 /* (set! hash-table-weak-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3648,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[76]+1 /* (set! hash-table-weak-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3657,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[77]+1 /* (set! hash-table-has-initial? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[78]+1 /* (set! hash-table-initial ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3678,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[79]+1 /* (set! hash-table-resize! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3772,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t39=*((C_word*)lf[31]+1);
t40=C_mutate(&lf[80] /* (set! *hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3798,a[2]=t39,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t41=C_mutate((C_word*)lf[81]+1 /* (set! hash-table-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3910,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t42=*((C_word*)lf[34]+1);
t43=C_mutate((C_word*)lf[82]+1 /* (set! hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3919,a[2]=t42,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t44=*((C_word*)lf[34]+1);
t45=C_mutate(&lf[87] /* (set! *hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4214,a[2]=t44,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[88]+1 /* (set! hash-table-update!/default ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t47=*((C_word*)lf[34]+1);
t48=C_mutate((C_word*)lf[89]+1 /* (set! hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4438,a[2]=t47,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp));
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t50=*((C_word*)lf[34]+1);
t51=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5658,a[2]=t50,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 808  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[116]+1)))(4,*((C_word*)lf[116]+1),t49,t51,*((C_word*)lf[89]+1));}

/* a5657 in k1500 */
static void C_ccall f_5658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr4r,(void*)f_5658r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5658r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5658r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5662,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_5662(2,t6,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5778,a[2]=t2,a[3]=t3,a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp));}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_5662(2,t7,(C_word)C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* f_5778 in a5657 in k1500 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5778,2,t0,t1);}
/* srfi-69.scm: 811  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[84],lf[91],lf[115],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5660 in a5657 in k1500 */
static void C_ccall f_5662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5662,2,t0,t1);}
t2=(C_word)C_i_check_structure_2(((C_word*)t0)[5],lf[33],lf[91]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm: 815  ##sys#check-closure */
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[91]);}

/* k5666 in k5660 in a5657 in k1500 */
static void C_ccall f_5668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5668,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(3));
t4=(C_word)C_slot(((C_word*)t0)[6],C_fix(4));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_block_size(t2);
/* srfi-69.scm: 819  hash */
t7=t4;
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[3],t6);}

/* k5678 in k5666 in k5660 in a5657 in k1500 */
static void C_ccall f_5680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5680,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(C_word)C_slot(((C_word*)t0)[5],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5695,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5695(t7,((C_word*)t0)[2],t3);}
else{
t3=(C_word)C_slot(((C_word*)t0)[5],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word)li108),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_5737(t7,((C_word*)t0)[2],t3);}}

/* loop in k5678 in k5666 in k5660 in a5657 in k1500 */
static void C_fcall f_5737(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5737,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-69.scm: 832  def */
t3=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5756,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
/* srfi-69.scm: 834  test */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k5754 in loop in k5678 in k5666 in k5660 in a5657 in k1500 */
static void C_ccall f_5756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[4],C_fix(1)));}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm: 836  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5737(t3,((C_word*)t0)[5],t2);}}

/* loop in k5678 in k5666 in k5660 in a5657 in k1500 */
static void C_fcall f_5695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5695,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-69.scm: 824  def */
t3=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_slot(t3,C_fix(1)));}
else{
t6=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 828  loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k4636 in k1500 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word ab[64],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4638,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1 /* (set! hash-table-ref ...) */,t1);
t3=*((C_word*)lf[34]+1);
t4=C_mutate((C_word*)lf[92]+1 /* (set! hash-table-ref/default ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4640,a[2]=t3,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp));
t5=*((C_word*)lf[34]+1);
t6=C_mutate((C_word*)lf[93]+1 /* (set! hash-table-exists? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4746,a[2]=t5,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[34]+1);
t8=C_mutate((C_word*)lf[94]+1 /* (set! hash-table-delete! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4854,a[2]=t7,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[95]+1 /* (set! hash-table-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4985,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[96]+1 /* (set! hash-table-clear! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5081,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[98] /* (set! *hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5097,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[99]+1 /* (set! hash-table-merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5162,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[100]+1 /* (set! hash-table-merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5174,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[101]+1 /* (set! hash-table->alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5190,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[40]+1);
t16=C_mutate((C_word*)lf[102]+1 /* (set! alist->hash-table ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5263,a[2]=t15,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t17=C_mutate((C_word*)lf[103]+1 /* (set! hash-table-keys ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5314,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[104]+1 /* (set! hash-table-values ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5379,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[105] /* (set! *hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5444,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[106] /* (set! *hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5515,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[107]+1 /* (set! hash-table-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5581,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[108]+1 /* (set! hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5593,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[109]+1 /* (set! hash-table-walk ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5605,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[110]+1 /* (set! hash-table-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5617,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5640,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5642,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm: 1094 ##sys#register-record-printer */
((C_proc4)C_retrieve_proc(*((C_word*)lf[114]+1)))(4,*((C_word*)lf[114]+1),t25,lf[33],t26);}

/* a5641 in k4636 in k1500 */
static void C_ccall f_5642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5642,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5646,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 1097 ##sys#print */
t5=*((C_word*)lf[111]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[113],C_SCHEME_FALSE,t3);}

/* k5644 in a5641 in k4636 in k1500 */
static void C_ccall f_5646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(2));
/* srfi-69.scm: 1098 ##sys#print */
t4=*((C_word*)lf[111]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k5647 in k5644 in a5641 in k4636 in k1500 */
static void C_ccall f_5649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 1099 ##sys#print */
t2=*((C_word*)lf[111]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[112],C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k5638 in k4636 in k1500 */
static void C_ccall f_5640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* hash-table-map in k4636 in k1500 */
static void C_ccall f_5617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5617,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[110]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5624,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 1088 ##sys#check-closure */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[110]);}

/* k5622 in hash-table-map in k4636 in k1500 */
static void C_ccall f_5624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5629,a[2]=((C_word*)t0)[4],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 1089 *hash-table-fold */
f_5515(((C_word*)t0)[3],((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST);}

/* a5628 in k5622 in hash-table-map in k4636 in k1500 */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5629,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5637,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 1089 func */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,t3);}

/* k5635 in a5628 in k5622 in hash-table-map in k4636 in k1500 */
static void C_ccall f_5637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5637,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* hash-table-walk in k4636 in k1500 */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5605,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[109]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5612,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 1083 ##sys#check-closure */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[109]);}

/* k5610 in hash-table-walk in k4636 in k1500 */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 1084 *hash-table-for-each */
f_5444(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* hash-table-for-each in k4636 in k1500 */
static void C_ccall f_5593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5593,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[108]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5600,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 1078 ##sys#check-closure */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[108]);}

/* k5598 in hash-table-for-each in k4636 in k1500 */
static void C_ccall f_5600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 1079 *hash-table-for-each */
f_5444(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* hash-table-fold in k4636 in k1500 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5581,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_structure_2(t2,lf[33],lf[107]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5588,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm: 1073 ##sys#check-closure */
t7=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,lf[107]);}

/* k5586 in hash-table-fold in k4636 in k1500 */
static void C_ccall f_5588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 1074 *hash-table-fold */
f_5515(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* *hash-table-fold in k4636 in k1500 */
static void C_fcall f_5515(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5515,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_block_size(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5527,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t6,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_5527(t10,t1,C_fix(0),t4);}

/* loop in *hash-table-fold in k4636 in k1500 */
static void C_fcall f_5527(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5527,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5543,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5543(t8,t1,t4,t3);}}

/* fold2 in loop in *hash-table-fold in k4636 in k1500 */
static void C_fcall f_5543(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5543,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm: 1066 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5527(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5571,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_slot(t4,C_fix(0));
t8=(C_word)C_slot(t4,C_fix(1));
/* srfi-69.scm: 1069 func */
t9=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t9))(5,t9,t6,t7,t8,t3);}}

/* k5569 in fold2 in loop in *hash-table-fold in k4636 in k1500 */
static void C_ccall f_5571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 1068 fold2 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5543(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* *hash-table-for-each in k4636 in k1500 */
static void C_fcall f_5444(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5444,NULL,3,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5456,a[2]=t3,a[3]=t4,a[4]=t7,a[5]=t5,a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_5456(t9,t1,C_fix(0));}

/* doloop1370 in *hash-table-for-each in k4636 in k1500 */
static void C_fcall f_5456(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5456,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5466,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5479,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5479(t8,t3,t4);}}

/* loop1377 in doloop1370 in *hash-table-for-each in k4636 in k1500 */
static void C_fcall f_5479(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5479,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5487,a[2]=((C_word*)t0)[3],a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5502,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g13841385 */
t6=t3;
f_5487(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5500 in loop1377 in doloop1370 in *hash-table-for-each in k4636 in k1500 */
static void C_ccall f_5502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5479(t3,((C_word*)t0)[2],t2);}

/* g1384 in loop1377 in doloop1370 in *hash-table-for-each in k4636 in k1500 */
static void C_fcall f_5487(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5487,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 1054 proc */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* k5464 in doloop1370 in *hash-table-for-each in k4636 in k1500 */
static void C_ccall f_5466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5456(t3,((C_word*)t0)[2],t2);}

/* hash-table-values in k4636 in k1500 */
static void C_ccall f_5379(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5379,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[104]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5394,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5394(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table-values in k4636 in k1500 */
static void C_fcall f_5394(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5394,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5410,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5410(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table-values in k4636 in k1500 */
static void C_fcall f_5410(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5410,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm: 1036 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5394(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm: 1037 loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* hash-table-keys in k4636 in k1500 */
static void C_ccall f_5314(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5314,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[103]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5329,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5329(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table-keys in k4636 in k1500 */
static void C_fcall f_5329(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5329,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5345,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5345(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table-keys in k4636 in k1500 */
static void C_fcall f_5345(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5345,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm: 1021 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5329(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(0));
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
/* srfi-69.scm: 1022 loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* alist->hash-table in k4636 in k1500 */
static void C_ccall f_5263(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5263r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5263r(t0,t1,t2,t3);}}

static void C_ccall f_5263r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_list_2(t2,lf[102]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5270,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t5,((C_word*)t0)[2],t3);}

/* k5268 in alist->hash-table in k4636 in k1500 */
static void C_ccall f_5270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5273,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5275,a[2]=t4,a[3]=t1,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5275(t6,t2,((C_word*)t0)[2]);}

/* loop1319 in k5268 in alist->hash-table in k4636 in k1500 */
static void C_fcall f_5275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5275,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[3],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5301,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g13261327 */
t6=t3;
f_5283(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5299 in loop1319 in k5268 in alist->hash-table in k4636 in k1500 */
static void C_ccall f_5301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5275(t3,((C_word*)t0)[2],t2);}

/* g1326 in loop1319 in k5268 in alist->hash-table in k4636 in k1500 */
static void C_fcall f_5283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5283,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_check_pair_2(t2,lf[102]);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 1005 *hash-table-update!/default */
t6=lf[87];
f_4214(t6,t1,((C_word*)t0)[2],t4,*((C_word*)lf[86]+1),t5);}

/* k5271 in k5268 in alist->hash-table in k4636 in k1500 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* hash-table->alist in k4636 in k1500 */
static void C_ccall f_5190(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5190,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[101]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5205,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=((C_word)li83),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_5205(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table->alist in k4636 in k1500 */
static void C_fcall f_5205(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5205,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5221,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5221(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table->alist in k4636 in k1500 */
static void C_fcall f_5221(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5221,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm: 992  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5205(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(0));
t7=(C_word)C_slot(t5,C_fix(1));
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=(C_word)C_a_i_cons(&a,2,t8,t3);
/* srfi-69.scm: 993  loop2 */
t12=t1;
t13=t4;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* hash-table-merge in k4636 in k1500 */
static void C_ccall f_5174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5174,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[100]);
t5=(C_word)C_i_check_structure_2(t3,lf[33],lf[100]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5188,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 978  *hash-table-copy */
t7=lf[80];
f_3798(t7,t6,t2);}

/* k5186 in hash-table-merge in k4636 in k1500 */
static void C_ccall f_5188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 978  *hash-table-merge! */
f_5097(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* hash-table-merge! in k4636 in k1500 */
static void C_ccall f_5162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5162,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[99]);
t5=(C_word)C_i_check_structure_2(t3,lf[33],lf[99]);
/* srfi-69.scm: 973  *hash-table-merge! */
f_5097(t1,t2,t3);}

/* *hash-table-merge! in k4636 in k1500 */
static void C_fcall f_5097(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5097,NULL,3,t1,t2,t3);}
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5109,a[2]=t4,a[3]=t7,a[4]=t2,a[5]=t5,a[6]=((C_word)li78),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_5109(t9,t1,C_fix(0));}

/* doloop1273 in *hash-table-merge! in k4636 in k1500 */
static void C_fcall f_5109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5109,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=((C_word*)t0)[4];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5119,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5132,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5132(t8,t3,t4);}}

/* doloop1278 in doloop1273 in *hash-table-merge! in k4636 in k1500 */
static void C_fcall f_5132(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5132,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5145,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
t6=(C_word)C_slot(t3,C_fix(1));
/* srfi-69.scm: 968  *hash-table-update!/default */
t7=lf[87];
f_4214(t7,t4,((C_word*)t0)[2],t5,*((C_word*)lf[86]+1),t6);}}

/* k5143 in doloop1278 in doloop1273 in *hash-table-merge! in k4636 in k1500 */
static void C_ccall f_5145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5132(t3,((C_word*)t0)[2],t2);}

/* k5117 in doloop1273 in *hash-table-merge! in k4636 in k1500 */
static void C_ccall f_5119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5109(t3,((C_word*)t0)[2],t2);}

/* hash-table-clear! in k4636 in k1500 */
static void C_ccall f_5081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5081,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[96]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5088,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 955  vector-fill! */
t6=*((C_word*)lf[97]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,C_SCHEME_END_OF_LIST);}

/* k5086 in hash-table-clear! in k4636 in k1500 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_fix(0)));}

/* hash-table-remove! in k4636 in k1500 */
static void C_ccall f_4985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4985,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[95]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4992,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 932  ##sys#check-closure */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[95]);}

/* k4990 in hash-table-remove! in k4636 in k1500 */
static void C_ccall f_4992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4992,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_block_size(t2);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5006,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t8,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word)li74),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_5006(t10,((C_word*)t0)[2],C_fix(0));}

/* doloop1244 in k4990 in hash-table-remove! in k4636 in k1500 */
static void C_fcall f_5006(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5006,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)((C_word*)t0)[5])[1]));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5019,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word)li73),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_5032(t8,t3,C_SCHEME_FALSE,t4);}}

/* loop in doloop1244 in k4990 in hash-table-remove! in k4636 in k1500 */
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5032,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t3,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5051,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t5,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t7=(C_word)C_slot(t4,C_fix(0));
t8=(C_word)C_slot(t4,C_fix(1));
/* srfi-69.scm: 942  func */
t9=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t9))(4,t9,t6,t7,t8);}}

/* k5049 in loop in doloop1244 in k4990 in hash-table-remove! in k4636 in k1500 */
static void C_ccall f_5051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[9])?(C_word)C_i_setslot(((C_word*)t0)[9],C_fix(1),((C_word*)t0)[8]):(C_word)C_i_setslot(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[8]));
t3=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
/* srfi-69.scm: 949  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5032(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[8]);}}

/* k5017 in doloop1244 in k4990 in hash-table-remove! in k4636 in k1500 */
static void C_ccall f_5019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5006(t3,((C_word*)t0)[2],t2);}

/* hash-table-delete! in k4636 in k1500 */
static void C_ccall f_4854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4854,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[94]);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_block_size(t5);
t7=(C_word)C_slot(t2,C_fix(4));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4870,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm: 896  hash */
t9=t7;
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,t3,t6);}

/* k4868 in hash-table-delete! in k4636 in k1500 */
static void C_ccall f_4870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4870,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(3));
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(C_word)C_slot(((C_word*)t0)[5],t1);
t6=(C_word)C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4890,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word)li70),tmp=(C_word)a,a+=8,tmp);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,f_4890(t7,C_SCHEME_FALSE,t5));}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t8,a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=((C_word)li71),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_4937(t10,((C_word*)t0)[2],C_SCHEME_FALSE,t5);}}

/* loop in k4868 in hash-table-delete! in k4636 in k1500 */
static void C_fcall f_4937(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4937,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t3,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4956,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t5,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t7=(C_word)C_slot(t4,C_fix(0));
/* srfi-69.scm: 919  test */
t8=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t8))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k4954 in loop in k4868 in hash-table-delete! in k4636 in k1500 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[10])?(C_word)C_i_setslot(((C_word*)t0)[10],C_fix(1),((C_word*)t0)[9]):(C_word)C_i_setslot(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[9]));
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),((C_word*)t0)[5]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
/* srfi-69.scm: 926  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4937(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9]);}}

/* loop in k4868 in hash-table-delete! in k4636 in k1500 */
static C_word C_fcall f_4890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
loop:
C_stack_check;
if(C_truep((C_word)C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t3,C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[6],t5);
if(C_truep(t6)){
t7=(C_truep(t1)?(C_word)C_i_setslot(t1,C_fix(1),t4):(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t4));
t8=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),((C_word*)t0)[2]);
return(C_SCHEME_TRUE);}
else{
t10=t2;
t11=t4;
t1=t10;
t2=t11;
goto loop;}}}

/* hash-table-exists? in k4636 in k1500 */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4746,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[33],lf[93]);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_slot(t2,C_fix(3));
t7=(C_word)C_slot(t2,C_fix(4));
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4762,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_block_size(t5);
/* srfi-69.scm: 872  hash */
t10=t7;
((C_proc4)C_retrieve_proc(t10))(4,t10,t8,t3,t9);}

/* k4760 in hash-table-exists? in k4636 in k1500 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4762,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep(t2)){
t3=(C_word)C_slot(((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[3],a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4777(t4,t3));}
else{
t3=(C_word)C_slot(((C_word*)t0)[4],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4817(t7,((C_word*)t0)[2],t3);}}

/* loop in k4760 in hash-table-exists? in k4636 in k1500 */
static void C_fcall f_4817(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4817,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4830,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
/* srfi-69.scm: 884  test */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k4828 in loop in k4760 in hash-table-exists? in k4636 in k1500 */
static void C_ccall f_4830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm: 885  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4817(t3,((C_word*)t0)[4],t2);}}

/* loop in k4760 in hash-table-exists? in k4636 in k1500 */
static C_word C_fcall f_4777(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
if(C_truep((C_word)C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_slot(t1,C_fix(0));
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t4);}
else{
t5=(C_word)C_slot(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* hash-table-ref/default in k4636 in k1500 */
static void C_ccall f_4640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4640,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_structure_2(t2,lf[33],lf[92]);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t2,C_fix(3));
t8=(C_word)C_slot(t2,C_fix(4));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4656,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t6,a[6]=t7,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t10=(C_word)C_block_size(t6);
/* srfi-69.scm: 846  hash */
t11=t8;
((C_proc4)C_retrieve_proc(t11))(4,t11,t9,t3,t10);}

/* k4654 in hash-table-ref/default in k4636 in k1500 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4656,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(C_word)C_slot(((C_word*)t0)[5],t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4671,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4671(t4,t3));}
else{
t3=(C_word)C_slot(((C_word*)t0)[5],t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4710(t7,((C_word*)t0)[2],t3);}}

/* loop in k4654 in hash-table-ref/default in k4636 in k1500 */
static void C_fcall f_4710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4710,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=((C_word*)t0)[5];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4726,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
/* srfi-69.scm: 861  test */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}

/* k4724 in loop in k4654 in hash-table-ref/default in k4636 in k1500 */
static void C_ccall f_4726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[4],C_fix(1)));}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm: 863  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4710(t3,((C_word*)t0)[5],t2);}}

/* loop in k4654 in hash-table-ref/default in k4636 in k1500 */
static C_word C_fcall f_4671(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[3];
return(t2);}
else{
t2=(C_word)C_slot(t1,C_fix(0));
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return((C_word)C_slot(t2,C_fix(1)));}
else{
t5=(C_word)C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}}}

/* hash-table-set! in k1500 */
static void C_ccall f_4438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[20],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4438,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_structure_2(t2,lf[33],lf[89]);
t6=(C_word)C_slot(t2,C_fix(2));
t7=(C_word)C_fixnum_plus(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4505,a[2]=t7,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t9=t2;
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_slot(t9,C_fix(5));
t12=(C_word)C_slot(t9,C_fix(6));
t13=(C_word)C_block_size(t10);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4498,a[2]=t12,a[3]=t7,a[4]=t13,a[5]=t10,a[6]=t9,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t15=(C_word)C_a_i_times(&a,2,t13,t11);
/* srfi-69.scm: 636  floor */
t16=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t14,t15);}

/* k4496 in hash-table-set! in k1500 */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4498,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_a_i_times(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]);
/* srfi-69.scm: 637  floor */
t5=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4488 in k4496 in hash-table-set! in k1500 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4490,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4471,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[4],C_fix(1073741823)))){
t4=(C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]);
t5=t3;
f_4471(t5,(C_truep(t4)?(C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[2],t2):C_SCHEME_FALSE));}
else{
t4=t3;
f_4471(t4,C_SCHEME_FALSE);}}

/* k4469 in k4488 in k4496 in hash-table-set! in k1500 */
static void C_fcall f_4471(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm: 640  hash-table-resize! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[79]+1)))(5,*((C_word*)lf[79]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_4505(2,t3,t2);}}

/* k4503 in hash-table-set! in k1500 */
static void C_ccall f_4505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4505,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(4));
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(3));
t4=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
t5=(C_word)C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm: 780  hash */
t7=t2;
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[4],t5);}

/* k4518 in k4503 in hash-table-set! in k1500 */
static void C_ccall f_4520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4520,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[9],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4537,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li61),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];
f_4537(t8,t3,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4586,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t2,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word)li62),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_4586(t8,t3,t2);}}

/* loop in k4518 in k4503 in hash-table-set! in k1500 */
static void C_fcall f_4586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4586,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[8]);
t5=(C_word)C_i_setslot(((C_word*)t0)[7],((C_word*)t0)[6],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_set_i_slot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[4]));}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4616,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
/* srfi-69.scm: 800  test */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[10],t5);}}

/* k4614 in loop in k4518 in k4503 in hash-table-set! in k1500 */
static void C_ccall f_4616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[4]));}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm: 802  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4586(t3,((C_word*)t0)[6],t2);}}

/* loop in k4518 in k4503 in hash-table-set! in k1500 */
static void C_fcall f_4537(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4537,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[7]);
t5=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]));}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_eqp(((C_word*)t0)[9],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_setslot(t3,C_fix(1),((C_word*)t0)[8]));}
else{
t6=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 792  loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k4524 in k4518 in k4503 in hash-table-set! in k1500 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[90]+1));}

/* hash-table-update!/default in k1500 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4426,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_structure_2(t2,lf[33],lf[88]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4433,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm: 767  ##sys#check-closure */
t8=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t4,lf[88]);}

/* k4431 in hash-table-update!/default in k1500 */
static void C_ccall f_4433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 768  *hash-table-update!/default */
t2=lf[87];
f_4214(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* *hash-table-update!/default in k1500 */
static void C_fcall f_4214(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4214,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_slot(t2,C_fix(2));
t7=(C_word)C_fixnum_plus(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4278,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t7,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t9=t2;
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_slot(t9,C_fix(5));
t12=(C_word)C_slot(t9,C_fix(6));
t13=(C_word)C_block_size(t10);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4271,a[2]=t12,a[3]=t7,a[4]=t13,a[5]=t10,a[6]=t9,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t15=(C_word)C_a_i_times(&a,2,t13,t11);
/* srfi-69.scm: 636  floor */
t16=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t14,t15);}

/* k4269 in *hash-table-update!/default in k1500 */
static void C_ccall f_4271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4271,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_a_i_times(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]);
/* srfi-69.scm: 637  floor */
t5=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4261 in k4269 in *hash-table-update!/default in k1500 */
static void C_ccall f_4263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4263,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[4],C_fix(1073741823)))){
t4=(C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]);
t5=t3;
f_4244(t5,(C_truep(t4)?(C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[2],t2):C_SCHEME_FALSE));}
else{
t4=t3;
f_4244(t4,C_SCHEME_FALSE);}}

/* k4242 in k4261 in k4269 in *hash-table-update!/default in k1500 */
static void C_fcall f_4244(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm: 640  hash-table-resize! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[79]+1)))(5,*((C_word*)lf[79]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_4278(2,t3,t2);}}

/* k4276 in *hash-table-update!/default in k1500 */
static void C_ccall f_4278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4278,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(4));
t3=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t4=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t5=(C_word)C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm: 735  hash */
t7=t2;
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],t5);}

/* k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_ccall f_4293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4293,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[10],t1);
t3=(C_word)C_eqp(((C_word*)t0)[9],((C_word*)t0)[8]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4307,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word)li57),tmp=(C_word)a,a+=12,tmp));
t7=((C_word*)t5)[1];
f_4307(t7,((C_word*)t0)[2],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=t2,a[11]=((C_word*)t0)[7],a[12]=((C_word)li58),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_4366(t7,((C_word*)t0)[2],t2);}}

/* loop in k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_fcall f_4366(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4366,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4376,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm: 754  func */
t4=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
/* srfi-69.scm: 759  test */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[11],t5);}}

/* k4397 in loop in k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-69.scm: 760  func */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm: 763  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4366(t3,((C_word*)t0)[5],t2);}}

/* k4400 in k4397 in loop in k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4374 in loop in k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_ccall f_4376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4376,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* loop in k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4307,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4317,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm: 741  func */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_eqp(((C_word*)t0)[10],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4343,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t3,C_fix(1));
/* srfi-69.scm: 747  func */
t8=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);}
else{
t6=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 750  loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k4341 in loop in k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4315 in loop in k4291 in k4276 in *hash-table-update!/default in k1500 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4317,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* hash-table-update! in k1500 */
static void C_ccall f_3919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4r,(void*)f_3919r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3919r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3919r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(16);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3921,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4149,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4166,a[2]=t6,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-func9681029 */
t8=t7;
f_4166(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-thunk9691021 */
t10=t6;
f_4149(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body966974 */
t12=t5;
f_3921(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-func968 in hash-table-update! in k1500 */
static void C_fcall f_4166(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4166,NULL,2,t0,t1);}
/* def-thunk9691021 */
t2=((C_word*)t0)[2];
f_4149(t2,t1,*((C_word*)lf[86]+1));}

/* def-thunk969 in hash-table-update! in k1500 */
static void C_fcall f_4149(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4149,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(9));
if(C_truep(t3)){
/* body966974 */
t4=((C_word*)t0)[3];
f_3921(t4,t1,t2,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4161,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
/* body966974 */
t5=((C_word*)t0)[3];
f_3921(t5,t1,t2,t4);}}

/* f_4161 in def-thunk969 in hash-table-update! in k1500 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4161,2,t0,t1);}
/* srfi-69.scm: 684  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[84],lf[82],lf[85],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* body966 in hash-table-update! in k1500 */
static void C_fcall f_3921(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3921,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(((C_word*)t0)[4],lf[33],lf[82]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3928,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm: 688  ##sys#check-closure */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[82]);}

/* k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_3928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm: 689  ##sys#check-closure */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[82]);}

/* k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_3931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3931,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(2));
t3=(C_word)C_fixnum_plus(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=((C_word*)t0)[7];
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_slot(t5,C_fix(5));
t8=(C_word)C_slot(t5,C_fix(6));
t9=(C_word)C_block_size(t6);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3987,a[2]=t8,a[3]=t3,a[4]=t9,a[5]=t6,a[6]=t5,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t11=(C_word)C_a_i_times(&a,2,t9,t7);
/* srfi-69.scm: 636  floor */
t12=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}

/* k3985 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3987,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_a_i_times(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]);
/* srfi-69.scm: 637  floor */
t5=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3977 in k3985 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3979,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3960,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[4],C_fix(1073741823)))){
t4=(C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[3],((C_word*)t0)[2]);
t5=t3;
f_3960(t5,(C_truep(t4)?(C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[2],t2):C_SCHEME_FALSE));}
else{
t4=t3;
f_3960(t4,C_SCHEME_FALSE);}}

/* k3958 in k3977 in k3985 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_fcall f_3960(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* srfi-69.scm: 640  hash-table-resize! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[79]+1)))(5,*((C_word*)lf[79]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3994(2,t3,t2);}}

/* k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3994,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(4));
t3=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t4=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t5=(C_word)C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* srfi-69.scm: 696  hash */
t7=t2;
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],t5);}

/* k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4009,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[10],t1);
t3=(C_word)C_eqp(((C_word*)t0)[9],((C_word*)t0)[8]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4023,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word)li50),tmp=(C_word)a,a+=12,tmp));
t7=((C_word*)t5)[1];
f_4023(t7,((C_word*)t0)[2],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4086,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=t2,a[11]=((C_word*)t0)[7],a[12]=((C_word)li51),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_4086(t7,((C_word*)t0)[2],t2);}}

/* loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_fcall f_4086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4086,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4096,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4114,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 715  thunk */
t5=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
/* srfi-69.scm: 720  test */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[11],t5);}}

/* k4121 in loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4123,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-69.scm: 721  func */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm: 724  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4086(t3,((C_word*)t0)[5],t2);}}

/* k4124 in k4121 in loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4112 in loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 715  func */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4094 in loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4096,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_fcall f_4023(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
loop:
a=C_alloc(13);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4023,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4033,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4051,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 702  thunk */
t5=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_eqp(((C_word*)t0)[10],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4063,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t3,C_fix(1));
/* srfi-69.scm: 708  func */
t8=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);}
else{
t6=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 711  loop */
t12=t1;
t13=t6;
t1=t12;
t2=t13;
goto loop;}}}

/* k4061 in loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k4049 in loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 702  func */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4031 in loop in k4007 in k3992 in k3929 in k3926 in body966 in hash-table-update! in k1500 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4033,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=t1;
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* hash-table-copy in k1500 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3910,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[81]);
/* srfi-69.scm: 669  *hash-table-copy */
t4=lf[80];
f_3798(t4,t1,t2);}

/* *hash-table-copy in k1500 */
static void C_fcall f_3798(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3798,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_block_size(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3808,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm: 649  make-vector */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t4,C_SCHEME_END_OF_LIST);}

/* k3806 in *hash-table-copy in k1500 */
static void C_ccall f_3808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3808,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li47),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3813(t5,((C_word*)t0)[2],C_fix(0));}

/* doloop937 in k3806 in *hash-table-copy in k1500 */
static void C_fcall f_3813(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3813,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(4));
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(5));
t7=(C_word)C_slot(((C_word*)t0)[5],C_fix(6));
t8=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t9=(C_word)C_slot(((C_word*)t0)[5],C_fix(8));
t10=(C_word)C_slot(((C_word*)t0)[5],C_fix(9));
/* srfi-69.scm: 652  *make-hash-table */
t11=lf[32];
f_3203(t11,t1,t3,t4,t5,t6,t7,t10,(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3869,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3875,a[2]=t6,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3875(t8,t3,t4);}}

/* copy-loop in doloop937 in k3806 in *hash-table-copy in k1500 */
static void C_fcall f_3875(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3875,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3896,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_slot(t2,C_fix(1));
/* srfi-69.scm: 665  copy-loop */
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k3894 in copy-loop in doloop937 in k3806 in *hash-table-copy in k1500 */
static void C_ccall f_3896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3896,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3867 in doloop937 in k3806 in *hash-table-copy in k1500 */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3813(t4,((C_word*)t0)[2],t3);}

/* hash-table-resize! in k1500 */
static void C_ccall f_3772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3772,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_times(t4,C_fix(2));
t6=(C_word)C_i_fixnum_min(C_fix(1073741823),t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3779,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 624  hash-table-canonical-length */
f_3173(t7,lf[28],t6);}

/* k3777 in hash-table-resize! in k1500 */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 625  make-vector */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_SCHEME_END_OF_LIST);}

/* k3780 in k3777 in hash-table-resize! in k1500 */
static void C_ccall f_3782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3785,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
t4=((C_word*)t0)[2];
t5=t1;
t6=(C_word)C_block_size(t4);
t7=(C_word)C_block_size(t5);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3705,a[2]=t7,a[3]=t3,a[4]=t5,a[5]=t4,a[6]=t9,a[7]=t6,a[8]=((C_word)li44),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_3705(t11,t2,C_fix(0));}

/* doloop904 in k3780 in k3777 in hash-table-resize! in k1500 */
static void C_fcall f_3705(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3705,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3715,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3728(t8,t3,t4);}}

/* loop in doloop904 in k3780 in k3777 in hash-table-resize! in k1500 */
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3728,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3744,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* srfi-69.scm: 615  hash */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t4,((C_word*)t0)[2]);}}

/* k3742 in loop in doloop904 in k3780 in k3777 in hash-table-resize! in k1500 */
static void C_ccall f_3744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3744,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_slot(((C_word*)t0)[5],t1);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_i_setslot(((C_word*)t0)[5],t1,t5);
t7=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm: 618  loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3728(t8,((C_word*)t0)[2],t7);}

/* k3713 in doloop904 in k3780 in k3777 in hash-table-resize! in k1500 */
static void C_ccall f_3715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3705(t3,((C_word*)t0)[2],t2);}

/* k3783 in k3780 in k3777 in hash-table-resize! in k1500 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]));}

/* hash-table-initial in k1500 */
static void C_ccall f_3678(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3678,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[78]);
t4=(C_word)C_slot(t2,C_fix(9));
if(C_truep(t4)){
/* srfi-69.scm: 602  thunk */
t5=t4;
((C_proc2)C_retrieve_proc(t5))(2,t5,t1);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* hash-table-has-initial? in k1500 */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3666,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[77]);
t4=(C_word)C_slot(t2,C_fix(9));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* hash-table-weak-values in k1500 */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3657,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[76]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(8)));}

/* hash-table-weak-keys in k1500 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3648,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[75]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(7)));}

/* hash-table-max-load in k1500 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3639,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(6)));}

/* hash-table-min-load in k1500 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3630,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(5)));}

/* hash-table-hash-function in k1500 */
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3621,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[72]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(4)));}

/* hash-table-equivalence-function in k1500 */
static void C_ccall f_3612(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3612,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[71]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(3)));}

/* hash-table-size in k1500 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3603,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[33],lf[70]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(2)));}

/* hash-table? in k1500 */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3597,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[33]));}

/* make-hash-table in k1500 */
static void C_ccall f_3234(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+41)){
C_save_and_reclaim((void*)tr2r,(void*)f_3234r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3234r(t0,t1,t2);}}

static void C_ccall f_3234r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a=C_alloc(41);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=*((C_word*)lf[36]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(307);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=lf[41];
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=lf[42];
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t6,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t18=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3312,a[2]=t4,a[3]=t2,a[4]=t17,a[5]=t12,a[6]=t16,a[7]=t14,a[8]=t6,a[9]=t1,a[10]=t8,a[11]=t10,tmp=(C_word)a,a+=12,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t4)[1]))){
t19=t18;
f_3312(t19,C_SCHEME_UNDEFINED);}
else{
t19=(C_word)C_i_car(((C_word*)t4)[1]);
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3587,a[2]=t4,a[3]=t19,a[4]=t6,a[5]=t18,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm: 481  keyword? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t20,t19);}}

/* k3585 in make-hash-table in k1500 */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3587,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3312(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm: 482  ##sys#check-closure */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[40]);}}

/* k3588 in k3585 in make-hash-table in k1500 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_3312(t5,t4);}

/* k3310 in make-hash-table in k1500 */
static void C_fcall f_3312(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3312,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
f_3315(t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm: 487  keyword? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t4,t3);}}

/* k3565 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3315(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm: 488  ##sys#check-closure */
t3=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[40]);}}

/* k3568 in k3565 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_3315(t5,t4);}

/* k3313 in k3310 in make-hash-table in k1500 */
static void C_fcall f_3315(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3315,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t3=t2;
f_3318(t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-69.scm: 493  keyword? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t4,t3);}}

/* k3533 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3535,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
f_3318(t3,t2);}
else{
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[40]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3541,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(C_fix(0),((C_word*)t0)[4]))){
t4=t3;
f_3541(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm: 496  error */
t4=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[40],lf[68],((C_word*)t0)[4]);}}}

/* k3539 in k3533 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_fixnum_min(*((C_word*)lf[51]+1),((C_word*)t0)[5]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
f_3318(t6,t5);}

/* k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_fcall f_3318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3318,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[8],a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word)li31),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_3353(t6,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_fcall f_3353(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3353,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3364,a[2]=((C_word*)t0)[9],a[3]=t3,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3374,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* srfi-69.scm: 506  keyword? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t5,t3);}}

/* k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=t3;
f_3380(2,t4,(C_word)C_i_car(t2));}
else{
/* srfi-69.scm: 510  invarg-err */
t4=((C_word*)t0)[2];
f_3364(t4,t3,lf[66]);}}
else{
/* srfi-69.scm: 542  invarg-err */
t2=((C_word*)t0)[2];
f_3364(t2,((C_word*)t0)[10],lf[67]);}}

/* k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3383,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[9],lf[47]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3396,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm: 513  ##sys#check-closure */
t5=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t1,lf[40]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[49]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm: 516  ##sys#check-closure */
t6=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t1,lf[40]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[50]);
if(C_truep(t5)){
t6=(C_word)C_i_check_exact_2(t1,lf[40]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3419,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_lessp(C_fix(0),t1))){
t8=t7;
f_3419(2,t8,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm: 521  error */
t8=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[40],lf[52],t1);}}
else{
t6=(C_word)C_eqp(((C_word*)t0)[9],lf[53]);
if(C_truep(t6)){
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3437,a[2]=t1,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t8=(C_word)C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm: 541  loop */
t9=((C_word*)((C_word*)t0)[11])[1];
f_3353(t9,((C_word*)t0)[10],t8);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[9],lf[54]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3447,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm: 526  ##sys#check-inexact */
((C_proc4)C_retrieve_proc(*((C_word*)lf[58]+1)))(4,*((C_word*)lf[58]+1),t8,t1,lf[40]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[9],lf[59]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3472,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* srfi-69.scm: 531  ##sys#check-inexact */
((C_proc4)C_retrieve_proc(*((C_word*)lf[58]+1)))(4,*((C_word*)lf[58]+1),t9,t1,lf[40]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[9],lf[63]);
if(C_truep(t9)){
if(C_truep(t1)){
t10=(C_word)C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm: 541  loop */
t11=((C_word*)((C_word*)t0)[11])[1];
f_3353(t11,((C_word*)t0)[10],t10);}
else{
t10=(C_word)C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm: 541  loop */
t11=((C_word*)((C_word*)t0)[11])[1];
f_3353(t11,((C_word*)t0)[10],t10);}}
else{
t10=(C_word)C_eqp(((C_word*)t0)[9],lf[64]);
if(C_truep(t10)){
if(C_truep(t1)){
t11=(C_word)C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm: 541  loop */
t12=((C_word*)((C_word*)t0)[11])[1];
f_3353(t12,((C_word*)t0)[10],t11);}
else{
t11=(C_word)C_i_cdr(((C_word*)t0)[12]);
/* srfi-69.scm: 541  loop */
t12=((C_word*)((C_word*)t0)[11])[1];
f_3353(t12,((C_word*)t0)[10],t11);}}
else{
/* srfi-69.scm: 540  invarg-err */
t11=((C_word*)t0)[2];
f_3364(t11,t2,lf[65]);}}}}}}}}}

/* k3470 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_flonum_lessp(lf[60],((C_word*)t0)[5]);
t4=(C_truep(t3)?(C_word)C_flonum_lessp(((C_word*)t0)[5],lf[61]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3353(t7,((C_word*)t0)[2],t6);}
else{
/* srfi-69.scm: 533  error */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[40],lf[62],((C_word*)t0)[5]);}}

/* k3473 in k3470 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3353(t4,((C_word*)t0)[2],t3);}

/* k3445 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_flonum_lessp(lf[55],((C_word*)t0)[5]);
t4=(C_truep(t3)?(C_word)C_flonum_lessp(((C_word*)t0)[5],lf[56]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3353(t7,((C_word*)t0)[2],t6);}
else{
/* srfi-69.scm: 528  error */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[40],lf[57],((C_word*)t0)[5]);}}

/* k3448 in k3445 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3353(t4,((C_word*)t0)[2],t3);}

/* f_3437 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3437,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3417 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_fixnum_min(*((C_word*)lf[51]+1),((C_word*)t0)[6]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3353(t5,((C_word*)t0)[2],t4);}

/* k3404 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3353(t4,((C_word*)t0)[2],t3);}

/* k3394 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3353(t4,((C_word*)t0)[2],t3);}

/* k3381 in k3378 in k3372 in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-69.scm: 541  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3353(t3,((C_word*)t0)[2],t2);}

/* invarg-err in loop in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_fcall f_3364(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3364,NULL,3,t0,t1,t2);}
/* srfi-69.scm: 505  error */
t3=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[40],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3319 in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_flonum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]))){
/* srfi-69.scm: 545  error */
t3=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[40],lf[46],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t2;
f_3324(2,t3,C_SCHEME_UNDEFINED);}}

/* k3322 in k3319 in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* srfi-69.scm: 547  hash-table-canonical-length */
f_3173(t2,lf[28],((C_word*)((C_word*)t0)[9])[1]);}

/* k3326 in k3322 in k3319 in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3328,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,t1);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
/* srfi-69.scm: 557  *make-hash-table */
t3=lf[32];
f_3203(t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t3=f_3236(((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_mutate(((C_word *)((C_word*)t0)[8])+1,t3);
/* srfi-69.scm: 557  *make-hash-table */
t5=lf[32];
f_3203(t5,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* srfi-69.scm: 554  warning */
((C_proc4)C_retrieve_proc(*((C_word*)lf[43]+1)))(4,*((C_word*)lf[43]+1),t4,lf[40],lf[44]);}}}

/* k3342 in k3326 in k3322 in k3319 in k3316 in k3313 in k3310 in make-hash-table in k1500 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[21]+1));
/* srfi-69.scm: 557  *make-hash-table */
t3=lf[32];
f_3203(t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST);}

/* hash-for-test in make-hash-table in k1500 */
static C_word C_fcall f_3236(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_stack_check;
t1=(C_word)C_eqp(((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);
t2=(C_truep(t1)?t1:(C_word)C_eqp(*((C_word*)lf[34]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t2)){
t3=*((C_word*)lf[17]+1);
return(t3);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(*((C_word*)lf[35]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t4)){
return(*((C_word*)lf[19]+1));}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],((C_word*)((C_word*)t0)[7])[1]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(*((C_word*)lf[36]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t6)){
t7=*((C_word*)lf[21]+1);
return(t7);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1]);
t8=(C_truep(t7)?t7:(C_word)C_eqp(*((C_word*)lf[37]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t8)){
return(*((C_word*)lf[23]+1));}
else{
t9=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)((C_word*)t0)[7])[1]);
t10=(C_truep(t9)?t9:(C_word)C_eqp(*((C_word*)lf[38]+1),((C_word*)((C_word*)t0)[7])[1]));
if(C_truep(t10)){
t11=*((C_word*)lf[27]+1);
return(t11);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[2],((C_word*)((C_word*)t0)[7])[1]);
if(C_truep(t11)){
return((C_truep(t11)?*((C_word*)lf[4]+1):C_SCHEME_FALSE));}
else{
t12=(C_word)C_eqp(*((C_word*)lf[39]+1),((C_word*)((C_word*)t0)[7])[1]);
return((C_truep(t12)?*((C_word*)lf[4]+1):C_SCHEME_FALSE));}}}}}}}

/* *make-hash-table in k1500 */
static void C_fcall f_3203(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3203,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3207,a[2]=t7,a[3]=t6,a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_nullp(t8))){
/* srfi-69.scm: 429  make-vector */
t10=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t4,C_SCHEME_END_OF_LIST);}
else{
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
t11=t9;
f_3207(2,t11,(C_word)C_i_car(t8));}
else{
/* ##sys#error */
t11=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,lf[0],t8);}}}

/* k3205 in *make-hash-table in k1500 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3207,2,t0,t1);}
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,10,lf[33],t1,C_fix(0),((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* hash-table-canonical-length in k1500 */
static void C_fcall f_3173(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3173,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3179,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_3179(t4,t2));}

/* loop in hash-table-canonical-length in k1500 */
static C_word C_fcall f_3179(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=(C_word)C_slot(t1,C_fix(0));
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
if(C_truep(t4)){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}
else{
if(C_truep((C_word)C_i_nullp(t3))){
return(t2);}
else{
t6=t3;
t1=t6;
goto loop;}}}

/* string-ci-hash in k1500 */
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_3030r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3030r(t0,t1,t2,t3);}}

static void C_ccall f_3030r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a=C_alloc(17);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(C_word)C_i_check_string_2(t2,lf[26]);
t9=(C_word)C_i_check_exact_2(t5,lf[26]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3046,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t7))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3083,a[2]=t2,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3102,a[2]=t11,a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3111,a[2]=t12,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-start654667 */
t14=t13;
f_3111(t14,t10);}
else{
t14=(C_word)C_i_car(t7);
t15=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t15))){
/* def-end655665 */
t16=t12;
f_3102(t16,t10,t14);}
else{
t16=(C_word)C_i_car(t15);
t17=(C_word)C_i_cdr(t15);
if(C_truep((C_word)C_i_nullp(t17))){
/* body652660 */
t18=t11;
f_3083(t18,t10,t14,t16);}
else{
/* ##sys#error */
t18=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t10,lf[0],t17);}}}}
else{
t11=t10;
f_3046(2,t11,t2);}}

/* def-start654 in string-ci-hash in k1500 */
static void C_fcall f_3111(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3111,NULL,2,t0,t1);}
/* def-end655665 */
t2=((C_word*)t0)[2];
f_3102(t2,t1,C_fix(0));}

/* def-end655 in string-ci-hash in k1500 */
static void C_fcall f_3102(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3102,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(((C_word*)t0)[3]);
/* body652660 */
t4=((C_word*)t0)[2];
f_3083(t4,t1,t2,t3);}

/* body652 in string-ci-hash in k1500 */
static void C_fcall f_3083(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3083,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3087,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_block_size(((C_word*)t0)[2]);
/* srfi-69.scm: 377  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[25]+1)))(6,*((C_word*)lf[25]+1),t4,t2,C_fix(0),t5,lf[27]);}

/* k3085 in body652 in string-ci-hash in k1500 */
static void C_ccall f_3087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[4]);
/* srfi-69.scm: 378  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[25]+1)))(6,*((C_word*)lf[25]+1),t2,((C_word*)t0)[2],C_fix(0),t3,lf[27]);}

/* k3088 in k3085 in body652 in string-ci-hash in k1500 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 379  ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3044 in string-ci-hash in k1500 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_word)C_hash_string_ci(t1);
t3=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(C_word)C_fixnum_negate(t2);
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,((C_word*)t0)[2]);}
else{
t4=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t2);
/* srfi-69.scm: 137  fxmod */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}}

/* string-hash in k1500 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_2889r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2889r(t0,t1,t2,t3);}}

static void C_ccall f_2889r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a=C_alloc(17);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(536870912):(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(C_word)C_i_check_string_2(t2,lf[23]);
t9=(C_word)C_i_check_exact_2(t5,lf[23]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2905,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t7))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2942,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2961,a[2]=t11,a[3]=t2,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2970,a[2]=t12,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-start594607 */
t14=t13;
f_2970(t14,t10);}
else{
t14=(C_word)C_i_car(t7);
t15=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t15))){
/* def-end595605 */
t16=t12;
f_2961(t16,t10,t14);}
else{
t16=(C_word)C_i_car(t15);
t17=(C_word)C_i_cdr(t15);
if(C_truep((C_word)C_i_nullp(t17))){
/* body592600 */
t18=t11;
f_2942(t18,t10,t14,t16);}
else{
/* ##sys#error */
t18=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t10,lf[0],t17);}}}}
else{
t11=t10;
f_2905(2,t11,t2);}}

/* def-start594 in string-hash in k1500 */
static void C_fcall f_2970(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2970,NULL,2,t0,t1);}
/* def-end595605 */
t2=((C_word*)t0)[2];
f_2961(t2,t1,C_fix(0));}

/* def-end595 in string-hash in k1500 */
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2961,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(((C_word*)t0)[3]);
/* body592600 */
t4=((C_word*)t0)[2];
f_2942(t4,t1,t2,t3);}

/* body592 in string-hash in k1500 */
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2942,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2946,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_block_size(((C_word*)t0)[2]);
/* srfi-69.scm: 365  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[25]+1)))(6,*((C_word*)lf[25]+1),t4,t2,C_fix(0),t5,lf[23]);}

/* k2944 in body592 in string-hash in k1500 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[4]);
/* srfi-69.scm: 366  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[25]+1)))(6,*((C_word*)lf[25]+1),t2,((C_word*)t0)[2],C_fix(0),t3,lf[23]);}

/* k2947 in k2944 in body592 in string-hash in k1500 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-69.scm: 367  ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2903 in string-hash in k1500 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_word)C_hash_string(t1);
t3=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(C_word)C_fixnum_negate(t2);
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,((C_word*)t0)[2]);}
else{
t4=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t2);
/* srfi-69.scm: 137  fxmod */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}}

/* equal?-hash in k1500 */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2829r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2829r(t0,t1,t2,t3);}}

static void C_ccall f_2829r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2833,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2833(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2833(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2831 in equal?-hash in k1500 */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2833,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(t1,lf[22]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2867,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 353  *equal?-hash */
f_2363(t3,((C_word*)t0)[2]);}

/* k2865 in k2831 in equal?-hash in k1500 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t4=(C_word)C_fixnum_negate(t1);
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}
else{
t4=t1;
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}}

/* *equal?-hash in k1500 */
static void C_fcall f_2363(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2363,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2366,a[2]=t8,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2431,a[2]=t8,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2482,a[2]=t4,a[3]=t6,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
/* srfi-69.scm: 349  recursive-hash */
t12=((C_word*)t8)[1];
f_2482(t12,t1,t2,C_fix(0));}

/* recursive-hash in *equal?-hash in k1500 */
static void C_fcall f_2482(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2482,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(4)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(99));}
else{
if(C_truep((C_word)C_fixnump(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
if(C_truep((C_word)C_charp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fix((C_word)C_character_code(t2)));}
else{
switch(t2){
case C_SCHEME_TRUE:
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(256));
case C_SCHEME_FALSE:
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(257));
default:
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(258));}
else{
if(C_truep((C_word)C_eofp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(259));}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
t4=t1;
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=t4;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_hash_string(t6));}
else{
if(C_truep((C_word)C_i_numberp(t2))){
t4=t1;
t5=t2;
if(C_truep((C_word)C_i_flonump(t5))){
t6=(C_word)C_subbyte(t5,C_fix(7));
t7=(C_word)C_subbyte(t5,C_fix(6));
t8=(C_word)C_subbyte(t5,C_fix(5));
t9=(C_word)C_subbyte(t5,C_fix(4));
t10=(C_word)C_subbyte(t5,C_fix(3));
t11=(C_word)C_subbyte(t5,C_fix(2));
t12=(C_word)C_subbyte(t5,C_fix(1));
t13=(C_word)C_subbyte(t5,C_fix(0));
t14=(C_word)C_fixnum_shift_left(t13,C_fix(1));
t15=(C_word)C_fixnum_plus(t12,t14);
t16=(C_word)C_fixnum_shift_left(t15,C_fix(1));
t17=(C_word)C_fixnum_plus(t11,t16);
t18=(C_word)C_fixnum_shift_left(t17,C_fix(1));
t19=(C_word)C_fixnum_plus(t10,t18);
t20=(C_word)C_fixnum_shift_left(t19,C_fix(1));
t21=(C_word)C_fixnum_plus(t9,t20);
t22=(C_word)C_fixnum_shift_left(t21,C_fix(1));
t23=(C_word)C_fixnum_plus(t8,t22);
t24=(C_word)C_fixnum_shift_left(t23,C_fix(1));
t25=(C_word)C_fixnum_plus(t7,t24);
t26=(C_word)C_fixnum_shift_left(t25,C_fix(1));
t27=(C_word)C_fixnum_plus(t6,t26);
t28=t4;
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,(C_word)C_fixnum_times(C_fix(331804471),t27));}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2678,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm: 165  ##sys#number-hash-hook */
((C_proc3)C_retrieve_proc(*((C_word*)lf[2]+1)))(3,*((C_word*)lf[2]+1),t6,t5);}}
else{
t4=t2;
if(C_truep((C_word)C_blockp(t4))){
t5=t2;
if(C_truep((C_word)C_byteblockp(t5))){
t6=t1;
t7=t2;
t8=t6;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_hash_string(t7));}
else{
if(C_truep((C_word)C_i_listp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2712,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* g518519 */
t7=t6;
f_2712(t7,t1,t2);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2738,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* g521522 */
t7=t6;
f_2738(t7,t1,t2);}
else{
t6=t2;
if(C_truep((C_word)C_portp(t6))){
t7=t1;
t8=t2;
t9=(C_word)C_peek_fixnum(t8,C_fix(0));
t10=(C_word)C_fixnum_shift_left(t9,C_fix(4));
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2789,a[2]=t10,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* srfi-69.scm: 293  input-port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),t11,t8);}
else{
t7=t2;
if(C_truep((C_word)C_specialp(t7))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2805,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp);
/* g533534 */
t9=t8;
f_2805(t9,t1,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2817,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* g536537 */
t9=t8;
f_2817(t9,t1,t2);}}}}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(262));}}}}}}}}}}

/* g536 in recursive-hash in *equal?-hash in k1500 */
static void C_fcall f_2817(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2817,NULL,3,t0,t1,t2);}
/* srfi-69.scm: 301  vector-hash */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2366(t3,t1,t2,C_fix(0),((C_word*)t0)[2],C_fix(0));}

/* g533 in recursive-hash in *equal?-hash in k1500 */
static void C_fcall f_2805(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2805,NULL,3,t0,t1,t2);}
t3=(C_word)C_peek_fixnum(t2,C_fix(0));
/* srfi-69.scm: 298  vector-hash */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2366(t4,t1,t2,t3,((C_word*)t0)[2],C_fix(1));}

/* k2787 in recursive-hash in *equal?-hash in k1500 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(260)):(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(261))));}

/* g521 in recursive-hash in *equal?-hash in k1500 */
static void C_fcall f_2738(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2738,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* srfi-69.scm: 288  recursive-atomic-hash */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2431(t5,t3,t4,((C_word*)t0)[2]);}

/* k2756 in g521 in recursive-hash in *equal?-hash in k1500 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2758,2,t0,t1);}
t2=(C_word)C_fixnum_shift_left(t1,C_fix(16));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2750,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm: 289  recursive-atomic-hash */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2431(t5,t3,t4,((C_word*)t0)[2]);}

/* k2748 in k2756 in g521 in recursive-hash in *equal?-hash in k1500 */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[2],t1));}

/* g518 in recursive-hash in *equal?-hash in k1500 */
static void C_fcall f_2712(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2712,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2724,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* srfi-69.scm: 285  recursive-atomic-hash */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2431(t6,t4,t5,((C_word*)t0)[2]);}

/* k2722 in g518 in recursive-hash in *equal?-hash in k1500 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[2],t1));}

/* k2676 in recursive-hash in *equal?-hash in k1500 */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fix(t1));}

/* recursive-atomic-hash in *equal?-hash in k1500 */
static void C_fcall f_2431(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2431,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2465,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=(C_word)C_i_not((C_word)C_blockp(t5));
if(C_truep(t6)){
t7=t4;
f_2465(t7,(C_truep(t6)?t6:(C_word)C_i_numberp(t5)));}
else{
t7=(C_word)C_i_symbolp(t5);
t8=t4;
f_2465(t8,(C_truep(t7)?t7:(C_word)C_i_numberp(t5)));}}

/* k2463 in recursive-atomic-hash in *equal?-hash in k1500 */
static void C_fcall f_2465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2465,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_2468(t3,t1);}
else{
t3=((C_word*)t0)[2];
t4=t2;
f_2468(t4,(C_word)C_byteblockp(t3));}}

/* k2466 in k2463 in recursive-atomic-hash in *equal?-hash in k1500 */
static void C_fcall f_2468(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-69.scm: 323  recursive-hash */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2482(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(99));}}

/* vector-hash in *equal?-hash in k1500 */
static void C_fcall f_2366(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2366,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_block_size(t2);
t7=(C_word)C_fixnum_plus(t6,t3);
t8=(C_word)C_i_fixnum_min(C_fix(4),t6);
t9=(C_word)C_fixnum_difference(t8,t5);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t11,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_2383(t13,t1,t7,t5,t9);}

/* loop in vector-hash in *equal?-hash in k1500 */
static void C_fcall f_2383(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2383,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(C_word)C_fixnum_shift_left(t2,C_fix(4));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2417,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(((C_word*)t0)[4],t3);
t9=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-69.scm: 315  recursive-hash */
t10=((C_word*)((C_word*)t0)[2])[1];
f_2482(t10,t7,t8,t9);}}

/* k2415 in loop in vector-hash in *equal?-hash in k1500 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[7],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[6],t2);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-69.scm: 313  loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2383(t6,((C_word*)t0)[2],t3,t4,t5);}

/* eqv?-hash in k1500 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2304r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2304r(t0,t1,t2,t3);}}

static void C_ccall f_2304r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2308,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2308(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2308(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2306 in eqv?-hash in k1500 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2308,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(t1,lf[19]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2342,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnump(t4))){
t5=t3;
f_2342(2,t5,t4);}
else{
if(C_truep((C_word)C_charp(t4))){
t5=t3;
f_2342(2,t5,(C_word)C_fix((C_word)C_character_code(t4)));}
else{
switch(t4){
case C_SCHEME_TRUE:
t5=t3;
f_2342(2,t5,C_fix(256));
case C_SCHEME_FALSE:
t5=t3;
f_2342(2,t5,C_fix(257));
default:
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_2342(2,t5,C_fix(258));}
else{
if(C_truep((C_word)C_eofp(t4))){
t5=t3;
f_2342(2,t5,C_fix(259));}
else{
if(C_truep((C_word)C_i_symbolp(t4))){
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
f_2342(2,t6,(C_word)C_hash_string(t5));}
else{
if(C_truep((C_word)C_i_numberp(t4))){
if(C_truep((C_word)C_i_flonump(t4))){
t5=(C_word)C_subbyte(t4,C_fix(7));
t6=(C_word)C_subbyte(t4,C_fix(6));
t7=(C_word)C_subbyte(t4,C_fix(5));
t8=(C_word)C_subbyte(t4,C_fix(4));
t9=(C_word)C_subbyte(t4,C_fix(3));
t10=(C_word)C_subbyte(t4,C_fix(2));
t11=(C_word)C_subbyte(t4,C_fix(1));
t12=(C_word)C_subbyte(t4,C_fix(0));
t13=(C_word)C_fixnum_shift_left(t12,C_fix(1));
t14=(C_word)C_fixnum_plus(t11,t13);
t15=(C_word)C_fixnum_shift_left(t14,C_fix(1));
t16=(C_word)C_fixnum_plus(t10,t15);
t17=(C_word)C_fixnum_shift_left(t16,C_fix(1));
t18=(C_word)C_fixnum_plus(t9,t17);
t19=(C_word)C_fixnum_shift_left(t18,C_fix(1));
t20=(C_word)C_fixnum_plus(t8,t19);
t21=(C_word)C_fixnum_shift_left(t20,C_fix(1));
t22=(C_word)C_fixnum_plus(t7,t21);
t23=(C_word)C_fixnum_shift_left(t22,C_fix(1));
t24=(C_word)C_fixnum_plus(t6,t23);
t25=(C_word)C_fixnum_shift_left(t24,C_fix(1));
t26=(C_word)C_fixnum_plus(t5,t25);
t27=t3;
f_2342(2,t27,(C_word)C_fixnum_times(C_fix(331804471),t26));}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2280,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm: 165  ##sys#number-hash-hook */
((C_proc3)C_retrieve_proc(*((C_word*)lf[2]+1)))(3,*((C_word*)lf[2]+1),t5,t4);}}
else{
if(C_truep((C_word)C_blockp(t4))){
/* srfi-69.scm: 184  *equal?-hash */
f_2363(t3,t4);}
else{
t5=t3;
f_2342(2,t5,C_fix(262));}}}}}}}}}

/* k2278 in k2306 in eqv?-hash in k1500 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2342(2,t2,(C_word)C_fix(t1));}

/* k2340 in k2306 in eqv?-hash in k1500 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t4=(C_word)C_fixnum_negate(t1);
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}
else{
t4=t1;
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}}

/* eq?-hash in k1500 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2030r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2030r(t0,t1,t2,t3);}}

static void C_ccall f_2030r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2034,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2034(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2034(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2032 in eq?-hash in k1500 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2034,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2068,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnump(t4))){
t5=t3;
f_2068(2,t5,t4);}
else{
if(C_truep((C_word)C_charp(t4))){
t5=t3;
f_2068(2,t5,(C_word)C_fix((C_word)C_character_code(t4)));}
else{
switch(t4){
case C_SCHEME_TRUE:
t5=t3;
f_2068(2,t5,C_fix(256));
case C_SCHEME_FALSE:
t5=t3;
f_2068(2,t5,C_fix(257));
default:
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_2068(2,t5,C_fix(258));}
else{
if(C_truep((C_word)C_eofp(t4))){
t5=t3;
f_2068(2,t5,C_fix(259));}
else{
if(C_truep((C_word)C_i_symbolp(t4))){
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
f_2068(2,t6,(C_word)C_hash_string(t5));}
else{
if(C_truep((C_word)C_blockp(t4))){
/* srfi-69.scm: 184  *equal?-hash */
f_2363(t3,t4);}
else{
t5=t3;
f_2068(2,t5,C_fix(262));}}}}}}}}

/* k2066 in k2032 in eq?-hash in k1500 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t4=(C_word)C_fixnum_negate(t1);
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}
else{
t4=t1;
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}}

/* keyword-hash in k1500 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1876r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1876r(t0,t1,t2,t3);}}

static void C_ccall f_1876r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1880,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1880(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1880(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1878 in keyword-hash in k1500 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 220  ##sys#check-keyword */
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[3],lf[16]);}

/* k1881 in k1878 in keyword-hash in k1500 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[16]);
t3=((C_word*)t0)[3];
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_hash_string(t4);
t6=((C_word*)t0)[2];
t7=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(0)))){
t8=(C_word)C_fixnum_negate(t5);
t9=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t8);
/* srfi-69.scm: 137  fxmod */
t10=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t6,t9,t7);}
else{
t8=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t5);
/* srfi-69.scm: 137  fxmod */
t9=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t8,t7);}}

/* ##sys#check-keyword in k1500 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1850r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1850r(t0,t1,t2,t3);}}

static void C_ccall f_1850r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1857,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-69.scm: 207  keyword? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t4,t2);}

/* k1855 in ##sys#check-keyword in k1500 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_vemptyp(((C_word*)t0)[3]))){
/* srfi-69.scm: 208  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[13],C_SCHEME_FALSE,lf[14],((C_word*)t0)[2]);}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
/* srfi-69.scm: 208  ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],lf[13],t2,lf[14],((C_word*)t0)[2]);}}}

/* symbol-hash in k1500 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1777r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1777r(t0,t1,t2,t3);}}

static void C_ccall f_1777r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1781,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1781(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1781(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1779 in symbol-hash in k1500 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
t2=(C_word)C_i_check_symbol_2(((C_word*)t0)[3],lf[11]);
t3=(C_word)C_i_check_exact_2(t1,lf[11]);
t4=((C_word*)t0)[3];
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_hash_string(t5);
t7=((C_word*)t0)[2];
t8=t1;
if(C_truep((C_word)C_fixnum_lessp(t6,C_fix(0)))){
t9=(C_word)C_fixnum_negate(t6);
t10=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t9);
/* srfi-69.scm: 137  fxmod */
t11=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t7,t10,t8);}
else{
t9=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t6);
/* srfi-69.scm: 137  fxmod */
t10=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t9,t8);}}

/* object-uid-hash in k1500 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1713r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1713r(t0,t1,t2,t3);}}

static void C_ccall f_1713r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1717,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1717(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1717(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1715 in object-uid-hash in k1500 */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1717,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1756,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
/* srfi-69.scm: 184  *equal?-hash */
f_2363(t3,t4);}

/* k1754 in k1715 in object-uid-hash in k1500 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t4=(C_word)C_fixnum_negate(t1);
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}
else{
t4=t1;
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}}

/* number-hash in k1500 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1510r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1510r(t0,t1,t2,t3);}}

static void C_ccall f_1510r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1514,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1514(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1514(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1512 in number-hash in k1500 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_numberp(((C_word*)t0)[2]))){
t3=t2;
f_1517(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-69.scm: 173  ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[7],lf[4],lf[8],((C_word*)t0)[2]);}}

/* k1515 in k1512 in number-hash in k1500 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1517,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1686,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnump(t4))){
t5=t3;
f_1686(t5,t4);}
else{
if(C_truep((C_word)C_i_flonump(t4))){
t5=(C_word)C_subbyte(t4,C_fix(7));
t6=(C_word)C_subbyte(t4,C_fix(6));
t7=(C_word)C_subbyte(t4,C_fix(5));
t8=(C_word)C_subbyte(t4,C_fix(4));
t9=(C_word)C_subbyte(t4,C_fix(3));
t10=(C_word)C_subbyte(t4,C_fix(2));
t11=(C_word)C_subbyte(t4,C_fix(1));
t12=(C_word)C_subbyte(t4,C_fix(0));
t13=(C_word)C_fixnum_shift_left(t12,C_fix(1));
t14=(C_word)C_fixnum_plus(t11,t13);
t15=(C_word)C_fixnum_shift_left(t14,C_fix(1));
t16=(C_word)C_fixnum_plus(t10,t15);
t17=(C_word)C_fixnum_shift_left(t16,C_fix(1));
t18=(C_word)C_fixnum_plus(t9,t17);
t19=(C_word)C_fixnum_shift_left(t18,C_fix(1));
t20=(C_word)C_fixnum_plus(t8,t19);
t21=(C_word)C_fixnum_shift_left(t20,C_fix(1));
t22=(C_word)C_fixnum_plus(t7,t21);
t23=(C_word)C_fixnum_shift_left(t22,C_fix(1));
t24=(C_word)C_fixnum_plus(t6,t23);
t25=(C_word)C_fixnum_shift_left(t24,C_fix(1));
t26=(C_word)C_fixnum_plus(t5,t25);
t27=t3;
f_1686(t27,(C_word)C_fixnum_times(C_fix(331804471),t26));}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1680,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-69.scm: 165  ##sys#number-hash-hook */
((C_proc3)C_retrieve_proc(*((C_word*)lf[2]+1)))(3,*((C_word*)lf[2]+1),t5,t4);}}}

/* k1678 in k1515 in k1512 in number-hash in k1500 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1686(t2,(C_word)C_fix(t1));}

/* k1684 in k1515 in k1512 in number-hash in k1500 */
static void C_fcall f_1686(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t4=(C_word)C_fixnum_negate(t1);
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}
else{
t4=t1;
t5=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t4);
/* srfi-69.scm: 137  fxmod */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,t3);}}

/* ##sys#number-hash-hook in k1500 */
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1504,3,t0,t1,t2);}
/* srfi-69.scm: 161  *equal?-hash */
f_2363(t1,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[242] = {
{"toplevel:srfi_69_scm",(void*)C_srfi_69_toplevel},
{"f_1502:srfi_69_scm",(void*)f_1502},
{"f_5658:srfi_69_scm",(void*)f_5658},
{"f_5778:srfi_69_scm",(void*)f_5778},
{"f_5662:srfi_69_scm",(void*)f_5662},
{"f_5668:srfi_69_scm",(void*)f_5668},
{"f_5680:srfi_69_scm",(void*)f_5680},
{"f_5737:srfi_69_scm",(void*)f_5737},
{"f_5756:srfi_69_scm",(void*)f_5756},
{"f_5695:srfi_69_scm",(void*)f_5695},
{"f_4638:srfi_69_scm",(void*)f_4638},
{"f_5642:srfi_69_scm",(void*)f_5642},
{"f_5646:srfi_69_scm",(void*)f_5646},
{"f_5649:srfi_69_scm",(void*)f_5649},
{"f_5640:srfi_69_scm",(void*)f_5640},
{"f_5617:srfi_69_scm",(void*)f_5617},
{"f_5624:srfi_69_scm",(void*)f_5624},
{"f_5629:srfi_69_scm",(void*)f_5629},
{"f_5637:srfi_69_scm",(void*)f_5637},
{"f_5605:srfi_69_scm",(void*)f_5605},
{"f_5612:srfi_69_scm",(void*)f_5612},
{"f_5593:srfi_69_scm",(void*)f_5593},
{"f_5600:srfi_69_scm",(void*)f_5600},
{"f_5581:srfi_69_scm",(void*)f_5581},
{"f_5588:srfi_69_scm",(void*)f_5588},
{"f_5515:srfi_69_scm",(void*)f_5515},
{"f_5527:srfi_69_scm",(void*)f_5527},
{"f_5543:srfi_69_scm",(void*)f_5543},
{"f_5571:srfi_69_scm",(void*)f_5571},
{"f_5444:srfi_69_scm",(void*)f_5444},
{"f_5456:srfi_69_scm",(void*)f_5456},
{"f_5479:srfi_69_scm",(void*)f_5479},
{"f_5502:srfi_69_scm",(void*)f_5502},
{"f_5487:srfi_69_scm",(void*)f_5487},
{"f_5466:srfi_69_scm",(void*)f_5466},
{"f_5379:srfi_69_scm",(void*)f_5379},
{"f_5394:srfi_69_scm",(void*)f_5394},
{"f_5410:srfi_69_scm",(void*)f_5410},
{"f_5314:srfi_69_scm",(void*)f_5314},
{"f_5329:srfi_69_scm",(void*)f_5329},
{"f_5345:srfi_69_scm",(void*)f_5345},
{"f_5263:srfi_69_scm",(void*)f_5263},
{"f_5270:srfi_69_scm",(void*)f_5270},
{"f_5275:srfi_69_scm",(void*)f_5275},
{"f_5301:srfi_69_scm",(void*)f_5301},
{"f_5283:srfi_69_scm",(void*)f_5283},
{"f_5273:srfi_69_scm",(void*)f_5273},
{"f_5190:srfi_69_scm",(void*)f_5190},
{"f_5205:srfi_69_scm",(void*)f_5205},
{"f_5221:srfi_69_scm",(void*)f_5221},
{"f_5174:srfi_69_scm",(void*)f_5174},
{"f_5188:srfi_69_scm",(void*)f_5188},
{"f_5162:srfi_69_scm",(void*)f_5162},
{"f_5097:srfi_69_scm",(void*)f_5097},
{"f_5109:srfi_69_scm",(void*)f_5109},
{"f_5132:srfi_69_scm",(void*)f_5132},
{"f_5145:srfi_69_scm",(void*)f_5145},
{"f_5119:srfi_69_scm",(void*)f_5119},
{"f_5081:srfi_69_scm",(void*)f_5081},
{"f_5088:srfi_69_scm",(void*)f_5088},
{"f_4985:srfi_69_scm",(void*)f_4985},
{"f_4992:srfi_69_scm",(void*)f_4992},
{"f_5006:srfi_69_scm",(void*)f_5006},
{"f_5032:srfi_69_scm",(void*)f_5032},
{"f_5051:srfi_69_scm",(void*)f_5051},
{"f_5019:srfi_69_scm",(void*)f_5019},
{"f_4854:srfi_69_scm",(void*)f_4854},
{"f_4870:srfi_69_scm",(void*)f_4870},
{"f_4937:srfi_69_scm",(void*)f_4937},
{"f_4956:srfi_69_scm",(void*)f_4956},
{"f_4890:srfi_69_scm",(void*)f_4890},
{"f_4746:srfi_69_scm",(void*)f_4746},
{"f_4762:srfi_69_scm",(void*)f_4762},
{"f_4817:srfi_69_scm",(void*)f_4817},
{"f_4830:srfi_69_scm",(void*)f_4830},
{"f_4777:srfi_69_scm",(void*)f_4777},
{"f_4640:srfi_69_scm",(void*)f_4640},
{"f_4656:srfi_69_scm",(void*)f_4656},
{"f_4710:srfi_69_scm",(void*)f_4710},
{"f_4726:srfi_69_scm",(void*)f_4726},
{"f_4671:srfi_69_scm",(void*)f_4671},
{"f_4438:srfi_69_scm",(void*)f_4438},
{"f_4498:srfi_69_scm",(void*)f_4498},
{"f_4490:srfi_69_scm",(void*)f_4490},
{"f_4471:srfi_69_scm",(void*)f_4471},
{"f_4505:srfi_69_scm",(void*)f_4505},
{"f_4520:srfi_69_scm",(void*)f_4520},
{"f_4586:srfi_69_scm",(void*)f_4586},
{"f_4616:srfi_69_scm",(void*)f_4616},
{"f_4537:srfi_69_scm",(void*)f_4537},
{"f_4526:srfi_69_scm",(void*)f_4526},
{"f_4426:srfi_69_scm",(void*)f_4426},
{"f_4433:srfi_69_scm",(void*)f_4433},
{"f_4214:srfi_69_scm",(void*)f_4214},
{"f_4271:srfi_69_scm",(void*)f_4271},
{"f_4263:srfi_69_scm",(void*)f_4263},
{"f_4244:srfi_69_scm",(void*)f_4244},
{"f_4278:srfi_69_scm",(void*)f_4278},
{"f_4293:srfi_69_scm",(void*)f_4293},
{"f_4366:srfi_69_scm",(void*)f_4366},
{"f_4399:srfi_69_scm",(void*)f_4399},
{"f_4402:srfi_69_scm",(void*)f_4402},
{"f_4376:srfi_69_scm",(void*)f_4376},
{"f_4307:srfi_69_scm",(void*)f_4307},
{"f_4343:srfi_69_scm",(void*)f_4343},
{"f_4317:srfi_69_scm",(void*)f_4317},
{"f_3919:srfi_69_scm",(void*)f_3919},
{"f_4166:srfi_69_scm",(void*)f_4166},
{"f_4149:srfi_69_scm",(void*)f_4149},
{"f_4161:srfi_69_scm",(void*)f_4161},
{"f_3921:srfi_69_scm",(void*)f_3921},
{"f_3928:srfi_69_scm",(void*)f_3928},
{"f_3931:srfi_69_scm",(void*)f_3931},
{"f_3987:srfi_69_scm",(void*)f_3987},
{"f_3979:srfi_69_scm",(void*)f_3979},
{"f_3960:srfi_69_scm",(void*)f_3960},
{"f_3994:srfi_69_scm",(void*)f_3994},
{"f_4009:srfi_69_scm",(void*)f_4009},
{"f_4086:srfi_69_scm",(void*)f_4086},
{"f_4123:srfi_69_scm",(void*)f_4123},
{"f_4126:srfi_69_scm",(void*)f_4126},
{"f_4114:srfi_69_scm",(void*)f_4114},
{"f_4096:srfi_69_scm",(void*)f_4096},
{"f_4023:srfi_69_scm",(void*)f_4023},
{"f_4063:srfi_69_scm",(void*)f_4063},
{"f_4051:srfi_69_scm",(void*)f_4051},
{"f_4033:srfi_69_scm",(void*)f_4033},
{"f_3910:srfi_69_scm",(void*)f_3910},
{"f_3798:srfi_69_scm",(void*)f_3798},
{"f_3808:srfi_69_scm",(void*)f_3808},
{"f_3813:srfi_69_scm",(void*)f_3813},
{"f_3875:srfi_69_scm",(void*)f_3875},
{"f_3896:srfi_69_scm",(void*)f_3896},
{"f_3869:srfi_69_scm",(void*)f_3869},
{"f_3772:srfi_69_scm",(void*)f_3772},
{"f_3779:srfi_69_scm",(void*)f_3779},
{"f_3782:srfi_69_scm",(void*)f_3782},
{"f_3705:srfi_69_scm",(void*)f_3705},
{"f_3728:srfi_69_scm",(void*)f_3728},
{"f_3744:srfi_69_scm",(void*)f_3744},
{"f_3715:srfi_69_scm",(void*)f_3715},
{"f_3785:srfi_69_scm",(void*)f_3785},
{"f_3678:srfi_69_scm",(void*)f_3678},
{"f_3666:srfi_69_scm",(void*)f_3666},
{"f_3657:srfi_69_scm",(void*)f_3657},
{"f_3648:srfi_69_scm",(void*)f_3648},
{"f_3639:srfi_69_scm",(void*)f_3639},
{"f_3630:srfi_69_scm",(void*)f_3630},
{"f_3621:srfi_69_scm",(void*)f_3621},
{"f_3612:srfi_69_scm",(void*)f_3612},
{"f_3603:srfi_69_scm",(void*)f_3603},
{"f_3597:srfi_69_scm",(void*)f_3597},
{"f_3234:srfi_69_scm",(void*)f_3234},
{"f_3587:srfi_69_scm",(void*)f_3587},
{"f_3590:srfi_69_scm",(void*)f_3590},
{"f_3312:srfi_69_scm",(void*)f_3312},
{"f_3567:srfi_69_scm",(void*)f_3567},
{"f_3570:srfi_69_scm",(void*)f_3570},
{"f_3315:srfi_69_scm",(void*)f_3315},
{"f_3535:srfi_69_scm",(void*)f_3535},
{"f_3541:srfi_69_scm",(void*)f_3541},
{"f_3318:srfi_69_scm",(void*)f_3318},
{"f_3353:srfi_69_scm",(void*)f_3353},
{"f_3374:srfi_69_scm",(void*)f_3374},
{"f_3380:srfi_69_scm",(void*)f_3380},
{"f_3472:srfi_69_scm",(void*)f_3472},
{"f_3475:srfi_69_scm",(void*)f_3475},
{"f_3447:srfi_69_scm",(void*)f_3447},
{"f_3450:srfi_69_scm",(void*)f_3450},
{"f_3437:srfi_69_scm",(void*)f_3437},
{"f_3419:srfi_69_scm",(void*)f_3419},
{"f_3406:srfi_69_scm",(void*)f_3406},
{"f_3396:srfi_69_scm",(void*)f_3396},
{"f_3383:srfi_69_scm",(void*)f_3383},
{"f_3364:srfi_69_scm",(void*)f_3364},
{"f_3321:srfi_69_scm",(void*)f_3321},
{"f_3324:srfi_69_scm",(void*)f_3324},
{"f_3328:srfi_69_scm",(void*)f_3328},
{"f_3344:srfi_69_scm",(void*)f_3344},
{"f_3236:srfi_69_scm",(void*)f_3236},
{"f_3203:srfi_69_scm",(void*)f_3203},
{"f_3207:srfi_69_scm",(void*)f_3207},
{"f_3173:srfi_69_scm",(void*)f_3173},
{"f_3179:srfi_69_scm",(void*)f_3179},
{"f_3030:srfi_69_scm",(void*)f_3030},
{"f_3111:srfi_69_scm",(void*)f_3111},
{"f_3102:srfi_69_scm",(void*)f_3102},
{"f_3083:srfi_69_scm",(void*)f_3083},
{"f_3087:srfi_69_scm",(void*)f_3087},
{"f_3090:srfi_69_scm",(void*)f_3090},
{"f_3046:srfi_69_scm",(void*)f_3046},
{"f_2889:srfi_69_scm",(void*)f_2889},
{"f_2970:srfi_69_scm",(void*)f_2970},
{"f_2961:srfi_69_scm",(void*)f_2961},
{"f_2942:srfi_69_scm",(void*)f_2942},
{"f_2946:srfi_69_scm",(void*)f_2946},
{"f_2949:srfi_69_scm",(void*)f_2949},
{"f_2905:srfi_69_scm",(void*)f_2905},
{"f_2829:srfi_69_scm",(void*)f_2829},
{"f_2833:srfi_69_scm",(void*)f_2833},
{"f_2867:srfi_69_scm",(void*)f_2867},
{"f_2363:srfi_69_scm",(void*)f_2363},
{"f_2482:srfi_69_scm",(void*)f_2482},
{"f_2817:srfi_69_scm",(void*)f_2817},
{"f_2805:srfi_69_scm",(void*)f_2805},
{"f_2789:srfi_69_scm",(void*)f_2789},
{"f_2738:srfi_69_scm",(void*)f_2738},
{"f_2758:srfi_69_scm",(void*)f_2758},
{"f_2750:srfi_69_scm",(void*)f_2750},
{"f_2712:srfi_69_scm",(void*)f_2712},
{"f_2724:srfi_69_scm",(void*)f_2724},
{"f_2678:srfi_69_scm",(void*)f_2678},
{"f_2431:srfi_69_scm",(void*)f_2431},
{"f_2465:srfi_69_scm",(void*)f_2465},
{"f_2468:srfi_69_scm",(void*)f_2468},
{"f_2366:srfi_69_scm",(void*)f_2366},
{"f_2383:srfi_69_scm",(void*)f_2383},
{"f_2417:srfi_69_scm",(void*)f_2417},
{"f_2304:srfi_69_scm",(void*)f_2304},
{"f_2308:srfi_69_scm",(void*)f_2308},
{"f_2280:srfi_69_scm",(void*)f_2280},
{"f_2342:srfi_69_scm",(void*)f_2342},
{"f_2030:srfi_69_scm",(void*)f_2030},
{"f_2034:srfi_69_scm",(void*)f_2034},
{"f_2068:srfi_69_scm",(void*)f_2068},
{"f_1876:srfi_69_scm",(void*)f_1876},
{"f_1880:srfi_69_scm",(void*)f_1880},
{"f_1883:srfi_69_scm",(void*)f_1883},
{"f_1850:srfi_69_scm",(void*)f_1850},
{"f_1857:srfi_69_scm",(void*)f_1857},
{"f_1777:srfi_69_scm",(void*)f_1777},
{"f_1781:srfi_69_scm",(void*)f_1781},
{"f_1713:srfi_69_scm",(void*)f_1713},
{"f_1717:srfi_69_scm",(void*)f_1717},
{"f_1756:srfi_69_scm",(void*)f_1756},
{"f_1510:srfi_69_scm",(void*)f_1510},
{"f_1514:srfi_69_scm",(void*)f_1514},
{"f_1517:srfi_69_scm",(void*)f_1517},
{"f_1680:srfi_69_scm",(void*)f_1680},
{"f_1686:srfi_69_scm",(void*)f_1686},
{"f_1504:srfi_69_scm",(void*)f_1504},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
