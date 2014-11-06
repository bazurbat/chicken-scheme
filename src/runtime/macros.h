#ifndef RUNTIME_MACROS_H
#define RUNTIME_MACROS_H

/* Macros: */

#define CHICKEN_gc_root_ref(root)      (((C_GC_ROOT *)(root))->value)
#define CHICKEN_gc_root_set(root, x)   C_mutate2(&((C_GC_ROOT *)(root))->value, (x))

#define CHICKEN_global_ref(root)       C_u_i_car(((C_GC_ROOT *)(root))->value)
#define CHICKEN_global_set(root, x)    C_mutate2(&C_u_i_car(((C_GC_ROOT *)(root))->value), (x))

#define CHICKEN_default_toplevel       ((void *)C_default_5fstub_toplevel)

#define C_align4(n)                (((n) + 3) & ~3)
#define C_align8(n)                (((n) + 7) & ~7)
#define C_align16(n)               (((n) + 15) & ~15)

#define C_aligned8(n)              ((((C_word)(n)) & 7) == 0)

/* This is word-size dependent: */
#ifdef C_SIXTY_FOUR
# define C_align(n)                C_align8(n)
# define C_wordstobytes(n)         ((n) << 3)
# define C_bytestowords(n)         (((n) + 7) >> 3)
# define C_wordsperdouble(n)       (n)
# define C_WORD_MIN                LONG_MIN
# define C_WORD_MAX                LONG_MAX
# define C_UWORD_MAX               ULONG_MAX
#else
# define C_align(n)                C_align4(n)
# define C_wordstobytes(n)         ((n) << 2)
# define C_bytestowords(n)         (((n) + 3) >> 2)
# define C_wordsperdouble(n)       ((n) << 1)
# define C_WORD_MIN                INT_MIN
# define C_WORD_MAX                INT_MAX
# define C_UWORD_MAX               UINT_MAX
#endif

/* Clang and G++ support statement expressions, but only in a limited way */
#if DEBUGBUILD && HAVE_STATEMENT_EXPRESSIONS && !defined(__clang__) && !defined(__cplusplus)
/* These are wrappers around the following idiom:
 *    assert(SOME_PRED(obj));
 *    do_something_with(obj);
 * This works around the fact obj may be an expression with side-effects.
 *
 * To make this work with nested expansions, we need semantics like
 * (let ((x 1)) (let ((x x)) x)) => 1, but in C, int x = x; results in
 * undefined behaviour because x refers to itself.  As a workaround,
 * we keep around a reference to the previous level (one scope up).
 * After initialisation, "previous" is redefined to mean "current".
 */
# define C_VAL1(x)                 C__PREV_TMPST.n1
# define C_VAL2(x)                 C__PREV_TMPST.n2
# define C__STR(x)                 #x
# define C__CHECK_panic(a,s,f,l)                                       \
    ((a) ? (void)0 :                                                     \
     C_panic_hook("Low-level type assertion " s " failed at " f ":" C__STR(l)))
# define C__CHECK_core(v,a,s,x)                                         \
    ({ struct {                                                           \
           typeof(v)n1;                                                     \
       } C__TMPST = { .n1 = (v) };                                           \
       typeof(C__TMPST)C__PREV_TMPST=C__TMPST;                            \
       C__CHECK_panic(a,s,__FILE__,__LINE__);                              \
       x; })
# define C__CHECK2_core(v1,v2,a,s,x)                                    \
    ({ struct {                                                           \
           typeof(v1)n1;                                                    \
           typeof(v2)n2;                                                    \
       } C__TMPST = { .n1 = (v1), .n2 = (v2) };                              \
       typeof(C__TMPST)C__PREV_TMPST=C__TMPST;                            \
       C__CHECK_panic(a,s,__FILE__,__LINE__);                              \
       x; })
# define C_CHECK(v,a,x)            C__CHECK_core(v,a,#a,x)
# define C_CHECK2(v1,v2,a,x)       C__CHECK2_core(v1,v2,a,#a,x)
/*
 * Convenience for using Scheme-predicates.
 */
# define C_CHECKp(v,a,x)           C__CHECK_core(v,C_truep(a),#a "=#t",x)
# define C_CHECK2p(v1,v2,a,x)      C__CHECK2_core(v1,v2,C_truep(a),#a "=#t",x)
#else
# define C_VAL1(x)                 (x)
# define C_VAL2(x)                 (x)
# define C_CHECK(v,a,x)            (x)
# define C_CHECK2(v1,v2,a,x)       (x)
# define C_CHECKp(v,a,x)           (x)
# define C_CHECK2p(v1,v2,a,x)      (x)
#endif

#ifndef C_PROVIDE_LIBC_STUBS
# define C_FILEPTR                  FILE *

# define C_stdin                    stdin
# define C_stdout                   stdout
# define C_stderr                   stderr

# define C_memcpy                   memcpy
# define C_memcmp                   memcmp
# define C_strncpy                  strncpy
# define C_strcmp                   strcmp
# define C_strncmp                  strncmp
# define C_strlen                   strlen
# define C_memset                   memset
# define C_memmove                  memmove
# if defined(_WIN32)
#  define C_strncasecmp              _strnicmp
# else
#  define C_strncasecmp              strncasecmp
# endif
# define C_malloc                   malloc
# define C_calloc                   calloc
# define C_free                     free
# define C_strchr                   strchr
# define C_realloc                  realloc
# define C_strdup                   strdup
# define C_strtol                   strtol
# define C_strtoll                  strtoll
# define C_strtod                   strtod
# define C_strtoul                  strtoul
# define C_fopen                    fopen
# define C_fclose                   fclose
# define C_strpbrk                  strpbrk
# if defined(_WIN32)
#  define C_snprintf                _snprintf
# else
#  define C_snprintf                snprintf
# endif
# define C_printf                   printf
# define C_fprintf                  fprintf
# define C_vfprintf                 vfprintf
# define C_fflush                   fflush
# define C_getchar                  getchar
# define C_exit                     exit
# define C_dlopen                   dlopen
# define C_dlclose                  dlclose
# define C_dlsym                    dlsym
# define C_fwrite                   fwrite
# define C_fread                    fread
# define C_fputs                    fputs
# define C_fputc                    fputc
# define C_putchar                  putchar
# if (defined getc_unlocked || _POSIX_C_SOURCE >= 199506L)
#  define C_getc                    getc_unlocked
# else
#  define C_getc                    getc
# endif
# define C_fgetc                    fgetc
# define C_fgets                    fgets
# define C_ungetc                   ungetc
# define C_system                   system
# if defined(_MSC_VER)
#  define C_isatty                  _isatty
# else
#  define C_isatty                  isatty
# endif
# define C_fileno                   fileno
# define C_select                   select
# if defined(HAVE_SIGACTION)
# define C_sigaction                sigaction
# endif
# define C_signal                   signal
# define C_getrusage                getrusage
# define C_tolower                  tolower
# define C_toupper                  toupper
# define C_gettimeofday             gettimeofday
# define C_gmtime                   gmtime
# define C_localtime                localtime
/*
 * It is undefined whether regular setjmp/longjmp save/restore signal mask
 * so try to use versions that we know won't try to save & restore.
 */
