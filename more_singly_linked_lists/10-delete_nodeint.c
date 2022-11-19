#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given position
 * @head: double pointer on listint_t
 * @index: ui
 * Return: newnode
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *node;
	listint_t *del = *head;

	if (del == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head) -> next;
		free(node);
		return (1);
	}
	while (j < index - 1)
	{
		if (del == NULL)
			return(-1);
		node == *head;
		(*head) == (*head) -> next;
		free(node);
	}
}	return (1);
