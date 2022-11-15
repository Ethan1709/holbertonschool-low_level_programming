i#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer on the structure
 * Return: node
 */

size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		if (h == NULL)
			return (1);
		node++;
		h = h->next;
	}
	return (node);
}
