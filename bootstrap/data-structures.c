/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:25
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file data-structures.c -extend ./private-namespace.scm
   unit: data_structures
*/

#include "chicken.h"

#define C_mem_compare(to, from, n)   C_fix(C_memcmp(C_c_string(to), C_c_string(from), C_unfix(n)))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[117];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,14),40,105,100,101,110,116,105,116,121,32,120,50,54,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,17),40,102,95,49,50,57,56,32,46,32,97,114,103,115,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,112,114,111,106,101,99,116,32,110,50,56,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,51,52,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,102,95,49,51,48,54,32,120,51,50,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,19),40,99,111,110,106,111,105,110,32,46,32,112,114,101,100,115,51,49,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,100,115,52,57,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,102,95,49,51,51,57,32,120,52,55,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,19),40,100,105,115,106,111,105,110,32,46,32,112,114,101,100,115,52,54,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,56,53,32,46,32,95,54,51,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,14),40,102,95,49,51,56,55,32,46,32,95,54,52,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,19),40,99,111,110,115,116,97,110,116,108,121,32,46,32,120,115,54,49,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,16),40,102,95,49,51,57,57,32,120,54,55,32,121,54,56,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,13),40,102,108,105,112,32,112,114,111,99,54,54,41,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,102,95,49,52,48,55,32,46,32,97,114,103,115,55,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,109,101,110,116,32,112,54,57,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,49,52,51,51,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,17),40,102,95,49,52,50,56,32,46,32,97,114,103,115,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,18),40,114,101,99,32,102,48,55,52,32,46,32,102,110,115,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,17),40,99,111,109,112,111,115,101,32,46,32,102,110,115,55,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,12),40,102,95,49,52,55,57,32,120,56,52,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,102,110,115,56,49,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,11),40,111,32,46,32,102,110,115,55,57,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,57,50,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,102,95,49,52,57,52,32,108,115,116,57,48,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,17),40,108,105,115,116,45,111,102,63,32,112,114,101,100,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,13),40,110,111,111,112,32,46,32,95,49,48,49,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,15),40,102,95,49,53,52,55,32,46,32,95,49,49,48,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,112,114,111,99,115,49,49,51,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,18),40,102,95,49,53,54,49,32,46,32,97,114,103,115,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,17),40,101,97,99,104,32,46,32,112,114,111,99,115,49,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,11),40,97,110,121,63,32,120,49,49,57,41,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,12),40,110,111,110,101,63,32,120,49,50,49,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,16),40,97,108,119,97,121,115,63,32,46,32,95,49,50,51,41};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,15),40,110,101,118,101,114,63,32,46,32,95,49,50,53,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,49,50,32,46,32,120,115,49,50,57,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,32),40,108,101,102,116,45,115,101,99,116,105,111,110,32,112,114,111,99,49,50,55,32,46,32,97,114,103,115,49,50,56,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,16),40,102,95,49,54,51,48,32,46,32,120,115,49,51,53,41};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,33),40,114,105,103,104,116,45,115,101,99,116,105,111,110,32,112,114,111,99,49,51,50,32,46,32,97,114,103,115,49,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,12),40,97,116,111,109,63,32,120,49,51,56,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,116,97,105,108,63,32,120,49,52,48,32,121,49,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,115,49,54,48,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,25),40,105,110,116,101,114,115,112,101,114,115,101,32,108,115,116,49,53,55,32,120,49,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,49,54,54,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,98,117,116,108,97,115,116,32,108,115,116,49,54,52,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,105,115,116,115,49,55,53,32,114,101,115,116,49,55,54,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,21),40,102,108,97,116,116,101,110,32,46,32,108,105,115,116,115,48,49,55,51,41,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,28),40,100,111,108,111,111,112,50,48,53,32,104,100,50,48,57,32,116,108,50,49,48,32,99,50,49,49,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,115,116,49,57,55,32,105,49,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,18),40,99,104,111,112,32,108,115,116,49,56,55,32,110,49,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,108,115,116,115,50,50,49,41,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,23),40,106,111,105,110,32,108,115,116,115,50,49,55,32,46,32,108,115,116,50,49,56,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,108,115,116,50,52,48,32,108,115,116,50,52,49,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,25),40,99,111,109,112,114,101,115,115,32,98,108,115,116,50,51,54,32,108,115,116,50,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,54,51,32,103,50,55,51,50,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,17),40,97,50,48,54,48,32,120,51,48,56,32,121,51,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,11),40,103,51,48,50,32,120,51,48,52,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,56,54,32,103,50,57,54,51,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,24),40,115,104,117,102,102,108,101,32,108,50,53,56,32,114,97,110,100,111,109,50,53,57,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,51,56,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,20),40,102,95,50,49,53,56,32,120,51,51,53,32,108,115,116,51,51,54,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,44),40,97,108,105,115,116,45,117,112,100,97,116,101,33,32,120,51,49,55,32,121,51,49,56,32,108,115,116,51,49,57,32,46,32,116,109,112,51,49,54,51,50,48,41,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,56,52,41,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,102,95,50,50,52,57,32,120,51,56,49,32,108,115,116,51,56,50,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,27),40,98,111,100,121,51,54,50,32,99,109,112,51,55,49,32,100,101,102,97,117,108,116,51,55,50,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,100,101,102,97,117,108,116,51,54,53,32,37,99,109,112,51,54,48,51,57,51,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,99,109,112,51,54,52,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,35),40,97,108,105,115,116,45,114,101,102,32,120,51,53,52,32,108,115,116,51,53,53,32,46,32,116,109,112,51,53,51,51,53,54,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,52,48,57,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,29),40,114,97,115,115,111,99,32,120,52,48,48,32,108,115,116,52,48,49,32,46,32,116,115,116,52,48,50,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,106,52,51,48,32,107,52,51,49,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,29),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,52,50,51,32,105,52,50,52,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,28),40,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,52,50,49,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,15),40,45,62,115,116,114,105,110,103,32,120,52,51,57,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,52,53,50,32,103,52,54,50,52,54,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,32,46,32,97,114,103,115,52,52,57,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,105,115,116,97,114,116,52,56,50,32,105,101,110,100,52,56,51,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,52),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,52,55,52,32,119,104,101,114,101,52,55,53,32,115,116,97,114,116,52,55,54,32,116,101,115,116,52,55,55,32,108,111,99,52,55,56,41,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,17),40,97,50,54,49,49,32,105,52,57,55,32,108,52,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,52,57,52,32,119,104,101,114,101,52,57,53,32,115,116,97,114,116,52,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,97,50,54,50,48,32,105,53,48,50,32,108,53,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,52,57,57,32,119,104,101,114,101,53,48,48,32,115,116,97,114,116,53,48,49,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,47),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,53,49,51,32,119,104,101,114,101,53,49,52,32,46,32,116,109,112,53,49,50,53,49,53,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,50),40,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,53,50,56,32,119,104,101,114,101,53,50,57,32,46,32,116,109,112,53,50,55,53,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,53,51,55,32,115,50,53,51,56,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,53,52,55,32,115,50,53,52,56,41};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,56),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,53,53,55,32,115,50,53,53,56,32,115,116,97,114,116,49,53,53,57,32,115,116,97,114,116,50,53,54,48,32,110,53,54,49,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,36),40,98,111,100,121,53,56,56,32,115,116,97,114,116,49,53,57,56,32,115,116,97,114,116,50,53,57,57,32,108,101,110,54,48,48,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,40),40,100,101,102,45,108,101,110,53,57,50,32,37,115,116,97,114,116,49,53,56,53,54,48,50,32,37,115,116,97,114,116,50,53,56,54,54,48,51,41};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,115,116,97,114,116,50,53,57,49,32,37,115,116,97,114,116,49,53,56,53,54,48,53,41,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,115,116,97,114,116,49,53,57,48,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,37),40,115,117,98,115,116,114,105,110,103,61,63,32,115,49,53,55,57,32,115,50,53,56,48,32,46,32,116,109,112,53,55,56,53,56,49,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,59),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,54,49,52,32,115,50,54,49,53,32,115,116,97,114,116,49,54,49,54,32,115,116,97,114,116,50,54,49,55,32,110,54,49,56,41,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,36),40,98,111,100,121,54,52,53,32,115,116,97,114,116,49,54,53,53,32,115,116,97,114,116,50,54,53,54,32,108,101,110,54,53,55,41,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,40),40,100,101,102,45,108,101,110,54,52,57,32,37,115,116,97,114,116,49,54,52,50,54,53,57,32,37,115,116,97,114,116,50,54,52,51,54,54,48,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,115,116,97,114,116,50,54,52,56,32,37,115,116,97,114,116,49,54,52,50,54,54,50,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,115,116,97,114,116,49,54,52,55,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,40),40,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,54,51,54,32,115,50,54,51,55,32,46,32,116,109,112,54,51,53,54,51,56,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,27),40,97,100,100,32,102,114,111,109,54,55,57,32,116,111,54,56,48,32,108,97,115,116,54,56,49,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,55,48,57,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,105,54,56,53,32,108,97,115,116,54,56,54,32,102,114,111,109,54,56,55,41,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,42),40,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,54,55,48,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,54,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,50,32,110,50,55,53,52,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,49,32,115,115,55,52,51,32,110,55,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,40),40,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,55,51,52,32,46,32,116,109,112,55,51,51,55,51,53,41};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,13),40,102,95,51,50,51,52,32,99,55,55,57,41,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,15),40,105,110,115,116,114,105,110,103,32,115,55,55,55,41,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,105,56,49,54,32,106,56,49,55,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,48,51,32,99,55,57,54,41,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,41),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,55,55,50,32,102,114,111,109,55,55,51,32,46,32,116,111,55,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,109,97,112,56,52,55,41,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,37),40,99,111,108,108,101,99,116,32,105,56,52,50,32,102,114,111,109,56,52,51,32,116,111,116,97,108,56,52,52,32,102,115,56,52,53,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,34),40,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,56,51,56,32,115,109,97,112,56,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,116,111,116,97,108,56,54,54,32,112,111,115,56,54,55,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,27),40,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,56,54,50,32,108,101,110,56,54,51,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,33),40,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,56,56,52,32,46,32,116,109,112,56,56,51,56,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,48,57,32,105,57,49,51,41};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,97,115,116,57,50,49,32,110,101,120,116,57,50,50,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,25),40,115,111,114,116,101,100,63,32,115,101,113,57,48,48,32,108,101,115,115,63,57,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,26),40,108,111,111,112,32,120,57,52,50,32,97,57,52,51,32,121,57,52,52,32,98,57,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,26),40,109,101,114,103,101,32,97,57,51,50,32,98,57,51,51,32,108,101,115,115,63,57,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,114,57,53,56,32,97,57,53,57,32,98,57,54,48,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,27),40,109,101,114,103,101,33,32,97,57,52,56,32,98,57,52,57,32,108,101,115,115,63,57,53,48,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,11),40,115,116,101,112,32,110,57,55,48,41,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,57,57,52,32,112,57,57,56,32,105,57,57,57,41,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,23),40,115,111,114,116,33,32,115,101,113,57,54,55,32,108,101,115,115,63,57,54,56,41,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,24),40,115,111,114,116,32,115,101,113,49,48,48,53,32,108,101,115,115,63,49,48,48,54,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,116,49,48,50,54,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,20),40,105,110,115,101,114,116,32,120,49,48,50,51,32,121,49,48,50,52,41,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,116,49,48,51,54,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,14),40,108,111,111,107,117,112,32,120,49,48,51,52,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,13),40,103,49,48,53,53,32,118,49,48,53,55,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,52,56,32,103,49,48,53,50,49,48,53,52,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,26),40,118,105,115,105,116,32,117,49,48,52,52,32,97,100,106,45,108,105,115,116,49,48,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,15),40,103,49,48,56,52,32,100,101,102,49,48,56,54,41,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,55,55,32,103,49,48,56,49,49,48,56,51,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,15),40,103,49,48,55,48,32,100,101,102,49,48,55,50,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,49,48,49,53,32,103,49,48,49,57,49,48,54,57,41,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,35),40,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,49,48,48,56,32,112,114,101,100,49,48,48,57,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,112,115,49,49,48,51,32,112,101,49,49,48,52,41,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,32),40,98,105,110,97,114,121,45,115,101,97,114,99,104,32,118,101,99,49,48,57,55,32,112,114,111,99,49,48,57,56,41};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,12),40,109,97,107,101,45,113,117,101,117,101,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,14),40,113,117,101,117,101,63,32,120,49,49,50,51,41,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,20),40,113,117,101,117,101,45,101,109,112,116,121,63,32,113,49,49,50,53,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,102,105,114,115,116,32,113,49,49,50,55,41,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,18),40,113,117,101,117,101,45,108,97,115,116,32,113,49,49,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,28),40,113,117,101,117,101,45,97,100,100,33,32,113,49,49,52,56,32,100,97,116,117,109,49,49,52,57,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,21),40,113,117,101,117,101,45,114,101,109,111,118,101,33,32,113,49,49,54,48,41,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,19),40,113,117,101,117,101,45,62,108,105,115,116,32,113,49,49,55,52,41,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,49,49,55,56,32,108,115,116,49,49,56,50,41,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,22),40,108,105,115,116,45,62,113,117,101,117,101,32,108,115,116,48,49,49,55,55,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,33),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,33,32,113,49,49,57,50,32,105,116,101,109,49,49,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,49,50,48,55,41,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,42),40,113,117,101,117,101,45,112,117,115,104,45,98,97,99,107,45,108,105,115,116,33,32,113,49,49,57,57,32,105,116,101,109,108,105,115,116,49,50,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_data_structures_toplevel)
C_externexport void C_ccall C_data_structures_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4749)
static void C_ccall f_4749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4768)
static C_word C_fcall f_4768(C_word t0);
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4675)
static void C_fcall f_4675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4647)
static void C_ccall f_4647(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4611)
static void C_ccall f_4611(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4433)
static void C_fcall f_4433(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4447)
static void C_fcall f_4447(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4393)
static void C_fcall f_4393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4401)
static void C_fcall f_4401(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_fcall f_4328(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_fcall f_4336(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4257)
static void C_fcall f_4257(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4270)
static void C_fcall f_4270(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4278)
static void C_fcall f_4278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4222)
static void C_fcall f_4222(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4228)
static void C_fcall f_4228(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_fcall f_4175(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4181)
static void C_fcall f_4181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4105)
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4009)
static void C_fcall f_4009(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3877)
static void C_fcall f_3877(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3809)
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3741)
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3693)
static void C_fcall f_3693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3565)
static void C_fcall f_3565(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3440)
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3473)
static void C_fcall f_3473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_fcall f_3512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3283)
static void C_fcall f_3283(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3229)
static void C_fcall f_3229(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3240)
static C_word C_fcall f_3240(C_word t0,C_word t1);
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_fcall f_3129(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3144)
static C_word C_fcall f_3144(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3017)
static void C_fcall f_3017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3044)
static void C_fcall f_3044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2997)
static void C_fcall f_2997(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2913)
static void C_fcall f_2913(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2908)
static void C_fcall f_2908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2903)
static void C_fcall f_2903(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2898)
static void C_fcall f_2898(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2869)
static void C_fcall f_2869(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2796)
static void C_fcall f_2796(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_fcall f_2791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2786)
static void C_fcall f_2786(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2781)
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2752)
static void C_fcall f_2752(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2559)
static void C_fcall f_2559(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2580)
static void C_fcall f_2580(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2524)
static void C_fcall f_2524(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2395)
static void C_fcall f_2395(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_fcall f_2420(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2354)
static void C_fcall f_2354(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2294)
static void C_fcall f_2294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_fcall f_2289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2220)
static void C_fcall f_2220(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2255)
static void C_fcall f_2255(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2224)
static void C_fcall f_2224(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2164)
static void C_fcall f_2164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_fcall f_2126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2075)
static void C_fcall f_2075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_fcall f_2102(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2022)
static void C_fcall f_2022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1938)
static void C_fcall f_1938(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1882)
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1800)
static void C_fcall f_1800(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1821)
static void C_fcall f_1821(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1750)
static void C_fcall f_1750(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1721)
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1685)
static void C_fcall f_1685(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1663)
static C_word C_fcall f_1663(C_word t0,C_word t1);
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1642)
static void C_ccall f_1642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1567)
static void C_fcall f_1567(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1500)
static void C_fcall f_1500(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1465)
static void C_fcall f_1465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1345)
static void C_fcall f_1345(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1312)
static void C_fcall f_1312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1293)
static void C_ccall f_1293(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_4675)
static void C_fcall trf_4675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4675(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4675(t0,t1,t2);}

