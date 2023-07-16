#include <stdio.h>

/**
* main- prints numbers from 0 to 9
* uses putchar
*
* Return: 0 if successful
*/

int main(void)
{
int n;

for (n = 0 ; n < 10 ; ++n)
{
putchar('0' + n);
}
putchar('\n');

return (0);
}
