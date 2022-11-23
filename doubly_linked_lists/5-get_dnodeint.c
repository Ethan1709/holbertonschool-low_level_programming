#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node of the list
 * @head: ptr
 * @index: ui
 * Return: return the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		if (head == NULL)
			return (NULL);
		i++;
		head = head->next;
	}
	return (head);
}
