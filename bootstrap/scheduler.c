/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:26
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: scheduler.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file scheduler.c
   unit: scheduler
*/

#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
# if _MSC_VER > 1300
# include <winsock2.h>
# include <ws2tcpip.h>
# else
# include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <unistd.h>
# include <sys/types.h>
# include <sys/time.h>
# include <time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep(C_unfix(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  unsigned long mss = C_unfix(ms);
  ts.tv_sec = mss / 1000;
  ts.tv_nsec = (mss % 1000) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif
static fd_set C_fdset_input, C_fdset_output, C_fdset_input_2, C_fdset_output_2;
#define C_fd_test_input(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_test_output(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[51];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,50,32,116,104,114,101,97,100,115,51,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,51,50,48,32,108,115,116,51,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,51,53,57,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,54,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,7),40,108,111,111,112,49,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,35,35,115,121,115,35,115,99,104,101,100,117,108,101,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,114,101,97,100,121,45,113,117,101,117,101,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,97,100,100,45,116,111,45,114,101,97,100,121,45,113,117,101,117,101,32,116,104,114,101,97,100,49,48,52,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,56,51,53,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,49,52,48,32,115,116,97,116,101,49,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,112,114,101,118,49,53,49,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,37),40,35,35,115,121,115,35,114,101,109,111,118,101,45,102,114,111,109,45,116,105,109,101,111,117,116,45,108,105,115,116,32,116,49,52,56,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,116,108,49,53,57,32,112,114,101,118,49,54,48,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,105,109,101,111,117,116,33,32,116,49,53,54,32,116,109,49,53,55,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,116,101,114,109,105,110,97,116,105,111,110,33,32,116,49,55,49,32,116,50,49,55,50,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,12),40,103,49,57,57,32,116,50,50,48,49,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,57,50,32,103,49,57,54,49,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,116,104,114,101,97,100,45,107,105,108,108,33,32,116,49,56,53,32,115,49,56,54,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,97,115,105,99,45,117,110,98,108,111,99,107,33,32,116,50,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,52,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,100,101,102,97,117,108,116,45,101,120,99,101,112,116,105,111,110,45,104,97,110,100,108,101,114,32,97,114,103,50,50,50,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,108,115,116,50,55,53,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,116,104,114,101,97,100,45,98,108,111,99,107,45,102,111,114,45,105,47,111,33,32,116,50,55,49,32,102,100,50,55,50,32,105,47,111,50,55,51,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,52,48,54,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,52,48,57,32,105,52,49,48,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,52,48,50,32,105,52,48,51,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,51,57,57,32,105,52,48,48,41};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,24),40,98,111,100,121,51,56,55,32,99,110,115,51,57,54,32,105,110,105,116,51,57,55,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,24),40,100,101,102,45,105,110,105,116,51,57,48,32,37,99,110,115,51,56,53,52,49,53,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,38),40,97,49,54,51,55,32,113,117,101,117,101,52,49,55,32,97,114,103,52,49,56,32,118,97,108,52,49,57,32,105,110,105,116,52,50,48,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,99,110,115,51,56,57,41,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,97,108,108,45,116,104,114,101,97,100,115,32,46,32,116,109,112,51,56,48,51,56,49,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,101,116,99,104,45,97,110,100,45,99,108,101,97,114,45,116,104,114,101,97,100,115,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,115,116,111,114,101,45,116,104,114,101,97,100,115,32,118,101,99,52,51,51,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,100,108,52,52,50,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,116,104,114,101,97,100,45,117,110,98,108,111,99,107,33,32,116,52,51,56,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from ##sys#fdset-clear */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub267(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub267(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_CLR(fd, &C_fdset_input_2);FD_CLR(fd, &C_fdset_output_2);
C_ret:
#undef return

return C_r;}

/* from ##sys#fdset-output-set */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub263(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub263(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_output);
C_ret:
#undef return

return C_r;}

/* from ##sys#fdset-input-set */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub259(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub259(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_input);
C_ret:
#undef return

return C_r;}

