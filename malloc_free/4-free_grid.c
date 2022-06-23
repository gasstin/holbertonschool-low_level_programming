#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * @grid: is the grid to free
 * @height: is the height of the array
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	if (grid == NULL)
		free(grid);
	for (n = 0; n < height; n++)
	{
		if (grid[n] == NULL)
		{
			for (; n >= 0; n--)
			{
				free(grid[n]);
			}
			free(grid);
		}
	}
}
