#include "main.h"

/**
 * print_most_numbers - prints numbers
 *
 * Description: prints numbers from 0-9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int start;

	for (start = 48; start < 58; ++start)
	{
		if (start != 50 && start != 52)
			_putchar(start);
	}
	_putchar('\n');
}
