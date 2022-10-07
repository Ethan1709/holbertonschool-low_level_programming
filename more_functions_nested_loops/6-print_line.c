#include "main.h"

/**
 * print_line - Entry point
 * Description: prints a straight line
 * Return: Alaways 0 (Success)
 */

void print_line(int n)

{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');



}
