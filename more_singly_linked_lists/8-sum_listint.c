#include "lists.h"

/**
 * sum_listint - returns the sum of all the data n
 * @head: pointer on listint_t
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
