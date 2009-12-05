/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:26
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: srfi-18.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file srfi-18.c
   unit: srfi_18
*/

#include "chicken.h"

static C_TLS long C_ms;
#define C_get_seconds   C_seconds(&C_ms)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[111];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,99,111,109,112,117,116,101,45,116,105,109,101,45,108,105,109,105,116,32,116,109,52,48,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,99,117,114,114,101,110,116,45,116,105,109,101,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,53,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,116,105,109,101,45,62,109,105,108,108,105,115,101,99,111,110,100,115,32,116,109,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,19),40,115,101,99,111,110,100,115,45,62,116,105,109,101,32,110,54,49,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,109,105,108,108,105,115,101,99,111,110,100,115,45,62,116,105,109,101,32,110,109,115,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,116,105,109,101,63,32,120,55,50,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,29),40,106,111,105,110,45,116,105,109,101,111,117,116,45,101,120,99,101,112,116,105,111,110,63,32,120,55,52,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,32),40,97,98,97,110,100,111,110,101,100,45,109,117,116,101,120,45,101,120,99,101,112,116,105,111,110,63,32,120,55,56,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,34),40,116,101,114,109,105,110,97,116,101,100,45,116,104,114,101,97,100,45,101,120,99,101,112,116,105,111,110,63,32,120,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,25),40,117,110,99,97,117,103,104,116,45,101,120,99,101,112,116,105,111,110,63,32,120,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,97,55,56,51,32,46,32,114,101,115,117,108,116,115,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,55,55,55,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,30),40,109,97,107,101,45,116,104,114,101,97,100,32,116,104,117,110,107,57,48,32,46,32,110,97,109,101,57,49,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,116,104,114,101,97,100,63,32,120,57,56,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,99,117,114,114,101,110,116,45,116,104,114,101,97,100,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,24),40,116,104,114,101,97,100,45,115,116,97,116,101,32,116,104,114,101,97,100,49,48,49,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,27),40,116,104,114,101,97,100,45,115,112,101,99,105,102,105,99,32,116,104,114,101,97,100,49,48,52,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,116,104,114,101,97,100,49,48,55,32,120,49,48,56,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,32,116,104,114,101,97,100,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,36),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,45,115,101,116,33,32,116,104,114,101,97,100,49,49,52,32,113,49,49,53,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,18),40,116,104,114,101,97,100,45,110,97,109,101,32,120,49,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,25),40,116,104,114,101,97,100,45,115,116,97,114,116,33,32,116,104,114,101,97,100,49,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,97,57,53,52,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,16),40,97,57,51,57,32,114,101,116,117,114,110,49,52,52,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,106,111,105,110,33,32,116,104,114,101,97,100,49,50,57,32,46,32,116,105,109,101,111,117,116,49,51,48,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,29),40,116,104,114,101,97,100,45,116,101,114,109,105,110,97,116,101,33,32,116,104,114,101,97,100,49,54,49,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,55,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,17),40,97,49,49,48,56,32,114,101,116,117,114,110,49,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,27),40,116,104,114,101,97,100,45,115,117,115,112,101,110,100,33,32,116,104,114,101,97,100,49,55,52,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,114,101,115,117,109,101,33,32,116,104,114,101,97,100,49,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,49,49,54,54,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,52,32,114,101,116,117,114,110,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,21),40,116,104,114,101,97,100,45,115,108,101,101,112,33,32,116,109,49,56,56,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,109,117,116,101,120,63,32,120,50,48,49,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,20),40,109,97,107,101,45,109,117,116,101,120,32,46,32,105,100,50,48,51,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,17),40,109,117,116,101,120,45,110,97,109,101,32,120,50,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,25),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,32,109,117,116,101,120,50,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,35),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,109,117,116,101,120,50,49,52,32,120,50,49,53,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,22),40,109,117,116,101,120,45,115,116,97,116,101,32,109,117,116,101,120,50,49,56,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,8),40,115,119,105,116,99,104,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,99,104,101,99,107,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,49,52,48,56,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,52,53,55,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,17),40,97,49,50,56,55,32,114,101,116,117,114,110,50,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,36),40,109,117,116,101,120,45,108,111,99,107,33,32,109,117,116,101,120,50,51,49,32,46,32,109,115,45,97,110,100,45,116,50,51,50,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,49,54,51,57,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,53,57,56,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,17),40,97,49,53,48,50,32,114,101,116,117,114,110,51,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,41),40,109,117,116,101,120,45,117,110,108,111,99,107,33,32,109,117,116,101,120,50,57,51,32,46,32,99,118,97,114,45,97,110,100,45,116,111,50,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,32,46,32,110,97,109,101,51,53,49,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,26),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,63,32,120,51,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,35),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,32,99,118,51,53,53,41,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,45),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,99,118,51,53,56,32,120,51,53,57,41,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,36),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,105,103,110,97,108,33,32,99,118,97,114,51,54,50,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,51,56,50,32,103,51,56,54,51,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,39),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,98,114,111,97,100,99,97,115,116,33,32,99,118,97,114,51,55,57,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,49,56,52,52,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,33),40,116,104,114,101,97,100,45,115,105,103,110,97,108,33,32,116,104,114,101,97,100,52,48,53,32,101,120,110,52,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,40),40,116,104,114,101,97,100,45,119,97,105,116,45,102,111,114,45,105,47,111,33,32,102,100,52,51,49,32,46,32,116,109,112,52,51,48,52,51,50,41};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_srfi_18_toplevel)
C_externexport void C_ccall C_srfi_18_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_498)
static void C_ccall f_498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_fcall f_1855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1778)
static void C_fcall f_1778(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1261)
static void C_ccall f_1261(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1261)
static void C_ccall f_1261r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f2031)
static void C_ccall f2031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2027)
static void C_ccall f2027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2023)
static void C_ccall f2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1312)
static void C_fcall f_1312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1291)
static void C_fcall f_1291(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1196)
static void C_ccall f_1196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1186)
static void C_ccall f_1186(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1181)
static void C_ccall f_1181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_887)
static void C_fcall f_887(C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_831)
static void C_ccall f_831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_784)
static void C_ccall f_784(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_784)
static void C_ccall f_784r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_733)
static void C_ccall f_733(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_677)
static void C_ccall f_677(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_671)
static void C_ccall f_671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_667)
static void C_ccall f_667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_651)
static void C_ccall f_651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_643)
static void C_ccall f_643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_594)
static void C_ccall f_594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_573)
static void C_ccall f_573(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_558)
static void C_ccall f_558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_503)
static void C_fcall f_503(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1855)
static void C_fcall trf_1855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1855(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1855(t0,t1);}