/* from g254 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub256(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub256(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
FD_ZERO(&C_fdset_input);FD_ZERO(&C_fdset_output);
C_ret:
#undef return

return C_r;}

/* from ##sys#fdset-restore */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub252(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub252(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_fdset_input = C_fdset_input_2;C_fdset_output = C_fdset_output_2;
C_ret:
#undef return

return C_r;}

/* from ##sys#fdset-select-timeout */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub248(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub248(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int to=(int )C_truep(C_a0);
unsigned long tm=(unsigned long )C_num_to_unsigned_long(C_a1);
struct timeval timeout;timeout.tv_sec = tm / 1000;timeout.tv_usec = (tm % 1000) * 1000;C_fdset_input_2 = C_fdset_input;C_fdset_output_2 = C_fdset_output;return(select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL));
C_ret:
#undef return

return C_r;}

C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1734)
static void C_fcall f_1734(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1632)
static void C_fcall f_1632(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1627)
static void C_fcall f_1627(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1513)
static void C_fcall f_1513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1519)
static void C_fcall f_1519(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1546)
static void C_fcall f_1546(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1600)
static void C_fcall f_1600(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1573)
static void C_fcall f_1573(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1150)
static void C_ccall f_1150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1211)
static void C_fcall f_1211(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1157)
static void C_fcall f_1157(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1099)
static void C_ccall f_1099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_985)
static void C_ccall f_985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1021)
static void C_fcall f_1021(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_fcall f_1029(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_899)
static void C_fcall f_899(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_909)
static void C_fcall f_909(C_word t0,C_word t1) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_849)
static C_word C_fcall f_849(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_818)
static void C_ccall f_818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_714)
static void C_ccall f_714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_485)
static void C_ccall f_485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_515)
static void C_ccall f_515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_520)
static void C_fcall f_520(C_word t0,C_word t1) C_noret;
C_noret_decl(f_599)
static void C_fcall f_599(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_651)
static void C_fcall f_651(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_fcall f_1446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_fcall f_634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_524)
static void C_ccall f_524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1269)
static void C_fcall f_1269(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1293)
static void C_fcall f_1293(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_fcall f_1324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1364)
static void C_fcall f_1364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_527)
static void C_ccall f_527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_532)
static void C_fcall f_532(C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_fcall f_536(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1734)
static void C_fcall trf_1734(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1734(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1734(t0,t1,t2);}

C_noret_decl(trf_1632)
static void C_fcall trf_1632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1632(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1632(t0,t1);}

C_noret_decl(trf_1627)
static void C_fcall trf_1627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1627(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1627(t0,t1,t2);}

C_noret_decl(trf_1513)
static void C_fcall trf_1513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1513(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1513(t0,t1,t2);}

C_noret_decl(trf_1519)
static void C_fcall trf_1519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1519(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1519(t0,t1,t2,t3);}

C_noret_decl(trf_1546)
static void C_fcall trf_1546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1546(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1546(t0,t1,t2,t3);}

C_noret_decl(trf_1600)
static void C_fcall trf_1600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1600(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1600(t0,t1,t2,t3);}

C_noret_decl(trf_1573)
static void C_fcall trf_1573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1573(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1573(t0,t1,t2);}

C_noret_decl(trf_1211)
static void C_fcall trf_1211(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1211(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1211(t0,t1,t2);}

C_noret_decl(trf_1157)
static void C_fcall trf_1157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1157(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1157(t0,t1);}

C_noret_decl(trf_1021)
static void C_fcall trf_1021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1021(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1021(t0,t1,t2);}

C_noret_decl(trf_1029)
static void C_fcall trf_1029(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1029(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1029(t0,t1,t2);}

C_noret_decl(trf_899)
static void C_fcall trf_899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_899(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_899(t0,t1,t2,t3);}

C_noret_decl(trf_909)
static void C_fcall trf_909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_909(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_909(t0,t1);}

C_noret_decl(trf_520)
static void C_fcall trf_520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_520(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_520(t0,t1);}

C_noret_decl(trf_599)
static void C_fcall trf_599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_599(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_599(t0,t1,t2);}

C_noret_decl(trf_651)
static void C_fcall trf_651(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_651(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_651(t0,t1);}

C_noret_decl(trf_1446)
static void C_fcall trf_1446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1446(t0,t1,t2);}

C_noret_decl(trf_634)
static void C_fcall trf_634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_634(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_634(t0,t1);}

C_noret_decl(trf_1269)
static void C_fcall trf_1269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1269(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1269(t0,t1);}

C_noret_decl(trf_1293)
static void C_fcall trf_1293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1293(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1293(t0,t1,t2,t3);}

C_noret_decl(trf_1324)
static void C_fcall trf_1324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1324(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1324(t0,t1,t2);}

C_noret_decl(trf_1364)
static void C_fcall trf_1364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1364(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1364(t0,t1);}

C_noret_decl(trf_532)
static void C_fcall trf_532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_532(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_532(t0,t1);}

C_noret_decl(trf_536)
static void C_fcall trf_536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_536(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_536(t0,t1);}

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
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scheduler_toplevel"));
C_check_nursery_minimum(51);
if(!C_demand(51)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(450)){
C_save(t1);
C_rereclaim2(450*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(51);
C_initialize_lf(lf,51);
lf[0]=C_h_intern(&lf[0],12,"\003sysschedule");
lf[1]=C_h_intern(&lf[1],18,"\003syscurrent-thread");
lf[2]=C_h_intern(&lf[2],17,"\003sysdynamic-winds");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],18,"\003sysstandard-error");
lf[6]=C_h_intern(&lf[6],29,"\003syscurrent-exception-handler");
lf[7]=C_h_intern(&lf[7],28,"\003syscurrent-parameter-vector");
lf[8]=C_h_intern(&lf[8],5,"ready");
lf[9]=C_h_intern(&lf[9],7,"running");
lf[11]=C_h_intern(&lf[11],11,"\003sysfd-list");
lf[12]=C_h_intern(&lf[12],15,"\003syssignal-hook");
lf[13]=C_h_intern(&lf[13],14,"\000runtime-error");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\010deadlock");
lf[17]=C_h_intern(&lf[17],19,"\003systhread-unblock!");
lf[18]=C_h_intern(&lf[18],21,"\003sysprimordial-thread");
lf[19]=C_h_intern(&lf[19],25,"\003systhread-basic-unblock!");
lf[20]=C_h_intern(&lf[20],8,"\003sysdelq");
lf[21]=C_h_intern(&lf[21],22,"\003sysadd-to-ready-queue");
lf[22]=C_h_intern(&lf[22],15,"\003sysready-queue");
lf[23]=C_h_intern(&lf[23],18,"\003sysinterrupt-hook");
lf[24]=C_h_intern(&lf[24],28,"\003sysremove-from-timeout-list");
lf[25]=C_h_intern(&lf[25],29,"\003systhread-block-for-timeout!");
lf[26]=C_h_intern(&lf[26],7,"blocked");
lf[27]=C_h_intern(&lf[27],33,"\003systhread-block-for-termination!");
lf[28]=C_h_intern(&lf[28],4,"dead");
lf[29]=C_h_intern(&lf[29],10,"terminated");
lf[30]=C_h_intern(&lf[30],16,"\003systhread-kill!");
lf[31]=C_h_intern(&lf[31],19,"\003sysabandon-mutexes");
lf[32]=C_h_intern(&lf[32],19,"print-error-message");
lf[33]=C_h_intern(&lf[33],7,"display");
lf[34]=C_h_intern(&lf[34],16,"print-call-chain");
lf[35]=C_h_intern(&lf[35],18,"open-output-string");
lf[36]=C_h_intern(&lf[36],17,"get-output-string");
lf[37]=C_h_intern(&lf[37],29,"\003sysdefault-exception-handler");
lf[38]=C_h_intern(&lf[38],10,"\003syssignal");
lf[39]=C_h_intern(&lf[39],20,"\003syswarnings-enabled");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\003): ");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\011Warning (");
lf[42]=C_h_intern(&lf[42],25,"\003systhread-block-for-i/o!");
lf[43]=C_h_intern(&lf[43],6,"\000input");
lf[44]=C_h_intern(&lf[44],7,"\000output");
lf[45]=C_h_intern(&lf[45],4,"\000all");
lf[46]=C_h_intern(&lf[46],15,"\003sysall-threads");
lf[47]=C_h_intern(&lf[47],3,"i/o");
lf[48]=C_h_intern(&lf[48],7,"timeout");
lf[49]=C_h_intern(&lf[49],27,"\003sysfetch-and-clear-threads");
lf[50]=C_h_intern(&lf[50],19,"\003sysrestore-threads");
C_register_lf2(lf,51,create_ptable());
t2=C_mutate((C_word*)lf[0]+1 /* (set! schedule ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_485,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t3=lf[15] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[16] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_mutate((C_word*)lf[22]+1 /* (set! ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_714,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[21]+1 /* (set! add-to-ready-queue ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[23]+1);
t8=C_mutate((C_word*)lf[23]+1 /* (set! interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_818,a[2]=t7,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t9=lf[10] /* timeout-list */ =C_SCHEME_END_OF_LIST;;
t10=C_mutate((C_word*)lf[24]+1 /* (set! remove-from-timeout-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[25]+1 /* (set! thread-block-for-timeout! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_884,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[27]+1 /* (set! thread-block-for-termination! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_947,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[30]+1 /* (set! thread-kill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_985,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[19]+1 /* (set! thread-basic-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[32]+1);
t16=*((C_word*)lf[33]+1);
t17=*((C_word*)lf[34]+1);
t18=*((C_word*)lf[35]+1);
t19=*((C_word*)lf[36]+1);
t20=C_mutate((C_word*)lf[37]+1 /* (set! default-exception-handler ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1071,a[2]=t18,a[3]=t16,a[4]=t19,a[5]=t15,a[6]=t17,a[7]=((C_word)li21),tmp=(C_word)a,a+=8,tmp));
t21=C_set_block_item(lf[11] /* fd-list */,0,C_SCHEME_END_OF_LIST);
t22=(C_word)stub256(C_SCHEME_UNDEFINED);
t23=C_mutate((C_word*)lf[42]+1 /* (set! thread-block-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1150,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[46]+1 /* (set! all-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1511,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[49]+1 /* (set! fetch-and-clear-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[50]+1 /* (set! restore-threads ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1693,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[17]+1 /* (set! thread-unblock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1712,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t28=t1;
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,C_SCHEME_UNDEFINED);}

/* ##sys#thread-unblock! */
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1712,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_eqp(lf[26],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1722,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm: 470  ##sys#remove-from-timeout-list */
t6=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1720 in ##sys#thread-unblock! */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1734,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1734(t6,t2,*((C_word*)lf[11]+1));}

/* loop in k1720 in ##sys#thread-unblock! */
static void C_fcall f_1734(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1734,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1767,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(t3,C_fix(1));
/* scheduler.scm: 478  ##sys#delq */
t7=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k1765 in loop in k1720 in ##sys#thread-unblock! */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1767,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1755,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* scheduler.scm: 479  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1734(t5,t3,t4);}

/* k1753 in k1765 in loop in k1720 in ##sys#thread-unblock! */
static void C_ccall f_1755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1755,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1724 in k1720 in ##sys#thread-unblock! */
static void C_ccall f_1726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! fd-list ...) */,t1);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST);
/* scheduler.scm: 481  ##sys#thread-basic-unblock! */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* ##sys#restore-threads */
static void C_ccall f_1693(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1693,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=C_mutate(&lf[15] /* (set! ready-queue-head ...) */,t3);
t5=(C_word)C_slot(t2,C_fix(1));
t6=C_mutate(&lf[16] /* (set! ready-queue-tail ...) */,t5);
t7=(C_word)C_slot(t2,C_fix(2));
t8=C_mutate((C_word*)lf[11]+1 /* (set! fd-list ...) */,t7);
t9=(C_word)C_slot(t2,C_fix(3));
t10=C_mutate(&lf[10] /* (set! timeout-list ...) */,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* ##sys#fetch-and-clear-threads */
static void C_ccall f_1683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1683,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,4,lf[15],lf[16],*((C_word*)lf[11]+1),lf[10]);
t3=lf[15] /* ready-queue-head */ =C_SCHEME_END_OF_LIST;;
t4=lf[16] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[11] /* fd-list */,0,C_SCHEME_END_OF_LIST);
t6=lf[10] /* timeout-list */ =C_SCHEME_END_OF_LIST;;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* ##sys#all-threads */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr2r,(void*)f_1511r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1511r(t0,t1,t2);}}

static void C_ccall f_1511r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1513,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1627,a[2]=t3,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1632,a[2]=t4,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-cns389416 */
t6=t5;
f_1632(t6,t1);}
else{
t6=(C_word)C_u_i_car(t2);
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t7))){
/* def-init390414 */
t8=t4;
f_1627(t8,t1,t6);}
else{
t8=(C_word)C_u_i_car(t7);
t9=(C_word)C_slot(t7,C_fix(1));
/* body387395 */
f_1513(t1,t6,t8);}}}

