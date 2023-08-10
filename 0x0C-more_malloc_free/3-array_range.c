#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers from min to max
* @min: minimum value
* @max: maximum value
*
* Return: pointer to the array
*/

int *array_range(int min, int max)
{
int range, i, j;
int *array;

if (min > max)
	return (NULL);

range = (max - min) + 1;

array = malloc(sizeof(int) * range);

if (array == NULL)
	return (NULL);

j = min;
for (i = 0; j <= max; i++, j++)
	array[i] = j;

return (array);
}
