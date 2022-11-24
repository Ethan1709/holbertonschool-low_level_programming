#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node
 * @head: double ptr
 * @index: ui
 * Return: return the node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (tmp == NULL)
		return (-1);

	while (i != index)
	{
		if (tmp->next == NULL)
			return (-1);
		i++;
		tmp = tmp->next;
	}

	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);
}
