#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 is success
 */

int main(void)
{
	long long int i = 0, j = 1, k, sum = 0;

	for (k = 1; k <= 50; k++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%d, ", sum);
	}

	return (0);
}
