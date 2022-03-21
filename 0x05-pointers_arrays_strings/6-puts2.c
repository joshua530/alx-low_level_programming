#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string to print
 *
 * Description: prints every other character of a string
 *
 * Return: void
 */
void puts2(char *str)
{
	char *tmp = str;

	while (*tmp != '\0' && *(tmp + 1) != '\0')
	{
		_putchar(*tmp);
		tmp += 2;
	}
}
