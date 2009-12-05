/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:26
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: profiler.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file profiler.c
   unit: profiler
*/

#include "chicken.h"

#if !defined(_MSC_VER)
# include <unistd.h>
#endif

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[20];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,97,49,51,56,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,15),40,97,49,52,55,32,46,32,97,114,103,115,49,49,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,45),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,111,102,105,108,101,45,105,110,102,111,32,115,105,122,101,53,32,102,105,108,101,110,97,109,101,54,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,115,101,116,45,112,114,111,102,105,108,101,45,105,110,102,111,45,118,101,99,116,111,114,33,32,118,101,99,50,48,32,105,50,49,32,120,50,50,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,110,116,114,121,32,105,110,100,101,120,50,52,32,118,101,99,50,53,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,120,105,116,32,105,110,100,101,120,52,52,32,118,101,99,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,55,52,32,105,55,56,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,11),40,103,55,48,32,118,101,99,55,50,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,54,51,32,103,54,55,54,57,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,50,57,57,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,102,105,110,105,115,104,45,112,114,111,102,105,108,101,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_profiler_toplevel)
C_externexport void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_291)
static void C_ccall f_291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_295)
static void C_ccall f_295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_300)
static void C_ccall f_300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_306)
static void C_fcall f_306(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_384)
static void C_ccall f_384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_314)
static void C_fcall f_314(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_323)
static void C_fcall f_323(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_336)
static void C_ccall f_336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_339)
static void C_ccall f_339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_342)
static void C_ccall f_342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_345)
static void C_ccall f_345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_348)
static void C_ccall f_348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_351)
static void C_ccall f_351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_354)
static void C_ccall f_354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_234)
static void C_ccall f_234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_174)
static void C_ccall f_174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_196)
static void C_fcall f_196(C_word t0,C_word t1) C_noret;
C_noret_decl(f_161)
static void C_ccall f_161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_106)
static void C_ccall f_106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_159)
static void C_ccall f_159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_125)
static void C_ccall f_125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_128)
static void C_ccall f_128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_131)
static void C_ccall f_131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_148)
static void C_ccall f_148(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_148)
static void C_ccall f_148r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_152)
static void C_ccall f_152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_134)
static void C_ccall f_134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_139)
static void C_ccall f_139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_143)
static void C_ccall f_143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_110)
static void C_ccall f_110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_113)
static void C_ccall f_113(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_306)
static void C_fcall trf_306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_306(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_306(t0,t1,t2);}

C_noret_decl(trf_314)
static void C_fcall trf_314(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_314(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_314(t0,t1,t2);}

C_noret_decl(trf_323)
static void C_fcall trf_323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_323(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_323(t0,t1,t2);}

C_noret_decl(trf_196)
static void C_fcall trf_196(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_196(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_196(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_profiler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("profiler_toplevel"));
C_check_nursery_minimum(20);
if(!C_demand(20)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(160)){
C_save(t1);
C_rereclaim2(160*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(20);
C_initialize_lf(lf,20);
lf[2]=C_h_intern(&lf[2],23,"\003sysprofile-append-mode");
lf[3]=C_h_intern(&lf[3],11,"make-vector");
lf[4]=C_h_intern(&lf[4],25,"\003sysregister-profile-info");
lf[5]=C_h_intern(&lf[5],18,"\003sysfinish-profile");
lf[6]=C_h_intern(&lf[6],25,"\003sysimplicit-exit-handler");
lf[7]=C_h_intern(&lf[7],16,"\003sysexit-handler");
lf[8]=C_h_intern(&lf[8],13,"string-append");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[10]=C_h_intern(&lf[10],28,"\003sysset-profile-info-vector!");
lf[11]=C_h_intern(&lf[11],17,"\003sysprofile-entry");
lf[12]=C_h_intern(&lf[12],16,"\003sysprofile-exit");
lf[13]=C_h_intern(&lf[13],19,"with-output-to-file");
lf[14]=C_h_intern(&lf[14],10,"write-char");
lf[15]=C_h_intern(&lf[15],5,"write");
lf[16]=C_h_intern(&lf[16],7,"\000append");
lf[17]=C_h_intern(&lf[17],9,"\003sysprint");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\033[debug] writing profile...\012");
lf[19]=C_h_intern(&lf[19],19,"\003sysstandard-output");
C_register_lf2(lf,20,create_ptable());
t2=lf[0] /* profile-vector-list */ =C_SCHEME_END_OF_LIST;;
t3=lf[1] /* profile-name */ =C_SCHEME_FALSE;;
t4=C_set_block_item(lf[2] /* profile-append-mode */,0,C_SCHEME_FALSE);
t5=*((C_word*)lf[3]+1);
t6=C_mutate((C_word*)lf[4]+1 /* (set! register-profile-info ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_106,a[2]=t5,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[10]+1 /* (set! set-profile-info-vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_161,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=(C_word)C_fudge(C_fix(21));
t9=C_mutate((C_word*)lf[11]+1 /* (set! profile-entry ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_174,a[2]=t8,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[12]+1 /* (set! profile-exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_234,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[13]+1);
t12=*((C_word*)lf[14]+1);
t13=*((C_word*)lf[15]+1);
t14=C_mutate((C_word*)lf[5]+1 /* (set! finish-profile ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_291,a[2]=t11,a[3]=t13,a[4]=t12,a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}

/* ##sys#finish-profile */
static void C_ccall f_291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_295,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fudge(C_fix(13)))){
/* profiler.scm: 129  ##sys#print */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],C_SCHEME_FALSE,*((C_word*)lf[19]+1));}
else{
t3=t2;
f_295(2,t3,C_SCHEME_UNDEFINED);}}

/* k293 in ##sys#finish-profile */
static void C_ccall f_295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_300,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t3=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],lf[1],t2,lf[16]);}
else{
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],lf[1],t2);}}

