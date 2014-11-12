#include "api.h"
#include <chicken.h>

#define C_pte(name)                  pt[ i ].id = #name; pt[ i++ ].ptr = (void *)name;

#define MAXIMAL_NUMBER_OF_COMMAND_LINE_ARGUMENTS 256

#define DEFAULT_MUTATION_STACK_SIZE    1024

#define DEFAULT_SYMBOL_TABLE_SIZE      2999
#define DEFAULT_FORWARDING_TABLE_SIZE  32
#define DEFAULT_LOCATIVE_TABLE_SIZE    32
#define DEFAULT_COLLECTIBLES_SIZE      1024

#define DEFAULT_HEAP_SIZE              DEFAULT_STACK_SIZE
#define DEFAULT_MAXIMAL_HEAP_SIZE      0x7ffffff0
#define DEFAULT_HEAP_GROWTH            200
#define DEFAULT_HEAP_SHRINKAGE         50

#define INITIAL_TIMER_INTERRUPT_PERIOD 10000

#ifndef EX_SOFTWARE
# define EX_SOFTWARE  70
#endif

#if !defined(C_NONUNIX)

# include <sys/time.h>
# include <sys/resource.h>
# include <sys/wait.h>

#else

#endif

#include <signal.h>

static C_TLS int chicken_is_initialized;

C_TLS int stack_size_changed;
C_TLS int forwarding_table_size;

static C_TLS int
    return_to_host,
    chicken_ran_once,
    pass_serious_signals = 1;

C_TLS char **C_main_argv;

C_TLS int
    C_abort_on_thread_exceptions,
    C_interrupts_enabled,
    C_main_argc;

C_TLS void *C_restart_address;

static C_TLS C_char
    buffer[ STRING_BUFFER_SIZE ];

typedef void (*TOPLEVEL)(C_word c, C_word self, C_word k) C_noret;

C_TLS void (C_fcall *C_restart_trampoline)(void *proc) C_regparm C_noret;
C_TLS int (*C_gc_mutation_hook)(C_word *slot, C_word val);

void generic_trampoline(void *dummy)
{
    C_word k = C_restore;

    C_kontinue(k, C_SCHEME_UNDEFINED);
}

/* Trampoline called at system startup: */

static C_regparm C_noret void C_fcall initial_trampoline(void *proc)
{
    TOPLEVEL top = (TOPLEVEL)proc;
    C_word closure = (C_word)C_alloc(C_SIZEOF_CLOSURE(1));

    ((C_SCHEME_BLOCK *)closure)->header = C_CLOSURE_TYPE | 1;
    C_set_block_item(closure, 0, (C_word)termination_continuation);
    (top)(2, C_SCHEME_UNDEFINED, closure);
}

/* Startup code: */

int CHICKEN_main(int argc, char *argv[], void *toplevel)
{
    C_word h, s, n;

    pass_serious_signals = 0;
    CHICKEN_parse_command_line(argc, argv, &h, &s, &n);

    if(!CHICKEN_initialize(h, s, n, toplevel))
        panic(C_text("cannot initialize - out of memory"));

    CHICKEN_run(NULL);
    return 0;
}

/* Initialize runtime system: */

static C_PTABLE_ENTRY *create_initial_ptable()
{
    /* IMPORTANT: hardcoded table size -
     *        this must match the number of C_pte calls + 1 (NULL terminator)! */
    C_PTABLE_ENTRY *pt = (C_PTABLE_ENTRY *)malloc(sizeof(C_PTABLE_ENTRY) * 56);
    int i = 0;

    if(pt == NULL)
        panic(C_text("out of memory - cannot create initial ptable"));

    C_pte(termination_continuation);
    C_pte(callback_return_continuation);
    C_pte(values_continuation);
    C_pte(call_cc_values_wrapper);
    C_pte(call_cc_wrapper);
    C_pte(C_gc);
    C_pte(C_allocate_vector);
    C_pte(C_make_structure);
    C_pte(C_ensure_heap_reserve);
    C_pte(C_return_to_host);
    C_pte(C_get_symbol_table_info);
    C_pte(C_get_memory_info);
    C_pte(C_decode_seconds);
    C_pte(C_stop_timer);
    C_pte(C_dload);
    C_pte(C_set_dlopen_flags);
    C_pte(C_become);
    C_pte(C_apply_values);
    C_pte(C_times);
    C_pte(C_minus);
    C_pte(C_plus);
    C_pte(C_divide);
    C_pte(C_nequalp);
    C_pte(C_greaterp);
    /* IMPORTANT: have you read the comments at the start and the end of this function? */
    C_pte(C_lessp);
    C_pte(C_greater_or_equal_p);
    C_pte(C_less_or_equal_p);
    C_pte(C_quotient);
    C_pte(C_flonum_fraction);
    C_pte(C_flonum_rat);
    C_pte(C_expt);
    C_pte(C_number_to_string);
    C_pte(C_make_symbol);
    C_pte(C_string_to_symbol);
    C_pte(C_apply);
    C_pte(C_call_cc);
    C_pte(C_values);
    C_pte(C_call_with_values);
    C_pte(C_continuation_graft);
    C_pte(C_open_file_port);
    C_pte(C_software_type);
    C_pte(C_machine_type);
    C_pte(C_machine_byte_order);
    C_pte(C_software_version);
    C_pte(C_build_platform);
    C_pte(C_make_pointer);
    C_pte(C_make_tagged_pointer);
    C_pte(C_peek_signed_integer);
    C_pte(C_peek_unsigned_integer);
    C_pte(C_context_switch);
    C_pte(C_register_finalizer);
    C_pte(C_locative_ref);
    C_pte(C_copy_closure);
    C_pte(C_dump_heap_state);
    C_pte(C_filter_heap_objects);

    /* IMPORTANT: did you remember the hardcoded pte table size? */
    pt[ i ].id = NULL;
    return pt;
}

