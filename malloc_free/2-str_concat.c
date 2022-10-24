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
	int i;
	int j;
	int x;
	int y = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	x = i + j;

	p = malloc(x + 1);
	
	for (y < j; y++)
		s1[i] = s2[y];

	return (p);

	return (0);
}
