#include "main.h"

/**
 * power - second fonction
 * @x: first integer
 * @y: second integer
 * Return: Always success (0)
 */

int power(int x, int y)
{
	if (x * x == y)
		return (0);

	else if (x * x > y)
		return (0);

	else if (x * x < y)
		return (0);

	else if
		return (1);

	else 
		return (power(x + 1, y));
}

/**
 * _sqrt_recursion - main fonction
 * @n: integer
 *
 *Return: Always success
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (power(1, n));
}


