#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer on listint_t
 * @index: ui
 * Return: tmp
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *tmp;

	while (tmp != NULL)
	{
		if (len == index)
			return (tmp->n);
		len++;
		tmp = tmp->next;
	}
	return (-1);
}
