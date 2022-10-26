#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory using calloc
 * @nmemb: int
 * @size: int
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *p;

	p = malloc(sizeof(nmemb) * size);

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	return (p);
}
