#include "function_pointers.h"

/**
 * print_name - main function
 * @name: char
 * @f: function
 * Return: Success
 */

void print_name(char *name, void (*f)(char *))
{
	char (*p)(char);

	p = f;
}
