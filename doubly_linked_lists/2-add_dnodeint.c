#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: double ptr
 * @n: int
 * Return: return number of the elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = *head;
	new->next = (*head)->next;
	(*head) = new;

	return (new);
}
