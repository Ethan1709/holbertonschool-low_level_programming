#include "lists.h"

/**
 * sum_listint - returns the sum of all the data n
 * @head: pointer on listint_t
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		tmp = head;
		head = head->n;
		sum += n;
	}
	return (sum);
}
