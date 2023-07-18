#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print from given number to 98
* @n: integer to be checked
*
* Return: void function
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98 ; n++)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
printf("%d, ", n);
}
}
}
else if (n >= 98)
{
for (; n >= 98 ; n--)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
printf("%d, ", n);
}
}
}
}
