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
	int middle = len / 2;
	char temp;
	int i;
	
	while (len != '\0')
	{
		for (i = 0; i < middle; i++)
		{
			temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
	}
}

