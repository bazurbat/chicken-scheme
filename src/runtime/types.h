#ifndef RUNTIME_TYPES_H
#define RUNTIME_TYPES_H

#include "definitions.h"
#include "aliases.h"

#if defined(HAVE_LIMITS_H)
# include <limits.h>
#endif

#include <stdarg.h>
#include <stdio.h>

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

#define C_flonum_magnitude(x)      (*(double *)C_data_pointer(x))

typedef struct C_block_struct
{
    C_header header;
#if (__STDC_VERSION__ >= 199901L)
    C_word data[];
#else
    C_word data[ 1 ];
#endif
} C_SCHEME_BLOCK;

typedef struct C_gc_root_struct
{
    C_word value;
    struct C_gc_root_struct *next, *prev;
    int finalizable;
} C_GC_ROOT;

typedef struct C_ptable_entry_struct
{
    C_char *id;
    void *ptr;
} C_PTABLE_ENTRY;

#define C_data_pointer(b)          ((void *)(((C_SCHEME_BLOCK *)(b))->data))

#define C_anypointerp(x)          C_mk_bool(C_block_header(x) == C_POINTER_TAG || C_block_header(x) == C_TAGGED_POINTER_TAG)

#define C_return(x)                return (x)
#define C_resize_stack(n)          C_do_resize_stack(n)
#define C_memcpy_slots(t, f, n)    memcpy((t), (f), (n) * sizeof(C_word))
#define C_block_header_init(x,h)   (((C_SCHEME_BLOCK *)(x))->header = (h))
#define C_block_header(x)          (((C_SCHEME_BLOCK *)(x))->header)
#define C_block_item(x,i)          (((C_SCHEME_BLOCK *)(x))->data [ i ])
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
#define C_alloc(n)                 ((C_word *)alloca((n) * sizeof(C_word)))
#define C_demand_2(n)              (((C_word *)C_fromspace_top + (n)) < (C_word *)C_fromspace_limit)
#define C_make_character(c)        (((((C_uword)(c)) & C_CHAR_BIT_MASK) << C_CHAR_SHIFT) | C_CHARACTER_BITS)
#define C_character_code(x)        (((C_word)(x) >> C_CHAR_SHIFT) & C_CHAR_BIT_MASK)

#define C_truep(x)                 ((x) != C_SCHEME_FALSE)
#define C_immediatep(x)            ((x) & C_IMMEDIATE_MARK_BITS)
#define C_mk_bool(x)               ((x) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_mk_nbool(x)              ((x) ? C_SCHEME_FALSE : C_SCHEME_TRUE)
#define C_port_file(p)             ((C_FILEPTR)C_block_item(p, 0))
#define C_and(x, y)                (C_truep(x) ? (y) : C_SCHEME_FALSE)

#define C_zero_length_p(x)        C_mk_bool(C_header_size(x) == 0)
#define C_boundp(x)               C_mk_bool(C_block_item(x, 0) != C_SCHEME_UNBOUND)
#define C_unboundvaluep(x)        C_mk_bool((x) == C_SCHEME_UNBOUND)
#define C_blockp(x)               C_mk_bool(!C_immediatep(x))
#define C_forwardedp(x)           C_mk_bool((C_block_header(x) & C_GC_FORWARDING_BIT) != 0)
#define C_immp(x)                 C_mk_bool(C_immediatep(x))
#define C_stringp(x)              C_mk_bool(C_header_bits(x) == C_STRING_TYPE)
#define C_symbolp(x)              C_mk_bool(C_block_header(x) == C_SYMBOL_TAG)
#define C_pairp(x)                C_mk_bool(C_block_header(x) == C_PAIR_TAG)
#define C_closurep(x)             C_mk_bool(C_header_bits(x) == C_CLOSURE_TYPE)
#define C_portp(x)                C_mk_bool(C_header_bits(x) == C_PORT_TYPE)
#define C_structurep(x)           C_mk_bool(C_header_bits(x) == C_STRUCTURE_TYPE)
#define C_locativep(x)            C_mk_bool(C_block_header(x) == C_LOCATIVE_TAG)
#define C_charp(x)                C_mk_bool(((x) & C_IMMEDIATE_TYPE_BITS) == C_CHARACTER_BITS)
#define C_booleanp(x)             C_mk_bool(((x) & C_IMMEDIATE_TYPE_BITS) == C_BOOLEAN_BITS)
#define C_eofp(x)                 C_mk_bool((x) == C_SCHEME_END_OF_FILE)
#define C_undefinedp(x)           C_mk_bool((x) == C_SCHEME_UNDEFINED)
#define C_lambdainfop(x)          C_mk_bool(C_header_bits(x) == C_LAMBDA_INFO_TYPE)
#define C_specialp(x)             C_mk_bool(C_header_bits(x) & C_SPECIALBLOCK_BIT)
#define C_byteblockp(x)           C_mk_bool(C_header_bits(x) & C_BYTEBLOCK_BIT)
#define C_anyp(x)                 C_SCHEME_TRUE
#define C_sametypep(x, y)         C_mk_bool(C_header_bits(x) == C_header_bits(y))
#define C_eqp(x, y)               C_mk_bool((x) == (y))
#define C_vemptyp(x)              C_mk_bool(C_header_size(x) == 0)
#define C_notvemptyp(x)           C_mk_bool(C_header_size(x) > 0)

