#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees 2d array.
 * @grid: The 2d grid.
 * @height: height of grid
 * Description: frees grid memory.
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
