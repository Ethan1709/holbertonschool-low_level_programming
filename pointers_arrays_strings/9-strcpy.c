#include "main.h"

/**
 * char *_strcpy - Entry point
 * @src: is the string
 * @dest: is the string
 * Return: Alaways 0 (Success)
 */

char *_strcpy(char *dest, const char *src)

	{
		int i = 0;

		while (src[i])
		{
			dest[i] = src[i];
				dest++;
		}
	
		return (dest);
	}


