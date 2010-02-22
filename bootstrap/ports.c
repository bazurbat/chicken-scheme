/* Generated from ports.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:33
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: ports.scm -optimize-level 2 -include-path . -include-path ./ -inline -explicit-use -no-trace -output-file ports.c -extend ./private-namespace.scm
   unit: ports
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[44];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,28),40,112,111,114,116,45,102,111,114,45,101,97,99,104,32,102,110,50,54,32,116,104,117,110,107,50,55,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,120,115,51,56,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,109,97,112,32,102,110,51,53,32,116,104,117,110,107,51,54,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,97,99,99,52,54,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,30),40,112,111,114,116,45,102,111,108,100,32,102,110,52,50,32,97,99,99,52,51,32,116,104,117,110,107,52,52,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,14),40,97,52,51,50,32,103,54,56,54,57,55,48,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,10),40,97,52,50,54,32,115,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,55,53,32,103,55,57,56,49,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,52,51,56,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,31),40,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,53,48,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,52,55,54,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,97,53,49,49,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,97,53,51,49,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,49,49,55,32,99,49,49,56,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,33),40,97,53,54,54,32,112,49,49,50,32,110,49,49,51,32,100,101,115,116,49,49,52,32,115,116,97,114,116,49,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,39),40,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,56,55,32,46,32,112,111,114,116,115,56,56,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,54,50,56,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,54,51,51,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,54,51,57,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,39),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,49,51,49,32,116,104,117,110,107,49,51,50,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,97,54,53,51,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,97,54,53,56,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,97,54,54,52,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,38),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,49,52,55,32,116,104,117,110,107,49,52,56,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,97,54,55,56,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,97,54,56,51,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,6),40,97,54,56,57,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,44),40,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,49,54,51,32,116,104,117,110,107,49,54,52,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,39),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,49,55,57,32,112,114,111,99,49,56,48,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,33),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,49,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,6),40,97,55,50,52,41,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,6),40,97,55,50,57,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,6),40,97,55,51,53,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,40),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,49,56,56,32,116,104,117,110,107,49,56,57,41};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,6),40,97,55,52,57,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,6),40,97,55,53,52,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,6),40,97,55,54,51,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,32),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,50,48,52,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,11),40,97,55,56,53,32,112,50,52,57,41,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,11),40,97,56,48,54,32,112,50,53,56,41,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,11),40,97,56,50,55,32,112,50,54,56,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,11),40,97,56,51,54,32,112,50,55,48,41,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,45),40,98,111,100,121,50,51,52,32,112,101,101,107,50,52,52,32,114,101,97,100,45,115,116,114,105,110,103,50,52,53,32,114,101,97,100,45,108,105,110,101,50,52,54,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,49),40,100,101,102,45,114,101,97,100,45,108,105,110,101,50,51,56,32,37,112,101,101,107,50,51,49,50,55,53,32,37,114,101,97,100,45,115,116,114,105,110,103,50,51,50,50,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,32),40,100,101,102,45,114,101,97,100,45,115,116,114,105,110,103,50,51,55,32,37,112,101,101,107,50,51,49,50,55,56,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,112,101,101,107,50,51,54,41,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,56),40,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,50,50,52,32,114,101,97,100,121,63,50,50,53,32,99,108,111,115,101,50,50,54,32,46,32,116,109,112,50,50,51,50,50,55,41};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,16),40,97,57,51,50,32,112,51,48,52,32,99,51,48,53,41};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,16),40,97,57,52,50,32,112,51,48,54,32,115,51,48,55,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,11),40,97,57,52,56,32,112,51,48,56,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,11),40,97,57,53,55,32,112,51,49,48,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,48),40,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,50,57,52,32,99,108,111,115,101,50,57,53,32,46,32,116,109,112,50,57,51,50,57,54,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_ports_toplevel)
C_externexport void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_338)
static void C_ccall f_338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_928)
static void C_ccall f_928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_953)
static void C_ccall f_953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_943)
static void C_ccall f_943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_852)
static void C_fcall f_852(C_word t0,C_word t1) C_noret;
C_noret_decl(f_847)
static void C_fcall f_847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_842)
static void C_fcall f_842(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_771)
static void C_fcall f_771(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_781)
static void C_ccall f_781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_784)
static void C_ccall f_784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_837)
static void C_ccall f_837(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_730)
static void C_ccall f_730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_704)
static void C_ccall f_704(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_708)
static void C_ccall f_708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_670)
static void C_ccall f_670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_674)
static void C_ccall f_674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_679)
static void C_ccall f_679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_665)
static void C_ccall f_665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_659)
static void C_ccall f_659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_654)
static void C_ccall f_654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_624)
static void C_ccall f_624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_640)
static void C_ccall f_640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_629)
static void C_ccall f_629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_468)
static void C_ccall f_468(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_468)
static void C_ccall f_468r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_573)
static void C_fcall f_573(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_589)
static void C_ccall f_589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_592)
static void C_fcall f_592(C_word t0,C_word t1) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_538)
static void C_fcall f_538(C_word t0,C_word t1) C_noret;
C_noret_decl(f_548)
static void C_ccall f_548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_477)
static void C_ccall f_477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_483)
static void C_fcall f_483(C_word t0,C_word t1) C_noret;
C_noret_decl(f_493)
static void C_ccall f_493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_421)
static void C_ccall f_421(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_421)
static void C_ccall f_421r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_439)
static void C_ccall f_439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_445)
static void C_fcall f_445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_455)
static void C_ccall f_455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_433)
static void C_ccall f_433(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_396)
static void C_ccall f_396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_402)
static void C_fcall f_402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_406)
static void C_ccall f_406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_419)
static void C_ccall f_419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_370)
static void C_fcall f_370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_394)
static void C_ccall f_394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_346)
static void C_fcall f_346(C_word t0,C_word t1) C_noret;
C_noret_decl(f_350)
static void C_ccall f_350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_359)
static void C_ccall f_359(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_852)
static void C_fcall trf_852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_852(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_852(t0,t1);}

C_noret_decl(trf_847)
static void C_fcall trf_847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_847(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_847(t0,t1,t2);}

C_noret_decl(trf_842)
static void C_fcall trf_842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_842(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_842(t0,t1,t2,t3);}

C_noret_decl(trf_771)
static void C_fcall trf_771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_771(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_771(t0,t1,t2,t3,t4);}

C_noret_decl(trf_573)
static void C_fcall trf_573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_573(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_573(t0,t1,t2,t3);}

C_noret_decl(trf_592)
static void C_fcall trf_592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_592(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_592(t0,t1);}

C_noret_decl(trf_538)
static void C_fcall trf_538(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_538(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_538(t0,t1);}

C_noret_decl(trf_483)
static void C_fcall trf_483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_483(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_483(t0,t1);}

C_noret_decl(trf_445)
static void C_fcall trf_445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_445(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_445(t0,t1,t2);}

C_noret_decl(trf_402)
static void C_fcall trf_402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_402(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_402(t0,t1,t2);}

C_noret_decl(trf_370)
static void C_fcall trf_370(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_370(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_370(t0,t1,t2);}

C_noret_decl(trf_346)
static void C_fcall trf_346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_346(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_346(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_ports_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_ports_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("ports_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(400)){
C_save(t1);
C_rereclaim2(400*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,44);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],13,"port-for-each");
lf[3]=C_h_intern(&lf[3],7,"reverse");
lf[4]=C_h_intern(&lf[4],8,"port-map");
lf[5]=C_h_intern(&lf[5],9,"port-fold");
lf[6]=C_h_intern(&lf[6],19,"make-broadcast-port");
lf[7]=C_h_intern(&lf[7],12,"write-string");
lf[8]=C_h_intern(&lf[8],12,"\003sysfor-each");
lf[9]=C_h_intern(&lf[9],12,"flush-output");
lf[10]=C_h_intern(&lf[10],16,"make-output-port");
lf[11]=C_h_intern(&lf[11],4,"noop");
lf[12]=C_h_intern(&lf[12],22,"make-concatenated-port");
lf[13]=C_h_intern(&lf[13],18,"\003sysread-char/port");
lf[14]=C_h_intern(&lf[14],11,"char-ready\077");
lf[15]=C_h_intern(&lf[15],9,"peek-char");
lf[16]=C_h_intern(&lf[16],12,"read-string!");
lf[17]=C_h_intern(&lf[17],15,"make-input-port");
lf[18]=C_h_intern(&lf[18],20,"with-input-from-port");
lf[19]=C_h_intern(&lf[19],18,"\003sysstandard-input");
lf[20]=C_h_intern(&lf[20],16,"\003sysdynamic-wind");
lf[21]=C_h_intern(&lf[21],14,"\003syscheck-port");
lf[22]=C_h_intern(&lf[22],19,"with-output-to-port");
lf[23]=C_h_intern(&lf[23],19,"\003sysstandard-output");
lf[24]=C_h_intern(&lf[24],21,"with-output-from-port");
lf[25]=C_h_intern(&lf[25],25,"with-error-output-to-port");
lf[26]=C_h_intern(&lf[26],18,"\003sysstandard-error");
lf[27]=C_h_intern(&lf[27],27,"with-error-output-from-port");
lf[28]=C_h_intern(&lf[28],17,"open-input-string");
lf[29]=C_h_intern(&lf[29],22,"call-with-input-string");
lf[30]=C_h_intern(&lf[30],18,"open-output-string");
lf[31]=C_h_intern(&lf[31],17,"get-output-string");
lf[32]=C_h_intern(&lf[32],23,"call-with-output-string");
lf[33]=C_h_intern(&lf[33],22,"with-input-from-string");
lf[34]=C_h_intern(&lf[34],21,"with-output-to-string");
lf[35]=C_h_intern(&lf[35],18,"\003sysset-port-data!");
lf[36]=C_h_intern(&lf[36],13,"\003sysmake-port");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[38]=C_h_intern(&lf[38],6,"custom");
lf[39]=C_h_intern(&lf[39],9,"\003syserror");
lf[40]=C_h_intern(&lf[40],6,"string");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\010(custom)");
lf[42]=C_h_intern(&lf[42],17,"register-feature!");
lf[43]=C_h_intern(&lf[43],5,"ports");
C_register_lf2(lf,44,create_ptable());
t2=C_mutate(&lf[0] /* (set! c286 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_338,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ports.scm: 71   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[42]+1)))(3,*((C_word*)lf[42]+1),t3,lf[43]);}

/* k336 */
static void C_ccall f_338(C_word c,C_word t0,C_word t1){
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
C_word ab[50],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_338,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=*((C_word*)lf[3]+1);
t4=C_mutate((C_word*)lf[4]+1 /* (set! port-map ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_364,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_396,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[6]+1 /* (set! make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_421,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_468,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[18]+1 /* (set! with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[22]+1 /* (set! with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_645,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[25]+1 /* (set! with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_670,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[28]+1);
t12=C_mutate((C_word*)lf[29]+1 /* (set! call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_695,a[2]=t11,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[30]+1);
t14=*((C_word*)lf[31]+1);
t15=C_mutate((C_word*)lf[32]+1 /* (set! call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_704,a[2]=t13,a[3]=t14,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t16=*((C_word*)lf[28]+1);
t17=C_mutate((C_word*)lf[33]+1 /* (set! with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_716,a[2]=t16,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp));
t18=*((C_word*)lf[30]+1);
t19=*((C_word*)lf[31]+1);
t20=C_mutate((C_word*)lf[34]+1 /* (set! with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_741,a[2]=t18,a[3]=t19,a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t21=C_mutate((C_word*)lf[17]+1 /* (set! make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_769,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t22=*((C_word*)lf[40]+1);
t23=C_mutate((C_word*)lf[10]+1 /* (set! make-output-port ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_915,a[2]=t22,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t24=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,C_SCHEME_UNDEFINED);}

/* make-output-port in k336 */
static void C_ccall f_915(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_915r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_915r(t0,t1,t2,t3,t4);}}

static void C_ccall f_915r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_919,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_919(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_919(2,t7,(C_word)C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k917 in make-output-port in k336 */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_933,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_943,a[2]=((C_word*)t0)[5],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_949,a[2]=((C_word*)t0)[3],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_958,a[2]=t1,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t2,t3,t4,t5,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t7=(C_word)C_a_i_vector(&a,1,C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_928,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 251  ##sys#make-port */
t9=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,C_SCHEME_FALSE,t6,lf[41],lf[38]);}

/* k926 in k917 in make-output-port in k336 */
static void C_ccall f_928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_931,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 252  ##sys#set-port-data! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t2,t1,((C_word*)t0)[2]);}

/* k929 in k926 in k917 in make-output-port in k336 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a957 in k917 in make-output-port in k336 */
static void C_ccall f_958(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_958,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* ports.scm: 246  flush */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a948 in k917 in make-output-port in k336 */
static void C_ccall f_949(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_949,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_953,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 243  close */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k951 in a948 in k917 in make-output-port in k336 */
static void C_ccall f_953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a942 in k917 in make-output-port in k336 */
static void C_ccall f_943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_943,4,t0,t1,t2,t3);}
/* ports.scm: 241  write */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a932 in k917 in make-output-port in k336 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_933,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_941,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 239  string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k939 in a932 in k917 in make-output-port in k336 */
static void C_ccall f_941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm: 239  write */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* make-input-port in k336 */
static void C_ccall f_769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr5r,(void*)f_769r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_769r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_769r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(18);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_771,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_842,a[2]=t6,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_847,a[2]=t7,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_852,a[2]=t8,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-peek236279 */
t10=t9;
f_852(t10,t1);}
else{
t10=(C_word)C_i_car(t5);
t11=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-read-string237277 */
t12=t8;
f_847(t12,t1,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* def-read-line238274 */
t14=t7;
f_842(t14,t1,t10,t12);}
else{
t14=(C_word)C_i_car(t13);
t15=(C_word)C_i_cdr(t13);
if(C_truep((C_word)C_i_nullp(t15))){
/* body234243 */
t16=t6;
f_771(t16,t1,t10,t12,t14);}
else{
/* ##sys#error */
t16=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}}}}

