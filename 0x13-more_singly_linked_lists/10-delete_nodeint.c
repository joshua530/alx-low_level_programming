#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index
 *
 * @head: head node
 * @index: index of node to be deleted
 *
 * Return: 1 if deletion succeeded; else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *current = (*head);
	listint_t *tmp;

	while (current != NULL)
	{
		if (idx == (index - 1))
		{
			if (current->next == NULL) /* no node to delete */
			{
				return (-1);
			}
			else
			{
				tmp = current->next;
				current->next = tmp->next;
				tmp->next = NULL;
				free(tmp);
				return (1);
			}
		}
		else
		{
			++idx;
			current = current->next;
		}
	}

	return (-1);
}
