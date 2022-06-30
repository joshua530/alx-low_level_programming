#include "hash_tables.h"

/**
 * key_index - finds the index of a given key
 * 
 * @key: value whose hash is to be computed
 * @size: size of the hash table
 * 
 * Return: computed hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = hash_djb2(key);

    if (hash >= size)
        hash = hash % size;

    return (hash);
}
