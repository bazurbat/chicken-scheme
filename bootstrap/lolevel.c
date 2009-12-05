/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:25
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file lolevel.c
   unit: lolevel
*/

#include "chicken.h"

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
# include <sys/types.h>
#endif
#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_w2b(x)                   C_fix(C_wordstobytes(C_unfix(x)))
#define C_pointer_eqp(x, y)        C_mk_bool(C_c_pointer_nn(x) == C_c_pointer_nn(y))
#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_69_toplevel)
C_externimport void C_ccall C_srfi_69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[128];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,49,53,32,108,111,99,49,54,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,52,55,32,108,111,99,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,55,54,32,46,32,108,111,99,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,115,105,122,101,114,114,32,97,114,103,115,50,48,48,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,99,104,101,99,107,110,49,32,110,50,48,49,32,110,109,97,120,50,48,50,32,111,102,102,50,48,51,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,47),40,99,104,101,99,107,110,50,32,110,50,48,56,32,110,109,97,120,50,48,57,32,110,109,97,120,50,50,49,48,32,111,102,102,49,50,49,49,32,111,102,102,50,50,49,50,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,109,111,118,101,32,102,114,111,109,50,50,48,32,116,111,50,50,49,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,36),40,98,111,100,121,49,56,51,32,110,49,57,51,32,102,111,102,102,115,101,116,49,57,52,32,116,111,102,102,115,101,116,49,57,53,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,40),40,100,101,102,45,116,111,102,102,115,101,116,49,56,55,32,37,110,49,56,48,51,50,51,32,37,102,111,102,102,115,101,116,49,56,49,51,50,52,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,102,111,102,102,115,101,116,49,56,54,32,37,110,49,56,48,51,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,49,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,40),40,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,49,55,52,32,116,111,49,55,53,32,46,32,116,109,112,49,55,51,49,55,54,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,53,54,32,105,51,54,48,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,51,51,56,41,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,99,111,112,121,32,120,51,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,18),40,97,108,108,111,99,97,116,101,32,97,51,54,53,51,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,14),40,102,114,101,101,32,97,51,55,48,51,55,52,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,101,114,63,32,120,51,55,55,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,51,56,52,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,26),40,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,51,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,25),40,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,51,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,110,117,108,108,45,112,111,105,110,116,101,114,63,32,112,116,114,51,57,55,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,52,48,48,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,24),40,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,52,49,49,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,23),40,112,111,105,110,116,101,114,61,63,32,112,49,52,49,52,32,112,50,52,49,53,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,32),40,112,111,105,110,116,101,114,45,111,102,102,115,101,116,32,97,52,49,57,52,50,51,32,97,52,49,56,52,50,52,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,20),40,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,52,51,51,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,27),40,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,52,52,54,32,116,97,103,52,52,55,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,34),40,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,52,54,53,32,46,32,116,109,112,52,54,52,52,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,18),40,112,111,105,110,116,101,114,45,116,97,103,32,120,52,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,52,57,52,32,46,32,105,110,100,101,120,52,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,53,48,49,32,46,32,105,110,100,101,120,53,48,50,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,25),40,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,53,48,56,32,121,53,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,23),40,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,53,49,49,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,108,111,99,97,116,105,118,101,63,32,120,53,49,51,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,33),40,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,97,53,49,55,53,50,49,32,97,53,49,54,53,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,33),40,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,97,53,50,53,53,50,57,32,97,53,50,52,53,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,97,53,51,51,53,51,55,32,97,53,51,50,53,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,97,53,52,49,53,52,53,32,97,53,52,48,53,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,97,53,52,57,53,53,51,32,97,53,52,56,53,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,97,53,53,55,53,54,49,32,97,53,53,54,53,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,97,53,54,53,53,54,57,32,97,53,54,52,53,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,97,53,55,51,53,55,55,32,97,53,55,50,53,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,12),40,97,50,50,54,57,32,120,54,51,53,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,17),40,97,50,50,56,53,32,120,54,51,56,32,105,54,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,34),40,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,54,51,51,32,100,97,116,97,54,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,12),40,97,50,51,49,50,32,120,54,53,52,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,54,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,12),40,97,50,51,52,53,32,120,54,55,48,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,21),40,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,54,53,56,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,34),40,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,54,55,52,32,120,54,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,54,55,56,41,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,54,56,49,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,40),40,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,54,56,57,32,46,32,97,114,103,115,54,57,48,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,35),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,54,57,57,32,46,32,116,109,112,54,57,56,55,48,48,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,27),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,55,49,57,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,29),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,55,50,50,41,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,42),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,55,50,53,32,105,55,50,54,32,121,55,50,55,41,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,51,57,41,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,21),40,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,55,51,53,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,101,118,105,99,116,101,100,63,32,120,55,52,56,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,56,50,32,97,55,53,52,55,53,55,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,56,48,32,105,55,56,52,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,55,54,48,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,34),40,111,98,106,101,99,116,45,101,118,105,99,116,32,120,55,53,48,32,46,32,97,108,108,111,99,97,116,111,114,55,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,52,48,32,105,56,52,52,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,56,49,53,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,49),40,111,98,106,101,99,116,45,101,118,105,99,116,45,116,111,45,108,111,99,97,116,105,111,110,32,120,55,57,56,32,112,116,114,55,57,57,32,46,32,108,105,109,105,116,56,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,16),40,102,95,50,57,51,53,32,97,56,54,52,56,54,56,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,56,49,32,105,56,56,53,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,14),40,114,101,108,101,97,115,101,32,120,56,55,49,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,35),40,111,98,106,101,99,116,45,114,101,108,101,97,115,101,32,120,56,54,48,32,46,32,114,101,108,101,97,115,101,114,56,54,49,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,48,55,32,105,57,49,49,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,56,57,53,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,115,105,122,101,32,120,56,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,53,55,32,105,57,54,49,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,57,51,56,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,33),40,111,98,106,101,99,116,45,117,110,101,118,105,99,116,32,120,57,50,57,32,46,32,116,109,112,57,50,56,57,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,50,56,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,24),40,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,57,54,56,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,33),40,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,32,111,108,100,57,55,53,32,112,114,111,99,57,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,19),40,103,108,111,98,97,108,45,114,101,102,32,115,121,109,57,56,53,41,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,25),40,103,108,111,98,97,108,45,115,101,116,33,32,115,121,109,57,56,56,32,120,57,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,22),40,103,108,111,98,97,108,45,98,111,117,110,100,63,32,115,121,109,57,57,50,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,103,108,111,98,97,108,45,109,97,107,101,45,117,110,98,111,117,110,100,33,32,115,121,109,57,57,53,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,17),40,97,51,50,51,52,32,120,55,51,48,32,105,55,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,15),40,97,51,50,53,56,32,97,54,50,53,54,50,57,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,15),40,97,51,50,54,56,32,97,54,49,56,54,50,50,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,15),40,97,51,50,55,56,32,97,54,49,49,54,49,53,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,15),40,97,51,50,56,56,32,97,54,48,52,54,48,56,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,15),40,97,51,50,57,56,32,97,53,57,56,54,48,50,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,97,51,51,48,56,32,97,53,57,50,53,57,54,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,15),40,97,51,51,49,56,32,97,53,56,54,53,57,48,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,15),40,97,51,51,50,56,32,97,53,56,48,53,56,52,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,14),67,95,108,111,99,97,116,105,118,101,95,114,101,102,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k2938 */
static C_word C_fcall stub865(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub865(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k2685 */
static C_word C_fcall stub755(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub755(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k3262 */
#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub626(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub626(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((double *)p));
C_ret:
#undef return

return C_r;}

/* from k3272 */
#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub619(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub619(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((float *)p));
C_ret:
#undef return

return C_r;}

/* from k3282 */
#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub612(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub612(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_s32 *)p));
C_ret:
#undef return

return C_r;}

/* from k3292 */
#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub605(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub605(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_u32 *)p));
C_ret:
#undef return

return C_r;}

