#include "main.h"

/**
 * flip_bits - flip bits
 * @n: insigned long int
 * @m: uli
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	while (n != 0)
	{
		m++;
		n &= (n - 1);
	}
	return (m);
}
