#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints _putchar
 * Return: Alaways 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar("%c ", x);
	_putchar('\n');
}
