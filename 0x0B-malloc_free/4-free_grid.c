#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2d of array
 * @grid: 2d of grid
 * @height: height dimension of the grid
 * Description: free memory of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
