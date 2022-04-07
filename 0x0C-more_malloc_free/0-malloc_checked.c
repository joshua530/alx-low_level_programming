#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - assigns memory and exits with code 98 on failure
 *
 * @b: the size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
