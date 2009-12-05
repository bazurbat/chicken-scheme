/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:26
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file srfi-4.c
   unit: srfi_4
*/

#include "chicken.h"

#define C_u8peek(b, i)         C_fix(((unsigned char *)C_data_pointer(b))[ C_unfix(i) ])
#define C_s8peek(b, i)         C_fix(((char *)C_data_pointer(b))[ C_unfix(i) ])
#define C_u16peek(b, i)        C_fix(((unsigned short *)C_data_pointer(b))[ C_unfix(i) ])
#define C_s16peek(b, i)        C_fix(((short *)C_data_pointer(b))[ C_unfix(i) ])
#ifdef C_SIXTY_FOUR
# define C_a_u32peek(ptr, d, b, i) C_fix(((C_u32 *)C_data_pointer(b))[ C_unfix(i) ])
# define C_a_s32peek(ptr, d, b, i) C_fix(((C_s32 *)C_data_pointer(b))[ C_unfix(i) ])
#else
# define C_a_u32peek(ptr, d, b, i) C_unsigned_int_to_num(ptr, ((C_u32 *)C_data_pointer(b))[ C_unfix(i) ])
# define C_a_s32peek(ptr, d, b, i) C_int_to_num(ptr, ((C_s32 *)C_data_pointer(b))[ C_unfix(i) ])
#endif
#define C_u8poke(b, i, x)      ((((unsigned char *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_s8poke(b, i, x)      ((((char *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_u16poke(b, i, x)     ((((unsigned short *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_s16poke(b, i, x)     ((((short *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_u32poke(b, i, x)     ((((C_u32 *)C_data_pointer(b))[ C_unfix(i) ] = C_num_to_unsigned_int(x)), C_SCHEME_UNDEFINED)
#define C_s32poke(b, i, x)     ((((C_s32 *)C_data_pointer(b))[ C_unfix(i) ] = C_num_to_int(x)), C_SCHEME_UNDEFINED)
#define C_f32poke(b, i, x)     ((((float *)C_data_pointer(b))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)
#define C_f64poke(b, i, x)     ((((double *)C_data_pointer(b))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)
#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[175];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,99,104,101,99,107,45,101,120,97,99,116,45,105,110,116,101,114,118,97,108,32,110,57,32,102,114,111,109,49,48,32,116,111,49,49,32,108,111,99,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,99,104,101,99,107,45,105,110,101,120,97,99,116,45,105,110,116,101,114,118,97,108,32,110,49,57,32,102,114,111,109,50,48,32,116,111,50,49,32,108,111,99,50,50,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,117,56,118,101,99,116,111,114,45,114,101,102,32,118,51,48,32,105,51,49,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,28),40,35,35,115,121,115,35,115,56,118,101,99,116,111,114,45,114,101,102,32,118,51,51,32,105,51,52,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,117,49,54,118,101,99,116,111,114,45,114,101,102,32,118,51,54,32,105,51,55,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,115,49,54,118,101,99,116,111,114,45,114,101,102,32,118,51,57,32,105,52,48,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,117,51,50,118,101,99,116,111,114,45,114,101,102,32,118,52,50,32,105,52,51,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,115,51,50,118,101,99,116,111,114,45,114,101,102,32,118,52,53,32,105,52,54,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,102,51,50,118,101,99,116,111,114,45,114,101,102,32,118,52,56,32,105,52,57,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,102,54,52,118,101,99,116,111,114,45,114,101,102,32,118,53,49,32,105,53,50,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,117,56,118,101,99,116,111,114,45,115,101,116,33,32,118,53,52,32,105,53,53,32,120,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,115,56,118,101,99,116,111,114,45,115,101,116,33,32,118,53,56,32,105,53,57,32,120,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,117,49,54,118,101,99,116,111,114,45,115,101,116,33,32,118,54,50,32,105,54,51,32,120,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,115,49,54,118,101,99,116,111,114,45,115,101,116,33,32,118,54,54,32,105,54,55,32,120,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,117,51,50,118,101,99,116,111,114,45,115,101,116,33,32,118,55,48,32,105,55,49,32,120,55,50,41,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,115,51,50,118,101,99,116,111,114,45,115,101,116,33,32,118,55,52,32,105,55,53,32,120,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,102,51,50,118,101,99,116,111,114,45,115,101,116,33,32,118,55,56,32,105,55,57,32,120,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,102,54,52,118,101,99,116,111,114,45,115,101,116,33,32,118,56,50,32,105,56,51,32,120,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,12),40,102,95,49,50,48,56,32,118,56,57,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,25),40,108,101,110,32,116,97,103,56,54,32,115,104,105,102,116,56,55,32,108,111,99,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,18),40,102,95,49,50,53,49,32,118,49,48,57,32,105,49,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,29),40,103,101,116,32,108,101,110,103,116,104,49,48,54,32,97,99,99,49,48,55,32,108,111,99,49,48,56,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,23),40,102,95,49,50,54,53,32,118,49,49,54,32,105,49,49,55,32,120,49,49,56,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,29),40,115,101,116,32,108,101,110,103,116,104,49,49,51,32,117,112,100,49,49,52,32,108,111,99,49,49,53,41,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,23),40,102,95,49,50,56,50,32,118,49,50,53,32,105,49,50,54,32,120,49,50,55,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,30),40,115,101,116,117,32,108,101,110,103,116,104,49,50,50,32,117,112,100,49,50,51,32,108,111,99,49,50,52,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,23),40,102,95,49,51,55,49,32,118,49,53,57,32,105,49,54,48,32,120,49,54,49,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,30),40,115,101,116,102,32,108,101,110,103,116,104,49,53,54,32,117,112,100,49,53,55,32,108,111,99,49,53,56,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,23),40,102,95,49,51,51,53,32,118,49,52,52,32,105,49,52,53,32,120,49,52,54,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,23),40,102,95,49,51,48,56,32,118,49,51,53,32,105,49,51,54,32,120,49,51,55,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,18),40,101,120,116,45,102,114,101,101,32,97,49,57,51,49,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,29),40,97,108,108,111,99,32,108,111,99,49,57,57,32,108,101,110,50,48,48,32,101,120,116,63,50,48,49,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,28),40,114,101,108,101,97,115,101,45,110,117,109,98,101,114,45,118,101,99,116,111,114,32,118,50,49,48,41,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,50,52,53,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,33),40,98,111,100,121,50,50,55,32,105,110,105,116,50,51,55,32,101,120,116,63,50,51,56,32,102,105,110,63,50,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,37),40,100,101,102,45,102,105,110,63,50,51,49,32,37,105,110,105,116,50,50,52,50,53,54,32,37,101,120,116,63,50,50,53,50,53,55,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,50,51,48,32,37,105,110,105,116,50,50,52,50,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,50,50,57,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,117,56,118,101,99,116,111,114,32,108,101,110,50,49,57,32,46,32,116,109,112,50,49,56,50,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,51,48,48,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,50,56,50,32,105,110,105,116,50,57,50,32,101,120,116,63,50,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,102,105,110,50,56,54,32,37,105,110,105,116,50,55,57,51,49,49,32,37,101,120,116,63,50,56,48,51,49,50,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,50,56,53,32,37,105,110,105,116,50,55,57,51,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,50,56,52,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,34),40,109,97,107,101,45,115,56,118,101,99,116,111,114,32,108,101,110,50,55,52,32,46,32,116,109,112,50,55,51,50,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,51,53,52,41,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,51,51,54,32,105,110,105,116,51,52,54,32,101,120,116,63,51,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,102,105,110,51,52,48,32,37,105,110,105,116,51,51,51,51,54,53,32,37,101,120,116,63,51,51,52,51,54,54,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,51,51,57,32,37,105,110,105,116,51,51,51,51,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,51,51,56,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,49,54,118,101,99,116,111,114,32,108,101,110,51,50,56,32,46,32,116,109,112,51,50,55,51,50,57,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,48,56,41,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,51,57,48,32,105,110,105,116,52,48,48,32,101,120,116,63,52,48,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,102,105,110,51,57,52,32,37,105,110,105,116,51,56,55,52,49,57,32,37,101,120,116,63,51,56,56,52,50,48,41,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,51,57,51,32,37,105,110,105,116,51,56,55,52,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,51,57,50,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,49,54,118,101,99,116,111,114,32,108,101,110,51,56,50,32,46,32,116,109,112,51,56,49,51,56,51,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,54,50,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,52,52,52,32,105,110,105,116,52,53,52,32,101,120,116,63,52,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,102,105,110,52,52,56,32,37,105,110,105,116,52,52,49,52,55,51,32,37,101,120,116,63,52,52,50,52,55,52,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,52,52,55,32,37,105,110,105,116,52,52,49,52,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,52,52,54,41,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,117,51,50,118,101,99,116,111,114,32,108,101,110,52,51,54,32,46,32,116,109,112,52,51,53,52,51,55,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,54,41,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,52,57,56,32,105,110,105,116,53,48,56,32,101,120,116,63,53,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,102,105,110,53,48,50,32,37,105,110,105,116,52,57,53,53,50,55,32,37,101,120,116,63,52,57,54,53,50,56,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,53,48,49,32,37,105,110,105,116,52,57,53,53,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,53,48,48,41,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,115,51,50,118,101,99,116,111,114,32,108,101,110,52,57,48,32,46,32,116,109,112,52,56,57,52,57,49,41,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,55,50,41,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,53,53,50,32,105,110,105,116,53,54,50,32,101,120,116,63,53,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,102,105,110,53,53,54,32,37,105,110,105,116,53,52,57,53,56,52,32,37,101,120,116,63,53,53,48,53,56,53,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,53,53,53,32,37,105,110,105,116,53,52,57,53,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,53,53,52,41,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,51,50,118,101,99,116,111,114,32,108,101,110,53,52,52,32,46,32,116,109,112,53,52,51,53,52,53,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,50,57,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,25),40,98,111,100,121,54,48,57,32,105,110,105,116,54,49,57,32,101,120,116,63,54,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,102,105,110,54,49,51,32,37,105,110,105,116,54,48,54,54,52,49,32,37,101,120,116,63,54,48,55,54,52,50,41,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,101,120,116,63,54,49,50,32,37,105,110,105,116,54,48,54,54,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,105,110,105,116,54,49,49,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,102,54,52,118,101,99,116,111,114,32,108,101,110,54,48,49,32,46,32,116,109,112,54,48,48,54,48,50,41,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,54,54,56,32,112,54,55,50,32,105,54,55,51,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,15),40,102,95,50,52,56,51,32,108,115,116,54,54,52,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,28),40,105,110,105,116,32,109,97,107,101,54,54,49,32,115,101,116,54,54,50,32,108,111,99,54,54,51,41,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,18),40,117,56,118,101,99,116,111,114,32,46,32,120,115,54,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,18),40,115,56,118,101,99,116,111,114,32,46,32,120,115,54,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,19),40,117,49,54,118,101,99,116,111,114,32,46,32,120,115,54,57,50,41,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,19),40,115,49,54,118,101,99,116,111,114,32,46,32,120,115,54,57,52,41,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,19),40,117,51,50,118,101,99,116,111,114,32,46,32,120,115,54,57,54,41,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,19),40,115,51,50,118,101,99,116,111,114,32,46,32,120,115,54,57,56,41,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,19),40,102,51,50,118,101,99,116,111,114,32,46,32,120,115,55,48,48,41,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,19),40,102,54,52,118,101,99,116,111,114,32,46,32,120,115,55,48,50,41,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,49,48,41,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,13),40,102,95,50,54,48,49,32,118,55,48,55,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,23),40,105,110,105,116,32,108,101,110,103,116,104,55,48,53,32,114,101,102,55,48,54,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,16),40,117,56,118,101,99,116,111,114,63,32,120,55,50,49,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,16),40,115,56,118,101,99,116,111,114,63,32,120,55,50,51,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,17),40,117,49,54,118,101,99,116,111,114,63,32,120,55,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,17),40,115,49,54,118,101,99,116,111,114,63,32,120,55,50,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,17),40,117,51,50,118,101,99,116,111,114,63,32,120,55,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,17),40,115,51,50,118,101,99,116,111,114,63,32,120,55,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,17),40,102,51,50,118,101,99,116,111,114,63,32,120,55,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,17),40,102,54,52,118,101,99,116,111,114,63,32,120,55,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,13),40,102,95,50,55,50,55,32,118,55,52,54,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,25),40,112,97,99,107,45,99,111,112,121,32,116,97,103,55,52,52,32,108,111,99,55,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,15),40,102,95,50,55,52,53,32,115,116,114,55,53,52,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,28),40,117,110,112,97,99,107,32,116,97,103,55,53,49,32,115,122,55,53,50,32,108,111,99,55,53,51,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,15),40,102,95,50,55,55,52,32,115,116,114,55,54,53,41,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,33),40,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,55,54,50,32,115,122,55,54,51,32,108,111,99,55,54,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,16),40,102,52,48,57,49,32,118,55,52,50,52,48,57,48,41};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,16),40,102,52,48,56,52,32,118,55,52,50,52,48,56,51,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,16),40,102,52,48,55,55,32,118,55,52,50,52,48,55,54,41};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,16),40,102,52,48,55,48,32,118,55,52,50,52,48,54,57,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,16),40,102,52,48,54,51,32,118,55,52,50,52,48,54,50,41};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,16),40,102,52,48,53,54,32,118,55,52,50,52,48,53,53,41};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,16),40,102,52,48,52,57,32,118,55,52,50,52,48,52,56,41};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,16),40,102,52,48,52,50,32,118,55,52,50,52,48,52,49,41};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,11),40,103,56,51,51,32,99,56,51,53,41,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,56,49,51,32,112,111,114,116,56,49,52,41,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,48),40,35,35,115,121,115,35,117,115,101,114,45,112,114,105,110,116,45,104,111,111,107,32,120,56,51,57,32,114,101,97,100,97,98,108,101,56,52,48,32,112,111,114,116,56,52,49,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,48),40,115,117,98,118,101,99,116,111,114,32,118,56,53,56,32,116,56,53,57,32,101,115,56,54,48,32,102,114,111,109,56,54,49,32,116,111,56,54,50,32,108,111,99,56,54,51,41};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,32),40,115,117,98,117,56,118,101,99,116,111,114,32,118,56,55,56,32,102,114,111,109,56,55,57,32,116,111,56,56,48,41};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,49,54,118,101,99,116,111,114,32,118,56,56,50,32,102,114,111,109,56,56,51,32,116,111,56,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,33),40,115,117,98,117,51,50,118,101,99,116,111,114,32,118,56,56,54,32,102,114,111,109,56,56,55,32,116,111,56,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,32),40,115,117,98,115,56,118,101,99,116,111,114,32,118,56,57,48,32,102,114,111,109,56,57,49,32,116,111,56,57,50,41};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,33),40,115,117,98,115,49,54,118,101,99,116,111,114,32,118,56,57,52,32,102,114,111,109,56,57,53,32,116,111,56,57,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,33),40,115,117,98,115,51,50,118,101,99,116,111,114,32,118,56,57,56,32,102,114,111,109,56,57,57,32,116,111,57,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,33),40,115,117,98,102,51,50,118,101,99,116,111,114,32,118,57,48,50,32,102,114,111,109,57,48,51,32,116,111,57,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,33),40,115,117,98,102,54,52,118,101,99,116,111,114,32,118,57,48,54,32,102,114,111,109,57,48,55,32,116,111,57,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,51,56,32,105,57,52,50,41};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,31),40,98,111,100,121,57,50,52,32,112,111,114,116,57,51,52,32,102,114,111,109,57,51,53,32,116,111,57,51,54,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,35),40,100,101,102,45,116,111,57,50,56,32,37,112,111,114,116,57,50,49,57,52,56,32,37,102,114,111,109,57,50,50,57,52,57,41,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,102,114,111,109,57,50,55,32,37,112,111,114,116,57,50,49,57,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,112,111,114,116,57,50,54,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,33),40,119,114,105,116,101,45,117,56,118,101,99,116,111,114,32,118,57,49,54,32,46,32,116,109,112,57,49,53,57,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,26),40,98,111,100,121,57,55,52,32,112,111,114,116,57,56,51,32,115,116,97,114,116,57,56,52,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,26),40,100,101,102,45,115,116,97,114,116,57,55,55,32,37,112,111,114,116,57,55,50,57,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,112,111,114,116,57,55,54,41,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,41),40,114,101,97,100,45,117,56,118,101,99,116,111,114,33,32,110,57,54,54,32,100,101,115,116,57,54,55,32,46,32,116,109,112,57,54,53,57,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,20),40,119,114,97,112,32,115,116,114,49,48,48,53,32,110,49,48,48,54,41,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,49,48,50,50,32,110,49,48,51,49,32,112,49,48,51,50,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,112,49,48,50,53,32,37,110,49,48,50,48,49,48,53,52,41,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,11),40,100,101,102,45,110,49,48,50,52,41,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,29),40,114,101,97,100,45,117,56,118,101,99,116,111,114,32,46,32,116,109,112,49,48,49,53,49,48,49,54,41,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from ext-free in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub194(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub194(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

