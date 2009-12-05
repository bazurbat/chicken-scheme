/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:29
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file chicken.c
   used units: library eval chicken_syntax srfi_1 srfi_4 utils files extras data_structures support compiler optimizer compiler_syntax scrutinizer driver platform backend srfi_69
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_syntax_toplevel)
C_externimport void C_ccall C_chicken_syntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_1_toplevel)
C_externimport void C_ccall C_srfi_1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_4_toplevel)
C_externimport void C_ccall C_srfi_4_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_structures_toplevel)
C_externimport void C_ccall C_data_structures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_syntax_toplevel)
C_externimport void C_ccall C_compiler_syntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_driver_toplevel)
C_externimport void C_ccall C_driver_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_platform_toplevel)
C_externimport void C_ccall C_platform_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_backend_toplevel)
C_externimport void C_ccall C_backend_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_69_toplevel)
C_externimport void C_ccall C_srfi_69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[91];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_343)
static void C_ccall f_343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_346)
static void C_ccall f_346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_358)
static void C_ccall f_358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_361)
static void C_ccall f_361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_373)
static void C_ccall f_373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_376)
static void C_ccall f_376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_395)
static void C_ccall f_395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1309)
static void C_fcall f_1309(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1312)
static void C_fcall f_1312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1562)
static void C_fcall f_1562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_fcall f_1514(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_398)
static void C_ccall f_398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_ccall f_1177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_401)
static void C_ccall f_401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1110)
static void C_fcall f_1110(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1137)
static void C_fcall f_1137(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_404)
static void C_ccall f_404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_964)
static void C_ccall f_964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_407)
static void C_ccall f_407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_818)
static void C_ccall f_818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_831)
static void C_ccall f_831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_fcall f_863(C_word t0,C_word t1) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_410)
static void C_ccall f_410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_413)
static void C_ccall f_413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_416)
static void C_ccall f_416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_ccall f_776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_420)
static void C_ccall f_420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_549)
static void C_ccall f_549(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_561)
static void C_fcall f_561(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_744)
static void C_ccall f_744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_659)
static void C_ccall f_659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_676)
static void C_ccall f_676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_646)
static void C_ccall f_646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_636)
static void C_ccall f_636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_626)
static void C_ccall f_626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_553)
static void C_ccall f_553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_541)
static void C_ccall f_541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_529)
static void C_ccall f_529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_422)
static void C_ccall f_422(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_428)
static void C_fcall f_428(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_463)
static void C_fcall f_463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_489)
static void C_ccall f_489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_485)
static void C_ccall f_485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1309)
static void C_fcall trf_1309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1309(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1309(t0,t1);}

C_noret_decl(trf_1312)
static void C_fcall trf_1312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1312(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1312(t0,t1);}

C_noret_decl(trf_1562)
static void C_fcall trf_1562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1562(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1562(t0,t1,t2);}

