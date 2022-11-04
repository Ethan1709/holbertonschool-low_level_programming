#include "variadic_functions.h"

/**
 * print_strings - print numbers
 * @separator: char pointer
 * @n: number of parameters
 * Return: Success
 */

 void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list ap;

	va_start(ap, n);
	j = 0;
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, unsigned int);
		printf("%d", j);
		if (i == n - 1)
			continue;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
