#include "main.h"

/**
 * _puts - Entry point
 * Description: prints a string
 * @str: pointer 
 * Return: Alaways 0 (Success)
 */

void _puts(char *str)

	{
		int i;

		for (i = 0; str[i] != '\0'; i++)
			_putchar(*str);
	}


