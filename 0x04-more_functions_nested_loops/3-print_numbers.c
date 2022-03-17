#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Description: prints numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	int start;

	for (start = 48; start < 58; ++start)
		_putchar(start);
	_putchar('\n');
}
