#include "variadic_functions.h"

/**
 * print_all - print numbers
 * @format: char pointer
 * Return: Success
 */

void print_all(const char * const format, ...)
{
	char *i = 0;
	char **j = 0;

	va_list ap;

	va_start(ap, format);

	while (i < format - 1)
	{
		i++;
		j = va_arg(ap, char *);
	}
	printf("\n");
	va_end(ap);
}
