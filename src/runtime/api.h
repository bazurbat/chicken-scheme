#ifndef RUNTIME_API_H
#define RUNTIME_API_H

#include "definitions.h"

extern C_TLS int chicken_is_running;
extern C_TLS int stack_size_changed;
extern C_TLS int fake_tty_flag;
extern C_TLS int forwarding_table_size;
extern C_TLS int C_enable_repl;

#endif /* RUNTIME_API_H */