C_noret_decl(trf_4433)
static void C_fcall trf_4433(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4433(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4433(t0,t1);}

C_noret_decl(trf_4447)
static void C_fcall trf_4447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4447(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4447(t0,t1,t2,t3);}

C_noret_decl(trf_4393)
static void C_fcall trf_4393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4393(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4393(t0,t1,t2);}

C_noret_decl(trf_4401)
static void C_fcall trf_4401(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4401(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4401(t0,t1,t2);}

C_noret_decl(trf_4328)
static void C_fcall trf_4328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4328(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4328(t0,t1,t2);}

C_noret_decl(trf_4336)
static void C_fcall trf_4336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4336(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4336(t0,t1,t2);}

C_noret_decl(trf_4257)
static void C_fcall trf_4257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4257(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4257(t0,t1,t2,t3);}

C_noret_decl(trf_4270)
static void C_fcall trf_4270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4270(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4270(t0,t1,t2);}

C_noret_decl(trf_4278)
static void C_fcall trf_4278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4278(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4278(t0,t1,t2);}

C_noret_decl(trf_4222)
static void C_fcall trf_4222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4222(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4222(t0,t1,t2);}

C_noret_decl(trf_4228)
static void C_fcall trf_4228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4228(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4228(t0,t1,t2);}

C_noret_decl(trf_4175)
static void C_fcall trf_4175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4175(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4175(t0,t1,t2,t3);}

C_noret_decl(trf_4181)
static void C_fcall trf_4181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4181(t0,t1,t2);}

C_noret_decl(trf_4105)
static void C_fcall trf_4105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4105(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4105(t0,t1,t2,t3);}

C_noret_decl(trf_4009)
static void C_fcall trf_4009(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4009(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4009(t0,t1,t2);}

C_noret_decl(trf_3877)
static void C_fcall trf_3877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3877(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3877(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3809)
static void C_fcall trf_3809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3809(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3809(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3741)
static void C_fcall trf_3741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3741(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3741(t0,t1,t2,t3);}

C_noret_decl(trf_3693)
static void C_fcall trf_3693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3693(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3693(t0,t1,t2);}

C_noret_decl(trf_3565)
static void C_fcall trf_3565(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3565(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3565(t0,t1,t2,t3);}

C_noret_decl(trf_3440)
static void C_fcall trf_3440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3440(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3440(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3473)
static void C_fcall trf_3473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3473(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3473(t0,t1,t2);}

C_noret_decl(trf_3512)
static void C_fcall trf_3512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3512(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3512(t0,t1);}

C_noret_decl(trf_3283)
static void C_fcall trf_3283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3283(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3283(t0,t1,t2,t3);}

C_noret_decl(trf_3229)
static void C_fcall trf_3229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3229(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3229(t0,t1);}

C_noret_decl(trf_3129)
static void C_fcall trf_3129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3129(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3129(t0,t1,t2,t3);}

C_noret_decl(trf_3017)
static void C_fcall trf_3017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3017(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3017(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3044)
static void C_fcall trf_3044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3044(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3044(t0,t1,t2);}

C_noret_decl(trf_2997)
static void C_fcall trf_2997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2997(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2997(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2913)
static void C_fcall trf_2913(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2913(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2913(t0,t1);}

C_noret_decl(trf_2908)
static void C_fcall trf_2908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2908(t0,t1,t2);}

C_noret_decl(trf_2903)
static void C_fcall trf_2903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2903(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2903(t0,t1,t2,t3);}

C_noret_decl(trf_2898)
static void C_fcall trf_2898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2898(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2898(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2869)
static void C_fcall trf_2869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2869(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2869(t0,t1);}

C_noret_decl(trf_2796)
static void C_fcall trf_2796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2796(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2796(t0,t1);}

C_noret_decl(trf_2791)
static void C_fcall trf_2791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2791(t0,t1,t2);}

C_noret_decl(trf_2786)
static void C_fcall trf_2786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2786(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2786(t0,t1,t2,t3);}

C_noret_decl(trf_2781)
static void C_fcall trf_2781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2781(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2781(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2752)
static void C_fcall trf_2752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2752(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2752(t0,t1);}

C_noret_decl(trf_2559)
static void C_fcall trf_2559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2559(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2559(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2580)
static void C_fcall trf_2580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2580(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2580(t0,t1,t2,t3);}

C_noret_decl(trf_2524)
static void C_fcall trf_2524(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2524(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2524(t0,t1,t2);}

C_noret_decl(trf_2395)
static void C_fcall trf_2395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2395(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2395(t0,t1,t2,t3);}

C_noret_decl(trf_2420)
static void C_fcall trf_2420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2420(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2420(t0,t1,t2,t3);}

C_noret_decl(trf_2354)
static void C_fcall trf_2354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2354(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2354(t0,t1,t2);}

C_noret_decl(trf_2294)
static void C_fcall trf_2294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2294(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2294(t0,t1);}

C_noret_decl(trf_2289)
static void C_fcall trf_2289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2289(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2289(t0,t1,t2);}

C_noret_decl(trf_2220)
static void C_fcall trf_2220(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2220(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2220(t0,t1,t2,t3);}

C_noret_decl(trf_2255)
static void C_fcall trf_2255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2255(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2255(t0,t1,t2);}

C_noret_decl(trf_2224)
static void C_fcall trf_2224(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2224(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2224(t0,t1);}

C_noret_decl(trf_2164)
static void C_fcall trf_2164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2164(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2164(t0,t1,t2);}

C_noret_decl(trf_2126)
static void C_fcall trf_2126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2126(t0,t1);}

C_noret_decl(trf_2075)
static void C_fcall trf_2075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2075(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2075(t0,t1,t2);}

C_noret_decl(trf_2102)
static void C_fcall trf_2102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2102(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2102(t0,t1,t2);}

C_noret_decl(trf_2022)
static void C_fcall trf_2022(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2022(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2022(t0,t1,t2);}

C_noret_decl(trf_1938)
static void C_fcall trf_1938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1938(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1938(t0,t1,t2,t3);}

C_noret_decl(trf_1882)
static void C_fcall trf_1882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1882(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1882(t0,t1,t2);}

C_noret_decl(trf_1800)
static void C_fcall trf_1800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1800(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1800(t0,t1,t2,t3);}

C_noret_decl(trf_1821)
static void C_fcall trf_1821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1821(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1821(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1750)
static void C_fcall trf_1750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1750(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1750(t0,t1,t2,t3);}

C_noret_decl(trf_1721)
static void C_fcall trf_1721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1721(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1721(t0,t1,t2);}

C_noret_decl(trf_1685)
static void C_fcall trf_1685(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1685(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1685(t0,t1,t2);}

C_noret_decl(trf_1567)
static void C_fcall trf_1567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1567(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1567(t0,t1,t2);}

C_noret_decl(trf_1500)
static void C_fcall trf_1500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1500(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1500(t0,t1,t2);}

C_noret_decl(trf_1465)
static void C_fcall trf_1465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1465(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1465(t0,t1,t2);}

C_noret_decl(trf_1345)
static void C_fcall trf_1345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1345(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1345(t0,t1,t2);}

C_noret_decl(trf_1312)
static void C_fcall trf_1312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1312(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1312(t0,t1,t2);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

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

C_noret_decl(tr2rv)
static void C_fcall tr2rv(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2rv(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n+1);
t2=C_restore_rest_vector(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr4rv)
static void C_fcall tr4rv(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4rv(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n+1);
t4=C_restore_rest_vector(a,n);
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
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_data_structures_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("data_structures_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1050)){
C_save(t1);
C_rereclaim2(1050*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,117);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],8,"identity");
lf[3]=C_h_intern(&lf[3],7,"project");
lf[4]=C_h_intern(&lf[4],7,"conjoin");
lf[5]=C_h_intern(&lf[5],7,"disjoin");
lf[6]=C_h_intern(&lf[6],10,"constantly");
lf[7]=C_h_intern(&lf[7],4,"flip");
lf[8]=C_h_intern(&lf[8],10,"complement");
lf[9]=C_h_intern(&lf[9],7,"compose");
lf[10]=C_h_intern(&lf[10],6,"values");
lf[11]=C_h_intern(&lf[11],1,"o");
lf[12]=C_h_intern(&lf[12],8,"list-of\077");
lf[13]=C_h_intern(&lf[13],7,"list-of");
lf[14]=C_h_intern(&lf[14],4,"noop");
lf[15]=C_h_intern(&lf[15],19,"\003sysundefined-value");
lf[16]=C_h_intern(&lf[16],4,"each");
lf[17]=C_h_intern(&lf[17],4,"any\077");
lf[18]=C_h_intern(&lf[18],5,"none\077");
lf[19]=C_h_intern(&lf[19],7,"always\077");
lf[20]=C_h_intern(&lf[20],6,"never\077");
lf[21]=C_h_intern(&lf[21],12,"left-section");
lf[22]=C_h_intern(&lf[22],10,"\003sysappend");
lf[23]=C_h_intern(&lf[23],17,"\003syscheck-closure");
lf[24]=C_h_intern(&lf[24],7,"reverse");
lf[25]=C_h_intern(&lf[25],13,"right-section");
lf[26]=C_h_intern(&lf[26],5,"atom\077");
lf[27]=C_h_intern(&lf[27],5,"tail\077");
lf[28]=C_h_intern(&lf[28],11,"intersperse");
lf[29]=C_h_intern(&lf[29],7,"butlast");
lf[30]=C_h_intern(&lf[30],7,"flatten");
lf[31]=C_h_intern(&lf[31],4,"chop");
lf[32]=C_h_intern(&lf[32],9,"\003syserror");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid numeric argument");
lf[34]=C_h_intern(&lf[34],4,"join");
lf[35]=C_h_intern(&lf[35],27,"\003syserror-not-a-proper-list");
lf[36]=C_h_intern(&lf[36],8,"compress");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000%bad argument type - not a proper list");
lf[38]=C_h_intern(&lf[38],15,"\003syssignal-hook");
lf[39]=C_h_intern(&lf[39],11,"\000type-error");
lf[40]=C_h_intern(&lf[40],7,"shuffle");
lf[41]=C_h_intern(&lf[41],3,"cdr");
lf[42]=C_h_intern(&lf[42],5,"sort!");
lf[43]=C_h_intern(&lf[43],13,"alist-update!");
lf[44]=C_h_intern(&lf[44],3,"eq\077");
lf[45]=C_h_intern(&lf[45],4,"assq");
lf[46]=C_h_intern(&lf[46],4,"eqv\077");
lf[47]=C_h_intern(&lf[47],4,"assv");
lf[48]=C_h_intern(&lf[48],6,"equal\077");
lf[49]=C_h_intern(&lf[49],5,"assoc");
lf[50]=C_h_intern(&lf[50],9,"alist-ref");
lf[51]=C_h_intern(&lf[51],6,"rassoc");
lf[52]=C_h_intern(&lf[52],21,"reverse-string-append");
lf[53]=C_h_intern(&lf[53],11,"make-string");
lf[54]=C_h_intern(&lf[54],18,"open-output-string");
lf[55]=C_h_intern(&lf[55],7,"display");
lf[56]=C_h_intern(&lf[56],6,"string");
lf[57]=C_h_intern(&lf[57],17,"get-output-string");
lf[58]=C_h_intern(&lf[58],8,"->string");
lf[59]=C_h_intern(&lf[59],14,"symbol->string");
lf[60]=C_h_intern(&lf[60],18,"\003sysnumber->string");
lf[61]=C_h_intern(&lf[61],13,"string-append");
lf[62]=C_h_intern(&lf[62],4,"conc");
lf[63]=C_h_intern(&lf[63],19,"\003syssubstring-index");
lf[64]=C_h_intern(&lf[64],15,"substring-index");
lf[65]=C_h_intern(&lf[65],22,"\003syssubstring-index-ci");
lf[66]=C_h_intern(&lf[66],18,"substring-index-ci");
lf[67]=C_h_intern(&lf[67],15,"string-compare3");
lf[68]=C_h_intern(&lf[68],18,"string-compare3-ci");
lf[69]=C_h_intern(&lf[69],15,"\003syssubstring=\077");
lf[70]=C_h_intern(&lf[70],11,"substring=\077");
lf[71]=C_h_intern(&lf[71],18,"\003syssubstring-ci=\077");
lf[72]=C_h_intern(&lf[72],14,"substring-ci=\077");
lf[73]=C_h_intern(&lf[73],12,"string-split");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\003\011\012 ");
lf[75]=C_h_intern(&lf[75],13,"\003syssubstring");
lf[76]=C_h_intern(&lf[76],18,"string-intersperse");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[78]=C_h_intern(&lf[78],19,"\003sysallocate-vector");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[80]=C_h_intern(&lf[80],12,"list->string");
lf[81]=C_h_intern(&lf[81],16,"string-translate");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid translation destination");
lf[83]=C_h_intern(&lf[83],17,"string-translate*");
lf[84]=C_h_intern(&lf[84],21,"\003sysfragments->string");
lf[85]=C_h_intern(&lf[85],11,"string-chop");
lf[86]=C_h_intern(&lf[86],12,"string-chomp");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[88]=C_h_intern(&lf[88],7,"sorted\077");
lf[89]=C_h_intern(&lf[89],5,"merge");
lf[90]=C_h_intern(&lf[90],6,"merge!");
lf[91]=C_h_intern(&lf[91],12,"vector->list");
lf[92]=C_h_intern(&lf[92],4,"sort");
lf[93]=C_h_intern(&lf[93],12,"list->vector");
lf[94]=C_h_intern(&lf[94],6,"append");
lf[95]=C_h_intern(&lf[95],16,"topological-sort");
lf[96]=C_h_intern(&lf[96],4,"caar");
lf[97]=C_h_intern(&lf[97],4,"cdar");
lf[98]=C_h_intern(&lf[98],7,"colored");
lf[99]=C_h_intern(&lf[99],13,"binary-search");
lf[100]=C_h_intern(&lf[100],10,"make-queue");
lf[101]=C_h_intern(&lf[101],5,"queue");
lf[102]=C_h_intern(&lf[102],6,"queue\077");
lf[103]=C_h_intern(&lf[103],12,"queue-empty\077");
lf[104]=C_h_intern(&lf[104],11,"queue-first");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[106]=C_h_intern(&lf[106],10,"queue-last");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[108]=C_h_intern(&lf[108],10,"queue-add!");
lf[109]=C_h_intern(&lf[109],13,"queue-remove!");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\016queue is empty");
lf[111]=C_h_intern(&lf[111],11,"queue->list");
lf[112]=C_h_intern(&lf[112],11,"list->queue");
lf[113]=C_h_intern(&lf[113],16,"queue-push-back!");
lf[114]=C_h_intern(&lf[114],21,"queue-push-back-list!");
lf[115]=C_h_intern(&lf[115],17,"register-feature!");
lf[116]=C_h_intern(&lf[116],15,"data-structures");
C_register_lf2(lf,117,create_ptable());
t2=C_mutate(&lf[0] /* (set! c326 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1291,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm: 72   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[115]+1)))(3,*((C_word*)lf[115]+1),t3,lf[116]);}

/* k1289 */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1){
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
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word ab[216],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1291,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! identity ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1293,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! project ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1296,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! conjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1304,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! disjoin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[6]+1 /* (set! constantly ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1374,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[7]+1 /* (set! flip ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1397,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[8]+1 /* (set! complement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1405,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[9]+1 /* (set! compose ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1417,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[11]+1 /* (set! o ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1453,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[12]+1 /* (set! list-of? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1492,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[13]+1 /* (set! list-of ...) */,*((C_word*)lf[12]+1));
t13=C_mutate((C_word*)lf[14]+1 /* (set! noop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1533,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[16]+1 /* (set! each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1539,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[17]+1 /* (set! any? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1595,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[18]+1 /* (set! none? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1598,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[19]+1 /* (set! always? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[20]+1 /* (set! never? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1604,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[21]+1 /* (set! left-section ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1607,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t20=*((C_word*)lf[24]+1);
t21=C_mutate((C_word*)lf[25]+1 /* (set! right-section ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1622,a[2]=t20,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t22=C_mutate((C_word*)lf[26]+1 /* (set! atom? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1648,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[27]+1 /* (set! tail? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1651,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[28]+1 /* (set! intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1679,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[29]+1 /* (set! butlast ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1712,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[30]+1 /* (set! flatten ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1744,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t27=*((C_word*)lf[24]+1);
t28=C_mutate((C_word*)lf[31]+1 /* (set! chop ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1785,a[2]=t27,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t29=C_mutate((C_word*)lf[34]+1 /* (set! join ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[36]+1 /* (set! compress ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1929,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[40]+1 /* (set! shuffle ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2009,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[43]+1 /* (set! alist-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2119,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[50]+1 /* (set! alist-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2218,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[51]+1 /* (set! rassoc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[52]+1 /* (set! reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2392,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t36=*((C_word*)lf[54]+1);
t37=*((C_word*)lf[55]+1);
t38=*((C_word*)lf[56]+1);
t39=*((C_word*)lf[57]+1);
t40=C_mutate((C_word*)lf[58]+1 /* (set! ->string ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2469,a[2]=t36,a[3]=t37,a[4]=t39,a[5]=t38,a[6]=((C_word)li74),tmp=(C_word)a,a+=7,tmp));
t41=*((C_word*)lf[61]+1);
t42=C_mutate((C_word*)lf[62]+1 /* (set! conc ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2514,a[2]=t41,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2559,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
t44=C_mutate((C_word*)lf[63]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2606,a[2]=t43,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp));
t45=C_mutate((C_word*)lf[65]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2615,a[2]=t43,a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[64]+1 /* (set! substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2624,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[66]+1 /* (set! substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2652,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[67]+1 /* (set! string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2680,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[68]+1 /* (set! string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2711,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[69]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2742,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[70]+1 /* (set! substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2779,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[71]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[72]+1 /* (set! substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2896,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[73]+1 /* (set! string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2976,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[76]+1 /* (set! string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t56=*((C_word*)lf[53]+1);
t57=*((C_word*)lf[80]+1);
t58=C_mutate((C_word*)lf[81]+1 /* (set! string-translate ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3226,a[2]=t57,a[3]=t56,a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp));
t59=C_mutate((C_word*)lf[83]+1 /* (set! string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3428,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[85]+1 /* (set! string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[86]+1 /* (set! string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3614,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[88]+1 /* (set! sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[89]+1 /* (set! merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3775,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[90]+1 /* (set! merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3874,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[42]+1 /* (set! sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4006,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[92]+1 /* (set! sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4139,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[95]+1 /* (set! topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t68=*((C_word*)lf[93]+1);
t69=C_mutate((C_word*)lf[99]+1 /* (set! binary-search ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4429,a[2]=t68,a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp));
t70=C_mutate((C_word*)lf[100]+1 /* (set! make-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4512,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[102]+1 /* (set! queue? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4518,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[103]+1 /* (set! queue-empty? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4524,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[104]+1 /* (set! queue-first ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4537,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[106]+1 /* (set! queue-last ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4558,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[108]+1 /* (set! queue-add! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4579,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[109]+1 /* (set! queue-remove! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4611,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[111]+1 /* (set! queue->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4647,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate((C_word*)lf[112]+1 /* (set! list->queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4656,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[113]+1 /* (set! queue-push-back! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4710,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[114]+1 /* (set! queue-push-back-list! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4739,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t81=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t81+1)))(2,t81,C_SCHEME_UNDEFINED);}

/* queue-push-back-list! in k1289 */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4739,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[101],lf[114]);
t5=(C_word)C_i_check_list_2(t3,lf[114]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4749,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
/* data-structures.scm: 954  append */
t8=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t3,t7);}

/* k4747 in queue-push-back-list! in k1289 */
static void C_ccall f_4749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4749,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST));}
else{
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
t5=f_4768(t3);
t6=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(2),t5));}}

/* doloop1207 in k4747 in queue-push-back-list! in k1289 */
static C_word C_fcall f_4768(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
t2=(C_word)C_slot(t1,C_fix(1));
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
return(t4);}
else{
t4=(C_word)C_slot(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* queue-push-back! in k1289 */
static void C_ccall f_4710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4710,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[101],lf[113]);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
t7=(C_word)C_i_setslot(t2,C_fix(1),t6);
t8=(C_word)C_slot(t2,C_fix(2));
t9=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t8);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_i_setslot(t2,C_fix(2),t6));}
else{
t10=C_SCHEME_UNDEFINED;
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}

/* list->queue in k1289 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4656,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,lf[112]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4667,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,3,lf[101],t2,C_SCHEME_END_OF_LIST));}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4675,a[2]=t2,a[3]=t7,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4675(t9,t4,t2);}}

/* doloop1178 in list->queue in k1289 */
static void C_fcall f_4675(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4675,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4685,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_not((C_word)C_blockp(t2));
t7=(C_truep(t6)?t6:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t7)){
/* data-structures.scm: 930  ##sys#error-not-a-proper-list */
t8=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)t0)[2],lf[112]);}
else{
t8=(C_word)C_slot(t2,C_fix(1));
t11=t1;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}}

/* k4683 in doloop1178 in list->queue in k1289 */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4675(t3,((C_word*)t0)[2],t2);}

/* k4665 in list->queue in k1289 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[101],((C_word*)t0)[2],t1));}

/* queue->list in k1289 */
static void C_ccall f_4647(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4647,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[101],lf[111]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* queue-remove! in k1289 */
static void C_ccall f_4611(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4611,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[101],lf[109]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4621,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm: 908  ##sys#error */
t7=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[109],lf[110],t2);}
else{
t7=t5;
f_4621(2,t7,C_SCHEME_UNDEFINED);}}

/* k4619 in queue-remove! in k1289 */
static void C_ccall f_4621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t4)){
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_slot(((C_word*)t0)[4],C_fix(0)));}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_slot(((C_word*)t0)[4],C_fix(0)));}}

