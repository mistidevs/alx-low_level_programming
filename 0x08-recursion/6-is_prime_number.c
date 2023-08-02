#include "main.h"

/**
* is_prime_helper - adding var that aids in operation
* @n: number to check if prime
* @i: recursively incremented divisor
*
* Return: 1 or 0 if number is prime
*/

int is_prime_helper(int n, int i)
{
if (i == n)
{
	return (1);
}

else if (n % i == 0)
{
	return (0);
}

else
{
	return (is_prime_helper(n, i + 1));
}
}

/**
* is_prime_number - checking if a number is prime recursively
* @n: number to check if prime
*
* Return: 1 or 0 if number is prime
*/

int is_prime_number(int n)
{
if (n <= 1)
{
	return (0);
}

else
{
	return (is_prime_helper(n, 2));
}
}
