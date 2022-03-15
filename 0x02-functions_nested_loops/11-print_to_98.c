#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers till 98
 *
 * Description: returns the result of adding two numbers
 *
 * Return: void
 */
void print_to_98(int a)
{
	int i = a;

	for (; i <= 98; ++i)
	{
		if (i == a)
			printf("%d", i);
		else
			printf(",%3d", i);
	}
	printf("\n");
}
