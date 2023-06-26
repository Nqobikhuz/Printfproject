#include "main.h"
/**
 *_printf- produces output according to a format
 *@format: character string
 *Return: number of characters printed
 */

int handle_int(int int_dec)
{
int count = 0;

if (int_dec < 0)
{
count += _putchar('-');
int_dec *= -1;
}

if (int_dec/10 != 0)
count += handle_int(int_dec/10);

count += _putchar(int_dec % 10 + '0');

return (count);

}
