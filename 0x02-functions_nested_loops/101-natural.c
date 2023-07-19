#include <stdio.h>

/**
* main - Sum of multiples of 3 or 5 below
* 1024(excluded)
*
* Return: 0 if successful
*/

int main(void)
{
int n;
long int sum;
sum = 0;
for (n = 0 ; n < 1024 ; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum = sum + n;
}
}
printf("%ld\n", sum);

return (0);
}
