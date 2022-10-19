#include <stdio.h>

/**
 * main - Entry point
 * @argc: command line
 * @argv: char
 * Return: Success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	while (*argv != '\0')
		printf("%s\n", *argv);
	return (0);
}
