#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: char pointer
 * @n: number of parameters
 * Return: Success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		i = va_arg(ap, unsigned int);
		printf("%d%s", i, separator);
		--i;
	}
	va_end(ap);
}