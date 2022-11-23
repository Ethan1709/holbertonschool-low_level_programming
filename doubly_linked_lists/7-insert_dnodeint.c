#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at given position
 * @h: doyble ptr
 * Return: return the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp, *new;

	if (*h == NULL)
		return (0);

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (0);

	tmp->n = n;
	tmp = *h;
	while (i != idx -1)
		tmp = tmp->next;

	new = tmp->next;
	tmp->next = new;
	new->prev = tmp->next;

	return (new);
}
