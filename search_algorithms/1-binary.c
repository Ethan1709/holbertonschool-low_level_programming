#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of ints
 * @array: array to search in
 * @size: number of elements in the array
 * @value: value to search
 *
 * Return: the index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j = size - 1;
	size_t m;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");
		for (m = i; m <= j; m++)
		{
			printf("%d", array[m]);
			if (array[m] != array[j])
				printf(", ");
		}
		printf("\n");
		m = (i + j) / 2;
		if (value == array[m])
			return (i);
		if (value < array[m])
			j = m - 1;
		if (value > array[m])
			i = m + 1;
	}
	return (-1);
}
