#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer on listint_t
 * @index: ui
 * Return: tmp
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp;

	while (tmp != NULL)
	{
		if (x == index)
			return (tmp->n);
		x++;
		tmp = tmp->next;
	}	
	return (x);
}
