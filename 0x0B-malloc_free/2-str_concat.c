#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *final_str;
	int size;

	// assume strings are empty first, allocate space for null
	// terminator only
	size = sizeof(char);
	if (s1 != NULL)
	{
		size = sizeof(s1) * sizeof(char);
	}
	if (s2 != NULL)
	{
		size += sizeof(s2) * sizeof(char);
	}

	final_str = malloc(size);
	if (s1 != NULL)
		strcat(final_str, s1);
	if (s2 != NULL)
		strcat(final_str, s2);

	// there was nothing to concatenate
	if (sizeof(final_str == (sizeof(char))))
		return NULL;
	return final_str;
}
