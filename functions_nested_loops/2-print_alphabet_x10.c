#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints _putchar
 * Return: Alaways 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	while (y < 10)
	{
		for (x = 97; x <= 123; x++)
		{
			_putchar(x);
		}
		y++;
		_putchar('\n');
	}
}
