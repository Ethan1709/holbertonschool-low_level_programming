#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of the list
 * @h: pointer on the structure
 * @head: double pointer on listint_t
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
