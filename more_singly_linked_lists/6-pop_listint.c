#include "lists.h"

/**
 * pop_listint - frees listint_t
 * @head: double pointer on listint_t
 * Return: tmp
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = 0;

	if (head == NULL)
		return (0);

	tmp = (*head);
	(*head) = (*head)->next;
	tmp = tmp->next;

	return (tmp);
}
