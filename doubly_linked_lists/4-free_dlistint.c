#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: ptr
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t tmp;

	while (head != NULL)
	{
		tmp  = head;
		tmp->n = n;
		tmp = head->next;
	}
	free(tmp);
}