C_noret_decl(trf_1778)
static void C_fcall trf_1778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1778(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1778(t0,t1,t2);}

C_noret_decl(trf_1312)
static void C_fcall trf_1312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1312(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1312(t0,t1);}

C_noret_decl(trf_1291)
static void C_fcall trf_1291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1291(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1291(t0,t1);}

C_noret_decl(trf_887)
static void C_fcall trf_887(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_887(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_887(t0,t1);}

C_noret_decl(trf_503)
static void C_fcall trf_503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_503(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_503(t0,t1,t2);}

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
C_srfi_18_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_18_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_18_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1085)){
C_save(t1);
C_rereclaim2(1085*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,111);
lf[0]=C_h_intern(&lf[0],8,"truncate");
lf[2]=C_h_intern(&lf[2],4,"time");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[6]=C_h_intern(&lf[6],12,"current-time");
lf[7]=C_h_intern(&lf[7],20,"srfi-18:current-time");
lf[8]=C_h_intern(&lf[8],13,"time->seconds");
lf[9]=C_h_intern(&lf[9],18,"time->milliseconds");
lf[10]=C_h_intern(&lf[10],13,"seconds->time");
lf[11]=C_h_intern(&lf[11],19,"\003sysflonum-fraction");
lf[12]=C_h_intern(&lf[12],18,"\003sysexact->inexact");
lf[13]=C_h_intern(&lf[13],3,"max");
lf[14]=C_h_intern(&lf[14],18,"milliseconds->time");
lf[15]=C_h_intern(&lf[15],5,"time\077");
lf[16]=C_h_intern(&lf[16],13,"srfi-18:time\077");
lf[17]=C_h_intern(&lf[17],5,"raise");
lf[18]=C_h_intern(&lf[18],10,"\003syssignal");
lf[19]=C_h_intern(&lf[19],23,"join-timeout-exception\077");
lf[20]=C_h_intern(&lf[20],9,"condition");
lf[21]=C_h_intern(&lf[21],22,"join-timeout-exception");
lf[22]=C_h_intern(&lf[22],26,"abandoned-mutex-exception\077");
lf[23]=C_h_intern(&lf[23],25,"abandoned-mutex-exception");
lf[24]=C_h_intern(&lf[24],28,"terminated-thread-exception\077");
lf[25]=C_h_intern(&lf[25],27,"terminated-thread-exception");
lf[26]=C_h_intern(&lf[26],19,"uncaught-exception\077");
lf[27]=C_h_intern(&lf[27],18,"uncaught-exception");
lf[28]=C_h_intern(&lf[28],25,"uncaught-exception-reason");
lf[29]=C_h_intern(&lf[29],6,"gensym");
lf[30]=C_h_intern(&lf[30],11,"make-thread");
lf[31]=C_h_intern(&lf[31],12,"\003sysschedule");
lf[32]=C_h_intern(&lf[32],16,"\003systhread-kill!");
lf[33]=C_h_intern(&lf[33],4,"dead");
lf[34]=C_h_intern(&lf[34],18,"\003syscurrent-thread");
lf[35]=C_h_intern(&lf[35],15,"\003sysmake-thread");
lf[36]=C_h_intern(&lf[36],7,"created");
lf[37]=C_h_intern(&lf[37],6,"thread");
lf[38]=C_h_intern(&lf[38],7,"thread\077");
lf[39]=C_h_intern(&lf[39],14,"current-thread");
lf[40]=C_h_intern(&lf[40],12,"thread-state");
lf[41]=C_h_intern(&lf[41],15,"thread-specific");
lf[42]=C_h_intern(&lf[42],20,"thread-specific-set!");
lf[43]=C_h_intern(&lf[43],14,"thread-quantum");
lf[44]=C_h_intern(&lf[44],19,"thread-quantum-set!");
lf[45]=C_h_intern(&lf[45],11,"thread-name");
lf[46]=C_h_intern(&lf[46],13,"thread-start!");
lf[47]=C_h_intern(&lf[47],5,"ready");
lf[48]=C_h_intern(&lf[48],22,"\003sysadd-to-ready-queue");
lf[49]=C_h_intern(&lf[49],9,"\003syserror");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000&thread cannot be started a second time");
lf[51]=C_h_intern(&lf[51],13,"thread-yield!");
lf[52]=C_h_intern(&lf[52],17,"\003systhread-yield!");
lf[53]=C_h_intern(&lf[53],12,"thread-join!");
lf[54]=C_h_intern(&lf[54],28,"\003sysremove-from-timeout-list");
lf[55]=C_h_intern(&lf[55],10,"terminated");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\001\000\000\006reason");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\377\016");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\026join-timeout-exception\376\377\016");
lf[59]=C_h_intern(&lf[59],33,"\003systhread-block-for-termination!");
lf[60]=C_h_intern(&lf[60],29,"\003systhread-block-for-timeout!");
lf[61]=C_h_intern(&lf[61],17,"thread-terminate!");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\033terminated-thread-exception\376\377\016");
lf[63]=C_h_intern(&lf[63],21,"\003sysprimordial-thread");
lf[64]=C_h_intern(&lf[64],16,"\003sysexit-handler");
lf[65]=C_h_intern(&lf[65],15,"thread-suspend!");
lf[66]=C_h_intern(&lf[66],9,"suspended");
lf[67]=C_h_intern(&lf[67],14,"thread-resume!");
lf[68]=C_h_intern(&lf[68],13,"thread-sleep!");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[70]=C_h_intern(&lf[70],6,"mutex\077");
lf[71]=C_h_intern(&lf[71],5,"mutex");
lf[72]=C_h_intern(&lf[72],10,"make-mutex");
lf[73]=C_h_intern(&lf[73],14,"\003sysmake-mutex");
lf[74]=C_h_intern(&lf[74],10,"mutex-name");
lf[75]=C_h_intern(&lf[75],14,"mutex-specific");
lf[76]=C_h_intern(&lf[76],19,"mutex-specific-set!");
lf[77]=C_h_intern(&lf[77],11,"mutex-state");
lf[78]=C_h_intern(&lf[78],9,"not-owned");
lf[79]=C_h_intern(&lf[79],9,"abandoned");
lf[80]=C_h_intern(&lf[80],13,"not-abandoned");
lf[81]=C_h_intern(&lf[81],11,"mutex-lock!");
lf[82]=C_h_intern(&lf[82],10,"\003sysappend");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\031abandoned-mutex-exception\376\377\016");
lf[84]=C_h_intern(&lf[84],8,"\003sysdelq");
lf[85]=C_h_intern(&lf[85],8,"sleeping");
lf[86]=C_h_intern(&lf[86],13,"mutex-unlock!");
lf[87]=C_h_intern(&lf[87],18,"condition-variable");
lf[88]=C_h_intern(&lf[88],7,"blocked");
lf[89]=C_h_intern(&lf[89],23,"make-condition-variable");
lf[90]=C_h_intern(&lf[90],19,"condition-variable\077");
lf[91]=C_h_intern(&lf[91],27,"condition-variable-specific");
lf[92]=C_h_intern(&lf[92],32,"condition-variable-specific-set!");
lf[93]=C_h_intern(&lf[93],26,"condition-variable-signal!");
lf[94]=C_h_intern(&lf[94],25,"\003systhread-basic-unblock!");
lf[95]=C_h_intern(&lf[95],29,"condition-variable-broadcast!");
lf[96]=C_h_intern(&lf[96],14,"thread-signal!");
lf[97]=C_h_intern(&lf[97],19,"\003systhread-unblock!");
lf[98]=C_h_intern(&lf[98],20,"thread-wait-for-i/o!");
lf[99]=C_h_intern(&lf[99],25,"\003systhread-block-for-i/o!");
lf[100]=C_h_intern(&lf[100],4,"\000all");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[102]=C_h_intern(&lf[102],4,"msvc");
lf[103]=C_h_intern(&lf[103],20,"\003sysread-prompt-hook");
lf[104]=C_h_intern(&lf[104],13,"\003systty-port\077");
lf[105]=C_h_intern(&lf[105],18,"\003sysstandard-input");
lf[106]=C_h_intern(&lf[106],14,"build-platform");
lf[107]=C_h_intern(&lf[107],27,"condition-property-accessor");
lf[108]=C_h_intern(&lf[108],6,"reason");
lf[109]=C_h_intern(&lf[109],17,"register-feature!");
lf[110]=C_h_intern(&lf[110],7,"srfi-18");
C_register_lf2(lf,111,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_498,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k496 */
static void C_ccall f_498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 55   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[109]+1)))(3,*((C_word*)lf[109]+1),t2,lf[110]);}

