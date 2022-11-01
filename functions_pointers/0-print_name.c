#include <stdio.h>
#include <stdlib.h>
#include "functions_pointers.h"

/**
 * print_name - print my name
 * @name: the name
 * @f: main function
 * Return: Succes
 */



void print_name(char *name, void (*f)(char *))
{
	char (*p)(char);

	p = f;
}
