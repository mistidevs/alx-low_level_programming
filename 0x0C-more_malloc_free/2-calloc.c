#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocating memory to an array
* @nmemb: number of elements of array
* @size: size of each element of an array
*
* Return: a pointer to allocated memory or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *arr;

if (nmemb == 0 || size == 0)
	return (NULL);

arr = malloc(nmemb * size);

if (arr == NULL)
	return (NULL);

for (i = 0; i < nmemb; i++)
	arr[i] = 0;

return (arr);
}
