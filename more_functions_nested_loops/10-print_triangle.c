#include "main.h"

/**
 * print_square - Entry point
 * Description: prints a square
 * @size: size of the square
 * Return: Alaways 0 (Success)
 */

void print_square(int size)

{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		if (j == i)
			_putchar(' ');
		_putchar('\n');
		i++;
	}
}


