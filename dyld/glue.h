//
//  glue.h
//  dyld
//
//  Created by bangcle on 2023/6/16.
//

#ifndef glue_h
#define glue_h
#include <_simple.h>
// from _simple.h in libc
extern void                _simple_vdprintf(int __fd, const char *__fmt, va_list __ap);
extern void                _simple_dprintf(int __fd, const char *__fmt, ...);
extern _SIMPLE_STRING    _simple_salloc(void);
extern int                _simple_vsprintf(_SIMPLE_STRING __b, const char *__fmt, va_list __ap);
extern void                _simple_sfree(_SIMPLE_STRING __b);
extern char *            _simple_string(_SIMPLE_STRING __b);

// dyld::log(const char* format, ...)
extern void _ZN5dyld43logEPKcz(const char*, ...);

// dyld::halt(const char* msg);
extern void _ZN5dyld44haltEPKc(const char* msg) __attribute__((noreturn));

extern void dyld_fatal_error(const char* errString) __attribute__((noreturn));
extern void abort_report_np(const char* format, ...);
extern bool kdebug_is_enabled(uint32_t code);
extern int kdebug_trace(uint32_t code, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);
#endif /* glue_h */
