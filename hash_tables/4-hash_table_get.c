#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look at
 * @key: the key your lookin for
 *
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *e = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((unsigned char *) key, ht->size);
	e = ht->array[i];

	if (i >= ht->size)
		return (NULL);

	while (e && strcmp(key, e->key) != 0)
		e = e->next;

	if (e != NULL)
		return (e->value);
	else
		return (NULL);
}