/* k499 in k496 */
static void C_ccall f_501(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_501,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=C_mutate(&lf[1] /* (set! compute-time-limit ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_503,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! current-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_546,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! srfi-18:current-time ...) */,*((C_word*)lf[6]+1));
t6=C_mutate((C_word*)lf[8]+1 /* (set! time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_573,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[9]+1 /* (set! time->milliseconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_594,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[10]+1 /* (set! seconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_623,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! milliseconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_677,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! time? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[16]+1 /* (set! srfi-18:time? ...) */,*((C_word*)lf[15]+1));
t12=C_mutate((C_word*)lf[17]+1 /* (set! raise ...) */,*((C_word*)lf[18]+1));
t13=C_mutate((C_word*)lf[19]+1 /* (set! join-timeout-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_701,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[22]+1 /* (set! abandoned-mutex-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[24]+1 /* (set! terminated-thread-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_733,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[26]+1 /* (set! uncaught-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_749,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 145  condition-property-accessor */
t18=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,lf[27],lf[108]);}

/* k765 in k499 in k496 */
static void C_ccall f_767(C_word c,C_word t0,C_word t1){
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
C_word ab[100],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_767,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1 /* (set! uncaught-exception-reason ...) */,t1);
t3=*((C_word*)lf[29]+1);
t4=C_mutate((C_word*)lf[30]+1 /* (set! make-thread ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_769,a[2]=t3,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[38]+1 /* (set! thread? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_813,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[39]+1 /* (set! current-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_819,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[40]+1 /* (set! thread-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_822,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[41]+1 /* (set! thread-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_831,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[42]+1 /* (set! thread-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_840,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[43]+1 /* (set! thread-quantum ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_849,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[44]+1 /* (set! thread-quantum-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_858,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[45]+1 /* (set! thread-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[30]+1);
t14=C_mutate((C_word*)lf[46]+1 /* (set! thread-start! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_883,a[2]=t13,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[51]+1 /* (set! thread-yield! ...) */,*((C_word*)lf[52]+1));
t16=C_mutate((C_word*)lf[53]+1 /* (set! thread-join! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_919,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[61]+1 /* (set! thread-terminate! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1047,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[65]+1 /* (set! thread-suspend! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1091,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[67]+1 /* (set! thread-resume! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1124,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[68]+1 /* (set! thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[70]+1 /* (set! mutex? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1186,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t22=*((C_word*)lf[29]+1);
t23=C_mutate((C_word*)lf[72]+1 /* (set! make-mutex ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1192,a[2]=t22,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp));
t24=C_mutate((C_word*)lf[74]+1 /* (set! mutex-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1210,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[75]+1 /* (set! mutex-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1219,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[76]+1 /* (set! mutex-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1228,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[77]+1 /* (set! mutex-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1237,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[81]+1 /* (set! mutex-lock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1261,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[86]+1 /* (set! mutex-unlock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t30=*((C_word*)lf[29]+1);
t31=C_mutate((C_word*)lf[89]+1 /* (set! make-condition-variable ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=t30,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t32=C_mutate((C_word*)lf[90]+1 /* (set! condition-variable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1695,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[91]+1 /* (set! condition-variable-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1701,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[92]+1 /* (set! condition-variable-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1710,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[93]+1 /* (set! condition-variable-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[95]+1 /* (set! condition-variable-broadcast! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1762,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[96]+1 /* (set! thread-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t38=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1920,a[2]=t38,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 469  build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[106]+1)))(2,*((C_word*)lf[106]+1),t39);}

/* k1918 in k765 in k499 in k496 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1920,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[102]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_1855(t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[103]+1);
t4=*((C_word*)lf[51]+1);
t5=C_mutate((C_word*)lf[103]+1 /* (set! read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1894,a[2]=t3,a[3]=t4,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t0)[2];
f_1855(t6,t5);}}

/* ##sys#read-prompt-hook in k1918 in k765 in k499 in k496 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_1904(2,t4,t2);}
else{
/* srfi-18.scm: 474  ##sys#tty-port? */
t4=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[105]+1));}}

/* k1902 in ##sys#read-prompt-hook in k1918 in k765 in k499 in k496 */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1904,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 475  old */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1905 in k1902 in ##sys#read-prompt-hook in k1918 in k765 in k499 in k496 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 476  ##sys#thread-block-for-i/o! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[99]+1)))(5,*((C_word*)lf[99]+1),t2,*((C_word*)lf[34]+1),C_fix(0),C_SCHEME_TRUE);}

