#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates the first occurrence in the string s of
 * any of the bytes in the string accept
 *
 * @s: string to be searched
 * @accept: string to locate
 *
 * Description: locates the first occurrence in the string s of
 * any of the bytes in the string accept
 *
 * Return: pointer to the first occurrence of accept in s or NULL
 */
unsigned int _strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
