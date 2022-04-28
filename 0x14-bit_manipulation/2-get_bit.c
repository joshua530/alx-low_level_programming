#include "main.h"

/**
 * get_bit - gets bit at a given index
 *
 * @n: the binary number
 * @index: index whose bit is to be found
 *
 * Return: value of the bit at the index or -1 if error
 * occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	return (bit);
}
