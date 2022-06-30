#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table's content
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *iter;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (idx < ht->size)
	{
		iter = ((ht->array)[idx]);
		while (iter)
		{
			printf("%s'%s': '%s'", comma, iter->key, iter->value);
			comma = ", ";
			iter = iter->next;
		}
		idx++;
	}
	puts("}");
}
