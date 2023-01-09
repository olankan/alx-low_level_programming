#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: multidimensional array
 *
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
