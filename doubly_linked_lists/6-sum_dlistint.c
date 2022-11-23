#include "lists.h"

/**
 * sum_dlistint_t - function that returns the sum of the nodes of the list
 * @head: ptr
 * Return: return the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
