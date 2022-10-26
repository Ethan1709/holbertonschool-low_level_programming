#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: int
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	int *p;
	int i;

	p = malloc(sizeof(b));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		p[i] = b;
	return (p);
}
