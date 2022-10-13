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
		int i = 0;

			for (i < n && src[i])
			{
				dest[i] = src[i];
					i++;
			}
			for ( ; i < n; i++)
		return (dest);
	}