/* queue-add! in k1289 */
static void C_ccall f_4579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4579,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[101],lf[108]);
t5=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t6);
if(C_truep(t7)){
t8=(C_word)C_i_setslot(t2,C_fix(1),t5);
t9=(C_word)C_i_setslot(t2,C_fix(2),t5);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t8=(C_word)C_slot(t2,C_fix(2));
t9=(C_word)C_i_setslot(t8,C_fix(1),t5);
t10=(C_word)C_i_setslot(t2,C_fix(2),t5);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}

/* queue-last in k1289 */
static void C_ccall f_4558(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4558,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[101],lf[106]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4568,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm: 889  ##sys#error */
t7=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[106],lf[107],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_slot(t4,C_fix(0)));}}

/* k4566 in queue-last in k1289 */
static void C_ccall f_4568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* queue-first in k1289 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4537,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[101],lf[104]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4547,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* data-structures.scm: 878  ##sys#error */
t7=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[104],lf[105],t2);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_slot(t4,C_fix(0)));}}

/* k4545 in queue-first in k1289 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* queue-empty? in k1289 */
static void C_ccall f_4524(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4524,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[101],lf[103]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4));}

/* queue? in k1289 */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4518,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[101]));}

/* make-queue in k1289 */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4512,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[101],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* binary-search in k1289 */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4429,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4433,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4507,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 835  list->vector */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_4433(t6,(C_word)C_i_check_vector_2(((C_word*)t4)[1],lf[99]));}}

