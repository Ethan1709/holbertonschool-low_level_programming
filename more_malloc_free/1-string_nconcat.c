#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int c;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	c = i;

	while (s2[n] != '\0')
		n++;
	c = c + n;

	p = malloc(c + 1);

	for (k = 0; k <= i; k++)
	{
		if (p == NULL)
			return (NULL);
		p[k] = s1[k];
	}
	for (k = 0; k <= n; k++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = (s2[k] - 2);
		i++;
	}
	return (p);
}
