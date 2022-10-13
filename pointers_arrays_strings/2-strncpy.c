#include "main.h"

/**
 * _strncpy - Entry point
 * @src: is the string
 * @dest: is the string
 * @n: integer
 * Return: Alaways 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)

	{
		int i;

			for (i = 0; i < n && src[i]; i++)
			{
				dest[i] = src[i];
			}
			for ( ; i < n; i++)
				dest[i] = '\0';

		return (dest);
	}