/* def-peek236 in make-input-port in k336 */
static void C_fcall f_852(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_852,NULL,2,t0,t1);}
/* def-read-string237277 */
t2=((C_word*)t0)[2];
f_847(t2,t1,C_SCHEME_FALSE);}

/* def-read-string237 in make-input-port in k336 */
static void C_fcall f_847(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_847,NULL,3,t0,t1,t2);}
/* def-read-line238274 */
t3=((C_word*)t0)[2];
f_842(t3,t1,t2,C_SCHEME_FALSE);}

/* def-read-line238 in make-input-port in k336 */
static void C_fcall f_842(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_842,NULL,4,t0,t1,t2,t3);}
/* body234243 */
t4=((C_word*)t0)[2];
f_771(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body234 in make-input-port in k336 */
static void C_fcall f_771(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_771,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_786,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_828,a[2]=((C_word*)t0)[3],a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_837,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_a_i_vector(&a,9,t5,t6,C_SCHEME_FALSE,C_SCHEME_FALSE,t7,C_SCHEME_FALSE,t8,t3,t4);
t10=(C_word)C_a_i_vector(&a,1,C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_781,a[2]=t10,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 227  ##sys#make-port */
t12=*((C_word*)lf[36]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t11,C_SCHEME_TRUE,t9,lf[37],lf[38]);}

/* k779 in body234 in make-input-port in k336 */
static void C_ccall f_781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_784,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 228  ##sys#set-port-data! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[35]+1)))(4,*((C_word*)lf[35]+1),t2,t1,((C_word*)t0)[2]);}

/* k782 in k779 in body234 in make-input-port in k336 */
static void C_ccall f_784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a836 in body234 in make-input-port in k336 */
static void C_ccall f_837(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_837,3,t0,t1,t2);}
/* ports.scm: 223  ready? */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* a827 in body234 in make-input-port in k336 */
static void C_ccall f_828(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_828,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_832,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 219  close */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k830 in a827 in body234 in make-input-port in k336 */
static void C_ccall f_832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a806 in body234 in make-input-port in k336 */
static void C_ccall f_807(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_807,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* ports.scm: 210  peek */
t4=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_823,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 213  read */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}}

/* k821 in a806 in body234 in make-input-port in k336 */
static void C_ccall f_823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(10),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a785 in body234 in make-input-port in k336 */
static void C_ccall f_786(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_786,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* ports.scm: 203  read */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=(C_word)C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* ports.scm: 207  read */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}}}

