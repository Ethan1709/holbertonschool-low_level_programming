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
	int i = 0;

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
	newnode->next = *head;
	*head = newnode;
	
	return (newnode);
}
