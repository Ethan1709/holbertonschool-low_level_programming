#include "main.h"

/**
 * print_chessboard - locates first occurence in a string
 * @haystack: first string
 * @needle: second string
 *
 * Return: Pointer to memory area
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