/* with-output-to-string in k336 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_741,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_745,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 186  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k743 in with-output-to-string in k336 */
static void C_ccall f_745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_745,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_750,a[2]=t3,a[3]=t5,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_764,a[2]=t5,a[3]=t3,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a763 in k743 in with-output-to-string in k336 */
static void C_ccall f_764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_764,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[23]+1));
t3=C_mutate((C_word*)lf[23]+1 /* (set! standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a754 in k743 in with-output-to-string in k336 */
static void C_ccall f_755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_759,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 187  thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k757 in a754 in k743 in with-output-to-string in k336 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm: 188  get-output-string */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],*((C_word*)lf[23]+1));}

/* a749 in k743 in with-output-to-string in k336 */
static void C_ccall f_750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_750,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[23]+1));
t3=C_mutate((C_word*)lf[23]+1 /* (set! standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* with-input-from-string in k336 */
static void C_ccall f_716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_716,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_720,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 179  open-input-string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k718 in with-input-from-string in k336 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_720,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_725,a[2]=t3,a[3]=t5,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_730,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_736,a[2]=t5,a[3]=t3,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a735 in k718 in with-input-from-string in k336 */
static void C_ccall f_736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_736,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a729 in k718 in with-input-from-string in k336 */
static void C_ccall f_730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_730,2,t0,t1);}
/* ports.scm: 180  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a724 in k718 in with-input-from-string in k336 */
static void C_ccall f_725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_725,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* call-with-output-string in k336 */
static void C_ccall f_704(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_704,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_708,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 172  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k706 in call-with-output-string in k336 */
static void C_ccall f_708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_711,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 173  proc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k709 in k706 in call-with-output-string in k336 */
static void C_ccall f_711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm: 174  get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-input-string in k336 */
static void C_ccall f_695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_695,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_699,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 165  open-input-string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k697 in call-with-input-string in k336 */
static void C_ccall f_699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm: 166  proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* with-error-output-to-port in k336 */
static void C_ccall f_670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_670,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_674,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 156  ##sys#check-port */
t5=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[27]);}