#define C_slot(x, i)              C_block_item(x, C_unfix(i))

#define C_subbyte(x, i)           C_fix(((C_byte *)C_data_pointer(x))[ C_unfix(i) ] & 0xff)
#define C_subchar(x, i)           C_make_character(((C_uchar *)C_data_pointer(x))[ C_unfix(i) ])
#define C_setbyte(x, i, n)        (((C_byte *)C_data_pointer(x))[ C_unfix(i) ] = C_unfix(n), C_SCHEME_UNDEFINED)
#define C_setsubchar(x, i, n)     (((C_char *)C_data_pointer(x))[ C_unfix(i) ] = C_character_code(n), C_SCHEME_UNDEFINED)
#define C_setsubbyte(x, i, n)     (((C_char *)C_data_pointer(x))[ C_unfix(i) ] = C_unfix(n), C_SCHEME_UNDEFINED)

#define C_display_char(p, c)            (fputc(C_character_code(c), C_port_file(p)), C_SCHEME_UNDEFINED)
#define C_display_string(p, s)          (fwrite(C_data_pointer(s), sizeof(C_char), C_header_size(s), \
                                                  C_port_file(p)), C_SCHEME_UNDEFINED)
#define C_flush_output(port)            (fflush(C_port_file(port)), C_SCHEME_UNDEFINED)

#define C_fix_to_char(x)                (C_make_character(C_unfix(x)))
#define C_char_to_fix(x)                (C_fix(C_character_code(x)))
#define C_i_char_equalp(x, y)           C_mk_bool(C_character_code(x) == C_character_code(y))
#define C_i_char_greaterp(x, y)         C_mk_bool(C_character_code(x) > C_character_code(y))
#define C_i_char_lessp(x, y)            C_mk_bool(C_character_code(x) < C_character_code(y))
#define C_i_char_greater_or_equal_p(x, y)  C_mk_bool(C_character_code(x) >= C_character_code(y))
#define C_i_char_less_or_equal_p(x, y)  C_mk_bool(C_character_code(x) <= C_character_code(y))
#define C_substring_copy(s1, s2, start1, end1, start2) \
    (memmove((C_char *)C_data_pointer(s2) + C_unfix(start2), \
               (C_char *)C_data_pointer(s1) + C_unfix(start1), \
               C_unfix(end1) - C_unfix(start1) ), C_SCHEME_UNDEFINED)
#define C_substring_compare(s1, s2, start1, start2, len) \
    C_mk_bool(memcmp((C_char *)C_data_pointer(s1) + C_unfix(start1), \
                       (C_char *)C_data_pointer(s2) + C_unfix(start2), \
                       C_unfix(len) ) == 0)
