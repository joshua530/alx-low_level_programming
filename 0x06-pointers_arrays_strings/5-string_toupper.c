#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - converts a string to uppercase
 *
 * @to_convert: the string to convert to uppercase
 *
 * Description: converts a string to uppercase
 *
 * Return: pointer to the converted string
 */
char *string_toupper(char *to_convert)
{
	int len;
	int i;

	len = strlen(to_convert);
	for (i = 0; i < len; ++i)
	{
		to_convert[i] = toupper(to_convert[i]);
	}

	return (to_convert);
}
