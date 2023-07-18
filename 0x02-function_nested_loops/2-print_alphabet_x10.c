#include "main.h"

/**
* print_alphabet_x10 - printing the alphabet ten times using _putchar twice
*
* Return: 0 if successful
*/

void print_alphabet_x10(void)
{
char c;
int n;
n = 0;

while (n < 10)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
n++;
}
}
