#include "system.h"
#include <chicken.h>

#include <errno.h>
#ifdef HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

static C_TLS C_char buffer[ STRING_BUFFER_SIZE ];

C_regparm C_word C_fcall C_i_file_exists_p(C_word name, C_word file, C_word dir)
{
    struct stat buf;
    int res;

    res = stat(C_c_string(name), &buf);

    if(res != 0) {
        switch(errno) {
        case ENOENT: return C_SCHEME_FALSE;
        case EOVERFLOW: return C_truep(dir) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
        case ENOTDIR: return C_SCHEME_FALSE;
        default: return C_fix(res);
        }
    }

    switch(buf.st_mode & S_IFMT) {
    case S_IFDIR: return C_truep(file) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
    default: return C_truep(dir) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
    }
}

C_regparm C_word C_fcall C_execute_shell_command(C_word string)
{
    int n = C_header_size(string);
    char *buf = buffer;

    /* Windows doc says to flush all output streams before calling system.
       Probably a good idea for all platforms. */
    (void)fflush(NULL);

    if(n >= STRING_BUFFER_SIZE) {
        if((buf = (char *)C_malloc(n + 1)) == NULL)
            barf(C_OUT_OF_MEMORY_ERROR, "system");
    }

    C_memcpy(buf, C_data_pointer(string), n);
    buf[ n ] = '\0';
    if (n != strlen(buf))
        barf(C_ASCIIZ_REPRESENTATION_ERROR, "get-environment-variable", string);

    n = C_system(buf);

    if(buf != buffer) C_free(buf);

    return C_fix(n);
}