/* from k3302 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub599(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub599(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((short *)p));
C_ret:
#undef return

return C_r;}

/* from k3312 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub593(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub593(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned short *)p));
C_ret:
#undef return

return C_r;}

/* from k3322 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub587(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub587(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((signed char *)p));
C_ret:
#undef return

return C_r;}

/* from k3332 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub581(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub581(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned char *)p));
C_ret:
#undef return

return C_r;}

/* from k2218 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub574(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub574(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
float n=(float )C_c_double(C_a1);
*((double *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k2204 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub566(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub566(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
double n=(double )C_c_double(C_a1);
*((float *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k2190 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub558(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub558(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_s32 *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k2176 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub550(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub550(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_u32 *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k2162 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub542(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub542(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((short *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k2148 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub534(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub534(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned short *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k2134 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub526(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub526(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((char *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k2120 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub518(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub518(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned char *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k1912 */
static C_word C_fcall stub429(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub429(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

/* from k1902 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub420(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub420(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

/* from g403 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub406(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub406(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1808 */
static C_word C_fcall stub371(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub371(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1801 */
static C_word C_fcall stub366(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub366(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1349 */
static C_word C_fcall stub153(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub153(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1321 */
static C_word C_fcall stub137(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub137(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1293 */
static C_word C_fcall stub121(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub121(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1265 */
static C_word C_fcall stub105(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub105(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1113)
static void C_fcall f_1113(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3041)
static void C_fcall f_3041(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_fcall f_3112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_fcall f_2954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_fcall f_2973(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_fcall f_2986(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_fcall f_2988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2862)
static void C_fcall f_2862(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2907)
static void C_fcall f_2907(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3735)
static void C_ccall f3735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2898)
static void C_ccall f_2898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_fcall f_2696(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2710)
static void C_fcall f_2710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_fcall f_2729(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_fcall f_2735(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_fcall f_2751(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2753)
static void C_fcall f_2753(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_fcall f_2586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2612)
static void C_fcall f_2612(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_fcall f_2625(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_fcall f_2627(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static C_word C_fcall f_2545(C_word t0,C_word t1);
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_fcall f_2446(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1204)
static void C_fcall f_1204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2047)
static void C_ccall f_2047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2028)
static void C_fcall f_2028(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1967)
static void C_fcall f_1967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1936)
static void C_fcall f_1936(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1723)
static void C_fcall f_1723(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_fcall f_1768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1654)
static void C_fcall f_1654(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_fcall f_1649(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1644)
static void C_fcall f_1644(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1365)
static void C_fcall f_1365(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1431)
static void C_fcall f_1431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1503)
static void C_fcall f_1503(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1596)
static void C_fcall f_1596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1522)
static void C_fcall f_1522(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1552)
static void C_ccall f_1552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1548)
static void C_ccall f_1548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1403)
static void C_fcall f_1403(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1380)
static void C_fcall f_1380(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1374)
static void C_fcall f_1374(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1368)
static void C_fcall f_1368(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1231)
static void C_fcall f_1231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1158)
static void C_fcall f_1158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1170)
static void C_fcall f_1170(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1085)
static void C_fcall f_1085(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_1113)
static void C_fcall trf_1113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1113(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1113(t0,t1,t2);}

C_noret_decl(trf_3041)
static void C_fcall trf_3041(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3041(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3041(t0,t1,t2);}

C_noret_decl(trf_3112)
static void C_fcall trf_3112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3112(t0,t1,t2);}

C_noret_decl(trf_2954)
static void C_fcall trf_2954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2954(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2954(t0,t1,t2);}

C_noret_decl(trf_2973)
static void C_fcall trf_2973(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2973(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2973(t0,t1);}

C_noret_decl(trf_2986)
static void C_fcall trf_2986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2986(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2986(t0,t1);}

C_noret_decl(trf_2988)
static void C_fcall trf_2988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2988(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2988(t0,t1,t2);}

C_noret_decl(trf_2862)
static void C_fcall trf_2862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2862(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2862(t0,t1,t2);}

C_noret_decl(trf_2907)
static void C_fcall trf_2907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2907(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2907(t0,t1,t2);}

C_noret_decl(trf_2696)
static void C_fcall trf_2696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2696(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2696(t0,t1);}

C_noret_decl(trf_2710)
static void C_fcall trf_2710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2710(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2710(t0,t1,t2);}

C_noret_decl(trf_2729)
static void C_fcall trf_2729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2729(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2729(t0,t1);}

C_noret_decl(trf_2735)
static void C_fcall trf_2735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2735(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2735(t0,t1);}

C_noret_decl(trf_2751)
static void C_fcall trf_2751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2751(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2751(t0,t1);}

C_noret_decl(trf_2753)
static void C_fcall trf_2753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2753(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2753(t0,t1,t2);}

C_noret_decl(trf_2586)
static void C_fcall trf_2586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2586(t0,t1,t2);}

C_noret_decl(trf_2612)
static void C_fcall trf_2612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2612(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2612(t0,t1);}

C_noret_decl(trf_2625)
static void C_fcall trf_2625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2625(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2625(t0,t1);}

C_noret_decl(trf_2627)
static void C_fcall trf_2627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2627(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2627(t0,t1,t2);}

C_noret_decl(trf_2446)
static void C_fcall trf_2446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2446(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2446(t0,t1);}

C_noret_decl(trf_1204)
static void C_fcall trf_1204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1204(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1204(t0,t1);}

C_noret_decl(trf_2028)
static void C_fcall trf_2028(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2028(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2028(t0,t1);}

C_noret_decl(trf_1967)
static void C_fcall trf_1967(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1967(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1967(t0,t1);}

C_noret_decl(trf_1936)
static void C_fcall trf_1936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1936(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1936(t0,t1);}

C_noret_decl(trf_1723)
static void C_fcall trf_1723(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1723(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1723(t0,t1,t2);}

C_noret_decl(trf_1768)
static void C_fcall trf_1768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1768(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1768(t0,t1,t2);}

C_noret_decl(trf_1654)
static void C_fcall trf_1654(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1654(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1654(t0,t1);}

C_noret_decl(trf_1649)
static void C_fcall trf_1649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1649(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1649(t0,t1,t2);}

C_noret_decl(trf_1644)
static void C_fcall trf_1644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1644(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1644(t0,t1,t2,t3);}

C_noret_decl(trf_1365)
static void C_fcall trf_1365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1365(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1365(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1431)
static void C_fcall trf_1431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1431(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1431(t0,t1,t2,t3);}

C_noret_decl(trf_1503)
static void C_fcall trf_1503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1503(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1503(t0,t1);}

C_noret_decl(trf_1596)
static void C_fcall trf_1596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1596(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1596(t0,t1);}

C_noret_decl(trf_1522)
static void C_fcall trf_1522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1522(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1522(t0,t1);}

C_noret_decl(trf_1396)
static void C_fcall trf_1396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1396(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_1396(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1403)
static void C_fcall trf_1403(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1403(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1403(t0,t1);}

C_noret_decl(trf_1380)
static void C_fcall trf_1380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1380(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1380(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1374)
static void C_fcall trf_1374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1374(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1374(t0,t1,t2);}

C_noret_decl(trf_1368)
static void C_fcall trf_1368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1368(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1368(t0,t1);}

C_noret_decl(trf_1231)
static void C_fcall trf_1231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1231(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1231(t0,t1);}

C_noret_decl(trf_1158)
static void C_fcall trf_1158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1158(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1158(t0,t1,t2);}

C_noret_decl(trf_1170)
static void C_fcall trf_1170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1170(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1170(t0,t1);}

C_noret_decl(trf_1085)
static void C_fcall trf_1085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1085(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1085(t0,t1,t2);}

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
C_lolevel_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("lolevel_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1237)){
C_save(t1);
C_rereclaim2(1237*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,128);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_h_intern(&lf[3],14,"\003syserror-hook");
lf[5]=C_h_intern(&lf[5],15,"\003syssignal-hook");
lf[6]=C_h_intern(&lf[6],11,"\000type-error");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000#bad argument type - not a structure");
lf[8]=C_h_intern(&lf[8],17,"\003syscheck-pointer");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a pointer");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004mmap\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\010"
"s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64ve"
"ctor\376\377\016");
lf[11]=C_h_intern(&lf[11],12,"move-memory!");
lf[12]=C_h_intern(&lf[12],9,"\003syserror");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\034need number of bytes to move");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000!number of bytes to move too large");
lf[15]=C_h_intern(&lf[15],15,"\003sysbytevector\077");
lf[16]=C_h_intern(&lf[16],11,"object-copy");
lf[17]=C_h_intern(&lf[17],15,"\003sysmake-vector");
lf[18]=C_h_intern(&lf[18],8,"allocate");
lf[19]=C_h_intern(&lf[19],4,"free");
lf[20]=C_h_intern(&lf[20],8,"pointer\077");
lf[21]=C_h_intern(&lf[21],13,"pointer-like\077");
lf[22]=C_h_intern(&lf[22],16,"address->pointer");
lf[23]=C_h_intern(&lf[23],20,"\003sysaddress->pointer");
lf[24]=C_h_intern(&lf[24],17,"\003syscheck-integer");
lf[25]=C_h_intern(&lf[25],16,"pointer->address");
lf[26]=C_h_intern(&lf[26],20,"\003syspointer->address");
lf[27]=C_h_intern(&lf[27],17,"\003syscheck-special");
lf[28]=C_h_intern(&lf[28],12,"null-pointer");
lf[29]=C_h_intern(&lf[29],16,"\003sysnull-pointer");
lf[30]=C_h_intern(&lf[30],13,"null-pointer\077");
lf[31]=C_h_intern(&lf[31],15,"object->pointer");
lf[32]=C_h_intern(&lf[32],15,"pointer->object");
lf[33]=C_h_intern(&lf[33],9,"pointer=\077");
lf[34]=C_h_intern(&lf[34],14,"pointer-offset");
lf[35]=C_h_intern(&lf[35],13,"align-to-word");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a pointer or integer");
lf[37]=C_h_intern(&lf[37],11,"tag-pointer");
lf[38]=C_h_intern(&lf[38],23,"\003sysmake-tagged-pointer");
lf[39]=C_h_intern(&lf[39],15,"tagged-pointer\077");
lf[40]=C_h_intern(&lf[40],11,"pointer-tag");
lf[41]=C_h_intern(&lf[41],13,"make-locative");
lf[42]=C_h_intern(&lf[42],17,"\003sysmake-locative");
lf[43]=C_h_intern(&lf[43],18,"make-weak-locative");
lf[44]=C_h_intern(&lf[44],13,"locative-set!");
lf[45]=C_h_intern(&lf[45],12,"locative-ref");
lf[46]=C_h_intern(&lf[46],16,"locative->object");
lf[47]=C_h_intern(&lf[47],9,"locative\077");
lf[48]=C_h_intern(&lf[48],15,"pointer-u8-set!");
lf[49]=C_h_intern(&lf[49],15,"pointer-s8-set!");
lf[50]=C_h_intern(&lf[50],16,"pointer-u16-set!");
lf[51]=C_h_intern(&lf[51],16,"pointer-s16-set!");
lf[52]=C_h_intern(&lf[52],16,"pointer-u32-set!");
lf[53]=C_h_intern(&lf[53],16,"pointer-s32-set!");
lf[54]=C_h_intern(&lf[54],16,"pointer-f32-set!");
lf[55]=C_h_intern(&lf[55],16,"pointer-f64-set!");
lf[56]=C_h_intern(&lf[56],14,"pointer-u8-ref");
lf[57]=C_h_intern(&lf[57],14,"pointer-s8-ref");
lf[58]=C_h_intern(&lf[58],15,"pointer-u16-ref");
lf[59]=C_h_intern(&lf[59],15,"pointer-s16-ref");
lf[60]=C_h_intern(&lf[60],15,"pointer-u32-ref");
lf[61]=C_h_intern(&lf[61],15,"pointer-s32-ref");
lf[62]=C_h_intern(&lf[62],15,"pointer-f32-ref");
lf[63]=C_h_intern(&lf[63],15,"pointer-f64-ref");
lf[64]=C_h_intern(&lf[64],8,"extended");
lf[66]=C_h_intern(&lf[66],16,"extend-procedure");
lf[67]=C_h_intern(&lf[67],19,"\003sysdecorate-lambda");
lf[68]=C_h_intern(&lf[68],17,"\003syscheck-closure");
lf[69]=C_h_intern(&lf[69],19,"extended-procedure\077");
lf[70]=C_h_intern(&lf[70],21,"\003syslambda-decoration");
lf[71]=C_h_intern(&lf[71],14,"procedure-data");
lf[72]=C_h_intern(&lf[72],19,"set-procedure-data!");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000-bad argument type - not an extended procedure");
lf[74]=C_h_intern(&lf[74],10,"block-set!");
lf[75]=C_h_intern(&lf[75],14,"\003sysblock-set!");
lf[76]=C_h_intern(&lf[76],9,"block-ref");
lf[77]=C_h_intern(&lf[77],15,"number-of-slots");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a vector-like object");
lf[79]=C_h_intern(&lf[79],15,"number-of-bytes");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\0002cannot compute number of bytes of immediate object");
lf[81]=C_h_intern(&lf[81],20,"make-record-instance");
lf[82]=C_h_intern(&lf[82],18,"\003sysmake-structure");
lf[83]=C_h_intern(&lf[83],16,"record-instance\077");
lf[84]=C_h_intern(&lf[84],20,"record-instance-type");
lf[85]=C_h_intern(&lf[85],22,"record-instance-length");
lf[86]=C_h_intern(&lf[86],25,"record-instance-slot-set!");
lf[87]=C_h_intern(&lf[87],15,"\003syscheck-range");
lf[88]=C_h_intern(&lf[88],20,"record-instance-slot");
lf[89]=C_h_intern(&lf[89],14,"record->vector");
lf[90]=C_h_intern(&lf[90],15,"object-evicted\077");
lf[91]=C_h_intern(&lf[91],12,"object-evict");
lf[92]=C_h_intern(&lf[92],15,"hash-table-set!");
lf[93]=C_h_intern(&lf[93],19,"\003sysundefined-value");
lf[94]=C_h_intern(&lf[94],22,"hash-table-ref/default");
lf[95]=C_h_intern(&lf[95],15,"make-hash-table");
lf[96]=C_h_intern(&lf[96],3,"eq\077");
lf[97]=C_h_intern(&lf[97],24,"object-evict-to-location");
lf[98]=C_h_intern(&lf[98],24,"\003sysset-pointer-address!");
lf[99]=C_h_intern(&lf[99],6,"signal");
lf[100]=C_h_intern(&lf[100],24,"make-composite-condition");
lf[101]=C_h_intern(&lf[101],23,"make-property-condition");
lf[102]=C_h_intern(&lf[102],5,"evict");
lf[103]=C_h_intern(&lf[103],5,"limit");
lf[104]=C_h_intern(&lf[104],3,"exn");
lf[105]=C_h_intern(&lf[105],8,"location");
lf[106]=C_h_intern(&lf[106],7,"message");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000$cannot evict object - limit exceeded");
lf[108]=C_h_intern(&lf[108],9,"arguments");
lf[109]=C_h_intern(&lf[109],14,"object-release");
lf[110]=C_h_intern(&lf[110],11,"object-size");
lf[111]=C_h_intern(&lf[111],14,"object-unevict");
lf[112]=C_h_intern(&lf[112],15,"\003sysmake-string");
lf[113]=C_h_intern(&lf[113],14,"object-become!");
lf[114]=C_h_intern(&lf[114],11,"\003sysbecome!");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000:bad argument type - not an a-list of non-immediate objects");
lf[116]=C_h_intern(&lf[116],16,"mutate-procedure");
lf[117]=C_h_intern(&lf[117],10,"global-ref");
lf[118]=C_h_intern(&lf[118],11,"global-set!");
lf[119]=C_h_intern(&lf[119],13,"global-bound\077");
lf[120]=C_h_intern(&lf[120],32,"\003syssymbol-has-toplevel-binding\077");
lf[121]=C_h_intern(&lf[121],20,"global-make-unbound!");
lf[122]=C_h_intern(&lf[122],28,"\003sysarbitrary-unbound-symbol");
lf[123]=C_h_intern(&lf[123],18,"getter-with-setter");
lf[124]=C_h_intern(&lf[124],13,"\003sysblock-ref");
lf[125]=C_h_intern(&lf[125],15,"pointer-s6-set!");
lf[126]=C_h_intern(&lf[126],17,"register-feature!");
lf[127]=C_h_intern(&lf[127],7,"lolevel");
C_register_lf2(lf,128,create_ptable());
t2=C_mutate(&lf[0] /* (set! c334 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1080,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_srfi_69_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1078 */
static void C_ccall f_1080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 75   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[126]+1)))(3,*((C_word*)lf[126]+1),t2,lf[127]);}

/* k1081 in k1078 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
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
C_word ab[76],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1083,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1085,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[4] /* (set! check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1158,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1219,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=lf[10];
t6=C_mutate((C_word*)lf[11]+1 /* (set! move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1363,a[2]=t5,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[16]+1 /* (set! object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1717,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[18]+1 /* (set! allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[19]+1 /* (set! free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[20]+1 /* (set! pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1815,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[21]+1 /* (set! pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1826,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[22]+1 /* (set! address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1837,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[25]+1 /* (set! pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1846,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[28]+1 /* (set! null-pointer ...) */,*((C_word*)lf[29]+1));
t15=C_mutate((C_word*)lf[30]+1 /* (set! null-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1856,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[31]+1 /* (set! object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1869,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[32]+1 /* (set! pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1880,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[33]+1 /* (set! pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1886,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[34]+1 /* (set! pointer-offset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[35]+1 /* (set! align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1915,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[37]+1 /* (set! tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1952,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[39]+1 /* (set! tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1972,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[40]+1 /* (set! pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2016,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[41]+1 /* (set! make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2039,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[43]+1 /* (set! make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2068,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[44]+1 /* (set! locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2097,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_locative_ref,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 345  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t27,t28,*((C_word*)lf[44]+1));}

/* k2100 in k1081 in k1078 */
static void C_ccall f_2102(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2102,2,t0,t1);}
t2=C_mutate((C_word*)lf[45]+1 /* (set! locative-ref ...) */,t1);
t3=C_mutate((C_word*)lf[46]+1 /* (set! locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2104,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[47]+1 /* (set! locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2107,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[48]+1 /* (set! pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2113,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[49]+1 /* (set! pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2127,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[50]+1 /* (set! pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2141,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[51]+1 /* (set! pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2155,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[52]+1 /* (set! pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2169,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[53]+1 /* (set! pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2183,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[54]+1 /* (set! pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2197,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[55]+1 /* (set! pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2211,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3329,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 362  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t13,t14,*((C_word*)lf[48]+1));}

/* a3328 in k2100 in k1081 in k1078 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3329,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub581(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub581(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2227,2,t0,t1);}
t2=C_mutate((C_word*)lf[56]+1 /* (set! pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3319,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 367  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t3,t4,*((C_word*)lf[49]+1));}

/* a3318 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3319,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub587(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub587(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
t2=C_mutate((C_word*)lf[57]+1 /* (set! pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3309,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 372  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t3,t4,*((C_word*)lf[50]+1));}

/* a3308 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3309(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3309,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub593(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub593(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1 /* (set! pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3299,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 377  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t3,t4,*((C_word*)lf[125]+1));}

/* a3298 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3299,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub599(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub599(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=C_mutate((C_word*)lf[59]+1 /* (set! pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3289,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 382  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t3,t4,*((C_word*)lf[52]+1));}

/* a3288 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3289,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub605(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub605(t3,C_SCHEME_FALSE));}}

/* k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=C_mutate((C_word*)lf[60]+1 /* (set! pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3279,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 387  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t3,t4,*((C_word*)lf[53]+1));}

/* a3278 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3279,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub612(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub612(t3,C_SCHEME_FALSE));}}

/* k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=C_mutate((C_word*)lf[61]+1 /* (set! pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3269,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 392  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t3,t4,*((C_word*)lf[54]+1));}

/* a3268 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3269,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub619(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub619(t3,C_SCHEME_FALSE));}}

/* k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2251,2,t0,t1);}
t2=C_mutate((C_word*)lf[62]+1 /* (set! pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3259,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 397  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t3,t4,*((C_word*)lf[55]+1));}

/* a3258 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3259(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3259,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub626(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub626(t3,C_SCHEME_FALSE));}}

/* k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1 /* (set! pointer-f64-ref ...) */,t1);
t3=(C_word)C_a_i_vector(&a,1,lf[64]);
t4=C_mutate(&lf[65] /* (set! xproc-tag ...) */,t3);
t5=C_mutate((C_word*)lf[66]+1 /* (set! extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[69]+1 /* (set! extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2296,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[71]+1 /* (set! procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2332,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[66]+1);
t9=C_mutate((C_word*)lf[72]+1 /* (set! set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2371,a[2]=t8,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[74]+1 /* (set! block-set! ...) */,*((C_word*)lf[75]+1));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 441  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t11,*((C_word*)lf[124]+1),*((C_word*)lf[75]+1));}

/* k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2389,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1 /* (set! block-ref ...) */,t1);
t3=C_mutate((C_word*)lf[77]+1 /* (set! number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2391,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[79]+1 /* (set! number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2400,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[81]+1 /* (set! make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2422,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[83]+1 /* (set! record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2431,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[84]+1 /* (set! record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2480,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[85]+1 /* (set! record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2489,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[86]+1 /* (set! record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2502,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3235,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 488  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t10,t11,*((C_word*)lf[86]+1));}

/* a3234 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3235,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3239,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 490  ##sys#check-generic-structure */
f_1158(t4,t2,(C_word)C_a_i_list(&a,1,lf[88]));}

/* k3237 in a3234 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm: 491  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[87]+1)))(6,*((C_word*)lf[87]+1),t2,((C_word*)t0)[4],C_fix(0),t4,lf[88]);}

/* k3240 in k3237 in a3234 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2528(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2528,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1 /* (set! record-instance-slot ...) */,t1);
t3=C_mutate((C_word*)lf[89]+1 /* (set! record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2530,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[90]+1 /* (set! object-evicted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2568,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[91]+1 /* (set! object-evict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[97]+1 /* (set! object-evict-to-location ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2689,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[109]+1 /* (set! object-release ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[110]+1 /* (set! object-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2945,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[111]+1 /* (set! object-unevict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[113]+1 /* (set! object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3158,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[116]+1 /* (set! mutate-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3167,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[117]+1 /* (set! global-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[118]+1 /* (set! global-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3204,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[119]+1 /* (set! global-bound? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3213,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[121]+1 /* (set! global-make-unbound! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3222,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t16=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}

/* global-make-unbound! in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3222(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3222,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[121]);
t4=(C_word)C_slot(lf[122],C_fix(0));
t5=(C_word)C_i_setslot(t2,C_fix(0),t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* global-bound? in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3213,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[119]);
/* lolevel.scm: 659  ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[120]+1)))(3,*((C_word*)lf[120]+1),t1,t2);}

/* global-set! in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3204,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_symbol_2(t2,lf[118]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(0),t3));}

/* global-ref in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3198,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[117]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_retrieve(t2));}

/* mutate-procedure in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3167,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3171,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 638  ##sys#check-closure */
t5=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[116]);}

/* k3169 in mutate-procedure in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 639  ##sys#check-closure */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[116]);}

/* k3172 in k3169 in mutate-procedure in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3174,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=(C_word)C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 642  ##sys#make-vector */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k3179 in k3172 in k3169 in mutate-procedure in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3181,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3184,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3196,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 643  proc */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k3194 in k3179 in k3172 in k3169 in mutate-procedure in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3196,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=(C_word)C_a_i_list(&a,1,t2);
/* lolevel.scm: 643  ##sys#become! */
t4=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k3182 in k3179 in k3172 in k3169 in mutate-procedure in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* object-become! in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3158(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_3158,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3162,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=(C_word)C_i_check_list_2(t4,lf[113]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1113,a[2]=t4,a[3]=t7,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1113(t9,t3,t4);}

/* loop in object-become! in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_1113(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1113,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_check_pair_2(t4,lf[113]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1135,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t4);
/* lolevel.scm: 116  ##sys#check-block */
f_1085(t6,t7,(C_word)C_a_i_list(&a,1,lf[113]));}
else{
/* lolevel.scm: 120  ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[6],lf[113],lf[115],((C_word*)t0)[2]);}}}

/* k1133 in loop in object-become! in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_1135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* lolevel.scm: 117  ##sys#check-block */
f_1085(t2,t3,(C_word)C_a_i_list(&a,1,lf[113]));}

/* k1136 in k1133 in loop in object-become! in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_1138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* lolevel.scm: 118  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1113(t3,((C_word*)t0)[2],t2);}

/* k3160 in object-become! in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 635  ##sys#become! */
t2=*((C_word*)lf[114]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3029r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3029r(t0,t1,t2,t3);}}

static void C_ccall f_3029r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3033,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3033(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3033(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 606  make-hash-table */
t3=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[96]+1));}

/* k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3036,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3041,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3041(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_3041(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3041,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 610  hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3057,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[5]);
/* lolevel.scm: 613  ##sys#make-string */
t4=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* lolevel.scm: 618  ##sys#intern-symbol */
C_string_to_symbol(3,0,t2,t3);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 623  ##sys#make-vector */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}}}}

/* k3098 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3100,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3103,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 624  hash-table-set! */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[6],t2);}

/* k3101 in k3098 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep((C_word)C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word)li76),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_3112(t7,t2,t3);}

/* doloop957 in k3101 in k3098 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_3112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3112,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3133,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 627  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3041(t5,t3,t4);}}

/* k3131 in doloop957 in k3101 in k3098 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3112(t4,((C_word*)t0)[2],t3);}

/* k3104 in k3101 in k3098 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3084 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 619  hash-table-set! */
t3=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3087 in k3084 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3068 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3070,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3073,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 614  hash-table-set! */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[4],t2);}

/* k3071 in k3068 in k3055 in copy in k3034 in k3031 in object-unevict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2945,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2949,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 589  make-hash-table */
t4=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[96]+1));}

