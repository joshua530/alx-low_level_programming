#include "main.h"
#include <stdio.h>

/**
 * printnum - prints number
 *
 * @n: number to print
 *
 * Description: prints number
 *
 * Return: void
 */
void printnum(int n)
{
	if (n >= 1000000)
		printf("%8d", n);
	else if (n >= 100000)
		printf("%7d", n);
	else if (n >= 10000)
		printf("%6d", n);
	else if (n >= 1000)
		printf("%5d", n);
	else if (n >= 100)
		printf("%4d", n);
	else if (n >= 10)
		printf("%3d", n);
	else if (n >= 0)
		printf("%2d", n);
	else if (n >= -9)
		printf("%3d", n);
	else if (n >= -99)
		printf("%4d", n);
	else if (n >= -999)
		printf("%5d", n);
	else if (n >= -9999)
		printf("%6d", n);
	else if (n >= -99999)
		printf("%7d", n);
	else if (n >= -999999)
		printf("%8d", n);
}

/**
 * print_array - prints n elements of an array of integers, followed
 * by a new line.
 *
 * @a: array to get numbers from
 * @n: number of elements to print
 *
 * Description: prints n elements of an array of integers, followed
 * by a new line.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; ++i)
	{
		tmp = a[i];
		if (i == 0)
		{
			printnum(tmp);
		}
		else
		{
			printf(",");
		}
	}
	printf("\n");
}
