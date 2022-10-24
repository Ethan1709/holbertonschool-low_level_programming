#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);

	else if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
