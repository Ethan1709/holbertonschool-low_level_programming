#include "main.h"

/**
 * strlen_recursion - prints the lenght of a string
 * @s: pointer
 *
 *
 * Return: Always success (0)
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	{
	if (s[i] != '\0')
		_putchar(s + 1);
	}
	return (i);
}