/* k672 in with-error-output-to-port in k336 */
static void C_ccall f_674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_674,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_679,a[2]=t3,a[3]=t5,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_684,a[2]=((C_word*)t0)[3],a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_690,a[2]=t5,a[3]=t3,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a689 in k672 in with-error-output-to-port in k336 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_690,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[26]+1));
t3=C_mutate((C_word*)lf[26]+1 /* (set! standard-error ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a683 in k672 in with-error-output-to-port in k336 */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_684,2,t0,t1);}
/* ports.scm: 158  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a678 in k672 in with-error-output-to-port in k336 */
static void C_ccall f_679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_679,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[26]+1));
t3=C_mutate((C_word*)lf[26]+1 /* (set! standard-error ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* with-output-to-port in k336 */
static void C_ccall f_645(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_645,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_649,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 151  ##sys#check-port */
t5=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[24]);}

/* k647 in with-output-to-port in k336 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_649,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_654,a[2]=t3,a[3]=t5,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_659,a[2]=((C_word*)t0)[3],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_665,a[2]=t5,a[3]=t3,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a664 in k647 in with-output-to-port in k336 */
static void C_ccall f_665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_665,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[23]+1));
t3=C_mutate((C_word*)lf[23]+1 /* (set! standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a658 in k647 in with-output-to-port in k336 */
static void C_ccall f_659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_659,2,t0,t1);}
/* ports.scm: 153  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a653 in k647 in with-output-to-port in k336 */
static void C_ccall f_654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_654,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[23]+1));
t3=C_mutate((C_word*)lf[23]+1 /* (set! standard-output ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* with-input-from-port in k336 */
static void C_ccall f_620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_620,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_624,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 146  ##sys#check-port */
t5=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[18]);}

