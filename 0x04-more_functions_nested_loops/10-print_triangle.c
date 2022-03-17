#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @n: number of rows
 *
 * Description: prints a triangle
 *
 * Return: void
 */
void print_triangle(int n)
{
	int row;
	int spaces = n - 1;
	int pounds = 1;
	int s;
	int p;

	if (n > 0)
	{
		for (row = 1; row <= n; ++row)
		{
			for (s = spaces; s > 0; --s)
			{
				_putchar(' ');
			}
			for (p = 1; p <= pounds; ++p)
			{
				_putchar('#');
			}
			--spaces;
			++pounds;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
