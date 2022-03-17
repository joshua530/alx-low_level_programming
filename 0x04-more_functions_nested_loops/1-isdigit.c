#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for digits
 *
 * @c: the value to be tested
 *
 * Description: checks whether a value is a digit
 *
 * Return: 0 if not digit, 1 if digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
