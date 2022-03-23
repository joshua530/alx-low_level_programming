#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Description: compares s1 and s2 to determine the greater or lesser one
 *
 * Return: 1 if s1 > s2, 0 if s1 == s2 and -1 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
