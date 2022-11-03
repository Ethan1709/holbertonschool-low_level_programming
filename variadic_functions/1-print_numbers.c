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
		printf("%d%s", n, separator);
	}

	va_end(ap);
}
