#include <stdio.h>

/**
 * main - fibonacci even-valued
 *
 * Return: 0 if success
 */

int main(void)
{
	long int i = 0, j = 1, sum = 0;

	while (sum < 4000000)
	{
		sum = i + j;
		i = j;
		j = sum;
		if (sum % 2 == 0)
		{
			printf("%ld", sum);
			if (i + j < 4000000)
				printf(", ");
		}
	}
	return (0);
}
