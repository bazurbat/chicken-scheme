#ifndef GC_FINALIZERS_H
#define GC_FINALIZERS_H

#include <runtime/definitions.h>

typedef struct finalizer_node_struct
{
    struct finalizer_node_struct *next, *previous;
    C_word item, finalizer;
} FINALIZER_NODE;

C_varextern C_TLS int C_max_pending_finalizers;

extern C_TLS FINALIZER_NODE *finalizer_list;
extern C_TLS FINALIZER_NODE *finalizer_free_list;
extern C_TLS FINALIZER_NODE **pending_finalizer_indices;

extern C_TLS C_word pending_finalizers_symbol;

extern C_TLS int live_finalizer_count;
extern C_TLS int allocated_finalizer_count;
extern C_TLS int pending_finalizer_count;

C_fctexport void C_ccall C_register_finalizer(C_word c, C_word closure, C_word k, C_word x, C_word proc) C_noret;
C_fctexport void C_do_register_finalizer(C_word x, C_word proc);
C_fctexport int C_do_unregister_finalizer(C_word x);

C_fctexport C_word C_resize_pending_finalizers(C_word size);

#endif /* GC_FINALIZERS_H */