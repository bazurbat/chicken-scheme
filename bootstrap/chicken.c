/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 11:33
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file chicken.c
   used units: library eval chicken_syntax srfi_1 srfi_4 utils files extras data_structures support compiler optimizer unboxing compiler_syntax scrutinizer driver platform backend srfi_69
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
C_noret_decl(C_unboxing_toplevel)
C_externimport void C_ccall C_unboxing_toplevel(C_word c,C_word d,C_word k) C_noret;
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

static C_TLS C_word lf[105];
static double C_possibly_force_alignment;


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_397)
static void C_ccall f_397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_400)
static void C_ccall f_400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_403)
static void C_ccall f_403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_406)
static void C_ccall f_406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_412)
static void C_ccall f_412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_415)
static void C_ccall f_415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_418)
static void C_ccall f_418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_421)
static void C_ccall f_421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_424)
static void C_ccall f_424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_430)
static void C_ccall f_430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_433)
static void C_ccall f_433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_439)
static void C_ccall f_439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_445)
static void C_ccall f_445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_448)
static void C_ccall f_448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_451)
static void C_ccall f_451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_455)
static void C_ccall f_455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1504)
static void C_fcall f_1504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_fcall f_1507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1749)
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1701)
static void C_fcall f_1701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_461)
static void C_ccall f_461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_ccall f_1177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1181)
static void C_ccall f_1181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1313)
static void C_fcall f_1313(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1351)
static void C_ccall f_1351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1340)
static void C_fcall f_1340(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_464)
static void C_ccall f_464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1157)
static void C_ccall f_1157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_467)
static void C_ccall f_467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1021)
static void C_ccall f_1021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_fcall f_1066(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_470)
static void C_ccall f_470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_476)
static void C_ccall f_476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_964)
static void C_ccall f_964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_479)
static void C_ccall f_479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_482)
static void C_ccall f_482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_928)
static void C_ccall f_928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_485)
static void C_ccall f_485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_488)
static void C_ccall f_488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_497)
static void C_ccall f_497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_853)
static void C_ccall f_853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_642)
static void C_fcall f_642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_818)
static void C_ccall f_818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_664)
static void C_ccall f_664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_707)
static void C_ccall f_707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_697)
static void C_ccall f_697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_503)
static void C_ccall f_503(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_509)
static void C_fcall f_509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_544)
static void C_fcall f_544(C_word t0,C_word t1) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_566)
static void C_ccall f_566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_523)
static void C_ccall f_523(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1504)
static void C_fcall trf_1504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1504(t0,t1);}

C_noret_decl(trf_1507)
static void C_fcall trf_1507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1507(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1507(t0,t1);}

C_noret_decl(trf_1749)
static void C_fcall trf_1749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1749(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1749(t0,t1,t2);}

C_noret_decl(trf_1701)
static void C_fcall trf_1701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1701(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1701(t0,t1,t2);}

C_noret_decl(trf_1313)
static void C_fcall trf_1313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1313(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1313(t0,t1,t2);}

C_noret_decl(trf_1340)
static void C_fcall trf_1340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1340(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1340(t0,t1);}

C_noret_decl(trf_1066)
static void C_fcall trf_1066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1066(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1066(t0,t1);}

C_noret_decl(trf_642)
static void C_fcall trf_642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_642(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_642(t0,t1,t2);}

C_noret_decl(trf_509)
static void C_fcall trf_509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_509(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_509(t0,t1,t2,t3,t4);}

