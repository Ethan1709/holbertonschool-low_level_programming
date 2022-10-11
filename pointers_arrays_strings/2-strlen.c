#include "main.h"

/**
 * _strlen - Entry point
 * Description: return the length of a string
 * @s: is the first integer
 * Return: Alaways 0 (Success)
 */

int _strlen(char *s)

	{
		int i;

		for (i = 0; s[i]; i++)
			;
		return (i);
	}


