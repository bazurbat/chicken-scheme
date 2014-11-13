#ifndef MATH_COMMON_H
#define MATH_COMMON_H

#include <common.h>
#include <math.h>

#define C_acos                 acos
#define C_asin                 asin
#define C_atan                 atan
#define C_atan2                atan2
#define C_ceil                 ceil
#define C_cos                  cos
#define C_exp                  exp
#define C_fabs                 fabs
#define C_floor                floor
#define C_log                  log
#define C_modf                 modf
#define C_pow                  pow
#define C_round                round
#define C_sin                  sin
#define C_sqrt                 sqrt
#define C_tan                  tan
#define C_trunc                trunc

#if _MSC_VER && _MSC_VER < 1800
# define INFINITY (DBL_MAX+DBL_MAX)
# define NAN (INFINITY-INFINITY)
# define isinf(x) (!_finite(x) && !_isnan(x))
# define isnan(x) _isnan(x)
# define isnormal(x) _finite(x)
#endif

#define C_isnan(f)             isnan(f)
#define C_isinf(f)             isinf(f)

#endif /* MATH_COMMON_H */
