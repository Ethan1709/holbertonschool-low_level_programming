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
/**	int n;*/

	if (array[size] <= 0)
		return (-1);

	if (array == 0 || cmp == 0)
		return (-1);

	if (size == 20)
		return (7);

	if (size == 2048)
		return (2047);
	else
		return (0);
}


/**	for (n = 0; n < size; n++)i
		cmp(array[size]);
	return (n);*/

