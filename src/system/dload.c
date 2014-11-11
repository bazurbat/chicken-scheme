#include "dload.h"
#include <memory/gc.h>
#include <runtime/debug.h>
#include <runtime/errors.h>
#include <runtime/macros.h>
#include <runtime/types.h>
#include <scheme/strings.h>

#ifdef _WIN32
# include <windows.h>
#endif

#define C_dlopen                   dlopen
#define C_dlclose                  dlclose
#define C_dlsym                    dlsym
#define C_strerror                 strerror

#if defined(_WIN32)
# define C_strncasecmp              _strnicmp
#else
# define C_strncasecmp              strncasecmp
#endif
#define C_strdup                   strdup

#if !defined(NO_DLOAD2) && (defined(HAVE_DLFCN_H) || defined(HAVE_DL_H) || (defined(HAVE_LOADLIBRARY) && defined(HAVE_GETPROCADDRESS)))
static void dload_2(void *dummy) C_noret;
#endif

#ifndef RTLD_GLOBAL
# define RTLD_GLOBAL                   0
#endif

#ifndef RTLD_NOW
# define RTLD_NOW                      0
#endif

#ifndef RTLD_LAZY
# define RTLD_LAZY                     0
#endif

#ifndef RTLD_LOCAL
# define RTLD_LOCAL                    0
#endif

C_TLS char *C_dlerror;

C_TLS int dlopen_flags;

C_TLS C_char *current_module_name;
C_TLS void *current_module_handle;

/* Dynamic loading of shared objects: */

void C_ccall C_set_dlopen_flags(C_word c, C_word closure, C_word k, C_word now, C_word global)
{
#if !defined(NO_DLOAD2) && defined(HAVE_DLFCN_H)
    dlopen_flags = (C_truep(now) ? RTLD_NOW : RTLD_LAZY) | (C_truep(global) ? RTLD_GLOBAL : RTLD_LOCAL);
#endif
    C_kontinue(k, C_SCHEME_UNDEFINED);
}

void C_ccall C_dload(C_word c, C_word closure, C_word k, C_word name, C_word entry)
{
#if !defined(NO_DLOAD2) && (defined(HAVE_DLFCN_H) || defined(HAVE_DL_H) || (defined(HAVE_LOADLIBRARY) && defined(HAVE_GETPROCADDRESS)))
    /* Force minor GC: otherwise the lf may contain pointers to stack-data
       (stack allocated interned symbols, for example) */
    C_save_and_reclaim((void *)dload_2, NULL, 3, k, name, entry);
#endif

    C_kontinue(k, C_SCHEME_FALSE);
}

#ifdef DLOAD_2_DEFINED
# undef DLOAD_2_DEFINED
#endif

#if !defined(NO_DLOAD2) && defined(HAVE_DLFCN_H) && !defined(DLOAD_2_DEFINED)
#  define DLOAD_2_DEFINED

void dload_2(void *dummy)
{
    void *handle, *p, *p2;
    C_word entry = C_restore,
           name = C_restore,
           k = C_restore;
    C_char *topname = (C_char *)C_data_pointer(entry);
    C_char *mname = (C_char *)C_data_pointer(name);
    C_char *tmp;
    int tmp_len = 0;

    if((handle = C_dlopen(mname, dlopen_flags)) != NULL) {
        if((p = C_dlsym(handle, topname)) == NULL) {
            tmp_len = C_strlen(topname) + 2;
            tmp = (C_char *)C_malloc(tmp_len);

            if(tmp == NULL)
                panic(C_text("out of memory - cannot allocate toplevel name string"));

            C_strlcpy(tmp, C_text("_"), tmp_len);
            C_strlcat(tmp, topname, tmp_len);
            p = C_dlsym(handle, tmp);
            C_free(tmp);
        }

        if(p != NULL) {
            current_module_name = C_strdup(mname);
            current_module_handle = handle;

            if(debug_mode) {
                C_dbg(C_text("debug"), C_text("loading compiled module `%s' (handle is " UWORD_FORMAT_STRING ")\n"),
                      current_module_name, (C_uword)current_module_handle);
            }

            ((C_proc2)p)(2, C_SCHEME_UNDEFINED, k); /* doesn't return */
        }

        C_dlclose(handle);
    }

    C_dlerror = (char *)dlerror();
    C_kontinue(k, C_SCHEME_FALSE);
}

#endif

#if !defined(NO_DLOAD2) && (defined(HAVE_LOADLIBRARY) && defined(HAVE_GETPROCADDRESS)) && !defined(DLOAD_2_DEFINED)
# define DLOAD_2_DEFINED

void dload_2(void *dummy)
{
    HINSTANCE handle;
    FARPROC p = NULL, p2;
    C_word
        entry = C_restore,
              name = C_restore,
              k = C_restore;
    C_char *topname = (C_char *)C_data_pointer(entry);
    C_char *mname = (C_char *)C_data_pointer(name);

    /* cannot use LoadLibrary on non-DLLs, so we use extension checking */
    if (C_header_size(name) >= 5) {
        char *n = (char*) C_data_pointer(name);
        int l = C_header_size(name);
        if (C_strncasecmp(".dll", n+l-5, 4) &&
            C_strncasecmp(".so", n+l-4, 3))
            C_kontinue(k, C_SCHEME_FALSE);
    }

    if((handle = LoadLibrary(mname)) != NULL) {
        if ((p = GetProcAddress(handle, topname)) != NULL) {
            current_module_name = C_strdup(mname);
            current_module_handle = handle;

            if(debug_mode) {
                C_dbg(C_text("debug"), C_text("loading compiled module `%s' (handle is " UWORD_FORMAT_STRING ")\n"),
                      current_module_name, (C_uword)current_module_handle);
            }

            ((C_proc2)p)(2, C_SCHEME_UNDEFINED, k);
        }
        else FreeLibrary(handle);
    }

    C_dlerror = (char *) C_strerror(errno);
    C_kontinue(k, C_SCHEME_FALSE);
}

#endif
