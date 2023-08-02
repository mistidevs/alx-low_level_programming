#include "main.h"

/**
* _sqrt_helper - getting natural square root of a number
* @n: number to square root of
* @i: number used to compute n by trial and error
*
* Return: square root of a number or -1
*/

int _sqrt_helper(int n, int i)
{
if (i * i == n)
{
	return (i);
}

else if (i * i > n)
{
	return (-1);
}

else
{
	return (_sqrt_helper(n, i + 1));
}
}
/**
* _sqrt_recursion - getting natural square root of a number
* @n: number to square root of
*
* Return: square root of a number or -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (_sqrt_helper(n, 1));
	}
}
