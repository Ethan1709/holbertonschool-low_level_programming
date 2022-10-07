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

	while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
}


