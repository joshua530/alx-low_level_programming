#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints out random numbers
 *
 * Description: generates a random number and prints out whether it is
 * positive or negative
 *
 * Return: exit code of the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n");
	else
		printf("%d is positive\n");
	return (0);
}
