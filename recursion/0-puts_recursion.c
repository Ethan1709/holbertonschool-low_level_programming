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
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

