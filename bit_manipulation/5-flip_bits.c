#include "main.h"

/**
 * flip_bits - flip bits
 * @n: insigned long int
 * @m: uli
 * Return: number of bits
 */

unsigned int countsetbits(int n)
{
	int i = 0;

	while (n != 0)
	{
		i++;
		n &= (n - 1);
	}
	return (i);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return countsetbits(n ^ m);
}