/* from k1459 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub189(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub189(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int bytes=(int )C_unfix(C_a0);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));if(buf == NULL) return(C_SCHEME_FALSE);C_block_header(buf) = C_make_header(C_BYTEVECTOR_TYPE, bytes);return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(C_srfi_4_toplevel)
C_externexport void C_ccall C_srfi_4_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1227)
static void C_ccall f_1227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1231)
static void C_ccall f_1231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1243)
static void C_ccall f_1243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1455)
static void C_ccall f_1455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2898)
static void C_ccall f_2898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3542)
static void C_fcall f_3542(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3537)
static void C_fcall f_3537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3475)
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3479)
static void C_ccall f_3479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_fcall f_3511(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3464)
static void C_fcall f_3464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3415)
static void C_fcall f_3415(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_fcall f_3410(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3365)
static void C_fcall f_3365(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3300)
static void C_fcall f_3300(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3295)
static void C_fcall f_3295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3286)
static void C_fcall f_3286(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3249)
static void C_fcall f_3249(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_fcall f_3264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3156)
static void C_fcall f_3156(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_fcall f_2964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f4042)
static void C_ccall f4042(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4049)
static void C_ccall f4049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4056)
static void C_ccall f4056(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4063)
static void C_ccall f4063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4070)
static void C_ccall f4070(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4077)
static void C_ccall f4077(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4084)
static void C_ccall f4084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f4091)
static void C_ccall f4091(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2772)
static void C_fcall f_2772(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2725)
static void C_fcall f_2725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2599)
static void C_fcall f_2599(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2610)
static void C_fcall f_2610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2481)
static void C_fcall f_2481(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_fcall f_2498(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2418)
static void C_fcall f_2418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_fcall f_2413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2408)
static void C_fcall f_2408(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2356)
static void C_fcall f_2356(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2378)
static void C_fcall f_2378(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static C_word C_fcall f_2383(C_word t0,C_word t1);
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2291)
static void C_fcall f_2291(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_fcall f_2286(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2281)
static void C_fcall f_2281(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2229)
static void C_fcall f_2229(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static void C_fcall f_2251(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static C_word C_fcall f_2256(C_word t0,C_word t1);
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2164)
static void C_fcall f_2164(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_fcall f_2159(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2154)
static void C_fcall f_2154(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2109)
static void C_fcall f_2109(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static C_word C_fcall f_2133(C_word t0,C_word t1);
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2044)
static void C_fcall f_2044(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_fcall f_2039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2034)
static void C_fcall f_2034(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1989)
static void C_fcall f_1989(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2013)
static C_word C_fcall f_2013(C_word t0,C_word t1);
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1924)
static void C_fcall f_1924(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_fcall f_1919(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1914)
static void C_fcall f_1914(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1869)
static void C_fcall f_1869(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static C_word C_fcall f_1893(C_word t0,C_word t1);
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1804)
static void C_fcall f_1804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1799)
static void C_fcall f_1799(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1794)
static void C_fcall f_1794(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1749)
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static C_word C_fcall f_1773(C_word t0,C_word t1);
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1684)
static void C_fcall f_1684(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_fcall f_1679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1674)
static void C_fcall f_1674(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1629)
static void C_fcall f_1629(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1653)
static C_word C_fcall f_1653(C_word t0,C_word t1);
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1564)
static void C_fcall f_1564(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1559)
static void C_fcall f_1559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1554)
static void C_fcall f_1554(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1509)
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1533)
static C_word C_fcall f_1533(C_word t0,C_word t1);
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1489)
static void C_fcall f_1489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1464)
static void C_fcall f_1464(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1462)
static void C_ccall f_1462(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1312)
static void C_ccall f_1312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1369)
static void C_fcall f_1369(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1381)
static void C_ccall f_1381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1280)
static void C_fcall f_1280(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_fcall f_1263(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1249)
static void C_fcall f_1249(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1206)
static void C_fcall f_1206(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1194)
static void C_ccall f_1194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1188)
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1170)
static void C_ccall f_1170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1122)
static void C_ccall f_1122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;

C_noret_decl(trf_3542)
static void C_fcall trf_3542(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3542(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3542(t0,t1);}

C_noret_decl(trf_3537)
static void C_fcall trf_3537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3537(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3537(t0,t1,t2);}

C_noret_decl(trf_3475)
static void C_fcall trf_3475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3475(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3475(t0,t1,t2,t3);}

C_noret_decl(trf_3511)
static void C_fcall trf_3511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3511(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3511(t0,t1);}

C_noret_decl(trf_3464)
static void C_fcall trf_3464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3464(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3464(t0,t1,t2);}

C_noret_decl(trf_3415)
static void C_fcall trf_3415(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3415(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3415(t0,t1);}

C_noret_decl(trf_3410)
static void C_fcall trf_3410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3410(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3410(t0,t1,t2);}

C_noret_decl(trf_3365)
static void C_fcall trf_3365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3365(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3365(t0,t1,t2,t3);}

C_noret_decl(trf_3300)
static void C_fcall trf_3300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3300(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3300(t0,t1);}

C_noret_decl(trf_3295)
static void C_fcall trf_3295(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3295(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3295(t0,t1,t2);}

C_noret_decl(trf_3286)
static void C_fcall trf_3286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3286(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3286(t0,t1,t2,t3);}

C_noret_decl(trf_3249)
static void C_fcall trf_3249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3249(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3249(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3264)
static void C_fcall trf_3264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3264(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3264(t0,t1,t2);}

C_noret_decl(trf_3156)
static void C_fcall trf_3156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3156(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3156(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2964)
static void C_fcall trf_2964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2964(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2964(t0,t1,t2);}

C_noret_decl(trf_2772)
static void C_fcall trf_2772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2772(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2772(t0,t1,t2,t3);}

C_noret_decl(trf_2743)
static void C_fcall trf_2743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2743(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2743(t0,t1,t2,t3);}

C_noret_decl(trf_2725)
static void C_fcall trf_2725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2725(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2725(t0,t1,t2);}

C_noret_decl(trf_2599)
static void C_fcall trf_2599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2599(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2599(t0,t1,t2);}

C_noret_decl(trf_2610)
static void C_fcall trf_2610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2610(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2610(t0,t1,t2);}

C_noret_decl(trf_2481)
static void C_fcall trf_2481(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2481(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2481(t0,t1,t2,t3);}

C_noret_decl(trf_2498)
static void C_fcall trf_2498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2498(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2498(t0,t1,t2,t3);}

C_noret_decl(trf_2418)
static void C_fcall trf_2418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2418(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2418(t0,t1);}

C_noret_decl(trf_2413)
static void C_fcall trf_2413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2413(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2413(t0,t1,t2);}

C_noret_decl(trf_2408)
static void C_fcall trf_2408(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2408(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2408(t0,t1,t2,t3);}

C_noret_decl(trf_2356)
static void C_fcall trf_2356(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2356(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2356(t0,t1,t2,t3);}

C_noret_decl(trf_2378)
static void C_fcall trf_2378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2378(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2378(t0,t1);}

C_noret_decl(trf_2291)
static void C_fcall trf_2291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2291(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2291(t0,t1);}

C_noret_decl(trf_2286)
static void C_fcall trf_2286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2286(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2286(t0,t1,t2);}

C_noret_decl(trf_2281)
static void C_fcall trf_2281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2281(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2281(t0,t1,t2,t3);}

C_noret_decl(trf_2229)
static void C_fcall trf_2229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2229(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2229(t0,t1,t2,t3);}

C_noret_decl(trf_2251)
static void C_fcall trf_2251(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2251(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2251(t0,t1);}

C_noret_decl(trf_2164)
static void C_fcall trf_2164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2164(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2164(t0,t1);}

C_noret_decl(trf_2159)
static void C_fcall trf_2159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2159(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2159(t0,t1,t2);}

C_noret_decl(trf_2154)
static void C_fcall trf_2154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2154(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2154(t0,t1,t2,t3);}

C_noret_decl(trf_2109)
static void C_fcall trf_2109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2109(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2109(t0,t1,t2,t3);}

C_noret_decl(trf_2044)
static void C_fcall trf_2044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2044(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2044(t0,t1);}

C_noret_decl(trf_2039)
static void C_fcall trf_2039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2039(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2039(t0,t1,t2);}

C_noret_decl(trf_2034)
static void C_fcall trf_2034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2034(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2034(t0,t1,t2,t3);}

C_noret_decl(trf_1989)
static void C_fcall trf_1989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1989(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1989(t0,t1,t2,t3);}

C_noret_decl(trf_1924)
static void C_fcall trf_1924(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1924(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1924(t0,t1);}

C_noret_decl(trf_1919)
static void C_fcall trf_1919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1919(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1919(t0,t1,t2);}

C_noret_decl(trf_1914)
static void C_fcall trf_1914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1914(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1914(t0,t1,t2,t3);}

C_noret_decl(trf_1869)
static void C_fcall trf_1869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1869(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1869(t0,t1,t2,t3);}

C_noret_decl(trf_1804)
static void C_fcall trf_1804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1804(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1804(t0,t1);}

C_noret_decl(trf_1799)
static void C_fcall trf_1799(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1799(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1799(t0,t1,t2);}

C_noret_decl(trf_1794)
static void C_fcall trf_1794(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1794(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1794(t0,t1,t2,t3);}

C_noret_decl(trf_1749)
static void C_fcall trf_1749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1749(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1749(t0,t1,t2,t3);}

C_noret_decl(trf_1684)
static void C_fcall trf_1684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1684(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1684(t0,t1);}

C_noret_decl(trf_1679)
static void C_fcall trf_1679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1679(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1679(t0,t1,t2);}

C_noret_decl(trf_1674)
static void C_fcall trf_1674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1674(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1674(t0,t1,t2,t3);}

C_noret_decl(trf_1629)
static void C_fcall trf_1629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1629(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1629(t0,t1,t2,t3);}

C_noret_decl(trf_1564)
static void C_fcall trf_1564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1564(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1564(t0,t1);}

C_noret_decl(trf_1559)
static void C_fcall trf_1559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1559(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1559(t0,t1,t2);}

C_noret_decl(trf_1554)
static void C_fcall trf_1554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1554(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1554(t0,t1,t2,t3);}

C_noret_decl(trf_1509)
static void C_fcall trf_1509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1509(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1509(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1489)
static void C_fcall trf_1489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1489(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1489(t0,t1);}

C_noret_decl(trf_1464)
static void C_fcall trf_1464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1464(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1464(t0,t1,t2,t3);}

C_noret_decl(trf_1369)
static void C_fcall trf_1369(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1369(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1369(t0,t1,t2,t3);}

C_noret_decl(trf_1280)
static void C_fcall trf_1280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1280(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1280(t0,t1,t2,t3);}

C_noret_decl(trf_1263)
static void C_fcall trf_1263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1263(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1263(t0,t1,t2,t3);}

C_noret_decl(trf_1249)
static void C_fcall trf_1249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1249(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1249(t0,t1,t2,t3);}

C_noret_decl(trf_1206)
static void C_fcall trf_1206(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1206(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1206(t0,t1,t2,t3);}

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

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

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
C_srfi_4_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_4_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_4_toplevel"));
C_check_nursery_minimum(61);
if(!C_demand(61)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1544)){
C_save(t1);
C_rereclaim2(1544*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(61);
C_initialize_lf(lf,175);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],24,"\003syscheck-exact-interval");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_decode_literal(C_heaptop,"\376B\000\000&numeric value is not in expected range");
lf[5]=C_h_intern(&lf[5],26,"\003syscheck-inexact-interval");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000&numeric value is not in expected range");
lf[23]=C_h_intern(&lf[23],15,"u8vector-length");
lf[24]=C_h_intern(&lf[24],15,"s8vector-length");
lf[25]=C_h_intern(&lf[25],16,"u16vector-length");
lf[26]=C_h_intern(&lf[26],16,"s16vector-length");
lf[27]=C_h_intern(&lf[27],16,"u32vector-length");
lf[28]=C_h_intern(&lf[28],16,"s32vector-length");
lf[29]=C_h_intern(&lf[29],16,"f32vector-length");
lf[30]=C_h_intern(&lf[30],16,"f64vector-length");
lf[31]=C_h_intern(&lf[31],15,"\003syscheck-range");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[33]=C_h_intern(&lf[33],13,"u8vector-set!");
lf[34]=C_h_intern(&lf[34],13,"s8vector-set!");
lf[35]=C_h_intern(&lf[35],14,"u16vector-set!");
lf[36]=C_h_intern(&lf[36],14,"s16vector-set!");
lf[37]=C_h_intern(&lf[37],14,"u32vector-set!");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\034argument may not be negative");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[40]=C_h_intern(&lf[40],14,"s32vector-set!");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\036argument exceeds integer range");
lf[42]=C_h_intern(&lf[42],14,"f32vector-set!");
lf[43]=C_h_intern(&lf[43],14,"f64vector-set!");
lf[44]=C_h_intern(&lf[44],12,"u8vector-ref");
lf[45]=C_h_intern(&lf[45],12,"s8vector-ref");
lf[46]=C_h_intern(&lf[46],13,"u16vector-ref");
lf[47]=C_h_intern(&lf[47],13,"s16vector-ref");
lf[48]=C_h_intern(&lf[48],13,"u32vector-ref");
lf[49]=C_h_intern(&lf[49],13,"s32vector-ref");
lf[50]=C_h_intern(&lf[50],13,"f32vector-ref");
lf[51]=C_h_intern(&lf[51],13,"f64vector-ref");
lf[52]=C_h_intern(&lf[52],14,"set-finalizer!");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000:not enough memory - cannot allocate external number vector");
lf[54]=C_h_intern(&lf[54],19,"\003sysallocate-vector");
lf[55]=C_h_intern(&lf[55],21,"release-number-vector");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\047bad argument type - not a number vector");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376"
"\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016");
lf[58]=C_h_intern(&lf[58],13,"make-u8vector");
lf[59]=C_h_intern(&lf[59],8,"u8vector");
lf[60]=C_h_intern(&lf[60],13,"make-s8vector");
lf[61]=C_h_intern(&lf[61],8,"s8vector");
lf[62]=C_h_intern(&lf[62],4,"fin\077");
lf[63]=C_h_intern(&lf[63],14,"make-u16vector");
lf[64]=C_h_intern(&lf[64],9,"u16vector");
lf[65]=C_h_intern(&lf[65],14,"make-s16vector");
lf[66]=C_h_intern(&lf[66],9,"s16vector");
lf[67]=C_h_intern(&lf[67],14,"make-u32vector");
lf[68]=C_h_intern(&lf[68],9,"u32vector");
lf[69]=C_h_intern(&lf[69],14,"make-s32vector");
lf[70]=C_h_intern(&lf[70],9,"s32vector");
lf[71]=C_h_intern(&lf[71],14,"make-f32vector");
lf[72]=C_h_intern(&lf[72],9,"f32vector");
lf[73]=C_h_intern(&lf[73],14,"make-f64vector");
lf[74]=C_h_intern(&lf[74],9,"f64vector");
lf[75]=C_h_intern(&lf[75],27,"\003syserror-not-a-proper-list");
lf[76]=C_h_intern(&lf[76],14,"list->u8vector");
lf[77]=C_h_intern(&lf[77],14,"list->s8vector");
lf[78]=C_h_intern(&lf[78],15,"list->u16vector");
lf[79]=C_h_intern(&lf[79],15,"list->s16vector");
lf[80]=C_h_intern(&lf[80],15,"list->u32vector");
lf[81]=C_h_intern(&lf[81],15,"list->s32vector");
lf[82]=C_h_intern(&lf[82],15,"list->f32vector");
lf[83]=C_h_intern(&lf[83],15,"list->f64vector");
lf[84]=C_h_intern(&lf[84],14,"u8vector->list");
lf[85]=C_h_intern(&lf[85],14,"s8vector->list");
lf[86]=C_h_intern(&lf[86],15,"u16vector->list");
lf[87]=C_h_intern(&lf[87],15,"s16vector->list");
lf[88]=C_h_intern(&lf[88],15,"u32vector->list");
lf[89]=C_h_intern(&lf[89],15,"s32vector->list");
lf[90]=C_h_intern(&lf[90],15,"f32vector->list");
lf[91]=C_h_intern(&lf[91],15,"f64vector->list");
lf[92]=C_h_intern(&lf[92],9,"u8vector\077");
lf[93]=C_h_intern(&lf[93],9,"s8vector\077");
lf[94]=C_h_intern(&lf[94],10,"u16vector\077");
lf[95]=C_h_intern(&lf[95],10,"s16vector\077");
lf[96]=C_h_intern(&lf[96],10,"u32vector\077");
lf[97]=C_h_intern(&lf[97],10,"s32vector\077");
lf[98]=C_h_intern(&lf[98],10,"f32vector\077");
lf[99]=C_h_intern(&lf[99],10,"f64vector\077");
lf[100]=C_h_intern(&lf[100],13,"\003sysmake-blob");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000+blob does not have correct size for packing");
lf[103]=C_h_intern(&lf[103],21,"u8vector->blob/shared");
lf[104]=C_h_intern(&lf[104],21,"s8vector->blob/shared");
lf[105]=C_h_intern(&lf[105],22,"u16vector->blob/shared");
lf[106]=C_h_intern(&lf[106],22,"s16vector->blob/shared");
lf[107]=C_h_intern(&lf[107],22,"u32vector->blob/shared");
lf[108]=C_h_intern(&lf[108],22,"s32vector->blob/shared");
lf[109]=C_h_intern(&lf[109],22,"f32vector->blob/shared");
lf[110]=C_h_intern(&lf[110],22,"f64vector->blob/shared");
lf[111]=C_h_intern(&lf[111],14,"u8vector->blob");
lf[112]=C_h_intern(&lf[112],14,"s8vector->blob");
lf[113]=C_h_intern(&lf[113],15,"u16vector->blob");
lf[114]=C_h_intern(&lf[114],15,"s16vector->blob");
lf[115]=C_h_intern(&lf[115],15,"u32vector->blob");
lf[116]=C_h_intern(&lf[116],15,"s32vector->blob");
lf[117]=C_h_intern(&lf[117],15,"f32vector->blob");
lf[118]=C_h_intern(&lf[118],15,"f64vector->blob");
lf[119]=C_h_intern(&lf[119],21,"blob->u8vector/shared");
lf[120]=C_h_intern(&lf[120],21,"blob->s8vector/shared");
lf[121]=C_h_intern(&lf[121],22,"blob->u16vector/shared");
lf[122]=C_h_intern(&lf[122],22,"blob->s16vector/shared");
lf[123]=C_h_intern(&lf[123],22,"blob->u32vector/shared");
lf[124]=C_h_intern(&lf[124],22,"blob->s32vector/shared");
lf[125]=C_h_intern(&lf[125],22,"blob->f32vector/shared");
lf[126]=C_h_intern(&lf[126],22,"blob->f64vector/shared");
lf[127]=C_h_intern(&lf[127],14,"blob->u8vector");
lf[128]=C_h_intern(&lf[128],14,"blob->s8vector");
lf[129]=C_h_intern(&lf[129],15,"blob->u16vector");
lf[130]=C_h_intern(&lf[130],15,"blob->s16vector");
lf[131]=C_h_intern(&lf[131],15,"blob->u32vector");
lf[132]=C_h_intern(&lf[132],15,"blob->s32vector");
lf[133]=C_h_intern(&lf[133],15,"blob->f32vector");
lf[134]=C_h_intern(&lf[134],15,"blob->f64vector");
lf[135]=C_h_intern(&lf[135],18,"\003sysuser-read-hook");
lf[136]=C_h_intern(&lf[136],4,"read");
lf[137]=C_h_intern(&lf[137],2,"u8");
lf[138]=C_h_intern(&lf[138],2,"s8");
lf[139]=C_h_intern(&lf[139],3,"u16");
lf[140]=C_h_intern(&lf[140],3,"s16");
lf[141]=C_h_intern(&lf[141],3,"u32");
lf[142]=C_h_intern(&lf[142],3,"s32");
lf[143]=C_h_intern(&lf[143],3,"f32");
lf[144]=C_h_intern(&lf[144],3,"f64");
lf[145]=C_h_intern(&lf[145],1,"f");
lf[146]=C_h_intern(&lf[146],1,"F");
lf[147]=C_h_intern(&lf[147],14,"\003sysread-error");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal bytevector syntax");
lf[149]=C_h_intern(&lf[149],19,"\003sysuser-print-hook");
lf[150]=C_h_intern(&lf[150],9,"\003sysprint");
lf[152]=C_h_intern(&lf[152],11,"subu8vector");
lf[153]=C_h_intern(&lf[153],12,"subu16vector");
lf[154]=C_h_intern(&lf[154],12,"subu32vector");
lf[155]=C_h_intern(&lf[155],11,"subs8vector");
lf[156]=C_h_intern(&lf[156],12,"subs16vector");
lf[157]=C_h_intern(&lf[157],12,"subs32vector");
lf[158]=C_h_intern(&lf[158],12,"subf32vector");
lf[159]=C_h_intern(&lf[159],12,"subf64vector");
lf[160]=C_h_intern(&lf[160],14,"write-u8vector");
lf[161]=C_h_intern(&lf[161],16,"\003syswrite-char-0");
lf[162]=C_h_intern(&lf[162],14,"\003syscheck-port");
lf[163]=C_h_intern(&lf[163],19,"\003sysstandard-output");
lf[164]=C_h_intern(&lf[164],14,"read-u8vector!");
lf[165]=C_h_intern(&lf[165],16,"\003sysread-string!");
lf[166]=C_h_intern(&lf[166],18,"\003sysstandard-input");
lf[167]=C_h_intern(&lf[167],18,"open-output-string");
lf[168]=C_h_intern(&lf[168],17,"get-output-string");
lf[169]=C_h_intern(&lf[169],13,"read-u8vector");
lf[170]=C_h_intern(&lf[170],19,"\003syswrite-char/port");
lf[171]=C_h_intern(&lf[171],15,"\003sysread-char-0");
lf[172]=C_h_intern(&lf[172],17,"register-feature!");
lf[173]=C_h_intern(&lf[173],6,"srfi-4");
lf[174]=C_h_intern(&lf[174],18,"getter-with-setter");
C_register_lf2(lf,175,create_ptable());
t2=C_mutate(&lf[0] /* (set! c267 ...) */,lf[1]);
t3=C_mutate((C_word*)lf[2]+1 /* (set! check-exact-interval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1122,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! check-inexact-interval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1137,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[7] /* (set! u8vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1158,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[8] /* (set! s8vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1161,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[9] /* (set! u16vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1164,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[10] /* (set! s16vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1167,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[11] /* (set! u32vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1170,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[12] /* (set! s32vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[13] /* (set! f32vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1176,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[14] /* (set! f64vector-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1179,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[15] /* (set! u8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1182,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate(&lf[16] /* (set! s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1185,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[17] /* (set! u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1188,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[18] /* (set! s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1191,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[19] /* (set! u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1194,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[20] /* (set! s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1197,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[21] /* (set! f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1200,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[22] /* (set! f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1206,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1219,a[2]=t21,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 141  len */
f_1206(t22,lf[59],C_SCHEME_FALSE,lf[23]);}

