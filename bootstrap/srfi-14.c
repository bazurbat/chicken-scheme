/* Generated from srfi-14.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:26
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: srfi-14.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file srfi-14.c
   unit: srfi_14
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,19),40,37,108,97,116,105,110,49,45,62,99,104,97,114,32,110,49,48,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,19),40,109,97,107,101,45,99,104,97,114,45,115,101,116,32,115,49,52,41,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,17),40,99,104,97,114,45,115,101,116,58,115,32,99,115,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,15),40,99,104,97,114,45,115,101,116,63,32,120,49,56,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,37,100,101,102,97,117,108,116,45,98,97,115,101,32,109,97,121,98,101,45,98,97,115,101,50,50,32,112,114,111,99,50,51,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,9),40,108,112,32,99,115,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,31),40,37,99,104,97,114,45,115,101,116,58,115,47,99,104,101,99,107,32,99,115,50,55,32,112,114,111,99,50,56,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,45,99,111,112,121,32,99,115,52,52,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,11),40,108,112,32,114,101,115,116,53,54,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,20),40,99,104,97,114,45,115,101,116,61,32,46,32,114,101,115,116,52,53,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,9),40,108,112,50,32,105,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,108,112,32,115,49,55,52,32,114,101,115,116,55,53,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,60,61,32,46,32,114,101,115,116,54,53,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,49,49,51,32,97,110,115,49,49,52,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,36),40,99,104,97,114,45,115,101,116,45,104,97,115,104,32,99,115,57,56,32,46,32,109,97,121,98,101,45,98,111,117,110,100,57,57,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,99,111,110,116,97,105,110,115,63,32,99,115,49,50,51,32,99,104,97,114,49,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,105,122,101,49,51,57,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,45,115,105,122,101,32,99,115,49,51,53,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,108,112,32,105,49,53,48,32,99,111,117,110,116,49,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,99,111,117,110,116,32,112,114,101,100,49,52,54,32,99,115,101,116,49,52,55,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,103,49,55,56,32,99,49,56,48,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,55,49,32,103,49,55,53,49,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,45),40,37,115,101,116,45,99,104,97,114,45,115,101,116,32,115,101,116,49,54,52,32,112,114,111,99,49,54,53,32,99,115,49,54,54,32,99,104,97,114,115,49,54,55,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,103,49,57,57,32,99,50,48,49,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,57,50,32,103,49,57,54,49,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,46),40,37,115,101,116,45,99,104,97,114,45,115,101,116,33,32,115,101,116,49,56,53,32,112,114,111,99,49,56,54,32,99,115,49,56,55,32,99,104,97,114,115,49,56,56,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,17),40,97,49,54,56,57,32,115,50,48,56,32,105,50,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,32,99,115,50,48,54,32,46,32,99,104,97,114,115,50,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,17),40,97,49,55,48,49,32,115,50,49,51,32,105,50,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,97,100,106,111,105,110,33,32,99,115,50,49,49,32,46,32,99,104,97,114,115,50,49,50,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,17),40,97,49,55,49,51,32,115,50,49,56,32,105,50,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,32,99,115,50,49,54,32,46,32,99,104,97,114,115,50,49,55,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,17),40,97,49,55,50,53,32,115,50,50,51,32,105,50,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,100,101,108,101,116,101,33,32,99,115,50,50,49,32,46,32,99,104,97,114,115,50,50,50,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,32,99,115,101,116,50,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,28),40,101,110,100,45,111,102,45,99,104,97,114,45,115,101,116,63,32,99,117,114,115,111,114,50,50,56,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,32),40,99,104,97,114,45,115,101,116,45,114,101,102,32,99,115,101,116,50,51,48,32,99,117,114,115,111,114,50,51,49,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,40),40,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,51,51,32,99,117,114,115,111,114,50,51,52,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,49),40,37,99,104,97,114,45,115,101,116,45,99,117,114,115,111,114,45,110,101,120,116,32,99,115,101,116,50,51,55,32,99,117,114,115,111,114,50,51,56,32,112,114,111,99,50,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,50,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,33),40,99,104,97,114,45,115,101,116,45,102,111,114,45,101,97,99,104,32,112,114,111,99,50,53,57,32,99,115,50,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,50,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,109,97,112,32,112,114,111,99,50,56,49,32,99,115,50,56,50,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,51,49,52,32,97,110,115,51,49,53,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,102,111,108,100,32,107,111,110,115,51,48,57,32,107,110,105,108,51,49,48,32,99,115,51,49,49,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,101,118,101,114,121,32,112,114,101,100,51,50,50,32,99,115,51,50,51,41,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,51,52,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,45,115,101,116,45,97,110,121,32,112,114,101,100,51,52,53,32,99,115,51,52,54,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,12),40,108,112,32,115,101,101,100,51,55,54,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,51,55,48,32,102,51,55,49,32,103,51,55,50,32,115,51,55,51,32,115,101,101,100,51,55,52,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,32,112,51,57,48,32,102,51,57,49,32,103,51,57,50,32,115,101,101,100,51,57,51,32,46,32,109,97,121,98,101,45,98,97,115,101,51,57,52,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,117,110,102,111,108,100,33,32,112,51,57,56,32,102,51,57,57,32,103,52,48,48,32,115,101,101,100,52,48,49,32,98,97,115,101,45,99,115,101,116,52,48,50,41,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,6),40,103,52,49,54,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,52,48,57,32,103,52,49,51,52,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,37,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,48,53,32,115,52,48,54,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,21),40,99,104,97,114,45,115,101,116,32,46,32,99,104,97,114,115,52,50,54,41,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,41),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,32,99,104,97,114,115,52,51,48,32,46,32,109,97,121,98,101,45,98,97,115,101,52,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,37),40,108,105,115,116,45,62,99,104,97,114,45,115,101,116,33,32,99,104,97,114,115,52,51,53,32,98,97,115,101,45,99,115,52,51,54,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,16),40,108,112,32,105,52,52,50,32,97,110,115,52,52,51,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,22),40,99,104,97,114,45,115,101,116,45,62,108,105,115,116,32,99,115,52,51,57,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,53,51,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,41),40,37,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,53,48,32,98,115,52,53,49,32,112,114,111,99,52,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,32,115,116,114,52,54,54,32,46,32,109,97,121,98,101,45,98,97,115,101,52,54,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,37),40,115,116,114,105,110,103,45,62,99,104,97,114,45,115,101,116,33,32,115,116,114,52,55,49,32,98,97,115,101,45,99,115,52,55,50,41,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,9),40,108,112,32,106,52,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,24),40,99,104,97,114,45,115,101,116,45,62,115,116,114,105,110,103,32,99,115,52,55,53,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,4),40,108,112,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,65),40,37,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,52,57,48,32,117,112,112,101,114,52,57,49,32,101,114,114,111,114,63,52,57,50,32,98,115,52,57,51,32,112,114,111,99,52,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,49),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,32,108,111,119,101,114,53,49,55,32,117,112,112,101,114,53,49,56,32,46,32,114,101,115,116,53,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,61),40,117,99,115,45,114,97,110,103,101,45,62,99,104,97,114,45,115,101,116,33,32,108,111,119,101,114,53,51,51,32,117,112,112,101,114,53,51,52,32,101,114,114,111,114,63,53,51,53,32,98,97,115,101,45,99,115,53,51,54,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,39),40,37,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,53,51,57,32,100,115,53,52,48,32,98,115,53,52,49,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,56),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,32,112,114,101,100,105,99,97,116,101,53,54,56,32,100,111,109,97,105,110,53,54,57,32,46,32,109,97,121,98,101,45,98,97,115,101,53,55,48,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,52),40,99,104,97,114,45,115,101,116,45,102,105,108,116,101,114,33,32,112,114,101,100,105,99,97,116,101,53,55,52,32,100,111,109,97,105,110,53,55,53,32,98,97,115,101,45,99,115,53,55,54,41,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,17),40,45,62,99,104,97,114,45,115,101,116,32,120,53,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,53,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,24),40,37,115,116,114,105,110,103,45,105,116,101,114,32,112,53,56,55,32,115,53,56,56,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,9),40,108,112,32,105,54,49,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,14),40,103,54,49,51,32,99,115,101,116,54,49,53,41,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,54,48,54,32,103,54,49,48,54,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,47),40,37,99,104,97,114,45,115,101,116,45,97,108,103,101,98,114,97,32,115,54,48,48,32,99,115,101,116,115,54,48,49,32,111,112,54,48,50,32,112,114,111,99,54,48,51,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,97,50,55,57,56,32,105,54,51,55,32,118,54,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,32,99,115,54,51,52,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,17),40,97,50,56,51,49,32,105,54,53,51,32,118,54,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,30),40,99,104,97,114,45,115,101,116,45,99,111,109,112,108,101,109,101,110,116,33,32,99,115,101,116,54,53,49,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,22),40,97,50,56,54,53,32,115,54,54,57,32,105,54,55,48,32,118,54,55,49,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,37),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,33,32,99,115,101,116,49,54,54,55,32,46,32,99,115,101,116,115,54,54,56,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,22),40,97,50,57,48,56,32,115,54,56,48,32,105,54,56,49,32,118,54,56,50,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,45,115,101,116,45,117,110,105,111,110,32,46,32,99,115,101,116,115,54,55,56,41,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,22),40,97,50,57,53,48,32,115,54,57,49,32,105,54,57,50,32,118,54,57,51,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,44),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,101,116,49,54,56,57,32,46,32,99,115,101,116,115,54,57,48,41,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,22),40,97,50,57,56,57,32,115,55,48,50,32,105,55,48,51,32,118,55,48,52,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,34),40,99,104,97,114,45,115,101,116,45,105,110,116,101,114,115,101,99,116,105,111,110,32,46,32,99,115,101,116,115,55,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,22),40,97,51,48,50,55,32,115,55,49,51,32,105,55,49,52,32,118,55,49,53,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,42),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,33,32,99,115,101,116,49,55,49,49,32,46,32,99,115,101,116,115,55,49,50,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,22),40,97,51,48,54,54,32,115,55,50,53,32,105,55,50,54,32,118,55,50,55,41,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,39),40,99,104,97,114,45,115,101,116,45,100,105,102,102,101,114,101,110,99,101,32,99,115,49,55,50,50,32,46,32,99,115,101,116,115,55,50,51,41,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,22),40,97,51,49,48,52,32,115,55,51,54,32,105,55,51,55,32,118,55,51,56,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,35),40,99,104,97,114,45,115,101,116,45,120,111,114,33,32,99,115,101,116,49,55,51,52,32,46,32,99,115,101,116,115,55,51,53,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,22),40,97,51,49,54,56,32,115,55,53,50,32,105,55,53,51,32,118,55,53,52,41,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,25),40,99,104,97,114,45,115,101,116,45,120,111,114,32,46,32,99,115,101,116,115,55,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,17),40,97,51,50,52,49,32,105,55,56,50,32,118,55,56,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,12),40,103,55,55,57,32,99,115,55,56,49,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,55,55,50,32,103,55,55,54,55,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,62),40,37,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,100,105,102,102,55,54,54,32,105,110,116,55,54,55,32,99,115,101,116,115,55,54,56,32,112,114,111,99,55,54,57,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,17),40,97,51,51,51,52,32,105,56,49,53,32,118,56,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,54),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,33,32,99,115,49,56,49,48,32,99,115,50,56,49,49,32,46,32,99,115,101,116,115,56,49,50,41,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,46),40,99,104,97,114,45,115,101,116,45,100,105,102,102,43,105,110,116,101,114,115,101,99,116,105,111,110,32,99,115,49,56,51,54,32,46,32,99,115,101,116,115,56,51,55,41,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,57,50,50,32,103,57,51,50,57,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,56,57,57,32,103,57,48,57,57,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,56,55,54,32,103,56,56,54,56,57,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,56,53,49,32,103,56,54,49,56,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_srfi_14_toplevel)
C_externexport void C_ccall C_srfi_14_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3417)
static void C_ccall f_3417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3624)
static void C_fcall f_3624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3589)
static void C_fcall f_3589(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3554)
static void C_fcall f_3554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3515)
static void C_fcall f_3515(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3222)
static void C_fcall f_3222(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3228)
static void C_fcall f_3228(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_fcall f_3236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2715)
static void C_fcall f_2715(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2721)
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_fcall f_2729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_fcall f_2738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_fcall f_2674(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2684)
static void C_fcall f_2684(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2546)
static void C_fcall f_2546(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2552)
static void C_fcall f_2552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2444)
static void C_fcall f_2444(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2492)
static void C_fcall f_2492(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static C_word C_fcall f_2463(C_word t0,C_word t1);
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static C_word C_fcall f_2395(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_fcall f_2312(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2325)
static C_word C_fcall f_2325(C_word t0,C_word t1);
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_fcall f_2269(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_fcall f_2183(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2189)
static void C_fcall f_2189(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2197)
static C_word C_fcall f_2197(C_word t0,C_word t1);
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_fcall f_2119(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2125)
static void C_fcall f_2125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2060)
static void C_ccall f_2060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2065)
static void C_fcall f_2065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_fcall f_2011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_fcall f_1959(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_fcall f_1886(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1820)
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_fcall f_1759(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static C_word C_fcall f_1768(C_word t0,C_word t1);
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1643)
static void C_fcall f_1643(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_fcall f_1652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1660)
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_fcall f_1595(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_fcall f_1607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1615)
static void C_fcall f_1615(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_fcall f_1537(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static C_word C_fcall f_1495(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_fcall f_1341(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1355)
static void C_fcall f_1355(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1405)
static C_word C_fcall f_1405(C_word t0,C_word t1);
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1248)
static void C_fcall f_1248(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_fcall f_1275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1187)
static void C_ccall f_1187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1192)
static void C_fcall f_1192(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1157)
static void C_ccall f_1157(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1169)
static void C_ccall f_1169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1165)
static void C_ccall f_1165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_fcall f_1124(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1130)
static void C_fcall f_1130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1077)
static void C_fcall f_1077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1102)
static void C_ccall f_1102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1061)
static void C_ccall f_1061(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1055)
static void C_ccall f_1055(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_3624)
static void C_fcall trf_3624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3624(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3624(t0,t1,t2);}

C_noret_decl(trf_3589)
static void C_fcall trf_3589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3589(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3589(t0,t1,t2);}

C_noret_decl(trf_3554)
static void C_fcall trf_3554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3554(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3554(t0,t1,t2);}

C_noret_decl(trf_3515)
static void C_fcall trf_3515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3515(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3515(t0,t1,t2);}

C_noret_decl(trf_3222)
static void C_fcall trf_3222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3222(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3222(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3228)
static void C_fcall trf_3228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3228(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3228(t0,t1,t2);}

C_noret_decl(trf_3236)
static void C_fcall trf_3236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3236(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3236(t0,t1,t2);}

C_noret_decl(trf_2715)
static void C_fcall trf_2715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2715(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2715(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2721)
static void C_fcall trf_2721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2721(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2721(t0,t1,t2);}

C_noret_decl(trf_2729)
static void C_fcall trf_2729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2729(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2729(t0,t1,t2);}

C_noret_decl(trf_2738)
static void C_fcall trf_2738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2738(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2738(t0,t1,t2);}

C_noret_decl(trf_2674)
static void C_fcall trf_2674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2674(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2674(t0,t1,t2);}

C_noret_decl(trf_2684)
static void C_fcall trf_2684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2684(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2684(t0,t1,t2);}

C_noret_decl(trf_2546)
static void C_fcall trf_2546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2546(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2546(t0,t1,t2,t3);}

C_noret_decl(trf_2552)
static void C_fcall trf_2552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2552(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2552(t0,t1,t2);}

C_noret_decl(trf_2444)
static void C_fcall trf_2444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2444(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2444(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2492)
static void C_fcall trf_2492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2492(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2492(t0,t1);}

C_noret_decl(trf_2312)
static void C_fcall trf_2312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2312(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2312(t0,t1,t2,t3);}

C_noret_decl(trf_2269)
static void C_fcall trf_2269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2269(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2269(t0,t1,t2,t3);}

C_noret_decl(trf_2183)
static void C_fcall trf_2183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2183(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2183(t0,t1,t2);}

C_noret_decl(trf_2189)
static void C_fcall trf_2189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2189(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2189(t0,t1,t2);}

C_noret_decl(trf_2119)
static void C_fcall trf_2119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2119(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2119(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2125)
static void C_fcall trf_2125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2125(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2125(t0,t1,t2);}

C_noret_decl(trf_2065)
static void C_fcall trf_2065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2065(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2065(t0,t1,t2);}

C_noret_decl(trf_2011)
static void C_fcall trf_2011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2011(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2011(t0,t1,t2);}

C_noret_decl(trf_1959)
static void C_fcall trf_1959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1959(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1959(t0,t1,t2,t3);}

C_noret_decl(trf_1886)
static void C_fcall trf_1886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1886(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1886(t0,t1,t2);}

C_noret_decl(trf_1820)
static void C_fcall trf_1820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1820(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1820(t0,t1,t2);}

C_noret_decl(trf_1759)
static void C_fcall trf_1759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1759(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1759(t0,t1,t2,t3);}

C_noret_decl(trf_1643)
static void C_fcall trf_1643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1643(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1643(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1652)
static void C_fcall trf_1652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1652(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1652(t0,t1,t2);}

C_noret_decl(trf_1660)
static void C_fcall trf_1660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1660(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1660(t0,t1,t2);}

C_noret_decl(trf_1595)
static void C_fcall trf_1595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1595(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1595(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1607)
static void C_fcall trf_1607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1607(t0,t1,t2);}

C_noret_decl(trf_1615)
static void C_fcall trf_1615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1615(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1615(t0,t1,t2);}

C_noret_decl(trf_1537)
static void C_fcall trf_1537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1537(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1537(t0,t1,t2,t3);}

C_noret_decl(trf_1341)
static void C_fcall trf_1341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1341(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1341(t0,t1);}

C_noret_decl(trf_1355)
static void C_fcall trf_1355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1355(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1355(t0,t1,t2,t3);}

C_noret_decl(trf_1248)
static void C_fcall trf_1248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1248(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1248(t0,t1,t2,t3);}

C_noret_decl(trf_1275)
static void C_fcall trf_1275(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1275(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1275(t0,t1,t2);}

C_noret_decl(trf_1192)
static void C_fcall trf_1192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1192(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1192(t0,t1,t2);}

C_noret_decl(trf_1124)
static void C_fcall trf_1124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1124(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1124(t0,t1,t2);}

C_noret_decl(trf_1130)
static void C_fcall trf_1130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1130(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1130(t0,t1,t2);}

C_noret_decl(trf_1077)
static void C_fcall trf_1077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1077(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1077(t0,t1,t2);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

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

C_noret_decl(tr6r)
static void C_fcall tr6r(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6r(C_proc6 k){
int n;
C_word *a,t6;
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
n=C_rest_count(0);
a=C_alloc(n*3);
t6=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_14_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_14_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_14_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(842)){
C_save(t1);
C_rereclaim2(842*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[1]=C_h_intern(&lf[1],13,"make-char-set");
lf[2]=C_h_intern(&lf[2],8,"char-set");
lf[3]=C_h_intern(&lf[3],10,"char-set:s");
lf[4]=C_h_intern(&lf[4],9,"char-set\077");
lf[6]=C_h_intern(&lf[6],9,"substring");
lf[7]=C_h_intern(&lf[7],9,"\003syserror");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000 BASE-CS parameter not a char-set");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\0003Expected final base char set -- too many parameters");
lf[10]=C_h_intern(&lf[10],11,"make-string");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\016Not a char-set");
lf[13]=C_h_intern(&lf[13],13,"char-set-copy");
lf[14]=C_h_intern(&lf[14],9,"char-set=");
lf[15]=C_h_intern(&lf[15],10,"char-set<=");
lf[16]=C_h_intern(&lf[16],13,"char-set-hash");
lf[17]=C_h_intern(&lf[17],6,"modulo");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[19]=C_h_intern(&lf[19],18,"char-set-contains\077");
lf[20]=C_h_intern(&lf[20],13,"char-set-size");
lf[21]=C_h_intern(&lf[21],14,"char-set-count");
lf[24]=C_h_intern(&lf[24],15,"char-set-adjoin");
lf[25]=C_h_intern(&lf[25],16,"char-set-adjoin!");
lf[26]=C_h_intern(&lf[26],15,"char-set-delete");
lf[27]=C_h_intern(&lf[27],16,"char-set-delete!");
lf[28]=C_h_intern(&lf[28],15,"char-set-cursor");
lf[30]=C_h_intern(&lf[30],16,"end-of-char-set\077");
lf[31]=C_h_intern(&lf[31],12,"char-set-ref");
lf[32]=C_h_intern(&lf[32],20,"char-set-cursor-next");
lf[33]=C_h_intern(&lf[33],17,"char-set-for-each");
lf[34]=C_h_intern(&lf[34],12,"char-set-map");
lf[35]=C_h_intern(&lf[35],13,"char-set-fold");
lf[36]=C_h_intern(&lf[36],14,"char-set-every");
lf[37]=C_h_intern(&lf[37],12,"char-set-any");
lf[39]=C_h_intern(&lf[39],15,"char-set-unfold");
lf[40]=C_h_intern(&lf[40],16,"char-set-unfold!");
lf[42]=C_h_intern(&lf[42],14,"list->char-set");
lf[43]=C_h_intern(&lf[43],15,"list->char-set!");
lf[44]=C_h_intern(&lf[44],14,"char-set->list");
lf[46]=C_h_intern(&lf[46],16,"string->char-set");
lf[47]=C_h_intern(&lf[47],17,"string->char-set!");
lf[48]=C_h_intern(&lf[48],16,"char-set->string");
lf[50]=C_h_intern(&lf[50],3,"min");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000`Requested UCS range contains unavailable characters -- this implementation "
"only supports Latin-1");
lf[52]=C_h_intern(&lf[52],19,"ucs-range->char-set");
lf[53]=C_h_intern(&lf[53],20,"ucs-range->char-set!");
lf[55]=C_h_intern(&lf[55],15,"char-set-filter");
lf[56]=C_h_intern(&lf[56],16,"char-set-filter!");
lf[57]=C_h_intern(&lf[57],10,"->char-set");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\036Not a charset, string or char.");
lf[61]=C_h_intern(&lf[61],19,"char-set-complement");
lf[62]=C_h_intern(&lf[62],20,"char-set-complement!");
lf[63]=C_h_intern(&lf[63],15,"char-set-union!");
lf[64]=C_h_intern(&lf[64],14,"char-set-union");
lf[65]=C_h_intern(&lf[65],14,"char-set:empty");
lf[66]=C_h_intern(&lf[66],22,"char-set-intersection!");
lf[67]=C_h_intern(&lf[67],21,"char-set-intersection");
lf[68]=C_h_intern(&lf[68],13,"char-set:full");
lf[69]=C_h_intern(&lf[69],20,"char-set-difference!");
lf[70]=C_h_intern(&lf[70],19,"char-set-difference");
lf[71]=C_h_intern(&lf[71],13,"char-set-xor!");
lf[72]=C_h_intern(&lf[72],12,"char-set-xor");
lf[74]=C_h_intern(&lf[74],27,"char-set-diff+intersection!");
lf[75]=C_h_intern(&lf[75],26,"char-set-diff+intersection");
lf[76]=C_h_intern(&lf[76],11,"string-copy");
lf[77]=C_h_intern(&lf[77],19,"char-set:lower-case");
lf[78]=C_h_intern(&lf[78],19,"char-set:upper-case");
lf[79]=C_h_intern(&lf[79],19,"char-set:title-case");
lf[80]=C_h_intern(&lf[80],15,"char-set:letter");
lf[81]=C_h_intern(&lf[81],14,"char-set:digit");
lf[82]=C_h_intern(&lf[82],18,"char-set:hex-digit");
lf[83]=C_h_intern(&lf[83],21,"char-set:letter+digit");
lf[84]=C_h_intern(&lf[84],20,"char-set:punctuation");
lf[85]=C_h_intern(&lf[85],15,"char-set:symbol");
lf[86]=C_h_intern(&lf[86],16,"char-set:graphic");
lf[87]=C_h_intern(&lf[87],19,"char-set:whitespace");
lf[88]=C_h_intern(&lf[88],17,"char-set:printing");
lf[89]=C_h_intern(&lf[89],14,"char-set:blank");
lf[90]=C_h_intern(&lf[90],20,"char-set:iso-control");
lf[91]=C_h_intern(&lf[91],14,"char-set:ascii");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001\000\000\000\240\376\377\016");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\011\376\003\000\000\002\376\377\001\000\000\000\012\376\003\000\000\002\376\377\001\000\000\000\013\376\003\000\000\002\376\377\001\000\000\000\014\376\003\000\000\002\376\377\001\000\000\000\015\376\003\000\000\002\376\377\001\000\000\000 \376\003\000\000\002\376\377\001"
"\000\000\000\240\376\377\016");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\242\376\003\000\000\002\376\377\001\000\000\000\243\376\003\000\000\002\376\377\001\000\000\000\244\376\003\000\000\002\376\377\001\000\000\000\245\376\003\000\000\002\376\377\001\000\000\000\246\376\003\000\000\002\376\377\001\000\000\000\247\376\003\000\000\002\376\377\001"
"\000\000\000\250\376\003\000\000\002\376\377\001\000\000\000\251\376\003\000\000\002\376\377\001\000\000\000\254\376\003\000\000\002\376\377\001\000\000\000\256\376\003\000\000\002\376\377\001\000\000\000\257\376\003\000\000\002\376\377\001\000\000\000\260\376\003\000\000\002\376\377\001\000\000\000\261\376\003\000\000"
"\002\376\377\001\000\000\000\264\376\003\000\000\002\376\377\001\000\000\000\266\376\003\000\000\002\376\377\001\000\000\000\270\376\003\000\000\002\376\377\001\000\000\000\327\376\003\000\000\002\376\377\001\000\000\000\367\376\377\016");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\011$+<=>^`|~");
lf[96]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\241\376\003\000\000\002\376\377\001\000\000\000\253\376\003\000\000\002\376\377\001\000\000\000\255\376\003\000\000\002\376\377\001\000\000\000\267\376\003\000\000\002\376\377\001\000\000\000\273\376\003\000\000\002\376\377\001\000\000\000\277\376\377\016");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\027!\042#%&\047()*,-./:;\077@[\134]_{}");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\0260123456789abcdefABCDEF");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\0120123456789");
lf[100]=C_h_intern(&lf[100],17,"register-feature!");
lf[101]=C_h_intern(&lf[101],7,"srfi-14");
C_register_lf2(lf,102,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 28   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),t2,lf[101]);}

/* k1033 */
static void C_ccall f_1035(C_word c,C_word t0,C_word t1){
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
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word ab[192],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1035,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! %latin1->char ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1037,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[1]+1 /* (set! make-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1049,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[3]+1 /* (set! char-set:s ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1055,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[4]+1 /* (set! char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1061,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[5] /* (set! %default-base ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[11] /* (set! %char-set:s/check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1124,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! char-set-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1157,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! char-set= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1171,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! char-set<= ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[16]+1 /* (set! char-set-hash ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1334,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[19]+1 /* (set! char-set-contains? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1447,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[20]+1 /* (set! char-set-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1486,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[21]+1 /* (set! char-set-count ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1528,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[22] /* (set! %set-char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1595,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[23] /* (set! %set-char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[24]+1 /* (set! char-set-adjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1684,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[25]+1 /* (set! char-set-adjoin! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[26]+1 /* (set! char-set-delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[27]+1 /* (set! char-set-delete! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1720,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[28]+1 /* (set! char-set-cursor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1732,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[30]+1 /* (set! end-of-char-set? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1738,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[31]+1 /* (set! char-set-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1744,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[32]+1 /* (set! char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1750,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[29] /* (set! %char-set-cursor-next ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1759,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[33]+1 /* (set! char-set-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1811,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[34]+1 /* (set! char-set-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[35]+1 /* (set! char-set-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[36]+1 /* (set! char-set-every ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2002,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[37]+1 /* (set! char-set-any ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2056,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate(&lf[38] /* (set! %char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2119,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[39]+1 /* (set! char-set-unfold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2161,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[40]+1 /* (set! char-set-unfold! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2173,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate(&lf[41] /* (set! %list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2183,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[2]+1 /* (set! char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2226,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[42]+1 /* (set! list->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2238,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[43]+1 /* (set! list->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2250,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[44]+1 /* (set! char-set->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2260,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate(&lf[45] /* (set! %string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2312,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[46]+1 /* (set! string->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2361,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[47]+1 /* (set! string->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2373,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[48]+1 /* (set! char-set->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2383,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate(&lf[49] /* (set! %ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2444,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[52]+1 /* (set! ucs-range->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[53]+1 /* (set! ucs-range->char-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2536,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate(&lf[54] /* (set! %char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2546,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[55]+1 /* (set! char-set-filter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2614,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[56]+1 /* (set! char-set-filter! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[57]+1 /* (set! ->char-set ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate(&lf[59] /* (set! %string-iter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2674,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate(&lf[60] /* (set! %char-set-algebra ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[61]+1 /* (set! char-set-complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2784,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[62]+1 /* (set! char-set-complement! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[63]+1 /* (set! char-set-union! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[64]+1 /* (set! char-set-union ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2887,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[66]+1 /* (set! char-set-intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2941,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[67]+1 /* (set! char-set-intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2968,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[69]+1 /* (set! char-set-difference! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[70]+1 /* (set! char-set-difference ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[71]+1 /* (set! char-set-xor! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[72]+1 /* (set! char-set-xor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3147,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate(&lf[73] /* (set! %char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3222,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[74]+1 /* (set! char-set-diff+intersection! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3317,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[75]+1 /* (set! char-set-diff+intersection ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3388,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3417,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 643  char-set */
t66=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t66+1)))(2,t66,t65);}

