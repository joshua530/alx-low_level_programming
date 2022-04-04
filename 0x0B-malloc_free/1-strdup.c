#include "main.h"
#include <string.h>

/**
 * _strdup - strdup implementation
 *
 * @str: string to duplicate
 *
 * Description: copies a string and returns it
 * Return: copy of the string or NULL if copying failed
 */
char *_strdup(char *str)
{
	int size, len, i;
	char *copy;

	size = sizeof(str);

	if (size == 0)
		return (NULL);
	len = size / (sizeof(str[0]));

	copy = malloc(size);
	for (i = 0; i < len; ++i)
		copy[i] = str[i];

	return (copy);
}
