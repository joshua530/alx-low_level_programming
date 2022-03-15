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
			if (j > 0)
				printf(",%3d", i * j);
			else
				printf("%d", i * j);
		}
		printf("\n");
		j = 0;
	}
}
