#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer
 *
 *
 * Return: Always success (0)
 */

void _puts_recursion(char *s)
{
	char s = 0;

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

