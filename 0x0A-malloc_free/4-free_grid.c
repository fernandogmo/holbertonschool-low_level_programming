#include "holberton.h"
#include "stdlib.h"

/**
 * free_grid - frees a 2d-array of ints previously created with
 *	       alloc_grid.
 * @grid: pointer to 2d-array of ints
 * @height: integer for rows in grid
 */
void free_grid(int **grid, int height)
{
	while (--height >= 0)
		free(grid[height]);

	free(grid);
}
