#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - int **grid, int height
 * @grid: grid to be printed
 * @height: height of grid
 * description: funtion that frees a 2 dimensional grid of alloc_grid()
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (x = 0; x < 1; x++)

		free(grid[x]);

	free(grid);

}
