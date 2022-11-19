#include "main.h"

/**
 * countbits - count the number of bits to be flipped
 * @n: uli
 * Return: the good number of bits
 */

unsigned int countbits(unsigned long int n)
{
	unsigned long int i = 0;

	while (n != 0)
	{
		i++;
		n &= (n - 1);
	}
	return (i);
}
/**
 * flip_bits - flip bits
 * @n: insigned long int
 * @m: uli
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countbits(n ^ m));
}
