#include "cxr.h"
#include <scheme/pairs.h>

C_regparm C_word C_fcall C_i_cadddr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cadddr", x);
    }

    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;
    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;
    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_caddr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "caddr", x);
    }

    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;
    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_cddddr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cddddr", x);
    }

    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;
    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;
    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_cdr(x);
}

C_regparm C_word C_fcall C_i_cdddr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cdddr", x);
    }

    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;
    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_cdr(x);
}
