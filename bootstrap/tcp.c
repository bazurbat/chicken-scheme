/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:33
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -explicit-use -no-trace -output-file tcp.c
   unit: tcp
*/

#include "chicken.h"

#include <errno.h>
#ifdef _WIN32
# if _MSC_VER > 1300
# include <winsock2.h>
# include <ws2tcpip.h>
# else
# include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t       int
static WSADATA wsa;
# define fcntl(a, b, c)  0
# define EWOULDBLOCK     0
# define EINPROGRESS     0
# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)
#else
# include <fcntl.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <unistd.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define typecorrect_getsockopt getsockopt
#endif

#ifndef SD_RECEIVE
# define SD_RECEIVE      0
# define SD_SEND         1
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

static char addr_buffer[ 20 ];

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[93];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,43),40,35,35,110,101,116,35,103,101,116,104,111,115,116,97,100,100,114,32,97,49,51,51,49,51,56,32,97,49,51,50,49,51,57,32,97,49,51,49,49,52,48,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,57,55,51,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,57,54,52,32,114,101,116,117,114,110,49,52,52,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,7),40,121,105,101,108,100,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,7),40,97,49,49,56,51,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,32),40,97,49,49,56,57,32,115,50,51,50,50,51,51,50,51,54,32,97,100,100,114,50,51,52,50,51,53,50,51,55,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,50,49,57,32,119,50,50,56,32,104,111,115,116,50,50,57,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,104,111,115,116,50,50,50,32,37,119,50,49,55,50,52,55,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,119,50,50,49,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,30),40,116,99,112,45,108,105,115,116,101,110,32,112,111,114,116,50,49,50,32,46,32,109,111,114,101,50,49,51,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,108,105,115,116,101,110,101,114,63,32,120,50,53,53,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,19),40,116,99,112,45,99,108,111,115,101,32,116,99,112,108,50,53,57,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,13),40,102,95,49,51,50,54,32,120,50,54,57,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,14),40,99,104,101,99,107,32,108,111,99,50,54,56,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,12),40,114,101,97,100,45,105,110,112,117,116,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,108,101,110,52,49,55,32,111,102,102,115,101,116,52,49,56,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,13),40,111,117,116,112,117,116,32,115,52,49,53,41,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,53,54,32,115,52,52,53,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,13),40,102,95,49,54,55,54,32,115,52,53,48,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,49,53,55,54,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,8),40,102,95,49,54,52,48,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,7),40,97,49,54,57,49,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,7),40,97,49,55,49,51,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,7),40,97,49,55,52,56,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,110,51,54,48,32,109,51,54,49,32,115,116,97,114,116,51,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,34),40,97,49,55,57,49,32,112,51,53,53,32,110,51,53,54,32,100,101,115,116,51,53,55,32,115,116,97,114,116,51,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,23),40,97,49,56,56,50,32,112,111,115,50,51,56,55,32,110,101,120,116,51,56,56,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,116,114,51,55,57,32,108,105,109,105,116,51,56,48,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,21),40,97,49,56,53,54,32,112,51,55,54,32,108,105,109,105,116,51,55,55,41,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,22),40,35,35,110,101,116,35,105,111,45,112,111,114,116,115,32,102,100,50,56,50,41,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,99,99,101,112,116,32,116,99,112,108,52,56,51,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,97,99,99,101,112,116,45,114,101,97,100,121,63,32,116,99,112,108,53,48,51,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,6),40,102,97,105,108,41,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,53,50,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,50,51,53,52,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,29),40,97,50,51,54,48,32,104,111,115,116,53,51,49,53,51,51,32,112,111,114,116,53,51,50,53,51,52,41,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,31),40,116,99,112,45,99,111,110,110,101,99,116,32,104,111,115,116,53,50,48,32,46,32,109,111,114,101,53,50,49,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,116,99,112,45,112,111,114,116,45,62,102,105,108,101,110,111,32,112,53,56,57,41,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,20),40,116,99,112,45,97,100,100,114,101,115,115,101,115,32,112,53,57,50,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,112,111,114,116,45,110,117,109,98,101,114,115,32,112,54,48,54,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,27),40,116,99,112,45,108,105,115,116,101,110,101,114,45,112,111,114,116,32,116,99,112,108,54,50,48,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,23),40,116,99,112,45,97,98,97,110,100,111,110,45,112,111,114,116,32,112,54,50,57,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,26),40,116,99,112,45,108,105,115,116,101,110,101,114,45,102,105,108,101,110,111,32,108,54,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k2128 */
static C_word C_fcall stub515(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub515(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

/* from k2117 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub511(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub511(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;optlen = sizeof(err);if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == -1)return(-1);return(err);
C_ret:
#undef return

return C_r;}

/* from k1148 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub194(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub194(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int yes = 1; 
                      return(setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int)));
C_ret:
#undef return

return C_r;}

/* from k1059 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub164(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub164(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons(port);addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

/* from k945 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub134(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub134(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);struct sockaddr_in *addr = (struct sockaddr_in *)saddr;if(he == NULL) return(0);memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons((short)port);addr->sin_addr = *((struct in_addr *)he->h_addr);return(1);
C_ret:
#undef return

return C_r;}

/* from k930 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub128(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub128(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set out;
     struct timeval tm;
     int rv;
     FD_ZERO(&out);
     FD_SET(fd, &out);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, NULL, &out, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &out) ? 1 : 0; }
     return(rv);
C_ret:
#undef return

return C_r;}

/* from k923 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub124(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub124(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;
     struct timeval tm;
     int rv;
     FD_ZERO(&in);
     FD_SET(fd, &in);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, &in, NULL, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &in) ? 1 : 0; }
     return(rv);
C_ret:
#undef return

return C_r;}

/* from k902 in k898 in k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub115(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub115(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) return(0);
     else return(ntohs(se->s_port));
C_ret:
#undef return

return C_r;}

/* from ##net#startup */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub109(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub109(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     return(1);
#endif
C_ret:
#undef return

return C_r;}

/* from k885 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub105(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub105(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;unsigned int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, ((unsigned int *)&len)) != 0) return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);return(addr_buffer);
C_ret:
#undef return

return C_r;}

/* from k874 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub101(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub101(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) return(-1);else return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

/* from k867 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub97(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub97(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) return(-1);else return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

/* from k860 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub92(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub92(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);return(addr_buffer);
C_ret:
#undef return

return C_r;}

/* from k849 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub88(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub88(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) return(0);return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

/* from k839 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub78(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub78(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
void * msg=(void * )C_data_pointer_or_null(C_a1);
int offset=(int )C_unfix(C_a2);
int len=(int )C_unfix(C_a3);
int flags=(int )C_unfix(C_a4);
return(send(s, (char *)msg+offset, len, flags));
C_ret:
#undef return

return C_r;}

/* from k813 */
static C_word C_fcall stub66(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub66(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k798 */
static C_word C_fcall stub59(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub59(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k784 */
static C_word C_fcall stub49(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub49(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k765 */
static C_word C_fcall stub42(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub42(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k752 */
static C_word C_fcall stub32(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub32(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k737 */
static C_word C_fcall stub25(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub25(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k723 */
static C_word C_fcall stub16(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub16(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k708 */
static C_word C_fcall stub8(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub8(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_893)
static void C_ccall f_893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2526)
static void C_ccall f_2526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_ccall f_2445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_989)
static void C_fcall f_989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1012)
static void C_ccall f_1012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2333)
static void C_ccall f_2333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2246)
static void C_fcall f_2246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2208)
static void C_ccall f_2208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_fcall f_2156(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_fcall f_2007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2052)
static void C_ccall f_2052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1355)
static void C_fcall f_1355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1979)
static void C_ccall f_1979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_fcall f_1371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1867)
static void C_fcall f_1867(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1798)
static void C_fcall f_1798(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1757)
static void C_fcall f_1757(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_fcall f_1763(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_fcall f_1624(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_fcall f_1585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1588)
static void C_fcall f_1588(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1594)
static void C_fcall f_1594(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1455)
static void C_fcall f_1455(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1465)
static void C_fcall f_1465(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_fcall f_1378(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_fcall f_1384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_fcall f_1324(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1310)
static void C_ccall f_1310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1226)
static void C_fcall f_1226(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_fcall f_1221(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1178)
static void C_fcall f_1178(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1132)
static void C_ccall f_1132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1110)
static void C_ccall f_1110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_959)
static void C_fcall f_959(C_word t0) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_fcall f_934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_943)
static void C_ccall f_943(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_989)
static void C_fcall trf_989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_989(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_989(t0,t1,t2);}

C_noret_decl(trf_2246)
static void C_fcall trf_2246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2246(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2246(t0,t1);}

C_noret_decl(trf_2156)
static void C_fcall trf_2156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2156(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2156(t0,t1);}

C_noret_decl(trf_2007)
static void C_fcall trf_2007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2007(t0,t1);}

C_noret_decl(trf_1355)
static void C_fcall trf_1355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1355(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1355(t0,t1,t2);}

C_noret_decl(trf_1371)
static void C_fcall trf_1371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1371(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1371(t0,t1);}

C_noret_decl(trf_1867)
static void C_fcall trf_1867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1867(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1867(t0,t1,t2,t3);}

C_noret_decl(trf_1798)
static void C_fcall trf_1798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1798(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1798(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1757)
static void C_fcall trf_1757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1757(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1757(t0,t1);}

C_noret_decl(trf_1763)
static void C_fcall trf_1763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1763(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1763(t0,t1);}

C_noret_decl(trf_1624)
static void C_fcall trf_1624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1624(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1624(t0,t1);}

C_noret_decl(trf_1585)
static void C_fcall trf_1585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1585(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1585(t0,t1);}

C_noret_decl(trf_1588)
static void C_fcall trf_1588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1588(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1588(t0,t1);}

C_noret_decl(trf_1594)
static void C_fcall trf_1594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1594(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1594(t0,t1);}

C_noret_decl(trf_1455)
static void C_fcall trf_1455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1455(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1455(t0,t1,t2);}

C_noret_decl(trf_1465)
static void C_fcall trf_1465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1465(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1465(t0,t1,t2,t3);}

C_noret_decl(trf_1378)
static void C_fcall trf_1378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1378(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1378(t0,t1);}

C_noret_decl(trf_1384)
static void C_fcall trf_1384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1384(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1384(t0,t1);}

C_noret_decl(trf_1324)
static void C_fcall trf_1324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1324(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1324(t0,t1);}

C_noret_decl(trf_1226)
static void C_fcall trf_1226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1226(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1226(t0,t1);}

C_noret_decl(trf_1221)
static void C_fcall trf_1221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1221(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1221(t0,t1,t2);}

C_noret_decl(trf_1178)
static void C_fcall trf_1178(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1178(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1178(t0,t1,t2,t3);}

C_noret_decl(trf_959)
static void C_fcall trf_959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_959(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_959(t0);}

C_noret_decl(trf_934)
static void C_fcall trf_934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_934(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_934(t0,t1,t2,t3);}

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
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("tcp_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(460)){
C_save(t1);
C_rereclaim2(460*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,93);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_h_intern(&lf[3],17,"\003sysmake-c-string");
lf[5]=C_h_intern(&lf[5],18,"\003syscurrent-thread");
lf[6]=C_h_intern(&lf[6],12,"\003sysschedule");
lf[7]=C_h_intern(&lf[7],9,"substring");
lf[8]=C_h_intern(&lf[8],10,"tcp-listen");
lf[9]=C_h_intern(&lf[9],15,"\003syssignal-hook");
lf[10]=C_h_intern(&lf[10],14,"\000network-error");
lf[11]=C_h_intern(&lf[11],17,"\003sysstring-append");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot bind to socket - ");
lf[13]=C_h_intern(&lf[13],17,"\003syspeek-c-string");
lf[14]=C_h_intern(&lf[14],16,"\003sysupdate-errno");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\042getting listener host IP failed - ");
lf[16]=C_h_intern(&lf[16],11,"make-string");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000 error while setting up socket - ");
lf[18]=C_h_intern(&lf[18],9,"\003syserror");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot create socket");
lf[20]=C_h_intern(&lf[20],13,"\000domain-error");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid port number");
lf[22]=C_h_intern(&lf[22],12,"tcp-listener");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot listen on socket - ");
lf[24]=C_h_intern(&lf[24],13,"tcp-listener\077");
lf[25]=C_h_intern(&lf[25],9,"tcp-close");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot close TCP socket - ");
lf[27]=C_h_intern(&lf[27],15,"tcp-buffer-size");
lf[28]=C_h_intern(&lf[28],16,"tcp-read-timeout");
lf[29]=C_h_intern(&lf[29],17,"tcp-write-timeout");
lf[30]=C_h_intern(&lf[30],19,"tcp-connect-timeout");
lf[31]=C_h_intern(&lf[31],18,"tcp-accept-timeout");
lf[32]=C_h_intern(&lf[32],15,"make-input-port");
lf[33]=C_h_intern(&lf[33],16,"make-output-port");
lf[35]=C_h_intern(&lf[35],22,"\000network-timeout-error");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\030read operation timed out");
lf[37]=C_h_intern(&lf[37],25,"\003systhread-block-for-i/o!");
lf[38]=C_h_intern(&lf[38],29,"\003systhread-block-for-timeout!");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot read from socket - ");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\031write operation timed out");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot write to socket - ");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\005(tcp)");
lf[44]=C_h_intern(&lf[44],6,"socket");
lf[45]=C_h_intern(&lf[45],18,"\003sysset-port-data!");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot close socket output port - ");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000 cannot check socket for input - ");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000!cannot close socket input port - ");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[53]=C_h_intern(&lf[53],15,"\003sysmake-string");
lf[54]=C_h_intern(&lf[54],20,"\003sysscan-buffer-line");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\032cannot create TCP ports - ");
lf[57]=C_h_intern(&lf[57],10,"tcp-accept");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000!could not accept from listener - ");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\032accept operation timed out");
lf[60]=C_h_intern(&lf[60],17,"tcp-accept-ready\077");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000 cannot check socket for input - ");
lf[62]=C_h_intern(&lf[62],11,"tcp-connect");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot connect to socket - ");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\026getsockopt() failed - ");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create socket - ");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\033connect operation timed out");
lf[67]=C_h_intern(&lf[67],4,"\000all");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\021fcntl() failed - ");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot find host address");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create socket - ");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\021no port specified");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000#cannot compute port from service - ");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\003tcp");
lf[74]=C_h_intern(&lf[74],20,"\003systcp-port->fileno");
lf[75]=C_h_intern(&lf[75],5,"error");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000)argument does not appear to be a TCP port");
lf[77]=C_h_intern(&lf[77],13,"\003sysport-data");
lf[78]=C_h_intern(&lf[78],13,"tcp-addresses");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000 cannot compute remote address - ");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot compute local address - ");
lf[81]=C_h_intern(&lf[81],14,"\003syscheck-port");
lf[82]=C_h_intern(&lf[82],16,"tcp-port-numbers");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot compute remote port - ");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot compute local port - ");
lf[85]=C_h_intern(&lf[85],17,"tcp-listener-port");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\036cannot obtain listener port - ");
lf[87]=C_h_intern(&lf[87],16,"tcp-abandon-port");
lf[88]=C_h_intern(&lf[88],19,"tcp-listener-fileno");
lf[89]=C_h_intern(&lf[89],14,"make-parameter");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot initialize Winsock");
lf[91]=C_h_intern(&lf[91],17,"register-feature!");
lf[92]=C_h_intern(&lf[92],3,"tcp");
C_register_lf2(lf,93,create_ptable());
t2=C_mutate(&lf[0] /* (set! c253 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_689,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k687 */
static void C_ccall f_689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k690 in k687 */
static void C_ccall f_692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 91   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[91]+1)))(3,*((C_word*)lf[91]+1),t2,lf[92]);}

