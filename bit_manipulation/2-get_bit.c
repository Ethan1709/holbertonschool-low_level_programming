#include "main.h"

/**
 * print_binary - returns value of a bit at a given position
 * @n: insigned long int
 * @index: ui
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (i == index)
			return (index);
		return (-1);
	}
}
