#include "variadic_functions.h"

/**
 * print_all - print numbers
 * @separator: char pointer
 * @n: number of parameters
 * Return: Success
 */

void print_all(const char * const format, ...)
{
/**	struct chong[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring},
		{NULL, NULL}
	}; */

	char *i = 0;

	va_list ap;

	va_start(ap, format);

	while (i < format)
	{
	       i++;	
		va_arg(ap, char *);
	}
	printf("\n");
	va_end(ap);
}
		
