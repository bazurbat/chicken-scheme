/* Generated from files.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:25
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: files.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file files.c -extend ./private-namespace.scm
   unit: files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_structures_toplevel)
C_externimport void C_ccall C_data_structures_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[102];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,21),40,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,50,55,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,57,55,55,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,97,57,55,49,32,101,120,118,97,114,49,51,54,49,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,50,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,52,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,97,49,48,49,56,32,46,32,97,114,103,115,49,52,52,49,54,50,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,54,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,97,57,54,53,32,107,49,52,51,49,52,56,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,49,51,50,32,108,49,51,51,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,97,49,48,52,50,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,19),40,97,49,48,51,54,32,101,120,118,97,114,49,48,53,49,49,56,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,55,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,57,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,20),40,97,49,48,55,51,32,46,32,97,114,103,115,49,49,51,49,50,57,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,49,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,15),40,97,49,48,51,48,32,107,49,49,50,49,49,55,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,55,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,49,32,101,120,118,97,114,55,57,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,97,49,49,50,50,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,7),40,97,49,49,51,52,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,19),40,97,49,49,50,56,32,46,32,97,114,103,115,56,55,49,48,51,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,54,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,13),40,97,49,48,56,53,32,107,56,54,57,49,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,30),40,98,111,100,121,52,55,32,99,108,111,98,98,101,114,53,54,32,98,108,111,99,107,115,105,122,101,53,55,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,31),40,100,101,102,45,98,108,111,99,107,115,105,122,101,53,48,32,37,99,108,111,98,98,101,114,52,53,49,55,50,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,99,108,111,98,98,101,114,52,57,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,99,111,112,121,32,111,114,105,103,102,105,108,101,51,57,32,110,101,119,102,105,108,101,52,48,32,46,32,116,109,112,51,56,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,51,49,51,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,19),40,97,49,51,48,55,32,101,120,118,97,114,50,56,49,50,57,52,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,56,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,49,51,53,48,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,20),40,97,49,51,52,52,32,46,32,97,114,103,115,50,56,57,51,48,53,41,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,50,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,15),40,97,49,51,48,49,32,107,50,56,56,50,57,51,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,49,51,56,53,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,19),40,97,49,51,55,57,32,101,120,118,97,114,51,48,57,51,50,50,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,48,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,49,52,51,50,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,97,49,52,50,54,32,46,32,97,114,103,115,51,49,55,51,51,53,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,49,52,49,52,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,15),40,97,49,51,55,51,32,107,51,49,54,51,50,49,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,50,55,57,32,108,50,56,48,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,49,52,53,48,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,19),40,97,49,52,52,52,32,101,120,118,97,114,50,53,50,50,54,53,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,53,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,49,52,56,55,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,20),40,97,49,52,56,49,32,46,32,97,114,103,115,50,54,48,50,55,54,41,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,52,54,57,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,15),40,97,49,52,51,56,32,107,50,53,57,50,54,52,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,49,53,48,53,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,19),40,97,49,52,57,57,32,101,120,118,97,114,50,50,54,50,51,57,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,48,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,49,53,52,50,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,20),40,97,49,53,51,54,32,46,32,97,114,103,115,50,51,52,50,53,48,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,97,49,53,50,52,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,15),40,97,49,52,57,51,32,107,50,51,51,50,51,56,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,33),40,98,111,100,121,49,57,52,32,99,108,111,98,98,101,114,50,48,51,32,98,108,111,99,107,115,105,122,101,50,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,33),40,100,101,102,45,98,108,111,99,107,115,105,122,101,49,57,55,32,37,99,108,111,98,98,101,114,49,57,50,51,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,99,108,111,98,98,101,114,49,57,54,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,46),40,102,105,108,101,45,109,111,118,101,32,111,114,105,103,102,105,108,101,49,56,54,32,110,101,119,102,105,108,101,49,56,55,32,46,32,116,109,112,49,56,53,49,56,56,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,26),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,51,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,24),40,99,104,111,112,45,112,100,115,32,115,116,114,51,55,53,32,112,100,115,51,55,54,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,115,51,57,53,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,26),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,51,57,50,32,112,100,115,51,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,52,48,52,32,112,100,115,52,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,52),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,52,49,55,32,100,105,114,52,49,56,32,102,105,108,101,52,49,57,32,101,120,116,52,50,48,32,112,100,115,52,50,49,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,23),40,98,111,100,121,52,54,50,32,101,120,116,52,55,49,32,112,100,115,52,55,50,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,23),40,100,101,102,45,112,100,115,52,54,53,32,37,101,120,116,52,54,48,52,55,52,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,101,120,116,52,54,52,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,43),40,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,52,53,52,32,102,105,108,101,52,53,53,32,46,32,116,109,112,52,53,51,52,53,54,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,23),40,98,111,100,121,52,57,52,32,101,120,116,53,48,51,32,112,100,115,53,48,52,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,23),40,100,101,102,45,112,100,115,52,57,55,32,37,101,120,116,52,57,50,53,49,50,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,101,120,116,52,57,54,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,52),40,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,52,56,54,32,102,105,108,101,52,56,55,32,46,32,116,109,112,52,56,53,52,56,56,41,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,18),40,115,116,114,105,112,45,112,100,115,32,100,105,114,53,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,26),40,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,53,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,50,49,51,56,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,47),40,97,50,49,52,52,32,100,105,114,53,52,48,53,52,49,53,52,54,32,102,105,108,101,53,52,50,53,52,51,53,52,55,32,101,120,116,53,52,52,53,52,53,53,52,56,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,53,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,50,49,53,51,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,47),40,97,50,49,53,57,32,100,105,114,53,53,53,53,53,54,53,54,49,32,102,105,108,101,53,53,55,53,53,56,53,54,50,32,101,120,116,53,53,57,53,54,48,53,54,51,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,21),40,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,53,53,50,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,7),40,97,50,49,54,56,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,47),40,97,50,49,55,52,32,100,105,114,53,55,48,53,55,49,53,55,54,32,102,105,108,101,53,55,50,53,55,51,53,55,55,32,101,120,116,53,55,52,53,55,53,53,55,56,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,26),40,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,53,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,97,50,49,56,51,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,47),40,97,50,49,56,57,32,100,105,114,53,56,53,53,56,54,53,57,49,32,102,105,108,101,53,56,55,53,56,56,53,57,50,32,101,120,116,53,56,57,53,57,48,53,57,51,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,53,56,50,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,7),40,97,50,50,48,49,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,47),40,97,50,50,48,55,32,100,105,114,54,48,48,54,48,49,54,48,54,32,102,105,108,101,54,48,50,54,48,51,54,48,55,32,101,120,116,54,48,52,54,48,53,54,48,56,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,32),40,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,53,57,55,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,7),40,97,50,50,49,57,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,45),40,97,50,50,50,53,32,95,54,49,54,54,49,55,54,50,50,32,102,105,108,101,54,49,56,54,49,57,54,50,51,32,101,120,116,54,50,48,54,50,49,54,50,52,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,54,49,50,32,100,105,114,54,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,7),40,97,50,50,51,55,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,44),40,97,50,50,52,51,32,100,105,114,54,51,50,54,51,51,54,51,56,32,95,54,51,52,54,51,53,54,51,57,32,101,120,116,54,51,54,54,51,55,54,52,48,41,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,37),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,54,50,56,32,102,105,108,101,54,50,57,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,7),40,97,50,50,53,53,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,45),40,97,50,50,54,49,32,100,105,114,54,52,56,54,52,57,54,53,52,32,102,105,108,101,54,53,48,54,53,49,54,53,53,32,95,54,53,50,54,53,51,54,53,54,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,41),40,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,54,52,52,32,101,120,116,54,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,12),40,97,50,51,48,54,32,112,54,57,51,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,32),40,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,101,120,116,54,55,49,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,18),40,97,100,100,112,97,114,116,32,112,97,114,116,115,55,48,52,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,11),40,103,55,53,49,32,112,55,53,51,41,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,55,52,52,32,103,55,52,56,55,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,105,55,50,57,32,112,114,101,118,55,51,48,32,112,97,114,116,115,55,51,49,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,40),40,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,55,49,55,32,46,32,116,109,112,55,49,54,55,49,56,41};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,40),40,115,112,108,105,116,45,100,105,114,101,99,116,111,114,121,32,108,111,99,55,57,49,32,100,105,114,55,57,50,32,107,101,101,112,63,55,57,51,41};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,24),40,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,55,57,54,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,28),40,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,56,48,56,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,14),40,102,95,50,55,57,54,32,112,110,51,53,51,41,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,14),40,102,95,50,56,48,50,32,114,116,51,53,52,41,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,14),40,102,95,50,56,49,49,32,114,116,51,53,55,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,30),40,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,51,54,51,41,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,19),40,114,111,111,116,45,111,114,105,103,105,110,32,114,116,51,54,52,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,22),40,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,51,54,53,41,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_files_toplevel)
C_externexport void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1642)
static void C_fcall f_1642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static C_word C_fcall f_2676(C_word t0);
C_noret_decl(f_2657)
static void C_fcall f_2657(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2587)
static void C_fcall f_2587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_fcall f_2535(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_fcall f_2397(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_fcall f_2477(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2485)
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2450)
static void C_fcall f_2450(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static C_word C_fcall f_2343(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_fcall f_2286(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2208)
static void C_ccall f_2208(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2094)
static void C_ccall f_2094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2035)
static void C_fcall f_2035(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1981)
static void C_fcall f_1981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1954)
static void C_fcall f_1954(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1968)
static void C_ccall f_1968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1904)
static void C_fcall f_1904(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1899)
static void C_fcall f_1899(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1890)
static void C_fcall f_1890(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_fcall f_1802(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1855)
static void C_fcall f_1855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1838)
static void C_fcall f_1838(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1771)
static void C_fcall f_1771(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1710)
static void C_fcall f_1710(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1719)
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1657)
static void C_fcall f_1657(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1673)
static void C_fcall f_1673(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1590)
static void C_fcall f_1590(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_fcall f_1585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1232)
static void C_fcall f_1232(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1245)
static void C_fcall f_1245(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1248)
static void C_ccall f_1248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2989)
static void C_ccall f2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1445)
static void C_ccall f_1445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2985)
static void C_ccall f2985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1462)
static void C_ccall f_1462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_fcall f_1281(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1294)
static void C_ccall f_1294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1333)
static void C_ccall f_1333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1351)
static void C_ccall f_1351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2979)
static void C_ccall f2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1182)
static void C_fcall f_1182(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_885)
static void C_fcall f_885(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_898)
static void C_fcall f_898(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1170)
static void C_ccall f_1170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1142)
static void C_ccall f_1142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1123)
static void C_ccall f_1123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2975)
static void C_ccall f2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_916)
static void C_ccall f_916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2971)
static void C_ccall f2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_ccall f_925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_fcall f_934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_985)
static void C_ccall f_985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_988)
static void C_ccall f_988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_953)
static void C_ccall f_953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_868)
static void C_ccall f_868(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1642)
static void C_fcall trf_1642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1642(t0,t1);}

C_noret_decl(trf_2657)
static void C_fcall trf_2657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2657(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2657(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2387)
static void C_fcall trf_2387(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2387(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2387(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2587)
static void C_fcall trf_2587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2587(t0,t1);}

C_noret_decl(trf_2535)
static void C_fcall trf_2535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2535(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2535(t0,t1);}

C_noret_decl(trf_2397)
static void C_fcall trf_2397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2397(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2397(t0,t1);}

C_noret_decl(trf_2477)
static void C_fcall trf_2477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2477(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2477(t0,t1,t2);}

C_noret_decl(trf_2485)
static void C_fcall trf_2485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2485(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2485(t0,t1,t2);}

C_noret_decl(trf_2450)
static void C_fcall trf_2450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2450(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2450(t0,t1);}

C_noret_decl(trf_2286)
static void C_fcall trf_2286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2286(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2286(t0,t1);}

C_noret_decl(trf_2035)
static void C_fcall trf_2035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2035(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2035(t0,t1);}

C_noret_decl(trf_1981)
static void C_fcall trf_1981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1981(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1981(t0,t1);}

C_noret_decl(trf_1976)
static void C_fcall trf_1976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1976(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1976(t0,t1,t2);}

C_noret_decl(trf_1954)
static void C_fcall trf_1954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1954(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1954(t0,t1,t2,t3);}

C_noret_decl(trf_1904)
static void C_fcall trf_1904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1904(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1904(t0,t1);}

C_noret_decl(trf_1899)
static void C_fcall trf_1899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1899(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1899(t0,t1,t2);}

C_noret_decl(trf_1890)
static void C_fcall trf_1890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1890(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1890(t0,t1,t2,t3);}

C_noret_decl(trf_1802)
static void C_fcall trf_1802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1802(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_1802(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1855)
static void C_fcall trf_1855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1855(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1855(t0,t1);}

C_noret_decl(trf_1838)
static void C_fcall trf_1838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1838(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1838(t0,t1);}

C_noret_decl(trf_1771)
static void C_fcall trf_1771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1771(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1771(t0,t1,t2,t3);}

C_noret_decl(trf_1710)
static void C_fcall trf_1710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1710(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1710(t0,t1,t2,t3);}

C_noret_decl(trf_1719)
static void C_fcall trf_1719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1719(t0,t1,t2);}

C_noret_decl(trf_1657)
static void C_fcall trf_1657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1657(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1657(t0,t1,t2);}

C_noret_decl(trf_1673)
static void C_fcall trf_1673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1673(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1673(t0,t1);}

C_noret_decl(trf_1590)
static void C_fcall trf_1590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1590(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1590(t0,t1);}

C_noret_decl(trf_1585)
static void C_fcall trf_1585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1585(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1585(t0,t1,t2);}

C_noret_decl(trf_1232)
static void C_fcall trf_1232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1232(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1232(t0,t1,t2,t3);}

C_noret_decl(trf_1245)
static void C_fcall trf_1245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1245(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1245(t0,t1);}

C_noret_decl(trf_1281)
static void C_fcall trf_1281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1281(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1281(t0,t1,t2,t3);}

C_noret_decl(trf_1182)
static void C_fcall trf_1182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1182(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1182(t0,t1);}

C_noret_decl(trf_1177)
static void C_fcall trf_1177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1177(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1177(t0,t1,t2);}

C_noret_decl(trf_885)
static void C_fcall trf_885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_885(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_885(t0,t1,t2,t3);}

C_noret_decl(trf_898)
static void C_fcall trf_898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_898(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_898(t0,t1);}

C_noret_decl(trf_934)
static void C_fcall trf_934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_934(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_934(t0,t1,t2,t3);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_files_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_files_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("files_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(561)){
C_save(t1);
C_rereclaim2(561*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,102);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],12,"file-exists\077");
lf[3]=C_h_intern(&lf[3],11,"delete-file");
lf[4]=C_h_intern(&lf[4],12,"delete-file*");
lf[5]=C_h_intern(&lf[5],9,"file-copy");
lf[6]=C_h_intern(&lf[6],17,"close-output-port");
lf[7]=C_h_intern(&lf[7],16,"close-input-port");
lf[8]=C_h_intern(&lf[8],12,"read-string!");
lf[9]=C_h_intern(&lf[9],9,"condition");
lf[10]=C_h_intern(&lf[10],9,"\003syserror");
lf[11]=C_h_intern(&lf[11],13,"string-append");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\037error writing file starting at ");
lf[13]=C_h_intern(&lf[13],12,"write-string");
lf[14]=C_h_intern(&lf[14],22,"with-exception-handler");
lf[15]=C_h_intern(&lf[15],30,"call-with-current-continuation");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000#could not open newfile for write - ");
lf[18]=C_h_intern(&lf[18],16,"open-output-file");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000#could not open origfile for read - ");
lf[20]=C_h_intern(&lf[20],15,"open-input-file");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000&newfile exists but clobber is false - ");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\032origfile does not exist - ");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\0002invalid blocksize given: not a positive integer - ");
lf[24]=C_h_intern(&lf[24],9,"file-move");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\034could not remove origfile - ");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\037error writing file starting at ");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000#could not open newfile for write - ");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000#could not open origfile for read - ");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000&newfile exists but clobber is false - ");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\032origfile does not exist - ");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\0002invalid blocksize given: not a positive integer - ");
lf[35]=C_h_intern(&lf[35],12,"string-match");
lf[36]=C_h_intern(&lf[36],18,"absolute-pathname\077");
lf[38]=C_h_intern(&lf[38],13,"\003syssubstring");
lf[39]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[40]=C_h_intern(&lf[40],13,"make-pathname");
lf[41]=C_h_intern(&lf[41],22,"make-absolute-pathname");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[49]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[50]=C_h_intern(&lf[50],17,"\003sysstring-append");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[53]=C_h_intern(&lf[53],18,"decompose-pathname");
lf[54]=C_h_intern(&lf[54],18,"pathname-directory");
lf[55]=C_h_intern(&lf[55],13,"pathname-file");
lf[56]=C_h_intern(&lf[56],18,"pathname-extension");
lf[57]=C_h_intern(&lf[57],24,"pathname-strip-directory");
lf[58]=C_h_intern(&lf[58],24,"pathname-strip-extension");
lf[59]=C_h_intern(&lf[59],26,"pathname-replace-directory");
lf[60]=C_h_intern(&lf[60],21,"pathname-replace-file");
lf[61]=C_h_intern(&lf[61],26,"pathname-replace-extension");
lf[62]=C_h_intern(&lf[62],24,"get-environment-variable");
lf[63]=C_h_intern(&lf[63],21,"call-with-output-file");
lf[64]=C_h_intern(&lf[64],21,"create-temporary-file");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\003tmp");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\004/tmp");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003TMP");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\004TEMP");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\006TMPDIR");
lf[71]=C_h_intern(&lf[71],18,"open-output-string");
lf[72]=C_h_intern(&lf[72],17,"get-output-string");
lf[73]=C_h_intern(&lf[73],7,"reverse");
lf[74]=C_h_intern(&lf[74],7,"display");
lf[75]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004msvc\376\003\000\000\002\376\001\000\000\007mingw32\376\377\016");
lf[76]=C_h_intern(&lf[76],7,"windows");
lf[77]=C_h_intern(&lf[77],4,"unix");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002..\376\377\016");
lf[81]=C_h_intern(&lf[81],18,"normalize-pathname");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[84]=C_h_intern(&lf[84],20,"\003sysexpand-home-path");
lf[85]=C_h_intern(&lf[85],16,"\003syswrite-char-0");
lf[86]=C_h_intern(&lf[86],12,"string-split");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[89]=C_h_intern(&lf[89],15,"directory-null\077");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[92]=C_h_intern(&lf[92],19,"decompose-directory");
lf[93]=C_h_intern(&lf[93],14,"build-platform");
lf[94]=C_h_intern(&lf[94],6,"regexp");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\034^(.*[\134/\134\134])\077((\134.)\077[^\134/\134\134]+)$");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000&^(.*[\134/\134\134])\077([^\134/\134\134]+)(\134.([^\134/\134\134.]+))$");
lf[97]=C_h_intern(&lf[97],20,"\003syswindows-platform");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\026([A-Za-z]:)\077([\134/\134\134]).*");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\012([\134/\134\134]).*");
lf[100]=C_h_intern(&lf[100],17,"register-feature!");
lf[101]=C_h_intern(&lf[101],5,"files");
C_register_lf2(lf,102,create_ptable());
t2=C_mutate(&lf[0] /* (set! c178 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_860,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k858 */
static void C_ccall f_860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k861 in k858 */
static void C_ccall f_863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_866,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 62   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),t2,lf[101]);}