/* k1217 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1219,2,t0,t1);}
t2=C_mutate((C_word*)lf[23]+1 /* (set! u8vector-length ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 142  len */
f_1206(t3,lf[61],C_SCHEME_FALSE,lf[24]);}

/* k1221 in k1217 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1223,2,t0,t1);}
t2=C_mutate((C_word*)lf[24]+1 /* (set! s8vector-length ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1227,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 143  len */
f_1206(t3,lf[64],C_fix(1),lf[25]);}

/* k1225 in k1221 in k1217 */
static void C_ccall f_1227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1227,2,t0,t1);}
t2=C_mutate((C_word*)lf[25]+1 /* (set! u16vector-length ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 144  len */
f_1206(t3,lf[66],C_fix(1),lf[26]);}

/* k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1231,2,t0,t1);}
t2=C_mutate((C_word*)lf[26]+1 /* (set! s16vector-length ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 145  len */
f_1206(t3,lf[68],C_fix(2),lf[27]);}

/* k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1235,2,t0,t1);}
t2=C_mutate((C_word*)lf[27]+1 /* (set! u32vector-length ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 146  len */
f_1206(t3,lf[70],C_fix(2),lf[28]);}

/* k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1239,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1 /* (set! s32vector-length ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 147  len */
f_1206(t3,lf[72],C_fix(2),lf[29]);}

/* k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1243,2,t0,t1);}
t2=C_mutate((C_word*)lf[29]+1 /* (set! f32vector-length ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1247,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 148  len */
f_1206(t3,lf[74],C_fix(3),lf[30]);}

/* k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1247(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1247,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1 /* (set! f64vector-length ...) */,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1249,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1263,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1280,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1369,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1395,a[2]=t8,a[3]=t6,a[4]=t10,a[5]=t4,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 204  setu */
f_1280(t15,*((C_word*)lf[23]+1),lf[15],lf[33]);}

/* k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1395,2,t0,t1);}
t2=C_mutate((C_word*)lf[33]+1 /* (set! u8vector-set! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 205  set */
f_1263(t3,*((C_word*)lf[24]+1),lf[16],lf[34]);}

/* k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1399,2,t0,t1);}
t2=C_mutate((C_word*)lf[34]+1 /* (set! s8vector-set! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1403,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 206  setu */
f_1280(t3,*((C_word*)lf[25]+1),lf[17],lf[35]);}

/* k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1403,2,t0,t1);}
t2=C_mutate((C_word*)lf[35]+1 /* (set! u16vector-set! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 207  set */
f_1263(t3,*((C_word*)lf[26]+1),lf[18],lf[36]);}

/* k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1407(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1407,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1 /* (set! s16vector-set! ...) */,t1);
t3=*((C_word*)lf[27]+1);
t4=lf[19];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1335,a[2]=t3,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
t6=C_mutate((C_word*)lf[37]+1 /* (set! u32vector-set! ...) */,t5);
t7=*((C_word*)lf[28]+1);
t8=lf[20];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1308,a[2]=t7,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t10=C_mutate((C_word*)lf[40]+1 /* (set! s32vector-set! ...) */,t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 210  setf */
f_1369(t11,*((C_word*)lf[29]+1),lf[21],lf[42]);}