/* k3415 in k1033 */
static void C_ccall f_3417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3417,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1 /* (set! char-set:empty ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 644  char-set-complement */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[65]+1));}

/* k3419 in k3415 in k1033 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3421,2,t0,t1);}
t2=C_mutate((C_word*)lf[68]+1 /* (set! char-set:full ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 647  ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(97),C_fix(123));}

/* k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3428,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 648  ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(223),C_fix(247),C_SCHEME_TRUE,t1);}

/* k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 649  ucs-range->char-set! */
t3=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(248),C_fix(256),C_SCHEME_TRUE,t1);}

/* k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 650  char-set-adjoin! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[25]+1)))(4,*((C_word*)lf[25]+1),t2,t1,C_make_character(181));}

/* k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3434,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1 /* (set! char-set:lower-case ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 653  ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(65),C_fix(91));}

/* k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3669,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 656  ucs-range->char-set! */
t4=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_fix(192),C_fix(215),C_SCHEME_TRUE,t1);}

/* k3667 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 655  ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(216),C_fix(223),C_SCHEME_TRUE,t1);}

/* k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3441,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1 /* (set! char-set:upper-case ...) */,t1);
t3=C_mutate((C_word*)lf[79]+1 /* (set! char-set:title-case ...) */,*((C_word*)lf[65]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 661  char-set-union */
t5=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[78]+1),*((C_word*)lf[77]+1));}

