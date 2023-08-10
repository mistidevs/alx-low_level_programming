#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocating memory of given size with malloc
* @b: size of allocated memory
*
* Return: pointer if successful or 98 if not
*/

void *malloc_checked(unsigned int b)
{
int *size;

size = malloc(b);

if (size == NULL)
{
	exit(98);
}

return (size);
}
