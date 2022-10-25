#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dim arrays
 * @width: int
 * @height: int
 * Return: always success
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for j = 0; j < height; j++)
			_putchar(j);

	return (0);	
}