/* k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1419,2,t0,t1);}
t2=C_mutate((C_word*)lf[42]+1 /* (set! f32vector-set! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 211  setf */
f_1369(t3,*((C_word*)lf[30]+1),lf[22],lf[43]);}

/* k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1423,2,t0,t1);}
t2=C_mutate((C_word*)lf[43]+1 /* (set! f64vector-set! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3623,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 214  get */
f_1249(t4,*((C_word*)lf[23]+1),lf[7],lf[44]);}

/* k3621 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 214  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[33]+1));}

/* k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1427,2,t0,t1);}
t2=C_mutate((C_word*)lf[44]+1 /* (set! u8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3619,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 217  get */
f_1249(t4,*((C_word*)lf[24]+1),lf[8],lf[45]);}

/* k3617 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 217  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[34]+1));}

/* k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1431,2,t0,t1);}
t2=C_mutate((C_word*)lf[45]+1 /* (set! s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 220  get */
f_1249(t4,*((C_word*)lf[25]+1),lf[9],lf[46]);}

/* k3613 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 220  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[35]+1));}

/* k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1435,2,t0,t1);}
t2=C_mutate((C_word*)lf[46]+1 /* (set! u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 223  get */
f_1249(t4,*((C_word*)lf[26]+1),lf[10],lf[47]);}

/* k3609 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 223  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[36]+1));}

/* k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1439,2,t0,t1);}
t2=C_mutate((C_word*)lf[47]+1 /* (set! s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3607,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 227  get */
f_1249(t4,*((C_word*)lf[27]+1),lf[11],lf[48]);}

/* k3605 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 226  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[37]+1));}

/* k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1443,2,t0,t1);}
t2=C_mutate((C_word*)lf[48]+1 /* (set! u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 231  get */
f_1249(t4,*((C_word*)lf[28]+1),lf[12],lf[49]);}

/* k3601 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 230  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[40]+1));}

/* k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1447,2,t0,t1);}
t2=C_mutate((C_word*)lf[49]+1 /* (set! s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3599,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 235  get */
f_1249(t4,*((C_word*)lf[29]+1),lf[13],lf[50]);}

/* k3597 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 234  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[42]+1));}

/* k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1451,2,t0,t1);}
t2=C_mutate((C_word*)lf[50]+1 /* (set! f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1455,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3595,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 239  get */
f_1249(t4,*((C_word*)lf[30]+1),lf[14],lf[51]);}

/* k3593 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 238  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[174]+1)))(4,*((C_word*)lf[174]+1),((C_word*)t0)[2],t1,*((C_word*)lf[43]+1));}

/* k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1455(C_word c,C_word t0,C_word t1){
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
C_word ab[64],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1455,2,t0,t1);}
t2=C_mutate((C_word*)lf[51]+1 /* (set! f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1462,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[52]+1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1464,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[55]+1 /* (set! release-number-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1482,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[58]+1 /* (set! make-u8vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1507,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t8=C_mutate((C_word*)lf[60]+1 /* (set! make-s8vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1627,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t9=C_mutate((C_word*)lf[63]+1 /* (set! make-u16vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1747,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t10=C_mutate((C_word*)lf[65]+1 /* (set! make-s16vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1867,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t11=C_mutate((C_word*)lf[67]+1 /* (set! make-u32vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1987,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t12=C_mutate((C_word*)lf[69]+1 /* (set! make-s32vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2107,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t13=C_mutate((C_word*)lf[71]+1 /* (set! make-f32vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2227,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
t14=C_mutate((C_word*)lf[73]+1 /* (set! make-f64vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2354,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2521,a[2]=t15,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 398  init */
f_2481(t16,*((C_word*)lf[58]+1),*((C_word*)lf[33]+1),lf[76]);}

/* k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1 /* (set! list->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 399  init */
f_2481(t3,*((C_word*)lf[60]+1),*((C_word*)lf[34]+1),lf[77]);}

/* k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2525,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1 /* (set! list->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 400  init */
f_2481(t3,*((C_word*)lf[63]+1),*((C_word*)lf[35]+1),lf[78]);}

/* k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1 /* (set! list->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 401  init */
f_2481(t3,*((C_word*)lf[65]+1),*((C_word*)lf[36]+1),lf[79]);}

/* k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2533,2,t0,t1);}
t2=C_mutate((C_word*)lf[79]+1 /* (set! list->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 402  init */
f_2481(t3,*((C_word*)lf[67]+1),*((C_word*)lf[37]+1),lf[80]);}

/* k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2537,2,t0,t1);}
t2=C_mutate((C_word*)lf[80]+1 /* (set! list->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 403  init */
f_2481(t3,*((C_word*)lf[69]+1),*((C_word*)lf[40]+1),lf[81]);}

/* k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=C_mutate((C_word*)lf[81]+1 /* (set! list->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 404  init */
f_2481(t3,*((C_word*)lf[71]+1),*((C_word*)lf[42]+1),lf[82]);}

/* k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1 /* (set! list->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 405  init */
f_2481(t3,*((C_word*)lf[73]+1),*((C_word*)lf[43]+1),lf[83]);}

/* k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2549,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! list->f64vector ...) */,t1);
t3=*((C_word*)lf[76]+1);
t4=C_mutate((C_word*)lf[59]+1 /* (set! u8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2551,a[2]=t3,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t5=*((C_word*)lf[77]+1);
t6=C_mutate((C_word*)lf[61]+1 /* (set! s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2557,a[2]=t5,a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[78]+1);
t8=C_mutate((C_word*)lf[64]+1 /* (set! u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2563,a[2]=t7,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp));
t9=*((C_word*)lf[79]+1);
t10=C_mutate((C_word*)lf[66]+1 /* (set! s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2569,a[2]=t9,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t11=*((C_word*)lf[80]+1);
t12=C_mutate((C_word*)lf[68]+1 /* (set! u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2575,a[2]=t11,a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[81]+1);
t14=C_mutate((C_word*)lf[70]+1 /* (set! s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2581,a[2]=t13,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp));
t15=*((C_word*)lf[82]+1);
t16=C_mutate((C_word*)lf[72]+1 /* (set! f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2587,a[2]=t15,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp));
t17=*((C_word*)lf[83]+1);
t18=C_mutate((C_word*)lf[74]+1 /* (set! f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=t17,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2599,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2636,a[2]=t19,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 456  init */
f_2599(t20,*((C_word*)lf[23]+1),lf[7]);}

/* k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=C_mutate((C_word*)lf[84]+1 /* (set! u8vector->list ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 457  init */
f_2599(t3,*((C_word*)lf[24]+1),lf[8]);}

/* k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=C_mutate((C_word*)lf[85]+1 /* (set! s8vector->list ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 458  init */
f_2599(t3,*((C_word*)lf[25]+1),lf[9]);}

/* k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2644,2,t0,t1);}
t2=C_mutate((C_word*)lf[86]+1 /* (set! u16vector->list ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 459  init */
f_2599(t3,*((C_word*)lf[26]+1),lf[10]);}

/* k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2648,2,t0,t1);}
t2=C_mutate((C_word*)lf[87]+1 /* (set! s16vector->list ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 460  init */
f_2599(t3,*((C_word*)lf[27]+1),lf[11]);}

/* k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2652,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1 /* (set! u32vector->list ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 461  init */
f_2599(t3,*((C_word*)lf[28]+1),lf[12]);}

/* k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2656,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1 /* (set! s32vector->list ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 462  init */
f_2599(t3,*((C_word*)lf[29]+1),lf[13]);}

/* k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2660,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! f32vector->list ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 463  init */
f_2599(t3,*((C_word*)lf[30]+1),lf[14]);}

/* k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1){
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
C_word ab[69],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2664,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1 /* (set! f64vector->list ...) */,t1);
t3=C_mutate((C_word*)lf[92]+1 /* (set! u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[93]+1 /* (set! s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2672,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[94]+1 /* (set! u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2678,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[95]+1 /* (set! s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[96]+1 /* (set! u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[97]+1 /* (set! s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[98]+1 /* (set! f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2702,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[99]+1 /* (set! f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2725,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2743,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t19=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2772,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4091,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp);
t21=C_mutate((C_word*)lf[103]+1 /* (set! u8vector->blob/shared ...) */,t20);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4084,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp);
t23=C_mutate((C_word*)lf[104]+1 /* (set! s8vector->blob/shared ...) */,t22);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4077,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp);
t25=C_mutate((C_word*)lf[105]+1 /* (set! u16vector->blob/shared ...) */,t24);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4070,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp);
t27=C_mutate((C_word*)lf[106]+1 /* (set! s16vector->blob/shared ...) */,t26);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4063,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp);
t29=C_mutate((C_word*)lf[107]+1 /* (set! u32vector->blob/shared ...) */,t28);
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4056,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp);
t31=C_mutate((C_word*)lf[108]+1 /* (set! s32vector->blob/shared ...) */,t30);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4049,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp);
t33=C_mutate((C_word*)lf[109]+1 /* (set! f32vector->blob/shared ...) */,t32);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4042,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
t35=C_mutate((C_word*)lf[110]+1 /* (set! f64vector->blob/shared ...) */,t34);
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2838,a[2]=t12,a[3]=t14,a[4]=t16,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 524  pack-copy */
f_2725(t36,lf[59],lf[111]);}

/* k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2838,2,t0,t1);}
t2=C_mutate((C_word*)lf[111]+1 /* (set! u8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 525  pack-copy */
f_2725(t3,lf[61],lf[112]);}

/* k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2842,2,t0,t1);}
t2=C_mutate((C_word*)lf[112]+1 /* (set! s8vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 526  pack-copy */
f_2725(t3,lf[64],lf[113]);}

/* k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2846,2,t0,t1);}
t2=C_mutate((C_word*)lf[113]+1 /* (set! u16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 527  pack-copy */
f_2725(t3,lf[66],lf[114]);}

/* k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2850,2,t0,t1);}
t2=C_mutate((C_word*)lf[114]+1 /* (set! s16vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 528  pack-copy */
f_2725(t3,lf[68],lf[115]);}

/* k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
t2=C_mutate((C_word*)lf[115]+1 /* (set! u32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 529  pack-copy */
f_2725(t3,lf[70],lf[116]);}

/* k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
t2=C_mutate((C_word*)lf[116]+1 /* (set! s32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 530  pack-copy */
f_2725(t3,lf[72],lf[117]);}

/* k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2862,2,t0,t1);}
t2=C_mutate((C_word*)lf[117]+1 /* (set! f32vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2866,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 531  pack-copy */
f_2725(t3,lf[74],lf[118]);}

/* k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2866,2,t0,t1);}
t2=C_mutate((C_word*)lf[118]+1 /* (set! f64vector->blob ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 533  unpack */
f_2743(t3,lf[59],C_SCHEME_TRUE,lf[119]);}

/* k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=C_mutate((C_word*)lf[119]+1 /* (set! blob->u8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 534  unpack */
f_2743(t3,lf[61],C_SCHEME_TRUE,lf[120]);}

/* k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2874,2,t0,t1);}
t2=C_mutate((C_word*)lf[120]+1 /* (set! blob->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 535  unpack */
f_2743(t3,lf[64],C_fix(2),lf[121]);}

/* k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2878,2,t0,t1);}
t2=C_mutate((C_word*)lf[121]+1 /* (set! blob->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 536  unpack */
f_2743(t3,lf[66],C_fix(2),lf[122]);}

/* k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2882,2,t0,t1);}
t2=C_mutate((C_word*)lf[122]+1 /* (set! blob->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 537  unpack */
f_2743(t3,lf[68],C_fix(4),lf[123]);}

/* k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2886,2,t0,t1);}
t2=C_mutate((C_word*)lf[123]+1 /* (set! blob->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 538  unpack */
f_2743(t3,lf[70],C_fix(4),lf[124]);}

/* k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2890,2,t0,t1);}
t2=C_mutate((C_word*)lf[124]+1 /* (set! blob->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 539  unpack */
f_2743(t3,lf[72],C_fix(4),lf[125]);}

/* k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2894,2,t0,t1);}
t2=C_mutate((C_word*)lf[125]+1 /* (set! blob->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 540  unpack */
f_2743(t3,lf[74],C_fix(8),lf[126]);}

/* k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2898,2,t0,t1);}
t2=C_mutate((C_word*)lf[126]+1 /* (set! blob->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 542  unpack-copy */
f_2772(t3,lf[59],C_SCHEME_TRUE,lf[127]);}

/* k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2902,2,t0,t1);}
t2=C_mutate((C_word*)lf[127]+1 /* (set! blob->u8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 543  unpack-copy */
f_2772(t3,lf[61],C_SCHEME_TRUE,lf[128]);}

/* k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2906,2,t0,t1);}
t2=C_mutate((C_word*)lf[128]+1 /* (set! blob->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 544  unpack-copy */
f_2772(t3,lf[64],C_fix(2),lf[129]);}

/* k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2910,2,t0,t1);}
t2=C_mutate((C_word*)lf[129]+1 /* (set! blob->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 545  unpack-copy */
f_2772(t3,lf[66],C_fix(2),lf[130]);}

/* k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2914,2,t0,t1);}
t2=C_mutate((C_word*)lf[130]+1 /* (set! blob->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 546  unpack-copy */
f_2772(t3,lf[68],C_fix(4),lf[131]);}

/* k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2918,2,t0,t1);}
t2=C_mutate((C_word*)lf[131]+1 /* (set! blob->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 547  unpack-copy */
f_2772(t3,lf[70],C_fix(4),lf[132]);}

/* k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2922,2,t0,t1);}
t2=C_mutate((C_word*)lf[132]+1 /* (set! blob->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 548  unpack-copy */
f_2772(t3,lf[72],C_fix(4),lf[133]);}

/* k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2926,2,t0,t1);}
t2=C_mutate((C_word*)lf[133]+1 /* (set! blob->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 549  unpack-copy */
f_2772(t3,lf[74],C_fix(8),lf[134]);}

