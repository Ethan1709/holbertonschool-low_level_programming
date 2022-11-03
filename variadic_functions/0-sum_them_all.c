#include "variadic_functions.h"

/**
 * sum_them_all - sum of the parameters
 * @n: int
 * Return: Success
 */

int sum_them_all(const unsigned int n, ...)
{
	 const unsigned int i, sum;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);
	return (sum);
	va_end(ap);
}
