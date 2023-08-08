#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating array of given size of c
 * @size: size of array
 * @c: char to populate array with
 *
 * Return: NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
char *t;
unsigned int i;

if (size == 0)
{
	return (NULL);
}

t = malloc(sizeof(char) * size);

if (t == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	t[i] = c;
}

return (t);
}
