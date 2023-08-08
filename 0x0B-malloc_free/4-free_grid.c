#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - freeing 2D grid
* @arr: grid to free
* @height: height of grid to free
*
* Return: void
*/

void free_grid(int **arr, int height)
{
int i;

if (arr == NULL || height == 0)
	return;

for (i = 0; i < height; i++)
	free(arr[i]);

free(arr);
}
