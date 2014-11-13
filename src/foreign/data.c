#include "data.h"
#include <math/fixnum.h>
#include <math/flonum.h>
#include <runtime/errors.h>

C_regparm C_word C_fcall C_i_block_ref(C_word x, C_word i)
{
    int j;

    if(C_immediatep(x) || (C_header_bits(x) & C_BYTEBLOCK_BIT) != 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR, "##sys#block-ref", x);

    if(i & C_FIXNUM_BIT) {
        j = C_unfix(i);

        if(j < 0 || j >= C_header_size(x)) barf(C_OUT_OF_RANGE_ERROR, "##sys#block-ref", x, i);

        return C_block_item(x, j);
    }

    barf(C_BAD_ARGUMENT_TYPE_ERROR, "##sys#block-ref", i);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_bit_setp(C_word n, C_word i)
{
    double f1;
    C_uword nn1;
    int index;

    if((i & C_FIXNUM_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR, "bit-set?", i);

    index = C_unfix(i);

    if(index < 0 || index >= C_WORD_SIZE)
        barf(C_OUT_OF_RANGE_ERROR, "bit-set?", n, i);

    C_check_uint(n, f1, nn1, "bit-set?");
    return C_mk_bool((nn1 & (1 << index)) != 0);
}
