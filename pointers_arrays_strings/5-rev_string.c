#include "main.h"

/**
 * rev_string - Entry point
 * Description: print string in rev
 * @s: is the first integer
 * Return: Alaways 0 (Success)
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[i++]
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

