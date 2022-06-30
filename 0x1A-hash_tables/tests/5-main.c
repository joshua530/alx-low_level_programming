#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    /*
    null hashmap
    empty hashmap
    without collissions
    with collisstions
    */
    hash_table_t *ht;

    /* null */
    hash_table_print(NULL);
    
    ht = hash_table_create(1024);
    /* empty */
    hash_table_print(ht);

    /* without collissions */
    /* with one */
    hash_table_set(ht, "c", "fun");
    hash_table_print(ht);
    /* with multiple */
    hash_table_set(ht, "python", "awesome");
    hash_table_print(ht);

    /* with collissions*/
    /* one collission */
    hash_table_set(ht, "hetairas", "value");
    hash_table_set(ht, "mentioner", "value2");
    hash_table_print(ht);
    /* mixed */
    hash_table_set(ht, "bar", "candy");
    hash_table_set(ht, "heliotropes", "h-value");
    hash_table_set(ht, "neurospora", "h2-value");
    hash_table_print(ht);

    return (EXIT_SUCCESS);
}
