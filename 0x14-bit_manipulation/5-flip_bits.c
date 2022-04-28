#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that should be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int tmp = n ^ m;
	int count = 0;

	while (tmp > 0)
	{
		++count;
		tmp &= (tmp - 1);
	}

	return count;
}
