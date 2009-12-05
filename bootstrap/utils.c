/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:25
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: utils.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file utils.c
   unit: utils
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_13_toplevel)
C_externimport void C_ccall C_srfi_13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[64];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,115,121,115,116,101,109,42,32,102,115,116,114,49,49,32,46,32,97,114,103,115,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,31),40,102,111,114,45,101,97,99,104,45,108,105,110,101,32,112,114,111,99,49,57,32,46,32,112,111,114,116,50,48,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,6),40,97,50,57,52,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,11),40,103,53,48,32,97,114,103,53,50,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,52,51,32,103,52,55,52,57,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,28),40,102,111,114,45,101,97,99,104,45,97,114,103,118,45,108,105,110,101,32,116,104,117,110,107,51,48,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,6),40,97,51,54,49,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,97,108,108,32,46,32,102,105,108,101,53,55,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,57,54,32,103,49,48,54,49,49,48,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,20),40,113,115,32,115,116,114,55,55,32,46,32,116,109,112,55,54,55,56,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,53,55,50,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,12),40,97,53,54,54,32,101,120,49,56,51,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,97,53,56,55,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,97,53,57,57,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,19),40,97,53,57,51,32,46,32,97,114,103,115,49,55,56,49,56,54,41,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,97,53,56,49,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,14),40,97,53,54,48,32,107,49,55,55,49,56,50,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,97,54,50,57,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,12),40,97,54,50,51,32,101,120,49,54,55,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,54,51,56,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,54,53,48,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,19),40,97,54,52,52,32,46,32,97,114,103,115,49,54,50,49,54,56,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,97,54,51,50,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,97,54,49,55,32,107,49,54,49,49,54,54,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,97,54,48,56,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,97,55,48,54,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,97,55,48,57,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,38),40,99,111,109,112,105,108,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,49,51,56,32,46,32,116,109,112,49,51,55,49,51,57,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_209)
static void C_ccall f_209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_212)
static void C_ccall f_212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_215)
static void C_ccall f_215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_218)
static void C_ccall f_218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_221)
static void C_ccall f_221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_508)
static void C_ccall f_508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_515)
static void C_ccall f_515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_523)
static void C_ccall f_523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_707)
static void C_ccall f_707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_529)
static void C_ccall f_529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_541)
static void C_ccall f_541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_663)
static void C_ccall f_663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_691)
static void C_ccall f_691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_667)
static void C_ccall f_667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_671)
static void C_ccall f_671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_675)
static void C_ccall f_675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_544)
static void C_ccall f_544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_651)
static void C_ccall f_651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_639)
static void C_ccall f_639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_624)
static void C_ccall f_624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_547)
static void C_ccall f_547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_582)
static void C_ccall f_582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_594)
static void C_ccall f_594(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_594)
static void C_ccall f_594r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_600)
static void C_ccall f_600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_588)
static void C_ccall f_588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_592)
static void C_ccall f_592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_573)
static void C_ccall f_573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_387)
static void C_ccall f_387(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_387)
static void C_ccall f_387r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_420)
static void C_ccall f_420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_422)
static void C_fcall f_422(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_471)
static void C_fcall f_471(C_word t0,C_word t1) C_noret;
C_noret_decl(f_416)
static void C_ccall f_416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_348)
static void C_ccall f_348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_354)
static void C_ccall f_354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_362)
static void C_ccall f_362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_277)
static void C_ccall f_277(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_302)
static void C_ccall f_302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_316)
static void C_fcall f_316(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_331)
static void C_ccall f_331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_324)
static void C_fcall f_324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_295)
static void C_ccall f_295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_241)
static void C_ccall f_241(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_241)
static void C_ccall f_241r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_248)
static void C_ccall f_248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_253)
static void C_fcall f_253(C_word t0,C_word t1) C_noret;
C_noret_decl(f_257)
static void C_ccall f_257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_266)
static void C_ccall f_266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_223)
static void C_ccall f_223(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_223)
static void C_ccall f_223r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_227)
static void C_ccall f_227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_230)
static void C_ccall f_230(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_422)
static void C_fcall trf_422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_422(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_422(t0,t1,t2);}

