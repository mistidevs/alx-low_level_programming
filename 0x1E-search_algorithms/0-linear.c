#include "search_algos.h"

/**
* linear_search - using the linear search algorithm
* to locate an element
*
* @array: pointer to array to search
* @size: the size of the array
* @value: the value to locate
*
* Return: index if found or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
	return (-1);

for (i = 0; i < (int)size; i++)
{
	printf("Value checked array[%u] = [%d]\n", i, array[i]);
	if (value == array[i])
		return (i);
}

return (-1);
}

