#include "lists.h"

/**
 * free_listint - frees up memory used by a list
 *
 * @head: list's head node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *current;

	current = head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
