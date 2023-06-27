#include "main.h"
/**
 *switch_function-is called by _printf
 *prints output according to format 
 *@format: format string
 *Return: the number of characters printed
 */
int switch_function(const char *format, va_list arg)
{
int i = 0, num = 0;
char *string, ch;

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
ch = va_arg(arg, int);
_putchar(ch);
num++;
break;
case 's':
string = va_arg(arg, char *);
while (*string)
{
_putchar(*string);
num++;
string++;
}
break;

case '%':
_putchar('%');
num++;
break;
case 'd':
case 'i':
num += handle_int(va_arg(arg, int));
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