/* k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2954,a[2]=t1,a[3]=t3,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2954(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2954(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2954,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 592  hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(0));}}

/* k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3024,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
/* lolevel.scm: 596  align-to-word */
((C_proc3)C_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t4,t2);}
else{
t5=(C_word)C_bytes(t2);
t6=t3;
f_2973(t6,(C_word)C_fixnum_plus(t5,(C_word)C_bytes(C_fix(1))));}}}

/* k3022 in k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2973(t2,(C_word)C_fixnum_plus(t1,(C_word)C_bytes(C_fix(1))));}

/* k2971 in k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2973(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2973,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 598  hash-table-set! */
t5=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],((C_word*)t0)[5],C_SCHEME_TRUE);}

/* k2974 in k2971 in k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[5])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2986,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2986(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=(C_word)C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2986(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2984 in k2974 in k2971 in k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2986(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2986,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2988,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li73),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2988(t5,((C_word*)t0)[2],t1);}

/* doloop907 in k2984 in k2974 in k2971 in k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2988,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3010,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 602  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2954(t5,t3,t4);}}

/* k3008 in doloop907 in k2984 in k2974 in k2971 in k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_3010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_fixnum_plus(t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2988(t5,((C_word*)t0)[2],t4);}

/* k2977 in k2974 in k2971 in k2965 in evict in k2947 in object-size in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2853r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2853r(t0,t1,t2,t3);}}

static void C_ccall f_2853r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2935,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2862,a[2]=t9,a[3]=t5,a[4]=t7,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2862(t11,t1,t2);}

/* release in object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2862(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2862,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_permanentp(t2))){
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[4])[1]))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_block_size(t2);
t4=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2891,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_byteblockp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3735,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 586  ##sys#address->pointer */
t8=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,(C_word)C_block_address(&a,1,t2));}
else{
t7=(C_truep((C_word)C_specialp(t2))?C_fix(1):C_fix(0));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t9,a[5]=t3,a[6]=((C_word)li70),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_2907(t11,t6,t7);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop881 in release in object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2907(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2907,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2917,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 585  release */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2862(t5,t3,t4);}}

