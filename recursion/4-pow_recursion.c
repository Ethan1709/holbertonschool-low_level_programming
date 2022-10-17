#include "main.h"

/**
 * _pow_recursion - prints factorial of a given number
 * @x: first integer
 * @y: second integer
 *
 * Return: Always success (0)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	else 
		return (x * _pow_recursion(x ** y)); 
}


