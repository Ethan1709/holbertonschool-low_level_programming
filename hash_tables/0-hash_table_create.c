#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int
 * Return: a pointer to the newly allocated array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htable;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;

	for (i = 0; i < htable->size; i++)
		htable->next[i] = NULL;

	return (htable);
}
