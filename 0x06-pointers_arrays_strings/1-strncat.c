#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings, using at most n bytes
 *
 * @dest: the string that will be concatenated to
 * @src: the string from which the bytes will be extracted
 * @n: the number of bytes to be used
 *
 * Description: the source string does not need to have a null
 * terminator if it exceeds n bytes
 *
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
