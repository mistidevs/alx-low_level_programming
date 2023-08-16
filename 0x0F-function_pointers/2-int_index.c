#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - searching for an integer and returning the first index it is in
* @array: array to search
* @size: size of array
* @cmp: function pointer to function to implement
*
* Return: index of integer or -1 or 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
	return (-1);

if (array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
}

return (-1);
}
