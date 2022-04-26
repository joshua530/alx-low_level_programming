#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 *
 * @head: head node
 * @idx: index to insert node at
 * @n: value of node
 *
 * Return: address of inserted node or NULL if insertion failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new;

	while (current != NULL)
	{
		if (idx == 0) /* insert before head node */
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->n = n;
			new->next = current;
			(*head) = new;
			return (new);
		}

		if (i == (idx - 1))
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->next = current->next;
			new->n = n;
			current->next = new;
			return (new);
		}
		else
		{
			++i;
			current = current->next;
		}
	}
	return (NULL);
}
