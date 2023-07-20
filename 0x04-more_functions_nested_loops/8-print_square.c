#include "main.h"

/**
* print_hash - print hash n number of times
* @n: number of hashes to print
*
* Return: nothing it is a void
*/

void print_hash(int n)
{
while (n > 0)
{
_putchar('#');
n--;
}
}

/**
* print_square - size of square
* @size: size of square
*
* Return: nothing it is a void
*/

void print_square(int size)
{
int p;
p = size;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (p > 0)
{
print_hash(size);
_putchar('\n');
p--;
}
}
}
