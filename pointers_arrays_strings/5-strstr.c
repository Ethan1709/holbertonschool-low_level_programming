#include "main.h"

/**
 * _strstr - Fill n bytes of memory area pointed to with constant byte
 * @haystack: Area pointed to
 * @needle: Byte to fill it with
 *
 * Return: Pointer to memory area
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	while (haystack[i])
		i++;

	while (needle[j])
		j++;

	if (i == j)
		return (i);
	else 
		continue;
}