/* k2915 in doloop881 in release in object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2907(t3,((C_word*)t0)[2],t2);}

/* f3735 in release in object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f3735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 586  free */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2889 in release in object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 586  ##sys#address->pointer */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,(C_word)C_block_address(&a,1,((C_word*)t0)[2]));}

/* k2896 in k2889 in release in object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 586  free */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_2935 in object-release in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2935,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub865(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub865(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2689r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2689r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2689r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2693,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 533  ##sys#check-special */
t6=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[97]);}

/* k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[2]))){
t3=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
t4=(C_word)C_i_check_exact_2(t3,lf[97]);
t5=t2;
f_2696(t5,t3);}
else{
t3=t2;
f_2696(t3,C_SCHEME_FALSE);}}

/* k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2696(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2696,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2842,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 538  ##sys#pointer->address */
t6=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k2840 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 538  ##sys#address->pointer */
t2=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 539  make-hash-table */
t3=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[96]+1));}

/* k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2710,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2710(t6,t2,((C_word*)t0)[2]);}

/* evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2710,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 543  hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2720,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[6]))){
/* lolevel.scm: 547  align-to-word */
((C_proc3)C_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t4,t2);}
else{
t5=(C_word)C_bytes(t2);
t6=t3;
f_2729(t6,(C_word)C_fixnum_plus(t5,(C_word)C_bytes(C_fix(1))));}}}

/* k2833 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2729(t2,(C_word)C_fixnum_plus(t1,(C_word)C_bytes(C_fix(1))));}

/* k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2729(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2729,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2732,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],t1);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2823,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_a_i_list(&a,2,((C_word*)t0)[8],((C_word*)((C_word*)t0)[2])[1]);
/* lolevel.scm: 554  make-property-condition */
t8=*((C_word*)lf[101]+1);
((C_proc9)(void*)(*((C_word*)t8+1)))(9,t8,t6,lf[104],lf[105],lf[97],lf[106],lf[107],lf[108],t7);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t2;
f_2732(2,t6,t5);}}
else{
t3=t2;
f_2732(2,t3,C_SCHEME_UNDEFINED);}}

/* k2821 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2827,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 558  make-property-condition */
t3=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[102],lf[103],((C_word*)((C_word*)t0)[2])[1]);}

/* k2825 in k2821 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 553  make-composite-condition */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2817 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 552  signal */
t2=*((C_word*)lf[99]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2732,2,t0,t1);}
t2=(C_word)C_evict_block(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2735,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[8]))){
t4=*((C_word*)lf[93]+1);
t5=t3;
f_2735(t5,(C_word)C_i_set_i_slot(t2,C_fix(0),t4));}
else{
t4=t3;
f_2735(t4,C_SCHEME_UNDEFINED);}}

