#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: number of lines down
 *
 * Description: prints a diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
		{
			for (spaces = 1; spaces < i; ++spaces)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
