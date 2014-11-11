/* chicken.h - General headerfile for compiler generated executables */

#ifndef CHICKEN_H
#define CHICKEN_H

#include <runtime/aliases.h>
#include <runtime/api.h>
#include <runtime/apply.h>
#include <runtime/callbacks.h>
#include <runtime/check.h>
#include <runtime/compiler.h>
#include <runtime/continuations.h>
#include <runtime/cxr.h>
#include <runtime/debug.h>
#include <runtime/definitions.h>
#include <runtime/errors.h>
#include <runtime/macros.h>
#include <runtime/reader.h>
#include <runtime/records.h>
#include <runtime/symbol_table.h>
#include <runtime/trace.h>
#include <runtime/types.h>

#include "scheme/lists.h"
#include "scheme/strings.h"
#include "scheme/vectors.h"

#include "foreign/constructors.h"
#include "foreign/data.h"
#include "foreign/locatives.h"
#include "foreign/predicates.h"

#include "math/arithmetic.h"
#include "math/constructors.h"
#include "math/fixnum.h"
#include "math/flonum.h"
#include "math/predicates.h"

#include "memory/finalizers.h"
#include "memory/gc.h"
#include "memory/heap.h"

#include "system/dload.h"
#include "system/files.h"
#include "system/platform.h"
#include "system/signals.h"
#include "system/timing.h"

#include "scheduler/interrupts.h"

#endif /* CHICKEN_H */
