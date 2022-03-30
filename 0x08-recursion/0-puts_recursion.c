#include "main.h"

/**
 * _puts_recursion - puts implementation
 *
 * @s: the string to print
 *
 * Description: prints out a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
		return;
	_putchar(s);
	_puts_recursion(++s);
}