C_noret_decl(trf_471)
static void C_fcall trf_471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_471(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_471(t0,t1);}

C_noret_decl(trf_316)
static void C_fcall trf_316(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_316(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_316(t0,t1,t2);}

C_noret_decl(trf_324)
static void C_fcall trf_324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_324(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_324(t0,t1,t2);}

C_noret_decl(trf_253)
static void C_fcall trf_253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_253(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_253(t0,t1);}

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
C_utils_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("utils_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(538)){
C_save(t1);
C_rereclaim2(538*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,64);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],7,"sprintf");
lf[3]=C_h_intern(&lf[3],6,"system");
lf[4]=C_h_intern(&lf[4],7,"system*");
lf[5]=C_h_intern(&lf[5],9,"\003syserror");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\0003shell invocation failed with non-zero return status");
lf[7]=C_h_intern(&lf[7],9,"read-line");
lf[8]=C_h_intern(&lf[8],13,"for-each-line");
lf[9]=C_h_intern(&lf[9],18,"\003sysstandard-input");
lf[10]=C_h_intern(&lf[10],14,"\003syscheck-port");
lf[11]=C_h_intern(&lf[11],18,"for-each-argv-line");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[13]=C_h_intern(&lf[13],20,"with-input-from-file");
lf[14]=C_h_intern(&lf[14],22,"command-line-arguments");
lf[15]=C_h_intern(&lf[15],8,"read-all");
lf[16]=C_h_intern(&lf[16],20,"\003sysread-string/port");
lf[17]=C_h_intern(&lf[17],11,"read-string");
lf[18]=C_h_intern(&lf[18],5,"port\077");
lf[19]=C_h_intern(&lf[19],2,"qs");
lf[20]=C_h_intern(&lf[20],7,"mingw32");
lf[21]=C_h_intern(&lf[21],4,"msvc");
lf[22]=C_h_intern(&lf[22],13,"string-append");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\002\047\047");
lf[26]=C_h_intern(&lf[26],18,"string-concatenate");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000#\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000`\376\003\000\000\002\376\377\012\000\000\264\376\003\000\000\002\376\377\012\000\000~\376\003\000\000\002\376\377\012\000\000&\376\003\000"
"\000\002\376\377\012\000\000%\376\003\000\000\002\376\377\012\000\000$\376\003\000\000\002\376\377\012\000\000!\376\003\000\000\002\376\377\012\000\000*\376\003\000\000\002\376\377\012\000\000;\376\003\000\000\002\376\377\012\000\000<\376\003\000\000\002\376\377\012\000\000>\376\003\000\000\002\376"
"\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000(\376\003\000\000\002\376\377\012\000\000)\376\003\000\000\002\376\377\012\000\000[\376\003\000\000\002\376\377\012\000\000]\376\003\000\000\002\376\377\012\000\000{\376\003\000\000\002\376\377\012\000\000}\376\377\016");
lf[28]=C_h_intern(&lf[28],16,"\003sysstring->list");
lf[29]=C_h_intern(&lf[29],14,"build-platform");
lf[30]=C_h_intern(&lf[30],20,"compile-file-options");
lf[31]=C_h_intern(&lf[31],4,"load");
lf[32]=C_h_intern(&lf[32],12,"compile-file");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[34]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007mingw32\376\003\000\000\002\376\001\000\000\004msvc\376\377\016");
lf[35]=C_h_intern(&lf[35],5,"abort");
lf[36]=C_h_intern(&lf[36],12,"delete-file*");
lf[37]=C_h_intern(&lf[37],22,"with-exception-handler");
lf[38]=C_h_intern(&lf[38],30,"call-with-current-continuation");
lf[39]=C_h_intern(&lf[39],7,"on-exit");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\025~a~a -s ~a ~a -o ~a~a");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[45]=C_h_intern(&lf[45],18,"string-intersperse");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[47]=C_h_intern(&lf[47],6,"append");
lf[48]=C_h_intern(&lf[48],5,"print");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\014; compiling ");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[51]=C_h_intern(&lf[51],21,"create-temporary-file");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[53]=C_h_intern(&lf[53],12,"file-exists\077");
lf[54]=C_h_intern(&lf[54],13,"make-pathname");
lf[55]=C_h_intern(&lf[55],15,"\003sysget-keyword");
lf[56]=C_h_intern(&lf[56],5,"\000load");
lf[57]=C_h_intern(&lf[57],12,"\000output-file");
lf[58]=C_h_intern(&lf[58],8,"\000options");
lf[59]=C_h_intern(&lf[59],17,"\003syspeek-c-string");
lf[60]=C_h_intern(&lf[60],14,"make-parameter");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-S\376\003\000\000\002\376B\000\000\003-O2\376\003\000\000\002\376B\000\000\003-d2\376\377\016");
lf[62]=C_h_intern(&lf[62],17,"register-feature!");
lf[63]=C_h_intern(&lf[63],5,"utils");
C_register_lf2(lf,64,create_ptable());
t2=C_mutate(&lf[0] /* (set! c63 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_209,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k207 */
static void C_ccall f_209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k210 in k207 */
static void C_ccall f_212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_212,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k213 in k210 in k207 */
static void C_ccall f_215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k216 in k213 in k210 in k207 */
static void C_ccall f_218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_218,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 52   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[62]+1)))(3,*((C_word*)lf[62]+1),t2,lf[63]);}

