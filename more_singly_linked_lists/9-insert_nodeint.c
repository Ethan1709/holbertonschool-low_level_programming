#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: double pointer on listint_t
 * @idx: ui
 * @n: n
 * Return: sum
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = *head;
	listint_t *newnode2 = *head;
	unsigned int j = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = newnode2;
		*head = newnode;
		return (newnode);
	}
	for (; j < (idx -1); j++)
		newnode2 = newnode2->next;
	
	newnode->next = newnode2->next;
	newnode2->next = newnode;
	return (newnode);
}
