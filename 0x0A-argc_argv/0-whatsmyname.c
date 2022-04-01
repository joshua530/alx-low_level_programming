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
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
