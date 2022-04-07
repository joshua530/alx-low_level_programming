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
	mem = malloc(len * sizeof(int));
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < len; ++i)
	{
		mem[i] = min++;
	}

	return (mem);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
