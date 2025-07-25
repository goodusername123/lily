#ifndef LILY_MATH_BINDINGS_H
#define LILY_MATH_BINDINGS_H
/* Generated by lily-bindgen, do not edit. */

#if defined(_WIN32) && !defined(LILY_NO_EXPORT)
#define LILY_MATH_EXPORT __declspec(dllexport)
#else
#define LILY_MATH_EXPORT
#endif

LILY_MATH_EXPORT
const char *lily_math_info_table[] = {
    "\0\0"
    ,"F\0abs\0(Integer): Integer"
    ,"F\0acos\0(Double): Double"
    ,"F\0asin\0(Double): Double"
    ,"F\0atan\0(Double): Double"
    ,"F\0ceil\0(Double): Double"
    ,"F\0cos\0(Double): Double"
    ,"F\0cosh\0(Double): Double"
    ,"F\0exp\0(Double): Double"
    ,"F\0fabs\0(Double): Double"
    ,"F\0floor\0(Double): Double"
    ,"F\0fmod\0(Double,Double): Double"
    ,"F\0is_infinity\0(Double): Boolean"
    ,"F\0is_nan\0(Double): Boolean"
    ,"F\0ldexp\0(Double,Integer): Double"
    ,"F\0log\0(Double): Double"
    ,"F\0log10\0(Double): Double"
    ,"F\0modf\0(Double): Tuple[Double,Double]"
    ,"F\0pow\0(Double,Double): Double"
    ,"F\0sin\0(Double): Double"
    ,"F\0sinh\0(Double): Double"
    ,"F\0sqrt\0(Double): Double"
    ,"F\0tan\0(Double): Double"
    ,"F\0tanh\0(Double): Double"
    ,"F\0to_deg\0(Double): Double"
    ,"F\0to_rad\0(Double): Double"
    ,"O\0huge\0Double"
    ,"O\0infinity\0Double"
    ,"O\0nan\0Double"
    ,"O\0pi\0Double"
    ,"Z"
};
#define LILY_DECLARE_MATH_CALL_TABLE \
LILY_MATH_EXPORT \
lily_call_entry_func lily_math_call_table[] = { \
    NULL, \
    lily_math__abs, \
    lily_math__acos, \
    lily_math__asin, \
    lily_math__atan, \
    lily_math__ceil, \
    lily_math__cos, \
    lily_math__cosh, \
    lily_math__exp, \
    lily_math__fabs, \
    lily_math__floor, \
    lily_math__fmod, \
    lily_math__is_infinity, \
    lily_math__is_nan, \
    lily_math__ldexp, \
    lily_math__log, \
    lily_math__log10, \
    lily_math__modf, \
    lily_math__pow, \
    lily_math__sin, \
    lily_math__sinh, \
    lily_math__sqrt, \
    lily_math__tan, \
    lily_math__tanh, \
    lily_math__to_deg, \
    lily_math__to_rad, \
    lily_math_constant_huge, \
    lily_math_constant_infinity, \
    lily_math_constant_nan, \
    lily_math_constant_pi, \
    lily_v21_plus_required, \
};
#endif
