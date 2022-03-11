#include <stdio.h>

/**
 * main - prints alphabet lowercase letters
 *
 * Description: prints all lowercase alphabet letters in reverse
 *
 * Return: function's exit code
 */
int main(void)
{
	int i = 122;

	for (; i >= 97; --i)
		putchar(i);
	putchar('\n');
	return (0);
}
