#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of the list
 * @h: pointer on the structure
 * @head: double pointer on listint_t
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	char *dup;
	listint_t *newnode;
	int i = 0;

	dup = strdup(n);
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (n[i])
		i++;

	newnode->n = dup;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
