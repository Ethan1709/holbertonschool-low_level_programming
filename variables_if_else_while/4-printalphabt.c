#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabet except q and e
 * Return: Alaways 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
			continue;
		if (ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
}

