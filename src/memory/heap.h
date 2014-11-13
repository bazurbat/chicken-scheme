#ifndef RUNTIME_HEAP_H
#define RUNTIME_HEAP_H

#include <common.h>

extern int page_size;
extern int dump_heap_on_exit;

extern size_t heap_size;
extern int heap_size_changed;

C_varextern C_uword C_maximal_heap_size;

C_varextern C_byte
    *C_fromspace_top,
    *C_fromspace_limit;

C_varextern int
    C_heap_size_is_fixed;

C_varextern C_uword
    C_heap_growth,
    C_heap_shrinkage;

extern size_t
    heapspace1_size,
    heapspace2_size;

C_fctexport void C_set_or_change_heap_size(C_word heap, int reintern);
C_fctexport int C_fcall C_in_heapp(C_word x) C_regparm;
C_fctexport void C_ccall C_ensure_heap_reserve(C_word c, C_word closure, C_word k, C_word n) C_noret;
C_fctexport void C_ccall C_dump_heap_state(C_word x, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_filter_heap_objects(C_word x, C_word closure, C_word k, C_word func,
                                               C_word vector, C_word userarg) C_noret;

C_regparm int C_fcall C_in_new_heapp(C_word x);

C_byte * heap_alloc (size_t size, C_byte **page_aligned);
void heap_free (C_byte *ptr, size_t size);
C_byte * heap_realloc (C_byte *ptr, size_t old_size, size_t new_size, C_byte **page_aligned);

#endif /* RUNTIME_HEAP_H */
