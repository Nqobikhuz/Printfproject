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
	int i, ch, num = 0;
	char *string;
	va_list arg;

	va_start(arg, format);

	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					ch = va_arg(arg, int);
					_putchar(ch);
					num++;
					break;
				}
				case 's':
				{
					string = va_arg(arg, char *);
					while (*string)
					{
						_putchar(*string);
						string++;
						num++;
					}
					break;
				}
				case '%':
				{
					putchar('%');
					num++;
					break;
				}
				default:
					putchar(format[i]);
					num++;
					break;
				}
		}
		else
		{
			putchar(format[i]);
			num++;
		}
		i++;
	}
	
	va_end(arg);
	return(num);
}