/* k4505 in binary-search in k1289 */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_4433(t3,t2);}

/* k4431 in binary-search in k1289 */
static void C_fcall f_4433(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4433,NULL,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)((C_word*)t0)[4])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4447(t6,((C_word*)t0)[2],C_fix(0),t2);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop in k4431 in binary-search in k1289 */
static void C_fcall f_4447(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4447,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(C_word)C_fixnum_divide(t4,C_fix(2));
t6=(C_word)C_fixnum_plus(t2,t5);
t7=(C_word)C_slot(((C_word*)((C_word*)t0)[4])[1],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4457,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 843  proc */
t9=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t7);}

/* k4455 in loop in k4431 in binary-search in k1289 */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm: 845  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4447(t4,((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[5]);}}
else{
t3=(C_word)C_eqp(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* data-structures.scm: 846  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4447(t4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}}}

/* topological-sort in k1289 */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[41],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4166,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4175,a[2]=t3,a[3]=t5,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4222,a[2]=t5,a[3]=t3,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp));
t16=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4257,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t7,a[6]=((C_word)li135),tmp=(C_word)a,a+=7,tmp));
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4316,a[2]=t11,a[3]=t13,a[4]=t2,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t18=(C_word)C_i_cdr(t2);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4393,a[2]=t20,a[3]=t9,a[4]=((C_word)li139),tmp=(C_word)a,a+=5,tmp));
t22=((C_word*)t20)[1];
f_4393(t22,t17,t18);}}

/* loop1015 in topological-sort in k1289 */
static void C_fcall f_4393(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4393,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4401,a[2]=((C_word*)t0)[3],a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4416,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g10701071 */
t6=t3;
f_4401(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4414 in loop1015 in topological-sort in k1289 */
static void C_ccall f_4416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4393(t3,((C_word*)t0)[2],t2);}

/* g1070 in loop1015 in topological-sort in k1289 */
static void C_fcall f_4401(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4401,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
/* data-structures.scm: 817  insert */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4175(t5,t1,t3,t4);}

/* k4314 in topological-sort in k1289 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4383,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 820  caar */
t4=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k4381 in k4314 in topological-sort in k1289 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4387,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 820  cdar */
t3=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4385 in k4381 in k4314 in topological-sort in k1289 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 820  visit */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4257(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4317 in k4314 in topological-sort in k1289 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4328,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li137),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4328(t7,t2,t3);}

/* loop1077 in k4317 in k4314 in topological-sort in k1289 */
static void C_fcall f_4328(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4328,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li136),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4368,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g10841085 */
t6=t3;
f_4336(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4366 in loop1077 in k4317 in k4314 in topological-sort in k1289 */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4328(t3,((C_word*)t0)[2],t2);}

/* g1084 in loop1077 in k4317 in k4314 in topological-sort in k1289 */
static void C_fcall f_4336(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4336,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4340,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* data-structures.scm: 822  lookup */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4222(t5,t3,t4);}

/* k4338 in g1084 in loop1077 in k4317 in k4314 in topological-sort in k1289 */
static void C_ccall f_4340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_eqp(t1,lf[98]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 824  visit */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4257(t5,((C_word*)t0)[4],t3,t4);}}

/* k4320 in k4317 in k4314 in topological-sort in k1289 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* visit in topological-sort in k1289 */
static void C_fcall f_4257(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4257,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4261,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm: 805  insert */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4175(t5,t4,t2,lf[98]);}

/* k4259 in visit in topological-sort in k1289 */
static void C_ccall f_4261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4270,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li134),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4270(t6,t2,((C_word*)t0)[2]);}

/* loop1048 in k4259 in visit in topological-sort in k1289 */
static void C_fcall f_4270(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4270,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4278,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4302,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g10551056 */
t6=t3;
f_4278(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4300 in loop1048 in k4259 in visit in topological-sort in k1289 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4270(t3,((C_word*)t0)[2],t2);}

/* g1055 in loop1048 in k4259 in visit in topological-sort in k1289 */
static void C_fcall f_4278(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4278,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4282,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 808  lookup */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4222(t4,t3,t2);}

/* k4280 in g1055 in loop1048 in k4259 in visit in topological-sort in k1289 */
static void C_ccall f_4282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_eqp(t1,lf[98]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(t1)){
t3=t1;
/* data-structures.scm: 810  visit */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4257(t4,((C_word*)t0)[4],((C_word*)t0)[2],t3);}
else{
/* data-structures.scm: 810  visit */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4257(t3,((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}}

/* k4262 in k4259 in visit in topological-sort in k1289 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* lookup in topological-sort in k1289 */
static void C_fcall f_4222(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4222,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4228,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li131),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4228(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in lookup in topological-sort in k1289 */
static void C_fcall f_4228(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4228,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4241,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 800  caar */
t5=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k4253 in loop in lookup in topological-sort in k1289 */
static void C_ccall f_4255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 800  pred */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4239 in loop in lookup in topological-sort in k1289 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* data-structures.scm: 800  cdar */
t2=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 801  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4228(t3,((C_word*)t0)[4],t2);}}

/* insert in topological-sort in k1289 */
static void C_fcall f_4175(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4175,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4181,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word)li129),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_4181(t7,t1,((C_word*)((C_word*)t0)[3])[1]);}

/* loop in insert in topological-sort in k1289 */
static void C_fcall f_4181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4181,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4220,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 794  caar */
t5=*((C_word*)lf[96]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k4218 in loop in insert in topological-sort in k1289 */
static void C_ccall f_4220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 794  pred */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4200 in loop in insert in topological-sort in k1289 */
static void C_ccall f_4202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_set_cdr(t2,((C_word*)t0)[3]));}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 795  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4181(t3,((C_word*)t0)[4],t2);}}

/* sort in k1289 */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4139,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4153,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4157,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 777  vector->list */
t6=*((C_word*)lf[91]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4164,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 778  append */
t5=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}}

/* k4162 in sort in k1289 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 778  sort! */
t2=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4155 in sort in k1289 */
static void C_ccall f_4157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 777  sort! */
t2=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4151 in sort in k1289 */
static void C_ccall f_4153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 777  list->vector */
t2=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* sort! in k1289 */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4006,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4009,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=((C_word)li125),tmp=(C_word)a,a+=6,tmp));
if(C_truep((C_word)C_i_vectorp(((C_word*)t4)[1]))){
t8=(C_word)C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4096,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=t9,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 760  vector->list */
t11=*((C_word*)lf[91]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t4)[1]);}
else{
t8=(C_word)C_i_length(((C_word*)t4)[1]);
/* data-structures.scm: 766  step */
t9=((C_word*)t6)[1];
f_4009(t9,t1,t8);}}

/* k4094 in sort! in k1289 */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4096,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4103,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 761  step */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4009(t4,t3,((C_word*)t0)[2]);}

/* k4101 in k4094 in sort! in k1289 */
static void C_ccall f_4103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4103,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4105,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4105(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* doloop994 in k4101 in k4094 in sort! in k1289 */
static void C_fcall f_4105(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4105,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_vector_set(((C_word*)t0)[3],t3,t4);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* step in sort! in k1289 */
static void C_fcall f_4009(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4009,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4019,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_quotient(4,0,t3,t2,C_fix(2));}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(2)))){
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(C_word)C_i_cadr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(C_word)C_i_cddr(((C_word*)((C_word*)t0)[2])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4060,a[2]=t1,a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 745  less? */
t9=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,t4,t3);}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(C_word)C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}}}

/* k4058 in step in sort! in k1289 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_set_car(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(C_word)C_i_set_car(t3,((C_word*)t0)[3]);
t5=(C_word)C_i_cdr(((C_word*)t0)[5]);
t6=(C_word)C_i_set_cdr(t5,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}}

/* k4017 in step in sort! in k1289 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 736  step */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4009(t3,t2,t1);}

/* k4020 in k4017 in step in sort! in k1289 */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4022,2,t0,t1);}
t2=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 738  step */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4009(t4,t3,t2);}

/* k4026 in k4020 in k4017 in step in sort! in k1289 */
static void C_ccall f_4028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 739  merge! */
t2=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* merge! in k1289 */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3874,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3877,a[2]=t4,a[3]=t6,a[4]=((C_word)li123),tmp=(C_word)a,a+=5,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3956,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_car(t3);
t10=(C_word)C_i_car(t2);
/* data-structures.scm: 713  less? */
t11=t4;
((C_proc4)C_retrieve_proc(t11))(4,t11,t8,t9,t10);}}}

/* k3954 in merge! in k1289 */
static void C_ccall f_3956(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3956,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3959,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_set_cdr(((C_word*)t0)[5],((C_word*)t0)[3]);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 716  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3877(t5,t2,((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[5]);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 721  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3877(t5,t2,((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* k3977 in k3954 in merge! in k1289 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3957 in k3954 in merge! in k1289 */
static void C_ccall f_3959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* loop in merge! in k1289 */
static void C_fcall f_3877(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3877,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3884,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(t4);
t7=(C_word)C_i_car(t3);
/* data-structures.scm: 698  less? */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t5,t6,t7);}

/* k3882 in loop in merge! in k1289 */
static void C_ccall f_3884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[5],((C_word*)t0)[3]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 703  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3877(t5,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=(C_word)C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[5]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 709  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3877(t5,((C_word*)t0)[4],((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* merge in k1289 */
static void C_ccall f_3775(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3775,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3809,a[2]=t4,a[3]=t10,a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3809(t12,t1,t5,t6,t7,t8);}}}

/* loop in merge in k1289 */
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3809,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm: 681  less? */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t4,t2);}

/* k3814 in loop in merge in k1289 */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[7]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* data-structures.scm: 684  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3809(t5,t2,((C_word*)t0)[6],((C_word*)t0)[5],t3,t4);}}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[7]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3864,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* data-structures.scm: 688  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3809(t5,t2,t3,t4,((C_word*)t0)[3],((C_word*)t0)[7]);}}}

/* k3862 in k3814 in loop in merge in k1289 */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3864,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3834 in k3814 in loop in merge in k1289 */
static void C_ccall f_3836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3836,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* sorted? in k1289 */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3666,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(C_word)C_i_vector_length(t2);
if(C_truep((C_word)C_i_less_or_equalp(t4,C_fix(1)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3693,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=((C_word)li118),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3693(t8,t1,C_fix(1));}}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3741,a[2]=t3,a[3]=t7,a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3741(t9,t1,t4,t5);}}}

/* loop in sorted? in k1289 */
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3741,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t3);
/* data-structures.scm: 664  less? */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,t2);}}

/* k3767 in loop in sorted? in k1289 */
static void C_ccall f_3769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* data-structures.scm: 665  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3741(t4,((C_word*)t0)[4],t2,t3);}}

/* doloop909 in sorted? in k1289 */
static void C_fcall f_3693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3693,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nequalp(t2,((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_3703(2,t5,t3);}
else{
t5=(C_word)C_i_vector_ref(((C_word*)t0)[3],t2);
t6=(C_word)C_a_i_minus(&a,2,t2,C_fix(1));
t7=(C_word)C_i_vector_ref(((C_word*)t0)[3],t6);
/* data-structures.scm: 658  less? */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t4,t5,t7);}}

/* k3701 in doloop909 in sorted? in k1289 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3703,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_nequalp(((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[2])[1];
f_3693(t3,((C_word*)t0)[5],t2);}}

/* string-chomp in k1289 */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3614r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3614r(t0,t1,t2,t3);}}

static void C_ccall f_3614r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3618,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3618(2,t5,lf[87]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3618(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3616 in string-chomp in k1289 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[86]);
t3=(C_word)C_i_check_string_2(t1,lf[86]);
t4=(C_word)C_block_size(((C_word*)t0)[3]);
t5=(C_word)C_block_size(t1);
t6=(C_word)C_fixnum_difference(t4,t5);
t7=(C_word)C_fixnum_greater_or_equal_p(t4,t5);
t8=(C_truep(t7)?(C_word)C_substring_compare(((C_word*)t0)[3],t1,t6,C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t8)){
/* data-structures.scm: 625  ##sys#substring */
t9=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t6);}
else{
t9=((C_word*)t0)[3];
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* string-chop in k1289 */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3550,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[85]);
t5=(C_word)C_i_check_exact_2(t3,lf[85]);
t6=(C_word)C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3565,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3565(t10,t1,t6,C_fix(0));}

/* loop in string-chop in k1289 */
static void C_fcall f_3565(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3565,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_plus(t3,t2);
/* data-structures.scm: 611  ##sys#substring */
t6=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_fixnum_plus(t3,((C_word*)t0)[4]);
/* data-structures.scm: 612  ##sys#substring */
t6=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}}}

/* k3594 in loop in string-chop in k1289 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3600,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm: 612  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3565(t5,t2,t3,t4);}

/* k3598 in k3594 in loop in string-chop in k1289 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3600,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3583 in loop in string-chop in k1289 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3585,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,t1));}

/* string-translate* in k1289 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3428,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[83]);
t5=(C_word)C_i_check_list_2(t3,lf[83]);
t6=(C_word)C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3440,a[2]=t3,a[3]=t8,a[4]=t2,a[5]=t6,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm: 600  collect */
t10=((C_word*)t8)[1];
f_3440(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in string-translate* in k1289 */
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3440,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3454,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3468,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 582  ##sys#substring */
t9=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,((C_word*)t0)[4],t3,t2);}
else{
t8=((C_word*)t6)[1];
/* data-structures.scm: 580  reverse */
t9=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3473,a[2]=t8,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=t2,a[9]=((C_word)li112),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_3473(t10,t1,((C_word*)t0)[2]);}}