#define C_substring_compare_case_insensitive(s1, s2, start1, start2, len) \
    C_mk_bool(C_memcasecmp((C_char *)C_data_pointer(s1) + C_unfix(start1), \
                           (C_char *)C_data_pointer(s2) + C_unfix(start2), \
                           C_unfix(len) ) == 0)

#define C_words(n)                      C_fix(C_bytestowords(C_unfix(n)))
#define C_bytes(n)                      C_fix(C_wordstobytes(C_unfix(n)))
#define C_randomize(n)                  (srand(C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_block_size(x)                 C_fix(C_header_size(x))
#define C_block_address(ptr, n, x)      C_a_unsigned_int_to_num(ptr, n, x)
#define C_kontinue(k, r)                ((C_proc2)(void *)C_block_item(k,0))(2, (k), (r))
#define C_fetch_byte(x, p)              (((unsigned C_byte *)C_data_pointer(x))[ p ])
#define C_poke_integer(x, i, n)         (C_set_block_item(x, C_unfix(i), C_num_to_int(n)), C_SCHEME_UNDEFINED)

#define C_direct_return(dk, x)          (C_kontinue(dk, x), C_SCHEME_UNDEFINED)

#ifdef C_SIXTY_FOUR
# define C_poke_integer_32(x, i, n)     (((C_s32 *)C_data_pointer(x))[ C_unfix(i) ] = C_unfix(n), C_SCHEME_UNDEFINED)
#else
# define C_poke_integer_32              C_poke_integer
#endif

#define C_copy_memory(to, from, n)      (memcpy(C_data_pointer(to), C_data_pointer(from), C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_copy_ptr_memory(to, from, n, toff, foff) \
    (memmove(C_pointer_address(to) + C_unfix(toff), C_pointer_address(from) + C_unfix(foff), \
               C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_set_memory(to, c, n)          (memset(C_data_pointer(to), C_character_code(c), C_unfix(n)), C_SCHEME_UNDEFINED)
#define C_string_compare(to, from, n)   C_fix(memcmp(C_c_string(to), C_c_string(from), C_unfix(n)))
#define C_string_compare_case_insensitive(from, to, n) \
    C_fix(C_memcasecmp(C_c_string(from), C_c_string(to), C_unfix(n)))
#define C_rename_file(old, new)         C_fix(rename(C_c_string(old), C_c_string(new)))
#define C_delete_file(fname)            C_fix(remove(C_c_string(fname)))
#define C_poke_double(b, i, n)          (((double *)C_data_pointer(b))[ C_unfix(i) ] = C_c_double(n), C_SCHEME_UNDEFINED)
#define C_poke_c_string(b, i, from, s)  (C_strlcpy((char *)C_block_item(b, C_unfix(i)), C_data_pointer(from), s), C_SCHEME_UNDEFINED)
#define C_peek_byte(ptr, i)             C_fix(((unsigned char *)C_u_i_car(ptr))[ C_unfix(i) ])

#define C_tty_portp(p)                  C_mk_bool(C_isatty(fileno(C_port_file(p))))

#ifdef HAVE_STATEMENT_EXPRESSIONS
# define C_a_i(a, n)                    ({C_word *tmp = *a; *a += (n); tmp; })
# define C_a_i_cons(a, n, car, cdr)     ({C_word tmp = (C_word)(*a); (*a)[0] = C_PAIR_TYPE | 2; *a += 3; \
                                          C_set_block_item(tmp, 0, car); C_set_block_item(tmp, 1, cdr); tmp; })
#else
# define C_a_i_cons(a, n, car, cdr)     C_a_pair(a, car, cdr)
#endif /* HAVE_STATEMENT_EXPRESSIONS */

#define C_a_unsigned_int_to_num(ptr, n, i)  C_unsigned_int_to_num(ptr, i)
#define C_i_setslot(x, i, y)            (C_mutate(&C_block_item(x, C_unfix(i)), y), C_SCHEME_UNDEFINED)
#define C_i_set_i_slot(x, i, y)         (C_set_block_item(x, C_unfix(i), y), C_SCHEME_UNDEFINED)
#define C_u_i_set_car(p, x)             (C_mutate(&C_u_i_car(p), x), C_SCHEME_UNDEFINED)
#define C_u_i_set_cdr(p, x)             (C_mutate(&C_u_i_cdr(p), x), C_SCHEME_UNDEFINED)
#define C_a_i_putprop(p, c, x, y, z)    C_putprop(p, x, y, z)