/* k693 in k690 in k687 */
static void C_ccall f_695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)stub109(C_SCHEME_UNDEFINED))){
t3=t2;
f_893(2,t3,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 176  ##sys#signal-hook */
t3=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[10],lf[90]);}}

/* k891 in k693 in k690 in k687 */
static void C_ccall f_893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_893,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_934,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[4] /* (set! yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_959,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[7]+1);
t5=C_mutate((C_word*)lf[8]+1 /* (set! tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1176,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[24]+1 /* (set! tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[25]+1 /* (set! tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1283,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 321  make-parameter */
t9=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,C_SCHEME_FALSE);}

/* k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1318,2,t0,t1);}
t2=C_mutate((C_word*)lf[27]+1 /* (set! tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[28] /* tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[29] /* tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[30] /* tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[31] /* tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1324,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1341,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 332  check */
f_1324(t9,lf[28]);}

/* k2569 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 332  make-parameter */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(60000),t1);}

/* k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1341,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1 /* (set! tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 333  check */
f_1324(t4,lf[29]);}

/* k2565 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 333  make-parameter */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(60000),t1);}

/* k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1345,2,t0,t1);}
t2=C_mutate((C_word*)lf[29]+1 /* (set! tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 334  check */
f_1324(t4,lf[30]);}

