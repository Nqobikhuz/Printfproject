#include "main.h"
/**
 *switch_function- calls helper function depending on format
 *@format: format string
 *@arg: arguments
 *Return: the number of characters printed
 */

int switch_function(const char *format, va_list arg)
{
int i = 0, num = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
num += handle_char(va_arg(arg, int));
break;

case 's':
num += handle_string(va_arg(arg, char *));
break;
case '%':
_putchar('%');
num++;
break;

case 'd':
case 'i':
num += handle_int(va_arg(arg, int));
break;

case 'u':
num += handle_unsigned(va_arg(arg, unsigned int));
break;
case 'o':
num += handle_octal(va_arg(arg, unsigned int));
break;

case 'x':
num += handle_hexadecimal_lower(va_arg(arg, unsigned int));
break;

case 'X':
num += handle_hexadecimal_upper(va_arg(arg, unsigned int));
break;
 
default:
break;
}
}
else
{
_putchar(format[i]);
num++;
}
}

return (num);
}
