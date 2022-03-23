#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to reverse
 * @n: length of array
 *
 * Description: reverses an array of integers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	for (i = 0, j = n - 1; i < j; ++i, --j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
