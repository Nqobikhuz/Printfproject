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
<<<<<<< HEAD
  int i, num = 0;
	char *string;
=======
	int i, length, num = 0;
	char *string, percent, ch;
>>>>>>> ebcae9180b74a6be9c37091aa5fe76ec9aba4148
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
					length = 0;
					while (string[length] != '\0')
					{
<<<<<<< HEAD
						_putchar(*string);
=======
						write(1, &string[length], sizeof(char));
						length++;
>>>>>>> ebcae9180b74a6be9c37091aa5fe76ec9aba4148
						num++;
					}
					break;
					}
				case '%':
					{
					percent = '%';
					write(1, &percent, 1);
					break;
<<<<<<< HEAD

	      case 'd':
	      case 'i':

              num += handle_int(va_arg(arg, int));
              break;
=======
					}
>>>>>>> ebcae9180b74a6be9c37091aa5fe76ec9aba4148
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