/* k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 662  char-set-adjoin! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[25]+1)))(5,*((C_word*)lf[25]+1),t2,t1,C_make_character(170),C_make_character(186));}

/* k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3449,2,t0,t1);}
t2=C_mutate((C_word*)lf[80]+1 /* (set! char-set:letter ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 666  string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[99]);}

/* k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3453,2,t0,t1);}
t2=C_mutate((C_word*)lf[81]+1 /* (set! char-set:digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 667  string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[98]);}

/* k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3457,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1 /* (set! char-set:hex-digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 670  char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[80]+1),*((C_word*)lf[81]+1));}

/* k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3461,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! char-set:letter+digit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 673  string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[97]);}

/* k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3465,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3468,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3624,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3624(t10,t6,lf[96]);}

/* loop851 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_fcall f_3624(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3624,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=lf[0];
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_make_character((C_word)C_unfix(t4));
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop851864 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop851864 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 680  list->char-set! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[43]+1)))(4,*((C_word*)lf[43]+1),t2,t1,((C_word*)t0)[2]);}

/* k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3471,2,t0,t1);}
t2=C_mutate((C_word*)lf[84]+1 /* (set! char-set:punctuation ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 683  string->char-set */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[95]);}

/* k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3475(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3475,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3478,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3589,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3589(t10,t6,lf[94]);}

/* loop876 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_fcall f_3589(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3589,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=lf[0];
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_make_character((C_word)C_unfix(t4));
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop876889 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop876889 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3478,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3481,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 702  list->char-set! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[43]+1)))(4,*((C_word*)lf[43]+1),t2,t1,((C_word*)t0)[2]);}

/* k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3481,2,t0,t1);}
t2=C_mutate((C_word*)lf[85]+1 /* (set! char-set:symbol ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 706  char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[83]+1),*((C_word*)lf[84]+1),*((C_word*)lf[85]+1));}

/* k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3485,2,t0,t1);}
t2=C_mutate((C_word*)lf[86]+1 /* (set! char-set:graphic ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3552,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3554,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3554(t12,t8,lf[93]);}

/* loop899 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_fcall f_3554(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3554,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=lf[0];
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_make_character((C_word)C_unfix(t4));
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop899912 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop899912 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3550 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 709  list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3489,2,t0,t1);}
t2=C_mutate((C_word*)lf[87]+1 /* (set! char-set:whitespace ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 717  char-set-union */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[87]+1),*((C_word*)lf[86]+1));}

/* k3491 in k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3493(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3493,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1 /* (set! char-set:printing ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3513,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3515,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3515(t12,t8,lf[92]);}

/* loop922 in k3491 in k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_fcall f_3515(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3515,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=lf[0];
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_make_character((C_word)C_unfix(t4));
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop922935 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop922935 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3511 in k3491 in k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 720  list->char-set */
t2=*((C_word*)lf[42]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3495 in k3491 in k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3497,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1 /* (set! char-set:blank ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3509,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 726  ucs-range->char-set */
t5=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(0),C_fix(32));}

/* k3507 in k3495 in k3491 in k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 726  ucs-range->char-set! */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(127),C_fix(160),C_SCHEME_TRUE,t1);}

/* k3499 in k3495 in k3491 in k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3501,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! char-set:iso-control ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 728  ucs-range->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),C_fix(128));}

/* k3503 in k3499 in k3495 in k3491 in k3487 in k3483 in k3479 in k3476 in k3473 in k3469 in k3466 in k3463 in k3459 in k3455 in k3451 in k3447 in k3444 in k3439 in k3436 in k3432 in k3429 in k3426 in k3423 in k3419 in k3415 in k1033 */
static void C_ccall f_3505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[91]+1 /* (set! char-set:ascii ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* char-set-diff+intersection in k1033 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3388r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3388r(t0,t1,t2,t3);}}

static void C_ccall f_3388r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3392,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3413,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 629  %char-set:s/check */
f_1124(t5,t2,lf[75]);}

