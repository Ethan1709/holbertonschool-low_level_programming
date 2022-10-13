#include "main.h"

/**
 * _strcat - Entry point
 * @src: is the string
 * @dest: is the string
 * Return: Alaways 0 (Success)
 */

char *_strcat(char *dest, char *src)

	{
		int i = 0;
		int j = 0;
	
		while (dest[j])
			j++;

		while (src[i])
		{
		dest[j] = (src[i] + dest[j]);
			i++, j++;
		}

		return (dest);
	}


