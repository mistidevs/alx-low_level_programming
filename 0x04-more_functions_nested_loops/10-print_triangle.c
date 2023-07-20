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
* print_triangle - print triangle of given size
* @size: size of triangle
*
* Return: nothing it is a void
*/

void print_triangle(int size)
{
int p;
p = 1;
if (size <= 0)
{
_putchar('\n');
}
else if (size > 0)
{
while (size > 0)
{
size--;
print_space(size);
print_hash(p);
_putchar('\n');
p++;
}
}
}
