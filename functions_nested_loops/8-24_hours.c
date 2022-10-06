#include "main.h"

/**
 * void jack_bauer - Entry point
 * Description: prints every minute
 * Return: Alaways 0 (Success)
 */

void jack_bauer(void)
{
	int h, m;  
	

	for (h == 0; h <= 23; h++)
	{	
		for (m == 0;  <=59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