/* k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_221(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_221,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=C_mutate((C_word*)lf[4]+1 /* (set! system* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_223,a[2]=t2,a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=*((C_word*)lf[7]+1);
t6=C_mutate((C_word*)lf[8]+1 /* (set! for-each-line ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_241,a[2]=t5,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! for-each-argv-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_277,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[15]+1 /* (set! read-all ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_344,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[19]+1 /* (set! qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_387,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_508,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 126  make-parameter */
((C_proc3)C_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t10,lf[61]);}

/* k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_508,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1 /* (set! compile-file-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_515,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_515,2,t0,t1);}
t2=*((C_word*)lf[31]+1);
t3=C_mutate((C_word*)lf[32]+1 /* (set! compile-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_516,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_516(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_516r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_516r(t0,t1,t2,t3);}}

static void C_ccall f_516r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_520,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_710,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_retrieve_proc(*((C_word*)lf[55]+1)))(5,*((C_word*)lf[55]+1),t4,lf[58],t3,t5);}

/* a709 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_710,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* ##sys#get-keyword */
((C_proc4)C_retrieve_proc(*((C_word*)lf[55]+1)))(4,*((C_word*)lf[55]+1),t2,lf[57],((C_word*)t0)[2]);}

/* k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_526,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_707,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_retrieve_proc(*((C_word*)lf[55]+1)))(5,*((C_word*)lf[55]+1),t2,lf[56],((C_word*)t0)[2],t3);}

/* a706 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_707,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_705,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 133  make-pathname */
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k703 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 133  file-exists? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[53]+1)))(3,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1);}

/* k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_529,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[33]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_535,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=((C_word*)t0)[6];
if(C_truep(t4)){
t5=t3;
f_535(2,t5,C_SCHEME_FALSE);}
else{
/* utils.scm: 134  create-temporary-file */
((C_proc3)C_retrieve_proc(*((C_word*)lf[51]+1)))(3,*((C_word*)lf[51]+1),t3,lf[52]);}}

/* k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* utils.scm: 135  build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t2);}

/* k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_695,2,t0,t1);}
t2=(C_word)C_i_memq(t1,lf[34]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* utils.scm: 136  print */
t4=*((C_word*)lf[48]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[49],((C_word*)t0)[4],lf[50]);}

