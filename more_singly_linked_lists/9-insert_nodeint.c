#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: double pointer on listint_t
 * @idx: ui
 * @: n
 * Return: sum
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	unsigned int j = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	while (j != idx)
	{
		j++;
		(*head) = (*head)->next;
	}
	newnode->n = n;
	*head = newnode;

	return (newnode);
}
