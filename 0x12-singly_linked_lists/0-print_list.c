#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_list - prints out linked list items
 *
 * @h: list to print
 *
 * Return: number of items in the list
 */
size_t print_list(const list_t *h)
{
	int num = 0;
	const list_t *current = h;

	while (current)
	{
		++num;
		if (current->str != NULL)
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
	}

	return (num);
}
