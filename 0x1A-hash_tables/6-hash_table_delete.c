#include "hash_tables.h"

/**
 * hash_table_delete - Delet
 * @ht: A pointe
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *ttt;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				ttt = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = ttt;
			}
		}
	}
	free(head->array);
	free(head);
}
