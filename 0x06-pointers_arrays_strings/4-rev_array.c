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
int p;
p = 0;
i = 0;



while (a[p] != '\0')
{
	p++;
}

if (p == 0 || n <= 0)
{
	return;
}


else if (n % 2 != 0 && n != 0)
{
	for (; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		--n;
	}
}

else if (n % 2 == 0 && n != 0)
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

