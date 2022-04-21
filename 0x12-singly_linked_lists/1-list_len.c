#include "lists.h"

/**
 * list_len - calculates the length of a list
 *
 * @h: the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current)
	{
		++len;
		current = current->next;
	}

	return (len);
}
