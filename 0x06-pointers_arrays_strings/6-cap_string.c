#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool exists(char *haystack, char needle);

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
	char separators[] = {
			' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	len = strlen(str);
	for (i = 0; i < len; ++i)
	{
		/* we are at the beginning of a word */
		if (isalpha(str[i]) &&
				str[i] != '\0' &&
				(i > 0) &&										 /* prevent segmentation error */
				exists(separators, str[i - 1]) /* preceded by a punctuation character */
		)
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}

/**
 * exists - checks whether a character exists in a string
 *
 * @haystack: the string to search
 * @needle: the character to look for
 *
 * Description: looks for a character in a string
 *
 * Return: true if character exists, false if absent
 */
bool exists(char *haystack, char needle)
{
	int len;
	int i;

	len = strlen(haystack);
	for (i = 0; i < len; ++i)
	{
		if (haystack[i] == needle)
			return (true);
	}
	return (false);
}
