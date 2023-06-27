#include "main.h"
#include <stdarg.h>
/**

 *chars- handles the specifiers for char values
 *@c: character to be printed
 *Return: number of characters printed
 */

int chars(char c)
{
int count = 0;
if(c)
_putchar(c);
count++;

return (count);
}