/* def-cns389 in ##sys#all-threads */
static void C_fcall f_1632(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1632,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1638,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* def-init390414 */
t3=((C_word*)t0)[2];
f_1627(t3,t1,t2);}

/* a1637 in def-cns389 in ##sys#all-threads */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1638,6,t0,t1,t2,t3,t4,t5);}
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,t4,t5));}

/* def-init390 in ##sys#all-threads */
static void C_fcall f_1627(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1627,NULL,3,t0,t1,t2);}
/* body387395 */
f_1513(t1,t2,C_SCHEME_END_OF_LIST);}

/* body387 in ##sys#all-threads */
static void C_fcall f_1513(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1513,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1519,a[2]=t2,a[3]=t5,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1519(t7,t1,lf[15],t3);}

/* loop in body387 in ##sys#all-threads */
static void C_fcall f_1519(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1519,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1537,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_u_i_car(t2);
/* scheduler.scm: 432  cns */
t7=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t5,lf[8],C_SCHEME_FALSE,t6,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1546,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1546(t7,t1,*((C_word*)lf[11]+1),t3);}}

/* loop in loop in body387 in ##sys#all-threads */
static void C_fcall f_1546(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1546,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_u_i_caar(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1567,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_u_i_cdar(t2);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1573,a[2]=t9,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_1573(t11,t6,t7);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1600,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1600(t7,t1,lf[10],t3);}}

