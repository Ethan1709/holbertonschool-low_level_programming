#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: const char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	if (b[i] < 48  || b[i] > 49)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		dec <<= 1;
		dec += b[i] - '0';
		i++;
	}
	return (dec);
}
