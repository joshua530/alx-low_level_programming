#include "main.h"

/**
 * factorial - finds the factorial of a given number
 *
 * @n: the number whose factorial is to be found
 *
 * Description: finds the factorial of a number
 * Return: factorial if found or -1 if number is invalid
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * (factorial(n - 1)));
}