# if defined(HAVE_SIGSETJMP)
#   define C_sigsetjmp              sigsetjmp
#   define C_siglongjmp             siglongjmp
# endif
# ifdef HAVE_SIGPROCMASK
#  define C_sigprocmask             sigprocmask
# endif
# define C_setjmp                   setjmp
# define C_longjmp                  longjmp
# define C_alloca                   alloca
# define C_strerror                 strerror
# define C_isalpha                  isalpha
# define C_isdigit                  isdigit
# define C_isspace                  isspace
# define C_islower                  islower
# define C_isupper                  isupper
# define C_sin                      sin
# define C_cos                      cos
# define C_tan                      tan
# define C_asin                     asin
# define C_acos                     acos
# define C_atan                     atan
# define C_atan2                    atan2
# define C_log                      log
# define C_exp                      exp
# define C_pow                      pow
# define C_sqrt                     sqrt
# define C_ceil                     ceil
# define C_floor                    floor
# define C_round                    round
# define C_trunc                    trunc
# define C_fabs                     fabs
# define C_modf                     modf
# define C_readlink                 readlink
# define C_getcwd                   getcwd
# define C_access                   access
# if defined(_MSC_VER)
#  define C_getpid                  _getpid
# else
#  define C_getpid                  getpid
# endif
# define C_getenv                   getenv
# ifdef __linux__
extern double round(double);
extern double trunc(double);
# elif defined(_MSC_VER)
# define round(fp) ((int)((fp) >= 0 ? (fp) + 0.5 : (fp) - 0.5))
# define trunc(fp) ((int)(fp))
# endif
#else
/* provide this file and define C_PROVIDE_LIBC_STUBS if you want to use
   your own libc-replacements or -wrappers */
# include "chicken-libc-stubs.h"
#endif

#ifdef C_LLP
# define C_strtow                  C_strtoll
#else
# define C_strtow                  C_strtol
#endif

#define C_return(x)                return (x)
#define C_resize_stack(n)          C_do_resize_stack(n)
#define C_memcpy_slots(t, f, n)    C_memcpy((t), (f), (n) * sizeof(C_word))
/* Without check: initialisation of a newly allocated header */
#define C_block_header_init(x,h)   (((C_SCHEME_BLOCK *)(x))->header = (h))
/* These two must result in an lvalue, hence the (*foo(&bar)) faffery */
#define C_block_header(x)          (*C_CHECKp(x,C_blockp((C_word)C_VAL1(x)),&(((C_SCHEME_BLOCK *)(C_VAL1(x)))->header)))
#define C_block_item(x,i)          (*C_CHECK2(x,i,(C_header_size(C_VAL1(x))>(C_VAL2(i))),&(((C_SCHEME_BLOCK *)(C_VAL1(x)))->data [ C_VAL2(i) ])))
#define C_set_block_item(x,i,y)    (C_block_item(x, i) = (y))
#define C_header_bits(bh)          (C_block_header(bh) & C_HEADER_BITS_MASK)
#define C_header_size(bh)          (C_block_header(bh) & C_HEADER_SIZE_MASK)
#define C_make_header(type, size)  ((C_header)(((type) & C_HEADER_BITS_MASK) | ((size) & C_HEADER_SIZE_MASK)))
#define C_symbol_value(x)          (C_block_item(x, 0))
#define C_save(x)                  (*(--C_temporary_stack) = (C_word)(x))
#define C_adjust_stack(n)          (C_temporary_stack -= (n))
#define C_rescue(x, i)             (C_temporary_stack[ i ] = (x))
#define C_save_rest(s, c, n)       do { if((C_temporary_stack - (c - (n))) < C_temporary_stack_limit) C_temp_stack_overflow(); for(va_start(v, s); c-- > (n); C_save(va_arg(v, C_word))) ; } while(0)
#define C_rest_count(c)            ((C_temporary_stack_bottom - C_temporary_stack) - (c))
#define C_restore                  (*(C_temporary_stack++))
#define C_heaptop                  ((C_word **)(&C_fromspace_top))
#define C_pick(n)                  (C_temporary_stack[ n ])
#define C_drop(n)                  (C_temporary_stack += (n))
#define C_alloc(n)                 ((C_word *)C_alloca((n) * sizeof(C_word)))
#if defined (__llvm__) && defined (__GNUC__)
# if defined (__i386__)
#  define C_stack_pointer ({C_word *sp; __asm__ __volatile__ ("movl %%esp,%0" : "=r" (sp) :); sp; })
# elif defined (__x86_64__)
#  define C_stack_pointer ({C_word *sp; __asm__ __volatile__ ("movq %%rsp,%0" : "=r" (sp) :); sp; })
# else
#  define C_stack_pointer ((C_word *)C_alloca(1))
# endif
#else
# define C_stack_pointer ((C_word *)C_alloca(0))
#endif
#define C_stack_pointer_test       ((C_word *)C_alloca(1))
#define C_demand_2(n)              (((C_word *)C_fromspace_top + (n)) < (C_word *)C_fromspace_limit)
#define C_fix(n)                   (((C_word)(n) << C_FIXNUM_SHIFT) | C_FIXNUM_BIT)
#define C_unfix(x)                 C_CHECKp(x,C_fixnump(C_VAL1(x)),((C_VAL1(x)) >> C_FIXNUM_SHIFT))
#define C_make_character(c)        (((((C_uword)(c)) & C_CHAR_BIT_MASK) << C_CHAR_SHIFT) | C_CHARACTER_BITS)
#define C_character_code(x)        C_CHECKp(x,C_charp(C_VAL1(x)),((C_word)(C_VAL1(x)) >> C_CHAR_SHIFT) & C_CHAR_BIT_MASK)
#define C_flonum_magnitude(x)      (*C_CHECKp(x,C_flonump(C_VAL1(x)),(double *)C_data_pointer(C_VAL1(x))))
/* XXX Sometimes this is (ab)used on bytevectors (ie, blob=? uses string_compare) */
#define C_c_string(x)              C_CHECK(x,(C_truep(C_stringp(C_VAL1(x))) || C_truep(C_bytevectorp(C_VAL1(x)))),(C_char *)C_data_pointer(C_VAL1(x)))