/* k622 in with-input-from-port in k336 */
static void C_ccall f_624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_624,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_629,a[2]=t3,a[3]=t5,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_634,a[2]=((C_word*)t0)[3],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_640,a[2]=t5,a[3]=t3,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a639 in k622 in with-input-from-port in k336 */
static void C_ccall f_640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_640,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a633 in k622 in with-input-from-port in k336 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
/* ports.scm: 148  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a628 in k622 in with-input-from-port in k336 */
static void C_ccall f_629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_629,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[19]+1));
t3=C_mutate((C_word*)lf[19]+1 /* (set! standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* make-concatenated-port in k336 */
static void C_ccall f_468(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr3r,(void*)f_468r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_468r(t0,t1,t2,t3);}}

static void C_ccall f_468r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(21);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_477,a[2]=t6,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_512,a[2]=t6,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_532,a[2]=t6,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_567,a[2]=t6,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 109  make-input-port */
((C_proc7)C_retrieve_proc(*((C_word*)lf[17]+1)))(7,*((C_word*)lf[17]+1),t1,t7,t8,*((C_word*)lf[11]+1),t9,t10);}

/* a566 in make-concatenated-port in k336 */
static void C_ccall f_567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_567,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_573,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_573(t9,t1,t3,C_fix(0));}

