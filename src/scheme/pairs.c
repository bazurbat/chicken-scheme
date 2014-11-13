#include "pairs.h"
#include <memory/gc.h>
#include <runtime/errors.h>

C_regparm C_word C_fcall C_i_caar(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "caar", x);
    }

    x = C_u_i_car(x);

    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_cadr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cadr", x);
    }

    x = C_u_i_cdr(x);

    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_car(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "car", x);

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_cdar(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cdar", x);
    }

    x = C_u_i_car(x);

    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_cdr(x);
}

C_regparm C_word C_fcall C_i_cddr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cddr", x);
    }

    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_cdr(x);
}

C_regparm C_word C_fcall C_i_cdr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cdr", x);

    return C_u_i_cdr(x);
}

C_regparm C_word C_fcall C_i_set_car(C_word x, C_word val)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "set-car!", x);

    C_mutate(&C_u_i_car(x), val);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_set_cdr(C_word x, C_word val)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "set-cdr!", x);

    C_mutate(&C_u_i_cdr(x), val);
    return C_SCHEME_UNDEFINED;
}