/* k1908 in k1905 in k1902 in ##sys#read-prompt-hook in k1918 in k765 in k499 in k496 */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 477  thread-yield! */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1853 in k765 in k499 in k496 */
static void C_fcall f_1855(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1855,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[98]+1 /* (set! thread-wait-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1857,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* thread-wait-for-i/o! in k1853 in k765 in k499 in k496 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1857r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1857r(t0,t1,t2,t3);}}

static void C_ccall f_1857r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1861,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1861(2,t5,lf[100]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1861(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[101],t3);}}}

/* k1859 in thread-wait-for-i/o! in k1853 in k765 in k499 in k496 */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1861,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[3],lf[98]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 484  ##sys#thread-block-for-i/o! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[99]+1)))(5,*((C_word*)lf[99]+1),t3,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1);}

/* k1865 in k1859 in thread-wait-for-i/o! in k1853 in k765 in k499 in k496 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 485  thread-yield! */
t2=*((C_word*)lf[51]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* thread-signal! in k765 in k499 in k496 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1821,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[37],lf[96]);
t5=(C_word)C_eqp(t2,*((C_word*)lf[34]+1));
if(C_truep(t5)){
/* srfi-18.scm: 457  ##sys#signal */
t6=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t3);}
else{
t6=(C_word)C_slot(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1845,a[2]=t3,a[3]=t6,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_setslot(t2,C_fix(1),t7);
/* srfi-18.scm: 464  ##sys#thread-unblock! */
t9=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t2);}}

/* a1844 in thread-signal! in k765 in k499 in k496 */
static void C_ccall f_1845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1849,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 462  ##sys#signal */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1847 in a1844 in thread-signal! in k765 in k499 in k496 */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 463  old */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* condition-variable-broadcast! in k765 in k499 in k496 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1762,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[87],lf[95]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1769,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(2));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1778,a[2]=t7,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1778(t9,t4,t5);}

/* loop382 in condition-variable-broadcast! in k765 in k499 in k496 */
static void C_fcall f_1778(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1778,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1808,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(3));
t6=(C_word)C_eqp(t5,lf[88]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t5,lf[85]));
if(C_truep(t7)){
/* srfi-18.scm: 447  ##sys#thread-basic-unblock! */
t8=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t3,t4);}
else{
t8=(C_word)C_slot(t2,C_fix(1));
t11=t1;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1806 in loop382 in condition-variable-broadcast! in k765 in k499 in k496 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1778(t3,((C_word*)t0)[2],t2);}

/* k1767 in condition-variable-broadcast! in k765 in k499 in k496 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_END_OF_LIST));}

/* condition-variable-signal! in k765 in k499 in k496 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1719,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[87],lf[93]);
t4=(C_word)C_slot(t2,C_fix(2));
if(C_truep((C_word)C_i_nullp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(3));
t7=(C_word)C_slot(t4,C_fix(1));
t8=(C_word)C_i_setslot(t2,C_fix(2),t7);
t9=(C_word)C_eqp(t6,lf[88]);
if(C_truep(t9)){
if(C_truep(t9)){
/* srfi-18.scm: 438  ##sys#thread-basic-unblock! */
t10=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t5);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=(C_word)C_eqp(t6,lf[85]);
if(C_truep(t10)){
/* srfi-18.scm: 438  ##sys#thread-basic-unblock! */
t11=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t1,t5);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}}}

/* condition-variable-specific-set! in k765 in k499 in k496 */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1710,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[87],lf[92]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(3),t3));}

/* condition-variable-specific in k765 in k499 in k496 */
static void C_ccall f_1701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1701,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[87],lf[91]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(3)));}

/* condition-variable? in k765 in k499 in k496 */
static void C_ccall f_1695(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1695,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[87]));}

/* make-condition-variable in k765 in k499 in k496 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1676r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1676r(t0,t1,t2);}}

static void C_ccall f_1676r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1684,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=(C_word)C_i_vector_ref(t2,C_fix(0));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[87],t4,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}
else{
/* srfi-18.scm: 414  gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[87]);}}

/* k1682 in make-condition-variable in k765 in k499 in k496 */
static void C_ccall f_1684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1684,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[87],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}

/* mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1485r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1485r(t0,t1,t2,t3);}}

static void C_ccall f_1485r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(7);
t4=(C_word)C_i_check_structure_2(t2,lf[71],lf[86]);
t5=*((C_word*)lf[34]+1);
t6=(C_word)C_notvemptyp(t3);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
t8=(C_word)C_block_size(t3);
t9=(C_word)C_fixnum_greaterp(t8,C_fix(1));
t10=(C_truep(t9)?(C_word)C_i_vector_ref(t3,C_fix(1)):C_SCHEME_FALSE);
t11=(C_truep(t7)?(C_word)C_i_check_structure_2(t7,lf[87],lf[86]):C_SCHEME_UNDEFINED);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1503,a[2]=t10,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm: 371  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t12);}

/* a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1503(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1503,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1510,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 374  ##sys#compute-time-limit */
t5=lf[1];
f_503(t5,t4,((C_word*)t0)[2]);}
else{
t5=t4;
f_1510(2,t5,C_SCHEME_FALSE);}}

/* k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1510,2,t0,t1);}
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[7],C_fix(4),C_SCHEME_FALSE);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[7],C_fix(5),C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1648,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_slot(((C_word*)t0)[6],C_fix(8));
/* srfi-18.scm: 378  ##sys#delq */
t6=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[7],t5);}

/* k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1648,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[8],C_fix(8),t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[7],a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[8],C_fix(1),t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1525,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1630,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_slot(((C_word*)t0)[3],C_fix(2));
t8=(C_word)C_a_i_list(&a,1,((C_word*)t0)[8]);
/* srfi-18.scm: 381  ##sys#append */
t9=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=t5;
f_1525(2,t6,C_SCHEME_UNDEFINED);}}

/* k1628 in k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1630,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(2),t1);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word)li47),tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t3);
/* srfi-18.scm: 390  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[2];
f_1525(2,t3,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[85]));}}

/* a1598 in k1628 in k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1619,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-18.scm: 386  ##sys#delq */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k1617 in a1598 in k1628 in k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1619,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(2),t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[2],C_fix(13)))){
/* srfi-18.scm: 389  return */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
/* srfi-18.scm: 388  ##sys#remove-from-timeout-list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[54]+1)))(3,*((C_word*)lf[54]+1),t3,((C_word*)t0)[2]);}}

/* k1604 in k1617 in a1598 in k1628 in k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 389  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1523 in k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[3]))){
/* srfi-18.scm: 402  ##sys#schedule */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t6=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(3),t5);
t7=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t8=(C_word)C_eqp(t4,lf[88]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t4,lf[85]));
if(C_truep(t9)){
t10=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(2),t3);
t11=(C_word)C_slot(t3,C_fix(8));
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t11);
t13=(C_word)C_i_setslot(t3,C_fix(8),t12);
t14=(C_word)C_eqp(t4,lf[85]);
if(C_truep(t14)){
/* srfi-18.scm: 401  ##sys#add-to-ready-queue */
t15=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t2,t3);}
else{
/* srfi-18.scm: 402  ##sys#schedule */
t15=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,((C_word*)t0)[4]);}}
else{
/* srfi-18.scm: 402  ##sys#schedule */
t10=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)t0)[4]);}}}