/* k2561 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 334  make-parameter */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1349,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1 /* (set! tcp-connect-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2559,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 335  check */
f_1324(t4,lf[31]);}

/* k2557 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 335  make-parameter */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1353,2,t0,t1);}
t2=C_mutate((C_word*)lf[31]+1 /* (set! tcp-accept-timeout ...) */,t1);
t3=*((C_word*)lf[32]+1);
t4=*((C_word*)lf[33]+1);
t5=*((C_word*)lf[27]+1);
t6=*((C_word*)lf[16]+1);
t7=C_mutate(&lf[34] /* (set! io-ports ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1355,a[2]=t6,a[3]=t5,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[57]+1 /* (set! tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1992,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[60]+1 /* (set! tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2078,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[62]+1 /* (set! tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2132,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[74]+1 /* (set! tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2385,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[78]+1 /* (set! tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2403,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[82]+1 /* (set! tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2451,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[85]+1 /* (set! tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2499,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[87]+1 /* (set! tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2528,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[88]+1 /* (set! tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2548,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* tcp-listener-fileno in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2548,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[22],lf[88]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* tcp-abandon-port in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2528(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2528,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2532,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 668  ##sys#check-port */
t4=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[87]);}

/* k2530 in tcp-abandon-port in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 670  ##sys#port-data */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2537 in k2530 in tcp-abandon-port in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_i_set_i_slot(t1,C_fix(2),C_SCHEME_TRUE):(C_word)C_i_set_i_slot(t1,C_fix(1),C_SCHEME_TRUE)));}

/* tcp-listener-port in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2499,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[22],lf[85]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_i_foreign_fixnum_argumentp(t4);
t6=(C_word)stub97(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2512,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2522,a[2]=t4,a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2526,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t11=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}}

/* k2524 in tcp-listener-port in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 663  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[86],t1);}

/* k2520 in tcp-listener-port in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 662  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[10],lf[85],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2510 in tcp-listener-port in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2451,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2455,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 645  ##sys#check-port */
t4=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[82]);}

/* k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 646  ##sys#tcp-port->fileno */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2456 in k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=t1;
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=(C_word)stub97(C_SCHEME_UNDEFINED,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_2468(2,t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2497,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2495 in k2456 in k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 651  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[84],t1);}

/* k2491 in k2456 in k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 649  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[82],t1,((C_word*)t0)[2]);}

/* k2466 in k2456 in k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2468,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=(C_word)stub101(C_SCHEME_UNDEFINED,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2475,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* tcp.scm: 647  values */
C_values(4,0,((C_word*)t0)[3],t1,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2484 in k2466 in k2456 in k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 655  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[83],t1);}

/* k2480 in k2466 in k2456 in k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 653  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[82],t1,((C_word*)t0)[2]);}

/* k2473 in k2466 in k2456 in k2453 in tcp-port-numbers in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 647  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2403,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2407,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 632  ##sys#check-port */
t4=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[78]);}

/* k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 633  ##sys#tcp-port->fileno */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2417,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=t1;
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)stub92(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_2420(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2445,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2449,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2447 in k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 638  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[80],t1);}

/* k2443 in k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 636  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[78],t1,((C_word*)t0)[2]);}

/* k2418 in k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2424,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)stub105(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k2422 in k2418 in k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
/* tcp.scm: 634  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2438,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2436 in k2422 in k2418 in k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 642  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[79],t1);}

/* k2432 in k2422 in k2418 in k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 640  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[78],t1,((C_word*)t0)[2]);}

/* k2425 in k2422 in k2418 in k2415 in k2408 in k2405 in tcp-addresses in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 634  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#tcp-port->fileno in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2385,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2389,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 626  ##sys#port-data */
t4=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2387 in ##sys#tcp-port->fileno in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_vectorp(t1))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(t1,C_fix(0)));}
else{
/* tcp.scm: 629  error */
t2=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[74],lf[76],((C_word*)t0)[2]);}}

/* tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_2132r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2132r(t0,t1,t2,t3);}}

static void C_ccall f_2132r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2136,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t6=t5;
f_2136(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_2136(2,t7,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t3);}}}

/* k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2136,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2139,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 569  tcp-connect-timeout */
((C_proc2)C_retrieve_proc(*((C_word*)lf[30]+1)))(2,*((C_word*)lf[30]+1),t4);}

/* k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2139,2,t0,t1);}
t2=(C_word)C_i_check_string(((C_word*)((C_word*)t0)[4])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2145,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=t3;
f_2145(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2347,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[4],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}}

/* a2360 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2361,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=(C_word)C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_989,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_989(t7,t1,C_fix(0));}

/* loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_989(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_989,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
/* tcp.scm: 232  values */
C_values(4,0,t1,((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t3=(C_word)C_subchar(((C_word*)t0)[3],t2);
t4=(C_word)C_eqp(t3,C_make_character(58));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1012,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_fixnum_increase(t2);
/* tcp.scm: 236  substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[7]+1)))(5,*((C_word*)lf[7]+1),t5,((C_word*)t0)[3],t6,((C_word*)t0)[4]);}
else{
t5=(C_word)C_fixnum_plus(t2,C_fix(1));
/* tcp.scm: 246  loop */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}}}

/* k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1016,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 237  substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[7]+1)))(5,*((C_word*)lf[7]+1),t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1016,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_900,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(C_word)C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t5=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t4=t3;
f_900(2,t4,C_SCHEME_FALSE);}}

/* k898 in k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_foreign_string_argumentp(lf[73]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k902 in k898 in k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_904,2,t0,t1);}
t2=(C_word)stub115(C_SCHEME_UNDEFINED,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1022,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 240  ##sys#update-errno */
t6=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* tcp.scm: 235  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],t2);}}

/* k1026 in k902 in k898 in k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1039,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1037 in k1026 in k902 in k898 in k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 243  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[72],t1);}

/* k1033 in k1026 in k902 in k898 in k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 241  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[62],t1,((C_word*)t0)[2]);}

/* k1020 in k902 in k898 in k1014 in k1010 in loop in a2354 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 235  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2345 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2145(2,t3,t2);}
else{
/* tcp.scm: 573  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[62],lf[71],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2145,2,t0,t1);}
t2=(C_word)C_i_check_exact(((C_word*)((C_word*)t0)[5])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 575  make-string */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2151(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2151,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=C_fix((C_word)SOCK_STREAM);
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t7=(C_word)stub8(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2156,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t10=(C_word)C_eqp(C_fix(-1),t7);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2333,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 584  ##sys#update-errno */
t12=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=t9;
f_2177(2,t11,C_SCHEME_UNDEFINED);}}

