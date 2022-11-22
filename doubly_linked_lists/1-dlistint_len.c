#include "lists.h"

/**
 * dlistint_len - prints number of elements
 * @h: ptr dlistint_t
 * Return: return number of the elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