/* a299 in k293 in ##sys#finish-profile */
static void C_ccall f_300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_300,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_306,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_306(t5,t1,lf[0]);}

/* loop63 in a299 in k293 in ##sys#finish-profile */
static void C_fcall f_306(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_306,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_314,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_384,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g7071 */
t6=t3;
f_314(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k382 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_306(t3,((C_word*)t0)[2],t2);}

/* g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_fcall f_314(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_314,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_323,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t3,a[7]=((C_word)li6),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_323(t7,t1,C_fix(0));}

/* doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_fcall f_323(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_323,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* profiler.scm: 138  write-char */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_make_character(40));}}

/* k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],((C_word*)t0)[7]);
/* profiler.scm: 139  write */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k334 in k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* profiler.scm: 140  write-char */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(32));}

/* k337 in k334 in k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
t4=(C_word)C_slot(((C_word*)t0)[3],t3);
/* profiler.scm: 141  write */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t2,t4);}

/* k340 in k337 in k334 in k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* profiler.scm: 142  write-char */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(32));}

/* k343 in k340 in k337 in k334 in k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_348,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(3));
t4=(C_word)C_slot(((C_word*)t0)[3],t3);
/* profiler.scm: 143  write */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t2,t4);}

/* k346 in k343 in k340 in k337 in k334 in k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* profiler.scm: 144  write-char */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(41));}

/* k349 in k346 in k343 in k340 in k337 in k334 in k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_354,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* profiler.scm: 145  write-char */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(10));}

/* k352 in k349 in k346 in k343 in k340 in k337 in k334 in k331 in doloop74 in g70 in loop63 in a299 in k293 in ##sys#finish-profile */
static void C_ccall f_354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(5));
t3=((C_word*)((C_word*)t0)[3])[1];
f_323(t3,((C_word*)t0)[2],t2);}

/* ##sys#profile-exit */
static void C_ccall f_234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_234,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_times(t2,C_fix(5));
t5=(C_word)C_fixnum_plus(t4,C_fix(2));
t6=(C_word)C_fixnum_plus(t4,C_fix(3));
t7=(C_word)C_fixnum_plus(t4,C_fix(4));
t8=(C_word)C_slot(t3,t7);
t9=(C_word)C_fixnum_decrease(t8);
t10=(C_word)C_i_set_i_slot(t3,t7,t9);
t11=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t11)){
t12=(C_word)C_slot(t3,t6);
t13=(C_word)C_fudge(C_fix(6));
t14=(C_word)C_slot(t3,t5);
t15=(C_word)C_fixnum_difference(t13,t14);
t16=(C_word)C_fixnum_plus(t12,t15);
t17=(C_word)C_i_set_i_slot(t3,t6,t16);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_i_set_i_slot(t3,t5,C_fix(0)));}
else{
t12=C_SCHEME_UNDEFINED;
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}

/* ##sys#profile-entry */
static void C_ccall f_174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_174,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_times(t2,C_fix(5));
t5=(C_word)C_fixnum_increase(t4);
t6=(C_word)C_slot(t3,t5);
t7=(C_word)C_fixnum_plus(t4,C_fix(2));
t8=(C_word)C_fixnum_plus(t4,C_fix(4));
t9=(C_word)C_slot(t3,t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_196,a[2]=t8,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t11=(C_word)C_eqp(((C_word*)t0)[2],t6);
if(C_truep(t11)){
t12=t10;
f_196(t12,(C_word)C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t12=(C_word)C_fixnum_increase(t6);
t13=t10;
f_196(t13,(C_word)C_i_set_i_slot(t3,t5,t12));}}
else{
t11=t10;
f_196(t11,(C_word)C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}}

/* k194 in ##sys#profile-entry */
static void C_fcall f_196(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[6],C_fix(0));
if(C_truep(t2)){
t3=(C_word)C_fudge(C_fix(6));
t4=(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t3);
t5=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[2],t5));}
else{
t3=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[2],t3));}}

/* ##sys#set-profile-info-vector! */
static void C_ccall f_161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_161,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_times(t3,C_fix(5));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_setslot(t2,t5,t4));}

