/* Generated from c-backend.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:30
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: c-backend.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file c-backend.c
   unit: backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[853];
static double C_possibly_force_alignment;


/* from getsize */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2441(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2441(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

/* from getbits */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2437(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2437(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);

#ifdef C_SIXTY_FOUR
return((C_header_bits(lit) >> (24 + 32)) & 0xff);
#else
return((C_header_bits(lit) >> 24) & 0xff);
#endif

C_ret:
#undef return

return C_r;}

C_noret_decl(C_backend_toplevel)
C_externexport void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10148)
static void C_ccall f_10148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10151)
static void C_ccall f_10151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10178)
static void C_ccall f_10178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10174)
static void C_ccall f_10174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10154)
static void C_ccall f_10154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10157)
static void C_ccall f_10157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10170)
static void C_ccall f_10170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10160)
static void C_ccall f_10160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10163)
static void C_ccall f_10163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10166)
static void C_ccall f_10166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9848)
static void C_ccall f_9848(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10124)
static void C_ccall f_10124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10122)
static void C_ccall f_10122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10110)
static void C_ccall f_10110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10080)
static void C_ccall f_10080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10041)
static void C_ccall f_10041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10028)
static void C_ccall f_10028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10024)
static void C_ccall f_10024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9910)
static void C_ccall f_9910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9857)
static C_word C_fcall f_9857(C_word *a,C_word t0);
C_noret_decl(f_9241)
static void C_ccall f_9241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9352)
static void C_fcall f_9352(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9517)
static void C_ccall f_9517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9544)
static void C_fcall f_9544(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9722)
static void C_ccall f_9722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9725)
static void C_ccall f_9725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9728)
static void C_ccall f_9728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9731)
static void C_ccall f_9731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9701)
static void C_ccall f_9701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9704)
static void C_ccall f_9704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9707)
static void C_ccall f_9707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9710)
static void C_ccall f_9710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9680)
static void C_ccall f_9680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9683)
static void C_ccall f_9683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9686)
static void C_ccall f_9686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9689)
static void C_ccall f_9689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9643)
static void C_ccall f_9643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9646)
static void C_ccall f_9646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9649)
static void C_ccall f_9649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9652)
static void C_ccall f_9652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9622)
static void C_ccall f_9622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9625)
static void C_ccall f_9625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9628)
static void C_ccall f_9628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9631)
static void C_ccall f_9631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9601)
static void C_ccall f_9601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9604)
static void C_ccall f_9604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9607)
static void C_ccall f_9607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9610)
static void C_ccall f_9610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9580)
static void C_ccall f_9580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9583)
static void C_ccall f_9583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9586)
static void C_ccall f_9586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9589)
static void C_ccall f_9589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9559)
static void C_ccall f_9559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9562)
static void C_ccall f_9562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9565)
static void C_ccall f_9565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9568)
static void C_ccall f_9568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9521)
static void C_fcall f_9521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9487)
static void C_ccall f_9487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9490)
static void C_ccall f_9490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9493)
static void C_ccall f_9493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9496)
static void C_ccall f_9496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9466)
static void C_ccall f_9466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9469)
static void C_ccall f_9469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9472)
static void C_ccall f_9472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9475)
static void C_ccall f_9475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9445)
static void C_ccall f_9445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9448)
static void C_ccall f_9448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9451)
static void C_ccall f_9451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9454)
static void C_ccall f_9454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9421)
static void C_ccall f_9421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9424)
static void C_ccall f_9424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9427)
static void C_ccall f_9427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9430)
static void C_ccall f_9430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9400)
static void C_ccall f_9400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9403)
static void C_ccall f_9403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9406)
static void C_ccall f_9406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9409)
static void C_ccall f_9409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9376)
static void C_ccall f_9376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9379)
static void C_ccall f_9379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9382)
static void C_ccall f_9382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9385)
static void C_ccall f_9385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9355)
static void C_ccall f_9355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9358)
static void C_ccall f_9358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9361)
static void C_ccall f_9361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9364)
static void C_ccall f_9364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9331)
static void C_ccall f_9331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9334)
static void C_ccall f_9334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9337)
static void C_ccall f_9337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9340)
static void C_ccall f_9340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9310)
static void C_ccall f_9310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9313)
static void C_ccall f_9313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9316)
static void C_ccall f_9316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9319)
static void C_ccall f_9319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9243)
static void C_fcall f_9243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8751)
static void C_ccall f_8751(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8781)
static void C_fcall f_8781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8808)
static void C_fcall f_8808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9003)
static void C_fcall f_9003(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9012)
static void C_fcall f_9012(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9021)
static void C_ccall f_9021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9048)
static void C_fcall f_9048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9125)
static void C_ccall f_9125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8753)
static void C_fcall f_8753(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7867)
static void C_ccall f_7867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7944)
static void C_fcall f_7944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8046)
static void C_fcall f_8046(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8079)
static void C_fcall f_8079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8175)
static void C_fcall f_8175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8187)
static void C_fcall f_8187(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8247)
static void C_fcall f_8247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8264)
static void C_fcall f_8264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8281)
static void C_fcall f_8281(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8320)
static void C_fcall f_8320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8337)
static void C_fcall f_8337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8354)
static void C_fcall f_8354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8371)
static void C_fcall f_8371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8388)
static void C_fcall f_8388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8405)
static void C_fcall f_8405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8422)
static void C_fcall f_8422(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8434)
static void C_ccall f_8434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8441)
static void C_ccall f_8441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8451)
static void C_fcall f_8451(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8491)
static void C_ccall f_8491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8461)
static void C_fcall f_8461(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8449)
static void C_ccall f_8449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8412)
static void C_ccall f_8412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8395)
static void C_ccall f_8395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8378)
static void C_ccall f_8378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8361)
static void C_ccall f_8361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8344)
static void C_ccall f_8344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8327)
static void C_ccall f_8327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8292)
static void C_ccall f_8292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8302)
static void C_ccall f_8302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8300)
static void C_ccall f_8300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8296)
static void C_ccall f_8296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8288)
static void C_ccall f_8288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8275)
static void C_ccall f_8275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8206)
static void C_fcall f_8206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7874)
static void C_fcall f_7874(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7869)
static void C_fcall f_7869(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7806)
static void C_ccall f_7806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7812)
static void C_ccall f_7812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7821)
static void C_ccall f_7821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7832)
static void C_ccall f_7832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7836)
static void C_ccall f_7836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7827)
static void C_ccall f_7827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7308)
static void C_ccall f_7308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7314)
static void C_fcall f_7314(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7789)
static void C_ccall f_7789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7322)
static void C_fcall f_7322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7326)
static void C_ccall f_7326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7335)
static void C_ccall f_7335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7690)
static void C_ccall f_7690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7786)
static void C_ccall f_7786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7693)
static void C_ccall f_7693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7696)
static void C_ccall f_7696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7699)
static void C_ccall f_7699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7702)
static void C_ccall f_7702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7735)
static void C_fcall f_7735(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7705)
static void C_ccall f_7705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7733)
static void C_ccall f_7733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7708)
static void C_ccall f_7708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7711)
static void C_ccall f_7711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7714)
static void C_ccall f_7714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7353)
static void C_fcall f_7353(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7362)
static void C_fcall f_7362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7374)
static void C_fcall f_7374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7386)
static void C_fcall f_7386(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7392)
static void C_ccall f_7392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7431)
static void C_fcall f_7431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7396)
static void C_fcall f_7396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6994)
static void C_ccall f_6994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7000)
static void C_fcall f_7000(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7295)
static void C_ccall f_7295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7008)
static void C_fcall f_7008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7012)
static void C_ccall f_7012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7292)
static void C_ccall f_7292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7024)
static void C_ccall f_7024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7030)
static void C_ccall f_7030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7033)
static void C_ccall f_7033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7036)
static void C_ccall f_7036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7039)
static void C_ccall f_7039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7042)
static void C_ccall f_7042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7045)
static void C_ccall f_7045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7048)
static void C_ccall f_7048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7051)
static void C_ccall f_7051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7281)
static void C_ccall f_7281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7063)
static void C_ccall f_7063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7066)
static void C_ccall f_7066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7069)
static void C_ccall f_7069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7072)
static void C_ccall f_7072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7075)
static void C_ccall f_7075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7172)
static void C_ccall f_7172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7174)
static void C_fcall f_7174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7181)
static void C_fcall f_7181(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7208)
static void C_ccall f_7208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7211)
static void C_ccall f_7211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7214)
static void C_ccall f_7214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7190)
static void C_ccall f_7190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7194)
static void C_ccall f_7194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7198)
static void C_ccall f_7198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7078)
static void C_ccall f_7078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7081)
static void C_ccall f_7081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7114)
static void C_ccall f_7114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7148)
static void C_ccall f_7148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7117)
static void C_ccall f_7117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7120)
static void C_ccall f_7120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7123)
static void C_ccall f_7123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7090)
static void C_ccall f_7090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7093)
static void C_ccall f_7093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7084)
static void C_ccall f_7084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6954)
static void C_ccall f_6954(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6960)
static void C_fcall f_6960(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6972)
static void C_ccall f_6972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6900)
static void C_ccall f_6900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6904)
static void C_ccall f_6904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6909)
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6938)
static void C_ccall f_6938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6884)
static void C_ccall f_6884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6890)
static void C_ccall f_6890(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6868)
static void C_ccall f_6868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6874)
static void C_ccall f_6874(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6788)
static void C_fcall f_6788(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6817)
static void C_fcall f_6817(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6720)
static void C_fcall f_6720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6765)
static void C_ccall f_6765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6709)
static void C_ccall f_6709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6712)
static void C_ccall f_6712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6715)
static void C_ccall f_6715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6673)
static void C_ccall f_6673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6682)
static void C_ccall f_6682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6685)
static void C_ccall f_6685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6688)
static void C_ccall f_6688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6691)
static void C_ccall f_6691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6694)
static void C_ccall f_6694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6697)
static void C_ccall f_6697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_fcall f_5900(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_fcall f_5906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6655)
static void C_ccall f_6655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5914)
static void C_fcall f_5914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5924)
static void C_ccall f_5924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5936)
static void C_fcall f_5936(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_ccall f_5966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6621)
static void C_ccall f_6621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6585)
static void C_ccall f_6585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6588)
static void C_ccall f_6588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6604)
static void C_ccall f_6604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6607)
static void C_ccall f_6607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5984)
static void C_ccall f_5984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6554)
static void C_fcall f_6554(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6557)
static void C_ccall f_6557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6002)
static void C_fcall f_6002(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6514)
static void C_fcall f_6514(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6516)
static void C_fcall f_6516(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6526)
static void C_ccall f_6526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6459)
static void C_fcall f_6459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6423)
static void C_fcall f_6423(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6384)
static void C_ccall f_6384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6390)
static void C_fcall f_6390(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6393)
static void C_ccall f_6393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6344)
static void C_fcall f_6344(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6303)
static void C_ccall f_6303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6237)
static void C_ccall f_6237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6240)
static void C_ccall f_6240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6243)
static void C_ccall f_6243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6246)
static void C_ccall f_6246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6249)
static void C_ccall f_6249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6034)
static void C_fcall f_6034(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6169)
static void C_ccall f_6169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6184)
static void C_ccall f_6184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6175)
static void C_ccall f_6175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6046)
static void C_ccall f_6046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6073)
static void C_ccall f_6073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6094)
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6014)
static void C_ccall f_6014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5888)
static void C_fcall f_5888(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5811)
static void C_fcall f_5811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_fcall f_5826(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5842)
static void C_fcall f_5842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5669)
static void C_fcall f_5669(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5676)
static void C_fcall f_5676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5765)
static void C_fcall f_5765(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5475)
static void C_fcall f_5475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5638)
static void C_fcall f_5638(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5552)
static void C_fcall f_5552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5420)
static void C_fcall f_5420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_fcall f_5426(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_ccall f_5436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5090)
static void C_fcall f_5090(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5279)
static void C_fcall f_5279(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5287)
static void C_fcall f_5287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5291)
static void C_ccall f_5291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5297)
static void C_ccall f_5297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5306)
static void C_fcall f_5306(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_fcall f_5309(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_fcall f_5355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5373)
static void C_ccall f_5373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5369)
static void C_ccall f_5369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5327)
static void C_ccall f_5327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_fcall f_5228(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_fcall f_5236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5246)
static void C_ccall f_5246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5252)
static void C_ccall f_5252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5129)
static void C_fcall f_5129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5147)
static void C_ccall f_5147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5159)
static void C_ccall f_5159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5168)
static void C_ccall f_5168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5182)
static void C_ccall f_5182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5093)
static void C_fcall f_5093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5106)
static void C_fcall f_5106(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_fcall f_4750(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4823)
static void C_fcall f_4823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4831)
static void C_fcall f_4831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4841)
static void C_fcall f_4841(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4850)
static void C_ccall f_4850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4853)
static void C_ccall f_4853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4856)
static void C_ccall f_4856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_fcall f_4862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5008)
static void C_fcall f_5008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5016)
static void C_fcall f_5016(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4955)
static void C_ccall f_4955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4958)
static void C_ccall f_4958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4961)
static void C_ccall f_4961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11016)
static void C_ccall f11016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4927)
static void C_fcall f_4927(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4757)
static void C_ccall f_4757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_fcall f_4762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4786)
static void C_fcall f_4786(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_fcall f_4579(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_fcall f_4722(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_fcall f_4600(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4669)
static void C_fcall f_4669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4642)
static void C_fcall f_4642(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4622)
static void C_ccall f_4622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4625)
static void C_ccall f_4625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4410)
static void C_fcall f_4410(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4454)
static void C_ccall f_4454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_fcall f_4483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4413)
static void C_fcall f_4413(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4378)
static void C_fcall f_4378(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_fcall f_2625(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4279)
static void C_fcall f_4279(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4207)
static void C_ccall f_4207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f10988)
static void C_ccall f10988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3877)
static void C_fcall f_3877(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3827)
static void C_fcall f_3827(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3353)
static void C_fcall f_3353(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_fcall f_3359(C_word t0,C_word t1) C_noret;
C_noret_decl(f10980)
static void C_ccall f10980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3569)
static void C_fcall f_3569(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_fcall f_3679(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3637)
static void C_ccall f_3637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f10975)
static void C_ccall f10975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3470)
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_fcall f_3478(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_fcall f_3428(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f10967)
static void C_ccall f10967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f10962)
static void C_ccall f10962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f10957)
static void C_ccall f10957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_fcall f_3066(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3074)
static void C_fcall f_3074(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_fcall f_2822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2770)
static void C_ccall f_2770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_fcall f_2580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_fcall f_2545(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2498)
static void C_fcall f_2498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_9352)
static void C_fcall trf_9352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9352(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9352(t0,t1);}

C_noret_decl(trf_9544)
static void C_fcall trf_9544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9544(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9544(t0,t1);}

C_noret_decl(trf_9521)
static void C_fcall trf_9521(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9521(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9521(t0,t1,t2);}

C_noret_decl(trf_9243)
static void C_fcall trf_9243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9243(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9243(t0,t1);}

C_noret_decl(trf_8781)
static void C_fcall trf_8781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8781(t0,t1);}

C_noret_decl(trf_8808)
static void C_fcall trf_8808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8808(t0,t1);}

C_noret_decl(trf_9003)
static void C_fcall trf_9003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9003(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9003(t0,t1);}

C_noret_decl(trf_9012)
static void C_fcall trf_9012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9012(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9012(t0,t1);}

C_noret_decl(trf_9048)
static void C_fcall trf_9048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9048(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9048(t0,t1);}

C_noret_decl(trf_8753)
static void C_fcall trf_8753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8753(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8753(t0,t1);}

C_noret_decl(trf_7944)
static void C_fcall trf_7944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7944(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7944(t0,t1);}

C_noret_decl(trf_8046)
static void C_fcall trf_8046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8046(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8046(t0,t1);}

