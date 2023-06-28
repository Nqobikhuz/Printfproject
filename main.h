#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/* Main execution point */
int _printf(const char *format, ...);

/* Calls helper functions */
int switch_function(const char *format, va_list arg);
int switch_function_2(const char *format, va_list arg);

/* Helper functions */
int _putchar(char c);
int chars(char c);
int handle_int(int int_dec);
int handle_string(char *string);
int handle_char(int c);


int handle_unsigned(unsigned int value);
int handle_hexadecimal_lower(unsigned int value);
int handle_hexadecimal_upper(unsigned int value);
int handle_octal(unsigned int value);
#endif 
