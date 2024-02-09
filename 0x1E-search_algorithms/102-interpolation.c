#include "search_algos.h"

/**
* interpolation_search - using the interpolation search on an
* array sorted in ascending order
*
* @array: array to search
* @size: the size of the array
* @value: the value to check
*
* Return: index or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
int high, low;
size_t pos;

if (array == NULL || size == 0)
	return (-1);

low = 0;
high = (int)size - 1;

do {
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

	if (pos > size - 1)
	{
		printf("Value checked array[%d] is out of range\n", (int)pos);
		return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
	if (array[(int)pos] == value)
		return (pos);
	else if (array[(int)pos] < value)
		low = (int)pos + 1;
	else
		high = pos - 1;
} while (low <= high && array[low] <= value && value <= array[high]);

return (-1);
}
