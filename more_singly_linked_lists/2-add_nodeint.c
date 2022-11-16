#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of the list
 * @h: pointer on the structure
 * @head: double pointer on listint_t
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int *dup;
	listint_t *newnode;
	int i = 0;


	if (newnode == NULL)
		return (NULL);
	while (n[i])
		i++;

	newnode->n = dup;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
