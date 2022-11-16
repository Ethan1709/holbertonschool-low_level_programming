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

	while (head != NULL)
	{
		if (len == index)
			return (head->len);
		len++;
		head = head->next;
	}
	return (head);
}
