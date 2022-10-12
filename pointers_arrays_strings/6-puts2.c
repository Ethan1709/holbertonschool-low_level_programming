#include "main.h"

/**
 * puts2 - Entry point
 * @str: is the string
 * Return: Alaways 0 (Success)
 */

void puts2(char *str)

	{
		while (*str)
			_putchar(*str++);

		_putchar('\n');
	}


