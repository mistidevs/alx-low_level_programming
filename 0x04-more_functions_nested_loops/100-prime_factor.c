#include <stdio.h>
#include <math.h>

/**
* maxPrimeFactor - get largest prime factor
* @n: number to get prime factor
*
* Return: maxPrime
*/

unsigned long int maxPrimeFactor(unsigned long int n)
{
unsigned long int maxPrime = -1;
int i;
while (n % 2 == 0)
{
maxPrime = 2;
n >>= 1;
}
for (i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
maxPrime = i;
n = n / i;
}
}
if (n > 2)
maxPrime = n;
return (maxPrime);
}

/**
* main - print largest prime factor
*
* Return: 0 if successful
*/

int main(void)
{
unsigned long int n = 612852475143;
printf("%lu\n", maxPrimeFactor(n));
return (0);
}

