#include "main.h"

/**
 * print_rev - Entry point
 * Description: print string in rev
 * @s: is the first integer
 * Return: Alaways 0 (Success)
 */

void print_rev(char *s)

	{
		while (*s)
			_putchar(*s--);

		_putchar('\n');
	}


