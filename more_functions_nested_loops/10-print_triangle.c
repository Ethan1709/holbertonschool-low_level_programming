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
	char	m[size][size];

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
			m[i][j] = "# "[j < i];
			j++;
		}
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar(m[i][j]);
			j++;
		}
		_putchar('\n');
		i--;
	}
}

