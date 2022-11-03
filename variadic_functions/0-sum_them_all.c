#include "variadic_functions.h"

/**
 * sum_them_all - sum of the parameters
 * @n: int
 * Return: Success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	const unsigned int i;

	va_start(ap, n);

	if (n == 0)
		return (0);
       	va_arg(ap, int);

	va_end(ap);
	return (0);
}	
