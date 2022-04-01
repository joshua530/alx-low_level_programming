#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: array containing arguments passed to program
 *
 * Description: multiplies 2 numbers given as arguments
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int first, last;

	if (argv[1] && argv[2])
	{
		first = atoi(argv[1]);
		last = atoi(argv[2]);
		printf("%d-%d\n", first, last);
		printf("%d\n", first * last);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