C_noret_decl(trf_1514)
static void C_fcall trf_1514(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1514(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1514(t0,t1,t2);}

C_noret_decl(trf_1110)
static void C_fcall trf_1110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1110(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1110(t0,t1,t2);}

C_noret_decl(trf_1137)
static void C_fcall trf_1137(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1137(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1137(t0,t1);}

C_noret_decl(trf_863)
static void C_fcall trf_863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_863(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_863(t0,t1);}

C_noret_decl(trf_561)
static void C_fcall trf_561(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_561(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_561(t0,t1,t2);}

C_noret_decl(trf_428)
static void C_fcall trf_428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_428(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_428(t0,t1,t2,t3,t4);}

C_noret_decl(trf_463)
static void C_fcall trf_463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_463(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_463(t0,t1);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(131072);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1098)){
C_save(t1);
C_rereclaim2(1098*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,91);
lf[0]=C_h_intern(&lf[0],33,"\003syschicken-ffi-macro-environment");
lf[1]=C_h_intern(&lf[1],27,"\010compilercompiler-arguments");
lf[2]=C_h_intern(&lf[2],29,"\010compilerprocess-command-line");
lf[3]=C_h_intern(&lf[3],7,"reverse");
lf[4]=C_h_intern(&lf[4],14,"string->symbol");
lf[5]=C_h_intern(&lf[5],9,"substring");
lf[6]=C_h_intern(&lf[6],25,"\003sysimplicit-exit-handler");
lf[7]=C_h_intern(&lf[7],17,"user-options-pass");
lf[8]=C_h_intern(&lf[8],4,"exit");
lf[9]=C_h_intern(&lf[9],19,"compile-source-file");
lf[10]=C_h_intern(&lf[10],14,"optimize-level");
lf[11]=C_h_intern(&lf[11],22,"optimize-leaf-routines");
lf[12]=C_h_intern(&lf[12],5,"cons*");
lf[13]=C_h_intern(&lf[13],6,"inline");
lf[14]=C_h_intern(&lf[14],5,"local");
lf[15]=C_h_intern(&lf[15],6,"unsafe");
lf[16]=C_h_intern(&lf[16],18,"disable-interrupts");
lf[17]=C_h_intern(&lf[17],8,"no-trace");
lf[18]=C_h_intern(&lf[18],5,"block");
lf[19]=C_h_intern(&lf[19],11,"lambda-lift");
lf[20]=C_h_intern(&lf[20],14,"no-lambda-info");
lf[21]=C_h_intern(&lf[21],11,"debug-level");
lf[22]=C_h_intern(&lf[22],25,"\010compilercompiler-warning");
lf[23]=C_h_intern(&lf[23],5,"usage");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000 invalid debug level ~S - ignored");
lf[25]=C_h_intern(&lf[25],31,"\010compilervalid-compiler-options");
lf[26]=C_h_intern(&lf[26],45,"\010compilervalid-compiler-options-with-argument");
lf[27]=C_h_intern(&lf[27],4,"quit");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~s\047 option");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000&invalid compiler option `~a\047 - ignored");
lf[30]=C_h_intern(&lf[30],4,"conc");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[32]=C_h_intern(&lf[32],6,"append");
lf[33]=C_h_intern(&lf[33],4,"argv");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[35]=C_h_intern(&lf[35],6,"remove");
lf[36]=C_h_intern(&lf[36],12,"string-split");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[38]=C_h_intern(&lf[38],24,"get-environment-variable");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN_OPTIONS");
lf[40]=C_h_intern(&lf[40],16,"\003sysmacro-subset");
lf[41]=C_h_intern(&lf[41],28,"\003sysextend-macro-environment");
lf[42]=C_h_intern(&lf[42],15,"foreign-declare");
lf[43]=C_h_intern(&lf[43],12,"\004coredeclare");
lf[44]=C_h_intern(&lf[44],10,"\003sysappend");
lf[45]=C_h_intern(&lf[45],16,"\003syscheck-syntax");
lf[46]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[47]=C_h_intern(&lf[47],18,"\003syser-transformer");
lf[48]=C_h_intern(&lf[48],13,"foreign-value");
lf[49]=C_h_intern(&lf[49],14,"symbol->string");
lf[50]=C_h_intern(&lf[50],12,"syntax-error");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000*bad argument type - not a string or symbol");
lf[52]=C_h_intern(&lf[52],23,"define-foreign-variable");
lf[53]=C_h_intern(&lf[53],5,"begin");
lf[54]=C_h_intern(&lf[54],6,"gensym");
lf[55]=C_h_intern(&lf[55],5,"code_");
lf[56]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[57]=C_h_intern(&lf[57],12,"foreign-code");
lf[58]=C_h_intern(&lf[58],11,"\004coreinline");
lf[59]=C_h_intern(&lf[59],17,"get-output-string");
lf[60]=C_h_intern(&lf[60],7,"display");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012");
lf[62]=C_h_intern(&lf[62],18,"string-intersperse");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\005() { ");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\016static C_word ");
lf[66]=C_h_intern(&lf[66],18,"open-output-string");
lf[67]=C_h_intern(&lf[67],7,"declare");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[69]=C_h_intern(&lf[69],12,"let-location");
lf[70]=C_h_intern(&lf[70],17,"\004corelet-location");
lf[71]=C_h_intern(&lf[71],10,"fold-right");
lf[72]=C_h_intern(&lf[72],10,"append-map");
lf[73]=C_h_intern(&lf[73],3,"let");
lf[74]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000"
"\000\000\376\001\000\000\001_");
lf[75]=C_h_intern(&lf[75],15,"define-location");
lf[76]=C_h_intern(&lf[76],9,"\004coreset!");
lf[77]=C_h_intern(&lf[77],24,"define-external-variable");
lf[78]=C_h_intern(&lf[78],9,"\003syserror");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[81]=C_h_intern(&lf[81],15,"define-external");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[83]=C_h_intern(&lf[83],5,"quote");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[85]=C_h_intern(&lf[85],29,"\004coreforeign-callback-wrapper");
lf[86]=C_h_intern(&lf[86],6,"lambda");
lf[87]=C_h_intern(&lf[87],6,"define");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376"
"\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[89]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[90]=C_h_intern(&lf[90],21,"\003sysmacro-environment");
C_register_lf2(lf,91,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k338 */
static void C_ccall f_340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k341 in k338 */
static void C_ccall f_343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_syntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k344 in k341 in k338 */
static void C_ccall f_346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k347 in k344 in k341 in k338 */
static void C_ccall f_349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_4_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_support_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_syntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scrutinizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_382,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_driver_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_385,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_platform_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_388,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_backend_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#macro-environment");
((C_proc2)C_retrieve_symbol_proc(lf[90]))(2,*((C_word*)lf[90]+1),t2);}

/* k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_398,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1297,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1299,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t3,t4);}

/* a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1299,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1306,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("r37");
t7=t3;
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[83]);}

/* k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=t2;
f_1309(t4,(C_word)C_i_stringp(t3));}
else{
t3=t2;
f_1309(t3,C_SCHEME_FALSE);}}

/* k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_1309(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1309,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1312,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=t1;
if(C_truep(t3)){
t4=t2;
f_1312(t4,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=t2;
f_1312(t5,(C_word)C_i_symbolp(t4));}
else{
t4=t2;
f_1312(t4,C_SCHEME_FALSE);}}}

/* k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_1312(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1312,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t2,lf[81],((C_word*)t0)[5],lf[82]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1417,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t2,lf[81],((C_word*)t0)[5],lf[88]);}
else{
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t2,lf[81],((C_word*)t0)[5],lf[89]);}}}

/* k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1417,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[5])?(C_word)C_i_cadr(((C_word*)t0)[4]):(C_word)C_i_car(((C_word*)t0)[4]));
t3=(C_word)C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1430,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("r37");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[87]);}

/* k1428 in k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1430(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1430,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[83],t4);
t6=(C_truep(((C_word*)t0)[6])?(C_word)C_i_car(((C_word*)t0)[5]):lf[84]);
t7=(C_truep(((C_word*)t0)[6])?(C_word)C_i_caddr(((C_word*)t0)[5]):(C_word)C_i_cadr(((C_word*)t0)[5]));
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,lf[83],t8);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=t2,a[9]=t5,a[10]=t6,a[11]=t9,tmp=(C_word)a,a+=12,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1562,a[2]=t11,a[3]=t16,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t18=((C_word*)t16)[1];
f_1562(t18,t14,((C_word*)t0)[3]);}

/* loop75 in k1428 in k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_1562(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1562,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop7588");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop7588");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1558 in k1428 in k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1560,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[83],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
C_trace("r37");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[86]);}

/* k1488 in k1558 in k1428 in k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1490,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1514,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1514(t10,t6,((C_word*)t0)[2]);}

/* loop99 in k1488 in k1558 in k1428 in k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_1514(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1514,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_cadr(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop99112");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop99112");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1496 in k1488 in k1558 in k1428 in k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1502,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(C_truep(((C_word*)t0)[3])?(C_word)C_i_cdddr(((C_word*)t0)[2]):(C_word)C_i_cddr(((C_word*)t0)[2]));
C_trace("##sys#append");
t4=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k1500 in k1496 in k1488 in k1558 in k1428 in k1415 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1502,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t7);
t9=(C_word)C_a_i_cons(&a,2,lf[85],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t10);
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t11));}

/* k1316 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1318,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("r37");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[53]);}

/* k1326 in k1316 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1328,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("r37");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[52]);}

/* k1400 in k1326 in k1316 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1402,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("r37");
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[77]);}

/* k1380 in k1400 in k1326 in k1316 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1382(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1382,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cddr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_caddr(((C_word*)t0)[6]);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t10);
t12=(C_word)C_a_i_cons(&a,2,lf[76],t11);
t13=(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
C_trace("##sys#append");
t14=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t7,t13,C_SCHEME_END_OF_LIST);}
else{
C_trace("##sys#append");
t9=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* k1346 in k1380 in k1400 in k1326 in k1316 in k1310 in k1307 in k1304 in a1298 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1348,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k1295 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[41]))(5,*((C_word*)lf[41]+1),((C_word*)t0)[2],lf[81],C_SCHEME_END_OF_LIST,t1);}

/* k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1156,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1158,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t3,t4);}

/* a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1158,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1162,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t5,lf[75],t2,lf[80]);}

/* k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1162,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_1174(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_1174(2,t7,(C_word)C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[79],t4);}}}

/* k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1177,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1274,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("gensym");
((C_proc2)C_retrieve_symbol_proc(lf[54]))(2,*((C_word*)lf[54]+1),t3);}

/* k1272 in k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("r123");
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1175 in k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("r123");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[53]);}

/* k1182 in k1175 in k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("r123");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[52]);}

/* k1252 in k1182 in k1175 in k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[49]+1)))(3,*((C_word*)lf[49]+1),t2,((C_word*)t0)[6]);}

/* k1268 in k1252 in k1182 in k1175 in k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1270,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace("r123");
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[77]);}

/* k1232 in k1268 in k1252 in k1182 in k1175 in k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1234,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_cons(&a,2,t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t8=(C_word)C_i_car(((C_word*)t0)[2]);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t9);
t11=(C_word)C_a_i_cons(&a,2,lf[76],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
C_trace("##sys#append");
t13=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t7,t12,C_SCHEME_END_OF_LIST);}
else{
C_trace("##sys#append");
t8=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* k1202 in k1232 in k1268 in k1252 in k1182 in k1175 in k1172 in k1160 in a1157 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k1154 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[41]))(5,*((C_word*)lf[41]+1),((C_word*)t0)[2],lf[75],C_SCHEME_END_OF_LIST,t1);}

/* k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_974,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t3,t4);}

/* a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_974,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_978,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t5,lf[69],t2,lf[74]);}

/* k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_978,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_987,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("r144");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[73]);}

/* k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_987(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_987,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1110,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1110(t10,t6,((C_word*)t0)[4]);}

/* loop153 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_1110(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1110,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1137,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1148,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g169170");
t6=t3;
f_1137(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1146 in loop153 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1148,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop153166");
t6=((C_word*)((C_word*)t0)[4])[1];
f_1110(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop153166");
t6=((C_word*)((C_word*)t0)[4])[1];
f_1110(t6,((C_word*)t0)[3],t5);}}

/* g169 in loop153 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_1137(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1137,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1145,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("gensym");
((C_proc2)C_retrieve_symbol_proc(lf[54]))(2,*((C_word*)lf[54]+1),t2);}

/* k1143 in g169 in loop153 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("r144");
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k988 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1001,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1086,tmp=(C_word)a,a+=2,tmp);
C_trace("append-map");
((C_proc5)C_retrieve_symbol_proc(lf[72]))(5,*((C_word*)lf[72]+1),t2,t3,((C_word*)t0)[3],t1);}

/* a1085 in k988 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1086,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_i_cddr(t2);
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,1,t6));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k999 in k988 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1009,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1011,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("##sys#append");
t5=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1082 in k999 in k988 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1084,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
C_trace("fold-right");
((C_proc6)C_retrieve_symbol_proc(lf[71]))(6,*((C_word*)lf[71]+1),((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1010 in k999 in k988 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1011,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_length(t2);
t6=(C_word)C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cadr(t2);
t9=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t3,t9);
t11=(C_word)C_a_i_cons(&a,2,t8,t10);
t12=(C_word)C_a_i_cons(&a,2,t7,t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_a_i_cons(&a,2,lf[70],t12));}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cadr(t2);
t9=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t8,t9);
t11=(C_word)C_a_i_cons(&a,2,t7,t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_cons(&a,2,lf[70],t11));}}

/* k1007 in k999 in k988 in k985 in k976 in a973 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_1009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1009,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k970 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[41]))(5,*((C_word*)lf[41]+1),((C_word*)t0)[2],lf[69],C_SCHEME_END_OF_LIST,t1);}

/* k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_886,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_888,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t3,t4);}

/* a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_888,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_892,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t5,lf[57],t2,lf[68]);}

/* k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("gensym");
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,lf[55]);}

/* k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("r198");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[53]);}

/* k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_926,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("r198");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[67]);}

/* k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[66]))(2,*((C_word*)lf[66]+1),t2);}

/* k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_945,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t2,lf[65],t1);}

/* k943 in k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t2,((C_word*)t0)[6],((C_word*)t0)[3]);}

/* k946 in k943 in k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t2,lf[64],((C_word*)t0)[3]);}

/* k949 in k946 in k943 in k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_954,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_964,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[62]))(4,*((C_word*)lf[62]+1),t3,t4,lf[63]);}

/* k962 in k949 in k946 in k943 in k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k952 in k949 in k946 in k943 in k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[60]+1)))(4,*((C_word*)lf[60]+1),t2,lf[61],((C_word*)t0)[2]);}

/* k955 in k952 in k949 in k946 in k943 in k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t2,((C_word*)t0)[2]);}

/* k958 in k955 in k952 in k949 in k946 in k943 in k940 in k924 in k900 in k893 in k890 in a887 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_960(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_960,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[42],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[58],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t5,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k884 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[41]))(5,*((C_word*)lf[41]+1),((C_word*)t0)[2],lf[57],C_SCHEME_END_OF_LIST,t1);}

/* k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_812,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_814,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t3,t4);}

/* a813 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_814,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_818,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t5,lf[48],t2,lf[56]);}

/* k816 in a813 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("gensym");
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,lf[55]);}

/* k819 in k816 in a813 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_821,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_831,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("r217");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[53]);}

/* k829 in k819 in k816 in a813 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_847,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("r217");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[52]);}

/* k845 in k829 in k819 in k816 in a813 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_847,2,t0,t1);}
t2=(C_word)C_i_caddr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_867,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[2]))){
t5=t3;
f_863(t5,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST));}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
C_trace("symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[49]+1)))(3,*((C_word*)lf[49]+1),t4,((C_word*)t0)[2]);}
else{
C_trace("syntax-error");
((C_proc5)C_retrieve_symbol_proc(lf[50]))(5,*((C_word*)lf[50]+1),t4,lf[48],lf[51],((C_word*)t0)[2]);}}}

/* k865 in k845 in k829 in k819 in k816 in a813 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_867,2,t0,t1);}
t2=((C_word*)t0)[2];
f_863(t2,(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k861 in k845 in k829 in k819 in k816 in a813 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_863(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_863,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t6));}

/* k810 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[41]))(5,*((C_word*)lf[41]+1),((C_word*)t0)[2],lf[48],C_SCHEME_END_OF_LIST,t1);}

/* k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_783,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_785,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t3,t4);}

/* a784 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_785,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_789,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),t5,lf[42],t2,lf[46]);}

/* k787 in a784 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("##sys#append");
t4=*((C_word*)lf[44]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k802 in k787 in a784 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_804,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[42],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[43],t3));}

/* k781 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[41]))(5,*((C_word*)lf[41]+1),((C_word*)t0)[2],lf[42],C_SCHEME_END_OF_LIST,t1);}

/* k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_416,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#macro-subset");
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t2,((C_word*)t0)[2]);}

/* k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_416,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! chicken-ffi-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_754,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_764,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_772,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_776,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm: 48   get-environment-variable");
((C_proc3)C_retrieve_symbol_proc(lf[38]))(3,*((C_word*)lf[38]+1),t7,lf[39]);}

/* k774 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("chicken.scm: 48   string-split");
((C_proc3)C_retrieve_symbol_proc(lf[36]))(3,*((C_word*)lf[36]+1),((C_word*)t0)[2],t2);}
else{
C_trace("chicken.scm: 48   string-split");
((C_proc3)C_retrieve_symbol_proc(lf[36]))(3,*((C_word*)lf[36]+1),((C_word*)t0)[2],lf[37]);}}

/* k770 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 46   remove");
((C_proc4)C_retrieve_symbol_proc(lf[35]))(4,*((C_word*)lf[35]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a763 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_764(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_764,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_string_equal_p(t2,lf[34]));}

/* k752 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_754,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_762,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm: 49   argv");
((C_proc2)C_retrieve_symbol_proc(lf[33]))(2,*((C_word*)lf[33]+1),t2);}

/* k760 in k752 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(t1);
C_trace("chicken.scm: 45   append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[32]+1)))(4,*((C_word*)lf[32]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_420,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! compiler-arguments ...) */,t1);
t3=C_mutate((C_word*)lf[2]+1 /* (set! process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_422,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_537,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_549,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t4,t5,t6);}

/* a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_549(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_549,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_553,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_561,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_561(t9,t5,((C_word*)t4)[1]);}

/* loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_561(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_561,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_eqp(lf[10],t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_583,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t4);
C_trace("chicken.scm: 82   string->number");
C_string_to_number(3,0,t6,t7);}
else{
t6=(C_word)C_eqp(lf[21],t3);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_659,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_car(t4);
C_trace("chicken.scm: 105  string->number");
C_string_to_number(3,0,t7,t8);}
else{
if(C_truep((C_word)C_i_memq(t3,C_retrieve(lf[25])))){
C_trace("chicken.scm: 112  loop");
t16=t1;
t17=t4;
t1=t16;
t2=t17;
goto loop;}
else{
if(C_truep((C_word)C_i_memq(t3,C_retrieve(lf[26])))){
if(C_truep((C_word)C_i_pairp(t4))){
t7=(C_word)C_i_cdr(t4);
C_trace("chicken.scm: 115  loop");
t16=t1;
t17=t7;
t1=t16;
t2=t17;
goto loop;}
else{
C_trace("chicken.scm: 116  quit");
((C_proc4)C_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t1,lf[28],t3);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_737,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_744,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_stringp(t3))){
C_trace("chicken.scm: 118  compiler-warning");
((C_proc5)C_retrieve_symbol_proc(lf[22]))(5,*((C_word*)lf[22]+1),t7,lf[23],lf[29],t3);}
else{
C_trace("chicken.scm: 120  conc");
((C_proc4)C_retrieve_symbol_proc(lf[30]))(4,*((C_word*)lf[30]+1),t8,lf[31],t3);}}}}}}}

/* k742 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 118  compiler-warning");
((C_proc5)C_retrieve_symbol_proc(lf[22]))(5,*((C_word*)lf[22]+1),((C_word*)t0)[2],lf[23],lf[29],t1);}

/* k735 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 121  loop");
t2=((C_word*)((C_word*)t0)[4])[1];
f_561(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k657 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_662,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
switch(t1){
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 107  cons*");
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t3,lf[20],lf[17],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(1):
t3=(C_word)C_a_i_cons(&a,2,lf[17],((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=(C_word)C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 111  loop");
t6=((C_word*)((C_word*)t0)[4])[1];
f_561(t6,((C_word*)t0)[3],t5);
case C_fix(2):
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 111  loop");
t4=((C_word*)((C_word*)t0)[4])[1];
f_561(t4,((C_word*)t0)[3],t3);
default:
t3=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("chicken.scm: 110  compiler-warning");
((C_proc5)C_retrieve_symbol_proc(lf[22]))(5,*((C_word*)lf[22]+1),t2,lf[23],lf[24],t3);}}

/* k674 in k657 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 111  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_561(t4,((C_word*)t0)[2],t3);}

/* k660 in k657 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 111  loop");
t3=((C_word*)((C_word*)t0)[3])[1];
f_561(t3,((C_word*)t0)[2],t2);}

/* k581 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_583,2,t0,t1);}
switch(t1){
case C_fix(0):
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 103  loop");
t3=((C_word*)((C_word*)t0)[4])[1];
f_561(t3,((C_word*)t0)[3],t2);
case C_fix(1):
t2=(C_word)C_a_i_cons(&a,2,lf[11],((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 103  loop");
t5=((C_word*)((C_word*)t0)[4])[1];
f_561(t5,((C_word*)t0)[3],t4);
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_616,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 89   cons*");
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[11],lf[13],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 92   cons*");
((C_proc6)C_retrieve_symbol_proc(lf[12]))(6,*((C_word*)lf[12]+1),t2,lf[11],lf[13],lf[14],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_636,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 95   cons*");
((C_proc7)C_retrieve_symbol_proc(lf[12]))(7,*((C_word*)lf[12]+1),t2,lf[11],lf[13],lf[14],lf[15],((C_word*)((C_word*)t0)[2])[1]);
default:
t2=t1;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,C_fix(5)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_646,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 99   cons*");
((C_proc11)C_retrieve_symbol_proc(lf[12]))(11,*((C_word*)lf[12]+1),t3,lf[16],lf[17],lf[15],lf[18],lf[11],lf[19],lf[20],lf[13],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 103  loop");
t4=((C_word*)((C_word*)t0)[4])[1];
f_561(t4,((C_word*)t0)[3],t3);}}}

/* k644 in k581 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 103  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_561(t4,((C_word*)t0)[2],t3);}

/* k634 in k581 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 103  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_561(t4,((C_word*)t0)[2],t3);}

/* k624 in k581 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 103  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_561(t4,((C_word*)t0)[2],t3);}

/* k614 in k581 in loop in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 103  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_561(t4,((C_word*)t0)[2],t3);}

/* k551 in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_556,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t2,C_retrieve(lf[9]),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k554 in k551 in a548 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 123  exit");
((C_proc2)C_retrieve_symbol_proc(lf[8]))(2,*((C_word*)lf[8]+1),((C_word*)t0)[2]);}

/* a536 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_541,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm: 76   user-options-pass");
((C_proc2)C_retrieve_symbol_proc(lf[7]))(2,*((C_word*)lf[7]+1),t2);}

/* k539 in a536 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("g269270");
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_retrieve(lf[1]));}
else{
t2=C_retrieve(lf[2]);
C_trace("g269270");
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_retrieve(lf[1]));}}

/* k527 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_535,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#implicit-exit-handler");
((C_proc2)C_retrieve_symbol_proc(lf[6]))(2,*((C_word*)lf[6]+1),t3);}

/* k533 in k527 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k530 in k527 in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* ##compiler#process-command-line in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_422(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_422,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_428,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_428(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in ##compiler#process-command-line in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_428(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t19;
C_word t20;
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_428,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_442,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm: 61   reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t5,t3);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_string_length(t5);
t7=(C_word)C_i_string_ref(t5,C_fix(0));
t8=(C_word)C_eqp(C_make_character(45),t7);
t9=(C_truep(t8)?(C_word)C_fixnum_greaterp(t6,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_463,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t6,C_fix(1)))){
t11=(C_word)C_i_string_ref(t5,C_fix(1));
t12=t10;
f_463(t12,(C_word)C_eqp(C_make_character(58),t11));}
else{
t11=t10;
f_463(t11,C_SCHEME_FALSE);}}
else{
if(C_truep(t4)){
t10=(C_word)C_i_cdr(t2);
t11=(C_word)C_a_i_cons(&a,2,t5,t3);
C_trace("chicken.scm: 70   loop");
t17=t1;
t18=t10;
t19=t11;
t20=t4;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}
else{
t10=(C_word)C_i_cdr(t2);
C_trace("chicken.scm: 71   loop");
t17=t1;
t18=t10;
t19=t3;
t20=t5;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}}

/* k461 in loop in ##compiler#process-command-line in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_fcall f_463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_463,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
C_trace("chicken.scm: 67   loop");
t3=((C_word*)((C_word*)t0)[7])[1];
f_428(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_485,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_489,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm: 68   substring");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),t4,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]);}}

/* k487 in k461 in loop in ##compiler#process-command-line in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 68   string->symbol");
((C_proc3)C_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),((C_word*)t0)[2],t1);}

/* k483 in k461 in loop in ##compiler#process-command-line in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_485,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
C_trace("chicken.scm: 68   loop");
t3=((C_word*)((C_word*)t0)[5])[1];
f_428(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k440 in loop in ##compiler#process-command-line in k418 in k414 in k411 in k408 in k405 in k402 in k399 in k396 in k393 in k389 in k386 in k383 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in k350 in k347 in k344 in k341 in k338 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 61   values");
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[128] = {
{"toplevel:chicken_scm",(void*)C_toplevel},
{"f_340:chicken_scm",(void*)f_340},
{"f_343:chicken_scm",(void*)f_343},
{"f_346:chicken_scm",(void*)f_346},
{"f_349:chicken_scm",(void*)f_349},
{"f_352:chicken_scm",(void*)f_352},
{"f_355:chicken_scm",(void*)f_355},
{"f_358:chicken_scm",(void*)f_358},
{"f_361:chicken_scm",(void*)f_361},
{"f_364:chicken_scm",(void*)f_364},
{"f_367:chicken_scm",(void*)f_367},
{"f_370:chicken_scm",(void*)f_370},
{"f_373:chicken_scm",(void*)f_373},
{"f_376:chicken_scm",(void*)f_376},
{"f_379:chicken_scm",(void*)f_379},
{"f_382:chicken_scm",(void*)f_382},
{"f_385:chicken_scm",(void*)f_385},
{"f_388:chicken_scm",(void*)f_388},
{"f_391:chicken_scm",(void*)f_391},
{"f_395:chicken_scm",(void*)f_395},
{"f_1299:chicken_scm",(void*)f_1299},
{"f_1306:chicken_scm",(void*)f_1306},
{"f_1309:chicken_scm",(void*)f_1309},
{"f_1312:chicken_scm",(void*)f_1312},
{"f_1417:chicken_scm",(void*)f_1417},
{"f_1430:chicken_scm",(void*)f_1430},
{"f_1562:chicken_scm",(void*)f_1562},
{"f_1560:chicken_scm",(void*)f_1560},
{"f_1490:chicken_scm",(void*)f_1490},
{"f_1514:chicken_scm",(void*)f_1514},
{"f_1498:chicken_scm",(void*)f_1498},
{"f_1502:chicken_scm",(void*)f_1502},
{"f_1318:chicken_scm",(void*)f_1318},
{"f_1328:chicken_scm",(void*)f_1328},
{"f_1402:chicken_scm",(void*)f_1402},
{"f_1382:chicken_scm",(void*)f_1382},
{"f_1348:chicken_scm",(void*)f_1348},
{"f_1297:chicken_scm",(void*)f_1297},
{"f_398:chicken_scm",(void*)f_398},
{"f_1158:chicken_scm",(void*)f_1158},
{"f_1162:chicken_scm",(void*)f_1162},
{"f_1174:chicken_scm",(void*)f_1174},
{"f_1274:chicken_scm",(void*)f_1274},
{"f_1177:chicken_scm",(void*)f_1177},
{"f_1184:chicken_scm",(void*)f_1184},
{"f_1254:chicken_scm",(void*)f_1254},
{"f_1270:chicken_scm",(void*)f_1270},
{"f_1234:chicken_scm",(void*)f_1234},
{"f_1204:chicken_scm",(void*)f_1204},
{"f_1156:chicken_scm",(void*)f_1156},
{"f_401:chicken_scm",(void*)f_401},
{"f_974:chicken_scm",(void*)f_974},
{"f_978:chicken_scm",(void*)f_978},
{"f_987:chicken_scm",(void*)f_987},
{"f_1110:chicken_scm",(void*)f_1110},
{"f_1148:chicken_scm",(void*)f_1148},
{"f_1137:chicken_scm",(void*)f_1137},
{"f_1145:chicken_scm",(void*)f_1145},
{"f_990:chicken_scm",(void*)f_990},
{"f_1086:chicken_scm",(void*)f_1086},
{"f_1001:chicken_scm",(void*)f_1001},
{"f_1084:chicken_scm",(void*)f_1084},
{"f_1011:chicken_scm",(void*)f_1011},
{"f_1009:chicken_scm",(void*)f_1009},
{"f_972:chicken_scm",(void*)f_972},
{"f_404:chicken_scm",(void*)f_404},
{"f_888:chicken_scm",(void*)f_888},
{"f_892:chicken_scm",(void*)f_892},
{"f_895:chicken_scm",(void*)f_895},
{"f_902:chicken_scm",(void*)f_902},
{"f_926:chicken_scm",(void*)f_926},
{"f_942:chicken_scm",(void*)f_942},
{"f_945:chicken_scm",(void*)f_945},
{"f_948:chicken_scm",(void*)f_948},
{"f_951:chicken_scm",(void*)f_951},
{"f_964:chicken_scm",(void*)f_964},
{"f_954:chicken_scm",(void*)f_954},
{"f_957:chicken_scm",(void*)f_957},
{"f_960:chicken_scm",(void*)f_960},
{"f_886:chicken_scm",(void*)f_886},
{"f_407:chicken_scm",(void*)f_407},
{"f_814:chicken_scm",(void*)f_814},
{"f_818:chicken_scm",(void*)f_818},
{"f_821:chicken_scm",(void*)f_821},
{"f_831:chicken_scm",(void*)f_831},
{"f_847:chicken_scm",(void*)f_847},
{"f_867:chicken_scm",(void*)f_867},
{"f_863:chicken_scm",(void*)f_863},
{"f_812:chicken_scm",(void*)f_812},
{"f_410:chicken_scm",(void*)f_410},
{"f_785:chicken_scm",(void*)f_785},
{"f_789:chicken_scm",(void*)f_789},
{"f_804:chicken_scm",(void*)f_804},
{"f_783:chicken_scm",(void*)f_783},
{"f_413:chicken_scm",(void*)f_413},
{"f_416:chicken_scm",(void*)f_416},
{"f_776:chicken_scm",(void*)f_776},
{"f_772:chicken_scm",(void*)f_772},
{"f_764:chicken_scm",(void*)f_764},
{"f_754:chicken_scm",(void*)f_754},
{"f_762:chicken_scm",(void*)f_762},
{"f_420:chicken_scm",(void*)f_420},
{"f_549:chicken_scm",(void*)f_549},
{"f_561:chicken_scm",(void*)f_561},
{"f_744:chicken_scm",(void*)f_744},
{"f_737:chicken_scm",(void*)f_737},
{"f_659:chicken_scm",(void*)f_659},
{"f_676:chicken_scm",(void*)f_676},
{"f_662:chicken_scm",(void*)f_662},
{"f_583:chicken_scm",(void*)f_583},
{"f_646:chicken_scm",(void*)f_646},
{"f_636:chicken_scm",(void*)f_636},
{"f_626:chicken_scm",(void*)f_626},
{"f_616:chicken_scm",(void*)f_616},
{"f_553:chicken_scm",(void*)f_553},
{"f_556:chicken_scm",(void*)f_556},
{"f_537:chicken_scm",(void*)f_537},
{"f_541:chicken_scm",(void*)f_541},
{"f_529:chicken_scm",(void*)f_529},
{"f_535:chicken_scm",(void*)f_535},
{"f_532:chicken_scm",(void*)f_532},
{"f_422:chicken_scm",(void*)f_422},
{"f_428:chicken_scm",(void*)f_428},
{"f_463:chicken_scm",(void*)f_463},
{"f_489:chicken_scm",(void*)f_489},
{"f_485:chicken_scm",(void*)f_485},
{"f_442:chicken_scm",(void*)f_442},
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
