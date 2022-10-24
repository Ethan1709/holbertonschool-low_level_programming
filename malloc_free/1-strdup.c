#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		str++;
		j++;
	}

	p = malloc(j + 1);

	for (i = 0; i < j; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = str[i];
	}
	return (p);
}
