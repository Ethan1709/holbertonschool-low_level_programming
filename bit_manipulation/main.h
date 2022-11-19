#ifndef _BIT_MAN
#define _BIT_MAN

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
#endif
