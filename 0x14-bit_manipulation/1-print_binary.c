#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a number's binary representation
 *
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int final_result = 0, multiplier = 1;

	while (n != 0)
	{
		final_result += multiplier * (n & 1);
		n >>= 1;
		multiplier *= 10;
	}

	printf("%d\n", final_result);
}
