#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds string length
 *
 * @s: string whose length is to be found
 *
 * Description: finds string length
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	char *current;

	current = s;
	while (*current != '\0')
	{
		++len;
		++current;
	}
	return len;
}
