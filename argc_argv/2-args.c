#include <stdio.h>

/**
 * main - Entry point
 * @argc: command line
 * @argv: char
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
