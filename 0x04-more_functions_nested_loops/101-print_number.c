#include "main.h"

/**
* divisor_print - printing using trial division
* @p: digit
*
* Return: nothing it is a void
*/

void divisor_print(int p)
{
int divisor;
divisor = 1;
while (p / divisor >= 10)
{
divisor *= 10;
}

while (divisor > 0)
{
int digit;
digit = p / divisor;
_putchar(digit + '0');
p %= divisor;
divisor /= 10;
}
}

/**
* print_number - print number of any length
* @n: digit
*
* Return: nothing it is a void
*/

void print_number(int n)
{
if (n == 0)
{
_putchar('0');
}
else if (n > 0)
{
divisor_print(n);
}
else if (n < 0)
{
_putchar('-');
if (n == -2147483648)
{
_putchar('2');
n = 147483648;
}
else
{
n = -n;
}
divisor_print(n);
}
}
