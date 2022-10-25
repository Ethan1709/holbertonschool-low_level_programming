#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - return a pointer to a 2 dim arrays
 * @grid: int
 * @height: int
 * Return: always success
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
