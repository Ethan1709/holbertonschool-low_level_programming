#include "main.h"

/**
 * reverse_array - Entry point
 * Description: return the length of a string
 * @str: is the first integer
 * Return: Alaways 0 (Success)
 */

void reverse_array(int *a, int n)

	{
		while (*a && a < n)
			_putchar(*a++);

		_putchar('\n');
	}


