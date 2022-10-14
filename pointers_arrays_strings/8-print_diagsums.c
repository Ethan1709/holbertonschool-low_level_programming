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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)

				printf("%d", a[i] + a[j]);
		}
	}

	for (i = size; i >= 0; i--)
	{
		for (j = size; j >= 0; j--)
		{
			if (i == j)

				printf("%d", i + j);
		}
	}
}
