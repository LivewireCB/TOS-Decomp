#ifndef TYPES_H
#define TYPES_H

#ifdef __cplusplus
#include <MSL_C/include/cstdarg>
#include <MSL_C/include/cstddef>
#include <MSL_C/include/new>
#else
#include <MSL_C/include/stdarg.h>
#include <MSL_C/include/stddef.h>
#endif

#include <decomp.h>
#include <lang.h>
#include <macros.h>

typedef unsigned long long u64;
typedef unsigned long long U64;
typedef signed long long s64;
typedef signed long long S64;

typedef unsigned long u32;
typedef unsigned long U32;
typedef signed long s32;
typedef signed long S32;

typedef unsigned short u16;
typedef unsigned short U16;
typedef signed short s16;
typedef signed short S16;

typedef unsigned char u8;
typedef unsigned char U8;
typedef signed char s8;
typedef signed char S8;

typedef float f32;
typedef float F32;
typedef double f64;
typedef double F64;

typedef int UNKWORD;
typedef void UNKTYPE;

enum
{
    FALSE,
    TRUE
};
typedef int BOOL;

typedef void (*funcptr_t)(void);

#endif
