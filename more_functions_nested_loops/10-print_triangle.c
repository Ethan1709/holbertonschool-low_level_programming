#include "main.h"

/**
 * print_triangle - Entry point
 * Description: prints a square
 * @size: size of the square
 * Return: Alaways 0 (Success)
 */

void print_triangle(int size)

{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	{
		for (i < size; i++)
		{
			for (j = 0; j < i; j++)
				_putchar('#');

			if (i == j - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');

}