/* loop in loop in loop in body387 in ##sys#all-threads */
static void C_fcall f_1600(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1600,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1618,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_u_i_caar(t2);
t7=(C_word)C_u_i_cdar(t2);
/* scheduler.scm: 442  cns */
t8=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t5,lf[48],t6,t7,t3);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1616 in loop in loop in loop in body387 in ##sys#all-threads */
static void C_ccall f_1618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 442  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1600(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in loop in loop in body387 in ##sys#all-threads */
static void C_fcall f_1573(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1573,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=((C_word*)t0)[5];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1591,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
/* scheduler.scm: 439  loop */
t8=t4;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}

/* k1589 in loop in loop in loop in body387 in ##sys#all-threads */
static void C_ccall f_1591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 439  cns */
t2=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[47],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1565 in loop in loop in body387 in ##sys#all-threads */
static void C_ccall f_1567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 435  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1546(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1535 in loop in body387 in ##sys#all-threads */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 432  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1519(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#thread-block-for-i/o! */
static void C_ccall f_1150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1150,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1154,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1211,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1211(t9,t5,*((C_word*)lf[11]+1));}

/* loop in ##sys#thread-block-for-i/o! */
static void C_fcall f_1211(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1211,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=(C_word)C_a_i_cons(&a,2,t3,*((C_word*)lf[11]+1));
t5=C_mutate((C_word*)lf[11]+1 /* (set! fd-list ...) */,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(t3,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_setslot(t3,C_fix(1),t7));}
else{
t6=(C_word)C_slot(t2,C_fix(1));
/* scheduler.scm: 346  loop */
t13=t1;
t14=t6;
t1=t13;
t2=t14;
goto loop;}}}

/* k1152 in ##sys#thread-block-for-i/o! */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1154,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(t2,C_SCHEME_TRUE);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t2,lf[43]));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t3;
f_1157(t7,(C_word)stub259(C_SCHEME_UNDEFINED,t6));}
else{
t6=(C_word)C_eqp(t2,C_SCHEME_FALSE);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t2,lf[44]));
if(C_truep(t7)){
t8=((C_word*)t0)[3];
t9=t3;
f_1157(t9,(C_word)stub263(C_SCHEME_UNDEFINED,t8));}
else{
t8=(C_word)C_eqp(t2,lf[45]);
if(C_truep(t8)){
t9=((C_word*)t0)[3];
t10=(C_word)stub259(C_SCHEME_UNDEFINED,t9);
t11=((C_word*)t0)[3];
t12=t3;
f_1157(t12,(C_word)stub263(C_SCHEME_UNDEFINED,t11));}
else{
t9=t3;
f_1157(t9,C_SCHEME_UNDEFINED);}}}}

/* k1155 in k1152 in ##sys#thread-block-for-i/o! */
static void C_fcall f_1157(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1157,NULL,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(3),lf[26]);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[5],C_fix(13),C_SCHEME_FALSE);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(11),t4));}

/* ##sys#default-exception-handler */
static void C_ccall f_1071(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1071,3,t0,t1,t2);}
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1075,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[18]+1);
t6=(C_word)C_slot(t5,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1095,a[2]=t2,a[3]=t6,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_setslot(t5,C_fix(1),t7);
/* scheduler.scm: 290  ##sys#thread-unblock! */
t9=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t4,t5);}
else{
if(C_truep(*((C_word*)lf[39]+1))){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1108,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* scheduler.scm: 292  open-output-string */
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1075(2,t6,t5);}}}

/* k1106 in ##sys#default-exception-handler */
static void C_ccall f_1108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1111,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* scheduler.scm: 293  display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[41],t1);}

/* k1109 in k1106 in ##sys#default-exception-handler */
static void C_ccall f_1111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* scheduler.scm: 294  display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[3]);}