#define C_i_not(x)                      (C_truep(x) ? C_SCHEME_FALSE : C_SCHEME_TRUE)
#define C_i_equalp(x, y)                C_mk_bool(C_equalp((x), (y)))
#define C_i_nullp(x)                    C_mk_bool((x) == C_SCHEME_END_OF_LIST)
#define C_i_structurep(x, s)            C_mk_bool(!C_immediatep(x) && C_header_bits(x) == C_STRUCTURE_TYPE && C_block_item(x, 0) == (s))

#define C_u_i_char_alphabeticp(x)       C_mk_bool(C_character_code(x) < 0x100 && isalpha(C_character_code(x)))
#define C_u_i_char_numericp(x)          C_mk_bool(C_character_code(x) < 0x100 && isdigit(C_character_code(x)))
#define C_u_i_char_whitespacep(x)       C_mk_bool(C_character_code(x) < 0x100 && isspace(C_character_code(x)))
#define C_u_i_char_upper_casep(x)       C_mk_bool(C_character_code(x) < 0x100 && isupper(C_character_code(x)))
#define C_u_i_char_lower_casep(x)       C_mk_bool(C_character_code(x) < 0x100 && islower(C_character_code(x)))

#define C_u_i_char_upcase(x)            (C_character_code(x) < 0x100 ? C_make_character(toupper(C_character_code(x))) : (x))
#define C_u_i_char_downcase(x)          (C_character_code(x) < 0x100 ? C_make_character(tolower(C_character_code(x))) : (x))

#define C_i_list_ref(lst, i)            C_i_car(C_i_list_tail(lst, i))
#define C_u_i_list_ref(lst, i)          C_u_i_car(C_i_list_tail(lst, i))

#ifdef HAVE_STATEMENT_EXPRESSIONS
# define C_i_not_pair_p(x)              ({C_word tmp = (x); C_mk_bool(C_immediatep(tmp) || C_block_header(tmp) != C_PAIR_TAG); })
#else
# define C_i_not_pair_p                 C_i_not_pair_p_2
#endif

#define C_u_i_bit_setp(x, i)            C_mk_bool((C_unfix(x) & (1 << C_unfix(i))) != 0)

C_inline C_word C_i_symbolp(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_block_header(x) == C_SYMBOL_TAG);
}

C_inline C_word C_i_pairp(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_block_header(x) == C_PAIR_TAG);
}

C_inline C_word C_i_stringp(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_header_bits(x) == C_STRING_TYPE);
}

C_inline C_word C_i_locativep(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_block_header(x) == C_LOCATIVE_TAG);
}

C_inline C_word C_i_vectorp(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_header_bits(x) == C_VECTOR_TYPE);
}

C_inline C_word C_i_portp(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_header_bits(x) == C_PORT_TYPE);
}

C_inline C_word C_i_closurep(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_header_bits(x) == C_CLOSURE_TYPE);
}

C_inline C_word C_i_numberp(C_word x)
{
    return C_mk_bool((x & C_FIXNUM_BIT)
                     || (!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG));
}

C_inline C_word C_fcall C_a_pair(C_word **ptr, C_word car, C_word cdr)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_PAIR_TYPE | (C_SIZEOF_PAIR - 1);
    *(p++) = car;
    *(p++) = cdr;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_fcall C_a_bucket(C_word **ptr, C_word head, C_word tail)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_BUCKET_TYPE | (C_SIZEOF_BUCKET - 1);
    *(p++) = head;
    *(p++) = tail;
    *ptr = p;
    return (C_word)p0;
}

#ifndef HAVE_STATEMENT_EXPRESSIONS

C_inline C_word *C_a_i(C_word **a, int n)
{
    C_word *p = *a;

    *a += n;
    return p;
}

#endif

#endif /* RUNTIME_TYPES_H */
