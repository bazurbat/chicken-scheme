#include "finalizers.h"
#include "gc.h"
#include "heap.h"
#include "nursery.h"
#include <math/constructors.h>
#include <runtime/errors.h>
#include <runtime/macros.h>
#include <runtime/types.h>

#define C_DEFAULT_MAX_PENDING_FINALIZERS  2048

C_TLS int C_max_pending_finalizers = C_DEFAULT_MAX_PENDING_FINALIZERS;

C_TLS FINALIZER_NODE *finalizer_list;
C_TLS FINALIZER_NODE *finalizer_free_list;
C_TLS FINALIZER_NODE **pending_finalizer_indices;

C_TLS C_word pending_finalizers_symbol;

C_TLS int live_finalizer_count;
C_TLS int allocated_finalizer_count;
C_TLS int pending_finalizer_count;

void C_ccall C_register_finalizer(C_word c, C_word closure, C_word k, C_word x, C_word proc)
{
    if(C_immediatep(x) || (!C_in_stackp(x) && !C_in_heapp(x))) /* not GCable? */
        C_kontinue(k, x);

    C_do_register_finalizer(x, proc);
    C_kontinue(k, x);
}

void C_ccall C_do_register_finalizer(C_word x, C_word proc)
{
    C_word *ptr;
    int n, i;
    FINALIZER_NODE *flist;

    if(finalizer_free_list == NULL) {
        if((flist = (FINALIZER_NODE *)C_malloc(sizeof(FINALIZER_NODE))) == NULL)
            panic(C_text("out of memory - cannot allocate finalizer node"));

        ++allocated_finalizer_count;
    }
    else {
        flist = finalizer_free_list;
        finalizer_free_list = flist->next;
    }

    if(finalizer_list != NULL) finalizer_list->previous = flist;

    flist->previous = NULL;
    flist->next = finalizer_list;
    finalizer_list = flist;

    if(C_in_stackp(x)) C_mutate_slot(&flist->item, x);
    else flist->item = x;

    if(C_in_stackp(proc)) C_mutate_slot(&flist->finalizer, proc);
    else flist->finalizer = proc;

    ++live_finalizer_count;
}

int C_do_unregister_finalizer(C_word x)
{
    int n;
    FINALIZER_NODE *flist;

    for(flist = finalizer_list; flist != NULL; flist = flist->next) {
        if(flist->item == x) {
            if(flist->previous == NULL) finalizer_list = flist->next;
            else flist->previous->next = flist->next;

            return 1;
        }
    }

    return 0;
}

C_word C_resize_pending_finalizers(C_word size)
{
    int sz = C_num_to_int(size);

    FINALIZER_NODE **newmem =
        (FINALIZER_NODE **)C_realloc(pending_finalizer_indices, sz * sizeof(FINALIZER_NODE *));

    if (newmem == NULL)
        return C_SCHEME_FALSE;

    pending_finalizer_indices = newmem;
    C_max_pending_finalizers = sz;
    return C_SCHEME_TRUE;
}
