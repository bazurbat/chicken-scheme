#ifndef RUNTIME_INLINE_FUNCTIONS_H
#define RUNTIME_INLINE_FUNCTIONS_H

/* Inline functions: */

C_BEGIN_C_DECLS

#ifndef HAVE_STATEMENT_EXPRESSIONS

C_inline C_word *C_a_i(C_word **a, int n)
{
    C_word *p = *a;

    *a += n;
    return p;
}

#endif

C_inline C_word
C_mutate(C_word *slot, C_word val)
{
    if(!C_immediatep(val)) return C_mutate_slot(slot, val);
    else return *slot = val;
}

C_inline C_word
C_mutate2(C_word *slot, C_word val) /* OBSOLETE */
{
    if(!C_immediatep(val)) return C_mutate_slot(slot, val);
    else return *slot = val;
}

C_inline C_word C_permanentp(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && !C_in_stackp(x) && !C_in_heapp(x));
}


C_inline C_word C_flonum(C_word **ptr, double n)
{
    C_word
    *p = *ptr,
    *p0;

#ifndef C_SIXTY_FOUR
#ifndef C_DOUBLE_IS_32_BITS
    /* Align double on 8-byte boundary: */
    if(C_aligned8(p)) ++p;
#endif
#endif

    p0 = p;
    *(p++) = C_FLONUM_TAG;
    *((double *)p) = n;
    *ptr = p + sizeof(double) / sizeof(C_word);
    return (C_word)p0;
}


C_inline C_word C_flonum_in_fixnum_range_p(C_word n)
{
    double f = C_flonum_magnitude(n);

    return C_mk_bool(f <= (double)C_MOST_POSITIVE_FIXNUM && f >= (double)C_MOST_NEGATIVE_FIXNUM);
}


C_inline C_word C_double_to_number(C_word n)
{
    double m, f = C_flonum_magnitude(n);

    if(f <= (double)C_MOST_POSITIVE_FIXNUM
       && f >= (double)C_MOST_NEGATIVE_FIXNUM && C_modf(f, &m) == 0.0)
        return C_fix(f);
    else return n;
}


C_inline C_word C_fits_in_int_p(C_word x)
{
    double n, m;

    if(x & C_FIXNUM_BIT) return C_SCHEME_TRUE;

    n = C_flonum_magnitude(x);
    return C_mk_bool(C_modf(n, &m) == 0.0 && n >= C_WORD_MIN && n <= C_WORD_MAX);
}


C_inline C_word C_fits_in_unsigned_int_p(C_word x)
{
    double n, m;

    if(x & C_FIXNUM_BIT) return C_SCHEME_TRUE;

    n = C_flonum_magnitude(x);
    return C_mk_bool(C_modf(n, &m) == 0.0 && n >= 0 && n <= C_UWORD_MAX);
}


C_inline double C_c_double(C_word x)
{
    if(x & C_FIXNUM_BIT) return (double)C_unfix(x);
    else return C_flonum_magnitude(x);
}


C_inline C_word C_num_to_int(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (int)C_flonum_magnitude(x);
}


C_inline C_s64 C_num_to_int64(C_word x)
{
    if(x & C_FIXNUM_BIT) return (C_s64)C_unfix(x);
    else return (C_s64)C_flonum_magnitude(x);
}


C_inline C_u64 C_num_to_uint64(C_word x)
{
    if(x & C_FIXNUM_BIT) return (C_u64)C_unfix(x);
    else return (C_u64)C_flonum_magnitude(x);
}


C_inline C_uword C_num_to_unsigned_int(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (unsigned int)C_flonum_magnitude(x);
}