/* loop in collect in string-translate* in k1289 */
static void C_fcall f_3473(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3473,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 586  collect */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3440(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_string_length(t4);
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_substring_compare(((C_word*)t0)[3],t4,((C_word*)t0)[8],C_fix(0),t5))){
t7=(C_word)C_fixnum_plus(((C_word*)t0)[8],t5);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3512,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[8],((C_word*)t0)[5]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3538,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 594  ##sys#substring */
t10=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[8]);}
else{
t9=t8;
f_3512(t9,C_SCHEME_UNDEFINED);}}
else{
t7=(C_word)C_i_cdr(t2);
/* data-structures.scm: 599  loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k3536 in loop in collect in string-translate* in k1289 */
static void C_ccall f_3538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3538,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_3512(t4,t3);}

/* k3510 in loop in collect in string-translate* in k1289 */
static void C_fcall f_3512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3512,NULL,2,t0,t1);}
t2=(C_word)C_i_string_length(((C_word*)t0)[7]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);
/* data-structures.scm: 595  collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3440(t5,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[2],t3,t4);}

/* k3466 in collect in string-translate* in k1289 */
static void C_ccall f_3468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3468,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
/* data-structures.scm: 580  reverse */
t3=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k3452 in collect in string-translate* in k1289 */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 578  ##sys#fragments->string */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* string-translate in k1289 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr4r,(void*)f_3226r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3226r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3226r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3263,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_charp(t3))){
t7=t6;
f_3263(2,t7,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3403,a[2]=t3,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 536  list->string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}
else{
t7=(C_word)C_i_check_string_2(t3,lf[81]);
/* data-structures.scm: 539  instring */
f_3229(t6,t3);}}}

/* k3418 in string-translate in k1289 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 536  instring */
f_3229(((C_word*)t0)[2],t1);}

/* f_3403 in string-translate in k1289 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3403,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(t2,((C_word*)t0)[2]));}

/* k3261 in string-translate in k1289 */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep((C_word)C_charp(t3))){
t4=t2;
f_3266(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
/* data-structures.scm: 544  list->string */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t4=(C_word)C_i_check_string_2(t3,lf[81]);
t5=t2;
f_3266(2,t5,t3);}}}
else{
t3=t2;
f_3266(2,t3,C_SCHEME_FALSE);}}

/* k3264 in k3261 in string-translate in k1289 */
static void C_ccall f_3266(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3266,2,t0,t1);}
t2=(C_word)C_i_stringp(t1);
t3=(C_truep(t2)?(C_word)C_block_size(t1):C_SCHEME_FALSE);
t4=(C_word)C_i_check_string_2(((C_word*)t0)[5],lf[81]);
t5=(C_word)C_block_size(((C_word*)t0)[5]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm: 551  make-string */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}

/* k3276 in k3264 in k3261 in string-translate in k1289 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3278,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3283,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word)li109),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3283(t5,((C_word*)t0)[2],C_fix(0),C_fix(0));}

/* loop in k3276 in k3264 in k3261 in string-translate in k1289 */
static void C_fcall f_3283(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3283,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]))){
if(C_truep((C_word)C_fixnum_lessp(t3,t2))){
/* data-structures.scm: 555  ##sys#substring */
t4=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[7],C_fix(0),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[7]);}}
else{
t4=(C_word)C_subchar(((C_word*)t0)[6],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3302,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm: 558  from */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}}

/* k3300 in loop in k3276 in k3264 in k3261 in string-translate in k1289 */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=((C_word*)t0)[9];
if(C_truep(t3)){
if(C_truep((C_word)C_charp(((C_word*)t0)[9]))){
t4=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[9]);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 565  loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3283(t7,((C_word*)t0)[4],t5,t6);}
else{
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
/* data-structures.scm: 567  ##sys#error */
t4=*((C_word*)lf[32]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],lf[81],lf[82],((C_word*)t0)[6],((C_word*)t0)[9]);}
else{
t4=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],(C_word)C_subchar(((C_word*)t0)[9],t1));
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 570  loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_3283(t7,((C_word*)t0)[4],t5,t6);}}}
else{
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
/* data-structures.scm: 562  loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3283(t5,((C_word*)t0)[4],t4,((C_word*)t0)[7]);}}
else{
t3=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t5=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* data-structures.scm: 561  loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3283(t6,((C_word*)t0)[4],t4,t5);}}

/* instring in string-translate in k1289 */
static void C_fcall f_3229(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3229,NULL,2,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3234,a[2]=t2,a[3]=t3,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));}

/* f_3234 in instring in string-translate in k1289 */
static void C_ccall f_3234(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3234,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3240,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3240(t3,C_fix(0)));}

/* loop */
static C_word C_fcall f_3240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],(C_word)C_subchar(((C_word*)t0)[2],t1));
if(C_truep(t2)){
return(t1);}
else{
t3=(C_word)C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* string-intersperse in k1289 */
static void C_ccall f_3111(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3111r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3111r(t0,t1,t2,t3);}}

static void C_ccall f_3111r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3115,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3115(2,t5,lf[79]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3115(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3113 in string-intersperse in k1289 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=(C_word)C_i_check_list_2(((C_word*)t0)[3],lf[76]);
t3=(C_word)C_i_check_string_2(t1,lf[76]);
t4=(C_word)C_block_size(t1);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3129,a[2]=t6,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word)li104),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3129(t8,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop1 in k3113 in string-intersperse in k1289 */
static void C_fcall f_3129(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3129,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep((C_word)C_eqp(((C_word*)t0)[5],C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[77]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_fixnum_difference(t3,((C_word*)t0)[3]);
/* data-structures.scm: 499  ##sys#allocate-vector */
t6=*((C_word*)lf[78]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,t5,C_SCHEME_TRUE,C_make_character(32),C_SCHEME_FALSE);}}
else{
t4=(C_truep((C_word)C_blockp(t2))?(C_word)C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_i_check_string_2(t5,lf[76]);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_block_size(t5);
t9=(C_word)C_fixnum_plus(((C_word*)t0)[3],t3);
t10=(C_word)C_fixnum_plus(t8,t9);
/* data-structures.scm: 514  loop1 */
t14=t1;
t15=t7;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
/* data-structures.scm: 516  ##sys#error-not-a-proper-list */
t5=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,((C_word*)t0)[5]);}}}

/* k3137 in loop1 in k3113 in string-intersperse in k1289 */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word)li103),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_3144(t2,((C_word*)t0)[2],C_fix(0)));}

/* loop2 in k3137 in loop1 in k3113 in string-intersperse in k1289 */
static C_word C_fcall f_3144(C_word t0,C_word t1,C_word t2){
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
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_slot(t1,C_fix(1));
t5=(C_word)C_block_size(t3);
t6=(C_word)C_substring_copy(t3,((C_word*)t0)[4],C_fix(0),t5,t2);
t7=(C_word)C_fixnum_plus(t2,t5);
if(C_truep((C_word)C_eqp(t4,C_SCHEME_END_OF_LIST))){
t8=((C_word*)t0)[4];
return(t8);}
else{
t8=(C_word)C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],t7);
t9=(C_word)C_fixnum_plus(t7,((C_word*)t0)[2]);
t12=t4;
t13=t9;
t1=t12;
t2=t13;
goto loop;}}

/* string-split in k1289 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2976r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2976r(t0,t1,t2,t3);}}

static void C_ccall f_2976r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(20);
t4=(C_word)C_i_check_string_2(t2,lf[73]);
t5=(C_word)C_vemptyp(t3);
t6=(C_truep(t5)?lf[74]:(C_word)C_i_vector_ref(t3,C_fix(0)));
t7=(C_word)C_block_size(t3);
t8=(C_word)C_eqp(t7,C_fix(2));
t9=(C_truep(t8)?(C_word)C_i_vector_ref(t3,C_fix(1)):C_SCHEME_FALSE);
t10=(C_word)C_block_size(t2);
t11=(C_word)C_i_check_string_2(t6,lf[73]);
t12=(C_word)C_block_size(t6);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2997,a[2]=t2,a[3]=t14,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3017,a[2]=t6,a[3]=t17,a[4]=t12,a[5]=t2,a[6]=t15,a[7]=t9,a[8]=t14,a[9]=t10,a[10]=((C_word)li101),tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_3017(t19,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* loop in string-split in k1289 */
static void C_fcall f_3017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3017,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3027,a[2]=t1,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[7]);
if(C_truep(t7)){
/* data-structures.scm: 475  add */
t8=((C_word*)t0)[6];
f_2997(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[8])[1];
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?t8:C_SCHEME_END_OF_LIST));}}
else{
t5=(C_word)C_subchar(((C_word*)t0)[5],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3044,a[2]=t7,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=((C_word*)t0)[3],a[10]=t2,a[11]=((C_word*)t0)[4],a[12]=((C_word)li100),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_3044(t9,t1,C_fix(0));}}

/* scan in loop in string-split in k1289 */
static void C_fcall f_3044(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3044,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[11]))){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
/* data-structures.scm: 480  loop */
t4=((C_word*)((C_word*)t0)[9])[1];
f_3017(t4,t1,t3,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],(C_word)C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
t5=(C_word)C_fixnum_greaterp(((C_word*)t0)[10],((C_word*)t0)[7]);
t6=(C_truep(t5)?t5:((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3083,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 484  add */
t8=((C_word*)t0)[3];
f_2997(t8,t7,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[8]);}
else{
/* data-structures.scm: 485  loop */
t7=((C_word*)((C_word*)t0)[9])[1];
f_3017(t7,t1,t4,((C_word*)t0)[8],t4);}}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* data-structures.scm: 486  scan */
t11=t1;
t12=t4;
t1=t11;
t2=t12;
goto loop;}}}

/* k3081 in scan in loop in string-split in k1289 */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 484  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3017(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,((C_word*)t0)[2]);}

/* k3025 in loop in string-split in k1289 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_SCHEME_END_OF_LIST));}

/* add in string-split in k1289 */
static void C_fcall f_2997(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2997,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3012,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 468  ##sys#substring */
t6=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],t2,t3);}

/* k3010 in add in string-split in k1289 */
static void C_ccall f_3012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3012,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* substring-ci=? in k1289 */
static void C_ccall f_2896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_2896r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2896r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2896r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2898,a[2]=t3,a[3]=t2,a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=t5,a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2908,a[2]=t6,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2913,a[2]=t7,a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-start1647663 */
t9=t8;
f_2913(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start2648661 */
t11=t7;
f_2908(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-len649658 */
t13=t6;
f_2903(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body645654 */
t15=t5;
f_2898(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-start1647 in substring-ci=? in k1289 */
static void C_fcall f_2913(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2913,NULL,2,t0,t1);}
/* def-start2648661 */
t2=((C_word*)t0)[2];
f_2908(t2,t1,C_fix(0));}

/* def-start2648 in substring-ci=? in k1289 */
static void C_fcall f_2908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2908,NULL,3,t0,t1,t2);}
/* def-len649658 */
t3=((C_word*)t0)[2];
f_2903(t3,t1,t2,C_fix(0));}

/* def-len649 in substring-ci=? in k1289 */
static void C_fcall f_2903(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2903,NULL,4,t0,t1,t2,t3);}
/* body645654 */
t4=((C_word*)t0)[2];
f_2898(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body645 in substring-ci=? in k1289 */
static void C_fcall f_2898(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2898,NULL,5,t0,t1,t2,t3,t4);}
/* data-structures.scm: 453  ##sys#substring-ci=? */
((C_proc7)C_retrieve_proc(*((C_word*)lf[71]+1)))(7,*((C_word*)lf[71]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3,t4);}

/* ##sys#substring-ci=? in k1289 */
static void C_ccall f_2859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2859,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t2,lf[72]);
t8=(C_word)C_i_check_string_2(t3,lf[72]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2869,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2869(t10,t6);}
else{
t10=(C_word)C_block_size(t2);
t11=(C_word)C_fixnum_difference(t10,t4);
t12=(C_word)C_block_size(t3);
t13=(C_word)C_fixnum_difference(t12,t5);
t14=t9;
f_2869(t14,(C_word)C_i_fixnum_min(t11,t13));}}

/* k2867 in ##sys#substring-ci=? in k1289 */
static void C_fcall f_2869(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[72]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[72]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* substring=? in k1289 */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_2779r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2779r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2779r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2781,a[2]=t3,a[3]=t2,a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2786,a[2]=t5,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2791,a[2]=t6,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2796,a[2]=t7,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-start1590606 */
t9=t8;
f_2796(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start2591604 */
t11=t7;
f_2791(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-len592601 */
t13=t6;
f_2786(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body588597 */
t15=t5;
f_2781(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-start1590 in substring=? in k1289 */
static void C_fcall f_2796(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2796,NULL,2,t0,t1);}
/* def-start2591604 */
t2=((C_word*)t0)[2];
f_2791(t2,t1,C_fix(0));}

/* def-start2591 in substring=? in k1289 */
static void C_fcall f_2791(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2791,NULL,3,t0,t1,t2);}
/* def-len592601 */
t3=((C_word*)t0)[2];
f_2786(t3,t1,t2,C_fix(0));}

/* def-len592 in substring=? in k1289 */
static void C_fcall f_2786(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2786,NULL,4,t0,t1,t2,t3);}
/* body588597 */
t4=((C_word*)t0)[2];
f_2781(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body588 in substring=? in k1289 */
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2781,NULL,5,t0,t1,t2,t3,t4);}
/* data-structures.scm: 439  ##sys#substring=? */
((C_proc7)C_retrieve_proc(*((C_word*)lf[69]+1)))(7,*((C_word*)lf[69]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3,t4);}

