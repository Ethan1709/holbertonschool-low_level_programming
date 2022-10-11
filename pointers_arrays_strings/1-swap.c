#include "main.h"

/**
 * swap_int - Entry point
 * Description: swaps the value of two integers
 * @a: is the first integer
 * @b: is the second integer
 * Return: Alaways 0 (Success)
 */

void swap_int(int *a, int *b)

	{
		*a = b;
		*b = a;	
	}


