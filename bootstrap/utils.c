/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 11:31
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
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
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[62];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,115,121,115,116,101,109,42,32,102,115,116,114,49,49,32,46,32,97,114,103,115,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,50,53,55,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,97,108,108,32,46,32,102,105,108,101,49,57,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,53,56,32,103,54,56,55,50,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,113,115,32,115,116,114,51,57,32,46,32,116,109,112,51,56,52,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,6),40,97,52,54,56,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,12),40,97,52,54,50,32,101,120,49,52,51,41,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,6),40,97,52,56,51,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,52,57,53,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,19),40,97,52,56,57,32,46,32,97,114,103,115,49,51,56,49,52,54,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,6),40,97,52,55,55,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,97,52,53,54,32,107,49,51,55,49,52,50,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,53,50,53,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,12),40,97,53,49,57,32,101,120,49,50,55,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,97,53,51,52,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,97,53,52,54,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,19),40,97,53,52,48,32,46,32,97,114,103,115,49,50,50,49,50,56,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,6),40,97,53,50,56,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,14),40,97,53,49,51,32,107,49,50,49,49,50,54,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,97,53,48,52,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,54,48,50,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,54,48,53,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,35),40,99,111,109,112,105,108,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,57,56,32,46,32,116,109,112,57,55,57,57,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,18),40,102,95,54,52,56,32,103,49,55,49,49,55,50,49,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,36),40,115,99,97,110,45,105,110,112,117,116,45,108,105,110,101,115,32,114,120,49,53,57,32,46,32,116,109,112,49,53,56,49,54,48,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_205)
static void C_ccall f_205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_208)
static void C_ccall f_208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_211)
static void C_ccall f_211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_214)
static void C_ccall f_214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_217)
static void C_ccall f_217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_220)
static void C_ccall f_220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_404)
static void C_ccall f_404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_408)
static void C_ccall f_408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_411)
static void C_ccall f_411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_621)
static void C_fcall f_621(C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_648)
static void C_ccall f_648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_412)
static void C_ccall f_412(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_412)
static void C_ccall f_412r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_416)
static void C_ccall f_416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_419)
static void C_ccall f_419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_603)
static void C_ccall f_603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_422)
static void C_ccall f_422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_425)
static void C_ccall f_425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_431)
static void C_ccall f_431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_591)
static void C_ccall f_591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_437)
static void C_ccall f_437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_559)
static void C_ccall f_559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_587)
static void C_ccall f_587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_571)
static void C_ccall f_571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_505)
static void C_ccall f_505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_529)
static void C_ccall f_529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_541)
static void C_ccall f_541(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_541)
static void C_ccall f_541r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_547)
static void C_ccall f_547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_535)
static void C_ccall f_535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_520)
static void C_ccall f_520(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_509)
static void C_ccall f_509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_443)
static void C_ccall f_443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_478)
static void C_ccall f_478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_490)
static void C_ccall f_490(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_490)
static void C_ccall f_490r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_496)
static void C_ccall f_496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_484)
static void C_ccall f_484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_488)
static void C_ccall f_488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_463)
static void C_ccall f_463(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_452)
static void C_ccall f_452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_283)
static void C_ccall f_283(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_283)
static void C_ccall f_283r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_287)
static void C_ccall f_287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_318)
static void C_fcall f_318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_367)
static void C_fcall f_367(C_word t0,C_word t1) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_240)
static void C_ccall f_240(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_240)
static void C_ccall f_240r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_244)
static void C_ccall f_244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_250)
static void C_ccall f_250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_258)
static void C_ccall f_258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_222)
static void C_ccall f_222(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_222)
static void C_ccall f_222r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_226)
static void C_ccall f_226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_229)
static void C_ccall f_229(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_621)
static void C_fcall trf_621(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_621(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_621(t0,t1);}

C_noret_decl(trf_318)
static void C_fcall trf_318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_318(t0,t1,t2);}

