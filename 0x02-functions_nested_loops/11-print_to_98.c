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
			{
				if (i <= -100)
					printf(",%5d", i);
				else if (i <= -10)
					printf(",%4d", i);
				else if (i <= 0)
					printf(",%3d", i);
				else if (i <= 9)
					printf(",%2d", i);
				else if (i <= 99)
					printf(",%3d", i);
				else
					printf(",%4d", i);
			}
		}
	}
	else
	{
		for (; i >= 98; --i)
		{
			if (i == a)
				printf("%d", i);
			else
			{
				if (i >= 100)
					printf(",%4d", i);
				else
					printf(",%3d", i);
			}
		}
	}
	printf("\n");
}
