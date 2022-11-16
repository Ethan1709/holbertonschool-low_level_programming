#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: double pointer on listint_t
 * Return: node
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode;

	while ((*head) != '\0')
	{
		newnode = (*head);
		(*headi) = (* head)->next;
		free(newnode);
	}
}
