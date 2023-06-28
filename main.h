#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int selectformat(const char *format, va_list args, int count);i
int _printchar(char c, int i);
int _printstring(char *s, int i);

#endif
