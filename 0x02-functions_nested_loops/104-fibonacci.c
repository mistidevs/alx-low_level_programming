#include <stdio.h>

/**
* main - First 98 fibonacci numbers
*
*
* Return: 0 if successful
*/

int main(void)
{
unsigned long int n, o, p, q;
printf("1, ");
printf("2, ");
p = 0;
n = 1;
o = 2;
while (p < 96)
{
q = n + o;
n = o;
o = q;
if (p != 95)
{
printf("%lu, ", q);
}
else
{
printf("%lu\n", q);
}
p++;
}

return (0);
}
