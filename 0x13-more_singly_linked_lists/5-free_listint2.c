#include "lists.h"

/**
 * free_listint2 - frees up memory used by a list. head is set to null
 *
 * @head: list's head node
 */
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		listint_t *tmp, *current;

		current = *head;
		while (current != NULL)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}

		(*head) = NULL;
	}
}