/* k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
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
C_word ab[103],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
t2=C_mutate((C_word*)lf[134]+1 /* (set! blob->f64vector ...) */,t1);
t3=*((C_word*)lf[135]+1);
t4=*((C_word*)lf[136]+1);
t5=(C_word)C_a_i_list(&a,16,lf[137],*((C_word*)lf[76]+1),lf[138],*((C_word*)lf[77]+1),lf[139],*((C_word*)lf[78]+1),lf[140],*((C_word*)lf[79]+1),lf[141],*((C_word*)lf[80]+1),lf[142],*((C_word*)lf[81]+1),lf[143],*((C_word*)lf[82]+1),lf[144],*((C_word*)lf[83]+1));
t6=C_mutate((C_word*)lf[135]+1 /* (set! user-read-hook ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2935,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t7=*((C_word*)lf[149]+1);
t8=C_mutate((C_word*)lf[149]+1 /* (set! user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=t7,a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate(&lf[151] /* (set! subvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3156,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[152]+1 /* (set! subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3199,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[153]+1 /* (set! subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3205,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[154]+1 /* (set! subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3211,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[155]+1 /* (set! subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3217,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[156]+1 /* (set! subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3223,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[157]+1 /* (set! subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[158]+1 /* (set! subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3235,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[159]+1 /* (set! subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3241,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[160]+1 /* (set! write-u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3247,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[164]+1 /* (set! read-u8vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t20=*((C_word*)lf[167]+1);
t21=*((C_word*)lf[168]+1);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t23=C_mutate((C_word*)lf[169]+1 /* (set! read-u8vector ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3473,a[2]=t20,a[3]=t21,a[4]=t22,a[5]=((C_word)li144),tmp=(C_word)a,a+=6,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 671  register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[172]+1)))(3,*((C_word*)lf[172]+1),t24,lf[173]);}

/* k3589 in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr2r,(void*)f_3473r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3473r(t0,t1,t2);}}

static void C_ccall f_3473r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3537,a[2]=t3,a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3542,a[2]=t4,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-n10241055 */
t6=t5;
f_3542(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-p10251053 */
t8=t4;
f_3537(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body10221030 */
t10=t3;
f_3475(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[0],t9);}}}}

/* def-n1024 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3542(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3542,NULL,2,t0,t1);}
/* def-p10251053 */
t2=((C_word*)t0)[2];
f_3537(t2,t1,C_SCHEME_FALSE);}

/* def-p1025 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3537(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3537,NULL,3,t0,t1,t2);}
/* body10221030 */
t3=((C_word*)t0)[2];
f_3475(t3,t1,t2,*((C_word*)lf[166]+1));}

/* body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3475,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 651  ##sys#check-port */
((C_proc4)C_retrieve_proc(*((C_word*)lf[162]+1)))(4,*((C_word*)lf[162]+1),t4,t3,lf[169]);}

/* k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3479,2,t0,t1);}
if(C_truep(((C_word*)t0)[7])){
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[7],lf[169]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3488,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 653  ##sys#allocate-vector */
t4=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[7],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 660  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}}

/* k3504 in k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3506,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li140),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3511(t5,((C_word*)t0)[2]);}

/* loop in k3504 in k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3511(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3511,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 662  ##sys#read-char-0 */
((C_proc3)C_retrieve_proc(*((C_word*)lf[171]+1)))(3,*((C_word*)lf[171]+1),t2,((C_word*)t0)[2]);}

/* k3513 in loop in k3504 in k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3515,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 664  get-output-string */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 668  ##sys#write-char/port */
((C_proc4)C_retrieve_proc(*((C_word*)lf[170]+1)))(4,*((C_word*)lf[170]+1),t2,t1,((C_word*)t0)[3]);}}

/* k3531 in k3513 in loop in k3504 in k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 669  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3511(t2,((C_word*)t0)[2]);}

/* k3522 in k3513 in loop in k3504 in k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_block_size(t1);
/* srfi-4.scm: 666  wrap */
f_3464(((C_word*)t0)[2],t1,t2);}

/* k3486 in k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 654  ##sys#read-string! */
((C_proc6)C_retrieve_proc(*((C_word*)lf[165]+1)))(6,*((C_word*)lf[165]+1),t2,((C_word*)t0)[5],t1,((C_word*)t0)[2],C_fix(0));}

/* k3489 in k3486 in k3477 in body1022 in read-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
t2=(C_word)C_string_to_bytevector(((C_word*)t0)[5]);
t3=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,2,lf[59],((C_word*)t0)[5]));}
else{
/* srfi-4.scm: 658  wrap */
f_3464(((C_word*)t0)[3],((C_word*)t0)[5],t1);}}

/* wrap in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3464(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3464,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3472,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 646  ##sys#allocate-vector */
t5=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k3470 in wrap in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3472,2,t0,t1);}
t2=(C_word)C_string_to_bytevector(t1);
t3=(C_word)C_substring_copy(((C_word*)t0)[4],t1,C_fix(0),((C_word*)t0)[3],C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,2,lf[59],t1));}

/* read-u8vector! in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_3363r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3363r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3363r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(15);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3365,a[2]=t5,a[3]=t3,a[4]=((C_word)li135),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3410,a[2]=t6,a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3415,a[2]=t7,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-port976997 */
t9=t8;
f_3415(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start977995 */
t11=t7;
f_3410(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body974982 */
t13=t6;
f_3365(t13,t1,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}

/* def-port976 in read-u8vector! in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3415,NULL,2,t0,t1);}
/* def-start977995 */
t2=((C_word*)t0)[2];
f_3410(t2,t1,*((C_word*)lf[166]+1));}

/* def-start977 in read-u8vector! in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3410(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3410,NULL,3,t0,t1,t2);}
/* body974982 */
t3=((C_word*)t0)[2];
f_3365(t3,t1,t2,C_fix(0));}

/* body974 in read-u8vector! in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3365(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3365,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3369,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 630  ##sys#check-port */
((C_proc4)C_retrieve_proc(*((C_word*)lf[162]+1)))(4,*((C_word*)lf[162]+1),t4,t2,lf[164]);}

/* k3367 in body974 in read-u8vector! in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3369(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[164]);
t3=(C_word)C_i_check_structure_2(((C_word*)t0)[5],lf[59],lf[164]);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t5=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[4])[1],lf[164]);
t6=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)((C_word*)t0)[4])[1]);
t7=(C_word)C_block_size(t4);
if(C_truep((C_word)C_fixnum_greaterp(t6,t7))){
t8=(C_word)C_block_size(t4);
t9=(C_word)C_fixnum_difference(t8,((C_word*)t0)[6]);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
/* srfi-4.scm: 638  ##sys#read-string! */
((C_proc6)C_retrieve_proc(*((C_word*)lf[165]+1)))(6,*((C_word*)lf[165]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
/* srfi-4.scm: 638  ##sys#read-string! */
((C_proc6)C_retrieve_proc(*((C_word*)lf[165]+1)))(6,*((C_word*)lf[165]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[2],((C_word*)t0)[6]);}}
else{
/* srfi-4.scm: 638  ##sys#read-string! */
((C_proc6)C_retrieve_proc(*((C_word*)lf[165]+1)))(6,*((C_word*)lf[165]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t4,((C_word*)t0)[2],((C_word*)t0)[6]);}}

/* write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_3247r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3247r(t0,t1,t2,t3);}}

static void C_ccall f_3247r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(17);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3249,a[2]=t2,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3286,a[2]=t2,a[3]=t4,a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3295,a[2]=t5,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3300,a[2]=t6,a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-port926952 */
t8=t7;
f_3300(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-from927950 */
t10=t6;
f_3295(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-to928947 */
t12=t5;
f_3286(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body924933 */
t14=t4;
f_3249(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-port926 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3300(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3300,NULL,2,t0,t1);}
/* def-from927950 */
t2=((C_word*)t0)[2];
f_3295(t2,t1,*((C_word*)lf[163]+1));}

/* def-from927 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3295,NULL,3,t0,t1,t2);}
/* def-to928947 */
t3=((C_word*)t0)[2];
f_3286(t3,t1,t2,C_fix(0));}

/* def-to928 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3286(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3286,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3294,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 621  u8vector-length */
t5=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k3292 in def-to928 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* body924933 */
t2=((C_word*)t0)[5];
f_3249(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* body924 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3249(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3249,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_structure_2(((C_word*)t0)[2],lf[59],lf[160]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3256,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 623  ##sys#check-port */
((C_proc4)C_retrieve_proc(*((C_word*)lf[162]+1)))(4,*((C_word*)lf[162]+1),t6,t2,lf[160]);}

/* k3254 in body924 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3256,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word)li129),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3264(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doloop938 in k3254 in body924 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3264(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3264,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3274,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_make_character((C_word)C_unfix((C_word)C_u8peek(((C_word*)t0)[3],t2)));
/* srfi-4.scm: 627  ##sys#write-char-0 */
((C_proc4)C_retrieve_proc(*((C_word*)lf[161]+1)))(4,*((C_word*)lf[161]+1),t3,t4,((C_word*)t0)[2]);}}

/* k3272 in doloop938 in k3254 in body924 in write-u8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3264(t3,((C_word*)t0)[2],t2);}

/* subf64vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3241,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 619  subvector */
f_3156(t1,t2,lf[74],C_fix(8),t3,t4,lf[159]);}

/* subf32vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3235,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 618  subvector */
f_3156(t1,t2,lf[72],C_fix(4),t3,t4,lf[158]);}

/* subs32vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3229,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 617  subvector */
f_3156(t1,t2,lf[70],C_fix(4),t3,t4,lf[157]);}

/* subs16vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3223,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 616  subvector */
f_3156(t1,t2,lf[66],C_fix(2),t3,t4,lf[156]);}

/* subs8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3217,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 615  subvector */
f_3156(t1,t2,lf[61],C_fix(1),t3,t4,lf[155]);}

/* subu32vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3211,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 614  subvector */
f_3156(t1,t2,lf[68],C_fix(4),t3,t4,lf[154]);}

/* subu16vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3205(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3205,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 613  subvector */
f_3156(t1,t2,lf[64],C_fix(2),t3,t4,lf[153]);}

/* subu8vector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3199(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3199,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 612  subvector */
f_3156(t1,t2,lf[59],C_fix(1),t3,t4,lf[152]);}

/* subvector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_3156(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3156,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(C_word)C_i_check_structure_2(t2,t3,t7);
t9=(C_word)C_slot(t2,C_fix(1));
t10=(C_word)C_block_size(t9);
t11=(C_word)C_fixnum_divide(t10,t4);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3169,a[2]=t7,a[3]=t11,a[4]=t1,a[5]=t9,a[6]=t3,a[7]=t4,a[8]=t5,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
t13=(C_word)C_fixnum_plus(t11,C_fix(1));
/* srfi-4.scm: 603  ##sys#check-range */
t14=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t14+1)))(6,t14,t12,t5,C_fix(0),t13,t7);}

/* k3167 in subvector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3172,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-4.scm: 604  ##sys#check-range */
t4=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[9],C_fix(0),t3,((C_word*)t0)[2]);}

/* k3170 in k3167 in subvector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(C_word)C_fixnum_times(((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3178,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 606  ##sys#allocate-vector */
t5=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k3176 in k3170 in k3167 in subvector in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3178,2,t0,t1);}
t2=(C_word)C_string_to_bytevector(t1);
t3=(C_word)C_a_i_record(&a,2,((C_word*)t0)[7],t1);
t4=(C_word)C_fixnum_times(((C_word*)t0)[6],((C_word*)t0)[5]);
t5=(C_word)C_copy_subvector(t1,((C_word*)t0)[4],C_fix(0),t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}

/* ##sys#user-print-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[102],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2996,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[84]+1),C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[137],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[59],t6);
t8=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[85]+1),C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,lf[138],t8);
t10=(C_word)C_a_i_cons(&a,2,lf[61],t9);
t11=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[86]+1),C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,lf[139],t11);
t13=(C_word)C_a_i_cons(&a,2,lf[64],t12);
t14=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[87]+1),C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,lf[140],t14);
t16=(C_word)C_a_i_cons(&a,2,lf[66],t15);
t17=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[88]+1),C_SCHEME_END_OF_LIST);
t18=(C_word)C_a_i_cons(&a,2,lf[141],t17);
t19=(C_word)C_a_i_cons(&a,2,lf[68],t18);
t20=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[89]+1),C_SCHEME_END_OF_LIST);
t21=(C_word)C_a_i_cons(&a,2,lf[142],t20);
t22=(C_word)C_a_i_cons(&a,2,lf[70],t21);
t23=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[90]+1),C_SCHEME_END_OF_LIST);
t24=(C_word)C_a_i_cons(&a,2,lf[143],t23);
t25=(C_word)C_a_i_cons(&a,2,lf[72],t24);
t26=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[91]+1),C_SCHEME_END_OF_LIST);
t27=(C_word)C_a_i_cons(&a,2,lf[144],t26);
t28=(C_word)C_a_i_cons(&a,2,lf[74],t27);
t29=(C_word)C_a_i_cons(&a,2,t28,C_SCHEME_END_OF_LIST);
t30=(C_word)C_a_i_cons(&a,2,t25,t29);
t31=(C_word)C_a_i_cons(&a,2,t22,t30);
t32=(C_word)C_a_i_cons(&a,2,t19,t31);
t33=(C_word)C_a_i_cons(&a,2,t16,t32);
t34=(C_word)C_a_i_cons(&a,2,t13,t33);
t35=(C_word)C_a_i_cons(&a,2,t10,t34);
t36=(C_word)C_a_i_cons(&a,2,t7,t35);
t37=(C_word)C_i_assq((C_word)C_slot(t2,C_fix(0)),t36);
if(C_truep(t37)){
t38=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3006,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t37,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 590  ##sys#print */
t39=*((C_word*)lf[150]+1);
((C_proc5)(void*)(*((C_word*)t39+1)))(5,t39,t38,C_make_character(35),C_SCHEME_FALSE,t4);}
else{
/* srfi-4.scm: 593  old-hook */
t38=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t38))(5,t38,t1,t2,t3,t4);}}

/* k3004 in ##sys#user-print-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* srfi-4.scm: 591  ##sys#print */
t4=*((C_word*)lf[150]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k3007 in k3004 in ##sys#user-print-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3009,2,t0,t1);}
t2=(C_word)C_i_caddr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* g853854 */
t4=t2;
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3017 in k3007 in k3004 in ##sys#user-print-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 592  ##sys#print */
t2=*((C_word*)lf[150]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2935,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_truep((C_word)C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2945,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 567  read */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}
else{
/* srfi-4.scm: 572  old-hook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k2943 in ##sys#user-read-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=(C_word)C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=(C_word)C_eqp(t3,lf[145]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t3,lf[146]));
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_memq(t3,((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp);
/* g833834 */
t8=t7;
f_2964(t8,((C_word*)t0)[5],t6);}
else{
/* srfi-4.scm: 571  ##sys#read-error */
((C_proc5)C_retrieve_proc(*((C_word*)lf[147]+1)))(5,*((C_word*)lf[147]+1),((C_word*)t0)[5],((C_word*)t0)[2],lf[148],t3);}}}

