#ifndef CHICKEN_H
#define CHICKEN_H

#ifdef HAVE_CHICKEN_CONFIG_H
# include <chicken-config.h>
#endif

#include "definitions.h"
#include "types.h"
#include "macros.h"

#include <runtime/api.h>
#include <runtime/check.h>
#include <runtime/compiler.h>
#include <runtime/debug.h>
#include <runtime/errors.h>
#include <runtime/reader.h>
#include <runtime/symbol_table.h>
#include <runtime/trace.h>

#include <scheme/apply.h>
#include <scheme/continuations.h>
#include <scheme/cxr.h>
#include <scheme/lists.h>
#include <scheme/strings.h>
#include <scheme/vectors.h>

#include <foreign/callbacks.h>
#include <foreign/constructors.h>
#include <foreign/data.h>
#include <foreign/locatives.h>
#include <foreign/predicates.h>
#include <foreign/records.h>

#include <math/arithmetic.h>
#include <math/constructors.h>
#include <math/fixnum.h>
#include <math/flonum.h>
#include <math/predicates.h>

#include <memory/finalizers.h>
#include <memory/gc.h>
#include <memory/heap.h>

#include <system/dload.h>
#include <system/files.h>
#include <system/platform.h>
#include <system/signals.h>
#include <system/timing.h>

#include <scheduler/interrupts.h>

#endif /* CHICKEN_H */
