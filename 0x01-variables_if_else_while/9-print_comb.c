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
n = 0;

while (n < 10)
{
for (; n < 10 ; ++n)
{
putchar('0' +  n);
if (n <= 8)
{
putchar(',');
putchar(' ');
}
else if (n == 9)
{
putchar('\n');
}
}
}

return (0);
}
