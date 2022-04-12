#include "_putchar.c"

/**
 * main - prints out name of current file
 *
 * Return: 0
 */
int main(void)
{
	long unsigned int i;

	for (i = 0; i < sizeof(__FILE__); ++i)
	{
		_putchar(__FILE__[i]);
	}
	_putchar('\n');

	return (0);
}
