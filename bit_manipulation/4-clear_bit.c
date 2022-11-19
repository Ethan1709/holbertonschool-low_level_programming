#include "main.h"

/**
 * clear_bit - set valus of a bit to 0
 * @n: insigned long int
 * @index: ui
 * Return: value of a bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (0 << index);
	return (1);
}