/* k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2735(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2735,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 561  ##sys#pointer->address */
t4=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2790 in k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,t1,((C_word*)t0)[4]);
/* lolevel.scm: 561  ##sys#set-pointer-address! */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2736 in k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 562  hash-table-set! */
t3=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2739 in k2736 in k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2751,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2751(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=(C_word)C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2751(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2749 in k2739 in k2736 in k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2751(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2751,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li66),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2753(t5,((C_word*)t0)[2],t1);}

/* doloop840 in k2749 in k2739 in k2736 in k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2753(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2753,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2774,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 566  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2710(t5,t3,t4);}}

/* k2772 in doloop840 in k2749 in k2739 in k2736 in k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2753(t4,((C_word*)t0)[2],t3);}

/* k2742 in k2739 in k2736 in k2733 in k2730 in k2727 in k2718 in evict in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2703 in k2700 in k2697 in k2694 in k2691 in object-evict-to-location in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 568  values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2571r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2571r(t0,t1,t2,t3);}}

static void C_ccall f_2571r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2682,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2578,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 514  make-hash-table */
t7=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[96]+1));}

/* k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 515  ##sys#check-closure */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[91]);}

/* k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2581,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2586(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2586,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 518  hash-table-ref/default */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2596,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[5]))){
/* lolevel.scm: 521  align-to-word */
((C_proc3)C_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t3,t2);}
else{
t4=t3;
f_2605(2,t4,(C_word)C_bytes(t2));}}}

/* k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_fixnum_plus(t1,(C_word)C_bytes(C_fix(1)));
/* lolevel.scm: 522  allocator */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k2607 in k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=(C_word)C_evict_block(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[6]))){
t4=*((C_word*)lf[93]+1);
t5=t3;
f_2612(t5,(C_word)C_i_set_i_slot(t2,C_fix(0),t4));}
else{
t4=t3;
f_2612(t4,C_SCHEME_UNDEFINED);}}

/* k2610 in k2607 in k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2612(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2612,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 524  hash-table-set! */
t3=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2613 in k2610 in k2607 in k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2618,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2625,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2625(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=(C_word)C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2625(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2623 in k2613 in k2610 in k2607 in k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2625(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2625,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li63),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2627(t5,((C_word*)t0)[2],t1);}

/* doloop780 in k2623 in k2613 in k2610 in k2607 in k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2627(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2627,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2648,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 529  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2586(t5,t3,t4);}}

/* k2646 in doloop780 in k2623 in k2613 in k2610 in k2607 in k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2627(t4,((C_word*)t0)[2],t3);}

/* k2616 in k2613 in k2610 in k2607 in k2603 in k2594 in evict in k2579 in k2576 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2682 in object-evict in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2682,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub755(t3,t4));}

/* object-evicted? in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2568(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2568,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_permanentp(t2));}

/* record->vector in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2530,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2534,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 496  ##sys#check-generic-structure */
f_1158(t3,t2,(C_word)C_a_i_list(&a,1,lf[89]));}

/* k2532 in record->vector in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2534,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 498  ##sys#make-vector */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2538 in k2532 in record->vector in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2545(t2,C_fix(0)));}

/* doloop739 in k2538 in k2532 in record->vector in k2526 in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static C_word C_fcall f_2545(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
return(t2);}
else{
t2=(C_word)C_slot(((C_word*)t0)[2],t1);
t3=(C_word)C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=(C_word)C_fixnum_plus(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* record-instance-slot-set! in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2502,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2506,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 483  ##sys#check-generic-structure */
f_1158(t5,t2,(C_word)C_a_i_list(&a,1,lf[86]));}

/* k2504 in record-instance-slot-set! in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[3]);
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm: 484  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[87]+1)))(6,*((C_word*)lf[87]+1),t2,((C_word*)t0)[5],C_fix(0),t4,lf[86]);}

/* k2507 in k2504 in record-instance-slot-set! in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(((C_word*)t0)[3],t2,((C_word*)t0)[2]));}

/* record-instance-length in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2489,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2493,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 479  ##sys#check-generic-structure */
f_1158(t3,t2,(C_word)C_a_i_list(&a,1,lf[85]));}

/* k2491 in record-instance-length in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_block_size(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_difference(t2,C_fix(1)));}

/* record-instance-type in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2480,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2484,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 475  ##sys#check-generic-structure */
f_1158(t3,t2,(C_word)C_a_i_list(&a,1,lf[84]));}

/* k2482 in record-instance-type in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* record-instance? in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2431r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2431r(t0,t1,t2,t3);}}

static void C_ccall f_2431r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2435,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2435(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2435(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2433 in record-instance? in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_blockp(t3))){
t4=(C_word)C_structurep(t3);
t5=t2;
f_2446(t5,t4);}
else{
t4=t2;
f_2446(t4,C_SCHEME_FALSE);}}

/* k2444 in k2433 in record-instance? in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_2446(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_not(((C_word*)t0)[4]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(0));
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(((C_word*)t0)[4],t3));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* make-record-instance in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2422r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2422r(t0,t1,t2,t3);}}

static void C_ccall f_2422r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=(C_word)C_i_check_symbol_2(t2,lf[81]);
C_apply(5,0,t1,*((C_word*)lf[82]+1),t2,t3);}

/* number-of-bytes in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2400,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_byteblockp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_block_size(t2));}
else{
t3=(C_word)C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_w2b(t3));}}
else{
/* lolevel.scm: 449  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[6],lf[79],lf[80],t2);}}

/* number-of-slots in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2391,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2395,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=(C_word)C_a_i_list(&a,1,lf[77]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1204,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_blockp(t4))){
t7=(C_word)C_specialp(t4);
if(C_truep(t7)){
t8=t6;
f_1204(t8,(C_word)C_i_not(t7));}
else{
t8=(C_word)C_byteblockp(t4);
t9=t6;
f_1204(t9,(C_word)C_i_not(t8));}}
else{
t7=t6;
f_1204(t7,C_SCHEME_FALSE);}}

/* k1202 in number-of-slots in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_fcall f_1204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_block_size(((C_word*)t0)[5]));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
/* lolevel.scm: 134  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[6],t2,lf[78],((C_word*)t0)[2]);}
else{
/* lolevel.scm: 134  ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[6],C_SCHEME_FALSE,lf[78],((C_word*)t0)[2]);}}}

/* k2393 in number-of-slots in k2387 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_block_size(((C_word*)t0)[2]));}

/* set-procedure-data! in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2371,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2375,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 430  extend-procedure */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,t3);}

/* k2373 in set-procedure-data! in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(t1,((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* lolevel.scm: 433  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[6],lf[72],lf[73],((C_word*)t0)[3]);}}

/* procedure-data in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2332,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2363,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2346,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 415  ##sys#lambda-decoration */
t6=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a2345 in procedure-data in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2346,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[65],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2361 in procedure-data in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_slot(t1,C_fix(1)):C_SCHEME_FALSE));}

/* extended-procedure? in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2296,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2330,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2313,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 415  ##sys#lambda-decoration */
t6=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a2312 in extended-procedure? in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2313,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[65],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2328 in extended-procedure? in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* extend-procedure in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2261,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2265,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 408  ##sys#check-closure */
t5=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[66]);}

