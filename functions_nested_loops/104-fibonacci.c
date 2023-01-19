#include <stdio.h>

/**
 * main - fibonacci first 98
 *
 * Return: 0 if success
 */

int main(void) 
{
	long int i = 0, j = 1, sum = 0, k = 0;

	for (k = 0; k < 99; k++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%ld", sum);
		if (k != 98)
			printf(", ");
	}
	return (0);
}
