#include "lists.h"

/**
 * list_len - returns number of elements ina linked list
 * @h: pointer on list_t
 * Return: node
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h == NULL)
			return (NULL);
		else 
		{
			node++;
			h = h->next;
		}
	}
	return (node);
}


