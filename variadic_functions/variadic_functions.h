#ifndef _VARIADIC_H
#define _VARIADIC_H

#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - def of struct
 * @c: char
 * @f: function
 */

typedef struct print
{
	char *c;
	void (*f)(va_list args);
} print_t;
#endif
