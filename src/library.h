#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include <errno.h>
#include <float.h>

#ifdef HAVE_SYSEXITS_H
# include <sysexits.h>
#endif

#ifndef EX_SOFTWARE
# define EX_SOFTWARE    70
#endif

#define C_close_file(p)       (C_fclose((C_FILEPTR)(C_port_file(p))), C_SCHEME_UNDEFINED)
#define C_a_f64peek(ptr, c, b, i)  C_flonum(ptr, ((double *)C_data_pointer(b))[ C_unfix(i) ])
#define C_fetch_c_strlen(b, i) C_fix(strlen((C_char *)C_block_item(b, C_unfix(i))))
#define C_asciiz_strlen(str) C_fix(strlen(C_c_string(str)))
#define C_peek_c_string(b, i, to, len) (memcpy(C_data_pointer(to), (C_char *)C_block_item(b, C_unfix(i)), C_unfix(len)), C_SCHEME_UNDEFINED)
#define C_free_mptr(p, i)     (free((void *)C_block_item(p, C_unfix(i))), C_SCHEME_UNDEFINED)
#define C_free_sptr(p, i)     (free((void *)(((C_char **)C_block_item(p, 0))[ C_unfix(i) ])), C_SCHEME_UNDEFINED)

#define C_direct_continuation(dummy)  t1

#define C_a_get_current_seconds(ptr, c, dummy)  C_flonum(ptr, time(NULL))
#define C_peek_c_string_at(ptr, i)    ((C_char *)(((C_char **)ptr)[ i ]))

static C_word
fast_read_line_from_file(C_word str, C_word port, C_word size) {
    int n = C_unfix(size);
    int i;
    int c;
    char *buf = C_c_string(str);
    C_FILEPTR fp = C_port_file(port);

    if ((c = C_getc(fp)) == EOF) {
        if (ferror(fp)) {
            clearerr(fp);
            return C_fix(-1);
        } else { /* feof (fp) */
            return C_SCHEME_END_OF_FILE;
        }
    }

    C_ungetc(c, fp);

    for (i = 0; i < n; i++) {
        c = C_getc(fp);

        if(c == EOF && ferror(fp)) {
            clearerr(fp);
            return C_fix(-(i + 1));
        }

        switch (c) {
        case '\r':  if ((c = C_getc(fp)) != '\n') C_ungetc(c, fp);
        case EOF:   clearerr(fp);
        case '\n':  return C_fix(i);
        }
        buf[i] = c;
    }
    return C_SCHEME_FALSE;
}

static C_word
fast_read_string_from_file(C_word dest, C_word port, C_word len, C_word pos)
{
    size_t m;
    int n = C_unfix (len);
    char * buf = ((char *)C_data_pointer (dest) + C_unfix (pos));
    C_FILEPTR fp = C_port_file (port);

    if(feof(fp)) return C_SCHEME_END_OF_FILE;

    m = fread (buf, sizeof (char), n, fp);

    if (m < n) {
        if (ferror(fp)) /* Report to Scheme, which may retry, so clear errors */
            clearerr(fp);
        else if (feof(fp) && 0 == m) /* eof but m > 0? Return data first, below */
            return C_SCHEME_END_OF_FILE; /* Calling again will get us here */
    }

    return C_fix (m);
}

static C_word
shallow_equal(C_word x, C_word y)
{
    /* assumes x and y are non-immediate */
    int i, len = C_header_size(x);

    if(C_header_size(y) != len) return C_SCHEME_FALSE;
    else return C_mk_bool(!memcmp((void *)x, (void *)y, len * sizeof(C_word)));
}

#endif
