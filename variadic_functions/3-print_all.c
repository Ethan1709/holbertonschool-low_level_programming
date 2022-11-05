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

	int *i = 0;
	char *j = 0; 
	
	va_list ap;

	va_start(ap, format);

	for (i = 0; i < format; i++)
		j = va_arg(ap, char *);
	printf("\n");
	va_end(ap);
}
		