/* k2331 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2344,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2342 in k2331 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 587  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[70],t1);}

/* k2338 in k2331 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 585  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[10],lf[62],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 588  ##net#gethostaddr */
f_934(t3,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k2322 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2180(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 589  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[62],lf[69],((C_word*)((C_word*)t0)[2])[1]);}}

/* k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
if(C_truep((C_word)stub88(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_2183(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 591  ##sys#update-errno */
t5=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2308 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2321,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2319 in k2308 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 592  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[68],t1);}

/* k2315 in k2308 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 592  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[10],lf[62],t1);}

/* k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_fix((C_word)sizeof(struct sockaddr_in));
t5=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t6=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t4);
t8=(C_word)stub66(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=(C_word)C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EINPROGRESS));
if(C_truep(t10)){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t12,a[5]=((C_word*)t0)[6],a[6]=((C_word)li35),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_2246(t14,t2);}
else{
/* tcp.scm: 611  fail */
t11=((C_word*)t0)[2];
f_2156(t11,t2);}}
else{
t10=t2;
f_2186(2,t10,C_SCHEME_UNDEFINED);}}

/* loop in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_2246(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2246,NULL,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=(C_word)stub128(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2253,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
/* tcp.scm: 597  fail */
t6=((C_word*)t0)[2];
f_2156(t6,t4);}
else{
t6=t4;
f_2253(2,t6,C_SCHEME_UNDEFINED);}}

/* k2251 in loop in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2253,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[6],C_fix(1));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(C_word)C_fudge(C_fix(16));
t5=(C_word)C_fixnum_plus(t4,((C_word*)t0)[3]);
/* tcp.scm: 600  ##sys#thread-block-for-timeout! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t3,*((C_word*)lf[5]+1),t5);}
else{
t4=t3;
f_2262(2,t4,C_SCHEME_UNDEFINED);}}}

/* k2260 in k2251 in loop in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 603  ##sys#thread-block-for-i/o! */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],lf[67]);}

/* k2263 in k2260 in k2251 in loop in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 604  yield */
f_959(t2);}

/* k2266 in k2263 in k2260 in k2251 in loop in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm: 606  ##sys#signal-hook */
t3=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[35],lf[62],lf[66],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm: 610  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2246(t3,((C_word*)t0)[4]);}}

/* k2269 in k2266 in k2263 in k2260 in k2251 in loop in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 610  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2246(t2,((C_word*)t0)[2]);}

/* k2184 in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2186,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t3=(C_word)stub511(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2192,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
t6=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t7=(C_word)stub42(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2208,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2212,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t10=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
t6=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t7=(C_word)stub42(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2228,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2232,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t11=(C_word)C_i_foreign_fixnum_argumentp(t3);
t12=(C_word)stub515(t10,t11);
/* ##sys#peek-c-string */
t13=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t9,t12,C_fix(0));}
else{
/* tcp.scm: 623  ##net#io-ports */
t6=lf[34];
f_1355(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}}}

/* k2230 in k2184 in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 622  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[65],t1);}

/* k2226 in k2184 in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 620  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[10],lf[62],t1);}

/* k2210 in k2184 in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 617  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[64],t1);}

/* k2206 in k2184 in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 615  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[10],lf[62],t1);}

/* k2190 in k2184 in k2181 in k2178 in k2175 in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 623  ##net#io-ports */
t2=lf[34];
f_1355(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fail in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_2156(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2156,NULL,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t3=(C_word)stub42(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 579  ##sys#update-errno */
t5=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2161 in fail in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2174,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2172 in k2161 in fail in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 581  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[63],t1);}

/* k2168 in k2161 in fail in k2149 in k2143 in k2137 in k2134 in tcp-connect in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 580  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[10],lf[62],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* tcp-accept-ready? in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2078(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2078,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[22],lf[60]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_i_foreign_fixnum_argumentp(t4);
t6=(C_word)stub124(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2088,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2097,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 551  ##sys#update-errno */
t10=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(C_fix(1),t6));}}

/* k2095 in tcp-accept-ready? in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2108,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2106 in k2095 in tcp-accept-ready? in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 553  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[61],t1);}

/* k2102 in k2095 in tcp-accept-ready? in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 552  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[60],t1,((C_word*)t0)[2]);}

/* k2086 in tcp-accept-ready? in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(C_fix(1),((C_word*)t0)[2]));}

/* tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1992,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[22]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2002,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 523  tcp-accept-timeout */
((C_proc2)C_retrieve_proc(*((C_word*)lf[31]+1)))(2,*((C_word*)lf[31]+1),t5);}

/* k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2002,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2007,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li31),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2007(t5,((C_word*)t0)[2]);}

/* loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_2007(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2007,NULL,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=(C_word)stub124(C_SCHEME_UNDEFINED,t2);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t6=(C_word)stub32(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2020,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2029,a[2]=((C_word*)t0)[4],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 528  ##sys#update-errno */
t10=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
/* tcp.scm: 532  ##net#io-ports */
t9=lf[34];
f_1355(t9,t1,t6);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2043,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t6=(C_word)C_fudge(C_fix(16));
t7=(C_word)C_fixnum_plus(t6,((C_word*)t0)[2]);
/* tcp.scm: 535  ##sys#thread-block-for-timeout! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t5,*((C_word*)lf[5]+1),t7);}
else{
t6=t5;
f_2043(2,t6,C_SCHEME_UNDEFINED);}}}

/* k2041 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 538  ##sys#thread-block-for-i/o! */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k2044 in k2041 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 539  yield */
f_959(t2);}

/* k2047 in k2044 in k2041 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2052,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm: 541  ##sys#signal-hook */
t3=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[35],lf[57],lf[59],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm: 545  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2007(t3,((C_word*)t0)[4]);}}

/* k2050 in k2047 in k2044 in k2041 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 545  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2007(t2,((C_word*)t0)[2]);}

/* k2027 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2040,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k2038 in k2027 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 530  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[58],t1);}

/* k2034 in k2027 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 529  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[57],t1,((C_word*)t0)[2]);}

/* k2018 in loop in k2000 in tcp-accept in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 532  ##net#io-ports */
t2=lf[34];
f_1355(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1355(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1355,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=t2;
t5=(C_word)C_i_foreign_fixnum_argumentp(t4);
if(C_truep((C_word)stub88(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_1359(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1979,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 344  ##sys#update-errno */
t7=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1977 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1986,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1990,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1988 in k1977 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 346  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[56],t1);}

/* k1984 in k1977 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 345  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[10],t1);}

/* k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 347  make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(1024));}

/* k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1362,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,5,((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1,C_fix(0));
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1368,a[2]=t8,a[3]=t10,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t2,a[7]=t4,a[8]=t1,a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
/* tcp.scm: 353  tbs */
t12=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t12))(2,t12,t11);}

/* k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=(C_word)C_fixnum_greaterp(t1,C_fix(0));
t4=t2;
f_1371(t4,(C_truep(t3)?lf[55]:C_SCHEME_FALSE));}
else{
t3=t2;
f_1371(t3,C_SCHEME_FALSE);}}

/* k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1371,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* tcp.scm: 355  tcp-read-timeout */
((C_proc2)C_retrieve_proc(*((C_word*)lf[28]+1)))(2,*((C_word*)lf[28]+1),t4);}

/* k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* tcp.scm: 356  tcp-write-timeout */
((C_proc2)C_retrieve_proc(*((C_word*)lf[29]+1)))(2,*((C_word*)lf[29]+1),t2);}

