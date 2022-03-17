#include "main.h"

/**
 * print_line - prints numbers
 *
 * @n: number of dashes to print
 *
 * Description: prints a line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
