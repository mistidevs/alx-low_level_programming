#include "main.h"

/**
* jack_bauer - printing all the minutes of the day
*
* Return: 0 if successful
*/

void jack_bauer(void)
{
int n, o;
n = 0;

while (n <= 23)
{
for (o = 0 ; o <= 59 ; o++)
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
_putchar(':');
_putchar('0' + o / 10);
_putchar('0' + o % 10);
_putchar('\n');
}
n++;
}
}