/* k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_544,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(((C_word*)t0)[5])?lf[40]:lf[41]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_663,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* utils.scm: 140  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t4,((C_word*)t0)[2]);}

/* k661 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_667,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_691,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 141  compile-file-options */
((C_proc2)C_retrieve_proc(*((C_word*)lf[30]+1)))(2,*((C_word*)lf[30]+1),t4);}

/* k689 in k661 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 141  append */
t2=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k685 in k661 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 141  string-intersperse */
((C_proc4)C_retrieve_proc(*((C_word*)lf[45]+1)))(4,*((C_word*)lf[45]+1),((C_word*)t0)[2],t1,lf[46]);}

/* k665 in k661 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_671,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* utils.scm: 142  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t2,((C_word*)t0)[2]);}

/* k669 in k665 in k661 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_675,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
/* utils.scm: 143  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t2,t3);}
else{
t3=((C_word*)t0)[2];
/* utils.scm: 143  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t2,t3);}}

/* k673 in k669 in k665 in k661 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[7])){
/* utils.scm: 137  system* */
((C_proc9)C_retrieve_proc(*((C_word*)lf[4]+1)))(9,*((C_word*)lf[4]+1),((C_word*)t0)[6],lf[42],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[43]);}
else{
/* utils.scm: 137  system* */
((C_proc9)C_retrieve_proc(*((C_word*)lf[4]+1)))(9,*((C_word*)lf[4]+1),((C_word*)t0)[6],lf[42],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[44]);}}

/* k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_547(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_609,a[2]=((C_word*)t0)[4],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 146  on-exit */
((C_proc3)C_retrieve_proc(*((C_word*)lf[39]+1)))(3,*((C_word*)lf[39]+1),t2,t3);}}

/* a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_613,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_618,a[2]=((C_word*)t0)[2],a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a617 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_618(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_618,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_624,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_633,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t1,t3,t4);}

/* a632 in a617 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_639,a[2]=((C_word*)t0)[3],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_645,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a644 in a632 in a617 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_645(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_645r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_645r(t0,t1,t2);}}

static void C_ccall f_645r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_651,a[2]=t2,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
/* k161166 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a650 in a644 in a632 in a617 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_651,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a638 in a632 in a617 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_639,2,t0,t1);}
/* utils.scm: 148  delete-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),t1,((C_word*)t0)[2]);}

/* a623 in a617 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_624,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_630,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* k161166 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a629 in a623 in a617 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_630,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k611 in a608 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g164165 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_547,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_556,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_561,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
/* call-with-current-continuation */
t5=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_561(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_561,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_567,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_582,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t1,t3,t4);}

/* a581 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_594,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a593 in a581 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_594(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_594r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_594r(t0,t1,t2);}}

static void C_ccall f_594r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_600,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
/* k177182 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a599 in a593 in a581 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_600,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a587 in a581 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_592,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 155  load-file */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}

/* k590 in a587 in a581 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a566 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_567(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_567,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_573,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* k177182 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a572 in a566 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_577,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 153  delete-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),t2,((C_word*)t0)[2]);}

/* k575 in a572 in a566 in a560 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 154  abort */
((C_proc3)C_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k554 in k545 in k542 in k539 in k693 in k533 in k527 in k524 in k521 in k518 in compile-file in k513 in k510 in k506 in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g180181 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* qs in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_387(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_387r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_387r(t0,t1,t2,t3);}}

static void C_ccall f_387r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_391,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* utils.scm: 107  build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t4);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_391(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k389 in qs in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_391(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_391,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[20]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(t1,lf[21]));
if(C_truep(t3)){
/* utils.scm: 110  string-append */
t4=*((C_word*)lf[22]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[23],((C_word*)t0)[2],lf[24]);}
else{
t4=(C_word)C_i_string_length(((C_word*)t0)[2]);
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[25]);}
else{
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_416,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_420,a[2]=t10,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* string->list */
t12=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[2]);}}}

