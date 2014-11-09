#include "foreign.h"
#include <chicken.h>

static void make_structure_2(void *dummy) C_noret;

C_regparm C_word C_fcall C_a_i_make_locative(C_word **a, int c, C_word type, C_word object, C_word index, C_word weak)
{
    C_word *loc = *a;
    int offset, i, in = C_unfix(index);
    *a = loc + C_SIZEOF_LOCATIVE;

    loc[ 0 ] = C_LOCATIVE_TAG;

    switch(C_unfix(type)) {
    case C_SLOT_LOCATIVE: in *= sizeof(C_word); break;
    case C_U16_LOCATIVE:
    case C_S16_LOCATIVE: in *= 2; break;
    case C_U32_LOCATIVE:
    case C_F32_LOCATIVE:
    case C_S32_LOCATIVE: in *= 4; break;
    case C_F64_LOCATIVE: in *= 8; break;
    }

    offset = in + sizeof(C_header);
    loc[ 1 ] = object + offset;
    loc[ 2 ] = C_fix(offset);
    loc[ 3 ] = type;
    loc[ 4 ] = C_truep(weak) ? C_SCHEME_FALSE : object;

    for(i = 0; i < locative_table_count; ++i)
        if(locative_table[ i ] == C_SCHEME_UNDEFINED) {
            locative_table[ i ] = (C_word)loc;
            return (C_word)loc;
        }

    if(locative_table_count >= locative_table_size) {
        if(debug_mode == 2)
            C_dbg(C_text("debug"), C_text("resizing locative table from %d to %d (count is %d)\n"),
                  locative_table_size, locative_table_size * 2, locative_table_count);

        locative_table = (C_word *)C_realloc(locative_table, locative_table_size * 2 * sizeof(C_word));

        if(locative_table == NULL)
            panic(C_text("out of memory - cannot resize locative table"));

        locative_table_size *= 2;
    }

    locative_table[ locative_table_count++ ] = (C_word)loc;
    return (C_word)loc;
}

