#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"
#include "tests.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    bool colliding_result;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "hetairas", "value");
    hash_table_set(ht, "mentioner", "value2");

    /* existent key */
    print_test_result((strcmp(hash_table_get(ht, "c"),"fun") == 0), "Existent key");
    /* non existent */
    print_test_result(hash_table_get(ht, "bar") == NULL, "Non existent key");
    /* null key */
    print_test_result(hash_table_get(ht, NULL) == NULL, "Null key(NULL)");
    print_test_result(hash_table_get(ht, NULL) == NULL, "Null key(\\0)");
    /* colliding keys */
    colliding_result = strcmp(hash_table_get(ht, "hetairas"),"value") == 0 &&
                        strcmp(hash_table_get(ht, "mentioner"),"value2") == 0;
    print_test_result(colliding_result, "Colliding keys");
    
    return (EXIT_SUCCESS);
}
