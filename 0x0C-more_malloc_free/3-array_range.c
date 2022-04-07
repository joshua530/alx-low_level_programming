#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - generates and fills array with numbers within a given range
 *
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: NULL on failure and the generated array of numbers on success
 */
int *array_range(int min, int max)
{
	int len, i;
	int *mem;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	mem = malloc(len);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < len; ++i)
	{
		mem[i] = min++;
	}

	return (mem);
}
