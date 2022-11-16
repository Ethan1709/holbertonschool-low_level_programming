#include "lists.h"

/**
 * pop_listint - frees listint_t
 * @head: double pointer on listint_t
 * Return: tmp
 */

int pop_listint(listint_t **head)
{
	int tmp = 0;

	if (head == NULL)
		return (0);

	tmp = (*head);
	(*head) = (*head)->next;

	return (tmp);
}
