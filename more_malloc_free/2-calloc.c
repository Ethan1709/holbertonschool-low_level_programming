#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory using calloc
 * @nmemb: int
 * @size: int
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	p = malloc(nmemb * size);
	if (p != NULL)
		memset(p, 0, nmemb * size);

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	return (p);
}
