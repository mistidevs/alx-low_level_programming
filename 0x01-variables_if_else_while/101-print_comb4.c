#include <stdio.h>

/**
* main- prints combinations of two digit numbers with
* the smaller digit coming first
* uses putchar
*
* Return: 0 if successful
*/

int main(void)
{
int n, o, p;

for (n = 0; n <= 7; n++)
{
for (o = 1; o <= 8; o++)
{
for (p = 2; p <= 9; p++)
{
if (n != o && n < o && o != p && o < p)
{
putchar('0' + n);
putchar('0' + o);
putchar('0' + p);
if (n == 7 && o == 8 && p == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}

return (0);
}
