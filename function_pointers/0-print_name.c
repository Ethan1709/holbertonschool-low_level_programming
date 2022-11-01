#include "function_pointer.h"

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