/* k864 in k861 in k858 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_866,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=C_mutate((C_word*)lf[4]+1 /* (set! delete-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_868,a[2]=t2,a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! file-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_883,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[24]+1 /* (set! file-move ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1230,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t7=lf[32] /* absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t8=lf[33] /* root-origin */ =C_SCHEME_UNDEFINED;;
t9=lf[34] /* root-directory */ =C_SCHEME_UNDEFINED;;
t10=*((C_word*)lf[35]+1);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1642,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[97]+1))){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2794,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 177  regexp */
t13=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,lf[98]);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2821,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 181  regexp */
t13=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,lf[99]);}}

/* k2819 in k864 in k861 in k858 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2821,2,t0,t1);}
t2=C_mutate(&lf[32] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2823,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li115),tmp=(C_word)a,a+=5,tmp));
t3=C_mutate(&lf[33] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2829,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[34] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2832,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_1642(t5,t4);}

/* root-directory in k2819 in k864 in k861 in k858 */
static void C_ccall f_2832(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2832,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_i_cadr(t2):C_SCHEME_FALSE));}

/* root-origin in k2819 in k864 in k861 in k858 */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2829,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* absolute-pathname-root in k2819 in k864 in k861 in k858 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2823,3,t0,t1,t2);}
/* files.scm: 182  string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k2792 in k864 in k861 in k858 */
static void C_ccall f_2794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2794,2,t0,t1);}
t2=C_mutate(&lf[32] /* (set! absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2796,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li112),tmp=(C_word)a,a+=5,tmp));
t3=C_mutate(&lf[33] /* (set! root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2802,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[34] /* (set! root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2811,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_1642(t5,t4);}

/* f_2811 in k2792 in k864 in k861 in k858 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2811,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_i_caddr(t2):C_SCHEME_FALSE));}

/* f_2802 in k2792 in k864 in k861 in k858 */
static void C_ccall f_2802(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2802,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_i_cadr(t2):C_SCHEME_FALSE));}

