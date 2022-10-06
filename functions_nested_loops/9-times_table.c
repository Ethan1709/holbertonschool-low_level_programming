#include "main.h"

/**
 * times_table - Entry point
 * Description: prints time tables till 9
 * Return: Alaways 0 (Success)
 */

void times_table(void)
{
	int x, y, n;

	for (x = 0; x <= 9; x++)
	{
			_putchar('0');

			for (y = 1; y <= 9; y++)
			{
				_putchar(',');
				_putchar(' ');

				n = x * y;

				if (n <= 9)
					_putchar(' ');
				else
					_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar('\n');
		}
}
