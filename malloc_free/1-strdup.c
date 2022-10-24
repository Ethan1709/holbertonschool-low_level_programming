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
	int j = 0;
	
	while (*str)
		j++, str++;

	p = malloc(j * sizeof(*str));

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