C_noret_decl(trf_367)
static void C_fcall trf_367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_367(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_367(t0,t1);}

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
if(!C_demand_2(528)){
C_save(t1);
C_rereclaim2(528*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,62);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],7,"sprintf");
lf[3]=C_h_intern(&lf[3],6,"system");
lf[4]=C_h_intern(&lf[4],7,"system*");
lf[5]=C_h_intern(&lf[5],9,"\003syserror");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\0003shell invocation failed with non-zero return status");
lf[7]=C_h_intern(&lf[7],8,"read-all");
lf[8]=C_h_intern(&lf[8],20,"\003sysread-string/port");
lf[9]=C_h_intern(&lf[9],11,"read-string");
lf[10]=C_h_intern(&lf[10],20,"with-input-from-file");
lf[11]=C_h_intern(&lf[11],5,"port\077");
lf[12]=C_h_intern(&lf[12],18,"\003sysstandard-input");
lf[13]=C_h_intern(&lf[13],2,"qs");
lf[14]=C_h_intern(&lf[14],7,"mingw32");
lf[15]=C_h_intern(&lf[15],4,"msvc");
lf[16]=C_h_intern(&lf[16],13,"string-append");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\002\047\047");
lf[20]=C_h_intern(&lf[20],18,"string-concatenate");
lf[21]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000#\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000`\376\003\000\000\002\376\377\012\000\000\264\376\003\000\000\002\376\377\012\000\000~\376\003\000\000\002\376\377\012\000\000&\376\003\000"
"\000\002\376\377\012\000\000%\376\003\000\000\002\376\377\012\000\000$\376\003\000\000\002\376\377\012\000\000!\376\003\000\000\002\376\377\012\000\000*\376\003\000\000\002\376\377\012\000\000;\376\003\000\000\002\376\377\012\000\000<\376\003\000\000\002\376\377\012\000\000>\376\003\000\000\002\376"
"\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000(\376\003\000\000\002\376\377\012\000\000)\376\003\000\000\002\376\377\012\000\000[\376\003\000\000\002\376\377\012\000\000]\376\003\000\000\002\376\377\012\000\000{\376\003\000\000\002\376\377\012\000\000}\376\377\016");
lf[22]=C_h_intern(&lf[22],16,"\003sysstring->list");
lf[23]=C_h_intern(&lf[23],14,"build-platform");
lf[24]=C_h_intern(&lf[24],20,"compile-file-options");
lf[25]=C_h_intern(&lf[25],4,"load");
lf[26]=C_h_intern(&lf[26],12,"compile-file");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007mingw32\376\003\000\000\002\376\001\000\000\004msvc\376\377\016");
lf[29]=C_h_intern(&lf[29],5,"abort");
lf[30]=C_h_intern(&lf[30],12,"delete-file*");
lf[31]=C_h_intern(&lf[31],22,"with-exception-handler");
lf[32]=C_h_intern(&lf[32],30,"call-with-current-continuation");
lf[33]=C_h_intern(&lf[33],7,"on-exit");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\025~a~a -s ~a ~a -o ~a~a");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_h_intern(&lf[39],18,"string-intersperse");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[41]=C_h_intern(&lf[41],6,"append");
lf[42]=C_h_intern(&lf[42],5,"print");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\014; compiling ");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[45]=C_h_intern(&lf[45],21,"create-temporary-file");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[47]=C_h_intern(&lf[47],12,"file-exists\077");
lf[48]=C_h_intern(&lf[48],13,"make-pathname");
lf[49]=C_h_intern(&lf[49],15,"\003sysget-keyword");
lf[50]=C_h_intern(&lf[50],5,"\000load");
lf[51]=C_h_intern(&lf[51],12,"\000output-file");
lf[52]=C_h_intern(&lf[52],8,"\000options");
lf[53]=C_h_intern(&lf[53],6,"regexp");
lf[54]=C_h_intern(&lf[54],9,"read-line");
lf[55]=C_h_intern(&lf[55],13,"string-search");
lf[56]=C_h_intern(&lf[56],16,"scan-input-lines");
lf[57]=C_h_intern(&lf[57],17,"\003syspeek-c-string");
lf[58]=C_h_intern(&lf[58],14,"make-parameter");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-S\376\003\000\000\002\376B\000\000\003-O2\376\003\000\000\002\376B\000\000\003-d2\376\377\016");
lf[60]=C_h_intern(&lf[60],17,"register-feature!");
lf[61]=C_h_intern(&lf[61],5,"utils");
C_register_lf2(lf,62,create_ptable());
t2=C_mutate(&lf[0] /* (set! c25 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_205,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k203 */
static void C_ccall f_205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_208,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k206 in k203 */
static void C_ccall f_208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_211,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k209 in k206 in k203 */
static void C_ccall f_211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_214,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k212 in k209 in k206 in k203 */
static void C_ccall f_214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_217,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_220,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 52   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t2,lf[61]);}

/* k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_220,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=C_mutate((C_word*)lf[4]+1 /* (set! system* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_222,a[2]=t2,a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! read-all ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_240,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[13]+1 /* (set! qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_283,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 97   make-parameter */
((C_proc3)C_retrieve_proc(*((C_word*)lf[58]+1)))(3,*((C_word*)lf[58]+1),t7,lf[59]);}

