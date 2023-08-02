#include "main.h"

/**
* _pow_recursion - raising a number to the power of
* another number using recursion
* @x: number to raise to a certain power
* @y: power to raise an number to
*
* Return: x raised to y
*/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
	return (1);
}

else if (y < 0)
{
	return (-1);
}

else
{
	return (x * _pow_recursion(x, y - 1));
}
}
