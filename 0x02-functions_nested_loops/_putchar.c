#include <stdio.h>

/**
 * _putchar - prints out a string
 *
 * @str: the string to print out
 * @len: the length of the string to print out
 *
 * Description - prints out a string
 *
 * Return: the exit code of the program
 */
void _putchar(const char *str, int len)
{
	for (int i = 0; i < len; ++i)
		putchar(str[i]);
	putchar(13);
}