/* k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_404,2,t0,t1);}
t2=C_mutate((C_word*)lf[24]+1 /* (set! compile-file-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_411,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_411,2,t0,t1);}
t2=*((C_word*)lf[25]+1);
t3=C_mutate((C_word*)lf[26]+1 /* (set! compile-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_412,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t4=*((C_word*)lf[53]+1);
t5=*((C_word*)lf[54]+1);
t6=*((C_word*)lf[55]+1);
t7=C_mutate((C_word*)lf[56]+1 /* (set! scan-input-lines ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_609,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}

/* scan-input-lines in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_609(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_609r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_609r(t0,t1,t2,t3);}}

static void C_ccall f_609r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_613,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_613(2,t5,*((C_word*)lf[12]+1));}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_613(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k611 in scan-input-lines in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_613,2,t0,t1);}
t2=C_i_closurep(((C_word*)t0)[6]);
t3=(C_truep(t2)?((C_word*)t0)[6]:(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_648,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_621,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t5,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_621(t7,((C_word*)t0)[2]);}

/* loop in k611 in scan-input-lines in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_fcall f_621(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_621,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_625,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 141  read-line */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k623 in loop in k611 in scan-input-lines in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_625,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_634,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 143  rx */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k632 in k623 in loop in k611 in scan-input-lines in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* utils.scm: 144  loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_621(t2,((C_word*)t0)[3]);}}

/* f_648 in k611 in scan-input-lines in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_648(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_648,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_656,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 139  regexp */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k654 */
static void C_ccall f_656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g174175 */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_412(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_412r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_412r(t0,t1,t2,t3);}}

static void C_ccall f_412r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_416,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_606,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_retrieve_proc(*((C_word*)lf[49]+1)))(5,*((C_word*)lf[49]+1),t4,lf[52],t3,t5);}

/* a605 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_606,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_419,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* ##sys#get-keyword */
((C_proc4)C_retrieve_proc(*((C_word*)lf[49]+1)))(4,*((C_word*)lf[49]+1),t2,lf[51],((C_word*)t0)[2]);}

/* k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_422,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_603,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
((C_proc5)C_retrieve_proc(*((C_word*)lf[49]+1)))(5,*((C_word*)lf[49]+1),t2,lf[50],((C_word*)t0)[2],t3);}

/* a602 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_603,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_425,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_601,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 104  make-pathname */
((C_proc4)C_retrieve_proc(*((C_word*)lf[48]+1)))(4,*((C_word*)lf[48]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k599 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 104  file-exists? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),((C_word*)t0)[2],t1);}

/* k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_425,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[27]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_431,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=((C_word*)t0)[6];
if(C_truep(t4)){
t5=t3;
f_431(2,t5,C_SCHEME_FALSE);}
else{
/* utils.scm: 105  create-temporary-file */
((C_proc3)C_retrieve_proc(*((C_word*)lf[45]+1)))(3,*((C_word*)lf[45]+1),t3,lf[46]);}}

/* k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* utils.scm: 106  build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[23]+1)))(2,*((C_word*)lf[23]+1),t2);}

/* k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_591,2,t0,t1);}
t2=C_i_memq(t1,lf[28]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* utils.scm: 107  print */
t4=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[43],((C_word*)t0)[4],lf[44]);}

/* k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_440,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(((C_word*)t0)[5])?lf[34]:lf[35]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_559,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* utils.scm: 111  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t4,((C_word*)t0)[2]);}

/* k557 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_563,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_583,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_587,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 112  compile-file-options */
((C_proc2)C_retrieve_proc(*((C_word*)lf[24]+1)))(2,*((C_word*)lf[24]+1),t4);}

/* k585 in k557 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 112  append */
t2=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k581 in k557 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 112  string-intersperse */
((C_proc4)C_retrieve_proc(*((C_word*)lf[39]+1)))(4,*((C_word*)lf[39]+1),((C_word*)t0)[2],t1,lf[40]);}

/* k561 in k557 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_567,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* utils.scm: 113  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[2]);}

/* k565 in k561 in k557 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_571,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[3];
/* utils.scm: 114  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,t3);}
else{
t3=((C_word*)t0)[2];
/* utils.scm: 114  qs */
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,t3);}}

