#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *iter, *tmp;

	if (ht == NULL || ht->size == 0)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		iter = (ht->array)[i];
		while (iter != NULL)
		{
			tmp = iter;
			iter = iter->next;
			if (tmp->key)
				free(tmp->key);
			if (tmp->value)
				free(tmp->value);
			tmp->key = NULL;
			tmp->value = NULL;
			free(tmp);
		}
		++i;
	}

	free(ht->array);
	free(ht);
}
