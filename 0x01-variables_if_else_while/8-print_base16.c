#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Description: prints all base 16 numbers in lowercase
 *
 * Return: function's exit code
 */
int main(void)
{
	int i = 0;

	for (; i < 16; ++i)
		printf("%x", i);
	putchar('\n');
	return (0);
}
