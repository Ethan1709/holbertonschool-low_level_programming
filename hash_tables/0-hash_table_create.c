#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int
 * Return: a pointer to the newly allocated array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table

	new_table = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t*) * size);

	new_table->size = size;

	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}
