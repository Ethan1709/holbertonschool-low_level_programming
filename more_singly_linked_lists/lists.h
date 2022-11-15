#ifndef _MORE_LINKED
#define _MORE_LINKED

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * struct listint_s - data structure 
 * @n: int
 * @next: pointer on structure 
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
