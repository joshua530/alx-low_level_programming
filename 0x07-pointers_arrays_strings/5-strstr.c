#include "main.h"
#include <string.h>

/**
 * _strstr - search for occurence in string
 *
 * @haystack: string to be searched
 * @needle: string to locate
 *
 * Description: search for occurence in string
 *
 * Return: pointer to the first occurrence or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
