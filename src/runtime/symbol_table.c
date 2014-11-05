#include "symbol_table.h"

C_TLS C_SYMBOL_TABLE
    *symbol_table,
    *symbol_table_list;

C_regparm C_word C_fcall hash_string(int len, C_char *str, C_word m, C_word r, int ci)
{
    C_uword key = r;

    if (ci)
        while(len--) key ^= (key << 6) + (key >> 2) + C_tolower((int)(*str++));
    else
        while(len--) key ^= (key << 6) + (key >> 2) + *(str++);

    return (C_word)(key % (C_uword)m);
}


C_regparm C_word C_fcall lookup(C_word key, int len, C_char *str, C_SYMBOL_TABLE *stable)
{
    C_word bucket, sym, s;

    for(bucket = stable->table[ key ]; bucket != C_SCHEME_END_OF_LIST;
        bucket = C_block_item(bucket,1)) {
        sym = C_block_item(bucket,0);
        s = C_block_item(sym, 1);

        if(C_header_size(s) == (C_word)len
           && !C_memcmp(str, (C_char *)C_data_pointer(s), len))
            return sym;
    }

    return C_SCHEME_FALSE;
}
