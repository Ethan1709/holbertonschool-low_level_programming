#include <stdio.h>

/**
 * main - Entry point
 * @argc: command line
 * @argv: char
 * Return: Success
 */

int main(int argc, char *argv[])
{
	while (argc != '\0')
		printf("%s\n", *argv);

	return (0);
}
