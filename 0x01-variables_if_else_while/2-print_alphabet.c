#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Description: prints out all lowercase letters
 *
 * Return: exit code of the function
 */
int main(void)
{
	for (int i = 97; i < 123; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
