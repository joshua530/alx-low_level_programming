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
	dog_t dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	char *name_store = malloc(sizeof(char) * strlen(name));
	char *owner_store = malloc(sizeof(char) * strlen(owner));

	dog.name = strcpy(name_store, name);
	dog.owner = strcpy(owner_store, owner);
	dog.age = age;
	return (&dog);
}
