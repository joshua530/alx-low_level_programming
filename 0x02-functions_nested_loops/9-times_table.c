#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * times_table - prints multiplication table
 *
 * Description: prints multiplication table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	for (; i < 10; ++i)
	{
		for (; j < 10; ++j)
		{
			printf("%d", i * j);
			if (j < 9)
				printf(",  ");
		}
		printf("\n");
		j = 0;
	}
}
