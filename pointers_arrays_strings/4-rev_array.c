#include "main.h"

/**
 * reverse_array - Entry point
 * Description: return the length of a string
 * @str: is the first integer
 * Return: Alaways 0 (Success)
 */

void reverse_array(int *a, int n)

	{
		int i;
		int j;

		for (i = n - 1; i >= n / 2; i--)
		{
			j = a[n - 1 - i];
			a[n - 1 - i] = a[i];
			a[i] = j;
		}
	}


