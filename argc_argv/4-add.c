#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: command line
 * @argv: char
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				printf("Error\n");
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