C_noret_decl(trf_544)
static void C_fcall trf_544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_544(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_544(t0,t1);}

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
if(!C_demand_2(1238)){
C_save(t1);
C_rereclaim2(1238*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,105);
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
lf[15]=C_h_intern(&lf[15],8,"unboxing");
lf[16]=C_h_intern(&lf[16],6,"unsafe");
lf[17]=C_h_intern(&lf[17],18,"disable-interrupts");
lf[18]=C_h_intern(&lf[18],8,"no-trace");
lf[19]=C_h_intern(&lf[19],5,"block");
lf[20]=C_h_intern(&lf[20],11,"lambda-lift");
lf[21]=C_h_intern(&lf[21],14,"no-lambda-info");
lf[22]=C_h_intern(&lf[22],11,"debug-level");
lf[23]=C_h_intern(&lf[23],25,"\010compilercompiler-warning");
lf[24]=C_h_intern(&lf[24],5,"usage");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000 invalid debug level ~S - ignored");
lf[26]=C_h_intern(&lf[26],31,"\010compilervalid-compiler-options");
lf[27]=C_h_intern(&lf[27],45,"\010compilervalid-compiler-options-with-argument");
lf[28]=C_h_intern(&lf[28],4,"quit");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~s\047 option");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000&invalid compiler option `~a\047 - ignored");
lf[31]=C_h_intern(&lf[31],4,"conc");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[33]=C_h_intern(&lf[33],6,"append");
lf[34]=C_h_intern(&lf[34],4,"argv");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_h_intern(&lf[36],6,"remove");
lf[37]=C_h_intern(&lf[37],12,"string-split");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_h_intern(&lf[39],24,"get-environment-variable");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN_OPTIONS");
lf[41]=C_h_intern(&lf[41],16,"\003sysmacro-subset");
lf[42]=C_h_intern(&lf[42],28,"\003sysextend-macro-environment");
lf[43]=C_h_intern(&lf[43],20,"foreign-safe-lambda*");
lf[44]=C_h_intern(&lf[44],25,"\004coreforeign-safe-lambda*");
lf[45]=C_h_intern(&lf[45],10,"\003sysappend");
lf[46]=C_h_intern(&lf[46],18,"\003syser-transformer");
lf[47]=C_h_intern(&lf[47],19,"foreign-safe-lambda");
lf[48]=C_h_intern(&lf[48],24,"\004coreforeign-safe-lambda");
lf[49]=C_h_intern(&lf[49],15,"foreign-lambda*");
lf[50]=C_h_intern(&lf[50],20,"\004coreforeign-lambda*");
lf[51]=C_h_intern(&lf[51],14,"foreign-lambda");
lf[52]=C_h_intern(&lf[52],19,"\004coreforeign-lambda");
lf[53]=C_h_intern(&lf[53],17,"foreign-primitive");
lf[54]=C_h_intern(&lf[54],22,"\004coreforeign-primitive");
lf[55]=C_h_intern(&lf[55],23,"define-foreign-variable");
lf[56]=C_h_intern(&lf[56],28,"\004coredefine-foreign-variable");
lf[57]=C_h_intern(&lf[57],19,"define-foreign-type");
lf[58]=C_h_intern(&lf[58],24,"\004coredefine-foreign-type");
lf[59]=C_h_intern(&lf[59],15,"foreign-declare");
lf[60]=C_h_intern(&lf[60],12,"\004coredeclare");
lf[61]=C_h_intern(&lf[61],16,"\003syscheck-syntax");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[63]=C_h_intern(&lf[63],13,"foreign-value");
lf[64]=C_h_intern(&lf[64],14,"symbol->string");
lf[65]=C_h_intern(&lf[65],12,"syntax-error");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000*bad argument type - not a string or symbol");
lf[67]=C_h_intern(&lf[67],5,"begin");
lf[68]=C_h_intern(&lf[68],6,"gensym");
lf[69]=C_h_intern(&lf[69],5,"code_");
lf[70]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[71]=C_h_intern(&lf[71],12,"foreign-code");
lf[72]=C_h_intern(&lf[72],11,"\004coreinline");
lf[73]=C_h_intern(&lf[73],17,"get-output-string");
lf[74]=C_h_intern(&lf[74],7,"display");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012");
lf[76]=C_h_intern(&lf[76],18,"string-intersperse");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\005() { ");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\016static C_word ");
lf[80]=C_h_intern(&lf[80],18,"open-output-string");
lf[81]=C_h_intern(&lf[81],7,"declare");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[83]=C_h_intern(&lf[83],12,"let-location");
lf[84]=C_h_intern(&lf[84],17,"\004corelet-location");
lf[85]=C_h_intern(&lf[85],10,"fold-right");
lf[86]=C_h_intern(&lf[86],10,"append-map");
lf[87]=C_h_intern(&lf[87],3,"let");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000"
"\000\000\376\001\000\000\001_");
lf[89]=C_h_intern(&lf[89],15,"define-location");
lf[90]=C_h_intern(&lf[90],29,"\004coredefine-external-variable");
lf[91]=C_h_intern(&lf[91],9,"\004coreset!");
lf[92]=C_h_intern(&lf[92],9,"\003syserror");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[95]=C_h_intern(&lf[95],15,"define-external");
lf[96]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[97]=C_h_intern(&lf[97],5,"quote");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[99]=C_h_intern(&lf[99],29,"\004coreforeign-callback-wrapper");
lf[100]=C_h_intern(&lf[100],6,"lambda");
lf[101]=C_h_intern(&lf[101],6,"define");
lf[102]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376"
"\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[104]=C_h_intern(&lf[104],21,"\003sysmacro-environment");
C_register_lf2(lf,105,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_397,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k395 */
static void C_ccall f_397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_400,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k398 in k395 */
static void C_ccall f_400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_403,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_syntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k401 in k398 in k395 */
static void C_ccall f_403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k404 in k401 in k398 in k395 */
static void C_ccall f_406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_409,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_4_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_412,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_424,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_support_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_427,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_430,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_433,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_unboxing_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_syntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scrutinizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_driver_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_platform_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_backend_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_451,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_455,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#macro-environment");
((C_proc2)C_retrieve_symbol_proc(lf[104]))(2,*((C_word*)lf[104]+1),t2);}

