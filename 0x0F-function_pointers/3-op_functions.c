#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - add two digits together
* @a: first digit
* @b: second digit
*
* Return: result
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtract a digit from another
* @a: first digit
* @b: second digit
*
* Return: result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply two digits together
* @a: first digit
* @b: second digit
*
* Return: result
*/

int op_mul(int a , int b)
{
	return (a * b);
}

/**
* op_div - divide one number with another
* @a: first digit
* @b: second digit
*
* Return: result
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - remainder of a divided by b
* @a: first digit
* @b: second digit
*
* Return: result
*/

int op_mod(int a, int b)
{
	return (a % b);
}
