#include "main.h"

/**
* reverse_array - reversing an array
* @a: array to reverse
* @n: number of elements of array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
int i;
int temp;
i = 0;

for (; i < n-- ; i++)
{
	temp = a[i];
	a[i] = a[n];
	a[n] = temp;
}
}

