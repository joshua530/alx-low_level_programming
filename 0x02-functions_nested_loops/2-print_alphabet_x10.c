#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Description: prints out all lowercase letters
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j = 0;
	int i = 97;

	for (; j < 10; ++j)
	{
		for (; i < 123; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
		i = 97;
	}
}
