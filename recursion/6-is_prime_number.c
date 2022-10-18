#include "main.h"

/**
 * prime - second fonction
 * @x: first integer
 * @y: second integer
 * Return: Always success (0)
 */

int prime(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);

	else if (x == y)
		return (1);

	else if (x > y)
		prime(x, y + 1);
	return (1);
}

/**
 * is_prime_number - main fonction
 * @n: integer
 *
 *Return: Always success
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
