#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: string that will be appended to
 * @src: string that will be appended to the other one
 *
 * Description: concatenates two strings and returns the result of the
 * concatenation
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
