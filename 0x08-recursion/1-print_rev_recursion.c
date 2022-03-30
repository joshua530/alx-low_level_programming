#include "main.h"

/**
 * print_char - helper function for _print_rev_recursion
 *
 * @s: current character
 * @current: current index
 *
 * Description: adds position tracking
 * Return: void
 */
void print_char(char *s, int current)
{
	if (*s == '\0')
	{
		return;
	}
	print_char(++s, current + 1);
	_putchar(*s);
	if (current == 0)
	{
		_putchar('\n');
	}
}

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
	print_char(s, 0);
}
