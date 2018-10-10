#include "holberton.h"
#include "stdlib.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 *		integers, initialized to 0.
 * @width: integer for columns in grid
 * @height: integer for rows in grid
 *
 * Return: pointer to 2d-array of ints.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == NULL)
			{
				while (i-- >= 0)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
	}
	return (grid);
}
