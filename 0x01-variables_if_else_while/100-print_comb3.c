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
int n, o;

for (n = 0; n <= 9; n++)
{
for (o = 1; o <= 9; o++)
{
if (n != o && n < o)
{
putchar('0' + n);
putchar('0' + o);
if (n == 8 && o == 9)
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

return 0;
}
