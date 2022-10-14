#include "main.h"

/**
 * _strstr - locates first occurence in a string
 * @haystack: first string
 * @needle: second string
 *
 * Return: Pointer to memory area
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

}
