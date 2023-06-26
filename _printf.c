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
	char *string, percent, ch;

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
					{
					ch = ((char)va_arg(arg, int));
					write(1, &ch, 1);
					num++;
					break;
					}
				case 's':
					{
					string = va_arg(arg, char *);

					while (*string)
					{

						_putchar(*string);
						num++;
						string++;
					}
					break;
					}
				case '%':
					{
					percent = '%';
					write(1, &percent, 1);
					num++;
					break;


	      case 'd':
	      case 'i':

              num += handle_int(va_arg(arg, int));
              break;

					}

				default:
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			num++;
		}
	}

	va_end(arg);
	return (num);
}
