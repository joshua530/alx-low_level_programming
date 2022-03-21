#include "main.h"

/**
 * swap_int - swaps two integer values
 *
 * @a: first integer
 * @b: second integer
 *
 * Description: swaps the values of a and b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