#define C_c_pointer(x)             ((void *)(x))
#define C_c_pointer_nn(x)          ((void *)C_block_item(x, 0))
#define C_truep(x)                 ((x) != C_SCHEME_FALSE)
#define C_immediatep(x)            ((x) & C_IMMEDIATE_MARK_BITS)
#define C_mk_bool(x)               ((x) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_mk_nbool(x)              ((x) ? C_SCHEME_FALSE : C_SCHEME_TRUE)
#define C_port_file(p)             C_CHECKp(p,C_portp(C_VAL1(p)),(C_FILEPTR)C_block_item(C_VAL1(p), 0))
#define C_data_pointer(b)          C_CHECKp(b,C_blockp((C_word)C_VAL1(b)),(void *)(((C_SCHEME_BLOCK *)(C_VAL1(b)))->data))
#define C_fitsinfixnump(n)         (((n) & C_INT_SIGN_BIT) == (((n) & C_INT_TOP_BIT) << 1))
#define C_ufitsinfixnump(n)        (((n) & (C_INT_SIGN_BIT | (C_INT_SIGN_BIT >> 1))) == 0)
#define C_quickflonumtruncate(n)   (C_fix((C_word)C_flonum_magnitude(n)))
#define C_and(x, y)                (C_truep(x) ? (y) : C_SCHEME_FALSE)
#define C_c_bytevector(x)          ((unsigned char *)C_data_pointer(x))
#define C_c_bytevector_or_null(x)  ((unsigned char *)C_data_pointer_or_null(x))
#define C_srfi_4_vector(x)         C_data_pointer(C_block_item(x,1))
#define C_c_u8vector(x)            ((unsigned char *)C_srfi_4_vector(x))
#define C_c_u8vector_or_null(x)    ((unsigned char *)C_srfi_4_vector_or_null(x))
#define C_c_s8vector(x)            ((signed char *)C_srfi_4_vector(x))
#define C_c_s8vector_or_null(x)    ((signed char *)C_srfi_4_vector_or_null(x))
#define C_c_u16vector(x)           ((unsigned short *)C_srfi_4_vector(x))
#define C_c_u16vector_or_null(x)   ((unsigned short *)C_srfi_4_vector_or_null(x))
#define C_c_s16vector(x)           ((short *)C_srfi_4_vector(x))
#define C_c_s16vector_or_null(x)   ((short *)C_srfi_4_vector_or_null(x))
#define C_c_u32vector(x)           ((C_u32 *)C_srfi_4_vector(x))
#define C_c_u32vector_or_null(x)   ((C_u32 *)C_srfi_4_vector_or_null(x))
#define C_c_s32vector(x)           ((C_s32 *)C_srfi_4_vector(x))
#define C_c_s32vector_or_null(x)   ((C_s32 *)C_srfi_4_vector_or_null(x))
#define C_c_f32vector(x)           ((float *)C_srfi_4_vector(x))
#define C_c_f32vector_or_null(x)   ((float *)C_srfi_4_vector_or_null(x))
#define C_c_f64vector(x)           ((double *)C_srfi_4_vector(x))
#define C_c_f64vector_or_null(x)   ((double *)C_srfi_4_vector_or_null(x))
#define C_c_pointer_vector(x)      ((void **)C_data_pointer(C_block_item((x), 2)))

#define C_isnan(f)                 isnan(f)
#define C_isinf(f)                 isinf(f)

#ifdef C_STRESS_TEST
# define C_STRESS_FAILURE          3
# define C_stress                  (rand() % C_STRESS_FAILURE)
#else
# define C_stress                  1
#endif

#define C_stack_overflow_check    C_stack_check1(C_stack_overflow())

#if C_STACK_GROWS_DOWNWARD
# define C_demand(n)              (C_stress && ((C_word)(C_stack_pointer - C_stack_limit) > (n)))
# define C_stack_probe(p)         (C_stress && ((C_word *)(p) >= C_stack_limit))

# define C_stack_check1(err)      if(!C_disable_overflow_check) {       \
        do { C_byte *_sp = (C_byte*)(C_stack_pointer); \
             if(_sp < (C_byte *)C_stack_limit && \
                ((C_byte *)C_stack_limit - _sp) > C_STACK_RESERVE) \
                 err; }                          \
        while(0); }

#else
# define C_demand(n)              (C_stress && ((C_word)(C_stack_limit - C_stack_pointer) > (n)))
# define C_stack_probe(p)         (C_stress && ((C_word *)(p) < C_stack_limit))

# define C_stack_check1(err)      if(!C_disable_overflow_check) {       \
        do { C_byte *_sp = (C_byte*)(C_stack_pointer); \
             if(_sp > (C_byte *)C_stack_limit && \
                (_sp - (C_byte *)C_stack_limit) > C_STACK_RESERVE) \
                 err; }                          \
        while(0); }

#endif

#define C_zero_length_p(x)        C_mk_bool(C_header_size(x) == 0)
#define C_boundp(x)               C_mk_bool(C_block_item(x, 0) != C_SCHEME_UNBOUND)
#define C_unboundvaluep(x)        C_mk_bool((x) == C_SCHEME_UNBOUND)
#define C_blockp(x)               C_mk_bool(!C_immediatep(x))
#define C_forwardedp(x)           C_mk_bool((C_block_header(x) & C_GC_FORWARDING_BIT) != 0)
#define C_immp(x)                 C_mk_bool(C_immediatep(x))
#define C_flonump(x)              C_mk_bool(C_block_header(x) == C_FLONUM_TAG)
#define C_stringp(x)              C_mk_bool(C_header_bits(x) == C_STRING_TYPE)
#define C_symbolp(x)              C_mk_bool(C_block_header(x) == C_SYMBOL_TAG)
#define C_pairp(x)                C_mk_bool(C_block_header(x) == C_PAIR_TAG)
#define C_closurep(x)             C_mk_bool(C_header_bits(x) == C_CLOSURE_TYPE)
#define C_vectorp(x)              C_mk_bool(C_header_bits(x) == C_VECTOR_TYPE)
#define C_bytevectorp(x)          C_mk_bool(C_header_bits(x) == C_BYTEVECTOR_TYPE)
#define C_portp(x)                C_mk_bool(C_header_bits(x) == C_PORT_TYPE)
#define C_structurep(x)           C_mk_bool(C_header_bits(x) == C_STRUCTURE_TYPE)
#define C_locativep(x)            C_mk_bool(C_block_header(x) == C_LOCATIVE_TAG)
#define C_charp(x)                C_mk_bool(((x) & C_IMMEDIATE_TYPE_BITS) == C_CHARACTER_BITS)
#define C_booleanp(x)             C_mk_bool(((x) & C_IMMEDIATE_TYPE_BITS) == C_BOOLEAN_BITS)
#define C_eofp(x)                 C_mk_bool((x) == C_SCHEME_END_OF_FILE)
#define C_undefinedp(x)           C_mk_bool((x) == C_SCHEME_UNDEFINED)
#define C_fixnump(x)              C_mk_bool((x) & C_FIXNUM_BIT)
#define C_nfixnump(x)             C_mk_nbool((x) & C_FIXNUM_BIT)
#define C_pointerp(x)             C_mk_bool(C_block_header(x) == C_POINTER_TAG)
#define C_taggedpointerp(x)       C_mk_bool(C_block_header(x) == C_TAGGED_POINTER_TAG)
#define C_lambdainfop(x)          C_mk_bool(C_header_bits(x) == C_LAMBDA_INFO_TYPE)
#define C_anypointerp(x)          C_mk_bool(C_block_header(x) == C_POINTER_TAG || C_block_header(x) == C_TAGGED_POINTER_TAG)
#define C_specialp(x)             C_mk_bool(C_header_bits(x) & C_SPECIALBLOCK_BIT)
#define C_byteblockp(x)           C_mk_bool(C_header_bits(x) & C_BYTEBLOCK_BIT)
#define C_anyp(x)                 C_SCHEME_TRUE
#define C_sametypep(x, y)         C_mk_bool(C_header_bits(x) == C_header_bits(y))
#define C_eqp(x, y)               C_mk_bool((x) == (y))
#define C_vemptyp(x)              C_mk_bool(C_header_size(x) == 0)
#define C_notvemptyp(x)           C_mk_bool(C_header_size(x) > 0)
#define C_u_i_exactp(x)           C_mk_bool((x) & C_FIXNUM_BIT)
#define C_u_i_inexactp(x)         C_mk_bool(((x) & C_FIXNUM_BIT) == 0)

