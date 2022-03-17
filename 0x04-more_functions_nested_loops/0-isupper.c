#include <ctype.h>
#include "main.h"

/**
 * _isupper - check for uppercase letters
 *
 * @c: the character to be tested
 *
 * Description: checks whether a letter is uppercase
 *
 * Return: 0 if not uppercase, 1 if uppercase
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
