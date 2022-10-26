#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of ints
 * @min: first int
 * @max: second int
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * 256);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < p; i++)
		p[i] = int max;

	return (p);
}
