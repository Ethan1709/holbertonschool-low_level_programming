#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer on list_t
 * Return: Success
 */

size_t print_list(const list_t *h)
{
	size_t node;

	while (h != NULL)
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	node++;
	h->next;
}
