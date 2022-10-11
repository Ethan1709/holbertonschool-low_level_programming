#include "main.h"

/**
 * _puts - Entry point
 * Description: return the length of a string
 * @str: is the first integer
 * Return: Alaways 0 (Success)
 */

void _puts(char *str)

	{
		while (*str)
			_putchar(*str++);

		_putchar('\n');
	}