/* ##sys#substring=? in k1289 */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2742,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t2,lf[70]);
t8=(C_word)C_i_check_string_2(t3,lf[70]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2752,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t10=t9;
f_2752(t10,t6);}
else{
t10=(C_word)C_block_size(t2);
t11=(C_word)C_fixnum_difference(t10,t4);
t12=(C_word)C_block_size(t3);
t13=(C_word)C_fixnum_difference(t12,t5);
t14=t9;
f_2752(t14,(C_word)C_i_fixnum_min(t11,t13));}}

/* k2750 in ##sys#substring=? in k1289 */
static void C_fcall f_2752(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[70]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[70]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* string-compare3-ci in k1289 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2711,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[68]);
t5=(C_word)C_i_check_string_2(t3,lf[68]);
t6=(C_word)C_block_size(t2);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_difference(t6,t7);
t9=(C_word)C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=(C_word)C_string_compare_case_insensitive(t2,t3,t10);
t12=(C_word)C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* string-compare3 in k1289 */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2680,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[67]);
t5=(C_word)C_i_check_string_2(t3,lf[67]);
t6=(C_word)C_block_size(t2);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_difference(t6,t7);
t9=(C_word)C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=(C_word)C_mem_compare(t2,t3,t10);
t12=(C_word)C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* substring-index-ci in k1289 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2652r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2652r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2652r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2656,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* data-structures.scm: 398  ##sys#substring-index-ci */
((C_proc5)C_retrieve_proc(*((C_word*)lf[65]+1)))(5,*((C_word*)lf[65]+1),t1,t2,t3,C_fix(0));}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=(C_word)C_i_car(t4);
/* data-structures.scm: 398  ##sys#substring-index-ci */
((C_proc5)C_retrieve_proc(*((C_word*)lf[65]+1)))(5,*((C_word*)lf[65]+1),t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2654 in substring-index-ci in k1289 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 398  ##sys#substring-index-ci */
((C_proc5)C_retrieve_proc(*((C_word*)lf[65]+1)))(5,*((C_word*)lf[65]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* substring-index in k1289 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2624r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2624r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2624r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2628,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* data-structures.scm: 395  ##sys#substring-index */
((C_proc5)C_retrieve_proc(*((C_word*)lf[63]+1)))(5,*((C_word*)lf[63]+1),t1,t2,t3,C_fix(0));}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=(C_word)C_i_car(t4);
/* data-structures.scm: 395  ##sys#substring-index */
((C_proc5)C_retrieve_proc(*((C_word*)lf[63]+1)))(5,*((C_word*)lf[63]+1),t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2626 in substring-index in k1289 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 395  ##sys#substring-index */
((C_proc5)C_retrieve_proc(*((C_word*)lf[63]+1)))(5,*((C_word*)lf[63]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#substring-index-ci in k1289 */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2615,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2621,a[2]=t3,a[3]=t2,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 389  traverse */
f_2559(t1,t2,t3,t4,t5,lf[66]);}

/* a2620 in ##sys#substring-index-ci in k1289 */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2621,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* ##sys#substring-index in k1289 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2606,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2612,a[2]=t3,a[3]=t2,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 383  traverse */
f_2559(t1,t2,t3,t4,t5,lf[64]);}

/* a2611 in ##sys#substring-index in k1289 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2612,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* traverse in k1289 */
static void C_fcall f_2559(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2559,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t2,t6);
t8=(C_word)C_i_check_string_2(t3,t6);
t9=(C_word)C_block_size(t3);
t10=(C_word)C_block_size(t2);
t11=(C_word)C_i_check_exact_2(t4,t6);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2580,a[2]=t10,a[3]=t5,a[4]=t13,a[5]=t9,a[6]=((C_word)li77),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_2580(t15,t1,t4,t10);}

/* loop in traverse in k1289 */
static void C_fcall f_2580(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2580,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greaterp(t3,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 377  test */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,((C_word*)t0)[2]);}}

/* k2591 in loop in traverse in k1289 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 379  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2580(t4,((C_word*)t0)[5],t2,t3);}}

/* conc in k1289 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr2r,(void*)f_2514r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2514r(t0,t1,t2);}}

static void C_ccall f_2514r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(16);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2522,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2524,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2524(t11,t7,t2);}

/* loop452 in conc in k1289 */
static void C_fcall f_2524(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2524,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[58]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g468469 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2551 in loop452 in conc in k1289 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop452465 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2524(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop452465 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2524(t6,((C_word*)t0)[3],t5);}}

/* k2520 in conc in k1289 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ->string in k1289 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2469,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* data-structures.scm: 352  symbol->string */
t3=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_charp(t2))){
/* data-structures.scm: 353  string */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_numberp(t2))){
/* data-structures.scm: 354  ##sys#number->string */
t3=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2506,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 356  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}}}}

/* k2504 in ->string in k1289 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2509,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 357  display */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k2507 in k2504 in ->string in k1289 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 358  get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* reverse-string-append in k1289 */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2392,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2395,a[2]=t4,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm: 341  rev-string-append */
t6=((C_word*)t4)[1];
f_2395(t6,t1,t2,C_fix(0));}

/* rev-string-append in reverse-string-append in k1289 */
static void C_fcall f_2395(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2395,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2411,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_cdr(t2);
t8=(C_word)C_a_i_plus(&a,2,t3,t5);
/* data-structures.scm: 332  rev-string-append */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
/* data-structures.scm: 339  make-string */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k2409 in rev-string-append in reverse-string-append in k1289 */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2411,2,t0,t1);}
t2=(C_word)C_i_string_length(t1);
t3=(C_word)C_a_i_minus(&a,2,t2,((C_word*)t0)[5]);
t4=(C_word)C_a_i_minus(&a,2,t3,((C_word*)t0)[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2420,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li71),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2420(t8,((C_word*)t0)[2],C_fix(0),t4);}

/* loop in k2409 in rev-string-append in reverse-string-append in k1289 */
static void C_fcall f_2420(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2420,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_lessp(t2,((C_word*)t0)[5]))){
t4=(C_word)C_i_string_ref(((C_word*)t0)[4],t2);
t5=(C_word)C_i_string_set(((C_word*)t0)[3],t3,t4);
t6=(C_word)C_a_i_plus(&a,2,t2,C_fix(1));
t7=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
/* data-structures.scm: 337  loop */
t10=t1;
t11=t6;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t4=((C_word*)t0)[3];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* rassoc in k1289 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2342r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2342r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2342r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(8);
t5=(C_word)C_i_check_list_2(t3,lf[51]);
t6=(C_word)C_notvemptyp(t4);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t4,C_fix(0)):*((C_word*)lf[46]+1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2354,a[2]=t2,a[3]=t7,a[4]=t9,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2354(t11,t1,t3);}

/* loop in rassoc in k1289 */
static void C_fcall f_2354(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2354,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_check_pair_2(t3,lf[51]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(t3,C_fix(1));
/* data-structures.scm: 318  tst */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2371 in loop in rassoc in k1289 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 320  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2354(t3,((C_word*)t0)[5],t2);}}

/* alist-ref in k1289 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_2218r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2218r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2218r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(13);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2220,a[2]=t3,a[3]=t2,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2289,a[2]=t5,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2294,a[2]=t6,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-cmp364394 */
t8=t7;
f_2294(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-default365392 */
t10=t6;
f_2289(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body362370 */
t12=t5;
f_2220(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-cmp364 in alist-ref in k1289 */
static void C_fcall f_2294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2294,NULL,2,t0,t1);}
/* def-default365392 */
t2=((C_word*)t0)[2];
f_2289(t2,t1,*((C_word*)lf[46]+1));}

/* def-default365 in alist-ref in k1289 */
static void C_fcall f_2289(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2289,NULL,3,t0,t1,t2);}
/* body362370 */
t3=((C_word*)t0)[2];
f_2220(t3,t1,t2,C_SCHEME_FALSE);}

/* body362 in alist-ref in k1289 */
static void C_fcall f_2220(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2220,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(*((C_word*)lf[44]+1),t2);
if(C_truep(t5)){
t6=t4;
f_2224(t6,*((C_word*)lf[45]+1));}
else{
t6=(C_word)C_eqp(*((C_word*)lf[46]+1),t2);
if(C_truep(t6)){
t7=*((C_word*)lf[47]+1);
t8=t4;
f_2224(t8,t7);}
else{
t7=(C_word)C_eqp(*((C_word*)lf[48]+1),t2);
t8=t4;
f_2224(t8,(C_truep(t7)?*((C_word*)lf[49]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2249,a[2]=t2,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp)));}}}

/* f_2249 in body362 in alist-ref in k1289 */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2249,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2255,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2255(t7,t1,t3);}

/* loop */
static void C_fcall f_2255(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2255,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* data-structures.scm: 303  cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2271(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2269 in loop */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 305  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2255(t3,((C_word*)t0)[5],t2);}}

/* k2222 in body362 in alist-ref in k1289 */
static void C_fcall f_2224(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2224,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 306  aq */
t3=t1;
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2225 in k2222 in body362 in alist-ref in k1289 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(t1,C_fix(1)));}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* alist-update! in k1289 */
static void C_ccall f_2119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr5r,(void*)f_2119r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2119r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2119r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2123,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
t7=t6;
f_2123(2,t7,*((C_word*)lf[46]+1));}
else{
t7=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t7))){
t8=t6;
f_2123(2,t8,(C_word)C_i_car(t5));}
else{
/* ##sys#error */
t8=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}

/* k2121 in alist-update! in k1289 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(*((C_word*)lf[44]+1),t1);
if(C_truep(t3)){
t4=t2;
f_2126(t4,*((C_word*)lf[45]+1));}
else{
t4=(C_word)C_eqp(*((C_word*)lf[46]+1),t1);
if(C_truep(t4)){
t5=*((C_word*)lf[47]+1);
t6=t2;
f_2126(t6,t5);}
else{
t5=(C_word)C_eqp(*((C_word*)lf[48]+1),t1);
t6=t2;
f_2126(t6,(C_truep(t5)?*((C_word*)lf[49]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2158,a[2]=t1,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp)));}}}

/* f_2158 in k2121 in alist-update! in k1289 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2158,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2164,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2164(t7,t1,t3);}

/* loop */
static void C_fcall f_2164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2164,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* data-structures.scm: 284  cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2180(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2178 in loop */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 286  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2164(t3,((C_word*)t0)[5],t2);}}

/* k2124 in k2121 in alist-update! in k1289 */
static void C_fcall f_2126(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2126,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 287  aq */
t3=t1;
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2127 in k2124 in k2121 in alist-update! in k1289 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2129,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_setslot(t1,C_fix(1),((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]));}}

/* shuffle in k1289 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[26],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2009,4,t0,t1,t2,t3);}
t4=(C_word)C_i_length(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2020,a[2]=t1,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2059,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2075,a[2]=t11,a[3]=t16,a[4]=t13,a[5]=t4,a[6]=t3,a[7]=((C_word)li58),tmp=(C_word)a,a+=8,tmp));
t18=((C_word*)t16)[1];
f_2075(t18,t14,t2);}

/* loop286 in shuffle in k1289 */
static void C_fcall f_2075(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2075,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2113,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g302303 */
t6=t3;
f_2102(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2111 in loop286 in shuffle in k1289 */
static void C_ccall f_2113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2113,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop286299 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2075(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop286299 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2075(t6,((C_word*)t0)[3],t5);}}

/* g302 in loop286 in shuffle in k1289 */
static void C_fcall f_2102(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2102,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2110,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 269  random */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2108 in g302 in loop286 in shuffle in k1289 */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2110,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k2057 in shuffle in k1289 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2061,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm: 269  sort! */
t3=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a2060 in k2057 in shuffle in k1289 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2061,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_car(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_lessp(t4,t5));}

/* k2018 in shuffle in k1289 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2020,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2022(t5,((C_word*)t0)[2],t1);}

/* loop263 in k2018 in shuffle in k1289 */
static void C_fcall f_2022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2022,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[41]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g279280 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2049 in loop263 in k2018 in shuffle in k1289 */
static void C_ccall f_2051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2051,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop263276 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2022(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop263276 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2022(t6,((C_word*)t0)[3],t5);}}

/* compress in k1289 */
static void C_ccall f_1929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_1929,4,t0,t1,t2,t3);}
t4=lf[37];
t5=(C_word)C_i_check_list_2(t3,lf[36]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1938,a[2]=t4,a[3]=t7,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1938(t9,t1,t2,t3);}