/* k3411 in char-set-diff+intersection in k1033 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 629  string-copy */
t2=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3390 in char-set-diff+intersection in k1033 */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3395,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 630  make-string */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(256),C_make_character(0));}

/* k3393 in k3390 in char-set-diff+intersection in k1033 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3398,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 631  %char-set-diff+intersection! */
f_3222(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],lf[75]);}

/* k3396 in k3393 in k3390 in char-set-diff+intersection in k1033 */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 632  make-char-set */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3403 in k3396 in k3393 in k3390 in char-set-diff+intersection in k1033 */
static void C_ccall f_3405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3409,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 632  make-char-set */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3407 in k3403 in k3396 in k3393 in k3390 in char-set-diff+intersection in k1033 */
static void C_ccall f_3409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 632  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* char-set-diff+intersection! in k1033 */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3317r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3317r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3317r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3321,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 619  %char-set:s/check */
f_1124(t5,t2,lf[74]);}

/* k3319 in char-set-diff+intersection! in k1033 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 620  %char-set:s/check */
f_1124(t2,((C_word*)t0)[3],lf[74]);}

/* k3322 in k3319 in char-set-diff+intersection! in k1033 */
static void C_ccall f_3324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3327,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 621  %string-iter */
f_2674(t2,t3,((C_word*)t0)[3]);}

/* a3334 in k3322 in k3319 in char-set-diff+intersection! in k1033 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3335,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
t7=t2;
t8=t5;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_string_set(t6,t7,C_make_character(0)));}
else{
t5=((C_word*)t0)[3];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t10=t1;
t11=((C_word*)t0)[2];
t12=t2;
t13=t10;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_i_string_set(t11,t12,C_make_character(0)));}}}

/* k3325 in k3322 in k3319 in char-set-diff+intersection! in k1033 */
static void C_ccall f_3327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3330,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 625  %char-set-diff+intersection! */
f_3222(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[74]);}

/* k3328 in k3325 in k3322 in k3319 in char-set-diff+intersection! in k1033 */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 626  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-diff+intersection! in k1033 */
static void C_fcall f_3222(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3222,NULL,5,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3228,a[2]=t7,a[3]=t5,a[4]=t3,a[5]=t2,a[6]=((C_word)li106),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_3228(t9,t1,t4);}

/* loop772 in %char-set-diff+intersection! in k1033 */
static void C_fcall f_3228(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3228,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3304,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g779780 */
t6=t3;
f_3236(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3302 in loop772 in %char-set-diff+intersection! in k1033 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3228(t3,((C_word*)t0)[2],t2);}

/* g779 in loop772 in %char-set-diff+intersection! in k1033 */
static void C_fcall f_3236(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3236,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3301,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 615  %char-set:s/check */
f_1124(t4,t2,((C_word*)t0)[2]);}

/* k3299 in g779 in loop772 in %char-set-diff+intersection! in k1033 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 610  %string-iter */
f_2674(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3241 in g779 in loop772 in %char-set-diff+intersection! in k1033 */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3242,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[3];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t10=((C_word*)t0)[3];
t11=t2;
t12=(C_word)C_i_string_set(t10,t11,C_make_character(0));
t13=t1;
t14=((C_word*)t0)[2];
t15=t2;
t16=t13;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,(C_word)C_i_string_set(t14,t15,C_make_character(1)));}}}

/* char-set-xor in k1033 */
static void C_ccall f_3147(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_3147r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3147r(t0,t1,t2);}}

static void C_ccall f_3147r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3157,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3213,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-14.scm: 600  %char-set:s/check */
f_1124(t4,t5,lf[72]);}
else{
/* srfi-14.scm: 603  char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* k3211 in char-set-xor in k1033 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
/* srfi-14.scm: 115  substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k3155 in char-set-xor in k1033 */
static void C_ccall f_3157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3160,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 601  %char-set-algebra */
f_2715(t2,t1,t3,t4,lf[72]);}

/* a3168 in k3155 in char-set-xor in k1033 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3169,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t2;
t7=t3;
t8=(C_word)C_i_string_ref(t6,t7);
t9=(C_word)C_fix((C_word)C_character_code(t8));
t10=(C_word)C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=(C_word)C_make_character((C_word)C_unfix(t10));
t15=t11;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_i_string_set(t12,t13,t14));}}

/* k3158 in k3155 in char-set-xor in k1033 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 602  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-xor! in k1033 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3095r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3095r(t0,t1,t2,t3);}}

static void C_ccall f_3095r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3099,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3103,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 594  %char-set:s/check */
f_1124(t5,t2,lf[71]);}

/* k3101 in char-set-xor! in k1033 */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3105,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 594  %char-set-algebra */
f_2715(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[71]);}

/* a3104 in k3101 in char-set-xor! in k1033 */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3105,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t2;
t7=t3;
t8=(C_word)C_i_string_ref(t6,t7);
t9=(C_word)C_fix((C_word)C_character_code(t8));
t10=(C_word)C_fixnum_difference(C_fix(1),t9);
t11=t1;
t12=t2;
t13=t3;
t14=(C_word)C_make_character((C_word)C_unfix(t10));
t15=t11;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_i_string_set(t12,t13,t14));}}

/* k3097 in char-set-xor! in k1033 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-difference in k1033 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3049r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3049r(t0,t1,t2,t3);}}

static void C_ccall f_3049r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3059,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 585  %char-set:s/check */
f_1124(t5,t2,lf[70]);}
else{
/* srfi-14.scm: 588  char-set-copy */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* k3088 in char-set-difference in k1033 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
/* srfi-14.scm: 115  substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k3057 in char-set-difference in k1033 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3062,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 586  %char-set-algebra */
f_2715(t2,t1,((C_word*)t0)[2],t3,lf[70]);}

/* a3066 in k3057 in char-set-difference in k1033 */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3067,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t2,t3,C_make_character(0)));}}

/* k3060 in k3057 in char-set-difference in k1033 */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 587  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-difference! in k1033 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_3018r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3018r(t0,t1,t2,t3);}}

static void C_ccall f_3018r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3022,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3026,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 579  %char-set:s/check */
f_1124(t5,t2,lf[69]);}

/* k3024 in char-set-difference! in k1033 */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3028,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 579  %char-set-algebra */
f_2715(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[69]);}

/* a3027 in k3024 in char-set-difference! in k1033 */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3028,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t2,t3,C_make_character(0)));}}

/* k3020 in char-set-difference! in k1033 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-intersection in k1033 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2968r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2968r(t0,t1,t2);}}

static void C_ccall f_2968r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2978,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3009,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-14.scm: 570  %char-set:s/check */
f_1124(t4,t5,lf[67]);}
else{
/* srfi-14.scm: 573  char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[68]+1));}}

/* k3007 in char-set-intersection in k1033 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
/* srfi-14.scm: 115  substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k2976 in char-set-intersection in k1033 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2981,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 571  %char-set-algebra */
f_2715(t2,t1,t3,t4,lf[67]);}

/* a2989 in k2976 in char-set-intersection in k1033 */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2990,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t2,t3,C_make_character(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2979 in k2976 in char-set-intersection in k1033 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 572  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-intersection! in k1033 */
static void C_ccall f_2941(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2941r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2941r(t0,t1,t2,t3);}}

static void C_ccall f_2941r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2945,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2949,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 564  %char-set:s/check */
f_1124(t5,t2,lf[66]);}

/* k2947 in char-set-intersection! in k1033 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2951,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 564  %char-set-algebra */
f_2715(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[66]);}

/* a2950 in k2947 in char-set-intersection! in k1033 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2951,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t2,t3,C_make_character(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2943 in char-set-intersection! in k1033 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-union in k1033 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2887r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2887r(t0,t1,t2);}}

static void C_ccall f_2887r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2897,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2932,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-14.scm: 555  %char-set:s/check */
f_1124(t4,t5,lf[64]);}
else{
/* srfi-14.scm: 558  char-set-copy */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[65]+1));}}

/* k2930 in char-set-union in k1033 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
/* srfi-14.scm: 115  substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k2895 in char-set-union in k1033 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2900,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 556  %char-set-algebra */
f_2715(t2,t1,t3,t4,lf[64]);}

/* a2908 in k2895 in char-set-union in k1033 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2909,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t2,t3,C_make_character(1)));}}

/* k2898 in k2895 in char-set-union in k1033 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 557  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-union! in k1033 */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2856r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2856r(t0,t1,t2,t3);}}

static void C_ccall f_2856r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2860,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2864,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 549  %char-set:s/check */
f_1124(t5,t2,lf[63]);}

/* k2862 in char-set-union! in k1033 */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2866,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 549  %char-set-algebra */
f_2715(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[63]);}

/* a2865 in k2862 in char-set-union! in k1033 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2866,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t2,t3,C_make_character(1)));}}

/* k2858 in char-set-union! in k1033 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-complement! in k1033 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2823,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2827,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 541  %char-set:s/check */
f_1124(t3,t2,lf[62]);}

/* k2825 in char-set-complement! in k1033 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2832,a[2]=t1,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 542  %string-iter */
f_2674(t2,t3,t1);}

/* a2831 in k2825 in char-set-complement! in k1033 */
static void C_ccall f_2832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2832,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[2];
t5=(C_word)C_fixnum_difference(C_fix(1),t3);
t6=(C_word)C_make_character((C_word)C_unfix(t5));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t4,t2,t6));}

/* k2828 in k2825 in char-set-complement! in k1033 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-complement in k1033 */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2784,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2788,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 535  %char-set:s/check */
f_1124(t3,t2,lf[61]);}

/* k2786 in char-set-complement in k1033 */
static void C_ccall f_2788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2791,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 536  make-string */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(256));}

/* k2789 in k2786 in char-set-complement in k1033 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2794,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2799,a[2]=t1,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 537  %string-iter */
f_2674(t2,t3,((C_word*)t0)[2]);}

/* a2798 in k2789 in k2786 in char-set-complement in k1033 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2799,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[2];
t5=(C_word)C_fixnum_difference(C_fix(1),t3);
t6=(C_word)C_make_character((C_word)C_unfix(t5));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_string_set(t4,t2,t6));}

/* k2792 in k2789 in k2786 in char-set-complement in k1033 */
static void C_ccall f_2794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 538  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-algebra in k1033 */
static void C_fcall f_2715(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2715,NULL,5,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2721,a[2]=t7,a[3]=t5,a[4]=t2,a[5]=t4,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_2721(t9,t1,t3);}

/* loop606 in %char-set-algebra in k1033 */
static void C_fcall f_2721(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2721,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2771,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g613614 */
t6=t3;
f_2729(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2769 in loop606 in %char-set-algebra in k1033 */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2721(t3,((C_word*)t0)[2],t2);}

/* g613 in loop606 in %char-set-algebra in k1033 */
static void C_fcall f_2729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2729,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2733,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 524  %char-set:s/check */
f_1124(t3,t2,((C_word*)t0)[2]);}

/* k2731 in g613 in loop606 in %char-set-algebra in k1033 */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2733,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=((C_word)li80),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2738(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2731 in g613 in loop606 in %char-set-algebra in k1033 */
static void C_fcall f_2738(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2738,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2748,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
/* srfi-14.scm: 527  op */
t9=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t9))(5,t9,t4,((C_word*)t0)[2],t2,t8);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2746 in lp in k2731 in g613 in loop606 in %char-set-algebra in k1033 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 528  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2738(t3,((C_word*)t0)[2],t2);}

/* %string-iter in k1033 */
static void C_fcall f_2674(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2674,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_string_length(t3);
t5=(C_word)C_fixnum_difference(t4,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2684,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2684(t9,t1,t5);}

/* lp in %string-iter in k1033 */
static void C_fcall f_2684(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2684,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2694,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t6=(C_word)C_fix((C_word)C_character_code(t5));
/* srfi-14.scm: 513  p */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t2,t6);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2692 in lp in %string-iter in k1033 */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 514  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2684(t3,((C_word*)t0)[2],t2);}