int CHICKEN_initialize(int heap, int stack, int symbols, void *toplevel)
{
    int i;
#ifdef HAVE_SIGACTION
    struct sigaction sa;
#endif

    /*FIXME Should have C_tzset in chicken.h? */
#ifdef C_NONUNIX
    C_startup_time_seconds = (time_t)0;
# if defined(__MINGW32__)
    /* Make sure _tzname, _timezone, and _daylight are set */
    _tzset();
# endif
#else
    struct timeval tv;
    C_gettimeofday(&tv, NULL);
    C_startup_time_seconds = tv.tv_sec;
    /* Make sure tzname, timezone, and daylight are set */
    tzset();
#endif

    if(chicken_is_initialized) return 1;
    else chicken_is_initialized = 1;

    if(debug_mode)
        C_dbg(C_text("debug"), C_text("application startup...\n"));

    C_panic_hook = usual_panic;
    symbol_table_list = NULL;

    symbol_table = C_new_symbol_table(".", symbols ? symbols : DEFAULT_SYMBOL_TABLE_SIZE);

    if(symbol_table == NULL)
        return 0;

    page_size = 0;
    stack_size = stack ? stack : DEFAULT_STACK_SIZE;
    C_set_or_change_heap_size(heap ? heap : DEFAULT_HEAP_SIZE, 0);

    /* Allocate temporary stack: */
    if((C_temporary_stack_limit = (C_word *)malloc(TEMPORARY_STACK_SIZE * sizeof(C_word))) == NULL)
        return 0;

    C_temporary_stack_bottom = C_temporary_stack_limit + TEMPORARY_STACK_SIZE;
    C_temporary_stack = C_temporary_stack_bottom;

    /* Allocate mutation stack: */
    mutation_stack_bottom = (C_word **)malloc(DEFAULT_MUTATION_STACK_SIZE * sizeof(C_word *));

    if(mutation_stack_bottom == NULL) return 0;

    mutation_stack_top = mutation_stack_bottom;
    mutation_stack_limit = mutation_stack_bottom + DEFAULT_MUTATION_STACK_SIZE;
    C_gc_mutation_hook = NULL;
    C_gc_trace_hook = NULL;

    /* Allocate weak item table: */
    if(C_enable_gcweak) {
        weak_item_table = (WEAK_TABLE_ENTRY *)calloc(WEAK_TABLE_SIZE, sizeof(WEAK_TABLE_ENTRY));

        if(weak_item_table == NULL)
            return 0;
    }

    /* Initialize finalizer lists: */
    finalizer_list = NULL;
    finalizer_free_list = NULL;
    pending_finalizer_indices =
        (FINALIZER_NODE **)malloc(C_max_pending_finalizers * sizeof(FINALIZER_NODE *));

    if(pending_finalizer_indices == NULL) return 0;

    /* Initialize forwarding table: */
    forwarding_table =
        (C_word *)malloc((DEFAULT_FORWARDING_TABLE_SIZE + 1) * 2 * sizeof(C_word));

    if(forwarding_table == NULL) return 0;

    *forwarding_table = 0;
    forwarding_table_size = DEFAULT_FORWARDING_TABLE_SIZE;

    /* Initialize locative table: */
    locative_table = (C_word *)malloc(DEFAULT_LOCATIVE_TABLE_SIZE * sizeof(C_word));

    if(locative_table == NULL) return 0;

    locative_table_size = DEFAULT_LOCATIVE_TABLE_SIZE;
    locative_table_count = 0;

    /* Setup collectibles: */
    collectibles = (C_word **)malloc(sizeof(C_word *) * DEFAULT_COLLECTIBLES_SIZE);

    if(collectibles == NULL) return 0;

    collectibles_top = collectibles;
    collectibles_limit = collectibles + DEFAULT_COLLECTIBLES_SIZE;
    gc_root_list = NULL;

    /* Initialize global variables: */
    if(C_heap_growth <= 0) C_heap_growth = DEFAULT_HEAP_GROWTH;

    if(C_heap_shrinkage <= 0) C_heap_shrinkage = DEFAULT_HEAP_SHRINKAGE;

    if(C_maximal_heap_size <= 0) C_maximal_heap_size = DEFAULT_MAXIMAL_HEAP_SIZE;

#if !defined(NO_DLOAD2) && defined(HAVE_DLFCN_H)
    dlopen_flags = RTLD_LAZY | RTLD_GLOBAL;
#else
    dlopen_flags = 0;
#endif

    /* setup signal handlers */
    if(!pass_serious_signals) {
#ifdef HAVE_SIGACTION
        sa.sa_flags = 0;
        sigfillset(&sa.sa_mask); /* See note in C_establish_signal_handler() */
        sa.sa_handler = global_signal_handler;
        C_sigaction(SIGBUS, &sa, NULL);
        C_sigaction(SIGFPE, &sa, NULL);
        C_sigaction(SIGILL, &sa, NULL);
        C_sigaction(SIGSEGV, &sa, NULL);
#else
# ifndef _WIN32
        C_signal(SIGBUS, global_signal_handler);
# endif
        C_signal(SIGILL, global_signal_handler);
        C_signal(SIGFPE, global_signal_handler);
        C_signal(SIGSEGV, global_signal_handler);
#endif
    }

    tracked_mutation_count = mutation_count = gc_count_1 = gc_count_1_total = gc_count_2 = 0;
    lf_list = NULL;
    C_register_lf2(NULL, 0, create_initial_ptable());
    C_restart_address = toplevel;
    C_restart_trampoline = initial_trampoline;
    trace_buffer = NULL;
    C_clear_trace_buffer();
    chicken_is_running = chicken_ran_once = 0;
    pending_interrupts_count = 0;
    handling_interrupts = 0;
    last_interrupt_latency = 0;
    C_interrupts_enabled = 1;
    C_initial_timer_interrupt_period = INITIAL_TIMER_INTERRUPT_PERIOD;
    C_timer_interrupt_counter = INITIAL_TIMER_INTERRUPT_PERIOD;
    memset(signal_mapping_table, 0, sizeof(int) * NSIG);
    initialize_symbol_table();
    C_dlerror = "cannot load compiled code dynamically - this is a statically linked executable";
    error_location = C_SCHEME_FALSE;
    C_pre_gc_hook = NULL;
    C_post_gc_hook = NULL;
    live_finalizer_count = 0;
    allocated_finalizer_count = 0;
    current_module_name = NULL;
    current_module_handle = NULL;
    callback_continuation_level = 0;
    gc_ms = 0;
    (void)C_randomize(C_fix(time(NULL)));
    return 1;
}