/* k569 in k565 in k561 in k557 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[7])){
/* utils.scm: 108  system* */
((C_proc9)C_retrieve_proc(*((C_word*)lf[4]+1)))(9,*((C_word*)lf[4]+1),((C_word*)t0)[6],lf[36],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[37]);}
else{
/* utils.scm: 108  system* */
((C_proc9)C_retrieve_proc(*((C_word*)lf[4]+1)))(9,*((C_word*)lf[4]+1),((C_word*)t0)[6],lf[36],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[38]);}}

/* k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_443(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_505,a[2]=((C_word*)t0)[4],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 117  on-exit */
((C_proc3)C_retrieve_proc(*((C_word*)lf[33]+1)))(3,*((C_word*)lf[33]+1),t2,t3);}}

/* a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_509,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_514,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a513 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_514(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_514,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_520,a[2]=t2,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_529,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[31]+1)))(4,*((C_word*)lf[31]+1),t1,t3,t4);}

/* a528 in a513 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_535,a[2]=((C_word*)t0)[3],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_541,a[2]=((C_word*)t0)[2],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a540 in a528 in a513 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_541(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_541r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_541r(t0,t1,t2);}}

static void C_ccall f_541r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_547,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
/* k121126 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a546 in a540 in a528 in a513 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_547,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a534 in a528 in a513 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_535,2,t0,t1);}
/* utils.scm: 119  delete-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[30]+1)))(3,*((C_word*)lf[30]+1),t1,((C_word*)t0)[2]);}

/* a519 in a513 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_520(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_520,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_526,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* k121126 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a525 in a519 in a513 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_526,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k507 in a504 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g124125 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_443,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_452,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_457,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* call-with-current-continuation */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_457(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_457,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_463,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_478,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[31]+1)))(4,*((C_word*)lf[31]+1),t1,t3,t4);}

/* a477 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_478,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_484,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_490,a[2]=((C_word*)t0)[2],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a489 in a477 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_490(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_490r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_490r(t0,t1,t2);}}

static void C_ccall f_490r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_496,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
/* k137142 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a495 in a489 in a477 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_496,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a483 in a477 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_484,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_488,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 126  load-file */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}

/* k486 in a483 in a477 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a462 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_463(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_463,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_469,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* k137142 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a468 in a462 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_473,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 124  delete-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[30]+1)))(3,*((C_word*)lf[30]+1),t2,((C_word*)t0)[2]);}

/* k471 in a468 in a462 in a456 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 125  abort */
((C_proc3)C_retrieve_proc(*((C_word*)lf[29]+1)))(3,*((C_word*)lf[29]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k450 in k441 in k438 in k435 in k589 in k429 in k423 in k420 in k417 in k414 in compile-file in k409 in k406 in k402 in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g140141 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* qs in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_283(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_283r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_283r(t0,t1,t2,t3);}}

static void C_ccall f_283r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_287,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* utils.scm: 78   build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[23]+1)))(2,*((C_word*)lf[23]+1),t4);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_287(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k285 in qs in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_287(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_287,2,t0,t1);}
t2=C_eqp(t1,lf[14]);
t3=(C_truep(t2)?t2:C_eqp(t1,lf[15]));
if(C_truep(t3)){
/* utils.scm: 81   string-append */
t4=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[17],((C_word*)t0)[2],lf[18]);}
else{
t4=C_i_string_length(((C_word*)t0)[2]);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[19]);}
else{
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_316,a[2]=t10,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* string->list */
t12=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[2]);}}}

/* k314 in k285 in qs in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_316,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_318,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_318(t5,((C_word*)t0)[2],t1);}

/* loop58 in k314 in k285 in qs in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_fcall f_318(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_318,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_u_i_char_whitespacep(t4);
if(C_truep(t5)){
t6=t3;
f_367(t6,(C_truep(t5)?C_a_i_string(&a,2,C_make_character(92),t4):C_a_i_string(&a,1,t4)));}
else{
t6=C_i_memq(t4,lf[21]);
t7=t3;
f_367(t7,(C_truep(t6)?C_a_i_string(&a,2,C_make_character(92),t4):C_a_i_string(&a,1,t4)));}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k365 in loop58 in k314 in k285 in qs in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_fcall f_367(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_367,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop5871 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_318(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
/* loop5871 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_318(t6,((C_word*)t0)[3],t5);}}

/* k310 in k285 in qs in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 85   string-concatenate */
((C_proc3)C_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),((C_word*)t0)[2],t1);}

