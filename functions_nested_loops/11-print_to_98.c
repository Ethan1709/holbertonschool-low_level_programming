#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description: n to 98
 * @n: number
 * Return: Alaways 0 (Success)
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}	
}