void C_ccall C_locative_ref(C_word c, C_word closure, C_word k, C_word loc)
{
    C_word *ptr, val;
    C_alloc_flonum;

    if(c != 3) C_bad_argc(c, 3);

    if(C_immediatep(loc) || C_block_header(loc) != C_LOCATIVE_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", loc);

    ptr = (C_word *)C_block_item(loc, 0);

    if(ptr == NULL) barf(C_LOST_LOCATIVE_ERROR, "locative-ref", loc);

    switch(C_unfix(C_block_item(loc, 2))) {
    case C_SLOT_LOCATIVE: C_kontinue(k, *ptr);
    case C_CHAR_LOCATIVE: C_kontinue(k, C_make_character(*((char *)ptr)));
    case C_U8_LOCATIVE: C_kontinue(k, C_fix(*((unsigned char *)ptr)));
    case C_S8_LOCATIVE: C_kontinue(k, C_fix(*((char *)ptr)));
    case C_U16_LOCATIVE: C_kontinue(k, C_fix(*((unsigned short *)ptr)));
    case C_S16_LOCATIVE: C_kontinue(k, C_fix(*((short *)ptr)));
    case C_U32_LOCATIVE: C_peek_unsigned_integer(0, 0, k, (C_word)(ptr - 1), 0);
    case C_S32_LOCATIVE: C_peek_signed_integer(0, 0, k, (C_word)(ptr - 1), 0);
    case C_F32_LOCATIVE: C_kontinue_flonum(k, *((float *)ptr));
    case C_F64_LOCATIVE: C_kontinue_flonum(k, *((double *)ptr));
    default: panic(C_text("bad locative type"));
    }
}

C_regparm C_word C_fcall C_i_locative_set(C_word loc, C_word x)
{
    C_word *ptr, val;

    if(C_immediatep(loc) || C_block_header(loc) != C_LOCATIVE_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", loc);

    ptr = (C_word *)C_block_item(loc, 0);

    if(ptr == NULL)
        barf(C_LOST_LOCATIVE_ERROR, "locative-set!", loc);

    switch(C_unfix(C_block_item(loc, 2))) {
    case C_SLOT_LOCATIVE: C_mutate2(ptr, x); break;

    case C_CHAR_LOCATIVE:
                          if((x & C_IMMEDIATE_TYPE_BITS) != C_CHARACTER_BITS)
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((char *)ptr) = C_character_code(x);
                          break;

    case C_U8_LOCATIVE:
                          if((x & C_FIXNUM_BIT) == 0)
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((unsigned char *)ptr) = C_unfix(x);
                          break;

    case C_S8_LOCATIVE:
                          if((x & C_FIXNUM_BIT) == 0)
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((char *)ptr) = C_unfix(x);
                          break;

    case C_U16_LOCATIVE:
                          if((x & C_FIXNUM_BIT) == 0)
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((unsigned short *)ptr) = C_unfix(x);
                          break;

    case C_S16_LOCATIVE:
                          if((x & C_FIXNUM_BIT) == 0)
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((short *)ptr) = C_unfix(x);
                          break;

    case C_U32_LOCATIVE:
                          if((x & C_FIXNUM_BIT) == 0 && (C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG))
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((C_u32 *)ptr) = C_num_to_unsigned_int(x);
                          break;

    case C_S32_LOCATIVE:
                          if((x & C_FIXNUM_BIT) == 0 && (C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG))
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((C_s32 *)ptr) = C_num_to_int(x);
                          break;

    case C_F32_LOCATIVE:
                          if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((float *)ptr) = C_flonum_magnitude(x);
                          break;

    case C_F64_LOCATIVE:
                          if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
                              barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

                          *((double *)ptr) = C_flonum_magnitude(x);
                          break;

    default: panic(C_text("bad locative type"));
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_locative_to_object(C_word loc)
{
    C_word *ptr;

    if(C_immediatep(loc) || C_block_header(loc) != C_LOCATIVE_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative->object", loc);

    ptr = (C_word *)C_block_item(loc, 0);

    if(ptr == NULL) return C_SCHEME_FALSE;
    else return (C_word)ptr - C_unfix(C_block_item(loc, 1));
}

void C_ccall C_make_structure(C_word c, C_word closure, C_word k, C_word type, ...)
{
    va_list v;
    int i;

    va_start(v, type);

    for(i = c - 3; i--; C_save(va_arg(v, C_word))) ;

    va_end(v);
    C_save(type);
    C_save(k);

    if(!C_demand(c - 1))
        C_reclaim((void *)make_structure_2, NULL);

    make_structure_2(NULL);
}


void make_structure_2(void *dummy)
{
    C_word k = C_restore,
           type = C_restore,
           size = C_rest_count(0),
    *a = C_alloc(C_SIZEOF_STRUCTURE(size+1)),
    *s = a,
           s0 = (C_word)s;

    *(s++) = C_STRUCTURE_TYPE | (size + 1);
    *(s++) = type;
    s += size;

    while(size--)
        *(--s) = C_restore;

    C_kontinue(k, s0);
}


void C_ccall C_make_pointer(C_word c, C_word closure, C_word k)
{
    C_word ab[ 2 ], *a = ab,
           p;

    p = C_mpointer(&a, NULL);
    C_kontinue(k, p);
}


void C_ccall C_make_tagged_pointer(C_word c, C_word closure, C_word k, C_word tag)
{
    C_word ab[ 3 ], *a = ab,
           p;

    p = C_taggedmpointer(&a, tag, NULL);
    C_kontinue(k, p);
}



/*XXX these are not correctly named */

C_regparm C_word C_fcall C_i_foreign_char_argumentp(C_word x)
{
    if((x & C_IMMEDIATE_TYPE_BITS) != C_CHARACTER_BITS)
        barf(C_BAD_ARGUMENT_TYPE_NO_CHAR_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_fixnum_argumentp(C_word x)
{
    if((x & C_FIXNUM_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_flonum_argumentp(C_word x)
{
    if((x & C_FIXNUM_BIT) != 0) return x;

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_block_argumentp(C_word x)
{
    if(C_immediatep(x))
        barf(C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_struct_wrapper_argumentp(C_word t, C_word x)
{
    if(C_immediatep(x) || C_header_bits(x) != C_STRUCTURE_TYPE || C_block_item(x, 0) != t)
        barf(C_BAD_ARGUMENT_TYPE_BAD_STRUCT_ERROR, NULL, t, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_string_argumentp(C_word x)
{
    if(C_immediatep(x) || C_header_bits(x) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_NO_STRING_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_symbol_argumentp(C_word x)
{
    if(C_immediatep(x) || C_header_bits(x) != C_SYMBOL_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_NO_SYMBOL_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_pointer_argumentp(C_word x)
{
    if(C_immediatep(x) || (C_header_bits(x) & C_SPECIALBLOCK_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_scheme_or_c_pointer_argumentp(C_word x)
{
    if(C_immediatep(x) || (C_header_bits(x) & C_SPECIALBLOCK_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_tagged_pointer_argumentp(C_word x, C_word t)
{
    if(C_immediatep(x) || (C_header_bits(x) & C_SPECIALBLOCK_BIT) == 0
       || (t != C_SCHEME_FALSE && !C_equalp(C_block_item(x, 1), t)))
        barf(C_BAD_ARGUMENT_TYPE_NO_TAGGED_POINTER_ERROR, NULL, x, t);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_integer_argumentp(C_word x)
{
    double m;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= C_WORD_MIN && m <= C_WORD_MAX) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_foreign_integer64_argumentp(C_word x)
{
    double m, r;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= C_S64_MIN && m <= C_S64_MAX && C_modf(m, &r) == 0.0) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_foreign_unsigned_integer_argumentp(C_word x)
{
    double m,r;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= 0 && m <= C_UWORD_MAX && C_modf(m, &r) == 0.0) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_foreign_unsigned_integer64_argumentp(C_word x)
{
    double m, r;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= 0 && m <= C_U64_MAX && C_modf(m, &r) == 0.0) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}
