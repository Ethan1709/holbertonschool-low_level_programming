#include "main.h"

/**
 * print_array - Entry point
 * @str: is the string
 * @n: integer
 * Return: Alaways 0 (Success)
 */

void print_array(int *a, int n)

	{
		int i;

		for (i = 0; i < n; i++)
		{	
			printf("%d", a[i]);

			if ( i == n - 1)
				continue;
			printf(", ";
		}

		

		_putchar('\n');
	}


