#include "main.h"
#include <stdio.h>

/**
* print_array - prints n number of elements in an array
* @a: array to print elements from
* @n: number of elements to print
*
* Return: void
*/

void print_array(int *a, int n)
{
int i;
i = 0;

while (i < n)
{
if (i == n - 1)
{
printf("%d", a[i]);
printf("\n");
}
else if (i < n)
{
printf("%d", a[i]);
printf(", ");
}
i++;
}
if (n == 0 || n < 0)
{
printf("\n");
}
}