/* k1112 in k1109 in k1106 in ##sys#default-exception-handler */
static void C_ccall f_1114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* scheduler.scm: 295  display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[40],((C_word*)t0)[3]);}

/* k1115 in k1112 in k1109 in k1106 in ##sys#default-exception-handler */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1120,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm: 296  get-output-string */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1125 in k1115 in k1112 in k1109 in k1106 in ##sys#default-exception-handler */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 296  print-error-message */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[5]+1),t1);}

/* k1118 in k1115 in k1112 in k1109 in k1106 in ##sys#default-exception-handler */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 297  print-call-chain */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[5]+1),C_fix(0),((C_word*)t0)[2]);}

/* a1094 in ##sys#default-exception-handler */
static void C_ccall f_1095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1099,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm: 288  ##sys#signal */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1097 in a1094 in ##sys#default-exception-handler */
static void C_ccall f_1099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 289  ptx */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1073 in ##sys#default-exception-handler */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1075,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm: 299  ##sys#thread-kill! */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[29]);}

/* k1079 in k1073 in ##sys#default-exception-handler */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 300  ##sys#schedule */
t2=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ##sys#thread-basic-unblock! */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1059,3,t0,t1,t2);}
t3=(C_word)C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=(C_word)C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm: 271  ##sys#add-to-ready-queue */
t5=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}

/* ##sys#thread-kill! */
static void C_ccall f_985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_985,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_989,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm: 251  ##sys#abandon-mutexes */
t5=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k987 in ##sys#thread-kill! */
static void C_ccall f_989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_989,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),((C_word*)t0)[3]);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(4),C_SCHEME_FALSE);
t4=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(11),C_SCHEME_FALSE);
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(8),C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm: 256  ##sys#remove-from-timeout-list */
t7=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}

/* k1002 in k987 in ##sys#thread-kill! */
static void C_ccall f_1004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1004,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(12));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1021,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1021(t7,t3,t2);}}

/* loop192 in k1002 in k987 in ##sys#thread-kill! */
static void C_fcall f_1021(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1021,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1029,a[2]=((C_word*)t0)[3],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1046,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g199200 */
t6=t3;
f_1029(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1044 in loop192 in k1002 in k987 in ##sys#thread-kill! */
static void C_ccall f_1046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1021(t3,((C_word*)t0)[2],t2);}

/* g199 in loop192 in k1002 in k987 in ##sys#thread-kill! */
static void C_fcall f_1029(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1029,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(11));
t4=(C_word)C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm: 263  ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1008 in k1002 in k987 in ##sys#thread-kill! */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST));}

/* ##sys#thread-block-for-termination! */
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_947,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_eqp(t4,lf[28]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(t4,lf[29]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=(C_word)C_slot(t3,C_fix(12));
t8=(C_word)C_a_i_cons(&a,2,t2,t7);
t9=(C_word)C_i_setslot(t3,C_fix(12),t8);
t10=(C_word)C_i_setslot(t2,C_fix(3),lf[26]);
t11=(C_word)C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_i_setslot(t2,C_fix(11),t3));}}

/* ##sys#thread-block-for-timeout! */
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_884,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_888,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_899,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=((C_word)li13),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_899(t8,t4,lf[10],C_SCHEME_FALSE);}

/* loop in ##sys#thread-block-for-timeout! */
static void C_fcall f_899(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_899,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_909,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_909(t6,t4);}
else{
t6=(C_word)C_u_i_caar(t2);
t7=((C_word*)t0)[4];
t8=t5;
f_909(t8,(C_word)C_fixnum_lessp(t7,t6));}}

/* k907 in loop in ##sys#thread-block-for-timeout! */
static void C_fcall f_909(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_909,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[7])){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[7],C_fix(1),t3));}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=C_mutate(&lf[10] /* (set! timeout-list ...) */,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 235  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_899(t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}}

/* k886 in ##sys#thread-block-for-timeout! */
static void C_ccall f_888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[26]);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(13),C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(4),((C_word*)t0)[2]));}

/* ##sys#remove-from-timeout-list */
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_843,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_849,a[2]=t2,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_849(t3,lf[10],C_SCHEME_FALSE));}

/* loop in ##sys#remove-from-timeout-list */
static C_word C_fcall f_849(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_truep((C_word)C_i_nullp(t1))){
t3=t1;
return(t3);}
else{
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_slot(t1,C_fix(1));
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t6)){
if(C_truep(t2)){
return((C_word)C_i_setslot(t2,C_fix(1),t4));}
else{
t7=C_mutate(&lf[10] /* (set! timeout-list ...) */,t4);
return(t7);}}
else{
t10=t4;
t11=t1;
t1=t10;
t2=t11;
goto loop;}}}

/* ##sys#interrupt-hook */
static void C_ccall f_818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_818,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_822,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[1]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_836,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_setslot(t6,C_fix(1),t7);
/* scheduler.scm: 210  ##sys#schedule */
t9=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t4);}
else{
/* scheduler.scm: 211  oldhook */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t3);}}

