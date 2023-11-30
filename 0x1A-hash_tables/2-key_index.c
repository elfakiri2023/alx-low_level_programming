#include "hash_tables.h"

/**
 * key_index - Get the index at which a
 * @key: The key to ge
 * @size: The size of
 *
 * Return: The index
 *
 * Description: Uses t
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