/* k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_458,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1492,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1494,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1494,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1501,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("r37");
t7=t3;
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[97]);}

/* k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_1504(t4,C_i_stringp(t3));}
else{
t3=t2;
f_1504(t3,C_SCHEME_FALSE);}}

/* k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_1504(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1504,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1507,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=t1;
if(C_truep(t3)){
t4=t2;
f_1507(t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_1507(t5,C_i_symbolp(t4));}
else{
t4=t2;
f_1507(t4,C_SCHEME_FALSE);}}}

/* k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_1507(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1507,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1513,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t2,lf[95],((C_word*)t0)[5],lf[96]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t2,lf[95],((C_word*)t0)[5],lf[102]);}
else{
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t2,lf[95],((C_word*)t0)[5],lf[103]);}}}

/* k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1604,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[5])?C_i_cadr(((C_word*)t0)[4]):C_i_car(((C_word*)t0)[4]));
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("r37");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[101]);}

/* k1615 in k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1617,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[7]);
t3=C_i_car(((C_word*)t0)[7]);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[97],t4);
t6=(C_truep(((C_word*)t0)[6])?C_i_car(((C_word*)t0)[5]):lf[98]);
t7=(C_truep(((C_word*)t0)[6])?C_i_caddr(((C_word*)t0)[5]):C_i_cadr(((C_word*)t0)[5]));
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,lf[97],t8);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=t2,a[9]=t5,a[10]=t6,a[11]=t9,tmp=(C_word)a,a+=12,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1749,a[2]=t11,a[3]=t16,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t18=((C_word*)t16)[1];
f_1749(t18,t14,((C_word*)t0)[3]);}

/* loop75 in k1615 in k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1749,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
C_trace("loop7588");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
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

/* k1745 in k1615 in k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1747,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[97],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
C_trace("r37");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[100]);}

/* k1675 in k1745 in k1615 in k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1677(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1677,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1685,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1701,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1701(t10,t6,((C_word*)t0)[2]);}

/* loop99 in k1675 in k1745 in k1615 in k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_1701(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1701,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
C_trace("loop99112");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=C_slot(t2,C_fix(1));
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

/* k1683 in k1675 in k1745 in k1615 in k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(C_truep(((C_word*)t0)[3])?C_i_cdddr(((C_word*)t0)[2]):C_i_cddr(((C_word*)t0)[2]));
C_trace("##sys#append");
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k1687 in k1683 in k1675 in k1745 in k1615 in k1602 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1689(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1689,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[9],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[6],t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[5],t7);
t9=C_a_i_cons(&a,2,lf[99],t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_a_i_cons(&a,2,((C_word*)t0)[4],t10);
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_cons(&a,2,((C_word*)t0)[2],t11));}

/* k1511 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1513,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1523,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("r37");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[67]);}

/* k1521 in k1511 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1523,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_cons(&a,2,lf[56],t4);
t6=C_i_cadr(((C_word*)t0)[4]);
t7=C_a_i_cons(&a,2,C_SCHEME_TRUE,C_SCHEME_END_OF_LIST);
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,((C_word*)t0)[3],t8);
t10=C_a_i_cons(&a,2,lf[90],t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1543,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t12=C_i_cddr(((C_word*)t0)[4]);
if(C_truep(C_i_pairp(t12))){
t13=C_i_caddr(((C_word*)t0)[4]);
t14=C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=C_a_i_cons(&a,2,((C_word*)t0)[3],t14);
t16=C_a_i_cons(&a,2,lf[91],t15);
t17=C_a_i_cons(&a,2,t16,C_SCHEME_END_OF_LIST);
C_trace("##sys#append");
t18=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t11,t17,C_SCHEME_END_OF_LIST);}
else{
C_trace("##sys#append");
t13=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* k1541 in k1521 in k1511 in k1505 in k1502 in k1499 in a1493 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1543,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k1490 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[95],C_SCHEME_END_OF_LIST,t1);}

/* k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1359,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1361,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1361,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1365,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t5,lf[89],t2,lf[94]);}

/* k1363 in a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1365,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=C_i_cdddr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_1377(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_1377(2,t7,C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[93],t4);}}}

/* k1375 in k1363 in a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1380,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1469,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("gensym");
((C_proc2)C_retrieve_symbol_proc(lf[68]))(2,*((C_word*)lf[68]+1),t3);}

/* k1467 in k1375 in k1363 in a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("r123");
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1378 in k1375 in k1363 in a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1387,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("r123");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[67]);}

/* k1385 in k1378 in k1375 in k1363 in a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[64]+1)))(3,*((C_word*)lf[64]+1),t2,((C_word*)t0)[4]);}

/* k1463 in k1385 in k1378 in k1375 in k1363 in a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1465(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1465,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=C_a_i_cons(&a,2,lf[56],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,C_SCHEME_FALSE,t6);
t8=C_a_i_cons(&a,2,((C_word*)t0)[7],t7);
t9=C_a_i_cons(&a,2,((C_word*)t0)[6],t8);
t10=C_a_i_cons(&a,2,lf[90],t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t12=C_i_car(((C_word*)t0)[2]);
t13=C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
t14=C_a_i_cons(&a,2,((C_word*)t0)[6],t13);
t15=C_a_i_cons(&a,2,lf[91],t14);
t16=C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
C_trace("##sys#append");
t17=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t11,t16,C_SCHEME_END_OF_LIST);}
else{
C_trace("##sys#append");
t12=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* k1405 in k1463 in k1385 in k1378 in k1375 in k1363 in a1360 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1407,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k1357 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[89],C_SCHEME_END_OF_LIST,t1);}

/* k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1177,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1177,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1181,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t5,lf[83],t2,lf[88]);}

/* k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1181,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1190,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("r144");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[87]);}

/* k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1190,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1193,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1313,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1313(t10,t6,((C_word*)t0)[4]);}

/* loop153 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_1313(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1313,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1340,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1351,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g169170");
t6=t3;
f_1340(t6,t4);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1349 in loop153 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1351(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1351,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop153166");
t6=((C_word*)((C_word*)t0)[4])[1];
f_1313(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop153166");
t6=((C_word*)((C_word*)t0)[4])[1];
f_1313(t6,((C_word*)t0)[3],t5);}}

/* g169 in loop153 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_1340(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1340,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1348,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("gensym");
((C_proc2)C_retrieve_symbol_proc(lf[68]))(2,*((C_word*)lf[68]+1),t2);}

/* k1346 in g169 in loop153 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("r144");
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1191 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1289,tmp=(C_word)a,a+=2,tmp);
C_trace("append-map");
((C_proc5)C_retrieve_symbol_proc(lf[86]))(5,*((C_word*)lf[86]+1),t2,t3,((C_word*)t0)[3],t1);}

/* a1288 in k1191 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1289,4,t0,t1,t2,t3);}
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cddr(t2);
t6=C_a_i_cons(&a,2,t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,1,t6));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k1202 in k1191 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1212,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1214,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1287,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("##sys#append");
t5=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1285 in k1202 in k1191 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1287,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
C_trace("fold-right");
((C_proc6)C_retrieve_symbol_proc(lf[85]))(6,*((C_word*)lf[85]+1),((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1213 in k1202 in k1191 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_1214,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t3,t9);
t11=C_a_i_cons(&a,2,t8,t10);
t12=C_a_i_cons(&a,2,t7,t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_cons(&a,2,lf[84],t12));}
else{
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t8,t9);
t11=C_a_i_cons(&a,2,t7,t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_a_i_cons(&a,2,lf[84],t11));}}

/* k1210 in k1202 in k1191 in k1188 in k1179 in a1176 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1212,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k1173 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[83],C_SCHEME_END_OF_LIST,t1);}

/* k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1089,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1091,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1091,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1095,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t5,lf[71],t2,lf[82]);}

/* k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("gensym");
((C_proc3)C_retrieve_symbol_proc(lf[68]))(3,*((C_word*)lf[68]+1),t2,lf[69]);}

/* k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("r198");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[67]);}

/* k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1129,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("r198");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[81]);}

/* k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[80]))(2,*((C_word*)lf[80]+1),t2);}

/* k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1148,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[74]+1)))(4,*((C_word*)lf[74]+1),t2,lf[79],t1);}

/* k1146 in k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[74]+1)))(4,*((C_word*)lf[74]+1),t2,((C_word*)t0)[6],((C_word*)t0)[3]);}

/* k1149 in k1146 in k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[74]+1)))(4,*((C_word*)lf[74]+1),t2,lf[78],((C_word*)t0)[3]);}

/* k1152 in k1149 in k1146 in k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1157,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1167,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[2]);
C_trace("string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[76]))(4,*((C_word*)lf[76]+1),t3,t4,lf[77]);}

/* k1165 in k1152 in k1149 in k1146 in k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[74]+1)))(4,*((C_word*)lf[74]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1155 in k1152 in k1149 in k1146 in k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[74]+1)))(4,*((C_word*)lf[74]+1),t2,lf[75],((C_word*)t0)[2]);}

/* k1158 in k1155 in k1152 in k1149 in k1146 in k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1163,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[73]))(3,*((C_word*)lf[73]+1),t2,((C_word*)t0)[2]);}

/* k1161 in k1158 in k1155 in k1152 in k1149 in k1146 in k1143 in k1127 in k1103 in k1096 in k1093 in a1090 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1163(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1163,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,lf[59],t2);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,lf[72],t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t5,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_cons(&a,2,((C_word*)t0)[2],t9));}

/* k1087 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[71],C_SCHEME_END_OF_LIST,t1);}

/* k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1019,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1021,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a1020 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1021,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1025,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t5,lf[63],t2,lf[70]);}

/* k1023 in a1020 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("gensym");
((C_proc3)C_retrieve_symbol_proc(lf[68]))(3,*((C_word*)lf[68]+1),t2,lf[69]);}

/* k1026 in k1023 in a1020 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1028,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1038,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("r217");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[67]);}

/* k1036 in k1026 in k1023 in a1020 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1038,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1066,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1070,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
t5=t3;
f_1066(t5,C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST));}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
C_trace("symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[64]+1)))(3,*((C_word*)lf[64]+1),t4,((C_word*)t0)[2]);}
else{
C_trace("syntax-error");
((C_proc5)C_retrieve_symbol_proc(lf[65]))(5,*((C_word*)lf[65]+1),t4,lf[63],lf[66],((C_word*)t0)[2]);}}}

/* k1068 in k1036 in k1026 in k1023 in a1020 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1070,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1066(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k1064 in k1036 in k1026 in k1023 in a1020 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_1066(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1066,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_cons(&a,2,lf[56],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_cons(&a,2,((C_word*)t0)[2],t6));}

/* k1017 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[63],C_SCHEME_END_OF_LIST,t1);}

/* k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_990,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_992,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a991 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_992,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_996,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#check-syntax");
((C_proc5)C_retrieve_symbol_proc(lf[61]))(5,*((C_word*)lf[61]+1),t5,lf[59],t2,lf[62]);}

/* k994 in a991 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
C_trace("##sys#append");
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_END_OF_LIST);}

/* k1009 in k994 in a991 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1011,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,lf[60],t3));}

/* k988 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[59],C_SCHEME_END_OF_LIST,t1);}

/* k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_974,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a973 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_974,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_982,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
C_trace("##sys#append");
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k980 in a973 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_982,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[58],t1));}

/* k970 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[57],C_SCHEME_END_OF_LIST,t1);}

/* k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_954,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_956,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a955 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_956,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_964,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
C_trace("##sys#append");
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k962 in a955 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_964,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[56],t1));}

/* k952 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[55],C_SCHEME_END_OF_LIST,t1);}

/* k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_936,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_938,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a937 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_938(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_938,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_946,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
C_trace("##sys#append");
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k944 in a937 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_946,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[54],t1));}

/* k934 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[53],C_SCHEME_END_OF_LIST,t1);}

/* k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_918,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_920,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a919 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_920(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_920,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_928,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
C_trace("##sys#append");
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k926 in a919 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_928,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[52],t1));}

/* k916 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[51],C_SCHEME_END_OF_LIST,t1);}

/* k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_900,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_902,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a901 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_902,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_910,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
C_trace("##sys#append");
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k908 in a901 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_910,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[50],t1));}

/* k898 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[49],C_SCHEME_END_OF_LIST,t1);}

/* k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_882,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_884,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a883 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_884,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_892,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
C_trace("##sys#append");
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k890 in a883 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_892,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[48],t1));}

/* k880 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[47],C_SCHEME_END_OF_LIST,t1);}

/* k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_864,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_866,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t3,t4);}

/* a865 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_866,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_i_cdr(t2);
C_trace("##sys#append");
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,C_SCHEME_END_OF_LIST);}

/* k872 in a865 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_874,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,lf[44],t1));}

/* k862 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#extend-macro-environment");
((C_proc5)C_retrieve_symbol_proc(lf[42]))(5,*((C_word*)lf[42]+1),((C_word*)t0)[2],lf[43],C_SCHEME_END_OF_LIST,t1);}

/* k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_497,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#macro-subset");
((C_proc3)C_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t2,((C_word*)t0)[2]);}

/* k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_497(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_497,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! chicken-ffi-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_835,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_845,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_853,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_857,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm: 48   get-environment-variable");
((C_proc3)C_retrieve_symbol_proc(lf[39]))(3,*((C_word*)lf[39]+1),t7,lf[40]);}

/* k855 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("chicken.scm: 48   string-split");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),((C_word*)t0)[2],t2);}
else{
C_trace("chicken.scm: 48   string-split");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),((C_word*)t0)[2],lf[38]);}}

/* k851 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 46   remove");
((C_proc4)C_retrieve_symbol_proc(lf[36]))(4,*((C_word*)lf[36]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a844 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_845(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_845,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_string_equal_p(t2,lf[35]));}

/* k833 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_843,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm: 49   argv");
((C_proc2)C_retrieve_symbol_proc(lf[34]))(2,*((C_word*)lf[34]+1),t2);}

/* k841 in k833 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(t1);
C_trace("chicken.scm: 45   append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[33]+1)))(4,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_501,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! compiler-arguments ...) */,t1);
t3=C_mutate((C_word*)lf[2]+1 /* (set! process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_503,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_618,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_630,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t4,t5,t6);}

/* a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_630,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_634,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_642,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_642(t9,t5,((C_word*)t4)[1]);}

/* loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_642(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_642,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=C_i_cdr(t2);
t5=C_eqp(lf[10],t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_664,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t4);
C_trace("chicken.scm: 82   string->number");
C_string_to_number(3,0,t6,t7);}
else{
t6=C_eqp(lf[22],t3);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_740,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=C_i_car(t4);
C_trace("chicken.scm: 107  string->number");
C_string_to_number(3,0,t7,t8);}
else{
if(C_truep(C_i_memq(t3,C_retrieve(lf[26])))){
C_trace("chicken.scm: 114  loop");
t16=t1;
t17=t4;
t1=t16;
t2=t17;
goto loop;}
else{
if(C_truep(C_i_memq(t3,C_retrieve(lf[27])))){
if(C_truep(C_i_pairp(t4))){
t7=C_i_cdr(t4);
C_trace("chicken.scm: 117  loop");
t16=t1;
t17=t7;
t1=t16;
t2=t17;
goto loop;}
else{
C_trace("chicken.scm: 118  quit");
((C_proc4)C_retrieve_symbol_proc(lf[28]))(4,*((C_word*)lf[28]+1),t1,lf[29],t3);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_818,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_825,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
C_trace("chicken.scm: 120  compiler-warning");
((C_proc5)C_retrieve_symbol_proc(lf[23]))(5,*((C_word*)lf[23]+1),t7,lf[24],lf[30],t3);}
else{
C_trace("chicken.scm: 122  conc");
((C_proc4)C_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),t8,lf[32],t3);}}}}}}}

/* k823 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 120  compiler-warning");
((C_proc5)C_retrieve_symbol_proc(lf[23]))(5,*((C_word*)lf[23]+1),((C_word*)t0)[2],lf[24],lf[30],t1);}

/* k816 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 123  loop");
t2=((C_word*)((C_word*)t0)[4])[1];
f_642(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k738 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_740(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
switch(t1){
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 109  cons*");
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t3,lf[21],lf[18],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(1):
t3=C_a_i_cons(&a,2,lf[18],((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 113  loop");
t6=((C_word*)((C_word*)t0)[4])[1];
f_642(t6,((C_word*)t0)[3],t5);
case C_fix(2):
t3=C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 113  loop");
t4=((C_word*)((C_word*)t0)[4])[1];
f_642(t4,((C_word*)t0)[3],t3);
default:
t3=C_i_car(((C_word*)t0)[5]);
C_trace("chicken.scm: 112  compiler-warning");
((C_proc5)C_retrieve_symbol_proc(lf[23]))(5,*((C_word*)lf[23]+1),t2,lf[24],lf[25],t3);}}

/* k755 in k738 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 113  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_642(t4,((C_word*)t0)[2],t3);}

/* k741 in k738 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 113  loop");
t3=((C_word*)((C_word*)t0)[3])[1];
f_642(t3,((C_word*)t0)[2],t2);}

/* k662 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_664(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_664,2,t0,t1);}
switch(t1){
case C_fix(0):
t2=C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 105  loop");
t3=((C_word*)((C_word*)t0)[4])[1];
f_642(t3,((C_word*)t0)[3],t2);
case C_fix(1):
t2=C_a_i_cons(&a,2,lf[11],((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 105  loop");
t5=((C_word*)((C_word*)t0)[4])[1];
f_642(t5,((C_word*)t0)[3],t4);
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_697,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 90   cons*");
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[11],lf[13],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 93   cons*");
((C_proc6)C_retrieve_symbol_proc(lf[12]))(6,*((C_word*)lf[12]+1),t2,lf[11],lf[13],lf[14],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_717,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 96   cons*");
((C_proc8)C_retrieve_symbol_proc(lf[12]))(8,*((C_word*)lf[12]+1),t2,lf[11],lf[13],lf[14],lf[15],lf[16],((C_word*)((C_word*)t0)[2])[1]);
default:
t2=t1;
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(5)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_727,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("chicken.scm: 101  cons*");
((C_proc12)C_retrieve_symbol_proc(lf[12]))(12,*((C_word*)lf[12]+1),t3,lf[17],lf[18],lf[16],lf[19],lf[11],lf[20],lf[21],lf[13],lf[15],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=C_i_cdr(((C_word*)t0)[5]);
C_trace("chicken.scm: 105  loop");
t4=((C_word*)((C_word*)t0)[4])[1];
f_642(t4,((C_word*)t0)[3],t3);}}}

/* k725 in k662 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 105  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_642(t4,((C_word*)t0)[2],t3);}

/* k715 in k662 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 105  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_642(t4,((C_word*)t0)[2],t3);}

/* k705 in k662 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 105  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_642(t4,((C_word*)t0)[2],t3);}

/* k695 in k662 in loop in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_cdr(((C_word*)t0)[4]);
C_trace("chicken.scm: 105  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_642(t4,((C_word*)t0)[2],t3);}

/* k632 in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_637,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t2,C_retrieve(lf[9]),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k635 in k632 in a629 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 125  exit");
((C_proc2)C_retrieve_symbol_proc(lf[8]))(2,*((C_word*)lf[8]+1),((C_word*)t0)[2]);}

/* a617 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_622,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm: 76   user-options-pass");
((C_proc2)C_retrieve_symbol_proc(lf[7]))(2,*((C_word*)lf[7]+1),t2);}

/* k620 in a617 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("g325326");
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_retrieve(lf[1]));}
else{
t2=C_retrieve(lf[2]);
C_trace("g325326");
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_retrieve(lf[1]));}}

/* k608 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_616,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#implicit-exit-handler");
((C_proc2)C_retrieve_symbol_proc(lf[6]))(2,*((C_word*)lf[6]+1),t3);}

/* k614 in k608 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k611 in k608 in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* ##compiler#process-command-line in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_503(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_503,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_509,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_509(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in ##compiler#process-command-line in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_509,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_523,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("chicken.scm: 61   reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[3]+1)))(3,*((C_word*)lf[3]+1),t5,t3);}
else{
t5=C_i_car(t2);
t6=C_i_string_length(t5);
t7=C_i_string_ref(t5,C_fix(0));
t8=C_eqp(C_make_character(45),t7);
t9=(C_truep(t8)?C_fixnum_greaterp(t6,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_544,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t6,C_fix(1)))){
t11=C_i_string_ref(t5,C_fix(1));
t12=t10;
f_544(t12,C_eqp(C_make_character(58),t11));}
else{
t11=t10;
f_544(t11,C_SCHEME_FALSE);}}
else{
if(C_truep(t4)){
t10=C_i_cdr(t2);
t11=C_a_i_cons(&a,2,t5,t3);
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
t10=C_i_cdr(t2);
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

/* k542 in loop in ##compiler#process-command-line in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_fcall f_544(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_544,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[8]);
C_trace("chicken.scm: 67   loop");
t3=((C_word*)((C_word*)t0)[7])[1];
f_509(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=C_i_cdr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_566,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_570,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("chicken.scm: 68   substring");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),t4,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]);}}

/* k568 in k542 in loop in ##compiler#process-command-line in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 68   string->symbol");
((C_proc3)C_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),((C_word*)t0)[2],t1);}

/* k564 in k542 in loop in ##compiler#process-command-line in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_566,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
C_trace("chicken.scm: 68   loop");
t3=((C_word*)((C_word*)t0)[5])[1];
f_509(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k521 in loop in ##compiler#process-command-line in k499 in k495 in k492 in k489 in k486 in k483 in k480 in k477 in k474 in k471 in k468 in k465 in k462 in k459 in k456 in k453 in k449 in k446 in k443 in k440 in k437 in k434 in k431 in k428 in k425 in k422 in k419 in k416 in k413 in k410 in k407 in k404 in k401 in k398 in k395 */
static void C_ccall f_523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("chicken.scm: 61   values");
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[152] = {
{"toplevel:chicken_scm",(void*)C_toplevel},
{"f_397:chicken_scm",(void*)f_397},
{"f_400:chicken_scm",(void*)f_400},
{"f_403:chicken_scm",(void*)f_403},
{"f_406:chicken_scm",(void*)f_406},
{"f_409:chicken_scm",(void*)f_409},
{"f_412:chicken_scm",(void*)f_412},
{"f_415:chicken_scm",(void*)f_415},
{"f_418:chicken_scm",(void*)f_418},
{"f_421:chicken_scm",(void*)f_421},
{"f_424:chicken_scm",(void*)f_424},
{"f_427:chicken_scm",(void*)f_427},
{"f_430:chicken_scm",(void*)f_430},
{"f_433:chicken_scm",(void*)f_433},
{"f_436:chicken_scm",(void*)f_436},
{"f_439:chicken_scm",(void*)f_439},
{"f_442:chicken_scm",(void*)f_442},
{"f_445:chicken_scm",(void*)f_445},
{"f_448:chicken_scm",(void*)f_448},
{"f_451:chicken_scm",(void*)f_451},
{"f_455:chicken_scm",(void*)f_455},
{"f_1494:chicken_scm",(void*)f_1494},
{"f_1501:chicken_scm",(void*)f_1501},
{"f_1504:chicken_scm",(void*)f_1504},
{"f_1507:chicken_scm",(void*)f_1507},
{"f_1604:chicken_scm",(void*)f_1604},
{"f_1617:chicken_scm",(void*)f_1617},
{"f_1749:chicken_scm",(void*)f_1749},
{"f_1747:chicken_scm",(void*)f_1747},
{"f_1677:chicken_scm",(void*)f_1677},
{"f_1701:chicken_scm",(void*)f_1701},
{"f_1685:chicken_scm",(void*)f_1685},
{"f_1689:chicken_scm",(void*)f_1689},
{"f_1513:chicken_scm",(void*)f_1513},
{"f_1523:chicken_scm",(void*)f_1523},
{"f_1543:chicken_scm",(void*)f_1543},
{"f_1492:chicken_scm",(void*)f_1492},
{"f_458:chicken_scm",(void*)f_458},
{"f_1361:chicken_scm",(void*)f_1361},
{"f_1365:chicken_scm",(void*)f_1365},
{"f_1377:chicken_scm",(void*)f_1377},
{"f_1469:chicken_scm",(void*)f_1469},
{"f_1380:chicken_scm",(void*)f_1380},
{"f_1387:chicken_scm",(void*)f_1387},
{"f_1465:chicken_scm",(void*)f_1465},
{"f_1407:chicken_scm",(void*)f_1407},
{"f_1359:chicken_scm",(void*)f_1359},
{"f_461:chicken_scm",(void*)f_461},
{"f_1177:chicken_scm",(void*)f_1177},
{"f_1181:chicken_scm",(void*)f_1181},
{"f_1190:chicken_scm",(void*)f_1190},
{"f_1313:chicken_scm",(void*)f_1313},
{"f_1351:chicken_scm",(void*)f_1351},
{"f_1340:chicken_scm",(void*)f_1340},
{"f_1348:chicken_scm",(void*)f_1348},
{"f_1193:chicken_scm",(void*)f_1193},
{"f_1289:chicken_scm",(void*)f_1289},
{"f_1204:chicken_scm",(void*)f_1204},
{"f_1287:chicken_scm",(void*)f_1287},
{"f_1214:chicken_scm",(void*)f_1214},
{"f_1212:chicken_scm",(void*)f_1212},
{"f_1175:chicken_scm",(void*)f_1175},
{"f_464:chicken_scm",(void*)f_464},
{"f_1091:chicken_scm",(void*)f_1091},
{"f_1095:chicken_scm",(void*)f_1095},
{"f_1098:chicken_scm",(void*)f_1098},
{"f_1105:chicken_scm",(void*)f_1105},
{"f_1129:chicken_scm",(void*)f_1129},
{"f_1145:chicken_scm",(void*)f_1145},
{"f_1148:chicken_scm",(void*)f_1148},
{"f_1151:chicken_scm",(void*)f_1151},
{"f_1154:chicken_scm",(void*)f_1154},
{"f_1167:chicken_scm",(void*)f_1167},
{"f_1157:chicken_scm",(void*)f_1157},
{"f_1160:chicken_scm",(void*)f_1160},
{"f_1163:chicken_scm",(void*)f_1163},
{"f_1089:chicken_scm",(void*)f_1089},
{"f_467:chicken_scm",(void*)f_467},
{"f_1021:chicken_scm",(void*)f_1021},
{"f_1025:chicken_scm",(void*)f_1025},
{"f_1028:chicken_scm",(void*)f_1028},
{"f_1038:chicken_scm",(void*)f_1038},
{"f_1070:chicken_scm",(void*)f_1070},
{"f_1066:chicken_scm",(void*)f_1066},
{"f_1019:chicken_scm",(void*)f_1019},
{"f_470:chicken_scm",(void*)f_470},
{"f_992:chicken_scm",(void*)f_992},
{"f_996:chicken_scm",(void*)f_996},
{"f_1011:chicken_scm",(void*)f_1011},
{"f_990:chicken_scm",(void*)f_990},
{"f_473:chicken_scm",(void*)f_473},
{"f_974:chicken_scm",(void*)f_974},
{"f_982:chicken_scm",(void*)f_982},
{"f_972:chicken_scm",(void*)f_972},
{"f_476:chicken_scm",(void*)f_476},
{"f_956:chicken_scm",(void*)f_956},
{"f_964:chicken_scm",(void*)f_964},
{"f_954:chicken_scm",(void*)f_954},
{"f_479:chicken_scm",(void*)f_479},
{"f_938:chicken_scm",(void*)f_938},
{"f_946:chicken_scm",(void*)f_946},
{"f_936:chicken_scm",(void*)f_936},
{"f_482:chicken_scm",(void*)f_482},
{"f_920:chicken_scm",(void*)f_920},
{"f_928:chicken_scm",(void*)f_928},
{"f_918:chicken_scm",(void*)f_918},
{"f_485:chicken_scm",(void*)f_485},
{"f_902:chicken_scm",(void*)f_902},
{"f_910:chicken_scm",(void*)f_910},
{"f_900:chicken_scm",(void*)f_900},
{"f_488:chicken_scm",(void*)f_488},
{"f_884:chicken_scm",(void*)f_884},
{"f_892:chicken_scm",(void*)f_892},
{"f_882:chicken_scm",(void*)f_882},
{"f_491:chicken_scm",(void*)f_491},
{"f_866:chicken_scm",(void*)f_866},
{"f_874:chicken_scm",(void*)f_874},
{"f_864:chicken_scm",(void*)f_864},
{"f_494:chicken_scm",(void*)f_494},
{"f_497:chicken_scm",(void*)f_497},
{"f_857:chicken_scm",(void*)f_857},
{"f_853:chicken_scm",(void*)f_853},
{"f_845:chicken_scm",(void*)f_845},
{"f_835:chicken_scm",(void*)f_835},
{"f_843:chicken_scm",(void*)f_843},
{"f_501:chicken_scm",(void*)f_501},
{"f_630:chicken_scm",(void*)f_630},
{"f_642:chicken_scm",(void*)f_642},
{"f_825:chicken_scm",(void*)f_825},
{"f_818:chicken_scm",(void*)f_818},
{"f_740:chicken_scm",(void*)f_740},
{"f_757:chicken_scm",(void*)f_757},
{"f_743:chicken_scm",(void*)f_743},
{"f_664:chicken_scm",(void*)f_664},
{"f_727:chicken_scm",(void*)f_727},
{"f_717:chicken_scm",(void*)f_717},
{"f_707:chicken_scm",(void*)f_707},
{"f_697:chicken_scm",(void*)f_697},
{"f_634:chicken_scm",(void*)f_634},
{"f_637:chicken_scm",(void*)f_637},
{"f_618:chicken_scm",(void*)f_618},
{"f_622:chicken_scm",(void*)f_622},
{"f_610:chicken_scm",(void*)f_610},
{"f_616:chicken_scm",(void*)f_616},
{"f_613:chicken_scm",(void*)f_613},
{"f_503:chicken_scm",(void*)f_503},
{"f_509:chicken_scm",(void*)f_509},
{"f_544:chicken_scm",(void*)f_544},
{"f_570:chicken_scm",(void*)f_570},
{"f_566:chicken_scm",(void*)f_566},
{"f_523:chicken_scm",(void*)f_523},
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
