#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: string to print
 *
 * Description: prints half of a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int mid;
	int len;
	int i;

	len = strlen(str);
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len - 1) / 2;

	i = mid;
	for (; i < len; ++i)
		_putchar(str[i]);
	_putchar('\n');
}