/* f_2796 in k2792 in k864 in k861 in k858 */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2796,3,t0,t1,t2);}
/* files.scm: 178  string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k1640 in k864 in k861 in k858 */
static void C_fcall f_1642(C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1642,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1 /* (set! absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[37] /* (set! chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1657,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[40] /* make-pathname */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[41] /* make-absolute-pathname */,0,C_SCHEME_UNDEFINED);
t6=*((C_word*)lf[11]+1);
t7=*((C_word*)lf[36]+1);
t8=lf[42];
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1710,a[2]=t6,a[3]=t8,a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1771,a[2]=t10,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1802,a[2]=t6,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t18=C_mutate((C_word*)lf[40]+1 /* (set! make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1888,a[2]=t12,a[3]=t14,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t19=C_mutate((C_word*)lf[41]+1 /* (set! make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1952,a[2]=t12,a[3]=t7,a[4]=t8,a[5]=t14,a[6]=((C_word)li73),tmp=(C_word)a,a+=7,tmp));
t20=*((C_word*)lf[35]+1);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2031,a[2]=((C_word*)t0)[2],a[3]=t20,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 267  regexp */
t22=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t22+1)))(3,t22,t21,lf[96]);}

/* k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 268  regexp */
t3=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[95]);}

/* k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
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
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2035,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[53]+1 /* (set! decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2049,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li75),tmp=(C_word)a,a+=7,tmp));
t4=C_set_block_item(lf[54] /* pathname-directory */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[55] /* pathname-file */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[56] /* pathname-extension */,0,C_SCHEME_UNDEFINED);
t7=C_set_block_item(lf[57] /* pathname-strip-directory */,0,C_SCHEME_UNDEFINED);
t8=C_set_block_item(lf[58] /* pathname-strip-extension */,0,C_SCHEME_UNDEFINED);
t9=C_set_block_item(lf[59] /* pathname-replace-directory */,0,C_SCHEME_UNDEFINED);
t10=C_set_block_item(lf[60] /* pathname-replace-file */,0,C_SCHEME_UNDEFINED);
t11=C_set_block_item(lf[61] /* pathname-replace-extension */,0,C_SCHEME_UNDEFINED);
t12=*((C_word*)lf[53]+1);
t13=C_mutate((C_word*)lf[54]+1 /* (set! pathname-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2133,a[2]=t12,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[55]+1 /* (set! pathname-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2148,a[2]=t12,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[56]+1 /* (set! pathname-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2163,a[2]=t12,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t16=C_mutate((C_word*)lf[57]+1 /* (set! pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2178,a[2]=t12,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t17=C_mutate((C_word*)lf[58]+1 /* (set! pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2196,a[2]=t12,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp));
t18=C_mutate((C_word*)lf[59]+1 /* (set! pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2214,a[2]=t12,a[3]=((C_word)li93),tmp=(C_word)a,a+=4,tmp));
t19=C_mutate((C_word*)lf[60]+1 /* (set! pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2232,a[2]=t12,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp));
t20=C_mutate((C_word*)lf[61]+1 /* (set! pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2250,a[2]=t12,a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp));
t21=*((C_word*)lf[62]+1);
t22=*((C_word*)lf[40]+1);
t23=*((C_word*)lf[2]+1);
t24=*((C_word*)lf[63]+1);
t25=C_mutate((C_word*)lf[64]+1 /* (set! create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2268,a[2]=t21,a[3]=t22,a[4]=t23,a[5]=t24,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp));
t26=*((C_word*)lf[71]+1);
t27=*((C_word*)lf[72]+1);
t28=*((C_word*)lf[62]+1);
t29=*((C_word*)lf[73]+1);
t30=*((C_word*)lf[74]+1);
t31=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[2],a[3]=t26,a[4]=t29,a[5]=t30,a[6]=t27,tmp=(C_word)a,a+=7,tmp);
/* files.scm: 365  build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[93]+1)))(2,*((C_word*)lf[93]+1),t31);}

/* k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2791,2,t0,t1);}
t2=(C_word)C_i_memq(t1,lf[75]);
t3=(C_truep(t2)?lf[76]:lf[77]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2343,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[81]+1 /* (set! normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2369,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li107),tmp=(C_word)a,a+=9,tmp));
t6=*((C_word*)lf[86]+1);
t7=C_mutate(&lf[87] /* (set! split-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2657,a[2]=t6,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[89]+1 /* (set! directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[92]+1 /* (set! decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}

/* decompose-directory in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2708,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2756,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 456  split-directory */
t4=lf[87];
f_2657(t4,t3,lf[92],t2,C_SCHEME_FALSE);}

/* k2754 in decompose-directory in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* files.scm: 457  absolute-pathname-root */
((C_proc3)C_retrieve_proc(lf[32]))(3,lf[32],t2,((C_word*)t0)[2]);}

/* k2757 in k2754 in decompose-directory in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2762,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 458  root-origin */
((C_proc3)C_retrieve_proc(lf[33]))(3,lf[33],t2,t1);}

/* k2760 in k2757 in k2754 in decompose-directory in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 459  root-directory */
((C_proc3)C_retrieve_proc(lf[34]))(3,lf[34],t2,((C_word*)t0)[2]);}