/* k1526 in k1523 in k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 402  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1639 in k1646 in k1508 in a1502 in mutex-unlock! in k765 in k499 in k496 */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1640,2,t0,t1);}
/* srfi-18.scm: 379  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1261(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1261r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1261r(t0,t1,t2,t3);}}

static void C_ccall f_1261r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_structure_2(t2,lf[71],lf[81]);
t5=(C_word)C_notvemptyp(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1271,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=(C_word)C_i_vector_ref(t3,C_fix(0));
/* srfi-18.scm: 315  ##sys#compute-time-limit */
t8=lf[1];
f_503(t8,t6,t7);}
else{
t7=t6;
f_1271(2,t7,C_SCHEME_FALSE);}}

/* k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1271(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1271,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=(C_word)C_fixnum_greaterp(t2,C_fix(1));
t4=(C_truep(t3)?(C_word)C_i_vector_ref(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
t6=(C_truep(t4)?(C_word)C_i_check_structure_2(t4,lf[37],lf[81]):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1288,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word)li44),tmp=(C_word)a,a+=8,tmp);
/* srfi-18.scm: 320  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t7);}

/* a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1288(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1288,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1291,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t8=t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1312,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[6],C_fix(5)))){
if(C_truep(((C_word*)t0)[4])){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1398,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* srfi-18.scm: 346  check */
t10=t6;
f_1312(t10,t9);}
else{
t9=(C_word)C_i_setslot(t3,C_fix(3),lf[85]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1458,a[2]=t2,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_i_setslot(t3,C_fix(1),t10);
/* srfi-18.scm: 361  switch */
t12=((C_word*)t5)[1];
f_1291(t12,t1);}}
else{
t9=(C_truep(((C_word*)t0)[2])?(C_word)C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),C_SCHEME_FALSE);
t11=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2023,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 343  check */
t13=t6;
f_1312(t13,t12);}
else{
t10=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:t3);
t11=(C_word)C_slot(t10,C_fix(3));
t12=(C_word)C_eqp(lf[55],t11);
t13=(C_truep(t12)?t12:(C_word)C_eqp(lf[33],t11));
if(C_truep(t13)){
t14=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(4),C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2027,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 343  check */
t16=t6;
f_1312(t16,t15);}
else{
t14=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t15=(C_word)C_slot(t10,C_fix(8));
t16=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t15);
t17=(C_word)C_i_setslot(t10,C_fix(8),t16);
t18=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(2),t10);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2031,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 343  check */
t20=t6;
f_1312(t20,t19);}}}}

/* f2031 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f2031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 344  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* f2027 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f2027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 344  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* f2023 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 344  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* a1457 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1458,2,t0,t1);}
/* srfi-18.scm: 360  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* k1396 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1409,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_setslot(((C_word*)t0)[7],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 356  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k1402 in k1396 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 357  switch */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1291(t2,((C_word*)t0)[2]);}

/* a1408 in k1396 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1443,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
/* srfi-18.scm: 350  ##sys#delq */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}

/* k1441 in a1408 in k1396 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1443,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[5],C_fix(13)))){
t4=t3;
f_1416(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 352  ##sys#remove-from-timeout-list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[54]+1)))(3,*((C_word*)lf[54]+1),t3,((C_word*)t0)[5]);}}

/* k1414 in k1441 in a1408 in k1396 in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(8));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(8),t3);
t5=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[4]);
/* srfi-18.scm: 355  return */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* check in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_fcall f_1312(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1312,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1323,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_record(&a,3,lf[20],lf[83],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 328  ##sys#signal */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1321 in check in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 328  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* switch in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_fcall f_1291(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1291,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1302,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm: 324  ##sys#append */
t5=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* k1300 in switch in a1287 in k1269 in mutex-lock! in k765 in k499 in k496 */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(3),t1);
/* srfi-18.scm: 325  ##sys#schedule */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* mutex-state in k765 in k499 in k496 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1237,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[71],lf[77]);
if(C_truep((C_word)C_slot(t2,C_fix(5)))){
t4=(C_word)C_slot(t2,C_fix(2));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:lf[78]));}
else{
t4=(C_word)C_slot(t2,C_fix(4));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[79]:lf[80]));}}

/* mutex-specific-set! in k765 in k499 in k496 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1228,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[71],lf[76]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(6),t3));}

/* mutex-specific in k765 in k499 in k496 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1219,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[71],lf[75]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(6)));}

/* mutex-name in k765 in k499 in k496 */
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1210,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[71],lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* make-mutex in k765 in k499 in k496 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1192r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1192r(t0,t1,t2);}}

static void C_ccall f_1192r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1196,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=(C_word)C_i_vector_ref(t2,C_fix(0));
/* srfi-18.scm: 290  ##sys#make-mutex */
t5=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,*((C_word*)lf[34]+1));}
else{
/* srfi-18.scm: 289  gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[71]);}}

/* k1194 in make-mutex in k765 in k499 in k496 */
static void C_ccall f_1196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 290  ##sys#make-mutex */
t2=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[34]+1));}

/* mutex? in k765 in k499 in k496 */
static void C_ccall f_1186(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1186,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[71]));}

/* thread-sleep! in k765 in k499 in k496 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1146,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1174,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_1174(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 278  ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[4],lf[68],lf[69],t2);}}

/* k1172 in thread-sleep! in k765 in k499 in k496 */
static void C_ccall f_1174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1181,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 279  ##sys#compute-time-limit */
t3=lf[1];
f_503(t3,t2,((C_word*)t0)[2]);}

/* k1179 in k1172 in thread-sleep! in k765 in k499 in k496 */
static void C_ccall f_1181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1181,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1155,a[2]=t1,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 272  ##sys#call-with-current-continuation */
C_call_cc(3,0,t2,t3);}

/* a1154 in k1179 in k1172 in thread-sleep! in k765 in k499 in k496 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1155,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1167,a[2]=t2,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_setslot(t3,C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1162,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 276  ##sys#thread-block-for-timeout! */
t7=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,((C_word*)t0)[2]);}

