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
	int n;

	if (size <= 0)
		return (-1);

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);

	for (n = 0; n < size; n++)
		cmp(array[size - 1]);
	return (n);
}


/**	for (n = 0; n < size; n++)i
		cmp(array[size]);
	return (n);*/

