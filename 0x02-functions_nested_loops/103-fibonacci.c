#include <stdio.h>

/**
* main - print even numbers of the fibonacci series
* not greater than 4,000,000
*
* Return: 0 if successful
*/

int main(void)
{
long int n, o, p, sum;
n = 1;
o = 2;
sum = 2;

while (n <= 4000000 && o <= 4000000)
{
p = n + o;
n = o;
o = p;
if (p % 2 == 0)
{
sum = sum + p;
}
}
printf("%li\n", sum);

return (0);
}
