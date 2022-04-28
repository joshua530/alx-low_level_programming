#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary string to an integer
 *
 * @b: the binary string
 *
 * Return: the unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, j;
	unsigned int total = 0;

	if (b == NULL || strlen(b) == 0)
	{
		return (0);
	}

	len = strlen(b);

	/* i = power of two */
	/* j = counter to ensure we don't go past string bounds */
	for (i = 0, j = len - 1; j >= 0; ++i, --j)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
		{
			total += pow(2, i);
		}
	}

	return (total);
}
