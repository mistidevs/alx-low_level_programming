#include "search_algos.h"

/**
* binary_search - searching for a value in an
* array sorted in ascending order using the binary
* search algorithm
*
* @array: array to search
* @size: size of the array
* @value: value to find
*
* Return: index or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
int left, right, i, mid;

if (array == NULL)
	return (-1);

left = 0;
right = size - 1;

while (left <= right)
{
	i = left;
	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	while (i <= right)
	{
		printf("%d", array[i]);
		if (i == right)
			printf("\n");
		else
			printf(", ");
		i++;
	}
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
}

return (-1);
}
