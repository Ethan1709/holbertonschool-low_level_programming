#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer on list_t
 * @str: pointer on char
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *newnode;
	int i;

	dup = strdup(str);
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	for (i = 0; i != '\n';)
	{
		newnode->str = dup;
		newnode->next = *head;
		*head = newnode;
	}
	return (0);
}
