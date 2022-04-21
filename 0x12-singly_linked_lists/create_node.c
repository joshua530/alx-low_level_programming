#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - creates a new node
 *
 * @str: the string to assign to new node
 *
 * Return: new node or NULL if creation failed
 */
list_t *create_node(const char *str)
{
    list_t *tmp = malloc(sizeof(list_t));

    if (tmp == NULL)
    {
        return (NULL);
    }
    tmp->next = NULL;
    if (str == NULL)
    {
        tmp->len = 0;
        tmp->str = NULL;
    }
    else
    {
        tmp->str = strdup(str);
        tmp->len = strlen(str);
    }
    return (tmp);
}
