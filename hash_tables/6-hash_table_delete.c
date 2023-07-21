#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *temp;
	hash_table_t *h = ht;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];

			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(h->array);
	free(h);
}