#define C_slot(x, i)              C_block_item(x, C_unfix(i))
#define C_subbyte(x, i)           C_fix(((C_byte *)C_data_pointer(x))[ C_unfix(i) ] & 0xff)
#define C_subchar(x, i)           C_make_character(((C_uchar *)C_data_pointer(x))[ C_unfix(i) ])
#define C_setbyte(x, i, n)        (((C_byte *)C_data_pointer(x))[ C_unfix(i) ] = C_unfix(n), C_SCHEME_UNDEFINED)
#define C_setsubchar(x, i, n)     (((C_char *)C_data_pointer(x))[ C_unfix(i) ] = C_character_code(n), C_SCHEME_UNDEFINED)
#define C_setsubbyte(x, i, n)     (((C_char *)C_data_pointer(x))[ C_unfix(i) ] = C_unfix(n), C_SCHEME_UNDEFINED)

#define C_fixnum_times(n1, n2)          (C_fix(C_unfix(n1) * C_unfix(n2)))
#define C_u_fixnum_plus(n1, n2)         (((n1) - C_FIXNUM_BIT) + (n2))
#define C_fixnum_plus(n1, n2)           (C_u_fixnum_plus(n1, n2) | C_FIXNUM_BIT)
#define C_u_fixnum_difference(n1, n2)   ((n1) - (n2) + C_FIXNUM_BIT)
#define C_fixnum_difference(n1, n2)     (C_u_fixnum_difference(n1, n2) | C_FIXNUM_BIT)
#define C_u_fixnum_divide(n1, n2)       (C_fix(C_unfix(n1) / C_unfix(n2)))
#define C_u_fixnum_modulo(n1, n2)       (C_fix(C_unfix(n1) % C_unfix(n2)))
#define C_u_fixnum_and(n1, n2)          ((n1) & (n2))
#define C_fixnum_and(n1, n2)            (C_u_fixnum_and(n1, n2) | C_FIXNUM_BIT)
#define C_u_fixnum_or(n1, n2)           ((n1) | (n2))
#define C_fixnum_or(n1, n2)             (C_u_fixnum_or(n1, n2) | C_FIXNUM_BIT)
#define C_fixnum_xor(n1, n2)            (((n1) ^ (n2)) | C_FIXNUM_BIT)
#define C_fixnum_not(n)                 ((~(n)) | C_FIXNUM_BIT)
#define C_fixnum_shift_left(n1, n2)     (C_fix(C_unfix(n1) << C_unfix(n2)))
#define C_fixnum_shift_right(n1, n2)    (((n1) >> C_unfix(n2)) | C_FIXNUM_BIT)
#define C_u_fixnum_negate(n)            (-(n) + 2 * C_FIXNUM_BIT)
#define C_fixnum_negate(n)              (C_u_fixnum_negate(n) | C_FIXNUM_BIT)
#define C_fixnum_greaterp(n1, n2)       (C_mk_bool((C_word)(n1) > (C_word)(n2)))
#define C_fixnum_lessp(n1, n2)          (C_mk_bool((C_word)(n1) < (C_word)(n2)))
#define C_fixnum_greater_or_equal_p(n1, n2) (C_mk_bool((C_word)(n1) >= (C_word)(n2)))
#define C_fixnum_less_or_equal_p(n1, n2)(C_mk_bool((C_word)(n1) <= (C_word)(n2)))
#define C_u_fixnum_increase(n)          ((n) + (1 << C_FIXNUM_SHIFT))
#define C_fixnum_increase(n)            (C_u_fixnum_increase(n) | C_FIXNUM_BIT)
#define C_u_fixnum_decrease(n)          ((n) - (1 << C_FIXNUM_SHIFT))
#define C_fixnum_decrease(n)            (C_u_fixnum_decrease(n) | C_FIXNUM_BIT)
#define C_fixnum_abs(n)                 C_fix(abs(C_unfix(n)))

#define C_flonum_equalp(n1, n2)         C_mk_bool(C_flonum_magnitude(n1) == C_flonum_magnitude(n2))
#define C_flonum_greaterp(n1, n2)       C_mk_bool(C_flonum_magnitude(n1) > C_flonum_magnitude(n2))
#define C_flonum_lessp(n1, n2)          C_mk_bool(C_flonum_magnitude(n1) < C_flonum_magnitude(n2))
#define C_flonum_greater_or_equal_p(n1, n2) C_mk_bool(C_flonum_magnitude(n1) >= C_flonum_magnitude(n2))
#define C_flonum_less_or_equal_p(n1, n2) C_mk_bool(C_flonum_magnitude(n1) <= C_flonum_magnitude(n2))

#define C_a_i_flonum_plus(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) + C_flonum_magnitude(n2))
#define C_a_i_flonum_difference(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) - C_flonum_magnitude(n2))
#define C_a_i_flonum_times(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) * C_flonum_magnitude(n2))
#define C_a_i_flonum_quotient(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) / C_flonum_magnitude(n2))
#define C_a_i_flonum_negate(ptr, c, n)  C_flonum(ptr, -C_flonum_magnitude(n))

#define C_a_i_address_to_pointer(ptr, c, addr)  C_mpointer(ptr, (void *)C_num_to_unsigned_int(addr))
#define C_a_i_pointer_to_address(ptr, c, pptr)  C_unsigned_int_to_num(ptr, (unsigned int)C_c_pointer_nn(pptr))

#define C_display_fixnum(p, n)          (C_fprintf(C_port_file(p), C_text("%d"), C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_display_char(p, c)            (C_fputc(C_character_code(c), C_port_file(p)), C_SCHEME_UNDEFINED)
#define C_display_string(p, s)          (C_fwrite(C_data_pointer(s), sizeof(C_char), C_header_size(s), \
                                                  C_port_file(p)), C_SCHEME_UNDEFINED)
#define C_flush_output(port)            (C_fflush(C_port_file(port)), C_SCHEME_UNDEFINED)

#define C_fix_to_char(x)                (C_make_character(C_unfix(x)))
#define C_char_to_fix(x)                (C_fix(C_character_code(x)))
#define C_i_char_equalp(x, y)           C_mk_bool(C_character_code(x) == C_character_code(y))
#define C_i_char_greaterp(x, y)         C_mk_bool(C_character_code(x) > C_character_code(y))
#define C_i_char_lessp(x, y)            C_mk_bool(C_character_code(x) < C_character_code(y))
#define C_i_char_greater_or_equal_p(x, y)  C_mk_bool(C_character_code(x) >= C_character_code(y))
#define C_i_char_less_or_equal_p(x, y)  C_mk_bool(C_character_code(x) <= C_character_code(y))
#define C_substring_copy(s1, s2, start1, end1, start2) \
    (C_memmove((C_char *)C_data_pointer(s2) + C_unfix(start2), \
               (C_char *)C_data_pointer(s1) + C_unfix(start1), \
               C_unfix(end1) - C_unfix(start1) ), C_SCHEME_UNDEFINED)
