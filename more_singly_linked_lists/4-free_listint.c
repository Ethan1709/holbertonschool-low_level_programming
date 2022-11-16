#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: double pointer on listint_t
 * Return: node
 */

void free_listint(listint_t *head)
{
	listint_t *newnode;

	while (head != NULL)
	{
		free(head->n);
	}
}
