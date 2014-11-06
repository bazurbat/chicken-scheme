#include "check.h"
#include <chicken.h>

/* Inline routines for extended bindings: */

C_regparm C_word C_fcall C_i_check_closure_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || (C_header_bits(x) != C_CLOSURE_TYPE)) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_CLOSURE_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_exact_2(C_word x, C_word loc)
{
    if((x & C_FIXNUM_BIT) == 0) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_inexact_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_char_2(C_word x, C_word loc)
{
    if((x & C_IMMEDIATE_TYPE_BITS) != C_CHARACTER_BITS) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_CHAR_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_number_2(C_word x, C_word loc)
{
    if((x & C_FIXNUM_BIT) == 0 && (C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_string_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || C_header_bits(x) != C_STRING_TYPE) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_STRING_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_bytevector_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || C_header_bits(x) != C_BYTEVECTOR_TYPE) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_BYTEVECTOR_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_vector_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || C_header_bits(x) != C_VECTOR_TYPE) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_VECTOR_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_structure_2(C_word x, C_word st, C_word loc)
{
    if(C_immediatep(x) || C_header_bits(x) != C_STRUCTURE_TYPE || C_block_item(x,0) != st) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_BAD_STRUCT_ERROR, NULL, x, st);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_pair_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_PAIR_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_boolean_2(C_word x, C_word loc)
{
    if((x & C_IMMEDIATE_TYPE_BITS) != C_BOOLEAN_BITS) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_BOOLEAN_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_locative_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || C_block_header(x) != C_LOCATIVE_TAG) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_LOCATIVE_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_symbol_2(C_word x, C_word loc)
{
    if(C_immediatep(x) || C_block_header(x) != C_SYMBOL_TAG) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_SYMBOL_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_list_2(C_word x, C_word loc)
{
    if(x != C_SCHEME_END_OF_LIST && (C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_LIST_ERROR, NULL, x);
    }

    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_check_port_2(C_word x, C_word input, C_word open, C_word loc)
{
    int inp;

    if(C_immediatep(x) || C_header_bits(x) != C_PORT_TYPE) {
        error_location = loc;
        barf(C_BAD_ARGUMENT_TYPE_NO_PORT_ERROR, NULL, x);
    }

    inp = C_block_item(x, 1) == C_SCHEME_TRUE;  /* slot #1: I/O flag */

    switch(input) {
    case C_SCHEME_TRUE:
        if(!inp) {
            error_location = loc;
            barf(C_BAD_ARGUMENT_TYPE_NO_INPUT_PORT_ERROR, NULL, x);
        }

        break;

    case C_SCHEME_FALSE:
        if(inp) {
            error_location = loc;
            barf(C_BAD_ARGUMENT_TYPE_NO_OUTPUT_PORT_ERROR, NULL, x);
        }

        break;

        /* any other value: omit direction check */
    }

    if(open == C_SCHEME_TRUE) {
        if(C_block_item(x, 8) != C_SCHEME_FALSE) { /* slot #8: closed flag */
            error_location = loc;
            barf(C_PORT_CLOSED_ERROR, NULL, x);
        }
    }

    return C_SCHEME_UNDEFINED;
}

/* I */
C_regparm C_word C_fcall C_i_not_pair_p_2(C_word x)
{
    return C_mk_bool(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG);
}

C_regparm C_word C_fcall C_i_null_list_p(C_word x)
{
    if(x == C_SCHEME_END_OF_LIST) return C_SCHEME_TRUE;
    else if(!C_immediatep(x) && C_block_header(x) == C_PAIR_TAG) return C_SCHEME_FALSE;
    else {
        barf(C_BAD_ARGUMENT_TYPE_NO_LIST_ERROR, "null-list?", x);
        return C_SCHEME_FALSE;
    }
}

C_regparm C_word C_fcall C_i_string_null_p(C_word x)
{
    if(!C_immediatep(x) && C_header_bits(x) == C_STRING_TYPE)
        return C_zero_length_p(x);
    else {
        barf(C_BAD_ARGUMENT_TYPE_NO_STRING_ERROR, "string-null?", x);
        return C_SCHEME_FALSE;
    }
}

C_regparm C_word C_fcall C_i_null_pointerp(C_word x)
{
    if(!C_immediatep(x) && (C_header_bits(x) & C_SPECIALBLOCK_BIT) != 0)
        return C_null_pointerp(x);

    barf(C_BAD_ARGUMENT_TYPE_ERROR, "null-pointer?", x);
    return C_SCHEME_FALSE;
}
