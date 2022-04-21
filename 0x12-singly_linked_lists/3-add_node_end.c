#include "lists.h"

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
	return tmp;
}
