#include "main.h"
#include <string.h>

/**
 * _strncpy - copies characters from src to dest
 *
 * @dest: where to copy the characters to
 * @src: the string whose characters are to be copied
 * @n: don't copy more than n characters
 *
 * Description: copies no more than n characters from src to dest
 *
 * Return: pointer to the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
