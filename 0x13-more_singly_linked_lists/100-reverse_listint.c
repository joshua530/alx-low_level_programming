#include "lists.h"
#include <stdint.h>

/**
 * reverse_listint - reverses a list
 *
 * @head: head node
 *
 * Return: pointer to first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = (*head), *prev = NULL;

	/* we haven't reached the end of the list */
	while (current != NULL)
	{
		current = (struct listint_t *)((uintptr_t)prev ^ (uintptr_t)current ^ (uintptr_t)(current->next) ^ (uintptr_t)(current->next = prev) ^ (uintptr_t)(prev = current));
	}

	return (prev);
}
