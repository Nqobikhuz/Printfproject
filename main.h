#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int switch_function(const char *format, va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
int handle_int(int int_dec);
int chars(char c);
#endif 
