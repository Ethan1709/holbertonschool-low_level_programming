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
	int **p;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		if (p == NULL)
			return (NULL);

		p[i] = malloc(width *sizeof(int));
	}
	for (i = 0; i < width; ++i)
		free(p[i]);

	return (p);
}