/* k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[53],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1378,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word)li15),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1692,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word)li22),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1714,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1749,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[2],a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1792,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1857,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word)li29),tmp=(C_word)a,a+=7,tmp);
/* tcp.scm: 385  make-input-port */
((C_proc8)C_retrieve_proc(*((C_word*)lf[32]+1)))(8,*((C_word*)lf[32]+1),t3,t4,t5,t6,C_SCHEME_FALSE,t7,t8);}

/* a1856 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1857,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?t3:(C_word)C_fudge(C_fix(21)));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1867,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_1867(t8,t1,C_SCHEME_FALSE,t4);}

/* loop in a1856 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1867(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1867,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t4=(C_word)C_i_fixnum_min(((C_word*)((C_word*)t0)[6])[1],t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[7],a[10]=((C_word)li27),tmp=(C_word)a,a+=11,tmp);
/* tcp.scm: 433  ##sys#scan-buffer-line */
((C_proc6)C_retrieve_proc(*((C_word*)lf[54]+1)))(6,*((C_word*)lf[54]+1),t1,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[7])[1],t5);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1955,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 454  read-input */
t5=((C_word*)t0)[3];
f_1378(t5,t4);}}

/* k1953 in loop in a1856 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
/* tcp.scm: 456  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1867(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a1882 in loop in a1856 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1883,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t2,((C_word*)((C_word*)t0)[9])[1]);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=t2,a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* tcp.scm: 439  ##sys#make-string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[53]+1)))(3,*((C_word*)lf[53]+1),t5,t4);}

/* k1888 in a1882 in loop in a1856 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1890,2,t0,t1);}
t2=(C_word)C_substring_copy(((C_word*)t0)[13],t1,((C_word*)((C_word*)t0)[12])[1],((C_word*)t0)[11],C_fix(0));
t3=C_mutate(((C_word *)((C_word*)t0)[12])+1,((C_word*)t0)[10]);
t4=(C_word)C_eqp(((C_word*)t0)[11],((C_word*)t0)[9]);
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[8])){
/* tcp.scm: 443  ##sys#string-append */
t5=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[7],((C_word*)t0)[8],t1);}
else{
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[11],((C_word*)t0)[10]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1912,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* tcp.scm: 445  read-input */
t7=((C_word*)t0)[3];
f_1378(t7,t6);}
else{
t6=(C_word)C_slot(((C_word*)t0)[2],C_fix(4));
t7=(C_word)C_fixnum_plus(t6,C_fix(1));
t8=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t7);
if(C_truep(((C_word*)t0)[8])){
/* tcp.scm: 452  ##sys#string-append */
t9=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,((C_word*)t0)[7],((C_word*)t0)[8],t1);}
else{
t9=t1;
t10=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}}}

/* k1910 in k1888 in a1882 in loop in a1856 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1912,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1]))){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:lf[52]));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1928,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[7])){
/* tcp.scm: 448  ##sys#string-append */
t3=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
t4=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* tcp.scm: 448  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1867(t5,((C_word*)t0)[6],t3,t4);}}}

/* k1926 in k1910 in k1888 in a1882 in loop in a1856 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* tcp.scm: 448  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1867(t3,((C_word*)t0)[2],t1,t2);}

/* a1791 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1792(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1792,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li25),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_1798(t9,t1,t3,C_fix(0),t5);}

/* loop in a1791 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1798(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t21;
C_word t22;
C_word *a;
loop:
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1798,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t6=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t10=(C_word)C_substring_copy(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1],t9,t4);
t11=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[7])+1,t11);
t13=(C_word)C_fixnum_difference(t2,t8);
t14=(C_word)C_fixnum_plus(t3,t8);
t15=(C_word)C_fixnum_plus(t4,t8);
/* tcp.scm: 423  loop */
t19=t1;
t20=t13;
t21=t14;
t22=t15;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1846,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 425  read-input */
t7=((C_word*)t0)[2];
f_1378(t7,t6);}}}

/* k1844 in loop in a1791 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(((C_word*)((C_word*)t0)[7])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* tcp.scm: 428  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1798(t3,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* a1748 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1749,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[2],C_fix(1)))){
t4=t3;
f_1757(t4,C_SCHEME_UNDEFINED);}
else{
t4=((C_word*)t0)[4];
t5=C_fix((C_word)SD_RECEIVE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_1757(t8,(C_word)stub59(C_SCHEME_UNDEFINED,t6,t7));}}}

/* k1755 in a1748 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1757(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1757,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=((C_word*)t0)[3];
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=(C_word)stub42(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1763(t6,(C_word)C_eqp(C_fix(-1),t5));}
else{
t3=t2;
f_1763(t3,C_SCHEME_FALSE);}}

/* k1761 in k1755 in a1748 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1763(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1763,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 409  ##sys#update-errno */
t3=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1764 in k1761 in k1755 in a1748 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1777,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1775 in k1764 in k1761 in k1755 in a1748 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 412  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[51],t1);}

/* k1771 in k1764 in k1761 in k1755 in a1748 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 410  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],t1,((C_word*)t0)[2]);}

/* a1713 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1714,2,t0,t1);}
t2=(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)t0)[2];
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=(C_word)stub124(C_SCHEME_UNDEFINED,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1727,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(t5,C_fix(-1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1736,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 398  ##sys#update-errno */
t9=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_eqp(t5,C_fix(1)));}}}

/* k1734 in a1713 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1747,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1745 in k1734 in a1713 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 401  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[50],t1);}

/* k1741 in k1734 in a1713 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 399  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],t1,((C_word*)t0)[2]);}

/* k1725 in a1713 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],C_fix(1)));}

/* a1691 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1696,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* tcp.scm: 388  read-input */
t3=((C_word*)t0)[2];
f_1378(t3,t2);}
else{
t3=t2;
f_1696(2,t3,C_SCHEME_UNDEFINED);}}

/* k1694 in a1691 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(C_word)C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1455,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1550,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[5])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1656,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1577,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1640,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 486  make-output-port */
((C_proc5)C_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),t3,t4,t5,t6);}
else{
/* tcp.scm: 486  make-output-port */
((C_proc5)C_retrieve_proc(*((C_word*)lf[33]+1)))(5,*((C_word*)lf[33]+1),t3,t4,t5,C_SCHEME_FALSE);}}

/* f_1640 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1640,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)((C_word*)t0)[3])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1650,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 510  output */
t4=((C_word*)t0)[2];
f_1455(t4,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1648 */
static void C_ccall f_1650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[49]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1577,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1585,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1624,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=(C_word)C_block_size(((C_word*)((C_word*)t0)[3])[1]);
t6=t4;
f_1624(t6,(C_word)C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1624(t5,C_SCHEME_FALSE);}}}

/* k1622 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1624(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1624,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 500  output */
t3=((C_word*)t0)[2];
f_1455(t3,t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=((C_word*)t0)[3];
f_1585(t2,C_SCHEME_UNDEFINED);}}

/* k1625 in k1622 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[48]);
t3=((C_word*)t0)[2];
f_1585(t3,t2);}

/* k1583 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1585(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1585,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[2],C_fix(2)))){
t3=t2;
f_1588(t3,C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[4];
t4=C_fix((C_word)SD_SEND);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=t2;
f_1588(t7,(C_word)stub59(C_SCHEME_UNDEFINED,t5,t6));}}

/* k1586 in k1583 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1588(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1588,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1594,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=((C_word*)t0)[3];
t4=(C_word)C_i_foreign_fixnum_argumentp(t3);
t5=(C_word)stub42(C_SCHEME_UNDEFINED,t4);
t6=t2;
f_1594(t6,(C_word)C_eqp(C_fix(-1),t5));}
else{
t3=t2;
f_1594(t3,C_SCHEME_FALSE);}}

/* k1592 in k1586 in k1583 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1594(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1594,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 504  ##sys#update-errno */
t3=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1595 in k1592 in k1586 in k1583 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1606 in k1595 in k1592 in k1586 in k1583 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 506  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[47],t1);}

