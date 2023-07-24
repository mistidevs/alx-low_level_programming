#include "main.h"

/**
 * swap_int - swapping values of two integers
 * @a: value of first int
 * @b: value of second int
 *
 * Return: it is a void
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
