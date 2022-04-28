#include "main.h"

/**
 * set_bit - sets bit at a given index to 1
 *
 * @n: the base 2 number
 * @index: index of bit to set
 *
 * Return: 1 if operation succeeded, -1 if operation failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n | (1 << index));
	return (1);
}
