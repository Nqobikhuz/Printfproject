#include "main.h"
/**
 *handle_int- prints int value
 *value: unsigned int passed as parameter
 *Return: number of characters printed
 */

int handle_unsigned(unsigned int value)
{
int count = 0;
if (value == 0)
{
count += _putchar(value);
return (count);
}


if (value / 10 != 0)
count += handle_unsigned(value / 10);

count += _putchar((value % 10) + '0');

return (count);

}

/**
 *handle_octal- prints octal value to stdout
 *@value: octal value to be printed
 *Return: number of characters printed
 */
int handle_octal(unsigned int value)
{
int count = 0;

if (value == 0)
{
count += _putchar('0');
return (count);
}

if ((value / 8) != 0)
count += handle_octal(value / 8);

count += _putchar((value % 8) + '0');

return (count);
}

/**
 *handle_hexadecimal_lower- prints hex value to stdout(lowercase)
 *@value: hex value to be used
 *Return: number of charcters printed
 */

int handle_hexadecimal_lower(unsigned int value)
{
int count = 0, get_digit = (value % 16), last_digit = (value / 16);

if (value == 0)
{
count += _putchar('0');
return (count);
}
if (value / 16)
count += handle_hexadecimal_lower(value / 16);

if (last_digit > 10)
count += _putchar((get_digit - 10) + 'a');

else
count += _putchar((get_digit + '0'));


return (count);
}

/**
 *handle_hexadecimal_uppper- prints hex value to stdout(uppercase)
 *@value: hex value to be used
 *Return: number of charcters printed
 */

int handle_hexadecimal_upper(unsigned int value)
{
int count = 0;

if (value == 0)
{
count += _putchar('0');
return (count);
}
if (value / 16)
count += handle_hexadecimal_upper(value / 16);

if (value / 16 < 10)
count += _putchar((value % 16) + '0');
else
count += _putchar((value % 16) + 'A');


return (count);
}
