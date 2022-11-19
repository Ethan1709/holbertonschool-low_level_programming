#include "main.h"

/**
 * flip_bits - flip bits
 * @n: insigned long int
 * @m: uli
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while ((n ^ m) > 0)
	{
		bits += ((n ^ m) & 1);
		(n ^ m) >>= 1;
	}
	return (bits);
}
