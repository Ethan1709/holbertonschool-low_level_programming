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

	p = (int *) malloc(sizeof(b));

	if (p == NULL)
		return (NULL);
	else
		return (p);
}