/* k2767 in k2760 in k2757 in k2754 in decompose-directory in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2769,2,t0,t1);}
t2=(C_word)C_i_nullp(((C_word*)t0)[4]);
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
if(C_truep(t4)){
t5=(C_word)C_i_car(t3);
t6=(C_word)C_block_size(t4);
if(C_truep((C_word)C_substring_compare(t4,t5,C_fix(0),C_fix(0),t6))){
t7=(C_word)C_i_cdr(t3);
t8=(C_word)C_block_size(t5);
t9=(C_word)C_block_size(t8);
t10=(C_word)C_eqp(t6,t9);
if(C_truep(t10)){
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t7);}
else{
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2749,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* files.scm: 455  ##sys#substring */
t12=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,t5,t6,t8);}}
else{
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t3);}}
else{
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[2],((C_word*)t0)[3],t1,t3);}}

/* k2747 in k2767 in k2760 in k2757 in k2754 in decompose-directory in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* files.scm: 459  values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* directory-null? in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2666,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2674,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_listp(t2))){
t4=t3;
f_2674(2,t4,t2);}
else{
/* files.scm: 430  split-directory */
t4=lf[87];
f_2657(t4,t3,lf[89],t2,C_SCHEME_TRUE);}}

/* k2672 in directory-null? in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2674,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2676(t1));}

/* loop in k2672 in directory-null? in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static C_word C_fcall f_2676(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=(C_word)C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=(C_word)C_i_car(t1);
if(C_truep((C_truep((C_word)C_i_equalp(t3,lf[90]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t3,lf[91]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=(C_word)C_i_cdr(t1);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* split-directory in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2657(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2657,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t3,t2);
/* files.scm: 424  string-split */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t3,lf[88],t4);}

/* normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_2369r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2369r(t0,t1,t2,t3);}}

static void C_ccall f_2369r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2373,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2373(2,t5,((C_word*)t0)[2]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2373(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[76]);
t3=(C_truep(t2)?C_make_character(92):C_make_character(47));
t4=(C_word)C_i_check_string_2(((C_word*)t0)[8],lf[81]);
t5=(C_word)C_block_size(((C_word*)t0)[8]);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2387,a[2]=t1,a[3]=t11,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t9,a[11]=t3,a[12]=t7,a[13]=t5,a[14]=((C_word)li106),tmp=(C_word)a,a+=15,tmp));
t13=((C_word*)t11)[1];
f_2387(t13,((C_word*)t0)[2],C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2387,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[13]))){
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2397,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t5,tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2521,a[2]=t6,a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 379  ##sys#substring */
t8=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,((C_word*)t0)[4],t3,t2);}
else{
t7=t6;
f_2397(t7,C_SCHEME_UNDEFINED);}}
else{
t6=(C_word)C_i_string_ref(((C_word*)t0)[4],t2);
if(C_truep((C_truep((C_word)C_eqp(t6,C_make_character(92)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t6,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t5)[1]))){
t8=(C_word)C_eqp(t2,t3);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t10=t7;
f_2535(t10,t9);}
else{
t9=t7;
f_2535(t9,C_SCHEME_UNDEFINED);}}
else{
t8=t7;
f_2535(t8,C_SCHEME_UNDEFINED);}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2587,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t5)[1]))){
t8=(C_word)C_i_string_ref(((C_word*)t0)[4],t2);
t9=(C_word)C_eqp(t8,C_make_character(58));
t10=t7;
f_2587(t10,(C_truep(t9)?(C_word)C_eqp(lf[76],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t8=t7;
f_2587(t8,C_SCHEME_FALSE);}}}}

/* k2585 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2587,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2591,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* files.scm: 412  ##sys#substring */
t4=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[4],C_fix(0),t3);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* files.scm: 414  loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2387(t3,((C_word*)t0)[5],t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2589 in k2585 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* files.scm: 413  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2387(t5,((C_word*)t0)[2],t3,t4,C_SCHEME_END_OF_LIST);}

/* k2533 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2535(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2535,NULL,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[8],((C_word*)t0)[7]);
if(C_truep(t2)){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
/* files.scm: 405  loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2387(t5,((C_word*)t0)[5],t3,t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2571,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* files.scm: 408  ##sys#substring */
t6=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k2569 in k2533 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2571,2,t0,t1);}
t2=f_2343(C_a_i(&a,3),t1,((C_word*)((C_word*)t0)[6])[1]);
/* files.scm: 406  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2387(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2519 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=f_2343(C_a_i(&a,3),t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_2397(t4,t3);}

/* k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2397(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2397,NULL,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
if(C_truep(((C_word*)((C_word*)t0)[11])[1])){
t2=(C_word)C_a_i_string(&a,1,((C_word*)t0)[10]);
/* files.scm: 382  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[9],t2,lf[82]);}
else{
t2=(C_word)C_a_i_string(&a,1,((C_word*)t0)[10]);
/* files.scm: 383  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[9],lf[83],t2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* files.scm: 384  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}}

/* k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* files.scm: 385  reverse */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(C_word)C_i_car(t1);
/* files.scm: 386  display */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,((C_word*)t0)[5]);}

/* k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2432,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2477,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word)li105),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2477(t7,t2,t3);}

/* loop744 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2477(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2477,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2485,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2495,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g751752 */
t6=t3;
f_2485(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2493 in loop744 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2477(t3,((C_word*)t0)[2],t2);}

/* g751 in loop744 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2485,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 389  ##sys#write-char-0 */
((C_proc4)C_retrieve_proc(*((C_word*)lf[85]+1)))(4,*((C_word*)lf[85]+1),t3,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2487 in g751 in loop744 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 390  display */
t2=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2430 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t3)){
/* files.scm: 392  ##sys#write-char-0 */
((C_proc4)C_retrieve_proc(*((C_word*)lf[85]+1)))(4,*((C_word*)lf[85]+1),t2,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
t4=t2;
f_2435(2,t4,C_SCHEME_UNDEFINED);}}

/* k2433 in k2430 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 393  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2436 in k2433 in k2430 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* files.scm: 394  ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t2,t1);}

/* k2439 in k2436 in k2433 in k2430 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2441,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_i_string_equal_p(((C_word*)t0)[6],((C_word*)t3)[1]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2450,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2461,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_a_i_string(&a,1,((C_word*)t0)[2]);
/* files.scm: 397  ##sys#string-append */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t3)[1]);}
else{
t5=t4;
f_2450(t5,C_SCHEME_UNDEFINED);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t3)[1]);}}

/* k2459 in k2439 in k2436 in k2433 in k2430 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2450(t3,t2);}

/* k2448 in k2439 in k2436 in k2433 in k2430 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2450(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2450,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 399  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}}

/* k2455 in k2448 in k2439 in k2436 in k2433 in k2430 in k2427 in k2424 in k2421 in k2395 in loop in k2371 in normalize-pathname in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* addpart in k2789 in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static C_word C_fcall f_2343(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
if(C_truep((C_word)C_i_string_equal_p(lf[78],t1))){
t3=t2;
return(t3);}
else{
if(C_truep((C_word)C_i_string_equal_p(lf[79],t1))){
t3=(C_word)C_i_nullp(t2);
return((C_truep(t3)?lf[80]:(C_word)C_i_cdr(t2)));}
else{
return((C_word)C_a_i_cons(&a,2,t1,t2));}}}

/* create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2268r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2268r(t0,t1,t2);}}

static void C_ccall f_2268r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* files.scm: 343  get-environment-variable */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[70]);}

/* k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_2275(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 344  get-environment-variable */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[69]);}}

/* k2323 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2325,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[4];
f_2275(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2331,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 345  get-environment-variable */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[68]);}}

/* k2329 in k2323 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2275(2,t2,t1);}
else{
/* files.scm: 346  file-exists? */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],lf[67]);}}

/* k2273 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2275,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[6]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[6],C_fix(0)):lf[65]);
t4=(C_word)C_i_check_string_2(t3,lf[64]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2286,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t6,a[8]=((C_word)li101),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_2286(t8,((C_word*)t0)[2]);}

/* loop in k2273 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2286(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2286,NULL,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(16));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2316,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 351  number->string */
C_number_to_string(4,0,t5,t2,C_fix(16));}

/* k2314 in loop in k2273 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 351  ##sys#string-append */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[66],t1);}

/* k2310 in loop in k2273 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 351  make-pathname */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2291 in loop in k2273 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2299,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 352  file-exists? */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k2297 in k2291 in loop in k2273 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2299,2,t0,t1);}
if(C_truep(t1)){
/* files.scm: 353  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2286(t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[3],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
/* files.scm: 354  call-with-output-file */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}}

