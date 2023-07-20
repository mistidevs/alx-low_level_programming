#include "main.h"

/**
* print_numbers - printing numbers from 0 to 9
*
* Return: void
*/

void print_numbers(void)
{
int a;

for (a = 0 ; a < 10 ; a++)
{
_putchar('0' + a);
}
_putchar('\n');
}
