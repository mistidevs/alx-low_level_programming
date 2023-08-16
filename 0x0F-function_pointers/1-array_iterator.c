#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a function on elements of an array
* @array: array to iterate on
* @size: size of the array
* @action: function pointer to function to execute
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || size <= 0 || action == NULL)
	return;

for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
