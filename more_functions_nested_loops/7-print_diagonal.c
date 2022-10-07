#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: prints a straight line
 * @n: n is the character
 * Return: Alaways 0 (Success)
 */

void print_diagonal(int n)

{
	int l;
	int m;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < n; m++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)
				continue;

			_putchar('\n');
		}
	}
}