C_noret_decl(trf_8079)
static void C_fcall trf_8079(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8079(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8079(t0,t1);}

C_noret_decl(trf_8175)
static void C_fcall trf_8175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8175(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8175(t0,t1);}

C_noret_decl(trf_8187)
static void C_fcall trf_8187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8187(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8187(t0,t1);}

C_noret_decl(trf_8247)
static void C_fcall trf_8247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8247(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8247(t0,t1);}

C_noret_decl(trf_8264)
static void C_fcall trf_8264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8264(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8264(t0,t1);}

C_noret_decl(trf_8281)
static void C_fcall trf_8281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8281(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8281(t0,t1);}

C_noret_decl(trf_8320)
static void C_fcall trf_8320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8320(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8320(t0,t1);}

C_noret_decl(trf_8337)
static void C_fcall trf_8337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8337(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8337(t0,t1);}

C_noret_decl(trf_8354)
static void C_fcall trf_8354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8354(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8354(t0,t1);}

C_noret_decl(trf_8371)
static void C_fcall trf_8371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8371(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8371(t0,t1);}

C_noret_decl(trf_8388)
static void C_fcall trf_8388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8388(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8388(t0,t1);}

C_noret_decl(trf_8405)
static void C_fcall trf_8405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8405(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8405(t0,t1);}

C_noret_decl(trf_8422)
static void C_fcall trf_8422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8422(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8422(t0,t1);}

C_noret_decl(trf_8451)
static void C_fcall trf_8451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8451(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8451(t0,t1,t2);}

C_noret_decl(trf_8461)
static void C_fcall trf_8461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8461(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8461(t0,t1);}

C_noret_decl(trf_8206)
static void C_fcall trf_8206(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8206(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8206(t0,t1,t2);}

C_noret_decl(trf_7874)
static void C_fcall trf_7874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7874(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7874(t0,t1,t2);}

C_noret_decl(trf_7869)
static void C_fcall trf_7869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7869(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7869(t0,t1);}

C_noret_decl(trf_7314)
static void C_fcall trf_7314(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7314(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7314(t0,t1,t2);}

C_noret_decl(trf_7322)
static void C_fcall trf_7322(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7322(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7322(t0,t1,t2);}

C_noret_decl(trf_7735)
static void C_fcall trf_7735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7735(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7735(t0,t1,t2,t3);}

C_noret_decl(trf_7353)
static void C_fcall trf_7353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7353(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7353(t0,t1);}

C_noret_decl(trf_7362)
static void C_fcall trf_7362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7362(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7362(t0,t1);}

C_noret_decl(trf_7374)
static void C_fcall trf_7374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7374(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7374(t0,t1);}

C_noret_decl(trf_7386)
static void C_fcall trf_7386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7386(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7386(t0,t1);}

C_noret_decl(trf_7431)
static void C_fcall trf_7431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7431(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7431(t0,t1);}

C_noret_decl(trf_7396)
static void C_fcall trf_7396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7396(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7396(t0,t1,t2);}

C_noret_decl(trf_7000)
static void C_fcall trf_7000(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7000(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7000(t0,t1,t2);}

C_noret_decl(trf_7008)
static void C_fcall trf_7008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7008(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7008(t0,t1,t2);}

C_noret_decl(trf_7174)
static void C_fcall trf_7174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7174(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7174(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7181)
static void C_fcall trf_7181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7181(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7181(t0,t1);}

C_noret_decl(trf_6960)
static void C_fcall trf_6960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6960(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6960(t0,t1,t2);}

C_noret_decl(trf_6909)
static void C_fcall trf_6909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6909(t0,t1,t2);}

C_noret_decl(trf_6788)
static void C_fcall trf_6788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6788(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6788(t0,t1,t2);}

C_noret_decl(trf_6817)
static void C_fcall trf_6817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6817(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6817(t0,t1);}

C_noret_decl(trf_6720)
static void C_fcall trf_6720(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6720(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6720(t0,t1,t2);}

C_noret_decl(trf_5900)
static void C_fcall trf_5900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5900(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5900(t0,t1);}

C_noret_decl(trf_5906)
static void C_fcall trf_5906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5906(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5906(t0,t1,t2);}

C_noret_decl(trf_5914)
static void C_fcall trf_5914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5914(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5914(t0,t1,t2);}

C_noret_decl(trf_5936)
static void C_fcall trf_5936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5936(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5936(t0,t1);}

C_noret_decl(trf_6554)
static void C_fcall trf_6554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6554(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6554(t0,t1);}

C_noret_decl(trf_6002)
static void C_fcall trf_6002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6002(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6002(t0,t1);}

C_noret_decl(trf_6514)
static void C_fcall trf_6514(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6514(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6514(t0,t1);}

C_noret_decl(trf_6516)
static void C_fcall trf_6516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6516(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6516(t0,t1,t2,t3);}

C_noret_decl(trf_6459)
static void C_fcall trf_6459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6459(t0,t1);}

C_noret_decl(trf_6423)
static void C_fcall trf_6423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6423(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6423(t0,t1);}

C_noret_decl(trf_6390)
static void C_fcall trf_6390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6390(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6390(t0,t1);}

C_noret_decl(trf_6344)
static void C_fcall trf_6344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6344(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6344(t0,t1);}

C_noret_decl(trf_6034)
static void C_fcall trf_6034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6034(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6034(t0,t1);}

C_noret_decl(trf_6094)
static void C_fcall trf_6094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6094(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6094(t0,t1,t2,t3);}

C_noret_decl(trf_5888)
static void C_fcall trf_5888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5888(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5888(t0,t1,t2,t3);}

C_noret_decl(trf_5811)
static void C_fcall trf_5811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5811(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5811(t0,t1,t2);}

C_noret_decl(trf_5826)
static void C_fcall trf_5826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5826(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5826(t0,t1,t2,t3);}

C_noret_decl(trf_5842)
static void C_fcall trf_5842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5842(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5842(t0,t1);}

C_noret_decl(trf_5669)
static void C_fcall trf_5669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5669(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5669(t0,t1,t2,t3);}

C_noret_decl(trf_5676)
static void C_fcall trf_5676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5676(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5676(t0,t1);}

C_noret_decl(trf_5765)
static void C_fcall trf_5765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5765(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5765(t0,t1);}

C_noret_decl(trf_5475)
static void C_fcall trf_5475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5475(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5475(t0,t1,t2);}

C_noret_decl(trf_5638)
static void C_fcall trf_5638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5638(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5638(t0,t1,t2,t3);}

C_noret_decl(trf_5552)
static void C_fcall trf_5552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5552(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5552(t0,t1,t2);}

C_noret_decl(trf_5420)
static void C_fcall trf_5420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5420(t0,t1);}

C_noret_decl(trf_5426)
static void C_fcall trf_5426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5426(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5426(t0,t1,t2,t3);}

C_noret_decl(trf_5090)
static void C_fcall trf_5090(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5090(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5090(t0,t1);}

C_noret_decl(trf_5279)
static void C_fcall trf_5279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5279(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5279(t0,t1,t2);}

C_noret_decl(trf_5287)
static void C_fcall trf_5287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5287(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5287(t0,t1,t2);}

C_noret_decl(trf_5306)
static void C_fcall trf_5306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5306(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5306(t0,t1);}

C_noret_decl(trf_5309)
static void C_fcall trf_5309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5309(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5309(t0,t1);}

C_noret_decl(trf_5355)
static void C_fcall trf_5355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5355(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5355(t0,t1);}

C_noret_decl(trf_5228)
static void C_fcall trf_5228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5228(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5228(t0,t1,t2);}

C_noret_decl(trf_5236)
static void C_fcall trf_5236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5236(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5236(t0,t1,t2);}

C_noret_decl(trf_5129)
static void C_fcall trf_5129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5129(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5129(t0,t1,t2);}

C_noret_decl(trf_5093)
static void C_fcall trf_5093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5093(t0,t1);}

C_noret_decl(trf_5106)
static void C_fcall trf_5106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5106(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5106(t0,t1,t2,t3);}

C_noret_decl(trf_4750)
static void C_fcall trf_4750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4750(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4750(t0,t1);}

C_noret_decl(trf_4823)
static void C_fcall trf_4823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4823(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4823(t0,t1,t2);}

C_noret_decl(trf_4831)
static void C_fcall trf_4831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4831(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4831(t0,t1,t2);}

C_noret_decl(trf_4841)
static void C_fcall trf_4841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4841(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4841(t0,t1);}

C_noret_decl(trf_4862)
static void C_fcall trf_4862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4862(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4862(t0,t1);}

C_noret_decl(trf_5008)
static void C_fcall trf_5008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5008(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5008(t0,t1,t2);}

C_noret_decl(trf_5016)
static void C_fcall trf_5016(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5016(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5016(t0,t1,t2);}

C_noret_decl(trf_4927)
static void C_fcall trf_4927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4927(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4927(t0,t1);}

C_noret_decl(trf_4762)
static void C_fcall trf_4762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4762(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4762(t0,t1,t2);}

C_noret_decl(trf_4786)
static void C_fcall trf_4786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4786(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4786(t0,t1,t2);}

C_noret_decl(trf_4579)
static void C_fcall trf_4579(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4579(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4579(t0,t1);}

C_noret_decl(trf_4722)
static void C_fcall trf_4722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4722(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4722(t0,t1,t2);}

C_noret_decl(trf_4600)
static void C_fcall trf_4600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4600(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4600(t0,t1,t2,t3);}

C_noret_decl(trf_4669)
static void C_fcall trf_4669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4669(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4669(t0,t1,t2);}

C_noret_decl(trf_4642)
static void C_fcall trf_4642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4642(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4642(t0,t1,t2);}

C_noret_decl(trf_4410)
static void C_fcall trf_4410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4410(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4410(t0,t1);}

C_noret_decl(trf_4483)
static void C_fcall trf_4483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4483(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4483(t0,t1,t2);}

C_noret_decl(trf_4413)
static void C_fcall trf_4413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4413(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4413(t0,t1);}

C_noret_decl(trf_2622)
static void C_fcall trf_2622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2622(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2622(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4378)
static void C_fcall trf_4378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4378(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4378(t0,t1,t2,t3);}

C_noret_decl(trf_2625)
static void C_fcall trf_2625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2625(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2625(t0,t1,t2,t3);}

C_noret_decl(trf_4279)
static void C_fcall trf_4279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4279(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4279(t0,t1,t2,t3);}

C_noret_decl(trf_3869)
static void C_fcall trf_3869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3869(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3869(t0,t1,t2,t3);}

C_noret_decl(trf_3877)
static void C_fcall trf_3877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3877(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3877(t0,t1,t2,t3);}

C_noret_decl(trf_3827)
static void C_fcall trf_3827(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3827(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3827(t0,t1,t2,t3);}

C_noret_decl(trf_3353)
static void C_fcall trf_3353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3353(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3353(t0,t1);}

C_noret_decl(trf_3359)
static void C_fcall trf_3359(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3359(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3359(t0,t1);}

C_noret_decl(trf_3569)
static void C_fcall trf_3569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3569(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3569(t0,t1);}

C_noret_decl(trf_3679)
static void C_fcall trf_3679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3679(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3679(t0,t1);}

C_noret_decl(trf_3470)
static void C_fcall trf_3470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3470(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3470(t0,t1,t2,t3);}

C_noret_decl(trf_3478)
static void C_fcall trf_3478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3478(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3478(t0,t1,t2,t3);}

C_noret_decl(trf_3428)
static void C_fcall trf_3428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3428(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3428(t0,t1,t2,t3);}

C_noret_decl(trf_3066)
static void C_fcall trf_3066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3066(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3066(t0,t1,t2,t3);}

C_noret_decl(trf_3074)
static void C_fcall trf_3074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3074(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3074(t0,t1,t2,t3);}

C_noret_decl(trf_2822)
static void C_fcall trf_2822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2822(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2822(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2580)
static void C_fcall trf_2580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2580(t0,t1,t2);}

C_noret_decl(trf_2545)
static void C_fcall trf_2545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2545(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2545(t0,t1,t2);}

C_noret_decl(trf_2498)
static void C_fcall trf_2498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2498(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2498(t0,t1,t2);}

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
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
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

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
C_backend_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("backend_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2452)){
C_save(t1);
C_rereclaim2(2452*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,853);
lf[0]=C_h_intern(&lf[0],15,"\010compileroutput");
lf[1]=C_h_intern(&lf[1],12,"\010compilergen");
lf[2]=C_h_intern(&lf[2],7,"newline");
lf[3]=C_h_intern(&lf[3],7,"display");
lf[4]=C_h_intern(&lf[4],17,"\010compilergen-list");
lf[5]=C_h_intern(&lf[5],11,"intersperse");
lf[6]=C_h_intern(&lf[6],18,"\010compilerunique-id");
lf[7]=C_h_intern(&lf[7],22,"\010compilergenerate-code");
lf[8]=C_h_intern(&lf[8],13,"\010compilerbomb");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\021can\047t find lambda");
lf[10]=C_h_intern(&lf[10],17,"lambda-literal-id");
lf[11]=C_h_intern(&lf[11],4,"find");
lf[12]=C_h_intern(&lf[12],14,"\004coreimmediate");
lf[13]=C_h_intern(&lf[13],4,"bool");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[16]=C_h_intern(&lf[16],4,"char");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\021C_make_character(");
lf[18]=C_h_intern(&lf[18],3,"nil");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_LIST");
lf[20]=C_h_intern(&lf[20],3,"fix");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fix(");
lf[22]=C_h_intern(&lf[22],3,"eof");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_FILE");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\015bad immediate");
lf[25]=C_h_intern(&lf[25],12,"\004coreliteral");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\013((C_word)li");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[29]=C_h_intern(&lf[29],2,"if");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\013if(C_truep(");
lf[33]=C_h_intern(&lf[33],9,"\004coreproc");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[35]=C_h_intern(&lf[35],9,"\004corebind");
lf[36]=C_h_intern(&lf[36],8,"\004coreref");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\002)[");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word*)");
lf[39]=C_h_intern(&lf[39],10,"\004coreunbox");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\004)[1]");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word*)");
lf[42]=C_h_intern(&lf[42],13,"\004coreupdate_i");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[44]=C_h_intern(&lf[44],11,"\004coreupdate");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002)+");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word *)");
lf[48]=C_h_intern(&lf[48],16,"\004coreupdatebox_i");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[51]=C_h_intern(&lf[51],14,"\004coreupdatebox");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\004)+1,");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word *)");
lf[54]=C_h_intern(&lf[54],12,"\004coreclosure");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\021tmp=(C_word)a,a+=");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\005,tmp)");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\002a[");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\002]=");
lf[59]=C_h_intern(&lf[59],4,"iota");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\023(*a=C_CLOSURE_TYPE|");
lf[61]=C_h_intern(&lf[61],8,"\004corebox");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\030,tmp=(C_word)a,a+=2,tmp)");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\031(*a=C_VECTOR_TYPE|1,a[1]=");
lf[64]=C_h_intern(&lf[64],10,"\004corelocal");
lf[65]=C_h_intern(&lf[65],13,"\004coresetlocal");
lf[66]=C_h_intern(&lf[66],11,"\004coreglobal");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\017C_retrieve2(lf[");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\002],");
lf[71]=C_h_intern(&lf[71],21,"\010compilerc-ify-string");
lf[72]=C_h_intern(&lf[72],14,"symbol->string");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\016C_retrieve(lf[");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[77]=C_h_intern(&lf[77],14,"\004coresetglobal");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\012 /* (set! ");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\011 ...) */,");
lf[80]=C_h_intern(&lf[80],17,"string-translate*");
lf[81]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[82]=C_h_intern(&lf[82],8,"->string");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\015C_mutate(&lf[");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate((C_word*)lf[");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\003]+1");
lf[87]=C_h_intern(&lf[87],16,"\004coresetglobal_i");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\005] /* ");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\005 */ =");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\024C_set_block_item(lf[");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\005] /* ");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\006 */,0,");
lf[95]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[96]=C_h_intern(&lf[96],14,"\004coreundefined");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\022C_SCHEME_UNDEFINED");
lf[98]=C_h_intern(&lf[98],9,"\004corecall");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\002c=");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[104]=C_h_intern(&lf[104],26,"lambda-literal-temporaries");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[106]=C_h_intern(&lf[106],22,"lambda-literal-looping");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\020C_retrieve_proc(");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\030C_retrieve2_symbol_proc(");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[113]=C_h_intern(&lf[113],13,"string-append");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\020C_retrieve_proc(");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\032C_retrieve_symbol_proc(lf[");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[129]=C_h_intern(&lf[129],6,"unsafe");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\024(void*)(*((C_word*)t");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\004+1))");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\021C_retrieve_proc(t");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[134]=C_h_intern(&lf[134],28,"\010compilerno-procedure-checks");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[137]=C_h_intern(&lf[137],24,"\010compileremit-trace-info");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\011C_trace(\042");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\003\042);");
lf[140]=C_h_intern(&lf[140],16,"string-translate");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\003/* ");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[145]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[146]=C_h_intern(&lf[146],27,"lambda-literal-closure-size");
lf[147]=C_h_intern(&lf[147],28,"\010compilersource-info->string");
lf[148]=C_h_intern(&lf[148],12,"\004corerecurse");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\003t0,");
lf[152]=C_h_intern(&lf[152],16,"\004coredirect_call");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i(&a,");
lf[154]=C_h_intern(&lf[154],13,"\004corecallunit");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel(");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\024,C_SCHEME_UNDEFINED,");
lf[159]=C_h_intern(&lf[159],11,"\004corereturn");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\007return(");
lf[162]=C_h_intern(&lf[162],11,"\004coreinline");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[164]=C_h_intern(&lf[164],20,"\004coreinline_allocate");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\004(&a,");
lf[167]=C_h_intern(&lf[167],15,"\004coreinline_ref");
lf[168]=C_h_intern(&lf[168],34,"\010compilerforeign-result-conversion");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[170]=C_h_intern(&lf[170],18,"\004coreinline_update");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[173]=C_h_intern(&lf[173],36,"\010compilerforeign-argument-conversion");
lf[174]=C_h_intern(&lf[174],33,"\010compilerforeign-type-declaration");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[176]=C_h_intern(&lf[176],19,"\004coreinline_loc_ref");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\003*((");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_data_pointer(");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[182]=C_h_intern(&lf[182],22,"\004coreinline_loc_update");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\003))=");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\004((*(");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_data_pointer(");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[188]=C_h_intern(&lf[188],11,"\004coreswitch");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\010default:");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\005case ");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\007switch(");
lf[193]=C_h_intern(&lf[193],9,"\004corecond");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\002)\077");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\011(C_truep(");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\010bad form");
lf[197]=C_h_intern(&lf[197],13,"pair-for-each");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[199]=C_h_intern(&lf[199],30,"\010compilerexternal-protos-first");
lf[200]=C_h_intern(&lf[200],50,"\010compilergenerate-foreign-callback-stub-prototypes");
lf[201]=C_h_intern(&lf[201],22,"foreign-callback-stubs");
lf[202]=C_h_intern(&lf[202],29,"\010compilerforeign-declarations");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\002*/");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\012#include \042");
lf[205]=C_h_intern(&lf[205],28,"\010compilertarget-include-file");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[207]=C_h_intern(&lf[207],18,"\010compilerunit-name");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\011   unit: ");
lf[209]=C_h_intern(&lf[209],19,"\010compilerused-units");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\017   used units: ");
lf[211]=C_h_intern(&lf[211],27,"\010compilercompiler-arguments");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\022/* Generated from ");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\030 by the CHICKEN compiler");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\0000   http://www.call-with-current-continuation.org");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\021   command line: ");
lf[217]=C_h_intern(&lf[217],18,"string-intersperse");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[221]=C_h_intern(&lf[221],7,"\003sysmap");
lf[222]=C_h_intern(&lf[222],12,"string-split");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[224]=C_h_intern(&lf[224],15,"chicken-version");
lf[225]=C_h_intern(&lf[225],18,"\003sysdecode-seconds");
lf[226]=C_h_intern(&lf[226],15,"current-seconds");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\002};");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\002,0");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_char C_TLS li");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\026[] C_aligned={C_lihdr(");
lf[231]=C_h_intern(&lf[231],23,"\003syslambda-info->string");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000)static double C_possibly_force_alignment;");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\027static C_TLS C_word lf[");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel)");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\036C_externimport void C_ccall C_");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000._toplevel(C_word c,C_word d,C_word k) C_noret;");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000+static C_PTABLE_ENTRY *create_ptable(void);");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[241]=C_h_intern(&lf[241],9,"make-list");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\007,C_word");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\025typedef void (*C_proc");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\010)(C_word");
lf[245]=C_h_intern(&lf[245],4,"none");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\016,...) C_noret;");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\010 C_noret");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word *a");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[256]=C_h_intern(&lf[256],8,"toplevel");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\034C_externexport void C_ccall ");
lf[259]=C_h_intern(&lf[259],27,"\010compileremit-unsafe-marker");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\0001C_externexport void C_dynamic_and_unsafe(void) {}");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[272]=C_h_intern(&lf[272],21,"small-parameter-limit");
lf[273]=C_h_intern(&lf[273],11,"lset-adjoin");
lf[274]=C_h_intern(&lf[274],1,"=");
lf[275]=C_h_intern(&lf[275],32,"lambda-literal-callee-signatures");
lf[276]=C_h_intern(&lf[276],24,"lambda-literal-allocated");
lf[277]=C_h_intern(&lf[277],21,"lambda-literal-direct");
lf[278]=C_h_intern(&lf[278],33,"lambda-literal-rest-argument-mode");
lf[279]=C_h_intern(&lf[279],28,"lambda-literal-rest-argument");
lf[280]=C_h_intern(&lf[280],27,"\010compilermake-variable-list");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[282]=C_h_intern(&lf[282],27,"lambda-literal-customizable");
lf[283]=C_h_intern(&lf[283],29,"lambda-literal-argument-count");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\020C_adjust_stack(-");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\010=C_pick(");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[290]=C_h_intern(&lf[290],27,"\010compilermake-argument-list");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\006(a,n);");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\007_vector");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\017=C_restore_rest");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n+1);");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n*3);");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\022n=C_rest_count(0);");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\006int n;");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word *a,t");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[311]=C_h_intern(&lf[311],12,"\003sysfor-each");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\016(void *dummy){");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000 (void *dummy) C_regparm C_noret;");
lf[331]=C_h_intern(&lf[331],6,"vector");
lf[332]=C_h_intern(&lf[332],23,"lambda-literal-external");
lf[333]=C_h_intern(&lf[333],17,"get-output-string");
lf[334]=C_h_intern(&lf[334],19,"\003syswrite-char/port");
lf[335]=C_h_intern(&lf[335],5,"write");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[337]=C_h_intern(&lf[337],18,"open-output-string");
lf[338]=C_h_intern(&lf[338],25,"\010compilerwords-per-flonum");
lf[339]=C_h_intern(&lf[339],6,"reduce");
lf[340]=C_h_intern(&lf[340],1,"+");
lf[341]=C_h_intern(&lf[341],12,"vector->list");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\035type of literal not supported");
lf[343]=C_h_intern(&lf[343],14,"\010compilerwords");
lf[344]=C_h_intern(&lf[344],15,"\003sysbytevector\077");
lf[345]=C_h_intern(&lf[345],32,"\010compilerblock-variable-literal\077");
lf[346]=C_h_intern(&lf[346],19,"\010compilerimmediate\077");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\007=C_fix(");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[349]=C_h_intern(&lf[349],19,"\003sysundefined-value");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\024=C_SCHEME_UNDEFINED;");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\022=C_make_character(");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\014C_h_intern(&");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\001=");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\026=C_SCHEME_END_OF_LIST;");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[360]=C_h_intern(&lf[360],23,"\010compilerencode-literal");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\034=C_decode_literal(C_heaptop,");
lf[362]=C_h_intern(&lf[362],20,"\010compilerbig-fixnum\077");
lf[363]=C_h_intern(&lf[363],6,"modulo");
lf[364]=C_h_intern(&lf[364],3,"fx/");
lf[365]=C_h_intern(&lf[365],14,"\003syscopy-bytes");
lf[366]=C_h_intern(&lf[366],11,"make-string");
lf[367]=C_h_intern(&lf[367],19,"lambda-literal-body");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\022C_word *a=C_alloc(");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\004);}}");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[380]=C_h_intern(&lf[380],4,"list");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000#=C_restore_rest(a,C_rest_count(0));");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000*=C_restore_rest_vector(a,C_rest_count(0));");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\015a=C_alloc((c-");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\005)*3);");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\012((void*)tr");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\005,NULL");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\012((void*)tr");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\022C_register_lf2(lf,");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\022,create_ptable());");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\023C_initialize_lf(lf,");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\017if(!C_demand_2(");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\015C_rereclaim2(");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\024*sizeof(C_word), 1);");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\016t1=C_restore;}");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\030C_check_nursery_minimum(");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\015if(!C_demand(");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000,C_reclaim((void*)toplevel_trampoline,NULL);}");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\027toplevel_initialized=1;");
lf[419]=C_h_intern(&lf[419],26,"\010compilertarget-stack-size");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\017C_resize_stack(");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[422]=C_h_intern(&lf[422],30,"\010compilertarget-heap-shrinkage");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\021C_heap_shrinkage=");
lf[424]=C_h_intern(&lf[424],27,"\010compilertarget-heap-growth");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\016C_heap_growth=");
lf[426]=C_h_intern(&lf[426],33,"\010compilertarget-initial-heap-size");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[429]=C_h_intern(&lf[429],25,"\010compilertarget-heap-size");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\027C_heap_size_is_fixed=1;");
lf[433]=C_h_intern(&lf[433],40,"\010compilerdisable-stack-overflow-checking");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\033C_disable_overflow_check=1;");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000;if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\036else C_toplevel_entry(C_text(\042");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\004\042));");
lf[439]=C_h_intern(&lf[439],4,"fold");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\035if(!C_demand(c*C_SIZEOF_PAIR+");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[442]=C_h_intern(&lf[442],28,"\010compilerinsert-timer-checks");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[447]=C_h_intern(&lf[447],23,"\010compilerno-argc-checks");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\004,c2,");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\014C_save_rest(");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\017C_word *a,c2=c;");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\012va_list v;");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\026if(!C_stack_probe(a)){");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\027if(!C_stack_probe(&a)){");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\006if(c!=");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\021) C_bad_argc_2(c,");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[465]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[467]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word ab[");
lf[468]=C_decode_literal(C_heaptop,"\376B\000\000\010],*a=ab;");
lf[469]=C_decode_literal(C_heaptop,"\376B\000\000\016C_stack_check;");
lf[470]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[471]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[472]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[473]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[474]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[475]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[476]=C_decode_literal(C_heaptop,"\376B\000\000\004,...");
lf[477]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word *a");
lf[478]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[479]=C_decode_literal(C_heaptop,"\376B\000\000!C_noret_decl(toplevel_trampoline)");
lf[480]=C_decode_literal(C_heaptop,"\376B\000\000Gstatic void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;");
lf[481]=C_decode_literal(C_heaptop,"\376B\000\000\077C_regparm static void C_fcall toplevel_trampoline(void *dummy){");
lf[482]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000\042(2,C_SCHEME_UNDEFINED,C_restore);}");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000\017void C_ccall C_");
lf[485]=C_decode_literal(C_heaptop,"\376B\000\000\022C_main_entry_point");
lf[486]=C_decode_literal(C_heaptop,"\376B\000\000(static C_TLS int toplevel_initialized=0;");
lf[487]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[488]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\003/* ");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[494]=C_h_intern(&lf[494],16,"\010compilercleanup");
lf[495]=C_h_intern(&lf[495],18,"\010compilerdebugging");
lf[496]=C_h_intern(&lf[496],1,"o");
lf[497]=C_decode_literal(C_heaptop,"\376B\000\000 dropping unused closure argument");
lf[498]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[499]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[502]=C_h_intern(&lf[502],18,"\010compilerreal-name");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\021/* end of file */");
lf[504]=C_h_intern(&lf[504],25,"emit-procedure-table-info");
lf[505]=C_h_intern(&lf[505],31,"generate-foreign-callback-stubs");
lf[506]=C_h_intern(&lf[506],31,"\010compilergenerate-foreign-stubs");
lf[507]=C_h_intern(&lf[507],29,"\010compilerforeign-lambda-stubs");
lf[508]=C_h_intern(&lf[508],36,"\010compilergenerate-external-variables");
lf[509]=C_h_intern(&lf[509],27,"\010compilerexternal-variables");
lf[510]=C_h_intern(&lf[510],1,"p");
lf[511]=C_decode_literal(C_heaptop,"\376B\000\000\030code generation phase...");
lf[512]=C_decode_literal(C_heaptop,"\376B\000\000\001{");
lf[513]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000\016return ptable;");
lf[515]=C_decode_literal(C_heaptop,"\376B\000\000\005#else");
lf[516]=C_decode_literal(C_heaptop,"\376B\000\000\014return NULL;");
lf[517]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[519]=C_decode_literal(C_heaptop,"\376B\000\000*static C_PTABLE_ENTRY *create_ptable(void)");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[521]=C_decode_literal(C_heaptop,"\376B\000\000\015{NULL,NULL}};");
lf[522]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\013_toplevel},");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000\014C_toplevel},");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\002},");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\002{\042");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\011\042,(void*)");
lf[528]=C_h_intern(&lf[528],29,"\010compilerstring->c-identifier");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\035static C_PTABLE_ENTRY ptable[");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000\005] = {");
lf[532]=C_h_intern(&lf[532],11,"string-copy");
lf[533]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[534]=C_h_intern(&lf[534],13,"list-tabulate");
lf[535]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[537]=C_h_intern(&lf[537],41,"\010compilergenerate-foreign-callback-header");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\017C_externexport ");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[540]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[541]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[542]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[543]=C_decode_literal(C_heaptop,"\376B\000\000\015#undef return");
lf[544]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ret:");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[546]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[547]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[549]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[550]=C_h_intern(&lf[550],4,"void");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[552]=C_decode_literal(C_heaptop,"\376B\000\000\004C_r=");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\0003int C_level=C_save_callback_continuation(&C_a,C_k);");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\0002C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[563]=C_decode_literal(C_heaptop,"\376B\000\000\014) C_regparm;");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static C_word C_fcall ");
lf[565]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[567]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[569]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_word C_fcall ");
lf[570]=C_decode_literal(C_heaptop,"\376B\000\000\042#define return(x) C_cblock C_r = (");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\000\036(x))); goto C_ret; C_cblockend");
lf[572]=C_decode_literal(C_heaptop,"\376B\000\000\010/* from ");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[574]=C_h_intern(&lf[574],21,"foreign-stub-callback");
lf[575]=C_h_intern(&lf[575],16,"foreign-stub-cps");
lf[576]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[577]=C_h_intern(&lf[577],27,"foreign-stub-argument-names");
lf[578]=C_h_intern(&lf[578],17,"foreign-stub-body");
lf[579]=C_h_intern(&lf[579],17,"foreign-stub-name");
lf[580]=C_h_intern(&lf[580],24,"foreign-stub-return-type");
lf[581]=C_decode_literal(C_heaptop,"\376B\000\000\014C_word C_buf");
lf[582]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[583]=C_h_intern(&lf[583],27,"foreign-stub-argument-types");
lf[584]=C_h_intern(&lf[584],19,"\010compilerreal-name2");
lf[585]=C_h_intern(&lf[585],15,"foreign-stub-id");
lf[586]=C_h_intern(&lf[586],5,"float");
lf[587]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[588]=C_h_intern(&lf[588],8,"c-string");
lf[589]=C_decode_literal(C_heaptop,"\376B\000\000\004+2+(");
lf[590]=C_decode_literal(C_heaptop,"\376B\000\000!==NULL\0771:C_bytestowords(C_strlen(");
lf[591]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[592]=C_h_intern(&lf[592],16,"nonnull-c-string");
lf[593]=C_decode_literal(C_heaptop,"\376B\000\000\033+2+C_bytestowords(C_strlen(");
lf[594]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[595]=C_h_intern(&lf[595],3,"ref");
lf[596]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[597]=C_h_intern(&lf[597],5,"const");
lf[598]=C_h_intern(&lf[598],7,"pointer");
lf[599]=C_h_intern(&lf[599],9,"c-pointer");
lf[600]=C_h_intern(&lf[600],15,"nonnull-pointer");
lf[601]=C_h_intern(&lf[601],17,"nonnull-c-pointer");
lf[602]=C_h_intern(&lf[602],8,"function");
lf[603]=C_h_intern(&lf[603],8,"instance");
lf[604]=C_h_intern(&lf[604],16,"nonnull-instance");
lf[605]=C_h_intern(&lf[605],12,"instance-ref");
lf[606]=C_h_intern(&lf[606],18,"\003syshash-table-ref");
lf[607]=C_h_intern(&lf[607],27,"\010compilerforeign-type-table");
lf[608]=C_h_intern(&lf[608],17,"nonnull-c-string*");
lf[609]=C_h_intern(&lf[609],25,"nonnull-unsigned-c-string");
lf[610]=C_h_intern(&lf[610],26,"nonnull-unsigned-c-string*");
lf[611]=C_h_intern(&lf[611],6,"symbol");
lf[612]=C_h_intern(&lf[612],9,"c-string*");
lf[613]=C_h_intern(&lf[613],17,"unsigned-c-string");
lf[614]=C_h_intern(&lf[614],18,"unsigned-c-string*");
lf[615]=C_h_intern(&lf[615],6,"double");
lf[616]=C_h_intern(&lf[616],16,"unsigned-integer");
lf[617]=C_h_intern(&lf[617],18,"unsigned-integer32");
lf[618]=C_h_intern(&lf[618],4,"long");
lf[619]=C_h_intern(&lf[619],7,"integer");
lf[620]=C_h_intern(&lf[620],9,"integer32");
lf[621]=C_h_intern(&lf[621],13,"unsigned-long");
lf[622]=C_h_intern(&lf[622],6,"number");
lf[623]=C_h_intern(&lf[623],9,"integer64");
lf[624]=C_h_intern(&lf[624],13,"c-string-list");
lf[625]=C_h_intern(&lf[625],14,"c-string-list*");
lf[626]=C_h_intern(&lf[626],3,"int");
lf[627]=C_h_intern(&lf[627],5,"int32");
lf[628]=C_h_intern(&lf[628],5,"short");
lf[629]=C_h_intern(&lf[629],14,"unsigned-short");
lf[630]=C_h_intern(&lf[630],13,"scheme-object");
lf[631]=C_h_intern(&lf[631],13,"unsigned-char");
lf[632]=C_h_intern(&lf[632],12,"unsigned-int");
lf[633]=C_h_intern(&lf[633],14,"unsigned-int32");
lf[634]=C_h_intern(&lf[634],4,"byte");
lf[635]=C_h_intern(&lf[635],13,"unsigned-byte");
lf[636]=C_decode_literal(C_heaptop,"\376B\000\000\002;}");
lf[637]=C_decode_literal(C_heaptop,"\376B\000\000\033C_callback_wrapper((void *)");
lf[638]=C_decode_literal(C_heaptop,"\376B\000\000\007return ");
lf[639]=C_decode_literal(C_heaptop,"\376B\000\000\002x=");
lf[640]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[641]=C_decode_literal(C_heaptop,"\376B\000\000\012C_save(x);");
lf[642]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[643]=C_decode_literal(C_heaptop,"\376B\000\000\035C_callback_adjust_stack(a,s);");
lf[644]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word x,s=");
lf[645]=C_decode_literal(C_heaptop,"\376B\000\000\017,*a=C_alloc(s);");
lf[646]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[647]=C_decode_literal(C_heaptop,"\376B\000\000\010/* from ");
lf[648]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[649]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[650]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[651]=C_h_intern(&lf[651],36,"foreign-callback-stub-argument-types");
lf[652]=C_h_intern(&lf[652],33,"foreign-callback-stub-return-type");
lf[653]=C_h_intern(&lf[653],24,"foreign-callback-stub-id");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[655]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[656]=C_h_intern(&lf[656],32,"foreign-callback-stub-qualifiers");
lf[657]=C_h_intern(&lf[657],26,"foreign-callback-stub-name");
lf[658]=C_h_intern(&lf[658],4,"quit");
lf[659]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal foreign type `~A\047");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[661]=C_decode_literal(C_heaptop,"\376B\000\000\006C_word");
lf[662]=C_decode_literal(C_heaptop,"\376B\000\000\006C_char");
lf[663]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned C_char");
lf[664]=C_decode_literal(C_heaptop,"\376B\000\000\014unsigned int");
lf[665]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u32");
lf[666]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[667]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s32");
lf[668]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s64");
lf[669]=C_decode_literal(C_heaptop,"\376B\000\000\005short");
lf[670]=C_decode_literal(C_heaptop,"\376B\000\000\004long");
lf[671]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned short");
lf[672]=C_decode_literal(C_heaptop,"\376B\000\000\015unsigned long");
lf[673]=C_decode_literal(C_heaptop,"\376B\000\000\005float");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[675]=C_decode_literal(C_heaptop,"\376B\000\000\006void *");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\006void *");
lf[677]=C_decode_literal(C_heaptop,"\376B\000\000\011C_char **");
lf[678]=C_h_intern(&lf[678],11,"byte-vector");
lf[679]=C_h_intern(&lf[679],19,"nonnull-byte-vector");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[681]=C_h_intern(&lf[681],4,"blob");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[683]=C_h_intern(&lf[683],9,"u16vector");
lf[684]=C_h_intern(&lf[684],17,"nonnull-u16vector");
lf[685]=C_decode_literal(C_heaptop,"\376B\000\000\020unsigned short *");
lf[686]=C_h_intern(&lf[686],8,"s8vector");
lf[687]=C_h_intern(&lf[687],16,"nonnull-s8vector");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\006char *");
lf[689]=C_h_intern(&lf[689],9,"u32vector");
lf[690]=C_h_intern(&lf[690],17,"nonnull-u32vector");
lf[691]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned int *");
lf[692]=C_h_intern(&lf[692],9,"s16vector");
lf[693]=C_h_intern(&lf[693],17,"nonnull-s16vector");
lf[694]=C_decode_literal(C_heaptop,"\376B\000\000\007short *");
lf[695]=C_h_intern(&lf[695],9,"s32vector");
lf[696]=C_h_intern(&lf[696],17,"nonnull-s32vector");
lf[697]=C_decode_literal(C_heaptop,"\376B\000\000\005int *");
lf[698]=C_h_intern(&lf[698],9,"f32vector");
lf[699]=C_h_intern(&lf[699],17,"nonnull-f32vector");
lf[700]=C_decode_literal(C_heaptop,"\376B\000\000\007float *");
lf[701]=C_h_intern(&lf[701],9,"f64vector");
lf[702]=C_h_intern(&lf[702],17,"nonnull-f64vector");
lf[703]=C_decode_literal(C_heaptop,"\376B\000\000\010double *");
lf[704]=C_decode_literal(C_heaptop,"\376B\000\000\006char *");
lf[705]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[706]=C_decode_literal(C_heaptop,"\376B\000\000\004void");
lf[707]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[708]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[709]=C_decode_literal(C_heaptop,"\376B\000\000\001<");
lf[710]=C_decode_literal(C_heaptop,"\376B\000\000\002> ");
lf[711]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[712]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[713]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[714]=C_decode_literal(C_heaptop,"\376B\000\000\006const ");
lf[715]=C_decode_literal(C_heaptop,"\376B\000\000\007struct ");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[717]=C_decode_literal(C_heaptop,"\376B\000\000\006union ");
lf[718]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\005enum ");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[721]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\003 (*");
lf[724]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[726]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[727]=C_h_intern(&lf[727],3,"...");
lf[728]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[730]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[732]=C_h_intern(&lf[732],9,"\003syserror");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[734]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010instance\376\003\000\000\002\376\001\000\000\020nonnull-instance\376\377\016");
lf[735]=C_h_intern(&lf[735],4,"enum");
lf[736]=C_h_intern(&lf[736],5,"union");
lf[737]=C_h_intern(&lf[737],6,"struct");
lf[738]=C_h_intern(&lf[738],8,"template");
lf[739]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\017nonnull-pointer\376\003\000\000\002\376\001\000\000\011c-pointer\376\003\000\000\002\376\001\000\000\021nonnull-c"
"-pointer\376\377\016");
lf[740]=C_h_intern(&lf[740],12,"nonnull-blob");
lf[741]=C_h_intern(&lf[741],8,"u8vector");
lf[742]=C_h_intern(&lf[742],16,"nonnull-u8vector");
lf[743]=C_h_intern(&lf[743],14,"scheme-pointer");
lf[744]=C_h_intern(&lf[744],22,"nonnull-scheme-pointer");
lf[745]=C_decode_literal(C_heaptop,"\376B\000\000\042illegal foreign argument type `~A\047");
lf[746]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[747]=C_decode_literal(C_heaptop,"\376B\000\000\031C_character_code((C_word)");
lf[748]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[749]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[750]=C_decode_literal(C_heaptop,"\376B\000\000\030(unsigned short)C_unfix(");
lf[751]=C_decode_literal(C_heaptop,"\376B\000\000\027C_num_to_unsigned_long(");
lf[752]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_double(");
lf[753]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[754]=C_decode_literal(C_heaptop,"\376B\000\000\017C_num_to_int64(");
lf[755]=C_decode_literal(C_heaptop,"\376B\000\000\016C_num_to_long(");
lf[756]=C_decode_literal(C_heaptop,"\376B\000\000\026C_num_to_unsigned_int(");
lf[757]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[758]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[759]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[760]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[762]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[764]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[766]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_u8vector_or_null(");
lf[768]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_u8vector(");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u16vector_or_null(");
lf[770]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u16vector(");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u32vector_or_null(");
lf[772]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u32vector(");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_s8vector_or_null(");
lf[774]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_s8vector(");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s16vector_or_null(");
lf[776]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s16vector(");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s32vector_or_null(");
lf[778]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s32vector(");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f32vector_or_null(");
lf[780]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f32vector(");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f64vector_or_null(");
lf[782]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f64vector(");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\021C_string_or_null(");
lf[784]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_string(");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\010C_truep(");
lf[786]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[788]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[790]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[792]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\002*(");
lf[795]=C_decode_literal(C_heaptop,"\376B\000\000\020)C_c_pointer_nn(");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[797]=C_decode_literal(C_heaptop,"\376B\000\000\002*(");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_c_pointer_nn(");
lf[799]=C_decode_literal(C_heaptop,"\376B\000\000 illegal foreign return type `~A\047");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\031C_make_character((C_word)");
lf[801]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fix((C_word)");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000%C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)");
lf[803]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fix((short)");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fix(0xffff&(C_word)");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fix((char)");
lf[806]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fix(0xff&(C_word)");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000\012C_flonum(&");
lf[808]=C_decode_literal(C_heaptop,"\376B\000\000\012C_number(&");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[810]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[812]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[814]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_double_to_num(&");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\027C_unsigned_int_to_num(&");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000\017C_long_to_num(&");
lf[817]=C_decode_literal(C_heaptop,"\376B\000\000\030C_unsigned_long_to_num(&");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000\012C_mk_bool(");
lf[819]=C_decode_literal(C_heaptop,"\376B\000\000\011((C_word)");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[821]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void*)&");
lf[823]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[825]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[827]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void*)&");
lf[829]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[831]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[833]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[835]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\001");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\000");
lf[837]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\012");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\016");
lf[839]=C_decode_literal(C_heaptop,"\376B\000\000\002\377>");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\036");
lf[841]=C_decode_literal(C_heaptop,"\376B\000\000\002\377U");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[843]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\001");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[846]=C_decode_literal(C_heaptop,"\376B\000\000\001\001");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid literal - cannot encode");
lf[848]=C_h_intern(&lf[848],17,"\003sysstring-append");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[850]=C_h_intern(&lf[850],5,"cons*");
lf[851]=C_h_intern(&lf[851],6,"random");
lf[852]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
C_register_lf2(lf,853,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2484 */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2487 in k2484 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2489,2,t0,t1);}
t2=C_set_block_item(lf[0] /* output */,0,C_SCHEME_FALSE);
t3=C_mutate((C_word*)lf[1]+1 /* (set! gen ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2492,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! gen-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2535,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10148,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t6);}

/* k10146 in k2487 in k2484 */
static void C_ccall f_10148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10151,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[852],t1);}

/* k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10174,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10178,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 57   random");
((C_proc3)C_retrieve_symbol_proc(lf[851]))(3,*((C_word*)lf[851]+1),t4,C_fix(16777216));}

/* k10176 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("number->string");
C_number_to_string(4,0,((C_word*)t0)[2],t1,C_fix(16));}

/* k10172 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10152 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[2]);}

/* k10155 in k10152 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10170,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 57   current-seconds");
((C_proc2)C_retrieve_symbol_proc(lf[226]))(2,*((C_word*)lf[226]+1),t3);}

/* k10168 in k10155 in k10152 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10158 in k10155 in k10152 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[2]);}

/* k10161 in k10158 in k10155 in k10152 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10166,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),t2,((C_word*)t0)[2]);}

/* k10164 in k10161 in k10158 in k10155 in k10152 in k10149 in k10146 in k2487 in k2484 */
static void C_ccall f_10166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 56   string->c-identifier");
((C_proc3)C_retrieve_symbol_proc(lf[528]))(3,*((C_word*)lf[528]+1),((C_word*)t0)[2],t1);}

