#include "lists.h"

/**
 * add_nodeint_end - appends a node to the end of a list
 *
 * @head: the head node
 * @n: integer to assign to the appended node
 *
 * Return: the created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;

	if (tmp == NULL)
	{
		tmp = create_node(n);
		(*head) = tmp;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = create_node(n);
	}
	return (tmp);
}

/**
 * create_node - creates a new node
 *
 * @n: the integer to assign to new node
 *
 * Return: new node or NULL if creation failed
 */
listint_t *create_node(const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->next = NULL;
	tmp->n = n;
	return (tmp);
}
