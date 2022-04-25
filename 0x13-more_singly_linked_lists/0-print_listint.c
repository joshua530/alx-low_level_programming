#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a linked list
 *
 * @h: the list
 *
 * Return: number of items in the list
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		++len;
	}

	return (len);
}
