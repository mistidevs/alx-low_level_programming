#include "main.h"

/**
* times_table - printing the 9 times table from 0
*
* Return: nothing it is a void
*/

void times_table(void)
{
int p, q;
for (p = 0; p <= 9; p++)
{
for (q = 0; q <= 9; q++)
{
int res;
res = p * q;
if (res >= 10)
{
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
if (q != 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
else if (q == 9)
{
_putchar(res + '0');
_putchar('\n');
}
else
{
_putchar(' ');
_putchar(res + '0');
if (q != 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
}
