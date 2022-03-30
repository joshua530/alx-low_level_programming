#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the string to print
 *
 * Description: prints out a string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
