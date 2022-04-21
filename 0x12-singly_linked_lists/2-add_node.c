#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - prepends a node to a list
 *
 * @head: head node of list
 * @str: string to use for the head node
 *
 * Return: address of new head or null if operation failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	/* there is no head pointer */
	if (*head == NULL)
	{
		tmp = create_node(str);
		if (tmp == NULL)
		{
			return (NULL);
		}
		(*head) = tmp;
	}
	else
	{
		/* copy head */
		tmp = (*head);
		(*head) = create_node(str);
		if ((*head) == NULL)
		{
			return (NULL);
		}
		(*head)->next = tmp;
	}
	return (*head);
}