/* k1160 in a1154 in k1179 in k1172 in thread-sleep! in k765 in k499 in k496 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 277  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1166 in a1154 in k1179 in k1172 in thread-sleep! in k765 in k499 in k496 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1167,2,t0,t1);}
/* srfi-18.scm: 275  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-resume! in k765 in k499 in k496 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1124,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[37],lf[67]);
t4=(C_word)C_slot(t2,C_fix(3));
t5=(C_word)C_eqp(t4,lf[66]);
if(C_truep(t5)){
t6=(C_word)C_i_setslot(t2,C_fix(3),lf[47]);
/* srfi-18.scm: 268  ##sys#add-to-ready-queue */
t7=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t2);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* thread-suspend! in k765 in k499 in k496 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1091,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[37],lf[65]);
t4=(C_word)C_i_setslot(t2,C_fix(3),lf[66]);
t5=(C_word)C_eqp(t2,*((C_word*)lf[34]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1109,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 259  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* a1108 in thread-suspend! in k765 in k499 in k496 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1109,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1118,a[2]=t2,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm: 262  ##sys#schedule */
t5=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* a1117 in a1108 in thread-suspend! in k765 in k499 in k496 */
static void C_ccall f_1118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1118,2,t0,t1);}
/* srfi-18.scm: 261  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-terminate! in k765 in k499 in k496 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1047,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[37],lf[61]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1054,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t2,*((C_word*)lf[63]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1086,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 249  ##sys#exit-handler */
((C_proc2)C_retrieve_proc(*((C_word*)lf[64]+1)))(2,*((C_word*)lf[64]+1),t6);}
else{
t6=t4;
f_1054(2,t6,C_SCHEME_UNDEFINED);}}

/* k1084 in thread-terminate! in k765 in k499 in k496 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g164165 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1052 in thread-terminate! in k765 in k499 in k496 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1054,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,C_SCHEME_UNDEFINED);
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(2),t2);
t4=(C_word)C_a_i_record(&a,3,lf[20],lf[62],C_SCHEME_END_OF_LIST);
t5=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 252  ##sys#thread-kill! */
t7=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],lf[55]);}

/* k1061 in k1052 in thread-terminate! in k765 in k499 in k496 */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[3],*((C_word*)lf[34]+1));
if(C_truep(t2)){
/* srfi-18.scm: 253  ##sys#schedule */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* thread-join! in k765 in k499 in k496 */
static void C_ccall f_919(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_919r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_919r(t0,t1,t2,t3);}}

static void C_ccall f_919r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_structure_2(t2,lf[37],lf[53]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_926,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t6=(C_word)C_slot(t3,C_fix(0));
/* srfi-18.scm: 215  ##sys#compute-time-limit */
t7=lf[1];
f_503(t7,t5,t6);}
else{
t6=t5;
f_926(2,t6,C_SCHEME_FALSE);}}

/* k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_926,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t4=(C_truep(t3)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_940,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm: 219  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t6);}

/* a939 in k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_940(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_940,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_944,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 222  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[2]);}
else{
t5=t4;
f_944(2,t5,C_SCHEME_UNDEFINED);}}

/* k942 in a939 in k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li23),tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 243  ##sys#thread-block-for-termination! */
t5=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],((C_word*)t0)[7]);}

/* k948 in k942 in a939 in k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 244  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a954 in k942 in a939 in k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_955(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_955,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(3));
t3=(C_word)C_eqp(t2,lf[33]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_968,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[4],C_fix(13)))){
t5=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
C_apply(4,0,t1,((C_word*)t0)[5],t5);}
else{
/* srfi-18.scm: 229  ##sys#remove-from-timeout-list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[54]+1)))(3,*((C_word*)lf[54]+1),t4,((C_word*)t0)[4]);}}
else{
t4=(C_word)C_eqp(t2,lf[55]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_994,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(((C_word*)t0)[6],C_fix(7));
t7=(C_word)C_a_i_list(&a,2,lf[56],t6);
t8=(C_word)C_a_i_record(&a,3,lf[20],lf[57],t7);
/* srfi-18.scm: 233  ##sys#signal */
t9=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1013,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* srfi-18.scm: 238  return */
t6=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t6))(3,t6,t1,((C_word*)t0)[2]);}
else{
t6=(C_word)C_a_i_record(&a,3,lf[20],lf[58],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 241  ##sys#signal */
t7=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}}}

/* k1011 in a954 in k942 in a939 in k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 238  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k992 in a954 in k942 in a939 in k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 232  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k966 in a954 in k942 in a939 in k924 in thread-join! in k765 in k499 in k496 */
static void C_ccall f_968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* thread-start! in k765 in k499 in k496 */
static void C_ccall f_883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_883,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_887,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_913,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 202  make-thread */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_887(t5,(C_word)C_i_check_structure_2(((C_word*)t3)[1],lf[37],lf[46]));}}

/* k911 in thread-start! in k765 in k499 in k496 */
static void C_ccall f_913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_887(t3,t2);}

/* k885 in thread-start! in k765 in k499 in k496 */
static void C_fcall f_887(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_887,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(3));
t4=(C_word)C_eqp(lf[36],t3);
if(C_truep(t4)){
t5=t2;
f_890(2,t5,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 205  ##sys#error */
t5=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[46],lf[50],((C_word*)((C_word*)t0)[3])[1]);}}

/* k888 in k885 in thread-start! in k765 in k499 in k496 */
static void C_ccall f_890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_890,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(3),lf[47]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_896,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 207  ##sys#add-to-ready-queue */
t4=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k894 in k888 in k885 in thread-start! in k765 in k499 in k496 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* thread-name in k765 in k499 in k496 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_874,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[37],lf[45]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(6)));}

/* thread-quantum-set! in k765 in k499 in k496 */
static void C_ccall f_858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_858,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[37],lf[44]);
t5=(C_word)C_i_check_exact_2(t3,lf[44]);
t6=(C_word)C_i_fixnum_max(t3,C_fix(10));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_set_i_slot(t2,C_fix(9),t6));}

/* thread-quantum in k765 in k499 in k496 */
static void C_ccall f_849(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_849,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[37],lf[43]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(9)));}

/* thread-specific-set! in k765 in k499 in k496 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_840,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[37],lf[42]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(10),t3));}

/* thread-specific in k765 in k499 in k496 */
static void C_ccall f_831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_831,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[37],lf[41]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(10)));}

/* thread-state in k765 in k499 in k496 */
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_822,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[37],lf[40]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(3)));}

/* current-thread in k765 in k499 in k496 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_819,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[34]+1));}

/* thread? in k765 in k499 in k496 */
static void C_ccall f_813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_813,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[37]));}

/* make-thread in k765 in k499 in k496 */
static void C_ccall f_769(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_769r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_769r(t0,t1,t2,t3);}}

