#ifndef RUNTIME_GC_H
#define RUNTIME_GC_H

#include "definitions.h"
#include "types.h"

typedef struct finalizer_node_struct
{
    struct finalizer_node_struct *next, *previous;
    C_word item, finalizer;
} FINALIZER_NODE;

extern C_TLS FINALIZER_NODE
    *finalizer_list,
    *finalizer_free_list,
    **pending_finalizer_indices;

extern C_TLS int
    live_finalizer_count,
    allocated_finalizer_count,
    pending_finalizer_count;

extern C_TLS C_byte
    *heapspace1,
    *heapspace2,
    *fromspace_start,
    *tospace_start,
    *tospace_top,
    *tospace_limit,
    *new_tospace_start,
    *new_tospace_top,
    *new_tospace_limit,
    *heap_scan_top;

extern C_TLS C_word
    **mutation_stack_bottom,
    **mutation_stack_limit,
    **mutation_stack_top;

C_varextern C_TLS int
    C_enable_gcweak,
    C_max_pending_finalizers;

C_TLS void (*C_gc_trace_hook)(C_word *var, int mode);

extern C_TLS int
    gc_bell,
    gc_report_flag,
    gc_count_1,
    gc_count_1_total,
    gc_count_2;

extern C_TLS C_word
    *locative_table,
    interrupt_hook_symbol,
    callback_continuation_stack_symbol,
    *forwarding_table;

extern C_TLS C_GC_ROOT *gc_root_list;

void handle_interrupt(void *trampoline, void *proc) C_noret;

typedef struct weak_table_entry_struct
{
    C_word item,                /* item weakly held (symbol) */
           container;           /* object holding reference to symbol, lowest 3 bits are */
} WEAK_TABLE_ENTRY;             /*   also used as a counter, saturated at 2 or more */

extern C_TLS WEAK_TABLE_ENTRY *weak_item_table;

typedef struct lf_list_struct
{
    C_word *lf;
    int count;
    struct lf_list_struct *next, *prev;
    C_PTABLE_ENTRY *ptable;
    void *module_handle;
    char *module_name;
} LF_LIST;

extern C_TLS LF_LIST *lf_list;

extern C_TLS unsigned int stack_size;

extern C_TLS C_word
    **collectibles,
    **collectibles_top,
    **collectibles_limit;

extern C_TLS int
    locative_table_size,
    locative_table_count;

extern C_TLS C_char *current_module_name;
extern C_TLS void *current_module_handle;

extern C_TLS C_word pending_finalizers_symbol;

extern C_TLS double gc_ms,
       timer_accumulated_gc_ms;

extern C_TLS int
    pending_interrupts[ MAX_PENDING_INTERRUPTS ],
    pending_interrupts_count,
    handling_interrupts;

C_fctexport void C_ccall C_gc(C_word c, C_word closure, C_word k, ...) C_noret;

#endif /* RUNTIME_GC_H */
