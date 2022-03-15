#include "main.h"

/**
 * print_sign: checks num sign
 *
 * @i: number to check
 *
 * Description: checks num sign
 *
 * Return: 0, 1 or -1
 */
int print_sign(int i)
{
	if (i < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
