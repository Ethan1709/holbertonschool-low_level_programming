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
	listint_t *newnode;
	unsigned int j = 0;
	listin_t *newnode2;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	if (n == 1)
	{
		newnode->next = *head;
		*head = newnode;
	}
	for (j = 0; j < n - 2; j++)
	{
		newnode2 = newnode2->next;
	}
	newnode->next = newnode2->next;
	newnode2->next = newnode;

	return (newnode);

/**	while (j != idx)
		j++;
	newnode->n = n;
	*head = newnode;

	return (newnode);*/
}
