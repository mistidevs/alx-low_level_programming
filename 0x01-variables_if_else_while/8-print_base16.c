#include <stdio.h>

/**
* main- prints all the numbers of base 16 in lowercase
* uses putchar
*
* Return: 0 if successful
*/

int main(void)
{
char c;
char n;

for (n = 0 ; n <= 9 ; ++n)
{
putchar('0' + n);
}
for (c = 'a' ; c <= 'f' ; ++c)
{
putchar(c);
}
putchar('\n');

return (0);
}