/* a2306 in k2297 in k2291 in loop in k2273 in k2270 in create-temporary-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2307,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* pathname-replace-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2250,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2256,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2262,a[2]=t3,a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2261 in pathname-replace-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2262,5,t0,t1,t2,t3,t4);}
/* files.scm: 335  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,t2,t3,((C_word*)t0)[2]);}

/* a2255 in pathname-replace-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2256,2,t0,t1);}
/* files.scm: 334  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2232,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2238,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li94),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2244,a[2]=t3,a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2243 in pathname-replace-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2244,5,t0,t1,t2,t3,t4);}
/* files.scm: 330  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,t2,((C_word*)t0)[2],t4);}

/* a2237 in pathname-replace-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2238,2,t0,t1);}
/* files.scm: 329  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2214,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2220,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2226,a[2]=t3,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2225 in pathname-replace-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2226,5,t0,t1,t2,t3,t4);}
/* files.scm: 325  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,((C_word*)t0)[2],t3,t4);}

/* a2219 in pathname-replace-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2220,2,t0,t1);}
/* files.scm: 324  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2196,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2202,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2208,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2207 in pathname-strip-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2208(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2208,5,t0,t1,t2,t3,t4);}
/* files.scm: 320  make-pathname */
((C_proc4)C_retrieve_proc(*((C_word*)lf[40]+1)))(4,*((C_word*)lf[40]+1),t1,t2,t3);}

/* a2201 in pathname-strip-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2202,2,t0,t1);}
/* files.scm: 319  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2178,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2184,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2190,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2189 in pathname-strip-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2190,5,t0,t1,t2,t3,t4);}
/* files.scm: 315  make-pathname */
((C_proc5)C_retrieve_proc(*((C_word*)lf[40]+1)))(5,*((C_word*)lf[40]+1),t1,C_SCHEME_FALSE,t3,t4);}

/* a2183 in pathname-strip-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2184,2,t0,t1);}
/* files.scm: 314  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2163,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2169,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2175,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2174 in pathname-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2175,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a2168 in pathname-extension in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
/* files.scm: 309  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2148,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2154,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2160,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2159 in pathname-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2160,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* a2153 in pathname-file in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2154,2,t0,t1);}
/* files.scm: 304  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2133(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2133,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2139,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li76),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2144 in pathname-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2145,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a2138 in pathname-directory in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2139,2,t0,t1);}
/* files.scm: 299  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* decompose-pathname in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2049,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[53]);
t4=(C_word)C_block_size(t2);
t5=(C_word)C_eqp(C_fix(0),t4);
if(C_truep(t5)){
/* files.scm: 278  values */
C_values(5,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2065,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* files.scm: 279  string-match */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[2],t2);}}

/* k2063 in decompose-pathname in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2065,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(t1);
/* files.scm: 281  strip-pds */
f_2035(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 282  string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k2092 in k2063 in decompose-pathname in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2094,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(t1);
/* files.scm: 284  strip-pds */
f_2035(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2119,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 285  strip-pds */
f_2035(t2,((C_word*)t0)[2]);}}

/* k2117 in k2092 in k2063 in decompose-pathname in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 285  values */
C_values(5,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2102 in k2092 in k2063 in decompose-pathname in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_caddr(((C_word*)t0)[3]);
/* files.scm: 284  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,C_SCHEME_FALSE);}

/* k2073 in k2063 in decompose-pathname in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_caddr(((C_word*)t0)[3]);
t3=(C_word)C_i_cddddr(((C_word*)t0)[3]);
t4=(C_word)C_i_car(t3);
/* files.scm: 281  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,t4);}

/* strip-pds in k2032 in k2029 in k1640 in k864 in k861 in k858 */
static void C_fcall f_2035(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2035,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=t2;
if(C_truep((C_truep((C_word)C_i_equalp(t3,lf[51]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t3,lf[52]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* files.scm: 274  chop-pds */
f_1657(t1,t2,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* make-absolute-pathname in k1640 in k864 in k861 in k858 */
static void C_ccall f_1952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_1952r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1952r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1952r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1954,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word)li70),tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1976,a[2]=t5,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1981,a[2]=t6,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-ext496513 */
t8=t7;
f_1981(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-pds497511 */
t10=t6;
f_1976(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body494502 */
t12=t5;
f_1954(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-ext496 in make-absolute-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1981(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1981,NULL,2,t0,t1);}
/* def-pds497511 */
t2=((C_word*)t0)[2];
f_1976(t2,t1,C_SCHEME_FALSE);}

/* def-pds497 in make-absolute-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1976,NULL,3,t0,t1,t2);}
/* body494502 */
t3=((C_word*)t0)[2];
f_1954(t3,t1,t2,C_SCHEME_FALSE);}

/* body494 in make-absolute-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1954(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1954,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1962,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* files.scm: 257  canonicalize-dirs */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1771(t5,t4,((C_word*)t0)[2],t3);}

/* k1960 in body494 in make-absolute-pathname in k1640 in k864 in k861 in k858 */
static void C_ccall f_1962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1965,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1968,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* files.scm: 258  absolute-pathname? */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k1966 in k1960 in body494 in make-absolute-pathname in k1640 in k864 in k861 in k858 */
static void C_ccall f_1968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[9];
/* files.scm: 255  _make-pathname */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1802(t3,((C_word*)t0)[7],lf[41],t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
if(C_truep(t2)){
/* files.scm: 260  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[9]);}
else{
/* files.scm: 260  ##sys#string-append */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[9]);}}}

/* k1963 in k1960 in body494 in make-absolute-pathname in k1640 in k864 in k861 in k858 */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 255  _make-pathname */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1802(t2,((C_word*)t0)[5],lf[41],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* make-pathname in k1640 in k864 in k861 in k858 */
static void C_ccall f_1888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_1888r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1888r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1888r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1890,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1899,a[2]=t5,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1904,a[2]=t6,a[3]=((C_word)li68),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-ext464475 */
t8=t7;
f_1904(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-pds465473 */
t10=t6;
f_1899(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body462470 */
t12=t5;
f_1890(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-ext464 in make-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1904(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1904,NULL,2,t0,t1);}
/* def-pds465473 */
t2=((C_word*)t0)[2];
f_1899(t2,t1,C_SCHEME_FALSE);}

/* def-pds465 in make-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1899(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1899,NULL,3,t0,t1,t2);}
/* body462470 */
t3=((C_word*)t0)[2];
f_1890(t3,t1,t2,C_SCHEME_FALSE);}

/* body462 in make-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1890(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1890,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1898,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 251  canonicalize-dirs */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1771(t5,t4,((C_word*)t0)[2],t3);}

/* k1896 in body462 in make-pathname in k1640 in k864 in k861 in k858 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 251  _make-pathname */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1802(t2,((C_word*)t0)[5],lf[40],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* _make-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1802(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1802,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_truep(t5)?t5:lf[45]);
t8=(C_truep(t4)?t4:lf[46]);
t9=(C_truep(t6)?(C_word)C_block_size(t6):C_fix(1));
t10=(C_word)C_i_check_string_2(t3,t2);
t11=(C_word)C_i_check_string_2(t8,t2);
t12=(C_word)C_i_check_string_2(t7,t2);
t13=(C_truep(t6)?(C_word)C_i_check_string_2(t6,t2):C_SCHEME_UNDEFINED);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1831,a[2]=t7,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1855,a[2]=t9,a[3]=t14,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t16=(C_word)C_block_size(t8);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t16,t9))){
if(C_truep(t6)){
t17=(C_word)C_substring_compare(t6,t8,C_fix(0),C_fix(0),t9);
t18=t15;
f_1855(t18,t17);}
else{
t17=(C_word)C_subchar(t8,C_fix(0));
t18=t15;
f_1855(t18,(C_word)C_i_memq(t17,lf[49]));}}
else{
t17=t15;
f_1855(t17,C_SCHEME_FALSE);}}

/* k1853 in _make-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1855(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(((C_word*)t0)[4]);
/* files.scm: 241  ##sys#substring */
t3=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
f_1831(2,t2,((C_word*)t0)[4]);}}

/* k1829 in _make-pathname in k1640 in k864 in k861 in k858 */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
t4=(C_word)C_eqp((C_word)C_subchar(((C_word*)t0)[2],C_fix(0)),C_make_character(46));
t5=t2;
f_1838(t5,(C_word)C_i_not(t4));}
else{
t4=t2;
f_1838(t4,C_SCHEME_FALSE);}}

/* k1836 in k1829 in _make-pathname in k1640 in k864 in k861 in k858 */
static void C_fcall f_1838(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* files.scm: 235  string-append */
t2=((C_word*)t0)[6];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[47],((C_word*)t0)[2]);}
else{
/* files.scm: 235  string-append */
t2=((C_word*)t0)[6];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[48],((C_word*)t0)[2]);}}

/* canonicalize-dirs in k1640 in k864 in k861 in k858 */
static void C_fcall f_1771(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1771,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not(t2);
t5=(C_truep(t4)?t4:(C_word)C_i_nullp(t2));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[44]);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t6=(C_word)C_a_i_list(&a,1,t2);
/* files.scm: 224  conc-dirs */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1710(t7,t1,t6,t3);}
else{
/* files.scm: 225  conc-dirs */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1710(t6,t1,t2,t3);}}}

