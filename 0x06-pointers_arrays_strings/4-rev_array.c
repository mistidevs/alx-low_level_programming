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

if (n % 2 != 0)
{
	for (; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		--n;
	}
}

else if (n % 2 == 0)
{
	for (; i <= n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
}

