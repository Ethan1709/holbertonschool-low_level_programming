#include "main.h"

/**
 * _strncat - Entry point
 * @src: is the string
 * @dest: is the string
 * @n: integer
 * Return: Alaways 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)

	{
		int i = 0;
		int j = 0;

		{
			while (dest[j])
				j++;

			while (i < n && src[i])
			{
				dest[j] = (src[i] + dest[j]);
					i++, j++;
			}
		}
		return (dest);
	}