/* ##sys#register-profile-info */
static void C_ccall f_106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_106,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_110,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_125,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_159,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 69   number->string */
C_number_to_string(3,0,t6,C_fix((C_word)getpid()));}
else{
t5=t4;
f_110(2,t5,C_SCHEME_UNDEFINED);}}

/* k157 in ##sys#register-profile-info */
static void C_ccall f_159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* profiler.scm: 69   string-append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[8]+1)))(5,*((C_word*)lf[8]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[9],t1);}

/* k123 in ##sys#register-profile-info */
static void C_ccall f_125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_125,2,t0,t1);}
t2=C_mutate(&lf[1] /* (set! profile-name ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* profiler.scm: 70   ##sys#exit-handler */
((C_proc2)C_retrieve_proc(*((C_word*)lf[7]+1)))(2,*((C_word*)lf[7]+1),t3);}

/* k126 in k123 in ##sys#register-profile-info */
static void C_ccall f_128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_131,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 71   ##sys#implicit-exit-handler */
((C_proc2)C_retrieve_proc(*((C_word*)lf[6]+1)))(2,*((C_word*)lf[6]+1),t2);}

/* k129 in k126 in k123 in ##sys#register-profile-info */
static void C_ccall f_131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_134,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_148,a[2]=((C_word*)t0)[2],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 72   ##sys#exit-handler */
((C_proc3)C_retrieve_proc(*((C_word*)lf[7]+1)))(3,*((C_word*)lf[7]+1),t2,t3);}

/* a147 in k129 in k126 in k123 in ##sys#register-profile-info */
static void C_ccall f_148(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_148r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_148r(t0,t1,t2);}}

static void C_ccall f_148r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_152,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm: 74   ##sys#finish-profile */
((C_proc2)C_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t3);}

/* k150 in a147 in k129 in k126 in k123 in ##sys#register-profile-info */
static void C_ccall f_152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k132 in k129 in k126 in k123 in ##sys#register-profile-info */
static void C_ccall f_134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_139,a[2]=((C_word*)t0)[3],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 76   ##sys#implicit-exit-handler */
((C_proc3)C_retrieve_proc(*((C_word*)lf[6]+1)))(3,*((C_word*)lf[6]+1),((C_word*)t0)[2],t2);}

/* a138 in k132 in k129 in k126 in k123 in ##sys#register-profile-info */
static void C_ccall f_139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_143,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 78   ##sys#finish-profile */
((C_proc2)C_retrieve_proc(*((C_word*)lf[5]+1)))(2,*((C_word*)lf[5]+1),t2);}

/* k141 in a138 in k132 in k129 in k126 in k123 in ##sys#register-profile-info */
static void C_ccall f_143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* profiler.scm: 79   oldieh */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k108 in ##sys#register-profile-info */
static void C_ccall f_110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_113,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_fixnum_times(((C_word*)t0)[3],C_fix(5));
/* profiler.scm: 81   make-vector */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_fix(0));}

/* k111 in k108 in ##sys#register-profile-info */
static void C_ccall f_113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_113,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,lf[0]);
t3=C_mutate(&lf[0] /* (set! profile-vector-list ...) */,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[33] = {
{"toplevel:profiler_scm",(void*)C_profiler_toplevel},
{"f_291:profiler_scm",(void*)f_291},
{"f_295:profiler_scm",(void*)f_295},
{"f_300:profiler_scm",(void*)f_300},
{"f_306:profiler_scm",(void*)f_306},
{"f_384:profiler_scm",(void*)f_384},
{"f_314:profiler_scm",(void*)f_314},
{"f_323:profiler_scm",(void*)f_323},
{"f_333:profiler_scm",(void*)f_333},
{"f_336:profiler_scm",(void*)f_336},
{"f_339:profiler_scm",(void*)f_339},
{"f_342:profiler_scm",(void*)f_342},
{"f_345:profiler_scm",(void*)f_345},
{"f_348:profiler_scm",(void*)f_348},
{"f_351:profiler_scm",(void*)f_351},
{"f_354:profiler_scm",(void*)f_354},
{"f_234:profiler_scm",(void*)f_234},
{"f_174:profiler_scm",(void*)f_174},
{"f_196:profiler_scm",(void*)f_196},
{"f_161:profiler_scm",(void*)f_161},
{"f_106:profiler_scm",(void*)f_106},
{"f_159:profiler_scm",(void*)f_159},
{"f_125:profiler_scm",(void*)f_125},
{"f_128:profiler_scm",(void*)f_128},
{"f_131:profiler_scm",(void*)f_131},
{"f_148:profiler_scm",(void*)f_148},
{"f_152:profiler_scm",(void*)f_152},
{"f_134:profiler_scm",(void*)f_134},
{"f_139:profiler_scm",(void*)f_139},
{"f_143:profiler_scm",(void*)f_143},
{"f_110:profiler_scm",(void*)f_110},
{"f_113:profiler_scm",(void*)f_113},
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
