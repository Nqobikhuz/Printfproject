#include "main.h"

/**
 *handle_char- prints char c
 *@c: character to be printed
 *Return: number of chars printed
 */

int handle_char(int c)
{
int count = 0;

if (c)
_putchar(c);
count++;

return (count);
}

/**
 *handle_int- prints integer
 *@int_dec: integer or decimal value to be printed
 *Return: number of chars printed
 */

int handle_int(int int_dec)
{
int count = 0;

if (int_dec < 0)
{
count += _putchar('-');
int_dec *= -1;
}

if (int_dec / 10 != 0)
count += handle_int(int_dec / 10);

count += _putchar(int_dec % 10 + '0');

return (count);

}

/**
 *handle_string- prints a string
 *@string: string to be printed
 *Return: number of chars printed
 */

int handle_string(char *string)
{
int count = 0;

if (*string)
{
while (*string)
{
_putchar(*string);
count++;
string++;
}
}

return (count);
}
