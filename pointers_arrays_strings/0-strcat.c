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
		
		while (src[i])
		{
		dest[i] = (src[i] + dest[i]);
			i++;
		}
	
		return (dest);
	}


