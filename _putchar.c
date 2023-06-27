#include "main.h"
/**
 *_putchar- prints to stdout
 *@c: character to be printed
 *Return: 1 (success), 0 (fail)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
