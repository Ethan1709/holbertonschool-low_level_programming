#include "hash_tables.h"

/**
 * hash_djb2 - gives index of a key
 * @key: the key
 *@size: uli
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	hash->key = size;
	return (hash);
}