/* k2263 in extend-procedure in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[4],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 409  ##sys#decorate-lambda */
t4=*((C_word*)lf[67]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a2285 in k2263 in extend-procedure in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2286,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,lf[65],((C_word*)t0)[2]);
t5=(C_word)C_i_setslot(t2,t3,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* a2269 in k2263 in extend-procedure in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2225 in k2100 in k1081 in k1078 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2270,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[65],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer-f64-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2211,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub574(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_flonum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub574(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-f32-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2197,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub566(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_flonum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub566(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-s32-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2183,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub558(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub558(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-u32-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2169,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub550(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub550(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-s16-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2155,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub542(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub542(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-u16-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2141,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub534(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub534(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-s8-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2127,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub526(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub526(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-u8-set! in k2100 in k1081 in k1078 */
static void C_ccall f_2113(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2113,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_i_foreign_pointer_argumentp(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub518(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub518(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* locative? in k2100 in k1081 in k1078 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2107,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(C_word)C_locativep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* locative->object in k2100 in k1081 in k1078 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2104,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_locative_to_object(t2));}

/* locative-set! in k1081 in k1078 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2097,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_locative_set(t2,t3));}

/* make-weak-locative in k1081 in k1078 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2068r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2068r(t0,t1,t2,t3);}}

static void C_ccall f_2068r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2076,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* lolevel.scm: 342  ##sys#make-locative */
t5=*((C_word*)lf[42]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,t2,C_fix(0),C_SCHEME_TRUE,lf[43]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
/* lolevel.scm: 342  ##sys#make-locative */
t7=*((C_word*)lf[42]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,t2,t6,C_SCHEME_TRUE,lf[43]);}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2074 in make-weak-locative in k1081 in k1078 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 342  ##sys#make-locative */
t2=*((C_word*)lf[42]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[43]);}

/* make-locative in k1081 in k1078 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2039r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2039r(t0,t1,t2,t3);}}

static void C_ccall f_2039r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2047,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* lolevel.scm: 339  ##sys#make-locative */
t5=*((C_word*)lf[42]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,t2,C_fix(0),C_SCHEME_FALSE,lf[41]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
/* lolevel.scm: 339  ##sys#make-locative */
t7=*((C_word*)lf[42]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,t2,t6,C_SCHEME_FALSE,lf[41]);}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2045 in make-locative in k1081 in k1078 */
static void C_ccall f_2047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 339  ##sys#make-locative */
t2=*((C_word*)lf[42]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE,lf[41]);}

/* pointer-tag in k1081 in k1078 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2016,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2028,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep((C_word)C_blockp(t4))){
t5=(C_word)C_specialp(t4);
t6=t3;
f_2028(t6,t5);}
else{
t5=t3;
f_2028(t5,C_SCHEME_FALSE);}}

/* k2026 in pointer-tag in k1081 in k1078 */
static void C_fcall f_2028(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep((C_word)C_taggedpointerp(((C_word*)t0)[2]))?(C_word)C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE));}
else{
/* lolevel.scm: 316  ##sys#error-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),lf[40],((C_word*)t0)[2]);}}

/* tagged-pointer? in k1081 in k1078 */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1972r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1972r(t0,t1,t2,t3);}}

static void C_ccall f_1972r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1976,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1976(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1976(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1974 in tagged-pointer? in k1081 in k1078 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep((C_word)C_blockp(((C_word*)t0)[3]))){
if(C_truep((C_word)C_taggedpointerp(((C_word*)t0)[3]))){
t2=(C_word)C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_equalp(t1,t3));}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* tag-pointer in k1081 in k1078 */
static void C_ccall f_1952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1952,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1956,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 301  ##sys#make-tagged-pointer */
t5=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1954 in tag-pointer in k1081 in k1078 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1959,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1967,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
if(C_truep((C_word)C_blockp(t4))){
t5=(C_word)C_specialp(t4);
t6=t3;
f_1967(t6,t5);}
else{
t5=t3;
f_1967(t5,C_SCHEME_FALSE);}}

/* k1965 in k1954 in tag-pointer in k1081 in k1078 */
static void C_fcall f_1967(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_copy_pointer(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
/* lolevel.scm: 304  ##sys#error-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),lf[37],((C_word*)t0)[5]);}}

/* k1957 in k1954 in tag-pointer in k1081 in k1078 */
static void C_ccall f_1959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* align-to-word in k1081 in k1078 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1915,3,t0,t1,t2);}
if(C_truep((C_word)C_i_integerp(t2))){
t3=t1;
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t6=(C_word)C_i_foreign_integer_argumentp(t4);
t7=t3;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)stub429(t5,t6));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1936,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep((C_word)C_blockp(t4))){
t5=(C_word)C_specialp(t4);
t6=t3;
f_1936(t6,t5);}
else{
t5=t3;
f_1936(t5,C_SCHEME_FALSE);}}}

/* k1934 in align-to-word in k1081 in k1078 */
static void C_fcall f_1936(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1936,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 291  ##sys#pointer->address */
t3=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
/* lolevel.scm: 293  ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[6],lf[35],lf[36],((C_word*)t0)[2]);}}

/* k1945 in k1934 in align-to-word in k1081 in k1078 */
static void C_ccall f_1947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1947,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t3=(C_word)C_i_foreign_integer_argumentp(t1);
t4=(C_word)stub429(t2,t3);
/* lolevel.scm: 291  ##sys#address->pointer */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[2],t4);}

/* pointer-offset in k1081 in k1078 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1895,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_integer_argumentp(t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)stub420(t4,t5,t6));}

/* pointer=? in k1081 in k1078 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1886,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1890,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 277  ##sys#check-special */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[33]);}

/* k1888 in pointer=? in k1081 in k1078 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 278  ##sys#check-special */
t3=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[33]);}

/* k1891 in k1888 in pointer=? in k1081 in k1078 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* pointer->object in k1081 in k1078 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1880,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1884,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 273  ##sys#check-pointer */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[32]);}

/* k1882 in pointer->object in k1081 in k1078 */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_pointer_to_object(((C_word*)t0)[2]));}

/* object->pointer in k1081 in k1078 */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1869,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=t1;
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub406(t5,t4));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* null-pointer? in k1081 in k1078 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1856,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1860,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 265  ##sys#check-special */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[30]);}

/* k1858 in null-pointer? in k1081 in k1078 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1867,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 266  ##sys#pointer->address */
t3=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1865 in k1858 in null-pointer? in k1081 in k1078 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(C_fix(0),t1));}

/* pointer->address in k1081 in k1078 */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1846,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1850,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 259  ##sys#check-special */
t4=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[25]);}

/* k1848 in pointer->address in k1081 in k1078 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 260  ##sys#pointer->address */
t2=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* address->pointer in k1081 in k1078 */
static void C_ccall f_1837(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1837,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1841,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 255  ##sys#check-integer */
t4=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[22]);}

/* k1839 in address->pointer in k1081 in k1078 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 256  ##sys#address->pointer */
t2=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pointer-like? in k1081 in k1078 */
static void C_ccall f_1826(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1826,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(C_word)C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer? in k1081 in k1078 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1815,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(C_word)C_anypointerp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* free in k1081 in k1078 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1805,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub371(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub371(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* allocate in k1081 in k1078 */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1798,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub366(t3,t4));}

/* object-copy in k1081 in k1078 */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1717,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1723,a[2]=t4,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1723(t6,t1,t2);}

/* copy in object-copy in k1081 in k1078 */
static void C_fcall f_1723(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1723,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(C_word)C_slot(t2,C_fix(1));
/* lolevel.scm: 233  ##sys#intern-symbol */
C_string_to_symbol(3,0,t1,t3);}
else{
t3=(C_word)C_block_size(t2);
t4=(C_truep((C_word)C_byteblockp(t2))?(C_word)C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1753,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 237  ##sys#make-vector */
t6=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1751 in copy in object-copy in k1081 in k1078 */
static void C_ccall f_1753(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1753,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1756,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_byteblockp(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:(C_word)C_i_symbolp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t6=(C_truep((C_word)C_specialp(((C_word*)t0)[5]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1768(t10,t3,t6);}}

/* doloop356 in k1751 in copy in object-copy in k1081 in k1078 */
static void C_fcall f_1768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1768,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1789,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 241  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1723(t5,t3,t4);}}

/* k1787 in doloop356 in k1751 in copy in object-copy in k1081 in k1078 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1768(t4,((C_word*)t0)[2],t3);}

/* k1754 in k1751 in copy in object-copy in k1081 in k1078 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* move-memory! in k1081 in k1078 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_1363r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1363r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1363r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1365,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1644,a[2]=t5,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1649,a[2]=t6,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1654,a[2]=t7,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-n185327 */
t9=t8;
f_1654(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-foffset186325 */
t11=t7;
f_1649(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-toffset187322 */
t13=t6;
f_1644(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body183192 */
t15=t5;
f_1365(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-n185 in move-memory! in k1081 in k1078 */
static void C_fcall f_1654(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1654,NULL,2,t0,t1);}
/* def-foffset186325 */
t2=((C_word*)t0)[2];
f_1649(t2,t1,C_SCHEME_FALSE);}

/* def-foffset186 in move-memory! in k1081 in k1078 */
static void C_fcall f_1649(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1649,NULL,3,t0,t1,t2);}
/* def-toffset187322 */
t3=((C_word*)t0)[2];
f_1644(t3,t1,t2,C_fix(0));}

/* def-toffset187 in move-memory! in k1081 in k1078 */
static void C_fcall f_1644(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1644,NULL,4,t0,t1,t2,t3);}
/* body183192 */
t4=((C_word*)t0)[2];
f_1365(t4,t1,t2,t3,C_fix(0));}

/* body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1365(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t17;
C_word t18;
C_word ab[41],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1365,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t14=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1380,a[2]=t8,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1396,a[2]=t8,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t17=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t12,a[6]=t10,a[7]=t6,a[8]=t3,a[9]=t4,a[10]=t2,a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm: 197  ##sys#check-block */
f_1085(t17,((C_word*)t0)[4],(C_word)C_a_i_list(&a,1,lf[11]));}

/* k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm: 198  ##sys#check-block */
f_1085(t2,((C_word*)t0)[2],(C_word)C_a_i_list(&a,1,lf[11]));}

/* k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1426,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1431,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t3,a[9]=((C_word*)t0)[11],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_1431(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1431(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1431,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_structurep(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
if(C_truep((C_word)C_i_memq(t4,((C_word*)t0)[9]))){
t5=(C_word)C_slot(t2,C_fix(1));
/* lolevel.scm: 202  move */
t18=t1;
t19=t5;
t20=t3;
t1=t18;
t2=t19;
t3=t20;
goto loop;}
else{
t5=t1;
t6=t2;
/* lolevel.scm: 173  ##sys#error-hook */
t7=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t6);}}
else{
if(C_truep((C_word)C_structurep(t3))){
t4=(C_word)C_slot(t3,C_fix(0));
if(C_truep((C_word)C_i_memq(t4,((C_word*)t0)[9]))){
t5=(C_word)C_slot(t3,C_fix(1));
/* lolevel.scm: 206  move */
t18=t1;
t19=t2;
t20=t5;
t1=t18;
t2=t19;
t3=t20;
goto loop;}
else{
t5=t1;
t6=t3;
/* lolevel.scm: 173  ##sys#error-hook */
t7=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t6);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t3,a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t5=t2;
if(C_truep((C_word)C_blockp(t5))){
t6=(C_word)C_anypointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1503(t7,t6);}
else{
t7=(C_word)C_locativep(t5);
t8=t4;
f_1503(t8,t7);}}
else{
t6=(C_word)C_locativep(t5);
t7=t4;
f_1503(t7,t6);}}}}

