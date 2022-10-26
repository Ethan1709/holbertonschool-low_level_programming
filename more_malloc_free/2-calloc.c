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
	if (p != NULL)
		memset(p, 0, nmemb * size);

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = nmemb;
	return (p);
}
