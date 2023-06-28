#include "main.h"

/**
 *handle_char- prints char c
 *@c: character to be printed
 *Return: number of chars printed
 */

int handle_char(int c)
{

if (c != '\0')
{
return (_putchar(c));
}
else
{
return (-1);
}
}

/**
 *handle_int- prints integer
 *@int_dec: integer or decimal value to be printed
 *Return: number of chars printed
 */

int handle_int(int int_dec)
{
int count = 0;
char c = '-';

if (int_dec < 0)
{
count += _putchar(c);
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
	int num = 0;
	int i = 0;

	if (string[i] == '\0')
	{
		return (-1);
	}

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		num++;
		string++;
	}

	return (num);
}
