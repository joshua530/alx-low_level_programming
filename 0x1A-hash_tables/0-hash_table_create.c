#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - instantiates a hash table
 *
 * @size: length of hash table
 *
 * Return: the instantiated hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *table;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	/* fill with NULL */
	for (i = 0; i < size; ++i)
	{
		array[i] = NULL;
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(array);
		return (NULL);
	}

	table->size = size;
	table->array = array;

	return (table);
}
