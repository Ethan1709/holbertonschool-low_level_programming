#include "main.h"

/**
 * _puts - Entry point
 * Description: return the length of a string
 * @s: is the first integer
 * Return: Alaways 0 (Success)
 */

int _strlen(char *str)

	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}


