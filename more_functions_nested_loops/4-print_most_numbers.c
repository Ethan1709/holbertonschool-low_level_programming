#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: prints numbers from 0 to 9
 * Return: Alaways 0 (Success)
 */

void print_most_numbers(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2)
			continue;
		if (n == 4)
			continue;

		_putchar(n + '0');
	}
		_putchar('\n');
}