/* k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1503(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1503,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1522,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[8];
if(C_truep((C_word)C_blockp(t3))){
t4=(C_word)C_anypointerp(t3);
if(C_truep(t4)){
t5=t2;
f_1522(t5,t4);}
else{
t5=(C_word)C_locativep(t3);
t6=t2;
f_1522(t6,t5);}}
else{
t4=(C_word)C_locativep(t3);
t5=t2;
f_1522(t5,t4);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 215  ##sys#bytevector? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[7]);}}

/* k1569 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1571(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1571,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=(C_word)C_block_size(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t5=((C_word*)t0)[7];
if(C_truep((C_word)C_blockp(t5))){
t6=(C_word)C_anypointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1596(t7,t6);}
else{
t7=(C_word)C_locativep(t5);
t8=t4;
f_1596(t8,t7);}}
else{
t6=(C_word)C_locativep(t5);
t7=t4;
f_1596(t7,t6);}}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm: 173  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1594 in k1569 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1596,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1603,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[5];
if(C_truep(t3)){
/* lolevel.scm: 218  checkn1 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1380(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[6]);}
else{
/* lolevel.scm: 218  checkn1 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1380(t4,t2,((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[6]);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 219  ##sys#bytevector? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[9]);}}

/* k1611 in k1594 in k1569 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)tr2,(void*)f_1613,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[4];
t5=(C_truep(t4)?t4:((C_word*)t0)[3]);
t6=(C_word)C_block_size(((C_word*)t0)[9]);
/* lolevel.scm: 220  checkn2 */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1396(t7,t3,t5,((C_word*)t0)[3],t6,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm: 173  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1621 in k1611 in k1594 in k1569 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1623(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?(C_word)C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_fixnum_argumentp(t1);
t10=(C_word)C_i_foreign_fixnum_argumentp(t5);
t11=(C_word)C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)stub153(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1601 in k1594 in k1569 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?(C_word)C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?(C_word)C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_fixnum_argumentp(t1);
t10=(C_word)C_i_foreign_fixnum_argumentp(t5);
t11=(C_word)C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)stub121(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1520 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1522(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1522,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_1529(2,t4,t2);}
else{
/* lolevel.scm: 210  nosizerr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1368(t4,t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1538,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 211  ##sys#bytevector? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[7]);}}

/* k1536 in k1520 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1538,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1548,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1552,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=(C_word)C_block_size(((C_word*)t0)[9]);
/* lolevel.scm: 212  checkn1 */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1380(t7,t3,t4,t6,((C_word*)t0)[6]);}
else{
/* lolevel.scm: 212  nosizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1368(t6,t5);}}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm: 173  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1550 in k1536 in k1520 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_block_size(((C_word*)t0)[5]);
/* lolevel.scm: 212  checkn1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1380(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k1546 in k1536 in k1520 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1548(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?(C_word)C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_fixnum_argumentp(t1);
t10=(C_word)C_i_foreign_fixnum_argumentp(t5);
t11=(C_word)C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)stub137(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1527 in k1520 in k1501 in move in k1424 in k1421 in body183 in move-memory! in k1081 in k1078 */
static void C_ccall f_1529(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?(C_word)C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?(C_word)C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_fixnum_argumentp(t1);
t10=(C_word)C_i_foreign_fixnum_argumentp(t5);
t11=(C_word)C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)stub105(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* checkn2 in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1396,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1403,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=(C_word)C_fixnum_difference(t3,t5);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,t8))){
t9=(C_word)C_fixnum_difference(t4,t6);
t10=t7;
f_1403(t10,(C_word)C_fixnum_less_or_equal_p(t2,t9));}
else{
t9=t7;
f_1403(t9,C_SCHEME_FALSE);}}

/* k1401 in checkn2 in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1403(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1403,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* lolevel.scm: 195  sizerr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1374(t2,((C_word*)t0)[5],(C_word)C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]));}}

/* checkn1 in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1380(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1380,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_difference(t3,t4);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,t5))){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* lolevel.scm: 190  sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1374(t6,t1,(C_word)C_a_i_list(&a,2,t2,t3));}}

/* sizerr in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1374(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1374,NULL,3,t0,t1,t2);}
C_apply(8,0,t1,*((C_word*)lf[12]+1),lf[11],lf[14],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* nosizerr in body183 in move-memory! in k1081 in k1078 */
static void C_fcall f_1368(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1368,NULL,2,t0,t1);}
/* lolevel.scm: 182  ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,lf[11],lf[13],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#check-pointer in k1081 in k1078 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1219r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1219r(t0,t1,t2,t3);}}

static void C_ccall f_1219r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1231,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep((C_word)C_blockp(t5))){
t6=(C_word)C_anypointerp(t5);
t7=t4;
f_1231(t7,t6);}
else{
t6=t4;
f_1231(t6,C_SCHEME_FALSE);}}

/* k1229 in ##sys#check-pointer in k1081 in k1078 */
static void C_fcall f_1231(C_word t0,C_word t1){
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
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[3]))){
t2=(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
/* lolevel.scm: 140  ##sys#error-hook */
t3=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),t2,lf[9],((C_word*)t0)[2]);}
else{
/* lolevel.scm: 140  ##sys#error-hook */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),C_SCHEME_FALSE,lf[9],((C_word*)t0)[2]);}}}

/* ##sys#check-generic-structure in k1081 in k1078 */
static void C_fcall f_1158(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1158,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1170,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep((C_word)C_blockp(t5))){
t6=(C_word)C_structurep(t5);
t7=t4;
f_1170(t7,t6);}
else{
t6=t4;
f_1170(t6,C_SCHEME_FALSE);}}