C_word CHICKEN_run(void *toplevel)
{
    if(!chicken_is_initialized && !CHICKEN_initialize(0, 0, 0, toplevel))
        panic(C_text("could not initialize"));

    if(chicken_is_running)
        panic(C_text("re-invocation of Scheme world while process is already running"));

    chicken_is_running = chicken_ran_once = 1;
    return_to_host = 0;

#if C_STACK_GROWS_DOWNWARD
    C_stack_limit = (C_word *)((C_byte *)C_stack_pointer - stack_size);
#else
    C_stack_limit = (C_word *)((C_byte *)C_stack_pointer + stack_size);
#endif

    stack_bottom = C_stack_pointer;

    if(debug_mode)
        C_dbg(C_text("debug"), C_text("stack bottom is 0x%lx.\n"), (C_word)stack_bottom);

    /* The point of (usually) no return... */
#ifdef HAVE_SIGSETJMP
    C_sigsetjmp(C_restart, 0);
#else
    C_setjmp(C_restart);
#endif

    serious_signal_occurred = 0;

    if(!return_to_host)
        (C_restart_trampoline)(C_restart_address);

    chicken_is_running = 0;
    return C_restore;
}

C_word CHICKEN_continue(C_word k)
{
    if(C_temporary_stack_bottom != C_temporary_stack)
        panic(C_text("invalid temporary stack level"));

    if(!chicken_is_initialized)
        panic(C_text("runtime system has not been initialized - `CHICKEN_run' has probably not been called"));

    C_save(k);
    return CHICKEN_run(NULL);
}

