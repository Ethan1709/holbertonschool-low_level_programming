#include "main.h"

/**
 * print_numbers - Entry point
 * Description: prints numbers from 0 to 9
 * Return: Alaways 0 (Success)
 */

int print_numbers(void)

{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n + '0');
	}
		_putchar('\n');
}
