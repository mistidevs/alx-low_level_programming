#include "main.h"

/**
* print_number - print number of any length
* @n: digit
*
* Return: nothing it is a void
*/

void print_number(int n)
{
int divisor;
if (n == 0)
{
_putchar('0');
}
else if (n > 0)
{
divisor = 1;
while (n / divisor >= 10)
{
divisor *= 10;
}

while (divisor > 0)
{
int digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
}
}
else if (n < 0)
{
_putchar('0' - 3);
n = -n;
divisor = 1;
while (n / divisor >= 10)
{
divisor *= 10;
}

while (divisor > 0)
{
int digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
}
}
}