/* k1602 in k1595 in k1592 in k1586 in k1583 in a1576 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 505  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],t1,((C_word*)t0)[2]);}

/* f_1676 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1676,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm: 495  output */
t4=((C_word*)t0)[2];
f_1455(t4,t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_1656 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1656,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 489  ##sys#string-append */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[4])[1],t2);}

/* k1659 */
static void C_ccall f_1661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1661,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_block_size(((C_word*)((C_word*)t0)[5])[1]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 491  output */
t5=((C_word*)t0)[2];
f_1455(t5,t4,((C_word*)((C_word*)t0)[5])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1668 in k1659 */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[46]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1548 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1550,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[42]);
t3=(C_word)C_i_setslot(t1,C_fix(3),lf[43]);
t4=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(7),lf[44]);
t5=(C_word)C_i_setslot(t1,C_fix(7),lf[44]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 516  ##sys#set-port-data! */
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1563 in k1548 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 517  ##sys#set-port-data! */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1566 in k1563 in k1548 in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 518  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1455(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1455,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1465(t7,t1,t3,C_fix(0));}

/* loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1465(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1465,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_fixnum_min(C_fix(8192),t2);
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=t3;
t8=(C_word)C_i_foreign_fixnum_argumentp(t5);
t9=(C_truep(t6)?(C_word)C_i_foreign_block_argumentp(t6):C_SCHEME_FALSE);
t10=(C_word)C_i_foreign_fixnum_argumentp(t7);
t11=(C_word)C_i_foreign_fixnum_argumentp(t4);
t12=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t13=(C_word)stub78(C_SCHEME_UNDEFINED,t8,t9,t10,t11,t12);
t14=(C_word)C_eqp(C_fix(-1),t13);
if(C_truep(t14)){
t15=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1487,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t17=(C_word)C_fudge(C_fix(16));
t18=(C_word)C_fixnum_plus(t17,((C_word*)t0)[2]);
/* tcp.scm: 467  ##sys#thread-block-for-timeout! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t16,*((C_word*)lf[5]+1),t18);}
else{
t17=t16;
f_1487(2,t17,C_SCHEME_UNDEFINED);}}
else{
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1519,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 478  ##sys#update-errno */
t17=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,t16);}}
else{
if(C_truep((C_word)C_fixnum_lessp(t13,t2))){
t15=(C_word)C_fixnum_difference(t2,t13);
t16=(C_word)C_fixnum_plus(t3,t13);
/* tcp.scm: 484  loop */
t23=t1;
t24=t15;
t25=t16;
t1=t23;
t2=t24;
t3=t25;
goto loop;}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}}}

/* k1517 in loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1530,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1528 in k1517 in loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 481  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[41],t1);}

/* k1524 in k1517 in loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 479  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],t1,((C_word*)t0)[2]);}

/* k1485 in loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 470  ##sys#thread-block-for-i/o! */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1488 in k1485 in loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 471  yield */
f_959(t2);}

/* k1491 in k1488 in k1485 in loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm: 473  ##sys#signal-hook */
t3=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[35],lf[40],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm: 476  loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1465(t3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k1494 in k1491 in k1488 in k1485 in loop in output in k1452 in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 476  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1465(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1378(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1378,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li14),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1384(t5,t1);}

/* loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1384(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1384,NULL,2,t0,t1);}
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1024));
t7=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t8=(C_word)stub49(C_SCHEME_UNDEFINED,t4,t5,t6,t7);
t9=(C_word)C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1403,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t12=(C_word)C_fudge(C_fix(16));
t13=(C_word)C_fixnum_plus(t12,((C_word*)t0)[5]);
/* tcp.scm: 364  ##sys#thread-block-for-timeout! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[38]+1)))(4,*((C_word*)lf[38]+1),t11,*((C_word*)lf[5]+1),t13);}
else{
t12=t11;
f_1403(2,t12,C_SCHEME_UNDEFINED);}}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 375  ##sys#update-errno */
t12=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}}
else{
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(4),t8);
t12=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}

/* k1433 in loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1446,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1444 in k1433 in loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 378  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[39],t1);}

/* k1440 in k1433 in loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 376  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[10],t1,((C_word*)t0)[2]);}

/* k1401 in loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 367  ##sys#thread-block-for-i/o! */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[5]+1),((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k1404 in k1401 in loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 368  yield */
f_959(t2);}

/* k1407 in k1404 in k1401 in loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1412,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_slot(*((C_word*)lf[5]+1),C_fix(13)))){
/* tcp.scm: 370  ##sys#signal-hook */
t3=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[35],lf[36],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* tcp.scm: 373  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1384(t3,((C_word*)t0)[4]);}}

/* k1410 in k1407 in k1404 in k1401 in loop in read-input in k1375 in k1372 in k1369 in k1366 in k1360 in k1357 in ##net#io-ports in k1351 in k1347 in k1343 in k1339 in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 373  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1384(t2,((C_word*)t0)[2]);}

/* check in k1316 in k891 in k693 in k690 in k687 */
static void C_fcall f_1324(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1324,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1326,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));}

/* f_1326 in check in k1316 in k891 in k693 in k690 in k687 */
static void C_ccall f_1326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1326,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_i_check_exact_2(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* tcp-close in k891 in k693 in k690 in k687 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1283,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[22]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_i_foreign_fixnum_argumentp(t4);
t6=(C_word)stub42(C_SCHEME_UNDEFINED,t5);
t7=(C_word)C_eqp(C_fix(-1),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1299,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 313  ##sys#update-errno */
t9=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k1297 in tcp-close in k891 in k693 in k690 in k687 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1310,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1308 in k1297 in tcp-close in k891 in k693 in k690 in k687 */
static void C_ccall f_1310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 316  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[26],t1);}

/* k1304 in k1297 in tcp-close in k891 in k693 in k690 in k687 */
static void C_ccall f_1306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 314  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[25],t1,((C_word*)t0)[2]);}

/* tcp-listener? in k891 in k693 in k690 in k687 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1274,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_i_structurep(t2,lf[22]):C_SCHEME_FALSE));}

/* tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1176(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_1176r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1176r(t0,t1,t2,t3);}}

static void C_ccall f_1176r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1178,a[2]=t2,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1221,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1226,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-w221248 */
t7=t6;
f_1226(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-host222246 */
t9=t5;
f_1221(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body219227 */
t11=t4;
f_1178(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-w221 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_fcall f_1226(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1226,NULL,2,t0,t1);}
/* def-host222246 */
t2=((C_word*)t0)[2];
f_1221(t2,t1,C_fix(10));}

/* def-host222 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_fcall f_1221(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1221,NULL,3,t0,t1,t2);}
/* body219227 */
t3=((C_word*)t0)[2];
f_1178(t3,t1,t2,C_SCHEME_FALSE);}

/* body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_fcall f_1178(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1178,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1184,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1190,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1189 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1190,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact(((C_word*)t0)[3]);
t5=t2;
t6=((C_word*)t0)[3];
t7=(C_word)C_i_foreign_fixnum_argumentp(t5);
t8=(C_word)C_i_foreign_fixnum_argumentp(t6);
t9=(C_word)stub25(C_SCHEME_UNDEFINED,t7,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1200,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_eqp(C_fix(-1),t9);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 299  ##sys#update-errno */
t13=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_record(&a,2,lf[22],t2));}}

/* k1207 in a1189 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1220,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1218 in k1207 in a1189 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 302  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[23],t1);}

/* k1214 in k1207 in a1189 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 300  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[10],lf[8],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1198 in a1189 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1200,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,2,lf[22],((C_word*)t0)[2]));}

/* a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1184,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_fix((C_word)SOCK_STREAM);
t4=((C_word*)t0)[2];
t5=(C_word)C_i_check_exact(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1073,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t7)){
if(C_truep(t7)){
/* tcp.scm: 262  ##sys#signal-hook */
t8=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,lf[20],lf[8],lf[21],t2);}
else{
t8=t6;
f_1073(2,t8,C_SCHEME_UNDEFINED);}}
else{
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,C_fix(65535)))){
/* tcp.scm: 262  ##sys#signal-hook */
t8=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,lf[20],lf[8],lf[21],t2);}
else{
t8=t6;
f_1073(2,t8,C_SCHEME_UNDEFINED);}}}