/* k1168 in ##sys#check-generic-structure in k1081 in k1078 */
static void C_fcall f_1170(C_word t0,C_word t1){
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
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(C_word)C_i_car(((C_word*)t0)[3]);
/* lolevel.scm: 126  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],lf[6],t2,lf[7],((C_word*)t0)[2]);}
else{
/* lolevel.scm: 126  ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[6],C_SCHEME_FALSE,lf[7],((C_word*)t0)[2]);}}}

/* ##sys#check-block in k1081 in k1078 */
static void C_fcall f_1085(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1085,NULL,3,t1,t2,t3);}
if(C_truep((C_word)C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t3);
/* lolevel.scm: 105  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR),t4,t2);}
else{
/* lolevel.scm: 105  ##sys#error-hook */
t4=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR),C_SCHEME_FALSE,t2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[222] = {
{"toplevel:lolevel_scm",(void*)C_lolevel_toplevel},
{"f_1080:lolevel_scm",(void*)f_1080},
{"f_1083:lolevel_scm",(void*)f_1083},
{"f_2102:lolevel_scm",(void*)f_2102},
{"f_3329:lolevel_scm",(void*)f_3329},
{"f_2227:lolevel_scm",(void*)f_2227},
{"f_3319:lolevel_scm",(void*)f_3319},
{"f_2231:lolevel_scm",(void*)f_2231},
{"f_3309:lolevel_scm",(void*)f_3309},
{"f_2235:lolevel_scm",(void*)f_2235},
{"f_3299:lolevel_scm",(void*)f_3299},
{"f_2239:lolevel_scm",(void*)f_2239},
{"f_3289:lolevel_scm",(void*)f_3289},
{"f_2243:lolevel_scm",(void*)f_2243},
{"f_3279:lolevel_scm",(void*)f_3279},
{"f_2247:lolevel_scm",(void*)f_2247},
{"f_3269:lolevel_scm",(void*)f_3269},
{"f_2251:lolevel_scm",(void*)f_2251},
{"f_3259:lolevel_scm",(void*)f_3259},
{"f_2255:lolevel_scm",(void*)f_2255},
{"f_2389:lolevel_scm",(void*)f_2389},
{"f_3235:lolevel_scm",(void*)f_3235},
{"f_3239:lolevel_scm",(void*)f_3239},
{"f_3242:lolevel_scm",(void*)f_3242},
{"f_2528:lolevel_scm",(void*)f_2528},
{"f_3222:lolevel_scm",(void*)f_3222},
{"f_3213:lolevel_scm",(void*)f_3213},
{"f_3204:lolevel_scm",(void*)f_3204},
{"f_3198:lolevel_scm",(void*)f_3198},
{"f_3167:lolevel_scm",(void*)f_3167},
{"f_3171:lolevel_scm",(void*)f_3171},
{"f_3174:lolevel_scm",(void*)f_3174},
{"f_3181:lolevel_scm",(void*)f_3181},
{"f_3196:lolevel_scm",(void*)f_3196},
{"f_3184:lolevel_scm",(void*)f_3184},
{"f_3158:lolevel_scm",(void*)f_3158},
{"f_1113:lolevel_scm",(void*)f_1113},
{"f_1135:lolevel_scm",(void*)f_1135},
{"f_1138:lolevel_scm",(void*)f_1138},
{"f_3162:lolevel_scm",(void*)f_3162},
{"f_3029:lolevel_scm",(void*)f_3029},
{"f_3033:lolevel_scm",(void*)f_3033},
{"f_3036:lolevel_scm",(void*)f_3036},
{"f_3041:lolevel_scm",(void*)f_3041},
{"f_3057:lolevel_scm",(void*)f_3057},
{"f_3100:lolevel_scm",(void*)f_3100},
{"f_3103:lolevel_scm",(void*)f_3103},
{"f_3112:lolevel_scm",(void*)f_3112},
{"f_3133:lolevel_scm",(void*)f_3133},
{"f_3106:lolevel_scm",(void*)f_3106},
{"f_3086:lolevel_scm",(void*)f_3086},
{"f_3089:lolevel_scm",(void*)f_3089},
{"f_3070:lolevel_scm",(void*)f_3070},
{"f_3073:lolevel_scm",(void*)f_3073},
{"f_2945:lolevel_scm",(void*)f_2945},
{"f_2949:lolevel_scm",(void*)f_2949},
{"f_2954:lolevel_scm",(void*)f_2954},
{"f_2967:lolevel_scm",(void*)f_2967},
{"f_3024:lolevel_scm",(void*)f_3024},
{"f_2973:lolevel_scm",(void*)f_2973},
{"f_2976:lolevel_scm",(void*)f_2976},
{"f_2986:lolevel_scm",(void*)f_2986},
{"f_2988:lolevel_scm",(void*)f_2988},
{"f_3010:lolevel_scm",(void*)f_3010},
{"f_2979:lolevel_scm",(void*)f_2979},
{"f_2853:lolevel_scm",(void*)f_2853},
{"f_2862:lolevel_scm",(void*)f_2862},
{"f_2907:lolevel_scm",(void*)f_2907},
{"f_2917:lolevel_scm",(void*)f_2917},
{"f3735:lolevel_scm",(void*)f3735},
{"f_2891:lolevel_scm",(void*)f_2891},
{"f_2898:lolevel_scm",(void*)f_2898},
{"f_2935:lolevel_scm",(void*)f_2935},
{"f_2689:lolevel_scm",(void*)f_2689},
{"f_2693:lolevel_scm",(void*)f_2693},
{"f_2696:lolevel_scm",(void*)f_2696},
{"f_2842:lolevel_scm",(void*)f_2842},
{"f_2699:lolevel_scm",(void*)f_2699},
{"f_2702:lolevel_scm",(void*)f_2702},
{"f_2710:lolevel_scm",(void*)f_2710},
{"f_2720:lolevel_scm",(void*)f_2720},
{"f_2835:lolevel_scm",(void*)f_2835},
{"f_2729:lolevel_scm",(void*)f_2729},
{"f_2823:lolevel_scm",(void*)f_2823},
{"f_2827:lolevel_scm",(void*)f_2827},
{"f_2819:lolevel_scm",(void*)f_2819},
{"f_2732:lolevel_scm",(void*)f_2732},
{"f_2735:lolevel_scm",(void*)f_2735},
{"f_2792:lolevel_scm",(void*)f_2792},
{"f_2738:lolevel_scm",(void*)f_2738},
{"f_2741:lolevel_scm",(void*)f_2741},
{"f_2751:lolevel_scm",(void*)f_2751},
{"f_2753:lolevel_scm",(void*)f_2753},
{"f_2774:lolevel_scm",(void*)f_2774},
{"f_2744:lolevel_scm",(void*)f_2744},
{"f_2705:lolevel_scm",(void*)f_2705},
{"f_2571:lolevel_scm",(void*)f_2571},
{"f_2578:lolevel_scm",(void*)f_2578},
{"f_2581:lolevel_scm",(void*)f_2581},
{"f_2586:lolevel_scm",(void*)f_2586},
{"f_2596:lolevel_scm",(void*)f_2596},
{"f_2605:lolevel_scm",(void*)f_2605},
{"f_2609:lolevel_scm",(void*)f_2609},
{"f_2612:lolevel_scm",(void*)f_2612},
{"f_2615:lolevel_scm",(void*)f_2615},
{"f_2625:lolevel_scm",(void*)f_2625},
{"f_2627:lolevel_scm",(void*)f_2627},
{"f_2648:lolevel_scm",(void*)f_2648},
{"f_2618:lolevel_scm",(void*)f_2618},
{"f_2682:lolevel_scm",(void*)f_2682},
{"f_2568:lolevel_scm",(void*)f_2568},
{"f_2530:lolevel_scm",(void*)f_2530},
{"f_2534:lolevel_scm",(void*)f_2534},
{"f_2540:lolevel_scm",(void*)f_2540},
{"f_2545:lolevel_scm",(void*)f_2545},
{"f_2502:lolevel_scm",(void*)f_2502},
{"f_2506:lolevel_scm",(void*)f_2506},
{"f_2509:lolevel_scm",(void*)f_2509},
{"f_2489:lolevel_scm",(void*)f_2489},
{"f_2493:lolevel_scm",(void*)f_2493},
{"f_2480:lolevel_scm",(void*)f_2480},
{"f_2484:lolevel_scm",(void*)f_2484},
{"f_2431:lolevel_scm",(void*)f_2431},
{"f_2435:lolevel_scm",(void*)f_2435},
{"f_2446:lolevel_scm",(void*)f_2446},
{"f_2422:lolevel_scm",(void*)f_2422},
{"f_2400:lolevel_scm",(void*)f_2400},
{"f_2391:lolevel_scm",(void*)f_2391},
{"f_1204:lolevel_scm",(void*)f_1204},
{"f_2395:lolevel_scm",(void*)f_2395},
{"f_2371:lolevel_scm",(void*)f_2371},
{"f_2375:lolevel_scm",(void*)f_2375},
{"f_2332:lolevel_scm",(void*)f_2332},
{"f_2346:lolevel_scm",(void*)f_2346},
{"f_2363:lolevel_scm",(void*)f_2363},
{"f_2296:lolevel_scm",(void*)f_2296},
{"f_2313:lolevel_scm",(void*)f_2313},
{"f_2330:lolevel_scm",(void*)f_2330},
{"f_2261:lolevel_scm",(void*)f_2261},
{"f_2265:lolevel_scm",(void*)f_2265},
{"f_2286:lolevel_scm",(void*)f_2286},
{"f_2270:lolevel_scm",(void*)f_2270},
{"f_2211:lolevel_scm",(void*)f_2211},
{"f_2197:lolevel_scm",(void*)f_2197},
{"f_2183:lolevel_scm",(void*)f_2183},
{"f_2169:lolevel_scm",(void*)f_2169},
{"f_2155:lolevel_scm",(void*)f_2155},
{"f_2141:lolevel_scm",(void*)f_2141},
{"f_2127:lolevel_scm",(void*)f_2127},
{"f_2113:lolevel_scm",(void*)f_2113},
{"f_2107:lolevel_scm",(void*)f_2107},
{"f_2104:lolevel_scm",(void*)f_2104},
{"f_2097:lolevel_scm",(void*)f_2097},
{"f_2068:lolevel_scm",(void*)f_2068},
{"f_2076:lolevel_scm",(void*)f_2076},
{"f_2039:lolevel_scm",(void*)f_2039},
{"f_2047:lolevel_scm",(void*)f_2047},
{"f_2016:lolevel_scm",(void*)f_2016},
{"f_2028:lolevel_scm",(void*)f_2028},
{"f_1972:lolevel_scm",(void*)f_1972},
{"f_1976:lolevel_scm",(void*)f_1976},
{"f_1952:lolevel_scm",(void*)f_1952},
{"f_1956:lolevel_scm",(void*)f_1956},
{"f_1967:lolevel_scm",(void*)f_1967},
{"f_1959:lolevel_scm",(void*)f_1959},
{"f_1915:lolevel_scm",(void*)f_1915},
{"f_1936:lolevel_scm",(void*)f_1936},
{"f_1947:lolevel_scm",(void*)f_1947},
{"f_1895:lolevel_scm",(void*)f_1895},
{"f_1886:lolevel_scm",(void*)f_1886},
{"f_1890:lolevel_scm",(void*)f_1890},
{"f_1893:lolevel_scm",(void*)f_1893},
{"f_1880:lolevel_scm",(void*)f_1880},
{"f_1884:lolevel_scm",(void*)f_1884},
{"f_1869:lolevel_scm",(void*)f_1869},
{"f_1856:lolevel_scm",(void*)f_1856},
{"f_1860:lolevel_scm",(void*)f_1860},
{"f_1867:lolevel_scm",(void*)f_1867},
{"f_1846:lolevel_scm",(void*)f_1846},
{"f_1850:lolevel_scm",(void*)f_1850},
{"f_1837:lolevel_scm",(void*)f_1837},
{"f_1841:lolevel_scm",(void*)f_1841},
{"f_1826:lolevel_scm",(void*)f_1826},
{"f_1815:lolevel_scm",(void*)f_1815},
{"f_1805:lolevel_scm",(void*)f_1805},
{"f_1798:lolevel_scm",(void*)f_1798},
{"f_1717:lolevel_scm",(void*)f_1717},
{"f_1723:lolevel_scm",(void*)f_1723},
{"f_1753:lolevel_scm",(void*)f_1753},
{"f_1768:lolevel_scm",(void*)f_1768},
{"f_1789:lolevel_scm",(void*)f_1789},
{"f_1756:lolevel_scm",(void*)f_1756},
{"f_1363:lolevel_scm",(void*)f_1363},
{"f_1654:lolevel_scm",(void*)f_1654},
{"f_1649:lolevel_scm",(void*)f_1649},
{"f_1644:lolevel_scm",(void*)f_1644},
{"f_1365:lolevel_scm",(void*)f_1365},
{"f_1423:lolevel_scm",(void*)f_1423},
{"f_1426:lolevel_scm",(void*)f_1426},
{"f_1431:lolevel_scm",(void*)f_1431},
{"f_1503:lolevel_scm",(void*)f_1503},
{"f_1571:lolevel_scm",(void*)f_1571},
{"f_1596:lolevel_scm",(void*)f_1596},
{"f_1613:lolevel_scm",(void*)f_1613},
{"f_1623:lolevel_scm",(void*)f_1623},
{"f_1603:lolevel_scm",(void*)f_1603},
{"f_1522:lolevel_scm",(void*)f_1522},
{"f_1538:lolevel_scm",(void*)f_1538},
{"f_1552:lolevel_scm",(void*)f_1552},
{"f_1548:lolevel_scm",(void*)f_1548},
{"f_1529:lolevel_scm",(void*)f_1529},
{"f_1396:lolevel_scm",(void*)f_1396},
{"f_1403:lolevel_scm",(void*)f_1403},
{"f_1380:lolevel_scm",(void*)f_1380},
{"f_1374:lolevel_scm",(void*)f_1374},
{"f_1368:lolevel_scm",(void*)f_1368},
{"f_1219:lolevel_scm",(void*)f_1219},
{"f_1231:lolevel_scm",(void*)f_1231},
{"f_1158:lolevel_scm",(void*)f_1158},
{"f_1170:lolevel_scm",(void*)f_1170},
{"f_1085:lolevel_scm",(void*)f_1085},
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
