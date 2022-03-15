#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * jack_bauer - prints time
 *
 * Description: prints time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (; i < 24; ++i)
	{
		for (; j < 60; ++j)
		{
			printf("%02d:%02d\n", i, j);
		}
		j = 0;
	}
}
