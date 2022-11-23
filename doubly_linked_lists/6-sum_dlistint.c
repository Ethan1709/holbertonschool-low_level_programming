#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of the nodes of the list
 * @head: ptr
 * Return: return the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
