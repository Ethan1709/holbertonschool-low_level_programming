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
	{	putchar(ch);
		if (ch == 9)
			break;
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	
	return (0);
}
