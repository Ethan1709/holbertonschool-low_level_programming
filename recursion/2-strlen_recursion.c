#include "main.h"

/**
 * strlen_recursion - prints a string in reverse
 * @s: pointer
 *
 *
 * Return: Always success (0)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s++);
			;
	}
	return (*s);
}

