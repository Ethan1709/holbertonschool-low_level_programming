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
	int hgt_i;
	int wid_i;
	int **p;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int));
	if ( p == NULL)
		return (NULL);
	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		p[hgt_i] = malloc(width * sizeof(int));
		
	        if (p[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(p[hgt_i]);

			free(p);
			return (NULL);
		}
	}
	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
	for (wid_i = 0; wid_i < width; wid_i++)
		p[hgt_i][wid_i] = 0;
	}
	return (p);
}
