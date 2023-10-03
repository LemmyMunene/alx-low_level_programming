#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid from prev.
 * @grid: two dimension int array.
 * @height: grid height.
 *
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	if (grid != 0 && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