/* g833 in k2943 in ##sys#user-read-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2964(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2964,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2975,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 570  read */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k2973 in g833 in k2943 in ##sys#user-read-hook in k2928 in k2924 in k2920 in k2916 in k2912 in k2908 in k2904 in k2900 in k2896 in k2892 in k2888 in k2884 in k2880 in k2876 in k2872 in k2868 in k2864 in k2860 in k2856 in k2852 in k2848 in k2844 in k2840 in k2836 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g836837 */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f4042 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4042(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4042,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[74],lf[110]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f4049 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4049,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[72],lf[109]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f4056 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4056(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4056,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[70],lf[108]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f4063 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4063,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[68],lf[107]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f4070 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4070(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4070,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[66],lf[106]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f4077 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4077(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4077,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[64],lf[105]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f4084 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4084,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[61],lf[104]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f4091 in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f4091(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f4091,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[59],lf[103]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* unpack-copy in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2772(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2772,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2774,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));}

/* f_2774 in unpack-copy in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2774,3,t0,t1,t2);}
t3=(C_word)C_i_check_bytevector_2(t2,((C_word*)t0)[4]);
t4=(C_word)C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2784,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 507  ##sys#make-blob */
((C_proc3)C_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),t5,t4);}

/* k2782 */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2784,2,t0,t1);}
t2=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)t0)[7]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(C_fix(0),(C_word)C_fixnum_modulo(((C_word*)t0)[6],((C_word*)t0)[7])));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,2,((C_word*)t0)[4],(C_word)C_copy_block(((C_word*)t0)[3],t1)));}
else{
/* srfi-4.scm: 513  ##sys#error */
t4=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[5],((C_word*)t0)[2],lf[102],((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* unpack in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2743(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2743,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2745,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));}

/* f_2745 in unpack in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2745,3,t0,t1,t2);}
t3=(C_word)C_i_check_bytevector_2(t2,((C_word*)t0)[4]);
t4=(C_word)C_block_size(t2);
t5=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(C_fix(0),(C_word)C_fixnum_modulo(t4,((C_word*)t0)[3])));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,2,((C_word*)t0)[2],t2));}
else{
/* srfi-4.scm: 501  ##sys#error */
t7=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t1,((C_word*)t0)[4],lf[101],((C_word*)t0)[2],t4,((C_word*)t0)[3]);}}

/* pack-copy in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2725(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2725,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2727,a[2]=t3,a[3]=t2,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));}

/* f_2727 in pack-copy in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2727,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,((C_word*)t0)[3],((C_word*)t0)[2]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2737,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_block_size(t4);
/* srfi-4.scm: 491  ##sys#make-blob */
((C_proc3)C_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),t5,t6);}

/* k2735 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_copy_block(((C_word*)t0)[2],t1));}

/* f64vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2708,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[74]));}

/* f32vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2702(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2702,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[72]));}

/* s32vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2696,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[70]));}

/* u32vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2690,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[68]));}

/* s16vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2684,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[66]));}

/* u16vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2678,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[64]));}

/* s8vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2672(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2672,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[61]));}

/* u8vector? in k2662 in k2658 in k2654 in k2650 in k2646 in k2642 in k2638 in k2634 in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2666,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[59]));}

/* init in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2599(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2599,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2601,a[2]=t2,a[3]=t3,a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp));}

/* f_2601 in init in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2601,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2605,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 449  length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2603 */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2605,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2610,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word)li92),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2610(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k2603 */
static void C_fcall f_2610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2610,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2624,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 453  ref */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t2);}}

/* k2622 in loop in k2603 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2628,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-4.scm: 454  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2610(t4,t2,t3);}

/* k2626 in k2622 in loop in k2603 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2628,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f64vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2593r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2593r(t0,t1,t2);}}

static void C_ccall f_2593r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 440  list->f64vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* f32vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2587r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2587r(t0,t1,t2);}}

static void C_ccall f_2587r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 436  list->f32vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* s32vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2581r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2581r(t0,t1,t2);}}

static void C_ccall f_2581r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 432  list->s32vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* u32vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2575r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2575r(t0,t1,t2);}}

static void C_ccall f_2575r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 428  list->u32vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* s16vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2569r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2569r(t0,t1,t2);}}

static void C_ccall f_2569r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 424  list->s16vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* u16vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2563r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2563r(t0,t1,t2);}}

static void C_ccall f_2563r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 420  list->u16vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* s8vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2557r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2557r(t0,t1,t2);}}

static void C_ccall f_2557r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 416  list->s8vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* u8vector in k2547 in k2543 in k2539 in k2535 in k2531 in k2527 in k2523 in k2519 in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2551r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2551r(t0,t1,t2);}}

static void C_ccall f_2551r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 412  list->u8vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* init in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2481(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2481,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2483,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp));}

/* f_2483 in init in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2483,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,((C_word*)t0)[4]);
t4=(C_word)C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2493,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 390  make */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2491 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2493,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word)li81),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2498(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop668 in k2491 */
static void C_fcall f_2498(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2498,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=((C_word*)t0)[5];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2505,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep((C_word)C_blockp(t2))?(C_word)C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm: 395  set */
t6=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,((C_word*)t0)[5],t3,(C_word)C_slot(t2,C_fix(0)));}
else{
/* srfi-4.scm: 396  ##sys#error-not-a-proper-list */
t6=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[2]);}}}

/* k2503 in doloop668 in k2491 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2498(t2,((C_word*)t0)[4],(C_word)C_slot(((C_word*)t0)[3],C_fix(1)),(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_2354r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2354r(t0,t1,t2,t3);}}

static void C_ccall f_2354r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li76),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2408,a[2]=t4,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2413,a[2]=t5,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2418,a[2]=t6,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init611645 */
t8=t7;
f_2418(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?612643 */
t10=t6;
f_2413(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin613640 */
t12=t5;
f_2408(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body609618 */
t14=t4;
f_2356(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init611 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2418,NULL,2,t0,t1);}
/* def-ext?612643 */
t2=((C_word*)t0)[2];
f_2413(t2,t1,C_SCHEME_FALSE);}

/* def-ext?612 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2413,NULL,3,t0,t1,t2);}
/* def-fin613640 */
t3=((C_word*)t0)[2];
f_2408(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin613 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2408(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2408,NULL,4,t0,t1,t2,t3);}
/* body609618 */
t4=((C_word*)t0)[2];
f_2356(t4,t1,t2,t3);}

/* body609 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2356(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2356,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[73]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 369  alloc */
f_1464(t6,lf[73],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(3)),t3);}

/* k2405 in body609 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[74],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[62]+1);
if(C_truep(t4)){
/* srfi-4.scm: 370  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_2366(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2366(2,t4,C_SCHEME_UNDEFINED);}}

/* k2364 in k2405 in body609 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2366,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=(C_word)C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],lf[73]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t5=t4;
f_2378(t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2397,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 376  exact->inexact */
C_exact_to_inexact(3,0,t5,((C_word*)((C_word*)t0)[5])[1]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k2395 in k2364 in k2405 in body609 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2378(t3,t2);}

/* k2376 in k2364 in k2405 in body609 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2378(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2378,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2383(t2,C_fix(0)));}

/* doloop629 in k2376 in k2364 in k2405 in body609 in make-f64vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_2383(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_u_i_f64vector_set(((C_word*)t0)[3],t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_2227r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2227r(t0,t1,t2,t3);}}

static void C_ccall f_2227r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li70),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2281,a[2]=t4,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2286,a[2]=t5,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2291,a[2]=t6,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init554588 */
t8=t7;
f_2291(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?555586 */
t10=t6;
f_2286(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin556583 */
t12=t5;
f_2281(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body552561 */
t14=t4;
f_2229(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init554 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2291(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2291,NULL,2,t0,t1);}
/* def-ext?555586 */
t2=((C_word*)t0)[2];
f_2286(t2,t1,C_SCHEME_FALSE);}

/* def-ext?555 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2286(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2286,NULL,3,t0,t1,t2);}
/* def-fin556583 */
t3=((C_word*)t0)[2];
f_2281(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin556 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2281(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2281,NULL,4,t0,t1,t2,t3);}
/* body552561 */
t4=((C_word*)t0)[2];
f_2229(t4,t1,t2,t3);}

/* body552 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2229(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2229,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[71]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2280,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 354  alloc */
f_1464(t6,lf[71],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k2278 in body552 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2280,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[72],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[62]+1);
if(C_truep(t4)){
/* srfi-4.scm: 355  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_2239(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2239(2,t4,C_SCHEME_UNDEFINED);}}

/* k2237 in k2278 in body552 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=(C_word)C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],lf[71]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t5=t4;
f_2251(t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2270,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 361  exact->inexact */
C_exact_to_inexact(3,0,t5,((C_word*)((C_word*)t0)[5])[1]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k2268 in k2237 in k2278 in body552 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2251(t3,t2);}

/* k2249 in k2237 in k2278 in body552 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2251(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2251,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2256,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2256(t2,C_fix(0)));}

/* doloop572 in k2249 in k2237 in k2278 in body552 in make-f32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_2256(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_u_i_f32vector_set(((C_word*)t0)[3],t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_2107r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2107r(t0,t1,t2,t3);}}

static void C_ccall f_2107r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2154,a[2]=t4,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2159,a[2]=t5,a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=t6,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init500531 */
t8=t7;
f_2164(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?501529 */
t10=t6;
f_2159(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin502526 */
t12=t5;
f_2154(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body498507 */
t14=t4;
f_2109(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init500 in make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2164(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2164,NULL,2,t0,t1);}
/* def-ext?501529 */
t2=((C_word*)t0)[2];
f_2159(t2,t1,C_SCHEME_FALSE);}

/* def-ext?501 in make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2159(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2159,NULL,3,t0,t1,t2);}
/* def-fin502526 */
t3=((C_word*)t0)[2];
f_2154(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin502 in make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2154(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2154,NULL,4,t0,t1,t2,t3);}
/* body498507 */
t4=((C_word*)t0)[2];
f_2109(t4,t1,t2,t3);}

/* body498 in make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2109(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2109,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[69]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2153,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 341  alloc */
f_1464(t5,lf[69],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k2151 in body498 in make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2153,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[70],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2119,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[62]+1);
if(C_truep(t4)){
/* srfi-4.scm: 342  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_2119(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2119(2,t4,C_SCHEME_UNDEFINED);}}

/* k2117 in k2151 in body498 in make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2119,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[69]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2133,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2133(t4,C_fix(0)));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* doloop516 in k2117 in k2151 in body498 in make-s32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_2133(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
t4=(C_word)C_s32poke((C_word)C_slot(((C_word*)t0)[3],C_fix(1)),t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1987r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1987r(t0,t1,t2,t3);}}

static void C_ccall f_1987r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li58),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2034,a[2]=t4,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2039,a[2]=t5,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2044,a[2]=t6,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init446477 */
t8=t7;
f_2044(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?447475 */
t10=t6;
f_2039(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin448472 */
t12=t5;
f_2034(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body444453 */
t14=t4;
f_1989(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init446 in make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2044(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2044,NULL,2,t0,t1);}
/* def-ext?447475 */
t2=((C_word*)t0)[2];
f_2039(t2,t1,C_SCHEME_FALSE);}

/* def-ext?447 in make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2039(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2039,NULL,3,t0,t1,t2);}
/* def-fin448472 */
t3=((C_word*)t0)[2];
f_2034(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin448 in make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_2034(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2034,NULL,4,t0,t1,t2,t3);}
/* body444453 */
t4=((C_word*)t0)[2];
f_1989(t4,t1,t2,t3);}

/* body444 in make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1989(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1989,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[67]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 328  alloc */
f_1464(t5,lf[67],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k2031 in body444 in make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2033,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[68],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1999,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[62]+1);
if(C_truep(t4)){
/* srfi-4.scm: 329  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1999(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1999(2,t4,C_SCHEME_UNDEFINED);}}

/* k1997 in k2031 in body444 in make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1999,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[67]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2013,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2013(t4,C_fix(0)));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* doloop462 in k1997 in k2031 in body444 in make-u32vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_2013(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
t4=(C_word)C_u32poke((C_word)C_slot(((C_word*)t0)[3],C_fix(1)),t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1867r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1867r(t0,t1,t2,t3);}}

static void C_ccall f_1867r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li52),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1914,a[2]=t4,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1919,a[2]=t5,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1924,a[2]=t6,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init392423 */
t8=t7;
f_1924(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?393421 */
t10=t6;
f_1919(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin394418 */
t12=t5;
f_1914(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body390399 */
t14=t4;
f_1869(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init392 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1924(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1924,NULL,2,t0,t1);}
/* def-ext?393421 */
t2=((C_word*)t0)[2];
f_1919(t2,t1,C_SCHEME_FALSE);}

/* def-ext?393 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1919(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1919,NULL,3,t0,t1,t2);}
/* def-fin394418 */
t3=((C_word*)t0)[2];
f_1914(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin394 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1914(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1914,NULL,4,t0,t1,t2,t3);}
/* body390399 */
t4=((C_word*)t0)[2];
f_1869(t4,t1,t2,t3);}

/* body390 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1869(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1869,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[65]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 315  alloc */
f_1464(t5,lf[65],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(1)),t3);}

/* k1911 in body390 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1913,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[66],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[62]+1);
if(C_truep(t4)){
/* srfi-4.scm: 316  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1879(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1879(2,t4,C_SCHEME_UNDEFINED);}}

/* k1877 in k1911 in body390 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1879,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 320  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(-32768),C_fix(32767),lf[65]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1886 in k1877 in k1911 in body390 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1893(t2,C_fix(0)));}

/* doloop408 in k1886 in k1877 in k1911 in body390 in make-s16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_1893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
t4=(C_word)C_s16poke((C_word)C_slot(((C_word*)t0)[3],C_fix(1)),t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1747(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1747r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1747r(t0,t1,t2,t3);}}

static void C_ccall f_1747r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li46),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1794,a[2]=t4,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1799,a[2]=t5,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1804,a[2]=t6,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init338369 */
t8=t7;
f_1804(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?339367 */
t10=t6;
f_1799(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin340364 */
t12=t5;
f_1794(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body336345 */
t14=t4;
f_1749(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init338 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1804,NULL,2,t0,t1);}
/* def-ext?339367 */
t2=((C_word*)t0)[2];
f_1799(t2,t1,C_SCHEME_FALSE);}

/* def-ext?339 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1799(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1799,NULL,3,t0,t1,t2);}
/* def-fin340364 */
t3=((C_word*)t0)[2];
f_1794(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin340 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1794(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1794,NULL,4,t0,t1,t2,t3);}
/* body336345 */
t4=((C_word*)t0)[2];
f_1749(t4,t1,t2,t3);}

/* body336 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1749(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1749,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[63]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1793,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 302  alloc */
f_1464(t5,lf[63],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(1)),t3);}

/* k1791 in body336 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1793,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[64],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[62]+1);
if(C_truep(t4)){
/* srfi-4.scm: 303  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1759(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1759(2,t4,C_SCHEME_UNDEFINED);}}

/* k1757 in k1791 in body336 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1759,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 307  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(0),C_fix(65535),lf[63]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1766 in k1757 in k1791 in body336 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1773(t2,C_fix(0)));}

/* doloop354 in k1766 in k1757 in k1791 in body336 in make-u16vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_1773(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
t4=(C_word)C_u16poke((C_word)C_slot(((C_word*)t0)[3],C_fix(1)),t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1627r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1627r(t0,t1,t2,t3);}}

static void C_ccall f_1627r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1674,a[2]=t4,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1679,a[2]=t5,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1684,a[2]=t6,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init284315 */
t8=t7;
f_1684(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?285313 */
t10=t6;
f_1679(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin286310 */
t12=t5;
f_1674(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body282291 */
t14=t4;
f_1629(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init284 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1684(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1684,NULL,2,t0,t1);}
/* def-ext?285313 */
t2=((C_word*)t0)[2];
f_1679(t2,t1,C_SCHEME_FALSE);}

/* def-ext?285 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1679,NULL,3,t0,t1,t2);}
/* def-fin286310 */
t3=((C_word*)t0)[2];
f_1674(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin286 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1674(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1674,NULL,4,t0,t1,t2,t3);}
/* body282291 */
t4=((C_word*)t0)[2];
f_1629(t4,t1,t2,t3);}

/* body282 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1629(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1629,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[60]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 289  alloc */
f_1464(t5,lf[60],((C_word*)t0)[5],t3);}

/* k1671 in body282 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1673,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[61],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[62]+1);
if(C_truep(t4)){
/* srfi-4.scm: 290  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1639(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1639(2,t4,C_SCHEME_UNDEFINED);}}

/* k1637 in k1671 in body282 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1639,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 294  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(-128),C_fix(127),lf[60]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1646 in k1637 in k1671 in body282 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1653,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1653(t2,C_fix(0)));}

/* doloop300 in k1646 in k1637 in k1671 in body282 in make-s8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_1653(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
t4=(C_word)C_s8poke((C_word)C_slot(((C_word*)t0)[3],C_fix(1)),t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1507r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1507r(t0,t1,t2,t3);}}

static void C_ccall f_1507r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1554,a[2]=t4,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1559,a[2]=t5,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1564,a[2]=t6,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init229260 */
t8=t7;
f_1564(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?230258 */
t10=t6;
f_1559(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin?231255 */
t12=t5;
f_1554(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body227236 */
t14=t4;
f_1509(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init229 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1564(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1564,NULL,2,t0,t1);}
/* def-ext?230258 */
t2=((C_word*)t0)[2];
f_1559(t2,t1,C_SCHEME_FALSE);}

/* def-ext?230 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1559(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1559,NULL,3,t0,t1,t2);}
/* def-fin?231255 */
t3=((C_word*)t0)[2];
f_1554(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin?231 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1554(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1554,NULL,4,t0,t1,t2,t3);}
/* body227236 */
t4=((C_word*)t0)[2];
f_1509(t4,t1,t2,t3,C_SCHEME_TRUE);}

/* body227 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1509,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[58]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* srfi-4.scm: 276  alloc */
f_1464(t6,lf[58],((C_word*)t0)[5],t3);}

/* k1551 in body227 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1553,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[59],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1519,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=((C_word*)t0)[4];
if(C_truep(t4)){
/* srfi-4.scm: 277  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1519(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1519(2,t4,C_SCHEME_UNDEFINED);}}

/* k1517 in k1551 in body227 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1519,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 281  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(0),C_fix(255),lf[58]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1526 in k1517 in k1551 in body227 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1533,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1533(t2,C_fix(0)));}

/* doloop245 in k1526 in k1517 in k1551 in body227 in make-u8vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static C_word C_fcall f_1533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
t4=(C_word)C_u8poke((C_word)C_slot(((C_word*)t0)[3],C_fix(1)),t2,t3);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t6;
goto loop;}}

/* release-number-vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1482,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1489,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_structurep(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=t3;
f_1489(t5,(C_word)C_i_memq(t4,lf[57]));}
else{
t4=t3;
f_1489(t4,C_SCHEME_FALSE);}}

/* k1487 in release-number-vector in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub194(C_SCHEME_UNDEFINED,t3));}
else{
/* srfi-4.scm: 271  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[55],lf[56],((C_word*)t0)[2]);}}

/* alloc in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1464(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1464,NULL,4,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=t3;
t6=(C_word)C_i_foreign_fixnum_argumentp(t5);
t7=(C_word)stub189(C_SCHEME_UNDEFINED,t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* srfi-4.scm: 261  ##sys#error */
t8=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,lf[53],t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1480,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 262  ##sys#allocate-vector */
t6=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* k1478 in alloc in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_string_to_bytevector(t1);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ext-free in k1453 in k1449 in k1445 in k1441 in k1437 in k1433 in k1429 in k1425 in k1421 in k1417 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1462(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1462,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub194(C_SCHEME_UNDEFINED,t2));}

/* f_1308 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1308,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1312,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 179  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1310 */
static void C_ccall f_1312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1315,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fits_in_int_p(((C_word*)t0)[2]))){
t3=t2;
f_1315(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm: 181  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[40],lf[41],((C_word*)t0)[2]);}}

