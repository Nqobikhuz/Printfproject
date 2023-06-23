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
	int i = 0, ch, num = 0;
	char *string;
	va_list arg;

	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					ch = va_arg(arg, int);
					putchar(ch);
					num++;
					break;
				case 's':
					string = va_arg(arg, char *);
					while (*string)
					{
						putchar(*string);
						string++;
						num++;
					}
					break;
				case '%':
					putchar('%');
					num++;
					break;
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
	return (num);
}
