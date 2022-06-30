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
    --- tests ---
    empty key
    null key
    malloc failed**
    colliding keys
    non colliding keys
    */
    hash_table_t *ht;
    unsigned long i;
    hash_node_t *head;
    const unsigned char *key;

    ht = hash_table_create(1024);

    printf("Null key(NULL) = ");
    /* null key */
    if (hash_table_set(ht, NULL, "") == 0)
        printf("success");
    else
        printf("failed");
    printf("\n");

    printf("Null key(\\0) = ");
    if (hash_table_set(ht, "\0", "") == 0)
        printf("success");
    else
        printf("failed");
    printf("\n");

    /* empty key */
    printf("Empty key = ");
    if (hash_table_set(ht, "", "") == 0)
        printf("success");
    else
        printf("failed");
    printf("\n");

    /* non colliding */
    printf("Non-colliding key = ");
    if (hash_table_set(ht, "foo", "bar") == 1)
        printf("success");
    else
        printf("failed");
    printf("\n");

    /* colliding keys */
    /* hetairas collides with mentioner */
    printf("Colliding keys = ");
    hash_table_set(ht, "hetairas", "value");
    if (hash_table_set(ht, "mentioner", "value2") == 1)
    {
        i = key_index(
            (const unsigned char *)"hetairas",
            ht->size
        );
        head = ht->array[i];

        if (
            strcmp(head->value,"value2") == 0 &&
            strcmp(head->next->value, "value") == 0
        )
        {
            printf("success");
        }
        else
        {
            printf("failed");
        }
    }

    printf("\n");

    return (EXIT_SUCCESS);
}
