#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int switch_function(const char *format, va_list arg);
int switch_function_2(const char *format, va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
int chars(char c);
int handle_int(int int_dec);
int handle_string(char *string);
int handle_char(int c);
#endif 