/* ->char-set in k1033 */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2644,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2651,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 490  char-set? */
t4=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2649 in ->char-set in k1033 */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[3]))){
/* srfi-14.scm: 491  string->char-set */
t2=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
/* srfi-14.scm: 492  char-set */
t2=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
/* srfi-14.scm: 493  ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[57],lf[58],((C_word*)t0)[3]);}}}}

/* char-set-filter! in k1033 */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2630,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2634,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2638,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 481  %char-set:s/check */
f_1124(t6,t3,lf[56]);}

/* k2636 in char-set-filter! in k1033 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2642,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 482  %char-set:s/check */
f_1124(t2,((C_word*)t0)[2],lf[56]);}

/* k2640 in k2636 in char-set-filter! in k1033 */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 480  %char-set-filter! */
f_2546(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2632 in char-set-filter! in k1033 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-filter in k1033 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2614r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2614r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2614r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2618,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 472  %default-base */
f_1077(t5,t4,*((C_word*)lf[55]+1));}

/* k2616 in char-set-filter in k1033 */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2621,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2628,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 474  %char-set:s/check */
f_1124(t3,((C_word*)t0)[2],lf[56]);}

/* k2626 in k2616 in char-set-filter in k1033 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 473  %char-set-filter! */
f_2546(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2619 in k2616 in char-set-filter in k1033 */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 477  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-filter! in k1033 */
static void C_fcall f_2546(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2546,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2552,a[2]=t2,a[3]=t3,a[4]=t6,a[5]=t4,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2552(t8,t1,C_fix(255));}

/* lp in %char-set-filter! in k1033 */
static void C_fcall f_2552(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2552,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2572,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[3];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t4;
f_2572(2,t10,C_SCHEME_FALSE);}
else{
t10=t2;
t11=(C_word)C_make_character((C_word)C_unfix(t10));
/* srfi-14.scm: 467  pred */
t12=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t12))(3,t12,t4,t11);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2570 in lp in %char-set-filter! in k1033 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=(C_word)C_i_string_set(t2,t3,C_make_character(1));
t5=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 469  lp */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2552(t6,((C_word*)t0)[2],t5);}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 469  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2552(t3,((C_word*)t0)[2],t2);}}

/* ucs-range->char-set! in k1033 */
static void C_ccall f_2536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2536,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2540,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2544,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 456  %char-set:s/check */
f_1124(t7,t5,lf[53]);}

/* k2542 in ucs-range->char-set! in k1033 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 455  %ucs-range->char-set! */
f_2444(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[52]);}

/* k2538 in ucs-range->char-set! in k1033 */
static void C_ccall f_2540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ucs-range->char-set in k1033 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2506r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2506r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2506r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_i_car(t4));
t7=(C_word)C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t4));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2516,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 450  %default-base */
f_1077(t9,t8,*((C_word*)lf[52]+1));}

/* k2514 in ucs-range->char-set in k1033 */
static void C_ccall f_2516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2519,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 451  %ucs-range->char-set! */
f_2444(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[52]);}

/* k2517 in k2514 in ucs-range->char-set in k1033 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 452  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %ucs-range->char-set! in k1033 */
static void C_fcall f_2444(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2444,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_exact_2(t2,t6);
t8=(C_word)C_i_check_exact_2(t3,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2454,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2492,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=t3;
if(C_truep((C_word)C_fixnum_lessp(t11,t12))){
t13=t3;
t14=t10;
f_2492(t14,(C_truep((C_word)C_fixnum_lessp(C_fix(256),t13))?t4:C_SCHEME_FALSE));}
else{
t13=t10;
f_2492(t13,C_SCHEME_FALSE);}}

/* k2490 in %ucs-range->char-set! in k1033 */
static void C_fcall f_2492(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-14.scm: 442  ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[51],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_2454(2,t2,C_SCHEME_UNDEFINED);}}

/* k2452 in %ucs-range->char-set! in k1033 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 445  min */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(256));}

/* k2487 in k2452 in %ucs-range->char-set! in k1033 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2489,2,t0,t1);}
t2=(C_word)C_fixnum_difference(t1,C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_2463(t3,t2));}

/* lp in k2487 in k2452 in %ucs-range->char-set! in k1033 */
static C_word C_fcall f_2463(C_word t0,C_word t1){
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
loop:
C_stack_check;
t2=((C_word*)t0)[3];
t3=t1;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,t3))){
t4=((C_word*)t0)[2];
t5=t1;
t6=(C_word)C_i_string_set(t4,t5,C_make_character(1));
t7=(C_word)C_fixnum_difference(t1,C_fix(1));
t10=t7;
t1=t10;
goto loop;}
else{
t4=C_SCHEME_UNDEFINED;
return(t4);}}

/* char-set->string in k1033 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2383,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2387,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 423  %char-set:s/check */
f_1124(t3,t2,lf[48]);}

/* k2385 in char-set->string in k1033 */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2442,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 424  char-set-size */
t4=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2440 in k2385 in char-set->string in k1033 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 424  make-string */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2388 in k2385 in char-set->string in k1033 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2395(t2,C_fix(255),C_fix(0)));}

/* lp in k2388 in k2385 in char-set->string in k1033 */
static C_word C_fcall f_2395(C_word t0,C_word t1,C_word t2){
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
loop:
C_stack_check;
t3=t1;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t4=((C_word*)t0)[3];
return(t4);}
else{
t4=((C_word*)t0)[2];
t5=t1;
t6=(C_word)C_i_string_ref(t4,t5);
t7=(C_word)C_fix((C_word)C_character_code(t6));
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t2;
t10=(C_word)C_fixnum_difference(t1,C_fix(1));
t18=t10;
t19=t9;
t1=t18;
t2=t19;
goto loop;}
else{
t9=t1;
t10=(C_word)C_make_character((C_word)C_unfix(t9));
t11=(C_word)C_i_string_set(((C_word*)t0)[3],t2,t10);
t12=(C_word)C_fixnum_plus(t2,C_fix(1));
t13=(C_word)C_fixnum_difference(t1,C_fix(1));
t18=t13;
t19=t12;
t1=t18;
t2=t19;
goto loop;}}}

/* string->char-set! in k1033 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2373,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2377,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2381,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 417  %char-set:s/check */
f_1124(t5,t3,lf[47]);}

/* k2379 in string->char-set! in k1033 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 417  %string->char-set! */
f_2312(((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[47]);}

/* k2375 in string->char-set! in k1033 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string->char-set in k1033 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2361r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2361r(t0,t1,t2,t3);}}

static void C_ccall f_2361r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2365,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 412  %default-base */
f_1077(t4,t3,*((C_word*)lf[46]+1));}

/* k2363 in string->char-set in k1033 */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2368,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 413  %string->char-set! */
f_2312(t2,((C_word*)t0)[2],t1,lf[46]);}

/* k2366 in k2363 in string->char-set in k1033 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 414  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string->char-set! in k1033 */
static void C_fcall f_2312(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2312,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,t4);
t6=(C_word)C_i_string_length(t2);
t7=(C_word)C_fixnum_difference(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2325,a[2]=t3,a[3]=t2,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,f_2325(t8,t7));}

/* doloop453 in %string->char-set! in k1033 */
static C_word C_fcall f_2325(C_word t0,C_word t1){
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
loop:
C_stack_check;
t2=t1;
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t4=(C_word)C_fix((C_word)C_character_code(t3));
t5=((C_word*)t0)[2];
t6=(C_word)C_i_string_set(t5,t4,C_make_character(1));
t7=(C_word)C_fixnum_difference(t1,C_fix(1));
t10=t7;
t1=t10;
goto loop;}}

/* char-set->list in k1033 */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2260,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 393  %char-set:s/check */
f_1124(t3,t2,lf[44]);}

/* k2262 in char-set->list in k1033 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2269,a[2]=t3,a[3]=t1,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2269(t5,((C_word*)t0)[2],C_fix(255),C_SCHEME_END_OF_LIST);}

/* lp in k2262 in char-set->list in k1033 */
static void C_fcall f_2269(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2269,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=((C_word*)t0)[3];
t7=t2;
t8=(C_word)C_i_string_ref(t6,t7);
t9=(C_word)C_fix((C_word)C_character_code(t8));
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t3;
/* srfi-14.scm: 396  lp */
t17=t1;
t18=t5;
t19=t11;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t11=t2;
t12=(C_word)C_make_character((C_word)C_unfix(t11));
t13=(C_word)C_a_i_cons(&a,2,t12,t3);
/* srfi-14.scm: 396  lp */
t17=t1;
t18=t5;
t19=t13;
t1=t17;
t2=t18;
t3=t19;
goto loop;}}}

/* list->char-set! in k1033 */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2250,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2254,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2258,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 388  %char-set:s/check */
f_1124(t5,t3,lf[43]);}

/* k2256 in list->char-set! in k1033 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 388  %list->char-set! */
f_2183(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2252 in list->char-set! in k1033 */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* list->char-set in k1033 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2238r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2238r(t0,t1,t2,t3);}}

static void C_ccall f_2238r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2242,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 383  %default-base */
f_1077(t4,t3,*((C_word*)lf[42]+1));}

/* k2240 in list->char-set in k1033 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2245,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 384  %list->char-set! */
f_2183(t2,((C_word*)t0)[2],t1);}

/* k2243 in k2240 in list->char-set in k1033 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 385  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set in k1033 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2226r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2226r(t0,t1,t2);}}

static void C_ccall f_2226r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2230,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 378  make-string */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(256),C_make_character(0));}

/* k2228 in char-set in k1033 */
static void C_ccall f_2230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2233,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 379  %list->char-set! */
f_2183(t2,((C_word*)t0)[2],t1);}

/* k2231 in k2228 in char-set in k1033 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 380  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %list->char-set! in k1033 */
static void C_fcall f_2183(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2183,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2189,a[2]=t5,a[3]=t3,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2189(t7,t1,t2);}

/* loop409 in %list->char-set! in k1033 */
static void C_fcall f_2189(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2189,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[3],a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_2197(t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g416 in loop409 in %list->char-set! in k1033 */
static C_word C_fcall f_2197(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=(C_word)C_fix((C_word)C_character_code(t1));
t3=((C_word*)t0)[2];
return((C_word)C_i_string_set(t3,t2,C_make_character(1)));}

/* char-set-unfold! in k1033 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2173,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2177,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2181,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 365  %char-set:s/check */
f_1124(t8,t6,lf[40]);}

/* k2179 in char-set-unfold! in k1033 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 364  %char-set-unfold! */
f_2119(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2175 in char-set-unfold! in k1033 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-unfold in k1033 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr6r,(void*)f_2161r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2161r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2161r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2165,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 359  %default-base */
f_1077(t7,t6,*((C_word*)lf[39]+1));}

/* k2163 in char-set-unfold in k1033 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2168,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 360  %char-set-unfold! */
f_2119(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2166 in k2163 in char-set-unfold in k1033 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 361  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-unfold! in k1033 */
static void C_fcall f_2119(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2119,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2125,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=t5,a[7]=((C_word)li51),tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_2125(t10,t1,t6);}

/* lp in %char-set-unfold! in k1033 */
static void C_fcall f_2125(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2125,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm: 354  p */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2157 in lp in %char-set-unfold! in k1033 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2159,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2155,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 355  f */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2153 in k2157 in lp in %char-set-unfold! in k1033 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2155,2,t0,t1);}
t2=(C_word)C_fix((C_word)C_character_code(t1));
t3=((C_word*)t0)[6];
t4=(C_word)C_i_string_set(t3,t2,C_make_character(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2147,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 356  g */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k2145 in k2153 in k2157 in lp in %char-set-unfold! in k1033 */
static void C_ccall f_2147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 356  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2125(t2,((C_word*)t0)[2],t1);}

/* char-set-any in k1033 */
static void C_ccall f_2056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2056,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2060,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 342  %char-set:s/check */
f_1124(t4,t3,lf[37]);}

/* k2058 in char-set-any in k1033 */
static void C_ccall f_2060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2060,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2065,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2065(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2058 in char-set-any in k1033 */
static void C_fcall f_2065(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2065,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=(C_word)C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm: 346  lp */
t14=t1;
t15=t10;
t1=t14;
t2=t15;
goto loop;}
else{
t10=t2;
t11=(C_word)C_make_character((C_word)C_unfix(t10));
/* srfi-14.scm: 345  pred */
t12=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t12))(3,t12,t4,t11);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2073 in lp in k2058 in char-set-any in k1033 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm: 346  lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2065(t3,((C_word*)t0)[4],t2);}}