/* a835 in ##sys#interrupt-hook */
static void C_ccall f_836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_836,2,t0,t1);}
/* scheduler.scm: 209  oldhook */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k820 in ##sys#interrupt-hook */
static void C_ccall f_822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 211  oldhook */
t2=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#add-to-ready-queue */
static void C_ccall f_717(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_717,3,t0,t1,t2);}
t3=(C_word)C_i_setslot(t2,C_fix(3),lf[8]);
t4=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=(C_word)C_eqp(C_SCHEME_END_OF_LIST,lf[15]);
if(C_truep(t5)){
t6=C_mutate(&lf[15] /* (set! ready-queue-head ...) */,t4);
t7=C_mutate(&lf[16] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=(C_word)C_i_setslot(lf[16],C_fix(1),t4);
t7=C_mutate(&lf[16] /* (set! ready-queue-tail ...) */,t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* ##sys#ready-queue */
static void C_ccall f_714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_714,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[15]);}

/* ##sys#schedule */
static void C_ccall f_485(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_485,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_slot(t2,C_fix(3));
t6=(C_word)C_slot(t2,C_fix(5));
t7=(C_word)C_i_setslot(t6,C_fix(0),*((C_word*)lf[2]+1));
t8=(C_word)C_i_setslot(t6,C_fix(1),*((C_word*)lf[3]+1));
t9=(C_word)C_i_setslot(t6,C_fix(2),*((C_word*)lf[4]+1));
t10=(C_word)C_i_setslot(t6,C_fix(3),*((C_word*)lf[5]+1));
t11=(C_word)C_i_setslot(t6,C_fix(4),*((C_word*)lf[6]+1));
t12=(C_word)C_i_setslot(t6,C_fix(5),*((C_word*)lf[7]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_515,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_eqp(t5,lf[9]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[8]));
if(C_truep(t15)){
t16=(C_word)C_i_set_i_slot(t2,C_fix(13),C_SCHEME_FALSE);
/* scheduler.scm: 111  ##sys#add-to-ready-queue */
t17=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t13,t2);}
else{
t16=t13;
f_515(2,t16,C_SCHEME_UNDEFINED);}}

/* k513 in ##sys#schedule */
static void C_ccall f_515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_515,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_520,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_520(t5,((C_word*)t0)[2]);}

/* loop1 in k513 in ##sys#schedule */
static void C_fcall f_520(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_520,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_524,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(lf[10]))){
t3=t2;
f_524(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_fudge(C_fix(16));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_599,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_599(t7,t2,lf[10]);}}

/* loop in loop1 in k513 in ##sys#schedule */
static void C_fcall f_599(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_599,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=lf[10] /* timeout-list */ =C_SCHEME_END_OF_LIST;;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_u_i_caar(t2);
t4=(C_word)C_u_i_cdar(t2);
t5=(C_word)C_slot(t4,C_fix(4));
t6=(C_word)C_eqp(t3,t5);
if(C_truep(t6)){
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[4],t3))){
t7=(C_word)C_i_set_i_slot(t4,C_fix(13),C_SCHEME_TRUE);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_634,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_slot(t4,C_fix(11));
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_slot(t4,C_fix(11));
t11=(C_word)C_slot(t10,C_fix(0));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1444,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1446,a[2]=t14,a[3]=t4,a[4]=t11,a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_1446(t16,t12,*((C_word*)lf[11]+1));}
else{
t10=C_SCHEME_UNDEFINED;
t11=t8;
f_634(t11,t10);}}
else{
t7=C_mutate(&lf[10] /* (set! timeout-list ...) */,t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_651,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(lf[15]))){
t9=(C_word)C_i_nullp(*((C_word*)lf[11]+1));
t10=t8;
f_651(t10,(C_truep(t9)?(C_word)C_i_pairp(lf[10]):C_SCHEME_FALSE));}
else{
t9=t8;
f_651(t9,C_SCHEME_FALSE);}}}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* scheduler.scm: 144  loop */
t23=t1;
t24=t7;
t1=t23;
t2=t24;
goto loop;}}}

/* k649 in loop in loop1 in k513 in ##sys#schedule */
static void C_fcall f_651(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_i_caar(lf[10]);
t3=(C_word)C_u_fixnum_difference(t2,((C_word*)t0)[4]);
t4=(C_word)C_i_fixnum_max(C_fix(0),t3);
if(C_truep((C_word)C_msleep(t4))){
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_mk_bool(C_signal_interrupted_p);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* loop in loop in loop1 in k513 in ##sys#schedule */
static void C_fcall f_1446(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1446,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1468,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(t3,C_fix(1));
/* scheduler.scm: 410  ##sys#delq */
t8=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[3],t7);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1497,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
/* scheduler.scm: 419  loop */
t11=t6;
t12=t7;
t1=t11;
t2=t12;
goto loop;}}}

/* k1495 in loop in loop in loop1 in k513 in ##sys#schedule */
static void C_ccall f_1497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1497,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1466 in loop in loop in loop1 in k513 in ##sys#schedule */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep((C_word)C_i_nullp(t1))){
t2=(C_word)stub267(C_SCHEME_UNDEFINED,((C_word*)t0)[5]);
t3=(C_word)stub252(C_SCHEME_UNDEFINED);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1442 in loop in loop1 in k513 in ##sys#schedule */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! fd-list ...) */,t1);
t3=((C_word*)t0)[2];
f_634(t3,t2);}

/* k632 in loop in loop1 in k513 in ##sys#schedule */
static void C_fcall f_634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_634,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_637,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm: 130  ##sys#thread-basic-unblock! */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k635 in k632 in loop in loop1 in k513 in ##sys#schedule */
static void C_ccall f_637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 131  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_599(t3,((C_word*)t0)[2],t2);}

