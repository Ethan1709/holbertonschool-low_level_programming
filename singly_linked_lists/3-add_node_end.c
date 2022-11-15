#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: double pointer on list_t
 * @str: pointer on char
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *newnode;
	int i = 0;
	list_t *tmp;

	dup = strdup(str);
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (str[i])
		i++;

	newnode->str = dup;
	newnode->len = i;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (newnode);
}
