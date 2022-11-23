#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a node at given position
 * @h: doyble ptr
 * @idx: ui
 * @n: int
 * Return: return the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i != idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp != NULL)
	{
		new->prev = tmp;
		new->next = tmp->next;
		if (tmp->next != NULL)
		{
			(tmp->next)->prev = new;
		}
		tmp->next = new;
	}
	return (new);
}