/* k1313 in k1310 */
static void C_ccall f_1315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 182  ##sys#check-range */
t3=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],lf[40]);}

/* k1316 in k1313 in k1310 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_s32poke((C_word)C_slot(t3,C_fix(1)),t4,t5));}

/* f_1335 in k1405 in k1401 in k1397 in k1393 in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1335,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1339,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 187  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1337 */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1342,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_negativep(((C_word*)t0)[2]))){
/* srfi-4.scm: 189  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[37],lf[38],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_fits_in_unsigned_int_p(((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t2;
f_1342(2,t4,t3);}
else{
/* srfi-4.scm: 191  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[37],lf[39],((C_word*)t0)[2]);}}}

/* k1340 in k1337 */
static void C_ccall f_1342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 192  ##sys#check-range */
t3=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],lf[37]);}

/* k1343 in k1340 in k1337 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_u32poke((C_word)C_slot(t3,C_fix(1)),t4,t5));}

/* setf in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1369(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1369,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1371,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));}

/* f_1371 in setf in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1371,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1375,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 197  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1373 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1375,2,t0,t1);}
t2=(C_word)C_i_check_number_2(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1381,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 199  ##sys#check-range */
t4=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],C_fix(0),t1,((C_word*)t0)[6]);}

/* k1379 in k1373 */
static void C_ccall f_1381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1388,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
/* srfi-4.scm: 200  upd */
t4=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t3);}
else{
/* srfi-4.scm: 202  exact->inexact */
C_exact_to_inexact(3,0,t2,((C_word*)t0)[2]);}}

/* k1386 in k1379 in k1373 */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 200  upd */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* setu in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1280(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1280,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1282,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp));}

/* f_1282 in setu in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1282,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1286,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 170  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1284 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1286,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[7],C_fix(0)))){
/* srfi-4.scm: 173  ##sys#error */
t4=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[6],lf[32],((C_word*)t0)[7]);}
else{
t4=t3;
f_1292(2,t4,C_SCHEME_UNDEFINED);}}

/* k1290 in k1284 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1295,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 174  ##sys#check-range */
t3=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[5],C_fix(0),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1293 in k1290 in k1284 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 175  upd */
t2=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1263(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1263,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1265,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));}

/* f_1265 in set in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1265,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1269,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 163  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1267 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1269,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 165  ##sys#check-range */
t4=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],C_fix(0),t1,((C_word*)t0)[6]);}

/* k1273 in k1267 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 166  upd */
t2=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* get in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_fcall f_1249(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1249,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1251,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp));}

/* f_1251 in get in k1245 in k1241 in k1237 in k1233 in k1229 in k1225 in k1221 in k1217 */
static void C_ccall f_1251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1251,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1255,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 157  length */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k1253 */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1258,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 158  ##sys#check-range */
t3=*((C_word*)lf[31]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],C_fix(0),t1,((C_word*)t0)[2]);}

/* k1256 in k1253 */
static void C_ccall f_1258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 159  acc */
t2=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* len */
static void C_fcall f_1206(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1206,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1208,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp));}

/* f_1208 in len */
static void C_ccall f_1208(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1208,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=(C_word)C_block_size((C_word)C_slot(t2,C_fix(1)));
if(C_truep(((C_word*)t0)[2])){
t5=(C_word)C_fixnum_shift_right(t4,((C_word*)t0)[2]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* ##sys#f64vector-set! */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1203,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u_i_f64vector_set(t2,t3,t4));}

/* ##sys#f32vector-set! */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1200,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u_i_f32vector_set(t2,t3,t4));}

/* ##sys#s32vector-set! */
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1197,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_s32poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#u32vector-set! */
static void C_ccall f_1194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1194,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u32poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#s16vector-set! */
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1191,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_s16poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#u16vector-set! */
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1188,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u16poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#s8vector-set! */
static void C_ccall f_1185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1185,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_s8poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#u8vector-set! */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1182,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u8poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#f64vector-ref */
static void C_ccall f_1179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1179,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_f64vector_ref(&a,2,t2,t3));}

/* ##sys#f32vector-ref */
static void C_ccall f_1176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1176,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_f32vector_ref(&a,2,t2,t3));}

