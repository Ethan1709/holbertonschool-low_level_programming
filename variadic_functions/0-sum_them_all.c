#include "variadic_functions.h"

/**
 * sum_them_all - sum of the arguments
 * @n: int
 * Return: Success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	
	if (n == 0)
		return (0);

	while (n > 0)
	{
		const unsigned int i;

		i = va_arg(ap, const unsigned int);
		--n;
	}
	va_end(ap);
}

		