/* conc-dirs in k1640 in k864 in k861 in k858 */
static void C_fcall f_1710(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1710,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_list_2(t2,lf[40]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1719(t8,t1,t2);}

/* loop in conc-dirs in k1640 in k864 in k861 in k858 */
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1719,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[43]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_string_length(t3);
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t2);
/* files.scm: 216  loop */
t10=t1;
t11=t6;
t1=t10;
t2=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1749,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_i_car(t2);
/* files.scm: 218  chop-pds */
f_1657(t6,t7,((C_word*)t0)[4]);}}}

/* k1747 in loop in conc-dirs in k1640 in k864 in k861 in k858 */
static void C_ccall f_1749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1749,2,t0,t1);}
t2=((C_word*)t0)[7];
t3=(C_truep(t2)?t2:((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1757,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* files.scm: 220  loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1719(t6,t4,t5);}

/* k1755 in k1747 in loop in conc-dirs in k1640 in k864 in k861 in k858 */
static void C_ccall f_1757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 217  string-append */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop-pds in k1640 in k864 in k861 in k858 */
static void C_fcall f_1657(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1657,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_block_size(t2);
t5=(C_truep(t3)?(C_word)C_block_size(t3):C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1673,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,C_fix(1)))){
if(C_truep(t3)){
t7=(C_word)C_fixnum_difference(t4,t5);
t8=(C_word)C_substring_compare(t2,t3,t7,C_fix(0),t5);
t9=t6;
f_1673(t9,t8);}
else{
t7=(C_word)C_fixnum_difference(t4,t5);
t8=(C_word)C_subchar(t2,t7);
t9=t6;
f_1673(t9,(C_word)C_i_memq(t8,lf[39]));}}
else{
t7=t6;
f_1673(t7,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1671 in chop-pds in k1640 in k864 in k861 in k858 */
static void C_fcall f_1673(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm: 200  ##sys#substring */
t3=*((C_word*)lf[38]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* absolute-pathname? in k1640 in k864 in k861 in k858 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1644,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[36]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 188  absolute-pathname-root */
((C_proc3)C_retrieve_proc(lf[32]))(3,lf[32],t4,t2);}

/* k1653 in absolute-pathname? in k1640 in k864 in k861 in k858 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_pairp(t1));}

/* file-move in k864 in k861 in k858 */
static void C_ccall f_1230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_1230r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1230r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1230r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1232,a[2]=t3,a[3]=t2,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1585,a[2]=t5,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1590,a[2]=t6,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-clobber196346 */
t8=t7;
f_1590(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-blocksize197344 */
t10=t6;
f_1585(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body194202 */
t12=t5;
f_1232(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-clobber196 in file-move in k864 in k861 in k858 */
static void C_fcall f_1590(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1590,NULL,2,t0,t1);}
/* def-blocksize197344 */
t2=((C_word*)t0)[2];
f_1585(t2,t1,C_SCHEME_FALSE);}

/* def-blocksize197 in file-move in k864 in k861 in k858 */
static void C_fcall f_1585(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1585,NULL,3,t0,t1,t2);}
/* body194202 */
t3=((C_word*)t0)[2];
f_1232(t3,t1,t2,C_fix(1024));}

/* body194 in file-move in k864 in k861 in k858 */
static void C_fcall f_1232(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1232,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[24]);
t5=(C_word)C_i_check_string_2(((C_word*)t0)[2],lf[24]);
t6=(C_word)C_i_check_number_2(t3,lf[24]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1245,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_integerp(t3))){
t8=t3;
t9=t7;
f_1245(t9,(C_word)C_fixnum_greaterp(t8,C_fix(0)));}
else{
t8=t7;
f_1245(t8,C_SCHEME_FALSE);}}

/* k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_fcall f_1245(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1245,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_1248(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1574,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1578,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 124  number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[5]);}}

/* k1576 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 122  string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[31],t1);}

/* k1572 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 122  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1248,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 125  file-exists? */
t3=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_1254(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1567,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 126  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[30],((C_word*)t0)[6]);}}

/* k1565 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 126  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1257,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1550,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 127  file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k1548 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1550,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_1257(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 129  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[29],((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
f_1257(2,t2,C_SCHEME_FALSE);}}

/* k1558 in k1548 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 129  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[5],a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1494,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1500,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1525,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1524 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1531,a[2]=((C_word*)t0)[3],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[2],a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1536 in a1524 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1537r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1537r(t0,t1,t2);}}

static void C_ccall f_1537r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1543,a[2]=t2,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
/* k233238 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1542 in a1536 in a1524 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1543,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1530 in a1524 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1531,2,t0,t1);}
/* files.scm: 132  open-input-file */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1499 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1500,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
/* k233238 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1505 in a1499 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1506,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1517,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 134  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[28],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2989,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 134  string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[28],((C_word*)t0)[2]);}}

/* f2989 in a1505 in a1499 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 134  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1515 in a1505 in a1499 in a1493 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 134  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* g236237 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1439,a[2]=((C_word*)t0)[2],a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1439,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1445,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1470,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1469 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1476,a[2]=((C_word*)t0)[3],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1481 in a1469 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1482r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1482r(t0,t1,t2);}}

static void C_ccall f_1482r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1488,a[2]=t2,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
/* k259264 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1487 in a1481 in a1469 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1488,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1475 in a1469 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1476,2,t0,t1);}
/* files.scm: 137  open-output-file */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1444 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1445,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1451,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
/* k259264 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1450 in a1444 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1451,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1462,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 139  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[27],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2985,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 139  string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[27],((C_word*)t0)[2]);}}

/* f2985 in a1450 in a1444 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f2985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 139  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1460 in a1450 in a1444 in a1438 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 139  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* g262263 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 142  make-string */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* files.scm: 143  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1279,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1281,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_1281(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_fcall f_1281(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1281,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(C_fix(0),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1291,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* files.scm: 147  close-input-port */
t7=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[5]);}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1358,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1374,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word)li40),tmp=(C_word)a,a+=8,tmp);
/* call-with-current-continuation */
t8=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}}

/* a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1374,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1380,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1415,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1414 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1427,a[2]=((C_word*)t0)[2],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1426 in a1414 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1427r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1427r(t0,t1,t2);}}

static void C_ccall f_1427r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1433,a[2]=t2,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
/* k316321 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1432 in a1426 in a1414 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1433,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1420 in a1414 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1421,2,t0,t1);}
/* files.scm: 156  write-string */
((C_proc5)C_retrieve_proc(*((C_word*)lf[13]+1)))(5,*((C_word*)lf[13]+1),t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1379 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1380(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1380,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1386,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp);
/* k316321 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1385 in a1379 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1386,2,t0,t1);}
t2=(C_word)C_i_structurep(((C_word*)t0)[5],lf[9]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[5],C_fix(1)):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 158  close-input-port */
t5=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k1391 in a1385 in a1379 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 159  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1394 in k1391 in a1385 in a1379 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1403,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1407,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 162  number->string */
C_number_to_string(3,0,t3,((C_word*)t0)[2]);}

/* k1405 in k1394 in k1391 in a1385 in a1379 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 160  string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[26],t1);}

/* k1401 in k1394 in k1391 in a1385 in a1379 in a1373 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 160  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1356 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* g319320 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1359 in k1356 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 163  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1366 in k1359 in k1356 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm: 163  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1281(t3,((C_word*)t0)[2],t1,t2);}

/* k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1294,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 148  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1302,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1308,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1333,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1332 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1339,a[2]=((C_word*)t0)[3],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[2],a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1344 in a1332 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1345r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1345r(t0,t1,t2);}}

static void C_ccall f_1345r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1351,a[2]=t2,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
/* k288293 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1350 in a1344 in a1332 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1351,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1338 in a1332 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1339,2,t0,t1);}
/* files.scm: 149  delete-file */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1307 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1308,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1314,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
/* k288293 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1313 in a1307 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1325,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 151  string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[25],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2979,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 151  string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[25],((C_word*)t0)[2]);}}

/* f2979 in a1313 in a1307 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 151  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1323 in a1313 in a1307 in a1301 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 151  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1295 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* g291292 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1298 in k1295 in k1292 in k1289 in loop in k1277 in k1270 in k1267 in k1264 in k1261 in k1258 in k1255 in k1252 in k1249 in k1246 in k1243 in body194 in file-move in k864 in k861 in k858 */
static void C_ccall f_1300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* file-copy in k864 in k861 in k858 */
static void C_ccall f_883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_883r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_883r(t0,t1,t2,t3,t4);}}

static void C_ccall f_883r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_885,a[2]=t3,a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1177,a[2]=t5,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1182,a[2]=t6,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-clobber49173 */
t8=t7;
f_1182(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-blocksize50171 */
t10=t6;
f_1177(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body4755 */
t12=t5;
f_885(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-clobber49 in file-copy in k864 in k861 in k858 */
static void C_fcall f_1182(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1182,NULL,2,t0,t1);}
/* def-blocksize50171 */
t2=((C_word*)t0)[2];
f_1177(t2,t1,C_SCHEME_FALSE);}

/* def-blocksize50 in file-copy in k864 in k861 in k858 */
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1177,NULL,3,t0,t1,t2);}
/* body4755 */
t3=((C_word*)t0)[2];
f_885(t3,t1,t2,C_fix(1024));}