/* loop in a566 in make-concatenated-port in k336 */
static void C_fcall f_573(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_573,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[5])[1]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_589,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_car(((C_word*)((C_word*)t0)[5])[1]);
t6=(C_word)C_fixnum_plus(((C_word*)t0)[3],t3);
/* ports.scm: 137  read-string! */
((C_proc6)C_retrieve_proc(*((C_word*)lf[16]+1)))(6,*((C_word*)lf[16]+1),t4,t2,((C_word*)t0)[2],t5,t6);}}}

/* k587 in loop in a566 in make-concatenated-port in k336 */
static void C_ccall f_589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_592,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,((C_word*)t0)[6]))){
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t2;
f_592(t5,t4);}
else{
t3=t2;
f_592(t3,C_SCHEME_UNDEFINED);}}

/* k590 in k587 in loop in a566 in make-concatenated-port in k336 */
static void C_fcall f_592(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]);
/* ports.scm: 140  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_573(t4,((C_word*)t0)[2],t2,t3);}

/* a531 in make-concatenated-port in k336 */
static void C_ccall f_532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_532,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_538,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_538(t5,t1);}

/* loop in a531 in make-concatenated-port in k336 */
static void C_fcall f_538(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_538,NULL,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_548,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* ports.scm: 127  peek-char */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* k546 in loop in a531 in make-concatenated-port in k336 */
static void C_ccall f_548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep((C_word)C_eofp(t1))){
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
/* ports.scm: 130  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_538(t4,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* a511 in make-concatenated-port in k336 */
static void C_ccall f_512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_512,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* ports.scm: 121  char-ready? */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}}