#define C_substring_compare(s1, s2, start1, start2, len) \
    C_mk_bool(C_memcmp((C_char *)C_data_pointer(s1) + C_unfix(start1), \
                       (C_char *)C_data_pointer(s2) + C_unfix(start2), \
                       C_unfix(len) ) == 0)
#define C_substring_compare_case_insensitive(s1, s2, start1, start2, len) \
    C_mk_bool(C_memcasecmp((C_char *)C_data_pointer(s1) + C_unfix(start1), \
                           (C_char *)C_data_pointer(s2) + C_unfix(start2), \
                           C_unfix(len) ) == 0)
/* this does not use C_mutate: */
#define C_subvector_copy(v1, v2, start1, end1, start2) \
    (C_memcpy_slots((C_char *)C_data_pointer(v2) + C_unfix(start2), \
                    (C_char *)C_data_pointer(v1) + C_unfix(start1), \
                    C_unfix(end1) - C_unfix(start1) ), C_SCHEME_UNDEFINED)
#define C_words(n)                      C_fix(C_bytestowords(C_unfix(n)))
#define C_bytes(n)                      C_fix(C_wordstobytes(C_unfix(n)))
#define C_random_fixnum(n)              C_fix((C_word)(((double)rand())/(RAND_MAX + 1.0) * C_unfix(n)))
#define C_randomize(n)                  (srand(C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_block_size(x)                 C_fix(C_header_size(x))
#define C_pointer_address(x)            ((C_byte *)C_block_item((x), 0))
#define C_block_address(ptr, n, x)      C_a_unsigned_int_to_num(ptr, n, x)
#define C_offset_pointer(x, y)          (C_pointer_address(x) + (y))
#define C_kontinue(k, r)                ((C_proc2)(void *)C_block_item(k,0))(2, (k), (r))
#define C_fetch_byte(x, p)              (((unsigned C_byte *)C_data_pointer(x))[ p ])
#define C_poke_integer(x, i, n)         (C_set_block_item(x, C_unfix(i), C_num_to_int(n)), C_SCHEME_UNDEFINED)
#define C_pointer_to_block(p, x)        (C_set_block_item(p, 0, (C_word)C_data_pointer(x)), C_SCHEME_UNDEFINED)
#define C_null_pointerp(x)              C_mk_bool((void *)C_block_item(x, 0) == NULL)
#define C_update_pointer(p, ptr)        (C_set_block_item(ptr, 0, C_num_to_unsigned_int(p)), C_SCHEME_UNDEFINED)
#define C_copy_pointer(from, to)        (C_set_block_item(to, 0, C_block_item(from, 0)), C_SCHEME_UNDEFINED)
#define C_pointer_to_object(ptr)        C_block_item(ptr, 0)

#define C_direct_return(dk, x)          (C_kontinue(dk, x), C_SCHEME_UNDEFINED)

#ifdef C_SIXTY_FOUR
# define C_poke_integer_32(x, i, n)     (((C_s32 *)C_data_pointer(x))[ C_unfix(i) ] = C_unfix(n), C_SCHEME_UNDEFINED)
#else
# define C_poke_integer_32              C_poke_integer
#endif

