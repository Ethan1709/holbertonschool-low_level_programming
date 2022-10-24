#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: int
 * @c: char
 * Return: char
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str;
	return (p);
}
