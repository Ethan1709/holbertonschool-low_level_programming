#include "variadic_functions.h"

/**
 * pchar - print char
 * @c: char
 * Return: void
 */

void pchar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * pinteger - print int
 * @i: int
 * Return: void
 */

void pinteger(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * pfloat - print float
 * @f: float
 * Return: void
 */

void pfloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * pstring - print string
 * @s: string
 * Return: void
 */

void pstring(va_list ap)
{
	char *c;

	c = va_arg(ap, char *);

	if (c == NULL)
		c = ("(nil)");
	printf("%s", c);
}

/** 
 * print_all - prints all
 * @format: all arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	print_t chong[] = {
		{"c", pchar},
		{"i", pinteger},
		{"f", pfloat},
		{"s", pstring},
		{NULL, NULL},
	};

	int i = 0;
	int j = 0;
	va_list arg;
	char *d = "";

	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		while (chong[j].c != NULL && format[i] != *(chong[j].c))
			j++;
		if (chong[j].c != NULL)
		{
			printf("%s", d);
			chong[j].f(arg);
			d = ", ";
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(arg);
}
