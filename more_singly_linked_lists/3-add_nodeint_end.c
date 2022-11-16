#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @n: pointer on the structure
 * @head: double pointer on listint_t
 * Return: node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	*head = newnode;

	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = next;
		tmp->next = newnode;
	}
	return (newnode);
}
