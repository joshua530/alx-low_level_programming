#include "main.h"

/**
 * main - prints out a string
 *
 * Description - uses _putchar imported function to print out a string
 *
 * Return: the exit code of the program
 */
int main(void)
{
	char *string = "_putchar";
	int i = 0;

	for (; i < 8; ++i)
		_putchar(string[i]);
	_putchar('\n');
	return (0);
}