void *CHICKEN_new_gc_root()
{
    return CHICKEN_new_gc_root_2(0);
}

void *CHICKEN_new_gc_root_2(int finalizable)
{
    C_GC_ROOT *r = (C_GC_ROOT *)malloc(sizeof(C_GC_ROOT));

    if(r == NULL)
        panic(C_text("out of memory - cannot allocate GC root"));

    r->value = C_SCHEME_UNDEFINED;
    r->next = gc_root_list;
    r->prev = NULL;
    r->finalizable = finalizable;

    if(gc_root_list != NULL) gc_root_list->prev = r;

    gc_root_list = r;
    return (void *)r;
}

void *CHICKEN_new_finalizable_gc_root()
{
    return CHICKEN_new_gc_root_2(1);
}

void CHICKEN_delete_gc_root(void *root)
{
    C_GC_ROOT *r = (C_GC_ROOT *)root;

    if(r->prev == NULL) gc_root_list = r->next;
    else r->prev->next = r->next;

    if(r->next != NULL) r->next->prev = r->prev;

    free(root);
}

void *CHICKEN_global_lookup(char *name)
{
    int
        len = strlen(name),
            key = hash_string(len, name, symbol_table->size, symbol_table->rand, 0);
    C_word s;
    void *root = CHICKEN_new_gc_root();

    if(C_truep(s = lookup(key, len, name, symbol_table))) {
        if(C_block_item(s, 0) != C_SCHEME_UNBOUND) {
            CHICKEN_gc_root_set(root, s);
            return root;
        }
    }

    return NULL;
}

int CHICKEN_is_running()
{
    return chicken_is_running;
}

void CHICKEN_interrupt()
{
    C_timer_interrupt_counter = 0;
}

/* Parse runtime options from command-line: */

static C_word arg_val(C_char *arg)
{
    int len;
    C_char *end;
    C_long val, mul = 1;

    if (arg == NULL) panic(C_text("illegal runtime-option argument"));

    len = strlen(arg);

    if(len < 1) panic(C_text("illegal runtime-option argument"));

    switch(arg[ len - 1 ]) {
    case 'k':
    case 'K': mul = 1024; break;

    case 'm':
    case 'M': mul = 1024 * 1024; break;

    case 'g':
    case 'G': mul = 1024 * 1024 * 1024; break;

    default: mul = 1;
    }

    val = C_strtow(arg, &end, 10);

    if((mul != 1 ? end[ 1 ] != '\0' : end[ 0 ] != '\0'))
        panic(C_text("invalid runtime-option argument suffix"));

    return val * mul;
}

