#include <stdio.h>

/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: array containing arguments passed to program
 *
 * Description: prints the name of the program
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
