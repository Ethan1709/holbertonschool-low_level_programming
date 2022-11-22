#include "lists.h"

/**
 * print_distint - prints all the elements 
 * @h: ptr dlistint_t
 * Return: return all the elements 
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
		h = h->prev;
	}
	return (node);
}
