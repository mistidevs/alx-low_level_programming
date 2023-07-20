#include "main.h"

/**
* print_line - printing line of length n
* @n: integer to print length of
*
* Return: void
*/

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (; n != 0; n--)
{
_putchar('_');
}
if (n == 0)
{
_putchar('\n');
}
}
}
