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
  int i, num = 0;
	char *string;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar((char)va_arg(arg, int));
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
					_putchar(format[i]);
					num++;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			num++;
		}
	}
	va_end(arg);
	return (num);
}
