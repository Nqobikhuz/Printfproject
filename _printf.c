#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: Is a character string
 *
 * Return: The number of charcters printed
 * excluding the null byte.
 */
int _printf(const char *format, ...)
{

int num_chars;
va_list arg;
va_start(arg, format);

num_chars = switch_function(format, arg);


va_end(arg);
return (num_chars);
}