/* loop in compress in k1289 */
static void C_fcall f_1938(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1938,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
if(C_truep((C_word)C_i_pairp(t3))){
if(C_truep((C_word)C_slot(t2,C_fix(0)))){
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1980,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t3,C_fix(1));
/* data-structures.scm: 261  loop */
t11=t5;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t3,C_fix(1));
/* data-structures.scm: 262  loop */
t11=t1;
t12=t4;
t13=t5;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
/* data-structures.scm: 260  ##sys#signal-hook */
t4=*((C_word*)lf[38]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[39],lf[36],((C_word*)t0)[2],t3);}}
else{
/* data-structures.scm: 258  ##sys#signal-hook */
t4=*((C_word*)lf[38]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[39],lf[36],((C_word*)t0)[2],t2);}}}

/* k1978 in loop in compress in k1289 */
static void C_ccall f_1980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1980,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* join in k1289 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1870r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1870r(t0,t1,t2,t3);}}

static void C_ccall f_1870r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_END_OF_LIST);
t6=(C_word)C_i_check_list_2(t5,lf[34]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1882,a[2]=t8,a[3]=t5,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1882(t10,t1,t2);}

/* loop in join in k1289 */
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1882,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 249  loop */
t7=t5;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}
else{
/* data-structures.scm: 243  ##sys#error-not-a-proper-list */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}}}

/* k1915 in loop in join in k1289 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 249  ##sys#append */
t2=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop in k1289 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1785,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[31]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1792,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t3,C_fix(0)))){
/* data-structures.scm: 224  ##sys#error */
t6=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[31],lf[33],t3);}
else{
t6=t5;
f_1792(2,t6,C_SCHEME_UNDEFINED);}}

/* k1790 in chop in k1289 */
static void C_ccall f_1792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1792,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1800,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1800(t6,((C_word*)t0)[2],((C_word*)t0)[5],t2);}

/* loop in k1790 in chop in k1289 */
static void C_fcall f_1800(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1800,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_lessp(t3,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,1,t2));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1821,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1821(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[4]);}}}

/* doloop205 in loop in k1790 in chop in k1289 */
static void C_fcall f_1821(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1821,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1835,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm: 235  reverse */
t7=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t2);}
else{
t6=(C_word)C_slot(t3,C_fix(0));
t7=(C_word)C_a_i_cons(&a,2,t6,t2);
t8=(C_word)C_slot(t3,C_fix(1));
t9=(C_word)C_fixnum_difference(t4,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t15=t9;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}

/* k1833 in doloop205 in loop in k1790 in chop in k1289 */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1839,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* data-structures.scm: 235  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1800(t4,t2,((C_word*)t0)[2],t3);}

/* k1837 in k1833 in doloop205 in loop in k1790 in chop in k1289 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1839,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* flatten in k1289 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1744r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1744r(t0,t1,t2);}}

static void C_ccall f_1744r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1750,a[2]=t4,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1750(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in flatten in k1289 */
static void C_fcall f_1750(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1750,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_listp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1776,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 216  loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1783,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 217  loop */
t10=t6;
t11=t5;
t12=t3;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* k1781 in loop in flatten in k1289 */
static void C_ccall f_1783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1783,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1774 in loop in flatten in k1289 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 216  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1750(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* butlast in k1289 */
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1712,3,t0,t1,t2);}
t3=(C_word)C_i_check_pair_2(t2,lf[29]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1721,a[2]=t5,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1721(t7,t1,t2);}

/* loop in butlast in k1289 */
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1721,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_truep((C_word)C_blockp(t3))?(C_word)C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1742,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 206  loop */
t8=t6;
t9=t3;
t1=t8;
t2=t9;
goto loop;}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k1740 in loop in butlast in k1289 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1742,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* intersperse in k1289 */
static void C_ccall f_1679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1679,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1685,a[2]=t5,a[3]=t3,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1685(t7,t1,t2);}

/* loop in intersperse in k1289 */
static void C_fcall f_1685(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1685,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1710,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 199  loop */
t8=t5;
t9=t3;
t1=t8;
t2=t9;
goto loop;}}}

/* k1708 in loop in intersperse in k1289 */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1710,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* tail? in k1289 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1651,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_list_2(t3,lf[27]);
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1663,a[2]=t2,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1663(t6,t3));}}

/* loop in tail? in k1289 */
static C_word C_fcall f_1663(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
C_stack_check;
if(C_truep((C_word)C_eqp(t1,C_SCHEME_END_OF_LIST))){
return(C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_eqp(((C_word*)t0)[2],t1))){
return(C_SCHEME_TRUE);}
else{
t2=(C_word)C_slot(t1,C_fix(1));
t4=t2;
t1=t4;
goto loop;}}}

/* atom? in k1289 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1648,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not_pair_p(t2));}

/* right-section in k1289 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1622r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1622r(t0,t1,t2,t3);}}

static void C_ccall f_1622r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1626,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 173  ##sys#check-closure */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[25]);}

/* k1624 in right-section in k1289 */
static void C_ccall f_1626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1629,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 174  ##sys#reverse */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1627 in k1624 in right-section in k1289 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1629,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1630,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li37),tmp=(C_word)a,a+=6,tmp));}

/* f_1630 in k1627 in k1624 in right-section in k1289 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_1630r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1630r(t0,t1,t2);}}

static void C_ccall f_1630r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1638,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1642,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1646,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 176  ##sys#reverse */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1644 */
static void C_ccall f_1646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 176  ##sys#append */
t2=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1640 */
static void C_ccall f_1642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 176  ##sys#reverse */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1636 */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* left-section in k1289 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1607r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1607r(t0,t1,t2,t3);}}

static void C_ccall f_1607r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1611,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 166  ##sys#check-closure */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[21]);}

/* k1609 in left-section in k1289 */
static void C_ccall f_1611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1611,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));}

/* f_1612 in k1609 in left-section in k1289 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1612r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1612r(t0,t1,t2);}}

static void C_ccall f_1612r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1620,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm: 168  ##sys#append */
t4=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k1618 */
static void C_ccall f_1620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* never? in k1289 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1604,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* always? in k1289 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* none? in k1289 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1598,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* any? in k1289 */
static void C_ccall f_1595(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1595,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* each in k1289 */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1539r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1539r(t0,t1,t2);}}

static void C_ccall f_1539r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1547,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?(C_word)C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1561,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp)));}}

/* f_1561 in each in k1289 */
static void C_ccall f_1561(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_1561r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1561r(t0,t1,t2);}}

static void C_ccall f_1561r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1567,a[2]=t4,a[3]=t2,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1567(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1567(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1567,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
C_apply(4,0,t1,t3,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1586,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,t3,((C_word*)t0)[3]);}}

/* k1584 in loop */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 155  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1567(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1547 in each in k1289 */
static void C_ccall f_1547(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1547,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[15]+1));}

/* noop in k1289 */
static void C_ccall f_1533(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1533,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[15]+1));}

/* list-of? in k1289 */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1492,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1494,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));}

/* f_1494 in list-of? in k1289 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1494,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1500(t6,t1,t2);}

/* loop */
static void C_fcall f_1500(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1500,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1519,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* data-structures.scm: 136  pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k1517 in loop */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm: 136  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1500(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* o in k1289 */
static void C_ccall f_1453(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1453r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1453r(t0,t1,t2);}}

static void C_ccall f_1453r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_i_nullp(t2))){
t3=*((C_word*)lf[2]+1);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1465,a[2]=t4,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1465(t6,t1,t2);}}

/* loop in o in k1289 */
static void C_fcall f_1465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1465,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1479,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_1479 in loop in o in k1289 */
static void C_ccall f_1479(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1479,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1487,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm: 129  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1465(t4,t3,((C_word*)t0)[2]);}

/* k1485 */
static void C_ccall f_1487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* g8586 */
t3=t1;
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1488 in k1485 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* data-structures.scm: 129  h */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* compose in k1289 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1417r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1417r(t0,t1,t2);}}

static void C_ccall f_1417r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1420,a[2]=t4,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t6=*((C_word*)lf[10]+1);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
C_apply(4,0,t1,((C_word*)t4)[1],t2);}}

/* rec in compose in k1289 */
static void C_ccall f_1420(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1420r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1420r(t0,t1,t2,t3);}}

static void C_ccall f_1420r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1428,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_1428 in rec in compose in k1289 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1428r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1428r(t0,t1,t2);}}

static void C_ccall f_1428r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1434,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm: 114  call-with-values */
C_call_with_values(4,0,t1,t3,((C_word*)t0)[2]);}

/* a1433 */
static void C_ccall f_1434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1442,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k1440 in a1433 */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* complement in k1289 */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1405,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1407,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));}

/* f_1407 in complement in k1289 */
static void C_ccall f_1407(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1407r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1407r(t0,t1,t2);}}

static void C_ccall f_1407r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1415,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,((C_word*)t0)[2],t2);}

/* k1413 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* flip in k1289 */
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1397,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));}

/* f_1399 in flip in k1289 */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1399,4,t0,t1,t2,t3);}
/* data-structures.scm: 103  proc */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* constantly in k1289 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1374r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1374r(t0,t1,t2);}}

static void C_ccall f_1374r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1385,a[2]=t5,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1387,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_1387 in constantly in k1289 */
static void C_ccall f_1387(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1387,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_1385 in constantly in k1289 */
static void C_ccall f_1385(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1385,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* disjoin in k1289 */
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1337r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1337r(t0,t1,t2);}}

static void C_ccall f_1337r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1339,a[2]=t2,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));}

/* f_1339 in disjoin in k1289 */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1339,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1345,a[2]=t2,a[3]=t4,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1345(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1345(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1345,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1358,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* g5758 */
t5=t3;
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}}

/* k1356 in loop */
static void C_ccall f_1358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* data-structures.scm: 95   loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1345(t3,((C_word*)t0)[4],t2);}}

/* conjoin in k1289 */
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1304r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1304r(t0,t1,t2);}}

static void C_ccall f_1304r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1306,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));}

/* f_1306 in conjoin in k1289 */
static void C_ccall f_1306(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1306,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1312,a[2]=t2,a[3]=t4,a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1312(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1312(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1312,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1328,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* g4243 */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}}

/* k1326 in loop */
static void C_ccall f_1328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* data-structures.scm: 88   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1312(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* project in k1289 */
static void C_ccall f_1296(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1296,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1298,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));}

/* f_1298 in project in k1289 */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1298r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1298r(t0,t1,t2);}}

static void C_ccall f_1298r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_vector_ref(t2,((C_word*)t0)[2]));}

