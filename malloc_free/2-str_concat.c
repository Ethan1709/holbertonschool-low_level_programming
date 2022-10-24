#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: string
 * @s2: string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int j = 0;
	int c;
	int k;

	while (s1[i] != '\0')
		i++;
	c = i;

	while (s2[j] != '\0')
		j++;
	c = c + j;

	p = malloc(c + 1);

	for (k = 0; k <= i; k++)
		p[k] = s1[k];

	for (k = 0; k <= j; k++)
	{
		p[i] = s2[k];
		i++;
	}
	return (p);
}i
