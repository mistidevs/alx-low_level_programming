#include "calc.h"

/**
* add - adds two integers and prints result
* @n: integer to be added
* @o: integer to be added
*
* Return: result of adding integers
*/

int add(int n, int o)
{
int res = n + o;

return (res);
}

/**
* sub - subtract a digit from another
* @a: first digit
* @b: second digit
*
* Return: result
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplying two integers together
* @a: integer to multiply
* @b: integer to multiply
*
* Return: appropriate value
*/

int mul(int a, int b)
{
return (a * b);
}

/**
* div - divide one number with another
* @a: first digit
* @b: second digit
*
* Return: result
*/

int div(int a, int b)
{
	return (a / b);
}

/**
* mod - remainder of a divided by b
* @a: first digit
* @b: second digit
*
* Return: result
*/

int mod(int a, int b)
{
	return (a % b);
}
