#include "lists.h"
#include <string.h>

/**
 * add_note - adds a new node at the beginning
 * @head: double pointer on list_t
 * @str: pointer on char
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;

	dup = strdup(str);
	list_t *newnode = malloc(sizeof(list_s));
	newnode->data = dup;
	newnode->next = *head;
	*head = newnode;
}
