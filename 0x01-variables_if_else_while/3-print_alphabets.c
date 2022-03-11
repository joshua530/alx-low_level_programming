#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Description: prints out all lowercase letters followed by uppercase
 * letters
 *
 * Return: exit code of the function
 */
int main(void)
{
	int i = 97;

	for (; i < 123; ++i)
		putchar(i);
	for (int j = 65; j < 91; ++j)
		putchar(j);
	putchar('\n');
	return (0);
}
