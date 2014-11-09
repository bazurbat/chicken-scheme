#ifndef RUNTIME_SIGNALS_H
#define RUNTIME_SIGNALS_H

#include "definitions.h"

extern volatile C_TLS int serious_signal_occurred;
extern C_TLS int signal_mapping_table[ NSIG ];

void global_signal_handler(int signum);

#endif /* RUNTIME_SIGNALS_H */
