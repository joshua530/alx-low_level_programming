#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - fetches a key's value from a hash table
 *
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value of the key if found, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned int i;
    hash_node_t *iter;

    /* check for empty keys */
    if (key == NULL || strcmp(key, "") == 0)
        return (NULL);

    i = key_index((const unsigned char *)key, ht->size);
    if (ht->array[i] == NULL)
        return (NULL);
    
    iter = ht->array[i];
    while (iter != NULL)
    {
        if (strcmp(iter->key, key) == 0)
            return (iter->value);
        iter = iter->next;
    }

    return (NULL);
}
