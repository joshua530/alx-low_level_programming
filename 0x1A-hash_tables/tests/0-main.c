#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    /*
	-- test cases --
	size is less than zero
	size is zero
	malloc failed
	everything went ok (size >= 1, malloc ok)
	*/
    hash_table_t *ht;
    ht = hash_table_create(0);
    printf("Input = 0: ");
    if (ht == NULL)
        printf("success");
    else
        printf("fail");
    printf("\n");

    ht = hash_table_create(-1);
    printf("Input = < 0: ");
    if (ht == NULL)
        printf("success");
    else
        printf("fail");
    printf("\n");

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
