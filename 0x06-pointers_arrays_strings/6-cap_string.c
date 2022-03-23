#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes words in string
 *
 * @str: the string to capitalize
 *
 * Description: capitalizes words in string
 *
 * Return: pointer to the converted string
 */
char *cap_string(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; ++i)
	{
		if (isalpha(str[i]))
			str[i] = toupper(str[i]);
	}

	return (str);
}