/* k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1073(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1073,2,t0,t1);}
t2=C_fix((C_word)AF_INET);
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t5=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t6=(C_word)stub8(C_SCHEME_UNDEFINED,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_eqp(C_fix((C_word)INVALID_SOCKET),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1159,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 265  ##sys#update-errno */
t10=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=t7;
f_1079(2,t9,C_SCHEME_UNDEFINED);}}

/* k1157 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 266  ##sys#error */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[19]);}

/* k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t4=(C_word)stub194(C_SCHEME_UNDEFINED,t3);
t5=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1132,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 272  ##sys#update-errno */
t7=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t2;
f_1082(2,t6,C_SCHEME_UNDEFINED);}}

/* k1130 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1143,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1141 in k1130 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 275  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[17],t1);}

/* k1137 in k1130 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 273  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[10],lf[8],t1,((C_word*)t0)[2]);}

/* k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 276  make-string */
t3=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k1083 in k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1088,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 278  ##net#gethostaddr */
f_934(t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=t1;
if(C_truep(t3)){
t4=(C_word)C_i_foreign_block_argumentp(t3);
t5=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=t2;
f_1088(2,t6,(C_word)stub164(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=t2;
f_1088(2,t5,(C_word)stub164(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}}

/* k1118 in k1083 in k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
f_1088(2,t3,t2);}
else{
/* tcp.scm: 279  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[10],lf[8],lf[15],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k1086 in k1083 in k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1088(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1088,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
t7=(C_word)stub16(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1094,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_eqp(C_fix(-1),t7);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 285  ##sys#update-errno */
t11=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* tcp.scm: 289  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k1101 in k1086 in k1083 in k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1114,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1112 in k1101 in k1086 in k1083 in k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 288  ##sys#string-append */
t2=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[12],t1);}

/* k1108 in k1101 in k1086 in k1083 in k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 286  ##sys#signal-hook */
t2=*((C_word*)lf[9]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[10],lf[8],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1092 in k1086 in k1083 in k1080 in k1077 in k1071 in a1183 in body219 in tcp-listen in k891 in k693 in k690 in k687 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 289  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* yield in k891 in k693 in k690 in k687 */
static void C_fcall f_959(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_959,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_965,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 220  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t2);}

/* a964 in yield in k891 in k693 in k690 in k687 */
static void C_ccall f_965(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_965,3,t0,t1,t2);}
t3=*((C_word*)lf[5]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_974,a[2]=t2,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_setslot(t3,C_fix(1),t4);
/* tcp.scm: 224  ##sys#schedule */
t6=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* a973 in a964 in yield in k891 in k693 in k690 in k687 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_974,2,t0,t1);}
/* tcp.scm: 223  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* ##net#gethostaddr in k891 in k693 in k690 in k687 */
static void C_fcall f_934(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_934,NULL,4,t1,t2,t3,t4);}
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_943,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=(C_word)C_i_foreign_string_argumentp(t3);
/* ##sys#make-c-string */
t8=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
t7=(C_word)C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub134(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,t7));}}