static void C_ccall f_769r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_773,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_798,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t6=(C_word)C_slot(t3,C_fix(0));
t7=(C_word)C_slot(*((C_word*)lf[34]+1),C_fix(9));
/* srfi-18.scm: 154  ##sys#make-thread */
t8=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t4,C_SCHEME_FALSE,lf[36],t6,t7);}
else{
/* srfi-18.scm: 157  gensym */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[37]);}}

/* k796 in make-thread in k765 in k499 in k496 */
static void C_ccall f_798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(*((C_word*)lf[34]+1),C_fix(9));
/* srfi-18.scm: 154  ##sys#make-thread */
t3=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],C_SCHEME_FALSE,lf[36],t1,t2);}

/* k771 in make-thread in k765 in k499 in k496 */
static void C_ccall f_773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_778,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_setslot(t1,C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* a777 in k771 in make-thread in k765 in k499 in k496 */
static void C_ccall f_778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_784,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 162  ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[2],t2);}

/* a783 in a777 in k771 in make-thread in k765 in k499 in k496 */
static void C_ccall f_784(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_784r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_784r(t0,t1,t2);}}

static void C_ccall f_784r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_791,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 166  ##sys#thread-kill! */
t5=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[33]);}

/* k789 in a783 in a777 in k771 in make-thread in k765 in k499 in k496 */
static void C_ccall f_791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 167  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* uncaught-exception? in k499 in k496 */
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_749,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[27],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* terminated-thread-exception? in k499 in k496 */
static void C_ccall f_733(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_733,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[25],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* abandoned-mutex-exception? in k499 in k496 */
static void C_ccall f_717(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_717,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[23],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* join-timeout-exception? in k499 in k496 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_701,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[21],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* time? in k499 in k496 */
static void C_ccall f_693(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_693,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[2]));}

/* milliseconds->time in k499 in k496 */
static void C_ccall f_677(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_677,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[14]);
t4=(C_word)C_a_i_divide(&a,2,t2,C_fix(1000));
t5=(C_word)C_a_i_plus(&a,2,C_flonum(&a,C_startup_time_seconds),t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[2],t2,t5,C_fix(0)));}

/* seconds->time in k499 in k496 */
static void C_ccall f_623(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_623,3,t0,t1,t2);}
t3=(C_word)C_i_check_number_2(t2,lf[10]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_630,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_a_i_minus(&a,2,t2,C_flonum(&a,C_startup_time_seconds));
/* srfi-18.scm: 109  max */
t6=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,C_fix(0),t5);}

/* k628 in seconds->time in k499 in k496 */
static void C_ccall f_630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_633,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_667,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_671,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 110  ##sys#exact->inexact */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k669 in k628 in seconds->time in k499 in k496 */
static void C_ccall f_671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 110  ##sys#flonum-fraction */
t2=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k665 in k628 in seconds->time in k499 in k496 */
static void C_ccall f_667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_667,2,t0,t1);}
t2=(C_word)C_a_i_times(&a,2,C_fix(1000),t1);
/* srfi-18.scm: 110  truncate */
t3=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k631 in k628 in seconds->time in k499 in k496 */
static void C_ccall f_633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_651,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_times(&a,2,((C_word*)t0)[2],C_fix(1000));
t4=(C_word)C_a_i_plus(&a,2,t3,t1);
/* srfi-18.scm: 111  truncate */
t5=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k649 in k631 in k628 in seconds->time in k499 in k496 */
static void C_ccall f_651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_651,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_643,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-18.scm: 112  truncate */
t4=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k641 in k649 in k631 in k628 in seconds->time in k499 in k496 */
static void C_ccall f_643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_643,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[2],((C_word*)t0)[2],t1,t2));}

/* time->milliseconds in k499 in k496 */
static void C_ccall f_594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_594,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[2],lf[9]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(C_word)C_a_i_minus(&a,2,t4,C_flonum(&a,C_startup_time_seconds));
t6=(C_word)C_a_i_times(&a,2,t5,C_fix(1000));
t7=(C_word)C_i_inexact_to_exact(t6);
t8=(C_word)C_slot(t2,C_fix(3));
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_plus(&a,2,t7,t8));}

/* time->seconds in k499 in k496 */
static void C_ccall f_573(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_573,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[2],lf[8]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(C_word)C_slot(t2,C_fix(3));
t6=(C_word)C_a_i_divide(&a,2,t5,C_fix(1000));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_plus(&a,2,t4,t6));}

/* current-time in k499 in k496 */
static void C_ccall f_546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[32],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_546,2,t0,t1);}
t2=C_flonum(&a,C_get_seconds);
t3=C_flonum(&a,C_startup_time_seconds);
t4=C_long_to_num(&a,C_ms);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_558,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_a_i_minus(&a,2,t2,t3);
t7=(C_word)C_a_i_times(&a,2,t6,C_fix(1000));
t8=(C_word)C_a_i_plus(&a,2,t7,C_long_to_num(&a,C_ms));
/* srfi-18.scm: 92   truncate */
t9=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}

/* k556 in current-time in k499 in k496 */
static void C_ccall f_558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_558,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[2],t2,((C_word*)t0)[2],C_long_to_num(&a,C_ms)));}

