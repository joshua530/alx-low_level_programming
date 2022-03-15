#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers till 98
 *
 * @a: the beginning point
 *
 * Description: returns the result of adding two numbers
 *
 * Return: void
 */
void print_to_98(int a)
{
	int i = a;

	if (i <= 98)
	{
		for (; i <= 98; ++i)
		{
			if (i == a)
				printf("%d", i);
			else
				printf(",%3d", i);
		}
	}
	else
	{
		for (; i >= 98; --i)
		{
			if (i == a)
				printf("%d", i);
			else
				printf(",%3d", i);
		}
	}
	printf("\n");
}
