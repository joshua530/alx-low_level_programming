#include <stdio.h>

/**
 * main - prints base 10 numbers
 *
 * Description: prints all single digit base 10 numbers
 *
 * Return: function's exit code
 */
int main(void)
{
	int i = 0;

	for (; i < 10; ++i)
		printf("%d", i);
	putchar('\n');
	return (0);
}
