#include <stdio.h>

/**
 * main - prints base 10 numbers
 *
 * Description: prints all single digit base 10 numbers without using
 * any variable of type char
 *
 * Return: function's exit code
 */
int main(void)
{
	int i = 48;

	for (; i < 58; ++i)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
