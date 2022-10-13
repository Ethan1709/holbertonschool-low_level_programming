#include "main.h"

/**
 * reverse_array - Entry point
 * Description: return the length of a string
 * @a: string
 * @n: is the first integer
 * Return: Alaways 0 (Success)
 */

void reverse_array(int *a, int n)

	{
		int i = 0, j;

		n =  n - 1;
		while (i < n)
		{
			j = *(a + i);
			*(a + i) = *(a + n);
			*(a + n) = j;
			i++;
			n--;
		}
	}