C_inline C_word C_int_to_num(C_word **ptr, C_word n)
{
    if(C_fitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}


C_inline C_word C_unsigned_int_to_num(C_word **ptr, C_uword n)
{
    if(C_ufitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}


C_inline C_word C_long_to_num(C_word **ptr, C_long n)
{
    if(C_fitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}


C_inline C_word C_unsigned_long_to_num(C_word **ptr, C_ulong n)
{
    if(C_ufitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}


C_inline C_word C_flonum_in_int_range_p(C_word n)
{
    double m = C_flonum_magnitude(n);

    return C_mk_bool(m >= C_WORD_MIN && m <= C_WORD_MAX);
}


C_inline C_word C_flonum_in_uint_range_p(C_word n)
{
    double m = C_flonum_magnitude(n);

    return C_mk_bool(m >= 0 && m <= C_UWORD_MAX);
}


C_inline char *C_string_or_null(C_word x)
{
    return C_truep(x) ? C_c_string(x) : NULL;
}


C_inline void *C_data_pointer_or_null(C_word x)
{
    return C_truep(x) ? C_data_pointer(x) : NULL;
}


C_inline void *C_srfi_4_vector_or_null(C_word x)
{
    return C_truep(x) ? C_srfi_4_vector(x) : NULL;
}


C_inline void *C_c_pointer_vector_or_null(C_word x)
{
    return C_truep(x) ? C_data_pointer(C_block_item(x, 2)) : NULL;
}


C_inline void *C_c_pointer_or_null(C_word x)
{
    return C_truep(x) ? (void *)C_block_item(x, 0) : NULL;
}


C_inline void *C_scheme_or_c_pointer(C_word x)
{
    return C_anypointerp(x) ? (void *)C_block_item(x, 0) : C_data_pointer(x);
}


C_inline C_long C_num_to_long(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (C_long)C_flonum_magnitude(x);
}


C_inline C_ulong C_num_to_unsigned_long(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (C_ulong)C_flonum_magnitude(x);
}


C_inline C_word C_u_i_string_equal_p(C_word x, C_word y)
{
    C_word n;

    n = C_header_size(x);
    return C_mk_bool(n == C_header_size(y)
                     && !C_memcmp((char *)C_data_pointer(x), (char *)C_data_pointer(y), n));
}

/* Like memcmp but case insensitive (to strncasecmp as memcmp is to strncmp) */
C_inline int C_memcasecmp(const char *x, const char *y, unsigned int len)
{
    const unsigned char *ux = (const unsigned char *)x;
    const unsigned char *uy = (const unsigned char *)y;

    while (len--) {
        if (tolower(*ux++) != tolower(*uy++))
            return (tolower(*--ux) - tolower(*--uy));
    }
    return 0;
}

C_inline C_word C_i_eqvp(C_word x, C_word y)
{
    return
        C_mk_bool(x == y ||
                  (!C_immediatep(x) && !C_immediatep(y) &&
                   C_block_header(x) == C_FLONUM_TAG && C_block_header(y) == C_FLONUM_TAG &&
                   C_flonum_magnitude(x) == C_flonum_magnitude(y) ) );
}


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


C_inline C_word C_i_rationalp(C_word x)
{
    if((x & C_FIXNUM_BIT) != 0) return C_SCHEME_TRUE;

    if((!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG)) {
        double n = C_flonum_magnitude(x);

        if(!C_isinf(n) && !C_isnan(n)) return C_SCHEME_TRUE;
    }

    return C_SCHEME_FALSE;
}


C_inline C_word C_u_i_fpintegerp(C_word x)
{
    double dummy, val;

    val = C_flonum_magnitude(x);

    if(C_isnan(val) || C_isinf(val)) return C_SCHEME_FALSE;

    return C_mk_bool(C_modf(val, &dummy) == 0.0);
}


C_inline int C_ub_i_fpintegerp(double x)
{
    double dummy;

    return C_modf(x, &dummy) == 0.0;
}


C_inline C_word C_i_integerp(C_word x)
{
    double dummy, val;

    if (x & C_FIXNUM_BIT)
        return C_SCHEME_TRUE;
    if (C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        return C_SCHEME_FALSE;

    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val)) return C_SCHEME_FALSE;

    return C_mk_bool(C_modf(val, &dummy) == 0.0);
}


C_inline C_word C_i_flonump(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG);
}


C_inline C_word C_i_finitep(C_word x)
{
    double val;

    if((x & C_FIXNUM_BIT) != 0) return C_SCHEME_TRUE;

    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val)) return C_SCHEME_FALSE;
    else return C_SCHEME_TRUE;
}


C_inline C_word C_i_fixnum_min(C_word x, C_word y)
{
    return ((C_word)x < (C_word)y) ? x : y;
}


C_inline C_word C_i_fixnum_max(C_word x, C_word y)
{
    return ((C_word)x > (C_word)y) ? x : y;
}


C_inline C_word C_fixnum_divide(C_word x, C_word y)
{
    if(y == C_fix(0)) C_div_by_zero_error("fx/");
    return C_u_fixnum_divide(x, y);
}


C_inline C_word C_fixnum_modulo(C_word x, C_word y)
{
    if(y == C_fix(0)) C_div_by_zero_error("fxmod");
    return C_u_fixnum_modulo(x, y);
}


C_inline C_word C_i_fixnum_arithmetic_shift(C_word n, C_word c)
{
    if(C_unfix(c) < 0) return C_fixnum_shift_right(n, C_u_fixnum_negate(c));
    else return C_fixnum_shift_left(n, c);
}


C_inline C_word C_i_flonum_min(C_word x, C_word y)
{
    double
        xf = C_flonum_magnitude(x),
        yf = C_flonum_magnitude(y);

    return xf < yf ? x : y;
}


C_inline C_word C_i_flonum_max(C_word x, C_word y)
{
    double
        xf = C_flonum_magnitude(x),
        yf = C_flonum_magnitude(y);

    return xf > yf ? x : y;
}


C_inline C_word
C_a_i_flonum_quotient_checked(C_word **ptr, int c, C_word n1, C_word n2)
{
    double n3 = C_flonum_magnitude(n2);

    if(n3 == 0.0) C_div_by_zero_error("fp/?");
    return C_flonum(ptr, C_flonum_magnitude(n1) / n3);
}


C_inline double
C_ub_i_flonum_quotient_checked(double n1, double n2)
{
    if(n2 == 0.0) C_div_by_zero_error("fp/?");
    return n1 / n2;
}