/* char-set-every in k1033 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2002,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2006,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 334  %char-set:s/check */
f_1124(t4,t3,lf[36]);}

/* k2004 in char-set-every in k1033 */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2006,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2011,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2011(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2004 in char-set-every in k1033 */
static void C_fcall f_2011(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2011,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)t0)[4];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
t9=(C_word)C_eqp(t8,C_fix(0));
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2040,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
if(C_truep(t9)){
t11=(C_word)C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm: 338  lp */
t15=t1;
t16=t11;
t1=t15;
t2=t16;
goto loop;}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t2;
t12=(C_word)C_make_character((C_word)C_unfix(t11));
/* srfi-14.scm: 337  pred */
t13=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t13))(3,t13,t10,t12);}}}

/* k2038 in lp in k2004 in char-set-every in k1033 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 338  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2011(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* char-set-fold in k1033 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1950,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1954,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 325  %char-set:s/check */
f_1124(t5,t4,lf[35]);}

/* k1952 in char-set-fold in k1033 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1959(t5,((C_word*)t0)[3],C_fix(255),((C_word*)t0)[2]);}

/* lp in k1952 in char-set-fold in k1033 */
static void C_fcall f_1959(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1959,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1977,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[3];
t8=t2;
t9=(C_word)C_i_string_ref(t7,t8);
t10=(C_word)C_fix((C_word)C_character_code(t9));
t11=(C_word)C_eqp(t10,C_fix(0));
if(C_truep(t11)){
t12=t3;
/* srfi-14.scm: 328  lp */
t17=t1;
t18=t5;
t19=t12;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t12=t2;
t13=(C_word)C_make_character((C_word)C_unfix(t12));
/* srfi-14.scm: 330  kons */
t14=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t14))(4,t14,t6,t13,t3);}}}

/* k1975 in lp in k1952 in char-set-fold in k1033 */
static void C_ccall f_1977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 328  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1959(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* char-set-map in k1033 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1871,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1875,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 314  %char-set:s/check */
f_1124(t4,t3,lf[34]);}

/* k1873 in char-set-map in k1033 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 315  make-string */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(256),C_make_character(0));}

/* k1876 in k1873 in char-set-map in k1033 */
static void C_ccall f_1878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1881,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li43),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1886(t6,t2,C_fix(255));}

/* lp in k1876 in k1873 in char-set-map in k1033 */
static void C_fcall f_1886(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1886,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=((C_word*)t0)[5];
t5=t2;
t6=(C_word)C_i_string_ref(t4,t5);
t7=(C_word)C_fix((C_word)C_character_code(t6));
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=(C_word)C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm: 320  lp */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1944,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=(C_word)C_make_character((C_word)C_unfix(t10));
/* srfi-14.scm: 319  proc */
t12=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t12))(3,t12,t9,t11);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1942 in lp in k1876 in k1873 in char-set-map in k1033 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_fix((C_word)C_character_code(t1));
t3=((C_word*)t0)[5];
t4=(C_word)C_i_string_set(t3,t2,C_make_character(1));
t5=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 320  lp */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1886(t6,((C_word*)t0)[2],t5);}

/* k1879 in k1876 in k1873 in char-set-map in k1033 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 321  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-for-each in k1033 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1811,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1815,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 306  %char-set:s/check */
f_1124(t4,t3,lf[33]);}

/* k1813 in char-set-for-each in k1033 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1815,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1820,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1820(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1813 in char-set-for-each in k1033 */
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1820,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1830,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=(C_word)C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm: 310  lp */
t15=t1;
t16=t10;
t1=t15;
t2=t16;
goto loop;}
else{
t10=t2;
t11=(C_word)C_make_character((C_word)C_unfix(t10));
/* srfi-14.scm: 309  proc */
t12=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t12))(3,t12,t4,t11);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1828 in lp in k1813 in char-set-for-each in k1033 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 310  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1820(t3,((C_word*)t0)[2],t2);}

/* %char-set-cursor-next in k1033 */
static void C_fcall f_1759(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1759,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1763,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 295  %char-set:s/check */
f_1124(t5,t2,t4);}

/* k1761 in %char-set-cursor-next in k1033 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1768,a[2]=t1,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1768(t2,((C_word*)t0)[2]));}

/* lp in k1761 in %char-set-cursor-next in k1033 */
static C_word C_fcall f_1768(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
C_stack_check;
t2=(C_word)C_fixnum_difference(t1,C_fix(1));
t3=(C_word)C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t3)){
if(C_truep(t3)){
return(t2);}
else{
t9=t2;
t1=t9;
goto loop;}}
else{
t4=((C_word*)t0)[2];
t5=(C_word)C_i_string_ref(t4,t2);
t6=(C_word)C_fix((C_word)C_character_code(t5));
t7=(C_word)C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t9=t2;
t1=t9;
goto loop;}
else{
return(t2);}}}

/* char-set-cursor-next in k1033 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1750,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[32]);
/* srfi-14.scm: 292  %char-set-cursor-next */
f_1759(t1,t2,t3,lf[32]);}

/* char-set-ref in k1033 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1744,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_make_character((C_word)C_unfix(t3)));}

/* end-of-char-set? in k1033 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1738,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_lessp(t2,C_fix(0)));}

/* char-set-cursor in k1033 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1732,3,t0,t1,t2);}
/* srfi-14.scm: 282  %char-set-cursor-next */
f_1759(t1,t2,C_fix(256),lf[28]);}

/* char-set-delete! in k1033 */
static void C_ccall f_1720(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1720r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1720r(t0,t1,t2,t3);}}

static void C_ccall f_1720r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1726,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 268  %set-char-set! */
f_1643(t1,t4,lf[27],t2,t3);}

/* a1725 in char-set-delete! in k1033 */
static void C_ccall f_1726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1726,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,C_make_character(0)));}

/* char-set-delete in k1033 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1708r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1708r(t0,t1,t2,t3);}}

static void C_ccall f_1708r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1714,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 266  %set-char-set */
f_1595(t1,t4,lf[26],t2,t3);}

/* a1713 in char-set-delete in k1033 */
static void C_ccall f_1714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1714,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,C_make_character(0)));}

/* char-set-adjoin! in k1033 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1696r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1696r(t0,t1,t2,t3);}}

static void C_ccall f_1696r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1702,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 264  %set-char-set! */
f_1643(t1,t4,lf[25],t2,t3);}

/* a1701 in char-set-adjoin! in k1033 */
static void C_ccall f_1702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1702,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,C_make_character(1)));}

/* char-set-adjoin in k1033 */
static void C_ccall f_1684(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1684r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1684r(t0,t1,t2,t3);}}

static void C_ccall f_1684r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1690,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 262  %set-char-set */
f_1595(t1,t4,lf[24],t2,t3);}

/* a1689 in char-set-adjoin in k1033 */
static void C_ccall f_1690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1690,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,C_make_character(1)));}

/* %set-char-set! in k1033 */
static void C_fcall f_1643(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1643,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1647,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 256  %char-set:s/check */
f_1124(t6,t4,t3);}

/* k1645 in %set-char-set! in k1033 */
static void C_ccall f_1647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1650,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1652,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1652(t6,t2,((C_word*)t0)[2]);}

/* loop192 in k1645 in %set-char-set! in k1033 */
static void C_fcall f_1652(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1652,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1660,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1671,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g199200 */
t6=t3;
f_1660(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1669 in loop192 in k1645 in %set-char-set! in k1033 */
static void C_ccall f_1671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1652(t3,((C_word*)t0)[2],t2);}

/* g199 in loop192 in k1645 in %set-char-set! in k1033 */
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1660,NULL,3,t0,t1,t2);}
t3=(C_word)C_fix((C_word)C_character_code(t2));
/* srfi-14.scm: 257  set */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t3);}

/* k1648 in k1645 in %set-char-set! in k1033 */
static void C_ccall f_1650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* %set-char-set in k1033 */
static void C_fcall f_1595(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1595,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1599,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1641,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 250  %char-set:s/check */
f_1124(t7,t4,t3);}

/* k1639 in %set-char-set in k1033 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
/* srfi-14.scm: 115  substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k1597 in %set-char-set in k1033 */
static void C_ccall f_1599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1602,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1607,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1607(t6,t2,((C_word*)t0)[2]);}

/* loop171 in k1597 in %set-char-set in k1033 */
static void C_fcall f_1607(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1607,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1626,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g178179 */
t6=t3;
f_1615(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1624 in loop171 in k1597 in %set-char-set in k1033 */
static void C_ccall f_1626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1607(t3,((C_word*)t0)[2],t2);}

/* g178 in loop171 in k1597 in %set-char-set in k1033 */
static void C_fcall f_1615(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1615,NULL,3,t0,t1,t2);}
t3=(C_word)C_fix((C_word)C_character_code(t2));
/* srfi-14.scm: 251  set */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t3);}

/* k1600 in k1597 in %set-char-set in k1033 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 253  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-count in k1033 */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1528,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1532,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 238  %char-set:s/check */
f_1124(t4,t3,lf[21]);}

/* k1530 in char-set-count in k1033 */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1532,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1537(t5,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1530 in char-set-count in k1033 */
static void C_fcall f_1537(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1537,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1558,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[3];
t8=t2;
t9=(C_word)C_i_string_ref(t7,t8);
t10=(C_word)C_fix((C_word)C_character_code(t9));
t11=(C_word)C_eqp(t10,C_fix(0));
if(C_truep(t11)){
t12=t6;
f_1558(2,t12,C_SCHEME_FALSE);}
else{
t12=t2;
t13=(C_word)C_make_character((C_word)C_unfix(t12));
/* srfi-14.scm: 242  pred */
t14=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t14))(3,t14,t6,t13);}}}

/* k1556 in lp in k1530 in char-set-count in k1033 */
static void C_ccall f_1558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-14.scm: 241  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1537(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[5];
/* srfi-14.scm: 241  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1537(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* char-set-size in k1033 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1486,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1490,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 231  %char-set:s/check */
f_1124(t3,t2,lf[20]);}

/* k1488 in char-set-size in k1033 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1495,a[2]=t1,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1495(t2,C_fix(255),C_fix(0)));}

/* lp in k1488 in char-set-size in k1033 */
static C_word C_fcall f_1495(C_word t0,C_word t1,C_word t2){
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
loop:
C_stack_check;
t3=t1;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t4=t2;
return(t4);}
else{
t4=(C_word)C_fixnum_difference(t1,C_fix(1));
t5=((C_word*)t0)[2];
t6=t1;
t7=(C_word)C_i_string_ref(t5,t6);
t8=(C_word)C_fix((C_word)C_character_code(t7));
t9=(C_word)C_fixnum_plus(t2,t8);
t12=t4;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}

/* char-set-contains? in k1033 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1447,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_char_2(t3,lf[19]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1480,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 226  %char-set:s/check */
f_1124(t5,t2,lf[19]);}

