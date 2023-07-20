#include "main.h"

/**
* print_space - printing a space of length o
* @o: length of space
*
* Return: nothing it is a void
*/

void print_space(int o)
{
for (; o > 0 ; o--)
{
_putchar(' ');
}
}

/**
* print_diagonal - printing a diagonal of length n
* @n: Length of diagonal
*
* Return: nothing it is a void
*/

void print_diagonal(int n)
{
int p;
p = 0;
if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
for (; n > 0 ; n--)
{
print_space(p);
_putchar('\\');
_putchar('\n');
p++;
}
}
p = 0;
}