/* read-all in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_240(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_240r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_240r(t0,t1,t2);}}

static void C_ccall f_240r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_244,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_244(2,t4,*((C_word*)lf[12]+1));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_244(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k242 in read-all in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_250,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 71   port? */
t3=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k248 in k242 in read-all in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_250,2,t0,t1);}
if(C_truep(t1)){
/* read-string/port */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_258,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 73   with-input-from-file */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* a257 in k248 in k242 in read-all in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_258,2,t0,t1);}
t2=*((C_word*)lf[9]+1);
/* g3031 */
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,C_SCHEME_FALSE);}

/* system* in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_222(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_222r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_222r(t0,t1,t2,t3);}}

static void C_ccall f_222r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_226,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t4,((C_word*)t0)[2],t2,t3);}

/* k224 in system* in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_229,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 62   system */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k227 in k224 in system* in k218 in k215 in k212 in k209 in k206 in k203 */
static void C_ccall f_229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* utils.scm: 64   ##sys#error */
t3=*((C_word*)lf[5]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[6],((C_word*)t0)[2],t1);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[69] = {
{"toplevel:utils_scm",(void*)C_utils_toplevel},
{"f_205:utils_scm",(void*)f_205},
{"f_208:utils_scm",(void*)f_208},
{"f_211:utils_scm",(void*)f_211},
{"f_214:utils_scm",(void*)f_214},
{"f_217:utils_scm",(void*)f_217},
{"f_220:utils_scm",(void*)f_220},
{"f_404:utils_scm",(void*)f_404},
{"f_408:utils_scm",(void*)f_408},
{"f_411:utils_scm",(void*)f_411},
{"f_609:utils_scm",(void*)f_609},
{"f_613:utils_scm",(void*)f_613},
{"f_621:utils_scm",(void*)f_621},
{"f_625:utils_scm",(void*)f_625},
{"f_634:utils_scm",(void*)f_634},
{"f_648:utils_scm",(void*)f_648},
{"f_656:utils_scm",(void*)f_656},
{"f_412:utils_scm",(void*)f_412},
{"f_606:utils_scm",(void*)f_606},
{"f_416:utils_scm",(void*)f_416},
{"f_419:utils_scm",(void*)f_419},
{"f_603:utils_scm",(void*)f_603},
{"f_422:utils_scm",(void*)f_422},
{"f_601:utils_scm",(void*)f_601},
{"f_425:utils_scm",(void*)f_425},
{"f_431:utils_scm",(void*)f_431},
{"f_591:utils_scm",(void*)f_591},
{"f_437:utils_scm",(void*)f_437},
{"f_559:utils_scm",(void*)f_559},
{"f_587:utils_scm",(void*)f_587},
{"f_583:utils_scm",(void*)f_583},
{"f_563:utils_scm",(void*)f_563},
{"f_567:utils_scm",(void*)f_567},
{"f_571:utils_scm",(void*)f_571},
{"f_440:utils_scm",(void*)f_440},
{"f_505:utils_scm",(void*)f_505},
{"f_514:utils_scm",(void*)f_514},
{"f_529:utils_scm",(void*)f_529},
{"f_541:utils_scm",(void*)f_541},
{"f_547:utils_scm",(void*)f_547},
{"f_535:utils_scm",(void*)f_535},
{"f_520:utils_scm",(void*)f_520},
{"f_526:utils_scm",(void*)f_526},
{"f_509:utils_scm",(void*)f_509},
{"f_443:utils_scm",(void*)f_443},
{"f_457:utils_scm",(void*)f_457},
{"f_478:utils_scm",(void*)f_478},
{"f_490:utils_scm",(void*)f_490},
{"f_496:utils_scm",(void*)f_496},
{"f_484:utils_scm",(void*)f_484},
{"f_488:utils_scm",(void*)f_488},
{"f_463:utils_scm",(void*)f_463},
{"f_469:utils_scm",(void*)f_469},
{"f_473:utils_scm",(void*)f_473},
{"f_452:utils_scm",(void*)f_452},
{"f_283:utils_scm",(void*)f_283},
{"f_287:utils_scm",(void*)f_287},
{"f_316:utils_scm",(void*)f_316},
{"f_318:utils_scm",(void*)f_318},
{"f_367:utils_scm",(void*)f_367},
{"f_312:utils_scm",(void*)f_312},
{"f_240:utils_scm",(void*)f_240},
{"f_244:utils_scm",(void*)f_244},
{"f_250:utils_scm",(void*)f_250},
{"f_258:utils_scm",(void*)f_258},
{"f_222:utils_scm",(void*)f_222},
{"f_226:utils_scm",(void*)f_226},
{"f_229:utils_scm",(void*)f_229},
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