/* a476 in make-concatenated-port in k336 */
static void C_ccall f_477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_477,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_483,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_483(t5,t1);}

/* loop in a476 in make-concatenated-port in k336 */
static void C_fcall f_483(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_483,NULL,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_493,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* read-char/port */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* k491 in loop in a476 in make-concatenated-port in k336 */
static void C_ccall f_493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep((C_word)C_eofp(t1))){
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
/* ports.scm: 117  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_483(t4,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* make-broadcast-port in k336 */
static void C_ccall f_421(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_421r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_421r(t0,t1,t2);}}

static void C_ccall f_421r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_427,a[2]=t2,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_439,a[2]=t2,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 102  make-output-port */
((C_proc5)C_retrieve_proc(*((C_word*)lf[10]+1)))(5,*((C_word*)lf[10]+1),t1,t3,*((C_word*)lf[11]+1),t4);}

/* a438 in make-broadcast-port in k336 */
static void C_ccall f_439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_439,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_445,a[2]=t3,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_445(t5,t1,((C_word*)t0)[2]);}

/* loop75 in a438 in make-broadcast-port in k336 */
static void C_fcall f_445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_445,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[9]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_455,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g8283 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k453 in loop75 in a438 in make-broadcast-port in k336 */
static void C_ccall f_455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_445(t3,((C_word*)t0)[2],t2);}

/* a426 in make-broadcast-port in k336 */
static void C_ccall f_427(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_427,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_433,a[2]=t2,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a432 in a426 in make-broadcast-port in k336 */
static void C_ccall f_433(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_433,3,t0,t1,t2);}
t3=*((C_word*)lf[7]+1);
/* g7172 */
t4=t3;
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* port-fold in k336 */
static void C_ccall f_396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_396,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_402,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_402(t8,t1,t3);}

/* loop in port-fold in k336 */
static void C_fcall f_402(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_402,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_406,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ports.scm: 94   thunk */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k404 in loop in port-fold in k336 */
static void C_ccall f_406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_406,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_419,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 97   fn */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[5]);}}

/* k417 in k404 in loop in port-fold in k336 */
static void C_ccall f_419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm: 97   loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_402(t2,((C_word*)t0)[2],t1);}

/* port-map in k336 */
static void C_ccall f_364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_364,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_370,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_370(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop in port-map in k336 */
static void C_fcall f_370(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_370,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_374,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ports.scm: 87   thunk */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k372 in loop in port-map in k336 */
static void C_ccall f_374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_374,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* ports.scm: 89   reverse */
t2=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_394,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 90   fn */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k392 in k372 in loop in port-map in k336 */
static void C_ccall f_394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_394,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* ports.scm: 90   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_370(t3,((C_word*)t0)[2],t2);}

/* port-for-each in k336 */
static void C_ccall f_340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_340,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_346,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_346(t7,t1);}