/* k1478 in char-set-contains? in k1033 */
static void C_ccall f_1480(C_word c,C_word t0,C_word t1){
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
t3=(C_word)C_fix((C_word)C_character_code(t2));
t4=((C_word*)t0)[2];
t5=(C_word)C_i_string_ref(t1,t3);
t6=(C_word)C_fix((C_word)C_character_code(t5));
t7=(C_word)C_eqp(t6,C_fix(0));
t8=t4;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_not(t7));}

/* char-set-hash in k1033 */
static void C_ccall f_1334(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1334r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1334r(t0,t1,t2,t3);}}

static void C_ccall f_1334r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1338,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1338(2,t5,C_fix(4194304));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1338(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[18],t3);}}}

/* k1336 in char-set-hash in k1033 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(((C_word*)t3)[1],C_fix(0));
if(C_truep(t5)){
t6=C_set_block_item(t3,0,C_fix(4194304));
t7=t4;
f_1341(t7,t6);}
else{
t6=t4;
f_1341(t6,C_SCHEME_UNDEFINED);}}

/* k1339 in k1336 in char-set-hash in k1033 */
static void C_fcall f_1341(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1341,NULL,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[4])[1],lf[16]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1347,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 213  %char-set:s/check */
f_1124(t3,((C_word*)t0)[2],lf[16]);}

/* k1345 in k1339 in k1336 in char-set-hash in k1033 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[3],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t3=f_1405(t2,C_fix(65536));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1355,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1355(t7,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1345 in k1339 in k1336 in char-set-hash in k1033 */
static void C_fcall f_1355(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1355,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-14.scm: 218  modulo */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,((C_word*)((C_word*)t0)[5])[1]);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=((C_word*)t0)[4];
t7=t2;
t8=(C_word)C_i_string_ref(t6,t7);
t9=(C_word)C_fix((C_word)C_character_code(t8));
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t3;
/* srfi-14.scm: 219  lp */
t16=t1;
t17=t5;
t18=t11;
t1=t16;
t2=t17;
t3=t18;
goto loop;}
else{
t11=(C_word)C_fixnum_times(C_fix(37),t3);
t12=(C_word)C_fixnum_plus(t11,t2);
t13=(C_word)C_fixnum_and(((C_word*)t0)[2],t12);
/* srfi-14.scm: 219  lp */
t16=t1;
t17=t5;
t18=t13;
t1=t16;
t2=t17;
t3=t18;
goto loop;}}}

/* lp in k1345 in k1339 in k1336 in char-set-hash in k1033 */
static C_word C_fcall f_1405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,t3))){
return((C_word)C_fixnum_difference(t1,C_fix(1)));}
else{
t4=(C_word)C_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* char-set<= in k1033 */
static void C_ccall f_1226(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1226r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1226r(t0,t1,t2);}}

static void C_ccall f_1226r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1246,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 186  %char-set:s/check */
f_1124(t6,t4,lf[15]);}}

/* k1244 in char-set<= in k1033 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1246,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1248,a[2]=t3,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1248(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* lp in k1244 in char-set<= in k1033 */
static void C_fcall f_1248(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1248,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1258,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t3);
/* srfi-14.scm: 188  %char-set:s/check */
f_1124(t6,t7,lf[15]);}}

/* k1256 in lp in k1244 in char-set<= in k1033 */
static void C_ccall f_1258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1258,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t3)){
/* srfi-14.scm: 190  lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1248(t4,((C_word*)t0)[2],t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1275,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1275(t7,((C_word*)t0)[2],C_fix(255));}}

/* lp2 in k1256 in lp in k1244 in char-set<= in k1033 */
static void C_fcall f_1275(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1275,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-14.scm: 192  lp */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1248(t4,t1,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
t5=t2;
t6=(C_word)C_i_string_ref(t4,t5);
t7=(C_word)C_fix((C_word)C_character_code(t6));
t8=((C_word*)t0)[5];
t9=t2;
t10=(C_word)C_i_string_ref(t8,t9);
t11=(C_word)C_fix((C_word)C_character_code(t10));
if(C_truep((C_word)C_fixnum_less_or_equal_p(t7,t11))){
t12=(C_word)C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm: 194  lp2 */
t14=t1;
t15=t12;
t1=t14;
t2=t15;
goto loop;}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}}

/* char-set= in k1033 */
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1171r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1171r(t0,t1,t2);}}

static void C_ccall f_1171r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1187,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 175  %char-set:s/check */
f_1124(t6,t4,lf[14]);}}

/* k1185 in char-set= in k1033 */
static void C_ccall f_1187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1187,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1192,a[2]=t3,a[3]=t1,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1192(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k1185 in char-set= in k1033 */
static void C_fcall f_1192(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1192,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_word)C_i_not(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1216,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t2);
/* srfi-14.scm: 178  %char-set:s/check */
f_1124(t5,t6,lf[14]);}}

/* k1214 in lp in k1185 in char-set= in k1033 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_string_equal_p(((C_word*)t0)[5],t1))){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-14.scm: 179  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1192(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* char-set-copy in k1033 */
static void C_ccall f_1157(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1157,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1165,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1169,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 168  %char-set:s/check */
f_1124(t4,t2,lf[13]);}

/* k1167 in char-set-copy in k1033 */
static void C_ccall f_1169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
/* srfi-14.scm: 115  substring */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}

/* k1163 in char-set-copy in k1033 */
static void C_ccall f_1165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 168  make-char-set */
t2=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %char-set:s/check in k1033 */
static void C_fcall f_1124(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1124,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1130,a[2]=t3,a[3]=t5,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1130(t7,t1,t2);}

/* lp in %char-set:s/check in k1033 */
static void C_fcall f_1130(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1130,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 139  char-set? */
t4=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1135 in lp in %char-set:s/check in k1033 */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1137,2,t0,t1);}
if(C_truep(t1)){
/* srfi-14.scm: 139  char-set:s */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1147,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 140  ##sys#error */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[12],((C_word*)t0)[4]);}}

/* k1145 in k1135 in lp in %char-set:s/check in k1033 */
static void C_ccall f_1147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 140  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1130(t2,((C_word*)t0)[2],t1);}

/* %default-base in k1033 */
static void C_fcall f_1077(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1077,NULL,3,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1102,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 127  char-set? */
t7=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
/* srfi-14.scm: 129  ##sys#error */
t6=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,lf[9],t3,t2);}}
else{
/* srfi-14.scm: 131  make-string */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,C_fix(256),C_make_character(0));}}

/* k1100 in %default-base in k1033 */
static void C_ccall f_1102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1102,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 127  char-set:s */
t3=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm: 128  ##sys#error */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[8],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k1107 in k1100 in %default-base in k1033 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=(C_word)C_i_string_length(t1);
/* srfi-14.scm: 115  substring */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t1,C_fix(0),t3);}

/* char-set? in k1033 */
static void C_ccall f_1061(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1061,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[2]));}

/* char-set:s in k1033 */
static void C_ccall f_1055(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1055,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* make-char-set in k1033 */
static void C_ccall f_1049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1049,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,2,lf[2],t2));}

