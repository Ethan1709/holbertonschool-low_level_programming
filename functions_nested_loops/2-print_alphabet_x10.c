#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints alphabet x10
 * Return: Alaways 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x, y = 0;

	while (y < 10)
	{
		for (x = 97; x <= 122; x++)
		_putchar(x);

		y++;
		_putchar('\n');
	}
}
