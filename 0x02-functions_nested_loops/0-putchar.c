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
	char string[9] = "_putchar";
	int i = 0;

	for (; i < 9; ++i)
		_putchar(string[i]);
	_putchar(13);
	return (0);
}
