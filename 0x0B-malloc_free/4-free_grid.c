#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free up a 2d grid.
 * @grid: double pointer
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
