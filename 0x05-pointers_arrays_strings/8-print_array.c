#include "main.h"
#include <stdio.h>

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
			printf("%d", a[i]);
		}
		else
		{
			printf(",");
			if (tmp >= 1000000)
				printf("%8d", tmp);
			else if (tmp >= 100000)
				printf("%7d", tmp);
			else if (tmp >= 10000)
				printf("%6d", tmp);
			else if (tmp >= 1000)
				printf("%5d", tmp);
			else if (tmp >= 100)
				printf("%4d", tmp);
			else if (tmp >= 10)
				printf("%3d", tmp);
			else if (tmp >= 0)
				printf("%2d", tmp);
			else if (tmp >= -9)
				printf("%3d", tmp);
			else if (tmp >= -99)
				printf("%4d", tmp);
			else if (tmp >= -999)
				printf("%5d", tmp);
			else if (tmp >= -9999)
				printf("%6d", tmp);
			else if (tmp >= -99999)
				printf("%7d", tmp);
			else if (tmp >= -999999)
				printf("%8d", tmp);
		}
	}
	printf("\n");
}