/* k2573 in k2487 in k2484 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2575,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! unique-id ...) */,t1);
t3=C_mutate((C_word*)lf[7]+1 /* (set! generate-code ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2577,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[504]+1 /* (set! emit-procedure-table-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6702,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[494]+1 /* (set! cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6779,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[280]+1 /* (set! make-variable-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6868,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[290]+1 /* (set! make-argument-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6884,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[508]+1 /* (set! generate-external-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6900,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[200]+1 /* (set! generate-foreign-callback-stub-prototypes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6954,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[506]+1 /* (set! generate-foreign-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6994,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[505]+1 /* (set! generate-foreign-callback-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7308,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[537]+1 /* (set! generate-foreign-callback-header ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7802,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[174]+1 /* (set! foreign-type-declaration ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7867,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[173]+1 /* (set! foreign-argument-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8751,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[168]+1 /* (set! foreign-result-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9241,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[360]+1 /* (set! encode-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9848,tmp=(C_word)a,a+=2,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_9848(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t44;
C_word ab[22],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9848,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9857,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9910,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t5)){
t6=t1;
t7=(C_word)C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1362 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t6,t7,lf[835]);}
else{
t6=(C_word)C_eqp(C_SCHEME_FALSE,t2);
if(C_truep(t6)){
t7=t1;
t8=(C_word)C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1362 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t7,t8,lf[836]);}
else{
if(C_truep((C_word)C_charp(t2))){
t7=(C_word)C_fix((C_word)C_character_code(t2));
t8=f_9857(C_a_i(&a,4),t7);
C_trace("c-backend.scm: 1366 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t4,lf[837],t8);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t7=t1;
t8=(C_word)C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1362 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t7,t8,lf[838]);}
else{
if(C_truep((C_word)C_eofp(t2))){
t7=t1;
t8=(C_word)C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1362 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t7,t8,lf[839]);}
else{
t7=C_retrieve(lf[349]);
t8=(C_word)C_eqp(t7,t2);
if(C_truep(t8)){
t9=t1;
t10=(C_word)C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1362 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t9,t10,lf[840]);}
else{
if(C_truep((C_word)C_fixnump(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10028,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1371 big-fixnum?");
((C_proc3)C_retrieve_symbol_proc(lf[362]))(3,*((C_word*)lf[362]+1),t9,t2);}
else{
if(C_truep((C_word)C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10041,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1380 number->string");
C_number_to_string(3,0,t9,t2);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
t9=(C_word)C_slot(t2,C_fix(1));
t10=(C_word)C_i_string_length(t9);
t11=f_9857(C_a_i(&a,4),t10);
C_trace("c-backend.scm: 1383 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),t4,lf[846],t11,t9);}
else{
if(C_truep((C_word)C_immp(t2))){
C_trace("c-backend.scm: 1388 bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t4,lf[847],t2);}
else{
if(C_truep((C_word)C_byteblockp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10080,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=(C_word)stub2437(C_SCHEME_UNDEFINED,t10);
t12=(C_word)C_make_character((C_word)C_unfix(t11));
t13=(C_word)C_a_i_string(&a,1,t12);
t14=t2;
t15=(C_word)stub2441(C_SCHEME_UNDEFINED,t14);
t16=f_9857(C_a_i(&a,4),t15);
C_trace("c-backend.scm: 1391 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t9,t13,t16);}
else{
t9=t2;
t10=(C_word)stub2441(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10110,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=t2;
t13=(C_word)stub2437(C_SCHEME_UNDEFINED,t12);
t14=(C_word)C_make_character((C_word)C_unfix(t13));
t15=(C_word)C_a_i_string(&a,1,t14);
t16=f_9857(C_a_i(&a,4),t10);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10122,a[2]=t16,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10124,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1401 list-tabulate");
((C_proc4)C_retrieve_symbol_proc(lf[534]))(4,*((C_word*)lf[534]+1),t17,t10,t18);}}}}}}}}}}}}

/* a10123 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_10124(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10124,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[2],t2);
C_trace("c-backend.scm: 1401 encode-literal");
((C_proc3)C_retrieve_symbol_proc(lf[360]))(3,*((C_word*)lf[360]+1),t1,t3);}

/* k10120 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_10122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1398 cons*");
((C_proc5)C_retrieve_symbol_proc(lf[850]))(5,*((C_word*)lf[850]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10108 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_10110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1397 string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[217]))(4,*((C_word*)lf[217]+1),((C_word*)t0)[2],t1,lf[849]);}

/* k10078 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_10080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1390 ##sys#string-append");
((C_proc4)C_retrieve_symbol_proc(lf[848]))(4,*((C_word*)lf[848]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10039 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_10041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1380 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[844],t1,lf[845]);}

/* k10026 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_10028(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10028,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10024,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1378 number->string");
C_number_to_string(3,0,t2,((C_word*)t0)[2]);}
else{
t2=(C_word)C_fixnum_shift_right(((C_word*)t0)[2],C_fix(24));
t3=(C_word)C_fixnum_and(C_fix(255),t2);
t4=(C_word)C_make_character((C_word)C_unfix(t3));
t5=(C_word)C_fixnum_shift_right(((C_word*)t0)[2],C_fix(16));
t6=(C_word)C_fixnum_and(C_fix(255),t5);
t7=(C_word)C_make_character((C_word)C_unfix(t6));
t8=(C_word)C_fixnum_shift_right(((C_word*)t0)[2],C_fix(8));
t9=(C_word)C_fixnum_and(C_fix(255),t8);
t10=(C_word)C_make_character((C_word)C_unfix(t9));
t11=(C_word)C_fixnum_and(C_fix(255),((C_word*)t0)[2]);
t12=(C_word)C_make_character((C_word)C_unfix(t11));
t13=(C_word)C_a_i_string(&a,4,t4,t7,t10,t12);
C_trace("c-backend.scm: 1372 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[3],lf[843],t13);}}

/* k10022 in k10026 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_10024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1378 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[841],t1,lf[842]);}

/* k9908 in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static void C_ccall f_9910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9910,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(C_word)C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1362 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t2,t3,t1);}

/* encode-size in ##compiler#encode-literal in k2573 in k2487 in k2484 */
static C_word C_fcall f_9857(C_word *a,C_word t1){
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
C_stack_check;
t2=(C_word)C_fixnum_shift_right(t1,C_fix(16));
t3=(C_word)C_fixnum_and(C_fix(255),t2);
t4=(C_word)C_make_character((C_word)C_unfix(t3));
t5=(C_word)C_fixnum_shift_right(t1,C_fix(8));
t6=(C_word)C_fixnum_and(C_fix(255),t5);
t7=(C_word)C_make_character((C_word)C_unfix(t6));
t8=(C_word)C_fixnum_and(C_fix(255),t1);
t9=(C_word)C_make_character((C_word)C_unfix(t8));
return((C_word)C_a_i_string(&a,3,t4,t7,t9));}

/* ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9241,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9243,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=(C_word)C_eqp(t5,lf[16]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t5,lf[631]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[800]);}
else{
t8=(C_word)C_eqp(t5,lf[626]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t5,lf[627]));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[801]);}
else{
t10=(C_word)C_eqp(t5,lf[632]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t5,lf[633]));
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[802]);}
else{
t12=(C_word)C_eqp(t5,lf[628]);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[803]);}
else{
t13=(C_word)C_eqp(t5,lf[629]);
if(C_truep(t13)){
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[804]);}
else{
t14=(C_word)C_eqp(t5,lf[634]);
if(C_truep(t14)){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[805]);}
else{
t15=(C_word)C_eqp(t5,lf[635]);
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[806]);}
else{
t16=(C_word)C_eqp(t5,lf[586]);
t17=(C_truep(t16)?t16:(C_word)C_eqp(t5,lf[615]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9310,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t18);}
else{
t18=(C_word)C_eqp(t5,lf[622]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9331,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t19);}
else{
t19=(C_word)C_eqp(t5,lf[592]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9352,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_9352(t21,t19);}
else{
t21=(C_word)C_eqp(t5,lf[588]);
if(C_truep(t21)){
t22=t20;
f_9352(t22,t21);}
else{
t22=(C_word)C_eqp(t5,lf[601]);
if(C_truep(t22)){
t23=t20;
f_9352(t23,t22);}
else{
t23=(C_word)C_eqp(t5,lf[612]);
if(C_truep(t23)){
t24=t20;
f_9352(t24,t23);}
else{
t24=(C_word)C_eqp(t5,lf[608]);
if(C_truep(t24)){
t25=t20;
f_9352(t25,t24);}
else{
t25=(C_word)C_eqp(t5,lf[613]);
if(C_truep(t25)){
t26=t20;
f_9352(t26,t25);}
else{
t26=(C_word)C_eqp(t5,lf[614]);
if(C_truep(t26)){
t27=t20;
f_9352(t27,t26);}
else{
t27=(C_word)C_eqp(t5,lf[609]);
if(C_truep(t27)){
t28=t20;
f_9352(t28,t27);}
else{
t28=(C_word)C_eqp(t5,lf[610]);
if(C_truep(t28)){
t29=t20;
f_9352(t29,t28);}
else{
t29=(C_word)C_eqp(t5,lf[611]);
if(C_truep(t29)){
t30=t20;
f_9352(t30,t29);}
else{
t30=(C_word)C_eqp(t5,lf[624]);
t31=t20;
f_9352(t31,(C_truep(t30)?t30:(C_word)C_eqp(t5,lf[625])));}}}}}}}}}}}}}}}}}}}}

/* k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_9352(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9352,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9355,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[599]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9376,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t3);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[619]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[4],lf[620]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9400,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t5);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[623]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9421,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t6);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[616]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[4],lf[617]));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9445,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t8);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[618]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9466,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t9);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[621]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9487,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t10);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[4],lf[13]);
if(C_truep(t10)){
t11=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[818]);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[4],lf[550]);
t12=(C_truep(t11)?t11:(C_word)C_eqp(((C_word*)t0)[4],lf[630]));
if(C_truep(t12)){
t13=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[819]);}
else{
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 1315 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[606]))(4,*((C_word*)lf[606]+1),t13,C_retrieve(lf[607]),((C_word*)t0)[3]);}
else{
t14=t13;
f_9517(2,t14,C_SCHEME_FALSE);}}}}}}}}}}}

/* k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9517,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9521,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("g23462347");
t3=t2;
f_9521(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[3]))){
t3=(C_word)C_i_length(((C_word*)t0)[3]);
t4=t2;
f_9544(t4,(C_word)C_fixnum_greater_or_equal_p(t3,C_fix(2)));}
else{
t3=t2;
f_9544(t3,C_SCHEME_FALSE);}}}

/* k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_9544(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9544,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(t2,lf[600]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(t2,lf[601]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9559,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t5);}
else{
t5=(C_word)C_eqp(t2,lf[595]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9580,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t6);}
else{
t6=(C_word)C_eqp(t2,lf[603]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t7);}
else{
t7=(C_word)C_eqp(t2,lf[604]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t8);}
else{
t8=(C_word)C_eqp(t2,lf[605]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9643,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t9);}
else{
t9=(C_word)C_eqp(t2,lf[597]);
if(C_truep(t9)){
t10=(C_word)C_i_cadr(((C_word*)t0)[5]);
C_trace("c-backend.scm: 1330 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),((C_word*)t0)[4],t10,((C_word*)t0)[3]);}
else{
t10=(C_word)C_eqp(t2,lf[598]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t2,lf[599]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t12);}
else{
t12=(C_word)C_eqp(t2,lf[602]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t13);}
else{
t13=(C_word)C_eqp(t2,lf[735]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9722,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t14);}
else{
C_trace("c-backend.scm: 1335 err");
t14=((C_word*)t0)[2];
f_9243(t14,((C_word*)t0)[4]);}}}}}}}}}}
else{
C_trace("c-backend.scm: 1336 err");
t2=((C_word*)t0)[2];
f_9243(t2,((C_word*)t0)[4]);}}

/* k9720 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9725,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[834],t1);}

/* k9723 in k9720 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9728,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9726 in k9723 in k9720 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9729 in k9726 in k9723 in k9720 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9699 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9704,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[833],t1);}

/* k9702 in k9699 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9705 in k9702 in k9699 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[832],((C_word*)t0)[2]);}

/* k9708 in k9705 in k9702 in k9699 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9678 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9683,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[831],t1);}

/* k9681 in k9678 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9686,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9684 in k9681 in k9678 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[830],((C_word*)t0)[2]);}

/* k9687 in k9684 in k9681 in k9678 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9641 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9643,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9646,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[829],t1);}

/* k9644 in k9641 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9647 in k9644 in k9641 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[828],((C_word*)t0)[2]);}

/* k9650 in k9647 in k9644 in k9641 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9620 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9625,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[827],t1);}

/* k9623 in k9620 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9628,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9626 in k9623 in k9620 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[826],((C_word*)t0)[2]);}

/* k9629 in k9626 in k9623 in k9620 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9599 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9604,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[825],t1);}

/* k9602 in k9599 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9607,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9605 in k9602 in k9599 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[824],((C_word*)t0)[2]);}

/* k9608 in k9605 in k9602 in k9599 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9578 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9583,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[823],t1);}

/* k9581 in k9578 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9586,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9584 in k9581 in k9578 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[822],((C_word*)t0)[2]);}

/* k9587 in k9584 in k9581 in k9578 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9557 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9562,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[821],t1);}

/* k9560 in k9557 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9565,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9563 in k9560 in k9557 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[820],((C_word*)t0)[2]);}

/* k9566 in k9563 in k9560 in k9557 in k9542 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g2346 in k9515 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_9521(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9521,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
C_trace("c-backend.scm: 1317 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
C_trace("c-backend.scm: 1317 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t1,t3,((C_word*)t0)[2]);}}

/* k9485 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9490,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[817],t1);}

/* k9488 in k9485 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9493,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9491 in k9488 in k9485 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9494 in k9491 in k9488 in k9485 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9464 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9469,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[816],t1);}

/* k9467 in k9464 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9470 in k9467 in k9464 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9473 in k9470 in k9467 in k9464 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9443 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9448,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[815],t1);}

/* k9446 in k9443 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9451,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9449 in k9446 in k9443 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9452 in k9449 in k9446 in k9443 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9419 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9424,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[814],t1);}

/* k9422 in k9419 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9427,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9425 in k9422 in k9419 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9428 in k9425 in k9422 in k9419 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9398 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9403,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[813],t1);}

/* k9401 in k9398 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9406,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9404 in k9401 in k9398 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9407 in k9404 in k9401 in k9398 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9374 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9379,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[812],t1);}

/* k9377 in k9374 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9380 in k9377 in k9374 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[811],((C_word*)t0)[2]);}

/* k9383 in k9380 in k9377 in k9374 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9353 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9358,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[810],t1);}

/* k9356 in k9353 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9359 in k9356 in k9353 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[809],((C_word*)t0)[2]);}

/* k9362 in k9359 in k9356 in k9353 in k9350 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9329 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9334,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[808],t1);}

/* k9332 in k9329 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9337,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9335 in k9332 in k9329 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9338 in k9335 in k9332 in k9329 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9308 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9313,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[807],t1);}

/* k9311 in k9308 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9316,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9314 in k9311 in k9308 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9317 in k9314 in k9311 in k9308 in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* err in ##compiler#foreign-result-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_9243(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9243,NULL,2,t0,t1);}
C_trace("c-backend.scm: 1291 quit");
((C_proc4)C_retrieve_symbol_proc(lf[658]))(4,*((C_word*)lf[658]+1),t1,lf[799],((C_word*)t0)[2]);}

/* ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_8751(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8751,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8753,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(C_word)C_eqp(t4,lf[630]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[746]);}
else{
t6=(C_word)C_eqp(t4,lf[16]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t4,lf[631]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[747]);}
else{
t8=(C_word)C_eqp(t4,lf[634]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8781,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_8781(t10,t8);}
else{
t10=(C_word)C_eqp(t4,lf[626]);
if(C_truep(t10)){
t11=t9;
f_8781(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[632]);
if(C_truep(t11)){
t12=t9;
f_8781(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[633]);
t13=t9;
f_8781(t13,(C_truep(t12)?t12:(C_word)C_eqp(t4,lf[635])));}}}}}}

/* k8779 in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_8781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8781,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[748]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[628]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[749]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[750]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[621]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[751]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[615]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_8808(t7,t5);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[622]);
t8=t6;
f_8808(t8,(C_truep(t7)?t7:(C_word)C_eqp(((C_word*)t0)[4],lf[586])));}}}}}}

/* k8806 in k8779 in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_8808(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8808,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[752]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[619]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[4],lf[620]));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[753]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[623]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[754]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[618]);
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[755]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[616]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[4],lf[617]));
if(C_truep(t7)){
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[756]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[598]);
if(C_truep(t8)){
t9=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[757]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[600]);
if(C_truep(t9)){
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[758]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[4],lf[743]);
if(C_truep(t10)){
t11=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[759]);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[4],lf[744]);
if(C_truep(t11)){
t12=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[760]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[4],lf[599]);
if(C_truep(t12)){
t13=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[761]);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[4],lf[601]);
if(C_truep(t13)){
t14=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[762]);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[4],lf[681]);
if(C_truep(t14)){
t15=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[763]);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[4],lf[740]);
if(C_truep(t15)){
t16=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[764]);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[4],lf[678]);
if(C_truep(t16)){
t17=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,lf[765]);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[4],lf[679]);
if(C_truep(t17)){
t18=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,lf[766]);}
else{
t18=(C_word)C_eqp(((C_word*)t0)[4],lf[741]);
if(C_truep(t18)){
t19=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[767]);}
else{
t19=(C_word)C_eqp(((C_word*)t0)[4],lf[742]);
if(C_truep(t19)){
t20=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,lf[768]);}
else{
t20=(C_word)C_eqp(((C_word*)t0)[4],lf[683]);
if(C_truep(t20)){
t21=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,lf[769]);}
else{
t21=(C_word)C_eqp(((C_word*)t0)[4],lf[684]);
if(C_truep(t21)){
t22=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,lf[770]);}
else{
t22=(C_word)C_eqp(((C_word*)t0)[4],lf[689]);
if(C_truep(t22)){
t23=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,lf[771]);}
else{
t23=(C_word)C_eqp(((C_word*)t0)[4],lf[690]);
if(C_truep(t23)){
t24=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,lf[772]);}
else{
t24=(C_word)C_eqp(((C_word*)t0)[4],lf[686]);
if(C_truep(t24)){
t25=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,lf[773]);}
else{
t25=(C_word)C_eqp(((C_word*)t0)[4],lf[687]);
if(C_truep(t25)){
t26=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t26+1)))(2,t26,lf[774]);}
else{
t26=(C_word)C_eqp(((C_word*)t0)[4],lf[692]);
if(C_truep(t26)){
t27=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t27+1)))(2,t27,lf[775]);}
else{
t27=(C_word)C_eqp(((C_word*)t0)[4],lf[693]);
if(C_truep(t27)){
t28=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,lf[776]);}
else{
t28=(C_word)C_eqp(((C_word*)t0)[4],lf[695]);
if(C_truep(t28)){
t29=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,lf[777]);}
else{
t29=(C_word)C_eqp(((C_word*)t0)[4],lf[696]);
if(C_truep(t29)){
t30=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t30+1)))(2,t30,lf[778]);}
else{
t30=(C_word)C_eqp(((C_word*)t0)[4],lf[698]);
if(C_truep(t30)){
t31=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t31+1)))(2,t31,lf[779]);}
else{
t31=(C_word)C_eqp(((C_word*)t0)[4],lf[699]);
if(C_truep(t31)){
t32=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,lf[780]);}
else{
t32=(C_word)C_eqp(((C_word*)t0)[4],lf[701]);
if(C_truep(t32)){
t33=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t33+1)))(2,t33,lf[781]);}
else{
t33=(C_word)C_eqp(((C_word*)t0)[4],lf[702]);
if(C_truep(t33)){
t34=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t34+1)))(2,t34,lf[782]);}
else{
t34=(C_word)C_eqp(((C_word*)t0)[4],lf[588]);
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t34)){
t36=t35;
f_9003(t36,t34);}
else{
t36=(C_word)C_eqp(((C_word*)t0)[4],lf[612]);
if(C_truep(t36)){
t37=t35;
f_9003(t37,t36);}
else{
t37=(C_word)C_eqp(((C_word*)t0)[4],lf[613]);
t38=t35;
f_9003(t38,(C_truep(t37)?t37:(C_word)C_eqp(((C_word*)t0)[4],lf[614])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k9001 in k8806 in k8779 in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_9003(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9003,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[783]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[592]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9012(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[608]);
if(C_truep(t4)){
t5=t3;
f_9012(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[609]);
if(C_truep(t5)){
t6=t3;
f_9012(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[610]);
t7=t3;
f_9012(t7,(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[4],lf[611])));}}}}}

/* k9010 in k9001 in k8806 in k8779 in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_9012(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9012,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[784]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[13]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[785]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 1264 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[606]))(4,*((C_word*)lf[606]+1),t3,C_retrieve(lf[607]),((C_word*)t0)[3]);}
else{
t4=t3;
f_9021(2,t4,C_SCHEME_FALSE);}}}}

/* k9019 in k9010 in k9001 in k8806 in k8779 in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9021,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=t1;
if(C_truep((C_word)C_i_vectorp(t3))){
t4=(C_word)C_i_vector_ref(t3,C_fix(0));
C_trace("c-backend.scm: 1266 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,t4);}
else{
C_trace("c-backend.scm: 1266 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[3]))){
t3=(C_word)C_i_length(((C_word*)t0)[3]);
t4=t2;
f_9048(t4,(C_word)C_fixnum_greater_or_equal_p(t3,C_fix(2)));}
else{
t3=t2;
f_9048(t3,C_SCHEME_FALSE);}}}

/* k9046 in k9019 in k9010 in k9001 in k8806 in k8779 in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_9048(C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9048,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,lf[598]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[786]);}
else{
t4=(C_word)C_eqp(t2,lf[600]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[787]);}
else{
t5=(C_word)C_eqp(t2,lf[599]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[788]);}
else{
t6=(C_word)C_eqp(t2,lf[601]);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[789]);}
else{
t7=(C_word)C_eqp(t2,lf[603]);
if(C_truep(t7)){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[790]);}
else{
t8=(C_word)C_eqp(t2,lf[604]);
if(C_truep(t8)){
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[791]);}
else{
t9=(C_word)C_eqp(t2,lf[602]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[792]);}
else{
t10=(C_word)C_eqp(t2,lf[597]);
if(C_truep(t10)){
t11=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1277 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),((C_word*)t0)[3],t11);}
else{
t11=(C_word)C_eqp(t2,lf[735]);
if(C_truep(t11)){
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[793]);}
else{
t12=(C_word)C_eqp(t2,lf[595]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9125,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t14=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1280 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t13,t14,lf[796]);}
else{
t13=(C_word)C_eqp(t2,lf[605]);
if(C_truep(t13)){
t14=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1283 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[3],lf[797],t14,lf[798]);}
else{
C_trace("c-backend.scm: 1284 err");
t14=((C_word*)t0)[2];
f_8753(t14,((C_word*)t0)[3]);}}}}}}}}}}}}
else{
C_trace("c-backend.scm: 1285 err");
t2=((C_word*)t0)[2];
f_8753(t2,((C_word*)t0)[3]);}}

/* k9123 in k9046 in k9019 in k9010 in k9001 in k8806 in k8779 in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_ccall f_9125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1280 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[794],t1,lf[795]);}

/* err in ##compiler#foreign-argument-conversion in k2573 in k2487 in k2484 */
static void C_fcall f_8753(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8753,NULL,2,t0,t1);}
C_trace("c-backend.scm: 1218 quit");
((C_proc4)C_retrieve_symbol_proc(lf[658]))(4,*((C_word*)lf[658]+1),t1,lf[745],((C_word*)t0)[2]);}

/* ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_7867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7867,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7869,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7874,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=t2;
t7=(C_word)C_eqp(t6,lf[630]);
if(C_truep(t7)){
C_trace("c-backend.scm: 1125 str");
t8=t5;
f_7874(t8,t1,lf[661]);}
else{
t8=(C_word)C_eqp(t6,lf[16]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t6,lf[634]));
if(C_truep(t9)){
C_trace("c-backend.scm: 1126 str");
t10=t5;
f_7874(t10,t1,lf[662]);}
else{
t10=(C_word)C_eqp(t6,lf[631]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t6,lf[635]));
if(C_truep(t11)){
C_trace("c-backend.scm: 1127 str");
t12=t5;
f_7874(t12,t1,lf[663]);}
else{
t12=(C_word)C_eqp(t6,lf[632]);
t13=(C_truep(t12)?t12:(C_word)C_eqp(t6,lf[616]));
if(C_truep(t13)){
C_trace("c-backend.scm: 1128 str");
t14=t5;
f_7874(t14,t1,lf[664]);}
else{
t14=(C_word)C_eqp(t6,lf[633]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(t6,lf[617]));
if(C_truep(t15)){
C_trace("c-backend.scm: 1129 str");
t16=t5;
f_7874(t16,t1,lf[665]);}
else{
t16=(C_word)C_eqp(t6,lf[626]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7944,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_7944(t18,t16);}
else{
t18=(C_word)C_eqp(t6,lf[619]);
t19=t17;
f_7944(t19,(C_truep(t18)?t18:(C_word)C_eqp(t6,lf[13])));}}}}}}}

/* k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_7944(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7944,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1130 str");
t2=((C_word*)t0)[7];
f_7874(t2,((C_word*)t0)[6],lf[666]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[627]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[620]));
if(C_truep(t3)){
C_trace("c-backend.scm: 1131 str");
t4=((C_word*)t0)[7];
f_7874(t4,((C_word*)t0)[6],lf[667]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[623]);
if(C_truep(t4)){
C_trace("c-backend.scm: 1132 str");
t5=((C_word*)t0)[7];
f_7874(t5,((C_word*)t0)[6],lf[668]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[628]);
if(C_truep(t5)){
C_trace("c-backend.scm: 1133 str");
t6=((C_word*)t0)[7];
f_7874(t6,((C_word*)t0)[6],lf[669]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[618]);
if(C_truep(t6)){
C_trace("c-backend.scm: 1134 str");
t7=((C_word*)t0)[7];
f_7874(t7,((C_word*)t0)[6],lf[670]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[629]);
if(C_truep(t7)){
C_trace("c-backend.scm: 1135 str");
t8=((C_word*)t0)[7];
f_7874(t8,((C_word*)t0)[6],lf[671]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[621]);
if(C_truep(t8)){
C_trace("c-backend.scm: 1136 str");
t9=((C_word*)t0)[7];
f_7874(t9,((C_word*)t0)[6],lf[672]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[586]);
if(C_truep(t9)){
C_trace("c-backend.scm: 1137 str");
t10=((C_word*)t0)[7];
f_7874(t10,((C_word*)t0)[6],lf[673]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[615]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[5],lf[622]));
if(C_truep(t11)){
C_trace("c-backend.scm: 1138 str");
t12=((C_word*)t0)[7];
f_7874(t12,((C_word*)t0)[6],lf[674]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[598]);
t13=(C_truep(t12)?t12:(C_word)C_eqp(((C_word*)t0)[5],lf[600]));
if(C_truep(t13)){
C_trace("c-backend.scm: 1140 str");
t14=((C_word*)t0)[7];
f_7874(t14,((C_word*)t0)[6],lf[675]);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[599]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_8046(t16,t14);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[5],lf[601]);
if(C_truep(t16)){
t17=t15;
f_8046(t17,t16);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[5],lf[743]);
t18=t15;
f_8046(t18,(C_truep(t17)?t17:(C_word)C_eqp(((C_word*)t0)[5],lf[744])));}}}}}}}}}}}}}

/* k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8046(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8046,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1141 str");
t2=((C_word*)t0)[7];
f_7874(t2,((C_word*)t0)[6],lf[676]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[624]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[625]));
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[677]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[678]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[679]));
if(C_truep(t5)){
C_trace("c-backend.scm: 1144 str");
t6=((C_word*)t0)[7];
f_7874(t6,((C_word*)t0)[6],lf[680]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[681]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_8079(t8,t6);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[740]);
if(C_truep(t8)){
t9=t7;
f_8079(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[741]);
t10=t7;
f_8079(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[5],lf[742])));}}}}}}

/* k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8079(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8079,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1145 str");
t2=((C_word*)t0)[7];
f_7874(t2,((C_word*)t0)[6],lf[682]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[683]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[684]));
if(C_truep(t3)){
C_trace("c-backend.scm: 1146 str");
t4=((C_word*)t0)[7];
f_7874(t4,((C_word*)t0)[6],lf[685]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[686]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[687]));
if(C_truep(t5)){
C_trace("c-backend.scm: 1147 str");
t6=((C_word*)t0)[7];
f_7874(t6,((C_word*)t0)[6],lf[688]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[689]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[5],lf[690]));
if(C_truep(t7)){
C_trace("c-backend.scm: 1148 str");
t8=((C_word*)t0)[7];
f_7874(t8,((C_word*)t0)[6],lf[691]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[692]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(((C_word*)t0)[5],lf[693]));
if(C_truep(t9)){
C_trace("c-backend.scm: 1149 str");
t10=((C_word*)t0)[7];
f_7874(t10,((C_word*)t0)[6],lf[694]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[695]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[5],lf[696]));
if(C_truep(t11)){
C_trace("c-backend.scm: 1150 str");
t12=((C_word*)t0)[7];
f_7874(t12,((C_word*)t0)[6],lf[697]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[698]);
t13=(C_truep(t12)?t12:(C_word)C_eqp(((C_word*)t0)[5],lf[699]));
if(C_truep(t13)){
C_trace("c-backend.scm: 1151 str");
t14=((C_word*)t0)[7];
f_7874(t14,((C_word*)t0)[6],lf[700]);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[701]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(((C_word*)t0)[5],lf[702]));
if(C_truep(t15)){
C_trace("c-backend.scm: 1152 str");
t16=((C_word*)t0)[7];
f_7874(t16,((C_word*)t0)[6],lf[703]);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[5],lf[592]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_8175(t18,t16);}
else{
t18=(C_word)C_eqp(((C_word*)t0)[5],lf[588]);
if(C_truep(t18)){
t19=t17;
f_8175(t19,t18);}
else{
t19=(C_word)C_eqp(((C_word*)t0)[5],lf[608]);
if(C_truep(t19)){
t20=t17;
f_8175(t20,t19);}
else{
t20=(C_word)C_eqp(((C_word*)t0)[5],lf[612]);
t21=t17;
f_8175(t21,(C_truep(t20)?t20:(C_word)C_eqp(((C_word*)t0)[5],lf[611])));}}}}}}}}}}}}

/* k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8175,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1154 str");
t2=((C_word*)t0)[7];
f_7874(t2,((C_word*)t0)[6],lf[704]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[609]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_8187(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[610]);
if(C_truep(t4)){
t5=t3;
f_8187(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[613]);
t6=t3;
f_8187(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[5],lf[614])));}}}}

/* k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8187(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8187,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1156 str");
t2=((C_word*)t0)[7];
f_7874(t2,((C_word*)t0)[6],lf[705]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[550]);
if(C_truep(t2)){
C_trace("c-backend.scm: 1157 str");
t3=((C_word*)t0)[7];
f_7874(t3,((C_word*)t0)[6],lf[706]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 1159 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[606]))(4,*((C_word*)lf[606]+1),t3,C_retrieve(lf[607]),((C_word*)t0)[3]);}
else{
t4=t3;
f_8202(2,t4,C_SCHEME_FALSE);}}}}

/* k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8202,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8206,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
C_trace("g19741975");
t3=t2;
f_8206(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[4]))){
C_trace("c-backend.scm: 1162 str");
t2=((C_word*)t0)[3];
f_7874(t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_i_listp(((C_word*)t0)[4]))){
t2=(C_word)C_i_length(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8247,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_eqp(C_fix(2),t2);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=t3;
f_8247(t6,(C_word)C_i_memq(t5,lf[739]));}
else{
t5=t3;
f_8247(t5,C_SCHEME_FALSE);}}
else{
C_trace("c-backend.scm: 1212 err");
t2=((C_word*)t0)[2];
f_7869(t2,((C_word*)t0)[5]);}}}}

/* k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8247(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8247,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8258,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1169 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t3,lf[707],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_eqp(C_fix(2),((C_word*)t0)[2]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[7]);
t5=t2;
f_8264(t5,(C_word)C_eqp(lf[595],t4));}
else{
t4=t2;
f_8264(t4,C_SCHEME_FALSE);}}}

/* k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8264,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8275,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1172 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t3,lf[708],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[2],C_fix(2)))){
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=t2;
f_8281(t4,(C_word)C_eqp(lf[738],t3));}
else{
t3=t2;
f_8281(t3,C_SCHEME_FALSE);}}}

/* k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8281(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8281,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8288,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8292,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
C_trace("c-backend.scm: 1177 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t3,t4,lf[713]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=t2;
f_8320(t5,(C_word)C_eqp(lf[597],t4));}
else{
t4=t2;
f_8320(t4,C_SCHEME_FALSE);}}}

/* k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8320(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8320,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8327,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
C_trace("c-backend.scm: 1184 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=t2;
f_8337(t5,(C_word)C_eqp(lf[737],t4));}
else{
t4=t2;
f_8337(t4,C_SCHEME_FALSE);}}}

/* k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8337,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8344,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1186 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8354(t5,(C_word)C_eqp(lf[736],t4));}
else{
t4=t2;
f_8354(t4,C_SCHEME_FALSE);}}}

/* k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8354,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8361,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1188 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8371(t5,(C_word)C_eqp(lf[735],t4));}
else{
t4=t2;
f_8371(t4,C_SCHEME_FALSE);}}}

/* k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8371,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8378,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1190 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(3));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8388(t5,(C_word)C_i_memq(t4,lf[734]));}
else{
t4=t2;
f_8388(t4,C_SCHEME_FALSE);}}}

/* k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8388(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8388,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8395,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1192 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(3));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8405(t5,(C_word)C_eqp(lf[605],t4));}
else{
t4=t2;
f_8405(t4,C_SCHEME_FALSE);}}}

/* k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8405,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8412,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1194 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8422,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(3)))){
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8422(t4,(C_word)C_eqp(lf[602],t3));}
else{
t3=t2;
f_8422(t3,C_SCHEME_FALSE);}}}

/* k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8422(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8422,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8434,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_8434(2,t6,lf[731]);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_8434(2,t7,(C_word)C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[732]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[733],t4);}}}
else{
C_trace("c-backend.scm: 1211 err");
t2=((C_word*)t0)[2];
f_7869(t2,((C_word*)t0)[4]);}}

/* k8432 in k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8441,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1200 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,((C_word*)t0)[2],lf[730]);}

/* k8439 in k8432 in k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8441(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8445,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8449,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8451,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8451(t11,t7,((C_word*)t0)[2]);}

/* loop2035 in k8439 in k8432 in k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8451(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8451,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8461,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8491,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_eqp(lf[727],t5);
if(C_truep(t6)){
t7=t3;
f_8461(t7,(C_word)C_a_i_cons(&a,2,lf[728],C_SCHEME_END_OF_LIST));}
else{
C_trace("c-backend.scm: 1207 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t4,t5,lf[729]);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8489 in loop2035 in k8439 in k8432 in k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8491,2,t0,t1);}
t2=((C_word*)t0)[2];
f_8461(t2,(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k8459 in loop2035 in k8439 in k8432 in k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8461(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t2=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop20352048");
t5=((C_word*)((C_word*)t0)[4])[1];
f_8451(t5,((C_word*)t0)[3],t4);}
else{
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop20352048");
t5=((C_word*)((C_word*)t0)[4])[1];
f_8451(t5,((C_word*)t0)[3],t4);}}

/* k8447 in k8439 in k8432 in k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1203 string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[217]))(4,*((C_word*)lf[217]+1),((C_word*)t0)[2],t1,lf[726]);}

/* k8443 in k8439 in k8432 in k8420 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1199 string-append");
((C_proc9)C_retrieve_proc(*((C_word*)lf[113]+1)))(9,*((C_word*)lf[113]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[723],((C_word*)t0)[2],lf[724],t1,lf[725]);}

/* k8410 in k8403 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1194 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[3],t1,lf[722],((C_word*)t0)[2]);}

/* k8393 in k8386 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1192 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[3],t1,lf[721],((C_word*)t0)[2]);}

/* k8376 in k8369 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1190 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[113]+1)))(6,*((C_word*)lf[113]+1),((C_word*)t0)[3],lf[719],t1,lf[720],((C_word*)t0)[2]);}

/* k8359 in k8352 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1188 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[113]+1)))(6,*((C_word*)lf[113]+1),((C_word*)t0)[3],lf[717],t1,lf[718],((C_word*)t0)[2]);}

/* k8342 in k8335 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1186 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[113]+1)))(6,*((C_word*)lf[113]+1),((C_word*)t0)[3],lf[715],t1,lf[716],((C_word*)t0)[2]);}

/* k8325 in k8318 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1184 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[714],t1);}

/* k8290 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8296,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8300,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8302,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[2]);
C_trace("map");
t6=*((C_word*)lf[221]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* a8301 in k8290 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8302,3,t0,t1,t2);}
t3=C_retrieve(lf[174]);
C_trace("g20092010");
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,lf[712]);}

/* k8298 in k8290 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1179 string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[217]))(4,*((C_word*)lf[217]+1),((C_word*)t0)[2],t1,lf[711]);}

/* k8294 in k8290 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1176 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[113]+1)))(6,*((C_word*)lf[113]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[709],t1,lf[710]);}

/* k8286 in k8279 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1175 str");
t2=((C_word*)t0)[3];
f_7874(t2,((C_word*)t0)[2],t1);}

/* k8273 in k8262 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1172 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8256 in k8245 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_ccall f_8258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1169 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1974 in k8200 in k8185 in k8173 in k8077 in k8044 in k7942 in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_8206(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8206,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
C_trace("c-backend.scm: 1161 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
C_trace("c-backend.scm: 1161 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t1,t3,((C_word*)t0)[2]);}}

/* str in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_7874(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7874,NULL,3,t0,t1,t2);}
C_trace("c-backend.scm: 1123 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),t1,t2,lf[660],((C_word*)t0)[2]);}

/* err in ##compiler#foreign-type-declaration in k2573 in k2487 in k2484 */
static void C_fcall f_7869(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7869,NULL,2,t0,t1);}
C_trace("c-backend.scm: 1122 quit");
((C_proc4)C_retrieve_symbol_proc(lf[658]))(4,*((C_word*)lf[658]+1),t1,lf[659],((C_word*)t0)[2]);}

/* ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7802(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7802,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7806,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1104 foreign-callback-stub-name");
((C_proc3)C_retrieve_symbol_proc(lf[657]))(3,*((C_word*)lf[657]+1),t4,t3);}

/* k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7809,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1105 foreign-callback-stub-qualifiers");
((C_proc3)C_retrieve_symbol_proc(lf[656]))(3,*((C_word*)lf[656]+1),t2,((C_word*)t0)[2]);}

/* k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7809,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1106 foreign-callback-stub-return-type");
((C_proc3)C_retrieve_symbol_proc(lf[652]))(3,*((C_word*)lf[652]+1),t2,((C_word*)t0)[2]);}

/* k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7815,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1107 foreign-callback-stub-argument-types");
((C_proc3)C_retrieve_symbol_proc(lf[651]))(3,*((C_word*)lf[651]+1),t2,((C_word*)t0)[2]);}

/* k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7815,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 1109 make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t3,t2,lf[655]);}

/* k7819 in k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7824,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7865,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1110 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t3,((C_word*)t0)[2],lf[654]);}

/* k7863 in k7819 in k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1110 gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(32),t1,((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[2],C_make_character(40));}

/* k7822 in k7819 in k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7827,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7832,tmp=(C_word)a,a+=2,tmp);
C_trace("c-backend.scm: 1111 pair-for-each");
((C_proc5)C_retrieve_symbol_proc(lf[197]))(5,*((C_word*)lf[197]+1),t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a7831 in k7822 in k7819 in k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7832,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7836,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7853,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_car(t2);
C_trace("c-backend.scm: 1113 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t5,t6,t7);}

/* k7851 in a7831 in k7822 in k7819 in k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1113 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1);}

/* k7834 in a7831 in k7822 in k7819 in k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t2))){
C_trace("c-backend.scm: 1114 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7825 in k7822 in k7819 in k7813 in k7810 in k7807 in k7804 in ##compiler#generate-foreign-callback-header in k2573 in k2487 in k2484 */
static void C_ccall f_7827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1116 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7308,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7314,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7314(t7,t1,t2);}

/* loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7314(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7314,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7322,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7789,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g15011502");
t6=t3;
f_7322(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7787 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7314(t3,((C_word*)t0)[2],t2);}

/* g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7322(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7322,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7326,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1051 foreign-callback-stub-id");
((C_proc3)C_retrieve_symbol_proc(lf[653]))(3,*((C_word*)lf[653]+1),t3,t2);}

/* k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7329,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1052 real-name2");
((C_proc4)C_retrieve_symbol_proc(lf[584]))(4,*((C_word*)lf[584]+1),t2,t1,((C_word*)t0)[2]);}

/* k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7332,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1053 foreign-callback-stub-return-type");
((C_proc3)C_retrieve_symbol_proc(lf[652]))(3,*((C_word*)lf[652]+1),t2,((C_word*)t0)[2]);}

/* k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1054 foreign-callback-stub-argument-types");
((C_proc3)C_retrieve_symbol_proc(lf[651]))(3,*((C_word*)lf[651]+1),t2,((C_word*)t0)[3]);}

/* k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7335,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 1056 make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t3,t2,lf[650]);}

/* k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7341,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7343,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 1083 fold");
((C_proc6)C_retrieve_symbol_proc(lf[439]))(6,*((C_word*)lf[439]+1),t5,((C_word*)t3)[1],lf[649],((C_word*)t0)[4],t1);}

/* k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 1084 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7690,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7693,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7786,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1086 cleanup");
((C_proc3)C_retrieve_symbol_proc(lf[494]))(3,*((C_word*)lf[494]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_7693(2,t3,C_SCHEME_UNDEFINED);}}

/* k7784 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1086 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[647],t1,lf[648]);}

/* k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7696,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 1087 generate-foreign-callback-header");
((C_proc4)C_retrieve_symbol_proc(lf[537]))(4,*((C_word*)lf[537]+1),t2,lf[646],((C_word*)t0)[2]);}

/* k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7699,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 1088 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_make_character(123),C_SCHEME_TRUE,lf[644],((C_word*)t0)[2],lf[645]);}

/* k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 1089 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[643]);}

/* k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7705,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7735,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7735(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1748 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7735(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7735,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7754,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_slot(t3,C_fix(0));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7751,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1092 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t9,t8,lf[642]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7749 in loop1748 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1092 gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[639],t1,((C_word*)t0)[2],lf[640],C_SCHEME_TRUE,lf[641]);}

/* k7752 in loop1748 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7735(t4,((C_word*)t0)[2],t2,t3);}

/* k7703 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(lf[550],((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t2;
f_7708(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7733,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1097 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t4,((C_word*)t0)[4]);}}

/* k7731 in k7703 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1097 gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[638],t1);}

/* k7706 in k7703 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7711,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1098 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[637],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],C_make_character(41));}

/* k7709 in k7706 in k7703 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7714,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(lf[550],((C_word*)t0)[2]);
if(C_truep(t3)){
C_trace("c-backend.scm: 1100 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[636]);}
else{
C_trace("c-backend.scm: 1099 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(41));}}

/* k7712 in k7709 in k7706 in k7703 in k7700 in k7697 in k7694 in k7691 in k7688 in k7685 in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1100 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[636]);}

/* compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7343,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=(C_word)C_eqp(t5,lf[16]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7353,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_7353(t8,t6);}
else{
t8=(C_word)C_eqp(t5,lf[626]);
if(C_truep(t8)){
t9=t7;
f_7353(t9,t8);}
else{
t9=(C_word)C_eqp(t5,lf[627]);
if(C_truep(t9)){
t10=t7;
f_7353(t10,t9);}
else{
t10=(C_word)C_eqp(t5,lf[628]);
if(C_truep(t10)){
t11=t7;
f_7353(t11,t10);}
else{
t11=(C_word)C_eqp(t5,lf[13]);
if(C_truep(t11)){
t12=t7;
f_7353(t12,t11);}
else{
t12=(C_word)C_eqp(t5,lf[550]);
if(C_truep(t12)){
t13=t7;
f_7353(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[629]);
if(C_truep(t13)){
t14=t7;
f_7353(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[630]);
if(C_truep(t14)){
t15=t7;
f_7353(t15,t14);}
else{
t15=(C_word)C_eqp(t5,lf[631]);
if(C_truep(t15)){
t16=t7;
f_7353(t16,t15);}
else{
t16=(C_word)C_eqp(t5,lf[632]);
if(C_truep(t16)){
t17=t7;
f_7353(t17,t16);}
else{
t17=(C_word)C_eqp(t5,lf[633]);
if(C_truep(t17)){
t18=t7;
f_7353(t18,t17);}
else{
t18=(C_word)C_eqp(t5,lf[634]);
t19=t7;
f_7353(t19,(C_truep(t18)?t18:(C_word)C_eqp(t5,lf[635])));}}}}}}}}}}}}

/* k7351 in compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7353(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7353,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[586]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7362(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[615]);
if(C_truep(t4)){
t5=t3;
f_7362(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[599]);
if(C_truep(t5)){
t6=t3;
f_7362(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[616]);
if(C_truep(t6)){
t7=t3;
f_7362(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[617]);
if(C_truep(t7)){
t8=t3;
f_7362(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[618]);
if(C_truep(t8)){
t9=t3;
f_7362(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[619]);
if(C_truep(t9)){
t10=t3;
f_7362(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[620]);
if(C_truep(t10)){
t11=t3;
f_7362(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[5],lf[621]);
if(C_truep(t11)){
t12=t3;
f_7362(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[601]);
if(C_truep(t12)){
t13=t3;
f_7362(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[5],lf[622]);
if(C_truep(t13)){
t14=t3;
f_7362(t14,t13);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[623]);
if(C_truep(t14)){
t15=t3;
f_7362(t15,t14);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[5],lf[624]);
t16=t3;
f_7362(t16,(C_truep(t15)?t15:(C_word)C_eqp(((C_word*)t0)[5],lf[625])));}}}}}}}}}}}}}}

/* k7360 in k7351 in compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7362(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7362,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1065 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[7],((C_word*)t0)[6],lf[587]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[588]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7374(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[612]);
if(C_truep(t4)){
t5=t3;
f_7374(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[613]);
if(C_truep(t5)){
t6=t3;
f_7374(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[613]);
t7=t3;
f_7374(t7,(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[5],lf[614])));}}}}}

/* k7372 in k7360 in k7351 in compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7374(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7374,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1067 string-append");
((C_proc8)C_retrieve_proc(*((C_word*)lf[113]+1)))(8,*((C_word*)lf[113]+1),((C_word*)t0)[7],((C_word*)t0)[6],lf[589],((C_word*)t0)[5],lf[590],((C_word*)t0)[5],lf[591]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[592]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7386(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[608]);
if(C_truep(t4)){
t5=t3;
f_7386(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[609]);
if(C_truep(t5)){
t6=t3;
f_7386(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[610]);
t7=t3;
f_7386(t7,(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[4],lf[611])));}}}}}

/* k7384 in k7372 in k7360 in k7351 in compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7386,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1069 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[113]+1)))(6,*((C_word*)lf[113]+1),((C_word*)t0)[6],((C_word*)t0)[5],lf[593],((C_word*)t0)[4],lf[594]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
C_trace("c-backend.scm: 1071 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[606]))(4,*((C_word*)lf[606]+1),t2,C_retrieve(lf[607]),((C_word*)t0)[2]);}
else{
t3=t2;
f_7392(2,t3,C_SCHEME_FALSE);}}}

/* k7390 in k7384 in k7372 in k7360 in k7351 in compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7392(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7392,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7396,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("g16951696");
t3=t2;
f_7396(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_eqp(t2,lf[595]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7431,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_7431(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[598]);
if(C_truep(t5)){
t6=t4;
f_7431(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[599]);
if(C_truep(t6)){
t7=t4;
f_7431(t7,t6);}
else{
t7=(C_word)C_eqp(t2,lf[600]);
if(C_truep(t7)){
t8=t4;
f_7431(t8,t7);}
else{
t8=(C_word)C_eqp(t2,lf[601]);
if(C_truep(t8)){
t9=t4;
f_7431(t9,t8);}
else{
t9=(C_word)C_eqp(t2,lf[602]);
if(C_truep(t9)){
t10=t4;
f_7431(t10,t9);}
else{
t10=(C_word)C_eqp(t2,lf[603]);
if(C_truep(t10)){
t11=t4;
f_7431(t11,t10);}
else{
t11=(C_word)C_eqp(t2,lf[604]);
t12=t4;
f_7431(t12,(C_truep(t11)?t11:(C_word)C_eqp(t2,lf[605])));}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}}

/* k7429 in k7390 in k7384 in k7372 in k7360 in k7351 in compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
C_trace("c-backend.scm: 1078 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[7],((C_word*)t0)[6],lf[596]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[597]);
if(C_truep(t2)){
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1079 compute-size");
t4=((C_word*)((C_word*)t0)[3])[1];
f_7343(5,t4,((C_word*)t0)[7],t3,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[6]);}}}

/* g1695 in k7390 in k7384 in k7372 in k7360 in k7351 in compute-size in k7339 in k7333 in k7330 in k7327 in k7324 in g1501 in loop1494 in generate-foreign-callback-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7396(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7396,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
C_trace("c-backend.scm: 1073 compute-size");
t4=((C_word*)((C_word*)t0)[4])[1];
f_7343(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t2;
C_trace("c-backend.scm: 1073 compute-size");
t4=((C_word*)((C_word*)t0)[4])[1];
f_7343(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_6994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6994,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7000,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7000(t7,t1,t2);}

/* loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7000(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7000,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7008,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7295,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g13901391");
t6=t3;
f_7008(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7293 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7000(t3,((C_word*)t0)[2],t2);}

/* g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7008(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7008,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7012,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 984  foreign-stub-id");
((C_proc3)C_retrieve_symbol_proc(lf[585]))(3,*((C_word*)lf[585]+1),t3,t2);}

/* k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7015,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 985  real-name2");
((C_proc4)C_retrieve_symbol_proc(lf[584]))(4,*((C_word*)lf[584]+1),t2,t1,((C_word*)t0)[2]);}

/* k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 986  foreign-stub-argument-types");
((C_proc3)C_retrieve_symbol_proc(lf[583]))(3,*((C_word*)lf[583]+1),t2,((C_word*)t0)[2]);}

/* k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7018,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7292,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 988  make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[280]))(4,*((C_word*)lf[280]+1),t4,t2,lf[582]);}

/* k7290 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7292,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[581],t1);
C_trace("c-backend.scm: 988  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t2,C_make_character(44));}

/* k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 989  foreign-stub-return-type");
((C_proc3)C_retrieve_symbol_proc(lf[580]))(3,*((C_word*)lf[580]+1),t2,((C_word*)t0)[2]);}

/* k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 990  foreign-stub-name");
((C_proc3)C_retrieve_symbol_proc(lf[579]))(3,*((C_word*)lf[579]+1),t2,((C_word*)t0)[2]);}

/* k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 991  foreign-stub-body");
((C_proc3)C_retrieve_symbol_proc(lf[578]))(3,*((C_word*)lf[578]+1),t2,((C_word*)t0)[2]);}

/* k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 992  foreign-stub-argument-names");
((C_proc3)C_retrieve_symbol_proc(lf[577]))(3,*((C_word*)lf[577]+1),t2,((C_word*)t0)[2]);}

/* k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_7039(2,t3,t1);}
else{
C_trace("c-backend.scm: 992  make-list");
((C_proc4)C_retrieve_symbol_proc(lf[241]))(4,*((C_word*)lf[241]+1),t2,((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("c-backend.scm: 993  foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t2,((C_word*)t0)[9],lf[576]);}

/* k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
C_trace("c-backend.scm: 994  foreign-stub-cps");
((C_proc3)C_retrieve_symbol_proc(lf[575]))(3,*((C_word*)lf[575]+1),t2,((C_word*)t0)[2]);}

/* k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7048,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_trace("c-backend.scm: 995  foreign-stub-callback");
((C_proc3)C_retrieve_symbol_proc(lf[574]))(3,*((C_word*)lf[574]+1),t2,((C_word*)t0)[2]);}

/* k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
C_trace("c-backend.scm: 996  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7054,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7281,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 998  cleanup");
((C_proc3)C_retrieve_symbol_proc(lf[494]))(3,*((C_word*)lf[494]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_7054(2,t3,C_SCHEME_UNDEFINED);}}

/* k7279 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 998  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[572],t1,lf[573]);}

/* k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7054,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[12])){
C_trace("c-backend.scm: 1000 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[570],((C_word*)t0)[6],lf[571]);}
else{
t3=t2;
f_7057(2,t3,C_SCHEME_UNDEFINED);}}

/* k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[10])){
C_trace("c-backend.scm: 1003 gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[565],((C_word*)t0)[2],lf[566],C_SCHEME_TRUE,lf[567],((C_word*)t0)[2],lf[568]);}
else{
C_trace("c-backend.scm: 1005 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[569],((C_word*)t0)[2],C_make_character(40));}}

/* k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7060,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7066,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[10])){
C_trace("c-backend.scm: 1008 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[560],C_SCHEME_TRUE,lf[561],((C_word*)t0)[2],lf[562]);}
else{
C_trace("c-backend.scm: 1009 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[563],C_SCHEME_TRUE,lf[564],((C_word*)t0)[2],C_make_character(40));}}

/* k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7069,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 1011 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[559]);}

/* k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 1012 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[558]);}

/* k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7078,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1021 iota");
((C_proc3)C_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t3,((C_word*)t0)[6]);}

/* k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7172,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7174,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_7174(t5,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7174,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7181,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_pairp(t3);
t7=t5;
f_7181(t7,(C_truep(t6)?(C_word)C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_7181(t6,C_SCHEME_FALSE);}}

/* k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_fcall f_7181(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7181,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(0));
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(0));
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(0));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7190,a[2]=t3,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7202,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
C_trace("c-backend.scm: 1018 symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t7,t5);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7208,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t8);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7206 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7211,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(116),t1);}

/* k7209 in k7206 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7214,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7212 in k7209 in k7206 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7200 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1016 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7188 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1019 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,((C_word*)t0)[2],lf[557]);}

/* k7192 in k7188 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7198,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1020 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,((C_word*)t0)[2]);}

/* k7196 in k7192 in k7188 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1015 gen");
((C_proc11)C_retrieve_proc(*((C_word*)lf[1]+1)))(11,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],lf[554],((C_word*)t0)[3],C_make_character(41),t1,lf[555],((C_word*)t0)[2],lf[556]);}

/* k7218 in k7179 in loop1417 in k7170 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_7174(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace("c-backend.scm: 1022 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[553]);}
else{
t3=t2;
f_7081(2,t3,C_SCHEME_UNDEFINED);}}

/* k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7081,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7084,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7090,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1024 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,((C_word*)t0)[8],C_SCHEME_TRUE,lf[544]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7111,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[550]);
if(C_truep(t4)){
C_trace("c-backend.scm: 1035 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE);}
else{
C_trace("c-backend.scm: 1034 gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[552],((C_word*)t0)[2]);}}}

/* k7109 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7114,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1036 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],C_make_character(40));}

/* k7112 in k7109 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7148,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7152,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1037 make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t4,((C_word*)t0)[2],lf[551]);}

/* k7150 in k7112 in k7109 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1037 intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k7146 in k7112 in k7109 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k7115 in k7112 in k7109 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],lf[550]);
if(C_truep(t3)){
t4=t2;
f_7120(2,t4,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 1038 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(41));}}

/* k7118 in k7115 in k7112 in k7109 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1039 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[549]);}

/* k7121 in k7118 in k7115 in k7112 in k7109 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 1041 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[545],C_SCHEME_TRUE,lf[546]);}
else{
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 1043 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[547]);}
else{
C_trace("c-backend.scm: 1044 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[548]);}}}

/* k7088 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1026 gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[543],C_SCHEME_TRUE);}

/* k7091 in k7088 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 1028 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[539],C_SCHEME_TRUE,lf[540]);}
else{
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 1030 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[541]);}
else{
C_trace("c-backend.scm: 1031 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[542]);}}}

/* k7082 in k7079 in k7076 in k7073 in k7070 in k7067 in k7064 in k7061 in k7058 in k7055 in k7052 in k7049 in k7046 in k7043 in k7040 in k7037 in k7034 in k7031 in k7028 in k7025 in k7022 in k7016 in k7013 in k7010 in g1390 in loop1383 in ##compiler#generate-foreign-stubs in k2573 in k2487 in k2484 */
static void C_ccall f_7084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1045 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* ##compiler#generate-foreign-callback-stub-prototypes in k2573 in k2487 in k2484 */
static void C_ccall f_6954(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6954,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6960,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6960(t6,t1,t2);}

/* loop1364 in ##compiler#generate-foreign-callback-stub-prototypes in k2573 in k2487 in k2484 */
static void C_fcall f_6960(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6960,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6981,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6972,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 976  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6970 in loop1364 in ##compiler#generate-foreign-callback-stub-prototypes in k2573 in k2487 in k2484 */
static void C_ccall f_6972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6975,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 977  generate-foreign-callback-header");
((C_proc4)C_retrieve_symbol_proc(lf[537]))(4,*((C_word*)lf[537]+1),t2,lf[538],((C_word*)t0)[2]);}

/* k6973 in k6970 in loop1364 in ##compiler#generate-foreign-callback-stub-prototypes in k2573 in k2487 in k2484 */
static void C_ccall f_6975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 978  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k6979 in loop1364 in ##compiler#generate-foreign-callback-stub-prototypes in k2573 in k2487 in k2484 */
static void C_ccall f_6981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6960(t3,((C_word*)t0)[2],t2);}

/* ##compiler#generate-external-variables in k2573 in k2487 in k2484 */
static void C_ccall f_6900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6900,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6904,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 961  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE);}

/* k6902 in ##compiler#generate-external-variables in k2573 in k2487 in k2484 */
static void C_ccall f_6904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6904,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6909,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6909(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1344 in k6902 in ##compiler#generate-external-variables in k2573 in k2487 in k2484 */
static void C_fcall f_6909(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6909,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6941,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_vector_ref(t4,C_fix(0));
t6=(C_word)C_i_vector_ref(t4,C_fix(1));
t7=(C_word)C_i_vector_ref(t4,C_fix(2));
t8=(C_truep(t7)?lf[535]:lf[536]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6938,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 967  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t9,t6,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6936 in loop1344 in k6902 in ##compiler#generate-external-variables in k2573 in k2487 in k2484 */
static void C_ccall f_6938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 967  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2],t1,C_make_character(59));}

/* k6939 in loop1344 in k6902 in ##compiler#generate-external-variables in k2573 in k2487 in k2484 */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6909(t3,((C_word*)t0)[2],t2);}

/* ##compiler#make-argument-list in k2573 in k2487 in k2484 */
static void C_ccall f_6884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6884,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6890,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 953  list-tabulate");
((C_proc4)C_retrieve_symbol_proc(lf[534]))(4,*((C_word*)lf[534]+1),t1,t2,t4);}

/* a6889 in ##compiler#make-argument-list in k2573 in k2487 in k2484 */
static void C_ccall f_6890(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6890,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6898,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 955  number->string");
C_number_to_string(3,0,t3,t2);}

/* k6896 in a6889 in ##compiler#make-argument-list in k2573 in k2487 in k2484 */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 955  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#make-variable-list in k2573 in k2487 in k2484 */
static void C_ccall f_6868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6868,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6874,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 948  list-tabulate");
((C_proc4)C_retrieve_symbol_proc(lf[534]))(4,*((C_word*)lf[534]+1),t1,t2,t4);}

/* a6873 in ##compiler#make-variable-list in k2573 in k2487 in k2484 */
static void C_ccall f_6874(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6874,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6882,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 950  number->string");
C_number_to_string(3,0,t3,t2);}

/* k6880 in a6873 in ##compiler#make-variable-list in k2573 in k2487 in k2484 */
static void C_ccall f_6882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 950  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[3],lf[533],((C_word*)t0)[2],t1);}

/* ##compiler#cleanup in k2573 in k2487 in k2484 */
static void C_ccall f_6779(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_6779,3,t0,t1,t2);}
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_string_length(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6788,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_6788(t9,t1,C_fix(0));}

/* loop in ##compiler#cleanup in k2573 in k2487 in k2484 */
static void C_fcall f_6788(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6788,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
t4=((C_word*)((C_word*)t0)[4])[1];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:((C_word*)t0)[3]));}
else{
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t5=(C_word)C_fixnum_lessp(t4,C_make_character(32));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6817,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_6817(t7,t5);}
else{
t7=(C_word)C_fixnum_greaterp(t4,C_make_character(126));
if(C_truep(t7)){
t8=t6;
f_6817(t8,t7);}
else{
t8=(C_word)C_eqp(t4,C_make_character(42));
if(C_truep(t8)){
t9=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t10=t2;
if(C_truep((C_word)C_fixnum_lessp(t10,t9))){
t11=(C_word)C_fixnum_increase(t2);
t12=(C_word)C_i_string_ref(((C_word*)t0)[3],t11);
t13=t6;
f_6817(t13,(C_word)C_eqp(C_make_character(47),t12));}
else{
t11=t6;
f_6817(t11,C_SCHEME_FALSE);}}
else{
t9=t6;
f_6817(t9,C_SCHEME_FALSE);}}}}}

/* k6815 in loop in ##compiler#cleanup in k2573 in k2487 in k2484 */
static void C_fcall f_6817(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6817,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=(C_word)C_i_string_set(((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],C_make_character(126));
t3=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
C_trace("c-backend.scm: 942  loop");
t4=((C_word*)((C_word*)t0)[5])[1];
f_6788(t4,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6827,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 939  string-copy");
((C_proc3)C_retrieve_symbol_proc(lf[532]))(3,*((C_word*)lf[532]+1),t2,((C_word*)t0)[3]);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=(C_word)C_i_string_set(((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],((C_word*)t0)[2]);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
C_trace("c-backend.scm: 942  loop");
t4=((C_word*)((C_word*)t0)[5])[1];
f_6788(t4,((C_word*)t0)[4],t3);}
else{
t2=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
C_trace("c-backend.scm: 942  loop");
t3=((C_word*)((C_word*)t0)[5])[1];
f_6788(t3,((C_word*)t0)[4],t2);}}}

/* k6825 in k6815 in loop in ##compiler#cleanup in k2573 in k2487 in k2484 */
static void C_ccall f_6827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_string_set(((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],C_make_character(126));
t4=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
C_trace("c-backend.scm: 942  loop");
t5=((C_word*)((C_word*)t0)[3])[1];
f_6788(t5,((C_word*)t0)[2],t4);}

/* emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6702,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6706,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_length(t2);
t6=(C_word)C_fixnum_increase(t5);
C_trace("c-backend.scm: 904  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[529],C_SCHEME_TRUE,lf[530],t6,lf[531]);}

/* k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6709,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6720,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6720(t6,t2,((C_word*)t0)[2]);}

/* doloop1286 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_fcall f_6720(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6720,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
C_trace("c-backend.scm: 908  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t1,C_SCHEME_TRUE,lf[521]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6733,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_car(t2);
C_trace("c-backend.scm: 909  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t3,t4);}}

/* k6731 in doloop1286 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6736,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6765,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 910  string->c-identifier");
((C_proc3)C_retrieve_symbol_proc(lf[528]))(3,*((C_word*)lf[528]+1),t3,((C_word*)t0)[2]);}

/* k6763 in k6731 in doloop1286 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 910  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[526],((C_word*)t0)[2],C_make_character(58),t1,lf[527]);}

/* k6734 in k6731 in doloop1286 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(lf[256],((C_word*)t0)[2]);
if(C_truep(t3)){
if(C_truep(C_retrieve(lf[207]))){
C_trace("c-backend.scm: 913  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[522],C_retrieve(lf[207]),lf[523]);}
else{
C_trace("c-backend.scm: 914  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[524]);}}
else{
C_trace("c-backend.scm: 915  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],lf[525]);}}

/* k6737 in k6734 in k6731 in doloop1286 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_6720(t3,((C_word*)t0)[2],t2);}

/* k6707 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 916  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[520]);}

/* k6710 in k6707 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 917  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[519]);}

/* k6713 in k6710 in k6707 in k6704 in emit-procedure-table-info in k2573 in k2487 in k2484 */
static void C_ccall f_6715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 918  gen");
((C_proc15)C_retrieve_proc(*((C_word*)lf[1]+1)))(15,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[512],C_SCHEME_TRUE,lf[513],C_SCHEME_TRUE,lf[514],C_SCHEME_TRUE,lf[515],C_SCHEME_TRUE,lf[516],C_SCHEME_TRUE,lf[517],C_SCHEME_TRUE,lf[518]);}

/* ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word t44;
C_word t45;
C_word t46;
C_word ab[78],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_2577,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2622,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4410,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4579,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t37=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4750,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5090,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5420,a[2]=t2,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t40=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5475,a[2]=t24,tmp=(C_word)a,a+=3,tmp));
t41=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5669,a[2]=t28,tmp=(C_word)a,a+=3,tmp));
t42=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5811,a[2]=t30,tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5888,tmp=(C_word)a,a+=2,tmp));
t44=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5900,a[2]=t4,a[3]=t8,a[4]=t24,a[5]=t22,a[6]=t2,a[7]=t12,tmp=(C_word)a,a+=8,tmp));
t45=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6669,a[2]=t14,a[3]=t16,a[4]=t18,a[5]=t8,a[6]=t20,a[7]=t32,a[8]=t6,a[9]=t4,a[10]=t1,a[11]=t5,tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 887  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[495]))(4,*((C_word*)lf[495]+1),t45,lf[510],lf[511]);}

/* k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6669,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! output ...) */,((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6673,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 889  header");
t4=((C_word*)((C_word*)t0)[2])[1];
f_4410(t4,t3);}

/* k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 890  declarations");
t3=((C_word*)((C_word*)t0)[2])[1];
f_4579(t3,t2);}

/* k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 891  generate-external-variables");
((C_proc3)C_retrieve_symbol_proc(lf[508]))(3,*((C_word*)lf[508]+1),t2,C_retrieve(lf[509]));}

/* k6677 in k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6679,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 892  generate-foreign-stubs");
((C_proc4)C_retrieve_symbol_proc(lf[506]))(4,*((C_word*)lf[506]+1),t2,C_retrieve(lf[507]),((C_word*)t0)[3]);}

/* k6680 in k6677 in k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6682,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6685,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 893  prototypes");
t3=((C_word*)((C_word*)t0)[2])[1];
f_4750(t3,t2);}

/* k6683 in k6680 in k6677 in k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6688,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 894  generate-foreign-callback-stubs");
((C_proc4)C_retrieve_symbol_proc(lf[505]))(4,*((C_word*)lf[505]+1),t2,C_retrieve(lf[201]),((C_word*)t0)[2]);}

/* k6686 in k6683 in k6680 in k6677 in k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6691,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 895  trampolines");
t3=((C_word*)((C_word*)t0)[2])[1];
f_5090(t3,t2);}

/* k6689 in k6686 in k6683 in k6680 in k6677 in k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6694,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 896  procedures");
t3=((C_word*)((C_word*)t0)[2])[1];
f_5900(t3,t2);}

/* k6692 in k6689 in k6686 in k6683 in k6680 in k6677 in k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6697,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 897  emit-procedure-table-info");
((C_proc4)C_retrieve_symbol_proc(lf[504]))(4,*((C_word*)lf[504]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6695 in k6692 in k6689 in k6686 in k6683 in k6680 in k6677 in k6674 in k6671 in k6667 in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
C_trace("c-backend.scm: 468  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[503],C_SCHEME_TRUE);}

/* procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5900(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5900,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5906,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_5906(t5,t1,((C_word*)t0)[2]);}

/* loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5906,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5914,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6655,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g10091010");
t6=t3;
f_5914(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6653 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5906(t3,((C_word*)t0)[2],t2);}

/* g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5914(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5914,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 711  lambda-literal-argument-count");
((C_proc3)C_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),t3,t2);}

/* k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 712  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[6]);}

/* k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 713  real-name");
((C_proc4)C_retrieve_symbol_proc(lf[502]))(4,*((C_word*)lf[502]+1),t2,t1,((C_word*)t0)[2]);}

/* k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5927,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 714  lambda-literal-allocated");
((C_proc3)C_retrieve_symbol_proc(lf[276]))(3,*((C_word*)lf[276]+1),t2,((C_word*)t0)[6]);}

/* k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 715  lambda-literal-rest-argument");
((C_proc3)C_retrieve_symbol_proc(lf[279]))(3,*((C_word*)lf[279]+1),t2,((C_word*)t0)[7]);}

/* k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5930,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("c-backend.scm: 716  lambda-literal-customizable");
((C_proc3)C_retrieve_symbol_proc(lf[282]))(3,*((C_word*)lf[282]+1),t4,((C_word*)t0)[8]);}

/* k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6652,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 717  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[146]))(3,*((C_word*)lf[146]+1),t3,((C_word*)t0)[8]);}
else{
t3=t2;
f_5936(t3,C_SCHEME_FALSE);}}

/* k6650 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5936(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5936(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5936,NULL,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_fixnum_difference(((C_word*)t0)[13],C_fix(1)):(C_word)C_a_i_minus(&a,2,((C_word*)t0)[13],C_fix(0)));
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5942,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[11],a[15]=((C_word*)t0)[12],tmp=(C_word)a,a+=16,tmp);
C_trace("c-backend.scm: 719  make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[280]))(4,*((C_word*)lf[280]+1),t3,((C_word*)t0)[13],lf[501]);}

/* k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5945,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
C_trace("c-backend.scm: 720  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t2,((C_word*)t0)[13],lf[500]);}

/* k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5948,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("c-backend.scm: 721  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[2];
C_trace("c-backend.scm: 721  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}}

/* k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("c-backend.scm: 722  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[2];
C_trace("c-backend.scm: 722  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}}

/* k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
C_trace("c-backend.scm: 723  lambda-literal-external");
((C_proc3)C_retrieve_symbol_proc(lf[332]))(3,*((C_word*)lf[332]+1),t2,((C_word*)t0)[12]);}

/* k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
C_trace("c-backend.scm: 724  lambda-literal-looping");
((C_proc3)C_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),t2,((C_word*)t0)[13]);}

/* k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5960,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
C_trace("c-backend.scm: 725  lambda-literal-direct");
((C_proc3)C_retrieve_symbol_proc(lf[277]))(3,*((C_word*)lf[277]+1),t2,((C_word*)t0)[14]);}

/* k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
C_trace("c-backend.scm: 726  lambda-literal-rest-argument-mode");
((C_proc3)C_retrieve_symbol_proc(lf[278]))(3,*((C_word*)lf[278]+1),t2,((C_word*)t0)[15]);}

/* k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
C_trace("c-backend.scm: 727  lambda-literal-temporaries");
((C_proc3)C_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t2,((C_word*)t0)[16]);}

/* k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_retrieve(lf[207]))){
C_trace("c-backend.scm: 729  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t2,C_retrieve(lf[207]),lf[498]);}
else{
t3=t2;
f_5969(2,t3,lf[499]);}}

/* k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 731  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[495]))(5,*((C_word*)lf[495]+1),t2,lf[496],lf[497],((C_word*)t0)[14]);}
else{
t3=t2;
f_5972(2,t3,C_SCHEME_UNDEFINED);}}

/* k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_trace("c-backend.scm: 732  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],tmp=(C_word)a,a+=23,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6621,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 733  cleanup");
((C_proc3)C_retrieve_symbol_proc(lf[494]))(3,*((C_word*)lf[494]+1),t3,((C_word*)t0)[2]);}

/* k6619 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 733  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[492],t1,lf[493],C_SCHEME_TRUE);}

/* k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(C_word)C_eqp(lf[256],((C_word*)t0)[14]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6604,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 742  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,lf[486]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6582,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[14],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 735  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,lf[491]);}}

/* k6580 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6585,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 736  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[489]);}
else{
C_trace("c-backend.scm: 736  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[490]);}}

/* k6583 in k6580 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 738  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[487]);}
else{
C_trace("c-backend.scm: 739  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[488]);}}

/* k6586 in k6583 in k6580 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 740  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6602 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[207]))){
t3=t2;
f_6607(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 744  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[485]);}}

/* k6605 in k6602 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 745  gen");
((C_proc16)C_retrieve_proc(*((C_word*)lf[1]+1)))(16,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[479],C_SCHEME_TRUE,lf[480],C_SCHEME_TRUE,lf[481],C_SCHEME_TRUE,lf[482],((C_word*)t0)[2],lf[483],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[484],((C_word*)t0)[2]);}

/* k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("c-backend.scm: 750  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(40));}

/* k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=t2;
f_5987(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 751  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[478]);}}

/* k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6554,a[2]=t2,a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=(C_word)C_eqp(((C_word*)t0)[17],C_fix(0));
t5=t3;
f_6554(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_6554(t4,C_SCHEME_FALSE);}}

/* k6552 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6554(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6554,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 753  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[477]);}
else{
t2=((C_word*)t0)[2];
f_5990(2,t2,C_SCHEME_UNDEFINED);}}

/* k6555 in k6552 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 754  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_5990(2,t3,t2);}}

/* k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[15]);}

/* k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
C_trace("c-backend.scm: 756  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[476]);}
else{
t3=t2;
f_5996(2,t3,C_SCHEME_UNDEFINED);}}

/* k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("c-backend.scm: 757  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[475]);}

/* k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[13],lf[245]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[21],0,C_SCHEME_FALSE);
t5=t2;
f_6002(t5,t4);}
else{
t4=t2;
f_6002(t4,C_SCHEME_UNDEFINED);}}

/* k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6002(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6002,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("c-backend.scm: 759  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[474]);}

/* k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
C_trace("c-backend.scm: 761  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[472],((C_word*)t0)[20],C_make_character(59));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6514,a[2]=((C_word*)t0)[20],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(C_word)C_fixnum_decrease(((C_word*)t0)[20]);
t5=t3;
f_6514(t5,(C_word)C_fixnum_plus(((C_word*)t0)[16],t4));}
else{
t4=t3;
f_6514(t4,((C_word*)t0)[16]);}}}

/* k6512 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6514(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6514,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6516,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6516(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* doloop1061 in k6512 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6516(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6516,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6526,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 765  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[473],t2,C_make_character(59));}}

/* k6524 in doloop1061 in k6512 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_6516(t4,((C_word*)t0)[2],t2,t3);}

/* k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6008(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6011,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[18],a[13]=((C_word*)t0)[19],a[14]=((C_word*)t0)[20],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[22],tmp=(C_word)a,a+=17,tmp);
t3=(C_word)C_eqp(lf[256],((C_word*)t0)[14]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6228,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6303,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 767  fold");
((C_proc5)C_retrieve_symbol_proc(lf[439]))(5,*((C_word*)lf[439]+1),t4,t5,C_fix(0),((C_word*)t0)[7]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[17],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 801  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,lf[453]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6381,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6459,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[17],a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[9];
if(C_truep(t6)){
t7=t5;
f_6459(t7,C_SCHEME_FALSE);}
else{
t7=((C_word*)t0)[17];
t8=t5;
f_6459(t8,(C_word)C_fixnum_greaterp(t7,C_fix(0)));}}}}

/* k6457 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6459,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[5])){
C_trace("c-backend.scm: 815  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_SCHEME_TRUE,lf[463],C_SCHEME_TRUE,lf[464],C_SCHEME_TRUE,lf[465],((C_word*)t0)[3],lf[466]);}
else{
C_trace("c-backend.scm: 818  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_SCHEME_TRUE,lf[467],((C_word*)t0)[3],lf[468]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6471,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_6471(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 820  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[471]);}}}

/* k6469 in k6457 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6474,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 821  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[470]);}
else{
t3=t2;
f_6474(2,t3,C_SCHEME_UNDEFINED);}}

/* k6472 in k6469 in k6457 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(((C_word*)t0)[3])){
t2=C_retrieve(lf[129]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_6381(2,t4,t3);}
else{
t3=C_retrieve(lf[433]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
f_6381(2,t5,t4);}
else{
C_trace("c-backend.scm: 823  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[469]);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6381(2,t3,t2);}}

/* k6379 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6384,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6423,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=C_retrieve(lf[129]);
if(C_truep(t4)){
t5=t3;
f_6423(t5,C_SCHEME_FALSE);}
else{
t5=C_retrieve(lf[447]);
t6=t3;
f_6423(t6,(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_i_not(((C_word*)t0)[2])));}}
else{
t4=t3;
f_6423(t4,C_SCHEME_FALSE);}}

/* k6421 in k6379 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6423(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[245]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(2)))){
C_trace("c-backend.scm: 827  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[457],((C_word*)t0)[3],lf[458],((C_word*)t0)[3],lf[459]);}
else{
t4=((C_word*)t0)[2];
f_6384(2,t4,C_SCHEME_UNDEFINED);}}
else{
C_trace("c-backend.scm: 828  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[460],((C_word*)t0)[3],lf[461],((C_word*)t0)[3],lf[462]);}}
else{
t2=((C_word*)t0)[2];
f_6384(2,t2,C_SCHEME_UNDEFINED);}}

/* k6382 in k6379 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=t2;
f_6390(t4,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[2])){
t4=((C_word*)t0)[2];
t5=t2;
f_6390(t5,t4);}
else{
t4=((C_word*)t0)[5];
t5=t2;
f_6390(t5,(C_word)C_fixnum_greaterp(t4,C_fix(0)));}}}

/* k6388 in k6382 in k6379 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6390(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6390,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[442]))){
C_trace("c-backend.scm: 830  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[456]);}
else{
t3=t2;
f_6393(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
f_6011(2,t2,C_SCHEME_UNDEFINED);}}

/* k6391 in k6388 in k6382 in k6379 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
C_trace("c-backend.scm: 832  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[454]);}
else{
C_trace("c-backend.scm: 833  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[455]);}}
else{
C_trace("c-backend.scm: 833  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[455]);}}

/* k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 802  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[452]);}

/* k6318 in k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 803  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[451]);}

/* k6321 in k6318 in k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
t4=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
C_trace("c-backend.scm: 805  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_make_character(116),t4);}
else{
C_trace("c-backend.scm: 806  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[450]);}}

/* k6324 in k6321 in k6318 in k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 807  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[448],((C_word*)t0)[3],lf[449]);}

/* k6327 in k6324 in k6321 in k6318 in k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6329(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6332,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6344,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve(lf[129]);
if(C_truep(t4)){
t5=t3;
f_6344(t5,C_SCHEME_FALSE);}
else{
t5=C_retrieve(lf[447]);
if(C_truep(t5)){
t6=t3;
f_6344(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)t0)[3];
t7=(C_word)C_fixnum_greaterp(t6,C_fix(2));
t8=t3;
f_6344(t8,(C_truep(t7)?(C_word)C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE));}}}

/* k6342 in k6327 in k6324 in k6321 in k6318 in k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6344(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("c-backend.scm: 809  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[444],((C_word*)t0)[2],lf[445],((C_word*)t0)[2],lf[446]);}
else{
t2=((C_word*)t0)[3];
f_6332(2,t2,C_SCHEME_UNDEFINED);}}

/* k6330 in k6327 in k6324 in k6321 in k6318 in k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[442]))){
C_trace("c-backend.scm: 810  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[443]);}
else{
C_trace("c-backend.scm: 811  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[440],((C_word*)t0)[2],lf[441]);}}

/* k6333 in k6330 in k6327 in k6324 in k6321 in k6318 in k6315 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 811  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[440],((C_word*)t0)[2],lf[441]);}

/* a6302 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6303(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6303,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6311,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 767  literal-size");
t5=((C_word*)((C_word*)t0)[2])[1];
f_5475(t5,t4,t2);}

/* k6309 in a6302 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[2],t1));}

/* k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6228,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6234,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 769  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[435],C_SCHEME_TRUE,lf[436],C_SCHEME_TRUE,lf[437],((C_word*)t0)[2],lf[438]);}

/* k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve(lf[433]))){
C_trace("c-backend.scm: 773  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[434]);}
else{
t3=t2;
f_6237(2,t3,C_SCHEME_UNDEFINED);}}

/* k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6240,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve(lf[207]))){
t3=t2;
f_6240(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6271,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[426]))){
C_trace("c-backend.scm: 776  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[427],C_retrieve(lf[426]),lf[428]);}
else{
if(C_truep(C_retrieve(lf[429]))){
C_trace("c-backend.scm: 778  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[430],C_retrieve(lf[429]),lf[431],C_SCHEME_TRUE,lf[432]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_6271(2,t5,t4);}}}}

/* k6269 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[424]))){
C_trace("c-backend.scm: 781  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[425],C_retrieve(lf[424]),C_make_character(59));}
else{
t3=t2;
f_6274(2,t3,C_SCHEME_UNDEFINED);}}

/* k6272 in k6269 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[422]))){
C_trace("c-backend.scm: 783  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[423],C_retrieve(lf[422]),C_make_character(59));}
else{
t3=t2;
f_6277(2,t3,C_SCHEME_UNDEFINED);}}

/* k6275 in k6272 in k6269 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve(lf[419]))){
C_trace("c-backend.scm: 785  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[420],C_retrieve(lf[419]),lf[421]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6240(2,t3,t2);}}

/* k6238 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 786  gen");
((C_proc16)C_retrieve_proc(*((C_word*)lf[1]+1)))(16,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[412],((C_word*)t0)[3],lf[413],C_SCHEME_TRUE,lf[414],((C_word*)t0)[3],lf[415],C_SCHEME_TRUE,lf[416],C_SCHEME_TRUE,lf[417],C_SCHEME_TRUE,lf[418]);}

/* k6241 in k6238 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6246,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 791  gen");
((C_proc14)C_retrieve_proc(*((C_word*)lf[1]+1)))(14,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[406],((C_word*)t0)[2],lf[407],C_SCHEME_TRUE,lf[408],C_SCHEME_TRUE,lf[409],((C_word*)t0)[2],lf[410],C_SCHEME_TRUE,lf[411]);}

/* k6244 in k6241 in k6238 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6249,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 795  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[404],((C_word*)t0)[2],lf[405]);}

/* k6247 in k6244 in k6241 in k6238 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6249,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_6011(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 797  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[402],((C_word*)t0)[4],lf[403]);}}

/* k6256 in k6247 in k6244 in k6241 in k6238 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6261,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 798  literal-frame");
t3=((C_word*)((C_word*)t0)[2])[1];
f_5420(t3,t2);}

/* k6259 in k6256 in k6247 in k6244 in k6241 in k6238 in k6235 in k6232 in k6226 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 799  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[400],((C_word*)t0)[2],lf[401]);}

/* k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6014,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6034,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[14],a[10]=t2,a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t4=(C_word)C_eqp(lf[256],((C_word*)t0)[8]);
if(C_truep(t4)){
t5=t3;
f_6034(t5,C_SCHEME_FALSE);}
else{
t5=((C_word*)t0)[3];
if(C_truep(t5)){
t6=t3;
f_6034(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)((C_word*)t0)[15])[1];
if(C_truep(t6)){
t7=t3;
f_6034(t7,t6);}
else{
if(C_truep(((C_word*)t0)[2])){
t7=((C_word*)t0)[2];
t8=t3;
f_6034(t8,t7);}
else{
t7=((C_word*)t0)[11];
t8=t3;
f_6034(t8,(C_word)C_fixnum_greaterp(t7,C_fix(0)));}}}}}

/* k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6034(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6034,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[12])[1])){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6040,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[4],C_fix(0)))){
C_trace("c-backend.scm: 844  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[391],lf[392],((C_word*)t0)[9],C_make_character(114));}
else{
C_trace("c-backend.scm: 844  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[393],lf[392],((C_word*)t0)[9],C_make_character(114));}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6169,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[4],C_fix(0)))){
C_trace("c-backend.scm: 870  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[397],lf[398]);}
else{
C_trace("c-backend.scm: 870  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[399],lf[398]);}}}
else{
t2=((C_word*)t0)[10];
f_6014(2,t2,C_SCHEME_UNDEFINED);}}

/* k6167 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6172,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 872  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[3],lf[395]);}
else{
C_trace("c-backend.scm: 873  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],lf[396],((C_word*)t0)[3]);}}

/* k6170 in k6167 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6175,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 875  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
C_trace("c-backend.scm: 877  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[4],lf[394]);}}

/* k6182 in k6170 in k6167 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6173 in k6170 in k6167 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 877  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[394]);}

/* k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6040,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[331]);
if(C_truep(t3)){
C_trace("c-backend.scm: 845  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(118));}
else{
t4=t2;
f_6043(2,t4,C_SCHEME_UNDEFINED);}}

/* k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 846  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[389],((C_word*)t0)[5],lf[390]);}

/* k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6049,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6150,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 848  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
t3=t2;
f_6049(2,t3,C_SCHEME_UNDEFINED);}}

/* k6148 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 850  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),t2,lf[385],C_SCHEME_TRUE,lf[386],C_SCHEME_TRUE,lf[387],((C_word*)t0)[6],lf[388]);}

/* k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6055,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],lf[380]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[2],C_SCHEME_FALSE));
if(C_truep(t4)){
C_trace("c-backend.scm: 854  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[381],((C_word*)t0)[6],lf[382]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[2],lf[331]);
if(C_truep(t5)){
C_trace("c-backend.scm: 855  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[383],((C_word*)t0)[6],lf[384]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t2;
f_6055(2,t7,t6);}}}

/* k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 856  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],lf[379]);}

/* k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6119,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6123,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 857  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t4,((C_word*)t0)[5],lf[378]);}

/* k6121 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 857  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k6117 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 858  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[376],((C_word*)t0)[5],lf[377]);}

/* k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6067,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 860  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[374],((C_word*)t0)[2],lf[375]);}

/* k6065 in k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6070,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6068 in k6065 in k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 862  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[372],((C_word*)t0)[3],lf[373]);}

/* k6071 in k6068 in k6065 in k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 863  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[371]);}

/* k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6079,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6094,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6094(t7,t2,t3,((C_word*)t0)[2]);}

/* doloop1208 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6094,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6104,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 867  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[370],t2,C_make_character(59));}}

/* k6102 in doloop1208 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6094(t4,((C_word*)t0)[2],t2,t3);}

/* k6077 in k6074 in k6071 in k6068 in k6065 in k6062 in k6059 in k6056 in k6053 in k6050 in k6047 in k6044 in k6041 in k6038 in k6032 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
C_trace("c-backend.scm: 868  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[368],((C_word*)t0)[3],lf[369]);}
else{
t3=((C_word*)t0)[2];
f_6014(2,t3,C_SCHEME_UNDEFINED);}}

/* k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6024,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 879  lambda-literal-body");
((C_proc3)C_retrieve_symbol_proc(lf[367]))(3,*((C_word*)lf[367]+1),t3,((C_word*)t0)[2]);}

/* k6022 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
C_trace("c-backend.scm: 878  expression");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2622(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
C_trace("c-backend.scm: 878  expression");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2622(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}}

/* k6015 in k6012 in k6009 in k6006 in k6003 in k6000 in k5997 in k5994 in k5991 in k5988 in k5985 in k5982 in k5979 in k5976 in k5973 in k5970 in k5967 in k5964 in k5961 in k5958 in k5955 in k5952 in k5949 in k5946 in k5943 in k5940 in k5934 in k5931 in k5928 in k5925 in k5922 in k5919 in k5916 in g1009 in loop1002 in procedures in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 884  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* string-like-substring in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5888(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5888,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_difference(t4,t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5895,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 704  make-string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[366]+1)))(3,*((C_word*)lf[366]+1),t6,t5);}

/* k5893 in string-like-substring in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5898,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 705  ##sys#copy-bytes");
((C_proc7)C_retrieve_symbol_proc(lf[365]))(7,*((C_word*)lf[365]+1),t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k5896 in k5893 in string-like-substring in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5811(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5811,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5818,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 693  fx/");
((C_proc4)C_retrieve_proc(*((C_word*)lf[364]+1)))(4,*((C_word*)lf[364]+1),t4,t3,C_fix(80));}

/* k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5821,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 694  modulo");
((C_proc4)C_retrieve_proc(*((C_word*)lf[363]+1)))(4,*((C_word*)lf[363]+1),t2,((C_word*)t0)[5],C_fix(80));}

/* k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5821,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5826,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5826(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop978 in k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5826(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5826,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=(C_word)C_eqp(((C_word*)t0)[6],C_fix(0));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5842,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_5842(t7,t5);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[3],C_fix(0));
t8=t6;
f_5842(t8,(C_word)C_i_not(t7));}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5863,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5882,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_fixnum_plus(t3,C_fix(80));
C_trace("c-backend.scm: 700  string-like-substring");
f_5888(t7,((C_word*)t0)[4],t3,t8);}}

/* k5880 in doloop978 in k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 700  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),((C_word*)t0)[2],t1);}

/* k5876 in doloop978 in k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 700  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k5861 in doloop978 in k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(80));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5826(t4,((C_word*)t0)[2],t2,t3);}

/* k5840 in doloop978 in k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5842(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5842,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5853,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 699  string-like-substring");
f_5888(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5851 in k5840 in doloop978 in k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 699  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),((C_word*)t0)[2],t1);}

/* k5847 in k5840 in doloop978 in k5819 in k5816 in gen-string-constant in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 699  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1);}

/* gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5669(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5669,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5676,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5809,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 666  big-fixnum?");
((C_proc3)C_retrieve_symbol_proc(lf[362]))(3,*((C_word*)lf[362]+1),t5,t2);}
else{
t5=t4;
f_5676(t5,C_SCHEME_FALSE);}}

/* k5807 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5676(t2,(C_word)C_i_not(t1));}

/* k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5676,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 667  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],lf[347],((C_word*)t0)[3],lf[348]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 668  block-variable-literal?");
((C_proc3)C_retrieve_symbol_proc(lf[345]))(3,*((C_word*)lf[345]+1),t2,((C_word*)t0)[3]);}}

/* k5680 in k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5682(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5682,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_retrieve(lf[349]);
t3=(C_word)C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
C_trace("c-backend.scm: 670  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[350]);}
else{
if(C_truep((C_word)C_booleanp(((C_word*)t0)[4]))){
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 672  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(61),lf[351],C_make_character(59));}
else{
C_trace("c-backend.scm: 672  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(61),lf[352],C_make_character(59));}}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[4]))){
t4=(C_word)C_fix((C_word)C_character_code(((C_word*)t0)[4]));
C_trace("c-backend.scm: 674  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[353],t4,lf[354]);}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[4]))){
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5732,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 677  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),t5,t4);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
C_trace("c-backend.scm: 682  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[358]);}
else{
t4=(C_word)C_immp(((C_word*)t0)[4]);
t5=(C_truep(t4)?C_SCHEME_FALSE:(C_word)C_lambdainfop(((C_word*)t0)[4]));
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_fixnump(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5765,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_5765(t8,t6);}
else{
t8=(C_word)C_immp(((C_word*)t0)[4]);
t9=t7;
f_5765(t9,(C_word)C_i_not(t8));}}}}}}}}}

/* k5763 in k5680 in k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5765(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5765,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 686  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],lf[361]);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[3];
C_trace("c-backend.scm: 643  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[342],t3);}}

/* k5766 in k5763 in k5680 in k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5771,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5778,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 687  encode-literal");
((C_proc3)C_retrieve_symbol_proc(lf[360]))(3,*((C_word*)lf[360]+1),t3,((C_word*)t0)[2]);}

/* k5776 in k5766 in k5763 in k5680 in k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 687  gen-string-constant");
t2=((C_word*)((C_word*)t0)[3])[1];
f_5811(t2,((C_word*)t0)[2],t1);}

/* k5769 in k5766 in k5763 in k5680 in k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 688  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[359]);}

/* k5730 in k5680 in k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5732,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5738,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 679  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,((C_word*)t0)[2],lf[357]);}

/* k5736 in k5730 in k5680 in k5674 in gen-lit in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 680  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),((C_word*)t0)[5],lf[355],((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],lf[356]);}

/* literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5475(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5475,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5482,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 646  immediate?");
((C_proc3)C_retrieve_symbol_proc(lf[346]))(3,*((C_word*)lf[346]+1),t3,t2);}

/* k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5482(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5482,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep((C_word)C_i_numberp(((C_word*)t0)[3]))){
t2=C_retrieve(lf[338]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(10));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("c-backend.scm: 650  literal-size");
t4=((C_word*)((C_word*)t0)[2])[1];
f_5475(t4,t2,t3);}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[3]))){
t2=(C_word)C_i_vector_length(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5542,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5546,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5550,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 651  vector->list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[341]+1)))(3,*((C_word*)lf[341]+1),t9,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 652  block-variable-literal?");
((C_proc3)C_retrieve_symbol_proc(lf[345]))(3,*((C_word*)lf[345]+1),t2,((C_word*)t0)[3]);}}}}}}}

/* k5589 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5591,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep((C_word)C_immp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
C_trace("c-backend.scm: 643  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[342],t3);}
else{
if(C_truep((C_word)C_lambdainfop(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 655  ##sys#bytevector?");
((C_proc3)C_retrieve_proc(*((C_word*)lf[344]+1)))(3,*((C_word*)lf[344]+1),t2,((C_word*)t0)[3]);}}}}

/* k5607 in k5589 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5609(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5609,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5616,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[3]);
C_trace("c-backend.scm: 655  words");
((C_proc3)C_retrieve_symbol_proc(lf[343]))(3,*((C_word*)lf[343]+1),t2,t3);}
else{
if(C_truep((C_word)C_structurep(((C_word*)t0)[3]))){
t2=(C_word)C_block_size(((C_word*)t0)[3]);
t3=(C_word)C_fixnum_plus(C_fix(2),t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5638(t7,((C_word*)t0)[4],C_fix(0),t3);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
C_trace("c-backend.scm: 643  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[342],t3);}}}

/* loop in k5607 in k5589 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5638(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5638,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,((C_word*)t0)[5]))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(C_word)C_fixnum_increase(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5660,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(((C_word*)t0)[3],t2);
C_trace("c-backend.scm: 661  literal-size");
t8=((C_word*)((C_word*)t0)[2])[1];
f_5475(t8,t6,t7);}}

/* k5658 in loop in k5607 in k5589 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],t1);
C_trace("c-backend.scm: 661  loop");
t3=((C_word*)((C_word*)t0)[4])[1];
f_5638(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5614 in k5607 in k5589 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(C_fix(2),t1));}

/* k5548 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5550,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5552,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5552(t5,((C_word*)t0)[2],t1);}

/* loop913 in k5548 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5552(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5552,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5581,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g929930");
t5=((C_word*)((C_word*)t0)[2])[1];
f_5475(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5579 in loop913 in k5548 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5581,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop913926");
t6=((C_word*)((C_word*)t0)[4])[1];
f_5552(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop913926");
t6=((C_word*)((C_word*)t0)[4])[1];
f_5552(t6,((C_word*)t0)[3],t5);}}

/* k5544 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 651  reduce");
((C_proc5)C_retrieve_symbol_proc(lf[339]))(5,*((C_word*)lf[339]+1),((C_word*)t0)[2],*((C_word*)lf[340]+1),C_fix(0),t1);}

/* k5540 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus((C_word)C_fixnum_plus(C_fix(1),((C_word*)t0)[2]),t1));}

/* k5511 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5517,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("c-backend.scm: 650  literal-size");
t4=((C_word*)((C_word*)t0)[2])[1];
f_5475(t4,t2,t3);}

/* k5515 in k5511 in k5480 in literal-size in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus((C_word)C_fixnum_plus(C_fix(3),((C_word*)t0)[2]),t1));}

/* literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5420(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5420,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5426(t5,t1,C_fix(0),((C_word*)t0)[2]);}

/* doloop887 in literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5426(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5426,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5436,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5455,a[2]=t2,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[337]))(2,*((C_word*)lf[337]+1),t6);}}

/* k5453 in doloop887 in literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5458,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[336],t1);}

/* k5456 in k5453 in doloop887 in literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[335]+1)))(4,*((C_word*)lf[335]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5459 in k5456 in k5453 in doloop887 in literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[334]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[2]);}

/* k5462 in k5459 in k5456 in k5453 in doloop887 in literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),t2,((C_word*)t0)[2]);}

/* k5465 in k5462 in k5459 in k5456 in k5453 in doloop887 in literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 640  gen-lit");
t2=((C_word*)((C_word*)t0)[4])[1];
f_5669(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5434 in doloop887 in literal-frame in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_5426(t4,((C_word*)t0)[2],t2,t3);}

/* trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5090(C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5090,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5093,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5129,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5209,a[2]=t3,a[3]=t9,a[4]=t5,a[5]=t11,a[6]=t7,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5279,a[2]=t16,a[3]=t3,a[4]=t5,a[5]=t7,a[6]=t9,tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_5279(t18,t14,((C_word*)t0)[2]);}

/* loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5279(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5279,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5287,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5407,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g808809");
t6=t3;
f_5287(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5405 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5279(t3,((C_word*)t0)[2],t2);}

/* g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5287(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5287,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5291,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 599  lambda-literal-argument-count");
((C_proc3)C_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),t3,t2);}

/* k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5291,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 600  lambda-literal-rest-argument");
((C_proc3)C_retrieve_symbol_proc(lf[279]))(3,*((C_word*)lf[279]+1),t4,((C_word*)t0)[2]);}

/* k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5297,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 601  lambda-literal-rest-argument-mode");
((C_proc3)C_retrieve_symbol_proc(lf[278]))(3,*((C_word*)lf[278]+1),t2,((C_word*)t0)[2]);}

/* k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 602  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[2]);}

/* k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 603  lambda-literal-customizable");
((C_proc3)C_retrieve_symbol_proc(lf[282]))(3,*((C_word*)lf[282]+1),t2,((C_word*)t0)[2]);}

/* k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5404,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 604  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[146]))(3,*((C_word*)lf[146]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_5306(t3,C_SCHEME_FALSE);}}

/* k5402 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5306(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5306(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5306,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t1)){
t3=(C_word)C_fixnum_decrease(((C_word*)((C_word*)t0)[10])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[10])+1,t3);
t5=t2;
f_5309(t5,t4);}
else{
t3=t2;
f_5309(t3,C_SCHEME_UNDEFINED);}}

/* k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5309(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5309,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
C_trace("c-backend.scm: 606  lambda-literal-direct");
((C_proc3)C_retrieve_symbol_proc(lf[277]))(3,*((C_word*)lf[277]+1),t2,((C_word*)t0)[2]);}

/* k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[12];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(((C_word*)t0)[11])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5321,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 608  gen");
((C_proc11)C_retrieve_proc(*((C_word*)lf[1]+1)))(11,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[327],((C_word*)t0)[9],lf[328],C_SCHEME_TRUE,lf[329],((C_word*)t0)[9],lf[330]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_5349(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5393,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 616  lambda-literal-allocated");
((C_proc3)C_retrieve_symbol_proc(lf[276]))(3,*((C_word*)lf[276]+1),t3,((C_word*)t0)[2]);}}}}

/* k5391 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_greaterp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_5349(2,t3,t2);}
else{
C_trace("c-backend.scm: 616  lambda-literal-external");
((C_proc3)C_retrieve_symbol_proc(lf[332]))(3,*((C_word*)lf[332]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k5347 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5349,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_eqp(((C_word*)t0)[8],lf[245]);
t4=t2;
f_5355(t4,(C_word)C_i_not(t3));}
else{
t3=t2;
f_5355(t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5353 in k5347 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5355(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5355,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_eqp(((C_word*)t0)[7],lf[331]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5365,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 619  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[273]))(5,*((C_word*)lf[273]+1),t3,*((C_word*)lf[274]+1),((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5369,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 620  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[273]))(5,*((C_word*)lf[273]+1),t3,*((C_word*)lf[274]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5373,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 621  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[273]))(5,*((C_word*)lf[273]+1),t2,*((C_word*)lf[274]+1),((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}}

/* k5371 in k5353 in k5347 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5367 in k5353 in k5347 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5363 in k5353 in k5347 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5319 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 610  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[325],((C_word*)t0)[3],lf[326]);}

/* k5322 in k5319 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5327,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 611  restore");
f_5093(t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k5325 in k5322 in k5319 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 612  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k5328 in k5325 in k5322 in k5319 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5333,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 613  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t2,((C_word*)((C_word*)t0)[2])[1],lf[324]);}

/* k5331 in k5328 in k5325 in k5322 in k5319 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5343,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 614  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t3,t1,C_make_character(44));}

/* k5341 in k5331 in k5328 in k5325 in k5322 in k5319 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5334 in k5331 in k5328 in k5325 in k5322 in k5319 in k5313 in k5307 in k5304 in k5301 in k5298 in k5295 in k5292 in k5289 in g808 in loop770 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 615  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[323]);}

/* k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5228,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5228(t6,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5228(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5228,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5266,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g860861");
t6=t3;
f_5236(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5264 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5228(t3,((C_word*)t0)[2],t2);}

/* g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5236(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5236,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5240,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 625  gen");
((C_proc13)C_retrieve_proc(*((C_word*)lf[1]+1)))(13,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[318],t2,lf[319],C_SCHEME_TRUE,lf[320],t2,lf[321],t2,lf[322]);}

/* k5238 in g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 627  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[315],((C_word*)t0)[3],lf[316],((C_word*)t0)[3],lf[317]);}

/* k5241 in k5238 in g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5246,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 628  restore");
f_5093(t2,((C_word*)t0)[3]);}

/* k5244 in k5241 in k5238 in g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 629  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[314],((C_word*)t0)[2],C_make_character(44));}

/* k5247 in k5244 in k5241 in k5238 in g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5252,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5259,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5263,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 630  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t4,((C_word*)t0)[2],lf[313]);}

/* k5261 in k5247 in k5244 in k5241 in k5238 in g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 630  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k5257 in k5247 in k5244 in k5241 in k5238 in g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5250 in k5247 in k5244 in k5241 in k5238 in g860 in loop853 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 631  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[312]);}

/* k5210 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5212,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5226,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 633  emitter");
t4=((C_word*)((C_word*)t0)[3])[1];
f_5129(t4,t3,C_SCHEME_FALSE);}

/* k5224 in k5210 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("for-each");
t2=*((C_word*)lf[311]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k5213 in k5210 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5222,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 634  emitter");
t3=((C_word*)((C_word*)t0)[2])[1];
f_5129(t3,t2,C_SCHEME_TRUE);}

/* k5220 in k5213 in k5210 in k5207 in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("for-each");
t2=*((C_word*)lf[311]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* emitter in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5129(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5129,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp));}

/* f_5131 in emitter in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5131(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5131,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[306]);
t5=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[307]);
C_trace("c-backend.scm: 577  gen");
((C_proc14)C_retrieve_proc(*((C_word*)lf[1]+1)))(14,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[308],t2,C_make_character(114),t4,lf[309],C_SCHEME_TRUE,lf[310],t2,C_make_character(114),t5);}

/* k5133 */
static void C_ccall f_5135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 579  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[304],((C_word*)t0)[4],lf[305]);}

