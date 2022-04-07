#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of first n bytes to copy from s2
 *
 * Return: pointer to concatenated string if concatentation succeeds and
 * NULL if concatenation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t total_len;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	total_len += strlen(s1);

	if (n >= strlen(s2))
		total_len += strlen(s2);
	else
		total_len += n;

	concatenated = malloc(total_len);

	if (concatenated == NULL)
		return (NULL);

	strcat(concatenated, s1);
	strncat(concatenated, s2, total_len - sizeof(s1));

	return (concatenated);
}
