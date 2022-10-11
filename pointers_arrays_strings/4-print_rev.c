#include "main.h"

/**
 * print_rev_logic - Entry point
 * Description: print string in rev
 * @s: is the first integer
 * Return: Alaways 0 (Success)
 */
void print_rev_logic(char *s)
{
	if (!*s)
		return;
	print_rev_logic(s + 1);
	_putchar(*s);
}

/**
 * print_rev - function
 * @s: char ptr
 */
void print_rev(char *s)
{
	print_rev_logic(s);
	_putchar(10);
}

