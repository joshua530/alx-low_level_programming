#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - instantiates a dog instance
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: instantiated dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	if (name == NULL || owner == NULL)
		return (NULL);

	dog->name = strdup(name);
	dog->owner = strdup(owner);

	if (dog->name == NULL && dog->owner != NULL)
	{
		free(owner);
		free(dog);
		return (NULL);
	}
	if (dog->owner == NULL && dog->name != NULL)
	{
		free(name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
