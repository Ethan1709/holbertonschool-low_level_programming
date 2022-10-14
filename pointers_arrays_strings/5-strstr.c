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
	int j;

	while (haystack[i])
		i++;

	while (needle[j])
		j++;

	if (i == j)
		return (*i);
}
