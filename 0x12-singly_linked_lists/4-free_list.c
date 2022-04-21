#include "lists.h"

/**
 * free_list - frees up memory used by a list
 *
 * @head: list's head node
 */
void free_list(list_t *head)
{
	list_t *tmp, *current;

	current = head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current->str);
		free(current);
		current = tmp;
	}
}
