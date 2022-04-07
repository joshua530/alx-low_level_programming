#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of a given size
 *
 * @nmemb: number of members to allocate memory for
 * @size: size of each member
 *
 * Return: pointer to allocated memory upon success. NULL upon failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int memsize;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memsize = nmemb * size;
	ptr = malloc(memsize);

	return (ptr);
}
