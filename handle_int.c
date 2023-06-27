#include "main.h"
/**
 *_handle_int- handles the decimal and integer specifiers
 *@int_dec: integer/decimal value being passed
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
