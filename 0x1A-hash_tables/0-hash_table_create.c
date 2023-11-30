#include "hash_tables.h"

/**
 * hash_table_create - A func
 * @size: The size
 *
 * Return: If an e
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_c;
	unsigned long int i;

	/* allocate space for the hash table */
	hash_c = malloc(sizeof(hash_table_t));

	if (hash_c == NULL)
		return (NULL);

	hash_c->size = size;
	hash_c->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_c->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_c->array[i] = NULL;
	}

	return (hash_c);
}
