#include "function_pointers.h"

/**
 * int_index - main function
 * @array: array
 * @size: the size
 * @cmp: pointer
 * Return: Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= -1)
		return (-1);

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);
	return (0);
}
