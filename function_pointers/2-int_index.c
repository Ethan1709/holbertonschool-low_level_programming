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
	int i;
	
	if (size <= 0)
		return (-1);

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (0);
}

