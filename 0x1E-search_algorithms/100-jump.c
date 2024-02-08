#include "search_algos.h"

/**
* jump_search - implementing a jump search
* algorithm in a sorted list
*
* @array: array to search
* @size: size of the array
* @value: value to locate
*
* Return: index or -1
*/

int jump_search(int *array, size_t size, int value)
{
int step, i;

if (array == NULL || size == 0)
	return (-1);

step = (int)sqrt(size);

for (i = 0; i < (int)size; i += step)
{
	if (array[i] >= value)
	{
		printf("Value found between indexes [%d] and [%d]\n", i - step, i);
		for (i -= step; i < (int)size && array[i] <= value; ++i)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		break;
	}
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
}

printf("Value found between indexes [%d] and [%d]\n", i - step, i);
printf("Value checked array[%d] = [%d]\n", i - step, array[i - step]);

return (-1);
}
