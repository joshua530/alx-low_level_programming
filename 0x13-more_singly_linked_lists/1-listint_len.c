#include "lists.h"

/**
 * listint_len - calculates the length of a list
 *
 * @h: the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *current = h;

	while (current)
	{
		++len;
		current = current->next;
	}

	return (len);
}