/* k941 in ##net#gethostaddr in k891 in k693 in k690 in k687 */
static void C_ccall f_943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub134(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1,t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[210] = {
{"toplevel:tcp_scm",(void*)C_tcp_toplevel},
{"f_689:tcp_scm",(void*)f_689},
{"f_692:tcp_scm",(void*)f_692},
{"f_695:tcp_scm",(void*)f_695},
{"f_893:tcp_scm",(void*)f_893},
{"f_1318:tcp_scm",(void*)f_1318},
{"f_2571:tcp_scm",(void*)f_2571},
{"f_1341:tcp_scm",(void*)f_1341},
{"f_2567:tcp_scm",(void*)f_2567},
{"f_1345:tcp_scm",(void*)f_1345},
{"f_2563:tcp_scm",(void*)f_2563},
{"f_1349:tcp_scm",(void*)f_1349},
{"f_2559:tcp_scm",(void*)f_2559},
{"f_1353:tcp_scm",(void*)f_1353},
{"f_2548:tcp_scm",(void*)f_2548},
{"f_2528:tcp_scm",(void*)f_2528},
{"f_2532:tcp_scm",(void*)f_2532},
{"f_2539:tcp_scm",(void*)f_2539},
{"f_2499:tcp_scm",(void*)f_2499},
{"f_2526:tcp_scm",(void*)f_2526},
{"f_2522:tcp_scm",(void*)f_2522},
{"f_2512:tcp_scm",(void*)f_2512},
{"f_2451:tcp_scm",(void*)f_2451},
{"f_2455:tcp_scm",(void*)f_2455},
{"f_2458:tcp_scm",(void*)f_2458},
{"f_2497:tcp_scm",(void*)f_2497},
{"f_2493:tcp_scm",(void*)f_2493},
{"f_2468:tcp_scm",(void*)f_2468},
{"f_2486:tcp_scm",(void*)f_2486},
{"f_2482:tcp_scm",(void*)f_2482},
{"f_2475:tcp_scm",(void*)f_2475},
{"f_2403:tcp_scm",(void*)f_2403},
{"f_2407:tcp_scm",(void*)f_2407},
{"f_2410:tcp_scm",(void*)f_2410},
{"f_2417:tcp_scm",(void*)f_2417},
{"f_2449:tcp_scm",(void*)f_2449},
{"f_2445:tcp_scm",(void*)f_2445},
{"f_2420:tcp_scm",(void*)f_2420},
{"f_2424:tcp_scm",(void*)f_2424},
{"f_2438:tcp_scm",(void*)f_2438},
{"f_2434:tcp_scm",(void*)f_2434},
{"f_2427:tcp_scm",(void*)f_2427},
{"f_2385:tcp_scm",(void*)f_2385},
{"f_2389:tcp_scm",(void*)f_2389},
{"f_2132:tcp_scm",(void*)f_2132},
{"f_2136:tcp_scm",(void*)f_2136},
{"f_2139:tcp_scm",(void*)f_2139},
{"f_2361:tcp_scm",(void*)f_2361},
{"f_2355:tcp_scm",(void*)f_2355},
{"f_989:tcp_scm",(void*)f_989},
{"f_1012:tcp_scm",(void*)f_1012},
{"f_1016:tcp_scm",(void*)f_1016},
{"f_900:tcp_scm",(void*)f_900},
{"f_904:tcp_scm",(void*)f_904},
{"f_1028:tcp_scm",(void*)f_1028},
{"f_1039:tcp_scm",(void*)f_1039},
{"f_1035:tcp_scm",(void*)f_1035},
{"f_1022:tcp_scm",(void*)f_1022},
{"f_2347:tcp_scm",(void*)f_2347},
{"f_2145:tcp_scm",(void*)f_2145},
{"f_2151:tcp_scm",(void*)f_2151},
{"f_2333:tcp_scm",(void*)f_2333},
{"f_2344:tcp_scm",(void*)f_2344},
{"f_2340:tcp_scm",(void*)f_2340},
{"f_2177:tcp_scm",(void*)f_2177},
{"f_2324:tcp_scm",(void*)f_2324},
{"f_2180:tcp_scm",(void*)f_2180},
{"f_2310:tcp_scm",(void*)f_2310},
{"f_2321:tcp_scm",(void*)f_2321},
{"f_2317:tcp_scm",(void*)f_2317},
{"f_2183:tcp_scm",(void*)f_2183},
{"f_2246:tcp_scm",(void*)f_2246},
{"f_2253:tcp_scm",(void*)f_2253},
{"f_2262:tcp_scm",(void*)f_2262},
{"f_2265:tcp_scm",(void*)f_2265},
{"f_2268:tcp_scm",(void*)f_2268},
{"f_2271:tcp_scm",(void*)f_2271},
{"f_2186:tcp_scm",(void*)f_2186},
{"f_2232:tcp_scm",(void*)f_2232},
{"f_2228:tcp_scm",(void*)f_2228},
{"f_2212:tcp_scm",(void*)f_2212},
{"f_2208:tcp_scm",(void*)f_2208},
{"f_2192:tcp_scm",(void*)f_2192},
{"f_2156:tcp_scm",(void*)f_2156},
{"f_2163:tcp_scm",(void*)f_2163},
{"f_2174:tcp_scm",(void*)f_2174},
{"f_2170:tcp_scm",(void*)f_2170},
{"f_2078:tcp_scm",(void*)f_2078},
{"f_2097:tcp_scm",(void*)f_2097},
{"f_2108:tcp_scm",(void*)f_2108},
{"f_2104:tcp_scm",(void*)f_2104},
{"f_2088:tcp_scm",(void*)f_2088},
{"f_1992:tcp_scm",(void*)f_1992},
{"f_2002:tcp_scm",(void*)f_2002},
{"f_2007:tcp_scm",(void*)f_2007},
{"f_2043:tcp_scm",(void*)f_2043},
{"f_2046:tcp_scm",(void*)f_2046},
{"f_2049:tcp_scm",(void*)f_2049},
{"f_2052:tcp_scm",(void*)f_2052},
{"f_2029:tcp_scm",(void*)f_2029},
{"f_2040:tcp_scm",(void*)f_2040},
{"f_2036:tcp_scm",(void*)f_2036},
{"f_2020:tcp_scm",(void*)f_2020},
{"f_1355:tcp_scm",(void*)f_1355},
{"f_1979:tcp_scm",(void*)f_1979},
{"f_1990:tcp_scm",(void*)f_1990},
{"f_1986:tcp_scm",(void*)f_1986},
{"f_1359:tcp_scm",(void*)f_1359},
{"f_1362:tcp_scm",(void*)f_1362},
{"f_1368:tcp_scm",(void*)f_1368},
{"f_1371:tcp_scm",(void*)f_1371},
{"f_1374:tcp_scm",(void*)f_1374},
{"f_1377:tcp_scm",(void*)f_1377},
{"f_1857:tcp_scm",(void*)f_1857},
{"f_1867:tcp_scm",(void*)f_1867},
{"f_1955:tcp_scm",(void*)f_1955},
{"f_1883:tcp_scm",(void*)f_1883},
{"f_1890:tcp_scm",(void*)f_1890},
{"f_1912:tcp_scm",(void*)f_1912},
{"f_1928:tcp_scm",(void*)f_1928},
{"f_1792:tcp_scm",(void*)f_1792},
{"f_1798:tcp_scm",(void*)f_1798},
{"f_1846:tcp_scm",(void*)f_1846},
{"f_1749:tcp_scm",(void*)f_1749},
{"f_1757:tcp_scm",(void*)f_1757},
{"f_1763:tcp_scm",(void*)f_1763},
{"f_1766:tcp_scm",(void*)f_1766},
{"f_1777:tcp_scm",(void*)f_1777},
{"f_1773:tcp_scm",(void*)f_1773},
{"f_1714:tcp_scm",(void*)f_1714},
{"f_1736:tcp_scm",(void*)f_1736},
{"f_1747:tcp_scm",(void*)f_1747},
{"f_1743:tcp_scm",(void*)f_1743},
{"f_1727:tcp_scm",(void*)f_1727},
{"f_1692:tcp_scm",(void*)f_1692},
{"f_1696:tcp_scm",(void*)f_1696},
{"f_1454:tcp_scm",(void*)f_1454},
{"f_1640:tcp_scm",(void*)f_1640},
{"f_1650:tcp_scm",(void*)f_1650},
{"f_1577:tcp_scm",(void*)f_1577},
{"f_1624:tcp_scm",(void*)f_1624},
{"f_1627:tcp_scm",(void*)f_1627},
{"f_1585:tcp_scm",(void*)f_1585},
{"f_1588:tcp_scm",(void*)f_1588},
{"f_1594:tcp_scm",(void*)f_1594},
{"f_1597:tcp_scm",(void*)f_1597},
{"f_1608:tcp_scm",(void*)f_1608},
{"f_1604:tcp_scm",(void*)f_1604},
{"f_1676:tcp_scm",(void*)f_1676},
{"f_1656:tcp_scm",(void*)f_1656},
{"f_1661:tcp_scm",(void*)f_1661},
{"f_1670:tcp_scm",(void*)f_1670},
{"f_1550:tcp_scm",(void*)f_1550},
{"f_1565:tcp_scm",(void*)f_1565},
{"f_1568:tcp_scm",(void*)f_1568},
{"f_1455:tcp_scm",(void*)f_1455},
{"f_1465:tcp_scm",(void*)f_1465},
{"f_1519:tcp_scm",(void*)f_1519},
{"f_1530:tcp_scm",(void*)f_1530},
{"f_1526:tcp_scm",(void*)f_1526},
{"f_1487:tcp_scm",(void*)f_1487},
{"f_1490:tcp_scm",(void*)f_1490},
{"f_1493:tcp_scm",(void*)f_1493},
{"f_1496:tcp_scm",(void*)f_1496},
{"f_1378:tcp_scm",(void*)f_1378},
{"f_1384:tcp_scm",(void*)f_1384},
{"f_1435:tcp_scm",(void*)f_1435},
{"f_1446:tcp_scm",(void*)f_1446},
{"f_1442:tcp_scm",(void*)f_1442},
{"f_1403:tcp_scm",(void*)f_1403},
{"f_1406:tcp_scm",(void*)f_1406},
{"f_1409:tcp_scm",(void*)f_1409},
{"f_1412:tcp_scm",(void*)f_1412},
{"f_1324:tcp_scm",(void*)f_1324},
{"f_1326:tcp_scm",(void*)f_1326},
{"f_1283:tcp_scm",(void*)f_1283},
{"f_1299:tcp_scm",(void*)f_1299},
{"f_1310:tcp_scm",(void*)f_1310},
{"f_1306:tcp_scm",(void*)f_1306},
{"f_1274:tcp_scm",(void*)f_1274},
{"f_1176:tcp_scm",(void*)f_1176},
{"f_1226:tcp_scm",(void*)f_1226},
{"f_1221:tcp_scm",(void*)f_1221},
{"f_1178:tcp_scm",(void*)f_1178},
{"f_1190:tcp_scm",(void*)f_1190},
{"f_1209:tcp_scm",(void*)f_1209},
{"f_1220:tcp_scm",(void*)f_1220},
{"f_1216:tcp_scm",(void*)f_1216},
{"f_1200:tcp_scm",(void*)f_1200},
{"f_1184:tcp_scm",(void*)f_1184},
{"f_1073:tcp_scm",(void*)f_1073},
{"f_1159:tcp_scm",(void*)f_1159},
{"f_1079:tcp_scm",(void*)f_1079},
{"f_1132:tcp_scm",(void*)f_1132},
{"f_1143:tcp_scm",(void*)f_1143},
{"f_1139:tcp_scm",(void*)f_1139},
{"f_1082:tcp_scm",(void*)f_1082},
{"f_1085:tcp_scm",(void*)f_1085},
{"f_1120:tcp_scm",(void*)f_1120},
{"f_1088:tcp_scm",(void*)f_1088},
{"f_1103:tcp_scm",(void*)f_1103},
{"f_1114:tcp_scm",(void*)f_1114},
{"f_1110:tcp_scm",(void*)f_1110},
{"f_1094:tcp_scm",(void*)f_1094},
{"f_959:tcp_scm",(void*)f_959},
{"f_965:tcp_scm",(void*)f_965},
{"f_974:tcp_scm",(void*)f_974},
{"f_934:tcp_scm",(void*)f_934},
{"f_943:tcp_scm",(void*)f_943},
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
