#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: is the string
 * @s2: is the string
 * Return: Alaways 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}


