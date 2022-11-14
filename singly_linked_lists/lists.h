#ifndef _SINGLY_LINKED_LISTS
#define _SINGLY_LINKED_LISTS	
#include <stdio.h>
#include <stdlib.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
