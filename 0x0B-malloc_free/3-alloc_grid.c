#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - a pointer to an integral array initialized to 0
* @width: width of the array
* @height: height of the array
*
* Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
int i, j;
int **arr = malloc(sizeof(int *) * height);

if (height == 0 || width == 0)
{
	return (NULL);
}

for (i = 0; i < height; i++)
{
	arr[i] = malloc(sizeof(int) * width);
	if (arr[i] == NULL)
	{
		for (--i; i >= 0; i--)
		{
			free(arr[i]);
		}
		free(arr);
		return (NULL);
	}
}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		arr[i][j] = 0;
	}
}

return (arr);
}

