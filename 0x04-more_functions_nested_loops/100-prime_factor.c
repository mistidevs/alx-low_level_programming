#include <stdio.h>

/**
* main - printing the largest prime factor of 612852475143
*
* Return: nothing it is a void
*/

int main(void)
{
unsigned long int number;
int largest_prime_factor;
int i;

number = 612852475143;
largest_prime_factor = 0;

for (i = 2; i * i < number ; i++) {
if (number % i == 0)
{
if (i > largest_prime_factor)
{
largest_prime_factor = i;
}
}
}

printf("%d\n", largest_prime_factor);

return 0;
}
