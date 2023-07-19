#include "main.h"

/**
* print_alphabet - printing the alphabet using _putchar twice
*
* Return: 0 if successful
*/

void print_alphabet(void)
{
char a;

for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);

if (a == 'z')
{
_putchar('\n');
}
}
}
