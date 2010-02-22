/* Generated from stub.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:34
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: stub.scm -optimize-level 2 -include-path . -include-path ./ -inline -explicit-use -no-trace -output-file stub.c
   unit: default_stub
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

static C_TLS C_word lf[1];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_default_stub_toplevel)
C_externexport void C_ccall C_default_stub_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14)
static void C_ccall f_14(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_17)
static void C_ccall f_17(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_20)
static void C_ccall f_20(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_23)
static void C_ccall f_23(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_26)
static void C_ccall f_26(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_31)
static void C_fcall f_31(C_word t0,C_word t1) C_noret;
C_noret_decl(f_35)
static void C_ccall f_35(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_29)
static void C_ccall f_29(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_31)
static void C_fcall trf_31(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_31(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_31(t0,t1);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_default_stub_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_default_stub_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("default_stub_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(10)){
C_save(t1);
C_rereclaim2(10*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,1);
lf[0]=C_h_intern(&lf[0],14,"return-to-host");
C_register_lf2(lf,1,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k12 */
static void C_ccall f_14(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_17,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k15 in k12 */
static void C_ccall f_17(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_17,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_20,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k18 in k15 in k12 */
static void C_ccall f_20(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_20,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_23,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k21 in k18 in k15 in k12 */
static void C_ccall f_23(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_23,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_26,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k24 in k21 in k18 in k15 in k12 */
static void C_ccall f_26(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_26,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_29,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_31,a[2]=t4,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_31(t6,t2);}

/* loop in k24 in k21 in k18 in k15 in k12 */
static void C_fcall f_31(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_31,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_35,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* stub.scm: 33   return-to-host */
t3=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k33 in loop in k24 in k21 in k18 in k15 in k12 */
static void C_ccall f_35(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* stub.scm: 33   loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_31(t2,((C_word*)t0)[2]);}

/* k27 in k24 in k21 in k18 in k15 in k12 */
static void C_ccall f_29(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[10] = {
{"toplevel:stub_scm",(void*)C_default_stub_toplevel},
{"f_14:stub_scm",(void*)f_14},
{"f_17:stub_scm",(void*)f_17},
{"f_20:stub_scm",(void*)f_20},
{"f_23:stub_scm",(void*)f_23},
{"f_26:stub_scm",(void*)f_26},
{"f_31:stub_scm",(void*)f_31},
{"f_35:stub_scm",(void*)f_35},
{"f_29:stub_scm",(void*)f_29},
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
