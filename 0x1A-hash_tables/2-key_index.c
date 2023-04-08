#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to be hashed and indexed.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored in the array
 * of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