/* k418 in k389 in qs in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_420,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_422,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_422(t5,((C_word*)t0)[2],t1);}

/* loop96 in k418 in k389 in qs in k219 in k216 in k213 in k210 in k207 */
static void C_fcall f_422(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_422,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_471,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_u_i_char_whitespacep(t4);
if(C_truep(t5)){
t6=t3;
f_471(t6,(C_truep(t5)?(C_word)C_a_i_string(&a,2,C_make_character(92),t4):(C_word)C_a_i_string(&a,1,t4)));}
else{
t6=(C_word)C_i_memq(t4,lf[27]);
t7=t3;
f_471(t7,(C_truep(t6)?(C_word)C_a_i_string(&a,2,C_make_character(92),t4):(C_word)C_a_i_string(&a,1,t4)));}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k469 in loop96 in k418 in k389 in qs in k219 in k216 in k213 in k210 in k207 */
static void C_fcall f_471(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_471,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop96109 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_422(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop96109 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_422(t6,((C_word*)t0)[3],t5);}}

/* k414 in k389 in qs in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 114  string-concatenate */
((C_proc3)C_retrieve_proc(*((C_word*)lf[26]+1)))(3,*((C_word*)lf[26]+1),((C_word*)t0)[2],t1);}

/* read-all in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_344(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_344r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_344r(t0,t1,t2);}}

static void C_ccall f_344r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_348,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_348(2,t4,*((C_word*)lf[9]+1));}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_348(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k346 in read-all in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_354,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 100  port? */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k352 in k346 in read-all in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_354,2,t0,t1);}
if(C_truep(t1)){
/* read-string/port */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_362,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 102  with-input-from-file */
t3=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* a361 in k352 in k346 in read-all in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_362,2,t0,t1);}
t2=*((C_word*)lf[17]+1);
/* g6869 */
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,C_SCHEME_FALSE);}

/* for-each-argv-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_277(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_277,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_302,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 88   command-line-arguments */
t4=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k300 in for-each-argv-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_302,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
/* utils.scm: 91   for-each-line */
t2=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_316,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_316(t5,((C_word*)t0)[3],t1);}}

/* loop43 in k300 in for-each-argv-line in k219 in k216 in k213 in k210 in k207 */
static void C_fcall f_316(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_316,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_324,a[2]=((C_word*)t0)[3],a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_331,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g5051 */
t6=t3;
f_324(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k329 in loop43 in k300 in for-each-argv-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_316(t3,((C_word*)t0)[2],t2);}

/* g50 in loop43 in k300 in for-each-argv-line in k219 in k216 in k213 in k210 in k207 */
static void C_fcall f_324(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_324,NULL,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_i_string_equal_p(t2,lf[12]))){
/* utils.scm: 86   for-each-line */
t4=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_295,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 87   with-input-from-file */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}}

/* a294 in g50 in loop43 in k300 in for-each-argv-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_295,2,t0,t1);}
t2=*((C_word*)lf[8]+1);
/* g3839 */
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[2]);}

/* for-each-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_241(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_241r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_241r(t0,t1,t2,t3);}}

static void C_ccall f_241r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):*((C_word*)lf[9]+1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_248,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* utils.scm: 73   ##sys#check-port */
t7=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,lf[8]);}

/* k246 in for-each-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_248,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_253,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word)li1),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_253(t5,((C_word*)t0)[2]);}

/* loop in k246 in for-each-line in k219 in k216 in k213 in k210 in k207 */
static void C_fcall f_253(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_253,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_257,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 75   read-line */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k255 in loop in k246 in for-each-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_257,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_266,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 77   proc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k264 in k255 in loop in k246 in for-each-line in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 78   loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_253(t2,((C_word*)t0)[2]);}

