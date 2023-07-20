#include "main.h"

/**
* more_numbers - printing 0 to 14 10 ten times
* delimited by a new line
*
* Return: void
*/

void more_numbers(void)
{
int n;
int o;
n = 0;

while (n < 10)
{
for (o = 0 ; o < 15 ; o++)
{
if (o >= 10)
{
_putchar('0' + o / 10);
}
_putchar('0' + o % 10);
if (o == 14)
{
_putchar('\n');
}
}
n++;
}
}
