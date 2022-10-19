#include <stdio.h>

/**
 * main - Entry point
 * @argc: command line
 * @argv: char
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i, j, result;
	int atoi(const char *argv);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);

	return (0);
}
