#include "lists.h"
#include <string.h>

/**
 * add_nodeint - prepends a node to a list
 *
 * @head: head node of list
 * @n: number to use for the head node
 *
 * Return: address of new head or null if operation failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	/* there is no head pointer */
	if (*head == NULL)
	{
		tmp = create_node(n);
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
		(*head) = create_node(n);
		if ((*head) == NULL)
		{
			return (NULL);
		}
		(*head)->next = tmp;
	}
	return (*head);
}

/**
 * create_node - creates a new node
 *
 * @n: the int to assign to new node
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
