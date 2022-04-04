#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - allocates memory for characters
 *
 * @size: the number of characters to allocate memory for
 * @c: the characters that the array will be filled with
 *
 * Description: allocates a new memory block for characters
 * Return: pointer to the allocated memory block
 */
char *create_array(unsigned int size, char c)
{
	char *mem;

	mem = malloc(size * sizeof(c));
	return (mem);
}
