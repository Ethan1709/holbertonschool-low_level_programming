#include "variadic_functions.h"

/**
 * print_all - print numbers
 * @separator: char pointer
 * @n: number of parameters
 * Return: Success
 */

void print_all(const char * const format, ...)
{
	typedef struct unit {
		char c;
		int i;
		float f;
		char *s;
	} unit;

	int y = 0;

	va_list ap;

	va_start(ap, format);

	while (format[y])
		unit = var_arg(ap, char *);
		{
			printf("%s", unit.[y ]);
			y++;
		}
	printf("\n");
	va_end(ap);
}
