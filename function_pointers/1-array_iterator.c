#include "function_pointers.h"

/**
 * array_iterator - main function
 * @array: int
 * @size: the size
 * @action: pointer
 * Return: Success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (action == 0 || array == 0 || size == 0)
		return;

	for (n = 0; n < size; n++)
		n = size;
}