/* body47 in file-copy in k864 in k861 in k858 */
static void C_fcall f_885(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_885,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[5]);
t5=(C_word)C_i_check_string_2(((C_word*)t0)[2],lf[5]);
t6=(C_word)C_i_check_number_2(t3,lf[5]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_898,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_integerp(t3))){
t8=t3;
t9=t7;
f_898(t9,(C_word)C_fixnum_greaterp(t8,C_fix(0)));}
else{
t8=t7;
f_898(t8,C_SCHEME_FALSE);}}

/* k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_fcall f_898(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_898,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_901(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1166,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1170,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 81   number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[6]);}}

/* k1168 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 79   string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[23],t1);}

/* k1164 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 79   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 82   file-exists? */
t3=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_907(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1159,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 83   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[22],((C_word*)t0)[3]);}}

/* k1157 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 83   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1142,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* files.scm: 84   file-exists? */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k1140 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1142,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_910(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1152,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 86   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[21],((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
f_910(2,t2,C_SCHEME_FALSE);}}

/* k1150 in k1140 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 86   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1086,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1086,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1092,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1117,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1116 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1123,a[2]=((C_word*)t0)[3],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1129,a[2]=((C_word*)t0)[2],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1128 in a1116 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1129r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1129r(t0,t1,t2);}}

static void C_ccall f_1129r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1135,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* k8691 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1134 in a1128 in a1116 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1135,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1122 in a1116 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1123,2,t0,t1);}
/* files.scm: 89   open-input-file */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1091 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1092(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1092,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1098,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp);
/* k8691 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1097 in a1091 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1098,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 91   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[19],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2975,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 91   string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[19],((C_word*)t0)[2]);}}

/* f2975 in a1097 in a1091 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 91   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1107 in a1097 in a1091 in a1085 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 91   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g8990 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1031,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1031,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1037,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1062,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1061 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1068,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1074,a[2]=((C_word*)t0)[2],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1073 in a1061 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1074(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1074r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1074r(t0,t1,t2);}}

static void C_ccall f_1074r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1080,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
/* k112117 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1079 in a1073 in a1061 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1080,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1067 in a1061 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1068,2,t0,t1);}
/* files.scm: 94   open-output-file */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1036 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1037(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1037,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1043,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* k112117 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1042 in a1036 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1043,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[3],lf[9]))){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1054,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 96   string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[17],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f2971,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 96   string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[17],((C_word*)t0)[2]);}}

/* f2971 in a1042 in a1036 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 96   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1052 in a1042 in a1036 in a1030 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 96   ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* g115116 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* files.scm: 99   make-string */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_932,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* files.scm: 100  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_932,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_934,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li8),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_934(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_fcall f_934(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_934,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(C_fix(0),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_944,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 104  close-input-port */
t7=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[5]);}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_950,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_966,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp);
/* call-with-current-continuation */
t8=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}}

/* a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_966(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_966,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_972,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1007,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li6),tmp=(C_word)a,a+=7,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[14]+1)))(4,*((C_word*)lf[14]+1),t1,t3,t4);}

/* a1006 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[2],a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1018 in a1006 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1019(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1019r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1019r(t0,t1,t2);}}

static void C_ccall f_1019r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1025,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
/* k143148 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1024 in a1018 in a1006 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1012 in a1006 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1013,2,t0,t1);}
/* files.scm: 108  write-string */
((C_proc5)C_retrieve_proc(*((C_word*)lf[13]+1)))(5,*((C_word*)lf[13]+1),t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a971 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_972,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word)li1),tmp=(C_word)a,a+=7,tmp);
/* k143148 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a977 in a971 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_978,2,t0,t1);}
t2=(C_word)C_i_structurep(((C_word*)t0)[5],lf[9]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[5],C_fix(1)):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_985,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 110  close-input-port */
t5=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k983 in a977 in a971 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_988,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 111  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k986 in k983 in a977 in a971 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_995,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* files.scm: 114  number->string */
C_number_to_string(3,0,t3,((C_word*)t0)[2]);}

/* k997 in k986 in k983 in a977 in a971 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 112  string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[12],t1);}

/* k993 in k986 in k983 in a977 in a971 in a965 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* files.scm: 112  ##sys#error */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k948 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* g146147 */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k951 in k948 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* files.scm: 115  read-string! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k958 in k951 in k948 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* files.scm: 115  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_934(t3,((C_word*)t0)[2],t1,t2);}