/* k5136 in k5133 */
static void C_ccall f_5138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5138,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 580  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[303],((C_word*)t0)[4],C_make_character(114));}

/* k5139 in k5136 in k5133 */
static void C_ccall f_5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("c-backend.scm: 581  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(118));}
else{
t3=t2;
f_5144(2,t3,C_SCHEME_UNDEFINED);}}

/* k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 582  gen");
((C_proc11)C_retrieve_proc(*((C_word*)lf[1]+1)))(11,*((C_word*)lf[1]+1),t2,lf[299],((C_word*)t0)[4],lf[300],C_SCHEME_TRUE,lf[301],C_SCHEME_TRUE,lf[302],((C_word*)t0)[4],C_make_character(59));}

/* k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 585  restore");
f_5093(t2,((C_word*)t0)[4]);}

/* k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5150,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 586  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[298]);}

/* k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 588  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[296]);}
else{
C_trace("c-backend.scm: 589  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[297]);}}

/* k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 590  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[3],lf[295]);}

/* k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 591  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[294]);}
else{
t3=t2;
f_5162(2,t3,C_SCHEME_UNDEFINED);}}

/* k5160 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 592  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[293]);}

/* k5163 in k5160 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 593  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[292]);}

/* k5166 in k5163 in k5160 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5178,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5182,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
C_trace("c-backend.scm: 594  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[290]))(4,*((C_word*)lf[290]+1),t4,t5,lf[291]);}

/* k5180 in k5166 in k5163 in k5160 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 594  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k5176 in k5166 in k5163 in k5160 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5169 in k5166 in k5163 in k5160 in k5157 in k5154 in k5151 in k5148 in k5145 in k5142 in k5139 in k5136 in k5133 */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 595  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[289]);}

