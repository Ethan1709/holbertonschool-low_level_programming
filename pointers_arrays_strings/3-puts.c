#include "main.h"

/**
 * _puts - Entry point
 * Description: prints a string
 * @str: pointer
 * Return: Alaways 0 (Success)
 */

void _puts(char *str)

	{

		while (*str != '\0');
			{
				_putchar(*str);
				str++;
			}
	}