/* identity in k1289 */
static void C_ccall f_1293(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1293,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[267] = {
{"toplevel:data_structures_scm",(void*)C_data_structures_toplevel},
{"f_1291:data_structures_scm",(void*)f_1291},
{"f_4739:data_structures_scm",(void*)f_4739},
{"f_4749:data_structures_scm",(void*)f_4749},
{"f_4768:data_structures_scm",(void*)f_4768},
{"f_4710:data_structures_scm",(void*)f_4710},
{"f_4656:data_structures_scm",(void*)f_4656},
{"f_4675:data_structures_scm",(void*)f_4675},
{"f_4685:data_structures_scm",(void*)f_4685},
{"f_4667:data_structures_scm",(void*)f_4667},
{"f_4647:data_structures_scm",(void*)f_4647},
{"f_4611:data_structures_scm",(void*)f_4611},
{"f_4621:data_structures_scm",(void*)f_4621},
{"f_4579:data_structures_scm",(void*)f_4579},
{"f_4558:data_structures_scm",(void*)f_4558},
{"f_4568:data_structures_scm",(void*)f_4568},
{"f_4537:data_structures_scm",(void*)f_4537},
{"f_4547:data_structures_scm",(void*)f_4547},
{"f_4524:data_structures_scm",(void*)f_4524},
{"f_4518:data_structures_scm",(void*)f_4518},
{"f_4512:data_structures_scm",(void*)f_4512},
{"f_4429:data_structures_scm",(void*)f_4429},
{"f_4507:data_structures_scm",(void*)f_4507},
{"f_4433:data_structures_scm",(void*)f_4433},
{"f_4447:data_structures_scm",(void*)f_4447},
{"f_4457:data_structures_scm",(void*)f_4457},
{"f_4166:data_structures_scm",(void*)f_4166},
{"f_4393:data_structures_scm",(void*)f_4393},
{"f_4416:data_structures_scm",(void*)f_4416},
{"f_4401:data_structures_scm",(void*)f_4401},
{"f_4316:data_structures_scm",(void*)f_4316},
{"f_4383:data_structures_scm",(void*)f_4383},
{"f_4387:data_structures_scm",(void*)f_4387},
{"f_4319:data_structures_scm",(void*)f_4319},
{"f_4328:data_structures_scm",(void*)f_4328},
{"f_4368:data_structures_scm",(void*)f_4368},
{"f_4336:data_structures_scm",(void*)f_4336},
{"f_4340:data_structures_scm",(void*)f_4340},
{"f_4322:data_structures_scm",(void*)f_4322},
{"f_4257:data_structures_scm",(void*)f_4257},
{"f_4261:data_structures_scm",(void*)f_4261},
{"f_4270:data_structures_scm",(void*)f_4270},
{"f_4302:data_structures_scm",(void*)f_4302},
{"f_4278:data_structures_scm",(void*)f_4278},
{"f_4282:data_structures_scm",(void*)f_4282},
{"f_4264:data_structures_scm",(void*)f_4264},
{"f_4222:data_structures_scm",(void*)f_4222},
{"f_4228:data_structures_scm",(void*)f_4228},
{"f_4255:data_structures_scm",(void*)f_4255},
{"f_4241:data_structures_scm",(void*)f_4241},
{"f_4175:data_structures_scm",(void*)f_4175},
{"f_4181:data_structures_scm",(void*)f_4181},
{"f_4220:data_structures_scm",(void*)f_4220},
{"f_4202:data_structures_scm",(void*)f_4202},
{"f_4139:data_structures_scm",(void*)f_4139},
{"f_4164:data_structures_scm",(void*)f_4164},
{"f_4157:data_structures_scm",(void*)f_4157},
{"f_4153:data_structures_scm",(void*)f_4153},
{"f_4006:data_structures_scm",(void*)f_4006},
{"f_4096:data_structures_scm",(void*)f_4096},
{"f_4103:data_structures_scm",(void*)f_4103},
{"f_4105:data_structures_scm",(void*)f_4105},
{"f_4009:data_structures_scm",(void*)f_4009},
{"f_4060:data_structures_scm",(void*)f_4060},
{"f_4019:data_structures_scm",(void*)f_4019},
{"f_4022:data_structures_scm",(void*)f_4022},
{"f_4028:data_structures_scm",(void*)f_4028},
{"f_3874:data_structures_scm",(void*)f_3874},
{"f_3956:data_structures_scm",(void*)f_3956},
{"f_3979:data_structures_scm",(void*)f_3979},
{"f_3959:data_structures_scm",(void*)f_3959},
{"f_3877:data_structures_scm",(void*)f_3877},
{"f_3884:data_structures_scm",(void*)f_3884},
{"f_3775:data_structures_scm",(void*)f_3775},
{"f_3809:data_structures_scm",(void*)f_3809},
{"f_3816:data_structures_scm",(void*)f_3816},
{"f_3864:data_structures_scm",(void*)f_3864},
{"f_3836:data_structures_scm",(void*)f_3836},
{"f_3666:data_structures_scm",(void*)f_3666},
{"f_3741:data_structures_scm",(void*)f_3741},
{"f_3769:data_structures_scm",(void*)f_3769},
{"f_3693:data_structures_scm",(void*)f_3693},
{"f_3703:data_structures_scm",(void*)f_3703},
{"f_3614:data_structures_scm",(void*)f_3614},
{"f_3618:data_structures_scm",(void*)f_3618},
{"f_3550:data_structures_scm",(void*)f_3550},
{"f_3565:data_structures_scm",(void*)f_3565},
{"f_3596:data_structures_scm",(void*)f_3596},
{"f_3600:data_structures_scm",(void*)f_3600},
{"f_3585:data_structures_scm",(void*)f_3585},
{"f_3428:data_structures_scm",(void*)f_3428},
{"f_3440:data_structures_scm",(void*)f_3440},
{"f_3473:data_structures_scm",(void*)f_3473},
{"f_3538:data_structures_scm",(void*)f_3538},
{"f_3512:data_structures_scm",(void*)f_3512},
{"f_3468:data_structures_scm",(void*)f_3468},
{"f_3454:data_structures_scm",(void*)f_3454},
{"f_3226:data_structures_scm",(void*)f_3226},
{"f_3420:data_structures_scm",(void*)f_3420},
{"f_3403:data_structures_scm",(void*)f_3403},
{"f_3263:data_structures_scm",(void*)f_3263},
{"f_3266:data_structures_scm",(void*)f_3266},
{"f_3278:data_structures_scm",(void*)f_3278},
{"f_3283:data_structures_scm",(void*)f_3283},
{"f_3302:data_structures_scm",(void*)f_3302},
{"f_3229:data_structures_scm",(void*)f_3229},
{"f_3234:data_structures_scm",(void*)f_3234},
{"f_3240:data_structures_scm",(void*)f_3240},
{"f_3111:data_structures_scm",(void*)f_3111},
{"f_3115:data_structures_scm",(void*)f_3115},
{"f_3129:data_structures_scm",(void*)f_3129},
{"f_3139:data_structures_scm",(void*)f_3139},
{"f_3144:data_structures_scm",(void*)f_3144},
{"f_2976:data_structures_scm",(void*)f_2976},
{"f_3017:data_structures_scm",(void*)f_3017},
{"f_3044:data_structures_scm",(void*)f_3044},
{"f_3083:data_structures_scm",(void*)f_3083},
{"f_3027:data_structures_scm",(void*)f_3027},
{"f_2997:data_structures_scm",(void*)f_2997},
{"f_3012:data_structures_scm",(void*)f_3012},
{"f_2896:data_structures_scm",(void*)f_2896},
{"f_2913:data_structures_scm",(void*)f_2913},
{"f_2908:data_structures_scm",(void*)f_2908},
{"f_2903:data_structures_scm",(void*)f_2903},
{"f_2898:data_structures_scm",(void*)f_2898},
{"f_2859:data_structures_scm",(void*)f_2859},
{"f_2869:data_structures_scm",(void*)f_2869},
{"f_2779:data_structures_scm",(void*)f_2779},
{"f_2796:data_structures_scm",(void*)f_2796},
{"f_2791:data_structures_scm",(void*)f_2791},
{"f_2786:data_structures_scm",(void*)f_2786},
{"f_2781:data_structures_scm",(void*)f_2781},
{"f_2742:data_structures_scm",(void*)f_2742},
{"f_2752:data_structures_scm",(void*)f_2752},
{"f_2711:data_structures_scm",(void*)f_2711},
{"f_2680:data_structures_scm",(void*)f_2680},
{"f_2652:data_structures_scm",(void*)f_2652},
{"f_2656:data_structures_scm",(void*)f_2656},
{"f_2624:data_structures_scm",(void*)f_2624},
{"f_2628:data_structures_scm",(void*)f_2628},
{"f_2615:data_structures_scm",(void*)f_2615},
{"f_2621:data_structures_scm",(void*)f_2621},
{"f_2606:data_structures_scm",(void*)f_2606},
{"f_2612:data_structures_scm",(void*)f_2612},
{"f_2559:data_structures_scm",(void*)f_2559},
{"f_2580:data_structures_scm",(void*)f_2580},
{"f_2593:data_structures_scm",(void*)f_2593},
{"f_2514:data_structures_scm",(void*)f_2514},
{"f_2524:data_structures_scm",(void*)f_2524},
{"f_2553:data_structures_scm",(void*)f_2553},
{"f_2522:data_structures_scm",(void*)f_2522},
{"f_2469:data_structures_scm",(void*)f_2469},
{"f_2506:data_structures_scm",(void*)f_2506},
{"f_2509:data_structures_scm",(void*)f_2509},
{"f_2392:data_structures_scm",(void*)f_2392},
{"f_2395:data_structures_scm",(void*)f_2395},
{"f_2411:data_structures_scm",(void*)f_2411},
{"f_2420:data_structures_scm",(void*)f_2420},
{"f_2342:data_structures_scm",(void*)f_2342},
{"f_2354:data_structures_scm",(void*)f_2354},
{"f_2373:data_structures_scm",(void*)f_2373},
{"f_2218:data_structures_scm",(void*)f_2218},
{"f_2294:data_structures_scm",(void*)f_2294},
{"f_2289:data_structures_scm",(void*)f_2289},
{"f_2220:data_structures_scm",(void*)f_2220},
{"f_2249:data_structures_scm",(void*)f_2249},
{"f_2255:data_structures_scm",(void*)f_2255},
{"f_2271:data_structures_scm",(void*)f_2271},
{"f_2224:data_structures_scm",(void*)f_2224},
{"f_2227:data_structures_scm",(void*)f_2227},
{"f_2119:data_structures_scm",(void*)f_2119},
{"f_2123:data_structures_scm",(void*)f_2123},
{"f_2158:data_structures_scm",(void*)f_2158},
{"f_2164:data_structures_scm",(void*)f_2164},
{"f_2180:data_structures_scm",(void*)f_2180},
{"f_2126:data_structures_scm",(void*)f_2126},
{"f_2129:data_structures_scm",(void*)f_2129},
{"f_2009:data_structures_scm",(void*)f_2009},
{"f_2075:data_structures_scm",(void*)f_2075},
{"f_2113:data_structures_scm",(void*)f_2113},
{"f_2102:data_structures_scm",(void*)f_2102},
{"f_2110:data_structures_scm",(void*)f_2110},
{"f_2059:data_structures_scm",(void*)f_2059},
{"f_2061:data_structures_scm",(void*)f_2061},
{"f_2020:data_structures_scm",(void*)f_2020},
{"f_2022:data_structures_scm",(void*)f_2022},
{"f_2051:data_structures_scm",(void*)f_2051},
{"f_1929:data_structures_scm",(void*)f_1929},
{"f_1938:data_structures_scm",(void*)f_1938},
{"f_1980:data_structures_scm",(void*)f_1980},
{"f_1870:data_structures_scm",(void*)f_1870},
{"f_1882:data_structures_scm",(void*)f_1882},
{"f_1917:data_structures_scm",(void*)f_1917},
{"f_1785:data_structures_scm",(void*)f_1785},
{"f_1792:data_structures_scm",(void*)f_1792},
{"f_1800:data_structures_scm",(void*)f_1800},
{"f_1821:data_structures_scm",(void*)f_1821},
{"f_1835:data_structures_scm",(void*)f_1835},
{"f_1839:data_structures_scm",(void*)f_1839},
{"f_1744:data_structures_scm",(void*)f_1744},
{"f_1750:data_structures_scm",(void*)f_1750},
{"f_1783:data_structures_scm",(void*)f_1783},
{"f_1776:data_structures_scm",(void*)f_1776},
{"f_1712:data_structures_scm",(void*)f_1712},
{"f_1721:data_structures_scm",(void*)f_1721},
{"f_1742:data_structures_scm",(void*)f_1742},
{"f_1679:data_structures_scm",(void*)f_1679},
{"f_1685:data_structures_scm",(void*)f_1685},
{"f_1710:data_structures_scm",(void*)f_1710},
{"f_1651:data_structures_scm",(void*)f_1651},
{"f_1663:data_structures_scm",(void*)f_1663},
{"f_1648:data_structures_scm",(void*)f_1648},
{"f_1622:data_structures_scm",(void*)f_1622},
{"f_1626:data_structures_scm",(void*)f_1626},
{"f_1629:data_structures_scm",(void*)f_1629},
{"f_1630:data_structures_scm",(void*)f_1630},
{"f_1646:data_structures_scm",(void*)f_1646},
{"f_1642:data_structures_scm",(void*)f_1642},
{"f_1638:data_structures_scm",(void*)f_1638},
{"f_1607:data_structures_scm",(void*)f_1607},
{"f_1611:data_structures_scm",(void*)f_1611},
{"f_1612:data_structures_scm",(void*)f_1612},
{"f_1620:data_structures_scm",(void*)f_1620},
{"f_1604:data_structures_scm",(void*)f_1604},
{"f_1601:data_structures_scm",(void*)f_1601},
{"f_1598:data_structures_scm",(void*)f_1598},
{"f_1595:data_structures_scm",(void*)f_1595},
{"f_1539:data_structures_scm",(void*)f_1539},
{"f_1561:data_structures_scm",(void*)f_1561},
{"f_1567:data_structures_scm",(void*)f_1567},
{"f_1586:data_structures_scm",(void*)f_1586},
{"f_1547:data_structures_scm",(void*)f_1547},
{"f_1533:data_structures_scm",(void*)f_1533},
{"f_1492:data_structures_scm",(void*)f_1492},
{"f_1494:data_structures_scm",(void*)f_1494},
{"f_1500:data_structures_scm",(void*)f_1500},
{"f_1519:data_structures_scm",(void*)f_1519},
{"f_1453:data_structures_scm",(void*)f_1453},
{"f_1465:data_structures_scm",(void*)f_1465},
{"f_1479:data_structures_scm",(void*)f_1479},
{"f_1487:data_structures_scm",(void*)f_1487},
{"f_1490:data_structures_scm",(void*)f_1490},
{"f_1417:data_structures_scm",(void*)f_1417},
{"f_1420:data_structures_scm",(void*)f_1420},
{"f_1428:data_structures_scm",(void*)f_1428},
{"f_1434:data_structures_scm",(void*)f_1434},
{"f_1442:data_structures_scm",(void*)f_1442},
{"f_1405:data_structures_scm",(void*)f_1405},
{"f_1407:data_structures_scm",(void*)f_1407},
{"f_1415:data_structures_scm",(void*)f_1415},
{"f_1397:data_structures_scm",(void*)f_1397},
{"f_1399:data_structures_scm",(void*)f_1399},
{"f_1374:data_structures_scm",(void*)f_1374},
{"f_1387:data_structures_scm",(void*)f_1387},
{"f_1385:data_structures_scm",(void*)f_1385},
{"f_1337:data_structures_scm",(void*)f_1337},
{"f_1339:data_structures_scm",(void*)f_1339},
{"f_1345:data_structures_scm",(void*)f_1345},
{"f_1358:data_structures_scm",(void*)f_1358},
{"f_1304:data_structures_scm",(void*)f_1304},
{"f_1306:data_structures_scm",(void*)f_1306},
{"f_1312:data_structures_scm",(void*)f_1312},
{"f_1328:data_structures_scm",(void*)f_1328},
{"f_1296:data_structures_scm",(void*)f_1296},
{"f_1298:data_structures_scm",(void*)f_1298},
{"f_1293:data_structures_scm",(void*)f_1293},
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
