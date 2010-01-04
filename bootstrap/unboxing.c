/* Generated from unboxing.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-05 21:37
   Version 4.1.5
   linux-unix-gnu-x86 [ ptables applyhook ]
   compiled 2009-10-10 on x (Linux)
   command line: unboxing.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file unboxing.c
   unit: unboxing
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_structures_toplevel)
C_externimport void C_ccall C_data_structures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_69_toplevel)
C_externimport void C_ccall C_srfi_69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[82];
static double C_possibly_force_alignment;


C_noret_decl(C_unboxing_toplevel)
C_externexport void C_ccall C_unboxing_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_553)
static void C_ccall f_553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_559)
static void C_ccall f_559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_562)
static void C_ccall f_562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_565)
static void C_ccall f_565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_568)
static void C_ccall f_568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_588)
static void C_ccall f_588(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_592)
static void C_ccall f_592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_594)
static void C_fcall f_594(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1196)
static void C_fcall f_1196(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_fcall f_1732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1730)
static void C_ccall f_1730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1449)
static void C_ccall f_1449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1385)
static void C_fcall f_1385(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_fcall f_1066(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_784)
static void C_fcall f_784(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_788)
static void C_ccall f_788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_806)
static void C_fcall f_806(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_965)
static void C_fcall f_965(C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_831)
static void C_ccall f_831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1093)
static void C_fcall f_1093(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_716)
static void C_fcall f_716(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_726)
static void C_fcall f_726(C_word t0,C_word t1) C_noret;
C_noret_decl(f_738)
static void C_fcall f_738(C_word t0,C_word t1) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_710)
static void C_fcall f_710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_688)
static void C_fcall f_688(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_679)
static void C_ccall f_679(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_667)
static C_word C_fcall f_667(C_word t0,C_word t1);
C_noret_decl(f_613)
static void C_fcall f_613(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_665)
static void C_ccall f_665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_653)
static void C_ccall f_653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_639)
static void C_ccall f_639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_597)
static void C_fcall f_597(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_611)
static void C_ccall f_611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_580)
static void C_ccall f_580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_594)
static void C_fcall trf_594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_594(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_594(t0,t1,t2,t3);}

C_noret_decl(trf_1177)
static void C_fcall trf_1177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1177(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1177(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1196)
static void C_fcall trf_1196(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1196(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1196(t0,t1);}

C_noret_decl(trf_1732)
static void C_fcall trf_1732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1732(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1732(t0,t1,t2);}

C_noret_decl(trf_1665)
static void C_fcall trf_1665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1665(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1665(t0,t1,t2,t3);}

C_noret_decl(trf_1362)
static void C_fcall trf_1362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1362(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1362(t0,t1,t2);}

C_noret_decl(trf_1385)
static void C_fcall trf_1385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1385(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1385(t0,t1);}

C_noret_decl(trf_1066)
static void C_fcall trf_1066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1066(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1066(t0,t1,t2,t3);}

C_noret_decl(trf_784)
static void C_fcall trf_784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_784(void *dummy){
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
f_784(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_806)
static void C_fcall trf_806(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_806(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_806(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_965)
static void C_fcall trf_965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_965(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_965(t0,t1);}

C_noret_decl(trf_1093)
static void C_fcall trf_1093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1093(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1093(t0,t1,t2);}

C_noret_decl(trf_716)
static void C_fcall trf_716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_716(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_716(t0,t1,t2,t3);}

C_noret_decl(trf_726)
static void C_fcall trf_726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_726(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_726(t0,t1);}

C_noret_decl(trf_738)
static void C_fcall trf_738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_738(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_738(t0,t1);}

C_noret_decl(trf_710)
static void C_fcall trf_710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_710(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_710(t0,t1,t2);}

C_noret_decl(trf_688)
static void C_fcall trf_688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_688(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_688(t0,t1,t2);}

C_noret_decl(trf_613)
static void C_fcall trf_613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_613(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_613(t0,t1,t2,t3);}

C_noret_decl(trf_597)
static void C_fcall trf_597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_597(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_597(t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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
C_unboxing_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_unboxing_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("unboxing_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(661)){
C_save(t1);
C_rereclaim2(661*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,82);
lf[0]=C_h_intern(&lf[0],1,"d");
lf[1]=C_h_intern(&lf[1],19,"\003sysstandard-output");
lf[2]=C_h_intern(&lf[2],19,"\003syswrite-char/port");
lf[3]=C_h_intern(&lf[3],7,"fprintf");
lf[4]=C_h_intern(&lf[4],7,"display");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\010[debug] ");
lf[6]=C_h_intern(&lf[6],26,"\010compilerperform-unboxing!");
lf[7]=C_h_intern(&lf[7],10,"alist-cons");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[10]=C_h_intern(&lf[10],9,"alist-ref");
lf[11]=C_h_intern(&lf[11],3,"eq\077");
lf[12]=C_h_intern(&lf[12],3,"let");
lf[13]=C_h_intern(&lf[13],16,"\004corelet_unboxed");
lf[14]=C_h_intern(&lf[14],4,"node");
lf[15]=C_h_intern(&lf[15],19,"\010compilercopy-node!");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\024straighten: ~a -> ~a");
lf[17]=C_h_intern(&lf[17],19,"\004coreinline_unboxed");
lf[18]=C_h_intern(&lf[18],3,"flo");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_flonum");
lf[20]=C_h_intern(&lf[20],16,"\004coreunboxed_ref");
lf[21]=C_h_intern(&lf[21],20,"\004coreinline_allocate");
lf[22]=C_h_intern(&lf[22],3,"ptr");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\016C_a_i_mpointer");
lf[24]=C_h_intern(&lf[24],3,"chr");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\020C_make_character");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[27]=C_h_intern(&lf[27],11,"\004coreinline");
lf[28]=C_h_intern(&lf[28],13,"\010compilerbomb");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[31]=C_h_intern(&lf[31],7,"reverse");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\020C_character_code");
lf[33]=C_h_intern(&lf[33],3,"fix");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\007C_unfix");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\022C_flonum_magnitude");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\021C_pointer_address");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[39]=C_h_intern(&lf[39],19,"\003syshash-table-set!");
lf[40]=C_h_intern(&lf[40],18,"\003syshash-table-ref");
lf[41]=C_h_intern(&lf[41],18,"\010compilersymbolify");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\021rewrite: ~a -> ~a");
lf[43]=C_h_intern(&lf[43],20,"node-parameters-set!");
lf[44]=C_h_intern(&lf[44],15,"node-class-set!");
lf[45]=C_h_intern(&lf[45],14,"\004coreundefined");
lf[46]=C_h_intern(&lf[46],11,"\004corelambda");
lf[47]=C_h_intern(&lf[47],18,"\004coredirect_lambda");
lf[48]=C_h_intern(&lf[48],7,"\003sysmap");
lf[49]=C_h_intern(&lf[49],30,"\010compilerdecompose-lambda-list");
lf[50]=C_h_intern(&lf[50],13,"\004corevariable");
lf[51]=C_h_intern(&lf[51],3,"any");
lf[52]=C_h_intern(&lf[52],7,"\003sysget");
lf[53]=C_h_intern(&lf[53],19,"\010compilerunboxed-op");
lf[54]=C_h_intern(&lf[54],4,"set!");
lf[55]=C_h_intern(&lf[55],17,"\004coreunboxed_set!");
lf[56]=C_h_intern(&lf[56],5,"quote");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\000\376\001\000\000\003flo");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\000\376\001\000\000\003fix");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\000\376\001\000\000\003chr");
lf[60]=C_h_intern(&lf[60],2,"if");
lf[61]=C_h_intern(&lf[61],9,"\004corecond");
lf[62]=C_h_intern(&lf[62],11,"\004coreswitch");
lf[63]=C_h_intern(&lf[63],4,"none");
lf[64]=C_h_intern(&lf[64],9,"\004coreproc");
lf[65]=C_h_intern(&lf[65],15,"\004coreglobal-ref");
lf[66]=C_h_intern(&lf[66],15,"\004coreinline_ref");
lf[67]=C_h_intern(&lf[67],19,"\004coreinline_loc_ref");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[69]=C_h_intern(&lf[69],23,"\003syshash-table-for-each");
lf[70]=C_h_intern(&lf[70],18,"\010compilerdebugging");
lf[71]=C_h_intern(&lf[71],1,"x");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\021unboxed rewrites:");
lf[73]=C_h_intern(&lf[73],11,"make-vector");
lf[74]=C_h_intern(&lf[74],11,"register-op");
lf[75]=C_h_intern(&lf[75],8,"\003sysput!");
lf[76]=C_h_intern(&lf[76],18,"C_a_i_flonum_times");
lf[77]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003flo\376\003\000\000\002\376\001\000\000\003flo\376\377\016");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\023C_ub_i_flonum_times");
lf[79]=C_h_intern(&lf[79],17,"C_a_i_flonum_plus");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003flo\376\003\000\000\002\376\001\000\000\003flo\376\377\016");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\022C_ub_i_flonum_plus");
C_register_lf2(lf,82,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_553,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k551 */
static void C_ccall f_553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k554 in k551 */
static void C_ccall f_556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k557 in k554 in k551 */
static void C_ccall f_559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k560 in k557 in k554 in k551 */
static void C_ccall f_562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_568,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_568,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! d ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_570,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! perform-unboxing! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_588,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[74]+1 /* (set! register-op ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1824,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("register-op");
((C_proc6)C_retrieve_proc(*((C_word*)lf[74]+1)))(6,*((C_word*)lf[74]+1),t5,lf[79],lf[80],lf[18],lf[81]);}

/* k1837 in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("register-op");
((C_proc6)C_retrieve_proc(*((C_word*)lf[74]+1)))(6,*((C_word*)lf[74]+1),t2,lf[76],lf[77],lf[18],lf[78]);}

/* k1840 in k1837 in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* register-op in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1824(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1824,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1832,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_trace("unboxing.scm: 323  symbolify");
((C_proc3)C_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t6,t2);}

/* k1830 in register-op in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1832,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
C_trace("unboxing.scm: 323  ##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[75]))(5,*((C_word*)lf[75]+1),((C_word*)t0)[2],t1,lf[53],t2);}

/* ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_588(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_588,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_592,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("unboxing.scm: 42   make-vector");
((C_proc4)C_retrieve_proc(*((C_word*)lf[73]+1)))(4,*((C_word*)lf[73]+1),t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_592,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_594,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1795,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("unboxing.scm: 309  walk-lambda");
t6=((C_word*)t3)[1];
f_594(t6,t5,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);}

/* k1793 in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("unboxing.scm: 310  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[70]))(4,*((C_word*)lf[70]+1),t2,lf[71],lf[72]);}

/* k1799 in k1793 in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1801,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1806,tmp=(C_word)a,a+=2,tmp);
C_trace("unboxing.scm: 311  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[69]))(4,*((C_word*)lf[69]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a1805 in k1799 in k1793 in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1806,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1810,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t5,lf[68],t4);}

/* k1808 in a1805 in k1799 in k1793 in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1813,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1811 in k1808 in a1805 in k1799 in k1793 in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k1814 in k1811 in k1808 in a1805 in k1799 in k1793 in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1817 in k1814 in k1811 in k1808 in a1805 in k1799 in k1793 in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_594(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_594,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_597,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_613,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_667,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_679,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_688,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_710,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_716,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1093,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_784,a[2]=((C_word*)t0)[3],a[3]=t15,tmp=(C_word)a,a+=4,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1066,a[2]=t12,a[3]=t15,tmp=(C_word)a,a+=4,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1177,a[2]=t13,a[3]=t11,a[4]=t15,a[5]=t18,a[6]=t20,a[7]=t10,a[8]=t9,a[9]=t8,a[10]=t17,a[11]=t7,a[12]=t12,a[13]=t4,a[14]=((C_word*)t0)[2],tmp=(C_word)a,a+=15,tmp));
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1789,a[2]=t3,a[3]=t1,a[4]=t20,tmp=(C_word)a,a+=5,tmp);
C_trace("unboxing.scm: 306  walk");
t23=((C_word*)t20)[1];
f_1177(t23,t22,t3,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k1787 in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 307  walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_1177(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1177(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t17;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1177,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(2));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(t11,lf[45]);
t13=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_1196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t3,a[12]=((C_word*)t0)[11],a[13]=t4,a[14]=((C_word*)t0)[12],a[15]=t2,a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[14],a[18]=t7,a[19]=t5,a[20]=t9,a[21]=t11,a[22]=t1,tmp=(C_word)a,a+=23,tmp);
if(C_truep(t12)){
t14=t13;
f_1196(t14,t12);}
else{
t14=(C_word)C_eqp(t11,lf[64]);
if(C_truep(t14)){
t15=t13;
f_1196(t15,t14);}
else{
t15=(C_word)C_eqp(t11,lf[65]);
if(C_truep(t15)){
t16=t13;
f_1196(t16,t15);}
else{
t16=(C_word)C_eqp(t11,lf[66]);
t17=t13;
f_1196(t17,(C_truep(t16)?t16:(C_word)C_eqp(t11,lf[67])));}}}}

/* k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1196(C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1196,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[22];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[21],lf[46]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[21],lf[47]));
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[20]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1214,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[20],a[5]=((C_word*)t0)[19],tmp=(C_word)a,a+=6,tmp);
C_trace("unboxing.scm: 199  decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[49]))(4,*((C_word*)lf[49]+1),((C_word*)t0)[22],t4,t5);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[21],lf[50]);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[20]);
t6=(C_word)C_i_assq(t5,((C_word*)((C_word*)t0)[16])[1]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1254,a[2]=t6,a[3]=((C_word*)t0)[22],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[19])){
t8=(C_truep(t6)?(C_word)C_i_cdr(t6):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[15],a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("unboxing.scm: 215  alias");
t10=((C_word*)t0)[14];
f_710(t10,t9,t5);}
else{
t9=((C_word*)t0)[22];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}}
else{
if(C_truep(((C_word*)t0)[13])){
t8=((C_word*)t0)[22];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}
else{
C_trace("unboxing.scm: 217  boxed!");
t8=((C_word*)t0)[12];
f_597(t8,t7,t5);}}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[21],lf[27]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[21],lf[21]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1299,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[22],a[12]=((C_word*)t0)[19],tmp=(C_word)a,a+=13,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1427,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_i_car(((C_word*)t0)[20]);
C_trace("unboxing.scm: 221  symbolify");
((C_proc3)C_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t8,t9);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[21],lf[12]);
if(C_truep(t7)){
t8=(C_word)C_i_car(((C_word*)t0)[20]);
t9=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1443,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[18],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[16],a[12]=t8,a[13]=((C_word*)t0)[19],a[14]=((C_word*)t0)[22],tmp=(C_word)a,a+=15,tmp);
t10=(C_word)C_i_car(((C_word*)t0)[18]);
C_trace("unboxing.scm: 250  walk");
t11=((C_word*)((C_word*)t0)[6])[1];
f_1177(t11,t9,t10,t8,C_SCHEME_TRUE,((C_word*)t0)[19]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[21],lf[54]);
if(C_truep(t8)){
t9=(C_word)C_i_car(((C_word*)t0)[20]);
t10=(C_word)C_i_assq(t9,((C_word*)((C_word*)t0)[16])[1]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1520,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=t9,a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[18],a[9]=t10,a[10]=((C_word*)t0)[19],a[11]=((C_word*)t0)[22],tmp=(C_word)a,a+=12,tmp);
t12=(C_word)C_i_car(((C_word*)t0)[18]);
if(C_truep(t10)){
t13=(C_word)C_i_cdr(t10);
C_trace("unboxing.scm: 264  walk");
t14=((C_word*)((C_word*)t0)[6])[1];
f_1177(t14,t11,t12,t9,t13,((C_word*)t0)[19]);}
else{
C_trace("unboxing.scm: 264  walk");
t13=((C_word*)((C_word*)t0)[6])[1];
f_1177(t13,t11,t12,t9,C_SCHEME_FALSE,((C_word*)t0)[19]);}}
else{
t9=(C_word)C_eqp(((C_word*)t0)[21],lf[56]);
if(C_truep(t9)){
t10=(C_word)C_i_car(((C_word*)t0)[20]);
if(C_truep((C_word)C_i_flonump(t10))){
t11=((C_word*)t0)[22];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[57]);}
else{
if(C_truep((C_word)C_fixnump(t10))){
t11=((C_word*)t0)[22];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[58]);}
else{
t11=(C_word)C_charp(t10);
t12=((C_word*)t0)[22];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_truep(t11)?lf[59]:C_SCHEME_FALSE));}}}
else{
t10=(C_word)C_eqp(((C_word*)t0)[21],lf[60]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[21],lf[61]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1622,a[2]=((C_word*)t0)[19],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[22],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1643,a[2]=t12,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_i_car(((C_word*)t0)[18]);
C_trace("unboxing.scm: 286  walk");
t15=((C_word*)((C_word*)t0)[6])[1];
f_1177(t15,t13,t14,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[19]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[21],lf[62]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1656,a[2]=((C_word*)t0)[22],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[18],tmp=(C_word)a,a+=9,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1723,a[2]=t13,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t15=(C_word)C_i_car(((C_word*)t0)[18]);
C_trace("unboxing.scm: 292  walk");
t16=((C_word*)((C_word*)t0)[6])[1];
f_1177(t16,t14,t15,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[19]);}
else{
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1730,a[2]=((C_word*)t0)[22],tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[19],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=t15,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_1732(t17,t13,((C_word*)t0)[18]);}}}}}}}}}}

/* loop422 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1732,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1745,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1756,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("walk58");
t6=((C_word*)((C_word*)t0)[3])[1];
f_1177(t6,t5,t3,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1754 in loop422 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("invalidate52");
t2=((C_word*)t0)[3];
f_688(t2,((C_word*)t0)[2],t1);}

/* k1743 in loop422 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1732(t3,((C_word*)t0)[2],t2);}

/* k1728 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k1721 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 292  invalidate");
t2=((C_word*)t0)[3];
f_688(t2,((C_word*)t0)[2],t1);}

/* k1654 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1656,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1665,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1665(t6,((C_word*)t0)[2],t2,lf[63]);}

/* doloop412 in k1654 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1665,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1679,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t2);
C_trace("unboxing.scm: 299  walk");
t7=((C_word*)((C_word*)t0)[6])[1];
f_1177(t7,t5,t6,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t5=(C_word)C_i_cddr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1694,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_eqp(t3,lf[63]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(t2);
C_trace("unboxing.scm: 296  walk");
t9=((C_word*)((C_word*)t0)[6])[1];
f_1177(t9,t6,t8,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1711,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_i_cadr(t2);
C_trace("unboxing.scm: 297  walk");
t10=((C_word*)((C_word*)t0)[6])[1];
f_1177(t10,t8,t9,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}}}

/* k1709 in doloop412 in k1654 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 297  merge");
t2=((C_word*)t0)[4];
f_716(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1692 in doloop412 in k1654 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1665(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1677 in doloop412 in k1654 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 299  merge");
t2=((C_word*)t0)[4];
f_716(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1641 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 286  invalidate");
t2=((C_word*)t0)[3];
f_688(t2,((C_word*)t0)[2],t1);}

/* k1620 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
C_trace("unboxing.scm: 287  walk");
t4=((C_word*)((C_word*)t0)[5])[1];
f_1177(t4,t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1623 in k1620 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1628,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[6]);
C_trace("unboxing.scm: 288  walk");
t4=((C_word*)((C_word*)t0)[5])[1];
f_1177(t4,t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1626 in k1623 in k1620 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 289  merge");
t2=((C_word*)t0)[4];
f_716(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1518 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1523,a[2]=((C_word*)t0)[11],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=(C_truep(((C_word*)t0)[9])?(C_word)C_i_cdr(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1543,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
C_trace("unboxing.scm: 269  alias");
t5=((C_word*)t0)[6];
f_710(t5,t4,((C_word*)t0)[5]);}
else{
t4=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=(C_truep(t1)?(C_word)C_i_cdr(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t1);
C_trace("unboxing.scm: 272  unboxed!");
t5=((C_word*)t0)[4];
f_613(t5,t2,((C_word*)t0)[5],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1566,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("unboxing.scm: 274  boxed!");
t5=((C_word*)t0)[2];
f_597(t5,t4,((C_word*)t0)[5]);}}}

/* k1564 in k1518 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 275  invalidate");
t2=((C_word*)t0)[4];
f_688(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1541 in k1518 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1543,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_record(&a,4,lf[14],lf[55],t3,((C_word*)t0)[4]);
C_trace("unboxing.scm: 267  copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[15]))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k1521 in k1518 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k1441 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[13];
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_truep(t1)?(C_word)C_i_cdr(t1):C_SCHEME_FALSE));
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_i_cdr(t1);
C_trace("unboxing.scm: 252  unboxed!");
t7=((C_word*)t0)[2];
f_613(t7,t2,t5,t6);}
else{
t5=t2;
f_1446(2,t5,C_SCHEME_UNDEFINED);}}

/* k1444 in k1441 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1449,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
C_trace("unboxing.scm: 253  walk");
t4=((C_word*)((C_word*)t0)[4])[1];
f_1177(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[11]);}

/* k1447 in k1444 in k1441 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(C_word)C_i_assq(((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t4=(C_truep(t3)?(C_word)C_i_cdr(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(t3);
C_trace("unboxing.scm: 257  rebind-unboxed!");
t6=((C_word*)t0)[4];
f_1066(t6,t2,((C_word*)t0)[3],t5);}
else{
C_trace("unboxing.scm: 258  straighten-binding!");
t5=((C_word*)((C_word*)t0)[2])[1];
f_1093(t5,t2,((C_word*)t0)[3]);}}
else{
t3=t1;
t4=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1450 in k1447 in k1444 in k1441 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1425 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 221  ##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[52]))(4,*((C_word*)lf[52]+1),((C_word*)t0)[2],t1,lf[53]);}

/* k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[12],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("map");
t4=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[6]);}

/* a1418 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1419,3,t0,t1,t2);}
C_trace("walk58");
t3=((C_word*)((C_word*)t0)[4])[1];
f_1177(t3,t1,t2,C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1302,2,t0,t1);}
t2=((C_word*)t0)[12];
if(C_truep(t2)){
t3=(C_word)C_i_not(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_1317(2,t5,t3);}
else{
if(C_truep(((C_word*)t0)[9])){
t5=f_667(((C_word*)t0)[3],((C_word*)t0)[9]);
if(C_truep(t5)){
t6=t4;
f_1317(2,t6,t5);}
else{
C_trace("unboxing.scm: 226  any");
((C_proc4)C_retrieve_symbol_proc(lf[51]))(4,*((C_word*)lf[51]+1),t4,((C_word*)t0)[2],t1);}}
else{
C_trace("unboxing.scm: 226  any");
((C_proc4)C_retrieve_symbol_proc(lf[51]))(4,*((C_word*)lf[51]+1),t4,((C_word*)t0)[2],t1);}}}
else{
t3=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1315 in k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[11]);
t3=(C_word)C_i_cadr(((C_word*)t0)[11]);
t4=(C_word)C_i_caddr(((C_word*)t0)[11]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1329,a[2]=t4,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
if(C_truep(((C_word*)t0)[8])){
t6=(C_word)C_i_assq(((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);
C_trace("unboxing.scm: 232  rewrite!");
t7=((C_word*)t0)[6];
f_784(t7,t5,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],t3,t4,t6);}
else{
C_trace("unboxing.scm: 232  rewrite!");
t6=((C_word*)t0)[6];
f_784(t6,t5,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],t3,t4,C_SCHEME_FALSE);}}
else{
t6=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t4));}}
else{
t2=(C_word)C_i_caddr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1348,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1354,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1362(t8,t4,((C_word*)t0)[3]);}}}

/* loop339 in k1315 in k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1362,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1375,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1385,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t6=(C_word)C_i_car(t3);
t7=t5;
f_1385(t7,(C_truep(t6)?(C_word)C_i_cdr(t3):C_SCHEME_FALSE));}
else{
t6=t5;
f_1385(t6,C_SCHEME_FALSE);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1383 in loop339 in k1315 in k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1385(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
C_trace("unboxing.scm: 243  unboxed!");
t4=((C_word*)t0)[6];
f_613(t4,((C_word*)t0)[5],t2,t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1362(t3,((C_word*)t0)[2],t2);}}

/* k1373 in loop339 in k1315 in k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1362(t3,((C_word*)t0)[2],t2);}

/* k1352 in k1315 in k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1354,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
C_trace("unboxing.scm: 245  unboxed!");
t2=((C_word*)t0)[5];
f_613(t2,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[3]));}}

/* k1346 in k1315 in k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1348,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k1327 in k1315 in k1300 in k1297 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1329,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k1272 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1274,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_record(&a,4,lf[14],lf[20],t3,C_SCHEME_END_OF_LIST);
C_trace("unboxing.scm: 214  copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[15]))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k1252 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1213 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1214,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1218,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_car(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1229,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1235,tmp=(C_word)a,a+=2,tmp);
C_trace("map");
t9=*((C_word*)lf[48]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t2);}}

/* a1234 in a1213 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1235(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1235,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_FALSE));}

/* k1227 in a1213 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("unboxing.scm: 203  walk-lambda");
t3=((C_word*)((C_word*)t0)[3])[1];
f_594(t3,((C_word*)t0)[2],t1,t2);}

/* k1216 in a1213 in k1194 in walk in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* rebind-unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1066(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1066,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1070,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_car(t6);
C_trace("unboxing.scm: 156  alias");
t8=((C_word*)t0)[2];
f_710(t8,t4,t7);}

/* k1068 in rebind-unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1073,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("unboxing.scm: 157  node-class-set!");
((C_proc4)C_retrieve_symbol_proc(lf[44]))(4,*((C_word*)lf[44]+1),t2,((C_word*)t0)[3],lf[13]);}

/* k1071 in k1068 in rebind-unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1076,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
C_trace("unboxing.scm: 158  node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t2,((C_word*)t0)[4],t3);}

/* k1074 in k1071 in k1068 in rebind-unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 159  straighten-binding!");
t2=((C_word*)((C_word*)t0)[4])[1];
f_1093(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_784(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_784,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_788,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t4,a[5]=t5,a[6]=t7,a[7]=t8,a[8]=t3,a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
t10=t2;
t11=(C_word)C_slot(t10,C_fix(2));
t12=(C_word)C_i_car(t11);
C_trace("unboxing.scm: 94   d");
((C_proc5)C_retrieve_proc(*((C_word*)lf[0]+1)))(5,*((C_word*)lf[0]+1),t9,lf[42],t12,t3);}

/* k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("unboxing.scm: 95   symbolify");
((C_proc3)C_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t2,((C_word*)t0)[8]);}

/* k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1053,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("unboxing.scm: 97   ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[40]))(4,*((C_word*)lf[40]+1),t3,((C_word*)t0)[2],t1);}

/* k1051 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=(C_word)C_fixnum_increase(t2);
C_trace("unboxing.scm: 96   ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[39]))(5,*((C_word*)lf[39]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
C_trace("unboxing.scm: 96   ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[39]))(5,*((C_word*)lf[39]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}}

/* k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_797,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_806,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_806(t7,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_806(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_806,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_819,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("unboxing.scm: 103  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[31]+1)))(3,*((C_word*)lf[31]+1),t7,t5);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_truep(t6)?(C_word)C_i_cdr(t6):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_i_cdr(t3);
t10=(C_word)C_i_cdr(t4);
t11=(C_word)C_i_car(t3);
t12=(C_word)C_a_i_cons(&a,2,t11,t5);
C_trace("unboxing.scm: 129  loop");
t17=t1;
t18=t8;
t19=t9;
t20=t10;
t21=t12;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
t5=t21;
goto loop;}
else{
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_952,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
C_trace("unboxing.scm: 135  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t8,lf[38]);}}}

/* k950 in loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_952(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_952,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[7]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1009,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_eqp(t5,lf[24]);
if(C_truep(t7)){
t8=t4;
f_965(t8,(C_word)C_a_i_list(&a,1,lf[32]));}
else{
t8=(C_word)C_eqp(t5,lf[33]);
if(C_truep(t8)){
t9=t4;
f_965(t9,(C_word)C_a_i_list(&a,1,lf[34]));}
else{
t9=(C_word)C_eqp(t5,lf[18]);
if(C_truep(t9)){
t10=t4;
f_965(t10,(C_word)C_a_i_list(&a,1,lf[35]));}
else{
t10=(C_word)C_eqp(t5,lf[22]);
if(C_truep(t10)){
t11=t4;
f_965(t11,(C_word)C_a_i_list(&a,1,lf[36]));}
else{
t11=(C_word)C_i_car(((C_word*)t0)[7]);
C_trace("unboxing.scm: 145  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[28]))(4,*((C_word*)lf[28]+1),t6,lf[37],t11);}}}}}

/* k1007 in k950 in loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1009,2,t0,t1);}
t2=((C_word*)t0)[2];
f_965(t2,(C_word)C_a_i_list(&a,1,t1));}

/* k963 in k950 in loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_965(C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_965,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_record(&a,4,lf[14],lf[27],t1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_975,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
t7=(C_word)C_i_cdr(((C_word*)t0)[9]);
t8=(C_word)C_i_cdr(((C_word*)t0)[5]);
t9=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t10=(C_word)C_a_i_record(&a,4,lf[14],lf[20],t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t10,((C_word*)t0)[3]);
C_trace("unboxing.scm: 147  loop");
t12=((C_word*)((C_word*)t0)[2])[1];
f_806(t12,t5,t6,t7,t8,t11);}

/* k973 in k963 in k950 in loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_975,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[14],lf[13],((C_word*)t0)[2],t2));}

/* k817 in loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_819,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[14],lf[17],((C_word*)t0)[5],t1);
t3=(C_truep(((C_word*)t0)[4])?(C_word)C_i_cdr(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_831,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("unboxing.scm: 106  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t4,lf[30]);}}

/* k829 in k817 in loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_831(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_831,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_844,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(t3,lf[18]);
if(C_truep(t5)){
t6=(C_word)C_a_i_list(&a,2,lf[19],C_fix(4));
t7=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t8=(C_word)C_a_i_record(&a,4,lf[14],lf[20],t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=(C_word)C_a_i_record(&a,4,lf[14],lf[21],t6,t9);
t11=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t10);
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_record(&a,4,lf[14],lf[13],t2,t11));}
else{
t6=(C_word)C_eqp(t3,lf[22]);
if(C_truep(t6)){
t7=(C_word)C_a_i_list(&a,2,lf[23],C_fix(2));
t8=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t9=(C_word)C_a_i_record(&a,4,lf[14],lf[20],t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_list(&a,1,t9);
t11=(C_word)C_a_i_record(&a,4,lf[14],lf[21],t7,t10);
t12=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_a_i_record(&a,4,lf[14],lf[13],t2,t12));}
else{
t7=(C_word)C_eqp(t3,lf[24]);
if(C_truep(t7)){
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[24]);
t9=(C_truep(t8)?(C_word)C_a_i_list(&a,1,lf[25]):(C_word)C_a_i_list(&a,1,lf[26]));
t10=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t11=(C_word)C_a_i_record(&a,4,lf[14],lf[20],t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_list(&a,1,t11);
t13=(C_word)C_a_i_record(&a,4,lf[14],lf[27],t9,t12);
t14=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t13);
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_record(&a,4,lf[14],lf[13],t2,t14));}
else{
C_trace("unboxing.scm: 127  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[28]))(4,*((C_word*)lf[28]+1),t4,lf[29],((C_word*)t0)[4]);}}}}

/* k842 in k829 in k817 in loop in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_844,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[14],lf[13],((C_word*)t0)[2],t2));}

/* k802 in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 98   copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[15]))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k795 in k792 in k789 in k786 in rewrite! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 153  straighten-binding!");
t2=((C_word*)((C_word*)t0)[4])[1];
f_1093(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* straighten-binding! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_1093(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1093,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(C_word)C_slot(t5,C_fix(1));
if(C_truep((C_truep((C_word)C_eqp(t6,lf[12]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t6,lf[13]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1112,a[2]=t6,a[3]=t4,a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t8=t2;
t9=(C_word)C_slot(t8,C_fix(2));
t10=(C_word)C_slot(t5,C_fix(2));
C_trace("unboxing.scm: 167  d");
((C_proc5)C_retrieve_proc(*((C_word*)lf[0]+1)))(5,*((C_word*)lf[0]+1),t7,lf[16],t9,t10);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k1110 in straighten-binding! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1112(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1115,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(3));
t5=(C_word)C_i_car(t4);
t6=((C_word*)t0)[7];
t7=(C_word)C_slot(t6,C_fix(1));
t8=((C_word*)t0)[7];
t9=(C_word)C_slot(t8,C_fix(2));
t10=(C_word)C_i_cadr(t4);
t11=(C_word)C_i_cadr(((C_word*)t0)[3]);
t12=(C_word)C_a_i_list(&a,2,t10,t11);
t13=(C_word)C_a_i_record(&a,4,lf[14],t7,t9,t12);
t14=(C_word)C_a_i_list(&a,2,t5,t13);
t15=(C_word)C_a_i_record(&a,4,lf[14],((C_word*)t0)[2],t3,t14);
C_trace("unboxing.scm: 168  copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[15]))(4,*((C_word*)lf[15]+1),t2,t15,((C_word*)t0)[7]);}

/* k1113 in k1110 in straighten-binding! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("unboxing.scm: 181  straighten-binding!");
t3=((C_word*)((C_word*)t0)[3])[1];
f_1093(t3,t2,((C_word*)t0)[4]);}

/* k1116 in k1113 in k1110 in straighten-binding! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_1118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[4];
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_cadr(t3);
C_trace("unboxing.scm: 182  straighten-binding!");
t5=((C_word*)((C_word*)t0)[3])[1];
f_1093(t5,((C_word*)t0)[2],t4);}

/* merge in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_716(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_716,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_726,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_726(t6,t4);}
else{
t6=(C_word)C_i_cdr(t2);
t7=t5;
f_726(t7,(C_word)C_i_not(t6));}}

/* k724 in merge in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_726(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_726,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_729,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("unboxing.scm: 83   invalidate");
t3=((C_word*)t0)[4];
f_688(t3,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_not(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_738,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_738(t4,t2);}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
t5=t3;
f_738(t5,(C_word)C_i_not(t4));}}}

/* k736 in k724 in merge in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_738(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_738,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("unboxing.scm: 86   invalidate");
t3=((C_word*)t0)[4];
f_688(t3,t2,((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_i_equalp(((C_word*)t0)[3],((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t5));}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* k739 in k736 in k724 in merge in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k727 in k724 in merge in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* alias in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_710,NULL,3,t0,t1,t2);}
C_trace("unboxing.scm: 79   alist-ref");
((C_proc6)C_retrieve_symbol_proc(lf[10]))(6,*((C_word*)lf[10]+1),t1,t2,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[11]+1),t2);}

/* invalidate in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_688(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_688,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_car(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
C_trace("unboxing.scm: 76   boxed!");
t6=((C_word*)t0)[2];
f_597(t6,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* unboxed-value? in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_679(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_679,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_i_cdr(t2):C_SCHEME_FALSE));}

/* unboxed? in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static C_word C_fcall f_667(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)((C_word*)t0)[2])[1]);
return((C_truep(t2)?(C_word)C_i_cdr(t2):C_SCHEME_FALSE));}

/* unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_613(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_613,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
if(C_truep((C_word)C_i_cdr(t4))){
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_eqp(t5,t3);
t7=(C_truep(t6)?t3:C_SCHEME_FALSE);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_set_cdr(t4,t7));}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_639,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("unboxing.scm: 61   alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t8,t2,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_653,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("unboxing.scm: 62   alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t5,t2,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_657,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_665,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("unboxing.scm: 64   gensym");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t6,lf[9]);}}

/* k663 in unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("unboxing.scm: 64   alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k655 in unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_657,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_661,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("unboxing.scm: 65   alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k659 in k655 in unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k651 in unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_cdr(((C_word*)((C_word*)t0)[2])[1],t1));}

/* k637 in unboxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* boxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_fcall f_597(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_597,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(t3,C_SCHEME_FALSE));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_611,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("unboxing.scm: 52   alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t4,t2,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}}

/* k609 in boxed! in walk-lambda in k590 in ##compiler#perform-unboxing! in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* d in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_570(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_570r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_570r(t0,t1,t2,t3);}}

static void C_ccall f_570r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_fudge(C_fix(13)))){
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_580,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t5,lf[5],t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k578 in d in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,C_retrieve(lf[3]),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k581 in k578 in d in k566 in k563 in k560 in k557 in k554 in k551 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[107] = {
{"toplevel:unboxing_scm",(void*)C_unboxing_toplevel},
{"f_553:unboxing_scm",(void*)f_553},
{"f_556:unboxing_scm",(void*)f_556},
{"f_559:unboxing_scm",(void*)f_559},
{"f_562:unboxing_scm",(void*)f_562},
{"f_565:unboxing_scm",(void*)f_565},
{"f_568:unboxing_scm",(void*)f_568},
{"f_1839:unboxing_scm",(void*)f_1839},
{"f_1842:unboxing_scm",(void*)f_1842},
{"f_1824:unboxing_scm",(void*)f_1824},
{"f_1832:unboxing_scm",(void*)f_1832},
{"f_588:unboxing_scm",(void*)f_588},
{"f_592:unboxing_scm",(void*)f_592},
{"f_1795:unboxing_scm",(void*)f_1795},
{"f_1801:unboxing_scm",(void*)f_1801},
{"f_1806:unboxing_scm",(void*)f_1806},
{"f_1810:unboxing_scm",(void*)f_1810},
{"f_1813:unboxing_scm",(void*)f_1813},
{"f_1816:unboxing_scm",(void*)f_1816},
{"f_1819:unboxing_scm",(void*)f_1819},
{"f_594:unboxing_scm",(void*)f_594},
{"f_1789:unboxing_scm",(void*)f_1789},
{"f_1177:unboxing_scm",(void*)f_1177},
{"f_1196:unboxing_scm",(void*)f_1196},
{"f_1732:unboxing_scm",(void*)f_1732},
{"f_1756:unboxing_scm",(void*)f_1756},
{"f_1745:unboxing_scm",(void*)f_1745},
{"f_1730:unboxing_scm",(void*)f_1730},
{"f_1723:unboxing_scm",(void*)f_1723},
{"f_1656:unboxing_scm",(void*)f_1656},
{"f_1665:unboxing_scm",(void*)f_1665},
{"f_1711:unboxing_scm",(void*)f_1711},
{"f_1694:unboxing_scm",(void*)f_1694},
{"f_1679:unboxing_scm",(void*)f_1679},
{"f_1643:unboxing_scm",(void*)f_1643},
{"f_1622:unboxing_scm",(void*)f_1622},
{"f_1625:unboxing_scm",(void*)f_1625},
{"f_1628:unboxing_scm",(void*)f_1628},
{"f_1520:unboxing_scm",(void*)f_1520},
{"f_1566:unboxing_scm",(void*)f_1566},
{"f_1543:unboxing_scm",(void*)f_1543},
{"f_1523:unboxing_scm",(void*)f_1523},
{"f_1443:unboxing_scm",(void*)f_1443},
{"f_1446:unboxing_scm",(void*)f_1446},
{"f_1449:unboxing_scm",(void*)f_1449},
{"f_1452:unboxing_scm",(void*)f_1452},
{"f_1427:unboxing_scm",(void*)f_1427},
{"f_1299:unboxing_scm",(void*)f_1299},
{"f_1419:unboxing_scm",(void*)f_1419},
{"f_1302:unboxing_scm",(void*)f_1302},
{"f_1317:unboxing_scm",(void*)f_1317},
{"f_1362:unboxing_scm",(void*)f_1362},
{"f_1385:unboxing_scm",(void*)f_1385},
{"f_1375:unboxing_scm",(void*)f_1375},
{"f_1354:unboxing_scm",(void*)f_1354},
{"f_1348:unboxing_scm",(void*)f_1348},
{"f_1329:unboxing_scm",(void*)f_1329},
{"f_1274:unboxing_scm",(void*)f_1274},
{"f_1254:unboxing_scm",(void*)f_1254},
{"f_1214:unboxing_scm",(void*)f_1214},
{"f_1235:unboxing_scm",(void*)f_1235},
{"f_1229:unboxing_scm",(void*)f_1229},
{"f_1218:unboxing_scm",(void*)f_1218},
{"f_1066:unboxing_scm",(void*)f_1066},
{"f_1070:unboxing_scm",(void*)f_1070},
{"f_1073:unboxing_scm",(void*)f_1073},
{"f_1076:unboxing_scm",(void*)f_1076},
{"f_784:unboxing_scm",(void*)f_784},
{"f_788:unboxing_scm",(void*)f_788},
{"f_791:unboxing_scm",(void*)f_791},
{"f_1053:unboxing_scm",(void*)f_1053},
{"f_794:unboxing_scm",(void*)f_794},
{"f_806:unboxing_scm",(void*)f_806},
{"f_952:unboxing_scm",(void*)f_952},
{"f_1009:unboxing_scm",(void*)f_1009},
{"f_965:unboxing_scm",(void*)f_965},
{"f_975:unboxing_scm",(void*)f_975},
{"f_819:unboxing_scm",(void*)f_819},
{"f_831:unboxing_scm",(void*)f_831},
{"f_844:unboxing_scm",(void*)f_844},
{"f_804:unboxing_scm",(void*)f_804},
{"f_797:unboxing_scm",(void*)f_797},
{"f_1093:unboxing_scm",(void*)f_1093},
{"f_1112:unboxing_scm",(void*)f_1112},
{"f_1115:unboxing_scm",(void*)f_1115},
{"f_1118:unboxing_scm",(void*)f_1118},
{"f_716:unboxing_scm",(void*)f_716},
{"f_726:unboxing_scm",(void*)f_726},
{"f_738:unboxing_scm",(void*)f_738},
{"f_741:unboxing_scm",(void*)f_741},
{"f_729:unboxing_scm",(void*)f_729},
{"f_710:unboxing_scm",(void*)f_710},
{"f_688:unboxing_scm",(void*)f_688},
{"f_679:unboxing_scm",(void*)f_679},
{"f_667:unboxing_scm",(void*)f_667},
{"f_613:unboxing_scm",(void*)f_613},
{"f_665:unboxing_scm",(void*)f_665},
{"f_657:unboxing_scm",(void*)f_657},
{"f_661:unboxing_scm",(void*)f_661},
{"f_653:unboxing_scm",(void*)f_653},
{"f_639:unboxing_scm",(void*)f_639},
{"f_597:unboxing_scm",(void*)f_597},
{"f_611:unboxing_scm",(void*)f_611},
{"f_570:unboxing_scm",(void*)f_570},
{"f_580:unboxing_scm",(void*)f_580},
{"f_583:unboxing_scm",(void*)f_583},
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
