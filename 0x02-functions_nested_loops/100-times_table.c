#include "main.h"

/**
* print_space - print given number of spaces
* @o: number of spaces to print
*
* Return: it is a void
*/

void print_space(int o)
{
for (; o > 0 ; o--)
{
_putchar(' ');
}
}

/**
* print_comma_space - print comma and a space
*
* Return: it is a void
*/

void print_comma_space(void)
{
_putchar(',');
_putchar(' ');
}

/**
* print_times_table - printing the 9 times table from 0
* @n: integer to print times table of
*
* Return: nothing it is a void
*/

void print_times_table(int n)
{
int p, q, res;
if (n <= 15 || n < 0)
{
for (p = 0; p <= n ; p++)
{
for (q = 0; q <= n ; q++)
{
res = p * q;
if (res < 10 && q != 0)
{
print_space(2);
_putchar(res + '0');
}
else if (res >= 10 && res < 100)
{
_putchar(' ');
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
else if (res >= 100)
{
_putchar(res / 100 + '0');
_putchar(((res / 10) % 10) + '0');
_putchar(res % 10 + '0');
}
else if (q == 0)
{
_putchar(res + '0');
}
if (q != n)
{
print_comma_space();
}
else
{
_putchar('\n');
}
}
}
}
}
