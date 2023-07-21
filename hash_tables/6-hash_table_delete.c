#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			free(ht->array[i]);
	}
}
