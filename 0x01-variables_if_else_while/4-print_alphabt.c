#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Description: prints out all lowercase letters except q and e
 *
 * Return: exit code of the function
 */
int main(void)
{
	int i = 97;

	for (; i < 123; ++i)
		if (i != 113 && i != 101)
			putchar(i);
	putchar('\n');
	return (0);
}
