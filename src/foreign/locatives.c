#include "locatives.h"
#include <math/constructors.h>
#include <math/fixnum.h>
#include <runtime/api.h>
#include <runtime/debug.h>
#include <runtime/macros.h>
#include <runtime/reader.h>

C_TLS C_word *locative_table;
C_TLS int locative_table_size;
C_TLS int locative_table_count;

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

        locative_table = (C_word *)realloc(locative_table, locative_table_size * 2 * sizeof(C_word));

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
    case C_SLOT_LOCATIVE: C_mutate(ptr, x); break;

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
