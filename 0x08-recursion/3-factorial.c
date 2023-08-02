#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: number to get factorial of
*
* Return: factorial of a number
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}

else if (n < 1)
{
return (-1);
}

else
{
return (n * factorial(n - 1));
}
}
