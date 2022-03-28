#include "main.h"
#include <string.h>

/**
 * _strchr - implementation of strchr function
 *
 * @s: string to be searched
 * @c: character to locate
 *
 * Description: locates character in string
 *
 * Return: pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
