#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* _realloc - reallocating the size of a memory block
* @ptr: pointer to the memory allocated previously with a call to malloc
* @old_size: the previous size of the memory block
* @new_size: the size to change the memory block to
*
* Return: pointer to the newly allocated block or NULL if it fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
	return (ptr);

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (ptr == NULL && new_size != 0)
{
	return (malloc(new_size));
}

if (new_size > old_size)
{
	void *tmp = malloc(new_size);

	if (tmp == NULL)
		return (NULL);
	memcpy(tmp, ptr, old_size);
	free(ptr);
	return (tmp);
}

else if (new_size < old_size)
{
	void *tmp = malloc(new_size);

	if (tmp == NULL)
		return (NULL);
	memcpy(tmp, ptr, new_size);
	free(ptr);
	return (tmp);
}
else
	return (ptr);
}
