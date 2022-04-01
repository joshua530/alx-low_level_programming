#include <stdio.h>

/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: array containing arguments passed to program
 *
 * Description: all arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
