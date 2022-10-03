#include <stdio.h>

/**
 * main - Entry point
 * Description: prints digits
 * Return: Alaways 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
