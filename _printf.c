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
const char *ptr = format;
int numb_chars_printed;
va_list arg;
va_start(arg, format);

numb_chars_printed = switch_function(ptr, arg);


va_end(arg);
return (numb_chars_printed);



}


