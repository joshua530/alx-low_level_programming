#include "main.h"
#include <string.h>
#include <stdlib.h>

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
	return (strdup(str));
}