/* k942 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* files.scm: 105  close-output-port */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k945 in k942 in loop in k930 in k923 in k920 in k917 in k914 in k911 in k908 in k905 in k902 in k899 in k896 in body47 in file-copy in k864 in k861 in k858 */
static void C_ccall f_947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* delete-file* in k864 in k861 in k858 */
static void C_ccall f_868(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_868,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_875,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* files.scm: 71   file-exists? */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k873 in delete-file* in k864 in k861 in k858 */
static void C_ccall f_875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_875,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_881,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* files.scm: 71   delete-file */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k879 in k873 in delete-file* in k864 in k861 in k858 */
static void C_ccall f_881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[242] = {
{"toplevel:files_scm",(void*)C_files_toplevel},
{"f_860:files_scm",(void*)f_860},
{"f_863:files_scm",(void*)f_863},
{"f_866:files_scm",(void*)f_866},
{"f_2821:files_scm",(void*)f_2821},
{"f_2832:files_scm",(void*)f_2832},
{"f_2829:files_scm",(void*)f_2829},
{"f_2823:files_scm",(void*)f_2823},
{"f_2794:files_scm",(void*)f_2794},
{"f_2811:files_scm",(void*)f_2811},
{"f_2802:files_scm",(void*)f_2802},
{"f_2796:files_scm",(void*)f_2796},
{"f_1642:files_scm",(void*)f_1642},
{"f_2031:files_scm",(void*)f_2031},
{"f_2034:files_scm",(void*)f_2034},
{"f_2791:files_scm",(void*)f_2791},
{"f_2708:files_scm",(void*)f_2708},
{"f_2756:files_scm",(void*)f_2756},
{"f_2759:files_scm",(void*)f_2759},
{"f_2762:files_scm",(void*)f_2762},
{"f_2769:files_scm",(void*)f_2769},
{"f_2749:files_scm",(void*)f_2749},
{"f_2666:files_scm",(void*)f_2666},
{"f_2674:files_scm",(void*)f_2674},
{"f_2676:files_scm",(void*)f_2676},
{"f_2657:files_scm",(void*)f_2657},
{"f_2369:files_scm",(void*)f_2369},
{"f_2373:files_scm",(void*)f_2373},
{"f_2387:files_scm",(void*)f_2387},
{"f_2587:files_scm",(void*)f_2587},
{"f_2591:files_scm",(void*)f_2591},
{"f_2535:files_scm",(void*)f_2535},
{"f_2571:files_scm",(void*)f_2571},
{"f_2521:files_scm",(void*)f_2521},
{"f_2397:files_scm",(void*)f_2397},
{"f_2423:files_scm",(void*)f_2423},
{"f_2426:files_scm",(void*)f_2426},
{"f_2429:files_scm",(void*)f_2429},
{"f_2477:files_scm",(void*)f_2477},
{"f_2495:files_scm",(void*)f_2495},
{"f_2485:files_scm",(void*)f_2485},
{"f_2489:files_scm",(void*)f_2489},
{"f_2432:files_scm",(void*)f_2432},
{"f_2435:files_scm",(void*)f_2435},
{"f_2438:files_scm",(void*)f_2438},
{"f_2441:files_scm",(void*)f_2441},
{"f_2461:files_scm",(void*)f_2461},
{"f_2450:files_scm",(void*)f_2450},
{"f_2457:files_scm",(void*)f_2457},
{"f_2343:files_scm",(void*)f_2343},
{"f_2268:files_scm",(void*)f_2268},
{"f_2272:files_scm",(void*)f_2272},
{"f_2325:files_scm",(void*)f_2325},
{"f_2331:files_scm",(void*)f_2331},
{"f_2275:files_scm",(void*)f_2275},
{"f_2286:files_scm",(void*)f_2286},
{"f_2316:files_scm",(void*)f_2316},
{"f_2312:files_scm",(void*)f_2312},
{"f_2293:files_scm",(void*)f_2293},
{"f_2299:files_scm",(void*)f_2299},
{"f_2307:files_scm",(void*)f_2307},
{"f_2250:files_scm",(void*)f_2250},
{"f_2262:files_scm",(void*)f_2262},
{"f_2256:files_scm",(void*)f_2256},
{"f_2232:files_scm",(void*)f_2232},
{"f_2244:files_scm",(void*)f_2244},
{"f_2238:files_scm",(void*)f_2238},
{"f_2214:files_scm",(void*)f_2214},
{"f_2226:files_scm",(void*)f_2226},
{"f_2220:files_scm",(void*)f_2220},
{"f_2196:files_scm",(void*)f_2196},
{"f_2208:files_scm",(void*)f_2208},
{"f_2202:files_scm",(void*)f_2202},
{"f_2178:files_scm",(void*)f_2178},
{"f_2190:files_scm",(void*)f_2190},
{"f_2184:files_scm",(void*)f_2184},
{"f_2163:files_scm",(void*)f_2163},
{"f_2175:files_scm",(void*)f_2175},
{"f_2169:files_scm",(void*)f_2169},
{"f_2148:files_scm",(void*)f_2148},
{"f_2160:files_scm",(void*)f_2160},
{"f_2154:files_scm",(void*)f_2154},
{"f_2133:files_scm",(void*)f_2133},
{"f_2145:files_scm",(void*)f_2145},
{"f_2139:files_scm",(void*)f_2139},
{"f_2049:files_scm",(void*)f_2049},
{"f_2065:files_scm",(void*)f_2065},
{"f_2094:files_scm",(void*)f_2094},
{"f_2119:files_scm",(void*)f_2119},
{"f_2104:files_scm",(void*)f_2104},
{"f_2075:files_scm",(void*)f_2075},
{"f_2035:files_scm",(void*)f_2035},
{"f_1952:files_scm",(void*)f_1952},
{"f_1981:files_scm",(void*)f_1981},
{"f_1976:files_scm",(void*)f_1976},
{"f_1954:files_scm",(void*)f_1954},
{"f_1962:files_scm",(void*)f_1962},
{"f_1968:files_scm",(void*)f_1968},
{"f_1965:files_scm",(void*)f_1965},
{"f_1888:files_scm",(void*)f_1888},
{"f_1904:files_scm",(void*)f_1904},
{"f_1899:files_scm",(void*)f_1899},
{"f_1890:files_scm",(void*)f_1890},
{"f_1898:files_scm",(void*)f_1898},
{"f_1802:files_scm",(void*)f_1802},
{"f_1855:files_scm",(void*)f_1855},
{"f_1831:files_scm",(void*)f_1831},
{"f_1838:files_scm",(void*)f_1838},
{"f_1771:files_scm",(void*)f_1771},
{"f_1710:files_scm",(void*)f_1710},
{"f_1719:files_scm",(void*)f_1719},
{"f_1749:files_scm",(void*)f_1749},
{"f_1757:files_scm",(void*)f_1757},
{"f_1657:files_scm",(void*)f_1657},
{"f_1673:files_scm",(void*)f_1673},
{"f_1644:files_scm",(void*)f_1644},
{"f_1655:files_scm",(void*)f_1655},
{"f_1230:files_scm",(void*)f_1230},
{"f_1590:files_scm",(void*)f_1590},
{"f_1585:files_scm",(void*)f_1585},
{"f_1232:files_scm",(void*)f_1232},
{"f_1245:files_scm",(void*)f_1245},
{"f_1578:files_scm",(void*)f_1578},
{"f_1574:files_scm",(void*)f_1574},
{"f_1248:files_scm",(void*)f_1248},
{"f_1251:files_scm",(void*)f_1251},
{"f_1567:files_scm",(void*)f_1567},
{"f_1254:files_scm",(void*)f_1254},
{"f_1550:files_scm",(void*)f_1550},
{"f_1560:files_scm",(void*)f_1560},
{"f_1257:files_scm",(void*)f_1257},
{"f_1494:files_scm",(void*)f_1494},
{"f_1525:files_scm",(void*)f_1525},
{"f_1537:files_scm",(void*)f_1537},
{"f_1543:files_scm",(void*)f_1543},
{"f_1531:files_scm",(void*)f_1531},
{"f_1500:files_scm",(void*)f_1500},
{"f_1506:files_scm",(void*)f_1506},
{"f2989:files_scm",(void*)f2989},
{"f_1517:files_scm",(void*)f_1517},
{"f_1260:files_scm",(void*)f_1260},
{"f_1263:files_scm",(void*)f_1263},
{"f_1439:files_scm",(void*)f_1439},
{"f_1470:files_scm",(void*)f_1470},
{"f_1482:files_scm",(void*)f_1482},
{"f_1488:files_scm",(void*)f_1488},
{"f_1476:files_scm",(void*)f_1476},
{"f_1445:files_scm",(void*)f_1445},
{"f_1451:files_scm",(void*)f_1451},
{"f2985:files_scm",(void*)f2985},
{"f_1462:files_scm",(void*)f_1462},
{"f_1266:files_scm",(void*)f_1266},
{"f_1269:files_scm",(void*)f_1269},
{"f_1272:files_scm",(void*)f_1272},
{"f_1279:files_scm",(void*)f_1279},
{"f_1281:files_scm",(void*)f_1281},
{"f_1374:files_scm",(void*)f_1374},
{"f_1415:files_scm",(void*)f_1415},
{"f_1427:files_scm",(void*)f_1427},
{"f_1433:files_scm",(void*)f_1433},
{"f_1421:files_scm",(void*)f_1421},
{"f_1380:files_scm",(void*)f_1380},
{"f_1386:files_scm",(void*)f_1386},
{"f_1393:files_scm",(void*)f_1393},
{"f_1396:files_scm",(void*)f_1396},
{"f_1407:files_scm",(void*)f_1407},
{"f_1403:files_scm",(void*)f_1403},
{"f_1358:files_scm",(void*)f_1358},
{"f_1361:files_scm",(void*)f_1361},
{"f_1368:files_scm",(void*)f_1368},
{"f_1291:files_scm",(void*)f_1291},
{"f_1294:files_scm",(void*)f_1294},
{"f_1302:files_scm",(void*)f_1302},
{"f_1333:files_scm",(void*)f_1333},
{"f_1345:files_scm",(void*)f_1345},
{"f_1351:files_scm",(void*)f_1351},
{"f_1339:files_scm",(void*)f_1339},
{"f_1308:files_scm",(void*)f_1308},
{"f_1314:files_scm",(void*)f_1314},
{"f2979:files_scm",(void*)f2979},
{"f_1325:files_scm",(void*)f_1325},
{"f_1297:files_scm",(void*)f_1297},
{"f_1300:files_scm",(void*)f_1300},
{"f_883:files_scm",(void*)f_883},
{"f_1182:files_scm",(void*)f_1182},
{"f_1177:files_scm",(void*)f_1177},
{"f_885:files_scm",(void*)f_885},
{"f_898:files_scm",(void*)f_898},
{"f_1170:files_scm",(void*)f_1170},
{"f_1166:files_scm",(void*)f_1166},
{"f_901:files_scm",(void*)f_901},
{"f_904:files_scm",(void*)f_904},
{"f_1159:files_scm",(void*)f_1159},
{"f_907:files_scm",(void*)f_907},
{"f_1142:files_scm",(void*)f_1142},
{"f_1152:files_scm",(void*)f_1152},
{"f_910:files_scm",(void*)f_910},
{"f_1086:files_scm",(void*)f_1086},
{"f_1117:files_scm",(void*)f_1117},
{"f_1129:files_scm",(void*)f_1129},
{"f_1135:files_scm",(void*)f_1135},
{"f_1123:files_scm",(void*)f_1123},
{"f_1092:files_scm",(void*)f_1092},
{"f_1098:files_scm",(void*)f_1098},
{"f2975:files_scm",(void*)f2975},
{"f_1109:files_scm",(void*)f_1109},
{"f_913:files_scm",(void*)f_913},
{"f_916:files_scm",(void*)f_916},
{"f_1031:files_scm",(void*)f_1031},
{"f_1062:files_scm",(void*)f_1062},
{"f_1074:files_scm",(void*)f_1074},
{"f_1080:files_scm",(void*)f_1080},
{"f_1068:files_scm",(void*)f_1068},
{"f_1037:files_scm",(void*)f_1037},
{"f_1043:files_scm",(void*)f_1043},
{"f2971:files_scm",(void*)f2971},
{"f_1054:files_scm",(void*)f_1054},
{"f_919:files_scm",(void*)f_919},
{"f_922:files_scm",(void*)f_922},
{"f_925:files_scm",(void*)f_925},
{"f_932:files_scm",(void*)f_932},
{"f_934:files_scm",(void*)f_934},
{"f_966:files_scm",(void*)f_966},
{"f_1007:files_scm",(void*)f_1007},
{"f_1019:files_scm",(void*)f_1019},
{"f_1025:files_scm",(void*)f_1025},
{"f_1013:files_scm",(void*)f_1013},
{"f_972:files_scm",(void*)f_972},
{"f_978:files_scm",(void*)f_978},
{"f_985:files_scm",(void*)f_985},
{"f_988:files_scm",(void*)f_988},
{"f_999:files_scm",(void*)f_999},
{"f_995:files_scm",(void*)f_995},
{"f_950:files_scm",(void*)f_950},
{"f_953:files_scm",(void*)f_953},
{"f_960:files_scm",(void*)f_960},
{"f_944:files_scm",(void*)f_944},
{"f_947:files_scm",(void*)f_947},
{"f_868:files_scm",(void*)f_868},
{"f_875:files_scm",(void*)f_875},
{"f_881:files_scm",(void*)f_881},
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
