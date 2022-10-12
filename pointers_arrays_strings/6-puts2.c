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

		while (str[i])
			j++;

		for (i = 0; i < j; i += 2)
			_putchar(str[i]);

		_putchar('\n');
	}


