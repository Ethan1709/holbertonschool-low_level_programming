#include "main.h"

/**
 * print_diagsmus - locates first occurence in a string
 * @a: first string
 * @size: integer
 * Return: Pointer to memory area
 */

void print_diagsmus(int *a, int size)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	for (i = 0; i < size; i++)
	{
		j += a[(size + 1) * i];
		x += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", j, x);
}

