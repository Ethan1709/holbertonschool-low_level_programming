#include "hash_tables.h"

/**
 * hash_djb2 - gives index of a key
 * @key: the key
 *@size: uli
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