/* k522 in loop1 in k513 in ##sys#schedule */
static void C_ccall f_524(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_527,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* scheduler.scm: 163  ##sys#thread-unblock! */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[18]+1));}
else{
if(C_truep((C_word)C_i_nullp(*((C_word*)lf[11]+1)))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_527(2,t4,t3);}
else{
t3=(C_word)C_i_pairp(lf[10]);
t4=(C_word)C_i_pairp(lf[15]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1269,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(C_truep(t4)?t4:t3);
t7=(C_truep(t3)?(C_word)C_i_not(t4):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(C_word)C_u_i_caar(lf[10]);
t9=(C_word)C_fudge(C_fix(16));
t10=(C_word)C_u_fixnum_difference(t8,t9);
t11=(C_word)C_i_fixnum_max(C_fix(0),t10);
t12=t5;
f_1269(t12,(C_word)stub248(C_SCHEME_UNDEFINED,t6,t11));}
else{
t8=t5;
f_1269(t8,(C_word)stub248(C_SCHEME_UNDEFINED,t6,C_fix(0)));}}}}

/* k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_fcall f_1269(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1269,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t3)){
/* scheduler.scm: 163  ##sys#thread-unblock! */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,*((C_word*)lf[18]+1));}
else{
if(C_truep((C_word)C_fixnum_greaterp(t1,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1293,a[2]=t6,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1293(t8,t4,t1,*((C_word*)lf[11]+1));}
else{
t4=((C_word*)t0)[2];
f_527(2,t4,(C_word)stub252(C_SCHEME_UNDEFINED));}}}

/* loop in k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_fcall f_1293(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1293,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_fix(0));
t5=(C_truep(t4)?t4:(C_word)C_i_nullp(t3));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(C_word)C_u_i_car(t3);
t7=(C_word)C_u_i_car(t6);
t8=(C_word)C_fd_test_input(t7);
t9=(C_word)C_fd_test_output(t7);
t10=(C_truep(t8)?t8:t9);
if(C_truep(t10)){
t11=(C_word)C_slot(t6,C_fix(1));
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1324,a[2]=t13,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t7,a[7]=((C_word)li1),tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_1324(t15,t1,t11);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1394,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(C_word)C_slot(t3,C_fix(1));
/* scheduler.scm: 394  loop */
t19=t11;
t20=t2;
t21=t12;
t1=t19;
t2=t20;
t3=t21;
goto loop;}}}

/* k1392 in loop in k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_ccall f_1394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1394,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* loop2 in loop in k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_fcall f_1324(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1324,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)stub267(C_SCHEME_UNDEFINED,((C_word*)t0)[6]);
t4=(C_word)C_u_fixnum_decrease(((C_word*)t0)[5]);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 386  loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1293(t6,t1,t4,t5);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t3,C_fix(11));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1354,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1364,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t7=(C_word)C_u_i_car(t4);
t8=(C_word)C_eqp(((C_word*)t0)[6],t7);
if(C_truep(t8)){
t9=(C_word)C_slot(t3,C_fix(13));
t10=t6;
f_1364(t10,(C_word)C_i_not(t9));}
else{
t9=t6;
f_1364(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_1364(t7,C_SCHEME_FALSE);}}}

/* k1362 in loop2 in loop in k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_fcall f_1364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* scheduler.scm: 392  ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 393  loop2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1324(t3,((C_word*)t0)[2],t2);}}

/* k1352 in loop2 in loop in k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 393  loop2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1324(t3,((C_word*)t0)[2],t2);}

/* k1289 in k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1 /* (set! fd-list ...) */,t1);
t3=((C_word*)t0)[2];
f_527(2,t3,(C_word)stub252(C_SCHEME_UNDEFINED));}

/* k1270 in k1267 in k522 in loop1 in k513 in ##sys#schedule */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_527(2,t2,(C_word)stub252(C_SCHEME_UNDEFINED));}

/* k525 in k522 in loop1 in k513 in ##sys#schedule */
static void C_ccall f_527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_527,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_532,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_532(t5,((C_word*)t0)[2]);}

/* loop2 in k525 in k522 in loop1 in k513 in ##sys#schedule */
static void C_fcall f_532(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_532,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=lf[15];
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
f_536(t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(1));
t5=C_mutate(&lf[15] /* (set! ready-queue-head ...) */,t4);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
t7=lf[16] /* ready-queue-tail */ =C_SCHEME_END_OF_LIST;;
t8=t2;
f_536(t8,(C_word)C_u_i_car(t3));}
else{
t7=t2;
f_536(t7,(C_word)C_u_i_car(t3));}}}

