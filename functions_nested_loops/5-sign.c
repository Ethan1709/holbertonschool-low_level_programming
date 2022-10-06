#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if character is in lowercase
 *@n: sign
 * Return: Alaways 0 (Success)
 */

int print_sign(int n)

{
	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n == 0)
	{	_putchar('0');
		return (0);
	}
	else (n < 0)
	{	_putchar('-');
		return (-1);
	}
}

