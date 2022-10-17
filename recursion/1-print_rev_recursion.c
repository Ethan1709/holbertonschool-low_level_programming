#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer
 *
 *
 * Return: Always success (0)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		_putchar('\n');
	}
	else
		_putchar('\n');
}

