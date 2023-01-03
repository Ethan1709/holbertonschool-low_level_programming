#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: array to search in
 * @size: number of elements in the array
 * @value: value to search
 *
 * Return: the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
			continue;
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}

