#include "main.h"

/**
 * puts2 - Entry point
 * @str: is the string
 * Return: Alaways 0 (Success)
 */

void puts2(char *str)

	{
		int i = 0;
		int j = 0;
		int n; 

		while (str[i++])
			j++;

		if ((j % 2) == 0)
			n = j / 2;

		else
			n = j - 1 / 2;

		for (i = 0; i < j; i++)
			_putchar(str[i]);

		_putchar('\n');
	}