#define C_copy_memory(to, from, n)      (C_memcpy(C_data_pointer(to), C_data_pointer(from), C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_copy_ptr_memory(to, from, n, toff, foff) \
    (C_memmove(C_pointer_address(to) + C_unfix(toff), C_pointer_address(from) + C_unfix(foff), \
               C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_set_memory(to, c, n)          (C_memset(C_data_pointer(to), C_character_code(c), C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_string_compare(to, from, n)   C_fix(C_memcmp(C_c_string(to), C_c_string(from), C_unfix(n)))
#define C_string_compare_case_insensitive(from, to, n) \
    C_fix(C_memcasecmp(C_c_string(from), C_c_string(to), C_unfix(n)))
#define C_rename_file(old, new)         C_fix(rename(C_c_string(old), C_c_string(new)))
#define C_delete_file(fname)            C_fix(remove(C_c_string(fname)))
#define C_poke_double(b, i, n)          (((double *)C_data_pointer(b))[ C_unfix(i) ] = C_c_double(n), C_SCHEME_UNDEFINED)
#define C_poke_c_string(b, i, from, s)  (C_strlcpy((char *)C_block_item(b, C_unfix(i)), C_data_pointer(from), s), C_SCHEME_UNDEFINED)
#define C_peek_fixnum(b, i)             C_fix(C_block_item(b, C_unfix(i)))
#define C_peek_byte(ptr, i)             C_fix(((unsigned char *)C_u_i_car(ptr))[ C_unfix(i) ])
#define C_dupstr(s)                     C_strdup(C_data_pointer(s))
#define C_poke_pointer(b, i, x)         (C_set_block_item(b, C_unfix(i), (C_word)C_data_pointer(x)), C_SCHEME_UNDEFINED)
#define C_poke_pointer_or_null(b, i, x) (C_set_block_item(b, C_unfix(i), (C_word)C_data_pointer_or_null(x)), C_SCHEME_UNDEFINED)
#define C_qfree(ptr)                    (C_free(C_c_pointer_nn(ptr)), C_SCHEME_UNDEFINED)

#define C_tty_portp(p)                  C_mk_bool(C_isatty(fileno(C_port_file(p))))

#define C_emit_eval_trace_info(x, y, z) C_emit_trace_info2("<eval>", x, y, z)
#define C_emit_syntax_trace_info(x, y, z) C_emit_trace_info2("<syntax>", x, y, z)

/* These expect C_VECTOR_TYPE to be 0: */
#define C_vector_to_structure(v)        (C_block_header(v) |= C_STRUCTURE_TYPE, C_SCHEME_UNDEFINED)
#define C_vector_to_closure(v)          (C_block_header(v) |= C_CLOSURE_TYPE, C_SCHEME_UNDEFINED)
#define C_string_to_bytevector(s)       (C_block_header(s) = C_header_size(s) | C_BYTEVECTOR_TYPE, C_SCHEME_UNDEFINED)
#define C_string_to_lambdainfo(s)       (C_block_header(s) = C_header_size(s) | C_LAMBDA_INFO_TYPE, C_SCHEME_UNDEFINED)

#ifdef C_TIMER_INTERRUPTS
# ifdef PARANOIA
#  define C_check_for_interrupt         C_paranoid_check_for_interrupt()
# else
#  define C_check_for_interrupt         if(--C_timer_interrupt_counter <= 0) C_raise_interrupt(C_TIMER_INTERRUPT_NUMBER)
# endif
#else
# define C_check_for_interrupt
#endif

#define C_set_initial_timer_interrupt_period(n) \
    (C_initial_timer_interrupt_period = C_unfix(n), C_SCHEME_UNDEFINED)


#ifdef HAVE_STATEMENT_EXPRESSIONS
# define C_a_i(a, n)                    ({C_word *tmp = *a; *a += (n); tmp; })
# define C_a_i_cons(a, n, car, cdr)     ({C_word tmp = (C_word)(*a); (*a)[0] = C_PAIR_TYPE | 2; *a += 3; \
                                          C_set_block_item(tmp, 0, car); C_set_block_item(tmp, 1, cdr); tmp; })
#else
# define C_a_i_cons(a, n, car, cdr)     C_a_pair(a, car, cdr)
#endif /* HAVE_STATEMENT_EXPRESSIONS */

#define C_a_i_flonum(ptr, i, n)         C_flonum(ptr, n)
#define C_a_i_data_mpointer(ptr, n, x)  C_mpointer(ptr, C_data_pointer(x))
#define C_a_i_fix_to_flo(p, n, f)       C_flonum(p, C_unfix(f))
#define C_cast_to_flonum(n)             ((double)(n))
#define C_a_i_mpointer(ptr, n, x)       C_mpointer(ptr, (x))
#define C_a_u_i_pointer_inc(ptr, n, p, i) C_mpointer(ptr, (C_char *)(p) + C_unfix(i))
#define C_pointer_eqp(x, y)             C_mk_bool(C_c_pointer_nn(x) == C_c_pointer_nn(y))
#define C_a_int_to_num(ptr, n, i)       C_int_to_num(ptr, i)
#define C_a_unsigned_int_to_num(ptr, n, i)  C_unsigned_int_to_num(ptr, i)
#define C_a_double_to_num(ptr, n)       C_double_to_number(C_flonum(ptr, n))
#define C_a_i_vector                    C_vector
#define C_list                          C_a_i_list
#define C_i_setslot(x, i, y)            (C_mutate2(&C_block_item(x, C_unfix(i)), y), C_SCHEME_UNDEFINED)
#define C_i_set_i_slot(x, i, y)         (C_set_block_item(x, C_unfix(i), y), C_SCHEME_UNDEFINED)
#define C_u_i_set_car(p, x)             (C_mutate2(&C_u_i_car(p), x), C_SCHEME_UNDEFINED)
#define C_u_i_set_cdr(p, x)             (C_mutate2(&C_u_i_cdr(p), x), C_SCHEME_UNDEFINED)
#define C_a_i_putprop(p, c, x, y, z)    C_putprop(p, x, y, z)

#define C_i_not(x)                      (C_truep(x) ? C_SCHEME_FALSE : C_SCHEME_TRUE)
#define C_i_equalp(x, y)                C_mk_bool(C_equalp((x), (y)))
#define C_i_fixnumevenp(x)              C_mk_nbool((x) & 0x00000002)
#define C_i_fixnumoddp(x)               C_mk_bool((x) & 0x00000002)
#define C_i_nullp(x)                    C_mk_bool((x) == C_SCHEME_END_OF_LIST)
#define C_i_structurep(x, s)            C_mk_bool(!C_immediatep(x) && C_header_bits(x) == C_STRUCTURE_TYPE && C_block_item(x, 0) == (s))

#define C_u_i_char_alphabeticp(x)       C_mk_bool(C_character_code(x) < 0x100 && C_isalpha(C_character_code(x)))
#define C_u_i_char_numericp(x)          C_mk_bool(C_character_code(x) < 0x100 && C_isdigit(C_character_code(x)))
#define C_u_i_char_whitespacep(x)       C_mk_bool(C_character_code(x) < 0x100 && C_isspace(C_character_code(x)))
#define C_u_i_char_upper_casep(x)       C_mk_bool(C_character_code(x) < 0x100 && C_isupper(C_character_code(x)))
#define C_u_i_char_lower_casep(x)       C_mk_bool(C_character_code(x) < 0x100 && C_islower(C_character_code(x)))

#define C_u_i_char_upcase(x)            (C_character_code(x) < 0x100 ? C_make_character(C_toupper(C_character_code(x))) : (x))
#define C_u_i_char_downcase(x)          (C_character_code(x) < 0x100 ? C_make_character(C_tolower(C_character_code(x))) : (x))

#define C_i_list_ref(lst, i)            C_i_car(C_i_list_tail(lst, i))
#define C_u_i_list_ref(lst, i)          C_u_i_car(C_i_list_tail(lst, i))

#define C_u_i_car(x)                    (*C_CHECKp(x,C_pairp(C_VAL1(x)),&C_block_item(C_VAL1(x), 0)))
#define C_u_i_cdr(x)                    (*C_CHECKp(x,C_pairp(C_VAL1(x)),&C_block_item(C_VAL1(x), 1)))
#define C_u_i_caar(x)                   C_u_i_car( C_u_i_car( x ) )
#define C_u_i_cadr(x)                   C_u_i_car( C_u_i_cdr( x ) )
#define C_u_i_cdar(x)                   C_u_i_cdr( C_u_i_car( x ) )
#define C_u_i_cddr(x)                   C_u_i_cdr( C_u_i_cdr( x ) )
#define C_u_i_caaar(x)                  C_u_i_car( C_u_i_caar( x ) )
#define C_u_i_caadr(x)                  C_u_i_car( C_u_i_cadr( x ) )
#define C_u_i_cadar(x)                  C_u_i_car( C_u_i_cdar( x ) )
#define C_u_i_caddr(x)                  C_u_i_car( C_u_i_cddr( x ) )
#define C_u_i_cdaar(x)                  C_u_i_cdr( C_u_i_caar( x ) )
#define C_u_i_cdadr(x)                  C_u_i_cdr( C_u_i_cadr( x ) )
#define C_u_i_cddar(x)                  C_u_i_cdr( C_u_i_cdar( x ) )
#define C_u_i_cdddr(x)                  C_u_i_cdr( C_u_i_cddr( x ) )
#define C_u_i_caaaar(x)                 C_u_i_car( C_u_i_caaar( x ) )
#define C_u_i_caaadr(x)                 C_u_i_car( C_u_i_caadr( x ) )
#define C_u_i_caadar(x)                 C_u_i_car( C_u_i_cadar( x ) )
#define C_u_i_caaddr(x)                 C_u_i_car( C_u_i_caddr( x ) )
#define C_u_i_cadaar(x)                 C_u_i_car( C_u_i_cdaar( x ) )
#define C_u_i_cadadr(x)                 C_u_i_car( C_u_i_cdadr( x ) )
#define C_u_i_caddar(x)                 C_u_i_car( C_u_i_cddar( x ) )
#define C_u_i_cadddr(x)                 C_u_i_car( C_u_i_cdddr( x ) )
#define C_u_i_cdaaar(x)                 C_u_i_cdr( C_u_i_caaar( x ) )
#define C_u_i_cdaadr(x)                 C_u_i_cdr( C_u_i_caadr( x ) )
#define C_u_i_cdadar(x)                 C_u_i_cdr( C_u_i_cadar( x ) )
#define C_u_i_cdaddr(x)                 C_u_i_cdr( C_u_i_caddr( x ) )
#define C_u_i_cddaar(x)                 C_u_i_cdr( C_u_i_cdaar( x ) )
#define C_u_i_cddadr(x)                 C_u_i_cdr( C_u_i_cdadr( x ) )
#define C_u_i_cdddar(x)                 C_u_i_cdr( C_u_i_cddar( x ) )
#define C_u_i_cddddr(x)                 C_u_i_cdr( C_u_i_cdddr( x ) )

#define C_a_i_times( ptr, n, x, y)      C_2_times( ptr, x, y)
#define C_a_i_plus(  ptr, n, x, y)      C_2_plus(  ptr, x, y)
#define C_a_i_minus( ptr, n, x, y)      C_2_minus( ptr, x, y)
#define C_a_i_divide(ptr, n, x, y)      C_2_divide(ptr, x, y)

#ifdef HAVE_STATEMENT_EXPRESSIONS
# define C_i_not_pair_p(x)              ({C_word tmp = (x); C_mk_bool(C_immediatep(tmp) || C_block_header(tmp) != C_PAIR_TAG); })
#else
# define C_i_not_pair_p                 C_i_not_pair_p_2
#endif

#define C_i_check_closure(x)            C_i_check_closure_2(x, C_SCHEME_FALSE)
#define C_i_check_exact(x)              C_i_check_exact_2(x, C_SCHEME_FALSE)
#define C_i_check_inexact(x)            C_i_check_inexact_2(x, C_SCHEME_FALSE)
#define C_i_check_number(x)             C_i_check_number_2(x, C_SCHEME_FALSE)
#define C_i_check_string(x)             C_i_check_string_2(x, C_SCHEME_FALSE)
#define C_i_check_bytevector(x)         C_i_check_bytevector_2(x, C_SCHEME_FALSE)
#define C_i_check_symbol(x)             C_i_check_symbol_2(x, C_SCHEME_FALSE)
#define C_i_check_list(x)               C_i_check_list_2(x, C_SCHEME_FALSE)
#define C_i_check_pair(x)               C_i_check_pair_2(x, C_SCHEME_FALSE)
#define C_i_check_locative(x)           C_i_check_locative_2(x, C_SCHEME_FALSE)
#define C_i_check_boolean(x)            C_i_check_boolean_2(x, C_SCHEME_FALSE)
#define C_i_check_vector(x)             C_i_check_vector_2(x, C_SCHEME_FALSE)
#define C_i_check_structure(x, st)      C_i_check_structure_2(x, (st), C_SCHEME_FALSE)
#define C_i_check_char(x)               C_i_check_char_2(x, C_SCHEME_FALSE)
#define C_i_check_port(x, in, op)       C_i_check_port_2(x, in, op, C_SCHEME_FALSE)

#define C_u_i_8vector_length(x)         C_fix(C_header_size(C_block_item(x, 1)))
#define C_u_i_16vector_length(x)        C_fix(C_header_size(C_block_item(x, 1)) >> 1)
#define C_u_i_32vector_length(x)        C_fix(C_header_size(C_block_item(x, 1)) >> 2)
#define C_u_i_64vector_length(x)        C_fix(C_header_size(C_block_item(x, 1)) >> 3)
#define C_u_i_u8vector_length           C_u_i_8vector_length
#define C_u_i_s8vector_length           C_u_i_8vector_length
#define C_u_i_u16vector_length          C_u_i_16vector_length
#define C_u_i_s16vector_length          C_u_i_16vector_length
#define C_u_i_u32vector_length          C_u_i_32vector_length
#define C_u_i_s32vector_length          C_u_i_32vector_length
#define C_u_i_f32vector_length          C_u_i_32vector_length
#define C_u_i_f64vector_length          C_u_i_64vector_length

#define C_u_i_u8vector_ref(x, i)        C_fix(((unsigned char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_s8vector_ref(x, i)        C_fix(((signed char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_u16vector_ref(x, i)       C_fix(((unsigned short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_s16vector_ref(x, i)       C_fix(((short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])

/* these assume fixnum mode */
#define C_u_i_u32vector_ref(x, i)       C_fix(((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_s32vector_ref(x, i)       C_fix(((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])

#define C_a_u_i_u32vector_ref(ptr, c, x, i)  C_unsigned_int_to_num(ptr, ((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_a_u_i_s32vector_ref(ptr, c, x, i)  C_int_to_num(ptr, ((C_s32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])

#define C_u_i_u8vector_set(x, i, v)     ((((unsigned char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_s8vector_set(x, i, v)     ((((signed char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_u16vector_set(x, i, v)    ((((unsigned short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_s16vector_set(x, i, v)    ((((short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_u32vector_set(x, i, v)    ((((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_num_to_unsigned_int(v)), C_SCHEME_UNDEFINED)
#define C_u_i_s32vector_set(x, i, v)    ((((C_s32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_num_to_int(v)), C_SCHEME_UNDEFINED)

#define C_u_i_bit_setp(x, i)            C_mk_bool((C_unfix(x) & (1 << C_unfix(i))) != 0)

#define C_u_i_pointer_u8_ref(ptr)         C_fix(*((unsigned char *)C_block_item(ptr, 0)))
#define C_u_i_pointer_s8_ref(ptr)         C_fix(*((signed char *)C_block_item(ptr, 0)))
#define C_u_i_pointer_u16_ref(ptr)        C_fix(*((unsigned short *)C_block_item(ptr, 0)))
#define C_u_i_pointer_s16_ref(ptr)        C_fix(*((short *)C_block_item(ptr, 0)))
#define C_a_u_i_pointer_u32_ref(ap, n, ptr)  \
    C_unsigned_int_to_num(ap, *((C_u32 *)C_block_item(ptr, 0)))
#define C_a_u_i_pointer_s32_ref(ap, n, ptr)  \
    C_int_to_num(ap, *((C_s32 *)C_block_item(ptr, 0)))
#define C_a_u_i_pointer_f32_ref(ap, n, ptr)  C_flonum(ap, *((float *)C_block_item(ptr, 0)))
#define C_a_u_i_pointer_f64_ref(ap, n, ptr)  C_flonum(ap, *((double *)C_block_item(ptr, 0)))
#define C_u_i_pointer_u8_set(ptr, x)  \
    (*((unsigned char *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_s8_set(ptr, x)  \
    (*((signed char *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_u16_set(ptr, x)  \
    (*((unsigned short *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_s16_set(ptr, x)  \
    (*((short *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_u32_set(ptr, x)  \
    (*((C_u32 *)C_block_item(ptr, 0)) = C_num_to_unsigned_int(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_s32_set(ptr, x)  \
    (*((C_s32 *)C_block_item(ptr, 0)) = C_num_to_int(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_f32_set(ptr, x)  \
    (*((float *)C_block_item(ptr, 0)) = C_flonum_magnitude(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_f64_set(ptr, x)  \
    (*((double *)C_block_item(ptr, 0)) = C_flonum_magnitude(x), C_SCHEME_UNDEFINED)

#ifdef C_BIG_ENDIAN
# ifdef C_SIXTY_FOUR
#  define C_lihdr(x, y, z)              ((C_LAMBDA_INFO_TYPE >> 56) & 0xff), \
    0, 0, 0, 0, (x), (y), (z)
# else
#  define C_lihdr(x, y, z)              ((C_LAMBDA_INFO_TYPE >> 24) & 0xff), \
    (x), (y), (z)
# endif
#else
# ifdef C_SIXTY_FOUR
#  define C_lihdr(x, y, z)              (z), (y), (x), 0, 0, 0, 0, \
    ((C_LAMBDA_INFO_TYPE >> 56) & 0xff)
# else
#  define C_lihdr(x, y, z)              (z), (y), (x), \
    ((C_LAMBDA_INFO_TYPE >> 24) & 0xff)
# endif
#endif

#define C_ub_i_flonum_plus(x, y)        ((x) + (y))
#define C_ub_i_flonum_difference(x, y)  ((x) - (y))
#define C_ub_i_flonum_times(x, y)       ((x) * (y))
#define C_ub_i_flonum_quotient(x, y)    ((x) / (y))

#define C_ub_i_flonum_equalp(n1, n2)    ((n1) == (n2))
#define C_ub_i_flonum_greaterp(n1, n2)  ((n1) > (n2))
#define C_ub_i_flonum_lessp(n1, n2)     ((n1) < (n2))
#define C_ub_i_flonum_greater_or_equal_p(n1, n2)  ((n1) >= (n2))
#define C_ub_i_flonum_less_or_equal_p(n1, n2)  ((n1) <= (n2))

#define C_ub_i_pointer_inc(p, n)        ((void *)((unsigned char *)(p) + (n)))
#define C_ub_i_pointer_eqp(p1, p2)      ((p1) == (p2))
#define C_ub_i_null_pointerp(p)         ((p) == NULL)

#define C_ub_i_pointer_u8_ref(p)        (*((unsigned char *)(p)))
#define C_ub_i_pointer_s8_ref(p)        (*((signed char *)(p)))
#define C_ub_i_pointer_u16_ref(p)       (*((unsigned short *)(p)))
#define C_ub_i_pointer_s16_ref(p)       (*((short *)(p)))
#define C_ub_i_pointer_u32_ref(p)       (*((C_u32 *)(p)))
#define C_ub_i_pointer_s32_ref(p)       (*((C_s32 *)(p)))
#define C_ub_i_pointer_f32_ref(p)       (*((float *)(p)))
#define C_ub_i_pointer_f64_ref(p)       (*((double *)(p)))
#define C_ub_i_pointer_u8_set(p, n)     (*((unsigned char *)(p)) = (n))
#define C_ub_i_pointer_s8_set(p, n)     (*((signed char *)(p)) = (n))
#define C_ub_i_pointer_u16_set(p, n)    (*((unsigned short *)(p)) = (n))
#define C_ub_i_pointer_s16_set(p, n)    (*((short *)(p)) = (n))
#define C_ub_i_pointer_u32_set(p, n)    (*((C_u32 *)(p)) = (n))
#define C_ub_i_pointer_s32_set(p, n)    (*((C_s32 *)(p)) = (n))
#define C_ub_i_pointer_f32_set(p, n)    (*((float *)(p)) = (n))
#define C_ub_i_pointer_f64_set(p, n)    (*((double *)(p)) = (n))

#if !defined(C_EMBEDDED) && !defined(C_SHARED)
#  define C_main_entry_point                            \
    int main(int argc, char *argv[])                        \
    {                                                       \
        return CHICKEN_main(argc, argv, (void*)C_toplevel); \
    }
#else
#  define C_main_entry_point
#endif

#define C_alloc_flonum                  C_word *___tmpflonum = C_alloc(WORDS_PER_FLONUM)
#define C_kontinue_flonum(k, n)         C_kontinue((k), C_flonum(&___tmpflonum, (n)))

#define C_a_i_flonum_truncate(ptr, n, x)  C_flonum(ptr, C_trunc(C_flonum_magnitude(x)))
#define C_a_i_flonum_ceiling(ptr, n, x)  C_flonum(ptr, C_ceil(C_flonum_magnitude(x)))
#define C_a_i_flonum_floor(ptr, n, x)   C_flonum(ptr, C_floor(C_flonum_magnitude(x)))
#define C_a_i_flonum_round(ptr, n, x)   C_flonum(ptr, C_round(C_flonum_magnitude(x)))

#define C_a_u_i_f32vector_ref(ptr, n, b, i)  C_flonum(ptr, ((float *)C_data_pointer(C_block_item((b), 1)))[ C_unfix(i) ])
#define C_a_u_i_f64vector_ref(ptr, n, b, i)  C_flonum(ptr, ((double *)C_data_pointer(C_block_item((b), 1)))[ C_unfix(i) ])
#define C_u_i_f32vector_set(v, i, x)    ((((float *)C_data_pointer(C_block_item((v), 1)))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)
#define C_u_i_f64vector_set(v, i, x)    ((((double *)C_data_pointer(C_block_item((v), 1)))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)

#define C_ub_i_f32vector_ref(b, i)      (((float *)C_data_pointer(C_block_item((b), 1)))[ i ])
#define C_ub_i_f64vector_ref(b, i)      (((double *)C_data_pointer(C_block_item((b), 1)))[ i ])
#define C_ub_i_f32vector_set(v, i, x)   ((((float *)C_data_pointer(C_block_item((v), 1)))[ i ] = (x)), 0)
#define C_ub_i_f64vector_set(v, i, x)   ((((double *)C_data_pointer(C_block_item((v), 1)))[ i ] = (x)), 0)

#define C_a_i_flonum_sin(ptr, c, x)     C_flonum(ptr, C_sin(C_flonum_magnitude(x)))
#define C_a_i_flonum_cos(ptr, c, x)     C_flonum(ptr, C_cos(C_flonum_magnitude(x)))
#define C_a_i_flonum_tan(ptr, c, x)     C_flonum(ptr, C_tan(C_flonum_magnitude(x)))
#define C_a_i_flonum_asin(ptr, c, x)    C_flonum(ptr, C_asin(C_flonum_magnitude(x)))
#define C_a_i_flonum_acos(ptr, c, x)    C_flonum(ptr, C_acos(C_flonum_magnitude(x)))
#define C_a_i_flonum_atan(ptr, c, x)    C_flonum(ptr, C_atan(C_flonum_magnitude(x)))
#define C_a_i_flonum_atan2(ptr, c, x, y)  C_flonum(ptr, C_atan2(C_flonum_magnitude(x), C_flonum_magnitude(y)))
#define C_a_i_flonum_exp(ptr, c, x)     C_flonum(ptr, C_exp(C_flonum_magnitude(x)))
#define C_a_i_flonum_expt(ptr, c, x, y)  C_flonum(ptr, C_pow(C_flonum_magnitude(x), C_flonum_magnitude(y)))
#define C_a_i_flonum_log(ptr, c, x)     C_flonum(ptr, C_log(C_flonum_magnitude(x)))
#define C_a_i_flonum_sqrt(ptr, c, x)    C_flonum(ptr, C_sqrt(C_flonum_magnitude(x)))
#define C_a_i_flonum_abs(ptr, c, x)     C_flonum(ptr, C_fabs(C_flonum_magnitude(x)))

#define C_a_i_current_milliseconds(ptr, c, dummy) C_flonum(ptr, C_milliseconds())

#define C_i_noop1(dummy)               ((dummy), C_SCHEME_UNDEFINED)
#define C_i_noop2(dummy1, dummy2)      ((dummy1), (dummy2), C_SCHEME_UNDEFINED)
#define C_i_noop3(dummy1, dummy2, dummy3)  ((dummy1), (dummy2), (dummy3), C_SCHEME_UNDEFINED)
#define C_i_true1(dummy)               ((dummy), C_SCHEME_TRUE)
#define C_i_true2(dummy1, dummy2)      ((dummy1), (dummy2), C_SCHEME_TRUE)
#define C_i_true3(dummy1, dummy2, dummy3)  ((dummy1), (dummy2), (dummy3), C_SCHEME_TRUE)

#endif /* RUNTIME_MACROS_H */
