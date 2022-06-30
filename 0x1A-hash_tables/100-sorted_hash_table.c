#include "hash_tables.h"

/**
 * shash_table_create - instantiate sorted hash table
 *
 * @size: size of the hash table
 *
 * Return: the instantiated table. Null is returned if error occured
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_node_t **arr;
    shash_table_t *sht;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    sht = malloc(sizeof(shash_table_t));
    if (sht == NULL)
        return (NULL);

    arr = malloc(sizeof(*arr) * size);
    if (arr == NULL)
    {
        free(sht);
        return (NULL);
    }

    for (i = 0; i < size; ++i)
    {
        arr[i] = NULL;
    }

    sht->array = arr;
    sht->size = size;
    sht->stail = NULL;
    sht->shead = NULL;

    return (sht);
}

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * 
 * @ht: sorted hash table
 * @key: key; can't be empty string
 * @value: value
 * @i: index to insert in at hash table
 * 
 * Return: 1 if success, 0 if fail
 */
int create_and_add_node(shash_table_t *ht, const char *key, const char *value,
                        unsigned long int i)
{
    shash_node_t *node = NULL;
    char *k;
    char *v;
    (void)i;
    node = malloc(sizeof(shash_node_t));
    if (!node)
        return (0);

    k = strdup(key);
    if (!k)
    {
        free(node);
        return (0);
    }

    v = strdup(value);
    if (!v)
    {
        free(k);
        free(node);
        return (0);
    }

    node->key = k;
    node->value = v;
    node->next = NULL;
    node->sprev = NULL;
    node->snext = NULL;

    if ((ht->array)[i] == NULL)
        node->next = NULL;
    else
        node->next = (ht->array)[i];
    (ht->array)[i] = node;

    return (insert_to_sorted_list(ht, node));
}

/**
 * insert_to_sorted_list - compare abcs and insert node into list (for printing)
 * 
 * @ht: sorted hash table
 * @node: node to insert
 * 
 * Return: 1 if success, 0 if fail
 */
int insert_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
    shash_node_t *tmp;

    /* if empty hash table, initialize head and tail nodes */
    if (!(ht->shead))
    {
        ht->shead = node;
        ht->stail = node;
        return (1);
    }
    if (strcmp(node->key, (ht->shead)->key) <= 0) /* insert at beginning */
    {
        node->snext = ht->shead;
        (ht->shead)->sprev = node;
        ht->shead = node;
    }
    else if (strcmp(node->key, (ht->stail)->key) > 0) /* insert at end */
    {
        node->sprev = ht->stail;
        (ht->stail)->snext = node;
        ht->stail = node;
    }
    else /* insert in middle */
    {
        tmp = ht->shead;
        while (tmp->snext && strcmp(node->key, (tmp->snext)->key) > 0)
            tmp = tmp->snext;
        node->snext = tmp->snext;
        node->sprev = tmp;
        (tmp->snext)->sprev = node;
        tmp->snext = node;
    }
    return (1);
}



/**
 * shash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int i;
    shash_node_t *tmp;

    if (ht == NULL || key == NULL)
        return (NULL);
    i = key_index((const unsigned char *)key, ht->size);

    tmp = (ht->array)[i];
    while (tmp != NULL && strcmp(tmp->key, key) != 0)
        tmp = tmp->next;
    if (!tmp)
        return (NULL);
    else
        return (tmp->value);
}

/**
 * shash_table_set - adds value to hash table
 * 
 * @ht: the hash table
 * @key: key to set
 * @value: value to map to key
 * 
 * Return: 1 if success, 0 if failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int i;
    shash_node_t *node = NULL;
    char *v;

    if (ht == NULL || !(ht->array) ||
        !key || strlen(key) == 0 || !value)
        return (0);

    i = key_index((const unsigned char *)key, ht->size);

    node = (ht->array)[i];
    while (node != NULL && (strcmp(key, node->key) != 0))
        node = node->next;
    if (node != NULL)
    {
        v = strdup(value);
        if (v == NULL)
            return (0);
        if (node->value)
            free(node->value);
        node->value = v;
        return (1);
    }

    return (create_and_add_node(ht, key, value, i));
}

/**
 * shash_table_print - prints out hash table in ascending order(key, value) pairs
 * 
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    char *comma = "";

    if (ht == NULL || ht->array == NULL)
        return;

    putchar('{');
    node = ht->shead;
    while (node != NULL)
    {
        printf("%s'%s': '%s'", comma, node->key, node->value);
        comma = ", ";
        node = node->snext;
    }
    puts("}");
}

/**
 * shash_table_delete - frees space occupied by hash table
 * 
 * @ht: the hash table to be freed
 */
void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i = 0;
    shash_node_t *node, *next;

    if (ht == NULL)
        return;

    if (ht->array == NULL)
    {
        free(ht);
        return;
    }

    /* release space occupied by nodes and array */
    while (i < ht->size)
    {
        node = (ht->array)[i];
        while (node != NULL)
        {
            next = node->next;
            if (node->key)
                free(node->key);
            if (node->value)
                free(node->value);
            node->key = NULL;
            node->value = NULL;
            free(node);
            node = next;
        }
        i++;
    }
    free(ht->array);
    free(ht);
}

/**
 * shash_table_print_rev - prints out hash table in reverse order
 * 
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    char *comma = "";

    if (ht == NULL || (ht->array) == NULL)
        return;

    node = ht->stail;
    putchar('{');
    while (node != NULL)
    {
        printf("%s'%s': '%s'", comma, node->key, node->value);
        comma = ", ";
        node = node->sprev;
    }
    puts("}");
}
