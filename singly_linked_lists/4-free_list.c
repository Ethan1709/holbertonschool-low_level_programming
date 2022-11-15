#include "lists.h"
#include <string.h>

/**
 * free_list - free list_t
 * @head: pointer on list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	free(newnode);
}
