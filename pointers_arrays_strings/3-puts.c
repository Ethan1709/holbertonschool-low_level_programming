#include "main.h"

/**
 * _puts - Entry point
 * Description: prints a string
 * @str: is the first integer
 * Return: Alaways 0 (Success)
 */

void _puts(char *str)

	{
		int i;

		for (i = 0; str[i]; i++)
			_putchar("%s", str);
		return (i);
	}


