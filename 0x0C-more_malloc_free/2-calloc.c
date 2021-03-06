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
	int *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memsize = nmemb * size;
	ptr = malloc(memsize * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < memsize; ++i)
		ptr[i] = 0;

	return ((void *)ptr);
}
