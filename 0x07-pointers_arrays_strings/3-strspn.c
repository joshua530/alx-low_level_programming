#include "main.h"
#include <string.h>

/**
 * _strspn - Return the length of the initial segment of S
 * which consists entirely of characters in accept
 *
 * @s: string to be searched
 * @accept: character to locate
 *
 * Description: finds initial segment of s that consists entirely of accept
 * and returns the length of the segment
 *
 * Return: pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