/* k534 in loop2 in k525 in k522 in loop1 in k513 in ##sys#schedule */
static void C_fcall f_536(C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=(C_word)C_slot(t1,C_fix(3));
t4=(C_word)C_eqp(t3,lf[8]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];
t6=t1;
t7=C_mutate((C_word*)lf[1]+1 /* (set! current-thread ...) */,t6);
t8=(C_word)C_i_setslot(t6,C_fix(3),lf[9]);
t9=(C_word)C_slot(t6,C_fix(5));
t10=(C_word)C_slot(t9,C_fix(0));
t11=C_mutate((C_word*)lf[2]+1 /* (set! dynamic-winds ...) */,t10);
t12=(C_word)C_slot(t9,C_fix(1));
t13=C_mutate((C_word*)lf[3]+1 /* (set! standard-input ...) */,t12);
t14=(C_word)C_slot(t9,C_fix(2));
t15=C_mutate((C_word*)lf[4]+1 /* (set! standard-output ...) */,t14);
t16=(C_word)C_slot(t9,C_fix(3));
t17=C_mutate((C_word*)lf[5]+1 /* (set! standard-error ...) */,t16);
t18=(C_word)C_slot(t9,C_fix(4));
t19=C_mutate((C_word*)lf[6]+1 /* (set! current-exception-handler ...) */,t18);
t20=(C_word)C_slot(t9,C_fix(5));
t21=C_mutate((C_word*)lf[7]+1 /* (set! current-parameter-vector ...) */,t20);
t22=(C_word)C_slot(t6,C_fix(9));
t23=(C_word)C_set_initial_timer_interrupt_period(t22);
t24=(C_word)C_slot(t6,C_fix(1));
/* g3839 */
t25=t24;
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,t5);}
else{
/* scheduler.scm: 159  loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_532(t5,((C_word*)t0)[4]);}}
else{
if(C_truep((C_word)C_i_nullp(lf[10]))){
if(C_truep((C_word)C_i_nullp(*((C_word*)lf[11]+1)))){
/* scheduler.scm: 156  ##sys#signal-hook */
t3=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],lf[13],lf[14]);}
else{
/* scheduler.scm: 157  loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_520(t3,((C_word*)t0)[4]);}}
else{
/* scheduler.scm: 157  loop1 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_520(t3,((C_word*)t0)[4]);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[81] = {
{"toplevel:scheduler_scm",(void*)C_scheduler_toplevel},
{"f_1712:scheduler_scm",(void*)f_1712},
{"f_1722:scheduler_scm",(void*)f_1722},
{"f_1734:scheduler_scm",(void*)f_1734},
{"f_1767:scheduler_scm",(void*)f_1767},
{"f_1755:scheduler_scm",(void*)f_1755},
{"f_1726:scheduler_scm",(void*)f_1726},
{"f_1693:scheduler_scm",(void*)f_1693},
{"f_1683:scheduler_scm",(void*)f_1683},
{"f_1511:scheduler_scm",(void*)f_1511},
{"f_1632:scheduler_scm",(void*)f_1632},
{"f_1638:scheduler_scm",(void*)f_1638},
{"f_1627:scheduler_scm",(void*)f_1627},
{"f_1513:scheduler_scm",(void*)f_1513},
{"f_1519:scheduler_scm",(void*)f_1519},
{"f_1546:scheduler_scm",(void*)f_1546},
{"f_1600:scheduler_scm",(void*)f_1600},
{"f_1618:scheduler_scm",(void*)f_1618},
{"f_1573:scheduler_scm",(void*)f_1573},
{"f_1591:scheduler_scm",(void*)f_1591},
{"f_1567:scheduler_scm",(void*)f_1567},
{"f_1537:scheduler_scm",(void*)f_1537},
{"f_1150:scheduler_scm",(void*)f_1150},
{"f_1211:scheduler_scm",(void*)f_1211},
{"f_1154:scheduler_scm",(void*)f_1154},
{"f_1157:scheduler_scm",(void*)f_1157},
{"f_1071:scheduler_scm",(void*)f_1071},
{"f_1108:scheduler_scm",(void*)f_1108},
{"f_1111:scheduler_scm",(void*)f_1111},
{"f_1114:scheduler_scm",(void*)f_1114},
{"f_1117:scheduler_scm",(void*)f_1117},
{"f_1127:scheduler_scm",(void*)f_1127},
{"f_1120:scheduler_scm",(void*)f_1120},
{"f_1095:scheduler_scm",(void*)f_1095},
{"f_1099:scheduler_scm",(void*)f_1099},
{"f_1075:scheduler_scm",(void*)f_1075},
{"f_1081:scheduler_scm",(void*)f_1081},
{"f_1059:scheduler_scm",(void*)f_1059},
{"f_985:scheduler_scm",(void*)f_985},
{"f_989:scheduler_scm",(void*)f_989},
{"f_1004:scheduler_scm",(void*)f_1004},
{"f_1021:scheduler_scm",(void*)f_1021},
{"f_1046:scheduler_scm",(void*)f_1046},
{"f_1029:scheduler_scm",(void*)f_1029},
{"f_1010:scheduler_scm",(void*)f_1010},
{"f_947:scheduler_scm",(void*)f_947},
{"f_884:scheduler_scm",(void*)f_884},
{"f_899:scheduler_scm",(void*)f_899},
{"f_909:scheduler_scm",(void*)f_909},
{"f_888:scheduler_scm",(void*)f_888},
{"f_843:scheduler_scm",(void*)f_843},
{"f_849:scheduler_scm",(void*)f_849},
{"f_818:scheduler_scm",(void*)f_818},
{"f_836:scheduler_scm",(void*)f_836},
{"f_822:scheduler_scm",(void*)f_822},
{"f_717:scheduler_scm",(void*)f_717},
{"f_714:scheduler_scm",(void*)f_714},
{"f_485:scheduler_scm",(void*)f_485},
{"f_515:scheduler_scm",(void*)f_515},
{"f_520:scheduler_scm",(void*)f_520},
{"f_599:scheduler_scm",(void*)f_599},
{"f_651:scheduler_scm",(void*)f_651},
{"f_1446:scheduler_scm",(void*)f_1446},
{"f_1497:scheduler_scm",(void*)f_1497},
{"f_1468:scheduler_scm",(void*)f_1468},
{"f_1444:scheduler_scm",(void*)f_1444},
{"f_634:scheduler_scm",(void*)f_634},
{"f_637:scheduler_scm",(void*)f_637},
{"f_524:scheduler_scm",(void*)f_524},
{"f_1269:scheduler_scm",(void*)f_1269},
{"f_1293:scheduler_scm",(void*)f_1293},
{"f_1394:scheduler_scm",(void*)f_1394},
{"f_1324:scheduler_scm",(void*)f_1324},
{"f_1364:scheduler_scm",(void*)f_1364},
{"f_1354:scheduler_scm",(void*)f_1354},
{"f_1291:scheduler_scm",(void*)f_1291},
{"f_1272:scheduler_scm",(void*)f_1272},
{"f_527:scheduler_scm",(void*)f_527},
{"f_532:scheduler_scm",(void*)f_532},
{"f_536:scheduler_scm",(void*)f_536},
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
