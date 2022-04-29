#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog struct
 *
 * @d: object of dog_t struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
