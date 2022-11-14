#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer on list_t
 * Return: node
 */

size_t print_list(const list_t *h)
{
	size_t node;

	while (h)
	{	
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
}


