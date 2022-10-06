#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: prints the last digit
 *@c: last digit
 * Return: Alaways 0 (Success)
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	
	return (last_digit);
}