/* restore in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5093(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5093,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5097,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_difference(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5106,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_5106(t8,t3,t4,C_fix(0));}

/* doloop778 in restore in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5106(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5106,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5116,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 572  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,lf[286],t2,lf[287],t3,lf[288]);}}

/* k5114 in doloop778 in restore in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5106(t4,((C_word*)t0)[2],t2,t3);}

/* k5095 in restore in trampolines in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 573  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[284],((C_word*)t0)[2],lf[285]);}

/* prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4750(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4750,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 501  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE);}

/* k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4754,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4823,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4823(t6,t2,((C_word*)t0)[2]);}

/* loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4823,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4831,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5077,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g653654");
t6=t3;
f_4831(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5075 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4823(t3,((C_word*)t0)[2],t2);}

/* g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4831,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4835,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 504  lambda-literal-argument-count");
((C_proc3)C_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),t3,t2);}

/* k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 505  lambda-literal-customizable");
((C_proc3)C_retrieve_symbol_proc(lf[282]))(3,*((C_word*)lf[282]+1),t2,((C_word*)t0)[2]);}

/* k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5074,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 506  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[146]))(3,*((C_word*)lf[146]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_4841(t3,C_SCHEME_FALSE);}}

/* k5072 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4841(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4841(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4841,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5060,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
C_trace("c-backend.scm: 507  make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[280]))(4,*((C_word*)lf[280]+1),t3,t4,lf[281]);}
else{
t4=((C_word*)t0)[5];
C_trace("c-backend.scm: 507  make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[280]))(4,*((C_word*)lf[280]+1),t3,t4,lf[281]);}}

/* k5058 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 507  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 508  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[2]);}

/* k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 509  lambda-literal-rest-argument");
((C_proc3)C_retrieve_symbol_proc(lf[279]))(3,*((C_word*)lf[279]+1),t2,((C_word*)t0)[2]);}

/* k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 510  lambda-literal-rest-argument-mode");
((C_proc3)C_retrieve_symbol_proc(lf[278]))(3,*((C_word*)lf[278]+1),t2,((C_word*)t0)[2]);}

/* k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 511  lambda-literal-direct");
((C_proc3)C_retrieve_symbol_proc(lf[277]))(3,*((C_word*)lf[277]+1),t2,((C_word*)t0)[2]);}

/* k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 512  lambda-literal-allocated");
((C_proc3)C_retrieve_symbol_proc(lf[276]))(3,*((C_word*)lf[276]+1),t2,((C_word*)t0)[2]);}

/* k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[8];
t4=C_retrieve(lf[272]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5052,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_increase(((C_word*)t0)[8]);
C_trace("c-backend.scm: 514  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[273]))(5,*((C_word*)lf[273]+1),t5,*((C_word*)lf[274]+1),((C_word*)((C_word*)t0)[3])[1],t6);}
else{
t5=t2;
f_4862(t5,C_SCHEME_UNDEFINED);}}

/* k5050 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_4862(t3,t2);}

/* k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4862,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
C_trace("c-backend.scm: 515  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4868,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5006,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 520  lambda-literal-callee-signatures");
((C_proc3)C_retrieve_symbol_proc(lf[275]))(3,*((C_word*)lf[275]+1),t3,((C_word*)t0)[2]);}

/* k5004 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5006,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5008,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5008(t5,((C_word*)t0)[2],t1);}

/* loop672 in k5004 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5008(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5008,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5016,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5034,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g679680");
t6=t3;
f_5016(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5032 in loop672 in k5004 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5008(t3,((C_word*)t0)[2],t2);}

/* g679 in loop672 in k5004 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_5016(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5016,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_retrieve(lf[272]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5027,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_increase(t2);
C_trace("c-backend.scm: 519  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[273]))(5,*((C_word*)lf[273]+1),t5,*((C_word*)lf[274]+1),((C_word*)((C_word*)t0)[2])[1],t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k5025 in g679 in loop672 in k5004 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_5027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_eqp(lf[256],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4980,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[207]))){
C_trace("c-backend.scm: 530  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t4,C_retrieve(lf[207]),lf[263]);}
else{
t5=t4;
f_4980(2,t5,lf[264]);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4955,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 522  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t4,lf[270],((C_word*)t0)[5],lf[271],C_SCHEME_TRUE);}}

/* k4953 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 523  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[269]);}

/* k4956 in k4953 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4961,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 524  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[267]);}
else{
C_trace("c-backend.scm: 524  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[268]);}}

/* k4959 in k4956 in k4953 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4961,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 526  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[265]);}
else{
C_trace("c-backend.scm: 527  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[266]);}}

/* k4962 in k4959 in k4956 in k4953 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 528  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4978 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4983,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 531  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,lf[261],t1,lf[262],C_SCHEME_TRUE);}

/* k4981 in k4978 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[259]))){
C_trace("c-backend.scm: 533  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,lf[260],C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f11016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 534  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,lf[258]);}}

/* f11016 in k4981 in k4978 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f11016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 535  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[257],((C_word*)t0)[2]);}

/* k4984 in k4981 in k4978 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 534  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[258]);}

/* k4987 in k4984 in k4981 in k4978 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 535  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[257],((C_word*)t0)[2]);}

/* k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 536  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(40));}

/* k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4877,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_4877(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 537  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[255]);}}

/* k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4880,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4927,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(C_word)C_eqp(((C_word*)t0)[2],C_fix(0));
t5=t3;
f_4927(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_4927(t4,C_SCHEME_FALSE);}}

/* k4925 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4927(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4927,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 539  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[254]);}
else{
t2=((C_word*)t0)[2];
f_4880(2,t2,C_SCHEME_UNDEFINED);}}

/* k4928 in k4925 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 540  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4880(2,t3,t2);}}

/* k4878 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[4]);}

/* k4881 in k4878 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4883,2,t0,t1);}
if(C_truep(((C_word*)t0)[8])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4889,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 543  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[252]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 551  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(41));}}

/* k4913 in k4881 in k4878 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 554  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_make_character(59));}
else{
C_trace("c-backend.scm: 553  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[253]);}}

/* k4916 in k4913 in k4881 in k4878 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 554  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k4887 in k4881 in k4878 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4889,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[245]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 546  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[248],((C_word*)t0)[2],lf[249],C_SCHEME_TRUE,lf[250],((C_word*)t0)[2],lf[251]);}}

/* k4896 in k4887 in k4881 in k4878 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k4899 in k4896 in k4887 in k4881 in k4878 in k4875 in k4872 in k4869 in k4866 in k4863 in k4860 in k4857 in k4854 in k4851 in k4848 in k4845 in k4842 in k4839 in k4836 in k4833 in g653 in loop646 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
C_trace("c-backend.scm: 549  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[246],t2,lf[247]);}

/* k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4757,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4762,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4762(t5,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* loop736 in k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4762(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4762,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4810,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4774,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 558  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[243],t4,lf[244]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4772 in loop736 in k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4784,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 559  make-list");
((C_proc4)C_retrieve_symbol_proc(lf[241]))(4,*((C_word*)lf[241]+1),t3,((C_word*)t0)[2],lf[242]);}

/* k4782 in k4772 in loop736 in k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4784,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4786(t5,((C_word*)t0)[2],t1);}

/* loop748 in k4782 in k4772 in loop736 in k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4786(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4786,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4796,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g755756");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4794 in loop748 in k4782 in k4772 in loop736 in k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4786(t3,((C_word*)t0)[2],t2);}

/* k4775 in k4772 in loop736 in k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 560  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[240]);}

/* k4808 in loop736 in k4755 in k4752 in prototypes in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4762(t3,((C_word*)t0)[2],t2);}

/* declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4579(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4579,NULL,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4586,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 472  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[239]);}

/* k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4722,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4722(t6,t2,C_retrieve(lf[209]));}

/* loop597 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4722(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4722,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4737,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("c-backend.scm: 475  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[235],t4,lf[236],C_SCHEME_TRUE,lf[237],t4,lf[238]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4735 in loop597 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4722(t3,((C_word*)t0)[2],t2);}

/* k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t3)){
t4=t2;
f_4592(2,t4,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 479  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[233],((C_word*)t0)[2],lf[234]);}}

/* k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 480  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[232]);}

/* k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4595,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4600,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4600(t5,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4600(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4600,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4610,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
C_trace("c-backend.scm: 484  ##sys#lambda-info->string");
((C_proc3)C_retrieve_symbol_proc(lf[231]))(3,*((C_word*)lf[231]+1),t4,t5);}}

/* k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4610,2,t0,t1);}
t2=(C_word)C_i_string_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4616,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_fixnum_shift_right(t2,C_fix(16));
t5=(C_word)C_fixnum_shift_right(t2,C_fix(8));
t6=(C_word)C_fixnum_and(C_fix(255),t5);
t7=(C_word)C_fixnum_and(C_fix(255),t2);
C_trace("c-backend.scm: 486  gen");
((C_proc12)C_retrieve_proc(*((C_word*)lf[1]+1)))(12,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[229],((C_word*)t0)[5],lf[230],t4,C_make_character(44),t6,C_make_character(44),t7,C_make_character(41));}

/* k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4619,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4669,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4669(t6,t2,C_fix(0));}

/* doloop620 in k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4669(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4669,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4679,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_string_ref(((C_word*)t0)[2],t2);
t6=(C_word)C_fix((C_word)C_character_code(t5));
C_trace("c-backend.scm: 493  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t4,C_make_character(44),t6);}}

/* k4677 in doloop620 in k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_4669(t3,((C_word*)t0)[2],t2);}

/* k4617 in k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4619(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(7));
t4=(C_word)C_fixnum_and(C_fix(16777208),t3);
t5=(C_word)C_fixnum_difference(t4,((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4642,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4642(t9,t2,t5);}

/* doloop627 in k4617 in k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4642(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4642,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4652,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 496  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,lf[228]);}}

/* k4650 in doloop627 in k4617 in k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_4642(t3,((C_word*)t0)[2],t2);}

/* k4620 in k4617 in k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 497  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[227]);}

/* k4623 in k4620 in k4617 in k4614 in k4608 in doloop611 in k4593 in k4590 in k4587 in k4584 in declarations in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4600(t4,((C_word*)t0)[2],t2,t3);}

/* header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4410(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4410,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4413,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4430,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4571,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 438  current-seconds");
((C_proc2)C_retrieve_symbol_proc(lf[226]))(2,*((C_word*)lf[226]+1),t4);}

/* k4569 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 438  ##sys#decode-seconds");
((C_proc4)C_retrieve_symbol_proc(lf[225]))(4,*((C_word*)lf[225]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4430,2,t0,t1);}
t2=(C_word)C_i_vector_ref(t1,C_fix(1));
t3=(C_word)C_i_vector_ref(t1,C_fix(2));
t4=(C_word)C_i_vector_ref(t1,C_fix(3));
t5=(C_word)C_i_vector_ref(t1,C_fix(4));
t6=(C_word)C_i_vector_ref(t1,C_fix(5));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_fixnum_plus(C_fix(1900),t6);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4529,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t10=(C_word)C_fixnum_increase(t5);
C_trace("c-backend.scm: 446  pad0");
f_4413(t9,t10);}

/* k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4533,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 446  pad0");
f_4413(t2,((C_word*)t0)[2]);}

/* k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 446  pad0");
f_4413(t2,((C_word*)t0)[2]);}

/* k4535 in k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4541,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 446  pad0");
f_4413(t2,((C_word*)t0)[2]);}

/* k4539 in k4535 in k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4545,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4549,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4551,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4559,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4563,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 449  chicken-version");
((C_proc3)C_retrieve_symbol_proc(lf[224]))(3,*((C_word*)lf[224]+1),t6,C_SCHEME_TRUE);}

/* k4561 in k4539 in k4535 in k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 449  string-split");
((C_proc4)C_retrieve_symbol_proc(lf[222]))(4,*((C_word*)lf[222]+1),((C_word*)t0)[2],t1,lf[223]);}

/* k4557 in k4539 in k4535 in k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("map");
t2=*((C_word*)lf[221]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4550 in k4539 in k4535 in k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4551(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4551,3,t0,t1,t2);}
t3=*((C_word*)lf[113]+1);
C_trace("g556557");
t4=t3;
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,lf[219],t2,lf[220]);}

/* k4547 in k4539 in k4535 in k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 447  string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[217]))(4,*((C_word*)lf[217]+1),((C_word*)t0)[2],t1,lf[218]);}

/* k4543 in k4539 in k4535 in k4531 in k4527 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 444  gen");
((C_proc21)C_retrieve_proc(*((C_word*)lf[1]+1)))(21,*((C_word*)lf[1]+1),((C_word*)t0)[8],lf[212],((C_word*)t0)[7],lf[213],C_SCHEME_TRUE,lf[214],C_SCHEME_TRUE,lf[215],((C_word*)t0)[6],C_make_character(45),((C_word*)t0)[5],C_make_character(45),((C_word*)t0)[4],C_make_character(32),((C_word*)t0)[3],C_make_character(58),((C_word*)t0)[2],C_SCHEME_TRUE,t1,lf[216]);}

/* k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4451,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 452  gen-list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t2,C_retrieve(lf[211]));}

/* k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4454,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 453  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[207]))){
C_trace("c-backend.scm: 454  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,lf[208],C_retrieve(lf[207]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4518,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 456  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,lf[210]);}}

/* k4516 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 457  gen-list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),((C_word*)t0)[2],C_retrieve(lf[209]));}

/* k4455 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 458  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[203],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[204],C_retrieve(lf[205]),lf[206]);}

/* k4458 in k4455 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[199]))){
C_trace("c-backend.scm: 460  generate-foreign-callback-stub-prototypes");
((C_proc3)C_retrieve_symbol_proc(lf[200]))(3,*((C_word*)lf[200]+1),t2,C_retrieve(lf[201]));}
else{
t3=t2;
f_4463(2,t3,C_SCHEME_UNDEFINED);}}

/* k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve(lf[202])))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4478,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 462  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE);}
else{
if(C_truep(C_retrieve(lf[199]))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
C_trace("c-backend.scm: 465  generate-foreign-callback-stub-prototypes");
((C_proc3)C_retrieve_symbol_proc(lf[200]))(3,*((C_word*)lf[200]+1),((C_word*)t0)[2],C_retrieve(lf[201]));}}}

/* k4476 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4478,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4483,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4483(t5,((C_word*)t0)[2],C_retrieve(lf[202]));}

/* loop571 in k4476 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4483,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4498,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("c-backend.scm: 463  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4496 in loop571 in k4476 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4483(t3,((C_word*)t0)[2],t2);}

/* k4464 in k4461 in k4458 in k4455 in k4452 in k4449 in k4446 in k4428 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve(lf[199]))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("c-backend.scm: 465  generate-foreign-callback-stub-prototypes");
((C_proc3)C_retrieve_symbol_proc(lf[200]))(3,*((C_word*)lf[200]+1),((C_word*)t0)[2],C_retrieve(lf[201]));}}

/* pad0 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4413(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4413,NULL,2,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(10)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4427,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 436  number->string");
C_number_to_string(3,0,t4,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4425 in pad0 in header in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 436  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[198],t1);}

/* expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_2622(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2622,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4378,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
C_trace("c-backend.scm: 431  expr");
t11=((C_word*)t6)[1];
f_2625(t11,t1,t2,t3);}

/* expr-args in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4378(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4378,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4384,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 425  pair-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[197]))(4,*((C_word*)lf[197]+1),t1,t4,t2);}

/* a4383 in expr-args in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4384,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4388,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
C_trace("c-backend.scm: 428  expr");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2625(t6,t1,t5,((C_word*)t0)[3]);}
else{
C_trace("c-backend.scm: 427  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_make_character(44));}}

/* k4386 in a4383 in expr-args in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 428  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2625(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_2625(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2625,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[12]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t7);
t12=(C_word)C_eqp(t11,lf[13]);
if(C_truep(t12)){
if(C_truep((C_word)C_i_cadr(t7))){
C_trace("c-backend.scm: 84   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[14]);}
else{
C_trace("c-backend.scm: 84   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[15]);}}
else{
t13=(C_word)C_eqp(t11,lf[16]);
if(C_truep(t13)){
t14=(C_word)C_i_cadr(t7);
t15=(C_word)C_fix((C_word)C_character_code(t14));
C_trace("c-backend.scm: 85   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[17],t15,C_make_character(41));}
else{
t14=(C_word)C_eqp(t11,lf[18]);
if(C_truep(t14)){
C_trace("c-backend.scm: 86   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[19]);}
else{
t15=(C_word)C_eqp(t11,lf[20]);
if(C_truep(t15)){
t16=(C_word)C_i_cadr(t7);
C_trace("c-backend.scm: 87   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[21],t16,C_make_character(41));}
else{
t16=(C_word)C_eqp(t11,lf[22]);
if(C_truep(t16)){
C_trace("c-backend.scm: 88   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[23]);}
else{
C_trace("c-backend.scm: 89   bomb");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t1,lf[24]);}}}}}}
else{
t11=(C_word)C_eqp(t9,lf[25]);
if(C_truep(t11)){
t12=(C_word)C_i_car(t7);
if(C_truep((C_word)C_i_vectorp(t12))){
t13=(C_word)C_i_vector_ref(t12,C_fix(0));
C_trace("c-backend.scm: 94   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[26],t13,lf[27]);}
else{
t13=(C_word)C_i_car(t7);
C_trace("c-backend.scm: 95   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[28],t13,C_make_character(93));}}
else{
t12=(C_word)C_eqp(t9,lf[29]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2764,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 98   gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t13,C_SCHEME_TRUE,lf[32]);}
else{
t13=(C_word)C_eqp(t9,lf[33]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t7);
C_trace("c-backend.scm: 107  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t1,lf[34],t14);}
else{
t14=(C_word)C_eqp(t9,lf[35]);
if(C_truep(t14)){
t15=(C_word)C_i_car(t7);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[5],a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t19=((C_word*)t17)[1];
f_2822(t19,t1,t5,t3,t15);}
else{
t15=(C_word)C_eqp(t9,lf[36]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2873,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 119  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t16,lf[38]);}
else{
t16=(C_word)C_eqp(t9,lf[39]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2900,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 124  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t17,lf[41]);}
else{
t17=(C_word)C_eqp(t9,lf[42]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2919,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 129  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t18,lf[43]);}
else{
t18=(C_word)C_eqp(t9,lf[44]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2952,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 136  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t19,lf[47]);}
else{
t19=(C_word)C_eqp(t9,lf[48]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2989,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 143  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t20,lf[50]);}
else{
t20=(C_word)C_eqp(t9,lf[51]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3018,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 150  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t21,lf[53]);}
else{
t21=(C_word)C_eqp(t9,lf[54]);
if(C_truep(t21)){
t22=(C_word)C_i_car(t7);
t23=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3050,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t22,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 158  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t23,lf[60],t22,C_make_character(44));}
else{
t22=(C_word)C_eqp(t9,lf[61]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3121,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 168  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t23,lf[63]);}
else{
t23=(C_word)C_eqp(t9,lf[64]);
if(C_truep(t23)){
t24=(C_word)C_i_car(t7);
C_trace("c-backend.scm: 172  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t1,C_make_character(116),t24);}
else{
t24=(C_word)C_eqp(t9,lf[65]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3153,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t26=(C_word)C_i_car(t7);
C_trace("c-backend.scm: 175  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t25,C_make_character(116),t26,C_make_character(61));}
else{
t25=(C_word)C_eqp(t9,lf[66]);
if(C_truep(t25)){
t26=(C_word)C_i_car(t7);
t27=(C_word)C_i_cadr(t7);
if(C_truep((C_word)C_i_caddr(t7))){
if(C_truep(t27)){
C_trace("c-backend.scm: 184  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[67],t26,lf[68]);}
else{
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3195,a[2]=t26,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3199,a[2]=t28,tmp=(C_word)a,a+=3,tmp);
t30=(C_word)C_i_cadddr(t7);
C_trace("c-backend.scm: 185  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t29,t30);}}
else{
if(C_truep(t27)){
C_trace("c-backend.scm: 186  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[73],t26,lf[74]);}
else{
C_trace("c-backend.scm: 187  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[75],t26,lf[76]);}}}
else{
t26=(C_word)C_eqp(t9,lf[77]);
if(C_truep(t26)){
t27=(C_word)C_i_car(t7);
t28=(C_word)C_i_cadr(t7);
t29=(C_word)C_i_caddr(t7);
t30=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3230,a[2]=t29,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t28)){
C_trace("c-backend.scm: 194  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t30,lf[83],t27,lf[84]);}
else{
C_trace("c-backend.scm: 195  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t30,lf[85],t27,lf[86]);}}
else{
t27=(C_word)C_eqp(t9,lf[87]);
if(C_truep(t27)){
t28=(C_word)C_i_car(t7);
t29=(C_word)C_i_cadr(t7);
t30=(C_word)C_i_caddr(t7);
if(C_truep(t29)){
t31=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3278,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3292,a[2]=t28,a[3]=t31,tmp=(C_word)a,a+=4,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3296,a[2]=t32,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 206  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t33,t30);}
else{
t31=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3299,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3313,a[2]=t28,a[3]=t31,tmp=(C_word)a,a+=4,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3317,a[2]=t32,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 211  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t33,t30);}}
else{
t28=(C_word)C_eqp(t9,lf[96]);
if(C_truep(t28)){
C_trace("c-backend.scm: 215  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[97]);}
else{
t29=(C_word)C_eqp(t9,lf[98]);
if(C_truep(t29)){
t30=(C_word)C_i_cdr(t5);
t31=(C_word)C_i_length(t30);
t32=t3;
t33=(C_word)C_fixnum_increase(t31);
t34=(C_word)C_i_cdr(t7);
t35=(C_word)C_i_pairp(t34);
t36=(C_truep(t35)?(C_word)C_i_cadr(t7):C_SCHEME_FALSE);
t37=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3350,a[2]=t35,a[3]=((C_word*)t0)[2],a[4]=t36,a[5]=t32,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=t31,a[9]=t33,a[10]=t3,a[11]=t30,a[12]=((C_word*)t0)[4],a[13]=t1,a[14]=t5,a[15]=t7,tmp=(C_word)a,a+=16,tmp);
C_trace("c-backend.scm: 224  source-info->string");
((C_proc3)C_retrieve_symbol_proc(lf[147]))(3,*((C_word*)lf[147]+1),t37,t36);}
else{
t30=(C_word)C_eqp(t9,lf[148]);
if(C_truep(t30)){
t31=(C_word)C_i_length(t5);
t32=(C_word)C_fixnum_increase(t31);
t33=(C_word)C_i_car(t7);
t34=(C_word)C_i_cadr(t7);
t35=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3938,a[2]=t34,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t32,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=t31,a[10]=t1,a[11]=t33,tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 308  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[146]))(3,*((C_word*)lf[146]+1),t35,((C_word*)t0)[3]);}
else{
t31=(C_word)C_eqp(t9,lf[152]);
if(C_truep(t31)){
t32=(C_word)C_i_cdr(t5);
t33=(C_word)C_i_length(t32);
t34=(C_word)C_fixnum_increase(t33);
t35=(C_word)C_i_caddr(t7);
t36=(C_word)C_i_cadddr(t7);
t37=(C_word)C_eqp(t36,C_fix(0));
t38=(C_word)C_i_not(t37);
t39=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4023,a[2]=t35,a[3]=t36,a[4]=t38,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=t32,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=t39,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 336  find-lambda");
t41=((C_word*)((C_word*)t0)[2])[1];
f_2580(t41,t40,t35);}
else{
t32=(C_word)C_eqp(t9,lf[154]);
if(C_truep(t32)){
t33=(C_word)C_i_length(t5);
t34=(C_word)C_fixnum_plus(t33,C_fix(1));
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4046,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t36=(C_word)C_i_car(t7);
C_trace("c-backend.scm: 353  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t35,C_SCHEME_TRUE,lf[156],t36,lf[157],t34,lf[158]);}
else{
t33=(C_word)C_eqp(t9,lf[159]);
if(C_truep(t33)){
t34=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4065,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 358  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t34,C_SCHEME_TRUE,lf[161]);}
else{
t34=(C_word)C_eqp(t9,lf[162]);
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4084,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t36=(C_word)C_i_car(t7);
C_trace("c-backend.scm: 363  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t35,lf[163],t36,C_make_character(40));}
else{
t35=(C_word)C_eqp(t9,lf[164]);
if(C_truep(t35)){
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4103,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t37=(C_word)C_i_car(t7);
t38=(C_word)C_i_length(t5);
C_trace("c-backend.scm: 368  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t36,lf[165],t37,lf[166],t38);}
else{
t36=(C_word)C_eqp(t9,lf[167]);
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4139,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t38=(C_word)C_i_cadr(t7);
C_trace("c-backend.scm: 376  foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t37,t38,lf[169]);}
else{
t37=(C_word)C_eqp(t9,lf[170]);
if(C_truep(t37)){
t38=(C_word)C_i_cadr(t7);
t39=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4159,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t40=(C_word)C_i_car(t7);
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4177,a[2]=t38,a[3]=t40,a[4]=t39,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 380  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t41,t38,lf[175]);}
else{
t38=(C_word)C_eqp(t9,lf[176]);
if(C_truep(t38)){
t39=(C_word)C_i_car(t7);
t40=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4193,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t41=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4207,a[2]=t39,a[3]=t40,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 386  foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t41,t39,lf[181]);}
else{
t39=(C_word)C_eqp(t9,lf[182]);
if(C_truep(t39)){
t40=(C_word)C_i_car(t7);
t41=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4223,a[2]=t40,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4251,a[2]=t41,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 392  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t42,t40,lf[187]);}
else{
t40=(C_word)C_eqp(t9,lf[188]);
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4260,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 399  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t41,C_SCHEME_TRUE,lf[192]);}
else{
t41=(C_word)C_eqp(t9,lf[193]);
if(C_truep(t41)){
t42=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4343,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 414  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t42,lf[195]);}
else{
C_trace("c-backend.scm: 422  bomb");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t1,lf[196]);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4341 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 415  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4344 in k4341 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 416  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[194]);}

/* k4347 in k4344 in k4341 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 417  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4350 in k4347 in k4344 in k4341 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 418  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(58));}

/* k4353 in k4350 in k4347 in k4344 in k4341 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4358,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 419  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4356 in k4353 in k4350 in k4347 in k4344 in k4341 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 420  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 400  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2625(t4,t2,t3,((C_word*)t0)[3]);}

/* k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 401  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[191]);}

/* k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4266,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4279,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4279(t7,((C_word*)t0)[2],t2,t3);}

/* doloop500 in k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_4279(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4279,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 405  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[189]);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 408  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[190]);}}

/* k4300 in doloop500 in k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[6]);
C_trace("c-backend.scm: 409  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4303 in k4300 in doloop500 in k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 410  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(58));}

/* k4306 in k4303 in k4300 in doloop500 in k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
C_trace("c-backend.scm: 411  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4309 in k4306 in k4303 in k4300 in doloop500 in k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4279(t4,((C_word*)t0)[2],t2,t3);}

/* k4287 in doloop500 in k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 406  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4290 in k4287 in doloop500 in k4264 in k4261 in k4258 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 407  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* k4249 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 392  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[185],t1,lf[186]);}

/* k4221 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 393  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2625(t4,t2,t3,((C_word*)t0)[3]);}

/* k4224 in k4221 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4243,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 394  foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t3,((C_word*)t0)[2]);}

/* k4241 in k4224 in k4221 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 394  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[184],t1);}

/* k4227 in k4224 in k4221 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 395  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4230 in k4227 in k4224 in k4221 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 396  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[183]);}

/* k4205 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4211,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 386  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,((C_word*)t0)[2],lf[180]);}

/* k4209 in k4205 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 386  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[178],t1,lf[179]);}

/* k4191 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 387  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4194 in k4191 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 388  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[177]);}

/* k4175 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4181,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 380  foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,((C_word*)t0)[2]);}

/* k4179 in k4175 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 380  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_make_character(40),((C_word*)t0)[3],lf[172],((C_word*)t0)[2],C_make_character(41),t1);}

/* k4157 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 381  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4160 in k4157 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 382  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[171]);}

/* k4137 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("c-backend.scm: 376  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1,t2,C_make_character(41));}

/* k4101 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4106,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 371  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_make_character(44));}
else{
C_trace("c-backend.scm: 373  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_make_character(41));}}

/* k4113 in k4101 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 372  expr-args");
t2=((C_word*)((C_word*)t0)[5])[1];
f_4378(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4104 in k4101 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 373  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k4082 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 364  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4378(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4085 in k4082 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 365  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k4063 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 359  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k4066 in k4063 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 360  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[160]);}

/* k4044 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 354  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4378(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4047 in k4044 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 355  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[155]);}

/* k4025 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 336  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[146]))(3,*((C_word*)lf[146]+1),((C_word*)t0)[2],t1);}

/* k4021 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4023,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(C_word)C_i_car(((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 338  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t4,((C_word*)t0)[2],C_make_character(40));}

/* k3969 in k4021 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3974,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 340  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,lf[153],((C_word*)t0)[2],C_make_character(41));}
else{
t3=t2;
f_3974(2,t3,C_SCHEME_UNDEFINED);}}

/* k4002 in k3969 in k4021 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_not(((C_word*)t0)[4]);
if(C_truep(t2)){
if(C_truep(t2)){
C_trace("c-backend.scm: 341  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3974(2,t4,t3);}}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
C_trace("c-backend.scm: 341  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3974(2,t4,t3);}}}

/* k3972 in k3969 in k4021 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_3977(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3992,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 343  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k3990 in k3972 in k3969 in k4021 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 344  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3977(2,t3,t2);}}

/* k3975 in k3972 in k3969 in k4021 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
C_trace("c-backend.scm: 345  expr-args");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4378(t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
C_trace("c-backend.scm: 346  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_make_character(41));}}

/* k3978 in k3975 in k3972 in k3969 in k4021 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 346  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(((C_word*)t0)[11])){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3809,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 310  lambda-literal-temporaries");
((C_proc3)C_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3922,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 323  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t3,((C_word*)t0)[2],C_make_character(40));}}

/* k3920 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3925,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10988,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 325  expr-args");
t4=((C_word*)((C_word*)t0)[5])[1];
f_4378(t4,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
C_trace("c-backend.scm: 324  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[151]);}}

/* f10988 in k3920 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f10988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 326  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3923 in k3920 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 325  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4378(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3926 in k3923 in k3920 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 326  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3809,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_fixnum_plus(t1,((C_word*)t0)[2]);
C_trace("c-backend.scm: 311  iota");
((C_proc5)C_retrieve_symbol_proc(lf[59]))(5,*((C_word*)lf[59]+1),t2,((C_word*)t0)[6],t3,C_fix(1));}

/* k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3815,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3869,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3869(t6,t2,((C_word*)t0)[2],t1);}

/* loop402 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3869,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3890,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g413414");
t10=t6;
f_3877(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3888 in loop402 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3869(t4,((C_word*)t0)[2],t2,t3);}

/* g413 in loop402 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3877(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3877,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 314  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3879 in g413 in loop402 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3884,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 315  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2625(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3882 in k3879 in g413 in loop402 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 316  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3813 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3818,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3825,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 320  iota");
((C_proc5)C_retrieve_symbol_proc(lf[59]))(5,*((C_word*)lf[59]+1),t3,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k3823 in k3813 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3825,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3827,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3827(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop423 in k3823 in k3813 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3827(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3827,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3842,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_slot(t3,C_fix(0));
C_trace("c-backend.scm: 319  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[150],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3840 in loop423 in k3823 in k3813 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3827(t4,((C_word*)t0)[2],t2,t3);}

/* k3816 in k3813 in k3810 in k3807 in k3936 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 321  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[149]);}

/* k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_cddr(((C_word*)t0)[15]);
t4=(C_word)C_i_pairp(t3);
t5=t2;
f_3353(t5,(C_truep(t4)?(C_word)C_i_caddr(((C_word*)t0)[15]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3353(t3,C_SCHEME_FALSE);}}

/* k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3353(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3353,NULL,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_i_cadddr(((C_word*)t0)[15]):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3759,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 227  find-lambda");
t6=((C_word*)((C_word*)t0)[2])[1];
f_2580(t6,t5,t1);}
else{
t4=t3;
f_3359(t4,C_SCHEME_FALSE);}}

/* k3757 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 227  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[146]))(3,*((C_word*)lf[146]+1),((C_word*)t0)[2],t1);}

/* k3753 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3359(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3359(C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3359,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[16]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t2,tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_retrieve(lf[137]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3741,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2610,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 71   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t6,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3748,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10980,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t6,t5);}}
else{
t4=t3;
f_3365(2,t4,C_SCHEME_UNDEFINED);}}

/* f10980 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f10980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[80]))(4,*((C_word*)lf[80]+1),((C_word*)t0)[2],t1,lf[145]);}

/* k3746 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 232  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[143],t1,lf[144]);}

/* k2608 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 71   string-translate");
((C_proc5)C_retrieve_symbol_proc(lf[140]))(5,*((C_word*)lf[140]+1),((C_word*)t0)[2],t1,lf[141],lf[142]);}

/* k3739 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 231  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[138],t1,lf[139]);}

/* k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3365,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[15],C_fix(1));
t3=(C_word)C_eqp(lf[33],t2);
if(C_truep(t3)){
t4=(C_word)C_slot(((C_word*)t0)[15],C_fix(2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3382,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t4);
C_trace("c-backend.scm: 235  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,t6,C_make_character(40),((C_word*)t0)[10],lf[100]);}
else{
if(C_truep(((C_word*)t0)[9])){
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 239  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t5,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3569,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],tmp=(C_word)a,a+=11,tmp);
t5=(C_word)C_slot(((C_word*)t0)[15],C_fix(1));
t6=(C_word)C_eqp(lf[66],t5);
if(C_truep(t6)){
t7=C_retrieve(lf[129]);
if(C_truep(t7)){
t8=t4;
f_3569(t8,C_SCHEME_FALSE);}
else{
t8=C_retrieve(lf[134]);
if(C_truep(t8)){
t9=t4;
f_3569(t9,C_SCHEME_FALSE);}
else{
t9=(C_word)C_i_car(((C_word*)t0)[2]);
t10=t4;
f_3569(t10,(C_word)C_i_not(t9));}}}
else{
t7=t4;
f_3569(t7,C_SCHEME_FALSE);}}}}

/* k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3569(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3569,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[10],C_fix(2));
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=(C_word)C_i_caddr(t2);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3589,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 273  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t8,C_SCHEME_TRUE,lf[124],((C_word*)t0)[5],lf[125]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 292  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[4],C_make_character(61));}}

/* k3656 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3661,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 293  expr");
t3=((C_word*)((C_word*)t0)[3])[1];
f_2625(t3,t2,((C_word*)t0)[2],((C_word*)t0)[7]);}

/* k3659 in k3656 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 294  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_make_character(59),C_SCHEME_TRUE,lf[135],((C_word*)t0)[4],lf[136]);}

/* k3662 in k3659 in k3656 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3667,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_retrieve(lf[129]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3679(t5,t3);}
else{
t5=C_retrieve(lf[134]);
t6=t4;
f_3679(t6,(C_truep(t5)?t5:(C_word)C_i_car(((C_word*)t0)[2])));}}

/* k3677 in k3662 in k3659 in k3656 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3679(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("c-backend.scm: 297  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[130],((C_word*)t0)[2],lf[131]);}
else{
C_trace("c-backend.scm: 298  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[132],((C_word*)t0)[2],lf[133]);}}

/* k3665 in k3662 in k3659 in k3656 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3670,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 299  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[127],((C_word*)t0)[3],lf[128],((C_word*)t0)[2],C_make_character(44));}

/* k3668 in k3665 in k3662 in k3659 in k3656 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3670,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 300  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4378(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3671 in k3668 in k3665 in k3662 in k3659 in k3656 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 301  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[126]);}

/* k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3630,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 275  number->string");
C_number_to_string(3,0,t4,((C_word*)t0)[2]);}
else{
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3637,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 282  number->string");
C_number_to_string(3,0,t4,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3655,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 286  number->string");
C_number_to_string(3,0,t4,((C_word*)t0)[2]);}}}

/* k3653 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 286  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[122],t1,lf[123]);}

/* k3646 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
C_trace("c-backend.scm: 287  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[120],((C_word*)t0)[2],lf[121]);}

/* k3642 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 282  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[118],t1,lf[119]);}

/* k3635 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
C_trace("c-backend.scm: 283  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[116],((C_word*)((C_word*)t0)[3])[1],lf[117]);}

/* k3628 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 275  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[113]+1)))(5,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[114],t1,lf[115]);}

/* k3603 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 277  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[109],((C_word*)((C_word*)t0)[5])[1],lf[110]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3622,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_cadddr(((C_word*)t0)[2]);
C_trace("c-backend.scm: 279  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t4,t5);}}

/* k3620 in k3603 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 279  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),((C_word*)t0)[2],t1);}

/* k3616 in k3603 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 278  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[111],((C_word*)((C_word*)t0)[2])[1],lf[112],t1,C_make_character(41));}

/* k3590 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3595,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 288  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[108],((C_word*)t0)[3],C_make_character(44),((C_word*)((C_word*)t0)[2])[1],C_make_character(44));}

/* k3593 in k3590 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 289  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4378(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3596 in k3593 in k3590 in k3587 in k3567 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 290  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[107]);}

/* k3561 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t2)){
C_trace("c-backend.scm: 240  lambda-literal-looping");
((C_proc3)C_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_3401(2,t3,C_SCHEME_FALSE);}}

/* k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3401,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 241  lambda-literal-temporaries");
((C_proc3)C_retrieve_symbol_proc(lf[104]))(3,*((C_word*)lf[104]+1),t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3523,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_3523(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3547,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 256  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[4],C_make_character(61));}}}

/* k3545 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 257  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2625(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3548 in k3545 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 258  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3521 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3526,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 259  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k3524 in k3521 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_3529(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 260  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],C_make_character(44));}}

/* k3527 in k3524 in k3521 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3532,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10975,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 262  expr-args");
t4=((C_word*)((C_word*)t0)[6])[1];
f_4378(t4,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
C_trace("c-backend.scm: 261  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_make_character(116),((C_word*)t0)[2],C_make_character(44));}}

/* f10975 in k3527 in k3524 in k3521 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f10975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 263  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[105]);}

/* k3530 in k3527 in k3524 in k3521 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 262  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4378(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3533 in k3530 in k3527 in k3524 in k3521 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 263  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[105]);}

/* k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_fixnum_plus(t1,((C_word*)t0)[6]);
C_trace("c-backend.scm: 242  iota");
((C_proc5)C_retrieve_symbol_proc(lf[59]))(5,*((C_word*)lf[59]+1),t2,((C_word*)t0)[5],t3,C_fix(1));}

/* k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3470,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3470(t6,t2,((C_word*)t0)[2],t1);}

/* loop281 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3470,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3491,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g292293");
t10=t6;
f_3478(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3489 in loop281 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3470(t4,((C_word*)t0)[2],t2,t3);}

/* g292 in loop281 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3478(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3478,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 245  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3480 in g292 in loop281 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 246  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2625(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3483 in k3480 in g292 in loop281 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 247  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3408 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3413,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 251  iota");
((C_proc5)C_retrieve_symbol_proc(lf[59]))(5,*((C_word*)lf[59]+1),t3,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k3424 in k3408 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3426,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3428,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3428(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop302 in k3424 in k3408 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3428(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3428,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3443,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_slot(t3,C_fix(0));
C_trace("c-backend.scm: 250  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[103],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3441 in loop302 in k3424 in k3408 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3428(t4,((C_word*)t0)[2],t2,t3);}

/* k3411 in k3408 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("c-backend.scm: 253  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_SCHEME_TRUE,lf[101]);}
else{
C_trace("c-backend.scm: 252  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[102],((C_word*)t0)[2],C_make_character(59));}}

/* k3414 in k3411 in k3408 in k3405 in k3402 in k3399 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 253  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[101]);}

/* k3380 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 236  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4378(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3383 in k3380 in k3363 in k3357 in k3351 in k3348 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 237  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[99]);}

/* k3315 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t1);}

/* f10967 in k3315 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f10967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[80]))(4,*((C_word*)lf[80]+1),((C_word*)t0)[2],t1,lf[95]);}

/* k3311 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 210  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[92],((C_word*)t0)[2],lf[93],t1,lf[94]);}

/* k3297 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3302,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 212  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k3300 in k3297 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 213  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3294 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t1);}

/* f10962 in k3294 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f10962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[80]))(4,*((C_word*)lf[80]+1),((C_word*)t0)[2],t1,lf[91]);}

/* k3290 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 205  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[88],((C_word*)t0)[2],lf[89],t1,lf[90]);}

/* k3276 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3281,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 207  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k3279 in k3276 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 208  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3228 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3233,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3247,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 196  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[72]+1)))(3,*((C_word*)lf[72]+1),t4,((C_word*)t0)[2]);}

/* k3249 in k3228 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,t1);}

/* f10957 in k3249 in k3228 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f10957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[80]))(4,*((C_word*)lf[80]+1),((C_word*)t0)[2],t1,lf[81]);}

/* k3245 in k3228 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 196  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[78],t1,lf[79]);}

/* k3231 in k3228 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 197  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k3234 in k3231 in k3228 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 198  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3197 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 185  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),((C_word*)t0)[2],t1);}

/* k3193 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 185  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[69],((C_word*)t0)[2],lf[70],t1,C_make_character(41));}

/* k3151 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 176  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2625(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k3119 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 169  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k3122 in k3119 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 170  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[62]);}

/* k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 164  iota");
((C_proc5)C_retrieve_symbol_proc(lf[59]))(5,*((C_word*)lf[59]+1),t3,((C_word*)t0)[6],C_fix(1),C_fix(1));}

/* k3062 in k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3064,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3066,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3066(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop177 in k3062 in k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3066(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3066,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3087,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g188189");
t10=t6;
f_3074(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3085 in loop177 in k3062 in k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3066(t4,((C_word*)t0)[2],t2,t3);}

/* g188 in loop177 in k3062 in k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_3074(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3074,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 161  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t4,lf[57],t3,lf[58]);}

/* k3076 in g188 in loop177 in k3062 in k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 162  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2625(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3079 in k3076 in g188 in loop177 in k3062 in k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 163  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}

/* k3051 in k3048 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[3]);
C_trace("c-backend.scm: 165  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[55],t2,lf[56]);}

/* k3016 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 151  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k3019 in k3016 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 152  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[52]);}

/* k3022 in k3019 in k3016 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 153  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k3025 in k3022 in k3019 in k3016 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 154  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k2987 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 144  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2990 in k2987 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2992,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 145  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[49]);}

/* k2993 in k2990 in k2987 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 146  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2996 in k2993 in k2990 in k2987 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 147  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k2950 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 137  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2625(t4,t2,t3,((C_word*)t0)[3]);}

/* k2953 in k2950 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2958,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(t3,C_fix(1));
C_trace("c-backend.scm: 138  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[45],t4,lf[46]);}

/* k2956 in k2953 in k2950 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 139  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2959 in k2956 in k2953 in k2950 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 140  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k2917 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 130  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2625(t4,t2,t3,((C_word*)t0)[3]);}

/* k2920 in k2917 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
C_trace("c-backend.scm: 131  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_make_character(44),t3,C_make_character(44));}

/* k2923 in k2920 in k2917 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 132  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2926 in k2923 in k2920 in k2917 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 133  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k2898 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 125  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2901 in k2898 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 126  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[40]);}

/* k2871 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 120  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2874 in k2871 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_fixnum_plus(t2,C_fix(1));
C_trace("c-backend.scm: 121  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[37],t3,C_make_character(93));}

/* loop in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_2822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2822,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
if(C_truep((C_word)C_fixnum_greaterp(t5,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 112  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t6,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}
else{
t6=(C_word)C_i_car(t2);
C_trace("c-backend.scm: 116  expr");
t7=((C_word*)((C_word*)t0)[2])[1];
f_2625(t7,t1,t6,t3);}}

/* k2830 in loop in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
C_trace("c-backend.scm: 113  expr");
t4=((C_word*)((C_word*)t0)[2])[1];
f_2625(t4,t2,t3,((C_word*)t0)[6]);}

/* k2833 in k2830 in loop in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 114  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(59));}

/* k2836 in k2833 in k2830 in loop in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t4=(C_word)C_fixnum_decrease(((C_word*)t0)[4]);
C_trace("c-backend.scm: 115  loop");
t5=((C_word*)((C_word*)t0)[3])[1];
f_2822(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k2762 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 99   expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2765 in k2762 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 100  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[31]);}

/* k2768 in k2765 in k2762 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 101  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2771 in k2768 in k2765 in k2762 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 102  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_make_character(125),C_SCHEME_TRUE,lf[30]);}

/* k2774 in k2771 in k2768 in k2765 in k2762 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 103  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2625(t4,t2,t3,((C_word*)t0)[2]);}

/* k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in expr in expression in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 104  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* find-lambda in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_fcall f_2580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2580,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2584,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2592,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 68   find");
((C_proc4)C_retrieve_symbol_proc(lf[11]))(4,*((C_word*)lf[11]+1),t3,t4,((C_word*)t0)[2]);}

/* a2591 in find-lambda in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2592,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 68   lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t3,t2);}

/* k2598 in a2591 in find-lambda in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* k2582 in find-lambda in ##compiler#generate-code in k2573 in k2487 in k2484 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("c-backend.scm: 69   bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],((C_word*)t0)[2]);}}

/* ##compiler#gen-list in k2487 in k2484 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2535,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2543,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 50   intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t3,t2,C_make_character(32));}

/* k2541 in ##compiler#gen-list in k2487 in k2484 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2543,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2545,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2545(t5,((C_word*)t0)[2],t1);}

/* loop50 in k2541 in ##compiler#gen-list in k2487 in k2484 */
static void C_fcall f_2545(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2545,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2560,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("c-backend.scm: 49   display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t3,t4,*((C_word*)lf[0]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2558 in loop50 in k2541 in ##compiler#gen-list in k2487 in k2484 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2545(t3,((C_word*)t0)[2],t2);}

/* ##compiler#gen in k2487 in k2484 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2492r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2492r(t0,t1,t2);}}

static void C_ccall f_2492r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2498,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2498(t6,t1,t2);}

/* loop34 in ##compiler#gen in k2487 in k2484 */
static void C_fcall f_2498(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2498,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2522,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_eqp(C_SCHEME_TRUE,t4);
if(C_truep(t5)){
C_trace("c-backend.scm: 43   newline");
((C_proc3)C_retrieve_proc(*((C_word*)lf[2]+1)))(3,*((C_word*)lf[2]+1),t3,*((C_word*)lf[0]+1));}
else{
C_trace("c-backend.scm: 44   display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t3,t4,*((C_word*)lf[0]+1));}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2520 in loop34 in ##compiler#gen in k2487 in k2484 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2498(t3,((C_word*)t0)[2],t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[785] = {
{"toplevel:c_backend_scm",(void*)C_backend_toplevel},
{"f_2486:c_backend_scm",(void*)f_2486},
{"f_2489:c_backend_scm",(void*)f_2489},
{"f_10148:c_backend_scm",(void*)f_10148},
{"f_10151:c_backend_scm",(void*)f_10151},
{"f_10178:c_backend_scm",(void*)f_10178},
{"f_10174:c_backend_scm",(void*)f_10174},
{"f_10154:c_backend_scm",(void*)f_10154},
{"f_10157:c_backend_scm",(void*)f_10157},
{"f_10170:c_backend_scm",(void*)f_10170},
{"f_10160:c_backend_scm",(void*)f_10160},
{"f_10163:c_backend_scm",(void*)f_10163},
{"f_10166:c_backend_scm",(void*)f_10166},
{"f_2575:c_backend_scm",(void*)f_2575},
{"f_9848:c_backend_scm",(void*)f_9848},
{"f_10124:c_backend_scm",(void*)f_10124},
{"f_10122:c_backend_scm",(void*)f_10122},
{"f_10110:c_backend_scm",(void*)f_10110},
{"f_10080:c_backend_scm",(void*)f_10080},
{"f_10041:c_backend_scm",(void*)f_10041},
{"f_10028:c_backend_scm",(void*)f_10028},
{"f_10024:c_backend_scm",(void*)f_10024},
{"f_9910:c_backend_scm",(void*)f_9910},
{"f_9857:c_backend_scm",(void*)f_9857},
{"f_9241:c_backend_scm",(void*)f_9241},
{"f_9352:c_backend_scm",(void*)f_9352},
{"f_9517:c_backend_scm",(void*)f_9517},
{"f_9544:c_backend_scm",(void*)f_9544},
{"f_9722:c_backend_scm",(void*)f_9722},
{"f_9725:c_backend_scm",(void*)f_9725},
{"f_9728:c_backend_scm",(void*)f_9728},
{"f_9731:c_backend_scm",(void*)f_9731},
{"f_9701:c_backend_scm",(void*)f_9701},
{"f_9704:c_backend_scm",(void*)f_9704},
{"f_9707:c_backend_scm",(void*)f_9707},
{"f_9710:c_backend_scm",(void*)f_9710},
{"f_9680:c_backend_scm",(void*)f_9680},
{"f_9683:c_backend_scm",(void*)f_9683},
{"f_9686:c_backend_scm",(void*)f_9686},
{"f_9689:c_backend_scm",(void*)f_9689},
{"f_9643:c_backend_scm",(void*)f_9643},
{"f_9646:c_backend_scm",(void*)f_9646},
{"f_9649:c_backend_scm",(void*)f_9649},
{"f_9652:c_backend_scm",(void*)f_9652},
{"f_9622:c_backend_scm",(void*)f_9622},
{"f_9625:c_backend_scm",(void*)f_9625},
{"f_9628:c_backend_scm",(void*)f_9628},
{"f_9631:c_backend_scm",(void*)f_9631},
{"f_9601:c_backend_scm",(void*)f_9601},
{"f_9604:c_backend_scm",(void*)f_9604},
{"f_9607:c_backend_scm",(void*)f_9607},
{"f_9610:c_backend_scm",(void*)f_9610},
{"f_9580:c_backend_scm",(void*)f_9580},
{"f_9583:c_backend_scm",(void*)f_9583},
{"f_9586:c_backend_scm",(void*)f_9586},
{"f_9589:c_backend_scm",(void*)f_9589},
{"f_9559:c_backend_scm",(void*)f_9559},
{"f_9562:c_backend_scm",(void*)f_9562},
{"f_9565:c_backend_scm",(void*)f_9565},
{"f_9568:c_backend_scm",(void*)f_9568},
{"f_9521:c_backend_scm",(void*)f_9521},
{"f_9487:c_backend_scm",(void*)f_9487},
{"f_9490:c_backend_scm",(void*)f_9490},
{"f_9493:c_backend_scm",(void*)f_9493},
{"f_9496:c_backend_scm",(void*)f_9496},
{"f_9466:c_backend_scm",(void*)f_9466},
{"f_9469:c_backend_scm",(void*)f_9469},
{"f_9472:c_backend_scm",(void*)f_9472},
{"f_9475:c_backend_scm",(void*)f_9475},
{"f_9445:c_backend_scm",(void*)f_9445},
{"f_9448:c_backend_scm",(void*)f_9448},
{"f_9451:c_backend_scm",(void*)f_9451},
{"f_9454:c_backend_scm",(void*)f_9454},
{"f_9421:c_backend_scm",(void*)f_9421},
{"f_9424:c_backend_scm",(void*)f_9424},
{"f_9427:c_backend_scm",(void*)f_9427},
{"f_9430:c_backend_scm",(void*)f_9430},
{"f_9400:c_backend_scm",(void*)f_9400},
{"f_9403:c_backend_scm",(void*)f_9403},
{"f_9406:c_backend_scm",(void*)f_9406},
{"f_9409:c_backend_scm",(void*)f_9409},
{"f_9376:c_backend_scm",(void*)f_9376},
{"f_9379:c_backend_scm",(void*)f_9379},
{"f_9382:c_backend_scm",(void*)f_9382},
{"f_9385:c_backend_scm",(void*)f_9385},
{"f_9355:c_backend_scm",(void*)f_9355},
{"f_9358:c_backend_scm",(void*)f_9358},
{"f_9361:c_backend_scm",(void*)f_9361},
{"f_9364:c_backend_scm",(void*)f_9364},
{"f_9331:c_backend_scm",(void*)f_9331},
{"f_9334:c_backend_scm",(void*)f_9334},
{"f_9337:c_backend_scm",(void*)f_9337},
{"f_9340:c_backend_scm",(void*)f_9340},
{"f_9310:c_backend_scm",(void*)f_9310},
{"f_9313:c_backend_scm",(void*)f_9313},
{"f_9316:c_backend_scm",(void*)f_9316},
{"f_9319:c_backend_scm",(void*)f_9319},
{"f_9243:c_backend_scm",(void*)f_9243},
{"f_8751:c_backend_scm",(void*)f_8751},
{"f_8781:c_backend_scm",(void*)f_8781},
{"f_8808:c_backend_scm",(void*)f_8808},
{"f_9003:c_backend_scm",(void*)f_9003},
{"f_9012:c_backend_scm",(void*)f_9012},
{"f_9021:c_backend_scm",(void*)f_9021},
{"f_9048:c_backend_scm",(void*)f_9048},
{"f_9125:c_backend_scm",(void*)f_9125},
{"f_8753:c_backend_scm",(void*)f_8753},
{"f_7867:c_backend_scm",(void*)f_7867},
{"f_7944:c_backend_scm",(void*)f_7944},
{"f_8046:c_backend_scm",(void*)f_8046},
{"f_8079:c_backend_scm",(void*)f_8079},
{"f_8175:c_backend_scm",(void*)f_8175},
{"f_8187:c_backend_scm",(void*)f_8187},
{"f_8202:c_backend_scm",(void*)f_8202},
{"f_8247:c_backend_scm",(void*)f_8247},
{"f_8264:c_backend_scm",(void*)f_8264},
{"f_8281:c_backend_scm",(void*)f_8281},
{"f_8320:c_backend_scm",(void*)f_8320},
{"f_8337:c_backend_scm",(void*)f_8337},
{"f_8354:c_backend_scm",(void*)f_8354},
{"f_8371:c_backend_scm",(void*)f_8371},
{"f_8388:c_backend_scm",(void*)f_8388},
{"f_8405:c_backend_scm",(void*)f_8405},
{"f_8422:c_backend_scm",(void*)f_8422},
{"f_8434:c_backend_scm",(void*)f_8434},
{"f_8441:c_backend_scm",(void*)f_8441},
{"f_8451:c_backend_scm",(void*)f_8451},
{"f_8491:c_backend_scm",(void*)f_8491},
{"f_8461:c_backend_scm",(void*)f_8461},
{"f_8449:c_backend_scm",(void*)f_8449},
{"f_8445:c_backend_scm",(void*)f_8445},
{"f_8412:c_backend_scm",(void*)f_8412},
{"f_8395:c_backend_scm",(void*)f_8395},
{"f_8378:c_backend_scm",(void*)f_8378},
{"f_8361:c_backend_scm",(void*)f_8361},
{"f_8344:c_backend_scm",(void*)f_8344},
{"f_8327:c_backend_scm",(void*)f_8327},
{"f_8292:c_backend_scm",(void*)f_8292},
{"f_8302:c_backend_scm",(void*)f_8302},
{"f_8300:c_backend_scm",(void*)f_8300},
{"f_8296:c_backend_scm",(void*)f_8296},
{"f_8288:c_backend_scm",(void*)f_8288},
{"f_8275:c_backend_scm",(void*)f_8275},
{"f_8258:c_backend_scm",(void*)f_8258},
{"f_8206:c_backend_scm",(void*)f_8206},
{"f_7874:c_backend_scm",(void*)f_7874},
{"f_7869:c_backend_scm",(void*)f_7869},
{"f_7802:c_backend_scm",(void*)f_7802},
{"f_7806:c_backend_scm",(void*)f_7806},
{"f_7809:c_backend_scm",(void*)f_7809},
{"f_7812:c_backend_scm",(void*)f_7812},
{"f_7815:c_backend_scm",(void*)f_7815},
{"f_7821:c_backend_scm",(void*)f_7821},
{"f_7865:c_backend_scm",(void*)f_7865},
{"f_7824:c_backend_scm",(void*)f_7824},
{"f_7832:c_backend_scm",(void*)f_7832},
{"f_7853:c_backend_scm",(void*)f_7853},
{"f_7836:c_backend_scm",(void*)f_7836},
{"f_7827:c_backend_scm",(void*)f_7827},
{"f_7308:c_backend_scm",(void*)f_7308},
{"f_7314:c_backend_scm",(void*)f_7314},
{"f_7789:c_backend_scm",(void*)f_7789},
{"f_7322:c_backend_scm",(void*)f_7322},
{"f_7326:c_backend_scm",(void*)f_7326},
{"f_7329:c_backend_scm",(void*)f_7329},
{"f_7332:c_backend_scm",(void*)f_7332},
{"f_7335:c_backend_scm",(void*)f_7335},
{"f_7341:c_backend_scm",(void*)f_7341},
{"f_7687:c_backend_scm",(void*)f_7687},
{"f_7690:c_backend_scm",(void*)f_7690},
{"f_7786:c_backend_scm",(void*)f_7786},
{"f_7693:c_backend_scm",(void*)f_7693},
{"f_7696:c_backend_scm",(void*)f_7696},
{"f_7699:c_backend_scm",(void*)f_7699},
{"f_7702:c_backend_scm",(void*)f_7702},
{"f_7735:c_backend_scm",(void*)f_7735},
{"f_7751:c_backend_scm",(void*)f_7751},
{"f_7754:c_backend_scm",(void*)f_7754},
{"f_7705:c_backend_scm",(void*)f_7705},
{"f_7733:c_backend_scm",(void*)f_7733},
{"f_7708:c_backend_scm",(void*)f_7708},
{"f_7711:c_backend_scm",(void*)f_7711},
{"f_7714:c_backend_scm",(void*)f_7714},
{"f_7343:c_backend_scm",(void*)f_7343},
{"f_7353:c_backend_scm",(void*)f_7353},
{"f_7362:c_backend_scm",(void*)f_7362},
{"f_7374:c_backend_scm",(void*)f_7374},
{"f_7386:c_backend_scm",(void*)f_7386},
{"f_7392:c_backend_scm",(void*)f_7392},
{"f_7431:c_backend_scm",(void*)f_7431},
{"f_7396:c_backend_scm",(void*)f_7396},
{"f_6994:c_backend_scm",(void*)f_6994},
{"f_7000:c_backend_scm",(void*)f_7000},
{"f_7295:c_backend_scm",(void*)f_7295},
{"f_7008:c_backend_scm",(void*)f_7008},
{"f_7012:c_backend_scm",(void*)f_7012},
{"f_7015:c_backend_scm",(void*)f_7015},
{"f_7018:c_backend_scm",(void*)f_7018},
{"f_7292:c_backend_scm",(void*)f_7292},
{"f_7024:c_backend_scm",(void*)f_7024},
{"f_7027:c_backend_scm",(void*)f_7027},
{"f_7030:c_backend_scm",(void*)f_7030},
{"f_7033:c_backend_scm",(void*)f_7033},
{"f_7036:c_backend_scm",(void*)f_7036},
{"f_7039:c_backend_scm",(void*)f_7039},
{"f_7042:c_backend_scm",(void*)f_7042},
{"f_7045:c_backend_scm",(void*)f_7045},
{"f_7048:c_backend_scm",(void*)f_7048},
{"f_7051:c_backend_scm",(void*)f_7051},
{"f_7281:c_backend_scm",(void*)f_7281},
{"f_7054:c_backend_scm",(void*)f_7054},
{"f_7057:c_backend_scm",(void*)f_7057},
{"f_7060:c_backend_scm",(void*)f_7060},
{"f_7063:c_backend_scm",(void*)f_7063},
{"f_7066:c_backend_scm",(void*)f_7066},
{"f_7069:c_backend_scm",(void*)f_7069},
{"f_7072:c_backend_scm",(void*)f_7072},
{"f_7075:c_backend_scm",(void*)f_7075},
{"f_7172:c_backend_scm",(void*)f_7172},
{"f_7174:c_backend_scm",(void*)f_7174},
{"f_7181:c_backend_scm",(void*)f_7181},
{"f_7208:c_backend_scm",(void*)f_7208},
{"f_7211:c_backend_scm",(void*)f_7211},
{"f_7214:c_backend_scm",(void*)f_7214},
{"f_7202:c_backend_scm",(void*)f_7202},
{"f_7190:c_backend_scm",(void*)f_7190},
{"f_7194:c_backend_scm",(void*)f_7194},
{"f_7198:c_backend_scm",(void*)f_7198},
{"f_7220:c_backend_scm",(void*)f_7220},
{"f_7078:c_backend_scm",(void*)f_7078},
{"f_7081:c_backend_scm",(void*)f_7081},
{"f_7111:c_backend_scm",(void*)f_7111},
{"f_7114:c_backend_scm",(void*)f_7114},
{"f_7152:c_backend_scm",(void*)f_7152},
{"f_7148:c_backend_scm",(void*)f_7148},
{"f_7117:c_backend_scm",(void*)f_7117},
{"f_7120:c_backend_scm",(void*)f_7120},
{"f_7123:c_backend_scm",(void*)f_7123},
{"f_7090:c_backend_scm",(void*)f_7090},
{"f_7093:c_backend_scm",(void*)f_7093},
{"f_7084:c_backend_scm",(void*)f_7084},
{"f_6954:c_backend_scm",(void*)f_6954},
{"f_6960:c_backend_scm",(void*)f_6960},
{"f_6972:c_backend_scm",(void*)f_6972},
{"f_6975:c_backend_scm",(void*)f_6975},
{"f_6981:c_backend_scm",(void*)f_6981},
{"f_6900:c_backend_scm",(void*)f_6900},
{"f_6904:c_backend_scm",(void*)f_6904},
{"f_6909:c_backend_scm",(void*)f_6909},
{"f_6938:c_backend_scm",(void*)f_6938},
{"f_6941:c_backend_scm",(void*)f_6941},
{"f_6884:c_backend_scm",(void*)f_6884},
{"f_6890:c_backend_scm",(void*)f_6890},
{"f_6898:c_backend_scm",(void*)f_6898},
{"f_6868:c_backend_scm",(void*)f_6868},
{"f_6874:c_backend_scm",(void*)f_6874},
{"f_6882:c_backend_scm",(void*)f_6882},
{"f_6779:c_backend_scm",(void*)f_6779},
{"f_6788:c_backend_scm",(void*)f_6788},
{"f_6817:c_backend_scm",(void*)f_6817},
{"f_6827:c_backend_scm",(void*)f_6827},
{"f_6702:c_backend_scm",(void*)f_6702},
{"f_6706:c_backend_scm",(void*)f_6706},
{"f_6720:c_backend_scm",(void*)f_6720},
{"f_6733:c_backend_scm",(void*)f_6733},
{"f_6765:c_backend_scm",(void*)f_6765},
{"f_6736:c_backend_scm",(void*)f_6736},
{"f_6739:c_backend_scm",(void*)f_6739},
{"f_6709:c_backend_scm",(void*)f_6709},
{"f_6712:c_backend_scm",(void*)f_6712},
{"f_6715:c_backend_scm",(void*)f_6715},
{"f_2577:c_backend_scm",(void*)f_2577},
{"f_6669:c_backend_scm",(void*)f_6669},
{"f_6673:c_backend_scm",(void*)f_6673},
{"f_6676:c_backend_scm",(void*)f_6676},
{"f_6679:c_backend_scm",(void*)f_6679},
{"f_6682:c_backend_scm",(void*)f_6682},
{"f_6685:c_backend_scm",(void*)f_6685},
{"f_6688:c_backend_scm",(void*)f_6688},
{"f_6691:c_backend_scm",(void*)f_6691},
{"f_6694:c_backend_scm",(void*)f_6694},
{"f_6697:c_backend_scm",(void*)f_6697},
{"f_5900:c_backend_scm",(void*)f_5900},
{"f_5906:c_backend_scm",(void*)f_5906},
{"f_6655:c_backend_scm",(void*)f_6655},
{"f_5914:c_backend_scm",(void*)f_5914},
{"f_5918:c_backend_scm",(void*)f_5918},
{"f_5921:c_backend_scm",(void*)f_5921},
{"f_5924:c_backend_scm",(void*)f_5924},
{"f_5927:c_backend_scm",(void*)f_5927},
{"f_5930:c_backend_scm",(void*)f_5930},
{"f_5933:c_backend_scm",(void*)f_5933},
{"f_6652:c_backend_scm",(void*)f_6652},
{"f_5936:c_backend_scm",(void*)f_5936},
{"f_5942:c_backend_scm",(void*)f_5942},
{"f_5945:c_backend_scm",(void*)f_5945},
{"f_5948:c_backend_scm",(void*)f_5948},
{"f_5951:c_backend_scm",(void*)f_5951},
{"f_5954:c_backend_scm",(void*)f_5954},
{"f_5957:c_backend_scm",(void*)f_5957},
{"f_5960:c_backend_scm",(void*)f_5960},
{"f_5963:c_backend_scm",(void*)f_5963},
{"f_5966:c_backend_scm",(void*)f_5966},
{"f_5969:c_backend_scm",(void*)f_5969},
{"f_5972:c_backend_scm",(void*)f_5972},
{"f_5975:c_backend_scm",(void*)f_5975},
{"f_6621:c_backend_scm",(void*)f_6621},
{"f_5978:c_backend_scm",(void*)f_5978},
{"f_6582:c_backend_scm",(void*)f_6582},
{"f_6585:c_backend_scm",(void*)f_6585},
{"f_6588:c_backend_scm",(void*)f_6588},
{"f_6604:c_backend_scm",(void*)f_6604},
{"f_6607:c_backend_scm",(void*)f_6607},
{"f_5981:c_backend_scm",(void*)f_5981},
{"f_5984:c_backend_scm",(void*)f_5984},
{"f_5987:c_backend_scm",(void*)f_5987},
{"f_6554:c_backend_scm",(void*)f_6554},
{"f_6557:c_backend_scm",(void*)f_6557},
{"f_5990:c_backend_scm",(void*)f_5990},
{"f_5993:c_backend_scm",(void*)f_5993},
{"f_5996:c_backend_scm",(void*)f_5996},
{"f_5999:c_backend_scm",(void*)f_5999},
{"f_6002:c_backend_scm",(void*)f_6002},
{"f_6005:c_backend_scm",(void*)f_6005},
{"f_6514:c_backend_scm",(void*)f_6514},
{"f_6516:c_backend_scm",(void*)f_6516},
{"f_6526:c_backend_scm",(void*)f_6526},
{"f_6008:c_backend_scm",(void*)f_6008},
{"f_6459:c_backend_scm",(void*)f_6459},
{"f_6471:c_backend_scm",(void*)f_6471},
{"f_6474:c_backend_scm",(void*)f_6474},
{"f_6381:c_backend_scm",(void*)f_6381},
{"f_6423:c_backend_scm",(void*)f_6423},
{"f_6384:c_backend_scm",(void*)f_6384},
{"f_6390:c_backend_scm",(void*)f_6390},
{"f_6393:c_backend_scm",(void*)f_6393},
{"f_6317:c_backend_scm",(void*)f_6317},
{"f_6320:c_backend_scm",(void*)f_6320},
{"f_6323:c_backend_scm",(void*)f_6323},
{"f_6326:c_backend_scm",(void*)f_6326},
{"f_6329:c_backend_scm",(void*)f_6329},
{"f_6344:c_backend_scm",(void*)f_6344},
{"f_6332:c_backend_scm",(void*)f_6332},
{"f_6335:c_backend_scm",(void*)f_6335},
{"f_6303:c_backend_scm",(void*)f_6303},
{"f_6311:c_backend_scm",(void*)f_6311},
{"f_6228:c_backend_scm",(void*)f_6228},
{"f_6234:c_backend_scm",(void*)f_6234},
{"f_6237:c_backend_scm",(void*)f_6237},
{"f_6271:c_backend_scm",(void*)f_6271},
{"f_6274:c_backend_scm",(void*)f_6274},
{"f_6277:c_backend_scm",(void*)f_6277},
{"f_6240:c_backend_scm",(void*)f_6240},
{"f_6243:c_backend_scm",(void*)f_6243},
{"f_6246:c_backend_scm",(void*)f_6246},
{"f_6249:c_backend_scm",(void*)f_6249},
{"f_6258:c_backend_scm",(void*)f_6258},
{"f_6261:c_backend_scm",(void*)f_6261},
{"f_6011:c_backend_scm",(void*)f_6011},
{"f_6034:c_backend_scm",(void*)f_6034},
{"f_6169:c_backend_scm",(void*)f_6169},
{"f_6172:c_backend_scm",(void*)f_6172},
{"f_6184:c_backend_scm",(void*)f_6184},
{"f_6175:c_backend_scm",(void*)f_6175},
{"f_6040:c_backend_scm",(void*)f_6040},
{"f_6043:c_backend_scm",(void*)f_6043},
{"f_6046:c_backend_scm",(void*)f_6046},
{"f_6150:c_backend_scm",(void*)f_6150},
{"f_6049:c_backend_scm",(void*)f_6049},
{"f_6052:c_backend_scm",(void*)f_6052},
{"f_6055:c_backend_scm",(void*)f_6055},
{"f_6058:c_backend_scm",(void*)f_6058},
{"f_6123:c_backend_scm",(void*)f_6123},
{"f_6119:c_backend_scm",(void*)f_6119},
{"f_6061:c_backend_scm",(void*)f_6061},
{"f_6064:c_backend_scm",(void*)f_6064},
{"f_6067:c_backend_scm",(void*)f_6067},
{"f_6070:c_backend_scm",(void*)f_6070},
{"f_6073:c_backend_scm",(void*)f_6073},
{"f_6076:c_backend_scm",(void*)f_6076},
{"f_6094:c_backend_scm",(void*)f_6094},
{"f_6104:c_backend_scm",(void*)f_6104},
{"f_6079:c_backend_scm",(void*)f_6079},
{"f_6014:c_backend_scm",(void*)f_6014},
{"f_6024:c_backend_scm",(void*)f_6024},
{"f_6017:c_backend_scm",(void*)f_6017},
{"f_5888:c_backend_scm",(void*)f_5888},
{"f_5895:c_backend_scm",(void*)f_5895},
{"f_5898:c_backend_scm",(void*)f_5898},
{"f_5811:c_backend_scm",(void*)f_5811},
{"f_5818:c_backend_scm",(void*)f_5818},
{"f_5821:c_backend_scm",(void*)f_5821},
{"f_5826:c_backend_scm",(void*)f_5826},
{"f_5882:c_backend_scm",(void*)f_5882},
{"f_5878:c_backend_scm",(void*)f_5878},
{"f_5863:c_backend_scm",(void*)f_5863},
{"f_5842:c_backend_scm",(void*)f_5842},
{"f_5853:c_backend_scm",(void*)f_5853},
{"f_5849:c_backend_scm",(void*)f_5849},
{"f_5669:c_backend_scm",(void*)f_5669},
{"f_5809:c_backend_scm",(void*)f_5809},
{"f_5676:c_backend_scm",(void*)f_5676},
{"f_5682:c_backend_scm",(void*)f_5682},
{"f_5765:c_backend_scm",(void*)f_5765},
{"f_5768:c_backend_scm",(void*)f_5768},
{"f_5778:c_backend_scm",(void*)f_5778},
{"f_5771:c_backend_scm",(void*)f_5771},
{"f_5732:c_backend_scm",(void*)f_5732},
{"f_5738:c_backend_scm",(void*)f_5738},
{"f_5475:c_backend_scm",(void*)f_5475},
{"f_5482:c_backend_scm",(void*)f_5482},
{"f_5591:c_backend_scm",(void*)f_5591},
{"f_5609:c_backend_scm",(void*)f_5609},
{"f_5638:c_backend_scm",(void*)f_5638},
{"f_5660:c_backend_scm",(void*)f_5660},
{"f_5616:c_backend_scm",(void*)f_5616},
{"f_5550:c_backend_scm",(void*)f_5550},
{"f_5552:c_backend_scm",(void*)f_5552},
{"f_5581:c_backend_scm",(void*)f_5581},
{"f_5546:c_backend_scm",(void*)f_5546},
{"f_5542:c_backend_scm",(void*)f_5542},
{"f_5513:c_backend_scm",(void*)f_5513},
{"f_5517:c_backend_scm",(void*)f_5517},
{"f_5420:c_backend_scm",(void*)f_5420},
{"f_5426:c_backend_scm",(void*)f_5426},
{"f_5455:c_backend_scm",(void*)f_5455},
{"f_5458:c_backend_scm",(void*)f_5458},
{"f_5461:c_backend_scm",(void*)f_5461},
{"f_5464:c_backend_scm",(void*)f_5464},
{"f_5467:c_backend_scm",(void*)f_5467},
{"f_5436:c_backend_scm",(void*)f_5436},
{"f_5090:c_backend_scm",(void*)f_5090},
{"f_5279:c_backend_scm",(void*)f_5279},
{"f_5407:c_backend_scm",(void*)f_5407},
{"f_5287:c_backend_scm",(void*)f_5287},
{"f_5291:c_backend_scm",(void*)f_5291},
{"f_5294:c_backend_scm",(void*)f_5294},
{"f_5297:c_backend_scm",(void*)f_5297},
{"f_5300:c_backend_scm",(void*)f_5300},
{"f_5303:c_backend_scm",(void*)f_5303},
{"f_5404:c_backend_scm",(void*)f_5404},
{"f_5306:c_backend_scm",(void*)f_5306},
{"f_5309:c_backend_scm",(void*)f_5309},
{"f_5315:c_backend_scm",(void*)f_5315},
{"f_5393:c_backend_scm",(void*)f_5393},
{"f_5349:c_backend_scm",(void*)f_5349},
{"f_5355:c_backend_scm",(void*)f_5355},
{"f_5373:c_backend_scm",(void*)f_5373},
{"f_5369:c_backend_scm",(void*)f_5369},
{"f_5365:c_backend_scm",(void*)f_5365},
{"f_5321:c_backend_scm",(void*)f_5321},
{"f_5324:c_backend_scm",(void*)f_5324},
{"f_5327:c_backend_scm",(void*)f_5327},
{"f_5330:c_backend_scm",(void*)f_5330},
{"f_5333:c_backend_scm",(void*)f_5333},
{"f_5343:c_backend_scm",(void*)f_5343},
{"f_5336:c_backend_scm",(void*)f_5336},
{"f_5209:c_backend_scm",(void*)f_5209},
{"f_5228:c_backend_scm",(void*)f_5228},
{"f_5266:c_backend_scm",(void*)f_5266},
{"f_5236:c_backend_scm",(void*)f_5236},
{"f_5240:c_backend_scm",(void*)f_5240},
{"f_5243:c_backend_scm",(void*)f_5243},
{"f_5246:c_backend_scm",(void*)f_5246},
{"f_5249:c_backend_scm",(void*)f_5249},
{"f_5263:c_backend_scm",(void*)f_5263},
{"f_5259:c_backend_scm",(void*)f_5259},
{"f_5252:c_backend_scm",(void*)f_5252},
{"f_5212:c_backend_scm",(void*)f_5212},
{"f_5226:c_backend_scm",(void*)f_5226},
{"f_5215:c_backend_scm",(void*)f_5215},
{"f_5222:c_backend_scm",(void*)f_5222},
{"f_5129:c_backend_scm",(void*)f_5129},
{"f_5131:c_backend_scm",(void*)f_5131},
{"f_5135:c_backend_scm",(void*)f_5135},
{"f_5138:c_backend_scm",(void*)f_5138},
{"f_5141:c_backend_scm",(void*)f_5141},
{"f_5144:c_backend_scm",(void*)f_5144},
{"f_5147:c_backend_scm",(void*)f_5147},
{"f_5150:c_backend_scm",(void*)f_5150},
{"f_5153:c_backend_scm",(void*)f_5153},
{"f_5156:c_backend_scm",(void*)f_5156},
{"f_5159:c_backend_scm",(void*)f_5159},
{"f_5162:c_backend_scm",(void*)f_5162},
{"f_5165:c_backend_scm",(void*)f_5165},
{"f_5168:c_backend_scm",(void*)f_5168},
{"f_5182:c_backend_scm",(void*)f_5182},
{"f_5178:c_backend_scm",(void*)f_5178},
{"f_5171:c_backend_scm",(void*)f_5171},
{"f_5093:c_backend_scm",(void*)f_5093},
{"f_5106:c_backend_scm",(void*)f_5106},
{"f_5116:c_backend_scm",(void*)f_5116},
{"f_5097:c_backend_scm",(void*)f_5097},
{"f_4750:c_backend_scm",(void*)f_4750},
{"f_4754:c_backend_scm",(void*)f_4754},
{"f_4823:c_backend_scm",(void*)f_4823},
{"f_5077:c_backend_scm",(void*)f_5077},
{"f_4831:c_backend_scm",(void*)f_4831},
{"f_4835:c_backend_scm",(void*)f_4835},
{"f_4838:c_backend_scm",(void*)f_4838},
{"f_5074:c_backend_scm",(void*)f_5074},
{"f_4841:c_backend_scm",(void*)f_4841},
{"f_5060:c_backend_scm",(void*)f_5060},
{"f_4844:c_backend_scm",(void*)f_4844},
{"f_4847:c_backend_scm",(void*)f_4847},
{"f_4850:c_backend_scm",(void*)f_4850},
{"f_4853:c_backend_scm",(void*)f_4853},
{"f_4856:c_backend_scm",(void*)f_4856},
{"f_4859:c_backend_scm",(void*)f_4859},
{"f_5052:c_backend_scm",(void*)f_5052},
{"f_4862:c_backend_scm",(void*)f_4862},
{"f_4865:c_backend_scm",(void*)f_4865},
{"f_5006:c_backend_scm",(void*)f_5006},
{"f_5008:c_backend_scm",(void*)f_5008},
{"f_5034:c_backend_scm",(void*)f_5034},
{"f_5016:c_backend_scm",(void*)f_5016},
{"f_5027:c_backend_scm",(void*)f_5027},
{"f_4868:c_backend_scm",(void*)f_4868},
{"f_4955:c_backend_scm",(void*)f_4955},
{"f_4958:c_backend_scm",(void*)f_4958},
{"f_4961:c_backend_scm",(void*)f_4961},
{"f_4964:c_backend_scm",(void*)f_4964},
{"f_4980:c_backend_scm",(void*)f_4980},
{"f_4983:c_backend_scm",(void*)f_4983},
{"f11016:c_backend_scm",(void*)f11016},
{"f_4986:c_backend_scm",(void*)f_4986},
{"f_4989:c_backend_scm",(void*)f_4989},
{"f_4871:c_backend_scm",(void*)f_4871},
{"f_4874:c_backend_scm",(void*)f_4874},
{"f_4877:c_backend_scm",(void*)f_4877},
{"f_4927:c_backend_scm",(void*)f_4927},
{"f_4930:c_backend_scm",(void*)f_4930},
{"f_4880:c_backend_scm",(void*)f_4880},
{"f_4883:c_backend_scm",(void*)f_4883},
{"f_4915:c_backend_scm",(void*)f_4915},
{"f_4918:c_backend_scm",(void*)f_4918},
{"f_4889:c_backend_scm",(void*)f_4889},
{"f_4898:c_backend_scm",(void*)f_4898},
{"f_4901:c_backend_scm",(void*)f_4901},
{"f_4757:c_backend_scm",(void*)f_4757},
{"f_4762:c_backend_scm",(void*)f_4762},
{"f_4774:c_backend_scm",(void*)f_4774},
{"f_4784:c_backend_scm",(void*)f_4784},
{"f_4786:c_backend_scm",(void*)f_4786},
{"f_4796:c_backend_scm",(void*)f_4796},
{"f_4777:c_backend_scm",(void*)f_4777},
{"f_4810:c_backend_scm",(void*)f_4810},
{"f_4579:c_backend_scm",(void*)f_4579},
{"f_4586:c_backend_scm",(void*)f_4586},
{"f_4722:c_backend_scm",(void*)f_4722},
{"f_4737:c_backend_scm",(void*)f_4737},
{"f_4589:c_backend_scm",(void*)f_4589},
{"f_4592:c_backend_scm",(void*)f_4592},
{"f_4595:c_backend_scm",(void*)f_4595},
{"f_4600:c_backend_scm",(void*)f_4600},
{"f_4610:c_backend_scm",(void*)f_4610},
{"f_4616:c_backend_scm",(void*)f_4616},
{"f_4669:c_backend_scm",(void*)f_4669},
{"f_4679:c_backend_scm",(void*)f_4679},
{"f_4619:c_backend_scm",(void*)f_4619},
{"f_4642:c_backend_scm",(void*)f_4642},
{"f_4652:c_backend_scm",(void*)f_4652},
{"f_4622:c_backend_scm",(void*)f_4622},
{"f_4625:c_backend_scm",(void*)f_4625},
{"f_4410:c_backend_scm",(void*)f_4410},
{"f_4571:c_backend_scm",(void*)f_4571},
{"f_4430:c_backend_scm",(void*)f_4430},
{"f_4529:c_backend_scm",(void*)f_4529},
{"f_4533:c_backend_scm",(void*)f_4533},
{"f_4537:c_backend_scm",(void*)f_4537},
{"f_4541:c_backend_scm",(void*)f_4541},
{"f_4563:c_backend_scm",(void*)f_4563},
{"f_4559:c_backend_scm",(void*)f_4559},
{"f_4551:c_backend_scm",(void*)f_4551},
{"f_4549:c_backend_scm",(void*)f_4549},
{"f_4545:c_backend_scm",(void*)f_4545},
{"f_4448:c_backend_scm",(void*)f_4448},
{"f_4451:c_backend_scm",(void*)f_4451},
{"f_4454:c_backend_scm",(void*)f_4454},
{"f_4518:c_backend_scm",(void*)f_4518},
{"f_4457:c_backend_scm",(void*)f_4457},
{"f_4460:c_backend_scm",(void*)f_4460},
{"f_4463:c_backend_scm",(void*)f_4463},
{"f_4478:c_backend_scm",(void*)f_4478},
{"f_4483:c_backend_scm",(void*)f_4483},
{"f_4498:c_backend_scm",(void*)f_4498},
{"f_4466:c_backend_scm",(void*)f_4466},
{"f_4413:c_backend_scm",(void*)f_4413},
{"f_4427:c_backend_scm",(void*)f_4427},
{"f_2622:c_backend_scm",(void*)f_2622},
{"f_4378:c_backend_scm",(void*)f_4378},
{"f_4384:c_backend_scm",(void*)f_4384},
{"f_4388:c_backend_scm",(void*)f_4388},
{"f_2625:c_backend_scm",(void*)f_2625},
{"f_4343:c_backend_scm",(void*)f_4343},
{"f_4346:c_backend_scm",(void*)f_4346},
{"f_4349:c_backend_scm",(void*)f_4349},
{"f_4352:c_backend_scm",(void*)f_4352},
{"f_4355:c_backend_scm",(void*)f_4355},
{"f_4358:c_backend_scm",(void*)f_4358},
{"f_4260:c_backend_scm",(void*)f_4260},
{"f_4263:c_backend_scm",(void*)f_4263},
{"f_4266:c_backend_scm",(void*)f_4266},
{"f_4279:c_backend_scm",(void*)f_4279},
{"f_4302:c_backend_scm",(void*)f_4302},
{"f_4305:c_backend_scm",(void*)f_4305},
{"f_4308:c_backend_scm",(void*)f_4308},
{"f_4311:c_backend_scm",(void*)f_4311},
{"f_4289:c_backend_scm",(void*)f_4289},
{"f_4292:c_backend_scm",(void*)f_4292},
{"f_4251:c_backend_scm",(void*)f_4251},
{"f_4223:c_backend_scm",(void*)f_4223},
{"f_4226:c_backend_scm",(void*)f_4226},
{"f_4243:c_backend_scm",(void*)f_4243},
{"f_4229:c_backend_scm",(void*)f_4229},
{"f_4232:c_backend_scm",(void*)f_4232},
{"f_4207:c_backend_scm",(void*)f_4207},
{"f_4211:c_backend_scm",(void*)f_4211},
{"f_4193:c_backend_scm",(void*)f_4193},
{"f_4196:c_backend_scm",(void*)f_4196},
{"f_4177:c_backend_scm",(void*)f_4177},
{"f_4181:c_backend_scm",(void*)f_4181},
{"f_4159:c_backend_scm",(void*)f_4159},
{"f_4162:c_backend_scm",(void*)f_4162},
{"f_4139:c_backend_scm",(void*)f_4139},
{"f_4103:c_backend_scm",(void*)f_4103},
{"f_4115:c_backend_scm",(void*)f_4115},
{"f_4106:c_backend_scm",(void*)f_4106},
{"f_4084:c_backend_scm",(void*)f_4084},
{"f_4087:c_backend_scm",(void*)f_4087},
{"f_4065:c_backend_scm",(void*)f_4065},
{"f_4068:c_backend_scm",(void*)f_4068},
{"f_4046:c_backend_scm",(void*)f_4046},
{"f_4049:c_backend_scm",(void*)f_4049},
{"f_4027:c_backend_scm",(void*)f_4027},
{"f_4023:c_backend_scm",(void*)f_4023},
{"f_3971:c_backend_scm",(void*)f_3971},
{"f_4004:c_backend_scm",(void*)f_4004},
{"f_3974:c_backend_scm",(void*)f_3974},
{"f_3992:c_backend_scm",(void*)f_3992},
{"f_3977:c_backend_scm",(void*)f_3977},
{"f_3980:c_backend_scm",(void*)f_3980},
{"f_3938:c_backend_scm",(void*)f_3938},
{"f_3922:c_backend_scm",(void*)f_3922},
{"f10988:c_backend_scm",(void*)f10988},
{"f_3925:c_backend_scm",(void*)f_3925},
{"f_3928:c_backend_scm",(void*)f_3928},
{"f_3809:c_backend_scm",(void*)f_3809},
{"f_3812:c_backend_scm",(void*)f_3812},
{"f_3869:c_backend_scm",(void*)f_3869},
{"f_3890:c_backend_scm",(void*)f_3890},
{"f_3877:c_backend_scm",(void*)f_3877},
{"f_3881:c_backend_scm",(void*)f_3881},
{"f_3884:c_backend_scm",(void*)f_3884},
{"f_3815:c_backend_scm",(void*)f_3815},
{"f_3825:c_backend_scm",(void*)f_3825},
{"f_3827:c_backend_scm",(void*)f_3827},
{"f_3842:c_backend_scm",(void*)f_3842},
{"f_3818:c_backend_scm",(void*)f_3818},
{"f_3350:c_backend_scm",(void*)f_3350},
{"f_3353:c_backend_scm",(void*)f_3353},
{"f_3759:c_backend_scm",(void*)f_3759},
{"f_3755:c_backend_scm",(void*)f_3755},
{"f_3359:c_backend_scm",(void*)f_3359},
{"f10980:c_backend_scm",(void*)f10980},
{"f_3748:c_backend_scm",(void*)f_3748},
{"f_2610:c_backend_scm",(void*)f_2610},
{"f_3741:c_backend_scm",(void*)f_3741},
{"f_3365:c_backend_scm",(void*)f_3365},
{"f_3569:c_backend_scm",(void*)f_3569},
{"f_3658:c_backend_scm",(void*)f_3658},
{"f_3661:c_backend_scm",(void*)f_3661},
{"f_3664:c_backend_scm",(void*)f_3664},
{"f_3679:c_backend_scm",(void*)f_3679},
{"f_3667:c_backend_scm",(void*)f_3667},
{"f_3670:c_backend_scm",(void*)f_3670},
{"f_3673:c_backend_scm",(void*)f_3673},
{"f_3589:c_backend_scm",(void*)f_3589},
{"f_3655:c_backend_scm",(void*)f_3655},
{"f_3648:c_backend_scm",(void*)f_3648},
{"f_3644:c_backend_scm",(void*)f_3644},
{"f_3637:c_backend_scm",(void*)f_3637},
{"f_3630:c_backend_scm",(void*)f_3630},
{"f_3605:c_backend_scm",(void*)f_3605},
{"f_3622:c_backend_scm",(void*)f_3622},
{"f_3618:c_backend_scm",(void*)f_3618},
{"f_3592:c_backend_scm",(void*)f_3592},
{"f_3595:c_backend_scm",(void*)f_3595},
{"f_3598:c_backend_scm",(void*)f_3598},
{"f_3563:c_backend_scm",(void*)f_3563},
{"f_3401:c_backend_scm",(void*)f_3401},
{"f_3547:c_backend_scm",(void*)f_3547},
{"f_3550:c_backend_scm",(void*)f_3550},
{"f_3523:c_backend_scm",(void*)f_3523},
{"f_3526:c_backend_scm",(void*)f_3526},
{"f_3529:c_backend_scm",(void*)f_3529},
{"f10975:c_backend_scm",(void*)f10975},
{"f_3532:c_backend_scm",(void*)f_3532},
{"f_3535:c_backend_scm",(void*)f_3535},
{"f_3404:c_backend_scm",(void*)f_3404},
{"f_3407:c_backend_scm",(void*)f_3407},
{"f_3470:c_backend_scm",(void*)f_3470},
{"f_3491:c_backend_scm",(void*)f_3491},
{"f_3478:c_backend_scm",(void*)f_3478},
{"f_3482:c_backend_scm",(void*)f_3482},
{"f_3485:c_backend_scm",(void*)f_3485},
{"f_3410:c_backend_scm",(void*)f_3410},
{"f_3426:c_backend_scm",(void*)f_3426},
{"f_3428:c_backend_scm",(void*)f_3428},
{"f_3443:c_backend_scm",(void*)f_3443},
{"f_3413:c_backend_scm",(void*)f_3413},
{"f_3416:c_backend_scm",(void*)f_3416},
{"f_3382:c_backend_scm",(void*)f_3382},
{"f_3385:c_backend_scm",(void*)f_3385},
{"f_3317:c_backend_scm",(void*)f_3317},
{"f10967:c_backend_scm",(void*)f10967},
{"f_3313:c_backend_scm",(void*)f_3313},
{"f_3299:c_backend_scm",(void*)f_3299},
{"f_3302:c_backend_scm",(void*)f_3302},
{"f_3296:c_backend_scm",(void*)f_3296},
{"f10962:c_backend_scm",(void*)f10962},
{"f_3292:c_backend_scm",(void*)f_3292},
{"f_3278:c_backend_scm",(void*)f_3278},
{"f_3281:c_backend_scm",(void*)f_3281},
{"f_3230:c_backend_scm",(void*)f_3230},
{"f_3251:c_backend_scm",(void*)f_3251},
{"f10957:c_backend_scm",(void*)f10957},
{"f_3247:c_backend_scm",(void*)f_3247},
{"f_3233:c_backend_scm",(void*)f_3233},
{"f_3236:c_backend_scm",(void*)f_3236},
{"f_3199:c_backend_scm",(void*)f_3199},
{"f_3195:c_backend_scm",(void*)f_3195},
{"f_3153:c_backend_scm",(void*)f_3153},
{"f_3121:c_backend_scm",(void*)f_3121},
{"f_3124:c_backend_scm",(void*)f_3124},
{"f_3050:c_backend_scm",(void*)f_3050},
{"f_3064:c_backend_scm",(void*)f_3064},
{"f_3066:c_backend_scm",(void*)f_3066},
{"f_3087:c_backend_scm",(void*)f_3087},
{"f_3074:c_backend_scm",(void*)f_3074},
{"f_3078:c_backend_scm",(void*)f_3078},
{"f_3081:c_backend_scm",(void*)f_3081},
{"f_3053:c_backend_scm",(void*)f_3053},
{"f_3018:c_backend_scm",(void*)f_3018},
{"f_3021:c_backend_scm",(void*)f_3021},
{"f_3024:c_backend_scm",(void*)f_3024},
{"f_3027:c_backend_scm",(void*)f_3027},
{"f_2989:c_backend_scm",(void*)f_2989},
{"f_2992:c_backend_scm",(void*)f_2992},
{"f_2995:c_backend_scm",(void*)f_2995},
{"f_2998:c_backend_scm",(void*)f_2998},
{"f_2952:c_backend_scm",(void*)f_2952},
{"f_2955:c_backend_scm",(void*)f_2955},
{"f_2958:c_backend_scm",(void*)f_2958},
{"f_2961:c_backend_scm",(void*)f_2961},
{"f_2919:c_backend_scm",(void*)f_2919},
{"f_2922:c_backend_scm",(void*)f_2922},
{"f_2925:c_backend_scm",(void*)f_2925},
{"f_2928:c_backend_scm",(void*)f_2928},
{"f_2900:c_backend_scm",(void*)f_2900},
{"f_2903:c_backend_scm",(void*)f_2903},
{"f_2873:c_backend_scm",(void*)f_2873},
{"f_2876:c_backend_scm",(void*)f_2876},
{"f_2822:c_backend_scm",(void*)f_2822},
{"f_2832:c_backend_scm",(void*)f_2832},
{"f_2835:c_backend_scm",(void*)f_2835},
{"f_2838:c_backend_scm",(void*)f_2838},
{"f_2764:c_backend_scm",(void*)f_2764},
{"f_2767:c_backend_scm",(void*)f_2767},
{"f_2770:c_backend_scm",(void*)f_2770},
{"f_2773:c_backend_scm",(void*)f_2773},
{"f_2776:c_backend_scm",(void*)f_2776},
{"f_2779:c_backend_scm",(void*)f_2779},
{"f_2580:c_backend_scm",(void*)f_2580},
{"f_2592:c_backend_scm",(void*)f_2592},
{"f_2600:c_backend_scm",(void*)f_2600},
{"f_2584:c_backend_scm",(void*)f_2584},
{"f_2535:c_backend_scm",(void*)f_2535},
{"f_2543:c_backend_scm",(void*)f_2543},
{"f_2545:c_backend_scm",(void*)f_2545},
{"f_2560:c_backend_scm",(void*)f_2560},
{"f_2492:c_backend_scm",(void*)f_2492},
{"f_2498:c_backend_scm",(void*)f_2498},
{"f_2522:c_backend_scm",(void*)f_2522},
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
