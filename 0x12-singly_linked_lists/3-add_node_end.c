#include "lists.h"
#include <string.h>

/**
 * add_node_end - appends a node to the end of a list
 *
 * @head: the head node
 * @str: string to assign to the appended node
 *
 * Return: the created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;

	if (tmp == NULL)
	{
		tmp = create_node(str);
		(*head) = tmp;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = create_node(str);
	}
	return (tmp);
}

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
