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
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		str++;
		j++;
	}

	p = malloc(j + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = str[i];
	}
	return (p);
}