/* ##sys#compute-time-limit in k499 in k496 */
static void C_fcall f_503(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_503,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
if(C_truep((C_word)C_i_structurep(t2,lf[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}
else{
if(C_truep((C_word)C_i_numberp(t2))){
t3=(C_word)C_fudge(C_fix(16));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_537,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_a_i_times(&a,2,t2,C_fix(1000));
/* srfi-18.scm: 69   truncate */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
/* srfi-18.scm: 70   ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[4],lf[5],t2);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k535 in ##sys#compute-time-limit in k499 in k496 */
static void C_ccall f_537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_plus(((C_word*)t0)[2],t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[122] = {
{"toplevel:srfi_18_scm",(void*)C_srfi_18_toplevel},
{"f_498:srfi_18_scm",(void*)f_498},
{"f_501:srfi_18_scm",(void*)f_501},
{"f_767:srfi_18_scm",(void*)f_767},
{"f_1920:srfi_18_scm",(void*)f_1920},
{"f_1894:srfi_18_scm",(void*)f_1894},
{"f_1904:srfi_18_scm",(void*)f_1904},
{"f_1907:srfi_18_scm",(void*)f_1907},
{"f_1910:srfi_18_scm",(void*)f_1910},
{"f_1855:srfi_18_scm",(void*)f_1855},
{"f_1857:srfi_18_scm",(void*)f_1857},
{"f_1861:srfi_18_scm",(void*)f_1861},
{"f_1867:srfi_18_scm",(void*)f_1867},
{"f_1821:srfi_18_scm",(void*)f_1821},
{"f_1845:srfi_18_scm",(void*)f_1845},
{"f_1849:srfi_18_scm",(void*)f_1849},
{"f_1762:srfi_18_scm",(void*)f_1762},
{"f_1778:srfi_18_scm",(void*)f_1778},
{"f_1808:srfi_18_scm",(void*)f_1808},
{"f_1769:srfi_18_scm",(void*)f_1769},
{"f_1719:srfi_18_scm",(void*)f_1719},
{"f_1710:srfi_18_scm",(void*)f_1710},
{"f_1701:srfi_18_scm",(void*)f_1701},
{"f_1695:srfi_18_scm",(void*)f_1695},
{"f_1676:srfi_18_scm",(void*)f_1676},
{"f_1684:srfi_18_scm",(void*)f_1684},
{"f_1485:srfi_18_scm",(void*)f_1485},
{"f_1503:srfi_18_scm",(void*)f_1503},
{"f_1510:srfi_18_scm",(void*)f_1510},
{"f_1648:srfi_18_scm",(void*)f_1648},
{"f_1630:srfi_18_scm",(void*)f_1630},
{"f_1599:srfi_18_scm",(void*)f_1599},
{"f_1619:srfi_18_scm",(void*)f_1619},
{"f_1606:srfi_18_scm",(void*)f_1606},
{"f_1525:srfi_18_scm",(void*)f_1525},
{"f_1528:srfi_18_scm",(void*)f_1528},
{"f_1640:srfi_18_scm",(void*)f_1640},
{"f_1261:srfi_18_scm",(void*)f_1261},
{"f_1271:srfi_18_scm",(void*)f_1271},
{"f_1288:srfi_18_scm",(void*)f_1288},
{"f2031:srfi_18_scm",(void*)f2031},
{"f2027:srfi_18_scm",(void*)f2027},
{"f2023:srfi_18_scm",(void*)f2023},
{"f_1458:srfi_18_scm",(void*)f_1458},
{"f_1398:srfi_18_scm",(void*)f_1398},
{"f_1404:srfi_18_scm",(void*)f_1404},
{"f_1409:srfi_18_scm",(void*)f_1409},
{"f_1443:srfi_18_scm",(void*)f_1443},
{"f_1416:srfi_18_scm",(void*)f_1416},
{"f_1312:srfi_18_scm",(void*)f_1312},
{"f_1323:srfi_18_scm",(void*)f_1323},
{"f_1291:srfi_18_scm",(void*)f_1291},
{"f_1302:srfi_18_scm",(void*)f_1302},
{"f_1237:srfi_18_scm",(void*)f_1237},
{"f_1228:srfi_18_scm",(void*)f_1228},
{"f_1219:srfi_18_scm",(void*)f_1219},
{"f_1210:srfi_18_scm",(void*)f_1210},
{"f_1192:srfi_18_scm",(void*)f_1192},
{"f_1196:srfi_18_scm",(void*)f_1196},
{"f_1186:srfi_18_scm",(void*)f_1186},
{"f_1146:srfi_18_scm",(void*)f_1146},
{"f_1174:srfi_18_scm",(void*)f_1174},
{"f_1181:srfi_18_scm",(void*)f_1181},
{"f_1155:srfi_18_scm",(void*)f_1155},
{"f_1162:srfi_18_scm",(void*)f_1162},
{"f_1167:srfi_18_scm",(void*)f_1167},
{"f_1124:srfi_18_scm",(void*)f_1124},
{"f_1091:srfi_18_scm",(void*)f_1091},
{"f_1109:srfi_18_scm",(void*)f_1109},
{"f_1118:srfi_18_scm",(void*)f_1118},
{"f_1047:srfi_18_scm",(void*)f_1047},
{"f_1086:srfi_18_scm",(void*)f_1086},
{"f_1054:srfi_18_scm",(void*)f_1054},
{"f_1063:srfi_18_scm",(void*)f_1063},
{"f_919:srfi_18_scm",(void*)f_919},
{"f_926:srfi_18_scm",(void*)f_926},
{"f_940:srfi_18_scm",(void*)f_940},
{"f_944:srfi_18_scm",(void*)f_944},
{"f_950:srfi_18_scm",(void*)f_950},
{"f_955:srfi_18_scm",(void*)f_955},
{"f_1013:srfi_18_scm",(void*)f_1013},
{"f_994:srfi_18_scm",(void*)f_994},
{"f_968:srfi_18_scm",(void*)f_968},
{"f_883:srfi_18_scm",(void*)f_883},
{"f_913:srfi_18_scm",(void*)f_913},
{"f_887:srfi_18_scm",(void*)f_887},
{"f_890:srfi_18_scm",(void*)f_890},
{"f_896:srfi_18_scm",(void*)f_896},
{"f_874:srfi_18_scm",(void*)f_874},
{"f_858:srfi_18_scm",(void*)f_858},
{"f_849:srfi_18_scm",(void*)f_849},
{"f_840:srfi_18_scm",(void*)f_840},
{"f_831:srfi_18_scm",(void*)f_831},
{"f_822:srfi_18_scm",(void*)f_822},
{"f_819:srfi_18_scm",(void*)f_819},
{"f_813:srfi_18_scm",(void*)f_813},
{"f_769:srfi_18_scm",(void*)f_769},
{"f_798:srfi_18_scm",(void*)f_798},
{"f_773:srfi_18_scm",(void*)f_773},
{"f_778:srfi_18_scm",(void*)f_778},
{"f_784:srfi_18_scm",(void*)f_784},
{"f_791:srfi_18_scm",(void*)f_791},
{"f_749:srfi_18_scm",(void*)f_749},
{"f_733:srfi_18_scm",(void*)f_733},
{"f_717:srfi_18_scm",(void*)f_717},
{"f_701:srfi_18_scm",(void*)f_701},
{"f_693:srfi_18_scm",(void*)f_693},
{"f_677:srfi_18_scm",(void*)f_677},
{"f_623:srfi_18_scm",(void*)f_623},
{"f_630:srfi_18_scm",(void*)f_630},
{"f_671:srfi_18_scm",(void*)f_671},
{"f_667:srfi_18_scm",(void*)f_667},
{"f_633:srfi_18_scm",(void*)f_633},
{"f_651:srfi_18_scm",(void*)f_651},
{"f_643:srfi_18_scm",(void*)f_643},
{"f_594:srfi_18_scm",(void*)f_594},
{"f_573:srfi_18_scm",(void*)f_573},
{"f_546:srfi_18_scm",(void*)f_546},
{"f_558:srfi_18_scm",(void*)f_558},
{"f_503:srfi_18_scm",(void*)f_503},
{"f_537:srfi_18_scm",(void*)f_537},
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
