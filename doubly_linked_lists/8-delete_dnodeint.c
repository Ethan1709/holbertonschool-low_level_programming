#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node
 * @head: double ptr
 * @index: ui
 * Return: return the node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;
	dlistint_t *del = *head;

	if (del == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}

	while (i != index)
	{
		if (del->next == NULL)
			return (-1);
		i++;
		del = del->next;
	}

	tmp = del;
	if (tmp->next != NULL)
		del = tmp->next;
	del->prev = tmp->prev;
	free(tmp);

	return (1);
}