/* ##sys#s32vector-ref */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1173,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_s32peek(&a,2,(C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u32vector-ref */
static void C_ccall f_1170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1170,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_u32peek(&a,2,(C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#s16vector-ref */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1167,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_s16peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u16vector-ref */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1164,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u16peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#s8vector-ref */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1161,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_s8peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u8vector-ref */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1158,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u8peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#check-inexact-interval */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1137,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_number_2(t2,t5);
t7=(C_word)C_i_lessp(t2,t3);
t8=(C_truep(t7)?t7:(C_word)C_i_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm: 97   ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t1,lf[6],t2,t3,t4);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* ##sys#check-exact-interval */
static void C_ccall f_1122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1122,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_exact_2(t2,t5);
t7=(C_word)C_fixnum_lessp(t2,t3);
t8=(C_truep(t7)?t7:(C_word)C_fixnum_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm: 91   ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t1,t5,lf[4],t2,t3,t4);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[287] = {
{"toplevel:srfi_4_scm",(void*)C_srfi_4_toplevel},
{"f_1219:srfi_4_scm",(void*)f_1219},
{"f_1223:srfi_4_scm",(void*)f_1223},
{"f_1227:srfi_4_scm",(void*)f_1227},
{"f_1231:srfi_4_scm",(void*)f_1231},
{"f_1235:srfi_4_scm",(void*)f_1235},
{"f_1239:srfi_4_scm",(void*)f_1239},
{"f_1243:srfi_4_scm",(void*)f_1243},
{"f_1247:srfi_4_scm",(void*)f_1247},
{"f_1395:srfi_4_scm",(void*)f_1395},
{"f_1399:srfi_4_scm",(void*)f_1399},
{"f_1403:srfi_4_scm",(void*)f_1403},
{"f_1407:srfi_4_scm",(void*)f_1407},
{"f_1419:srfi_4_scm",(void*)f_1419},
{"f_1423:srfi_4_scm",(void*)f_1423},
{"f_3623:srfi_4_scm",(void*)f_3623},
{"f_1427:srfi_4_scm",(void*)f_1427},
{"f_3619:srfi_4_scm",(void*)f_3619},
{"f_1431:srfi_4_scm",(void*)f_1431},
{"f_3615:srfi_4_scm",(void*)f_3615},
{"f_1435:srfi_4_scm",(void*)f_1435},
{"f_3611:srfi_4_scm",(void*)f_3611},
{"f_1439:srfi_4_scm",(void*)f_1439},
{"f_3607:srfi_4_scm",(void*)f_3607},
{"f_1443:srfi_4_scm",(void*)f_1443},
{"f_3603:srfi_4_scm",(void*)f_3603},
{"f_1447:srfi_4_scm",(void*)f_1447},
{"f_3599:srfi_4_scm",(void*)f_3599},
{"f_1451:srfi_4_scm",(void*)f_1451},
{"f_3595:srfi_4_scm",(void*)f_3595},
{"f_1455:srfi_4_scm",(void*)f_1455},
{"f_2521:srfi_4_scm",(void*)f_2521},
{"f_2525:srfi_4_scm",(void*)f_2525},
{"f_2529:srfi_4_scm",(void*)f_2529},
{"f_2533:srfi_4_scm",(void*)f_2533},
{"f_2537:srfi_4_scm",(void*)f_2537},
{"f_2541:srfi_4_scm",(void*)f_2541},
{"f_2545:srfi_4_scm",(void*)f_2545},
{"f_2549:srfi_4_scm",(void*)f_2549},
{"f_2636:srfi_4_scm",(void*)f_2636},
{"f_2640:srfi_4_scm",(void*)f_2640},
{"f_2644:srfi_4_scm",(void*)f_2644},
{"f_2648:srfi_4_scm",(void*)f_2648},
{"f_2652:srfi_4_scm",(void*)f_2652},
{"f_2656:srfi_4_scm",(void*)f_2656},
{"f_2660:srfi_4_scm",(void*)f_2660},
{"f_2664:srfi_4_scm",(void*)f_2664},
{"f_2838:srfi_4_scm",(void*)f_2838},
{"f_2842:srfi_4_scm",(void*)f_2842},
{"f_2846:srfi_4_scm",(void*)f_2846},
{"f_2850:srfi_4_scm",(void*)f_2850},
{"f_2854:srfi_4_scm",(void*)f_2854},
{"f_2858:srfi_4_scm",(void*)f_2858},
{"f_2862:srfi_4_scm",(void*)f_2862},
{"f_2866:srfi_4_scm",(void*)f_2866},
{"f_2870:srfi_4_scm",(void*)f_2870},
{"f_2874:srfi_4_scm",(void*)f_2874},
{"f_2878:srfi_4_scm",(void*)f_2878},
{"f_2882:srfi_4_scm",(void*)f_2882},
{"f_2886:srfi_4_scm",(void*)f_2886},
{"f_2890:srfi_4_scm",(void*)f_2890},
{"f_2894:srfi_4_scm",(void*)f_2894},
{"f_2898:srfi_4_scm",(void*)f_2898},
{"f_2902:srfi_4_scm",(void*)f_2902},
{"f_2906:srfi_4_scm",(void*)f_2906},
{"f_2910:srfi_4_scm",(void*)f_2910},
{"f_2914:srfi_4_scm",(void*)f_2914},
{"f_2918:srfi_4_scm",(void*)f_2918},
{"f_2922:srfi_4_scm",(void*)f_2922},
{"f_2926:srfi_4_scm",(void*)f_2926},
{"f_2930:srfi_4_scm",(void*)f_2930},
{"f_3591:srfi_4_scm",(void*)f_3591},
{"f_3473:srfi_4_scm",(void*)f_3473},
{"f_3542:srfi_4_scm",(void*)f_3542},
{"f_3537:srfi_4_scm",(void*)f_3537},
{"f_3475:srfi_4_scm",(void*)f_3475},
{"f_3479:srfi_4_scm",(void*)f_3479},
{"f_3506:srfi_4_scm",(void*)f_3506},
{"f_3511:srfi_4_scm",(void*)f_3511},
{"f_3515:srfi_4_scm",(void*)f_3515},
{"f_3533:srfi_4_scm",(void*)f_3533},
{"f_3524:srfi_4_scm",(void*)f_3524},
{"f_3488:srfi_4_scm",(void*)f_3488},
{"f_3491:srfi_4_scm",(void*)f_3491},
{"f_3464:srfi_4_scm",(void*)f_3464},
{"f_3472:srfi_4_scm",(void*)f_3472},
{"f_3363:srfi_4_scm",(void*)f_3363},
{"f_3415:srfi_4_scm",(void*)f_3415},
{"f_3410:srfi_4_scm",(void*)f_3410},
{"f_3365:srfi_4_scm",(void*)f_3365},
{"f_3369:srfi_4_scm",(void*)f_3369},
{"f_3247:srfi_4_scm",(void*)f_3247},
{"f_3300:srfi_4_scm",(void*)f_3300},
{"f_3295:srfi_4_scm",(void*)f_3295},
{"f_3286:srfi_4_scm",(void*)f_3286},
{"f_3294:srfi_4_scm",(void*)f_3294},
{"f_3249:srfi_4_scm",(void*)f_3249},
{"f_3256:srfi_4_scm",(void*)f_3256},
{"f_3264:srfi_4_scm",(void*)f_3264},
{"f_3274:srfi_4_scm",(void*)f_3274},
{"f_3241:srfi_4_scm",(void*)f_3241},
{"f_3235:srfi_4_scm",(void*)f_3235},
{"f_3229:srfi_4_scm",(void*)f_3229},
{"f_3223:srfi_4_scm",(void*)f_3223},
{"f_3217:srfi_4_scm",(void*)f_3217},
{"f_3211:srfi_4_scm",(void*)f_3211},
{"f_3205:srfi_4_scm",(void*)f_3205},
{"f_3199:srfi_4_scm",(void*)f_3199},
{"f_3156:srfi_4_scm",(void*)f_3156},
{"f_3169:srfi_4_scm",(void*)f_3169},
{"f_3172:srfi_4_scm",(void*)f_3172},
{"f_3178:srfi_4_scm",(void*)f_3178},
{"f_2996:srfi_4_scm",(void*)f_2996},
{"f_3006:srfi_4_scm",(void*)f_3006},
{"f_3009:srfi_4_scm",(void*)f_3009},
{"f_3019:srfi_4_scm",(void*)f_3019},
{"f_2935:srfi_4_scm",(void*)f_2935},
{"f_2945:srfi_4_scm",(void*)f_2945},
{"f_2964:srfi_4_scm",(void*)f_2964},
{"f_2975:srfi_4_scm",(void*)f_2975},
{"f4042:srfi_4_scm",(void*)f4042},
{"f4049:srfi_4_scm",(void*)f4049},
{"f4056:srfi_4_scm",(void*)f4056},
{"f4063:srfi_4_scm",(void*)f4063},
{"f4070:srfi_4_scm",(void*)f4070},
{"f4077:srfi_4_scm",(void*)f4077},
{"f4084:srfi_4_scm",(void*)f4084},
{"f4091:srfi_4_scm",(void*)f4091},
{"f_2772:srfi_4_scm",(void*)f_2772},
{"f_2774:srfi_4_scm",(void*)f_2774},
{"f_2784:srfi_4_scm",(void*)f_2784},
{"f_2743:srfi_4_scm",(void*)f_2743},
{"f_2745:srfi_4_scm",(void*)f_2745},
{"f_2725:srfi_4_scm",(void*)f_2725},
{"f_2727:srfi_4_scm",(void*)f_2727},
{"f_2737:srfi_4_scm",(void*)f_2737},
{"f_2708:srfi_4_scm",(void*)f_2708},
{"f_2702:srfi_4_scm",(void*)f_2702},
{"f_2696:srfi_4_scm",(void*)f_2696},
{"f_2690:srfi_4_scm",(void*)f_2690},
{"f_2684:srfi_4_scm",(void*)f_2684},
{"f_2678:srfi_4_scm",(void*)f_2678},
{"f_2672:srfi_4_scm",(void*)f_2672},
{"f_2666:srfi_4_scm",(void*)f_2666},
{"f_2599:srfi_4_scm",(void*)f_2599},
{"f_2601:srfi_4_scm",(void*)f_2601},
{"f_2605:srfi_4_scm",(void*)f_2605},
{"f_2610:srfi_4_scm",(void*)f_2610},
{"f_2624:srfi_4_scm",(void*)f_2624},
{"f_2628:srfi_4_scm",(void*)f_2628},
{"f_2593:srfi_4_scm",(void*)f_2593},
{"f_2587:srfi_4_scm",(void*)f_2587},
{"f_2581:srfi_4_scm",(void*)f_2581},
{"f_2575:srfi_4_scm",(void*)f_2575},
{"f_2569:srfi_4_scm",(void*)f_2569},
{"f_2563:srfi_4_scm",(void*)f_2563},
{"f_2557:srfi_4_scm",(void*)f_2557},
{"f_2551:srfi_4_scm",(void*)f_2551},
{"f_2481:srfi_4_scm",(void*)f_2481},
{"f_2483:srfi_4_scm",(void*)f_2483},
{"f_2493:srfi_4_scm",(void*)f_2493},
{"f_2498:srfi_4_scm",(void*)f_2498},
{"f_2505:srfi_4_scm",(void*)f_2505},
{"f_2354:srfi_4_scm",(void*)f_2354},
{"f_2418:srfi_4_scm",(void*)f_2418},
{"f_2413:srfi_4_scm",(void*)f_2413},
{"f_2408:srfi_4_scm",(void*)f_2408},
{"f_2356:srfi_4_scm",(void*)f_2356},
{"f_2407:srfi_4_scm",(void*)f_2407},
{"f_2366:srfi_4_scm",(void*)f_2366},
{"f_2397:srfi_4_scm",(void*)f_2397},
{"f_2378:srfi_4_scm",(void*)f_2378},
{"f_2383:srfi_4_scm",(void*)f_2383},
{"f_2227:srfi_4_scm",(void*)f_2227},
{"f_2291:srfi_4_scm",(void*)f_2291},
{"f_2286:srfi_4_scm",(void*)f_2286},
{"f_2281:srfi_4_scm",(void*)f_2281},
{"f_2229:srfi_4_scm",(void*)f_2229},
{"f_2280:srfi_4_scm",(void*)f_2280},
{"f_2239:srfi_4_scm",(void*)f_2239},
{"f_2270:srfi_4_scm",(void*)f_2270},
{"f_2251:srfi_4_scm",(void*)f_2251},
{"f_2256:srfi_4_scm",(void*)f_2256},
{"f_2107:srfi_4_scm",(void*)f_2107},
{"f_2164:srfi_4_scm",(void*)f_2164},
{"f_2159:srfi_4_scm",(void*)f_2159},
{"f_2154:srfi_4_scm",(void*)f_2154},
{"f_2109:srfi_4_scm",(void*)f_2109},
{"f_2153:srfi_4_scm",(void*)f_2153},
{"f_2119:srfi_4_scm",(void*)f_2119},
{"f_2133:srfi_4_scm",(void*)f_2133},
{"f_1987:srfi_4_scm",(void*)f_1987},
{"f_2044:srfi_4_scm",(void*)f_2044},
{"f_2039:srfi_4_scm",(void*)f_2039},
{"f_2034:srfi_4_scm",(void*)f_2034},
{"f_1989:srfi_4_scm",(void*)f_1989},
{"f_2033:srfi_4_scm",(void*)f_2033},
{"f_1999:srfi_4_scm",(void*)f_1999},
{"f_2013:srfi_4_scm",(void*)f_2013},
{"f_1867:srfi_4_scm",(void*)f_1867},
{"f_1924:srfi_4_scm",(void*)f_1924},
{"f_1919:srfi_4_scm",(void*)f_1919},
{"f_1914:srfi_4_scm",(void*)f_1914},
{"f_1869:srfi_4_scm",(void*)f_1869},
{"f_1913:srfi_4_scm",(void*)f_1913},
{"f_1879:srfi_4_scm",(void*)f_1879},
{"f_1888:srfi_4_scm",(void*)f_1888},
{"f_1893:srfi_4_scm",(void*)f_1893},
{"f_1747:srfi_4_scm",(void*)f_1747},
{"f_1804:srfi_4_scm",(void*)f_1804},
{"f_1799:srfi_4_scm",(void*)f_1799},
{"f_1794:srfi_4_scm",(void*)f_1794},
{"f_1749:srfi_4_scm",(void*)f_1749},
{"f_1793:srfi_4_scm",(void*)f_1793},
{"f_1759:srfi_4_scm",(void*)f_1759},
{"f_1768:srfi_4_scm",(void*)f_1768},
{"f_1773:srfi_4_scm",(void*)f_1773},
{"f_1627:srfi_4_scm",(void*)f_1627},
{"f_1684:srfi_4_scm",(void*)f_1684},
{"f_1679:srfi_4_scm",(void*)f_1679},
{"f_1674:srfi_4_scm",(void*)f_1674},
{"f_1629:srfi_4_scm",(void*)f_1629},
{"f_1673:srfi_4_scm",(void*)f_1673},
{"f_1639:srfi_4_scm",(void*)f_1639},
{"f_1648:srfi_4_scm",(void*)f_1648},
{"f_1653:srfi_4_scm",(void*)f_1653},
{"f_1507:srfi_4_scm",(void*)f_1507},
{"f_1564:srfi_4_scm",(void*)f_1564},
{"f_1559:srfi_4_scm",(void*)f_1559},
{"f_1554:srfi_4_scm",(void*)f_1554},
{"f_1509:srfi_4_scm",(void*)f_1509},
{"f_1553:srfi_4_scm",(void*)f_1553},
{"f_1519:srfi_4_scm",(void*)f_1519},
{"f_1528:srfi_4_scm",(void*)f_1528},
{"f_1533:srfi_4_scm",(void*)f_1533},
{"f_1482:srfi_4_scm",(void*)f_1482},
{"f_1489:srfi_4_scm",(void*)f_1489},
{"f_1464:srfi_4_scm",(void*)f_1464},
{"f_1480:srfi_4_scm",(void*)f_1480},
{"f_1462:srfi_4_scm",(void*)f_1462},
{"f_1308:srfi_4_scm",(void*)f_1308},
{"f_1312:srfi_4_scm",(void*)f_1312},
{"f_1315:srfi_4_scm",(void*)f_1315},
{"f_1318:srfi_4_scm",(void*)f_1318},
{"f_1335:srfi_4_scm",(void*)f_1335},
{"f_1339:srfi_4_scm",(void*)f_1339},
{"f_1342:srfi_4_scm",(void*)f_1342},
{"f_1345:srfi_4_scm",(void*)f_1345},
{"f_1369:srfi_4_scm",(void*)f_1369},
{"f_1371:srfi_4_scm",(void*)f_1371},
{"f_1375:srfi_4_scm",(void*)f_1375},
{"f_1381:srfi_4_scm",(void*)f_1381},
{"f_1388:srfi_4_scm",(void*)f_1388},
{"f_1280:srfi_4_scm",(void*)f_1280},
{"f_1282:srfi_4_scm",(void*)f_1282},
{"f_1286:srfi_4_scm",(void*)f_1286},
{"f_1292:srfi_4_scm",(void*)f_1292},
{"f_1295:srfi_4_scm",(void*)f_1295},
{"f_1263:srfi_4_scm",(void*)f_1263},
{"f_1265:srfi_4_scm",(void*)f_1265},
{"f_1269:srfi_4_scm",(void*)f_1269},
{"f_1275:srfi_4_scm",(void*)f_1275},
{"f_1249:srfi_4_scm",(void*)f_1249},
{"f_1251:srfi_4_scm",(void*)f_1251},
{"f_1255:srfi_4_scm",(void*)f_1255},
{"f_1258:srfi_4_scm",(void*)f_1258},
{"f_1206:srfi_4_scm",(void*)f_1206},
{"f_1208:srfi_4_scm",(void*)f_1208},
{"f_1203:srfi_4_scm",(void*)f_1203},
{"f_1200:srfi_4_scm",(void*)f_1200},
{"f_1197:srfi_4_scm",(void*)f_1197},
{"f_1194:srfi_4_scm",(void*)f_1194},
{"f_1191:srfi_4_scm",(void*)f_1191},
{"f_1188:srfi_4_scm",(void*)f_1188},
{"f_1185:srfi_4_scm",(void*)f_1185},
{"f_1182:srfi_4_scm",(void*)f_1182},
{"f_1179:srfi_4_scm",(void*)f_1179},
{"f_1176:srfi_4_scm",(void*)f_1176},
{"f_1173:srfi_4_scm",(void*)f_1173},
{"f_1170:srfi_4_scm",(void*)f_1170},
{"f_1167:srfi_4_scm",(void*)f_1167},
{"f_1164:srfi_4_scm",(void*)f_1164},
{"f_1161:srfi_4_scm",(void*)f_1161},
{"f_1158:srfi_4_scm",(void*)f_1158},
{"f_1137:srfi_4_scm",(void*)f_1137},
{"f_1122:srfi_4_scm",(void*)f_1122},
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