/* %latin1->char in k1033 */
static void C_ccall f_1037(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1037,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_make_character((C_word)C_unfix(t2)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[261] = {
{"toplevel:srfi_14_scm",(void*)C_srfi_14_toplevel},
{"f_1035:srfi_14_scm",(void*)f_1035},
{"f_3417:srfi_14_scm",(void*)f_3417},
{"f_3421:srfi_14_scm",(void*)f_3421},
{"f_3425:srfi_14_scm",(void*)f_3425},
{"f_3428:srfi_14_scm",(void*)f_3428},
{"f_3431:srfi_14_scm",(void*)f_3431},
{"f_3434:srfi_14_scm",(void*)f_3434},
{"f_3438:srfi_14_scm",(void*)f_3438},
{"f_3669:srfi_14_scm",(void*)f_3669},
{"f_3441:srfi_14_scm",(void*)f_3441},
{"f_3446:srfi_14_scm",(void*)f_3446},
{"f_3449:srfi_14_scm",(void*)f_3449},
{"f_3453:srfi_14_scm",(void*)f_3453},
{"f_3457:srfi_14_scm",(void*)f_3457},
{"f_3461:srfi_14_scm",(void*)f_3461},
{"f_3465:srfi_14_scm",(void*)f_3465},
{"f_3624:srfi_14_scm",(void*)f_3624},
{"f_3468:srfi_14_scm",(void*)f_3468},
{"f_3471:srfi_14_scm",(void*)f_3471},
{"f_3475:srfi_14_scm",(void*)f_3475},
{"f_3589:srfi_14_scm",(void*)f_3589},
{"f_3478:srfi_14_scm",(void*)f_3478},
{"f_3481:srfi_14_scm",(void*)f_3481},
{"f_3485:srfi_14_scm",(void*)f_3485},
{"f_3554:srfi_14_scm",(void*)f_3554},
{"f_3552:srfi_14_scm",(void*)f_3552},
{"f_3489:srfi_14_scm",(void*)f_3489},
{"f_3493:srfi_14_scm",(void*)f_3493},
{"f_3515:srfi_14_scm",(void*)f_3515},
{"f_3513:srfi_14_scm",(void*)f_3513},
{"f_3497:srfi_14_scm",(void*)f_3497},
{"f_3509:srfi_14_scm",(void*)f_3509},
{"f_3501:srfi_14_scm",(void*)f_3501},
{"f_3505:srfi_14_scm",(void*)f_3505},
{"f_3388:srfi_14_scm",(void*)f_3388},
{"f_3413:srfi_14_scm",(void*)f_3413},
{"f_3392:srfi_14_scm",(void*)f_3392},
{"f_3395:srfi_14_scm",(void*)f_3395},
{"f_3398:srfi_14_scm",(void*)f_3398},
{"f_3405:srfi_14_scm",(void*)f_3405},
{"f_3409:srfi_14_scm",(void*)f_3409},
{"f_3317:srfi_14_scm",(void*)f_3317},
{"f_3321:srfi_14_scm",(void*)f_3321},
{"f_3324:srfi_14_scm",(void*)f_3324},
{"f_3335:srfi_14_scm",(void*)f_3335},
{"f_3327:srfi_14_scm",(void*)f_3327},
{"f_3330:srfi_14_scm",(void*)f_3330},
{"f_3222:srfi_14_scm",(void*)f_3222},
{"f_3228:srfi_14_scm",(void*)f_3228},
{"f_3304:srfi_14_scm",(void*)f_3304},
{"f_3236:srfi_14_scm",(void*)f_3236},
{"f_3301:srfi_14_scm",(void*)f_3301},
{"f_3242:srfi_14_scm",(void*)f_3242},
{"f_3147:srfi_14_scm",(void*)f_3147},
{"f_3213:srfi_14_scm",(void*)f_3213},
{"f_3157:srfi_14_scm",(void*)f_3157},
{"f_3169:srfi_14_scm",(void*)f_3169},
{"f_3160:srfi_14_scm",(void*)f_3160},
{"f_3095:srfi_14_scm",(void*)f_3095},
{"f_3103:srfi_14_scm",(void*)f_3103},
{"f_3105:srfi_14_scm",(void*)f_3105},
{"f_3099:srfi_14_scm",(void*)f_3099},
{"f_3049:srfi_14_scm",(void*)f_3049},
{"f_3090:srfi_14_scm",(void*)f_3090},
{"f_3059:srfi_14_scm",(void*)f_3059},
{"f_3067:srfi_14_scm",(void*)f_3067},
{"f_3062:srfi_14_scm",(void*)f_3062},
{"f_3018:srfi_14_scm",(void*)f_3018},
{"f_3026:srfi_14_scm",(void*)f_3026},
{"f_3028:srfi_14_scm",(void*)f_3028},
{"f_3022:srfi_14_scm",(void*)f_3022},
{"f_2968:srfi_14_scm",(void*)f_2968},
{"f_3009:srfi_14_scm",(void*)f_3009},
{"f_2978:srfi_14_scm",(void*)f_2978},
{"f_2990:srfi_14_scm",(void*)f_2990},
{"f_2981:srfi_14_scm",(void*)f_2981},
{"f_2941:srfi_14_scm",(void*)f_2941},
{"f_2949:srfi_14_scm",(void*)f_2949},
{"f_2951:srfi_14_scm",(void*)f_2951},
{"f_2945:srfi_14_scm",(void*)f_2945},
{"f_2887:srfi_14_scm",(void*)f_2887},
{"f_2932:srfi_14_scm",(void*)f_2932},
{"f_2897:srfi_14_scm",(void*)f_2897},
{"f_2909:srfi_14_scm",(void*)f_2909},
{"f_2900:srfi_14_scm",(void*)f_2900},
{"f_2856:srfi_14_scm",(void*)f_2856},
{"f_2864:srfi_14_scm",(void*)f_2864},
{"f_2866:srfi_14_scm",(void*)f_2866},
{"f_2860:srfi_14_scm",(void*)f_2860},
{"f_2823:srfi_14_scm",(void*)f_2823},
{"f_2827:srfi_14_scm",(void*)f_2827},
{"f_2832:srfi_14_scm",(void*)f_2832},
{"f_2830:srfi_14_scm",(void*)f_2830},
{"f_2784:srfi_14_scm",(void*)f_2784},
{"f_2788:srfi_14_scm",(void*)f_2788},
{"f_2791:srfi_14_scm",(void*)f_2791},
{"f_2799:srfi_14_scm",(void*)f_2799},
{"f_2794:srfi_14_scm",(void*)f_2794},
{"f_2715:srfi_14_scm",(void*)f_2715},
{"f_2721:srfi_14_scm",(void*)f_2721},
{"f_2771:srfi_14_scm",(void*)f_2771},
{"f_2729:srfi_14_scm",(void*)f_2729},
{"f_2733:srfi_14_scm",(void*)f_2733},
{"f_2738:srfi_14_scm",(void*)f_2738},
{"f_2748:srfi_14_scm",(void*)f_2748},
{"f_2674:srfi_14_scm",(void*)f_2674},
{"f_2684:srfi_14_scm",(void*)f_2684},
{"f_2694:srfi_14_scm",(void*)f_2694},
{"f_2644:srfi_14_scm",(void*)f_2644},
{"f_2651:srfi_14_scm",(void*)f_2651},
{"f_2630:srfi_14_scm",(void*)f_2630},
{"f_2638:srfi_14_scm",(void*)f_2638},
{"f_2642:srfi_14_scm",(void*)f_2642},
{"f_2634:srfi_14_scm",(void*)f_2634},
{"f_2614:srfi_14_scm",(void*)f_2614},
{"f_2618:srfi_14_scm",(void*)f_2618},
{"f_2628:srfi_14_scm",(void*)f_2628},
{"f_2621:srfi_14_scm",(void*)f_2621},
{"f_2546:srfi_14_scm",(void*)f_2546},
{"f_2552:srfi_14_scm",(void*)f_2552},
{"f_2572:srfi_14_scm",(void*)f_2572},
{"f_2536:srfi_14_scm",(void*)f_2536},
{"f_2544:srfi_14_scm",(void*)f_2544},
{"f_2540:srfi_14_scm",(void*)f_2540},
{"f_2506:srfi_14_scm",(void*)f_2506},
{"f_2516:srfi_14_scm",(void*)f_2516},
{"f_2519:srfi_14_scm",(void*)f_2519},
{"f_2444:srfi_14_scm",(void*)f_2444},
{"f_2492:srfi_14_scm",(void*)f_2492},
{"f_2454:srfi_14_scm",(void*)f_2454},
{"f_2489:srfi_14_scm",(void*)f_2489},
{"f_2463:srfi_14_scm",(void*)f_2463},
{"f_2383:srfi_14_scm",(void*)f_2383},
{"f_2387:srfi_14_scm",(void*)f_2387},
{"f_2442:srfi_14_scm",(void*)f_2442},
{"f_2390:srfi_14_scm",(void*)f_2390},
{"f_2395:srfi_14_scm",(void*)f_2395},
{"f_2373:srfi_14_scm",(void*)f_2373},
{"f_2381:srfi_14_scm",(void*)f_2381},
{"f_2377:srfi_14_scm",(void*)f_2377},
{"f_2361:srfi_14_scm",(void*)f_2361},
{"f_2365:srfi_14_scm",(void*)f_2365},
{"f_2368:srfi_14_scm",(void*)f_2368},
{"f_2312:srfi_14_scm",(void*)f_2312},
{"f_2325:srfi_14_scm",(void*)f_2325},
{"f_2260:srfi_14_scm",(void*)f_2260},
{"f_2264:srfi_14_scm",(void*)f_2264},
{"f_2269:srfi_14_scm",(void*)f_2269},
{"f_2250:srfi_14_scm",(void*)f_2250},
{"f_2258:srfi_14_scm",(void*)f_2258},
{"f_2254:srfi_14_scm",(void*)f_2254},
{"f_2238:srfi_14_scm",(void*)f_2238},
{"f_2242:srfi_14_scm",(void*)f_2242},
{"f_2245:srfi_14_scm",(void*)f_2245},
{"f_2226:srfi_14_scm",(void*)f_2226},
{"f_2230:srfi_14_scm",(void*)f_2230},
{"f_2233:srfi_14_scm",(void*)f_2233},
{"f_2183:srfi_14_scm",(void*)f_2183},
{"f_2189:srfi_14_scm",(void*)f_2189},
{"f_2197:srfi_14_scm",(void*)f_2197},
{"f_2173:srfi_14_scm",(void*)f_2173},
{"f_2181:srfi_14_scm",(void*)f_2181},
{"f_2177:srfi_14_scm",(void*)f_2177},
{"f_2161:srfi_14_scm",(void*)f_2161},
{"f_2165:srfi_14_scm",(void*)f_2165},
{"f_2168:srfi_14_scm",(void*)f_2168},
{"f_2119:srfi_14_scm",(void*)f_2119},
{"f_2125:srfi_14_scm",(void*)f_2125},
{"f_2159:srfi_14_scm",(void*)f_2159},
{"f_2155:srfi_14_scm",(void*)f_2155},
{"f_2147:srfi_14_scm",(void*)f_2147},
{"f_2056:srfi_14_scm",(void*)f_2056},
{"f_2060:srfi_14_scm",(void*)f_2060},
{"f_2065:srfi_14_scm",(void*)f_2065},
{"f_2075:srfi_14_scm",(void*)f_2075},
{"f_2002:srfi_14_scm",(void*)f_2002},
{"f_2006:srfi_14_scm",(void*)f_2006},
{"f_2011:srfi_14_scm",(void*)f_2011},
{"f_2040:srfi_14_scm",(void*)f_2040},
{"f_1950:srfi_14_scm",(void*)f_1950},
{"f_1954:srfi_14_scm",(void*)f_1954},
{"f_1959:srfi_14_scm",(void*)f_1959},
{"f_1977:srfi_14_scm",(void*)f_1977},
{"f_1871:srfi_14_scm",(void*)f_1871},
{"f_1875:srfi_14_scm",(void*)f_1875},
{"f_1878:srfi_14_scm",(void*)f_1878},
{"f_1886:srfi_14_scm",(void*)f_1886},
{"f_1944:srfi_14_scm",(void*)f_1944},
{"f_1881:srfi_14_scm",(void*)f_1881},
{"f_1811:srfi_14_scm",(void*)f_1811},
{"f_1815:srfi_14_scm",(void*)f_1815},
{"f_1820:srfi_14_scm",(void*)f_1820},
{"f_1830:srfi_14_scm",(void*)f_1830},
{"f_1759:srfi_14_scm",(void*)f_1759},
{"f_1763:srfi_14_scm",(void*)f_1763},
{"f_1768:srfi_14_scm",(void*)f_1768},
{"f_1750:srfi_14_scm",(void*)f_1750},
{"f_1744:srfi_14_scm",(void*)f_1744},
{"f_1738:srfi_14_scm",(void*)f_1738},
{"f_1732:srfi_14_scm",(void*)f_1732},
{"f_1720:srfi_14_scm",(void*)f_1720},
{"f_1726:srfi_14_scm",(void*)f_1726},
{"f_1708:srfi_14_scm",(void*)f_1708},
{"f_1714:srfi_14_scm",(void*)f_1714},
{"f_1696:srfi_14_scm",(void*)f_1696},
{"f_1702:srfi_14_scm",(void*)f_1702},
{"f_1684:srfi_14_scm",(void*)f_1684},
{"f_1690:srfi_14_scm",(void*)f_1690},
{"f_1643:srfi_14_scm",(void*)f_1643},
{"f_1647:srfi_14_scm",(void*)f_1647},
{"f_1652:srfi_14_scm",(void*)f_1652},
{"f_1671:srfi_14_scm",(void*)f_1671},
{"f_1660:srfi_14_scm",(void*)f_1660},
{"f_1650:srfi_14_scm",(void*)f_1650},
{"f_1595:srfi_14_scm",(void*)f_1595},
{"f_1641:srfi_14_scm",(void*)f_1641},
{"f_1599:srfi_14_scm",(void*)f_1599},
{"f_1607:srfi_14_scm",(void*)f_1607},
{"f_1626:srfi_14_scm",(void*)f_1626},
{"f_1615:srfi_14_scm",(void*)f_1615},
{"f_1602:srfi_14_scm",(void*)f_1602},
{"f_1528:srfi_14_scm",(void*)f_1528},
{"f_1532:srfi_14_scm",(void*)f_1532},
{"f_1537:srfi_14_scm",(void*)f_1537},
{"f_1558:srfi_14_scm",(void*)f_1558},
{"f_1486:srfi_14_scm",(void*)f_1486},
{"f_1490:srfi_14_scm",(void*)f_1490},
{"f_1495:srfi_14_scm",(void*)f_1495},
{"f_1447:srfi_14_scm",(void*)f_1447},
{"f_1480:srfi_14_scm",(void*)f_1480},
{"f_1334:srfi_14_scm",(void*)f_1334},
{"f_1338:srfi_14_scm",(void*)f_1338},
{"f_1341:srfi_14_scm",(void*)f_1341},
{"f_1347:srfi_14_scm",(void*)f_1347},
{"f_1355:srfi_14_scm",(void*)f_1355},
{"f_1405:srfi_14_scm",(void*)f_1405},
{"f_1226:srfi_14_scm",(void*)f_1226},
{"f_1246:srfi_14_scm",(void*)f_1246},
{"f_1248:srfi_14_scm",(void*)f_1248},
{"f_1258:srfi_14_scm",(void*)f_1258},
{"f_1275:srfi_14_scm",(void*)f_1275},
{"f_1171:srfi_14_scm",(void*)f_1171},
{"f_1187:srfi_14_scm",(void*)f_1187},
{"f_1192:srfi_14_scm",(void*)f_1192},
{"f_1216:srfi_14_scm",(void*)f_1216},
{"f_1157:srfi_14_scm",(void*)f_1157},
{"f_1169:srfi_14_scm",(void*)f_1169},
{"f_1165:srfi_14_scm",(void*)f_1165},
{"f_1124:srfi_14_scm",(void*)f_1124},
{"f_1130:srfi_14_scm",(void*)f_1130},
{"f_1137:srfi_14_scm",(void*)f_1137},
{"f_1147:srfi_14_scm",(void*)f_1147},
{"f_1077:srfi_14_scm",(void*)f_1077},
{"f_1102:srfi_14_scm",(void*)f_1102},
{"f_1109:srfi_14_scm",(void*)f_1109},
{"f_1061:srfi_14_scm",(void*)f_1061},
{"f_1055:srfi_14_scm",(void*)f_1055},
{"f_1049:srfi_14_scm",(void*)f_1049},
{"f_1037:srfi_14_scm",(void*)f_1037},
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
