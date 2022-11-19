#include "main.h"

/**
 * set_bit - set valus of a bit to 1
 * @n: insigned long int
 * @index: ui
 * Return: value of a bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (index << 1);
	return (1);
}
