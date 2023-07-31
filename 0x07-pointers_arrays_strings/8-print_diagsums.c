#include "main.h"
#include <stdio.h>

/**
* print_diagsums - printing sum of numbers on diagonals
* @a: matrix
* @size: size of matrix
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
sum1 = 0;
sum2 = 0;

for (i = 0; i < size; i++)
{
	sum1 += a[i * size + i];
	sum2 += a[(size - 1 - i) * size + i];
}

printf("%d, %d\n", sum1, sum2);
}
