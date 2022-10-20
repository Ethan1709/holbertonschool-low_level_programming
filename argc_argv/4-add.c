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

	if (isdigit(argc))

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i + j;

	printf("%d\n", result);

	return (0);
}
