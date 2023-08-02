#include "main.h"

/**
* _puts_recursion - Printing a string followed by a newline
* using recursion
* @s: string to print
*
* Return: void
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}

else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
}

