#include "lists.h"

/**
 * print_listint - prints all elmeents of the list
 * @h: pointer on the structure
 * Return: node
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		if (h == NULL)
			return (1);
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
