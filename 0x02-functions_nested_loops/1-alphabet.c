#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints out all lowercase letters
 *
 * Return: exit code of the function
 */
void print_alphabet(void)
{
	int i = 97;

	for (; i < 123; ++i)
		_putchar(i);
	_putchar('\n');
}
