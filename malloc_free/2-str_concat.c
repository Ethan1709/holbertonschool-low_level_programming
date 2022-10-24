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

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++

	x = i + j;

	p = malloc(x + 1);

	s1[i] = s1[i] + s2[j];

	return (0);
}