void CHICKEN_parse_command_line(int argc, char *argv[], C_word *heap, C_word *stack, C_word *symbols)
{
    int i;
    char *ptr;
    C_word x;

    C_main_argc = argc;
    C_main_argv = argv;
    *heap = DEFAULT_HEAP_SIZE;
    *stack = DEFAULT_STACK_SIZE;
    *symbols = DEFAULT_SYMBOL_TABLE_SIZE;

    for(i = 1; i < C_main_argc; ++i)
        if(!strncmp(C_main_argv[ i ], C_text("-:"), 2)) {
            for(ptr = &C_main_argv[ i ][ 2 ]; *ptr != '\0'; ) {
                switch(*(ptr++)) {
                case '?':
                    C_dbg("Runtime options", "\n\n"
                          " -:?              display this text\n"
                          " -:c              always treat stdin as console\n"
                          " -:d              enable debug output\n"
                          " -:D              enable more debug output\n"
                          " -:g              show GC information\n"
                          " -:o              disable stack overflow checks\n"
                          " -:hiSIZE         set initial heap size\n"
                          " -:hmSIZE         set maximal heap size\n"
                          " -:hgPERCENTAGE   set heap growth percentage\n"
                          " -:hsPERCENTAGE   set heap shrink percentage\n"
                          " -:hSIZE          set fixed heap size\n"
                          " -:r              write trace output to stderr\n"
                          " -:sSIZE          set nursery (stack) size\n"
                          " -:tSIZE          set symbol-table size\n"
                          " -:fSIZE          set maximal number of pending finalizers\n"
                          " -:w              enable garbage collection of unused symbols\n"
                          " -:x              deliver uncaught exceptions of other threads to primordial one\n"
                          " -:b              enter REPL on error\n"
                          " -:B              sound bell on major GC\n"
                          " -:aSIZE          set trace-buffer/call-chain size\n"
                          " -:H              dump heap state on exit\n"
                          " -:S              do not handle segfaults or other serious conditions\n"
                          "\n  SIZE may have a `k' (`K'), `m' (`M') or `g' (`G') suffix, meaning size\n"
                          "  times 1024, 1048576, and 1073741824, respectively.\n\n");
                    exit(0);

                case 'h':
                    switch(*ptr) {
                    case 'i':
                        *heap = arg_val(ptr + 1);
                        heap_size_changed = 1;
                        goto next;
                    case 'g':
                        C_heap_growth = arg_val(ptr + 1);
                        goto next;
                    case 'm':
                        C_maximal_heap_size = arg_val(ptr + 1);
                        goto next;
                    case 's':
                        C_heap_shrinkage = arg_val(ptr + 1);
                        goto next;
                    default:
                        *heap = arg_val(ptr);
                        heap_size_changed = 1;
                        C_heap_size_is_fixed = 1;
                        goto next;
                    }

                case 'o':
                    C_disable_overflow_check = 1;
                    break;

                case 'B':
                    gc_bell = 1;
                    break;

                case 'H':
                    dump_heap_on_exit = 1;
                    break;

                case 'S':
                    pass_serious_signals = 1;
                    break;

                case 's':
                    *stack = arg_val(ptr);
                    stack_size_changed = 1;
                    goto next;

                case 'f':
                    C_max_pending_finalizers = arg_val(ptr);
                    goto next;

                case 'a':
                    C_trace_buffer_size = arg_val(ptr);
                    goto next;

                case 't':
                    *symbols = arg_val(ptr);
                    goto next;

                case 'c':
                    fake_tty_flag = 1;
                    break;

                case 'd':
                    debug_mode = 1;
                    break;

                case 'D':
                    debug_mode = 2;
                    break;

                case 'g':
                    gc_report_flag = 2;
                    break;

                case 'w':
                    C_enable_gcweak = 1;
                    break;

                case 'r':
                    show_trace = 1;
                    break;

                case 'x':
                    C_abort_on_thread_exceptions = 1;
                    break;

                case 'b':
                    C_enable_repl = 1;
                    break;

                default: panic(C_text("illegal runtime option"));
                }
            }

next:;
        }
}

C_regparm void C_fcall C_toplevel_entry(C_char *name)
{
    if(debug_mode)
        C_dbg(C_text("debug"), C_text("entering toplevel %s...\n"), name);
}

C_word C_halt(C_word msg)
{
    C_char *dmp = msg != C_SCHEME_FALSE ? C_dump_trace(0) : NULL;

    if(msg != C_SCHEME_FALSE) {
        fwrite(C_data_pointer(msg), C_header_size(msg), sizeof(C_char), stderr);
        fputc('\n', stderr);
    }

    if(dmp != NULL)
        C_dbg("", C_text("\n%s"), dmp);

    C_exit(EX_SOFTWARE);
    return 0;
}

C_word C_message(C_word msg)
{
    unsigned int n = C_header_size(msg);
    /*
     * Strictly speaking this isn't necessary for the non-gui-mode,
     * but let's try and keep this consistent across modes.
     */
    if (memchr(C_c_string(msg), '\0', n) != NULL)
        barf(C_ASCIIZ_REPRESENTATION_ERROR, "##sys#message", msg);

    fwrite(C_c_string(msg), n, sizeof(C_char), stdout);
    putchar('\n');
    return C_SCHEME_UNDEFINED;
}

C_word C_exit_runtime(C_word code)
{
    exit(C_unfix(code));
    return 0;                   /* to please the compiler... */
}

void C_ccall C_return_to_host(C_word c, C_word closure, C_word k)
{
    return_to_host = 1;
    C_save(k);
    C_reclaim((void *)generic_trampoline, NULL);
}

void C_ccall C_context_switch(C_word c, C_word closure, C_word k, C_word state)
{
    C_word n = C_header_size(state) - 1,
           adrs = C_block_item(state, 0);
    TRAMPOLINE trampoline;

    C_temporary_stack = C_temporary_stack_bottom - n;
    memcpy(C_temporary_stack, (C_word *)state + 2, n * sizeof(C_word));
    trampoline = (TRAMPOLINE)C_block_item(adrs,0);
    trampoline((void *)C_block_item(adrs,1));
}
