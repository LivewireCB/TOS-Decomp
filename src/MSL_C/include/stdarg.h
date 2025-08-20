#ifndef STDARG_H
#define STDARG_H

typedef enum _va_arg_type {
  arg_ARGPOINTER,
  arg_WORD,
  arg_DOUBLEWORD,
  arg_ARGREAL
} _va_arg_type;

typedef struct __va_list_struct {
  char gpr;
  char fpr;
  char *input_arg_area;
  char *reg_save_area;
} va_list[1];

extern void *__va_arg(void *, int);
#define __va_start(ap, fmt) ((void)fmt, __builtin_va_info(&ap))
#define __va_arg(ap, t) (*((t *)__va_arg(ap, _var_arg_typeof(t))))
#define va_start __va_start
#define va_arg __va_arg
#define va_end __va_end

#define __va_end(ap) ((void)0)

#endif // STDARG_H