/* system* in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_223(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_223r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_223r(t0,t1,t2,t3);}}

static void C_ccall f_223r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_227,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t4,((C_word*)t0)[2],t2,t3);}

/* k225 in system* in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_227,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_230,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 62   system */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k228 in k225 in system* in k219 in k216 in k213 in k210 in k207 */
static void C_ccall f_230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* utils.scm: 64   ##sys#error */
t3=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[6],((C_word*)t0)[2],t1);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[72] = {
{"toplevel:utils_scm",(void*)C_utils_toplevel},
{"f_209:utils_scm",(void*)f_209},
{"f_212:utils_scm",(void*)f_212},
{"f_215:utils_scm",(void*)f_215},
{"f_218:utils_scm",(void*)f_218},
{"f_221:utils_scm",(void*)f_221},
{"f_508:utils_scm",(void*)f_508},
{"f_512:utils_scm",(void*)f_512},
{"f_515:utils_scm",(void*)f_515},
{"f_516:utils_scm",(void*)f_516},
{"f_710:utils_scm",(void*)f_710},
{"f_520:utils_scm",(void*)f_520},
{"f_523:utils_scm",(void*)f_523},
{"f_707:utils_scm",(void*)f_707},
{"f_526:utils_scm",(void*)f_526},
{"f_705:utils_scm",(void*)f_705},
{"f_529:utils_scm",(void*)f_529},
{"f_535:utils_scm",(void*)f_535},
{"f_695:utils_scm",(void*)f_695},
{"f_541:utils_scm",(void*)f_541},
{"f_663:utils_scm",(void*)f_663},
{"f_691:utils_scm",(void*)f_691},
{"f_687:utils_scm",(void*)f_687},
{"f_667:utils_scm",(void*)f_667},
{"f_671:utils_scm",(void*)f_671},
{"f_675:utils_scm",(void*)f_675},
{"f_544:utils_scm",(void*)f_544},
{"f_609:utils_scm",(void*)f_609},
{"f_618:utils_scm",(void*)f_618},
{"f_633:utils_scm",(void*)f_633},
{"f_645:utils_scm",(void*)f_645},
{"f_651:utils_scm",(void*)f_651},
{"f_639:utils_scm",(void*)f_639},
{"f_624:utils_scm",(void*)f_624},
{"f_630:utils_scm",(void*)f_630},
{"f_613:utils_scm",(void*)f_613},
{"f_547:utils_scm",(void*)f_547},
{"f_561:utils_scm",(void*)f_561},
{"f_582:utils_scm",(void*)f_582},
{"f_594:utils_scm",(void*)f_594},
{"f_600:utils_scm",(void*)f_600},
{"f_588:utils_scm",(void*)f_588},
{"f_592:utils_scm",(void*)f_592},
{"f_567:utils_scm",(void*)f_567},
{"f_573:utils_scm",(void*)f_573},
{"f_577:utils_scm",(void*)f_577},
{"f_556:utils_scm",(void*)f_556},
{"f_387:utils_scm",(void*)f_387},
{"f_391:utils_scm",(void*)f_391},
{"f_420:utils_scm",(void*)f_420},
{"f_422:utils_scm",(void*)f_422},
{"f_471:utils_scm",(void*)f_471},
{"f_416:utils_scm",(void*)f_416},
{"f_344:utils_scm",(void*)f_344},
{"f_348:utils_scm",(void*)f_348},
{"f_354:utils_scm",(void*)f_354},
{"f_362:utils_scm",(void*)f_362},
{"f_277:utils_scm",(void*)f_277},
{"f_302:utils_scm",(void*)f_302},
{"f_316:utils_scm",(void*)f_316},
{"f_331:utils_scm",(void*)f_331},
{"f_324:utils_scm",(void*)f_324},
{"f_295:utils_scm",(void*)f_295},
{"f_241:utils_scm",(void*)f_241},
{"f_248:utils_scm",(void*)f_248},
{"f_253:utils_scm",(void*)f_253},
{"f_257:utils_scm",(void*)f_257},
{"f_266:utils_scm",(void*)f_266},
{"f_223:utils_scm",(void*)f_223},
{"f_227:utils_scm",(void*)f_227},
{"f_230:utils_scm",(void*)f_230},
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
