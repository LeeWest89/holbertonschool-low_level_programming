#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i = 0;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);

	if (table->array == NULL)
		return (NULL);

	for (; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
