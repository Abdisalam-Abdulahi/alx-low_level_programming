#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid - a function that frees a 2 dimensional grid previously
  *created by alloc_grid function.
  *@grid: the memoray space to be freed
  *@height: the height of the array
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
