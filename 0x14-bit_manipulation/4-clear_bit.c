#include "main.h"

/**
 * clear_bit - sets bit at index to zero
 *
 * @n: binary number
 * @index: index to clear
 *
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n & ~(1 << index));
	return (1);
}