/* loop in port-for-each in k336 */
static void C_fcall f_346(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_346,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_350,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ports.scm: 78   thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k348 in loop in port-for-each in k336 */
static void C_ccall f_350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_350,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_359,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ports.scm: 80   fn */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k357 in k348 in loop in port-for-each in k336 */
static void C_ccall f_359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ports.scm: 81   loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_346(t2,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[87] = {
{"toplevel:ports_scm",(void*)C_ports_toplevel},
{"f_338:ports_scm",(void*)f_338},
{"f_915:ports_scm",(void*)f_915},
{"f_919:ports_scm",(void*)f_919},
{"f_928:ports_scm",(void*)f_928},
{"f_931:ports_scm",(void*)f_931},
{"f_958:ports_scm",(void*)f_958},
{"f_949:ports_scm",(void*)f_949},
{"f_953:ports_scm",(void*)f_953},
{"f_943:ports_scm",(void*)f_943},
{"f_933:ports_scm",(void*)f_933},
{"f_941:ports_scm",(void*)f_941},
{"f_769:ports_scm",(void*)f_769},
{"f_852:ports_scm",(void*)f_852},
{"f_847:ports_scm",(void*)f_847},
{"f_842:ports_scm",(void*)f_842},
{"f_771:ports_scm",(void*)f_771},
{"f_781:ports_scm",(void*)f_781},
{"f_784:ports_scm",(void*)f_784},
{"f_837:ports_scm",(void*)f_837},
{"f_828:ports_scm",(void*)f_828},
{"f_832:ports_scm",(void*)f_832},
{"f_807:ports_scm",(void*)f_807},
{"f_823:ports_scm",(void*)f_823},
{"f_786:ports_scm",(void*)f_786},
{"f_741:ports_scm",(void*)f_741},
{"f_745:ports_scm",(void*)f_745},
{"f_764:ports_scm",(void*)f_764},
{"f_755:ports_scm",(void*)f_755},
{"f_759:ports_scm",(void*)f_759},
{"f_750:ports_scm",(void*)f_750},
{"f_716:ports_scm",(void*)f_716},
{"f_720:ports_scm",(void*)f_720},
{"f_736:ports_scm",(void*)f_736},
{"f_730:ports_scm",(void*)f_730},
{"f_725:ports_scm",(void*)f_725},
{"f_704:ports_scm",(void*)f_704},
{"f_708:ports_scm",(void*)f_708},
{"f_711:ports_scm",(void*)f_711},
{"f_695:ports_scm",(void*)f_695},
{"f_699:ports_scm",(void*)f_699},
{"f_670:ports_scm",(void*)f_670},
{"f_674:ports_scm",(void*)f_674},
{"f_690:ports_scm",(void*)f_690},
{"f_684:ports_scm",(void*)f_684},
{"f_679:ports_scm",(void*)f_679},
{"f_645:ports_scm",(void*)f_645},
{"f_649:ports_scm",(void*)f_649},
{"f_665:ports_scm",(void*)f_665},
{"f_659:ports_scm",(void*)f_659},
{"f_654:ports_scm",(void*)f_654},
{"f_620:ports_scm",(void*)f_620},
{"f_624:ports_scm",(void*)f_624},
{"f_640:ports_scm",(void*)f_640},
{"f_634:ports_scm",(void*)f_634},
{"f_629:ports_scm",(void*)f_629},
{"f_468:ports_scm",(void*)f_468},
{"f_567:ports_scm",(void*)f_567},
{"f_573:ports_scm",(void*)f_573},
{"f_589:ports_scm",(void*)f_589},
{"f_592:ports_scm",(void*)f_592},
{"f_532:ports_scm",(void*)f_532},
{"f_538:ports_scm",(void*)f_538},
{"f_548:ports_scm",(void*)f_548},
{"f_512:ports_scm",(void*)f_512},
{"f_477:ports_scm",(void*)f_477},
{"f_483:ports_scm",(void*)f_483},
{"f_493:ports_scm",(void*)f_493},
{"f_421:ports_scm",(void*)f_421},
{"f_439:ports_scm",(void*)f_439},
{"f_445:ports_scm",(void*)f_445},
{"f_455:ports_scm",(void*)f_455},
{"f_427:ports_scm",(void*)f_427},
{"f_433:ports_scm",(void*)f_433},
{"f_396:ports_scm",(void*)f_396},
{"f_402:ports_scm",(void*)f_402},
{"f_406:ports_scm",(void*)f_406},
{"f_419:ports_scm",(void*)f_419},
{"f_364:ports_scm",(void*)f_364},
{"f_370:ports_scm",(void*)f_370},
{"f_374:ports_scm",(void*)f_374},
{"f_394:ports_scm",(void*)f_394},
{"f_340:ports_scm",(void*)f_340},
{"f_346:ports_scm",(void*)f_346},
{"f_350:ports_scm",(void*)f_350},
{"f_359:ports_scm",(void*)f_359},
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