C_inline C_word C_i_safe_pointerp(C_word x)
{
    if(C_immediatep(x)) return C_SCHEME_FALSE;

    switch(C_block_header(x)) {
    case C_POINTER_TAG:
    case C_TAGGED_POINTER_TAG:
        return C_SCHEME_TRUE;
    }

    return C_SCHEME_FALSE;
}


C_inline C_word C_u_i_assq(C_word x, C_word lst)
{
    C_word a;

    while(!C_immediatep(lst)) {
        a = C_u_i_car(lst);

        if(C_u_i_car(a) == x) return a;
        else lst = C_u_i_cdr(lst);
    }

    return C_SCHEME_FALSE;
}


C_inline C_word
C_fast_retrieve(C_word sym)
{
    C_word val = C_block_item(sym, 0);

    if(val == C_SCHEME_UNBOUND)
        C_unbound_variable(sym);

    return val;
}


C_inline void *
C_fast_retrieve_proc(C_word closure)
{
    if(C_immediatep(closure) || C_header_bits(closure) != C_CLOSURE_TYPE)
        return (void *)C_invalid_procedure;
    else
        return (void *)C_block_item(closure, 0);
}


C_inline void *
C_fast_retrieve_symbol_proc(C_word sym)
{
    return C_fast_retrieve_proc(C_fast_retrieve(sym));
}


C_inline C_word C_a_i_vector1(C_word **ptr, int n, C_word x1)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 1;
    *(p++) = x1;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_vector2(C_word **ptr, int n, C_word x1, C_word x2)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 2;
    *(p++) = x1;
    *(p++) = x2;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_vector3(C_word **ptr, int n, C_word x1, C_word x2, C_word x3)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 3;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_vector4(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 4;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_vector5(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 5;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_vector6(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 6;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_vector7(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 7;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_vector8(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7, C_word x8)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 8;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *(p++) = x8;
    *ptr = p;
    return (C_word)p0;
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


C_inline C_word C_a_i_list1(C_word **a, int n, C_word x1)
{
    return C_a_pair(a, x1, C_SCHEME_END_OF_LIST);
}


C_inline C_word C_a_i_list2(C_word **a, int n, C_word x1, C_word x2)
{
    C_word x = C_a_pair(a, x2, C_SCHEME_END_OF_LIST);

    return C_a_pair(a, x1, x);
}


C_inline C_word C_a_i_list3(C_word **a, int n, C_word x1, C_word x2, C_word x3)
{
    C_word x = C_a_pair(a, x3, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}


C_inline C_word C_a_i_list4(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4)
{
    C_word x = C_a_pair(a, x4, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}


C_inline C_word C_a_i_list5(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5)
{
    C_word x = C_a_pair(a, x5, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}


C_inline C_word C_a_i_list6(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5, C_word x6)
{
    C_word x = C_a_pair(a, x6, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x5, x);
    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}


C_inline C_word C_a_i_list7(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5, C_word x6, C_word x7)
{
    C_word x = C_a_pair(a, x7, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x6, x);
    x = C_a_pair(a, x5, x);
    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}


C_inline C_word C_a_i_list8(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5, C_word x6, C_word x7, C_word x8)
{
    C_word x = C_a_pair(a, x8, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x7, x);
    x = C_a_pair(a, x6, x);
    x = C_a_pair(a, x5, x);
    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}


C_inline C_word C_a_i_record1(C_word **ptr, int n, C_word x1)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 1;
    *(p++) = x1;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_record2(C_word **ptr, int n, C_word x1, C_word x2)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 2;
    *(p++) = x1;
    *(p++) = x2;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_record3(C_word **ptr, int n, C_word x1, C_word x2, C_word x3)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 3;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_record4(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 4;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_record5(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 5;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_record6(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 6;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_record7(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 7;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *ptr = p;
    return (C_word)p0;
}


C_inline C_word C_a_i_record8(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7, C_word x8)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 8;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *(p++) = x8;
    *ptr = p;
    return (C_word)p0;
}

/* These strl* functions are based on public domain code by C.B. Falconer */
#ifdef HAVE_STRLCPY
# define C_strlcpy                  strlcpy
#else
C_inline size_t C_strlcpy(char *dst, const char *src, size_t sz)
{
    const char *start = src;

    if (sz--) {
        while ((*dst++ = *src))
            if (sz--) src++;
            else {
                *(--dst) = '\0';
                break;
            }
    }
    while (*src++) continue;
    return src - start - 1;
}
#endif

#ifdef HAVE_STRLCAT
# define C_strlcat                  strlcat
#else
C_inline size_t C_strlcat(char *dst, const char *src, size_t sz)
{
    char  *start = dst;

    while (*dst++)   /* assumes sz >= strlen(dst) */
        if (sz) sz--;  /* i.e. well formed string */
    dst--;
    return dst - start + C_strlcpy(dst, src, sz);
}
#endif


C_END_C_DECLS

#endif /* RUNTIME_INLINE_FUNCTIONS_H */
